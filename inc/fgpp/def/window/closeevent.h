#ifndef FGPP_DEF_WINDOW_CLOSEEVENT_H
#define FGPP_DEF_WINDOW_CLOSEEVENT_H

#include <functional>

namespace fg {
    struct WindowCloseEvent;

    typedef std::function<
        void(
            const WindowCloseEvent &
        )
    > WindowCloseEventHandler;
}

#endif  // FGPP_DEF_WINDOW_CLOSEEVENT_H
