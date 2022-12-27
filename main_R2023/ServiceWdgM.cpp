/******************************************************************************/
/* File   : ServiceWdgM.cpp                                                   */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServiceWdgM.hpp"
#include "infServiceWdgM_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICEWDGM_AR_RELEASE_VERSION_MAJOR                                   4
#define SERVICEWDGM_AR_RELEASE_VERSION_MINOR                                   3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SERVICEWDGM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SERVICEWDGM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SERVICEWDGM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SERVICEWDGM_AR_RELEASE_VERSION_MINOR!"
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
VAR(module_ServiceWdgM, SERVICEWDGM_VAR) ServiceWdgM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern void MON_Init(void); //TBD: use interface headers as per architecture

FUNC(void, SERVICEWDGM_CODE) module_ServiceWdgM::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SERVICEWDGM_CONST,       SERVICEWDGM_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEWDGM_CONFIG_DATA, SERVICEWDGM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceWdgM_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstServiceWdgM_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceWdgM_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
      MON_Init();
#if(STD_ON == ServiceWdgM_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceWdgM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEWDGM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEWDGM_CODE) module_ServiceWdgM::DeInitFunction(
   void
){
#if(STD_ON == ServiceWdgM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceWdgM_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceWdgM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEWDGM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEWDGM_CODE) module_ServiceWdgM::MainFunction(
   void
){
#if(STD_ON == ServiceWdgM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceWdgM_InitCheck)
   }
   else{
#if(STD_ON == ServiceWdgM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEWDGM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEWDGM_CODE) module_ServiceWdgM::GetMode(
   void
){
}

FUNC(void, SERVICEWDGM_CODE) module_ServiceWdgM::SetMode(
   void
){
}

FUNC(void, SERVICEWDGM_CODE) module_ServiceWdgM::CheckpointReached(
   void
){
}

FUNC(void, SERVICEWDGM_CODE) module_ServiceWdgM::GetGlobalStatus(
   void
){
}

FUNC(void, SERVICEWDGM_CODE) module_ServiceWdgM::GetLocalStatus(
   void
){
}

FUNC(void, SERVICEWDGM_CODE) module_ServiceWdgM::PerformReset(
   void
){
}

FUNC(void, SERVICEWDGM_CODE) module_ServiceWdgM::GetFirstExpiredSEID(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

