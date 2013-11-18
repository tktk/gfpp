#ifndef GFPP_UTIL_IMPORT_H
#define GFPP_UTIL_IMPORT_H

#ifndef GFPPEXPORT
#   if defined OS_LINUX // OS
#       define GFPPEXPORT
#   elif defined OS_WINDOWS // OS
#       define GFPPEXPORT __declspec( dllimport )
#   else    // OS
#       error 未対応のOS
#   endif   // OS
#endif  // GFPPEXPORT

#endif  // GFPP_UTIL_IMPORT_H
