#include "fgpp/util/export.h"
#include "fgpp/gl/currentcontext.h"

#include "fgpp/gl/context.h"
#include "fgpp/gl/functions.h"
#include "fgpp/window/window.h"
#include "fgpp/common/primitives.h"

namespace fg {
    GLCurrentContext * getOrNewGLCurrentContext(
    )
    {
        return nullptr;
    }

    void free(
        GLCurrentContext &
    )
    {
    }

    Bool change(
        GLCurrentContext &
        , GLContext &
        , Window &
    )
    {
        return false;
    }

    void swapBuffers(
        GLCurrentContext &
    )
    {
    }
}

#define GL_DEFINE_FUNCTION( _proc, _name, _returnType, ... ) \
    FGPP_GL_FUNCTION( _name, _returnType, __VA_ARGS__ ) { _proc }
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
