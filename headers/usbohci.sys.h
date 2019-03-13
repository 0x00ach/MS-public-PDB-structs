struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct _ACCESS_STATE;
struct _ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _CM_RESOURCE_LIST;
struct _COMPRESSED_DATA_INFO;
struct _CONTEXT;
struct _CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG;
struct _DEVICE_CAPABILITIES;
struct _DEVICE_DATA;
struct _DEVICE_OBJECT;
struct _DEVICE_OBJECT_POWER_EXTENSION;
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
struct _ENDPOINT_DATA;
struct _ENDPOINT_PARAMETERS;
struct _ENDPOINT_REQUIREMENTS;
struct _EPROCESS;
struct _ERESOURCE;
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
struct _HCCA_BLOCK;
struct _HCD_ENDPOINT_DESCRIPTOR;
struct _HCD_TD_LIST;
struct _HCD_TRANSFER_DESCRIPTOR;
struct _HC_GENERAL_TD_CONTROL;
struct _HC_ISOCHRONOUS_TD_CONTROL;
struct _HC_OPERATIONAL_REGISTER;
struct _HC_RESOURCES;
struct _HC_STATIC_ED_DATA;
struct _HW_ENDPOINT_DESCRIPTOR;
struct _HW_TRANSFER_DESCRIPTOR;
struct _INITIAL_PRIVILEGE_SET;
struct _INTERFACE;
struct _IO_COMPLETION_CONTEXT;
struct _IO_DRIVER_CREATE_CONTEXT;
struct _IO_RESOURCE_DESCRIPTOR;
struct _IO_RESOURCE_LIST;
struct _IO_RESOURCE_REQUIREMENTS_LIST;
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
struct _KPCR;
struct _KPRCB;
struct _KSPIN_LOCK_QUEUE;
struct _KTHREAD;
struct _KTSS64;
struct _LIST_ENTRY;
struct _LOOKASIDE_LIST_EX;
struct _LUID;
struct _LUID_AND_ATTRIBUTES;
struct _M128A;
struct _MAILSLOT_CREATE_PARAMETERS;
struct _MDL;
struct _MINIPORT_HC_CAPABILITIES;
struct _MINIPORT_ISO_PACKET;
struct _MINIPORT_ISO_TRANSFER;
struct _MP_HW_LIST_ENTRY;
struct _MP_HW_PHYSICAL_ADDRESS;
struct _MP_HW_POINTER;
struct _MP_PACKET_PARAMETERS;
struct _NAMED_PIPE_CREATE_PARAMETERS;
struct _NPAGED_LOOKASIDE_LIST;
struct _NT_TIB;
struct _OSVERSIONINFOW;
struct _OWNER_ENTRY;
struct _PAGED_LOOKASIDE_LIST;
struct _POWER_SEQUENCE;
struct _PRIVILEGE_SET;
struct _RH_HUB_STATUS;
struct _RH_PORT_STATUS;
struct _ROOTHUB_DATA;
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
struct _SECTION_OBJECT_POINTERS;
struct _SECURITY_QUALITY_OF_SERVICE;
struct _SECURITY_SUBJECT_CONTEXT;
struct _SINGLE_LIST_ENTRY;
struct _SLIST_ENTRY;
struct _STRING;
struct _SYSTEM_POWER_STATE_CONTEXT;
struct _TRANSFER_CONTEXT;
struct _TRANSFER_PARAMETERS;
struct _TRANSFER_SG_ENTRY;
struct _TRANSFER_SG_LIST;
struct _TXN_PARAMETER_BLOCK;
struct _UNICODE_STRING;
struct _USBPORT_REGISTRATION_PACKET;
struct _USB_DEFAULT_PIPE_SETUP_PACKET;
struct _VPB;
struct _WAIT_CONTEXT_BLOCK;
struct _WHEA_ERROR_PACKET_V2;
struct _WHEA_ERROR_RECORD;
struct _WHEA_ERROR_RECORD_HEADER;
struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR;
struct _WHEA_EVENT_LOG_ENTRY;
struct _WHEA_EVENT_LOG_ENTRY_HEADER;
struct _WORK_QUEUE_ITEM;
struct _XSAVE_FORMAT;

union _BM_REQUEST_TYPE;
union _HC_COMMAND_STATUS;
union _HC_CONTROL;
union _HC_FM_INTERVAL;
union _HC_FM_REMAINING;
union _HC_OFFSET_PSW;
union _HC_REVISION;
union _HC_RH_DESCRIPTOR_A;
union _HC_RH_DESCRIPTOR_B;
union _KGDTENTRY64;
union _KIDTENTRY64;
union _LARGE_INTEGER;
union _POWER_STATE;
union _RH_HUB_CHARATERISTICS;
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
union _wIndex;
union _wValue;

