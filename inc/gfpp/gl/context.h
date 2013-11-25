#ifndef GFPP_GL_CONTEXT_H
#define GFPP_GL_CONTEXT_H

namespace gf {
    struct GLContext;
}

#include "gfpp/gl/contextinfo.h"
#include "gfpp/window/window.h"
#include "gfpp/common/primitives.h"
#include "gfpp/util/import.h"

namespace gf {
    GFPPEXPORT GLContext * newGLContext(
        const GLContextInfo &
    );

    GFPPEXPORT void free(
        GLContext &
    );

    GFPPEXPORT Bool glMakeCurrent(
        GLContext &
        , Window &
    );

    GFPPEXPORT void glMakeCurrent(
    );
}

#endif  // GFPP_GL_CONTEXT_H
