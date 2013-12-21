#include "fgpp/util/export.h"
#include "fgpp/window/mousemotionevent.h"

#include "fgpp/window/window.h"
#include "fgpp/common/primitives.h"

namespace fg {
    struct Window
    {
    };
}

namespace {
    fg::Window  window;
}

namespace fg {
    WindowMouseMotionEvent * newWindowMouseMotionEvent(
        Window &
        , Int
        , Int
    )
    {
        return nullptr;
    }

    WindowMouseMotionEvent * clone(
        const WindowMouseMotionEvent &
    )
    {
        return nullptr;
    }

    void free(
        WindowMouseMotionEvent &
    )
    {
    }

    Window & getSource(
        const WindowMouseMotionEvent &
    )
    {
        return window;
    }

    Int getX(
        const WindowMouseMotionEvent &
    )
    {
        return 0;
    }

    Int getY(
        const WindowMouseMotionEvent &
    )
    {
        return 0;
    }
}
