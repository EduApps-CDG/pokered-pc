#pragma once
#include "init.h"

void SoftReset() {
	StopAllSounds();
	GBPalWhiteOut();
	DelayFrames(32);
}



void Init() {
	unsigned char rLCDC_DEFAULT = 0b11100011; // 227
}