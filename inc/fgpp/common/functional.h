#ifndef FGPP_COMMON_FUNCTIONAL_H
#define FGPP_COMMON_FUNCTIONAL_H

#include "fgpp/def/common/primitives.h"

namespace fg {
    template< typename T >
    struct Free
    {
        void operator()(
            T   _obj
        ) const
        {
            free( *_obj );
        }
    };

    template<
        typename KEY1_T
        , typename KEY2_T
    >
    struct Less
    {
        Bool operator()(
            const KEY1_T &      _KEY1
            , const KEY2_T &    _KEY2
        ) const
        {
            return less(
                *_KEY1
                , *_KEY2
            );
        }
    };
}

#endif  // FGPP_COMMON_FUNCTIONAL_H
