#include "fgpp/util/export.h"
#include "fgpp/window/positionevent.h"

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
    WindowPositionEvent * newWindowPositionEvent(
        Window &
        , Int
        , Int
    )
    {
        return nullptr;
    }

    WindowPositionEvent * clone(
        const WindowPositionEvent &
    )
    {
        return nullptr;
    }

    void free(
        WindowPositionEvent &
    )
    {
    }

    Window & getSource(
        const WindowPositionEvent &
    )
    {
        return window;
    }

    Int getX(
        const WindowPositionEvent &
    )
    {
        return 0;
    }

    Int getY(
        const WindowPositionEvent &
    )
    {
        return 0;
    }
}
