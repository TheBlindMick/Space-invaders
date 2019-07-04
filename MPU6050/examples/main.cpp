#include "../mpu6050.hpp"
#include "hwlib.hpp"

int main(){
    auto scl = hwlib::target::pin_oc(hwlib::target::pins::scl);
    auto sda = hwlib::target::pin_oc(hwlib::target::pins::sda);
    auto i2c_bus = hwlib::i2c_bus_bit_banged_scl_sda(scl, sda);
    sensor sensor1(i2c_bus);
    
    sensor1.setFIFO(true);
    sensor1.setFIFOTemp(true);
    for(;;){
        hwlib::cout << sensor1.readAccel();
        hwlib::cout << sensor1.readGyro();
        hwlib::cout << sensor1.readFIFO();
    }
}