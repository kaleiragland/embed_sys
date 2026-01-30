// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrange.h for the primary calling header

#include "Vrange__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrange___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vrange___024root___eval_triggers__act(Vrange___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrange___024root___eval_triggers__act\n"); );
    Vrange__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrange___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vrange___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrange___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vrange___024root___nba_sequent__TOP__0(Vrange___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrange___024root___nba_sequent__TOP__0\n"); );
    Vrange__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__range__DOT__wait_cycle;
    __Vdly__range__DOT__wait_cycle = 0;
    SData/*15:0*/ __Vdly__range__DOT__din;
    __Vdly__range__DOT__din = 0;
    CData/*0:0*/ __Vdly__range__DOT__counting;
    __Vdly__range__DOT__counting = 0;
    CData/*0:0*/ __Vdly__range__DOT__writing;
    __Vdly__range__DOT__writing = 0;
    CData/*0:0*/ __Vdly__range__DOT__advancing;
    __Vdly__range__DOT__advancing = 0;
    IData/*31:0*/ __Vdly__range__DOT__c1__DOT__dout;
    __Vdly__range__DOT__c1__DOT__dout = 0;
    CData/*0:0*/ __Vdly__range__DOT__cdone;
    __Vdly__range__DOT__cdone = 0;
    SData/*15:0*/ __VdlyVal__range__DOT__mem__v0;
    __VdlyVal__range__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__range__DOT__mem__v0;
    __VdlyDim0__range__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__range__DOT__mem__v0;
    __VdlySet__range__DOT__mem__v0 = 0;
    // Body
    __Vdly__range__DOT__wait_cycle = vlSelfRef.range__DOT__wait_cycle;
    __Vdly__range__DOT__din = vlSelfRef.range__DOT__din;
    __Vdly__range__DOT__counting = vlSelfRef.range__DOT__counting;
    __Vdly__range__DOT__writing = vlSelfRef.range__DOT__writing;
    __Vdly__range__DOT__advancing = vlSelfRef.range__DOT__advancing;
    __VdlySet__range__DOT__mem__v0 = 0U;
    __Vdly__range__DOT__c1__DOT__dout = vlSelfRef.range__DOT__c1__DOT__dout;
    __Vdly__range__DOT__cdone = vlSelfRef.range__DOT__cdone;
    if (vlSelfRef.range__DOT__we) {
        __VdlyVal__range__DOT__mem__v0 = vlSelfRef.range__DOT__din;
        __VdlyDim0__range__DOT__mem__v0 = vlSelfRef.range__DOT__num;
        __VdlySet__range__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.range__DOT__cgo) {
        __Vdly__range__DOT__c1__DOT__dout = (vlSelfRef.range__DOT__base 
                                             + vlSelfRef.range__DOT__index);
        __Vdly__range__DOT__cdone = 0U;
    } else if (vlSelfRef.range__DOT__cdone) {
        __Vdly__range__DOT__c1__DOT__dout = vlSelfRef.range__DOT__c1__DOT__dout;
        __Vdly__range__DOT__cdone = vlSelfRef.range__DOT__cdone;
    } else if ((1U == vlSelfRef.range__DOT__c1__DOT__dout)) {
        __Vdly__range__DOT__c1__DOT__dout = vlSelfRef.range__DOT__c1__DOT__dout;
        __Vdly__range__DOT__cdone = vlSelfRef.range__DOT__cdone;
    } else if ((1U & vlSelfRef.range__DOT__c1__DOT__dout)) {
        __Vdly__range__DOT__c1__DOT__dout = ((IData)(1U) 
                                             + ((IData)(3U) 
                                                * vlSelfRef.range__DOT__c1__DOT__dout));
        if ((1U == ((IData)(1U) + ((IData)(3U) * vlSelfRef.range__DOT__c1__DOT__dout)))) {
            __Vdly__range__DOT__cdone = 1U;
        }
    } else {
        __Vdly__range__DOT__c1__DOT__dout = VL_SHIFTR_III(32,32,32, vlSelfRef.range__DOT__c1__DOT__dout, 1U);
        if ((1U == VL_SHIFTR_III(32,32,32, vlSelfRef.range__DOT__c1__DOT__dout, 1U))) {
            __Vdly__range__DOT__cdone = 1U;
        }
    }
    vlSelfRef.count = vlSelfRef.range__DOT__mem[(0x0000000fU 
                                                 & vlSelfRef.start)];
    vlSelfRef.range__DOT__c1__DOT__dout = __Vdly__range__DOT__c1__DOT__dout;
    if (__VdlySet__range__DOT__mem__v0) {
        vlSelfRef.range__DOT__mem[__VdlyDim0__range__DOT__mem__v0] 
            = __VdlyVal__range__DOT__mem__v0;
    }
    vlSelfRef.range__DOT__cgo = 0U;
    vlSelfRef.done = 0U;
    vlSelfRef.range__DOT__we = 0U;
    if (vlSelfRef.range__DOT__running) {
        if (vlSelfRef.range__DOT__starting) {
            vlSelfRef.range__DOT__starting = 0U;
            __Vdly__range__DOT__wait_cycle = 1U;
            vlSelfRef.range__DOT__cgo = 1U;
            __Vdly__range__DOT__din = 1U;
        } else if (vlSelfRef.range__DOT__wait_cycle) {
            __Vdly__range__DOT__wait_cycle = 0U;
            __Vdly__range__DOT__counting = 1U;
        } else if (vlSelfRef.range__DOT__counting) {
            if (vlSelfRef.range__DOT__cdone) {
                __Vdly__range__DOT__counting = 0U;
                __Vdly__range__DOT__writing = 1U;
            } else {
                __Vdly__range__DOT__din = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.range__DOT__din)));
            }
        } else if (vlSelfRef.range__DOT__writing) {
            vlSelfRef.range__DOT__we = 1U;
            __Vdly__range__DOT__writing = 0U;
            __Vdly__range__DOT__advancing = 1U;
        } else if (vlSelfRef.range__DOT__advancing) {
            if ((0x0000000fU == vlSelfRef.range__DOT__index)) {
                __Vdly__range__DOT__advancing = 0U;
                vlSelfRef.range__DOT__running = 0U;
                vlSelfRef.done = 1U;
            } else {
                vlSelfRef.range__DOT__index = ((IData)(1U) 
                                               + vlSelfRef.range__DOT__index);
                vlSelfRef.range__DOT__num = (0x0000000fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.range__DOT__num)));
                __Vdly__range__DOT__advancing = 0U;
                vlSelfRef.range__DOT__starting = 1U;
                __Vdly__range__DOT__din = 0U;
            }
        }
    } else if (vlSelfRef.go) {
        vlSelfRef.range__DOT__index = 0U;
        vlSelfRef.range__DOT__num = 0U;
        vlSelfRef.range__DOT__running = 1U;
        vlSelfRef.range__DOT__starting = 1U;
        __Vdly__range__DOT__counting = 0U;
        __Vdly__range__DOT__writing = 0U;
        __Vdly__range__DOT__advancing = 0U;
        __Vdly__range__DOT__wait_cycle = 0U;
        vlSelfRef.range__DOT__base = vlSelfRef.start;
    }
    vlSelfRef.range__DOT__wait_cycle = __Vdly__range__DOT__wait_cycle;
    vlSelfRef.range__DOT__counting = __Vdly__range__DOT__counting;
    vlSelfRef.range__DOT__cdone = __Vdly__range__DOT__cdone;
    vlSelfRef.range__DOT__writing = __Vdly__range__DOT__writing;
    vlSelfRef.range__DOT__din = __Vdly__range__DOT__din;
    vlSelfRef.range__DOT__advancing = __Vdly__range__DOT__advancing;
}

void Vrange___024root___eval_nba(Vrange___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrange___024root___eval_nba\n"); );
    Vrange__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vrange___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vrange___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrange___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vrange___024root___eval_phase__act(Vrange___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrange___024root___eval_phase__act\n"); );
    Vrange__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrange___024root___eval_triggers__act(vlSelf);
    Vrange___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vrange___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrange___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vrange___024root___eval_phase__nba(Vrange___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrange___024root___eval_phase__nba\n"); );
    Vrange__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vrange___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vrange___024root___eval_nba(vlSelf);
        Vrange___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vrange___024root___eval(Vrange___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrange___024root___eval\n"); );
    Vrange__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vrange___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("range.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vrange___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("range.sv", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vrange___024root___eval_phase__act(vlSelf));
    } while (Vrange___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vrange___024root___eval_debug_assertions(Vrange___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrange___024root___eval_debug_assertions\n"); );
    Vrange__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.go & 0xfeU)))) {
        Verilated::overWidthError("go");
    }
}
#endif  // VL_DEBUG
