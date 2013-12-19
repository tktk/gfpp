#ifndef FGPP_WINDOW_CLOSEEVENT_H
#define FGPP_WINDOW_CLOSEEVENT_H

#include <functional>

namespace fg {
    struct WindowCloseEvent;

    typedef std::function<
        void(
            WindowCloseEvent &
        )
    > WindowCloseEventHandler;
}

#include "fgpp/window/window.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT WindowCloseEvent * newWindowCloseEvent(
        Window &
    );

    FGPPEXPORT WindowCloseEvent * clone(
        const WindowCloseEvent &
    );

    FGPPEXPORT void free(
        WindowCloseEvent &
    );

    FGPPEXPORT Window & getSource(
        WindowCloseEvent &
    );
}

#endif  // FGPP_WINDOW_CLOSEEVENT_H
