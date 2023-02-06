/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v11.0
processor: MIMXRT1064xxxxA
package_id: MIMXRT1064DVL6A
mcu_data: ksdk2_0
processor_version: 12.0.1
functionalGroups:
- name: BOARD_InitPeripherals
  UUID: 82322bba-3bfe-49e9-a5b1-c80657b3b666
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'system'
- type_id: 'system_54b53072540eeeb8f8e9343e71f28176'
- global_system_definitions:
  - user_definitions: ''
  - user_includes: ''
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'uart_cmsis_common'
- type_id: 'uart_cmsis_common_9cb8e302497aa696fdbb5a4fd622c2a8'
- global_USART_CMSIS_common:
  - quick_selection: 'default'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'gpio_adapter_common'
- type_id: 'gpio_adapter_common_57579b9ac814fe26bf95df0a384c36b6'
- global_gpio_adapter_common:
  - quick_selection: 'default'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "peripherals.h"

/***********************************************************************************************************************
 * BOARD_InitPeripherals functional group
 **********************************************************************************************************************/
/***********************************************************************************************************************
 * MPU initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'MPU'
- type: 'mpu_utility'
- mode: 'MPU'
- custom_name_enabled: 'false'
- type_id: 'mpu_utility_bc3ea1f6add76edb6050f698d423d163'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'MPU'
- config_sets:
  - mpu_init:
    - mpuInit: 'disabled'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/* Empty initialization function (commented out)
static void MPU_init(void) {
} */

/***********************************************************************************************************************
 * NVIC initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'NVIC'
- type: 'nvic'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'nvic_57b5eef3774cc60acaede6f5b8bddc67'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'NVIC'
- config_sets:
  - nvic:
    - interrupt_table:
      - 0: []
    - interrupts: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/* Empty initialization function (commented out)
static void NVIC_init(void) {
} */

/***********************************************************************************************************************
 * ADC1 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'ADC1'
- type: 'adc_12b1msps_sar'
- mode: 'ADC_GENERAL'
- custom_name_enabled: 'false'
- type_id: 'adc_12b1msps_sar_6a490e886349a7b2b07bed10ce7b299b'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'ADC1'
- config_sets:
  - fsl_adc:
    - clockConfig:
      - clockSource: 'kADC_ClockSourceAD'
      - clockSourceFreq: 'custom:10 MHz'
      - clockDriver: 'kADC_ClockDriver2'
      - samplePeriodMode: 'kADC_SamplePeriodShort2Clocks'
      - enableAsynchronousClockOutput: 'true'
    - conversionConfig:
      - resolution: 'kADC_Resolution12Bit'
      - hardwareAverageMode: 'kADC_HardwareAverageDisable'
      - enableHardwareTrigger: 'software'
      - enableHighSpeed: 'false'
      - enableLowPower: 'false'
      - enableContinuousConversion: 'false'
      - enableOverWrite: 'false'
      - enableDma: 'false'
    - resultingTime: []
    - resultCorrection:
      - doAutoCalibration: 'false'
      - offset: '0'
    - hardwareCompareConfiguration:
      - hardwareCompareMode: 'disabled'
      - value1: '0'
      - value2: '0'
    - enableInterrupt: 'false'
    - adc_interrupt:
      - IRQn: 'ADC1_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - adc_channels_config: []
    - quick_selection: 'QS_ADC_1'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const adc_config_t ADC1_config = {
  .enableOverWrite = false,
  .enableContinuousConversion = false,
  .enableHighSpeed = false,
  .enableLowPower = false,
  .enableLongSample = false,
  .enableAsynchronousClockOutput = true,
  .referenceVoltageSource = kADC_ReferenceVoltageSourceAlt0,
  .samplePeriodMode = kADC_SamplePeriodShort2Clocks,
  .clockSource = kADC_ClockSourceAD,
  .clockDriver = kADC_ClockDriver2,
  .resolution = kADC_Resolution12Bit
};

static void ADC1_init(void) {
  /* Initialize ADC1 peripheral. */
  ADC_Init(ADC1_PERIPHERAL, &ADC1_config);
}

