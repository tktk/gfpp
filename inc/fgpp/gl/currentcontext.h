#ifndef FGPP_GL_CURRENTCONTEXT_H
#define FGPP_GL_CURRENTCONTEXT_H

namespace fg {
    struct GLCurrentContext;
}

#include "fgpp/gl/context.h"
#include "fgpp/gl/functions.h"
#include "fgpp/window/window.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT GLCurrentContext * getOrNewGLCurrentContext(
        GLContext &
        , Window &
    );

    FGPPEXPORT void free(
        GLCurrentContext &
    );

    FGPPEXPORT void swapBuffers(
        GLCurrentContext &
    );
}

#define FGPP_GL_FUNCTION( _name, _returnType, ... ) \
    _returnType gl##_name( GLCurrentContext & __VA_ARGS__ )

#define GL_DECLARE_FUNCTION( _name, _returnType, ... ) \
    FGPPEXPORT FGPP_GL_FUNCTION( _name, _returnType, __VA_ARGS__ );
#define FGPP_GL_FUNCTION_NUM( _name, _returnType, ... ) \
    GL_DECLARE_FUNCTION( _name, _returnType, __VA_ARGS__ )
#define FGPP_GL_FUNCTION_PTR( _name, _returnType, ... ) \
    GL_DECLARE_FUNCTION( _name, _returnType, __VA_ARGS__ )
#define FGPP_GL_FUNCTION_VOID( _name, ... ) \
    GL_DECLARE_FUNCTION( _name, void, __VA_ARGS__ )
namespace fg {
    FGPP_GL_FUNCTIONS
}
#undef  FGPP_GL_FUNCTION_VOID
#undef  FGPP_GL_FUNCTION_PTR
#undef  FGPP_GL_FUNCTION_NUM
#undef  GL_DECLARE_FUNCTION

#endif  // FGPP_GL_CURRENTCONTEXT_H
