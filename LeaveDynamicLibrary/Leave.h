#pragma once

#ifdef LEAVEDYNAMICLIBRARY_EXPORTS
#define LEAVEDYNAMICLIBRARY_API __declspec(dllexport)
#else
#define LEAVEDYNAMICLIBRARY_API __declspec(dllimport)
#endif

namespace LeaveNamespace
{
    class Leaver
    {
    public:
        LEAVEDYNAMICLIBRARY_API static void leave();
    };
}
