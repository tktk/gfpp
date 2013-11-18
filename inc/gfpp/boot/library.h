#ifndef GFPP_BOOT_LIBRARY_H
#define GFPP_BOOT_LIBRARY_H

#include "gfpp/boot/library.h"
#include "gfpp/string/utf32.h"
#include "gfpp/util/import.h"

namespace gf {
    struct Library;

    GFPPEXPORT Library * newLibrary(
        const Utf32 &
        , const Utf32 &
    );

    GFPPEXPORT void free(
        Library &
    );

    GFPPEXPORT void * getAddress(
        Library &
        , const Utf32 &
    );
}

#endif  // GFPP_BOOT_LIBRARY_H
