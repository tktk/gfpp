#ifndef FGPP_MAIN_MAIN_H
#define FGPP_MAIN_MAIN_H

#include "fgpp/main/args.h"
#include "fgpp/common/primitives.h"

namespace fg {
    typedef Int ( * MainProc )(
        const Args &
    );
}

#endif  // FGPP_MAIN_MAIN_H
