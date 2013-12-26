#ifndef FGPP_DEF_WINDOW_SIZEEVENT_H
#define FGPP_DEF_WINDOW_SIZEEVENT_H

#include <functional>

namespace fg {
    struct WindowSizeEvent;

    typedef std::function<
        void(
            const WindowSizeEvent &
        )
    > WindowSizeEventHandler;
}

#endif  // FGPP_DEF_WINDOW_SIZEEVENT_H
