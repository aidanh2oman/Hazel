#include "hzpch.h"
#include "Hazel/AudioEngine/AudioEngineAPI.h"

#include "Hazel/AudioEngine/TracktionEngineAPI.h"

namespace Hazel {

    AudioEngineAPI::API AudioEngineAPI::s_API = AudioEngineAPI::API::Tracktion;

    Scope<AudioEngineAPI> AudioEngineAPI::Create()
    {
        switch (s_API)
        {
            case AudioEngineAPI::API::None:    HZ_CORE_ASSERT(false, "AudioEngineAPI::None is currently not supported!"); return nullptr;
            case AudioEngineAPI::API::Tracktion:  return CreateScope<TracktionEngineAPI>();
        }

        HZ_CORE_ASSERT(false, "Unknown AudioEngineAPI!");
        return nullptr;
    }
}