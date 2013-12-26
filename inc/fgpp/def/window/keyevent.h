#ifndef FGPP_DEF_WINDOW_KEYEVENT_H
#define FGPP_DEF_WINDOW_KEYEVENT_H

#include <functional>

namespace fg {
    struct WindowKeyEvent;

    typedef std::function<
        void(
            const WindowKeyEvent &
        )
    > WindowKeyEventHandler;
}

#endif  // FGPP_DEF_WINDOW_KEYEVENT_H
