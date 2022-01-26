#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_WdgM.h"

class class_WdgM{
   public:
      FUNC(void, WDGM_CODE) InitFunction        (void);
      FUNC(void, WDGM_CODE) DeInitFunction      (void);
      FUNC(void, WDGM_CODE) GetVersionInfo      (void);
      FUNC(void, WDGM_CODE) GetMode             (void);
      FUNC(void, WDGM_CODE) SetMode             (void);
      FUNC(void, WDGM_CODE) CheckpointReached   (void);
      FUNC(void, WDGM_CODE) GetGlobalStatus     (void);
      FUNC(void, WDGM_CODE) GetLocalStatus      (void);
      FUNC(void, WDGM_CODE) PerformReset        (void);
      FUNC(void, WDGM_CODE) GetFirstExpiredSEID (void);
      FUNC(void, WDGM_CODE) MainFunction        (void);
};

extern class_WdgM WdgM;


