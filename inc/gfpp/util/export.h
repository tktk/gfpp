#ifndef GFPP_UTIL_EXPORT_H
#define GFPP_UTIL_EXPORT_H

#if defined OS_LINUX    // OS
#   define GFPPEXPORT extern __attribute__( ( visibility( "default" ) ) )
#elif defined OS_WINDOWS    // OS
#   define GFPPEXPORT extern __declspec( dllexport )
#else   // OS
#   error 未対応のOS
#endif  // OS

#endif  // GFPP_UTIL_EXPORT_H
