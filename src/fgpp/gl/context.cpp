#include "fgpp/util/export.h"
#include "fgpp/gl/context.h"

#include "fgpp/gl/contextinfo.h"
#include "fgpp/window/window.h"
#include "fgpp/common/primitives.h"

namespace fg {
    GLContext * newGLContext(
        const GLContextInfo &
    )
    {
        return nullptr;
    }

    void free(
        GLContext &
    )
    {
    }

    Bool glMakeCurrent(
        GLContext &
        , Window &
    )
    {
        return false;
    }

    void glMakeCurrent(
    )
    {
    }
}
