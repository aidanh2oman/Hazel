#pragma once

#include "Hazel/AudioEngine/AudioEngineAPI.h"

namespace Hazel {

	class TracktionEngineAPI : public AudioEngineAPI
	{
	public:
		virtual void Init() override;

        virtual void Play() override;
	};


}