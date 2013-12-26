#ifndef FGPP_WINDOW_EVENTHANDLERS_H
#define FGPP_WINDOW_EVENTHANDLERS_H

#include "fgpp/def/window/eventhandlers.h"
#include "fgpp/def/window/closeevent.h"
#include "fgpp/def/window/positionevent.h"
#include "fgpp/def/window/sizeevent.h"
#include "fgpp/def/window/paintevent.h"
#include "fgpp/def/window/keyevent.h"
#include "fgpp/def/window/mousebuttonevent.h"
#include "fgpp/def/window/mousemotionevent.h"
#include "fgpp/util/import_new.h"

namespace fg {
    FGPP_FUNCTION_PTR(
        WindowEventHandlers * newWindowEventHandlers(
        )
    )

    FGPP_FUNCTION_PTR(
        WindowEventHandlers * clone(
            const WindowEventHandlers &
        )
    )

    FGPP_FUNCTION_VOID(
        void free(
            WindowEventHandlers &
        )
    )

    FGPP_FUNCTION_VOID(
        void setCloseEventHandler(
            WindowEventHandlers &
            , const WindowCloseEventHandler &
        )
    )

    FGPP_FUNCTION_VOID(
        void callCloseEventHandler(
            const WindowEventHandlers &
            , const WindowCloseEvent &
        )
    )

    FGPP_FUNCTION_VOID(
        void setPositionEventHandler(
            WindowEventHandlers &
            , const WindowPositionEventHandler &
        )
    )

    FGPP_FUNCTION_VOID(
        void callPositionEventHandler(
            const WindowEventHandlers &
            , const WindowPositionEvent &
        )
    )

    FGPP_FUNCTION_VOID(
        void setSizeEventHandler(
            WindowEventHandlers &
            , const WindowSizeEventHandler &
        )
    )

    FGPP_FUNCTION_VOID(
        void callSizeEventHandler(
            const WindowEventHandlers &
            , const WindowSizeEvent &
        )
    )

    FGPP_FUNCTION_VOID(
        void setPaintEventHandler(
            WindowEventHandlers &
            , const WindowPaintEventHandler &
        )
    )

    FGPP_FUNCTION_VOID(
        void callPaintEventHandler(
            const WindowEventHandlers &
            , const WindowPaintEvent &
        )
    )

    FGPP_FUNCTION_VOID(
        void setKeyEventHandler(
            WindowEventHandlers &
            , const WindowKeyEventHandler &
        )
    )

    FGPP_FUNCTION_VOID(
        void callKeyEventHandler(
            const WindowEventHandlers &
            , const WindowKeyEvent &
        )
    )

    FGPP_FUNCTION_VOID(
        void setMouseButtonEventHandler(
            WindowEventHandlers &
            , const WindowMouseButtonEventHandler &
        )
    )

    FGPP_FUNCTION_VOID(
        void callMouseButtonEventHandler(
            const WindowEventHandlers &
            , const WindowMouseButtonEvent &
        )
    )

    FGPP_FUNCTION_VOID(
        void setMouseMotionEventHandler(
            WindowEventHandlers &
            , const WindowMouseMotionEventHandler &
        )
    )

    FGPP_FUNCTION_VOID(
        void callMouseMotionEventHandler(
            const WindowEventHandlers &
            , const WindowMouseMotionEvent &
        )
    )
}

#endif  // FGPP_WINDOW_EVENTHANDLERS_H
