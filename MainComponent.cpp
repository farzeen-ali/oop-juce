#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    //title
    titleLabel.setText("Smart Media Controller", juce::dontSendNotification);
    titleLabel.setFont(juce::Font(26.0f, juce::Font::bold));
    titleLabel.setJustificationType(juce::Justification::centred);
    titleLabel.setColour(juce::Label::textColourId, juce::Colours::white);

    // Button
    audioButton.setButtonText("Play Audio");
    videoButton.setButtonText("Play Video");

    audioButton.addListener(this);
    videoButton.addListener(this);

    // Status
    statusLabel.setText("Select Media to play", juce::dontSendNotification);
    statusLabel.setJustificationType(juce::Justification::centred);
    statusLabel.setColour(juce::Label::textColourId, juce::Colours::lightgrey);

    addAndMakeVisible(titleLabel);
    addAndMakeVisible(statusLabel);
    addAndMakeVisible(audioButton);
    addAndMakeVisible(videoButton);

    setSize (520, 360);
}

MainComponent::~MainComponent()
{
    audioButton.removeListener(this);
    videoButton.removeListener(this);
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    juce::ColourGradient gradient(
        juce::Colours::darkslateblue, 0, 0,
        juce::Colours::black, 0, (float)getHeight(),
        false
    );
    g.setGradientFill(gradient);
    g.fillAll();
}

void MainComponent::resized()
{
    titleLabel.setBounds(60, 25, 400, 45);

    audioButton.setBounds(160, 110, 200, 45);
    videoButton.setBounds(160, 170, 200, 45);

    statusLabel.setBounds(60, 240, 400, 40);
}
void MainComponent::buttonClicked(juce::Button* button) {
    if (button == &audioButton) {
        media = std::make_unique<AudioPlayer>();
    }
    else if (button == &videoButton) {
        media = std::make_unique<VideoPlayer>();
    }
    statusLabel.setText(
        media->getType() + "=>" + media->play(), juce::dontSendNotification
    );
}﻿
