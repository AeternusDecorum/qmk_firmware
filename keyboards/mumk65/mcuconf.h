
#include_next "mcuconf.h"

// // The SysTick timer from the normal quantum/stm32 uses TIM2 -- the WS2812 pin used
// // on the Planck requires the use of TIM2 to run PWM -- rework which timers are
// // allocated for PWM usage.
// #undef STM32_PWM_USE_TIM2
// #undef STM32_PWM_USE_TIM3
// #define STM32_PWM_USE_TIM2 TRUE
// #define STM32_PWM_USE_TIM3 FALSE

// // As mentioned above, we need to reallocate the SysTick timer used from
// // TIM2 to TIM3.
// #undef STM32_ST_USE_TIMER
// #define STM32_ST_USE_TIMER 3
