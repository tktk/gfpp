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

    GFPPEXPORT void setPositionEventHandler(
        WindowEventHandlers &
        , const WindowPositionEventHandler &
    );

    GFPPEXPORT void setSizeEventHandler(
        WindowEventHandlers &
        , const WindowSizeEventHandler &
    );

    GFPPEXPORT void setPaintEventHandler(
        WindowEventHandlers &
        , const WindowPaintEventHandler &
    );
}

#endif  // GFPP_WINDOW_EVENTHANDLERS_H
