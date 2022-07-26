/******************************************************************************/
/* File   : WdgM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "WdgM.hpp"
#include "infWdgM_Imp.hpp"

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

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_WdgM, WDGM_VAR) WdgM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, WDGM_CODE) module_WdgM::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, WDGM_CONST,       WDGM_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   WDGM_CONFIG_DATA, WDGM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == WdgM_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstWdgM_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
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

FUNC(void, WDGM_CODE) module_WdgM::DeInitFunction(
   void
){
#if(STD_ON == WdgM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
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

FUNC(void, WDGM_CODE) module_WdgM::MainFunction(
   void
){
#if(STD_ON == WdgM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
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

FUNC(void, WDGM_CODE) module_WdgM::GetMode(
   void
){
}

FUNC(void, WDGM_CODE) module_WdgM::SetMode(
   void
){
}

FUNC(void, WDGM_CODE) module_WdgM::CheckpointReached(
   void
){
}

FUNC(void, WDGM_CODE) module_WdgM::GetGlobalStatus(
   void
){
}

FUNC(void, WDGM_CODE) module_WdgM::GetLocalStatus(
   void
){
}

FUNC(void, WDGM_CODE) module_WdgM::PerformReset(
   void
){
}

FUNC(void, WDGM_CODE) module_WdgM::GetFirstExpiredSEID(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

