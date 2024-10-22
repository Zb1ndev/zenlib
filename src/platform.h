#ifndef PLATFORM_H
#define PLATFORM_H

/*     Add More Later    */
#ifdef defined(__ANDROID__)
    #define ZEN_ANDRIOD
#elif defined(__linux__)
    #define ZEN_LINUX
#elif defined(__APPLE__)
    #define ZEN_APPLE
#elif defined(_WIN32)
    #define ZEN_WINDOWS
#endif

#endif