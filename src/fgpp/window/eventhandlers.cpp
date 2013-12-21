#include "fgpp/util/export.h"
#include "fgpp/window/eventhandlers.h"

#include "fgpp/window/closeevent.h"
#include "fgpp/window/positionevent.h"
#include "fgpp/window/sizeevent.h"
#include "fgpp/window/paintevent.h"
#include "fgpp/window/keyevent.h"
#include "fgpp/window/mousebuttonevent.h"
#include "fgpp/window/mousemotionevent.h"

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
        , const WindowCloseEvent &
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
        , const WindowPositionEvent &
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
        , const WindowSizeEvent &
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
        , const WindowPaintEvent &
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
        , const WindowKeyEvent &
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
        , const WindowMouseButtonEvent &
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
        , const WindowMouseMotionEvent &
    )
    {
    }
}
