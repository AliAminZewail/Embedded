/*
 * MEM_MAP.h
 *
 *  Created on: Oct 23, 2019
 *      Author: ali zewail
 */

#ifndef REGMAP_H_
#define REGMAP_H_

/* coprocessor access control register */
#define SCB_CPAC (*((volatile uint32*)0xE000ED88))


//CLOCK FOR EACH GPIO_Port
#define GPIO_RCGC (*((volatile uint32*)0x400FE608))

//HIGH BUS ENABLE
#define GPIO_HBCTL (*((volatile uint32*)0x400FE06C))


//CLOCK FOR ADC
#define RCGCADC  (*((volatile uint32*)0x400FE638))

//CLOCK FOR  UART
#define UART_RCGC (*((volatile uint32*)0x400FE618))



    /******************* GPIO *******************/
// GPIO_PortA
#define GPIO_PortAData (*((volatile uint32*)0x400583FC))
#define GPIO_PortADIR (*((volatile uint32*)0x40058400))
#define GPIO_PortAIS (*((volatile uint32*)0x40058404))
#define GPIO_PortAIBE (*((volatile uint32*)0x40058408))
#define GPIO_PortAIEV (*((volatile uint32*)0x4005840C))
#define GPIO_PortAIM (*((volatile uint32*)0x40058410))
#define GPIO_PortARIS (*((volatile uint32*)0x40058414))
#define GPIO_PortAMIS (*((volatile uint32*)0x40058418))
#define GPIO_PortAICR (*((volatile uint32*)0x4005841C))
#define GPIO_PortAAFSEL (*((volatile uint32*)0x40058420))
#define GPIO_PortADR2R (*((volatile uint32*)0x40058500))
#define GPIO_PortADR4R (*((volatile uint32*)0x40058504))
#define GPIO_PortADR8R (*((volatile uint32*)0x40058508))
#define GPIO_PortAODR (*((volatile uint32*)0x4005850C))
#define GPIO_PortAPUR (*((volatile uint32*)0x40058510))
#define GPIO_PortAPDR (*((volatile uint32*)0x40058514))
#define GPIO_PortASLR (*((volatile uint32*)0x40058518))
#define GPIO_PortADEN (*((volatile uint32*)0x4005851C))
#define GPIO_PortALOCK (*((volatile uint32*)0x40058520))
#define GPIO_PortACR (*((volatile uint32*)0x40058524))
#define GPIO_PortAAMSEL (*((volatile uint32*)0x40058528))
#define GPIO_PortAPCTL (*((volatile uint32*)0x4005852C))
#define GPIO_PortAADCCTL (*((volatile uint32*)0x40058530))
#define GPIO_PortADMACTL (*((volatile uint32*)0x40058534))


#define GPIO_PortAPeriphID4 (*((volatile uint32*)0x40058FD0))
#define GPIO_PortAPeriphID5 (*((volatile uint32*)0x40058FD4))
#define GPIO_PortAPeriphID6 (*((volatile uint32*)0x40058FD8))
#define GPIO_PortAPeriphID7 (*((volatile uint32*)0x40058FDC))
#define GPIO_PortAPeriphID0 (*((volatile uint32*)0x40058FE0))
#define GPIO_PortAPeriphID1 (*((volatile uint32*)0x40058FE4))
#define GPIO_PortAPeriphID2 (*((volatile uint32*)0x40058FE8))
#define GPIO_PortAPeriphID3 (*((volatile uint32*)0x40058FEC))



#define GPIO_PortAPCellID0 (*((volatile uint32*)0x40058FF0))
#define GPIO_PortAPCellID1 (*((volatile uint32*)0x40058FF4))
#define GPIO_PortAPCellID2 (*((volatile uint32*)0x40058FF8))
#define GPIO_PortAPCellID3 (*((volatile uint32*)0x40058FFC))



/*  GPIO_PortB */
#define GPIO_PortBData (*((volatile uint32*)0x400593FC))
#define GPIO_PortBDIR (*((volatile uint32*)0x40059400))
#define GPIO_PortBIS (*((volatile uint32*)0x40059404))
#define GPIO_PortBIBE (*((volatile uint32*)0x40059408))
#define GPIO_PortBIEV (*((volatile uint32*)0x4005940C))
#define GPIO_PortBIM (*((volatile uint32*)0x40059410))
#define GPIO_PortBRIS (*((volatile uint32*)0x40059414))
#define GPIO_PortBMIS (*((volatile uint32*)0x40059418))
#define GPIO_PortBICR (*((volatile uint32*)0x4005941C))
#define GPIO_PortBAFSEL (*((volatile uint32*)0x40059420))
#define GPIO_PortBDR2R (*((volatile uint32*)0x40059500))
#define GPIO_PortBDR4R (*((volatile uint32*)0x40059504))
#define GPIO_PortBDR8R (*((volatile uint32*)0x40059508))
#define GPIO_PortBODR (*((volatile uint32*)0x4005950C))
#define GPIO_PortBPUR (*((volatile uint32*)0x40059510))
#define GPIO_PortBPDR (*((volatile uint32*)0x40059514))
#define GPIO_PortBSLR (*((volatile uint32*)0x40059518))
#define GPIO_PortBDEN (*((volatile uint32*)0x4005951C))
#define GPIO_PortBLOCK (*((volatile uint32*)0x40059520))
#define GPIO_PortBCR (*((volatile uint32*)0x40059524))
#define GPIO_PortBAMSEL (*((volatile uint32*)0x40059528))
            #define GPIO_PortBPCTL (*((volatile uint32*)0x4005952C))
#define GPIO_PortBADCCTL (*((volatile uint32*)0x40059530))
#define GPIO_PortBDMACTL (*((volatile uint32*)0x40059534))


