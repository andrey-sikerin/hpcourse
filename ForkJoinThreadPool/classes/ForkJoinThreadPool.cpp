// Copyright (c) Computer Science Center 2015. All rights reserved.
// Author: Andrey Sikerin <andrey.sikerin@yandex.ru>

#include "ForkJoinThreadPool.h"

#include <iostream>

using namespace std;

namespace cscenter_hpcource {

    ForkJoinThreadPool::ForkJoinThreadPool(unsigned int size) :
            m_size(size) {

    }

    void ForkJoinThreadPool::startRunLoop() {

        cout << "Run loop started" << endl;
    }
}
