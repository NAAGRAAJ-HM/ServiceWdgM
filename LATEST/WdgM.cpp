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
#define WDGM_AR_RELEASE_VERSION_MAJOR                                          4
#define WDGM_AR_RELEASE_VERSION_MINOR                                          3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(WDGM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible WDGM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(WDGM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible WDGM_AR_RELEASE_VERSION_MINOR!"
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
      FUNC(void, WDGM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, WDGM_CONFIG_DATA, WDGM_APPL_CONST) lptrCfgModule
      );
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
         WDGM_AR_RELEASE_VERSION_MAJOR
      ,  WDGM_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
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
   CONSTP2CONST(CfgModule_TypeAbstract, WDGM_CONFIG_DATA, WDGM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == WdgM_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == WdgM_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == WdgM_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
// check lptrCfgModule for memory faults
// use PBcfg_WdgM as back-up configuration
      }
      IsInitDone = E_OK;
#if(STD_ON == WdgM_InitCheck)
   }
#endif
}

FUNC(void, WDGM_CODE) module_WdgM::DeInitFunction(void){
#if(STD_ON == WdgM_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == WdgM_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == WdgM_InitCheck)
   }
#endif
}

FUNC(void, WDGM_CODE) module_WdgM::MainFunction(void){
#if(STD_ON == WdgM_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == WdgM_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
#if(STD_ON == WdgM_InitCheck)
   }
#endif
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