#define GPIO_PortBPeriphID4 (*((volatile uint32*)0x40059FD0))
#define GPIO_PortBPeriphID5 (*((volatile uint32*)0x40059FD4))
#define GPIO_PortBPeriphID6 (*((volatile uint32*)0x40059FD8))
#define GPIO_PortBPeriphID7 (*((volatile uint32*)0x40059FDC))
#define GPIO_PortBPeriphID0 (*((volatile uint32*)0x40059FE0))
#define GPIO_PortBPeriphID1 (*((volatile uint32*)0x40059FE4))
#define GPIO_PortBPeriphID2 (*((volatile uint32*)0x40059FE8))
#define GPIO_PortBPeriphID3 (*((volatile uint32*)0x40059FEC))



#define GPIO_PortBPCellID0 (*((volatile uint32*)0x40059FF0))
#define GPIO_PortBPCellID1 (*((volatile uint32*)0x40059FF4))
#define GPIO_PortBPCellID2 (*((volatile uint32*)0x40059FF8))
#define GPIO_PortBPCellID3 (*((volatile uint32*)0x40059FFC))


/*  GPIO_PortC */
#define GPIO_PortCData (*((volatile uint32*)0x4005A3FC))
#define GPIO_PortCDIR (*((volatile uint32*)0x4005A400))
#define GPIO_PortCIS (*((volatile uint32*)0x4005A404))
#define GPIO_PortCIBE (*((volatile uint32*)0x4005A408))
#define GPIO_PortCIEV (*((volatile uint32*)0x4005A40C))
#define GPIO_PortCIM (*((volatile uint32*)0x4005A410))
#define GPIO_PortCRIS (*((volatile uint32*)0x4005A414))
#define GPIO_PortCMIS (*((volatile uint32*)0x4005A418))
#define GPIO_PortCICR (*((volatile uint32*)0x4005A41C))
#define GPIO_PortCAFSEL (*((volatile uint32*)0x4005A420))
#define GPIO_PortCDR2R (*((volatile uint32*)0x4005A500))
#define GPIO_PortCDR4R (*((volatile uint32*)0x4005A504))
#define GPIO_PortCDR8R (*((volatile uint32*)0x4005A508))
#define GPIO_PortCODR (*((volatile uint32*)0x4005A50C))
#define GPIO_PortCPUR (*((volatile uint32*)0x4005A510))
#define GPIO_PortCPDR (*((volatile uint32*)0x4005A514))
#define GPIO_PortCSLR (*((volatile uint32*)0x4005A518))
#define GPIO_PortCDEN (*((volatile uint32*)0x4005A51C))
#define GPIO_PortCLOCK (*((volatile uint32*)0x4005A520))
#define GPIO_PortCCR (*((volatile uint32*)0x4005A524))
#define GPIO_PortCAMSEL (*((volatile uint32*)0x4005A528))
#define GPIO_PortCPCTL (*((volatile uint32*)0x4005A52C))
#define GPIO_PortCADCCTL (*((volatile uint32*)0x4005A530))
#define GPIO_PortCDMACTL (*((volatile uint32*)0x4005A534))


#define GPIO_PortCPeriphID4 (*((volatile uint32*)0x4005AFD0))
#define GPIO_PortCPeriphID5 (*((volatile uint32*)0x4005AFD4))
#define GPIO_PortCPeriphID6 (*((volatile uint32*)0x4005AFD8))
#define GPIO_PortCPeriphID7 (*((volatile uint32*)0x4005AFDC))
#define GPIO_PortCPeriphID0 (*((volatile uint32*)0x4005AFE0))
#define GPIO_PortCPeriphID1 (*((volatile uint32*)0x4005AFE4))
#define GPIO_PortCPeriphID2 (*((volatile uint32*)0x4005AFE8))
#define GPIO_PortCPeriphID3 (*((volatile uint32*)0x4005AFEC))



#define GPIO_PortCPCellID0 (*((volatile uint32*)0x4005AFF0))
#define GPIO_PortCPCellID1 (*((volatile uint32*)0x4005AFF4))
#define GPIO_PortCPCellID2 (*((volatile uint32*)0x4005AFF8))
#define GPIO_PortCPCellID3 (*((volatile uint32*)0x4005AFFC))



/*  GPIO_PortD */
#define GPIO_PortDData (*((volatile uint32*)0x4005B3FC))
#define GPIO_PortDDIR (*((volatile uint32*)0x4005B400))
#define GPIO_PortDIS (*((volatile uint32*)0x4005B404))
#define GPIO_PortDIBE (*((volatile uint32*)0x4005B408))
#define GPIO_PortDIEV (*((volatile uint32*)0x4005B40C))
#define GPIO_PortDIM (*((volatile uint32*)0x4005B410))
#define GPIO_PortDRIS (*((volatile uint32*)0x4005B414))
#define GPIO_PortDMIS (*((volatile uint32*)0x4005B418))
#define GPIO_PortDICR (*((volatile uint32*)0x4005B41C))
#define GPIO_PortDAFSEL (*((volatile uint32*)0x4005B420))
#define GPIO_PortDDR2R (*((volatile uint32*)0x4005B500))
#define GPIO_PortDDR4R (*((volatile uint32*)0x4005B504))
#define GPIO_PortDDR8R (*((volatile uint32*)0x4005B508))
#define GPIO_PortDODR (*((volatile uint32*)0x4005B50C))
#define GPIO_PortDPUR (*((volatile uint32*)0x4005B510))
#define GPIO_PortDPDR (*((volatile uint32*)0x4005B514))
#define GPIO_PortDSLR (*((volatile uint32*)0x4005B518))
#define GPIO_PortDDEN (*((volatile uint32*)0x4005B51C))
#define GPIO_PortDLOCK (*((volatile uint32*)0x4005B520))
#define GPIO_PortDCR (*((volatile uint32*)0x4005B524))
#define GPIO_PortDAMSEL (*((volatile uint32*)0x4005B528))
#define GPIO_PortDPCTL (*((volatile uint32*)0x4005B52C))
#define GPIO_PortDADCCTL (*((volatile uint32*)0x4005B530))
#define GPIO_PortDDMACTL (*((volatile uint32*)0x4005B534))


