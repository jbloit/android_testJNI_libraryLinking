//
// Created by julien@macmini on 2019-12-11.
//

#ifndef ANDROID_TESLIBRARYLINKING_NATIVEAPP_H
#define ANDROID_TESLIBRARYLINKING_NATIVEAPP_H

#include "Beast.h"

class NativeApp {
public:
    NativeApp();
    ~NativeApp();
    int getBeastNumber();

private:
    Beast beast;
};


#endif //ANDROID_TESLIBRARYLINKING_NATIVEAPP_H
