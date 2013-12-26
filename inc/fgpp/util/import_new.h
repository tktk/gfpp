#ifndef FGPP_UTIL_IMPORT_NEW_H
#define FGPP_UTIL_IMPORT_NEW_H

#include "fgpp/util/import.h"

#ifndef FGPP_DEFINE_FUNCTION

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

#endif  // FGPP_DEFINE_FUNCTION

#endif  // FGPP_UTIL_IMPORT_NEW_H