#define GPIO_PortDPeriphID4 (*((volatile uint32*)0x4005BFD0))
#define GPIO_PortDPeriphID5 (*((volatile uint32*)0x4005BFD4))
#define GPIO_PortDPeriphID6 (*((volatile uint32*)0x4005BFD8))
#define GPIO_PortDPeriphID7 (*((volatile uint32*)0x4005BFDC))
#define GPIO_PortDPeriphID0 (*((volatile uint32*)0x4005BFE0))
#define GPIO_PortDPeriphID1 (*((volatile uint32*)0x4005BFE4))
#define GPIO_PortDPeriphID2 (*((volatile uint32*)0x4005BFE8))
#define GPIO_PortDPeriphID3 (*((volatile uint32*)0x4005BFEC))



#define GPIO_PortDPCellID0 (*((volatile uint32*)0x4005BFF0))
#define GPIO_PortDPCellID1 (*((volatile uint32*)0x4005BFF4))
#define GPIO_PortDPCellID2 (*((volatile uint32*)0x4005BFF8))
#define GPIO_PortDPCellID3 (*((volatile uint32*)0x4005BFFC))

/*  GPIO_PortE */
#define GPIO_PortEData (*((volatile uint32*)0x4005C3FC))
#define GPIO_PortEDIR (*((volatile uint32*)0x4005C400))
#define GPIO_PortEIS (*((volatile uint32*)0x4005C404))
#define GPIO_PortEIBE (*((volatile uint32*)0x4005C408))
#define GPIO_PortEIEV (*((volatile uint32*)0x4005C40C))
#define GPIO_PortEIM (*((volatile uint32*)0x4005C410))
#define GPIO_PortERIS (*((volatile uint32*)0x4005C414))
#define GPIO_PortEMIS (*((volatile uint32*)0x4005C418))
#define GPIO_PortEICR (*((volatile uint32*)0x4005C41C))
#define GPIO_PortEAFSEL (*((volatile uint32*)0x4005C420))
#define GPIO_PortEDR2R (*((volatile uint32*)0x4005C500))
#define GPIO_PortEDR4R (*((volatile uint32*)0x4005C504))
#define GPIO_PortEDR8R (*((volatile uint32*)0x4005C508))
#define GPIO_PortEODR (*((volatile uint32*)0x4005C50C))
#define GPIO_PortEPUR (*((volatile uint32*)0x4005C510))
#define GPIO_PortEPDR (*((volatile uint32*)0x4005C514))
#define GPIO_PortESLR (*((volatile uint32*)0x4005C518))
#define GPIO_PortEDEN (*((volatile uint32*)0x4005C51C))
#define GPIO_PortELOCK (*((volatile uint32*)0x4005C520))
#define GPIO_PortECR (*((volatile uint32*)0x4005C524))
#define GPIO_PortEAMSEL (*((volatile uint32*)0x4005C528))
#define GPIO_PortEPCTL (*((volatile uint32*)0x4005C52C))
#define GPIO_PortEADCCTL (*((volatile uint32*)0x4005C530))
#define GPIO_PortEDMACTL (*((volatile uint32*)0x4005C534))


#define GPIO_PortEPeriphID4 (*((volatile uint32*)0x4005CFD0))
#define GPIO_PortEPeriphID5 (*((volatile uint32*)0x4005CFD4))
#define GPIO_PortEPeriphID6 (*((volatile uint32*)0x4005CFD8))
#define GPIO_PortEPeriphID7 (*((volatile uint32*)0x4005CFDC))
#define GPIO_PortEPeriphID0 (*((volatile uint32*)0x4005CFE0))
#define GPIO_PortEPeriphID1 (*((volatile uint32*)0x4005CFE4))
#define GPIO_PortEPeriphID2 (*((volatile uint32*)0x4005CFE8))
#define GPIO_PortEPeriphID3 (*((volatile uint32*)0x4005CFEC))



#define GPIO_PortEPCellID0 (*((volatile uint32*)0x4005CFF0))
#define GPIO_PortEPCellID1 (*((volatile uint32*)0x4005CFF4))
#define GPIO_PortEPCellID2 (*((volatile uint32*)0x4005CFF8))
#define GPIO_PortEPCellID3 (*((volatile uint32*)0x4005CFFC))


/*  GPIO_PortF */
#define GPIO_PortFData (*((volatile uint32*)0x4005D3FC))
#define GPIO_PortFDIR (*((volatile uint32*)0x4005D400))
#define GPIO_PortFIS (*((volatile uint32*)0x4005D404))
#define GPIO_PortFIBE (*((volatile uint32*)0x4005D408))
#define GPIO_PortFIEV (*((volatile uint32*)0x4005D40C))
#define GPIO_PortFIM (*((volatile uint32*)0x4005D410))
#define GPIO_PortFRIS (*((volatile uint32*)0x4005D414))
#define GPIO_PortFMIS (*((volatile uint32*)0x4005D418))
#define GPIO_PortFICR (*((volatile uint32*)0x4005D41C))
#define GPIO_PortFAFSEL (*((volatile uint32*)0x4005D420))
#define GPIO_PortFDR2R (*((volatile uint32*)0x4005D500))
#define GPIO_PortFDR4R (*((volatile uint32*)0x4005D504))
#define GPIO_PortFDR8R (*((volatile uint32*)0x4005D508))
#define GPIO_PortFODR (*((volatile uint32*)0x4005D50C))
#define GPIO_PortFPUR (*((volatile uint32*)0x4005D510))
#define GPIO_PortFPDR (*((volatile uint32*)0x4005D514))
#define GPIO_PortFSLR (*((volatile uint32*)0x4005D518))
#define GPIO_PortFDEN (*((volatile uint32*)0x4005D51C))
#define GPIO_PortFLOCK (*((volatile uint32*)0x4005D520))
#define GPIO_PortFCR (*((volatile uint32*)0x4005D524))
#define GPIO_PortFAMSEL (*((volatile uint32*)0x4005D528))
#define GPIO_PortFPCTL (*((volatile uint32*)0x4005D52C))
#define GPIO_PortFADCCTL (*((volatile uint32*)0x4005D530))
#define GPIO_PortFDMACTL (*((volatile uint32*)0x4005D534))


