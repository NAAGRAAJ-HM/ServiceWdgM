/******************************************************************************/
/* File   : Template.hpp                                                      */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "types.hpp"

#include "mon.hpp"

#include "uC_Mon.hpp"

#include "sfr_access.hpp"
#include "wdt1.hpp"
#include "RTE_Components.hpp"

#include "mon_defines.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
MON_Type MON = {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
void MON_Init(void){
#if(CONFIGWIZARD == 1)
   MON.CNF.reg = (uint8) MON_CNF;
#else
   MON.CNF.reg = (uint8) PMU_MON_CNF;
#endif
}
/*
uint8 MON_Debounce(uint8 MonActiveState){
  uint32 debounce = 20000;
  while(debounce > 0u){
    while((uint8)MON_Sts() != MonActiveState){
      (void)WDT1_Service();
      debounce = 20000;
    }
    debounce--;
  }
   return((uint8)MON_Sts());
}

void MON_Rising_Edge_Int_Clr(void){
  Field_Wrt8(&SCU.IRCON0CLR.reg, (uint8)SCU_IRCON0CLR_MONRC_Pos, (uint8)SCU_IRCON0CLR_MONRC_Msk, 1u);
}

void MON_Falling_Edge_Int_Clr(void){
  Field_Wrt8(&SCU.IRCON0CLR.reg, (uint8)SCU_IRCON0CLR_MONFC_Pos, (uint8)SCU_IRCON0CLR_MONFC_Msk, 1u);
}

void MON_Rising_Edge_Int_En(void){
  Field_Mod8(&SCU.EXICON0.reg, (uint8)6u, (uint8)0x40u, 1u);
}

void MON_Rising_Edge_Int_Dis(void){
  Field_Mod8(&SCU.EXICON0.reg, (uint8)6u, (uint8)0x40u, 0u);
}

void MON_Falling_Edge_Int_En(void){
  Field_Mod8(&SCU.EXICON0.reg, (uint8)7u, (uint8)0x80u, 1u);
}

void MON_Falling_Edge_Int_Dis(void){
  Field_Mod8(&SCU.EXICON0.reg, (uint8)7u, (uint8)0x80u, 0u);
}

uint8 MON_Sts(void){
   return( u1_Field_Rd8(&SCU.MODIEN3.reg, (uint8)SCU_MODIEN3_MONSTS_Pos, (uint8)SCU_MODIEN3_MONSTS_Msk) );
}

void MON_PullUp_En(void){
  Field_Mod8(&MON.CNF.reg, (uint8)PMU_MON_CNF_PU_Pos, (uint8)PMU_MON_CNF_PU_Msk, 1u);
}

void MON_PullUp_Dis(void){
  Field_Mod8(&MON.CNF.reg, (uint8)PMU_MON_CNF_PU_Pos, (uint8)PMU_MON_CNF_PU_Msk, 0u);
}

void MON_PullDown_En(void){
  Field_Mod8(&MON.CNF.reg, (uint8)PMU_MON_CNF_PD_Pos, (uint8)PMU_MON_CNF_PD_Msk, 1u);
}

void MON_PullDown_Dis(void){
  Field_Mod8(&MON.CNF.reg, (uint8)PMU_MON_CNF_PD_Pos, (uint8)PMU_MON_CNF_PD_Msk, 0u);
}

void MON_CycSense_En(void){
  Field_Mod8(&MON.CNF.reg, (uint8)PMU_MON_CNF_CYC_Pos, (uint8)PMU_MON_CNF_CYC_Msk, 1u);
}

void MON_CycSense_Dis(void){
  Field_Mod8(&MON.CNF.reg, (uint8)PMU_MON_CNF_CYC_Pos, (uint8)PMU_MON_CNF_CYC_Msk, 0u);
}

void MON_WakeOnRise_En(void){
  Field_Mod8(&MON.CNF.reg, (uint8)PMU_MON_CNF_RISE_Pos, (uint8)PMU_MON_CNF_RISE_Msk, 1u);
}

void MON_WakeOnRise_Dis(void){
  Field_Mod8(&MON.CNF.reg, (uint8)PMU_MON_CNF_RISE_Pos, (uint8)PMU_MON_CNF_RISE_Msk, 0u);
}

void MON_WakeOnFall_En(void){
  Field_Mod8(&MON.CNF.reg, (uint8)PMU_MON_CNF_FALL_Pos, (uint8)PMU_MON_CNF_FALL_Msk, 1u);
}

void MON_WakeOnFall_Dis(void){
  Field_Mod8(&MON.CNF.reg, (uint8)PMU_MON_CNF_FALL_Pos, (uint8)PMU_MON_CNF_FALL_Msk, 0u);
}

void MON_En(void){
  Field_Mod8(&MON.CNF.reg, (uint8)PMU_MON_CNF_EN_Pos, (uint8)PMU_MON_CNF_EN_Msk, 1u);
}

void MON_Dis(void){
  Field_Mod8(&MON.CNF.reg, (uint8)PMU_MON_CNF_EN_Pos, (uint8)PMU_MON_CNF_EN_Msk, 0u);
}

uint8 MON_Get_Status(void){
   return u1_Field_Rd8(&SCU.MODIEN3.reg, (uint8)SCU_MODIEN3_MONSTS_Pos, (uint8)SCU_MODIEN3_MONSTS_Msk);
}
*/
/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

