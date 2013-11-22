#include "gfpp/util/export.h"
#include "gfpp/window/eventhandlers.h"

#include "gfpp/window/window.h"
#include "gfpp/common/primitives.h"

namespace gf {
    WindowEventHandlers * newWindowEventHandlers(
    )
    {
        return nullptr;
    }

    WindowEventHandlers * clone(
        const WindowEventHandlers &
    )
    {
        return nullptr;
    }

    void free(
        WindowEventHandlers &
    )
    {
    }

    void setCloseEventHandler(
        WindowEventHandlers &
        , const WindowCloseEventHandler &
    )
    {
    }

    void callCloseEventHandler(
        const WindowEventHandlers &
        , Window &
    )
    {
    }

    void setPositionEventHandler(
        WindowEventHandlers &
        , const WindowPositionEventHandler &
    )
    {
    }

    void callPositionEventHandler(
        const WindowEventHandlers &
        , Window &
        , Int
        , Int
    )
    {
    }

    void setSizeEventHandler(
        WindowEventHandlers &
        , const WindowSizeEventHandler &
    )
    {
    }

    void callSizeEventHandler(
        const WindowEventHandlers &
        , Window &
        , Int
        , Int
    )
    {
    }

    void setPaintEventHandler(
        WindowEventHandlers &
        , const WindowPaintEventHandler &
    )
    {
    }

    void callPaintEventHandler(
        const WindowEventHandlers &
        , Window &
        , Int
        , Int
        , Int
        , Int
    )
    {
    }
}
