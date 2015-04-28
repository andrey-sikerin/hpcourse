// Copyright (c) Computer Science Center 2015. All rights reserved.
// Author: Andrey Sikerin <andrey.sikerin@yandex.ru>

#ifndef FIXEDTHREADPOOL_FIXEDTHREADPOOL_H
#define FIXEDTHREADPOOL_FIXEDTHREADPOOL_H

#include "../support/UnCopyable.h"

namespace cscenter { namespace hpcourse {

    class ForkJoinThreadPool : UnCopyable {

        unsigned int m_size;

    public:
        ForkJoinThreadPool(unsigned int size);

        virtual ~ForkJoinThreadPool() { }

        void startRunLoop();
    };

} /* namespace hpcourse */ } /* namespace cscenter */

#endif //FIXEDTHREADPOOL_FIXEDTHREADPOOL_H

