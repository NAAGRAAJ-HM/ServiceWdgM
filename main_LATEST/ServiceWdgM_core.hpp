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
#define WDGM_CORE_FUNCTIONALITIES                                              \
              FUNC(void, WDGM_CODE) GetMode             (void);                \
              FUNC(void, WDGM_CODE) SetMode             (void);                \
              FUNC(void, WDGM_CODE) CheckpointReached   (void);                \
              FUNC(void, WDGM_CODE) GetGlobalStatus     (void);                \
              FUNC(void, WDGM_CODE) GetLocalStatus      (void);                \
              FUNC(void, WDGM_CODE) PerformReset        (void);                \
              FUNC(void, WDGM_CODE) GetFirstExpiredSEID (void);                \

#define WDGM_CORE_FUNCTIONALITIES_VIRTUAL                                      \
      virtual FUNC(void, WDGM_CODE) GetMode             (void) = 0;            \
      virtual FUNC(void, WDGM_CODE) SetMode             (void) = 0;            \
      virtual FUNC(void, WDGM_CODE) CheckpointReached   (void) = 0;            \
      virtual FUNC(void, WDGM_CODE) GetGlobalStatus     (void) = 0;            \
      virtual FUNC(void, WDGM_CODE) GetLocalStatus      (void) = 0;            \
      virtual FUNC(void, WDGM_CODE) PerformReset        (void) = 0;            \
      virtual FUNC(void, WDGM_CODE) GetFirstExpiredSEID (void) = 0;            \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServiceWdgM_Functionality{
   public:
      WDGM_CORE_FUNCTIONALITIES_VIRTUAL
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

