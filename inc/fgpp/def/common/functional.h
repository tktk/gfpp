#ifndef FGPP_DEF_COMMON_FUNCTIONAL_H
#define FGPP_DEF_COMMON_FUNCTIONAL_H

#include "fgpp/def/common/primitives.h"

template< typename T >
void fgFree(
    T &
);

template<
    typename KEY1_T
    , typename KEY2_T
>
fg::Bool fgLess(
    const KEY1_T &
    , const KEY2_T &
);

namespace fg {
    template< typename T >
    struct Free
    {
        void operator()(
            T   _obj
        ) const
        {
            fgFree( *_obj );
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
            return fgLess(
                *_KEY1
                , *_KEY2
            );
        }
    };
}

#endif  // FGPP_DEF_COMMON_FUNCTIONAL_H
