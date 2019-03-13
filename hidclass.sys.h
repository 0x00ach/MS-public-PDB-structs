struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct POHANDLE__;
struct RECORDER_LOG__;
struct SS_COMPONENT__;
struct _ACCESS_REASONS;
struct _ACCESS_STATE;
struct _AUX_ACCESS_DATA;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _CM_RESOURCE_LIST;
struct _COMPRESSED_DATA_INFO;
struct _CONTEXT;
struct _CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG;
struct _DEVICE_CAPABILITIES;
struct _DEVICE_OBJECT;
struct _DEVICE_OBJECT_POWER_EXTENSION;
struct _DEVICE_RELATIONS;
struct _DEVOBJ_EXTENSION;
struct _DEVPROPKEY;
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
struct _EVENT_DATA_DESCRIPTOR;
struct _EVENT_DESCRIPTOR;
struct _EVENT_FILTER_DESCRIPTOR;
struct _EVENT_QUEUE;
struct _EXCEPTION_RECORD;
struct _EXCEPTION_REGISTRATION_RECORD;
struct _EXT_DELETE_PARAMETERS;
struct _EXT_SET_PARAMETERS_V0;
struct _EX_WNF_SUBSCRIPTION;
struct _FAST_IO_DISPATCH;
struct _FAST_MUTEX;
struct _FDO_EXTENSION;
struct _FILE_BASIC_INFORMATION;
struct _FILE_GET_QUOTA_INFORMATION;
struct _FILE_NETWORK_OPEN_INFORMATION;
struct _FILE_OBJECT;
struct _FILE_STANDARD_INFORMATION;
struct _FSRTL_ADVANCED_FCB_HEADER;
struct _GENERAL_LOOKASIDE;
struct _GENERAL_LOOKASIDE_POOL;
struct _GENERIC_MAPPING;
struct _GUID;
struct _HIDCLASS_COLLECTION;
struct _HIDCLASS_DEVICE_EXTENSION;
struct _HIDCLASS_DRIVER_EXTENSION;
struct _HIDCLASS_PINGPONG;
struct _HIDP_COLLECTION_DESC;
struct _HIDP_DEVICE_DESC;
struct _HIDP_GETCOLDESC_DBG;
struct _HIDP_PREPARSED_DATA;
struct _HIDP_REPORT_IDS;
struct _HID_COLLECTION_INFORMATION;
struct _HID_DESCRIPTOR;
struct _HID_DESCRIPTOR_DESC_LIST;
struct _HID_DEVICEPRESENCE;
struct _HID_DEVICERESET;
struct _HID_DEVICE_ATTRIBUTES;
struct _HID_DEVICE_EXTENSION;
struct _HID_POFX_REF_TRACKER;
struct _HID_RT_POWER_DATA;
struct _HID_RT_POWER_ENGINE;
struct _HID_RT_POWER_STATE;
struct _HID_SUBMIT_IDLE_NOTIFICATION_CALLBACK_INFO;
struct _INITIAL_PRIVILEGE_SET;
struct _INTERFACE;
struct _IO_COMPLETION_CONTEXT;
struct _IO_DRIVER_CREATE_CONTEXT;
struct _IO_PRIORITY_INFO;
struct _IO_REMOVE_LOCK;
struct _IO_REMOVE_LOCK_COMMON_BLOCK;
struct _IO_RESOURCE_DESCRIPTOR;
struct _IO_RESOURCE_LIST;
struct _IO_RESOURCE_REQUIREMENTS_LIST;
struct _IO_SECURITY_CONTEXT;
struct _IO_STACK_LOCATION;
struct _IO_STATUS_BLOCK;
struct _IO_TIMER;
struct _IO_WORKITEM;
struct _IRP;
struct _KAPC;
struct _KDEVICE_QUEUE;
struct _KDEVICE_QUEUE_ENTRY;
struct _KDPC;
struct _KEVENT;
struct _KFLOATING_SAVE;
struct _KPCR;
struct _KPRCB;
struct _KPROCESS;
struct _KSPIN_LOCK_QUEUE;
struct _KTHREAD;
struct _KTIMER;
struct _KTSS64;
struct _LIST_ENTRY;
struct _LOOKASIDE_LIST_EX;
struct _LUID;
struct _LUID_AND_ATTRIBUTES;
struct _M128A;
struct _MAILSLOT_CREATE_PARAMETERS;
struct _MCGEN_TRACE_CONTEXT;
struct _MDL;
struct _NAMED_PIPE_CREATE_PARAMETERS;
struct _NPAGED_LOOKASIDE_LIST;
struct _NT_TIB;
struct _OWNER_ENTRY;
struct _PAGED_LOOKASIDE_LIST;
struct _PDO_EXTENSION;
struct _POWER_SEQUENCE;
struct _PRIVILEGE_SET;
struct _RECORDER_CONFIGURE_PARAMS;
struct _RECORDER_LOG_CREATE_PARAMS;
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
struct _SID;
struct _SID_IDENTIFIER_AUTHORITY;
struct _SINGLE_LIST_ENTRY;
struct _SLIST_ENTRY;
struct _SM_CONTEXT;
struct _STATE_ENTRY;
struct _STATE_LOG;
struct _STATE_TRANSITION;
struct _STRING;
struct _SUBSM_ENTRY;
struct _SYSTEM_POWER_STATE_CONTEXT;
struct _TXN_PARAMETER_BLOCK;
struct _TlgProviderMetadata_t;
struct _TlgProvider_t;
struct _TraceLoggingMetadata_t;
struct _UNICODE_STRING;
struct _VPB;
struct _WAIT_CONTEXT_BLOCK;
struct _WHEA_ERROR_PACKET_V2;
struct _WHEA_ERROR_RECORD;
struct _WHEA_ERROR_RECORD_HEADER;
struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR;
struct _WHEA_EVENT_LOG_ENTRY;
struct _WHEA_EVENT_LOG_ENTRY_HEADER;
struct _WMIGUIDREGINFO;
struct _WMILIB_CONTEXT;
struct _WNF_STATE_NAME;
struct _WORK_QUEUE_ITEM;
struct _WPP_TRACE_CONTROL_BLOCK;
struct _XSAVE_FORMAT;

union _EVENT;
union _KGDTENTRY64;
union _KIDTENTRY64;
union _LARGE_INTEGER;
union _POWER_STATE;
union _SLIST_HEADER;
union _STATE;
union _SUBSM_FLAGS;
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
enum DeviceObjectState;
enum HandleTrackingTypes;
enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS;
enum PDCCLIENTID;
enum PDC_ACTIVITY_TYPE;
enum POWER_ACTION;
enum POWER_POLICY_DEVICE_TYPE;
enum ReplacesCorHdrNumericDefines;
enum SLEEPSTUDY_SPM_SCENARIO_CS_EXIT;
enum TlgIn_t;
enum TlgOut_t;
enum WAKESTATE;
enum _ConnectionResourceConsumerDesc;
enum _DEVICE_POWER_STATE;
enum _DEVICE_RELATION_TYPE;
enum _DEVICE_USAGE_NOTIFICATION_TYPE;
enum _DEVICE_WAKE_DEPTH;
enum _DIRECTORY_NOTIFY_INFORMATION_CLASS;
enum _EVENT_INFO_CLASS;
enum _EVENT_PRIORITY;
enum _EVENT_TYPE;
enum _EXCEPTION_DISPOSITION;
enum _FILE_INFORMATION_CLASS;
enum _FSINFOCLASS;
enum _GENERIC_STATE;
enum _HIDSM_EVENT;
enum _HIDSM_STATE;
enum _HIDSM_SUBSM_FLAGS;
enum _HID_POWER_POLICY;
enum _INPUT_SUPPRESSION_SUPPORT;
enum _INTERFACE_TYPE;
enum _INTERLOCKED_RESULT;
enum _IO_ALLOCATION_ACTION;
enum _IO_GATE_STATE;
enum _IO_PRIORITY_HINT;
enum _IRQ_DEVICE_POLICY;
enum _IRQ_PRIORITY;
enum _KINTERRUPT_POLARITY;
enum _MEMORY_CACHING_TYPE;
enum _MEMORY_CACHING_TYPE_ORIG;
enum _MM_PAGE_PRIORITY;
enum _MODE;
enum _PING_PONG_STATE;
enum _POOL_TYPE;
enum _POWER_INFORMATION_LEVEL_INTERNAL;
enum _POWER_INFORMATION_LEVEL_INTERNAL_TTMTCAPI;
enum _POWER_REQUEST_TYPE;
enum _POWER_REQUEST_TYPE_INTERNAL;
enum _POWER_STATE_TYPE;
enum _PO_INPUT_SUPPRESSION_STATE;
enum _PO_MODERN_SLEEP_ACTION;
enum _REG_NOTIFY_CLASS;
enum _SECURITY_IMPERSONATION_LEVEL;
enum _STATE_FLAGS;
enum _SYSTEM_POWER_STATE;
enum _TlgBlob_t;
enum _USER_ACTIVITY_PRESENCE;
enum _WHEA_ERROR_PACKET_DATA_FORMAT;
enum _WHEA_ERROR_SEVERITY;
enum _WHEA_ERROR_SOURCE_TYPE;
enum _WHEA_ERROR_TYPE;
enum _WHEA_EVENT_LOG_ENTRY_ID;
enum _WHEA_EVENT_LOG_ENTRY_TYPE;
enum _WMIENABLEDISABLECONTROL;
enum collectionState;

typedef struct LIST_ENTRY32 {
    ULONG Flink;
    ULONG Blink;
};

typedef struct LIST_ENTRY64 {
    ULONG64 Flink;
    ULONG64 Blink;
};

typedef struct POHANDLE__ {
    LONG unused;
};

typedef struct RECORDER_LOG__ {
    LONG unused;
};

typedef struct SS_COMPONENT__ {
    LONG unused;
};

