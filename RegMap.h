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





#endif /* REGMAP_H_ */
