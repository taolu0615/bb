/**
 ****************************************************************************************
 *
 * @file rf.h
 *
 * @brief Common header file for all radios.
 *
 * Copyright (C) RivieraWaves 2009-2015
 *
 *
 ****************************************************************************************
 */

#ifndef RF_H_
#define RF_H_

/**
 ****************************************************************************************
 * @addtogroup RF
 * @ingroup DRIVERS
 * @brief Common definitions for radio modules.
 *
 * This module declares the functions and constants that have to be defined for all RF.
 *
 * @{
 ****************************************************************************************
 */


/*
 * FUNCTION DECLARATIONS
 ****************************************************************************************
 */

struct rwip_rf_api;  // forward declaration to avoid including rw.h

/**
 *****************************************************************************************
 * @brief Initialization of RF.
 *
 * This function initializes the RF and fills the structure containing the function
 * pointers and parameters required by the RW BT stack.
 *
 * @param[out]  api  Pointer to the BT RF API structure
 *
 *****************************************************************************************
 */
void rf_init(struct rwip_rf_api *api);

void xvr_reg_initial(void) ;
void kmod_calibration(void) ;
void  rf_debug_gpio_init(uint8_t GPIO_C_D);
void CLK32K_AutoCali_init(void);
void  xvr_reg_initial_24(void);

void rf_power_set(uint8_t leave);
uint8_t rf_power_get(void);
int8_t get_rf_rssi(void);
/// @} RF

#endif // RF_H_
