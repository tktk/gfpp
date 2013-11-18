#ifndef GFPP_COMMON_FUNCTIONAL_H
#define GFPP_COMMON_FUNCTIONAL_H

#include "gf4cpp/common/primitives.h"

template< typename T >
void gfFree(
    T &
);

template<
    typename KEY1_T
    , typename KEY2_T
>
gf::Bool gfLess(
    const KEY1_T &
    , const KEY2_T &
);

namespace gf {
    template< typename T >
    struct Free
    {
        void operator()(
            T   _obj
        ) const
        {
            gfFree( *_obj );
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
            return gfLess(
                *_KEY1
                , *_KEY2
            );
        }
    };
}

#endif  // GFPP_COMMON_FUNCTIONAL_H
