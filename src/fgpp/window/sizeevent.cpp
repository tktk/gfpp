#include "fgpp/util/export.h"
#include "fgpp/window/sizeevent.h"

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
    WindowSizeEvent * newWindowSizeEvent(
        Window &
        , Int
        , Int
    )
    {
        return nullptr;
    }

    WindowSizeEvent * clone(
        const WindowSizeEvent &
    )
    {
        return nullptr;
    }

    void free(
        WindowSizeEvent &
    )
    {
    }

    Window & getSource(
        const WindowSizeEvent &
    )
    {
        return window;
    }

    Int getWidth(
        const WindowSizeEvent &
    )
    {
        return 0;
    }

    Int getHeight(
        const WindowSizeEvent &
    )
    {
        return 0;
    }
}
