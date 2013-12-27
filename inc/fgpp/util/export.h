#ifndef FGPP_UTIL_EXPORT_H
#define FGPP_UTIL_EXPORT_H

#include "fgpp/util/exportcommon.h"

#define FGPP_DECLARE_FUNCTION( _func ) \
    FGPPEXPORT _func;
#define FGPP_FUNCTION( _func, _dummyProc ) \
    FGPP_DECLARE_FUNCTION( _func )
#define FGPP_FUNCTION_VOID( _func ) \
    FGPP_DECLARE_FUNCTION( _func )
#define FGPP_FUNCTION_NUM( _func ) \
    FGPP_DECLARE_FUNCTION( _func )
#define FGPP_FUNCTION_PTR( _func ) \
    FGPP_DECLARE_FUNCTION( _func )
#define FGPP_FUNCTION_BOOL( _func ) \
    FGPP_DECLARE_FUNCTION( _func )
#define FGPP_FUNCTION_REF( _func, _type ) \
    FGPP_DECLARE_FUNCTION( _func )

#endif  // FGPP_UTIL_EXPORT_H
