#ifndef FGPP_BOOT_LIBRARY_H
#define FGPP_BOOT_LIBRARY_H

namespace fg {
    struct Library;
}

#include "fgpp/string/utf32.h"
#include "fgpp/util/import.h"

namespace fg {
    FGPPEXPORT Library * newLibrary(
        const Utf32 &
        , const Utf32 &
    );

    FGPPEXPORT void free(
        Library &
    );

    FGPPEXPORT void * getAddress(
        Library &
        , const Utf32 &
    );
}

#endif  // FGPP_BOOT_LIBRARY_H
