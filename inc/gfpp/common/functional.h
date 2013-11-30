#ifndef GFPP_COMMON_FUNCTIONAL_H
#define GFPP_COMMON_FUNCTIONAL_H

#include "fgpp/common/primitives.h"

namespace gf {
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
        fg::Bool operator()(
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

#endif  // GFPP_COMMON_FUNCTIONAL_H
