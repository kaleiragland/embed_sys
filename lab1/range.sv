module range
   #(parameter
     RAM_WORDS = 16,            // Number of counts to store in RAM
     RAM_ADDR_BITS = 4)         // Number of RAM address bits
   (input logic         clk,    // Clock
    input logic 	go,     // Read start and start testing
    input logic [31:0] 	start,  // Number to start from or count to read
    output logic 	done,   // True once memory is filled
    output logic [15:0] count); // Iteration count once finished

   logic 		cgo;    // "go" for the Collatz iterator
   logic                cdone;  // "done" from the Collatz iterator
   logic [31:0] 	n;      // number to start the Collatz iterator

// verilator lint_off PINCONNECTEMPTY
   
   // Instantiate the Collatz iterator
   collatz c1(.clk(clk),
	      .go(cgo),
	      .n(n),
	      .done(cdone),
	      .dout());

   logic [RAM_ADDR_BITS - 1:0] 	 num;         // The RAM address to write
   // logic 			 running = 0; // True during the iterations

   /* Replace this comment and the code below with your solution,
      which should generate running, done, cgo, n, num, we, and din */
   // assign done = cdone;
   // assign cgo = go;
   // assign n = start;
   // assign din = 16'h0;
   // assign num = 0;
   // assign we = running;   
   /* Replace this comment and the code above with your solution */

   logic 			 we;                       // enable write    
   logic [15:0] 		 din;                   // Data to write
   logic [15:0] 		 mem[RAM_WORDS - 1:0];  // The RAM itself

   logic running;
   logic starting;
   logic counting;
   logic writing;
   logic advancing;
   logic [31:0] index;
   logic wait_cycle; // one cycle delay after asserting cgo
   
   logic [31:0] base;  // store start val
   assign n = base + index; // cur val sent to collatz when cgo is pulsed

   logic [RAM_ADDR_BITS - 1:0] 	 addr;   // read addr
   assign addr = start[RAM_ADDR_BITS-1:0];
   // assign addr = we ? num : start[RAM_ADDR_BITS-1:0];


   always_ff @(posedge clk) begin
      cgo <= 0;
      done <= 0;
      we <= 0;

      if (running == 0) begin
         if (go == 1) begin
            running <= 1;
            starting <= 1;
            counting <= 0;
            writing <= 0;
            advancing <= 0;
            wait_cycle <= 0;   // clear wait state for new run


            base <= start;
            index <= 0;
            num <= 0;
         end
      end else if (starting == 1) begin
         starting <= 0;
         wait_cycle <= 1;
         cgo <= 1;      
         din <= 1;
      end else if (wait_cycle == 1) begin
         wait_cycle <= 0;
         counting <= 1;
      end else if (counting == 1) begin
         if (cdone == 0) begin
            din <= din + 1;
         end else begin
            counting <= 0;
            writing <= 1;
         end
      end else if (writing == 1) begin
         we <= 1;

         writing <= 0;
         advancing <= 1;
      end else if (advancing == 1) begin
         if (index == RAM_WORDS - 1) begin
            advancing <= 0;
            running <= 0;

            done <= 1;
         end else begin
            advancing <= 0;
            starting <= 1;

            index <= index + 1;
            num <= num + 1;
            din <= 0;  // resets counter for next number
         end
      end 
   end

   
   always_ff @(posedge clk) begin
   if (we) mem[num] <= din;   
   count <= mem[addr];       
   end


endmodule
	     


