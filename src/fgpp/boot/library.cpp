#include "fgpp/util/export.h"
#include "fgpp/boot/library.h"

#include "fgpp/string/utf32.h"

namespace fg {
    Library * newLibrary(
        const Utf32 &
        , const Utf32 &
    )
    {
        return nullptr;
    }

    void free(
        Library &
    )
    {
    }

    void * getAddress(
        Library &
        , const Utf32 &
    )
    {
        return nullptr;
    }
}