/***********************************************************************************************************************
 * CAN1 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'CAN1'
- type: 'flexcan'
- mode: 'interrupts'
- custom_name_enabled: 'false'
- type_id: 'flexcan_a98f4e39f821600f664c89f66f55b020'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'CAN1'
- config_sets:
  - interruptsCfg:
    - messageBufferIrqs: '0'
    - messageBufferIrqs2: '0'
    - interruptsEnable: ''
    - enable_irq: 'false'
    - interrupt_shared:
      - IRQn: 'CAN1_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
  - fsl_flexcan:
    - can_config:
      - clockSource: 'kFLEXCAN_ClkSrcOsc'
      - clockSourceFreq: 'BOARD_BootClockRUN'
      - wakeupSrc: 'kFLEXCAN_WakeupSrcUnfiltered'
      - baudRate: '100000'
      - maxMbNum: '16'
      - enableLoopBack: 'true'
      - enableTimerSync: 'true'
      - enableSelfWakeup: 'false'
      - enableIndividMask: 'false'
      - disableSelfReception: 'false'
      - enableListenOnlyMode: 'false'
      - enableSupervisorMode: 'false'
      - timingConfig:
        - propSeg: '2'
        - phaseSeg1: '4'
        - phaseSeg2: '3'
        - rJumpwidth: '2'
        - bitTime: []
    - enableRxFIFO: 'false'
    - rxFIFO:
      - idFilterTable: ''
      - idFilterNum: 'num0'
      - idFilterType: 'kFLEXCAN_RxFifoFilterTypeA'
      - priority: 'kFLEXCAN_RxFifoPrioLow'
    - channels:
      - 0:
        - mbID: '0'
        - mbType: 'mbRx'
        - rxMb:
          - id: '0'
          - format: 'kFLEXCAN_FrameFormatStandard'
          - type: 'kFLEXCAN_FrameTypeData'
      - 1:
        - mbID: '1'
        - mbType: 'mbTx'
        - rxMb:
          - id: '0'
          - format: 'kFLEXCAN_FrameFormatStandard'
          - type: 'kFLEXCAN_FrameTypeData'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const flexcan_config_t CAN1_config = {
  .wakeupSrc = kFLEXCAN_WakeupSrcUnfiltered,
  .bitRate = 100000UL,
  .maxMbNum = 16U,
  .enableLoopBack = true,
  .enableTimerSync = true,
  .enableSelfWakeup = false,
  .enableIndividMask = false,
  .disableSelfReception = false,
  .enableListenOnlyMode = false,
  .enableSupervisorMode = false,
  .timingConfig = {
    .preDivider = 1,
    .propSeg = 1,
    .phaseSeg1 = 3,
    .phaseSeg2 = 2,
    .rJumpwidth = 1
  }
};
/* Message buffer 0 configuration structure */
const flexcan_rx_mb_config_t CAN1_rx_mb_config_0 = {
  .id = FLEXCAN_ID_STD(0UL),
  .format = kFLEXCAN_FrameFormatStandard,
  .type = kFLEXCAN_FrameTypeData
};

static void CAN1_init(void) {
  FLEXCAN_Init(CAN1_PERIPHERAL, &CAN1_config, CAN1_CLOCK_SOURCE);
  /* Message buffer 0 initialization */
  FLEXCAN_SetRxMbConfig(CAN1_PERIPHERAL, 0, &CAN1_rx_mb_config_0, true);
  /* Message buffer 1 initialization */
  FLEXCAN_SetTxMbConfig(CAN1_PERIPHERAL, 1, true);
}

