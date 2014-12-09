// Assert4a.h - assert macro wrapper for Arduino IDE

// Written on the basis of:
// Arduino forum: "Macro for assert"
// http://forum.arduino.cc/index.php?topic=99607.0
// jlesech's Github - Gist "assert.ino"
// https://gist.github.com/jlesech/3089916


#ifndef _Assert4a_h_
#define _Assert4a_h_

#define __ASSERT_USE_STDERR
#include <assert.h>

void __assert(const char *__func, const char *__file, int __lineno, const char *__sexp);

#endif