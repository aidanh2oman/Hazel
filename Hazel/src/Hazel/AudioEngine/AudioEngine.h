#pragma once


namespace Hazel {

    class AudioEngine
    {
    public:
        AudioEngine() = default;
        static void Init();
        static void Play();
        static void Shutdown();
    private:
        static AudioEngine* m_Engine;
    };
}