/***********************************************************************************************************************
 * LCDIF initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'LCDIF'
- type: 'elcdif'
- mode: 'rgbMode'
- custom_name_enabled: 'false'
- type_id: 'elcdif_1c39bcb43ed1a24bc8980672c7378576'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'LCDIF'
- config_sets:
  - fsl_elcdif:
    - config:
      - panelWidthInt: '480'
      - panelHeightInt: '272'
      - hsw: '41'
      - hfp: '4'
      - hbp: '8'
      - vsw: '10'
      - vfp: '4'
      - vbp: '2'
      - frameRate: '60 Hz'
      - clockSource: 'LcdIfClock'
      - clockSourceFreq: 'BOARD_BootClockRUN'
      - polarityFlags_st:
        - vSyncActive: 'kELCDIF_VsyncActiveLow'
        - hSyncActive: 'kELCDIF_HsyncActiveLow'
        - dataEnableActive: 'kELCDIF_DataEnableActiveLow'
        - driveDataClkEdge: 'kELCDIF_DriveDataOnFallingClkEdge'
      - bufferName: 'defaultBuffer'
      - bufferAlign: '64'
      - pixelFormat: 'kELCDIF_PixelFormatRGB888'
      - dataBus: 'kELCDIF_DataBus24Bit'
      - enablePxpHandShake: 'false'
      - start: 'false'
    - isInterruptEnabled: 'true'
    - elcdifInterruptSources: 'kELCDIF_CurFrameDoneInterruptEnable'
    - interrupt:
      - IRQn: 'LCDIF_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - quick_selection: 'rgb'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
/* RGB mode configuration */
const elcdif_rgb_mode_config_t LCDIF_rgbConfig = {
  .panelWidth = LCDIF_PANEL_WIDTH,
  .panelHeight = LCDIF_PANEL_HEIGHT,
  .hsw = 41U,
  .hfp = 4U,
  .hbp = 8U,
  .vsw = 10U,
  .vfp = 4U,
  .vbp = 2U,
  .polarityFlags = (kELCDIF_VsyncActiveLow | kELCDIF_HsyncActiveLow | kELCDIF_DataEnableActiveLow | kELCDIF_DriveDataOnFallingClkEdge),
  .bufferAddr = (uint32_t) LCDIF_Buffer[0],
  .pixelFormat = kELCDIF_PixelFormatRGB888,
  .dataBus = kELCDIF_DataBus24Bit
};
/* RGB buffer */
AT_NONCACHEABLE_SECTION_ALIGN(uint32_t LCDIF_Buffer[2][LCDIF_PANEL_HEIGHT][LCDIF_PANEL_WIDTH], LCDIF_RGB_BUFFER_ALIGN);

static void LCDIF_init(void) {
  /* RGB mode initialization */
  ELCDIF_RgbModeInit(LCDIF_PERIPHERAL, &LCDIF_rgbConfig);
  /* Enable interrupts */
  ELCDIF_EnableInterrupts(LCDIF_PERIPHERAL, (kELCDIF_CurFrameDoneInterruptEnable));
  /* Enable interrupt LCDIF_IRQn request in the NVIC. */
  EnableIRQ(LCDIF_LCDIF_IRQN);
}

