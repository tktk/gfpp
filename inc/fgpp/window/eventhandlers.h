﻿#ifndef FGPP_WINDOW_EVENTHANDLERS_H
#define FGPP_WINDOW_EVENTHANDLERS_H

namespace fg {
    struct WindowEventHandlers;
}

#include "fgpp/window/closeevent.h"
#include "fgpp/window/positionevent.h"
#include "fgpp/window/sizeevent.h"
#include "fgpp/window/paintevent.h"
#include "fgpp/window/window.h"
#include "fgpp/window/key.h"
#include "fgpp/common/primitives.h"

#include <functional>

namespace fg {
    typedef std::function<
        void(
            Window &
            , Key
            , const Utf32Char *
            , Bool
        )
    > WindowKeyEventHandler;

    typedef std::function<
        void(
            Window &
            , ULong
            , Bool
            , Int
            , Int
        )
    > WindowMouseButtonEventHandler;

    typedef std::function<
        void(
            Window &
            , Int
            , Int
        )
    > WindowMouseMotionEventHandler;
}

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
        , Window &
        , Key
        , const Utf32Char *
        , Bool
    );

    FGPPEXPORT void setMouseButtonEventHandler(
        WindowEventHandlers &
        , const WindowMouseButtonEventHandler &
    );

    FGPPEXPORT void callMouseButtonEventHandler(
        const WindowEventHandlers &
        , Window &
        , ULong
        , Bool
        , Int
        , Int
    );

    FGPPEXPORT void setMouseMotionEventHandler(
        WindowEventHandlers &
        , const WindowMouseMotionEventHandler &
    );

    FGPPEXPORT void callMouseMotionEventHandler(
        const WindowEventHandlers &
        , Window &
        , Int
        , Int
    );
}

#endif  // FGPP_WINDOW_EVENTHANDLERS_H
