#pragma once
/******************************************************************************/
/* File   : ServiceWdgM_core.hpp                                                     */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ServiceWdgM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICEWDGM_CORE_FUNCTIONALITIES                                              \
              FUNC(void, SERVICEWDGM_CODE) GetMode             (void);                \
              FUNC(void, SERVICEWDGM_CODE) SetMode             (void);                \
              FUNC(void, SERVICEWDGM_CODE) CheckpointReached   (void);                \
              FUNC(void, SERVICEWDGM_CODE) GetGlobalStatus     (void);                \
              FUNC(void, SERVICEWDGM_CODE) GetLocalStatus      (void);                \
              FUNC(void, SERVICEWDGM_CODE) PerformReset        (void);                \
              FUNC(void, SERVICEWDGM_CODE) GetFirstExpiredSEID (void);                \

#define SERVICEWDGM_CORE_FUNCTIONALITIES_VIRTUAL                                      \
      virtual FUNC(void, SERVICEWDGM_CODE) GetMode             (void) = 0;            \
      virtual FUNC(void, SERVICEWDGM_CODE) SetMode             (void) = 0;            \
      virtual FUNC(void, SERVICEWDGM_CODE) CheckpointReached   (void) = 0;            \
      virtual FUNC(void, SERVICEWDGM_CODE) GetGlobalStatus     (void) = 0;            \
      virtual FUNC(void, SERVICEWDGM_CODE) GetLocalStatus      (void) = 0;            \
      virtual FUNC(void, SERVICEWDGM_CODE) PerformReset        (void) = 0;            \
      virtual FUNC(void, SERVICEWDGM_CODE) GetFirstExpiredSEID (void) = 0;            \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServiceWdgM_Functionality{
   public:
      SERVICEWDGM_CORE_FUNCTIONALITIES_VIRTUAL
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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