#define GPIO_PortFPeriphID4 (*((volatile uint32*)0x4005DFD0))
#define GPIO_PortFPeriphID5 (*((volatile uint32*)0x4005DFD4))
#define GPIO_PortFPeriphID6 (*((volatile uint32*)0x4005DFD8))
#define GPIO_PortFPeriphID7 (*((volatile uint32*)0x4005DFDC))
#define GPIO_PortFPeriphID0 (*((volatile uint32*)0x4005DFE0))
#define GPIO_PortFPeriphID1 (*((volatile uint32*)0x4005DFE4))
#define GPIO_PortFPeriphID2 (*((volatile uint32*)0x4005DFE8))
#define GPIO_PortFPeriphID3 (*((volatile uint32*)0x4005DFEC))



#define GPIO_PortFPCellID0 (*((volatile uint32*)0x4005DFF0))
#define GPIO_PortFPCellID1 (*((volatile uint32*)0x4005DFF4))
#define GPIO_PortFPCellID2 (*((volatile uint32*)0x4005DFF8))
#define GPIO_PortFPCellID3 (*((volatile uint32*)0x4005DFFC))



    /******************* UART *******************/

/*UART0_ */
#define UART0_DR (*((volatile uint32*)0x4000C000))
#define UART0_RSR (*((volatile uint32*)0x4000C004))
#define UART0_FR (*((volatile uint32*)0x4000C018))
#define UART0_ILPR (*((volatile uint32*)0x4000C020))
#define UART0_IBRD (*((volatile uint32*)0x4000C024))
#define UART0_FBRD (*((volatile uint32*)0x4000C028))
#define UART0_LCRH (*((volatile uint32*)0x4000C02C))
#define UART0_CTL (*((volatile uint32*)0x4000C030))
#define UART0_IFLS (*((volatile uint32*)0x4000C034))
#define UART0_IM (*((volatile uint32*)0x4000C038))
#define UART0_RIS (*((volatile uint32*)0x4000C03C))
#define UART0_MIS (*((volatile uint32*)0x4000C040))
#define UART0_ICR (*((volatile uint32*)0x4000C044))
#define UART0_DMACTL (*((volatile uint32*)0x4000C048))
#define UART0_9BITADDR (*((volatile uint32*)0x4000C0A4))
#define UART0_9BITAMASK (*((volatile uint32*)0x4000C0A8))
#define UART0_PP (*((volatile uint32*)0x4000CFC0))
#define UART0_CC (*((volatile uint32*)0x4000CFC8))
#define UART0_PeriphID4 (*((volatile uint32*)0x4000CFD0))
#define UART0_PeriphID5 (*((volatile uint32*)0x4000CFD4))
#define UART0_PeriphID6 (*((volatile uint32*)0x4000CFD8))
#define UART0_PeriphID7 (*((volatile uint32*)0x4000CFDC))
#define UART0_PeriphID0 (*((volatile uint32*)0x4000CFE0))
#define UART0_PeriphID1 (*((volatile uint32*)0x4000CFE4))
#define UART0_PeriphID2 (*((volatile uint32*)0x4000CFE8))
#define UART0_PeriphID3 (*((volatile uint32*)0x4000CFEC))

#define UART0_PCellID0 (*((volatile uint32*)0x4000CFF0))
#define UART0_PCellID1 (*((volatile uint32*)0x4000CFF4))
#define UART0_PCellID2 (*((volatile uint32*)0x4000CFF8))
#define UART0_PCellID3 (*((volatile uint32*)0x4000CFFC))

/*UART1_ */
#define UART1_DR (*((volatile uint32*)0x4000D000))
#define UART1_RSR (*((volatile uint32*)0x4000D004))
#define UART1_FR (*((volatile uint32*)0x4000D018))
#define UART1_ILPR (*((volatile uint32*)0x4000D020))
#define UART1_IBRD (*((volatile uint32*)0x4000D024))
#define UART1_FBRD (*((volatile uint32*)0x4000D028))
#define UART1_LCRH (*((volatile uint32*)0x4000D02C))
#define UART1_CTL (*((volatile uint32*)0x4000D030))
#define UART1_IFLS (*((volatile uint32*)0x4000D034))
#define UART1_IM (*((volatile uint32*)0x4000D038))
#define UART1_RIS (*((volatile uint32*)0x4000D03C))
#define UART1_MIS (*((volatile uint32*)0x4000D040))
#define UART1_ICR (*((volatile uint32*)0x4000D044))
#define UART1_DMACTL (*((volatile uint32*)0x4000D048))
#define UART1_9BITADDR (*((volatile uint32*)0x4000D0A4))
#define UART1_9BITAMASK (*((volatile uint32*)0x4000D0A8))
#define UART1_PP (*((volatile uint32*)0x4000DFC0))
#define UART1_CC (*((volatile uint32*)0x4000DFC8))
#define UART1_PeriphID4 (*((volatile uint32*)0x4000DFD0))
#define UART1_PeriphID5 (*((volatile uint32*)0x4000DFD4))
#define UART1_PeriphID6 (*((volatile uint32*)0x4000DFD8))
#define UART1_PeriphID7 (*((volatile uint32*)0x4000DFDC))
#define UART1_PeriphID0 (*((volatile uint32*)0x4000DFE0))
#define UART1_PeriphID1 (*((volatile uint32*)0x4000DFE4))
#define UART1_PeriphID2 (*((volatile uint32*)0x4000DFE8))
#define UART1_PeriphID3 (*((volatile uint32*)0x4000DFEC))

