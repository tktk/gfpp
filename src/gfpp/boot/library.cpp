#include "fgpp/util/export.h"
#include "gfpp/boot/library.h"

#include "fgpp/string/utf32.h"

namespace gf {
    Library * newLibrary(
        const fg::Utf32 &
        , const fg::Utf32 &
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
        , const fg::Utf32 &
    )
    {
        return nullptr;
    }
}
