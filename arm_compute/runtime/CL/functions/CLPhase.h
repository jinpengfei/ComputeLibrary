/*
 * Copyright (c) 2016-2020 Arm Limited.
 *
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#ifndef ARM_COMPUTE_CLPHASE_H
#define ARM_COMPUTE_CLPHASE_H

#include "arm_compute/core/Types.h"
#include "arm_compute/runtime/CL/ICLSimpleFunction.h"

namespace arm_compute
{
class ICLTensor;

/** Basic function to execute an @ref CLMagnitudePhaseKernel. */
class CLPhase : public ICLSimpleFunction
{
public:
    /** Initialise the kernel's inputs, output.
     *
     * @param[in]  input1     First tensor input. Data types supported: S16.
     * @param[in]  input2     Second tensor input. Data types supported: S16.
     * @param[out] output     Output tensor. Data types supported: U8.
     * @param[in]  phase_type (Optional) Phase calculation type. Default: SIGNED.
     */
    void configure(const ICLTensor *input1, const ICLTensor *input2, ICLTensor *output, PhaseType phase_type = PhaseType::SIGNED);
    /** Initialise the kernel's inputs, output.
     *
     * @param[in]  compile_context The compile context to be used.
     * @param[in]  input1          First tensor input. Data types supported: S16.
     * @param[in]  input2          Second tensor input. Data types supported: S16.
     * @param[out] output          Output tensor. Data types supported: U8.
     * @param[in]  phase_type      (Optional) Phase calculation type. Default: SIGNED.
     */
    void configure(const CLCompileContext &compile_context, const ICLTensor *input1, const ICLTensor *input2, ICLTensor *output, PhaseType phase_type = PhaseType::SIGNED);
};
}
#endif /*ARM_COMPUTE_CLPHASE_H */