typedef struct _ACCESS_REASONS {
    ULONG Data[32];
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

typedef struct _AUX_ACCESS_DATA {
    struct _PRIVILEGE_SET *PrivilegesUsed;
    struct _GENERIC_MAPPING GenericMapping;
    ULONG AccessesToAudit;
    ULONG MaximumAuditMask;
    struct _GUID TransactionId;
    PVOID NewSecurityDescriptor;
    PVOID ExistingSecurityDescriptor;
    PVOID ParentSecurityDescriptor;
    PVOID DeRefSecurityDescriptor;
    PVOID SDLock;
    struct _ACCESS_REASONS AccessReasons;
    UCHAR GenerateStagingEvents;
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
    USHORT CompressionFormatAndEngine;
    UCHAR CompressionUnitShift;
    UCHAR ChunkShift;
    UCHAR ClusterShift;
    UCHAR Reserved;
    USHORT NumberOfChunks;
    ULONG CompressedChunkSizes[1];
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

typedef struct _DEVPROPKEY {
    struct _GUID fmtid;
    ULONG pid;
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
    ULONG Signature;
    ULONG Flags;
    struct _LIST_ENTRY EcpList;
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

typedef struct _EVENT_FILTER_DESCRIPTOR {
    ULONG64 Ptr;
    ULONG Size;
    ULONG Type;
};

typedef struct _EVENT_QUEUE {
    union _EVENT Events[16];
    UCHAR QueueHead;
    UCHAR QueueTail;
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

typedef struct _EX_WNF_SUBSCRIPTION {
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

typedef struct _FDO_EXTENSION {
    struct _DEVICE_OBJECT *fdo;
    struct _HIDCLASS_DRIVER_EXTENSION *driverExt;
    struct _HID_DESCRIPTOR hidDescriptor;
    struct _HID_DEVICE_ATTRIBUTES hidDeviceAttributes;
    PUCHAR rawReportDescription;
    ULONG rawReportDescriptionLength;
    struct _HIDCLASS_COLLECTION *classCollectionArray;
    struct _HIDP_DEVICE_DESC deviceDesc;
    UCHAR devDescInitialized;
    ULONG maxReportSize;
    ULONG numPingPongs;
    struct _HIDCLASS_PINGPONG *pingPongs;
    ULONG openCount;
    struct _UNICODE_STRING name;
    struct _DEVICE_RELATIONS *deviceRelations;
    enum _PING_PONG_STATE pingPongState;
    struct _HIDCLASS_DEVICE_EXTENSION **collectionPdoExtensions;
    struct _DEVICE_CAPABILITIES deviceCapabilities;
    enum _SYSTEM_POWER_STATE systemPowerState;
    enum _DEVICE_POWER_STATE devicePowerState;
    struct _IRP *waitWakeIrp;
    enum WAKESTATE WakeState;
    UCHAR systemWakeSource;
    ULONG64 collectionPowerDelayedIrpQueueSpinLock;
    struct _LIST_ENTRY collectionPowerDelayedIrpQueue;
    ULONG numPendingPowerDelayedIrps;
    UCHAR isOutputOnlyDevice;
    struct _HID_SUBMIT_IDLE_NOTIFICATION_CALLBACK_INFO idleCallbackInfo;
    struct _IRP *idleNotificationRequest;
    struct _KEVENT idleDoneEvent;
    LONG numIdlePdos;
    struct _LIST_ENTRY collectionWaitWakeIrpQueue;
    ULONG64 collectionWaitWakeIrpQueueSpinLock;
    struct _FDO_EXTENSION *nextFdoExt;
    struct _IRP *currentSystemStateIrp;
    ULONG BusNumber;
    struct _WMILIB_CONTEXT WmiLibInfo;
    ULONG isPresent;
    UCHAR presentReported;
    UCHAR retainWWIrpWhenDeviceAbsent;
    struct _KEVENT powerDownCompleteEvent;
    PVOID csHandle;
    ULONG csState;
    struct _EX_WNF_SUBSCRIPTION *wnfSubscriptionSuppressInput;
    struct _IO_REMOVE_LOCK hidFdoRemoveLock;
    struct RECORDER_LOG__ *recorderLog;
    struct RECORDER_LOG__ *recorderLogDeviceInfo;
    struct RECORDER_LOG__ *recorderLogIntReports;
    struct POHANDLE__ *poHandle;
    struct _SM_CONTEXT SmContext;
    enum _IO_GATE_STATE IoGateState;
    UCHAR SmWaitingForIoCompletion;
    struct _HID_RT_POWER_DATA rtPowerData;
    struct _HID_RT_POWER_STATE rtPowerState;
    struct _HID_RT_POWER_ENGINE rtPowerEngine;
    enum _HID_POWER_POLICY CurrentPowerPolicy;
    union _LARGE_INTEGER SuppressInputEntryTime;
    UCHAR PoScenarioInstanceId;
    struct _KEVENT pnpEvent;
    LONG pnpStatus;
    LONG InFlightIoCount;
    enum _DEVICE_POWER_STATE TargetDxState;
    struct _HID_POFX_REF_TRACKER PoFxRefTracker;
    struct _HID_DEVICERESET DeviceReset;
    struct _HID_DEVICEPRESENCE DevicePresence;
    UCHAR WriteReportExSupported;
    union _LARGE_INTEGER LastTraceLoggingTime;
    UCHAR IsOnUSB;
    union _LARGE_INTEGER LastIntReadCompletionTime;
    LONG LastIntReadCompletionStatus;
    union _LARGE_INTEGER LastStopIdleForIoTime;
    UCHAR DebugBreakOnIntReadCompletion;
    struct SS_COMPONENT__ *SleepstudyUnstablePdo;
    struct SS_COMPONENT__ *SleepstudyHardwareIo;
    struct SS_COMPONENT__ *SleepstudySoftwareIo;
    struct SS_COMPONENT__ *SleepstudyStateMachine;
    struct SS_COMPONENT__ *SleepstudyNoEpm;
    ULONG PendingPoFxPowerNotRequired;
};

typedef struct _FILE_BASIC_INFORMATION {
    union _LARGE_INTEGER CreationTime;
    union _LARGE_INTEGER LastAccessTime;
    union _LARGE_INTEGER LastWriteTime;
    union _LARGE_INTEGER ChangeTime;
    ULONG FileAttributes;
};

typedef struct _FILE_GET_QUOTA_INFORMATION {
    ULONG NextEntryOffset;
    ULONG SidLength;
    struct _SID Sid;
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

typedef struct _FSRTL_ADVANCED_FCB_HEADER {
    SHORT NodeTypeCode;
    SHORT NodeByteSize;
    UCHAR Flags;
    UCHAR IsFastIoPossible;
    UCHAR Flags2;
    UCHAR Reserved : 4;
    UCHAR Version : 4;
    struct _ERESOURCE *Resource;
    struct _ERESOURCE *PagingIoResource;
    union _LARGE_INTEGER AllocationSize;
    union _LARGE_INTEGER FileSize;
    union _LARGE_INTEGER ValidDataLength;
    struct _FAST_MUTEX *FastMutex;
    struct _LIST_ENTRY FilterContexts;
    ULONG64 PushLock;
    PVOID *FileContextSupportPointer;
    PVOID Oplock;
    PVOID ReservedForRemote;
    PVOID ReservedContext;
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

typedef struct _GENERIC_MAPPING {
    ULONG GenericRead;
    ULONG GenericWrite;
    ULONG GenericExecute;
    ULONG GenericAll;
};

typedef struct _GUID {
    ULONG Data1;
    USHORT Data2;
    USHORT Data3;
    UCHAR Data4[8];
};

typedef struct _HIDCLASS_COLLECTION {
    ULONG CollectionNumber;
    ULONG CollectionIndex;
    USHORT UsagePage;
    USHORT Usage;
    ULONG NumPendingReads;
    struct _LIST_ENTRY FileExtensionList;
    ULONG64 FileExtensionListSpinLock;
    struct _LIST_ENTRY UnreadReportList;
    ULONG CurrentUnreadReportListQueueSize;
    ULONG PollInterval_msec;
    struct _KTIMER polledDeviceTimer;
    struct _KDPC polledDeviceTimerDPC;
    struct _LIST_ENTRY polledDeviceReadQueue;
    ULONG64 polledDeviceReadQueueSpinLock;
    PUCHAR savedPolledReportBuf;
    ULONG savedPolledReportLen;
    UCHAR polledDataIsStale;
    struct _UNICODE_STRING SymbolicLinkName;
    struct _UNICODE_STRING SymbolicLinkName_SystemControl;
    struct _HID_COLLECTION_INFORMATION hidCollectionInfo;
    struct _HIDP_PREPARSED_DATA *phidDescriptor;
    PUCHAR cookedInterruptReportBuf;
    struct _IRP *powerEventIrp;
    ULONG64 powerEventSpinLock;
    ULONG secureReadMode;
    ULONG64 secureReadLock;
    union _LARGE_INTEGER LastIntReportTime;
    union _LARGE_INTEGER LastIntReportInfoTraceTime;
    ULONG64 AccumIntReports;
};

typedef struct _HIDCLASS_DEVICE_EXTENSION {
    struct _HID_DEVICE_EXTENSION hidExt;
    UCHAR isClientPdo;
    ULONG Signature;
    struct _FDO_EXTENSION fdoExt;
    struct _PDO_EXTENSION pdoExt;
};

typedef struct _HIDCLASS_DRIVER_EXTENSION {
    struct _DRIVER_OBJECT *MinidriverObject;
    struct _UNICODE_STRING RegistryPath;
    ULONG DeviceExtensionSize;
    PLONG MajorFunction[28];
    PLONG AddDevice;
    PVOID DriverUnload;
    LONG ReferenceCount;
    struct _LIST_ENTRY ListEntry;
    UCHAR DevicesArePolled;
    UCHAR FastResumeDisabled;
};

typedef struct _HIDCLASS_PINGPONG {
    ULONG sig;
    ULONG ReadInterlock;
    struct _IRP *irp;
    PUCHAR reportBuffer;
    LONG weAreCancelling;
    struct _KEVENT sentEvent;
    struct _KEVENT pumpDoneEvent;
    struct _FDO_EXTENSION *myFdoExt;
    struct _KTIMER backoffTimer;
    struct _KDPC backoffTimerDPC;
    union _LARGE_INTEGER backoffTimerPeriod;
};

typedef struct _HIDP_COLLECTION_DESC {
    USHORT UsagePage;
    USHORT Usage;
    UCHAR CollectionNumber;
    UCHAR Reserved[15];
    USHORT InputLength;
    USHORT OutputLength;
    USHORT FeatureLength;
    USHORT PreparsedDataLength;
    struct _HIDP_PREPARSED_DATA *PreparsedData;
};

typedef struct _HIDP_DEVICE_DESC {
    struct _HIDP_COLLECTION_DESC *CollectionDesc;
    ULONG CollectionDescLength;
    struct _HIDP_REPORT_IDS *ReportIDs;
    ULONG ReportIDsLength;
    struct _HIDP_GETCOLDESC_DBG Dbg;
};

typedef struct _HIDP_GETCOLDESC_DBG {
    ULONG BreakOffset;
    ULONG ErrorCode;
    ULONG Args[6];
};

typedef struct _HIDP_PREPARSED_DATA {
};

typedef struct _HIDP_REPORT_IDS {
    UCHAR ReportID;
    UCHAR CollectionNumber;
    USHORT InputLength;
    USHORT OutputLength;
    USHORT FeatureLength;
};

typedef struct _HID_COLLECTION_INFORMATION {
    ULONG DescriptorSize;
    UCHAR Polled;
    UCHAR Reserved1[1];
    USHORT VendorID;
    USHORT ProductID;
    USHORT VersionNumber;
};

typedef struct _HID_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    USHORT bcdHID;
    UCHAR bCountry;
    UCHAR bNumDescriptors;
    struct _HID_DESCRIPTOR_DESC_LIST DescriptorList[1];
};

typedef struct _HID_DESCRIPTOR_DESC_LIST {
    UCHAR bReportType;
    USHORT wReportLength;
};

typedef struct _HID_DEVICEPRESENCE {
    ULONG64 SpinLock;
    UCHAR Draining;
    struct _LIST_ENTRY PdoIrpPendingList;
};

typedef struct _HID_DEVICERESET {
    UCHAR Enabled;
    ULONG64 SpinLock;
    UCHAR Draining;
    struct _LIST_ENTRY PdoIrpPendingList;
    struct _IRP *FdoIrp;
};

typedef struct _HID_DEVICE_ATTRIBUTES {
    ULONG Size;
    USHORT VendorID;
    USHORT ProductID;
    USHORT VersionNumber;
    USHORT Reserved[11];
};

typedef struct _HID_DEVICE_EXTENSION {
    struct _DEVICE_OBJECT *PhysicalDeviceObject;
    struct _DEVICE_OBJECT *NextDeviceObject;
    PVOID MiniDeviceExtension;
};

typedef struct _HID_POFX_REF_TRACKER {
    union {
        LONG Aslong;
        LONG FdoStateMachine : 1;
        LONG PowerPolicyEngine : 1;
        LONG ResetIdleTimer : 1;
        LONG Io : 1;
        LONG ClientRequest : 1;
    } RefTagFlags;
    LONG ResetIdleTimerRefCount;
    LONG IoRefCount;
    LONG ClientRequestCount;
};

typedef struct _HID_RT_POWER_DATA {
    ULONG DefaultIdleTimeout;
    ULONG DefaultIdleTimeoutForConnectedStandby;
    ULONG DefaultIdleTimeoutForNoHandles;
    ULONG DefaultIdleTimeoutForNoHandlesInitial;
    ULONG DefaultIdleTimeoutForMonitorDim;
    ULONG PdoIdleTimeoutOverride;
    ULONG IdleBasedOnMonitorDim : 1;
    ULONG DisableIdleOnNoOpenHandles : 1;
    ULONG IdleEnabledInRegistry : 1;
    ULONG IdleEnabledInWmi : 1;
    ULONG EpmEnabledInRegistry : 2;
    ULONG EpmEnabledUseMonitor : 1;
    ULONG MonitorOff : 1;
    ULONG SystemInCS : 1;
    ULONG PdoInStableState : 1;
    ULONG MonitorDim : 1;
    ULONG IdleAttempted : 1;
    ULONG SuppressInputInCS : 1;
    enum _INPUT_SUPPRESSION_SUPPORT InputSuppressionSupport;
    enum _PO_INPUT_SUPPRESSION_STATE InputSuppressionState;
};

typedef struct _HID_RT_POWER_ENGINE {
    ULONG64 PolicyEngineLock;
    ULONG PolicyEngineRunning : 1;
    ULONG PolicyChangePending : 1;
};

typedef struct _HID_RT_POWER_STATE {
    ULONG PowerReferenceAcquired : 1;
    ULONG ArmForWake : 1;
    ULONG IdleTimeout;
};

typedef struct _HID_SUBMIT_IDLE_NOTIFICATION_CALLBACK_INFO {
    PVOID IdleCallback;
    PVOID IdleContext;
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

typedef struct _IO_PRIORITY_INFO {
    ULONG Size;
    ULONG ThreadPriority;
    ULONG PagePriority;
    enum _IO_PRIORITY_HINT IoPriority;
};

typedef struct _IO_REMOVE_LOCK {
    struct _IO_REMOVE_LOCK_COMMON_BLOCK Common;
};

typedef struct _IO_REMOVE_LOCK_COMMON_BLOCK {
    UCHAR Removed;
    UCHAR Reserved[3];
    LONG IoCount;
    struct _KEVENT RemoveEvent;
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

typedef struct _IO_WORKITEM {
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
            struct _KTHREAD *Thread;
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

typedef struct _KPROCESS {
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

typedef struct _MCGEN_TRACE_CONTEXT {
    ULONG64 RegistrationHandle;
    ULONG64 Logger;
    ULONG64 MatchAnyKeyword;
    ULONG64 MatchAllKeyword;
    ULONG Flags;
    ULONG IsEnabled;
    UCHAR Level;
    UCHAR Reserve;
    USHORT EnableBitsCount;
    PULONG EnableBitMask;
    PULONG64 EnableKeyWords;
    PUCHAR EnableLevel;
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

typedef struct _PDO_EXTENSION {
    enum collectionState prevState;
    enum collectionState state;
    ULONG collectionNum;
    ULONG collectionIndex;
    struct _IO_REMOVE_LOCK removeLock;
    struct _DEVICE_OBJECT *pdo;
    struct _UNICODE_STRING *name;
    struct _HIDCLASS_DEVICE_EXTENSION *deviceFdoExt;
    enum _SYSTEM_POWER_STATE systemPowerState;
    enum _DEVICE_POWER_STATE devicePowerState;
    UCHAR remoteWakeEnabled;
    ULONG64 remoteWakeSpinLock;
    struct _IRP *remoteWakeIrp;
    LONG remoteWakePending;
    struct _IRP *waitWakeIrp;
    PVOID StatusChangeFn;
    PVOID StatusChangeContext;
    LONG openCount;
    LONG opensForRead;
    LONG opensForWrite;
    LONG restrictionsForRead;
    LONG restrictionsForWrite;
    LONG restrictionsForAnyOpen;
    PVOID HandleTypeTracking[6][2];
    UCHAR MouseOrKeyboard;
    UCHAR SessionSecurityEnabled;
    UCHAR WakeOnSxEnabled;
    ULONG IdleTimeout;
    LONG S0IdleStopCount;
    struct _WMILIB_CONTEXT WmiLibInfo;
    union _LARGE_INTEGER LastStopIdleForIoTime;
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

typedef struct _RECORDER_CONFIGURE_PARAMS {
    ULONG Size;
    UCHAR CreateDefaultLog;
};

typedef struct _RECORDER_LOG_CREATE_PARAMS {
    ULONG Size;
    ULONG LogTag;
    ULONG TotalBufferSize;
    ULONG ErrorPartitionSize;
    ULONG64 LogIdentifierAppendValue;
    UCHAR LogIdentifierAppendValueSet;
    ULONG LogIdentifierSize;
    CHAR LogIdentifier[16];
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

typedef struct _SID {
    UCHAR Revision;
    UCHAR SubAuthorityCount;
    struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
    ULONG SubAuthority[1];
};

typedef struct _SID_IDENTIFIER_AUTHORITY {
    UCHAR Value[6];
};

typedef struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
};

typedef struct _SLIST_ENTRY {
    struct _SLIST_ENTRY *Next;
};

typedef struct _SM_CONTEXT {
    struct _STATE_LOG StateHistory[64];
    union _EVENT EventHistory[16];
    UCHAR StateHistoryIndex;
    UCHAR EventHistoryIndex;
    ULONG64 StateMachineLock;
    UCHAR StateMachineRunning;
    union _STATE CurrentState[7];
    ULONG CurrentStateDepth;
    struct _EVENT_QUEUE EventQueue;
    ULONG SubSmFlags;
    PVOID ParentContext;
    struct _STATE_ENTRY **StateTable;
    ULONG StartIndex;
    struct _IO_WORKITEM *WorkItem;
    struct _GUID CurrentActivityId;
    UCHAR DebugBreakOnStateTransition;
};

typedef struct _STATE_ENTRY {
    ULONG EtwName;
    PULONG EntryFunc;
    enum _STATE_FLAGS StateFlags;
    struct _SUBSM_ENTRY *SubSmEntries;
    struct _STATE_TRANSITION Transitions[0];
};

typedef struct _STATE_LOG {
    union _EVENT Event;
    union _STATE State;
    ULONG Depth;
};

typedef struct _STATE_TRANSITION {
    union _EVENT Event;
    union _STATE TargetState;
};

typedef struct _STRING {
    USHORT Length;
    USHORT MaximumLength;
    PCHAR Buffer;
};

typedef struct _SUBSM_ENTRY {
    union _SUBSM_FLAGS SubSmFlags;
    union _STATE SubSmStartState;
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

typedef struct _TlgProviderMetadata_t {
    UCHAR Type;
    struct _GUID ProviderId;
    USHORT RemainingSize;
};

typedef struct _TlgProvider_t {
    ULONG LevelPlus1;
    PUSHORT ProviderMetadataPtr;
    ULONG64 KeywordAny;
    ULONG64 KeywordAll;
    ULONG64 RegHandle;
    PVOID EnableCallback;
    PVOID CallbackContext;
};

typedef struct _TraceLoggingMetadata_t {
    ULONG Signature;
    USHORT Size;
    UCHAR Version;
    UCHAR Flags;
    ULONG64 Magic;
};

typedef struct _UNICODE_STRING {
    USHORT Length;
    USHORT MaximumLength;
    PWCHAR Buffer;
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

typedef struct _WMIGUIDREGINFO {
    struct _GUID *Guid;
    ULONG InstanceCount;
    ULONG Flags;
};

typedef struct _WMILIB_CONTEXT {
    ULONG GuidCount;
    struct _WMIGUIDREGINFO *GuidList;
    PLONG QueryWmiRegInfo;
    PLONG QueryWmiDataBlock;
    PLONG SetWmiDataBlock;
    PLONG SetWmiDataItem;
    PLONG ExecuteWmiMethod;
    PLONG WmiFunctionControl;
};

typedef struct _WNF_STATE_NAME {
    ULONG Data[2];
};

typedef struct _WORK_QUEUE_ITEM {
    struct _LIST_ENTRY List;
    PVOID WorkerRoutine;
    PVOID Parameter;
};

typedef struct _WPP_TRACE_CONTROL_BLOCK {
    PLONG Callback;
    struct _GUID *ControlGuid;
    struct _WPP_TRACE_CONTROL_BLOCK *Next;
    LONG64 Logger;
    struct _UNICODE_STRING *RegistryPath;
    UCHAR FlagsLen;
    UCHAR Level;
    USHORT Reserved;
    ULONG Flags[1];
    ULONG ReservedFlags;
    ULONG64 RegHandle;
    PVOID AutoLogContext;
    USHORT AutoLogVerboseEnabled;
    USHORT AutoLogAttachToMiniDump;
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

typedef union _EVENT {
    ULONG EventAsUlong;
    enum _HIDSM_EVENT HidsmEvent;
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

typedef union _STATE {
    ULONG StateAsUlong;
    enum _GENERIC_STATE GenericState;
    enum _HIDSM_STATE HidsmState;
};

typedef union _SUBSM_FLAGS {
    ULONG SubSmFlagsAsUlong;
    enum _HIDSM_SUBSM_FLAGS HidsmSubSmFlags;
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

typedef enum DeviceObjectState {
    DeviceObjectStarted = 0,
    DeviceObjectStopped = 1,
    DeviceObjectRemoved = 2
};

typedef enum HandleTrackingTypes {
    httOpen = 0,
    httOpenForRead = 1,
    httOpenForWrite = 2,
    httRestrictionForRead = 3,
    httRestrictionForWrite = 4,
    httRestrictionForAny = 5,
    httCount = 6
};

typedef enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS {
    JOB_OBJECT_IO_RATE_CONTROL_ENABLE = 1,
    JOB_OBJECT_IO_RATE_CONTROL_STANDALONE_VOLUME = 2,
    JOB_OBJECT_IO_RATE_CONTROL_FORCE_UNIT_ACCESS_ALL = 4,
    JOB_OBJECT_IO_RATE_CONTROL_FORCE_UNIT_ACCESS_ON_SOFT_CAP = 8,
    JOB_OBJECT_IO_RATE_CONTROL_VALID_FLAGS = 15
};

typedef enum PDCCLIENTID {
    PDC_INVALID_CLIENT = 0,
    PDC_PLM_CLIENT = 1,
    PDC_NQM_CLIENT = 2,
    PDC_WNS_CLIENT = 3,
    PDC_DAM_CLIENT = 4,
    PDC_WCM_CLIENT = 5,
    PDC_NCSI_CLIENT = 7,
    PDC_DHCP_CLIENT = 8,
    PDC_TCPIP_CLIENT = 9,
    PDC_WU_CLIENT = 11,
    PDC_GP_CLIENT = 12,
    PDC_NCA_CLIENT = 14,
    PDC_BI_CLIENT = 15,
    PDC_MSCHED_CLIENT = 16,
    PDC_SUSPENDRESUME_CLIENT = 17,
    PDC_INTERNAL_CLIENT = 18,
    PDC_ACTIVATION_TEST_CLIENT = 19,
    PDC_PLM_PHASE_TEST_CLIENT = 20,
    PDC_DAM_PHASE_TEST_CLIENT = 21,
    PDC_LOW_POWER_PHASE_TEST_CLIENT = 22,
    PDC_RESILIENCY_NOTIFICATION_PHASE_TEST_CLIENT = 23,
    PDC_NQM_RESILIENCY_TEST_CLIENT = 24,
    PDC_DAM_RESILIENCY_TEST_CLIENT = 25,
    PDC_DAM_KM_TEST_CLIENT = 26,
    PDC_DAM_UM_TEST_CLIENT = 27,
    PDC_SINGLETON_TEST_CLIENT = 28,
    PDC_NETWORK_SERVICE_TEST_CLIENT = 29,
    PDC_NETWORK_SERVICE2_TEST_CLIENT = 30,
    PDC_SYSTEM_SERVICE_TEST_CLIENT = 31,
    PDC_ACTIV_NOTIF_DAM_RESIL_TEST_CLIENT = 32,
    PDC_ACTIV_NOTIF_NET_RESIL_TEST_CLIENT = 33,
    PDC_SHELL_CLIENT = 34,
    PDC_MAINTENANCE_CLIENT = 35,
    PDC_SYNC_CLIENT = 36,
    PDC_IDM_CLIENT = 37,
    PDC_CORTANA_VOICE_ACTIVATION_CLIENT = 38,
    PDC_TETHERING_CLIENT = 39,
    PDC_AUDIO_CLIENT = 40,
    PDC_LOCK_SCREEN = 41,
    PDC_LREC_CLIENT = 42,
    PDC_WP_BW_CLIENT = 43,
    PDC_WP_MEDIA_STREAMING_CLIENT = 44,
    PDC_WP_MAPS_CLIENT = 46,
    PDC_WP_SYNC_CLIENT = 47,
    PDC_SETTING_SYNC_CLIENT = 48,
    PDC_WP_EDM_CLIENT = 49,
    PDC_WP_WALLET_CLIENT = 50,
    PDC_WP_LOCATION_CLIENT = 51,
    PDC_WP_CM_CLIENT = 53,
    PDC_WP_DCP_CLIENT = 54,
    PDC_WP_WIFIAUTO_CLIENT = 55,
    PDC_BITLOCKER_CLIENT = 56,
    PDC_MDM_CERTINSTALLER_CLIENT = 57,
    PDC_WP_IM_CLIENT = 58,
    PDC_WP_MMS_CLIENT = 59,
    PDC_DEVICEENROLLER_CLIENT = 60,
    PDC_WP_WIFI_SCANNING_CLIENT = 61,
    PDC_WP_OMADM_CLIENT = 62,
    PDC_WP_TELEMETRY_CHECK_CLIENT = 63,
    PDC_WP_DIS_CLIENT = 64,
    PDC_BITS_CLIENT = 65,
    PDC_WP_VOIP_EXECUTION_CLIENT = 66,
    PDC_WP_RESERVED_CLIENT3 = 67,
    PDC_SLEEP_STUDY_CLIENT = 68,
    PDC_WP_AUTOTIMEUPDATE_CLIENT = 69,
    PDC_HYPERV_CLIENT = 70,
    PDC_KM_SIGNAL_CLIENT = 71,
    PDC_UM_SIGNAL_CLIENT = 72,
    PDC_DEVICE_HEALTH_ATTESTATION_CLIENT = 73,
    PDC_XB_SYSTEM_CLIENT = 74,
    PDC_XB_HOST_CLIENT = 75,
    PDC_PRINT_JOB_MANAGER_CLIENT = 76,
    PDC_TELEMETRY_CLIENT = 77,
    PDC_ERROR_REPORTING_CLIENT = 78,
    PDC_XBOX_NTM = 79,
    PDC_CBE_CLIENT = 80,
    PDC_FIND_MY_PHONE_CLIENT = 81,
    PDC_COMMAND_CHANNEL_CLIENT = 82,
    PDC_PPM_PROFILES_CLIENT = 83,
    PDC_WIFI_CALLING_CLIENT = 84,
    PDC_WU_REBOOT_CLIENT = 85,
    PDC_SYSMAIN_CLIENT = 86,
    PDC_XBOX_UPDATE_CLIENT = 87,
    PDC_CHAT_SERVICE_CLIENT = 88,
    PDC_FIND_MY_DEVICE_CLIENT = 89,
    PDC_NOTIFICATION_FORWARDING_AND_ACTION_CLIENT = 90,
    PDC_INSTALL_AGENT_CLIENT = 91,
    PDC_XBOX_WAKE_ON_VOICE = 92,
    PDC_PLM_AUDIO_CLIENT = 93,
    PDC_WP_BCKAUDIO_CLIENT = 94,
    PDC_WAKE_ON_LAN_CLIENT = 95,
    PDC_WP_CLOUD_MESSAGING_CLIENT = 96,
    PDC_DATA_MIGRATION_MANAGER = 97,
    PDC_EVENT_SOUND_MANAGER_CLIENT = 98,
    PDC_WWAN_DORMANCY_HINT_CLIENT = 99,
    PDC_HAM_CLIENT = 100,
    PDC_FILESHARINGSERVER_CLIENT = 101,
    PDC_DIRECTED_DRIPS_TASK_CLIENT = 102,
    PDC_DIRECTED_DRIPS_LPE_CLIENT = 103,
    PDC_DIRECTED_DRIPS_PLM_CLIENT = 104,
    PDC_HTTPSDATASOURCE_CLIENT = 105,
    PDC_TERMINALSERVER_CONNECTION_CLIENT = 106,
    PDC_TERMINALSERVER_SESSION_CLIENT = 107,
    PDC_ANYNETWORK_RESILIENCY_CLIENT = 108,
    PDC_XBOX_NUI_CLIENT = 110,
    PDC_WIFI_CALLING_IMS_CLIENT = 111,
    PDC_NUMBER_OF_CLIENTS = 112
};

typedef enum PDC_ACTIVITY_TYPE {
    PdcNetwork = 0,
    PdcSystem = 1,
    PdcTimer = 2,
    PdcAllNetworks = 3,
    PdcAnyNetwork = 4,
    PdcInvalidActivity = 5,
    PdcMaxActivity = 5
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

typedef enum POWER_POLICY_DEVICE_TYPE {
    PolicyDeviceSystemButton = 0,
    PolicyDeviceThermalZone = 1,
    PolicyDeviceBattery = 2,
    PolicyDeviceMemory = 3,
    PolicyInitiatePowerActionAPI = 4,
    PolicySetPowerStateAPI = 5,
    PolicyImmediateDozeS4 = 6,
    PolicySystemIdle = 7,
    PolicyDeviceWakeAlarm = 8,
    PolicyDeviceFan = 9,
    PolicyCsBatterySaver = 10,
    PolicyImmediateDozeS4Predicted = 11,
    PolicyImmediateDozeS4PredictedNoWake = 12,
    PolicyImmediateDozeS4AdaptiveBudget = 13,
    PolicyImmediateDozeS4AdaptiveReserveNoWake = 14,
    PolicySystemInitiatedShutdown = 15,
    PolicyDeviceMax = 16
};

typedef enum ReplacesCorHdrNumericDefines {
    COMIMAGE_FLAGS_ILONLY = 1,
    COMIMAGE_FLAGS_32BITREQUIRED = 2,
    COMIMAGE_FLAGS_IL_LIBRARY = 4,
    COMIMAGE_FLAGS_STRONGNAMESIGNED = 8,
    COMIMAGE_FLAGS_NATIVE_ENTRYPOINT = 16,
    COMIMAGE_FLAGS_TRACKDEBUGDATA = 0x10000,
    COMIMAGE_FLAGS_32BITPREFERRED = 0x20000,
    COR_VERSION_MAJOR_V2 = 2,
    COR_VERSION_MAJOR = 2,
    COR_VERSION_MINOR = 5,
    COR_DELETED_NAME_LENGTH = 8,
    COR_VTABLEGAP_NAME_LENGTH = 8,
    NATIVE_TYPE_MAX_CB = 1,
    COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE = 255,
    IMAGE_COR_MIH_METHODRVA = 1,
    IMAGE_COR_MIH_EHRVA = 2,
    IMAGE_COR_MIH_BASICBLOCK = 8,
    COR_VTABLE_32BIT = 1,
    COR_VTABLE_64BIT = 2,
    COR_VTABLE_FROM_UNMANAGED = 4,
    COR_VTABLE_FROM_UNMANAGED_RETAIN_APPDOMAIN = 8,
    COR_VTABLE_CALL_MOST_DERIVED = 16,
    IMAGE_COR_EATJ_THUNK_SIZE = 32,
    MAX_CLASS_NAME = 1024,
    MAX_PACKAGE_NAME = 1024
};

typedef enum SLEEPSTUDY_SPM_SCENARIO_CS_EXIT {
    SpmScenarioStopReasonUnspecified = 16,
    SpmScenarioStopReasonCsExit = 17,
    SpmScenarioStopReasonMax = 18
};

typedef enum TlgIn_t {
    TlgInNULL = 0,
    TlgInUNICODESTRING = 1,
    TlgInANSISTRING = 2,
    TlgInINT8 = 3,
    TlgInUINT8 = 4,
    TlgInINT16 = 5,
    TlgInUINT16 = 6,
    TlgInINT32 = 7,
    TlgInUINT32 = 8,
    TlgInINT64 = 9,
    TlgInUINT64 = 10,
    TlgInFLOAT = 11,
    TlgInDOUBLE = 12,
    TlgInBOOL32 = 13,
    TlgInBINARY = 14,
    TlgInGUID = 15,
    _TlgInPOINTER_unsupported = 16,
    TlgInFILETIME = 17,
    TlgInSYSTEMTIME = 18,
    TlgInSID = 19,
    TlgInHEXINT32 = 20,
    TlgInHEXINT64 = 21,
    TlgInCOUNTEDSTRING = 22,
    TlgInCOUNTEDANSISTRING = 23,
    _TlgInSTRUCT = 24,
    TlgInCOUNTEDBINARY = 25,
    _TlgInMax = 26,
    TlgInINTPTR = 9,
    TlgInUINTPTR = 10,
    TlgInPOINTER = 21,
    _TlgInCcount = 32,
    TlgInVcount = 64,
    _TlgInChain = 128,
    _TlgInCustom = 96,
    _TlgInTypeMask = 31,
    _TlgInCountMask = 96,
    _TlgInFlagMask = 224
};

typedef enum TlgOut_t {
    TlgOutNULL = 0,
    TlgOutNOPRINT = 1,
    TlgOutSTRING = 2,
    TlgOutBOOLEAN = 3,
    TlgOutHEX = 4,
    TlgOutPID = 5,
    TlgOutTID = 6,
    TlgOutPORT = 7,
    TlgOutIPV4 = 8,
    TlgOutIPV6 = 9,
    TlgOutSOCKETADDRESS = 10,
    TlgOutXML = 11,
    TlgOutJSON = 12,
    TlgOutWIN32ERROR = 13,
    TlgOutNTSTATUS = 14,
    TlgOutHRESULT = 15,
    TlgOutFILETIME = 16,
    TlgOutSIGNED = 17,
    TlgOutUNSIGNED = 18,
    TlgOutUTF8 = 35,
    TlgOutPKCS7_WITH_TYPE_INFO = 36,
    TlgOutCODE_POINTER = 37,
    _TlgOutMax = 38,
    _TlgOutChain = 128,
    _TlgOutTypeMask = 127
};

typedef enum WAKESTATE {
    WAKESTATE_DISARMED = 1,
    WAKESTATE_WAITING = 2,
    WAKESTATE_WAITING_CANCELLED = 3,
    WAKESTATE_ARMED = 4,
    WAKESTATE_ARMING_CANCELLED = 5,
    WAKESTATE_COMPLETING = 7
};

typedef enum _ConnectionResourceConsumerDesc {
    ConnectionResourceConsumerDescIsUndefined = 0,
    ConnectionResourceConsumerDescIsDevice = 1,
    ConnectionResourceConsumerDescIsOpregion = 2,
    ConnectionResourceConsumerDescMax = 3
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

typedef enum _EVENT_INFO_CLASS {
    EventProviderBinaryTrackInfo = 0,
    EventProviderSetReserved1 = 1,
    EventProviderSetTraits = 2,
    EventProviderUseDescriptorType = 3,
    MaxEventInfo = 4
};

typedef enum _EVENT_PRIORITY {
    EventPriorityCritical = 0,
    EventPrioritySync = 1,
    EventPriorityNormal = 2,
    EventPriorityLow = 3
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

typedef enum _GENERIC_STATE {
    GenericStateIgnored = 1000,
    GenericStateEmptySubState = 1001,
    GenericStateNull = 1002
};

typedef enum _HIDSM_EVENT {
    HidSmEventNull = 1000,
    HidSmEventContinueIfNoSubState = 1001,
    HidSmEventD0Completed = 2002,
    HidSmEventDxCompleted = 2006,
    HidSmEventIdleCallbackInvoked = 2010,
    HidSmEventIdleIrpCompleted = 2014,
    HidSmEventIdleIrpCompletedWithStatusCancelled = 2034,
    HidSmEventLastPDOCompletedD0 = 2038,
    HidSmEventLastPDOCompletedDx = 2018,
    HidSmEventNo = 2001,
    HidSmEventOperationFailure = 2005,
    HidSmEventOperationPending = 2009,
    HidSmEventOperationSuccess = 2013,
    HidSmEventPendingIoFlushed = 2022,
    HidSmEventPnpRemove = 2003,
    HidSmEventPnPStart = 2007,
    HidSmEventPnPStop = 2011,
    HidSmEventPnPSupriseRemove = 2015,
    HidSmEventPoFxPowerNotRequired = 2019,
    HidSmEventPoFxPowerRequired = 2023,
    HidSmEventS0 = 2026,
    HidSmEventSx = 2027,
    HidSmEventWaitWakeCompleted = 2031,
    HidSmEventYes = 2017
};

typedef enum _HIDSM_STATE {
};

typedef enum _HIDSM_SUBSM_FLAGS {
    HidsmSubSmFlagNone = 0,
    HidsmSubSmFlagHubRoot = 1,
    HidsmSubSmFlagAny = 255
};

typedef enum _HID_POWER_POLICY {
    HidPowerPolicyEngineAlreadyRunning = 0,
    HidPowerPolicyPdoUnstable = 1,
    HidPowerPolicyNoOpenHandle = 2,
    HidPowerPolicyNoOpenHandleInitially = 3,
    HidPowerPolicySystemInConnectedStandby = 4,
    HidPowerPolicyMonitorDimmed = 5,
    HidPowerPolicyMonitorDimExit = 6,
    HidPowerPolicyMonitorOff = 7,
    HidPowerPolicyMonitorOn = 8,
    HidPowerPolicyIdleWithoutPdoTimeoutOverride = 9,
    HidPowerPolicyIdleWithPdoTimeoutOverride = 10,
    HidPowerPolicyIdleDisabled = 11,
    HidPowerPolicySuppressInput = 12
};

typedef enum _INPUT_SUPPRESSION_SUPPORT {
    InputSuppressionSupportNone = 0,
    InputSuppressionSupportEnabled = 1,
    InputSuppressionSupportDisabledNotWhitelist = 2,
    InputSuppressionSupportDisabledBlacklist = 3
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

typedef enum _IO_GATE_STATE {
    IoGateStateFail = 0,
    IoGateStatePass = 1,
    IoGateStateQueue = 2
};

typedef enum _IO_PRIORITY_HINT {
    IoPriorityVeryLow = 0,
    IoPriorityLow = 1,
    IoPriorityNormal = 2,
    IoPriorityHigh = 3,
    IoPriorityCritical = 4,
    MaxIoPriorityTypes = 5
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

typedef enum _MM_PAGE_PRIORITY {
    LowPagePriority = 0,
    NormalPagePriority = 16,
    HighPagePriority = 32
};

typedef enum _MODE {
    KernelMode = 0,
    UserMode = 1,
    MaximumMode = 2
};

typedef enum _PING_PONG_STATE {
    PingPongStateNotInitialized = 0,
    PingPongStateInitialized = 1,
    PingPongStateStarted = 2
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

typedef enum _POWER_INFORMATION_LEVEL_INTERNAL {
    PowerInternalAcpiInterfaceRegister = 0,
    PowerInternalS0LowPowerIdleInfo = 1,
    PowerInternalReapplyBrightnessSettings = 2,
    PowerInternalUserAbsencePrediction = 3,
    PowerInternalUserAbsencePredictionCapability = 4,
    PowerInternalPoProcessorLatencyHint = 5,
    PowerInternalStandbyNetworkRequest = 6,
    PowerInternalDirtyTransitionInformation = 7,
    PowerInternalSetBackgroundTaskState = 8,
    PowerInternalReservedDoNotUseEnum9 = 9,
    PowerInternalReservedDoNotUseEnum10 = 10,
    PowerInternalReservedDoNotUseEnum11 = 11,
    PowerInternalReservedDoNotUseEnum12 = 12,
    PowerInternalReservedDoNotUseEnum13 = 13,
    PowerInternalReservedDoNotUseEnum14 = 14,
    PowerInternalReservedDoNotUseEnum15 = 15,
    PowerInternalReservedDoNotUseEnum16 = 16,
    PowerInternalReservedDoNotUseEnum17 = 17,
    PowerInternalBootSessionStandbyActivationInformation = 18,
    PowerInternalSessionPowerState = 19,
    PowerInternalSessionTerminalInput = 20,
    PowerInternalSetWatchdog = 21,
    PowerInternalPhysicalPowerButtonPressInfoAtBoot = 22,
    PowerInternalExternalMonitorConnected = 23,
    PowerInternalHighPrecisionBrightnessSettings = 24,
    PowerInternalWinrtScreenToggle = 25,
    PowerInternalPpmQosDisable = 26,
    PowerInternalTransitionCheckpoint = 27,
    PowerInternalInputControllerState = 28,
    PowerInternalFirmwareResetReason = 29,
    PowerInternalPpmSchedulerQosSupport = 30,
    PowerInternalBootStatGet = 31,
    PowerInternalBootStatSet = 32,
    PowerInternalCallHasNotReturnedWatchdog = 33,
    PowerInternalBootStatCheckIntegrity = 34,
    PowerInternalBootStatRestoreDefaults = 35,
    PowerInternalHostEsStateUpdate = 36,
    PowerInternalGetPowerActionState = 37,
    PowerInternalBootStatUnlock = 38,
    PowerInternalWakeOnVoiceState = 39,
    PowerInternalDeepSleepBlock = 40,
    PowerInternalIsPoFxDevice = 41,
    PowerInternalPowerTransitionExtensionAtBoot = 42,
    PowerInternalProcessorBrandedFrequency = 43,
    PowerInternalTimeBrokerExpirationReason = 44,
    PowerInternalNotifyUserShutdownStatus = 45,
    PowerInternalPowerRequestTerminalCoreWindow = 46,
    PowerInternalProcessorIdleVeto = 47,
    PowerInternalPlatformIdleVeto = 48,
    PowerInternalIsLongPowerButtonBugcheckEnabled = 49,
    PowerInternalAutoChkCausedReboot = 50,
    PowerInformationInternalMaximum = 51
};

typedef enum _POWER_INFORMATION_LEVEL_INTERNAL_TTMTCAPI {
    PowerInformationInternalTtmFirst = 4096,
    PowerInternalTtmOpenTerminal = 4096,
    PowerInternalTtmCreateTerminal = 4097,
    PowerInternalTtmEvacuateDevices = 4098,
    PowerInternalTtmCreateTerminalEventQueue = 4099,
    PowerInternalTtmGetTerminalEvent = 4100,
    PowerInternalTtmSetDefaultDeviceAssignment = 4101,
    PowerInternalTtmAssignDevice = 4102,
    PowerInternalTtmSetDisplayState = 4103,
    PowerInternalTtmSetDisplayTimeouts = 4104,
    PowerInternalTtmSetDisplayPowerRequest = 4105,
    PowerInformationInternalTtmLast = 4105
};

typedef enum _POWER_REQUEST_TYPE {
    PowerRequestDisplayRequired = 0,
    PowerRequestSystemRequired = 1,
    PowerRequestAwayModeRequired = 2,
    PowerRequestExecutionRequired = 3
};

typedef enum _POWER_REQUEST_TYPE_INTERNAL {
    PowerRequestDisplayRequiredInternal = 0,
    PowerRequestSystemRequiredInternal = 1,
    PowerRequestAwayModeRequiredInternal = 2,
    PowerRequestExecutionRequiredInternal = 3,
    PowerRequestPerfBoostRequiredInternal = 4,
    PowerRequestActiveLockScreenInternal = 5,
    PowerRequestInternalInvalid = 6
};

typedef enum _POWER_STATE_TYPE {
    SystemPowerState = 0,
    DevicePowerState = 1
};

typedef enum _PO_INPUT_SUPPRESSION_STATE {
    PoInputSuppressionDisengaged = 0,
    PoInputSuppressionEngaged = 1,
    PoInputSuppressionTelemetryOnly = 2
};

typedef enum _PO_MODERN_SLEEP_ACTION {
    PoModernSleepActionGlobalActivatorsVeto = 0,
    PoModernSleepActionNonBlockingPhases = 1,
    PoModernSleepActionForceIdle = 2,
    PoModernSleepActionMinimalBlockingNotificationClients = 3,
    PoModernSleepActionMax = 4
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

typedef enum _STATE_FLAGS {
    StateFlagNone = 0,
    StateFlagHandlesCriticalEventsOnly = 1,
    StateFlagHandlesLowPriEvents = 2,
    StateFlagPopIfParentStateChanges = 4,
    StateFlagEndSubStateMachine = 8,
    StateFlagRequiresPassive = 16
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

typedef enum _TlgBlob_t {
    _TlgBlobNone = 0,
    _TlgBlobEnd = 1,
    _TlgBlobProvider = 2,
    _TlgBlobEvent3 = 3,
    _TlgBlobProvider3 = 4,
    _TlgBlobEvent2 = 5,
    _TlgBlobMax = 6
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

typedef enum _WMIENABLEDISABLECONTROL {
    WmiEventControl = 0,
    WmiDataBlockControl = 1
};

typedef enum collectionState {
    COLLECTION_STATE_UNINITIALIZED = 1,
    COLLECTION_STATE_INITIALIZED = 2,
    COLLECTION_STATE_RUNNING = 3,
    COLLECTION_STATE_STOPPING = 4,
    COLLECTION_STATE_STOPPED = 5,
    COLLECTION_STATE_REMOVING = 6
};

DEVPKEY_DeviceInterface_HID_IsReadOnly;
DEVPKEY_DeviceInterface_HID_ProductId;
DEVPKEY_DeviceInterface_HID_UsageId;
DEVPKEY_DeviceInterface_HID_UsagePage;
DEVPKEY_DeviceInterface_HID_VendorId;
DEVPKEY_DeviceInterface_HID_VersionNumber;
DEVPKEY_DeviceInterface_Restricted;
DEVPKEY_Device_DriverProblemDesc;
DEVPKEY_Device_LowerFilters;
DEVPKEY_Device_Service;
DEVPKEY_Device_UpperFilters;
GUID_BUS_TYPE_HID;
GUID_CONSOLE_DISPLAY_STATE;
GUID_DEVICE_SYS_BUTTON;
GUID_DEVINTERFACE_HID;
GUID_HID_INTERFACE_HIDPARSE;
GUID_HID_INTERFACE_NOTIFY;
GUID_LOW_POWER_EPOCH;
GUID_MONITOR_POWER_ON;
GUID_POWER_DEVICE_ENABLE;
GUID_POWER_DEVICE_WAKE_ENABLE;
GUID_SPM_LOW_POWER_CS;
HIDCLASS_ETW_EVENT_DEVICE_INFORMATION;
HIDCLASS_ETW_EVENT_RUNDOWN_COMPLETE;
HIDCLASS_ETW_EVENT_RUNDOWN_START;
HIDSMStateTable;
HidFdoWmiGuidList;
HidPdoWmiGuidList;
HidSmStateEntryAckingPowerNotRequired;
HidSmStateEntryAckingPowerRequired;
HidSmStateEntryAckingPowerRequiredOnD0CompletedAfterS0Idle;
HidSmStateEntryAcquiringPowerReference;
HidSmStateEntryCheckingIfNeedToBeArmedForWake;
HidSmStateEntryCheckingIfNeedToBeArmedForWakeOnSx;
HidSmStateEntryCompletingIdleCallback;
HidSmStateEntryCompletingIdleCallbackAfterUnexpectedIdleCompletion;
HidSmStateEntryCompletingIdleCallbackDuringTransientPowerDown;
HidSmStateEntryCompletingIdleCallbackInvokedInErrorPostIdleIrpCompletion;
HidSmStateEntryCompletingIdleCallbackWithWake;
HidSmStateEntryCompletingPnPEventOnSurpriseRemove;
HidSmStateEntryD0;
HidSmStateEntryDx;
HidSmStateEntryDxArmedForWake;
HidSmStateEntryDxSx;
HidSmStateEntryDxSxArmedForWake;
HidSmStateEntryFailed;
HidSmStateEntryInitializingDevice;
HidSmStateEntryReleasingPowerReference;
HidSmStateEntryReleasingPowerReferenceWithIdleIrpPending;
HidSmStateEntryReleasingPowerReferenceWithWakePending;
HidSmStateEntryRemoved;
HidSmStateEntryS0SurpriseRemoved;
HidSmStateEntryS0Uninitialized;
HidSmStateEntrySendDx;
HidSmStateEntrySendingD0IrpsToAllPDOs;
HidSmStateEntrySendingD0OnS0;
HidSmStateEntrySendingD0ResumingFromS0Idle;
HidSmStateEntrySendingDx;
HidSmStateEntrySendingDxOnSx;
HidSmStateEntrySendingDxWithWake;
HidSmStateEntrySendingDxWithWakeOnSx;
HidSmStateEntrySendingWaitWake;
HidSmStateEntrySendingWaitWakeOnSx;
HidSmStateEntrySetTargetDxState;
HidSmStateEntrySettingIoStateToFail;
HidSmStateEntrySettingIoStateToFailAndFlushSentIoOnRemove;
HidSmStateEntrySettingIoStateToPass;
HidSmStateEntrySettingIoStateToPassOnD0CompletedAfterS0Idle;
HidSmStateEntrySettingIoStateToPassOnStart;
HidSmStateEntrySettingIoStateToQueueAndFlushSentIo;
HidSmStateEntrySettingIoStateToQueueAndFlushSentIoOnStop;
HidSmStateEntrySettingIoStateToQueueOnSx;
HidSmStateEntryStopped;
HidSmStateEntrySurpriseRemoved;
HidSmStateEntrySxSurpriseRemoved;
HidSmStateEntrySxUninitialized;
HidSmStateEntryUninitialized;
HidSmStateEntryWaitingForD0ToCompleteOnS0;
HidSmStateEntryWaitingForDx;
HidSmStateEntryWaitingForDxCompletionOnUnexpectedIdleCompletion;
HidSmStateEntryWaitingForDxOnSx;
HidSmStateEntryWaitingForDxWithWake;
HidSmStateEntryWaitingForDxWithWakeOnSx;
HidSmStateEntryWaitingForIdleCallback;
HidSmStateEntryWaitingForIdleCompletion;
HidSmStateEntryWaitingForIdleIrpCompletion;
HidSmStateEntryWaitingForIoToFlushOnRemove;
HidSmStateEntryWaitingForIoToFlushOnSelectiveSuspend;
HidSmStateEntryWaitingForIoToFlushOnStop;
HidSmStateEntryWaitingForPDOsToPowerOff;
HidSmStateEntryWaitingForPDOsToPowerOn;
HidSmStateEntryWaitingForRequiredCallback;
HidSmStateEntryWaitingForRequiredCallbackOrIdleCompletion;
HidSmStateEntryWaitingForRequiredCallbackOrWaitWake;
HidSmStateEntryWaitingForS0;
HidSmStateEntryWaitingForWaitWake;
HidSmStateEntryWaitingForWaitWakeOnS0;
HidSmStateEntryWaitingForWaitWakeOrIdleCompletion;
HidSmStateEntryWatingForPowerRequiredOnIdleCompletionWithNoCallback;
IdleWorkerTag;
MS_HIDCLASS_ETW_PROVIDER;
MS_HIDCLASS_ETW_PROVIDER_Context;
Microsoft_Windows_Input_HIDCLASSEnableBits;
Microsoft_Windows_Input_HIDCLASSKeywords;
Microsoft_Windows_Input_HIDCLASSLevels;
MmBadPointer;
StateMachineTag;
TraceLoggingMetadata;
TraceLoggingMetadataEnd;
WNF_PO_INPUT_SUPPRESS_NOTIFICATION_EX;
WNF_PO_SCENARIO_CHANGE;
WPPTraceSuite;
WPP_0b9efb63358d306be20fc6c524b8f8d5_Traceguids;
WPP_3b027f8afdd53815e4d10ef5df63915f_Traceguids;
WPP_505da9e9477e3743785d780ccf6c18ff_Traceguids;
WPP_56bb1e757871360ce076124c0965b413_Traceguids;
WPP_57fce9534a0438ea68b6a9b092d5b160_Traceguids;
WPP_586d4da552943fc03e5492b042f21e2b_Traceguids;
WPP_8070c33c50723edb369a9a57a36adc42_Traceguids;
WPP_85a47d8cb552379272e81b6e94ca8e10_Traceguids;
WPP_9068a41614583375b70a8f75ab922b94_Traceguids;
WPP_9152c9b26d3c355cb5debfa48371dacf_Traceguids;
WPP_9275492abe7f3b2d1350a557cc113d20_Traceguids;
WPP_GLOBAL_Control;
WPP_MAIN_CB;
WPP_ThisDir_CTLGUID_HidClassTraceGuid;
WPP_b73312e3ab0739e3168d635bb07a0645_Traceguids;
WPP_b96b5e8109cf3b7706f672fc8d03121c_Traceguids;
WPP_c23f4866383939b9617d60f21b700d71_Traceguids;
WPP_c558246936c4301f8ecefa6c075abc11_Traceguids;
WPP_f11a23419f473c884f141cb077e6275b_Traceguids;
WPP_f65e3909fe823b6820a5da694e004b05_Traceguids;
_IMPORT_DESCRIPTOR_HIDPARSE;
_IMPORT_DESCRIPTOR_SleepStudyHelper;
_IMPORT_DESCRIPTOR_WMILIB;
_IMPORT_DESCRIPTOR_WppRecorder;
_IMPORT_DESCRIPTOR_ntoskrnl;
_NULL_IMPORT_DESCRIPTOR;
__PchSym_;
_guard_check_icall_fptr;
_guard_dispatch_icall_fptr;
_guard_fids_table;
_guard_iat_table;
_imp_DbgPrint;
_imp_EtwActivityIdControl;
_imp_EtwRegister;
_imp_EtwSetInformation;
_imp_EtwUnregister;
_imp_EtwWriteTransfer;
_imp_ExAcquireFastMutex;
_imp_ExAllocatePoolWithQuotaTag;
_imp_ExAllocatePoolWithTag;
_imp_ExFreePoolWithTag;
_imp_ExQueryWnfStateData;
_imp_ExReleaseFastMutex;
_imp_ExSubscribeWnfStateChange;
_imp_ExUnsubscribeWnfStateChange;
_imp_HidP_FreeCollectionDescription;
_imp_HidP_GetCaps;
_imp_HidP_GetCollectionDescription;
_imp_HidP_SysPowerCaps;
_imp_HidP_SysPowerEvent;
_imp_IoAcquireRemoveLockEx;
_imp_IoAllocateDriverObjectExtension;
_imp_IoAllocateIrp;
_imp_IoAllocateWorkItem;
_imp_IoAttachDeviceToDeviceStack;
_imp_IoCancelIrp;
_imp_IoCreateDevice;
_imp_IoDecrementKeepAliveCount;
_imp_IoDeleteDevice;
_imp_IoDetachDevice;
_imp_IoFreeIrp;
_imp_IoFreeWorkItem;
_imp_IoGetDeviceProperty;
_imp_IoGetDevicePropertyData;
_imp_IoGetInitiatorProcess;
_imp_IoGetRequestorSessionId;
_imp_IoIncrementKeepAliveCount;
_imp_IoInitializeRemoveLockEx;
_imp_IoInvalidateDeviceRelations;
_imp_IoOpenDeviceRegistryKey;
_imp_IoQueueWorkItem;
_imp_IoRegisterDeviceInterface;
_imp_IoReleaseCancelSpinLock;
_imp_IoReleaseRemoveLockAndWaitEx;
_imp_IoReleaseRemoveLockEx;
_imp_IoReuseIrp;
_imp_IoSetDeviceInterfacePropertyData;
_imp_IoSetDeviceInterfaceState;
_imp_IoSetDevicePropertyData;
_imp_IoWMIRegistrationControl;
_imp_IofCallDriver;
_imp_IofCompleteRequest;
_imp_KdRefreshDebuggerNotPresent;
_imp_KeAcquireSpinLockRaiseToDpc;
_imp_KeBugCheckEx;
_imp_KeCancelTimer;
_imp_KeClearEvent;
_imp_KeInitializeDpc;
_imp_KeInitializeEvent;
_imp_KeInitializeSpinLock;
_imp_KeInitializeTimer;
_imp_KeReleaseSpinLock;
_imp_KeResetEvent;
_imp_KeSetEvent;
_imp_KeSetTimer;
_imp_KeWaitForSingleObject;
_imp_KseQueryDeviceFlags;
_imp_MmBadPointer;
_imp_MmGetSystemRoutineAddress;
_imp_MmMapLockedPagesSpecifyCache;
_imp_ObfDereferenceObject;
_imp_ObfReferenceObject;
_imp_PoFxActivateComponent;
_imp_PoFxCompleteDevicePowerNotRequired;
_imp_PoFxIdleComponent;
_imp_PoFxRegisterDevice;
_imp_PoFxReportDevicePoweredOn;
_imp_PoFxSetDeviceIdleTimeout;
_imp_PoFxStartDevicePowerManagement;
_imp_PoFxUnregisterDevice;
_imp_PoGetSystemWake;
_imp_PoRegisterPowerSettingCallback;
_imp_PoRequestPowerIrp;
_imp_PoSetPowerState;
_imp_PoSetSystemWake;
_imp_PoStartNextPowerIrp;
_imp_PoUnregisterPowerSettingCallback;
_imp_ProbeForWrite;
_imp_PsGetCurrentProcessId;
_imp_PsGetCurrentThreadId;
_imp_PsGetProcessImageFileName;
_imp_PsGetVersion;
_imp_RtlCopyUnicodeString;
_imp_RtlFindMessage;
_imp_RtlFreeUnicodeString;
_imp_RtlGetActiveConsoleId;
_imp_RtlInitUnicodeString;
_imp_RtlQueryRegistryValues;
_imp_SeQuerySessionIdToken;
_imp_SeSinglePrivilegeCheck;
_imp_SleepstudyHelper_ComponentActive;
_imp_SleepstudyHelper_ComponentInactive;
_imp_SleepstudyHelper_GenerateGuid;
_imp_SleepstudyHelper_GetPdoFriendlyName;
_imp_SleepstudyHelper_Initialize;
_imp_SleepstudyHelper_RegisterComponentEx;
_imp_SleepstudyHelper_Uninitialize;
_imp_SleepstudyHelper_UnregisterComponent;
_imp_WmiCompleteRequest;
_imp_WmiSystemControl;
_imp_WppAutoLogStart;
_imp_WppAutoLogStop;
_imp_WppAutoLogTrace;
_imp_ZwClose;
_imp_ZwOpenKey;
_imp_ZwQuerySystemInformation;
_imp_ZwQueryValueKey;
_imp_ZwQueryWnfStateData;
_imp_ZwSetValueKey;
_imp___C_specific_handler;
_imp__vsnprintf;
_imp__vsnwprintf;
_imp_imp_WppRecorderConfigure;
_imp_imp_WppRecorderLogCreate;
_imp_imp_WppRecorderLogDelete;
_imp_imp_WppRecorderReplay;
_imp_wcsncmp;
_security_cookie;
_security_cookie_complement;
`TraceLoggingAddDeviceFailed'::`3'::_TlgEvent;
`TraceLoggingCollectionFileClose'::`3'::_TlgEvent;
`TraceLoggingCopyDeviceRelationsFailed'::`3'::_TlgEvent;
`TraceLoggingCreateFdoFailed'::`3'::_TlgEvent;
`TraceLoggingCreatePdoFailed'::`3'::_TlgEvent;
`TraceLoggingDerefDriverExtFailed'::`3'::_TlgEvent;
`TraceLoggingDeviceResetNotificationFailed'::`3'::_TlgEvent;
`TraceLoggingEnqueueDriverExtFailed'::`3'::_TlgEvent;
`TraceLoggingGetClassCollectionFailed'::`3'::_TlgEvent;
`TraceLoggingGetCollectionDescFailed'::`3'::_TlgEvent;
`TraceLoggingGetImageBaseFailed'::`3'::_TlgEvent;
`TraceLoggingGetReportIdentifierFailed'::`4'::_TlgEvent;
`TraceLoggingGetSetReportFailed'::`3'::_TlgEvent;
`TraceLoggingInputSuppressionEntry'::`3'::_TlgEvent;
`TraceLoggingIntegerOverflow'::`3'::_TlgEvent;
`TraceLoggingInterruptReadCompleteFailed'::`3'::_TlgEvent;
`TraceLoggingIoAllocateDriverObjectExtensionFailed'::`3'::_TlgEvent;
`TraceLoggingIoAllocateIrpFailed'::`3'::_TlgEvent;
`TraceLoggingIoAllocateWorkItemFailed'::`3'::_TlgEvent;
`TraceLoggingIoRegisterDeviceInterfaceFailed'::`4'::_TlgEvent;
`TraceLoggingIrpCloseFailed'::`3'::_TlgEvent;
`TraceLoggingIrpCreateFailed'::`3'::_TlgEvent;
`TraceLoggingIrpInternalIoctlFailed'::`3'::_TlgEvent;
`TraceLoggingIrpIoctlFailed'::`4'::_TlgEvent;
`TraceLoggingIrqlTooHigh'::`3'::_TlgEvent;
`TraceLoggingNoCollectionDescriptor'::`3'::_TlgEvent;
`TraceLoggingNoTopLevelCollection'::`3'::_TlgEvent;
`TraceLoggingParserError'::`3'::_TlgEvent;
`TraceLoggingParserErrorWithParam'::`3'::_TlgEvent;
`TraceLoggingPoFxRegisterDeviceFailed'::`3'::_TlgEvent;
`TraceLoggingPreparsedDataLengthTruncated'::`3'::_TlgEvent;
`TraceLoggingRefDriverExtFailed'::`3'::_TlgEvent;
`TraceLoggingRevisionMismatch'::`3'::_TlgEvent;
`TraceLoggingStartDeviceFailed'::`3'::_TlgEvent;
`TraceLoggingStateMachineUnhandledEvent'::`3'::_TlgEvent;
`TraceLoggingStrSafeOverflow'::`3'::_TlgEvent;
`TraceLoggingWaitWakeCompletedInSuppressInput'::`3'::_TlgEvent;
`TraceLoggingWppRecorderFailed'::`3'::_TlgEvent;
`TraceLoggingZwOpenKeyFailed'::`3'::_TlgEvent;
allFdoExtensions;
allFdoExtensionsSpinLock;
driverExtList;
driverExtListMutex;
g_HidId;
g_RecorderLog;
g_SleepstudyInitialized;
g_SleepstudyLibraryHandle;
g_WppInitialized;
load_config_used;
pfnEtwRegisterClassicProvider;
pfnEtwUnregister;
pfnWppGetVersion;
pfnWppQueryTraceInformation;
pfnWppTraceMessage;
HIDPARSE_NULL_THUNK_DATA;
SleepStudyHelper_NULL_THUNK_DATA;
WMILIB_NULL_THUNK_DATA;
WppRecorder_NULL_THUNK_DATA;
ntoskrnl_NULL_THUNK_DATA;

AllocCollectionResources();
AllocDeviceResources();
AllocateDeviceRecorderLog();
AllocateGlobalRecorderLog();
AuxKlibInitialize();
AuxKlibQueryModuleInformation();
AuxKlibQueryModuleInformation$filt$0();
AynchronousReadCompletionWorker();
CancelAllPingPongIrps();
CheckAndRecoverFromStopS0IdleLeak();
CheckReportPowerEvent();
CollectionPowerRequestCompletion();
CollectionWaitWakeIrpCancelRoutine();
CompleteAllCollectionWaitWakeIrps();
CompleteAllPendingReadsForPdo();
CompleteQueuedIrpsForPolled();
DequeueAllPowerDelayedIrpsForPdo();
DequeueFdoExt();
DequeueInterruptReadIrp();
DequeueInterruptReport();
DequeuePolledReadIrp();
DequeuePolledReadSessionIrp();
DequeuePolledReadSystemIrp();
DequeuePowerDelayedIrp();
DerefDriverExt();
DestroyPingPongs();
DllInitialize();
DllUnload();
DriverEntry();
EnqueueCollectionWaitWakeIrp();
EnqueueDriverExt();
EnqueueFdoExt();
EnqueueInterruptReadIrp();
EnqueueInterruptReport();
EnqueueInterruptReportForCollection();
EnqueuePolledReadIrp();
FreeCollectionResources();
FreeDeviceResources();
GetCollectionDesc();
GetFdoExtension();
GetHIDRawReportDescriptor();
GetHidclassCollection();
GetImageBase();
GetReportIdentifier();
GsDriverEntry();
HIDSM_AckingPowerNotRequired();
HIDSM_AckingPowerRequired();
HIDSM_AckingPowerRequiredOnD0CompletedAfterS0Idle();
HIDSM_AcquiringPowerReference();
HIDSM_AddEvent();
HIDSM_AddHidsmEvent();
HIDSM_CheckingIfNeedToBeArmedForWake();
HIDSM_CheckingIfNeedToBeArmedForWakeOnSx();
HIDSM_CompletingIdleCallback();
HIDSM_CompletingIdleCallbackAfterUnexpectedIdleCompletion();
HIDSM_CompletingIdleCallbackDuringTransientPowerDown();
HIDSM_CompletingIdleCallbackInvokedInErrorPostIdleIrpCompletion();
HIDSM_CompletingIdleCallbackWithWake();
HIDSM_CompletingPnPEventOnSurpriseRemove();
HIDSM_D0();
HIDSM_Dx();
HIDSM_DxArmedForWake();
HIDSM_DxSx();
HIDSM_DxSxArmedForWake();
HIDSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState();
HIDSM_Failed();
HIDSM_FindAndSetTargetState();
HIDSM_GetNextEvent();
HIDSM_InitializingDevice();
HIDSM_ReleasingPowerReference();
HIDSM_ReleasingPowerReferenceWithIdleIrpPending();
HIDSM_ReleasingPowerReferenceWithWakePending();
HIDSM_Removed();
HIDSM_RunStateMachine();
HIDSM_S0SurpriseRemoved();
HIDSM_S0Uninitialized();
HIDSM_SendDx();
HIDSM_SendingD0IrpsToAllPDOs();
HIDSM_SendingD0OnS0();
HIDSM_SendingD0ResumingFromS0Idle();
HIDSM_SendingDx();
HIDSM_SendingDxOnSx();
HIDSM_SendingDxWithWake();
HIDSM_SendingDxWithWakeOnSx();
HIDSM_SendingWaitWake();
HIDSM_SendingWaitWakeOnSx();
HIDSM_SetTargetDxState();
HIDSM_SettingIoStateToFail();
HIDSM_SettingIoStateToFailAndFlushSentIoOnRemove();
HIDSM_SettingIoStateToPass();
HIDSM_SettingIoStateToPassOnD0CompletedAfterS0Idle();
HIDSM_SettingIoStateToPassOnStart();
HIDSM_SettingIoStateToQueueAndFlushSentIo();
HIDSM_SettingIoStateToQueueAndFlushSentIoOnStop();
HIDSM_SettingIoStateToQueueOnSx();
HIDSM_SmWorker();
HIDSM_Stopped();
HIDSM_SurpriseRemoved();
HIDSM_SxSurpriseRemoved();
HIDSM_SxUninitialized();
HIDSM_Uninitialized();
HIDSM_WaitingForD0ToCompleteOnS0();
HIDSM_WaitingForDx();
HIDSM_WaitingForDxCompletionOnUnexpectedIdleCompletion();
HIDSM_WaitingForDxOnSx();
HIDSM_WaitingForDxWithWake();
HIDSM_WaitingForDxWithWakeOnSx();
HIDSM_WaitingForIdleCallback();
HIDSM_WaitingForIdleCompletion();
HIDSM_WaitingForIdleIrpCompletion();
HIDSM_WaitingForIoToFlushOnRemove();
HIDSM_WaitingForIoToFlushOnSelectiveSuspend();
HIDSM_WaitingForIoToFlushOnStop();
HIDSM_WaitingForPDOsToPowerOff();
HIDSM_WaitingForPDOsToPowerOn();
HIDSM_WaitingForRequiredCallback();
HIDSM_WaitingForRequiredCallbackOrIdleCompletion();
HIDSM_WaitingForRequiredCallbackOrWaitWake();
HIDSM_WaitingForS0();
HIDSM_WaitingForWaitWake();
HIDSM_WaitingForWaitWakeOnS0();
HIDSM_WaitingForWaitWakeOrIdleCompletion();
HIDSM_WatingForPowerRequiredOnIdleCompletionWithNoCallback();
HexToString();
HidClassWppEnableCallback();
HidFdoRunTimePolicyEngine();
HidFdoStartRunTimePolicyEngine();
HidFdoUpdateIdleEnabledInWmi();
HidNotifyPresence();
HidRegisterMinidriver();
HidpAddDevice();
HidpAllocatePingPongIrps();
HidpAsynchronousCallCompletion();
HidpCallDriver();
HidpCallDriverAsynchronous();
HidpCallDriverSynchronous();
HidpCancelReadIrp();
HidpCheckRemoteWakeEnabled();
HidpCleanUpFdo();
HidpConnectedStandbyCallback();
HidpCopyInputReportToUser();
HidpCreateClientPDOs();
HidpCreateRemoteWakeIrp();
HidpCreateRemoteWakeIrpWorker();
HidpDbgBreak();
HidpDeleteDeviceObjects();
HidpDistributeInterruptReport();
HidpDriverUnload();
HidpEtwRundown();
HidpFdoAcquirePoFxPowerReferenceWithTag();
HidpFdoCancelPdoDevicePresenceNotifications();
HidpFdoCancelPdoDeviceResetNotifications();
HidpFdoCancelWaitWakeIrp();
HidpFdoCompleteDevicePresenceNotification();
HidpFdoCompletePendingS0IrpIfFastResumeDisabled();
HidpFdoCompletePoFxPowerRequired();
HidpFdoCompleteSIrp();
HidpFdoConfigureIdleSettings();
HidpFdoDeviceResetNotificationCompletion();
HidpFdoDrainDevicePresenceNotifications();
HidpFdoDrainDeviceResetNotifications();
HidpFdoEnqueuePdoDevicePresenceNotification();
HidpFdoEnqueuePdoDeviceResetNotification();
HidpFdoInitializeDevice();
HidpFdoNotifyInputSuppression();
HidpFdoNotifyLowPowerEpoch();
HidpFdoNotifyMonitorDim();
HidpFdoNotifyMonitorOff();
HidpFdoNotifyPdoIdleTimeout();
HidpFdoPnp();
HidpFdoPoFxDevicePowerNotRequiredCallback();
HidpFdoPoFxDevicePowerRequiredCallback();
HidpFdoPoFxUpdateIdleTimeout();
HidpFdoPower();
HidpFdoPowerCompletion();
HidpFdoPowerDownPoCompletion();
HidpFdoPowerUpForS0IdlePoCompletion();
HidpFdoPowerUpPoCompletion();
HidpFdoRegisterWithPoFx();
HidpFdoReleasePoFxPowerReferenceWithTag();
HidpFdoResumeIdleForIo();
HidpFdoSendD0IrpsToAllPDOs();
HidpFdoSendDxIrp();
HidpFdoSendDxIrpsToAllPDOs();
HidpFdoSendIdleIrpWorker();
HidpFdoSendWaitWakeIrp();
HidpFdoSetIoStateToFailAndFlushSentIo();
HidpFdoSetIoStateToPass();
HidpFdoSetIoStateToQueueAndFlushSentIo();
HidpFdoShouldDeviceBeArmedForWakeForSx();
HidpFdoStopIdleForIo();
HidpFdoUnRegisterWithPoFx();
HidpFdoUpdateOpenHandleCount();
HidpFdoUpdatePdosInStableState();
HidpFdoWaitWakeComplete();
HidpFlushReportQueue();
HidpFreePowerEventIrp();
HidpGetCollectionDescriptor();
HidpGetCollectionInformation();
HidpGetDeviceDescriptor();
HidpGetDeviceFlags();
HidpGetDeviceString();
HidpGetFastResumeDisableState();
HidpGetIndexedString();
HidpGetIoctlSupportabilities();
HidpGetMsGenreDescriptor();
HidpGetRemoteWakeEnableState();
HidpGetRetainWWIrpEnabledFromRegistry();
HidpGetSessionSecurityState();
HidpGetSetReport();
HidpIdleNotificationCallback();
HidpIdleNotificationRequestComplete();
HidpInitializePingPongIrps();
HidpInputSuppressWnfCallbackRoutine();
HidpInterruptReadComplete();
HidpInterruptWriteComplete();
HidpIrpMajorClose();
HidpIrpMajorCreate();
HidpIrpMajorDefault();
HidpIrpMajorDeviceControl();
HidpIrpMajorINTERNALDeviceControl();
HidpIrpMajorPnp();
HidpIrpMajorRead();
HidpIrpMajorSystemControl();
HidpIrpMajorWrite();
HidpMajorHandler();
HidpPdoDevicePresenceNotificationCancelRoutine();
HidpPdoDeviceResetNotificationCancelRoutine();
HidpPdoIdleOutComplete();
HidpPdoPnp();
HidpPdoPower();
HidpPdoPowerUpPoCompletion();
HidpPdoRequestDIrp();
HidpPingpongBackoffTimerDpc();
HidpPolledReadComplete();
HidpPolledReadComplete_TimerDriven();
HidpPolledTimerDpc();
HidpProcessInterruptReport();
HidpProcessInterruptReportForCollection();
HidpQueryCapsCompletion();
HidpQueryDeviceCapabilities();
HidpQueryDeviceRelations();
HidpQueryIdForClientPdo();
HidpQueryWmiDataBlock();
HidpQueryWmiRegInfo();
HidpRegisterDeviceInterface();
HidpRegisterSleepstudyBlockerReason();
HidpRegisterSleepstudyBlockerReasons();
HidpRemoteWakeComplete();
HidpRemoveCollectionPDO();
HidpRemoveDevice();
HidpRestrictAccess();
HidpSetMaxReportSize();
HidpSetProperties();
HidpSetRegistryValue();
HidpSetWmiDataBlock();
HidpSetWmiDataItem();
HidpStartAllPingPongs();
HidpStartCollectionPDO();
HidpStartDevice();
HidpSubmitInterruptRead();
HidpSynchronousCallCompletion();
HidpToggleRemoteWake();
HidpToggleRemoteWakeWorker();
HidpToggleSelSusp();
HidpToggleSelSuspWorker();
HidpUnregisterDeviceInterface();
HidpUnregisterSleepstudyBlockerReasons();
HidpWaitForSignal();
HidpWppDumpCollection();
HidpWppDumpFdo();
HidpWppDumpFdoPowerData();
HidpWriteReport();
InitializeCollection();
IsTraceLoggedRecently();
LogParserError();
MakeClientPDOName();
McGenControlCallbackV2();
McGenEventRegister();
McGenEventUnregister();
McGenEventWrite();
McTemplateK0();
McTemplateK0phhhqbr4();
MemDup();
PolledReadCancelRoutine();
PowerDelayedCancelRoutine();
PowerEventCancelRoutine();
QueuePowerEventIrp();
ReadPolledDevice();
RefDriverExt();
RtlStringCbPrintfW();
RtlStringCchCopyA();
RtlStringCchCopyW();
RtlStringCchPrintfA();
RtlUnalignedStringCbLengthW();
RtlUnicodeStringPrintf();
SetPnpFailureDescription();
StartPollingLoop();
StopPollingLoop();
SubstituteBusNames();
TlgCreateSz();
TlgDefineProvider_annotation__Tlgg_TraceLoggingProviderProv();
TlgEnableCallback();
TlgKeywordOn();
TlgWrite();
TraceLoggingAddDeviceFailed();
TraceLoggingCollectionFileClose();
TraceLoggingCopyDeviceRelationsFailed();
TraceLoggingCreateFdoFailed();
TraceLoggingCreatePdoFailed();
TraceLoggingDerefDriverExtFailed();
TraceLoggingDeviceResetNotificationFailed();
TraceLoggingEnqueueDriverExtFailed();
TraceLoggingGetClassCollectionFailed();
TraceLoggingGetCollectionDescFailed();
TraceLoggingGetImageBaseFailed();
TraceLoggingGetReportIdentifierFailed();
TraceLoggingGetSetReportFailed();
TraceLoggingInputSuppressionEntry();
TraceLoggingIntegerOverflow();
TraceLoggingInterruptReadCompleteFailed();
TraceLoggingIoAllocateDriverObjectExtensionFailed();
TraceLoggingIoAllocateIrpFailed();
TraceLoggingIoAllocateWorkItemFailed();
TraceLoggingIoRegisterDeviceInterfaceFailed();
TraceLoggingIrpCloseFailed();
TraceLoggingIrpCreateFailed();
TraceLoggingIrpInternalIoctlFailed();
TraceLoggingIrpIoctlFailed();
TraceLoggingIrqlTooHigh();
TraceLoggingNoCollectionDescriptor();
TraceLoggingNoTopLevelCollection();
TraceLoggingParserError();
TraceLoggingParserErrorWithParam();
TraceLoggingPoFxRegisterDeviceFailed();
TraceLoggingPreparsedDataLengthTruncated();
TraceLoggingRefDriverExtFailed();
TraceLoggingRegisterEx();
TraceLoggingRevisionMismatch();
TraceLoggingStartDeviceFailed();
TraceLoggingStateMachineUnhandledEvent();
TraceLoggingStrSafeOverflow();
TraceLoggingWaitWakeCompletedInSuppressInput();
TraceLoggingWppRecorderFailed();
TraceLoggingZwOpenKeyFailed();
WPP_RECORDER_SF_();
WPP_RECORDER_SF_DDd();
WPP_RECORDER_SF__guid_idDd();
WPP_RECORDER_SF_d();
WPP_RECORDER_SF_dqZ();
WPP_RECORDER_SF_q();
WPP_RECORDER_SF_qD();
WPP_RECORDER_SF_qDDDDDDDDDDDLDLLLLLLLLDD();
WPP_RECORDER_SF_qDDDLd();
WPP_RECORDER_SF_qDDLD();
WPP_RECORDER_SF_qDd();
WPP_RECORDER_SF_qDddddd();
WPP_RECORDER_SF_qDlll();
WPP_RECORDER_SF_qL();
WPP_RECORDER_SF_qLDD();
WPP_RECORDER_SF_qLDDLLDD();
WPP_RECORDER_SF_qLDDLlll();
WPP_RECORDER_SF_qLDDqldLiIi();
WPP_RECORDER_SF_qLDqDLlll();
WPP_RECORDER_SF_qLLL();
WPP_RECORDER_SF_qLLLLL();
WPP_RECORDER_SF_qLLdddd();
WPP_RECORDER_SF_qLd();
WPP_RECORDER_SF_qLid();
WPP_RECORDER_SF_qSD();
WPP_RECORDER_SF_qSd();
WPP_RECORDER_SF_qc();
WPP_RECORDER_SF_qd();
WPP_RECORDER_SF_qdD();
WPP_RECORDER_SF_qdL();
WPP_RECORDER_SF_qdLLiiI();
WPP_RECORDER_SF_qdd();
WPP_RECORDER_SF_qdiDd();
WPP_RECORDER_SF_qdq();
WPP_RECORDER_SF_qdqD();
WPP_RECORDER_SF_qdqL();
WPP_RECORDER_SF_qdqLc();
WPP_RECORDER_SF_qdqLd();
WPP_RECORDER_SF_qdqc();
WPP_RECORDER_SF_qdqd();
WPP_RECORDER_SF_qdqdLd();
WPP_RECORDER_SF_qdqdLq();
WPP_RECORDER_SF_qdqdd();
WPP_RECORDER_SF_qdql();
WPP_RECORDER_SF_qdqq();
WPP_RECORDER_SF_qdqqLLLDL();
WPP_RECORDER_SF_qdqqLLlll();
WPP_RECORDER_SF_qdqqLd();
WPP_RECORDER_SF_qdqqc();
WPP_RECORDER_SF_qdqqcL();
WPP_RECORDER_SF_qdqqcLd();
WPP_RECORDER_SF_qdqqcLdl();
WPP_RECORDER_SF_qdqqcc();
WPP_RECORDER_SF_qdqqccL();
WPP_RECORDER_SF_qdqqccd();
WPP_RECORDER_SF_qdqqcd();
WPP_RECORDER_SF_qdqqd();
WPP_RECORDER_SF_qdqqdHDd();
WPP_RECORDER_SF_qdqqdI();
WPP_RECORDER_SF_qdqqdL();
WPP_RECORDER_SF_qdqqdd();
WPP_RECORDER_SF_qdqqdq();
WPP_RECORDER_SF_qdqqlllll();
WPP_RECORDER_SF_qdqqq();
WPP_RECORDER_SF_qdqqqq();
WPP_RECORDER_SF_qdqs();
WPP_RECORDER_SF_qq();
WPP_RECORDER_SF_qqLL();
WPP_RECORDER_SF_qqLS();
WPP_RECORDER_SF_qqLd();
WPP_RECORDER_SF_qqc();
WPP_RECORDER_SF_qqcL();
WPP_RECORDER_SF_qqcc();
WPP_RECORDER_SF_qqccL();
WPP_RECORDER_SF_qqccd();
WPP_RECORDER_SF_qqcd();
WPP_RECORDER_SF_qqd();
WPP_RECORDER_SF_qqds();
WPP_RECORDER_SF_qqq();
WPP_RECORDER_SF_qqqd();
WPP_RECORDER_SF_qs();
WPP_RECORDER_SF_qsL();
WPP_RECORDER_SF_s();
WStrLen();
WppClassicProviderCallback();
WppCleanupKm();
WppInitKm();
WppLoadTracingSupport();
WppTraceCallback();
_C_specific_handler();
_GSHandlerCheck();
_GSHandlerCheckCommon();
_GSHandlerCheck_SEH();
_report_gsfailure();
_security_check_cookie();
_security_init_cookie();
guard_check_icall_nop();
guard_dispatch_icall_nop();
memcpy();
memmove();
memset();
