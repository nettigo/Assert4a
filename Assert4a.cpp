// Assert4a.cpp - assert macro wrapper for Arduino IDE

// Written on the basis of:
// Arduino forum: "Macro for assert"
// http://forum.arduino.cc/index.php?topic=99607.0
// jlesech's Github - Gist "assert.ino"
// https://gist.github.com/jlesech/3089916

#include "Arduino.h"
#include "Assert4a.h"

void __assert(const char *__func, const char *__file, int __lineno, const char *__sexp)
{
  if (!Serial)
  {
    while (!Serial);
    Serial.begin(9600);
  }

  Serial.print(F("Assertion: '"));
  Serial.print(__sexp);
  Serial.println(F("' failed"));
  Serial.print(F("  File '"));
  Serial.print(__file);
  Serial.print(F("', at line "));
  Serial.print(__lineno);
  Serial.print(F(", in function '"));
  Serial.print(__func);
  Serial.println(F("'"));
  Serial.flush();

  abort();
}