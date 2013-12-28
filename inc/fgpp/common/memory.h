#ifndef FGPP_COMMON_MEMORY_H
#define FGPP_COMMON_MEMORY_H

#include "fgpp/def/common/memory.h"
#include "fgpp/def/common/functional.h"

#include <type_traits>

namespace fg {
    template< typename T >
    typename Unique< typename std::remove_pointer< T >::type >::type unique(
        T   _ptr
    )
    {
        return typename Unique< typename std::remove_pointer< T >::type >::type(
            _ptr
        );
    }

    template< typename T >
    typename Shared< typename std::remove_pointer< T >::type >::type shared(
        T   _ptr
    )
    {
        return typename Shared< typename std::remove_pointer< T >::type >::type(
            _ptr
            , Free< T >()
        );
    }

    template< typename T >
    typename Weak< typename T::element_type >::type weak(
        T   _sharedPtr
    )
    {
        return typename Weak< typename T::element_type >::type(
            _sharedPtr
        );
    }
}

#endif  // FGPP_COMMON_MEMORY_H
