/*****************************************************/
/* File   : WdgM.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "WdgM_EcuM.h"
#include "WdgM_SchM.h"
#include "WdgM_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_WdgM:
      public abstract_module
   ,  public interface_WdgM_EcuM
   ,  public interface_WdgM_SchM
{
   public:
      FUNC(void, WDGM_CODE) InitFunction   (void);
      FUNC(void, WDGM_CODE) DeInitFunction (void);
      FUNC(void, WDGM_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_WdgM WdgM;

interface_WdgM_EcuM *EcuM_Client_ptr_WdgM = &WdgM;
interface_WdgM_SchM *SchM_Client_ptr_WdgM = &WdgM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, WDGM_CODE) module_WdgM::InitFunction(void){
}

FUNC(void, WDGM_CODE) module_WdgM::DeInitFunction(void){
}

FUNC(void, WDGM_CODE) module_WdgM::MainFunction(void){
}

FUNC(void, WDGM_CODE) class_WdgM_Unused::GetVersionInfo(void){
}

FUNC(void, WDGM_CODE) class_WdgM_Unused::GetMode(void){
}

FUNC(void, WDGM_CODE) class_WdgM_Unused::SetMode(void){
}

FUNC(void, WDGM_CODE) class_WdgM_Unused::CheckpointReached(void){
}

FUNC(void, WDGM_CODE) class_WdgM_Unused::GetGlobalStatus(void){
}

FUNC(void, WDGM_CODE) class_WdgM_Unused::GetLocalStatus(void){
}

FUNC(void, WDGM_CODE) class_WdgM_Unused::PerformReset(void){
}

FUNC(void, WDGM_CODE) class_WdgM_Unused::GetFirstExpiredSEID(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

