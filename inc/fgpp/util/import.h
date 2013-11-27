#ifndef FGPP_UTIL_IMPORT_H
#define FGPP_UTIL_IMPORT_H

#ifndef FGPPEXPORT
#   if defined OS_LINUX // OS
#       define FGPPEXPORT extern
#   elif defined OS_WINDOWS // OS
#       define FGPPEXPORT extern __declspec( dllimport )
#   else    // OS
#       error 未対応のOS
#   endif   // OS
#endif  // FGPPEXPORT

#endif  // FGPP_UTIL_IMPORT_H
