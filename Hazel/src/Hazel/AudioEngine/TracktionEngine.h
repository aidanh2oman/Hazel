#pragma once

// #include "Hazel/vendor/tracktion_engine/examples/common/Utilities.h"
// #include "Hazel/vendor/tracktion_engine/examples/common/PlaybackDemoAudio.h"

namespace Hazel {

    // class TracktionEngine : public AudioProcessor
    class TracktionEngine
    {
    public:
        static void Init();
        static void Shutdown();

        static void Play();

        // static void changeListenerCallback(ChangeBroadcaster* source) override;
    private:
    };
}