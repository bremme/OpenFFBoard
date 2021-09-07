/*
 * eeprom_addresses.c
 *
 *  Created on: 24.01.2020
 *      Author: Yannick
 */

#include "eeprom_addresses.h"

/*
Add all used addresses to the VirtAddVarTab[] array. This is important for the eeprom emulation to correctly transfer between pages.
This ensures that addresses that were once used are not copied again in a page transfer if they are not in this array.
*/

uint16_t VirtAddVarTab[NB_OF_VAR] =
	{
		ADR_HW_VERSION, ADR_SW_VERSION,
		ADR_CURRENT_CONFIG,

		ADR_FFBWHEEL_BUTTONCONF,ADR_FFBWHEEL_ANALOGCONF,

		ADR_LOCAL_BTN_CONF,ADR_LOCAL_BTN_CONF_2,
		ADR_PWM_MODE,
		ADR_LOCALANALOG_MASK,

		ADR_SHIFTERANALOG_X_12, ADR_SHIFTERANALOG_X_56,
		ADR_SHIFTERANALOG_Y_135, ADR_SHIFTERANALOG_Y_246,
		ADR_SHIFTERANALOG_CONF, ADR_SHIFTERANALOG_CONF_2, ADR_SHIFTERANALOG_CONF_3,

		ADR_SPI_BTN_1_CONF, ADR_SPI_BTN_1_CONF_2, 
		ADR_SPI_BTN_2_CONF, ADR_SPI_BTN_2_CONF_2,

		ADR_CF_FILTER, ADR_AXIS_COUNT, ADR_AXIS_EFFECTS1, ADR_AXIS_EFFECTS2,

		ADR_AXIS1_CONFIG, ADR_AXIS1_POWER, ADR_AXIS1_DEGREES, ADR_AXIS1_ENDSTOP,ADR_AXIS1_EFFECTS1,
		ADR_TMC1_MOTCONF, ADR_TMC1_CPR, ADR_TMC1_ENCA, ADR_TMC1_OFFSETFLUX, ADR_TMC1_TORQUE_P, ADR_TMC1_TORQUE_I, ADR_TMC1_FLUX_P, ADR_TMC1_FLUX_I,

		ADR_AXIS2_CONFIG,ADR_AXIS2_POWER,ADR_AXIS2_DEGREES,ADR_AXIS2_ENDSTOP,ADR_AXIS2_EFFECTS1,
		ADR_TMC2_MOTCONF,ADR_TMC2_CPR,ADR_TMC2_ENCA,ADR_TMC2_OFFSETFLUX,ADR_TMC2_TORQUE_P,ADR_TMC2_TORQUE_I,ADR_TMC2_FLUX_P,ADR_TMC2_FLUX_I,

		ADR_AXIS3_CONFIG,ADR_AXIS3_POWER,ADR_AXIS3_DEGREES,ADR_AXIS3_ENDSTOP,ADR_AXIS3_EFFECTS1,
		ADR_TMC3_MOTCONF,ADR_TMC3_CPR,ADR_TMC3_ENCA,ADR_TMC3_OFFSETFLUX,ADR_TMC3_TORQUE_P,ADR_TMC3_TORQUE_I,ADR_TMC3_FLUX_P,ADR_TMC3_FLUX_I,
		ADR_ODRIVE_CANID,ADR_ODRIVE_SETTING1_M0,ADR_ODRIVE_SETTING1_M1,

		ADR_VESC_CANDATA

	};
