#pragma once

#include "Hazel/AudioEngine/AudioEngineAPI.h"

namespace Hazel {
    
    class AudioEngineCommand
    {

    public:
        static void Init()
        {
            s_AudioEngineAPI->Init();
        }

        static void Play()
        {
            s_AudioEngineAPI->Play();
        }
    private:
        static Scope<AudioEngineAPI> s_AudioEngineAPI;
    };
}
