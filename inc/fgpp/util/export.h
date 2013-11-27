#ifndef FGPP_UTIL_EXPORT_H
#define FGPP_UTIL_EXPORT_H

#if defined OS_LINUX    // OS
#   define FGPPEXPORT extern __attribute__( ( visibility( "default" ) ) )
#elif defined OS_WINDOWS    // OS
#   define FGPPEXPORT extern __declspec( dllexport )
#else   // OS
#   error 未対応のOS
#endif  // OS

#endif  // FGPP_UTIL_EXPORT_H
