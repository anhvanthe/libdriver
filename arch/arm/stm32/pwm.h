#pragma once

#define PWM_TIM1 (0 << 2)
#define PWM_TIM2 (1 << 2)
#define PWM_TIM3 (2 << 2)
#define PWM_TIM4 (3 << 2)
#define PWM_TIM5 (4 << 2)
#define PWM_TIM8 (7 << 2)

#define PWM_TIM_CH1 (0)
#define PWM_TIM_CH2 (1)
#define PWM_TIM_CH3 (2)
#define PWM_TIM_CH4 (3)

typedef enum {
	PWM_CH11 = PWM_TIM1 | PWM_TIM_CH1, 
	PWM_CH12 = PWM_TIM1 | PWM_TIM_CH2, 
	PWM_CH13 = PWM_TIM1 | PWM_TIM_CH3, 
	PWM_CH14 = PWM_TIM1 | PWM_TIM_CH4, 
	PWM_CH21 = PWM_TIM2 | PWM_TIM_CH1, 
	PWM_CH22 = PWM_TIM2 | PWM_TIM_CH2, 
	PWM_CH23 = PWM_TIM2 | PWM_TIM_CH3, 
	PWM_CH24 = PWM_TIM2 | PWM_TIM_CH4, 
	PWM_CH31 = PWM_TIM3 | PWM_TIM_CH1, 
	PWM_CH32 = PWM_TIM3 | PWM_TIM_CH2, 
	PWM_CH33 = PWM_TIM3 | PWM_TIM_CH3, 
	PWM_CH34 = PWM_TIM3 | PWM_TIM_CH4, 
	PWM_CH41 = PWM_TIM4 | PWM_TIM_CH1, 
	PWM_CH42 = PWM_TIM4 | PWM_TIM_CH2, 
	PWM_CH43 = PWM_TIM4 | PWM_TIM_CH3, 
	PWM_CH44 = PWM_TIM4 | PWM_TIM_CH4, 
	PWM_CH51 = PWM_TIM5 | PWM_TIM_CH1, 
	PWM_CH52 = PWM_TIM5 | PWM_TIM_CH2, 
	PWM_CH53 = PWM_TIM5 | PWM_TIM_CH3, 
	PWM_CH54 = PWM_TIM5 | PWM_TIM_CH4, 
	PWM_CH81 = PWM_TIM8 | PWM_TIM_CH1, 
	PWM_CH82 = PWM_TIM8 | PWM_TIM_CH2, 
	PWM_CH83 = PWM_TIM8 | PWM_TIM_CH3, 
	PWM_CH84 = PWM_TIM8 | PWM_TIM_CH4, 
} pwm_channel_t; 

// TIM1 and TIM8: 4 pwm/capture channels each
// TIM2 to TIM5: 4 pwm/capture channels each
// TIM6 and TIM7: no pwm

/*
gpio_read_pulse(pin, ts, te); 
gpio_capture_read(); 
gpio_pwm_write(pin, width); 
gpio_pwm_configure(pin, 1000, 2000); 
gpio_capture_configure(pin, 1000, 2000); 
*/

void pwm_configure(pwm_channel_t chan, uint32_t def_width, uint32_t period); 
#define pwm0_set(a) (0)
#define pwm1_set(a) (0)
#define pwm2_set(a) (0)
#define pwm3_set(a) (0)
#define pwm4_set(a) (0)
#define pwm5_set(a) (0) 