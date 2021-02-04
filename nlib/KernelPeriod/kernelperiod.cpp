#include "kernelperiod.h"


nBlock_KernelPeriod::nBlock_KernelPeriod(float period) {
    KernelPeriod(period);
    KernelTickSource(KERNEL_TICK_TIMER, NC);
}
