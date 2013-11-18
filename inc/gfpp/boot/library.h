#ifndef GFPP_BOOT_LIBRARY_H
#define GFPP_BOOT_LIBRARY_H

#include "gf/boot/library.h"
#include "gf4cpp/string/utf32.h"
#include "gf4cpp/common/functional.h"
#include "gf/util/import.h"

namespace gf {
    typedef GfLibrary Library;

    GFEXPORT Library * newLibrary(
        const Utf32 &
        , const Utf32 &
    );

    GFEXPORT void free(
        Library &
    );

    GFEXPORT void * getAddress(
        Library &
        , const Utf32 &
    );
}

template<>
inline void gfFree(
    gf::Library &   _library
)
{
    gf::free(
        _library
    );
}

#endif  // GFPP_BOOT_LIBRARY_H
