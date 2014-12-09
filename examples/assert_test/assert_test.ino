#include <Assert4a.h>

void setup() {
  while (!Serial);
  Serial.begin(9600);

}

void loop() {
  assert(2==3);

}
