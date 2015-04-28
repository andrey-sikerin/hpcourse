// Copyright (c) Computer Science Center 2015. All rights reserved.
// Author: Andrey Sikerin <andrey.sikerin@yandex.ru>

#ifndef FIXEDTHREADPOOL_NONCOPYABLE_H
#define FIXEDTHREADPOOL_NONCOPYABLE_H

namespace cscenter_hpcource {
    struct UnCopyable {
        UnCopyable() = default;

        // non construction-copyable
        UnCopyable(const UnCopyable &other) = delete;

        UnCopyable &operator=(const UnCopyable &) = delete; // non copyable
    };
}

#endif //FIXEDTHREADPOOL_NONCOPYABLE_H
