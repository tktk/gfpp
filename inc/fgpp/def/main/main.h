#ifndef FGPP_DEF_MAIN_MAIN_H
#define FGPP_DEF_MAIN_MAIN_H

#include "fgpp/def/main/args.h"
#include "fgpp/def/common/primitives.h"

namespace fg {
    typedef Int ( * MainProc )(
        const Args &
    );
}

#endif  // FGPP_DEF_MAIN_MAIN_H
