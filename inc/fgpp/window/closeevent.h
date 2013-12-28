#ifndef FGPP_WINDOW_CLOSEEVENT_H
#define FGPP_WINDOW_CLOSEEVENT_H

#include "fgpp/def/window/closeevent.h"
#include "fgpp/def/window/window.h"
#include "fgpp/def/common/functional.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPP_FUNCTION_PTR(
        WindowCloseEvent * newWindowCloseEvent(
            Window &
        )
    )

    FGPP_FUNCTION_PTR(
        WindowCloseEvent * clone(
            const WindowCloseEvent &
        )
    )

    FGPP_FUNCTION_VOID(
        void free(
            WindowCloseEvent &
        )
    )

    FGPP_FUNCTION_REF(
        Window & getSource(
            const WindowCloseEvent &
        )
        , Window
    )
}

template<>
inline void fgFree(
    fg::WindowCloseEvent &  _event
)
{
    fg::free( _event );
}

#endif  // FGPP_WINDOW_CLOSEEVENT_H
