// Copyright (c) Computer Science Center 2015. All rights reserved.
// Author: Andrey Sikerin <andrey.sikerin@yandex.ru>

#ifndef FIXEDTHREADPOOL_FUTURE_H
#define FIXEDTHREADPOOL_FUTURE_H

#include <chrono>

namespace cscenter_hpcource {
    template <typename T>
    class IFuture {
        virtual T getValue() = 0;
        virtual T getValue(std::chrono::milliseconds timeout) = 0;

        virtual bool isDone() = 0;
        virtual void cancel() = 0;

        virtual ~IFuture() {}
    };
}



#endif //FIXEDTHREADPOOL_FUTURE_H
