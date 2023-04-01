#pragma once
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

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MON_STATUS_LOW                                                      (0U)
#define MON_STATUS_HIGH                                                     (1U)

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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern void  MON_Init                 (void);
extern uint8 MON_Debounce             (uint8 MonActiveState);
extern void  MON_Rising_Edge_Int_Clr  (void);
extern void  MON_Falling_Edge_Int_Clr (void);
extern void  MON_Rising_Edge_Int_En   (void);
extern void  MON_Rising_Edge_Int_Dis  (void);
extern void  MON_Falling_Edge_Int_En  (void);
extern void  MON_Falling_Edge_Int_Dis (void);
extern uint8 MON_Sts                  (void);
extern void  MON_PullUp_En            (void);
extern void  MON_PullUp_Dis           (void);
extern void  MON_PullDown_En          (void);
extern void  MON_PullDown_Dis         (void);
extern void  MON_CycSense_En          (void);
extern void  MON_CycSense_Dis         (void);
extern void  MON_WakeOnRise_En        (void);
extern void  MON_WakeOnRise_Dis       (void);
extern void  MON_WakeOnFall_En        (void);
extern void  MON_WakeOnFall_Dis       (void);
extern void  MON_En                   (void);
extern void  MON_Dis                  (void);
extern uint8 MON_Get_Status           (void);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