enum BUS_QUERY_ID_TYPE;
enum DEVICE_TEXT_TYPE;
enum DMA_COMPLETION_STATUS;
enum POWER_ACTION;
enum _DEVICE_POWER_STATE;
enum _DEVICE_RELATION_TYPE;
enum _DEVICE_SPEED;
enum _DEVICE_USAGE_NOTIFICATION_TYPE;
enum _DEVICE_WAKE_DEPTH;
enum _DIRECTORY_NOTIFY_INFORMATION_CLASS;
enum _DRIVER_RUNTIME_INIT_FLAGS;
enum _ENDPOINT_TRANSFER_DIRECTION;
enum _ENDPOINT_TRANSFER_TYPE;
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
enum _MP_ENDPOINT_STATE;
enum _MP_ENDPOINT_STATUS;
enum _POOL_TYPE;
enum _POWER_STATE_TYPE;
enum _REG_NOTIFY_CLASS;
enum _SECURITY_IMPERSONATION_LEVEL;
enum _SS_PACKET_DATA_TOGGLE;
enum _SS_PACKET_SPEED;
enum _SS_PACKET_TYPE;
enum _SYSTEM_POWER_STATE;
enum _USB_CONTROLLER_FLAVOR;
enum _USB_CONTROLLER_STATE;
enum _USB_HCI_TYPE;
enum _USB_MINIPORT_STATUS;
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

