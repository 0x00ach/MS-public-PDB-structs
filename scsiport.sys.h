struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct SP_SPECIAL_CONTROLLER_FLAGS;
struct WMIREGGUIDW;
struct WMIREGINFOW;
struct _ACCESS_RANGE;
struct _ACCESS_STATE;
struct _ADAPTER_EXTENSION;
struct _ADAPTER_TRANSFER;
struct _BUS_INTERFACE_STANDARD;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _CM_RESOURCE_LIST;
struct _COMMON_EXTENSION;
struct _COMPRESSED_DATA_INFO;
struct _CONTEXT;
struct _CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG;
struct _DESCRIPTOR_SENSE_DATA;
struct _DEVICE_CAPABILITIES;
struct _DEVICE_DATA_SET_RANGE;
struct _DEVICE_DESCRIPTION;
struct _DEVICE_DSM_DEFINITION;
struct _DEVICE_MANAGE_DATA_SET_ATTRIBUTES;
struct _DEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT;
struct _DEVICE_MAP_HANDLES;
struct _DEVICE_OBJECT;
struct _DEVICE_OBJECT_POWER_EXTENSION;
struct _DEVICE_RELATIONS;
struct _DEVOBJ_EXTENSION;
struct _DISPATCHER_HEADER;
struct _DMA_ADAPTER;
struct _DMA_ADAPTER_INFO;
struct _DMA_ADAPTER_INFO_V1;
struct _DMA_OPERATIONS;
struct _DMA_TRANSFER_INFO;
struct _DMA_TRANSFER_INFO_V1;
struct _DMA_TRANSFER_INFO_V2;
struct _DRIVER_EXTENSION;
struct _DRIVER_OBJECT;
struct _ECP_LIST;
struct _EJOB;
struct _EPROCESS;
struct _ERESOURCE;
struct _ERROR_LOG_ENTRY;
struct _ETHREAD;
struct _EVENT_DATA_DESCRIPTOR;
struct _EVENT_DESCRIPTOR;
struct _EXCEPTION_RECORD;
struct _EXCEPTION_REGISTRATION_RECORD;
struct _EXT_DELETE_PARAMETERS;
struct _EXT_SET_PARAMETERS_V0;
struct _FAST_IO_DISPATCH;
struct _FAST_MUTEX;
struct _FILE_BASIC_INFORMATION;
struct _FILE_GET_QUOTA_INFORMATION;
struct _FILE_NETWORK_OPEN_INFORMATION;
struct _FILE_OBJECT;
struct _FILE_STANDARD_INFORMATION;
struct _GENERAL_LOOKASIDE;
struct _GENERAL_LOOKASIDE_POOL;
struct _GUID;
struct _INITIAL_PRIVILEGE_SET;
struct _INQUIRYDATA;
struct _INTERFACE;
struct _INTERRUPT_DATA;
struct _IO_COMPLETION_CONTEXT;
struct _IO_DRIVER_CREATE_CONTEXT;
struct _IO_RESOURCE_DESCRIPTOR;
struct _IO_RESOURCE_LIST;
struct _IO_RESOURCE_REQUIREMENTS_LIST;
struct _IO_SCSI_CAPABILITIES;
struct _IO_SECURITY_CONTEXT;
struct _IO_STACK_LOCATION;
struct _IO_STATUS_BLOCK;
struct _IO_TIMER;
struct _IRP;
struct _KAPC;
struct _KDEVICE_QUEUE;
struct _KDEVICE_QUEUE_ENTRY;
struct _KDPC;
struct _KEVENT;
struct _KFLOATING_SAVE;
struct _KINTERRUPT;
struct _KMUTANT;
struct _KPCR;
struct _KPRCB;
struct _KSPIN_LOCK_QUEUE;
struct _KTHREAD;
struct _KTIMER;
struct _KTSS64;
struct _LIST_ENTRY;
struct _LOGICAL_UNIT_BIN;
struct _LOGICAL_UNIT_EXTENSION;
struct _LOOKASIDE_LIST_EX;
struct _LUID;
struct _LUID_AND_ATTRIBUTES;
struct _LUN_LIST;
struct _M128A;
struct _MAILSLOT_CREATE_PARAMETERS;
struct _MAPPED_ADDRESS;
struct _MDL;
struct _NAMED_PIPE_CREATE_PARAMETERS;
struct _NPAGED_LOOKASIDE_LIST;
struct _NT_TIB;
struct _OWNER_ENTRY;
struct _PAGED_LOOKASIDE_LIST;
struct _PCI_SLOT_NUMBER;
struct _PORT_CONFIGURATION_INFORMATION;
struct _POWER_SEQUENCE;
struct _PRIVILEGE_SET;
struct _QUEUE_TAG_ENTRY;
struct _QUEUE_TAG_LIST;
struct _REMOVE_TRACKING_BLOCK;
struct _RTL_BITMAP;
struct _RTL_DYNAMIC_HASH_TABLE;
struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT;
struct _RTL_DYNAMIC_HASH_TABLE_ENTRY;
struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR;
struct _RTL_QUERY_REGISTRY_TABLE;
struct _RTL_SPLAY_LINKS;
struct _SCATTER_GATHER_ELEMENT;
struct _SCATTER_GATHER_LIST;
struct _SCSI_REQUEST_BLOCK;
struct _SCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND;
struct _SCSI_SENSE_DESCRIPTOR_HEADER;
struct _SCSI_SENSE_DESCRIPTOR_INFORMATION;
struct _SECTION_OBJECT_POINTERS;
struct _SECURITY_QUALITY_OF_SERVICE;
struct _SECURITY_SUBJECT_CONTEXT;
struct _SENSE_DATA;
struct _SINGLE_LIST_ENTRY;
struct _SLIST_ENTRY;
struct _SP_ENUMERATION_REQUEST;
struct _SP_LUN_IO_LOG;
struct _SP_VA_MAPPING_INFO;
struct _SRB_DATA;
struct _SRB_SCATTER_GATHER_LIST;
struct _STRING;
struct _SYSTEM_POWER_STATE_CONTEXT;
struct _TXN_PARAMETER_BLOCK;
struct _UNICODE_STRING;
struct _VERIFIER_EXTENSION;
struct _VPB;
struct _VPD_IDENTIFICATION_PAGE;
struct _WAIT_CONTEXT_BLOCK;
struct _WHEA_ERROR_PACKET_V2;
struct _WHEA_ERROR_RECORD;
struct _WHEA_ERROR_RECORD_HEADER;
struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR;
struct _WHEA_EVENT_LOG_ENTRY;
struct _WHEA_EVENT_LOG_ENTRY_HEADER;
struct _WMI_MINIPORT_REQUEST_ITEM;
struct _WORK_QUEUE_ITEM;
struct _XSAVE_FORMAT;

union _KGDTENTRY64;
union _KIDTENTRY64;
union _LARGE_INTEGER;
union _POWER_STATE;
union _SLIST_HEADER;
union _ULARGE_INTEGER;
union _WHEA_ERROR_PACKET_FLAGS;
union _WHEA_ERROR_RECORD_HEADER_FLAGS;
union _WHEA_ERROR_RECORD_HEADER_VALIDBITS;
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS;
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS;
union _WHEA_EVENT_LOG_ENTRY_FLAGS;
union _WHEA_PERSISTENCE_INFO;
union _WHEA_REVISION;
union _WHEA_TIMESTAMP;

enum BUS_QUERY_ID_TYPE;
enum DEVICE_TEXT_TYPE;
enum DMA_COMPLETION_STATUS;
enum POWER_ACTION;
enum _DEVICE_POWER_STATE;
enum _DEVICE_RELATION_TYPE;
enum _DEVICE_USAGE_NOTIFICATION_TYPE;
enum _DEVICE_WAKE_DEPTH;
enum _DIRECTORY_NOTIFY_INFORMATION_CLASS;
enum _DMA_SPEED;
enum _DMA_WIDTH;
enum _EVENT_TYPE;
enum _EXCEPTION_DISPOSITION;
enum _FILE_INFORMATION_CLASS;
enum _FSINFOCLASS;
enum _INTERFACE_TYPE;
enum _INTERLOCKED_RESULT;
enum _IO_ALLOCATION_ACTION;
enum _IRQ_DEVICE_POLICY;
enum _IRQ_PRIORITY;
enum _KINTERRUPT_MODE;
enum _KINTERRUPT_POLARITY;
enum _MEMORY_CACHING_TYPE;
enum _MEMORY_CACHING_TYPE_ORIG;
enum _MODE;
enum _POOL_TYPE;
enum _POWER_STATE_TYPE;
enum _REG_NOTIFY_CLASS;
enum _SCSI_ADAPTER_CONTROL_STATUS;
enum _SCSI_ADAPTER_CONTROL_TYPE;
enum _SECURITY_IMPERSONATION_LEVEL;
enum _SYSTEM_POWER_STATE;
enum _USER_ACTIVITY_PRESENCE;
enum _WHEA_ERROR_PACKET_DATA_FORMAT;
enum _WHEA_ERROR_SEVERITY;
enum _WHEA_ERROR_SOURCE_TYPE;
enum _WHEA_ERROR_TYPE;
enum _WHEA_EVENT_LOG_ENTRY_ID;
enum _WHEA_EVENT_LOG_ENTRY_TYPE;

typedef struct LIST_ENTRY32 {
    ULONG Flink;
    ULONG Blink;
};

typedef struct LIST_ENTRY64 {
    ULONG64 Flink;
    ULONG64 Blink;
};

typedef struct SP_SPECIAL_CONTROLLER_FLAGS {
    ULONG SparseLun;
    ULONG OneLun;
    ULONG LargeLuns;
    ULONG SetLunInCdb;
    ULONG NonStandardVPD;
    ULONG BinarySN;
};

typedef struct WMIREGGUIDW {
    struct _GUID Guid;
    ULONG Flags;
    ULONG InstanceCount;
    ULONG InstanceNameList;
    ULONG BaseNameOffset;
    ULONG64 Pdo;
    ULONG64 InstanceInfo;
};

typedef struct WMIREGINFOW {
    ULONG BufferSize;
    ULONG NextWmiRegInfo;
    ULONG RegistryPath;
    ULONG MofResourceName;
    ULONG GuidCount;
    struct WMIREGGUIDW WmiRegGuid[0];
};

typedef struct _ACCESS_RANGE {
    union _LARGE_INTEGER RangeStart;
    ULONG RangeLength;
    UCHAR RangeInMemory;
};

typedef struct _ACCESS_STATE {
    struct _LUID OperationID;
    UCHAR SecurityEvaluated;
    UCHAR GenerateAudit;
    UCHAR GenerateOnClose;
    UCHAR PrivilegesAllocated;
    ULONG Flags;
    ULONG RemainingDesiredAccess;
    ULONG PreviouslyGrantedAccess;
    ULONG OriginalDesiredAccess;
    struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext;
    PVOID SecurityDescriptor;
    PVOID AuxData;
    union {
        struct _INITIAL_PRIVILEGE_SET InitialPrivilegeSet;
        struct _PRIVILEGE_SET PrivilegeSet;
    } Privileges;
    UCHAR AuditPrivileges;
    struct _UNICODE_STRING ObjectName;
    struct _UNICODE_STRING ObjectTypeName;
};

typedef struct _ADAPTER_EXTENSION {
    struct _DEVICE_OBJECT *DeviceObject;
    struct _COMMON_EXTENSION CommonExtension;
    struct _DEVICE_OBJECT *LowerPdo;
    PVOID HwDeviceExtension;
    PVOID NonCachedExtension;
    ULONG NonCachedExtensionSize;
    ULONG PortNumber;
    ULONG AdapterNumber;
    LONG ActiveRequestCount;
    UCHAR IsMiniportDetected : 1;
    UCHAR IsInVirtualSlot : 1;
    UCHAR IsPnp : 1;
    UCHAR HasInterrupt : 1;
    UCHAR DisablePower : 1;
    UCHAR DisableStop : 1;
    UCHAR NeedsShutdown : 1;
    UCHAR VirtualDevice : 1;
    struct _PCI_SLOT_NUMBER VirtualSlotNumber;
    ULONG RealBusNumber;
    ULONG RealSlotNumber;
    UCHAR NumberOfBuses;
    UCHAR MaximumTargetIds;
    UCHAR MaxLuCount;
    ULONG Flags;
    ULONG DpcFlags;
    ULONG DisableCount;
    LONG PortTimeoutCounter;
    struct _KINTERRUPT *InterruptObject;
    struct _KINTERRUPT *InterruptObject2;
    PUCHAR SynchronizeExecution;
    ULONG SequenceNumber;
    ULONG64 SpinLock;
    ULONG64 MultipleIrqSpinLock;
    ULONG64 InterruptSpinLock;
    PVOID MapRegisterBase;
    struct _DMA_ADAPTER *DmaAdapterObject;
    struct _ADAPTER_TRANSFER FlushAdapterParameters;
    struct _PORT_CONFIGURATION_INFORMATION *PortConfig;
    struct _CM_RESOURCE_LIST *AllocatedResources;
    struct _CM_RESOURCE_LIST *TranslatedResources;
    ULONG CommonBufferSize;
    ULONG SrbExtensionSize;
    UCHAR UncachedExtensionIsCommonBuffer;
    ULONG SrbExtensionCount;
    ULONG NumberOfRequests;
    PVOID SrbExtensionBuffer;
    PVOID SrbExtensionListHeader;
    struct _QUEUE_TAG_LIST QueueTagList;
    UCHAR MaxQueueTag;
    ULONG HwLogicalUnitExtensionSize;
    struct _MAPPED_ADDRESS *MappedAddressList;
    struct _MAPPED_ADDRESS *FreeMappedAddressList;
    PULONG HwFindAdapter;
    PUCHAR HwInitialize;
    PUCHAR HwStartIo;
    PUCHAR HwInterrupt;
    PUCHAR HwResetBus;
    PVOID HwDmaStarted;
    PUCHAR HwRequestInterrupt;
    PUCHAR HwTimerRequest;
    enum _SCSI_ADAPTER_CONTROL_STATUS *HwAdapterControl;
    ULONG InterruptLevel;
    ULONG IoAddress;
    struct _RTL_BITMAP SupportedControlBitMap;
    ULONG SupportedControlBits[1];
    struct _LOGICAL_UNIT_BIN LogicalUnitList[8];
    struct _LOGICAL_UNIT_EXTENSION *CachedLogicalUnit;
    struct _INTERRUPT_DATA InterruptData;
    ULONG WatchdogInterruptCount;
    struct _IO_SCSI_CAPABILITIES Capabilities;
    struct _KTIMER MiniPortTimer;
    struct _KDPC MiniPortTimerDpc;
    union _LARGE_INTEGER PhysicalCommonBuffer;
    UCHAR MapBuffers;
    UCHAR RemapBuffers;
    UCHAR MasterWithAdapter;
    UCHAR TaggedQueuing;
    UCHAR AutoRequestSense;
    UCHAR MultipleRequestPerLu;
    UCHAR ReceiveEvent;
    UCHAR AllocateSrbExtension;
    UCHAR CachesData;
    UCHAR Dma64BitAddresses;
    UCHAR Dma32BitAddresses;
    union _SLIST_HEADER WmiFreeMiniPortRequestList;
    ULONG64 WmiFreeMiniPortRequestLock;
    ULONG WmiFreeMiniPortRequestWatermark;
    ULONG WmiFreeMiniPortRequestCount;
    UCHAR WmiFreeMiniPortRequestInitialized;
    UCHAR WmiFreeMiniPortRequestsExhausted;
    struct _KMUTANT EnumerationDeviceMutex;
    struct _FAST_MUTEX EnumerationWorklistMutex;
    union _LARGE_INTEGER LastBusScanTime;
    LONG ForceNextBusScan;
    struct _WORK_QUEUE_ITEM EnumerationWorkItem;
    struct _KTHREAD *EnumerationWorkThread;
    UCHAR EnumerationRunning;
    struct _SP_ENUMERATION_REQUEST *EnumerationWorkList;
    struct _SP_ENUMERATION_REQUEST *PnpEnumRequestPtr;
    struct _SP_ENUMERATION_REQUEST PnpEnumerationRequest;
    struct _NPAGED_LOOKASIDE_LIST SrbDataLookasideList;
    ULONG64 EmergencySrbDataSpinLock;
    struct _LIST_ENTRY SrbDataBlockedRequests;
    struct _SRB_DATA *EmergencySrbData;
    UCHAR SrbDataListInitialized;
    UCHAR LowerBusInterfaceStandardRetrieved;
    struct _BUS_INTERFACE_STANDARD LowerBusInterfaceStandard;
    PVOID PortDeviceMapKey;
    struct _DEVICE_MAP_HANDLES *BusDeviceMapKeys;
    PWCHAR DeviceName;
    struct _GUID BusTypeGuid;
    struct _UNICODE_STRING InterfaceName;
    ULONG DeviceState;
    ULONG TickCount;
    PVOID InquiryBuffer;
    struct _SENSE_DATA *InquirySenseBuffer;
    struct _IRP *InquiryIrp;
    struct _MDL *InquiryMdl;
    struct _FAST_MUTEX PowerMutex;
    struct _LOGICAL_UNIT_EXTENSION *RescanLun;
    UCHAR AdditionalSenseBytes;
    UCHAR EnableSenseDataEvent;
    struct _GUID SenseDataEventClass;
    struct _VERIFIER_EXTENSION *VerifierExtension;
    union _LARGE_INTEGER MinimumCommonBufferBase;
    union _LARGE_INTEGER MaximumCommonBufferBase;
    PVOID ReservedPages;
    struct _MDL *ReservedMdl;
    ULONG RemainInReducedMaxQueueState;
    ULONG UncachedExtAlignment;
    LONG SrbDataFreeRunning;
    ULONG SrbTimeout;
    UCHAR SupportsMultipleRequests;
    ULONG SgBufferLen;
    ULONG ResetHoldTime;
    struct _LOGICAL_UNIT_EXTENSION *InitiatorLU[8];
    UCHAR CreateInitiatorLU;
    struct _LOGICAL_UNIT_EXTENSION *BlockedLogicalUnit;
    struct _DEVICE_RELATIONS *DeviceRelations;
};

