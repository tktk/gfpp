#ifndef FGPP_DEF_COMMON_MEMORY_H
#define FGPP_DEF_COMMON_MEMORY_H

#include "fgpp/def/common/functional.h"

#include <memory>

namespace fg {
    template< typename T >
    struct Unique
    {
        typedef std::unique_ptr<
            T
            , Free< T * >
        > type;
    };

    template< typename T >
    struct Shared
    {
        typedef std::shared_ptr< T > type;
    };

    template< typename T >
    struct Weak
    {
        typedef std::weak_ptr< T > type;
    };
}

#endif  // FGPP_DEF_COMMON_MEMORY_H
