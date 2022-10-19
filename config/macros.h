/ { 
    macros {
      
        unstick: unstick {
            label = "ZM_unstick";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&kp LSHIFT &kp RSHIFT &kp LCTRL &kp RCTRL &kp LALT &kp RALT &kp LGUI &kp RGUI>;
        };
        agave: agave {
            label = "ZM_agave";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&kp A &kp G &kp A &kp V &kp E &kp RET>;
        };
        sol: sol {
            label = "ZM_sol";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&kp S &kp O &kp L &kp RET>;
        };
        sui: sui {
            label = "ZM_sui";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&kp COLN &kp S &kp U &kp I>;
        };
        sus: sus {
            label = "ZM_sus";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&kp COLN &kp S &kp U &kp S>;
        };
        sua: sua {
            label = "ZM_sua";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings = <&kp COLN &kp S &kp U &kp A>;
        };
    };
};