#include "hwlib.hpp"



int main(){
    // hwlib::target::window w(hwlib::xy(128,64));

    auto scl = hwlib::target::pin_oc(hwlib::target::pins::scl);
   auto sda = hwlib::target::pin_oc(hwlib::target::pins::sda);
   auto i2c_bus = hwlib::i2c_bus_bit_banged_scl_sda(scl, sda);

   auto w = hwlib::glcd_oled(i2c_bus);
   w.clear();


    // for(;;){
    //     w.poll();
    // }
    
}