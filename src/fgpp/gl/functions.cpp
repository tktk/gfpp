#include "fgpp/util/export.h"
#include "fgpp/gl/functions.h"

#define GL_DEFINE_FUNCTION( _dummyReturnValue, _returnType, _name, _args, _argValues ) \
    _returnType gl##_name _args \
    { \
        return _dummyReturnValue; \
    } \

#define FGPP_GL_VOID_FUNCTION( _name, _args, _argValues ) \
    FGPP_GL_FUNCTION( , void, _name, _args, _argValues )

#define FGPP_GL_FUNCTION GL_DEFINE_FUNCTION
namespace fg {
    FGPP_GL_FUNCTIONS
}
#undef  FGPP_GL_FUNCTION

#undef  FGPP_GL_VOID_FUNCTION

#undef  GL_DEFINE_FUNCTION
