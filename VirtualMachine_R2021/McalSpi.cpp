/******************************************************************************/
/* File   : McalSpi.cpp                                                           */
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
#define SPI_AR_RELEASE_VERSION_MAJOR                                           4
#define SPI_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SPI_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SPI_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SPI_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SPI_AR_RELEASE_VERSION_MINOR!"
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
VAR(module_McalSpi, SPI_VAR) McalSpi;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SPI_CODE) module_McalSpi::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SPI_CONST,       SPI_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SPI_CONFIG_DATA, SPI_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalSpi_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstMcalSpi_Type*)lptrConstModule;
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
         ,  SPI_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SPI_CODE) module_McalSpi::DeInitFunction(
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
         ,  SPI_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SPI_CODE) module_McalSpi::MainFunction(
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
         ,  SPI_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SPI_CODE) module_McalSpi::WriteIB(
   void
){
}

FUNC(void, SPI_CODE) module_McalSpi::AsyncTransmit(
   void
){
}

FUNC(void, SPI_CODE) module_McalSpi::ReadIB(
   void
){
}

FUNC(void, SPI_CODE) module_McalSpi::SetupEB(
   void
){
}

FUNC(void, SPI_CODE) module_McalSpi::GetStatus(
   void
){
}

FUNC(void, SPI_CODE) module_McalSpi::GetJobResult(
   void
){
}

FUNC(void, SPI_CODE) module_McalSpi::GetSequenceResult(
   void
){
}

FUNC(void, SPI_CODE) module_McalSpi::SyncTransmit(
   void
){
}

FUNC(void, SPI_CODE) module_McalSpi::GetHWUnitStatus(
   void
){
}

FUNC(void, SPI_CODE) module_McalSpi::McalCancel(
   void
){
}

FUNC(void, SPI_CODE) module_McalSpi::SetAsyncMode(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

