#pragma once
#include "init.h"
#include "../port/gb_instructions.h"

void SoftReset() {
	StopAllSounds();
	GBPalWhiteOut();
	DelayFrames(32);
}



void Init() {
	di();
}
