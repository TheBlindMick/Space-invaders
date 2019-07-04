#include "hwlib.hpp"
#include "mpu6050.hpp"
#include "ostream"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"


TEST_CASE("Struct sensordata constructor"){
    uint8_t x = 10;
    uint8_t y = 20;
    uint8_t z = 35;
    sensordata j(x,y,z);
    REQUIRE(j.x == x);
    REQUIRE(j.y == y);
    REQUIRE(j.z == z);
}


TEST_CASE("Struct sensordata ==operator"){
    sensordata a(4,5,6);
    sensordata b(4,5,6);
    REQUIRE(a==b);
}