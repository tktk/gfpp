#ifndef FGPP_GL_CURRENT_H
#define FGPP_GL_CURRENT_H

#include "fgpp/def/gl/current.h"
#include "fgpp/def/gl/context.h"
#include "fgpp/def/gl/functions.h"
#include "fgpp/def/window/window.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPP_FUNCTION_PTR(
        GLCurrent * getOrNewGLCurrent(
            GLContext &
            , Window &
        )
    )

    FGPP_FUNCTION_VOID(
        void free(
            GLCurrent &
        )
    )

    FGPP_FUNCTION_VOID(
        void swapBuffers(
            GLCurrent &
        )
    )

#define FGPP_GL_FUNCTION_NAME( _name ) gl##_name

#define GL_ARGS( ... ) \
    GLCurrent & __VA_ARGS__
#define GL_DECLARE_FUNCTION( _macro, _name, _returnType, _args ) \
    _macro( _returnType FGPP_GL_FUNCTION_NAME( _name )( GL_ARGS _args ) )
#define FGPP_GL_FUNCTION_NUM( _name, _returnType, _args, _values ) \
    GL_DECLARE_FUNCTION( FGPP_FUNCTION_NUM, _name, _returnType, _args )
#define FGPP_GL_FUNCTION_PTR( _name, _returnType, _args, _values ) \
    GL_DECLARE_FUNCTION( FGPP_FUNCTION_PTR, _name, _returnType, _args )
#define FGPP_GL_FUNCTION_VOID( _name, _args, _values ) \
    GL_DECLARE_FUNCTION( FGPP_FUNCTION_VOID, _name, void, _args )

    FGPP_GL_FUNCTIONS

#undef  FGPP_GL_FUNCTION_VOID
#undef  FGPP_GL_FUNCTION_PTR
#undef  FGPP_GL_FUNCTION_NUM
#undef  GL_DECLARE_FUNCTION
#undef  GL_ARGS
}

#endif  // FGPP_GL_CURRENT_H
