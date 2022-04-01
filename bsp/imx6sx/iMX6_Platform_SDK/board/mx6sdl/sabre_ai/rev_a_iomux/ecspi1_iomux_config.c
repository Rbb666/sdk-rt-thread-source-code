/*
 * Copyright (c) 2012, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

// File: ecspi1_iomux_config.c

/* ------------------------------------------------------------------------------
 * <auto-generated>
 *     This code was generated by a tool.
 *     Runtime Version:3.4.0.0
 *
 *     Changes to this file may cause incorrect behavior and will be lost if
 *     the code is regenerated.
 * </auto-generated>
 * ------------------------------------------------------------------------------
*/

#include "iomux_config.h"
#include "registers/regsiomuxc.h"

// Function to configure IOMUXC for ecspi1 module.
void ecspi1_iomux_config(void)
{
    // Config ecspi1.ECSPI1_MISO to pad EIM_DATA17(F21)
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA17_WR(0x00000001);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA17_WR(0x0001B0B0);
    // HW_IOMUXC_ECSPI1_MISO_SELECT_INPUT_WR(0x00000000);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DATA17(0x020E0148)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [3:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: eim signal: EIM_DATA17
    //     ALT1 (1) - Select instance: ecspi1 signal: ECSPI1_MISO
    //     ALT2 (2) - Select instance: ipu1 signal: IPU1_DI0_PIN06
    //     ALT3 (3) - Select instance: ipu1 signal: IPU1_CSI1_PIXCLK
    //     ALT4 (4) - Select instance: dcic1 signal: DCIC1_OUT
    //     ALT5 (5) - Select instance: gpio3 signal: GPIO3_IO17
    //     ALT6 (6) - Select instance: i2c3 signal: I2C3_SCL
    //     ALT8 (8) - Select instance: epdc signal: EPDC_VCOM0
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA17_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA17_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA17_MUX_MODE_V(ALT1));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DATA17(0x020E0518)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA17_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA17_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA17_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA17_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA17_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA17_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA17_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA17_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA17_SRE_V(SLOW));
    // Pad EIM_DATA17 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_ECSPI1_MISO_SELECT_INPUT(0x020E07DC)
    //   DAISY [1:0] - MUX Mode Select Field Reset: CSI0_DATA06_ALT2
    //                 Selecting Pads Involved in Daisy Chain.
    //     CSI0_DATA06_ALT2 (0) - Select signal ecspi1 ECSPI1_MISO as input from pad CSI0_DATA06(ALT2).
    //     DISP0_DATA22_ALT2 (1) - Select signal ecspi1 ECSPI1_MISO as input from pad DISP0_DATA22(ALT2).
    //     EIM_DATA17_ALT1 (2) - Select signal ecspi1 ECSPI1_MISO as input from pad EIM_DATA17(ALT1).
    //     KEY_COL1_ALT0 (3) - Select signal ecspi1 ECSPI1_MISO as input from pad KEY_COL1(ALT0).
    HW_IOMUXC_ECSPI1_MISO_SELECT_INPUT_WR(
            BF_IOMUXC_ECSPI1_MISO_SELECT_INPUT_DAISY_V(CSI0_DATA06_ALT2));

    // Config ecspi1.ECSPI1_MOSI to pad EIM_DATA18(D24)
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA18_WR(0x00000001);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_WR(0x0001B0B0);
    // HW_IOMUXC_ECSPI1_MOSI_SELECT_INPUT_WR(0x00000000);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DATA18(0x020E014C)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [3:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: eim signal: EIM_DATA18
    //     ALT1 (1) - Select instance: ecspi1 signal: ECSPI1_MOSI
    //     ALT2 (2) - Select instance: ipu1 signal: IPU1_DI0_PIN07
    //     ALT3 (3) - Select instance: ipu1 signal: IPU1_CSI1_DATA17
    //     ALT4 (4) - Select instance: ipu1 signal: IPU1_DI1_D0_CS
    //     ALT5 (5) - Select instance: gpio3 signal: GPIO3_IO18
    //     ALT6 (6) - Select instance: i2c3 signal: I2C3_SDA
    //     ALT8 (8) - Select instance: epdc signal: EPDC_VCOM1
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA18_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA18_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA18_MUX_MODE_V(ALT1));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18(0x020E051C)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA18_SRE_V(SLOW));
    // Pad EIM_DATA18 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_ECSPI1_MOSI_SELECT_INPUT(0x020E07E0)
    //   DAISY [1:0] - MUX Mode Select Field Reset: CSI0_DATA05_ALT2
    //                 Selecting Pads Involved in Daisy Chain.
    //     CSI0_DATA05_ALT2 (0) - Select signal ecspi1 ECSPI1_MOSI as input from pad CSI0_DATA05(ALT2).
    //     DISP0_DATA21_ALT2 (1) - Select signal ecspi1 ECSPI1_MOSI as input from pad DISP0_DATA21(ALT2).
    //     EIM_DATA18_ALT1 (2) - Select signal ecspi1 ECSPI1_MOSI as input from pad EIM_DATA18(ALT1).
    //     KEY_ROW0_ALT0 (3) - Select signal ecspi1 ECSPI1_MOSI as input from pad KEY_ROW0(ALT0).
    HW_IOMUXC_ECSPI1_MOSI_SELECT_INPUT_WR(
            BF_IOMUXC_ECSPI1_MOSI_SELECT_INPUT_DAISY_V(CSI0_DATA05_ALT2));

    // Config ecspi1.ECSPI1_RDY to pad GPIO19(P5)
    // HW_IOMUXC_SW_MUX_CTL_PAD_GPIO19_WR(0x00000004);
    // HW_IOMUXC_SW_PAD_CTL_PAD_GPIO19_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_GPIO19(0x020E0220)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: kpp signal: KEY_COL5
    //     ALT1 (1) - Select instance: enet signal: ENET_1588_EVENT0_OUT
    //     ALT2 (2) - Select instance: spdif signal: SPDIF_OUT
    //     ALT3 (3) - Select instance: ccm signal: CCM_CLKO1
    //     ALT4 (4) - Select instance: ecspi1 signal: ECSPI1_RDY
    //     ALT5 (5) - Select instance: gpio4 signal: GPIO4_IO05
    //     ALT6 (6) - Select instance: enet signal: ENET_TX_ER
    HW_IOMUXC_SW_MUX_CTL_PAD_GPIO19_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_GPIO19_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_GPIO19_MUX_MODE_V(ALT4));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_GPIO19(0x020E05F0)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_GPIO19_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO19_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO19_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO19_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO19_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO19_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO19_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO19_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO19_SRE_V(SLOW));

    // Config ecspi1.ECSPI1_SCLK to pad EIM_DATA16(C25)
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA16_WR(0x00000001);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA16_WR(0x0001B0B0);
    // HW_IOMUXC_ECSPI1_CSPI_CLK_IN_SELECT_INPUT_WR(0x00000000);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DATA16(0x020E0144)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [3:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: eim signal: EIM_DATA16
    //     ALT1 (1) - Select instance: ecspi1 signal: ECSPI1_SCLK
    //     ALT2 (2) - Select instance: ipu1 signal: IPU1_DI0_PIN05
    //     ALT3 (3) - Select instance: ipu1 signal: IPU1_CSI1_DATA18
    //     ALT4 (4) - Select instance: hdmi signal: HDMI_TX_DDC_SDA
    //     ALT5 (5) - Select instance: gpio3 signal: GPIO3_IO16
    //     ALT6 (6) - Select instance: i2c2 signal: I2C2_SDA
    //     ALT8 (8) - Select instance: epdc signal: EPDC_DATA10
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA16_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA16_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA16_MUX_MODE_V(ALT1));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DATA16(0x020E0514)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA16_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA16_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA16_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA16_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA16_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA16_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA16_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA16_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA16_SRE_V(SLOW));
    // Pad EIM_DATA16 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_ECSPI1_CSPI_CLK_IN_SELECT_INPUT(0x020E07D8)
    //   DAISY [1:0] - MUX Mode Select Field Reset: CSI0_DATA04_ALT2
    //                 Selecting Pads Involved in Daisy Chain.
    //     CSI0_DATA04_ALT2 (0) - Select signal ecspi1 ECSPI1_SCLK as input from pad CSI0_DATA04(ALT2).
    //     DISP0_DATA20_ALT2 (1) - Select signal ecspi1 ECSPI1_SCLK as input from pad DISP0_DATA20(ALT2).
    //     EIM_DATA16_ALT1 (2) - Select signal ecspi1 ECSPI1_SCLK as input from pad EIM_DATA16(ALT1).
    //     KEY_COL0_ALT0 (3) - Select signal ecspi1 ECSPI1_SCLK as input from pad KEY_COL0(ALT0).
    HW_IOMUXC_ECSPI1_CSPI_CLK_IN_SELECT_INPUT_WR(
            BF_IOMUXC_ECSPI1_CSPI_CLK_IN_SELECT_INPUT_DAISY_V(CSI0_DATA04_ALT2));

    // Config ecspi1.ECSPI1_SS1 to pad EIM_DATA19(G21)
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA19_WR(0x00000001);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA19_WR(0x0001B0B0);
    // HW_IOMUXC_ECSPI1_SS1_SELECT_INPUT_WR(0x00000000);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DATA19(0x020E0150)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [3:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: eim signal: EIM_DATA19
    //     ALT1 (1) - Select instance: ecspi1 signal: ECSPI1_SS1
    //     ALT2 (2) - Select instance: ipu1 signal: IPU1_DI0_PIN08
    //     ALT3 (3) - Select instance: ipu1 signal: IPU1_CSI1_DATA16
    //     ALT4 (4) - Select instance: uart1 signal: UART1_CTS_B
    //     ALT5 (5) - Select instance: gpio3 signal: GPIO3_IO19
    //     ALT6 (6) - Select instance: epit1 signal: EPIT1_OUT
    //     ALT8 (8) - Select instance: epdc signal: EPDC_DATA12
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA19_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA19_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_DATA19_MUX_MODE_V(ALT1));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DATA19(0x020E0520)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA19_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA19_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA19_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA19_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA19_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA19_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA19_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA19_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_DATA19_SRE_V(SLOW));
    // Pad EIM_DATA19 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_ECSPI1_SS1_SELECT_INPUT(0x020E07E8)
    //   DAISY [1:0] - MUX Mode Select Field Reset: DISP0_DATA15_ALT2
    //                 Selecting Pads Involved in Daisy Chain.
    //     DISP0_DATA15_ALT2 (0) - Select signal ecspi1 ECSPI1_SS1 as input from pad DISP0_DATA15(ALT2).
    //     EIM_DATA19_ALT1 (1) - Select signal ecspi1 ECSPI1_SS1 as input from pad EIM_DATA19(ALT1).
    //     KEY_COL2_ALT0 (2) - Select signal ecspi1 ECSPI1_SS1 as input from pad KEY_COL2(ALT0).
    HW_IOMUXC_ECSPI1_SS1_SELECT_INPUT_WR(
            BF_IOMUXC_ECSPI1_SS1_SELECT_INPUT_DAISY_V(DISP0_DATA15_ALT2));
}
