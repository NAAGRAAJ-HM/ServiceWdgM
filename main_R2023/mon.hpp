#pragma once
/******************************************************************************/
/* File   : mon.hpp                                                           */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
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

