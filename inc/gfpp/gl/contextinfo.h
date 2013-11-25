#ifndef GFPP_GL_CONTEXTINFO_H
#define GFPP_GL_CONTEXTINFO_H

namespace gf {
    struct GLContextInfo;
}

#include "gfpp/util/import.h"

namespace gf {
    GFPPEXPORT GLContextInfo * newGLContextInfo(
    );

    GFPPEXPORT GLContextInfo * clone(
        const GLContextInfo &
    );

    GFPPEXPORT void free(
        GLContextInfo &
    );
}

#endif  // GFPP_GL_CONTEXTINFO_H
