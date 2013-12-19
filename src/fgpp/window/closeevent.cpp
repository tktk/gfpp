#include "fgpp/util/export.h"
#include "fgpp/window/closeevent.h"

#include "fgpp/window/window.h"

namespace fg {
    struct Window
    {
    };
}

namespace {
    fg::Window  window;
}

namespace fg {
    WindowCloseEvent * newWindowCloseEvent(
        Window &
    )
    {
        return nullptr;
    }

    WindowCloseEvent * clone(
        const WindowCloseEvent &
    )
    {
        return nullptr;
    }

    void free(
        WindowCloseEvent &
    )
    {
    }

    Window & getSource(
        const WindowCloseEvent &
    )
    {
        return window;
    }
}
