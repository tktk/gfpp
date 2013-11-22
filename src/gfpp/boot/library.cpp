#include "gfpp/util/export.h"
#include "gfpp/boot/library.h"

#include "gfpp/string/utf32.h"

namespace gf {
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
