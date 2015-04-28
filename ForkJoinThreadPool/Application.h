// Copyright (c) Computer Science Center 2015. All rights reserved.
// Author: Andrey Sikerin <andrey.sikerin@yandex.ru>

#ifndef FIXEDTHREADPOOL_APPLICATION_H
#define FIXEDTHREADPOOL_APPLICATION_H

class Application {

public:

    Application(void) { }

    virtual ~Application() { }

    void run(void);
};


#endif //FIXEDTHREADPOOL_APPLICATION_H
