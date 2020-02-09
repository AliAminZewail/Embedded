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





    /******************* GPIO *******************/
// GPIO_PortA
#define GPIO_PortAData (*((volatile uint32*)0x400043FC))
#define GPIO_PortADIR (*((volatile uint32*)0x40004400))
#define GPIO_PortAIS (*((volatile uint32*)0x40004404))
#define GPIO_PortAIBE (*((volatile uint32*)0x40004408))
#define GPIO_PortAIEV (*((volatile uint32*)0x4000440C))
#define GPIO_PortAIM (*((volatile uint32*)0x40004410))
#define GPIO_PortARIS (*((volatile uint32*)0x40004414))
#define GPIO_PortAMIS (*((volatile uint32*)0x40004418))
#define GPIO_PortAICR (*((volatile uint32*)0x4000441C))
#define GPIO_PortAAFSEL (*((volatile uint32*)0x40004420))
#define GPIO_PortADR2R (*((volatile uint32*)0x40004500))
#define GPIO_PortADR4R (*((volatile uint32*)0x40004504))
#define GPIO_PortADR8R (*((volatile uint32*)0x40004508))
#define GPIO_PortAODR (*((volatile uint32*)0x4000450C))
#define GPIO_PortAPUR (*((volatile uint32*)0x40004510))
#define GPIO_PortAPDR (*((volatile uint32*)0x40004514))
#define GPIO_PortASLR (*((volatile uint32*)0x40004518))
#define GPIO_PortADEN (*((volatile uint32*)0x4000451C))
#define GPIO_PortALOCK (*((volatile uint32*)0x40004520))
#define GPIO_PortACR (*((volatile uint32*)0x40004524))
#define GPIO_PortAAMSEL (*((volatile uint32*)0x40004528))
#define GPIO_PortAPCTL (*((volatile uint32*)0x4000452C))
#define GPIO_PortAADCCTL (*((volatile uint32*)0x40004530))
#define GPIO_PortADMACTL (*((volatile uint32*)0x40004534))


#define GPIO_PortAPeriphID4 (*((volatile uint32*)0x40004FD0))
#define GPIO_PortAPeriphID5 (*((volatile uint32*)0x40004FD4))
#define GPIO_PortAPeriphID6 (*((volatile uint32*)0x40004FD8))
#define GPIO_PortAPeriphID7 (*((volatile uint32*)0x40004FDC))
#define GPIO_PortAPeriphID0 (*((volatile uint32*)0x40004FE0))
#define GPIO_PortAPeriphID1 (*((volatile uint32*)0x40004FE4))
#define GPIO_PortAPeriphID2 (*((volatile uint32*)0x40004FE8))
#define GPIO_PortAPeriphID3 (*((volatile uint32*)0x40004FEC))



#define GPIO_PortAPCellID0 (*((volatile uint32*)0x40004FF0))
#define GPIO_PortAPCellID1 (*((volatile uint32*)0x40004FF4))
#define GPIO_PortAPCellID2 (*((volatile uint32*)0x40004FF8))
#define GPIO_PortAPCellID3 (*((volatile uint32*)0x40004FFC))



/*  GPIO_PortB */
#define GPIO_PortBData (*((volatile uint32*)0x400053FC))
#define GPIO_PortBDIR (*((volatile uint32*)0x40005400))
#define GPIO_PortBIS (*((volatile uint32*)0x40005404))
#define GPIO_PortBIBE (*((volatile uint32*)0x40005408))
#define GPIO_PortBIEV (*((volatile uint32*)0x4000540C))
#define GPIO_PortBIM (*((volatile uint32*)0x40005410))
#define GPIO_PortBRIS (*((volatile uint32*)0x40005414))
#define GPIO_PortBMIS (*((volatile uint32*)0x40005418))
#define GPIO_PortBICR (*((volatile uint32*)0x4000541C))
#define GPIO_PortBAFSEL (*((volatile uint32*)0x40005420))
#define GPIO_PortBDR2R (*((volatile uint32*)0x40005500))
#define GPIO_PortBDR4R (*((volatile uint32*)0x40005504))
#define GPIO_PortBDR8R (*((volatile uint32*)0x40005508))
#define GPIO_PortBODR (*((volatile uint32*)0x4000550C))
#define GPIO_PortBPUR (*((volatile uint32*)0x40005510))
#define GPIO_PortBPDR (*((volatile uint32*)0x40005514))
#define GPIO_PortBSLR (*((volatile uint32*)0x40005518))
#define GPIO_PortBDEN (*((volatile uint32*)0x4000551C))
#define GPIO_PortBLOCK (*((volatile uint32*)0x40005520))
#define GPIO_PortBCR (*((volatile uint32*)0x40005524))
#define GPIO_PortBAMSEL (*((volatile uint32*)0x40005528))
#define GPIO_PortBPCTL (*((volatile uint32*)0x4000552C))
#define GPIO_PortBADCCTL (*((volatile uint32*)0x40005530))
#define GPIO_PortBDMACTL (*((volatile uint32*)0x40005534))


