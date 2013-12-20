#ifndef FGPP_WINDOW_KEYEVENT_H
#define FGPP_WINDOW_KEYEVENT_H

#include <functional>

namespace fg {
    struct WindowKeyEvent;

    typedef std::function<
        void(
            const WindowKeyEvent &
        )
    > WindowKeyEventHandler;
}

#include "fgpp/window/window.h"
#include "fgpp/window/key.h"
#include "fgpp/common/primitives.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT WindowKeyEvent * newWindowKeyEvent(
        Window &
        , Key
        , const Utf32Char *
        , Bool
    );

    FGPPEXPORT WindowKeyEvent * clone(
        const WindowKeyEvent &
    );

    FGPPEXPORT void free(
        WindowKeyEvent &
    );

    FGPPEXPORT Window & getSource(
        const WindowKeyEvent &
    );

    FGPPEXPORT Key getKey(
        const WindowKeyEvent &
    );

    FGPPEXPORT const Utf32Char * getCharPtr(
        const WindowKeyEvent &
    );

    FGPPEXPORT Bool getPressed(
        const WindowKeyEvent &
    );
}

#endif  // FGPP_WINDOW_KEYEVENT_H
