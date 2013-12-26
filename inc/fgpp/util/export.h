﻿#ifndef FGPP_UTIL_EXPORT_H
#define FGPP_UTIL_EXPORT_H

#if defined OS_LINUX    // OS
#   define FGPPEXPORT extern __attribute__( ( visibility( "default" ) ) )
#elif defined OS_WINDOWS    // OS
#   define FGPPEXPORT extern __declspec( dllexport )
#else   // OS
#   error 未対応のOS
#endif  // OS

#define FGPP_DEFINE_FUNCTION( _func, _dummyProc ) \
    FGPPEXPORT _func { _dummyProc };
#define FGPP_FUNCTION( _func, _dummyProc ) \
    FGPP_DEFINE_FUNCTION( _func, _dummyProc )
#define FGPP_FUNCTION_VOID( _func ) \
    FGPP_DEFINE_FUNCTION( _func, )
#define FGPP_FUNCTION_NUM( _func ) \
    FGPP_DEFINE_FUNCTION( _func, return 0; )
#define FGPP_FUNCTION_PTR( _func ) \
    FGPP_DEFINE_FUNCTION( _func, return nullptr; )
#define FGPP_FUNCTION_BOOL( _func ) \
    FGPP_DEFINE_FUNCTION( _func, return false; )
#define FGPP_FUNCTION_REF( _func, _type ) \
    FGPP_DEFINE_FUNCTION( _func, _type * tmp = nullptr; return *tmp; )

#endif  // FGPP_UTIL_EXPORT_H