#define GPIO_PortBPeriphID4 (*((volatile uint32*)0x40005FD0))
#define GPIO_PortBPeriphID5 (*((volatile uint32*)0x40005FD4))
#define GPIO_PortBPeriphID6 (*((volatile uint32*)0x40005FD8))
#define GPIO_PortBPeriphID7 (*((volatile uint32*)0x40005FDC))
#define GPIO_PortBPeriphID0 (*((volatile uint32*)0x40005FE0))
#define GPIO_PortBPeriphID1 (*((volatile uint32*)0x40005FE4))
#define GPIO_PortBPeriphID2 (*((volatile uint32*)0x40005FE8))
#define GPIO_PortBPeriphID3 (*((volatile uint32*)0x40005FEC))



#define GPIO_PortBPCellID0 (*((volatile uint32*)0x40005FF0))
#define GPIO_PortBPCellID1 (*((volatile uint32*)0x40005FF4))
#define GPIO_PortBPCellID2 (*((volatile uint32*)0x40005FF8))
#define GPIO_PortBPCellID3 (*((volatile uint32*)0x40005FFC))


/*  GPIO_PortC */
#define GPIO_PortCData (*((volatile uint32*)0x400063FC))
#define GPIO_PortCDIR (*((volatile uint32*)0x40006400))
#define GPIO_PortCIS (*((volatile uint32*)0x40006404))
#define GPIO_PortCIBE (*((volatile uint32*)0x40006408))
#define GPIO_PortCIEV (*((volatile uint32*)0x4000640C))
#define GPIO_PortCIM (*((volatile uint32*)0x40006410))
#define GPIO_PortCRIS (*((volatile uint32*)0x40006414))
#define GPIO_PortCMIS (*((volatile uint32*)0x40006418))
#define GPIO_PortCICR (*((volatile uint32*)0x4000641C))
#define GPIO_PortCAFSEL (*((volatile uint32*)0x40006420))
#define GPIO_PortCDR2R (*((volatile uint32*)0x40006500))
#define GPIO_PortCDR4R (*((volatile uint32*)0x40006504))
#define GPIO_PortCDR8R (*((volatile uint32*)0x40006508))
#define GPIO_PortCODR (*((volatile uint32*)0x4000650C))
#define GPIO_PortCPUR (*((volatile uint32*)0x40006510))
#define GPIO_PortCPDR (*((volatile uint32*)0x40006514))
#define GPIO_PortCSLR (*((volatile uint32*)0x40006518))
#define GPIO_PortCDEN (*((volatile uint32*)0x4000651C))
#define GPIO_PortCLOCK (*((volatile uint32*)0x40006520))
#define GPIO_PortCCR (*((volatile uint32*)0x40006524))
#define GPIO_PortCAMSEL (*((volatile uint32*)0x40006528))
#define GPIO_PortCPCTL (*((volatile uint32*)0x4000652C))
#define GPIO_PortCADCCTL (*((volatile uint32*)0x40006530))
#define GPIO_PortCDMACTL (*((volatile uint32*)0x40006534))


#define GPIO_PortCPeriphID4 (*((volatile uint32*)0x40006FD0))
#define GPIO_PortCPeriphID5 (*((volatile uint32*)0x40006FD4))
#define GPIO_PortCPeriphID6 (*((volatile uint32*)0x40006FD8))
#define GPIO_PortCPeriphID7 (*((volatile uint32*)0x40006FDC))
#define GPIO_PortCPeriphID0 (*((volatile uint32*)0x40006FE0))
#define GPIO_PortCPeriphID1 (*((volatile uint32*)0x40006FE4))
#define GPIO_PortCPeriphID2 (*((volatile uint32*)0x40006FE8))
#define GPIO_PortCPeriphID3 (*((volatile uint32*)0x40006FEC))



#define GPIO_PortCPCellID0 (*((volatile uint32*)0x40006FF0))
#define GPIO_PortCPCellID1 (*((volatile uint32*)0x40006FF4))
#define GPIO_PortCPCellID2 (*((volatile uint32*)0x40006FF8))
#define GPIO_PortCPCellID3 (*((volatile uint32*)0x40006FFC))



