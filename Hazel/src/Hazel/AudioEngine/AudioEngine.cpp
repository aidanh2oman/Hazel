#include "hzpch.h"
#include "Hazel/AudioEngine/AudioEngine.h"

namespace Hazel {
    
        void AudioEngine::Init()
        {
            AudioEngineCommand::Init();
            // TracktionEngine::Init();
        }
    
        void AudioEngine::Play()
        {
            AudioEngineCommand::Play();
        }

        void AudioEngine::Shutdown()
        {
            TracktionEngine::Shutdown();
        }
}