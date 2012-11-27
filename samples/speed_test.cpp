/**
 * This file is part of EasyLogging++ samples
 * Demonstration of how fast can EasyLogging++ log
 * @author mkhan3189
 */
#include "../easylogging++.h"
FUNC(int, main, (void))
  STATUS("PROGRAM STARTED");
  for (long i = 1; i <= 10000000; i++) {
    INFO("This is a info test");
  }
  STATUS("PROGRAM ENDED");
END_FUNC