typedef struct _ADAPTER_TRANSFER {
    struct _SRB_DATA *SrbData;
    ULONG SrbFlags;
    PVOID LogicalAddress;
    ULONG Length;
};

typedef struct _BUS_INTERFACE_STANDARD {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PVOID InterfaceReference;
    PVOID InterfaceDereference;
    PUCHAR TranslateBusAddress;
    struct _DMA_ADAPTER **GetDmaAdapter;
    PULONG SetBusData;
    PULONG GetBusData;
};

typedef struct _CM_FULL_RESOURCE_DESCRIPTOR {
    enum _INTERFACE_TYPE InterfaceType;
    ULONG BusNumber;
    struct _CM_PARTIAL_RESOURCE_LIST PartialResourceList;
};

typedef struct _CM_PARTIAL_RESOURCE_DESCRIPTOR {
    UCHAR Type;
    UCHAR ShareDisposition;
    USHORT Flags;
    union {
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length;
        } Generic;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length;
        } Port;
        struct {
            ULONG Level;
            ULONG Vector;
            ULONG64 Affinity;
        } Interrupt;
        struct {
            struct {
                USHORT Reserved;
                USHORT MessageCount;
                ULONG Vector;
                ULONG64 Affinity;
            } Raw;
            struct {
                ULONG Level;
                ULONG Vector;
                ULONG64 Affinity;
            } Translated;
        } MessageInterrupt;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length;
        } Memory;
        struct {
            ULONG Channel;
            ULONG Port;
            ULONG Reserved1;
        } Dma;
        struct {
            ULONG Channel;
            ULONG RequestLine;
            UCHAR TransferWidth;
            UCHAR Reserved1;
            UCHAR Reserved2;
            UCHAR Reserved3;
        } DmaV3;
        struct {
            ULONG Data[3];
        } DevicePrivate;
        struct {
            ULONG Start;
            ULONG Length;
            ULONG Reserved;
        } BusNumber;
        struct {
            ULONG DataSize;
            ULONG Reserved1;
            ULONG Reserved2;
        } DeviceSpecificData;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length40;
        } Memory40;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length48;
        } Memory48;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length64;
        } Memory64;
        struct {
            UCHAR Class;
            UCHAR Type;
            UCHAR Reserved1;
            UCHAR Reserved2;
            ULONG IdLowPart;
            ULONG IdHighPart;
        } Connection;
    } u;
};

typedef struct _CM_PARTIAL_RESOURCE_LIST {
    USHORT Version;
    USHORT Revision;
    ULONG Count;
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR PartialDescriptors[1];
};

typedef struct _CM_RESOURCE_LIST {
    ULONG Count;
    struct _CM_FULL_RESOURCE_DESCRIPTOR List[1];
};

typedef struct _COMMON_EXTENSION {
    struct _DEVICE_OBJECT *DeviceObject;
    UCHAR IsPdo : 1;
    UCHAR IsInitialized : 1;
    UCHAR WmiInitialized : 1;
    UCHAR WmiMiniPortSupport : 1;
    UCHAR WmiMiniPortInitialized : 1;
    UCHAR CurrentPnpState;
    UCHAR PreviousPnpState;
    ULONG IsRemoved;
    struct _DEVICE_OBJECT *LowerDeviceObject;
    ULONG SrbFlags;
    PLONG *MajorFunction;
    enum _SYSTEM_POWER_STATE CurrentSystemState;
    enum _DEVICE_POWER_STATE CurrentDeviceState;
    enum _DEVICE_POWER_STATE DesiredDeviceState;
    PULONG IdleTimer;
    struct WMIREGINFOW *WmiScsiPortRegInfoBuf;
    ULONG WmiScsiPortRegInfoBufSize;
    LONG RemoveLock;
    struct _KEVENT RemoveEvent;
    ULONG64 RemoveTrackingSpinlock;
    PVOID RemoveTrackingList;
    LONG RemoveTrackingUntrackedCount;
    struct _NPAGED_LOOKASIDE_LIST RemoveTrackingLookasideList;
    UCHAR RemoveTrackingLookasideListInitialized;
    ULONG PagingPathCount;
    ULONG HibernatePathCount;
    ULONG DumpPathCount;
};

typedef struct _COMPRESSED_DATA_INFO {
};

typedef struct _CONTEXT {
    ULONG64 P1Home;
    ULONG64 P2Home;
    ULONG64 P3Home;
    ULONG64 P4Home;
    ULONG64 P5Home;
    ULONG64 P6Home;
    ULONG ContextFlags;
    ULONG MxCsr;
    USHORT SegCs;
    USHORT SegDs;
    USHORT SegEs;
    USHORT SegFs;
    USHORT SegGs;
    USHORT SegSs;
    ULONG EFlags;
    ULONG64 Dr0;
    ULONG64 Dr1;
    ULONG64 Dr2;
    ULONG64 Dr3;
    ULONG64 Dr6;
    ULONG64 Dr7;
    ULONG64 Rax;
    ULONG64 Rcx;
    ULONG64 Rdx;
    ULONG64 Rbx;
    ULONG64 Rsp;
    ULONG64 Rbp;
    ULONG64 Rsi;
    ULONG64 Rdi;
    ULONG64 R8;
    ULONG64 R9;
    ULONG64 R10;
    ULONG64 R11;
    ULONG64 R12;
    ULONG64 R13;
    ULONG64 R14;
    ULONG64 R15;
    ULONG64 Rip;
    struct _XSAVE_FORMAT FltSave;
    struct _M128A Header[2];
    struct _M128A Legacy[8];
    struct _M128A Xmm0;
    struct _M128A Xmm1;
    struct _M128A Xmm2;
    struct _M128A Xmm3;
    struct _M128A Xmm4;
    struct _M128A Xmm5;
    struct _M128A Xmm6;
    struct _M128A Xmm7;
    struct _M128A Xmm8;
    struct _M128A Xmm9;
    struct _M128A Xmm10;
    struct _M128A Xmm11;
    struct _M128A Xmm12;
    struct _M128A Xmm13;
    struct _M128A Xmm14;
    struct _M128A Xmm15;
    struct _M128A VectorRegister[26];
    ULONG64 VectorControl;
    ULONG64 DebugControl;
    ULONG64 LastBranchToRip;
    ULONG64 LastBranchFromRip;
    ULONG64 LastExceptionToRip;
    ULONG64 LastExceptionFromRip;
};

typedef struct _CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG {
    ULONG Size;
    PWCHAR TriggerId;
};

typedef struct _DESCRIPTOR_SENSE_DATA {
    UCHAR ErrorCode : 7;
    UCHAR Reserved1 : 1;
    UCHAR SenseKey : 4;
    UCHAR Reserved2 : 4;
    UCHAR AdditionalSenseCode;
    UCHAR AdditionalSenseCodeQualifier;
    UCHAR Reserved3[3];
    UCHAR AdditionalSenseLength;
    UCHAR DescriptorBuffer[1];
};

typedef struct _DEVICE_CAPABILITIES {
    USHORT Size;
    USHORT Version;
    ULONG DeviceD1 : 1;
    ULONG DeviceD2 : 1;
    ULONG LockSupported : 1;
    ULONG EjectSupported : 1;
    ULONG Removable : 1;
    ULONG DockDevice : 1;
    ULONG UniqueID : 1;
    ULONG SilentInstall : 1;
    ULONG RawDeviceOK : 1;
    ULONG SurpriseRemovalOK : 1;
    ULONG WakeFromD0 : 1;
    ULONG WakeFromD1 : 1;
    ULONG WakeFromD2 : 1;
    ULONG WakeFromD3 : 1;
    ULONG HardwareDisabled : 1;
    ULONG NonDynamic : 1;
    ULONG WarmEjectSupported : 1;
    ULONG NoDisplayInUI : 1;
    ULONG Reserved1 : 1;
    ULONG WakeFromInterrupt : 1;
    ULONG SecureDevice : 1;
    ULONG ChildOfVgaEnabledBridge : 1;
    ULONG DecodeIoOnBoot : 1;
    ULONG Reserved : 9;
    ULONG Address;
    ULONG UINumber;
    enum _DEVICE_POWER_STATE DeviceState[7];
    enum _SYSTEM_POWER_STATE SystemWake;
    enum _DEVICE_POWER_STATE DeviceWake;
    ULONG D1Latency;
    ULONG D2Latency;
    ULONG D3Latency;
};

typedef struct _DEVICE_DATA_SET_RANGE {
    LONG64 StartingOffset;
    ULONG64 LengthInBytes;
};

typedef struct _DEVICE_DESCRIPTION {
    ULONG Version;
    UCHAR Master;
    UCHAR ScatterGather;
    UCHAR DemandMode;
    UCHAR AutoInitialize;
    UCHAR Dma32BitAddresses;
    UCHAR IgnoreCount;
    UCHAR Reserved1;
    UCHAR Dma64BitAddresses;
    ULONG BusNumber;
    ULONG DmaChannel;
    enum _INTERFACE_TYPE InterfaceType;
    enum _DMA_WIDTH DmaWidth;
    enum _DMA_SPEED DmaSpeed;
    ULONG MaximumLength;
    ULONG DmaPort;
    ULONG DmaAddressWidth;
    ULONG DmaControllerInstance;
    ULONG DmaRequestLine;
    union _LARGE_INTEGER DeviceAddress;
};

typedef struct _DEVICE_DSM_DEFINITION {
    ULONG Action;
    UCHAR SingleRange;
    ULONG ParameterBlockAlignment;
    ULONG ParameterBlockLength;
    UCHAR HasOutput;
    ULONG OutputBlockAlignment;
    ULONG OutputBlockLength;
};

typedef struct _DEVICE_MANAGE_DATA_SET_ATTRIBUTES {
    ULONG Size;
    ULONG Action;
    ULONG Flags;
    ULONG ParameterBlockOffset;
    ULONG ParameterBlockLength;
    ULONG DataSetRangesOffset;
    ULONG DataSetRangesLength;
};

typedef struct _DEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT {
    ULONG Size;
    ULONG Action;
    ULONG Flags;
    ULONG OperationStatus;
    ULONG ExtendedError;
    ULONG TargetDetailedError;
    ULONG ReservedStatus;
    ULONG OutputBlockOffset;
    ULONG OutputBlockLength;
};

typedef struct _DEVICE_MAP_HANDLES {
    PVOID BusKey;
    PVOID InitiatorKey;
};

typedef struct _DEVICE_OBJECT {
    SHORT Type;
    USHORT Size;
    LONG ReferenceCount;
    struct _DRIVER_OBJECT *DriverObject;
    struct _DEVICE_OBJECT *NextDevice;
    struct _DEVICE_OBJECT *AttachedDevice;
    struct _IRP *CurrentIrp;
    struct _IO_TIMER *Timer;
    ULONG Flags;
    ULONG Characteristics;
    struct _VPB *Vpb;
    PVOID DeviceExtension;
    ULONG DeviceType;
    CHAR StackSize;
    union {
        struct _LIST_ENTRY ListEntry;
        struct _WAIT_CONTEXT_BLOCK Wcb;
    } Queue;
    ULONG AlignmentRequirement;
    struct _KDEVICE_QUEUE DeviceQueue;
    struct _KDPC Dpc;
    ULONG ActiveThreadCount;
    PVOID SecurityDescriptor;
    struct _KEVENT DeviceLock;
    USHORT SectorSize;
    USHORT Spare1;
    struct _DEVOBJ_EXTENSION *DeviceObjectExtension;
    PVOID Reserved;
};

typedef struct _DEVICE_OBJECT_POWER_EXTENSION {
};

typedef struct _DEVICE_RELATIONS {
    ULONG Count;
    struct _DEVICE_OBJECT *Objects[1];
};

typedef struct _DEVOBJ_EXTENSION {
    SHORT Type;
    USHORT Size;
    struct _DEVICE_OBJECT *DeviceObject;
    ULONG PowerFlags;
    struct _DEVICE_OBJECT_POWER_EXTENSION *Dope;
    ULONG ExtensionFlags;
    PVOID DeviceNode;
    struct _DEVICE_OBJECT *AttachedTo;
    LONG StartIoCount;
    LONG StartIoKey;
    ULONG StartIoFlags;
    struct _VPB *Vpb;
    PVOID DependencyNode;
    PVOID InterruptContext;
    PVOID VerifierContext;
};

typedef struct _DISPATCHER_HEADER {
    LONG Lock;
    LONG LockNV;
    UCHAR Type;
    UCHAR Signalling;
    UCHAR Size;
    UCHAR Reserved1;
    UCHAR TimerType;
    UCHAR TimerControlFlags;
    UCHAR Absolute : 1;
    UCHAR Wake : 1;
    UCHAR EncodedTolerableDelay : 6;
    UCHAR Hand;
    UCHAR TimerMiscFlags;
    UCHAR Index : 6;
    UCHAR Inserted : 1;
    UCHAR Expired : 1;
    UCHAR Timer2Type;
    UCHAR Timer2Flags;
    UCHAR Timer2Inserted : 1;
    UCHAR Timer2Expiring : 1;
    UCHAR Timer2CancelPending : 1;
    UCHAR Timer2SetPending : 1;
    UCHAR Timer2Running : 1;
    UCHAR Timer2Disabled : 1;
    UCHAR Timer2ReservedFlags : 2;
    UCHAR Timer2ComponentId;
    UCHAR Timer2RelativeId;
    UCHAR QueueType;
    UCHAR QueueControlFlags;
    UCHAR Abandoned : 1;
    UCHAR DisableIncrement : 1;
    UCHAR QueueReservedControlFlags : 6;
    UCHAR QueueSize;
    UCHAR QueueReserved;
    UCHAR ThreadType;
    UCHAR ThreadReserved;
    UCHAR ThreadControlFlags;
    UCHAR CycleProfiling : 1;
    UCHAR CounterProfiling : 1;
    UCHAR GroupScheduling : 1;
    UCHAR AffinitySet : 1;
    UCHAR Tagged : 1;
    UCHAR EnergyProfiling : 1;
    UCHAR SchedulerAssist : 1;
    UCHAR ThreadReservedControlFlags : 1;
    UCHAR DebugActive;
    UCHAR ActiveDR7 : 1;
    UCHAR Instrumented : 1;
    UCHAR Minimal : 1;
    UCHAR Reserved4 : 3;
    UCHAR UmsScheduled : 1;
    UCHAR UmsPrimary : 1;
    UCHAR MutantType;
    UCHAR MutantSize;
    UCHAR DpcActive;
    UCHAR MutantReserved;
    LONG SignalState;
    struct _LIST_ENTRY WaitListHead;
};

typedef struct _DMA_ADAPTER {
    USHORT Version;
    USHORT Size;
    struct _DMA_OPERATIONS *DmaOperations;
};

typedef struct _DMA_ADAPTER_INFO {
    ULONG Version;
    struct _DMA_ADAPTER_INFO_V1 V1;
};

typedef struct _DMA_ADAPTER_INFO_V1 {
    ULONG ReadDmaCounterAvailable;
    ULONG ScatterGatherLimit;
    ULONG DmaAddressWidth;
    ULONG Flags;
    ULONG MinimumTransferUnit;
};