/***********************************************************************************************************************
 * SEMC_extRAM initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'SEMC_extRAM'
- type: 'semc'
- mode: 'general'
- custom_name_enabled: 'true'
- type_id: 'semc_84a769c198c91c527e11dcec2f5b4b81'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'SEMC'
- config_sets:
  - fsl_semc:
    - enableDCD: 'false'
    - clockConfig:
      - clockSource: 'kSEMC_ClkSrcPeri'
      - clockSourceFreq: 'BOARD_BootClockRUN'
    - semc_config_t:
      - dqsMode: 'kSEMC_Loopbackdqspad'
      - cmdTimeoutCycles: '0'
      - busTimeoutCycles: '0'
      - queueWeight:
        - queueaEnable: 'false'
        - queueaWeight:
          - structORvalue: 'structure'
          - queueaConfig:
            - qos: '0'
            - aging: '0'
            - slaveHitSwith: '0'
            - slaveHitNoswitch: '0'
        - queuebEnable: 'false'
        - queuebWeight:
          - structORvalue: 'structure'
          - queuebConfig:
            - qos: '0'
            - aging: '0'
            - slaveHitSwith: '0'
            - weightPagehit: '0'
            - bankRotation: '0'
    - semc_sdram_config_t:
      - csxPinMux: 'kSEMC_MUXCSX0'
      - semcSdramCs: 'kSEMC_SDRAM_CS0'
      - address: '0x80000000'
      - memsize_input: '32KB'
      - portSize: 'kSEMC_PortSize16Bit'
      - burstLen: 'kSEMC_Sdram_BurstLen1'
      - columnAddrBitNum: 'kSEMC_SdramColunm_9bit'
      - casLatency: 'kSEMC_LatencyThree'
      - tPrecharge2Act_Ns: '18'
      - tAct2ReadWrite_Ns: '18'
      - tRefreshRecovery_Ns: '127'
      - tWriteRecovery_Ns: '12'
      - tCkeOff_Ns: '42'
      - tAct2Prechage_Ns: '42'
      - tSelfRefRecovery_Ns: '67'
      - tRefresh2Refresh_Ns: '60'
      - tAct2Act_Ns: '60'
      - tPrescalePeriod_Ns: '160'
      - tIdleTimeout_Ns: '0'
      - refreshPeriod_nsPerRow: '64'
      - refreshUrgThreshold: '64'
      - refreshBurstLen: '1'
    - sdramArray: []
    - quick_selection: 'SEMC_Type'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
semc_config_t SEMC_extRAM_config = {
  .dqsMode = kSEMC_Loopbackdqspad,
  .cmdTimeoutCycles = 0U,
  .busTimeoutCycles = 0U,
  .queueWeight = {
    .queueaEnable = false,
    .queueaWeight = {
      .queueaConfig = {
        .qos = 0UL,
        .aging = 0UL,
        .slaveHitSwith = 0UL,
        .slaveHitNoswitch = 0UL
      },
    },
    .queuebEnable = false,
    .queuebWeight = {
      .queuebConfig = {
        .qos = 0UL,
        .aging = 0UL,
        .slaveHitSwith = 0UL,
        .weightPagehit = 0UL,
        .bankRotation = 0UL
      },
    }
  }
};
semc_sdram_config_t SEMC_extRAM_sdram_struct = {
  .csxPinMux = kSEMC_MUXCSX0,
  .address = 0x80000000UL,
  .memsize_kbytes = 32,
  .portSize = kSEMC_PortSize16Bit,
  .burstLen = kSEMC_Sdram_BurstLen1,
  .columnAddrBitNum = kSEMC_SdramColunm_9bit,
  .casLatency = kSEMC_LatencyThree,
  .tPrecharge2Act_Ns = 18U,
  .tAct2ReadWrite_Ns = 18U,
  .tRefreshRecovery_Ns = 127U,
  .tWriteRecovery_Ns = 12U,
  .tCkeOff_Ns = 42U,
  .tAct2Prechage_Ns = 42U,
  .tSelfRefRecovery_Ns = 67U,
  .tRefresh2Refresh_Ns = 60U,
  .tAct2Act_Ns = 60U,
  .tPrescalePeriod_Ns = 160UL,
  .tIdleTimeout_Ns = 0UL,
  .refreshPeriod_nsPerRow = 64UL,
  .refreshUrgThreshold = 64UL,
  .refreshBurstLen = 1U,
};

static void SEMC_extRAM_init(void) {
  /* Initialize SEMC peripheral. */
  SEMC_Init(SEMC_EXTRAM_PERIPHERAL, &SEMC_extRAM_config);
  /* Initialize SEMC SDRAM. */
  SEMC_ConfigureSDRAM(SEMC_EXTRAM_PERIPHERAL, kSEMC_SDRAM_CS0, &SEMC_extRAM_sdram_struct, 4000000);
}

