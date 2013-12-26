#ifndef GFPP_MAIN_BOOT_H
#define GFPP_MAIN_BOOT_H

#include "gfpp/def/main/bootconfig.h"
#include "fgpp/def/string/utf32.h"
#include "fgpp/def/common/primitives.h"
#include "fgpp/util/import_new.h"

namespace gf {
    FGPP_FUNCTION_NUM(
        fg::Int boot(
            const fg::Utf32 &
            , const fg::Utf32 &
            , const BootConfig &
        )
    )
}

#endif  // GFPP_MAIN_BOOT_H
