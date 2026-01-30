// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrange.h for the primary calling header

#include "Vrange__pch.h"

VL_ATTR_COLD void Vrange___024root___eval_static(Vrange___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrange___024root___eval_static\n"); );
    Vrange__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vrange___024root___eval_initial(Vrange___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrange___024root___eval_initial\n"); );
    Vrange__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vrange___024root___eval_final(Vrange___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrange___024root___eval_final\n"); );
    Vrange__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vrange___024root___eval_settle(Vrange___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrange___024root___eval_settle\n"); );
    Vrange__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vrange___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrange___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrange___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vrange___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrange___024root___ctor_var_reset(Vrange___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrange___024root___ctor_var_reset\n"); );
    Vrange__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->go = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9942418676787815235ull);
    vlSelf->start = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9867861323841650631ull);
    vlSelf->done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10296494685231209730ull);
    vlSelf->count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10730142128712957955ull);
    vlSelf->range__DOT__cgo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4379999920339108339ull);
    vlSelf->range__DOT__cdone = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12581039484530685089ull);
    vlSelf->range__DOT__num = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2799255514935540747ull);
    vlSelf->range__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15380956425345825180ull);
    vlSelf->range__DOT__din = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1814400464142951486ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->range__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3085873439144697956ull);
    }
    vlSelf->range__DOT__running = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17657834207446911077ull);
    vlSelf->range__DOT__starting = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8265682528286035653ull);
    vlSelf->range__DOT__counting = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7381036397045129645ull);
    vlSelf->range__DOT__writing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4763369609701201129ull);
    vlSelf->range__DOT__advancing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 724369693677838551ull);
    vlSelf->range__DOT__index = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 218708998201015126ull);
    vlSelf->range__DOT__wait_cycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7470503974975255022ull);
    vlSelf->range__DOT__base = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12126591880458538177ull);
    vlSelf->range__DOT__c1__DOT__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5685290967489692436ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