#define UART1_PCellID0 (*((volatile uint32*)0x4000DFF0))
#define UART1_PCellID1 (*((volatile uint32*)0x4000DFF4))
#define UART1_PCellID2 (*((volatile uint32*)0x4000DFF8))
#define UART1_PCellID3 (*((volatile uint32*)0x4000DFFC))




                /**********UART2_ **********/
#define UART2_DR (*((volatile uint32*)0x4000E000))
#define UART2_RSR (*((volatile uint32*)0x4000E004))
#define UART2_FR (*((volatile uint32*)0x4000E018))
#define UART2_ILPR (*((volatile uint32*)0x4000E020))
#define UART2_IBRD (*((volatile uint32*)0x4000E024))
#define UART2_FBRD (*((volatile uint32*)0x4000E028))
#define UART2_LCRH (*((volatile uint32*)0x4000E02C))
#define UART2_CTL (*((volatile uint32*)0x4000E030))
#define UART2_IFLS (*((volatile uint32*)0x4000E034))
#define UART2_IM (*((volatile uint32*)0x4000E038))
#define UART2_RIS (*((volatile uint32*)0x4000E03C))
#define UART2_MIS (*((volatile uint32*)0x4000E040))
#define UART2_ICR (*((volatile uint32*)0x4000E044))
#define UART2_DMACTL (*((volatile uint32*)0x4000E048))
#define UART2_9BITADDR (*((volatile uint32*)0x4000E0A4))
#define UART2_9BITAMASK (*((volatile uint32*)0x4000E0A8))
#define UART2_PP (*((volatile uint32*)0x4000EFC0))
#define UART2_CC (*((volatile uint32*)0x4000EFC8))
#define UART2_PeriphID4 (*((volatile uint32*)0x4000EFD0))
#define UART2_PeriphID5 (*((volatile uint32*)0x4000EFD4))
#define UART2_PeriphID6 (*((volatile uint32*)0x4000EFD8))
#define UART2_PeriphID7 (*((volatile uint32*)0x4000EFDC))
#define UART2_PeriphID0 (*((volatile uint32*)0x4000EFE0))
#define UART2_PeriphID1 (*((volatile uint32*)0x4000EFE4))
#define UART2_PeriphID2 (*((volatile uint32*)0x4000EFE8))
#define UART2_PeriphID3 (*((volatile uint32*)0x4000EFEC))

#define UART2_PCellID0 (*((volatile uint32*)0x4000EFF0))
#define UART2_PCellID1 (*((volatile uint32*)0x4000EFF4))
#define UART2_PCellID2 (*((volatile uint32*)0x4000EFF8))
#define UART2_PCellID3 (*((volatile uint32*)0x4000EFFC))


/*UART3_ */
#define UART3_DR (*((volatile uint32*)0x4000F000))
#define UART3_RSR (*((volatile uint32*)0x4000F004))
#define UART3_FR (*((volatile uint32*)0x4000F018))
#define UART3_ILPR (*((volatile uint32*)0x4000F020))
#define UART3_IBRD (*((volatile uint32*)0x4000F024))
#define UART3_FBRD (*((volatile uint32*)0x4000F028))
#define UART3_LCRH (*((volatile uint32*)0x4000F02C))
#define UART3_CTL (*((volatile uint32*)0x4000F030))
#define UART3_IFLS (*((volatile uint32*)0x4000F034))
#define UART3_IM (*((volatile uint32*)0x4000F038))
#define UART3_RIS (*((volatile uint32*)0x4000F03C))
#define UART3_MIS (*((volatile uint32*)0x4000F040))
#define UART3_ICR (*((volatile uint32*)0x4000F044))
#define UART3_DMACTL (*((volatile uint32*)0x4000F048))
#define UART3_9BITADDR (*((volatile uint32*)0x4000F0A4))
#define UART3_9BITAMASK (*((volatile uint32*)0x4000F0A8))
#define UART3_PP (*((volatile uint32*)0x4000FFC0))
#define UART3_CC (*((volatile uint32*)0x4000FFC8))
#define UART3_PeriphID4 (*((volatile uint32*)0x4000FFD0))
#define UART3_PeriphID5 (*((volatile uint32*)0x4000FFD4))
#define UART3_PeriphID6 (*((volatile uint32*)0x4000FFD8))
#define UART3_PeriphID7 (*((volatile uint32*)0x4000FFDC))
#define UART3_PeriphID0 (*((volatile uint32*)0x4000FFE0))
#define UART3_PeriphID1 (*((volatile uint32*)0x4000FFE4))
#define UART3_PeriphID2 (*((volatile uint32*)0x4000FFE8))
#define UART3_PeriphID3 (*((volatile uint32*)0x4000FFEC))

#define UART3_PCellID0 (*((volatile uint32*)0x4000FFF0))
#define UART3_PCellID1 (*((volatile uint32*)0x4000FFF4))
#define UART3_PCellID2 (*((volatile uint32*)0x4000FFF8))
#define UART3_PCellID3 (*((volatile uint32*)0x4000FFFC))

