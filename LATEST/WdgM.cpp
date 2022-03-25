/******************************************************************************/
/* File   : WdgM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.hpp"
#include "CfgWdgM.hpp"
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
      FUNC(void, WDGM_CODE) InitFunction   (void);
      FUNC(void, WDGM_CODE) DeInitFunction (void);
      FUNC(void, WDGM_CODE) GetVersionInfo (void);
      FUNC(void, WDGM_CODE) MainFunction   (void);

   private:
      CONST(Std_TypeVersionInfo, WDGM_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
};

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
CONSTP2VAR(infEcuMClient, WDGM_VAR, WDGM_CONST) gptrinfEcuMClient_WdgM = &WdgM;
CONSTP2VAR(infDcmClient,  WDGM_VAR, WDGM_CONST) gptrinfDcmClient_WdgM  = &WdgM;
CONSTP2VAR(infSchMClient, WDGM_VAR, WDGM_CONST) gptrinfSchMClient_WdgM = &WdgM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, WDGM_CODE) module_WdgM::InitFunction(void){
   WdgM.IsInitDone = E_OK;
}

FUNC(void, WDGM_CODE) module_WdgM::DeInitFunction(void){
   WdgM.IsInitDone = E_NOT_OK;
}

FUNC(void, WDGM_CODE) module_WdgM::GetVersionInfo(void){
#if(STD_ON == WdgM_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, WDGM_CODE) module_WdgM::MainFunction(void){
}

#include "WdgM_Unused.hpp"

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

