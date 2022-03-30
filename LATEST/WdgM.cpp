/******************************************************************************/
/* File   : WdgM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infWdgM_EcuM.hpp"
#include "infWdgM_Dcm.hpp"
#include "infWdgM_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define WDGM_AR_RELEASE_MAJOR_VERSION                                          4
#define WDGM_AR_RELEASE_MINOR_VERSION                                          3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(WDGM_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible WDGM_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(WDGM_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible WDGM_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_WdgM:
      public abstract_module
{
   public:
      module_WdgM(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, _CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, _CONFIG_DATA, _APPL_CONST) lptrCfgModule
      );
      FUNC(void, WDGM_CODE) InitFunction   (void);
      FUNC(void, WDGM_CODE) DeInitFunction (void);
      FUNC(void, WDGM_CODE) MainFunction   (void);
};

extern VAR(module_WdgM, WDGM_VAR) WdgM;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, WDGM_VAR, WDGM_CONST) gptrinfEcuMClient_WdgM = &WdgM;
CONSTP2VAR(infDcmClient,  WDGM_VAR, WDGM_CONST) gptrinfDcmClient_WdgM  = &WdgM;
CONSTP2VAR(infSchMClient, WDGM_VAR, WDGM_CONST) gptrinfSchMClient_WdgM = &WdgM;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgWdgM.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_WdgM, WDGM_VAR) WdgM(
   {
         0x0000
      ,  0xFFFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, WDGM_CODE) module_WdgM::InitFunction(
   CONSTP2CONST(CfgWdgM_Type, CFGWDGM_CONFIG_DATA, CFGWDGM_APPL_CONST) lptrCfgWdgM
){
   if(NULL_PTR == lptrCfgWdgM){
#if(STD_ON == WdgM_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
// check lptrCfgWdgM for memory faults
// use PBcfg_WdgM as back-up configuration
   }
   WdgM.IsInitDone = E_OK;
}

FUNC(void, WDGM_CODE) module_WdgM::DeInitFunction(void){
   WdgM.IsInitDone = E_NOT_OK;
}

FUNC(void, WDGM_CODE) module_WdgM::MainFunction(void){
}

class class_WdgM_Unused{
   public:
      FUNC(void, WDGM_CODE) GetMode             (void);
      FUNC(void, WDGM_CODE) SetMode             (void);
      FUNC(void, WDGM_CODE) CheckpointReached   (void);
      FUNC(void, WDGM_CODE) GetGlobalStatus     (void);
      FUNC(void, WDGM_CODE) GetLocalStatus      (void);
      FUNC(void, WDGM_CODE) PerformReset        (void);
      FUNC(void, WDGM_CODE) GetFirstExpiredSEID (void);
};

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

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

