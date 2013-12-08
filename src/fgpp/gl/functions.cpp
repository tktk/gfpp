#include "fgpp/util/export.h"
#include "fgpp/gl/functions.h"

#define GL_DEFINE_FUNCTION( _proc, _name, _returnType, ... ) \
    _returnType gl##_name( __VA_ARGS__ ) { _proc }
#define FGPP_GL_FUNCTION_NUM( _name, _returnType, ... ) \
    GL_DEFINE_FUNCTION( return 0;, _name, _returnType, __VA_ARGS__ )
#define FGPP_GL_FUNCTION_PTR( _name, _returnType, ... ) \
    GL_DEFINE_FUNCTION( return nullptr;, _name, _returnType, __VA_ARGS__ )
#define FGPP_GL_FUNCTION_VOID( _name, ... ) \
    GL_DEFINE_FUNCTION( , _name, void, __VA_ARGS__ )
namespace fg {
    FGPP_GL_FUNCTIONS
}
#undef  FGPP_GL_FUNCTION_VOID
#undef  FGPP_GL_FUNCTION_PTR
#undef  FGPP_GL_FUNCTION_NUM
#undef  GL_DEFINE_FUNCTION
