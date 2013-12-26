#ifndef FGPP_WINDOW_KEYEVENT_H
#define FGPP_WINDOW_KEYEVENT_H

#include "fgpp/def/window/keyevent.h"
#include "fgpp/def/window/window.h"
#include "fgpp/def/window/key.h"
#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import_new.h"

namespace fg {
    FGPP_FUNCTION_PTR(
        WindowKeyEvent * newWindowKeyEvent(
            Window &
            , Key
            , const Utf32Char *
            , Bool
        )
    )

    FGPP_FUNCTION_PTR(
        WindowKeyEvent * clone(
            const WindowKeyEvent &
        )
    )

    FGPP_FUNCTION_VOID(
        void free(
            WindowKeyEvent &
        )
    )

    FGPP_FUNCTION_REF(
        Window & getSource(
            const WindowKeyEvent &
        )
        , Window
    )

    FGPP_FUNCTION(
        Key getKey(
            const WindowKeyEvent &
        )
        , return KEY_INVALID;
    )

    FGPP_FUNCTION_PTR(
        const Utf32Char * getCharPtr(
            const WindowKeyEvent &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool getPressed(
            const WindowKeyEvent &
        )
    )
}

#endif  // FGPP_WINDOW_KEYEVENT_H
