#ifndef __Krieg_Core_h__
#define __Krieg_Core_h__

#include "Krieg_platform.h"
#if __Krieg_platform == __Krieg_win3_platform || __Krieg_platform == __Krieg_win6_platform
#  include "Krieg_Windows.h"
#elseif __Krieg_platform == __Krieg_linx3_platform || __Krieg_platform == __Krieg_linx6_platform
#  include "Krieg_Linux.h"
#endif // __Krieg_platform


#endif // __Krieg_Core_h__