/*  GPIO_PortD */
#define GPIO_PortDData (*((volatile uint32*)0x400073FC))
#define GPIO_PortDDIR (*((volatile uint32*)0x40007400))
#define GPIO_PortDIS (*((volatile uint32*)0x40007404))
#define GPIO_PortDIBE (*((volatile uint32*)0x40007408))
#define GPIO_PortDIEV (*((volatile uint32*)0x4000740C))
#define GPIO_PortDIM (*((volatile uint32*)0x40007410))
#define GPIO_PortDRIS (*((volatile uint32*)0x40007414))
#define GPIO_PortDMIS (*((volatile uint32*)0x40007418))
#define GPIO_PortDICR (*((volatile uint32*)0x4000741C))
#define GPIO_PortDAFSEL (*((volatile uint32*)0x40007420))
#define GPIO_PortDDR2R (*((volatile uint32*)0x40007500))
#define GPIO_PortDDR4R (*((volatile uint32*)0x40007504))
#define GPIO_PortDDR8R (*((volatile uint32*)0x40007508))
#define GPIO_PortDODR (*((volatile uint32*)0x4000750C))
#define GPIO_PortDPUR (*((volatile uint32*)0x40007510))
#define GPIO_PortDPDR (*((volatile uint32*)0x40007514))
#define GPIO_PortDSLR (*((volatile uint32*)0x40007518))
#define GPIO_PortDDEN (*((volatile uint32*)0x4000751C))
#define GPIO_PortDLOCK (*((volatile uint32*)0x40007520))
#define GPIO_PortDCR (*((volatile uint32*)0x40007524))
#define GPIO_PortDAMSEL (*((volatile uint32*)0x40007528))
#define GPIO_PortDPCTL (*((volatile uint32*)0x4000752C))
#define GPIO_PortDADCCTL (*((volatile uint32*)0x40007530))
#define GPIO_PortDDMACTL (*((volatile uint32*)0x40007534))


#define GPIO_PortDPeriphID4 (*((volatile uint32*)0x40007FD0))
#define GPIO_PortDPeriphID5 (*((volatile uint32*)0x40007FD4))
#define GPIO_PortDPeriphID6 (*((volatile uint32*)0x40007FD8))
#define GPIO_PortDPeriphID7 (*((volatile uint32*)0x40007FDC))
#define GPIO_PortDPeriphID0 (*((volatile uint32*)0x40007FE0))
#define GPIO_PortDPeriphID1 (*((volatile uint32*)0x40007FE4))
#define GPIO_PortDPeriphID2 (*((volatile uint32*)0x40007FE8))
#define GPIO_PortDPeriphID3 (*((volatile uint32*)0x40007FEC))



#define GPIO_PortDPCellID0 (*((volatile uint32*)0x40007FF0))
#define GPIO_PortDPCellID1 (*((volatile uint32*)0x40007FF4))
#define GPIO_PortDPCellID2 (*((volatile uint32*)0x40007FF8))
#define GPIO_PortDPCellID3 (*((volatile uint32*)0x40007FFC))

/*  GPIO_PortE */
#define GPIO_PortEData (*((volatile uint32*)0x400243FC))
#define GPIO_PortEDIR (*((volatile uint32*)0x40024400))
#define GPIO_PortEIS (*((volatile uint32*)0x40024404))
#define GPIO_PortEIBE (*((volatile uint32*)0x40024408))
#define GPIO_PortEIEV (*((volatile uint32*)0x4002440C))
#define GPIO_PortEIM (*((volatile uint32*)0x40024410))
#define GPIO_PortERIS (*((volatile uint32*)0x40024414))
#define GPIO_PortEMIS (*((volatile uint32*)0x40024418))
#define GPIO_PortEICR (*((volatile uint32*)0x4002441C))
#define GPIO_PortEAFSEL (*((volatile uint32*)0x40024420))
#define GPIO_PortEDR2R (*((volatile uint32*)0x40024500))
#define GPIO_PortEDR4R (*((volatile uint32*)0x40024504))
#define GPIO_PortEDR8R (*((volatile uint32*)0x40024508))
#define GPIO_PortEODR (*((volatile uint32*)0x4002450C))
#define GPIO_PortEPUR (*((volatile uint32*)0x40024510))
#define GPIO_PortEPDR (*((volatile uint32*)0x40024514))
#define GPIO_PortESLR (*((volatile uint32*)0x40024518))
#define GPIO_PortEDEN (*((volatile uint32*)0x4002451C))
#define GPIO_PortELOCK (*((volatile uint32*)0x40024520))
#define GPIO_PortECR (*((volatile uint32*)0x40024524))
#define GPIO_PortEAMSEL (*((volatile uint32*)0x40024528))
#define GPIO_PortEPCTL (*((volatile uint32*)0x4002452C))
#define GPIO_PortEADCCTL (*((volatile uint32*)0x40024530))
#define GPIO_PortEDMACTL (*((volatile uint32*)0x40024534))