typedef struct _DMA_OPERATIONS {
    ULONG Size;
    PVOID PutDmaAdapter;
    PVOID *AllocateCommonBuffer;
    PVOID FreeCommonBuffer;
    PLONG AllocateAdapterChannel;
    PUCHAR FlushAdapterBuffers;
    PVOID FreeAdapterChannel;
    PVOID FreeMapRegisters;
    union _LARGE_INTEGER *MapTransfer;
    PULONG GetDmaAlignment;
    PULONG ReadDmaCounter;
    PLONG GetScatterGatherList;
    PVOID PutScatterGatherList;
    PLONG CalculateScatterGatherList;
    PLONG BuildScatterGatherList;
    PLONG BuildMdlFromScatterGatherList;
    PLONG GetDmaAdapterInfo;
    PLONG GetDmaTransferInfo;
    PLONG InitializeDmaTransferContext;
    PVOID *AllocateCommonBufferEx;
    PLONG AllocateAdapterChannelEx;
    PLONG ConfigureAdapterChannel;
    PUCHAR CancelAdapterChannel;
    PLONG MapTransferEx;
    PLONG GetScatterGatherListEx;
    PLONG BuildScatterGatherListEx;
    PLONG FlushAdapterBuffersEx;
    PVOID FreeAdapterObject;
    PLONG CancelMappedTransfer;
    PLONG AllocateDomainCommonBuffer;
    PLONG FlushDmaBuffer;
    PLONG JoinDmaDomain;
    PLONG LeaveDmaDomain;
    PVOID *GetDmaDomain;
    PVOID *AllocateCommonBufferWithBounds;
};

typedef struct _DMA_TRANSFER_INFO {
    ULONG Version;
    struct _DMA_TRANSFER_INFO_V1 V1;
    struct _DMA_TRANSFER_INFO_V2 V2;
};

typedef struct _DMA_TRANSFER_INFO_V1 {
    ULONG MapRegisterCount;
    ULONG ScatterGatherElementCount;
    ULONG ScatterGatherListSize;
};

typedef struct _DMA_TRANSFER_INFO_V2 {
    ULONG MapRegisterCount;
    ULONG ScatterGatherElementCount;
    ULONG ScatterGatherListSize;
    ULONG LogicalPageCount;
};

typedef struct _DRIVER_EXTENSION {
    struct _DRIVER_OBJECT *DriverObject;
    PLONG AddDevice;
    ULONG Count;
    struct _UNICODE_STRING ServiceKeyName;
};

typedef struct _DRIVER_OBJECT {
    SHORT Type;
    SHORT Size;
    struct _DEVICE_OBJECT *DeviceObject;
    ULONG Flags;
    PVOID DriverStart;
    ULONG DriverSize;
    PVOID DriverSection;
    struct _DRIVER_EXTENSION *DriverExtension;
    struct _UNICODE_STRING DriverName;
    struct _UNICODE_STRING *HardwareDatabase;
    struct _FAST_IO_DISPATCH *FastIoDispatch;
    PLONG DriverInit;
    PVOID DriverStartIo;
    PVOID DriverUnload;
    PLONG MajorFunction[28];
};

typedef struct _ECP_LIST {
};

typedef struct _EJOB {
};

typedef struct _EPROCESS {
};

typedef struct _ERESOURCE {
    struct _LIST_ENTRY SystemResourcesList;
    struct _OWNER_ENTRY *OwnerTable;
    SHORT ActiveCount;
    USHORT Flag;
    UCHAR ReservedLowFlags;
    UCHAR WaiterPriority;
    PVOID SharedWaiters;
    PVOID ExclusiveWaiters;
    struct _OWNER_ENTRY OwnerEntry;
    ULONG ActiveEntries;
    ULONG ContentionCount;
    ULONG NumberOfSharedWaiters;
    ULONG NumberOfExclusiveWaiters;
    PVOID Reserved2;
    PVOID Address;
    ULONG64 CreatorBackTraceIndex;
    ULONG64 SpinLock;
};

typedef struct _ERROR_LOG_ENTRY {
    UCHAR MajorFunctionCode;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    ULONG ErrorCode;
    ULONG UniqueId;
    ULONG ErrorLogRetryCount;
    ULONG SequenceNumber;
};

typedef struct _ETHREAD {
};

typedef struct _EVENT_DATA_DESCRIPTOR {
    ULONG64 Ptr;
    ULONG Size;
    ULONG Reserved;
    UCHAR Type;
    UCHAR Reserved1;
    USHORT Reserved2;
};

typedef struct _EVENT_DESCRIPTOR {
    USHORT Id;
    UCHAR Version;
    UCHAR Channel;
    UCHAR Level;
    UCHAR Opcode;
    USHORT Task;
    ULONG64 Keyword;
};

typedef struct _EXCEPTION_RECORD {
    LONG ExceptionCode;
    ULONG ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    ULONG NumberParameters;
    ULONG64 ExceptionInformation[15];
};

typedef struct _EXCEPTION_REGISTRATION_RECORD {
    struct _EXCEPTION_REGISTRATION_RECORD *Next;
    enum _EXCEPTION_DISPOSITION *Handler;
};

typedef struct _EXT_DELETE_PARAMETERS {
    ULONG Version;
    ULONG Reserved;
    PVOID DeleteCallback;
    PVOID DeleteContext;
};

typedef struct _EXT_SET_PARAMETERS_V0 {
    ULONG Version;
    ULONG Reserved;
    LONG64 NoWakeTolerance;
};

typedef struct _FAST_IO_DISPATCH {
    ULONG SizeOfFastIoDispatch;
    PUCHAR FastIoCheckIfPossible;
    PUCHAR FastIoRead;
    PUCHAR FastIoWrite;
    PUCHAR FastIoQueryBasicInfo;
    PUCHAR FastIoQueryStandardInfo;
    PUCHAR FastIoLock;
    PUCHAR FastIoUnlockSingle;
    PUCHAR FastIoUnlockAll;
    PUCHAR FastIoUnlockAllByKey;
    PUCHAR FastIoDeviceControl;
    PVOID AcquireFileForNtCreateSection;
    PVOID ReleaseFileForNtCreateSection;
    PVOID FastIoDetachDevice;
    PUCHAR FastIoQueryNetworkOpenInfo;
    PLONG AcquireForModWrite;
    PUCHAR MdlRead;
    PUCHAR MdlReadComplete;
    PUCHAR PrepareMdlWrite;
    PUCHAR MdlWriteComplete;
    PUCHAR FastIoReadCompressed;
    PUCHAR FastIoWriteCompressed;
    PUCHAR MdlReadCompleteCompressed;
    PUCHAR MdlWriteCompleteCompressed;
    PUCHAR FastIoQueryOpen;
    PLONG ReleaseForModWrite;
    PLONG AcquireForCcFlush;
    PLONG ReleaseForCcFlush;
};

typedef struct _FAST_MUTEX {
    LONG Count;
    PVOID Owner;
    ULONG Contention;
    struct _KEVENT Event;
    ULONG OldIrql;
};

typedef struct _FILE_BASIC_INFORMATION {
    union _LARGE_INTEGER CreationTime;
    union _LARGE_INTEGER LastAccessTime;
    union _LARGE_INTEGER LastWriteTime;
    union _LARGE_INTEGER ChangeTime;
    ULONG FileAttributes;
};

typedef struct _FILE_GET_QUOTA_INFORMATION {
};

typedef struct _FILE_NETWORK_OPEN_INFORMATION {
    union _LARGE_INTEGER CreationTime;
    union _LARGE_INTEGER LastAccessTime;
    union _LARGE_INTEGER LastWriteTime;
    union _LARGE_INTEGER ChangeTime;
    union _LARGE_INTEGER AllocationSize;
    union _LARGE_INTEGER EndOfFile;
    ULONG FileAttributes;
};

typedef struct _FILE_OBJECT {
    SHORT Type;
    SHORT Size;
    struct _DEVICE_OBJECT *DeviceObject;
    struct _VPB *Vpb;
    PVOID FsContext;
    PVOID FsContext2;
    struct _SECTION_OBJECT_POINTERS *SectionObjectPointer;
    PVOID PrivateCacheMap;
    LONG FinalStatus;
    struct _FILE_OBJECT *RelatedFileObject;
    UCHAR LockOperation;
    UCHAR DeletePending;
    UCHAR ReadAccess;
    UCHAR WriteAccess;
    UCHAR DeleteAccess;
    UCHAR SharedRead;
    UCHAR SharedWrite;
    UCHAR SharedDelete;
    ULONG Flags;
    struct _UNICODE_STRING FileName;
    union _LARGE_INTEGER CurrentByteOffset;
    ULONG Waiters;
    ULONG Busy;
    PVOID LastLock;
    struct _KEVENT Lock;
    struct _KEVENT Event;
    struct _IO_COMPLETION_CONTEXT *CompletionContext;
    ULONG64 IrpListLock;
    struct _LIST_ENTRY IrpList;
    PVOID FileObjectExtension;
};

typedef struct _FILE_STANDARD_INFORMATION {
    union _LARGE_INTEGER AllocationSize;
    union _LARGE_INTEGER EndOfFile;
    ULONG NumberOfLinks;
    UCHAR DeletePending;
    UCHAR Directory;
};

typedef struct _GENERAL_LOOKASIDE {
    union _SLIST_HEADER ListHead;
    struct _SINGLE_LIST_ENTRY SingleListHead;
    USHORT Depth;
    USHORT MaximumDepth;
    ULONG TotalAllocates;
    ULONG AllocateMisses;
    ULONG AllocateHits;
    ULONG TotalFrees;
    ULONG FreeMisses;
    ULONG FreeHits;
    enum _POOL_TYPE Type;
    ULONG Tag;
    ULONG Size;
    PVOID *AllocateEx;
    PVOID *Allocate;
    PVOID FreeEx;
    PVOID Free;
    struct _LIST_ENTRY ListEntry;
    ULONG LastTotalAllocates;
    ULONG LastAllocateMisses;
    ULONG LastAllocateHits;
    ULONG Future[2];
};

typedef struct _GENERAL_LOOKASIDE_POOL {
    union _SLIST_HEADER ListHead;
    struct _SINGLE_LIST_ENTRY SingleListHead;
    USHORT Depth;
    USHORT MaximumDepth;
    ULONG TotalAllocates;
    ULONG AllocateMisses;
    ULONG AllocateHits;
    ULONG TotalFrees;
    ULONG FreeMisses;
    ULONG FreeHits;
    enum _POOL_TYPE Type;
    ULONG Tag;
    ULONG Size;
    PVOID *AllocateEx;
    PVOID *Allocate;
    PVOID FreeEx;
    PVOID Free;
    struct _LIST_ENTRY ListEntry;
    ULONG LastTotalAllocates;
    ULONG LastAllocateMisses;
    ULONG LastAllocateHits;
    ULONG Future[2];
};

typedef struct _GUID {
    ULONG Data1;
    USHORT Data2;
    USHORT Data3;
    UCHAR Data4[8];
};

typedef struct _INITIAL_PRIVILEGE_SET {
    ULONG PrivilegeCount;
    ULONG Control;
    struct _LUID_AND_ATTRIBUTES Privilege[3];
};

typedef struct _INQUIRYDATA {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR DeviceTypeModifier : 7;
    UCHAR RemovableMedia : 1;
    UCHAR Versions;
    UCHAR ANSIVersion : 3;
    UCHAR ECMAVersion : 3;
    UCHAR ISOVersion : 2;
    UCHAR ResponseDataFormat : 4;
    UCHAR HiSupport : 1;
    UCHAR NormACA : 1;
    UCHAR TerminateTask : 1;
    UCHAR AERC : 1;
    UCHAR AdditionalLength;
    UCHAR Reserved;
    UCHAR PROTECT : 1;
    UCHAR Reserved_1 : 2;
    UCHAR ThirdPartyCoppy : 1;
    UCHAR TPGS : 2;
    UCHAR ACC : 1;
    UCHAR SCCS : 1;
    UCHAR Addr16 : 1;
    UCHAR Addr32 : 1;
    UCHAR AckReqQ : 1;
    UCHAR MediumChanger : 1;
    UCHAR MultiPort : 1;
    UCHAR ReservedBit2 : 1;
    UCHAR EnclosureServices : 1;
    UCHAR ReservedBit3 : 1;
    UCHAR SoftReset : 1;
    UCHAR CommandQueue : 1;
    UCHAR TransferDisable : 1;
    UCHAR LinkedCommands : 1;
    UCHAR Synchronous : 1;
    UCHAR Wide16Bit : 1;
    UCHAR Wide32Bit : 1;
    UCHAR RelativeAddressing : 1;
    UCHAR VendorId[8];
    UCHAR ProductId[16];
    UCHAR ProductRevisionLevel[4];
    UCHAR VendorSpecific[20];
    UCHAR Reserved3[2];
    USHORT VersionDescriptors[8];
    UCHAR Reserved4[30];
};

typedef struct _INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PVOID InterfaceReference;
    PVOID InterfaceDereference;
};

typedef struct _INTERRUPT_DATA {
    ULONG InterruptFlags;
    struct _SRB_DATA *CompletedRequests;
    struct _ADAPTER_TRANSFER MapTransferParameters;
    struct _ERROR_LOG_ENTRY LogEntry;
    struct _LOGICAL_UNIT_EXTENSION *ReadyLogicalUnit;
    struct _LOGICAL_UNIT_EXTENSION *CompletedAbort;
    PUCHAR HwTimerRequest;
    ULONG MiniportTimerValue;
    struct _WMI_MINIPORT_REQUEST_ITEM *WmiMiniPortRequests;
    ULONG TickCountAtLastInterruptAck;
    ULONG TickCountAtLastInterruptNak;
};

typedef struct _IO_COMPLETION_CONTEXT {
    PVOID Port;
    PVOID Key;
};

typedef struct _IO_DRIVER_CREATE_CONTEXT {
    SHORT Size;
    struct _ECP_LIST *ExtraCreateParameter;
    PVOID DeviceObjectHint;
    struct _TXN_PARAMETER_BLOCK *TxnParameters;
    struct _EJOB *SiloContext;
};

