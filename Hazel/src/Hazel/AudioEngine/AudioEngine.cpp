#include "hzpch.h"
#include "Hazel/AudioEngine/AudioEngine.h"
#include "Hazel/AudioEngine/TracktionEngine.h"

namespace Hazel {
    
        // AudioEngine* AudioEngine::m_Engine = nullptr;

        void AudioEngine::Init()
        {
            // m_Engine = new TracktionEngine();
            // m_Engine->Init();
            TracktionEngine::Init();
        }
    
        void AudioEngine::Play()
        {
            TracktionEngine::Play();
        }

        void AudioEngine::Shutdown()
        {
            TracktionEngine::Shutdown();
        }
}