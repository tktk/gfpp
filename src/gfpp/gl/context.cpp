#include "gfpp/util/export.h"
#include "gfpp/gl/context.h"

#include "gfpp/gl/contextinfo.h"
#include "gfpp/window/window.h"
#include "gfpp/common/primitives.h"

namespace gf {
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
