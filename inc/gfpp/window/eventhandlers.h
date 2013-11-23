#ifndef GFPP_WINDOW_EVENTHANDLERS_H
#define GFPP_WINDOW_EVENTHANDLERS_H

namespace gf {
    struct WindowEventHandlers;
}

#include "gfpp/window/window.h"
#include "gfpp/common/primitives.h"

#include <functional>

namespace gf {
    typedef std::function<
        void(
            Window &
        )
    > WindowCloseEventHandler;

    typedef std::function<
        void(
            Window &
            , Int
            , Int
        )
    > WindowPositionEventHandler;

    typedef std::function<
        void(
            Window &
            , Int
            , Int
        )
    > WindowSizeEventHandler;

    typedef std::function<
        void(
            Window &
            , Int
            , Int
            , Int
            , Int
        )
    > WindowPaintEventHandler;

    typedef std::function<
        void(
            Window &
            , ULong
            , Bool
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

#include "gfpp/util/import.h"

namespace gf {
    GFPPEXPORT WindowEventHandlers * newWindowEventHandlers(
    );

    GFPPEXPORT WindowEventHandlers * clone(
        const WindowEventHandlers &
    );

    GFPPEXPORT void free(
        WindowEventHandlers &
    );

    GFPPEXPORT void setCloseEventHandler(
        WindowEventHandlers &
        , const WindowCloseEventHandler &
    );

    GFPPEXPORT void callCloseEventHandler(
        const WindowEventHandlers &
        , Window &
    );

    GFPPEXPORT void setPositionEventHandler(
        WindowEventHandlers &
        , const WindowPositionEventHandler &
    );

    GFPPEXPORT void callPositionEventHandler(
        const WindowEventHandlers &
        , Window &
        , Int
        , Int
    );

    GFPPEXPORT void setSizeEventHandler(
        WindowEventHandlers &
        , const WindowSizeEventHandler &
    );

    GFPPEXPORT void callSizeEventHandler(
        const WindowEventHandlers &
        , Window &
        , Int
        , Int
    );

    GFPPEXPORT void setPaintEventHandler(
        WindowEventHandlers &
        , const WindowPaintEventHandler &
    );

    GFPPEXPORT void callPaintEventHandler(
        const WindowEventHandlers &
        , Window &
        , Int
        , Int
        , Int
        , Int
    );

    GFPPEXPORT void setMouseButtonEventHandler(
        WindowEventHandlers &
        , const WindowMouseButtonEventHandler &
    );

    GFPPEXPORT void callMouseButtonEventHandler(
        const WindowEventHandlers &
        , Window &
        , ULong
        , Bool
    );

    GFPPEXPORT void setMouseMotionEventHandler(
        WindowEventHandlers &
        , const WindowMouseMotionEventHandler &
    );

    GFPPEXPORT void callMouseMotionEventHandler(
        const WindowEventHandlers &
        , Window &
        , Int
        , Int
    );
}

#endif  // GFPP_WINDOW_EVENTHANDLERS_H