#define GPIO_PortEPeriphID4 (*((volatile uint32*)0x40024FD0))
#define GPIO_PortEPeriphID5 (*((volatile uint32*)0x40024FD4))
#define GPIO_PortEPeriphID6 (*((volatile uint32*)0x40024FD8))
#define GPIO_PortEPeriphID7 (*((volatile uint32*)0x40024FDC))
#define GPIO_PortEPeriphID0 (*((volatile uint32*)0x40024FE0))
#define GPIO_PortEPeriphID1 (*((volatile uint32*)0x40024FE4))
#define GPIO_PortEPeriphID2 (*((volatile uint32*)0x40024FE8))
#define GPIO_PortEPeriphID3 (*((volatile uint32*)0x40024FEC))



#define GPIO_PortEPCellID0 (*((volatile uint32*)0x40024FF0))
#define GPIO_PortEPCellID1 (*((volatile uint32*)0x40024FF4))
#define GPIO_PortEPCellID2 (*((volatile uint32*)0x40024FF8))
#define GPIO_PortEPCellID3 (*((volatile uint32*)0x40024FFC))


/*  GPIO_PortF */
#define GPIO_PortFData (*((volatile uint32*)0x400253FC))
#define GPIO_PortFDIR (*((volatile uint32*)0x40025400))
#define GPIO_PortFIS (*((volatile uint32*)0x40025404))
#define GPIO_PortFIBE (*((volatile uint32*)0x40025408))
#define GPIO_PortFIEV (*((volatile uint32*)0x4002540C))
#define GPIO_PortFIM (*((volatile uint32*)0x40025410))
#define GPIO_PortFRIS (*((volatile uint32*)0x40025414))
#define GPIO_PortFMIS (*((volatile uint32*)0x40025418))
#define GPIO_PortFICR (*((volatile uint32*)0x4002541C))
#define GPIO_PortFAFSEL (*((volatile uint32*)0x40025420))
#define GPIO_PortFDR2R (*((volatile uint32*)0x40025500))
#define GPIO_PortFDR4R (*((volatile uint32*)0x40025504))
#define GPIO_PortFDR8R (*((volatile uint32*)0x40025508))
#define GPIO_PortFODR (*((volatile uint32*)0x4002550C))
#define GPIO_PortFPUR (*((volatile uint32*)0x40025510))
#define GPIO_PortFPDR (*((volatile uint32*)0x40025514))
#define GPIO_PortFSLR (*((volatile uint32*)0x40025518))
#define GPIO_PortFDEN (*((volatile uint32*)0x4002551C))
#define GPIO_PortFLOCK (*((volatile uint32*)0x40025520))
#define GPIO_PortFCR (*((volatile uint32*)0x40025524))
#define GPIO_PortFAMSEL (*((volatile uint32*)0x40025528))
#define GPIO_PortFPCTL (*((volatile uint32*)0x4002552C))
#define GPIO_PortFADCCTL (*((volatile uint32*)0x40025530))
#define GPIO_PortFDMACTL (*((volatile uint32*)0x40025534))


#define GPIO_PortFPeriphID4 (*((volatile uint32*)0x40025FD0))
#define GPIO_PortFPeriphID5 (*((volatile uint32*)0x40025FD4))
#define GPIO_PortFPeriphID6 (*((volatile uint32*)0x40025FD8))
#define GPIO_PortFPeriphID7 (*((volatile uint32*)0x40025FDC))
#define GPIO_PortFPeriphID0 (*((volatile uint32*)0x40025FE0))
#define GPIO_PortFPeriphID1 (*((volatile uint32*)0x40025FE4))
#define GPIO_PortFPeriphID2 (*((volatile uint32*)0x40025FE8))
#define GPIO_PortFPeriphID3 (*((volatile uint32*)0x40025FEC))



#define GPIO_PortFPCellID0 (*((volatile uint32*)0x40025FF0))
#define GPIO_PortFPCellID1 (*((volatile uint32*)0x40025FF4))
#define GPIO_PortFPCellID2 (*((volatile uint32*)0x40025FF8))
#define GPIO_PortFPCellID3 (*((volatile uint32*)0x40025FFC))





#endif /* REGMAP_H_ */
