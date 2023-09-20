#pragma once

namespace Hazel {

    class AudioEngineAPI
    {
    public: 
        enum class API
        {
            None = 0, Tracktion = 1
        };
    public:
        virtual ~AudioEngineAPI() = default;

        virtual void Init() = 0;

        virtual void Play() = 0;

        static API GetAPI() { return s_API; }
        static Scope<AudioEngineAPI> Create();
    private:
        static API s_API;
    };
}