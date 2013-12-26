#ifndef FGPP_WINDOW_MOUSEBUTTONEVENT_H
#define FGPP_WINDOW_MOUSEBUTTONEVENT_H

#include "fgpp/def/window/mousebuttonevent.h"
#include "fgpp/def/window/window.h"
#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import_new.h"

namespace fg {
    FGPP_FUNCTION_PTR(
        WindowMouseButtonEvent * newWindowMouseButtonEvent(
            Window &
            , ULong
            , Bool
            , Int
            , Int
        )
    )

    FGPP_FUNCTION_PTR(
        WindowMouseButtonEvent * clone(
            const WindowMouseButtonEvent &
        )
    )

    FGPP_FUNCTION_VOID(
        void free(
            WindowMouseButtonEvent &
        )
    )

    FGPP_FUNCTION_REF(
        Window & getSource(
            const WindowMouseButtonEvent &
        )
        , Window
    )

    FGPP_FUNCTION_NUM(
        ULong getIndex(
            const WindowMouseButtonEvent &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool getPressed(
            const WindowMouseButtonEvent &
        )
    )

    FGPP_FUNCTION_NUM(
        Int getX(
            const WindowMouseButtonEvent &
        )
    )

    FGPP_FUNCTION_NUM(
        Int getY(
            const WindowMouseButtonEvent &
        )
    )
}

#endif  // FGPP_WINDOW_MOUSEBUTTONEVENT_H
