module collatz( input logic         clk,   // Clock
		input logic 	    go,    // Load value from n; start iterating
		input logic  [31:0] n,     // Start value; only read when go = 1
		output logic [31:0] dout,  // Iteration value: true after go = 1
		output logic 	    done); // True when dout reaches 1

   /* Replace this comment and the code below with your solution */
   // always_ff @(posedge clk) begin
   //   done <= go;
   //   dout <= n;
   // end
   /* Replace this comment and the code above with your solution */

   always_ff @(posedge clk) begin
      if (go == 1) begin
         dout <= n;
         done <= 0;
      end else if (done == 1) begin
         dout <= dout;
         done <= done;
      end else if (dout == 1) begin
         dout <= dout;
         done <= done;
      end else if (dout[0] == 0) begin
         dout <= dout / 2;

         if (dout / 2 == 1)
            done <= 1;
      end else begin
         dout <= dout * 3 + 1;

         if (dout * 3 + 1 == 1)
            done <= 1;
      end
   end

endmodule
