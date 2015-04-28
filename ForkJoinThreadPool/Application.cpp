// Copyright (c) Computer Science Center 2015. All rights reserved.
// Author: Andrey Sikerin <andrey.sikerin@yandex.ru>

#include "Application.h"

#include "classes/ForkJoinThreadPool.h"

using namespace cscenter::hpcourse;

void Application::run(void) {
    static const unsigned int kThreadPoolSize = 10;
    auto threadPool = new ForkJoinThreadPool(kThreadPoolSize);
    threadPool->startRunLoop();
}
