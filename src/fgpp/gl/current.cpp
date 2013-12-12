#include "fgpp/util/export.h"
#include "fgpp/gl/current.h"

#include "fgpp/gl/context.h"
#include "fgpp/gl/functions.h"
#include "fgpp/window/window.h"
#include "fgpp/common/primitives.h"

namespace fg {
    GLCurrent * getOrNewGLCurrent(
        GLContext &
        , Window &
    )
    {
        return nullptr;
    }

    void free(
        GLCurrent &
    )
    {
    }

    void swapBuffers(
        GLCurrent &
    )
    {
    }
}

#define GL_DEFINE_FUNCTION( _proc, _name, _returnType, _args ) \
    FGPP_GL_FUNCTION( _name, _returnType, _args ) { _proc }
#define FGPP_GL_FUNCTION_NUM( _name, _returnType, _args, _values ) \
    GL_DEFINE_FUNCTION( return 0;, _name, _returnType, _args )
#define FGPP_GL_FUNCTION_PTR( _name, _returnType, _args, _values ) \
    GL_DEFINE_FUNCTION( return nullptr;, _name, _returnType, _args )
#define FGPP_GL_FUNCTION_VOID( _name, _args, _values ) \
    GL_DEFINE_FUNCTION( , _name, void, _args )
namespace fg {
    FGPP_GL_FUNCTIONS
}
#undef  FGPP_GL_FUNCTION_VOID
#undef  FGPP_GL_FUNCTION_PTR
#undef  FGPP_GL_FUNCTION_NUM
#undef  GL_DEFINE_FUNCTION
