#pragma once
/******************************************************************************/
/* File   : ServiceWdgM.hpp                                                          */
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
#include "ConstServiceWdgM.hpp"
#include "CfgServiceWdgM.hpp"
#include "ServiceWdgM_core.hpp"
#include "infServiceWdgM_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceWdgM:
      INTERFACES_EXPORTED_SERVICEWDGM
      public abstract_module
   ,  public class_ServiceWdgM_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceWdgM_Type* lptrConst = (ConstServiceWdgM_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICEWDGM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICEWDGM_CONST,       SERVICEWDGM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEWDGM_CONFIG_DATA, SERVICEWDGM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICEWDGM_CODE) DeInitFunction (void);
      FUNC(void, SERVICEWDGM_CODE) MainFunction   (void);
      SERVICEWDGM_CORE_FUNCTIONALITIES
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
extern VAR(module_ServiceWdgM, SERVICEWDGM_VAR) ServiceWdgM;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

