#ifndef FGPP_WINDOW_EVENTHANDLERS_H
#define FGPP_WINDOW_EVENTHANDLERS_H

namespace fg {
    struct WindowEventHandlers;
}

#include "fgpp/window/closeevent.h"
#include "fgpp/window/positionevent.h"
#include "fgpp/window/sizeevent.h"
#include "fgpp/window/paintevent.h"
#include "fgpp/window/keyevent.h"
#include "fgpp/window/mousebuttonevent.h"
#include "fgpp/window/mousemotionevent.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT WindowEventHandlers * newWindowEventHandlers(
    );

    FGPPEXPORT WindowEventHandlers * clone(
        const WindowEventHandlers &
    );

    FGPPEXPORT void free(
        WindowEventHandlers &
    );

    FGPPEXPORT void setCloseEventHandler(
        WindowEventHandlers &
        , const WindowCloseEventHandler &
    );

    FGPPEXPORT void callCloseEventHandler(
        const WindowEventHandlers &
        , const WindowCloseEvent &
    );

    FGPPEXPORT void setPositionEventHandler(
        WindowEventHandlers &
        , const WindowPositionEventHandler &
    );

    FGPPEXPORT void callPositionEventHandler(
        const WindowEventHandlers &
        , const WindowPositionEvent &
    );

    FGPPEXPORT void setSizeEventHandler(
        WindowEventHandlers &
        , const WindowSizeEventHandler &
    );

    FGPPEXPORT void callSizeEventHandler(
        const WindowEventHandlers &
        , const WindowSizeEvent &
    );

    FGPPEXPORT void setPaintEventHandler(
        WindowEventHandlers &
        , const WindowPaintEventHandler &
    );

    FGPPEXPORT void callPaintEventHandler(
        const WindowEventHandlers &
        , const WindowPaintEvent &
    );

    FGPPEXPORT void setKeyEventHandler(
        WindowEventHandlers &
        , const WindowKeyEventHandler &
    );

    FGPPEXPORT void callKeyEventHandler(
        const WindowEventHandlers &
        , const WindowKeyEvent &
    );

    FGPPEXPORT void setMouseButtonEventHandler(
        WindowEventHandlers &
        , const WindowMouseButtonEventHandler &
    );

    FGPPEXPORT void callMouseButtonEventHandler(
        const WindowEventHandlers &
        , const WindowMouseButtonEvent &
    );

    FGPPEXPORT void setMouseMotionEventHandler(
        WindowEventHandlers &
        , const WindowMouseMotionEventHandler &
    );

    FGPPEXPORT void callMouseMotionEventHandler(
        const WindowEventHandlers &
        , const WindowMouseMotionEvent &
    );
}

#endif  // FGPP_WINDOW_EVENTHANDLERS_H
