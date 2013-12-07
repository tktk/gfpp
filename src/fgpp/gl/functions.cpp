#include "fgpp/util/export.h"
#include "fgpp/gl/functions.h"

#define GL_DEFINE_FUNCTION( _returnType, _name, _args, _proc ) \
    _returnType gl##_name _args \
    { \
        _proc \
    } \

#define FGPP_GL_FUNCTION( _dummyReturnValue, _returnType, _name, _args, _argValues ) \
    GL_DEFINE_FUNCTION( _returnType, _name, _args, return _dummyReturnValue; )

#define FGPP_GL_VOID_FUNCTION( _name, _args, _argValues ) \
    GL_DEFINE_FUNCTION( void, _name, _args, )

namespace fg {
    FGPP_GL_FUNCTIONS
}

#undef  FGPP_GL_VOID_FUNCTION

#undef  FGPP_GL_FUNCTION

#undef  GL_DEFINE_FUNCTION
