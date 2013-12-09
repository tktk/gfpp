#ifndef FGPP_GL_CONTEXT_H
#define FGPP_GL_CONTEXT_H

namespace fg {
    struct GLContext;
}

#include "fgpp/gl/config.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT GLContext * newGLContext(
        const GLConfig &
    );

    FGPPEXPORT void free(
        GLContext &
    );
}

#endif  // FGPP_GL_CONTEXT_H