/*UART4_ */
#define UART4_DR (*((volatile uint32*)0x40010000))
#define UART4_RSR (*((volatile uint32*)0x40010004))
#define UART4_FR (*((volatile uint32*)0x40010018))
#define UART4_ILPR (*((volatile uint32*)0x40010020))
#define UART4_IBRD (*((volatile uint32*)0x40010024))
#define UART4_FBRD (*((volatile uint32*)0x40010028))
#define UART4_LCRH (*((volatile uint32*)0x4001002C))
#define UART4_CTL (*((volatile uint32*)0x40010030))
#define UART4_IFLS (*((volatile uint32*)0x40010034))
#define UART4_IM (*((volatile uint32*)0x40010038))
#define UART4_RIS (*((volatile uint32*)0x4001003C))
#define UART4_MIS (*((volatile uint32*)0x40010040))
#define UART4_ICR (*((volatile uint32*)0x40010044))
#define UART4_DMACTL (*((volatile uint32*)0x40010048))
#define UART4_9BITADDR (*((volatile uint32*)0x400100A4))
#define UART4_9BITAMASK (*((volatile uint32*)0x400100A8))
#define UART4_PP (*((volatile uint32*)0x40010FC0))
#define UART4_CC (*((volatile uint32*)0x40010FC8))
#define UART4_PeriphID4 (*((volatile uint32*)0x40010FD0))
#define UART4_PeriphID5 (*((volatile uint32*)0x40010FD4))
#define UART4_PeriphID6 (*((volatile uint32*)0x40010FD8))
#define UART4_PeriphID7 (*((volatile uint32*)0x40010FDC))
#define UART4_PeriphID0 (*((volatile uint32*)0x40010FE0))
#define UART4_PeriphID1 (*((volatile uint32*)0x40010FE4))
#define UART4_PeriphID2 (*((volatile uint32*)0x40010FE8))
#define UART4_PeriphID3 (*((volatile uint32*)0x40010FEC))

#define UART4_PCellID0 (*((volatile uint32*)0x40010FF0))
#define UART4_PCellID1 (*((volatile uint32*)0x40010FF4))
#define UART4_PCellID2 (*((volatile uint32*)0x40010FF8))
#define UART4_PCellID3 (*((volatile uint32*)0x40010FFC))

/*UART5_ */
#define UART5_DR (*((volatile uint32*)0x40011000))
#define UART5_RSR (*((volatile uint32*)0x40011004))
#define UART5_FR (*((volatile uint32*)0x40011018))
#define UART5_ILPR (*((volatile uint32*)0x40011020))
#define UART5_IBRD (*((volatile uint32*)0x40011024))
#define UART5_FBRD (*((volatile uint32*)0x40011028))
#define UART5_LCRH (*((volatile uint32*)0x4001102C))
#define UART5_CTL (*((volatile uint32*)0x40011030))
#define UART5_IFLS (*((volatile uint32*)0x40011034))
#define UART5_IM (*((volatile uint32*)0x40011038))
#define UART5_RIS (*((volatile uint32*)0x4001103C))
#define UART5_MIS (*((volatile uint32*)0x40011040))
#define UART5_ICR (*((volatile uint32*)0x40011044))
#define UART5_DMACTL (*((volatile uint32*)0x40011048))
#define UART5_9BITADDR (*((volatile uint32*)0x400110A4))
#define UART5_9BITAMASK (*((volatile uint32*)0x400110A8))
#define UART5_PP (*((volatile uint32*)0x40011FC0))
#define UART5_CC (*((volatile uint32*)0x40011FC8))
#define UART5_PeriphID4 (*((volatile uint32*)0x40011FD0))
#define UART5_PeriphID5 (*((volatile uint32*)0x40011FD4))
#define UART5_PeriphID6 (*((volatile uint32*)0x40011FD8))
#define UART5_PeriphID7 (*((volatile uint32*)0x40011FDC))
#define UART5_PeriphID0 (*((volatile uint32*)0x40011FE0))
#define UART5_PeriphID1 (*((volatile uint32*)0x40011FE4))
#define UART5_PeriphID2 (*((volatile uint32*)0x40011FE8))
#define UART5_PeriphID3 (*((volatile uint32*)0x40011FEC))

#define UART5_PCellID0 (*((volatile uint32*)0x40011FF0))
#define UART5_PCellID1 (*((volatile uint32*)0x40011FF4))
#define UART5_PCellID2 (*((volatile uint32*)0x40011FF8))
#define UART5_PCellID3 (*((volatile uint32*)0x40011FFC))


/*UART6_ */
#define UART6_DR (*((volatile uint32*)0x40012000))
#define UART6_RSR (*((volatile uint32*)0x40012004))
#define UART6_FR (*((volatile uint32*)0x40012018))
#define UART6_ILPR (*((volatile uint32*)0x40012020))
#define UART6_IBRD (*((volatile uint32*)0x40012024))
#define UART6_FBRD (*((volatile uint32*)0x40012028))
#define UART6_LCRH (*((volatile uint32*)0x4001202C))
#define UART6_CTL (*((volatile uint32*)0x40012030))
#define UART6_IFLS (*((volatile uint32*)0x40012034))
#define UART6_IM (*((volatile uint32*)0x40012038))
#define UART6_RIS (*((volatile uint32*)0x4001203C))
#define UART6_MIS (*((volatile uint32*)0x40012040))
#define UART6_ICR (*((volatile uint32*)0x40012044))
#define UART6_DMACTL (*((volatile uint32*)0x40012048))
#define UART6_9BITADDR (*((volatile uint32*)0x400120A4))
#define UART6_9BITAMASK (*((volatile uint32*)0x400120A8))
#define UART6_PP (*((volatile uint32*)0x40012FC0))
#define UART6_CC (*((volatile uint32*)0x40012FC8))
#define UART6_PeriphID4 (*((volatile uint32*)0x40012FD0))
#define UART6_PeriphID5 (*((volatile uint32*)0x40012FD4))
#define UART6_PeriphID6 (*((volatile uint32*)0x40012FD8))
#define UART6_PeriphID7 (*((volatile uint32*)0x40012FDC))
#define UART6_PeriphID0 (*((volatile uint32*)0x40012FE0))
#define UART6_PeriphID1 (*((volatile uint32*)0x40012FE4))
#define UART6_PeriphID2 (*((volatile uint32*)0x40012FE8))
#define UART6_PeriphID3 (*((volatile uint32*)0x40012FEC))

