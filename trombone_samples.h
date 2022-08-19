#pragma once
#include <Audio.h>

extern const AudioSynthWavetable::sample_data trombone_samples[4];
const uint8_t trombone_ranges[] = {52, 59, 64, 127, };

const AudioSynthWavetable::instrument_data trombone = {4, trombone_ranges, trombone_samples };


FLASHMEM extern const uint32_t sample_0_trombone_tromb2[768];

FLASHMEM extern const uint32_t sample_1_trombone_troma3[768];

FLASHMEM extern const uint32_t sample_2_trombone_tromd4[640];

FLASHMEM extern const uint32_t sample_3_trombone_tromg4[896];