/***********************************************************************************************************************
 * FLEXIO1_IMU initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'FLEXIO1_IMU'
- type: 'flexio_spi'
- mode: 'polling'
- custom_name_enabled: 'true'
- type_id: 'flexio_spi_d67d6584d62b130dba246fa5abb61949'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'FLEXIO1'
- config_sets:
  - fsl_flexio_spi:
    - spi_mode: 'kSPI_Master'
    - clockSource: 'FlexIoClock'
    - clockSourceFreq: 'BOARD_BootClockRUN'
    - peripheralConfig:
      - SDOPinIndex: '14'
      - SDIPinIndex: '15'
      - SCKPinIndex: '10'
      - CSnPinIndex: '13'
      - shifterIndex_0: '0'
      - shifterIndex_1: '2'
      - timerIndex_0: '0'
      - timerIndex_1: '1'
    - master_config:
      - enableMaster: 'true'
      - enableInDoze: 'false'
      - enableInDebug: 'true'
      - enableFastAccess: 'false'
      - baudRate_Bps: '500000'
      - phase: 'kFLEXIO_SPI_ClockPhaseFirstEdge'
      - dataMode: 'kFLEXIO_SPI_8BitMode'
    - quick_selection: 'QuickSelection1'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
/* FlexIO access configuration */
FLEXIO_SPI_Type FLEXIO1_IMU_peripheralConfig = {
  .flexioBase = FLEXIO1_IMU_PERIPHERAL,
  .SDOPinIndex = 14,
  .SDIPinIndex = 15,
  .SCKPinIndex = 10,
  .CSnPinIndex = 13,
  .shifterIndex = {0, 2},
  .timerIndex = {0, 1}
};
/* SPI master configuration */
flexio_spi_master_config_t FLEXIO1_IMU_config = {
  .enableMaster = true,
  .enableInDoze = false,
  .enableInDebug = true,
  .enableFastAccess = false,
  .baudRate_Bps = 500000UL,
  .phase = kFLEXIO_SPI_ClockPhaseFirstEdge,
  .dataMode = kFLEXIO_SPI_8BitMode
};

static void FLEXIO1_IMU_init(void) {
  /* Master initialization */
  FLEXIO_SPI_MasterInit(&FLEXIO1_IMU_peripheralConfig, &FLEXIO1_IMU_config, FLEXIO1_IMU_CLK_FREQ);
}

