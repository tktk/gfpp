#ifndef FGPP_GL_CONTEXT_H
#define FGPP_GL_CONTEXT_H

namespace fg {
    struct GLContext;
}

#include "fgpp/gl/contextinfo.h"
#include "fgpp/window/window.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT GLContext * newGLContext(
        const GLContextInfo &
    );

    FGPPEXPORT void free(
        GLContext &
    );

    FGPPEXPORT Bool glMakeCurrent(
        GLContext &
        , Window &
    );

    FGPPEXPORT void glMakeCurrent(
    );
}

#endif  // FGPP_GL_CONTEXT_H
