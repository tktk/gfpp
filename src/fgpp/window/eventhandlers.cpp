#include "fgpp/util/export.h"
#include "fgpp/window/eventhandlers.h"

#include "fgpp/window/window.h"
#include "fgpp/common/primitives.h"

namespace fg {
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

    void setKeyEventHandler(
        WindowEventHandlers &
        , const WindowKeyEventHandler &
    )
    {
    }

    void callKeyEventHandler(
        const WindowEventHandlers &
        , Window &
        , Key
        , const Utf32Char *
        , Bool
    )
    {
    }

    void setMouseButtonEventHandler(
        WindowEventHandlers &
        , const WindowMouseButtonEventHandler &
    )
    {
    }

    void callMouseButtonEventHandler(
        const WindowEventHandlers &
        , Window &
        , ULong
        , Bool
        , Int
        , Int
    )
    {
    }

    void setMouseMotionEventHandler(
        WindowEventHandlers &
        , const WindowMouseMotionEventHandler &
    )
    {
    }

    void callMouseMotionEventHandler(
        const WindowEventHandlers &
        , Window &
        , Int
        , Int
    )
    {
    }
}
