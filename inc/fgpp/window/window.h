#ifndef FGPP_WINDOW_WINDOW_H
#define FGPP_WINDOW_WINDOW_H

#include "fgpp/def/window/window.h"
#include "fgpp/def/window/eventhandlers.h"
#include "fgpp/def/string/utf32.h"
#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import_new.h"

namespace fg {
    FGPP_FUNCTION_PTR(
        Window * newWindow(
            const WindowEventHandlers &
            , const Utf32 &
            , Int
            , Int
        )
    )

    FGPP_FUNCTION_VOID(
        void free(
            Window &
        )
    )

    FGPP_FUNCTION_VOID(
        void close(
            Window &
        )
    )

    FGPP_FUNCTION_BOOL(
        Bool setTitle(
            Window &
            , const Utf32 &
        )
    )

    FGPP_FUNCTION_VOID(
        void setPosition(
            Window &
            , Int
            , Int
        )
    )

    FGPP_FUNCTION_VOID(
        void setSize(
            Window &
            , Int
            , Int
        )
    )

    FGPP_FUNCTION_VOID(
        void repaint(
            Window &
            , Int
            , Int
            , Int
            , Int
        )
    )

    FGPP_FUNCTION_VOID(
        void repaint(
            Window &
        )
    )
}

#endif  // FGPP_WINDOW_WINDOW_H