#define UART6_PCellID0 (*((volatile uint32*)0x40012FF0))
#define UART6_PCellID1 (*((volatile uint32*)0x40012FF4))
#define UART6_PCellID2 (*((volatile uint32*)0x40012FF8))
#define UART6_PCellID3 (*((volatile uint32*)0x40012FFC))


/*UART7_ */
#define UART7_DR (*((volatile uint32*)0x40013000))
#define UART7_RSR (*((volatile uint32*)0x40013004))
#define UART7_FR (*((volatile uint32*)0x40013018))
#define UART7_ILPR (*((volatile uint32*)0x40013020))
#define UART7_IBRD (*((volatile uint32*)0x40013024))
#define UART7_FBRD (*((volatile uint32*)0x40013028))
#define UART7_LCRH (*((volatile uint32*)0x4001302C))
#define UART7_CTL (*((volatile uint32*)0x40013030))
#define UART7_IFLS (*((volatile uint32*)0x40013034))
#define UART7_IM (*((volatile uint32*)0x40013038))
#define UART7_RIS (*((volatile uint32*)0x4001303C))
#define UART7_MIS (*((volatile uint32*)0x40013040))
#define UART7_ICR (*((volatile uint32*)0x40013044))
#define UART7_DMACTL (*((volatile uint32*)0x40013048))
#define UART7_9BITADDR (*((volatile uint32*)0x400130A4))
#define UART7_9BITAMASK (*((volatile uint32*)0x400130A8))
#define UART7_PP (*((volatile uint32*)0x40013FC0))
#define UART7_CC (*((volatile uint32*)0x40013FC8))
#define UART7_PeriphID4 (*((volatile uint32*)0x40013FD0))
#define UART7_PeriphID5 (*((volatile uint32*)0x40013FD4))
#define UART7_PeriphID6 (*((volatile uint32*)0x40013FD8))
#define UART7_PeriphID7 (*((volatile uint32*)0x40013FDC))
#define UART7_PeriphID0 (*((volatile uint32*)0x40013FE0))
#define UART7_PeriphID1 (*((volatile uint32*)0x40013FE4))
#define UART7_PeriphID2 (*((volatile uint32*)0x40013FE8))
#define UART7_PeriphID3 (*((volatile uint32*)0x40013FEC))

#define UART7_PCellID0 (*((volatile uint32*)0x40013FF0))
#define UART7_PCellID1 (*((volatile uint32*)0x40013FF4))
#define UART7_PCellID2 (*((volatile uint32*)0x40013FF8))
#define UART7_PCellID3 (*((volatile uint32*)0x40013FFC))


/****************************************************** ??ADC **********************************************/
/*ADC0*/


#define ADC0ACTSS (*((volatile uint32*)0x40038000))
#define ADC0RIS (*((volatile uint32*)0x40038004))
#define ADC0IM (*((volatile uint32*)0x40038008))
#define ADC0ISC (*((volatile uint32*)0x4003800C))
#define ADC0OSTAT (*((volatile uint32*)0x40038010))
#define ADC0EMUX (*((volatile uint32*)0x40038014))
#define ADC0USTAT (*((volatile uint32*)0x40038018))
#define ADC0TSSEL (*((volatile uint32*)0x4003801C))
#define ADC0SSPRI (*((volatile uint32*)0x40038020))
#define ADC0SPC (*((volatile uint32*)0x40038024))
#define ADC0PSSI (*((volatile uint32*)0x40038028))
#define ADC0SAC (*((volatile uint32*)0x40038030))
#define ADC0DCISC (*((volatile uint32*)0x40038034))
#define ADC0CTL (*((volatile uint32*)0x40038038))
#define ADC0SSMUX0 (*((volatile uint32*)0x40038040))
#define ADC0SSCTL0 (*((volatile uint32*)0x40038044))
#define ADC0SSFIFO0 (*((volatile uint32*)0x40038048))
#define ADC0SSFSTAT0 (*((volatile uint32*)0x4003804C))
#define ADC0SSOP0 (*((volatile uint32*)0x40038050))
#define ADC0SSDC0 (*((volatile uint32*)0x40038054))
#define ADC0SSMUX1 (*((volatile uint32*)0x40038060))
#define ADC0SSCTL1 (*((volatile uint32*)0x40038064))
#define ADC0SSFIFO1 (*((volatile uint32*)0x40038068))
#define ADC0SSFSTAT1 (*((volatile uint32*)0x4003806C))
#define ADC0SSOP1 (*((volatile uint32*)0x40038070))
#define ADC0SSDC1 (*((volatile uint32*)0x40038074))
#define ADC0SSMUX2 (*((volatile uint32*)0x40038080))
#define ADC0SSCTL2 (*((volatile uint32*)0x40038084))
#define ADC0SSFIFO2 (*((volatile uint32*)0x40038088))
#define ADC0SSFSTAT2 (*((volatile uint32*)0x4003808C))
#define ADC0SSOP2 (*((volatile uint32*)0x40038090))
#define ADC0SSDC2 (*((volatile uint32*)0x40038094))
#define ADC0SSMUX3 (*((volatile uint32*)0x400380A0))
#define ADC0SSCTL3 (*((volatile uint32*)0x400380A4))
#define ADC0SSFIFO3 (*((volatile uint32*)0x400380A8))
#define ADC0SSFSTAT3 (*((volatile uint32*)0x400380AC))
#define ADC0SSOP3 (*((volatile uint32*)0x400380B0))
#define ADC0SSDC3 (*((volatile uint32*)0x400380B4))
#define ADC0DCRIC (*((volatile uint32*)0x40038D00))
#define ADC0DCCTL0 (*((volatile uint32*)0x40038E00))
#define ADC0DCCTL1 (*((volatile uint32*)0x40038E04))
#define ADC0DCCTL2 (*((volatile uint32*)0x40038E08))
#define ADC0DCCTL3 (*((volatile uint32*)0x40038E0C))
#define ADC0DCCTL4 (*((volatile uint32*)0x40038E10))
#define ADC0DCCTL5 (*((volatile uint32*)0x40038E14))
#define ADC0DCCTL6 (*((volatile uint32*)0x40038E18))
#define ADC0DCCTL7 (*((volatile uint32*)0x40038E1C))
#define ADC0DCCMP0 (*((volatile uint32*)0x40038E40))
#define ADC0DCCMP1 (*((volatile uint32*)0x40038E44))
#define ADC0DCCMP2 (*((volatile uint32*)0x40038E48))
#define ADC0DCCMP3 (*((volatile uint32*)0x40038E4C))
#define ADC0DCCMP4 (*((volatile uint32*)0x40038E50))
#define ADC0DCCMP5 (*((volatile uint32*)0x40038E54))
#define ADC0DCCMP6 (*((volatile uint32*)0x40038E58))
#define ADC0DCCMP7 (*((volatile uint32*)0x40038E5C))
#define ADC0PP (*((volatile uint32*)0x40038FC0))
#define ADC0PC (*((volatile uint32*)0x40038FC4))
#define ADC0CC (*((volatile uint32*)0x40038FC8))





