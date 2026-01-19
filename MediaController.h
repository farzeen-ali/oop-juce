#pragma once
#include <JuceHeader.h>

class MediaController
{
public:
    virtual ~MediaController() = default;

    virtual juce::String getType() const = 0;
    virtual juce::String play() const = 0;
};
