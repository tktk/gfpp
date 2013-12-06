#include "fgpp/util/export.h"
#include "fgpp/gl/functions.h"

#define GL_DEFINE_FUNCTION( _dummyReturnValue, _returnType, _name, _args, _argValues ) \
    _returnType gl##_name _args \
    { \
        return _dummyReturnValue; \
    } \

#define FGPP_GL_FUNCTION GL_DEFINE_FUNCTION
namespace fg {
    FGPP_GL_FUNCTIONS
}
#undef  FGPP_GL_FUNCTION

#undef  GL_DEFINE_FUNCTION
