/* INCLUDES ******************************************************************/

#include "ses_common.h"
#include "ses_led.h"

/* DEFINES & MACROS **********************************************************/

// LED wiring on SES board
#define LED_RED_PORT       	PORTG
#define LED_RED_PIN         	1

#define LED_YELLOW_PORT 	PORTF
#define LED_YELLOW_PIN      	7

#define LED_GREEN_PORT 		PORTF
#define LED_GREEN_PIN       	6

/* FUNCTION DEFINITION *******************************************************/

void led_redInit(void) {
	DDR_REGISTER(LED_RED_PORT) |= (1<<LED_RED_PIN);
}

void led_redToggle(void) {
	LED_RED_PORT ^= (1<<LED_RED_PIN);
}

void led_redOn(void) {
	LED_RED_PORT &= ~(1<<LED_RED_PIN); //Low active
}

void led_redOff(void) {
	LED_RED_PORT |= (1<<LED_RED_PIN);
}

void led_yellowInit(void) {
	DDR_REGISTER(LED_YELLOW_PORT) |= (1<<LED_YELLOW_PIN);
}

void led_yellowToggle(void) {
	LED_YELLOW_PORT ^= (1<<LED_YELLOW_PIN);
}

void led_yellowOn(void) {
	LED_YELLOW_PORT &= ~(1<<LED_YELLOW_PIN);
}

void led_yellowOff(void) {
	LED_YELLOW_PORT |= (1<<LED_YELLOW_PIN);
}

void led_greenInit(void) {
	DDR_REGISTER(LED_GREEN_PORT) |= (1<<LED_GREEN_PIN);
}

void led_greenToggle(void) {
	LED_GREEN_PORT ^= (1<<LED_GREEN_PIN);
}

void led_greenOn(void) {
	LED_GREEN_PORT &= ~(1<<LED_GREEN_PIN);
}

void led_greenOff(void) {
	LED_GREEN_PORT |= (1<<LED_GREEN_PIN);
}