/*ADC1*/

#define ADC1ACTSS (*((volatile uint32*)0x40039000))
#define ADC1RIS (*((volatile uint32*)0x40039004))
#define ADC1IM (*((volatile uint32*)0x40039008))
#define ADC1ISC (*((volatile uint32*)0x4003900C))
#define ADC1OSTAT (*((volatile uint32*)0x40039010))
#define ADC1EMUX (*((volatile uint32*)0x40039014))
#define ADC1USTAT (*((volatile uint32*)0x40039018))
#define ADC1TSSEL (*((volatile uint32*)0x4003901C))
#define ADC1SSPRI (*((volatile uint32*)0x40039020))
#define ADC1SPC (*((volatile uint32*)0x40039024))
#define ADC1PSSI (*((volatile uint32*)0x40039028))
#define ADC1SAC (*((volatile uint32*)0x40039030))
#define ADC1DCISC (*((volatile uint32*)0x40039034))
#define ADC1CTL (*((volatile uint32*)0x40039038))
#define ADC1SSMUX0 (*((volatile uint32*)0x40039040))
#define ADC1SSCTL0 (*((volatile uint32*)0x40039044))
#define ADC1SSFIFO0 (*((volatile uint32*)0x40039048))
#define ADC1SSFSTAT0 (*((volatile uint32*)0x4003904C))
#define ADC1SSOP0 (*((volatile uint32*)0x40039050))
#define ADC1SSDC0 (*((volatile uint32*)0x40039054))
#define ADC1SSMUX1 (*((volatile uint32*)0x40039060))
#define ADC1SSCTL1 (*((volatile uint32*)0x40039064))
#define ADC1SSFIFO1 (*((volatile uint32*)0x40039068))
#define ADC1SSFSTAT1 (*((volatile uint32*)0x4003906C))
#define ADC1SSOP1 (*((volatile uint32*)0x40039070))
#define ADC1SSDC1 (*((volatile uint32*)0x40039074))
#define ADC1SSMUX2 (*((volatile uint32*)0x40039080))
#define ADC1SSCTL2 (*((volatile uint32*)0x40039084))
#define ADC1SSFIFO2 (*((volatile uint32*)0x40039088))
#define ADC1SSFSTAT2 (*((volatile uint32*)0x4003908C))
#define ADC1SSOP2 (*((volatile uint32*)0x40039090))
#define ADC1SSDC2 (*((volatile uint32*)0x40039094))
#define ADC1SSMUX3 (*((volatile uint32*)0x400390A0))
#define ADC1SSCTL3 (*((volatile uint32*)0x400390A4))
#define ADC1SSFIFO3 (*((volatile uint32*)0x400390A8))
#define ADC1SSFSTAT3 (*((volatile uint32*)0x400390AC))
#define ADC1SSOP3 (*((volatile uint32*)0x400390B0))
#define ADC1SSDC3 (*((volatile uint32*)0x400390B4))
#define ADC1DCRIC (*((volatile uint32*)0x40039D00))
#define ADC1DCCTL0 (*((volatile uint32*)0x40039E00))
#define ADC1DCCTL1 (*((volatile uint32*)0x40039E04))
#define ADC1DCCTL2 (*((volatile uint32*)0x40039E08))
#define ADC1DCCTL3 (*((volatile uint32*)0x40039E0C))
#define ADC1DCCTL4 (*((volatile uint32*)0x40039E10))
#define ADC1DCCTL5 (*((volatile uint32*)0x40039E14))
#define ADC1DCCTL6 (*((volatile uint32*)0x40039E18))
#define ADC1DCCTL7 (*((volatile uint32*)0x40039E1C))
#define ADC1DCCMP0 (*((volatile uint32*)0x40039E40))
#define ADC1DCCMP1 (*((volatile uint32*)0x40039E44))
#define ADC1DCCMP2 (*((volatile uint32*)0x40039E48))
#define ADC1DCCMP3 (*((volatile uint32*)0x40039E4C))
#define ADC1DCCMP4 (*((volatile uint32*)0x40039E50))
#define ADC1DCCMP5 (*((volatile uint32*)0x40039E54))
#define ADC1DCCMP6 (*((volatile uint32*)0x40039E58))
#define ADC1DCCMP7 (*((volatile uint32*)0x40039E5C))
#define ADC1PP (*((volatile uint32*)0x40039FC0))
#define ADC1PC (*((volatile uint32*)0x40039FC4))
#define ADC1CC (*((volatile uint32*)0x40039FC8))







#endif /* REGMAP_H_ */
