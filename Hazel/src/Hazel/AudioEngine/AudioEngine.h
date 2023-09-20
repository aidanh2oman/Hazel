#pragma once

#include "Hazel/AudioEngine/AudioEngineCommand.h"

namespace Hazel {

    class AudioEngine
    {
    public:
        static void Init();
        static void Play();
        static void Shutdown();
        static AudioEngineAPI::API GetAPI() { return AudioEngineAPI::GetAPI(); }
    private:

    };
}