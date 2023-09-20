#include "hzpch.h"
#include "Hazel/AudioEngine/AudioEngineCommand.h"

namespace Hazel {

    Scope<AudioEngineAPI> AudioEngineCommand::s_AudioEngineAPI = AudioEngineAPI::Create();

}