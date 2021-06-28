#include <Wire.h>
#include <Adafruit_MLX90614.h>

#define I2C_ADDR 0x27 //I2C adress, you should use the code to scan the adress first (0x27) here

Adafruit_MLX90614 mlx = Adafruit_MLX90614();

void setup() {
  
  mlx.begin();

}

void loop() {
 serial.print("Ambient ");
 serial.println(mlx.readAmbientTempC());
 serial.print(" C");

 serial.print("Target  ");
 serial.println(mlx.readObjectTempC());
 serial.print(" C");

 delay(1000);

}
