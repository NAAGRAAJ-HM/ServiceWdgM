#pragma once
/******************************************************************************/
/* File   : ServiceWdgM_core.hpp                                                     */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
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

