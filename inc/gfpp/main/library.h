#ifndef GFPP_MAIN_LIBRARY_H
#define GFPP_MAIN_LIBRARY_H

namespace gf {
    struct Library;
}

#include "fgpp/string/utf32.h"
#include "fgpp/util/import.h"

namespace gf {
    FGPPEXPORT Library * newLibrary(
        const fg::Utf32 &
        , const fg::Utf32 &
    );

    FGPPEXPORT void free(
        Library &
    );

    FGPPEXPORT void * getAddress(
        Library &
        , const fg::Utf32 &
    );
}

#endif  // GFPP_MAIN_LIBRARY_H
