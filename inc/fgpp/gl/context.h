#ifndef FGPP_GL_CONTEXT_H
#define FGPP_GL_CONTEXT_H

#include "fgpp/def/gl/context.h"
#include "fgpp/def/gl/config.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPP_FUNCTION_PTR(
        GLContext * newGLContext(
            const GLConfig &
        )
    )

    FGPP_FUNCTION_VOID(
        void free(
            GLContext &
        )
    )
}

#endif  // FGPP_GL_CONTEXT_H
