/******************************************************************************/
/* File   : WdgM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgWdgM.hpp"
#include "WdgM_core.hpp"
#include "infWdgM.hpp"

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
   ,  public class_WdgM_Functionality
{
   public:
      module_WdgM(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, WDGM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, WDGM_CONFIG_DATA, WDGM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, WDGM_CODE) DeInitFunction (void);
      FUNC(void, WDGM_CODE) MainFunction   (void);
      WDGM_CORE_FUNCTIONALITIES
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
   if(E_OK != IsInitDone){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_LOW){
            // check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
            // use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgWdgM;
         }
      }
      else{
#if(STD_ON == WdgM_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == WdgM_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == WdgM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  WDGM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, WDGM_CODE) module_WdgM::DeInitFunction(void){
#if(STD_ON == WdgM_InitCheck)
   if(E_OK == IsInitDone){
#endif
#if(STD_ON == WdgM_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == WdgM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  WDGM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, WDGM_CODE) module_WdgM::MainFunction(void){
#if(STD_ON == WdgM_InitCheck)
   if(E_OK == IsInitDone){
#endif
#if(STD_ON == WdgM_InitCheck)
   }
   else{
#if(STD_ON == WdgM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  WDGM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, WDGM_CODE) module_WdgM::GetMode(void){
}

FUNC(void, WDGM_CODE) module_WdgM::SetMode(void){
}

FUNC(void, WDGM_CODE) module_WdgM::CheckpointReached(void){
}

FUNC(void, WDGM_CODE) module_WdgM::GetGlobalStatus(void){
}

FUNC(void, WDGM_CODE) module_WdgM::GetLocalStatus(void){
}

FUNC(void, WDGM_CODE) module_WdgM::PerformReset(void){
}

FUNC(void, WDGM_CODE) module_WdgM::GetFirstExpiredSEID(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

