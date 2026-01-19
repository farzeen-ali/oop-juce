#pragma once
#include "MediaController.h"

class VideoPlayer : public MediaController
{
public:
    juce::String getType() const override;
    juce::String play() const override;
};