/***********************************************************************************************************************
 * USB1 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'USB1'
- type: 'usb'
- mode: 'device'
- custom_name_enabled: 'false'
- type_id: 'usb_cbf31fb9a3cef21890d93e737c3d2690'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'USB1'
- config_sets:
  - deviceSetting:
    - vendor_id: '0x1FC9'
    - product_id: '0x00A2'
    - manufacturer_string: 'NXP'
    - product_string: 'Generic'
    - self_powered: 'false'
    - max_power: '100'
    - interfaces:
      - 0:
        - interface_class: 'kClassHid'
        - setting_hid:
          - interface_name: 'HID Generic'
          - subclass: 'kSubclassBootInterface'
          - protocol: 'kProtocolNone'
          - implementation: 'kImplementationGeneric'
          - endpoints_settings:
            - 0:
              - setting_name: 'Default'
              - endpoints:
                - 0:
                  - direction: 'kIn'
                  - transfer_type: 'kInterrupt'
                  - synchronization: 'kNoSynchronization'
                  - usage: 'kData'
                  - max_packet_size_fs: 'k8'
                  - polling_interval_fs: '1'
                  - max_packet_size_hs: 'k8'
                  - polling_interval_hs: '1'
                  - bRefresh: '0'
                  - bSynchAddress: 'NoSynchronization'
                - 1:
                  - direction: 'kOut'
                  - transfer_type: 'kInterrupt'
                  - synchronization: 'kNoSynchronization'
                  - usage: 'kData'
                  - max_packet_size_fs: 'k8'
                  - polling_interval_fs: '1'
                  - max_packet_size_hs: 'k8'
                  - polling_interval_hs: '1'
                  - bRefresh: '0'
                  - bSynchAddress: 'NoSynchronization'
          - report_descriptor:
            - 0:
              - type: 'kUsage_Page'
              - value: '0x81'
              - remarks: 'Usage Page (Vendor defined)'
            - 1:
              - type: 'kUsage'
              - value: '0x82'
              - remarks: 'Usage (Vendor defined)'
            - 2:
              - type: 'kCollection'
              - value: '0x01'
              - remarks: 'Collection (Application)'
            - 3:
              - type: 'kUsage'
              - value: '0x83'
              - remarks: 'Usage (Vendor defined)'
            - 4:
              - type: 'kUsage'
              - value: '0x84'
              - remarks: 'Usage (Vendor defined)'
            - 5:
              - type: 'kLogical_Minimum'
              - value: '-128'
              - remarks: 'Logical Minimum (-128)'
            - 6:
              - type: 'kLogical_Maximum'
              - value: '0x7F'
              - remarks: 'Logical Maximum (127)'
            - 7:
              - type: 'kReport_Size'
              - value: '0x08'
              - remarks: 'Report Size (8U)'
            - 8:
              - type: 'kReport_Count'
              - value: '0x08'
              - remarks: 'Report Count (8U)'
            - 9:
              - type: 'kInput'
              - value: '0x02'
              - remarks: 'Input(Data, Variable, Absolute)'
            - 10:
              - type: 'kUsage'
              - value: '0x84'
              - remarks: 'Usage (Vendor defined)'
            - 11:
              - type: 'kLogical_Minimum'
              - value: '-128'
              - remarks: 'Logical Minimum (-128)'
            - 12:
              - type: 'kLogical_Maximum'
              - value: '0x7F'
              - remarks: 'Logical Maximum (127)'
            - 13:
              - type: 'kReport_Size'
              - value: '0x08'
              - remarks: 'Report Size (8U)'
            - 14:
              - type: 'kReport_Count'
              - value: '0x08'
              - remarks: 'Report Count (8U)'
            - 15:
              - type: 'kOutput'
              - value: '0x02'
              - remarks: 'Output(Data, Variable, Absolute)'
            - 16:
              - type: 'kEnd_Collection'
              - remarks: 'End collection,'
          - quick_selection: 'QS_INTERFACE_HID_GENERIC'
    - quick_selection: 'QS_DEVICE_HID_GENERIC'
  - commonSettings:
    - mpu_init:
      - mpu_init_component: 'MPU'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

static void USB1_init(void) {
  USB_DeviceApplicationInit();
}

/***********************************************************************************************************************
 * DebugConsole initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'DebugConsole'
- type: 'debug_console'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'debug_console_51864e4f3ac859dae7b603e07bc4ae33'
- functional_group: 'BOARD_InitPeripherals'
- config_sets:
  - fsl_debug_console:
    - config:
      - SDK_DEBUGCONSOLE: 'DEBUGCONSOLE_REDIRECT_TO_SDK'
      - SDK_DEBUGCONSOLE_UART: 'semihost'
      - DEBUG_CONSOLE_RX_ENABLE: 'true'
      - DEBUG_CONSOLE_PRINTF_MAX_LOG_LEN: '128'
      - DEBUG_CONSOLE_SCANF_MAX_LOG_LEN: '20'
      - DEBUG_CONSOLE_ENABLE_ECHO: 'false'
      - PRINTF_FLOAT_ENABLE: 'false'
      - SCANF_FLOAT_ENABLE: 'false'
      - PRINTF_ADVANCED_ENABLE: 'false'
      - SCANF_ADVANCED_ENABLE: 'false'
      - DEBUG_CONSOLE_TRANSFER_NON_BLOCKING: 'false'
      - DEBUG_CONSOLE_TRANSMIT_BUFFER_LEN: '512'
      - DEBUG_CONSOLE_RECEIVE_BUFFER_LEN: '1024'
      - DEBUG_CONSOLE_TX_RELIABLE_ENABLE: 'true'
      - DEBUG_CONSOLE_DISABLE_RTOS_SYNCHRONIZATION: 'false'
    - peripheral_config:
      - serial_port_type: 'kSerialPort_Uart'
      - uart_config:
        - peripheralUART: 'LPUART1'
        - clockSource: 'genericUartClockSource'
        - clockSourceFreq: 'BOARD_BootClockRUN'
        - baudRate_Bps: '115200'
        - quick_selection: 'QuickSelection1'
    - debug_console_codegenerator: []
    - quick_selection: 'default'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

static void DebugConsole_init(void) {
  /* Debug console initialization */
  DbgConsole_Init(DEBUGCONSOLE_INSTANCE, DEBUGCONSOLE_BAUDRATE, DEBUGCONSOLE_TYPE, DEBUGCONSOLE_CLK_FREQ);
}