typedef struct _IO_RESOURCE_DESCRIPTOR {
    UCHAR Option;
    UCHAR Type;
    UCHAR ShareDisposition;
    UCHAR Spare1;
    USHORT Flags;
    USHORT Spare2;
    union {
        struct {
            ULONG Length;
            ULONG Alignment;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Port;
        struct {
            ULONG Length;
            ULONG Alignment;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Memory;
        struct {
            ULONG MinimumVector;
            ULONG MaximumVector;
            enum _IRQ_DEVICE_POLICY AffinityPolicy;
            enum _IRQ_PRIORITY PriorityPolicy;
            ULONG64 TargetedProcessors;
        } Interrupt;
        struct {
            ULONG MinimumChannel;
            ULONG MaximumChannel;
        } Dma;
        struct {
            ULONG RequestLine;
            ULONG Reserved;
            ULONG Channel;
            ULONG TransferWidth;
        } DmaV3;
        struct {
            ULONG Length;
            ULONG Alignment;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Generic;
        struct {
            ULONG Data[3];
        } DevicePrivate;
        struct {
            ULONG Length;
            ULONG MinBusNumber;
            ULONG MaxBusNumber;
            ULONG Reserved;
        } BusNumber;
        struct {
            ULONG Priority;
            ULONG Reserved1;
            ULONG Reserved2;
        } ConfigData;
        struct {
            ULONG Length40;
            ULONG Alignment40;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Memory40;
        struct {
            ULONG Length48;
            ULONG Alignment48;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Memory48;
        struct {
            ULONG Length64;
            ULONG Alignment64;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Memory64;
        struct {
            UCHAR Class;
            UCHAR Type;
            UCHAR Reserved1;
            UCHAR Reserved2;
            ULONG IdLowPart;
            ULONG IdHighPart;
        } Connection;
    } u;
};

typedef struct _IO_RESOURCE_LIST {
    USHORT Version;
    USHORT Revision;
    ULONG Count;
    struct _IO_RESOURCE_DESCRIPTOR Descriptors[1];
};

typedef struct _IO_RESOURCE_REQUIREMENTS_LIST {
    ULONG ListSize;
    enum _INTERFACE_TYPE InterfaceType;
    ULONG BusNumber;
    ULONG SlotNumber;
    ULONG Reserved[3];
    ULONG AlternativeLists;
    struct _IO_RESOURCE_LIST List[1];
};

typedef struct _IO_SCSI_CAPABILITIES {
    ULONG Length;
    ULONG MaximumTransferLength;
    ULONG MaximumPhysicalPages;
    ULONG SupportedAsynchronousEvents;
    ULONG AlignmentMask;
    UCHAR TaggedQueuing;
    UCHAR AdapterScansDown;
    UCHAR AdapterUsesPio;
};

typedef struct _IO_SECURITY_CONTEXT {
    struct _SECURITY_QUALITY_OF_SERVICE *SecurityQos;
    struct _ACCESS_STATE *AccessState;
    ULONG DesiredAccess;
    ULONG FullCreateOptions;
};

typedef struct _IO_STACK_LOCATION {
    UCHAR MajorFunction;
    UCHAR MinorFunction;
    UCHAR Flags;
    UCHAR Control;
    union {
        struct {
            struct _IO_SECURITY_CONTEXT *SecurityContext;
            ULONG Options;
            USHORT FileAttributes;
            USHORT ShareAccess;
            ULONG EaLength;
        } Create;
        struct {
            struct _IO_SECURITY_CONTEXT *SecurityContext;
            ULONG Options;
            USHORT Reserved;
            USHORT ShareAccess;
            struct _NAMED_PIPE_CREATE_PARAMETERS *Parameters;
        } CreatePipe;
        struct {
            struct _IO_SECURITY_CONTEXT *SecurityContext;
            ULONG Options;
            USHORT Reserved;
            USHORT ShareAccess;
            struct _MAILSLOT_CREATE_PARAMETERS *Parameters;
        } CreateMailslot;
        struct {
            ULONG Length;
            ULONG Key;
            ULONG Flags;
            union _LARGE_INTEGER ByteOffset;
        } Read;
        struct {
            ULONG Length;
            ULONG Key;
            ULONG Flags;
            union _LARGE_INTEGER ByteOffset;
        } Write;
        struct {
            ULONG Length;
            struct _UNICODE_STRING *FileName;
            enum _FILE_INFORMATION_CLASS FileInformationClass;
            ULONG FileIndex;
        } QueryDirectory;
        struct {
            ULONG Length;
            ULONG CompletionFilter;
        } NotifyDirectory;
        struct {
            ULONG Length;
            ULONG CompletionFilter;
            enum _DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass;
        } NotifyDirectoryEx;
        struct {
            ULONG Length;
            enum _FILE_INFORMATION_CLASS FileInformationClass;
        } QueryFile;
        struct {
            ULONG Length;
            enum _FILE_INFORMATION_CLASS FileInformationClass;
            struct _FILE_OBJECT *FileObject;
            UCHAR ReplaceIfExists;
            UCHAR AdvanceOnly;
            ULONG ClusterCount;
            PVOID DeleteHandle;
        } SetFile;
        struct {
            ULONG Length;
            PVOID EaList;
            ULONG EaListLength;
            ULONG EaIndex;
        } QueryEa;
        struct {
            ULONG Length;
        } SetEa;
        struct {
            ULONG Length;
            enum _FSINFOCLASS FsInformationClass;
        } QueryVolume;
        struct {
            ULONG Length;
            enum _FSINFOCLASS FsInformationClass;
        } SetVolume;
        struct {
            ULONG OutputBufferLength;
            ULONG InputBufferLength;
            ULONG FsControlCode;
            PVOID Type3InputBuffer;
        } FileSystemControl;
        struct {
            union _LARGE_INTEGER *Length;
            ULONG Key;
            union _LARGE_INTEGER ByteOffset;
        } LockControl;
        struct {
            ULONG OutputBufferLength;
            ULONG InputBufferLength;
            ULONG IoControlCode;
            PVOID Type3InputBuffer;
        } DeviceIoControl;
        struct {
            ULONG SecurityInformation;
            ULONG Length;
        } QuerySecurity;
        struct {
            ULONG SecurityInformation;
            PVOID SecurityDescriptor;
        } SetSecurity;
        struct {
            struct _VPB *Vpb;
            struct _DEVICE_OBJECT *DeviceObject;
        } MountVolume;
        struct {
            struct _VPB *Vpb;
            struct _DEVICE_OBJECT *DeviceObject;
        } VerifyVolume;
        struct {
            struct _SCSI_REQUEST_BLOCK *Srb;
        } Scsi;
        struct {
            ULONG Length;
            PVOID StartSid;
            struct _FILE_GET_QUOTA_INFORMATION *SidList;
            ULONG SidListLength;
        } QueryQuota;
        struct {
            ULONG Length;
        } SetQuota;
        struct {
            enum _DEVICE_RELATION_TYPE Type;
        } QueryDeviceRelations;
        struct {
            struct _GUID *InterfaceType;
            USHORT Size;
            USHORT Version;
            struct _INTERFACE *Interface;
            PVOID InterfaceSpecificData;
        } QueryInterface;
        struct {
            struct _DEVICE_CAPABILITIES *Capabilities;
        } DeviceCapabilities;
        struct {
            struct _IO_RESOURCE_REQUIREMENTS_LIST *IoResourceRequirementList;
        } FilterResourceRequirements;
        struct {
            ULONG WhichSpace;
            PVOID Buffer;
            ULONG Offset;
            ULONG Length;
        } ReadWriteConfig;
        struct {
            UCHAR Lock;
        } SetLock;
        struct {
            enum BUS_QUERY_ID_TYPE IdType;
        } QueryId;
        struct {
            enum DEVICE_TEXT_TYPE DeviceTextType;
            ULONG LocaleId;
        } QueryDeviceText;
        struct {
            UCHAR InPath;
            UCHAR Reserved[3];
            enum _DEVICE_USAGE_NOTIFICATION_TYPE Type;
        } UsageNotification;
        struct {
            enum _SYSTEM_POWER_STATE PowerState;
        } WaitWake;
        struct {
            struct _POWER_SEQUENCE *PowerSequence;
        } PowerSequence;
        struct {
            ULONG SystemContext;
            struct _SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;
            enum _POWER_STATE_TYPE Type;
            union _POWER_STATE State;
            enum POWER_ACTION ShutdownType;
        } Power;
        struct {
            struct _CM_RESOURCE_LIST *AllocatedResources;
            struct _CM_RESOURCE_LIST *AllocatedResourcesTranslated;
        } StartDevice;
        struct {
            ULONG64 ProviderId;
            PVOID DataPath;
            ULONG BufferSize;
            PVOID Buffer;
        } WMI;
        struct {
            PVOID Argument1;
            PVOID Argument2;
            PVOID Argument3;
            PVOID Argument4;
        } Others;
    } Parameters;
    struct _DEVICE_OBJECT *DeviceObject;
    struct _FILE_OBJECT *FileObject;
    PLONG CompletionRoutine;
    PVOID Context;
};

typedef struct _IO_STATUS_BLOCK {
    LONG Status;
    PVOID Pointer;
    ULONG64 Information;
};

typedef struct _IO_TIMER {
};

typedef struct _IRP {
    SHORT Type;
    USHORT Size;
    struct _MDL *MdlAddress;
    ULONG Flags;
    union {
        struct _IRP *MasterIrp;
        LONG IrpCount;
        PVOID SystemBuffer;
    } AssociatedIrp;
    struct _LIST_ENTRY ThreadListEntry;
    struct _IO_STATUS_BLOCK IoStatus;
    CHAR RequestorMode;
    UCHAR PendingReturned;
    CHAR StackCount;
    CHAR CurrentLocation;
    UCHAR Cancel;
    UCHAR CancelIrql;
    CHAR ApcEnvironment;
    UCHAR AllocationFlags;
    struct _IO_STATUS_BLOCK *UserIosb;
    struct _KEVENT *UserEvent;
    union {
        struct {
            PVOID UserApcRoutine;
            PVOID IssuingProcess;
            PVOID UserApcContext;
        } AsynchronousParameters;
        union _LARGE_INTEGER AllocationSize;
    } Overlay;
    PVOID CancelRoutine;
    PVOID UserBuffer;
    union {
        struct {
            struct _KDEVICE_QUEUE_ENTRY DeviceQueueEntry;
            PVOID DriverContext[4];
            struct _ETHREAD *Thread;
            PCHAR AuxiliaryBuffer;
            struct _LIST_ENTRY ListEntry;
            struct _IO_STACK_LOCATION *CurrentStackLocation;
            ULONG PacketType;
            struct _FILE_OBJECT *OriginalFileObject;
        } Overlay;
        struct _KAPC Apc;
        PVOID CompletionKey;
    } Tail;
};

typedef struct _KAPC {
    UCHAR Type;
    UCHAR SpareByte0;
    UCHAR Size;
    UCHAR SpareByte1;
    ULONG SpareLong0;
    struct _KTHREAD *Thread;
    struct _LIST_ENTRY ApcListEntry;
    PVOID Reserved[3];
    PVOID NormalContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
    CHAR ApcStateIndex;
    CHAR ApcMode;
    UCHAR Inserted;
};

typedef struct _KDEVICE_QUEUE {
    SHORT Type;
    SHORT Size;
    struct _LIST_ENTRY DeviceListHead;
    ULONG64 Lock;
    UCHAR Busy;
    LONG64 Reserved : 8;
    LONG64 Hint : 56;
};

typedef struct _KDEVICE_QUEUE_ENTRY {
    struct _LIST_ENTRY DeviceListEntry;
    ULONG SortKey;
    UCHAR Inserted;
};

typedef struct _KDPC {
    ULONG TargetInfoAsUlong;
    UCHAR Type;
    UCHAR Importance;
    USHORT Number;
    struct _SINGLE_LIST_ENTRY DpcListEntry;
    ULONG64 ProcessorHistory;
    PVOID DeferredRoutine;
    PVOID DeferredContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
    PVOID DpcData;
};

typedef struct _KEVENT {
    struct _DISPATCHER_HEADER Header;
};

typedef struct _KFLOATING_SAVE {
    ULONG Dummy;
};

typedef struct _KINTERRUPT {
};

typedef struct _KMUTANT {
    struct _DISPATCHER_HEADER Header;
    struct _LIST_ENTRY MutantListEntry;
    struct _KTHREAD *OwnerThread;
    UCHAR Abandoned;
    UCHAR ApcDisable;
};

typedef struct _KPCR {
    struct _NT_TIB NtTib;
    union _KGDTENTRY64 *GdtBase;
    struct _KTSS64 *TssBase;
    ULONG64 UserRsp;
    struct _KPCR *Self;
    struct _KPRCB *CurrentPrcb;
    struct _KSPIN_LOCK_QUEUE *LockArray;
    PVOID Used_Self;
    union _KIDTENTRY64 *IdtBase;
    ULONG64 Unused[2];
    UCHAR Irql;
    UCHAR SecondLevelCacheAssociativity;
    UCHAR ObsoleteNumber;
    UCHAR Fill0;
    ULONG Unused0[3];
    USHORT MajorVersion;
    USHORT MinorVersion;
    ULONG StallScaleFactor;
    PVOID Unused1[3];
    ULONG KernelReserved[15];
    ULONG SecondLevelCacheSize;
    ULONG HalReserved[16];
    ULONG Unused2;
    PVOID KdVersionBlock;
    PVOID Unused3;
    ULONG PcrAlign1[24];
};

typedef struct _KPRCB {
};

typedef struct _KSPIN_LOCK_QUEUE {
    struct _KSPIN_LOCK_QUEUE *Next;
    PULONG64 Lock;
};

typedef struct _KTHREAD {
};

typedef struct _KTIMER {
    struct _DISPATCHER_HEADER Header;
    union _ULARGE_INTEGER DueTime;
    struct _LIST_ENTRY TimerListEntry;
    struct _KDPC *Dpc;
    ULONG Processor;
    ULONG Period;
};

typedef struct _KTSS64 {
};

typedef struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

typedef struct _LOGICAL_UNIT_BIN {
    ULONG64 Lock;
    struct _LOGICAL_UNIT_EXTENSION *List;
};

typedef struct _LOGICAL_UNIT_EXTENSION {
    struct _DEVICE_OBJECT *DeviceObject;
    struct _COMMON_EXTENSION CommonExtension;
    ULONG LuFlags;
    ULONG PortNumber;
    UCHAR IsClaimed;
    UCHAR IsLegacyClaim;
    UCHAR IsEnumerated;
    UCHAR IsMissing;
    UCHAR IsVisible;
    UCHAR IsMismatched;
    UCHAR IsTemporary;
    ULONG NeedsVerification;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR RetryCount;
    ULONG CurrentKey;
    PVOID HwLogicalUnitExtension;
    struct _ADAPTER_EXTENSION *AdapterExtension;
    ULONG QueueLockCount;
    ULONG QueuePauseCount;
    struct _KDEVICE_QUEUE LockRequestQueue;
    struct _SRB_DATA *CurrentLockRequest;
    struct _LOGICAL_UNIT_EXTENSION *NextLogicalUnit;
    struct _LOGICAL_UNIT_EXTENSION *ReadyLogicalUnit;
    struct _LOGICAL_UNIT_EXTENSION *CompletedAbort;
    struct _SCSI_REQUEST_BLOCK *AbortSrb;
    LONG RequestTimeoutCounter;
    struct _LIST_ENTRY RequestList;
    struct _SRB_DATA *PendingRequest;
    struct _SRB_DATA *BusyRequest;
    struct _SRB_DATA *CurrentUntaggedRequest;
    UCHAR MaxQueueDepth;
    UCHAR QueueCount;
    struct _INQUIRYDATA InquiryData;
    PVOID TargetDeviceMapKey;
    PVOID LunDeviceMapKey;
    struct _SRB_DATA BypassSrbDataBlocks[4];
    ULONG64 BypassSrbDataSpinLock;
    union _SLIST_HEADER BypassSrbDataList;
    struct _SRB_DATA *ActiveFailedRequest;
    struct _SRB_DATA *BlockedFailedRequest;
    struct _IRP *RequestSenseIrp;
    struct _SCSI_REQUEST_BLOCK RequestSenseSrb;
    struct _MDL RequestSenseMdl;
    ULONG64 RequestSenseMdlPfn1;
    ULONG64 RequestSenseMdlPfn2;
    struct _LUN_LIST *TargetLunList;
    struct SP_SPECIAL_CONTROLLER_FLAGS SpecialFlags;
    UCHAR DeviceIdentifierPageSupported : 1;
    UCHAR SerialNumberPageSupported : 1;
    struct _STRING SerialNumber;
    struct _VPD_IDENTIFICATION_PAGE *DeviceIdentifierPage;
    ULONG DeviceIdentifierPageLength;
    ULONG TicksInReducedMaxQueueDepthState;
    ULONG Capacity;
    ULONG Zones;
    ULONG ZoneLength;
    ULONG FirstSector[4];
    ULONG LastSector[4];
    ULONG64 RequestCount[4];
    ULONG CurrentZone;
    ULONG ZoneCount;
    ULONG ZonePointer[4];
    UCHAR RedundantRequests[4];
    ULONG NextSequentialZone[4];
    ULONG IoLogIndex;
    ULONG IoLogEntries;
    struct _SP_LUN_IO_LOG IoLog[10];
    struct _LOGICAL_UNIT_EXTENSION *BlockedLogicalUnit;
    struct _LIST_ENTRY SrbDataBlockedRequests;
};

typedef struct _LOOKASIDE_LIST_EX {
    struct _GENERAL_LOOKASIDE_POOL L;
};

typedef struct _LUID {
    ULONG LowPart;
    LONG HighPart;
};

typedef struct _LUID_AND_ATTRIBUTES {
    struct _LUID Luid;
    ULONG Attributes;
};

typedef struct _LUN_LIST {
    UCHAR LunListLength[4];
    UCHAR Reserved[4];
    UCHAR Lun[0][8];
};

typedef struct _M128A {
    ULONG64 Low;
    LONG64 High;
};

typedef struct _MAILSLOT_CREATE_PARAMETERS {
    ULONG MailslotQuota;
    ULONG MaximumMessageSize;
    union _LARGE_INTEGER ReadTimeout;
    UCHAR TimeoutSpecified;
};

typedef struct _MAPPED_ADDRESS {
    struct _MAPPED_ADDRESS *NextMappedAddress;
    PVOID MappedAddress;
    ULONG NumberOfBytes;
    union _LARGE_INTEGER IoAddress;
    ULONG BusNumber;
};

typedef struct _MDL {
    struct _MDL *Next;
    SHORT Size;
    SHORT MdlFlags;
    struct _EPROCESS *Process;
    PVOID MappedSystemVa;
    PVOID StartVa;
    ULONG ByteCount;
    ULONG ByteOffset;
};

typedef struct _NAMED_PIPE_CREATE_PARAMETERS {
    ULONG NamedPipeType;
    ULONG ReadMode;
    ULONG CompletionMode;
    ULONG MaximumInstances;
    ULONG InboundQuota;
    ULONG OutboundQuota;
    union _LARGE_INTEGER DefaultTimeout;
    UCHAR TimeoutSpecified;
};

typedef struct _NPAGED_LOOKASIDE_LIST {
    struct _GENERAL_LOOKASIDE L;
};

typedef struct _NT_TIB {
    struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList;
    PVOID StackBase;
    PVOID StackLimit;
    PVOID SubSystemTib;
    PVOID FiberData;
    ULONG Version;
    PVOID ArbitraryUserPointer;
    struct _NT_TIB *Self;
};

typedef struct _OWNER_ENTRY {
    ULONG64 OwnerThread;
    ULONG IoPriorityBoosted : 1;
    ULONG OwnerReferenced : 1;
    ULONG IoQoSPriorityBoosted : 1;
    ULONG OwnerCount : 29;
    ULONG TableSize;
};

typedef struct _PAGED_LOOKASIDE_LIST {
    struct _GENERAL_LOOKASIDE L;
};

typedef struct _PCI_SLOT_NUMBER {
    union {
        struct {
            ULONG DeviceNumber : 5;
            ULONG FunctionNumber : 3;
            ULONG Reserved : 24;
        } bits;
        ULONG AsULONG;
    } u;
};

typedef struct _PORT_CONFIGURATION_INFORMATION {
    ULONG Length;
    ULONG SystemIoBusNumber;
    enum _INTERFACE_TYPE AdapterInterfaceType;
    ULONG BusInterruptLevel;
    ULONG BusInterruptVector;
    enum _KINTERRUPT_MODE InterruptMode;
    ULONG MaximumTransferLength;
    ULONG NumberOfPhysicalBreaks;
    ULONG DmaChannel;
    ULONG DmaPort;
    enum _DMA_WIDTH DmaWidth;
    enum _DMA_SPEED DmaSpeed;
    ULONG AlignmentMask;
    ULONG NumberOfAccessRanges;
    struct _ACCESS_RANGE *AccessRanges[0];
    PVOID Reserved;
    UCHAR NumberOfBuses;
    UCHAR InitiatorBusId[8];
    UCHAR ScatterGather;
    UCHAR Master;
    UCHAR CachesData;
    UCHAR AdapterScansDown;
    UCHAR AtdiskPrimaryClaimed;
    UCHAR AtdiskSecondaryClaimed;
    UCHAR Dma32BitAddresses;
    UCHAR DemandMode;
    UCHAR MapBuffers;
    UCHAR NeedPhysicalAddresses;
    UCHAR TaggedQueuing;
    UCHAR AutoRequestSense;
    UCHAR MultipleRequestPerLu;
    UCHAR ReceiveEvent;
    UCHAR RealModeInitialized;
    UCHAR BufferAccessScsiPortControlled;
    UCHAR MaximumNumberOfTargets;
    UCHAR ReservedUchars[2];
    ULONG SlotNumber;
    ULONG BusInterruptLevel2;
    ULONG BusInterruptVector2;
    enum _KINTERRUPT_MODE InterruptMode2;
    ULONG DmaChannel2;
    ULONG DmaPort2;
    enum _DMA_WIDTH DmaWidth2;
    enum _DMA_SPEED DmaSpeed2;
    ULONG DeviceExtensionSize;
    ULONG SpecificLuExtensionSize;
    ULONG SrbExtensionSize;
    UCHAR Dma64BitAddresses;
    UCHAR ResetTargetSupported;
    UCHAR MaximumNumberOfLogicalUnits;
    UCHAR WmiDataProvider;
};

typedef struct _POWER_SEQUENCE {
    ULONG SequenceD1;
    ULONG SequenceD2;
    ULONG SequenceD3;
};

typedef struct _PRIVILEGE_SET {
    ULONG PrivilegeCount;
    ULONG Control;
    struct _LUID_AND_ATTRIBUTES Privilege[1];
};

typedef struct _QUEUE_TAG_ENTRY {
    struct _SLIST_ENTRY Entry;
    PVOID Dummy;
    ULONG Tag;
};

typedef struct _QUEUE_TAG_LIST {
    union _SLIST_HEADER Header;
    struct _QUEUE_TAG_ENTRY *Buffer;
};

typedef struct _REMOVE_TRACKING_BLOCK {
    struct _REMOVE_TRACKING_BLOCK *NextBlock;
    PVOID Tag;
    union _LARGE_INTEGER TimeLocked;
    PCHAR File;
    ULONG Line;
};

typedef struct _RTL_BITMAP {
    ULONG SizeOfBitMap;
    PULONG Buffer;
};

typedef struct _RTL_DYNAMIC_HASH_TABLE {
    ULONG Flags;
    ULONG Shift;
    ULONG TableSize;
    ULONG Pivot;
    ULONG DivisorMask;
    ULONG NumEntries;
    ULONG NonEmptyBuckets;
    ULONG NumEnumerators;
    PVOID Directory;
};

typedef struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT {
    struct _LIST_ENTRY *ChainHead;
    struct _LIST_ENTRY *PrevLinkage;
    ULONG64 Signature;
};

typedef struct _RTL_DYNAMIC_HASH_TABLE_ENTRY {
    struct _LIST_ENTRY Linkage;
    ULONG64 Signature;
};

typedef struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR {
    struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;
    struct _LIST_ENTRY *CurEntry;
    struct _LIST_ENTRY *ChainHead;
    ULONG BucketIndex;
};

typedef struct _RTL_QUERY_REGISTRY_TABLE {
    PLONG QueryRoutine;
    ULONG Flags;
    PWCHAR Name;
    PVOID EntryContext;
    ULONG DefaultType;
    PVOID DefaultData;
    ULONG DefaultLength;
};

typedef struct _RTL_SPLAY_LINKS {
    struct _RTL_SPLAY_LINKS *Parent;
    struct _RTL_SPLAY_LINKS *LeftChild;
    struct _RTL_SPLAY_LINKS *RightChild;
};

typedef struct _SCATTER_GATHER_ELEMENT {
    union _LARGE_INTEGER Address;
    ULONG Length;
    ULONG64 Reserved;
};

typedef struct _SCATTER_GATHER_LIST {
    ULONG NumberOfElements;
    ULONG64 Reserved;
    struct _SCATTER_GATHER_ELEMENT Elements[0];
};

typedef struct _SCSI_REQUEST_BLOCK {
    USHORT Length;
    UCHAR Function;
    UCHAR SrbStatus;
    UCHAR ScsiStatus;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR QueueTag;
    UCHAR QueueAction;
    UCHAR CdbLength;
    UCHAR SenseInfoBufferLength;
    ULONG SrbFlags;
    ULONG DataTransferLength;
    ULONG TimeOutValue;
    PVOID DataBuffer;
    PVOID SenseInfoBuffer;
    struct _SCSI_REQUEST_BLOCK *NextSrb;
    PVOID OriginalRequest;
    PVOID SrbExtension;
    ULONG InternalStatus;
    ULONG QueueSortKey;
    ULONG LinkTimeoutValue;
    ULONG Reserved;
    UCHAR Cdb[16];
};

typedef struct _SCSI_SENSE_DESCRIPTOR_BLOCK_COMMAND {
    struct _SCSI_SENSE_DESCRIPTOR_HEADER Header;
    UCHAR Reserved1;
    UCHAR Reserved2 : 5;
    UCHAR IncorrectLength : 1;
    UCHAR Reserved3 : 2;
};

typedef struct _SCSI_SENSE_DESCRIPTOR_HEADER {
    UCHAR DescriptorType;
    UCHAR AdditionalLength;
};

typedef struct _SCSI_SENSE_DESCRIPTOR_INFORMATION {
    struct _SCSI_SENSE_DESCRIPTOR_HEADER Header;
    UCHAR Valid : 1;
    UCHAR Reserved1 : 7;
    UCHAR Reserved2;
    UCHAR Information[8];
};

typedef struct _SECTION_OBJECT_POINTERS {
    PVOID DataSectionObject;
    PVOID SharedCacheMap;
    PVOID ImageSectionObject;
};

typedef struct _SECURITY_QUALITY_OF_SERVICE {
    ULONG Length;
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    UCHAR ContextTrackingMode;
    UCHAR EffectiveOnly;
};

typedef struct _SECURITY_SUBJECT_CONTEXT {
    PVOID ClientToken;
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    PVOID PrimaryToken;
    PVOID ProcessAuditId;
};

typedef struct _SENSE_DATA {
    UCHAR ErrorCode : 7;
    UCHAR Valid : 1;
    UCHAR SegmentNumber;
    UCHAR SenseKey : 4;
    UCHAR Reserved : 1;
    UCHAR IncorrectLength : 1;
    UCHAR EndOfMedia : 1;
    UCHAR FileMark : 1;
    UCHAR Information[4];
    UCHAR AdditionalSenseLength;
    UCHAR CommandSpecificInformation[4];
    UCHAR AdditionalSenseCode;
    UCHAR AdditionalSenseCodeQualifier;
    UCHAR FieldReplaceableUnitCode;
    UCHAR SenseKeySpecific[3];
};

typedef struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
};

typedef struct _SLIST_ENTRY {
    struct _SLIST_ENTRY *Next;
};

typedef struct _SP_ENUMERATION_REQUEST {
    struct _SP_ENUMERATION_REQUEST *NextRequest;
    PVOID CompletionRoutine;
    PLONG CompletionStatus;
    PVOID Context;
    UCHAR Synchronous;
};

typedef struct _SP_LUN_IO_LOG {
    UCHAR SrbStatus;
    UCHAR ScsiStatus;
    UCHAR CdbLength;
    UCHAR Tag;
    UCHAR Cdb[16];
    UCHAR SenseData[18];
    UCHAR SenseDataLength;
    ULONG InternalStatus;
    ULONG QueueSortKey;
    ULONG TickCount;
};

typedef struct _SP_VA_MAPPING_INFO {
    PVOID OriginalSrbExtVa;
    ULONG SrbExtLen;
    struct _MDL *SrbExtMdl;
    PVOID RemappedSrbExtVa;
    PVOID OriginalSenseVa;
    ULONG SenseLen;
    struct _MDL *SenseMdl;
    PVOID RemappedSenseVa;
};

typedef struct _SRB_DATA {
    struct _SLIST_ENTRY Reserved;
    SHORT Type;
    USHORT Size;
    PVOID FreeRoutine;
    struct _LIST_ENTRY RequestList;
    struct _LOGICAL_UNIT_EXTENSION *LogicalUnit;
    struct _IRP *CurrentIrp;
    struct _SCSI_REQUEST_BLOCK *CurrentSrb;
    struct _SRB_DATA *CompletedRequests;
    ULONG ErrorLogRetryCount;
    ULONG SequenceNumber;
    struct _SCATTER_GATHER_LIST *MapRegisterBase;
    ULONG NumberOfMapRegisters;
    ULONG64 DataOffset;
    PVOID RequestSenseSave;
    ULONG OriginalDataTransferLength;
    ULONG Flags;
    struct _ADAPTER_EXTENSION *Adapter;
    ULONG QueueTag;
    LONG InternalStatus;
    ULONG TickCount;
    struct _MDL *RemappedMdl;
    PVOID OriginalDataBuffer;
    struct _SCATTER_GATHER_ELEMENT *ScatterGatherList;
    UCHAR RequestSenseLengthSave;
    PVOID UnmappedDataBuffer;
    struct _SRB_SCATTER_GATHER_LIST SmallScatterGatherList;
};

typedef struct _SRB_SCATTER_GATHER_LIST {
    ULONG NumberOfElements;
    ULONG64 Reserved;
    struct _SCATTER_GATHER_ELEMENT Elements[17];
    UCHAR HalContext[160];
};

typedef struct _STRING {
    USHORT Length;
    USHORT MaximumLength;
    PCHAR Buffer;
};

typedef struct _SYSTEM_POWER_STATE_CONTEXT {
    ULONG Reserved1 : 8;
    ULONG TargetSystemState : 4;
    ULONG EffectiveSystemState : 4;
    ULONG CurrentSystemState : 4;
    ULONG IgnoreHibernationPath : 1;
    ULONG PseudoTransition : 1;
    ULONG KernelSoftReboot : 1;
    ULONG DirectedDripsTransition : 1;
    ULONG Reserved2 : 8;
    ULONG ContextAsUlong;
};

typedef struct _TXN_PARAMETER_BLOCK {
    USHORT Length;
    USHORT TxFsContext;
    PVOID TransactionObject;
};

typedef struct _UNICODE_STRING {
    USHORT Length;
    USHORT MaximumLength;
    PWCHAR Buffer;
};

typedef struct _VERIFIER_EXTENSION {
    PULONG RealHwFindAdapter;
    PUCHAR RealHwInitialize;
    PUCHAR RealHwStartIo;
    PUCHAR RealHwInterrupt;
    PUCHAR RealHwResetBus;
    PVOID RealHwDmaStarted;
    PUCHAR RealHwRequestInterrupt;
    PUCHAR RealHwTimerRequest;
    enum _SCSI_ADAPTER_CONTROL_STATUS *RealHwAdapterControl;
    ULONG CommonBufferBlocks;
    PVOID *CommonBufferVAs;
    union _LARGE_INTEGER *CommonBufferPAs;
    ULONG NonCachedBufferSize;
    ULONG VrfyLevel;
    PVOID InvalidPage;
    UCHAR IsCommonBuffer;
};

typedef struct _VPB {
    SHORT Type;
    SHORT Size;
    USHORT Flags;
    USHORT VolumeLabelLength;
    struct _DEVICE_OBJECT *DeviceObject;
    struct _DEVICE_OBJECT *RealDevice;
    ULONG SerialNumber;
    ULONG ReferenceCount;
    WCHAR VolumeLabel[32];
};

typedef struct _VPD_IDENTIFICATION_PAGE {
    UCHAR DeviceType : 5;
    UCHAR DeviceTypeQualifier : 3;
    UCHAR PageCode;
    UCHAR Reserved;
    UCHAR PageLength;
    UCHAR Descriptors[0];
};

typedef struct _WAIT_CONTEXT_BLOCK {
    struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry;
    struct _LIST_ENTRY DmaWaitEntry;
    ULONG NumberOfChannels;
    ULONG SyncCallback : 1;
    ULONG DmaContext : 1;
    ULONG ZeroMapRegisters : 1;
    ULONG Reserved : 9;
    ULONG NumberOfRemapPages : 20;
    enum _IO_ALLOCATION_ACTION *DeviceRoutine;
    PVOID DeviceContext;
    ULONG NumberOfMapRegisters;
    PVOID DeviceObject;
    PVOID CurrentIrp;
    struct _KDPC *BufferChainingDpc;
};

typedef struct _WHEA_ERROR_PACKET_V2 {
    ULONG Signature;
    ULONG Version;
    ULONG Length;
    union _WHEA_ERROR_PACKET_FLAGS Flags;
    enum _WHEA_ERROR_TYPE ErrorType;
    enum _WHEA_ERROR_SEVERITY ErrorSeverity;
    ULONG ErrorSourceId;
    enum _WHEA_ERROR_SOURCE_TYPE ErrorSourceType;
    struct _GUID NotifyType;
    ULONG64 Context;
    enum _WHEA_ERROR_PACKET_DATA_FORMAT DataFormat;
    ULONG Reserved1;
    ULONG DataOffset;
    ULONG DataLength;
    ULONG PshedDataOffset;
    ULONG PshedDataLength;
};

typedef struct _WHEA_ERROR_RECORD {
    struct _WHEA_ERROR_RECORD_HEADER Header;
    struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR SectionDescriptor[1];
};

typedef struct _WHEA_ERROR_RECORD_HEADER {
    ULONG Signature;
    union _WHEA_REVISION Revision;
    ULONG SignatureEnd;
    USHORT SectionCount;
    enum _WHEA_ERROR_SEVERITY Severity;
    union _WHEA_ERROR_RECORD_HEADER_VALIDBITS ValidBits;
    ULONG Length;
    union _WHEA_TIMESTAMP Timestamp;
    struct _GUID PlatformId;
    struct _GUID PartitionId;
    struct _GUID CreatorId;
    struct _GUID NotifyType;
    ULONG64 RecordId;
    union _WHEA_ERROR_RECORD_HEADER_FLAGS Flags;
    union _WHEA_PERSISTENCE_INFO PersistenceInfo;
    UCHAR Reserved[12];
};

typedef struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR {
    ULONG SectionOffset;
    ULONG SectionLength;
    union _WHEA_REVISION Revision;
    union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS ValidBits;
    UCHAR Reserved;
    union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS Flags;
    struct _GUID SectionType;
    struct _GUID FRUId;
    enum _WHEA_ERROR_SEVERITY SectionSeverity;
    CHAR FRUText[20];
};

typedef struct _WHEA_EVENT_LOG_ENTRY {
    struct _WHEA_EVENT_LOG_ENTRY_HEADER Header;
};

typedef struct _WHEA_EVENT_LOG_ENTRY_HEADER {
    ULONG Signature;
    ULONG Version;
    ULONG Length;
    enum _WHEA_EVENT_LOG_ENTRY_TYPE Type;
    ULONG OwnerTag;
    enum _WHEA_EVENT_LOG_ENTRY_ID Id;
    union _WHEA_EVENT_LOG_ENTRY_FLAGS Flags;
    ULONG PayloadLength;
};

typedef struct _WMI_MINIPORT_REQUEST_ITEM {
    UCHAR WnodeEventItem[128];
    UCHAR TypeOfRequest;
    UCHAR PathId;
    UCHAR TargetId;
    UCHAR Lun;
    struct _WMI_MINIPORT_REQUEST_ITEM *NextRequest;
};

typedef struct _WORK_QUEUE_ITEM {
    struct _LIST_ENTRY List;
    PVOID WorkerRoutine;
    PVOID Parameter;
};

typedef struct _XSAVE_FORMAT {
    USHORT ControlWord;
    USHORT StatusWord;
    UCHAR TagWord;
    UCHAR Reserved1;
    USHORT ErrorOpcode;
    ULONG ErrorOffset;
    USHORT ErrorSelector;
    USHORT Reserved2;
    ULONG DataOffset;
    USHORT DataSelector;
    USHORT Reserved3;
    ULONG MxCsr;
    ULONG MxCsr_Mask;
    struct _M128A FloatRegisters[8];
    struct _M128A XmmRegisters[16];
    UCHAR Reserved4[96];
};

typedef union _KGDTENTRY64 {
};

typedef union _KIDTENTRY64 {
};

typedef union _LARGE_INTEGER {
    ULONG LowPart;
    LONG HighPart;
    struct {
        ULONG LowPart;
        LONG HighPart;
    } u;
    LONG64 QuadPart;
};

typedef union _POWER_STATE {
    enum _SYSTEM_POWER_STATE SystemState;
    enum _DEVICE_POWER_STATE DeviceState;
};

typedef union _SLIST_HEADER {
    ULONG64 Alignment;
    ULONG64 Region;
    struct {
        ULONG64 Depth : 16;
        ULONG64 Sequence : 48;
        ULONG64 Reserved : 4;
        ULONG64 NextEntry : 60;
    } HeaderX64;
};

typedef union _ULARGE_INTEGER {
    ULONG LowPart;
    ULONG HighPart;
    struct {
        ULONG LowPart;
        ULONG HighPart;
    } u;
    ULONG64 QuadPart;
};

typedef union _WHEA_ERROR_PACKET_FLAGS {
    ULONG PreviousError : 1;
    ULONG Reserved1 : 1;
    ULONG HypervisorError : 1;
    ULONG Simulated : 1;
    ULONG PlatformPfaControl : 1;
    ULONG PlatformDirectedOffline : 1;
    ULONG Reserved2 : 26;
    ULONG AsULONG;
};

typedef union _WHEA_ERROR_RECORD_HEADER_FLAGS {
    ULONG Recovered : 1;
    ULONG PreviousError : 1;
    ULONG Simulated : 1;
    ULONG Reserved : 29;
    ULONG AsULONG;
};

typedef union _WHEA_ERROR_RECORD_HEADER_VALIDBITS {
    ULONG PlatformId : 1;
    ULONG Timestamp : 1;
    ULONG PartitionId : 1;
    ULONG Reserved : 29;
    ULONG AsULONG;
};

typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS {
    ULONG Primary : 1;
    ULONG ContainmentWarning : 1;
    ULONG Reset : 1;
    ULONG ThresholdExceeded : 1;
    ULONG ResourceNotAvailable : 1;
    ULONG LatentError : 1;
    ULONG Propagated : 1;
    ULONG Reserved : 25;
    ULONG AsULONG;
};

typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS {
    UCHAR FRUId : 1;
    UCHAR FRUText : 1;
    UCHAR Reserved : 6;
    UCHAR AsUCHAR;
};

typedef union _WHEA_EVENT_LOG_ENTRY_FLAGS {
    ULONG Reserved : 32;
    ULONG AsULONG;
};

typedef union _WHEA_PERSISTENCE_INFO {
    ULONG64 Signature : 16;
    ULONG64 Length : 24;
    ULONG64 Identifier : 16;
    ULONG64 Attributes : 2;
    ULONG64 DoNotLog : 1;
    ULONG64 Reserved : 5;
    ULONG64 AsULONGLONG;
};

typedef union _WHEA_REVISION {
    UCHAR MinorRevision;
    UCHAR MajorRevision;
    USHORT AsUSHORT;
};

typedef union _WHEA_TIMESTAMP {
    ULONG64 Seconds : 8;
    ULONG64 Minutes : 8;
    ULONG64 Hours : 8;
    ULONG64 Precise : 1;
    ULONG64 Reserved : 7;
    ULONG64 Day : 8;
    ULONG64 Month : 8;
    ULONG64 Year : 8;
    ULONG64 Century : 8;
    union _LARGE_INTEGER AsLARGE_INTEGER;
};

typedef enum BUS_QUERY_ID_TYPE {
    BusQueryDeviceID = 0,
    BusQueryHardwareIDs = 1,
    BusQueryCompatibleIDs = 2,
    BusQueryInstanceID = 3,
    BusQueryDeviceSerialNumber = 4,
    BusQueryContainerID = 5
};

typedef enum DEVICE_TEXT_TYPE {
    DeviceTextDescription = 0,
    DeviceTextLocationInformation = 1
};

typedef enum DMA_COMPLETION_STATUS {
    DmaComplete = 0,
    DmaAborted = 1,
    DmaError = 2,
    DmaCancelled = 3
};

typedef enum POWER_ACTION {
    PowerActionNone = 0,
    PowerActionReserved = 1,
    PowerActionSleep = 2,
    PowerActionHibernate = 3,
    PowerActionShutdown = 4,
    PowerActionShutdownReset = 5,
    PowerActionShutdownOff = 6,
    PowerActionWarmEject = 7,
    PowerActionDisplayOff = 8
};

typedef enum _DEVICE_POWER_STATE {
    PowerDeviceUnspecified = 0,
    PowerDeviceD0 = 1,
    PowerDeviceD1 = 2,
    PowerDeviceD2 = 3,
    PowerDeviceD3 = 4,
    PowerDeviceMaximum = 5
};

typedef enum _DEVICE_RELATION_TYPE {
    BusRelations = 0,
    EjectionRelations = 1,
    PowerRelations = 2,
    RemovalRelations = 3,
    TargetDeviceRelation = 4,
    SingleBusRelations = 5,
    TransportRelations = 6
};

typedef enum _DEVICE_USAGE_NOTIFICATION_TYPE {
    DeviceUsageTypeUndefined = 0,
    DeviceUsageTypePaging = 1,
    DeviceUsageTypeHibernation = 2,
    DeviceUsageTypeDumpFile = 3,
    DeviceUsageTypeBoot = 4,
    DeviceUsageTypePostDisplay = 5
};

typedef enum _DEVICE_WAKE_DEPTH {
    DeviceWakeDepthNotWakeable = 0,
    DeviceWakeDepthD0 = 1,
    DeviceWakeDepthD1 = 2,
    DeviceWakeDepthD2 = 3,
    DeviceWakeDepthD3hot = 4,
    DeviceWakeDepthD3cold = 5,
    DeviceWakeDepthMaximum = 6
};

typedef enum _DIRECTORY_NOTIFY_INFORMATION_CLASS {
    DirectoryNotifyInformation = 1,
    DirectoryNotifyExtendedInformation = 2
};

typedef enum _DMA_SPEED {
    Compatible = 0,
    TypeA = 1,
    TypeB = 2,
    TypeC = 3,
    TypeF = 4,
    MaximumDmaSpeed = 5
};

typedef enum _DMA_WIDTH {
    Width8Bits = 0,
    Width16Bits = 1,
    Width32Bits = 2,
    Width64Bits = 3,
    WidthNoWrap = 4,
    MaximumDmaWidth = 5
};

typedef enum _EVENT_TYPE {
    NotificationEvent = 0,
    SynchronizationEvent = 1
};

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution = 0,
    ExceptionContinueSearch = 1,
    ExceptionNestedException = 2,
    ExceptionCollidedUnwind = 3
};

typedef enum _FILE_INFORMATION_CLASS {
    FileDirectoryInformation = 1,
    FileFullDirectoryInformation = 2,
    FileBothDirectoryInformation = 3,
    FileBasicInformation = 4,
    FileStandardInformation = 5,
    FileInternalInformation = 6,
    FileEaInformation = 7,
    FileAccessInformation = 8,
    FileNameInformation = 9,
    FileRenameInformation = 10,
    FileLinkInformation = 11,
    FileNamesInformation = 12,
    FileDispositionInformation = 13,
    FilePositionInformation = 14,
    FileFullEaInformation = 15,
    FileModeInformation = 16,
    FileAlignmentInformation = 17,
    FileAllInformation = 18,
    FileAllocationInformation = 19,
    FileEndOfFileInformation = 20,
    FileAlternateNameInformation = 21,
    FileStreamInformation = 22,
    FilePipeInformation = 23,
    FilePipeLocalInformation = 24,
    FilePipeRemoteInformation = 25,
    FileMailslotQueryInformation = 26,
    FileMailslotSetInformation = 27,
    FileCompressionInformation = 28,
    FileObjectIdInformation = 29,
    FileCompletionInformation = 30,
    FileMoveClusterInformation = 31,
    FileQuotaInformation = 32,
    FileReparsePointInformation = 33,
    FileNetworkOpenInformation = 34,
    FileAttributeTagInformation = 35,
    FileTrackingInformation = 36,
    FileIdBothDirectoryInformation = 37,
    FileIdFullDirectoryInformation = 38,
    FileValidDataLengthInformation = 39,
    FileShortNameInformation = 40,
    FileIoCompletionNotificationInformation = 41,
    FileIoStatusBlockRangeInformation = 42,
    FileIoPriorityHintInformation = 43,
    FileSfioReserveInformation = 44,
    FileSfioVolumeInformation = 45,
    FileHardLinkInformation = 46,
    FileProcessIdsUsingFileInformation = 47,
    FileNormalizedNameInformation = 48,
    FileNetworkPhysicalNameInformation = 49,
    FileIdGlobalTxDirectoryInformation = 50,
    FileIsRemoteDeviceInformation = 51,
    FileUnusedInformation = 52,
    FileNumaNodeInformation = 53,
    FileStandardLinkInformation = 54,
    FileRemoteProtocolInformation = 55,
    FileRenameInformationBypassAccessCheck = 56,
    FileLinkInformationBypassAccessCheck = 57,
    FileVolumeNameInformation = 58,
    FileIdInformation = 59,
    FileIdExtdDirectoryInformation = 60,
    FileReplaceCompletionInformation = 61,
    FileHardLinkFullIdInformation = 62,
    FileIdExtdBothDirectoryInformation = 63,
    FileDispositionInformationEx = 64,
    FileRenameInformationEx = 65,
    FileRenameInformationExBypassAccessCheck = 66,
    FileDesiredStorageClassInformation = 67,
    FileStatInformation = 68,
    FileMemoryPartitionInformation = 69,
    FileStatLxInformation = 70,
    FileCaseSensitiveInformation = 71,
    FileLinkInformationEx = 72,
    FileLinkInformationExBypassAccessCheck = 73,
    FileStorageReserveIdInformation = 74,
    FileCaseSensitiveInformationForceAccessCheck = 75,
    FileMaximumInformation = 76
};

typedef enum _FSINFOCLASS {
    FileFsVolumeInformation = 1,
    FileFsLabelInformation = 2,
    FileFsSizeInformation = 3,
    FileFsDeviceInformation = 4,
    FileFsAttributeInformation = 5,
    FileFsControlInformation = 6,
    FileFsFullSizeInformation = 7,
    FileFsObjectIdInformation = 8,
    FileFsDriverPathInformation = 9,
    FileFsVolumeFlagsInformation = 10,
    FileFsSectorSizeInformation = 11,
    FileFsDataCopyInformation = 12,
    FileFsMetadataSizeInformation = 13,
    FileFsFullSizeInformationEx = 14,
    FileFsMaximumInformation = 15
};

typedef enum _INTERFACE_TYPE {
    InterfaceTypeUndefined = -1,
    Internal = 0,
    Isa = 1,
    Eisa = 2,
    MicroChannel = 3,
    TurboChannel = 4,
    PCIBus = 5,
    VMEBus = 6,
    NuBus = 7,
    PCMCIABus = 8,
    CBus = 9,
    MPIBus = 10,
    MPSABus = 11,
    ProcessorInternal = 12,
    InternalPowerBus = 13,
    PNPISABus = 14,
    PNPBus = 15,
    Vmcs = 16,
    ACPIBus = 17,
    MaximumInterfaceType = 18
};

typedef enum _INTERLOCKED_RESULT {
    ResultNegative = 1,
    ResultZero = 0,
    ResultPositive = 2
};

typedef enum _IO_ALLOCATION_ACTION {
    KeepObject = 1,
    DeallocateObject = 2,
    DeallocateObjectKeepRegisters = 3
};

typedef enum _IRQ_DEVICE_POLICY {
    IrqPolicyMachineDefault = 0,
    IrqPolicyAllCloseProcessors = 1,
    IrqPolicyOneCloseProcessor = 2,
    IrqPolicyAllProcessorsInMachine = 3,
    IrqPolicySpecifiedProcessors = 4,
    IrqPolicySpreadMessagesAcrossAllProcessors = 5,
    IrqPolicyAllProcessorsInMachineWhenSteered = 6
};

typedef enum _IRQ_PRIORITY {
    IrqPriorityUndefined = 0,
    IrqPriorityLow = 1,
    IrqPriorityNormal = 2,
    IrqPriorityHigh = 3
};

typedef enum _KINTERRUPT_MODE {
    LevelSensitive = 0,
    Latched = 1
};

typedef enum _KINTERRUPT_POLARITY {
    InterruptPolarityUnknown = 0,
    InterruptActiveHigh = 1,
    InterruptRisingEdge = 1,
    InterruptActiveLow = 2,
    InterruptFallingEdge = 2,
    InterruptActiveBoth = 3,
    InterruptActiveBothTriggerLow = 3,
    InterruptActiveBothTriggerHigh = 4
};

typedef enum _MEMORY_CACHING_TYPE {
    MmNonCached = 0,
    MmCached = 1,
    MmWriteCombined = 2,
    MmHardwareCoherentCached = 3,
    MmNonCachedUnordered = 4,
    MmUSWCCached = 5,
    MmMaximumCacheType = 6,
    MmNotMapped = -1
};

typedef enum _MEMORY_CACHING_TYPE_ORIG {
    MmFrameBufferCached = 2
};

typedef enum _MODE {
    KernelMode = 0,
    UserMode = 1,
    MaximumMode = 2
};

typedef enum _POOL_TYPE {
    NonPagedPool = 0,
    NonPagedPoolExecute = 0,
    PagedPool = 1,
    NonPagedPoolMustSucceed = 2,
    DontUseThisType = 3,
    NonPagedPoolCacheAligned = 4,
    PagedPoolCacheAligned = 5,
    NonPagedPoolCacheAlignedMustS = 6,
    MaxPoolType = 7,
    NonPagedPoolBase = 0,
    NonPagedPoolBaseMustSucceed = 2,
    NonPagedPoolBaseCacheAligned = 4,
    NonPagedPoolBaseCacheAlignedMustS = 6,
    NonPagedPoolSession = 32,
    PagedPoolSession = 33,
    NonPagedPoolMustSucceedSession = 34,
    DontUseThisTypeSession = 35,
    NonPagedPoolCacheAlignedSession = 36,
    PagedPoolCacheAlignedSession = 37,
    NonPagedPoolCacheAlignedMustSSession = 38,
    NonPagedPoolNx = 512,
    NonPagedPoolNxCacheAligned = 516,
    NonPagedPoolSessionNx = 544
};

typedef enum _POWER_STATE_TYPE {
    SystemPowerState = 0,
    DevicePowerState = 1
};

typedef enum _REG_NOTIFY_CLASS {
    RegNtDeleteKey = 0,
    RegNtPreDeleteKey = 0,
    RegNtSetValueKey = 1,
    RegNtPreSetValueKey = 1,
    RegNtDeleteValueKey = 2,
    RegNtPreDeleteValueKey = 2,
    RegNtSetInformationKey = 3,
    RegNtPreSetInformationKey = 3,
    RegNtRenameKey = 4,
    RegNtPreRenameKey = 4,
    RegNtEnumerateKey = 5,
    RegNtPreEnumerateKey = 5,
    RegNtEnumerateValueKey = 6,
    RegNtPreEnumerateValueKey = 6,
    RegNtQueryKey = 7,
    RegNtPreQueryKey = 7,
    RegNtQueryValueKey = 8,
    RegNtPreQueryValueKey = 8,
    RegNtQueryMultipleValueKey = 9,
    RegNtPreQueryMultipleValueKey = 9,
    RegNtPreCreateKey = 10,
    RegNtPostCreateKey = 11,
    RegNtPreOpenKey = 12,
    RegNtPostOpenKey = 13,
    RegNtKeyHandleClose = 14,
    RegNtPreKeyHandleClose = 14,
    RegNtPostDeleteKey = 15,
    RegNtPostSetValueKey = 16,
    RegNtPostDeleteValueKey = 17,
    RegNtPostSetInformationKey = 18,
    RegNtPostRenameKey = 19,
    RegNtPostEnumerateKey = 20,
    RegNtPostEnumerateValueKey = 21,
    RegNtPostQueryKey = 22,
    RegNtPostQueryValueKey = 23,
    RegNtPostQueryMultipleValueKey = 24,
    RegNtPostKeyHandleClose = 25,
    RegNtPreCreateKeyEx = 26,
    RegNtPostCreateKeyEx = 27,
    RegNtPreOpenKeyEx = 28,
    RegNtPostOpenKeyEx = 29,
    RegNtPreFlushKey = 30,
    RegNtPostFlushKey = 31,
    RegNtPreLoadKey = 32,
    RegNtPostLoadKey = 33,
    RegNtPreUnLoadKey = 34,
    RegNtPostUnLoadKey = 35,
    RegNtPreQueryKeySecurity = 36,
    RegNtPostQueryKeySecurity = 37,
    RegNtPreSetKeySecurity = 38,
    RegNtPostSetKeySecurity = 39,
    RegNtCallbackObjectContextCleanup = 40,
    RegNtPreRestoreKey = 41,
    RegNtPostRestoreKey = 42,
    RegNtPreSaveKey = 43,
    RegNtPostSaveKey = 44,
    RegNtPreReplaceKey = 45,
    RegNtPostReplaceKey = 46,
    RegNtPreQueryKeyName = 47,
    RegNtPostQueryKeyName = 48,
    MaxRegNtNotifyClass = 49
};

typedef enum _SCSI_ADAPTER_CONTROL_STATUS {
    ScsiAdapterControlSuccess = 0,
    ScsiAdapterControlUnsuccessful = 1
};

typedef enum _SCSI_ADAPTER_CONTROL_TYPE {
    ScsiQuerySupportedControlTypes = 0,
    ScsiStopAdapter = 1,
    ScsiRestartAdapter = 2,
    ScsiSetBootConfig = 3,
    ScsiSetRunningConfig = 4,
    ScsiAdapterControlMax = 5,
    MakeAdapterControlTypeSizeOfUlong = -1
};

typedef enum _SECURITY_IMPERSONATION_LEVEL {
    SecurityAnonymous = 0,
    SecurityIdentification = 1,
    SecurityImpersonation = 2,
    SecurityDelegation = 3
};

typedef enum _SYSTEM_POWER_STATE {
    PowerSystemUnspecified = 0,
    PowerSystemWorking = 1,
    PowerSystemSleeping1 = 2,
    PowerSystemSleeping2 = 3,
    PowerSystemSleeping3 = 4,
    PowerSystemHibernate = 5,
    PowerSystemShutdown = 6,
    PowerSystemMaximum = 7
};

typedef enum _USER_ACTIVITY_PRESENCE {
    PowerUserPresent = 0,
    PowerUserNotPresent = 1,
    PowerUserInactive = 2,
    PowerUserMaximum = 3,
    PowerUserInvalid = 3
};

typedef enum _WHEA_ERROR_PACKET_DATA_FORMAT {
    WheaDataFormatIPFSalRecord = 0,
    WheaDataFormatXPFMCA = 1,
    WheaDataFormatMemory = 2,
    WheaDataFormatPCIExpress = 3,
    WheaDataFormatNMIPort = 4,
    WheaDataFormatPCIXBus = 5,
    WheaDataFormatPCIXDevice = 6,
    WheaDataFormatGeneric = 7,
    WheaDataFormatMax = 8
};

typedef enum _WHEA_ERROR_SEVERITY {
    WheaErrSevRecoverable = 0,
    WheaErrSevFatal = 1,
    WheaErrSevCorrected = 2,
    WheaErrSevInformational = 3
};

typedef enum _WHEA_ERROR_SOURCE_TYPE {
    WheaErrSrcTypeMCE = 0,
    WheaErrSrcTypeCMC = 1,
    WheaErrSrcTypeCPE = 2,
    WheaErrSrcTypeNMI = 3,
    WheaErrSrcTypePCIe = 4,
    WheaErrSrcTypeGeneric = 5,
    WheaErrSrcTypeINIT = 6,
    WheaErrSrcTypeBOOT = 7,
    WheaErrSrcTypeSCIGeneric = 8,
    WheaErrSrcTypeIPFMCA = 9,
    WheaErrSrcTypeIPFCMC = 10,
    WheaErrSrcTypeIPFCPE = 11,
    WheaErrSrcTypeGenericV2 = 12,
    WheaErrSrcTypeSCIGenericV2 = 13,
    WheaErrSrcTypeMax = 14
};

typedef enum _WHEA_ERROR_TYPE {
    WheaErrTypeProcessor = 0,
    WheaErrTypeMemory = 1,
    WheaErrTypePCIExpress = 2,
    WheaErrTypeNMI = 3,
    WheaErrTypePCIXBus = 4,
    WheaErrTypePCIXDevice = 5,
    WheaErrTypeGeneric = 6
};

typedef enum _WHEA_EVENT_LOG_ENTRY_ID {
    WheaEventLogEntryIdCmcPollingTimeout = -2147483647,
    WheaEventLogEntryIdWheaInit = -2147483646,
    WheaEventLogEntryIdMax = -2147483645
};

typedef enum _WHEA_EVENT_LOG_ENTRY_TYPE {
    WheaEventLogEntryTypeInformational = 0,
    WheaEventLogEntryTypeWarning = 1,
    WheaEventLogEntryTypeError = 2
};

AdapterMajorFunctionTable;
DeviceMajorFunctionTable;
DeviceTypeInfo;
GUID_BUS_INTERFACE_STANDARD;
GUID_BUS_TYPE_EISA;
GUID_BUS_TYPE_ISAPNP;
GUID_BUS_TYPE_PCI;
GUID_BUS_TYPE_PCMCIA;
GUID_DEVCLASS_SCSIADAPTER;
GUID_DEVINTERFACE_STORAGEPORT;
GUID_NULL;
GUID_STORAGE_QUERY_FDO_DEVICE_RELATIONS;
GUID_STORAGE_QUERY_FDO_INFO;
GUID_STORAGE_QUERY_PDO_INFO;
Mm64BitPhysicalAddress;
PowerMinorStrings;
Scsi1DeviceMajorFunctionTable;
ScsiCheckInterrupts;
ScsiDeviceMapKey;
ScsiDirectory;
ScsiGlobalAdapterList;
ScsiGlobalAdapterListElements;
ScsiGlobalAdapterListSpinLock;
ScsiPortDefaultLunList;
ScsiPortLegacyAdapterDetection;
ScsiPortVerifierFunctionTable;
ScsiPortVerifierInitialized;
Sp64BitPhysicalAddresses;
SpGuidInterfaceMappingList;
SpLunIoLogActive;
SpMarker;
SpPAGELOCKLockCount;
SpPerBlockLimit;
SpPerZoneLimit;
SpRemapBuffersByDefault;
SpVrfyLevel;
VerifierApiCodeSectionHandle;
VerifierCodeSectionHandle;
WPPTraceSuite;
WPP_01faac669c4c334e2e67bb5c11a7b70f_Traceguids;
WPP_0db3571ec6ef354482000ce0c47af2bd_Traceguids;
WPP_1a65e47105e83a30d811e4eddd31e138_Traceguids;
WPP_2dc72cb653993f98def635b7965f4268_Traceguids;
WPP_585ccfe8a59a36c18f9a1237d78efe4e_Traceguids;
WPP_6fdaf5a2af843995d310af4754925049_Traceguids;
WPP_743b9cdc31433bbbb884dd23e2dcf560_Traceguids;
WPP_759a1c743b0234f38186854775d2a48d_Traceguids;
WPP_8f8827a013f33972ea5a1fbec61c9ec5_Traceguids;
WPP_GLOBAL_Control;
WPP_MAIN_CB;
WPP_ThisDir_CTLGUID_wppCtlGuid;
WPP_b2bde9dea7df3898a1c0c501aab1f951_Traceguids;
WPP_bd1a8e32e8bd307d5f343033071f15ac_Traceguids;
WPP_c9f1ed539376321866c3aee5251208c7_Traceguids;
WPP_d81ea265393a321436e58949d1ba21f7_Traceguids;
WPP_f12ba0cc62343d84163f9acedfffced6_Traceguids;
WPP_f4a26913e2cb326e10835a9e563374dc_Traceguids;
_IMPORT_DESCRIPTOR_HAL;
_IMPORT_DESCRIPTOR_WMILIB;
_IMPORT_DESCRIPTOR_ntoskrnl;
_NULL_IMPORT_DESCRIPTOR;
__PchSym_;
_guard_check_icall_fptr;
_guard_dispatch_icall_fptr;
_guard_fids_table;
_guard_iat_table;
_imp_DbgPrint;
_imp_DbgPrintEx;
_imp_ExAcquireFastMutex;
_imp_ExAllocatePoolWithTag;
_imp_ExDeleteNPagedLookasideList;
_imp_ExFreePoolWithTag;
_imp_ExInitializeNPagedLookasideList;
_imp_ExQueryDepthSList;
_imp_ExQueueWorkItem;
_imp_ExReleaseFastMutex;
_imp_ExpInterlockedPopEntrySList;
_imp_ExpInterlockedPushEntrySList;
_imp_HalTranslateBusAddress;
_imp_InitializeSListHead;
_imp_IoAcquireCancelSpinLock;
_imp_IoAllocateDriverObjectExtension;
_imp_IoAllocateErrorLogEntry;
_imp_IoAllocateIrp;
_imp_IoAllocateMdl;
_imp_IoAllocateWorkItem;
_imp_IoAttachDeviceToDeviceStack;
_imp_IoBuildAsynchronousFsdRequest;
_imp_IoBuildSynchronousFsdRequest;
_imp_IoCancelIrp;
_imp_IoConnectInterrupt;
_imp_IoCreateDevice;
_imp_IoCreateSymbolicLink;
_imp_IoDeleteDevice;
_imp_IoDeleteSymbolicLink;
_imp_IoDetachDevice;
_imp_IoDisconnectInterrupt;
_imp_IoFreeErrorLogEntry;
_imp_IoFreeIrp;
_imp_IoFreeMdl;
_imp_IoFreeWorkItem;
_imp_IoGetConfigurationInformation;
_imp_IoGetDeviceProperty;
_imp_IoGetDmaAdapter;
_imp_IoGetDriverObjectExtension;
_imp_IoGetFileObjectGenericMapping;
_imp_IoInitializeIrp;
_imp_IoInitializeTimer;
_imp_IoInvalidateDeviceRelations;
_imp_IoInvalidateDeviceState;
_imp_IoIs32bitProcess;
_imp_IoOpenDeviceRegistryKey;
_imp_IoQueryDeviceDescription;
_imp_IoQueueWorkItem;
_imp_IoRegisterDeviceInterface;
_imp_IoReleaseCancelSpinLock;
_imp_IoReportDetectedDevice;
_imp_IoSetDeviceInterfaceState;
_imp_IoStartNextPacket;
_imp_IoStartPacket;
_imp_IoStartTimer;
_imp_IoStopTimer;
_imp_IoWMIDeviceObjectToProviderId;
_imp_IoWMIRegistrationControl;
_imp_IoWMIWriteEvent;
_imp_IoWriteErrorLogEntry;
_imp_IofCallDriver;
_imp_IofCompleteRequest;
_imp_KeAcquireSpinLockAtDpcLevel;
_imp_KeAcquireSpinLockRaiseToDpc;
_imp_KeBugCheckEx;
_imp_KeCancelTimer;
_imp_KeClearEvent;
_imp_KeEnterCriticalRegion;
_imp_KeFlushIoBuffers;
_imp_KeInitializeDeviceQueue;
_imp_KeInitializeDpc;
_imp_KeInitializeEvent;
_imp_KeInitializeMutex;
_imp_KeInitializeSpinLock;
_imp_KeInitializeTimer;
_imp_KeInsertByKeyDeviceQueue;
_imp_KeInsertDeviceQueue;
_imp_KeInsertQueueDpc;
_imp_KeLeaveCriticalRegion;
_imp_KeLowerIrql;
_imp_KeQueryTimeIncrement;
_imp_KeReleaseMutex;
_imp_KeReleaseSpinLock;
_imp_KeReleaseSpinLockFromDpcLevel;
_imp_KeRemoveByKeyDeviceQueueIfBusy;
_imp_KeRemoveDeviceQueue;
_imp_KeResetEvent;
_imp_KeSetEvent;
_imp_KeSetTimer;
_imp_KeStallExecutionProcessor;
_imp_KeSynchronizeExecution;
_imp_KeWaitForSingleObject;
_imp_KfRaiseIrql;
_imp_Mm64BitPhysicalAddress;
_imp_MmAddVerifierThunks;
_imp_MmAllocateContiguousNodeMemory;
_imp_MmAllocateMappingAddress;
_imp_MmBuildMdlForNonPagedPool;
_imp_MmFreeContiguousMemorySpecifyCache;
_imp_MmFreeMappingAddress;
_imp_MmGetPhysicalAddress;
_imp_MmGetSystemRoutineAddress;
_imp_MmIsVerifierEnabled;
_imp_MmLockPagableDataSection;
_imp_MmLockPagableSectionByHandle;
_imp_MmMapIoSpace;
_imp_MmMapLockedPagesSpecifyCache;
_imp_MmMapLockedPagesWithReservedMapping;
_imp_MmProbeAndLockPages;
_imp_MmProtectMdlSystemAddress;
_imp_MmUnlockPagableImageSection;
_imp_MmUnlockPages;
_imp_MmUnmapIoSpace;
_imp_MmUnmapLockedPages;
_imp_MmUnmapReservedMapping;
_imp_ObReferenceObjectByHandle;
_imp_ObReferenceObjectByPointer;
_imp_ObfDereferenceObject;
_imp_ObfReferenceObject;
_imp_PoCallDriver;
_imp_PoRegisterDeviceForIdleDetection;
_imp_PoRequestPowerIrp;
_imp_PoSetPowerState;
_imp_PoStartNextPowerIrp;
_imp_RtlAnsiStringToUnicodeString;
_imp_RtlAppendUnicodeStringToString;
_imp_RtlAreBitsSet;
_imp_RtlClearAllBits;
_imp_RtlCompareMemory;
_imp_RtlCopyString;
_imp_RtlCopyUnicodeString;
_imp_RtlEqualString;
_imp_RtlFreeUnicodeString;
_imp_RtlGUIDFromString;
_imp_RtlInitAnsiString;
_imp_RtlInitUnicodeString;
_imp_RtlInitializeBitMap;
_imp_RtlIntegerToUnicodeString;
_imp_RtlQueryRegistryValues;
_imp_RtlSetBits;
_imp_RtlStringFromGUID;
_imp_RtlUnicodeStringToAnsiString;
_imp_RtlUnicodeStringToInteger;
_imp_RtlxAnsiStringToUnicodeSize;
_imp_SeAccessCheck;
_imp_SeCaptureSubjectContext;
_imp_SeLockSubjectContext;
_imp_SeReleaseSubjectContext;
_imp_SeUnlockSubjectContext;
_imp_WmiFireEvent;
_imp_WmiQueryTraceInformation;
_imp_WmiTraceMessageVa;
_imp_ZwClose;
_imp_ZwCreateDirectoryObject;
_imp_ZwCreateKey;
_imp_ZwDeleteKey;
_imp_ZwEnumerateValueKey;
_imp_ZwOpenKey;
_imp_ZwQueryValueKey;
_imp_ZwSetValueKey;
_imp___C_specific_handler;
_imp__vsnprintf;
_imp__vsnwprintf;
_imp__wcsnicmp;
_imp_vDbgPrintExWithPrefix;
_security_cookie;
_security_cookie_complement;
load_config_used;
pfnEtwRegisterClassicProvider;
pfnEtwUnregister;
pfnWppGetVersion;
pfnWppQueryTraceInformation;
pfnWppTraceMessage;
HAL_NULL_THUNK_DATA;
WMILIB_NULL_THUNK_DATA;
ntoskrnl_NULL_THUNK_DATA;

AdjustReportLuns();
AppendField();
DllInitialize();
DriverEntry();
GetLogicalUnitExtension();
GetNextLuRequest();
GetNextLuRequestWithoutLock();
GsDriverEntry();
IssueInquiry();
IssueReportLuns();
IssueRequestSense();
IssueRequestSenseCompletion();
LogErrorEntry();
PortPassThroughBuildIrp();
PortPassThroughBuildSrb();
PortPassThroughExBasicValidation();
PortPassThroughExMarshalResultsFromSrbEx();
PortPassThroughExNormalize();
PortPassThroughFreeIrp();
PortPassThroughFreeSrb();
PortPassThroughMarshalResultsFromSrb();
PortPassThroughNormalize();
PortPassThroughSendAsync();
PortPassThroughSrbInitialize();
PortPassThroughValidateNormalizedRequest();
PortTraceErrorDrainList();
PortTraceErrorFreeDriver();
PortTraceErrorRegisterDriver();
PortTraceInitGlobalLogger();
PortTraceInitTracing();
PortpAsyncCompletion();
PortpCancelRoutine();
PortpCompleteRequestIrp();
PortpEnableCancel();
PortpErrorDrainListDpc();
PortpErrorInitDpc();
PortpPassThroughZeroUnusedBuffers();
PortpSyncCompletion();
RtlDuplicateCmResourceList();
RtlStringCbPrintfA();
RtlStringCbPrintfW();
ScsiDebugPrint();
ScsiPortAddDevice();
ScsiPortAddGenericControllerId();
ScsiPortAllocationRoutine();
ScsiPortCompleteRequest();
ScsiPortCompleteRequestVrfy();
ScsiPortCompletionDpc();
ScsiPortConvertPhysicalAddressToUlong();
ScsiPortConvertUlongToPhysicalAddress();
ScsiPortDispatchPower();
ScsiPortDispatchUnimplemented();
ScsiPortFdoCreateClose();
ScsiPortFdoDeviceControl();
ScsiPortFdoDispatch();
ScsiPortFdoPnp();
ScsiPortFlushDma();
ScsiPortFlushDmaVrfy();
ScsiPortFreeDeviceBase();
ScsiPortFreeDeviceBaseVrfy();
ScsiPortGetBusData();
ScsiPortGetBusDataVrfy();
ScsiPortGetDeviceBase();
ScsiPortGetDeviceBaseVrfy();
ScsiPortGetDeviceId();
ScsiPortGetHardwareIds();
ScsiPortGetHardwareIds$fin$0();
ScsiPortGetLogicalUnit();
ScsiPortGetLogicalUnitVrfy();
ScsiPortGetPhysicalAddress();
ScsiPortGetPhysicalAddressVrfy();
ScsiPortGetSrb();
ScsiPortGetSrbVrfy();
ScsiPortGetUncachedExtension();
ScsiPortGetUncachedExtensionVrfy();
ScsiPortGetVirtualAddress();
ScsiPortGetVirtualAddressVrfy();
ScsiPortGlobalDispatch();
ScsiPortInitLogicalUnit();
ScsiPortInitPdoWmi();
ScsiPortInitPnpAdapter();
ScsiPortInitPnpAdapter$fin$0();
ScsiPortInitialize();
ScsiPortInitializeDispatchTables();
ScsiPortInitializeVrfy();
ScsiPortInterrupt();
ScsiPortIoMapTransfer();
ScsiPortIoMapTransferVrfy();
ScsiPortLogError();
ScsiPortMoveMemory();
ScsiPortNotification();
ScsiPortNotificationVrfy();
ScsiPortPdoCreateClose();
ScsiPortPdoDeviceControl();
ScsiPortPdoPnp();
ScsiPortPdoScsi();
ScsiPortQueryProperty();
ScsiPortQueryPropertyPdo();
ScsiPortQuerySystemTime();
ScsiPortReadPortBufferUchar();
ScsiPortReadPortBufferUlong();
ScsiPortReadPortBufferUshort();
ScsiPortReadPortUchar();
ScsiPortReadPortUlong();
ScsiPortReadPortUshort();
ScsiPortReadRegisterBufferUchar();
ScsiPortReadRegisterBufferUlong();
ScsiPortReadRegisterBufferUshort();
ScsiPortReadRegisterUchar();
ScsiPortReadRegisterUlong();
ScsiPortReadRegisterUshort();
ScsiPortRemoveAdapter();
ScsiPortScsi1PdoScsi();
ScsiPortSetBusDataByOffset();
ScsiPortSetBusDataByOffsetVrfy();
ScsiPortStallExecution();
ScsiPortStallExecutionVrfy();
ScsiPortStartAdapter();
ScsiPortStartIo();
ScsiPortStartLogicalUnit();
ScsiPortStopAdapter();
ScsiPortStringArrayToMultiString();
ScsiPortSystemControlIrp();
ScsiPortTickHandler();
ScsiPortUnload();
ScsiPortValidateRange();
ScsiPortValidateRangeVrfy();
ScsiPortWritePortBufferUchar();
ScsiPortWritePortBufferUlong();
ScsiPortWritePortBufferUshort();
ScsiPortWritePortUchar();
ScsiPortWritePortUlong();
ScsiPortWritePortUshort();
ScsiPortWriteRegisterBufferUchar();
ScsiPortWriteRegisterBufferUlong();
ScsiPortWriteRegisterBufferUshort();
ScsiPortWriteRegisterUchar();
ScsiPortWriteRegisterUlong();
ScsiPortWriteRegisterUshort();
SpAdapterCleanup();
SpAdapterConfiguredForSenseDataEvents();
SpAddLogicalUnitToBin();
SpAdjustDisabledBit();
SpAllocateAdapterResources();
SpAllocateAddressMapping();
SpAllocateBypassSrbData();
SpAllocateContiguousChunk();
SpAllocateDriverExtension();
SpAllocateDriverExtension$fin$0();
SpAllocateDriverExtension$fin$1();
SpAllocateErrorLogEntry();
SpAllocateIrpEx();
SpAllocateMdlEx();
SpAllocatePoolEx();
SpAllocateSrbData();
SpAllocateSrbDataBackend();
SpAllocateSrbExtension();
SpBuildAdapterDescriptor();
SpBuildAdapterDeviceMap();
SpBuildConfiguration();
SpBuildDeviceDescriptor();
SpBuildDeviceIdDescriptor();
SpBuildDeviceMapEntry();
SpBuildLogicalUnitDeviceMapEntry();
SpBuildResourceList();
SpCallHwFindAdapter();
SpCallHwInitialize();
SpCheckSpecialDeviceFlags();
SpCheckSpecialDeviceFlags$fin$0();
SpCheckSpecialDeviceFlags$fin$1();
SpCheckSpecialDeviceFlags$fin$2();
SpClaimLogicalUnit();
SpCloneAndSwapLogicalUnit();
SpCompleteEnumRequest();
SpCompleteRequest();
SpCompletionDpcProcessWmi();
SpConfigurationCallout();
SpCountLogicalUnits();
SpCreateAdapter();
SpCreateInitiatorLU();
SpCreateLogicalUnit();
SpCreateNumericKey();
SpCreateScsiDirectory();
SpDecrementActiveRequestCount();
SpDelayedWmiRegistrationControl();
SpDeleteAdapterDeviceMap();
SpDeleteDeviceMapEntry();
SpDeleteLogicalUnit();
SpDeleteLogicalUnitDeviceMapEntry();
SpDestroyAdapter();
SpDeviceStoppedCompletion();
SpDoVerifierInit();
SpEnableDisableAdapter();
SpEnableDisableCompletionRoutine();
SpEnableDisableLogicalUnit();
SpEnableInterruptSynchronized();
SpEnsureAllRequestsAreComplete();
SpEnumerateAdapterAsynchronous();
SpEnumerationWorker();
SpExtractDeviceRelations();
SpFindAddressTranslation();
SpFindInitData();
SpFindSafeLogicalUnit();
SpFireSenseDataEvent();
SpFlushAllRequests();
SpFlushLogicalUnitRequests();
SpFlushReleaseQueue();
SpFreeBypassSrbData();
SpFreeCommonBufferVrfy();
SpFreeMappedAddress();
SpFreeSrbData();
SpFreeSrbDataBackend();
SpGetBusData();
SpGetCommonBuffer();
SpGetCommonBufferVrfy();
SpGetDeviceIdentifiers();
SpGetInaccessiblePage();
SpGetInquiryData();
SpGetInterruptState();
SpGetPassThroughSrbFlags();
SpGetPdo();
SpGetPdoInterfaceType();
SpGetRegistryValue();
SpGetSlotNumber();
SpGetSlotNumber$fin$0();
SpGetSupportedAdapterControlFunctions();
SpHandleIoctlScsiGetDumpPointers();
SpHandleIoctlScsiPassThrough();
SpHandleIoctlScsiRescanBus();
SpHandleIoctlStorageBreakReservation();
SpHandleIoctlStorageQueryProperty();
SpHandleIoctlStorageResetBus();
SpHandleTraceNotifyType();
SpHwAdapterControlVrfy();
SpHwDmaStartedVrfy();
SpHwFindAdapterVrfy();
SpHwInitializeVrfy();
SpHwInterruptVrfy();
SpHwRequestInterruptVrfy();
SpHwResetBusVrfy();
SpHwStartIoVrfy();
SpHwTimerRequestVrfy();
SpInitAdapterWmiRegInfo();
SpInitDeviceMap();
SpInitializeAdapterExtension();
SpInitializeConfiguration();
SpInitializeGuidInterfaceMapping();
SpInitializePerformanceParams();
SpInitializePowerParams();
SpInitializeRequestSenseParams();
SpInitializeSrbDataLookasideList();
SpInitializeSrbDataLookasideList$fin$0();
SpInquireLogicalUnit();
SpInsertSrbExtension();
SpIsAdapterControlTypeSupported();
SpIsInitiatorLU();
SpIsPdoClaimed();
SpLockUnlockQueue();
SpLockUnlockQueue$fin$0();
SpLogAllocationFailureFn();
SpMapLockedPagesWithReservedMapping();
SpMiniPortTimerDpc();
SpMultiStringToStringArray();
SpOpenDeviceKey();
SpPagingPathNotificationCompletion();
SpParseDevice();
SpPdoHandleIoctlScsiGetAddress();
SpPdoHandleIoctlScsiPassthrough();
SpPdoHandleIoctlScsiPassthroughDirect();
SpPdoHandleIoctlStorageBreakReservation();
SpPdoHandleIoctlStorageQueryProperty();
SpPowerAdapterForTargetCompletion();
SpPreallocateAddressMapping();
SpPrepareLogicalUnitForReuse();
SpPrepareSenseBufferForUse();
SpPrepareSrbExtensionForUse();
SpProcessAdapterDeviceState();
SpProcessAdapterSystemState();
SpProcessAdapterSystemState$fin$0();
SpProcessCompletedRequest();
SpProcessSpecialControllerFlags();
SpProcessSpecialControllerList();
SpPurgeFreeMappedAddressList();
SpPurgeTarget();
SpQueryCapabilities();
SpQueryDeviceRelationsCompletion();
SpQueryDeviceText();
SpQueryPnpInterfaceFlags();
SpReadNumericInstanceValue();
SpReadNumericInstanceValue$fin$0();
SpReadNumericValue();
SpReapChildren();
SpReceiveScatterGather();
SpReinitializeAdapter();
SpReinitializeAdapterSynchronized();
SpReleaseAdapterResources();
SpReleaseMappedAddresses();
SpReleaseRemoveLock();
SpRemapBlock();
SpRemapCommonBufferForMiniport();
SpRemoveAdapterSynchronized();
SpRemoveLogicalUnit();
SpRemoveLogicalUnitFromBin();
SpRemoveLogicalUnitFromBinSynchronized();
SpReportNewAdapter();
SpRequestAdapterPowerCompletion();
SpRequestValidAdapterPowerStateSynchronous();
SpRequestValidAdapterPowerStateSynchronous$fin$0();
SpRequestValidPowerState();
SpRerouteLegacyRequest();
SpResetBusSynchronized();
SpScanAdapter();
SpScanTarget();
SpSendIrpSynchronous();
SpSendMiniPortIoctl();
SpSendPassThrough();
SpSendRequestSenseIrp();
SpSendReset();
SpSendReset$fin$0();
SpSendResetCompletion();
SpSendSrbSynchronous();
SpSetAdapterPower();
SpSetLowerPowerCompletion();
SpSetTargetDesiredPowerCompletion();
SpSetTargetDeviceState();
SpSetTargetDeviceStateForSystemStateCompletion();
SpSetTargetDeviceStateLockedCompletion();
SpSetTargetDeviceStateUnlockedCompletion();
SpSetTargetSystemState();
SpSetTargetSystemStateLockedCompletion();
SpSetTargetSystemStateUnlockedCompletion();
SpSetVerificationMarks();
SpShutdownAdapter();
SpShutdownAdapterSynchronized();
SpSignalCompletion();
SpSignalEnumerationCompletion();
SpSignalPowerCompletion();
SpStartIoSynchronized();
SpStartLockRequest();
SpStartLowerDevice();
SpSynchronizeExecution();
SpTerminateAdapter();
SpTerminateAdapterSynchronized();
SpTimeoutSynchronized();
SpTransferBlockedRequestsToAdapter();
SpVerifierInitialization();
SpWaitForRemoveLock();
SpWmiDestroySpRegInfo();
SpWmiHandleOnMiniPortBehalf();
SpWmiInitializeFreeRequestList();
SpWmiInitializeSpRegInfo();
SpWmiIrpNormalRequest();
SpWmiIrpRegisterRequest();
SpWmiPassToMiniPort();
SpWmiPassToMiniPort$fin$0();
SpWmiPopFreeRequestItem();
SpWmiPushFreeRequestItem();
SpWmiRemoveFreeMiniPortRequestItems();
SpWriteNumericInstanceValue();
SpWriteNumericInstanceValue$fin$0();
UpdateQueuePointers();
WPP_SF_();
WPP_SF_D();
WPP_SF_DD();
WPP_SF_DDD();
WPP_SF_DDDDDDDDDDDD();
WPP_SF_DDL();
WPP_SF_DDd();
WPP_SF_Dq();
WPP_SF_Dqq();
WPP_SF_L();
WPP_SF_LZ();
WPP_SF_Ld();
WPP_SF_Lq();
WPP_SF_S();
WPP_SF_Z();
WPP_SF_ZL();
WPP_SF_Zd();
WPP_SF_cc();
WPP_SF_d();
WPP_SF_dDD();
WPP_SF_dL();
WPP_SF_dd();
WPP_SF_ddD();
WPP_SF_ddd();
WPP_SF_dddL();
WPP_SF_ddddd();
WPP_SF_dddq();
WPP_SF_dddqddq();
WPP_SF_ddq();
WPP_SF_dq();
WPP_SF_h();
WPP_SF_i();
WPP_SF_iD();
WPP_SF_q();
WPP_SF_qDD();
WPP_SF_qDDdd();
WPP_SF_qDd();
WPP_SF_qL();
WPP_SF_qLq();
WPP_SF_qaZ();
WPP_SF_qd();
WPP_SF_qddd();
WPP_SF_qdddD();
WPP_SF_qddddd();
WPP_SF_qq();
WPP_SF_qqD();
WPP_SF_qqDd();
WPP_SF_qqL();
WPP_SF_qqd();
WPP_SF_qqdL();
WPP_SF_qqdddD();
WPP_SF_qqq();
WPP_SF_qqsd();
WPP_SF_qs();
WPP_SF_qsq();
WPP_SF_qssq();
WPP_SF_sL();
WPP_SF_sd();
WPP_SF_sddd();
WPP_SF_sq();
WPP_SF_sqq();
WPP_SF_sssssss();
WppClassicProviderCallback();
WppGuidToStr();
WppIntToHex();
WppLoadTracingSupport();
WppTraceCallback();
_C_specific_handler();
_GSHandlerCheck();
_GSHandlerCheckCommon();
_GSHandlerCheck_SEH();
_report_gsfailure();
_report_rangecheckfailure();
_security_check_cookie();
_security_init_cookie();
guard_check_icall_nop();
guard_dispatch_icall_nop();
memcmp();
memcpy();
memmove();
memset();
wcsnicmp();
