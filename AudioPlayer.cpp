#include "AudioPlayer.h"

juce::String AudioPlayer::getType() const
{
    return "Audio Player";
}

juce::String AudioPlayer::play() const
{
    return "Playing Music";
}
