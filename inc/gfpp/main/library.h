﻿#ifndef GFPP_MAIN_LIBRARY_H
#define GFPP_MAIN_LIBRARY_H

#include "gfpp/def/main/library.h"
#include "fgpp/def/string/utf32.h"
#include "fgpp/def/common/functional.h"
#include "fgpp/util/import.h"

namespace gf {
    FGPP_FUNCTION_PTR(
        Library * newLibrary(
            const fg::Utf32 &
            , const fg::Utf32 &
        )
    )

    FGPP_FUNCTION_VOID(
        void free(
            Library &
        )
    )

    FGPP_FUNCTION_PTR(
        void * getAddress(
            Library &
            , const fg::Utf32 &
        )
    )
}

template<>
inline void fgFree(
    gf::Library &   _library
)
{
    gf::free( _library );
}

#endif  // GFPP_MAIN_LIBRARY_H
