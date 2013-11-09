#ifndef GF4CPP_COMMON_MEMORY_H
#define GF4CPP_COMMON_MEMORY_H

#include "gf4cpp/common/functional.h"

#include <memory>
#include <type_traits>

namespace gf {
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

#endif  // GF4CPP_COMMON_MEMORY_H