/***********************************************************************************************************************
 * lwIP initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'lwIP'
- type: 'lwip'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'lwip_e916e23135ce42147b8e9c16b7728f8a'
- functional_group: 'BOARD_InitPeripherals'
- config_sets:
  - lwip_config:
    - mode: 'freertos'
    - LWIP_NETIF_API: 'true'
    - LWIP_NETCONN: 'true'
    - LWIP_SOCKET: 'true'
    - LWIP_SO_RCVTIMEO: 'true'
    - LWIP_TCPIP_CORE_LOCKING: 'true'
    - MEM_SIZE: '(22 * 1024)'
    - MEMP_NUM_PBUF: '15'
    - MEMP_NUM_UDP_PCB: '6'
    - MEMP_NUM_TCP_PCB: '10'
    - MEMP_NUM_TCP_PCB_LISTEN: '6'
    - MEMP_NUM_TCP_SEG: '22'
    - MEMP_NUM_SYS_TIMEOUT: '10'
    - PBUF_POOL_SIZE: '5'
    - LWIP_SINGLE_NETIF: 'true'
    - LWIP_IPV4: 'true'
    - IP_FORWARD: 'false'
    - IP_REASSEMBLY: 'true'
    - IP_FRAG: 'true'
    - IP_DEFAULT_TTL: '255'
    - LWIP_ARP: 'true'
    - LWIP_ICMP: 'true'
    - ICMP_TTL: 'IP_DEFAULT_TTL'
    - LWIP_BROADCAST_PING: 'false'
    - LWIP_MULTICAST_PING: 'false'
    - LWIP_IGMP: 'false'
    - LWIP_DHCP: 'true'
    - LWIP_DHCP_DOES_ACD_CHECK: 'true'
    - LWIP_IPV6: 'false'
    - LWIP_IPV6_NUM_ADDRESSES: '3'
    - LWIP_IPV6_AUTOCONFIG: 'true'
    - LWIP_IPV6_DHCP6: 'false'
    - LWIP_RAW: 'false'
    - RAW_TTL: 'IP_DEFAULT_TTL'
    - LWIP_TCP: 'true'
    - TCP_TTL: 'IP_DEFAULT_TTL'
    - TCP_QUEUE_OOSEQ: 'false'
    - TCP_MSS: '(1500 - 40)'
    - TCP_SND_BUF: '(6 * TCP_MSS)'
    - TCP_SND_QUEUELEN: '(3 * TCP_SND_BUF) / TCP_MSS'
    - TCP_WND: '(2 * TCP_MSS)'
    - TCP_LISTEN_BACKLOG: 'true'
    - TCP_DEFAULT_LISTEN_BACKLOG: '0xFF'
    - LWIP_UDP: 'true'
    - UDP_TTL: 'IP_DEFAULT_TTL'
    - LWIP_STATS: 'false'
    - LWIP_PROVIDE_ERRNO: 'true'
    - CHECKSUM_BY_HARDWARE: 'false'
    - LWIP_DEBUG: 'true'
    - DEFAULT_THREAD_STACKSIZE: '3000'
    - DEFAULT_THREAD_PRIO: '3'
    - TCPIP_MBOX_SIZE: '32'
    - TCPIP_THREAD_STACKSIZE: '1024'
    - TCPIP_THREAD_PRIO: '8'
    - DEFAULT_UDP_RECVMBOX_SIZE: '12'
    - DEFAULT_TCP_RECVMBOX_SIZE: '12'
    - DEFAULT_ACCEPTMBOX_SIZE: '12'
    - custom_opts: ''
    - modules_include: ''
    - mpu_init:
      - mpu_init_component: 'MPU'
    - user_preinit: 'false'
    - user_init:
      - initFunctionID: 'lwIP_interface_init'
    - lwip_init: 'true'
    - enableCallback: 'false'
    - initFnCallback:
      - callbackFunction: 'tcpip_init_done'
      - arg_ptr: ''
    - ifConfig:
      - 0:
        - ethernetif_config_struct: []
        - phy_handle_struct: []
        - mdio_handle_struct: []
        - mdio_resource_struct: []
        - netif_id: 'netif0'
        - interface: 'enet'
        - netif_mode: 'ipv4'
        - ip_assignment: 'static'
        - ipv4Config:
          - ip_addr:
            - addr: '0.0.0.0'
          - netmask:
            - addr: '255.255.255.0'
          - gateway:
            - addr: '0.0.0.0'
        - netif_function_name: 'defaultFn'
        - netif_input_function_name: 'defaultInputFn'
        - mac_address:
          - useSiliconId: 'false'
          - addr: 'FF-FF-FF-FF-FF-FF'
        - phyConfig:
          - phy_driver: 'phyksz8081'
          - phy_addr: '0x0'
          - mdioConfig:
            - enetConfig:
              - peripheralSelect: 'ENET'
              - timing:
                - globalClockConfig:
                  - clockSource: 'GlobalClock'
                  - clockSourceFreq: 'BOARD_BootClockRUN'
              - enet_config:
                - phyTiming:
                  - refClockConfig:
                    - clockSource: 'EnetRefClock'
                    - clockSourceFreq: 'BOARD_BootClockRUN'
              - quick_selection: 'QuickSelection1'
    - lwip_codegenerator: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
/* IPv4 adress, netmask and gateway handle */
ip4_addr_t lwIP_netif0_ipaddr, lwIP_netif0_netmask, lwIP_netif0_gw;
/* Network interface structure */
struct netif lwIP_netif0;
static mdio_handle_t lwIP_netif0_mdio_handle = {
  .resource = LWIP_NETIF0_MDIO_RESOURCE,
  .ops = &LWIP_NETIF0_MDIO_OPS
};
static phy_handle_t lwIP_netif0_phy_handle = {
  .phyAddr = LWIP_NETIF0_PHY_ADDRESS,
  .mdioHandle = &lwIP_netif0_mdio_handle,
  .ops = &LWIP_NETIF0_PHY_OPS
};
ethernetif_config_t lwIP_netif0_enet_config = {
  .phyHandle = &lwIP_netif0_phy_handle,
#ifdef LWIP_NETIF0_MAC_ADDRESS
  .macAddress = LWIP_NETIF0_MAC_ADDRESS,
#endif
};

