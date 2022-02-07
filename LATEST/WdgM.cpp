/*****************************************************/
/* File   : WdgM.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "WdgM.h"

#include "WdgM_EcuM.h"

/*****************************************************/
/* #DEFINES                                          */
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
class_WdgM_EcuM WdgM_EcuM;
class_EcuM_Client *EcuM_Client_ptr_WdgM = &WdgM_EcuM;
class_WdgM WdgM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, WDGM_CODE) class_WdgM_EcuM::InitFunction(void){
}

FUNC(void, WDGM_CODE) class_WdgM_EcuM::DeInitFunction(void){
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

FUNC(void, WDGM_CODE) class_WdgM::MainFunction(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

