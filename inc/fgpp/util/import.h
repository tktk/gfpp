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

#   define FGPP_DECLARE_FUNCTION( _func ) \
        FGPPEXPORT _func;
#   define FGPP_FUNCTION( _func, _dummyProc ) \
        FGPP_DECLARE_FUNCTION( _func )
#   define FGPP_FUNCTION_VOID( _func ) \
        FGPP_DECLARE_FUNCTION( _func )
#   define FGPP_FUNCTION_NUM( _func ) \
        FGPP_DECLARE_FUNCTION( _func )
#   define FGPP_FUNCTION_PTR( _func ) \
        FGPP_DECLARE_FUNCTION( _func )
#   define FGPP_FUNCTION_BOOL( _func ) \
        FGPP_DECLARE_FUNCTION( _func )
#   define FGPP_FUNCTION_REF( _func, _type ) \
        FGPP_DECLARE_FUNCTION( _func )

#endif  // FGPPEXPORT

#endif  // FGPP_UTIL_IMPORT_H
