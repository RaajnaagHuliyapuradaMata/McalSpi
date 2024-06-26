/******************************************************************************/
/* File   : McalSpi.cpp                                                       */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "McalSpi.hpp"
#include "infMcalSpi_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

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
VAR(module_McalSpi, MCALSPI_VAR) McalSpi;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MCALSPI_CODE) module_McalSpi::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, MCALSPI_CONST,       MCALSPI_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALSPI_CONFIG_DATA, MCALSPI_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalSpi_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == McalSpi_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == McalSpi_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == McalSpi_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALSPI_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALSPI_CODE) module_McalSpi::DeInitFunction(
   void
){
#if(STD_ON == McalSpi_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalSpi_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == McalSpi_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALSPI_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALSPI_CODE) module_McalSpi::MainFunction(
   void
){
#if(STD_ON == McalSpi_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalSpi_InitCheck)
   }
   else{
#if(STD_ON == McalSpi_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALSPI_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALSPI_CODE) module_McalSpi::WriteIB(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::AsyncTransmit(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::ReadIB(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::SetupEB(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::GetStatus(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::GetJobResult(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::GetSequenceResult(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::SyncTransmit(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::GetHWUnitStatus(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::McalCancel(
   void
){
}

FUNC(void, MCALSPI_CODE) module_McalSpi::SetAsyncMode(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

