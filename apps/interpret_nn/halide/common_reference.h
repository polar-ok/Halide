#ifndef COMMON_REFERENCE_H_
#define COMMON_REFERENCE_H_

#include <cstdint>

namespace interpret_nn {

// This function implements the same computation as the ARMv7 NEON VQRDMULH
// instruction.
int32_t SaturatingRoundingDoublingHighMultiplyReference(int32_t a, int32_t b);

// Correctly-rounded-to-nearest division by a power-of-two. Also known as
// rounding arithmetic right shift.
int32_t RoundingDivideByPOTReference(int32_t x, int32_t shift);

// Performs right shift and multiply by a multiplier.
int32_t MultiplyByQuantizedMultiplierSmallerThanOneReference(int32_t x, int32_t q, int32_t shift);

}  // namespace interpret_nn

#endif