static void lwIP_init(void) {
  /* lwIP IP address initialization */
  IP4_ADDR(&lwIP_netif0_ipaddr, LWIP_NETIF0_IPADDR0, LWIP_NETIF0_IPADDR1, LWIP_NETIF0_IPADDR2, LWIP_NETIF0_IPADDR3);
  /* lwIP netmask initialization */
  IP4_ADDR(&lwIP_netif0_netmask, LWIP_NETIF0_NETMASK0, LWIP_NETIF0_NETMASK1, LWIP_NETIF0_NETMASK2, LWIP_NETIF0_NETMASK3);
  /* lwIP gateway initialization */
  IP4_ADDR(&lwIP_netif0_gw, LWIP_NETIF0_GW0, LWIP_NETIF0_GW1, LWIP_NETIF0_GW2, LWIP_NETIF0_GW3);
  /* lwIP module initialization */
  tcpip_init(NULL, NULL);
  /* lwIP network interface initialization */
  netifapi_netif_add(&lwIP_netif0, &lwIP_netif0_ipaddr, &lwIP_netif0_netmask, &lwIP_netif0_gw, &lwIP_netif0_enet_config, ethernetif0_init, tcpip_input);
  netifapi_netif_set_default(&lwIP_netif0);
  netifapi_netif_set_up(&lwIP_netif0);
}

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void)
{
  /* Global initialization */
  ARM_MPU_Disable();

  /* Initialize components */
  ADC1_init();
  CAN1_init();
  LCDIF_init();
  SEMC_extRAM_init();
  FLEXIO1_IMU_init();
  USB1_init();
  DebugConsole_init();
  lwIP_init();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
  BOARD_InitPeripherals();
}
