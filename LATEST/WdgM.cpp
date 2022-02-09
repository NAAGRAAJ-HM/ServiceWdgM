/*****************************************************/
/* File   : WdgM.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "WdgM.h"

#include "WdgM_EcuM.h"
#include "WdgM_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_WdgM_EcuM_Init WdgM_EcuM_Init;
class_WdgM_EcuM_DeInit WdgM_EcuM_DeInit;
class_WdgM_SchM_Main WdgM_SchM_Main;
class_WdgM WdgM;

class_EcuM_Init_Client *EcuM_Init_Client_ptr_WdgM = &WdgM_EcuM_Init;
class_EcuM_DeInit_Client *EcuM_DeInit_Client_ptr_WdgM = &WdgM_EcuM_DeInit;
class_SchM_Main_Client *SchM_Main_Client_ptr_WdgM = &WdgM_SchM_Main;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, WDGM_CODE) class_WdgM_EcuM_Init::InitFunction(void){
}

FUNC(void, WDGM_CODE) class_WdgM_EcuM_DeInit::DeInitFunction(void){
}

FUNC(void, WDGM_CODE) class_WdgM_SchM_Main::MainFunction(void){
}

FUNC(void, WDGM_CODE) class_WdgM::GetVersionInfo(void){
}

FUNC(void, WDGM_CODE) class_WdgM::GetMode(void){
}

FUNC(void, WDGM_CODE) class_WdgM::SetMode(void){
}

FUNC(void, WDGM_CODE) class_WdgM::CheckpointReached(void){
}

FUNC(void, WDGM_CODE) class_WdgM::GetGlobalStatus(void){
}

FUNC(void, WDGM_CODE) class_WdgM::GetLocalStatus(void){
}

FUNC(void, WDGM_CODE) class_WdgM::PerformReset(void){
}

FUNC(void, WDGM_CODE) class_WdgM::GetFirstExpiredSEID(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