typedef struct _ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER {
    ULONG Signature;
    USHORT Size;
    UCHAR Revision;
    UCHAR Reserved0;
    USHORT VendorIdStringOffset;
    USHORT VendorStringLength;
    USHORT DeviceIdStringOffset;
    USHORT SubSystemIdStringOffset;
    USHORT SubSystemStringLength;
    USHORT SubDeviceIdStringOffset;
    USHORT InstanceIdLength;
    USHORT InstanceIdOffset;
    USHORT BaseClassCode;
    USHORT HardwareRevision;
    UCHAR ProgrammingInterface;
    UCHAR Reserved1;
    USHORT SubClassCode;
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

typedef struct _DEVICE_DATA {
    ULONG Sig;
    ULONG Flags;
    struct _HC_OPERATIONAL_REGISTER *HC;
    union _HC_FM_INTERVAL BIOS_Interval;
    ULONG SofModifyValue;
    ULONG FrameHighPart;
    ULONG NumberOfPorts;
    struct _HCCA_BLOCK *HcHCCA;
    ULONG HcHCCAPhys;
    PUCHAR StaticEDs;
    ULONG StaticEDsPhys;
    enum _USB_CONTROLLER_FLAVOR ControllerFlavor;
    ULONG LastDeadmanFrame;
    ULONG ControllerRemoved;
    ULONG LastFrameNumberReturned;
    struct _HCD_ENDPOINT_DESCRIPTOR *HydraLsHsHackEd;
    struct _HC_STATIC_ED_DATA StaticEDList[65];
    ULONG SuspendPortStatus[15];
    ULONG ResumePortStatus[15];
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

typedef struct _ENDPOINT_DATA {
    ULONG Sig;
    struct _ENDPOINT_PARAMETERS Parameters;
    ULONG Flags;
    USHORT PendingTransfers;
    struct _HC_STATIC_ED_DATA *StaticEd;
    struct _HCD_TD_LIST *TdList;
    struct _HCD_ENDPOINT_DESCRIPTOR *HcdEd;
    ULONG TdCount;
    ULONG FreeTdCount;
    struct _LIST_ENTRY FreeTdList;
    struct _HCD_TRANSFER_DESCRIPTOR *HcdTailP;
    struct _HCD_TRANSFER_DESCRIPTOR *HcdHeadP;
    struct _HCD_TRANSFER_DESCRIPTOR *IsoLookAheadTd;
    struct _LIST_ENTRY DoneTdList;
};

typedef struct _ENDPOINT_PARAMETERS {
    USHORT DeviceAddress;
    USHORT EndpointAddress;
    USHORT MaxPacketSize;
    UCHAR Period;
    UCHAR MaxPeriod;
    enum _DEVICE_SPEED DeviceSpeed;
    ULONG Bandwidth;
    ULONG ScheduleOffset;
    enum _ENDPOINT_TRANSFER_TYPE TransferType;
    enum _ENDPOINT_TRANSFER_DIRECTION TransferDirection;
    PUCHAR CommonBufferVa;
    ULONG CommonBufferPhys;
    ULONG CommonBufferBytes;
    ULONG EndpointFlags;
    ULONG MaxTransferSize;
    USHORT TtDeviceAddress;
    USHORT TtPortNumber;
    UCHAR InterruptScheduleMask;
    UCHAR SplitCompletionMask;
    UCHAR TransactionsPerMicroframe;
    UCHAR Pad;
    USHORT MuxPacketSize;
    ULONG Ordinal;
};

typedef struct _ENDPOINT_REQUIREMENTS {
    ULONG MinCommonBufferBytes;
    ULONG MaximumTransferSize;
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

typedef struct _HCCA_BLOCK {
    ULONG HccaInterruptTable[32];
    USHORT HccaFrameNumber;
    USHORT HccaPad1;
    ULONG HccaDoneHead;
    ULONG Reserved[30];
};

typedef struct _HCD_ENDPOINT_DESCRIPTOR {
    struct _HW_ENDPOINT_DESCRIPTOR HwED;
    ULONG Pad4[4];
    ULONG PhysicalAddress;
    ULONG Sig;
    ULONG EdFlags;
    ULONG Win64Pad;
    struct _MP_HW_POINTER EndpointData;
    struct _MP_HW_LIST_ENTRY SwLink;
    ULONG FrameNumberOkToRemove;
    UCHAR HwSyncPending;
    UCHAR PadToULONG[2];
    ULONG PadTo128[12];
};

typedef struct _HCD_TD_LIST {
    struct _HCD_TRANSFER_DESCRIPTOR Td[1];
};

typedef struct _HCD_TRANSFER_DESCRIPTOR {
    struct _HW_TRANSFER_DESCRIPTOR HwTD;
    ULONG PhysicalAddress;
    ULONG Sig;
    ULONG Flags;
    ULONG TransferCount;
    struct _MP_HW_POINTER EndpointData;
    struct _MP_HW_POINTER TransferContext;
    struct _MP_HW_POINTER NextHcdTD;
    ULONG FrameIndex;
    struct _LIST_ENTRY ListEntry;
    ULONG PadTo128[8];
};

typedef struct _HC_GENERAL_TD_CONTROL {
    ULONG Isochronous : 1;
    ULONG ShortXferOk : 1;
    ULONG Direction : 2;
    ULONG IntDelay : 3;
    ULONG Toggle : 2;
    ULONG ErrorCount : 2;
    ULONG ConditionCode : 4;
};

typedef struct _HC_ISOCHRONOUS_TD_CONTROL {
    ULONG StartingFrame : 16;
    ULONG Isochronous : 1;
    ULONG IntDelay : 3;
    ULONG FrameCount : 3;
};

typedef struct _HC_OPERATIONAL_REGISTER {
    union _HC_REVISION HcRevision;
    union _HC_CONTROL HcControl;
    union _HC_COMMAND_STATUS HcCommandStatus;
    ULONG HcInterruptStatus;
    ULONG HcInterruptEnable;
    ULONG HcInterruptDisable;
    ULONG HcHCCA;
    ULONG HcPeriodCurrentED;
    ULONG HcControlHeadED;
    ULONG HcControlCurrentED;
    ULONG HcBulkHeadED;
    ULONG HcBulkCurrentED;
    ULONG HcDoneHead;
    union _HC_FM_INTERVAL HcFmInterval;
    union _HC_FM_REMAINING HcFmRemaining;
    ULONG HcFmNumber;
    ULONG HcPeriodicStart;
    ULONG HcLSThreshold;
    union _HC_RH_DESCRIPTOR_A HcRhDescriptorA;
    union _HC_RH_DESCRIPTOR_B HcRhDescriptorB;
    ULONG HcRhStatus;
    ULONG HcRhPortStatus[15];
};

typedef struct _HC_RESOURCES {
    ULONG Flags;
    enum _USB_CONTROLLER_FLAVOR ControllerFlavor;
    ULONG InterruptVector;
    UCHAR InterruptLevel;
    ULONG64 Affinity;
    UCHAR ShareIRQ;
    enum _KINTERRUPT_MODE InterruptMode;
    struct _KINTERRUPT *InterruptObject;
    PVOID DeviceRegisters;
    ULONG DeviceRegistersLength;
    PUCHAR CommonBufferVa;
    ULONG CommonBufferPhys;
    UCHAR DetectedLegacyBIOS;
    UCHAR Restart;
    ULONG ControllerSegmentRegister;
    ULONG CommonBufferBlockCount;
    PVOID CommonBufferBlocksVa[8];
    ULONG CommonBufferBlocksPhys[8];
    PVOID HostControllerFdo;
    PVOID HostControllerPdo;
    PVOID TargetDeviceObject;
    UCHAR DisablePciConfigSpace;
    struct _ACPI_DEVICE_INFORMATION_OUTPUT_BUFFER *AcpiDeviceInformation;
    ULONG AcpiDeviceInformationSize;
};

typedef struct _HC_STATIC_ED_DATA {
    struct _HW_ENDPOINT_DESCRIPTOR *HwED;
    ULONG HwEDPhys;
    CHAR NextIdx;
    struct _LIST_ENTRY TransferEdList;
    ULONG EdFlags;
    PULONG PhysicalHead;
    ULONG AllocatedBandwidth;
    ULONG HccaOffset;
};

typedef struct _HW_ENDPOINT_DESCRIPTOR {
    ULONG Control;
    ULONG FunctionAddress : 7;
    ULONG EndpointNumber : 4;
    ULONG Direction : 2;
    ULONG LowSpeed : 1;
    ULONG sKip : 1;
    ULONG Isochronous : 1;
    ULONG MaxPacket : 11;
    ULONG Unused : 5;
    ULONG TailP;
    ULONG HeadP;
    ULONG NextED;
};

typedef struct _HW_TRANSFER_DESCRIPTOR {
    ULONG Control;
    struct _HC_GENERAL_TD_CONTROL Asy;
    struct _HC_ISOCHRONOUS_TD_CONTROL Iso;
    ULONG CBP;
    ULONG NextTD;
    ULONG BE;
    union _HC_OFFSET_PSW Packet[8];
};

typedef struct _INITIAL_PRIVILEGE_SET {
    ULONG PrivilegeCount;
    ULONG Control;
    struct _LUID_AND_ATTRIBUTES Privilege[3];
};

typedef struct _INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PVOID InterfaceReference;
    PVOID InterfaceDereference;
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

typedef struct _KTSS64 {
};

typedef struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
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

typedef struct _MINIPORT_HC_CAPABILITIES {
    USHORT Size;
    USHORT Version;
};

typedef struct _MINIPORT_ISO_PACKET {
    ULONG Length;
    ULONG LengthTransferred;
    ULONG FrameNumber;
    ULONG MicroFrameNumber;
    LONG UsbdStatus;
    ULONG BufferPointerCount;
    ULONG BufferPointer0Length;
    struct _MP_HW_PHYSICAL_ADDRESS BufferPointer0;
    ULONG BufferPointer1Length;
    struct _MP_HW_PHYSICAL_ADDRESS BufferPointer1;
};

typedef struct _MINIPORT_ISO_TRANSFER {
    ULONG Sig;
    ULONG PacketCount;
    PUCHAR SystemAddress;
    struct _MINIPORT_ISO_PACKET Packets[1];
};

typedef struct _MP_HW_LIST_ENTRY {
    struct _LIST_ENTRY List;
};

typedef struct _MP_HW_PHYSICAL_ADDRESS {
    ULONG Hw32;
    union _LARGE_INTEGER Hw64;
};

typedef struct _MP_HW_POINTER {
    PVOID Pointer;
};

typedef struct _MP_PACKET_PARAMETERS {
    UCHAR DeviceAddress;
    UCHAR EndpointAddress;
    USHORT MaximumPacketSize;
    USHORT ErrorCount;
    USHORT Pad;
    enum _SS_PACKET_TYPE Type;
    enum _SS_PACKET_SPEED Speed;
    enum _SS_PACKET_DATA_TOGGLE Toggle;
    USHORT HubDeviceAddress;
    USHORT PortTTNumber;
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

typedef struct _OSVERSIONINFOW {
    ULONG dwOSVersionInfoSize;
    ULONG dwMajorVersion;
    ULONG dwMinorVersion;
    ULONG dwBuildNumber;
    ULONG dwPlatformId;
    WCHAR szCSDVersion[128];
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

typedef struct _RH_HUB_STATUS {
    ULONG LocalPowerLost : 1;
    ULONG OverCurrent : 1;
    ULONG Reserved : 14;
    ULONG LocalPowerChange : 1;
    ULONG OverCurrentChange : 1;
    ULONG Reserved2 : 14;
    ULONG ul;
};

typedef struct _RH_PORT_STATUS {
    ULONG Connected : 1;
    ULONG Enabled : 1;
    ULONG Suspended : 1;
    ULONG OverCurrent : 1;
    ULONG Reset : 1;
    ULONG Reserved0 : 3;
    ULONG PowerOn : 1;
    ULONG LowSpeed : 1;
    ULONG HighSpeed : 1;
    ULONG Reserved1 : 4;
    ULONG OwnedByCC : 1;
    ULONG ConnectChange : 1;
    ULONG EnableChange : 1;
    ULONG SuspendChange : 1;
    ULONG OverCurrentChange : 1;
    ULONG ResetChange : 1;
    ULONG Reserved2 : 11;
    ULONG ul;
};

typedef struct _ROOTHUB_DATA {
    ULONG NumberOfPorts;
    union _RH_HUB_CHARATERISTICS HubCharacteristics;
    USHORT pad;
    ULONG PowerOnToPowerGood;
    ULONG HubControlCurrent;
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

typedef struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
};

typedef struct _SLIST_ENTRY {
    struct _SLIST_ENTRY *Next;
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

typedef struct _TRANSFER_CONTEXT {
    ULONG Sig;
    ULONG BytesTransferred;
    struct _TRANSFER_PARAMETERS *TransferParameters;
    ULONG PendingTds;
    ULONG TcFlags;
    LONG UsbdStatus;
    struct _HCD_TRANSFER_DESCRIPTOR *NextXferTd;
    struct _HCD_TRANSFER_DESCRIPTOR *StatusTd;
    struct _ENDPOINT_DATA *EndpointData;
    struct _MINIPORT_ISO_TRANSFER *IsoTransfer;
};

typedef struct _TRANSFER_PARAMETERS {
    ULONG TransferFlags;
    ULONG TransferBufferLength;
    ULONG SequenceNumber;
    ULONG MiniportFlags;
    ULONG FrameCompleted;
    UCHAR SetupPacket[8];
};

typedef struct _TRANSFER_SG_ENTRY {
    struct _MP_HW_PHYSICAL_ADDRESS LogicalAddress;
    PUCHAR SystemAddress;
    ULONG Length;
    ULONG StartOffset;
};

typedef struct _TRANSFER_SG_LIST {
    ULONG SgFlags;
    PUCHAR MdlVirtualAddress;
    PUCHAR MdlSystemAddress;
    ULONG SgCount;
    struct _TRANSFER_SG_ENTRY SgEntry[1];
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

typedef struct _USBPORT_REGISTRATION_PACKET {
    enum _USB_HCI_TYPE HciType;
    ULONG OptionFlags;
    ULONG BusBandwidth;
    LONG Reserved;
    ULONG DeviceDataSize;
    ULONG EndpointDataSize;
    ULONG TransferContextSize;
    UCHAR Name[8];
    ULONG CommonBufferBytes;
    enum _USB_MINIPORT_STATUS *MINIPORT_OpenEndpoint;
    enum _USB_MINIPORT_STATUS *MINIPORT_PokeEndpoint;
    PVOID MINIPORT_QueryEndpointRequirements;
    PVOID MINIPORT_CloseEndpoint;
    enum _USB_MINIPORT_STATUS *MINIPORT_StartController;
    PVOID MINIPORT_StopController;
    PVOID MINIPORT_SuspendController;
    enum _USB_MINIPORT_STATUS *MINIPORT_ResumeController;
    PUCHAR MINIPORT_InterruptService;
    PVOID MINIPORT_InterruptDpc;
    enum _USB_MINIPORT_STATUS *MINIPORT_SubmitTransfer;
    enum _USB_MINIPORT_STATUS *MINIPORT_SubmitIsoTransfer;
    PVOID MINIPORT_AbortTransfer;
    enum _MP_ENDPOINT_STATE *MINIPORT_GetEndpointState;
    PVOID MINIPORT_SetEndpointState;
    PVOID MINIPORT_PollEndpoint;
    PVOID MINIPORT_CheckController;
    PULONG MINIPORT_Get32BitFrameNumber;
    PVOID MINIPORT_InterruptNextSOF;
    PVOID MINIPORT_EnableInterrupts;
    PVOID MINIPORT_DisableInterrupts;
    PVOID MINIPORT_PollController;
    PVOID MINIPORT_SetEndpointDataToggle;
    enum _MP_ENDPOINT_STATUS *MINIPORT_GetEndpointStatus;
    PVOID MINIPORT_SetEndpointStatus;
    PVOID MINIPORT_ResetController;
    PVOID MINIPORT_RH_GetRootHubData;
    enum _USB_MINIPORT_STATUS *MINIPORT_RH_GetStatus;
    enum _USB_MINIPORT_STATUS *MINIPORT_RH_GetPortStatus;
    enum _USB_MINIPORT_STATUS *MINIPORT_RH_GetHubStatus;
    enum _USB_MINIPORT_STATUS *MINIPORT_RH_SetFeaturePortReset;
    enum _USB_MINIPORT_STATUS *MINIPORT_RH_SetFeaturePortPower;
    enum _USB_MINIPORT_STATUS *MINIPORT_RH_SetFeaturePortEnable;
    enum _USB_MINIPORT_STATUS *MINIPORT_RH_SetFeaturePortSuspend;
    enum _USB_MINIPORT_STATUS *MINIPORT_RH_ClearFeaturePortEnable;
    enum _USB_MINIPORT_STATUS *MINIPORT_RH_ClearFeaturePortPower;
    enum _USB_MINIPORT_STATUS *MINIPORT_RH_ClearFeaturePortSuspend;
    enum _USB_MINIPORT_STATUS *MINIPORT_RH_ClearFeaturePortEnableChange;
    enum _USB_MINIPORT_STATUS *MINIPORT_RH_ClearFeaturePortConnectChange;
    enum _USB_MINIPORT_STATUS *MINIPORT_RH_ClearFeaturePortResetChange;
    enum _USB_MINIPORT_STATUS *MINIPORT_RH_ClearFeaturePortSuspendChange;
    enum _USB_MINIPORT_STATUS *MINIPORT_RH_ClearFeaturePortOvercurrentChange;
    PVOID MINIPORT_RH_DisableIrq;
    PVOID MINIPORT_RH_EnableIrq;
    enum _USB_MINIPORT_STATUS *MINIPORT_StartSendOnePacket;
    enum _USB_MINIPORT_STATUS *MINIPORT_EndSendOnePacket;
    enum _USB_MINIPORT_STATUS *MINIPORT_PassThru;
    PVOID USBPORTSVC_DbgPrint;
    PVOID USBPORTSVC_TestDebugBreak;
    PVOID USBPORTSVC_AssertFailure;
    enum _USB_MINIPORT_STATUS *USBPORTSVC_GetMiniportRegistryKeyValue;
    PVOID USBPORTSVC_InvalidateRootHub;
    PVOID USBPORTSVC_InvalidateEndpoint;
    PVOID USBPORTSVC_CompleteTransfer;
    PVOID USBPORTSVC_CompleteIsoTransfer;
    PVOID USBPORTSVC_LogEntry;
    PUCHAR *USBPORTSVC_MapHwPhysicalToVirtual;
    PVOID USBPORTSVC_RequestAsyncCallback;
    enum _USB_MINIPORT_STATUS *USBPORTSVC_ReadWriteConfigSpace;
    PVOID USBPORTSVC_Wait;
    PVOID USBPORTSVC_InvalidateController;
    PVOID USBPORTSVC_BugCheck;
    PVOID USBPORTSVC_NotifyDoubleBuffer;
    PVOID MINIPORT_RebalanceEndpoint;
    PVOID MINIPORT_FlushInterrupts;
    enum _USB_MINIPORT_STATUS *MINIPORT_Chirp_RH_Port;
    PVOID MINIPORT_TakePortControl;
    PVOID RegistryPath;
    PVOID pad3;
    ULONG CommonBufferBlockCount;
    ULONG CommonBufferBlockBytes[8];
    ULONG HsbContextSize;
    ULONG HsbTtContextSize;
    ULONG HsbEpContextSize;
    PVOID MINIPORT_ReleasePortControl;
    PULONG MINIPORT_ReadCfgFlag;
    enum _USB_MINIPORT_STATUS *MINIPORT_SetWakeOnConnect;
    PULONG MINIPORT_InterruptDpcEx;
    PVOID MINIPORT_NotifyTransferQueueState;
    PULONG MINIPORT_PollHwSync;
    enum _USB_MINIPORT_STATUS *MINIPORT_UsbxInitHsbTransactionTranslator;
    enum _USB_MINIPORT_STATUS *MINIPORT_UsbxInitHsbController;
    enum _USB_MINIPORT_STATUS *MINIPORT_UsbxInitHsbEndpoint;
    enum _USB_MINIPORT_STATUS *MINIPORT_UsbxAllocateBandwidth;
    PVOID MINIPORT_UsbxFreeBandwidth;
    enum _USB_MINIPORT_STATUS *MINIPORT_UsbxQueryEndpointRequirements;
    enum _USB_MINIPORT_STATUS *MINIPORT_UsbxPokeEndpoint;
    enum _USB_MINIPORT_STATUS *MINIPORT_UsbxOpenEndpoint;
    PULONG MINIPORT_UsbxQueryBandwidthData;
    PULONG MINIPORT_UsbxQueryTtBandwidthData;
    PULONG MINIPORT_UsbxQueryEpBandwidthData;
    PLONG USBPORTSVC_RequestAsyncCallbackEx;
    PUCHAR USBPORTSVC_CancelAsyncCallback;
    ULONG DevHContextSize;
    PVOID MINIPORT_OpenDevHandle;
    PVOID MINIPORT_CloseDevHandle;
    PVOID MINIPORT_CreateDeviceData;
    PVOID MINIPORT_DeleteDeviceData;
    PVOID MINIPORT_DbgFreeEndpoint;
    PVOID MINIPORT_DgbFreeDeviceData;
    PVOID MINIPORT_DgbFreeDevHandle;
    PVOID MINIPORT_HaltController;
    PULONG MINIPORT_Get32BitMicroFrameNumber;
    PVOID MINIPORT_RH_AsyncCommand;
    PVOID USBPORTSVC_Rh_Complete;
    PVOID MINIPORT_StopControllerWithInterrupts;
    PLONG USBPORTSVC_EtwWrite;
    enum _USB_MINIPORT_STATUS *MINIPORT_RH_GetContainerIdForPort;
    PVOID MINIPORT_RH_SetContainerIdForPort;
    enum _USB_MINIPORT_STATUS *MINIPORT_GetHcCapabilities;
    PLONG MINIPORT_InitializeDumpInterface;
    PLONG MINIPORT_CleanupDumpInterface;
    PUSHORT MINIPORT_GetDebugPortNumber;
    PUCHAR USBPORTSVC_IsInterruptPerTdEnabled;
    PUCHAR USBPORTSVC_IgnoreResumeSignaling;
    PVOID MINIPORT_ResetControllerDontReinit;
    PVOID MINIPORT_PostResetController;
    PVOID MINIPORT_ReinitController;
    PUCHAR MINIPORT_CheckInvalidateRootHub;
    PVOID MINIPORT_SetPortResumeTime;
    enum _USB_MINIPORT_STATUS *MINIPORT_PreStartController;
};

typedef struct _USB_DEFAULT_PIPE_SETUP_PACKET {
    union _BM_REQUEST_TYPE bmRequestType;
    UCHAR bRequest;
    union _wValue wValue;
    union _wIndex wIndex;
    USHORT wLength;
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

typedef union _BM_REQUEST_TYPE {
    UCHAR Recipient : 2;
    UCHAR Reserved : 3;
    UCHAR Type : 2;
    UCHAR Dir : 1;
    UCHAR B;
};

typedef union _HC_COMMAND_STATUS {
    ULONG ul;
    ULONG HostControllerReset : 1;
    ULONG ControlListFilled : 1;
    ULONG BulkListFilled : 1;
    ULONG OwnershipChangeRequest : 1;
    ULONG SchedulingOverrunCount : 2;
};

typedef union _HC_CONTROL {
    ULONG ul;
    ULONG ControlBulkServiceRatio : 2;
    ULONG PeriodicListEnable : 1;
    ULONG IsochronousEnable : 1;
    ULONG ControlListEnable : 1;
    ULONG BulkListEnable : 1;
    ULONG HostControllerFunctionalState : 2;
    ULONG InterruptRouting : 1;
    ULONG RemoteWakeupConnected : 1;
    ULONG RemoteWakeupEnable : 1;
};

typedef union _HC_FM_INTERVAL {
    ULONG ul;
    ULONG FrameInterval : 14;
    ULONG FSLargestDataPacket : 15;
    ULONG FrameIntervalToggle : 1;
};

typedef union _HC_FM_REMAINING {
    ULONG ul;
    ULONG FrameRemaining : 14;
    ULONG FrameRemainingToggle : 1;
};

typedef union _HC_OFFSET_PSW {
    USHORT Offset : 13;
    USHORT Ones : 3;
    USHORT Size : 11;
    USHORT ConditionCode : 4;
    USHORT PSW;
};

typedef union _HC_REVISION {
    ULONG ul;
    ULONG Rev : 8;
};

typedef union _HC_RH_DESCRIPTOR_A {
    ULONG ul;
    struct {
        ULONG NumberDownstreamPorts : 8;
        ULONG HubChars : 16;
        ULONG PowerOnToPowerGoodTime : 8;
    } s;
};

typedef union _HC_RH_DESCRIPTOR_B {
    ULONG ul;
    USHORT DeviceRemovableMask;
    USHORT PortPowerControlMask;
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

typedef union _RH_HUB_CHARATERISTICS {
    USHORT us;
    USHORT PowerSwitchType : 2;
    USHORT CompoundDevice : 1;
    USHORT OverCurrentProtection : 2;
    USHORT Reserved : 11;
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

typedef union _wIndex {
    UCHAR LowByte;
    UCHAR HiByte;
    USHORT W;
};

typedef union _wValue {
    UCHAR LowByte;
    UCHAR HiByte;
    USHORT W;
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

typedef enum _DEVICE_SPEED {
    LowSpeed = 0,
    FullSpeed = 1,
    HighSpeed = 2
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

typedef enum _DRIVER_RUNTIME_INIT_FLAGS {
    DrvRtPoolNxOptIn = 1,
    LastDrvRtFlag = 2
};

typedef enum _ENDPOINT_TRANSFER_DIRECTION {
    In = 0,
    Out = 1
};

typedef enum _ENDPOINT_TRANSFER_TYPE {
    Isochronous = 0,
    Control = 1,
    Bulk = 2,
    Interrupt = 3
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

typedef enum _MP_ENDPOINT_STATE {
    ENDPOINT_TRANSITION = 0,
    ENDPOINT_IDLE = 1,
    ENDPOINT_PAUSE = 2,
    ENDPOINT_ACTIVE = 3,
    ENDPOINT_REMOVE = 4,
    ENDPOINT_CLOSED = 5,
    ENDPOINT_ERROR = 100
};

typedef enum _MP_ENDPOINT_STATUS {
    ENDPOINT_STATUS_RUN = 0,
    ENDPOINT_STATUS_HALT = 1,
    ENDPOINT_STATUS_ERROR = 100,
    ENDPOINT_STATUS_ERROR_HC_HALTED = 101
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

typedef enum _SECURITY_IMPERSONATION_LEVEL {
    SecurityAnonymous = 0,
    SecurityIdentification = 1,
    SecurityImpersonation = 2,
    SecurityDelegation = 3
};

typedef enum _SS_PACKET_DATA_TOGGLE {
    ss_Toggle0 = 0,
    ss_Toggle1 = 1
};

typedef enum _SS_PACKET_SPEED {
    ss_Low = 0,
    ss_Full = 1,
    ss_High = 2
};

typedef enum _SS_PACKET_TYPE {
    ss_Setup = 0,
    ss_In = 1,
    ss_Out = 2,
    ss_Iso_In = 3,
    ss_Iso_Out = 4
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

typedef enum _USB_CONTROLLER_FLAVOR {
    USB_HcGeneric = 0,
    OHCI_Generic = 100,
    OHCI_Hydra = 101,
    OHCI_NEC = 102,
    UHCI_Generic = 200,
    UHCI_Piix4 = 201,
    UHCI_Piix3 = 202,
    UHCI_Ich2 = 203,
    UHCI_Reserved204 = 204,
    UHCI_Ich1 = 205,
    UHCI_Ich3m = 206,
    UHCI_Ich4 = 207,
    UHCI_Ich5 = 208,
    UHCI_Ich6 = 209,
    UHCI_Intel = 249,
    UHCI_VIA = 250,
    UHCI_VIA_x01 = 251,
    UHCI_VIA_x02 = 252,
    UHCI_VIA_x03 = 253,
    UHCI_VIA_x04 = 254,
    UHCI_VIA_x0E_FIFO = 264,
    EHCI_Generic = 1000,
    EHCI_NEC = 2000,
    EHCI_Lucent = 3000,
    EHCI_NVIDIA_Tegra2 = 4000,
    EHCI_NVIDIA_Tegra3 = 4001,
    EHCI_Intel_Medfield = 5001
};

typedef enum _USB_CONTROLLER_STATE {
    UsbMpControllerPowerFault = 0,
    UsbMpControllerNeedsHwReset = 1,
    UsbMpControllerRemoved = 2,
    UsbMpSimulateInterrupt = 3,
    UsbMpSignalInterrupt = 4,
    UsbMpControllerNeedsHwResetOnPassive = 5
};

typedef enum _USB_HCI_TYPE {
    USB_UNKNOWN_HCI = 0,
    USB_OHCI = 1,
    USB_UHCI = 2,
    USB_EHCI = 3
};

typedef enum _USB_MINIPORT_STATUS {
    USBMP_STATUS_SUCCESS = 0,
    USBMP_STATUS_BUSY = 1,
    USBMP_STATUS_NO_RESOURCES = 2,
    USBMP_STATUS_NO_BANDWIDTH = 3,
    USBMP_STATUS_INIT_FAILURE = 4,
    USBMP_STATUS_FAILURE = 5,
    USBMP_STATUS_NOT_SUPPORTED = 6,
    USBMP_STATUS_HARDWARE_FAILURE = 7,
    USBMP_STATUS_NTERRCODE_NOT_MAPPFED = 8,
    USBMP_STATUS_FORCE_RESET = 9
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

ExDefaultNonPagedPoolType;
GUID_IDLE_STATUS;
RegistrationPacket;
USBPORT_ETW_EVENT_HC_OHCI_MINIPORT_RESUME_COMPLETE;
USBPORT_ETW_EVENT_HC_OHCI_MINIPORT_RESUME_COMPLETE_ERROR_1;
USBPORT_ETW_EVENT_HC_OHCI_MINIPORT_RESUME_COMPLETE_ERROR_2;
USBPORT_ETW_EVENT_HC_OHCI_MINIPORT_RESUME_COMPLETE_ERROR_3;
USBPORT_ETW_EVENT_HC_OHCI_MINIPORT_RESUME_COMPLETE_ERROR_4;
USBPORT_ETW_EVENT_HC_OHCI_MINIPORT_RESUME_COMPLETE_ERROR_5;
USBPORT_ETW_EVENT_HC_OHCI_MINIPORT_RESUME_DISPATCH;
USBPORT_ETW_EVENT_HC_OHCI_MINIPORT_START_COMPLETE;
USBPORT_ETW_EVENT_HC_OHCI_MINIPORT_START_COMPLETE_ERROR_1;
USBPORT_ETW_EVENT_HC_OHCI_MINIPORT_START_COMPLETE_ERROR_2;
USBPORT_ETW_EVENT_HC_OHCI_MINIPORT_START_COMPLETE_ERROR_3;
USBPORT_ETW_EVENT_HC_OHCI_MINIPORT_START_COMPLETE_ERROR_4;
USBPORT_ETW_EVENT_HC_OHCI_MINIPORT_START_COMPLETE_ERROR_5;
USBPORT_ETW_EVENT_HC_OHCI_MINIPORT_START_DISPATCH;
USBPORT_ETW_EVENT_HC_OHCI_MINIPORT_STOP_COMPLETE;
USBPORT_ETW_EVENT_HC_OHCI_MINIPORT_STOP_DISPATCH;
USBPORT_ETW_EVENT_HC_OHCI_MINIPORT_SUSPEND_COMPLETE;
USBPORT_ETW_EVENT_HC_OHCI_MINIPORT_SUSPEND_DISPATCH;
_IMPORT_DESCRIPTOR_HAL;
_IMPORT_DESCRIPTOR_USBPORT;
_IMPORT_DESCRIPTOR_ntoskrnl;
_NULL_IMPORT_DESCRIPTOR;
_guard_check_icall_fptr;
_guard_dispatch_icall_fptr;
_guard_fids_table;
_imp_ExAllocatePoolWithTag;
_imp_ExFreePoolWithTag;
_imp_KeStallExecutionProcessor;
_imp_RtlGetVersion;
_imp_USBPORT_RegisterUSBPortDriver;
_security_cookie;
_security_cookie_complement;
_xmm;
load_config_used;
HAL_NULL_THUNK_DATA;
USBPORT_NULL_THUNK_DATA;
ntoskrnl_NULL_THUNK_DATA;

DriverEntry();
GsDriverEntry();
InitializeHydraHsLsFix();
OHCI_AbortTransfer();
OHCI_AllocTd();
OHCI_BulkOrInterruptTransfer();
OHCI_CheckController();
OHCI_CheckHwSync();
OHCI_CloseEndpoint();
OHCI_ControlTransfer();
OHCI_DisableInterrupts();
OHCI_EnableInterrupts();
OHCI_EnableList();
OHCI_EndSendOnePacket();
OHCI_FlushInterrupts();
OHCI_Get32BitFrameNumber();
OHCI_GetEndpointState();
OHCI_GetEndpointStatus();
OHCI_HardwarePresent();
OHCI_InitializeED();
OHCI_InitializeSchedule();
OHCI_InitializeTD();
OHCI_InsertEndpointInSchedule();
OHCI_InterruptDpc();
OHCI_InterruptDpcEx();
OHCI_InterruptNextSOF();
OHCI_InterruptService();
OHCI_IsoTransfer();
OHCI_MapAsyncTransferToTd();
OHCI_MapIsoTransferToTd();
OHCI_OpenBulkEndpoint();
OHCI_OpenControlEndpoint();
OHCI_OpenEndpoint();
OHCI_OpenInterruptEndpoint();
OHCI_OpenIsoEndpoint();
OHCI_PassThru();
OHCI_PokeEndpoint();
OHCI_PollAsyncEndpoint();
OHCI_PollAsyncEndpointHcRemoved();
OHCI_PollController();
OHCI_PollEndpoint();
OHCI_PollIsoEndpoint();
OHCI_PollIsoEndpointHcRemoved();
OHCI_PreStartController();
OHCI_ProcessDoneAsyncTd();
OHCI_ProcessDoneIsoTd();
OHCI_QueryEndpointRequirements();
OHCI_RH_ClearFeaturePortConnectChange();
OHCI_RH_ClearFeaturePortEnable();
OHCI_RH_ClearFeaturePortEnableChange();
OHCI_RH_ClearFeaturePortOvercurrentChange();
OHCI_RH_ClearFeaturePortPower();
OHCI_RH_ClearFeaturePortResetChange();
OHCI_RH_ClearFeaturePortSuspend();
OHCI_RH_ClearFeaturePortSuspendChange();
OHCI_RH_DisableIrq();
OHCI_RH_EnableIrq();
OHCI_RH_GetHubStatus();
OHCI_RH_GetPortStatus();
OHCI_RH_GetRootHubData();
OHCI_RH_GetStatus();
OHCI_RH_SetFeaturePortEnable();
OHCI_RH_SetFeaturePortPower();
OHCI_RH_SetFeaturePortReset();
OHCI_RH_SetFeaturePortSuspend();
OHCI_RH_SetWakeConnect();
OHCI_ReadRhDescriptorA();
OHCI_RemoveEndpointFromSchedule();
OHCI_ResetController();
OHCI_ResumeController();
OHCI_SetEndpointDataToggle();
OHCI_SetEndpointState();
OHCI_SetEndpointStatus();
OHCI_StartController();
OHCI_StartSendOnePacket();
OHCI_StopController();
OHCI_SubmitIsoTransfer();
OHCI_SubmitTransfer();
OHCI_SuspendController();
OHCI_Unload();
_GSHandlerCheck();
_GSHandlerCheckCommon();
_report_gsfailure();
_security_check_cookie();
_security_init_cookie();
guard_check_icall_nop();
guard_dispatch_icall_nop();
memcpy();
memmove();
memset();
