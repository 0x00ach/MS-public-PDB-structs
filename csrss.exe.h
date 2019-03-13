struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct _ACCESS_REASONS;
struct _ACCESS_STATE;
struct _ACTIVATION_CONTEXT;
struct _ACTIVATION_CONTEXT_DATA;
struct _ACTIVATION_CONTEXT_STACK;
struct _ASSEMBLY_STORAGE_MAP;
struct _AUX_ACCESS_DATA;
struct _CLIENT_ID;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _CM_RESOURCE_LIST;
struct _COMPRESSED_DATA_INFO;
struct _CONTEXT;
struct _CSR_NT_SESSION;
struct _CSR_PROCESS;
struct _CSR_THREAD;
struct _CURDIR;
struct _CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG;
struct _DEVICE_CAPABILITIES;
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
struct _EPROCESS;
struct _ERESOURCE;
struct _ETHREAD;
struct _EVENT_DATA_DESCRIPTOR;
struct _EVENT_DESCRIPTOR;
struct _EXCEPTION_RECORD;
struct _EXCEPTION_REGISTRATION_RECORD;
struct _EXT_DELETE_PARAMETERS;
struct _EXT_SET_PARAMETERS_V0;
struct _EX_PUSH_LOCK;
struct _FAST_IO_DISPATCH;
struct _FAST_MUTEX;
struct _FILE_BASIC_INFORMATION;
struct _FILE_NETWORK_OPEN_INFORMATION;
struct _FILE_OBJECT;
struct _FILE_STANDARD_INFORMATION;
struct _FLS_CALLBACK_INFO;
struct _GDI_TEB_BATCH;
struct _GENERAL_LOOKASIDE;
struct _GENERAL_LOOKASIDE_POOL;
struct _GENERIC_MAPPING;
struct _GUID;
struct _IMAGE_DATA_DIRECTORY;
struct _IMAGE_DOS_HEADER;
struct _IMAGE_FILE_HEADER;
struct _IMAGE_NT_HEADERS64;
struct _IMAGE_OPTIONAL_HEADER64;
struct _INITIAL_PRIVILEGE_SET;
struct _INTERFACE;
struct _IO_COMPLETION_CONTEXT;
struct _IO_DRIVER_CREATE_CONTEXT;
struct _IO_PRIORITY_INFO;
struct _IO_RESOURCE_DESCRIPTOR;
struct _IO_RESOURCE_LIST;
struct _IO_RESOURCE_REQUIREMENTS_LIST;
struct _IO_SECURITY_CONTEXT;
struct _IO_STACK_LOCATION;
struct _IO_STATUS_BLOCK;
struct _IO_TIMER;
struct _IRP;
struct _KAPC;
struct _KDESCRIPTOR;
struct _KDEVICE_QUEUE;
struct _KDEVICE_QUEUE_ENTRY;
struct _KDPC;
struct _KEVENT;
struct _KFLOATING_SAVE;
struct _KNODE;
struct _KPCR;
struct _KPRCB;
struct _KPROCESS;
struct _KPROCESSOR_STATE;
struct _KSPECIAL_REGISTERS;
struct _KSPIN_LOCK_QUEUE;
struct _KSYSTEM_TIME;
struct _KTHREAD;
struct _KTSS64;
struct _KUSER_SHARED_DATA;
struct _LEAP_SECOND_DATA;
struct _LIST_ENTRY;
struct _LOOKASIDE_LIST_EX;
struct _LUID;
struct _LUID_AND_ATTRIBUTES;
struct _M128A;
struct _MAILSLOT_CREATE_PARAMETERS;
struct _MDL;
struct _NAMED_PIPE_CREATE_PARAMETERS;
struct _NPAGED_LOOKASIDE_LIST;
struct _NT_TIB;
struct _OBJECT_DUMP_CONTROL;
struct _OBJECT_HANDLE_INFORMATION;
struct _OBJECT_NAME_INFORMATION;
struct _OBJECT_TYPE;
struct _OBJECT_TYPE_INITIALIZER;
struct _OB_EXTENDED_PARSE_PARAMETERS;
struct _OWNER_ENTRY;
struct _PAGED_LOOKASIDE_LIST;
struct _PEB;
struct _PEB_LDR_DATA;
struct _POWER_SEQUENCE;
struct _PRIVILEGE_SET;
struct _PROCESSOR_NUMBER;
struct _PS_MITIGATION_AUDIT_OPTIONS_MAP;
struct _PS_MITIGATION_OPTIONS_MAP;
struct _QUAD;
struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME;
struct _RTL_AVL_TREE;
struct _RTL_BALANCED_NODE;
struct _RTL_BITMAP;
struct _RTL_CRITICAL_SECTION;
struct _RTL_CRITICAL_SECTION_DEBUG;
struct _RTL_DRIVE_LETTER_CURDIR;
struct _RTL_DYNAMIC_HASH_TABLE;
struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT;
struct _RTL_DYNAMIC_HASH_TABLE_ENTRY;
struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR;
struct _RTL_RB_TREE;
struct _RTL_SPLAY_LINKS;
struct _RTL_USER_PROCESS_PARAMETERS;
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
struct _TEB;
struct _TEB_ACTIVE_FRAME;
struct _TEB_ACTIVE_FRAME_CONTEXT;
struct _TP_CALLBACK_ENVIRON_V3;
struct _TP_CALLBACK_INSTANCE;
struct _TP_CLEANUP_GROUP;
struct _TP_POOL;
struct _TXN_PARAMETER_BLOCK;
struct _UNICODE_STRING;
struct _VPB;
struct _WAIT_CONTEXT_BLOCK;
struct _WHEA_ERROR_PACKET_V2;
struct _WHEA_ERROR_RECORD;
struct _WHEA_ERROR_RECORD_HEADER;
struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR;
struct _WHEA_EVENT_LOG_ENTRY;
struct _WHEA_EVENT_LOG_ENTRY_HEADER;
struct _WORK_QUEUE_ITEM;
struct _XSAVE_AREA_HEADER;
struct _XSAVE_FORMAT;
struct _XSTATE_CONFIGURATION;
struct _XSTATE_FEATURE;

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
enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS;
enum JOB_OBJECT_NET_RATE_CONTROL_FLAGS;
enum POWER_ACTION;
enum PS_CREATE_STATE;
enum ReplacesCorHdrNumericDefines;
enum SE_WS_APPX_SIGNATURE_ORIGIN;
enum _ALTERNATIVE_ARCHITECTURE_TYPE;
enum _DEVICE_POWER_STATE;
enum _DEVICE_RELATION_TYPE;
enum _DEVICE_USAGE_NOTIFICATION_TYPE;
enum _DEVICE_WAKE_DEPTH;
enum _DIRECTORY_NOTIFY_INFORMATION_CLASS;
enum _EVENT_TYPE;
enum _EXCEPTION_DISPOSITION;
enum _FILE_INFORMATION_CLASS;
enum _FSINFOCLASS;
enum _INTERFACE_TYPE;
enum _INTERLOCKED_RESULT;
enum _IO_ALLOCATION_ACTION;
enum _IO_PRIORITY_HINT;
enum _IO_RATE_CONTROL_TYPE;
enum _IRQ_PRIORITY;
enum _JOBOBJECTINFOCLASS;
enum _KINTERRUPT_POLARITY;
enum _MEMORY_CACHING_TYPE;
enum _MEMORY_CACHING_TYPE_ORIG;
enum _MODE;
enum _NT_PRODUCT_TYPE;
enum _OB_OPEN_REASON;
enum _POOL_TYPE;
enum _POWER_STATE_TYPE;
enum _PS_ATTRIBUTE_NUM;
enum _PS_MITIGATION_OPTION;
enum _PS_PROTECTED_SIGNER;
enum _PS_PROTECTED_TYPE;
enum _PS_STD_HANDLE_STATE;
enum _PS_WAKE_REASON;
enum _REG_NOTIFY_CLASS;
enum _SECURITY_IMPERSONATION_LEVEL;
enum _SECURITY_OPERATION_CODE;
enum _SYSTEM_POWER_STATE;
enum _SYSTEM_PROCESS_CLASSIFICATION;
enum _TP_CALLBACK_PRIORITY;
enum _TRACE_INFORMATION_CLASS;
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

typedef struct _ACTIVATION_CONTEXT {
};

typedef struct _ACTIVATION_CONTEXT_DATA {
};

typedef struct _ACTIVATION_CONTEXT_STACK {
    struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME *ActiveFrame;
    struct _LIST_ENTRY FrameListCache;
    ULONG Flags;
    ULONG NextCookieSequenceNumber;
    ULONG StackId;
};

typedef struct _ASSEMBLY_STORAGE_MAP {
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

typedef struct _CLIENT_ID {
    PVOID UniqueProcess;
    PVOID UniqueThread;
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
            USHORT Level;
            USHORT Group;
            ULONG Vector;
            ULONG64 Affinity;
        } Interrupt;
        struct {
            struct {
                USHORT Group;
                USHORT MessageCount;
                ULONG Vector;
                ULONG64 Affinity;
            } Raw;
            struct {
                USHORT Level;
                USHORT Group;
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

typedef struct _CSR_NT_SESSION {
    struct _LIST_ENTRY SessionLink;
    ULONG SessionId;
    LONG ReferenceCount;
    struct _STRING RootDirectory;
};

typedef struct _CSR_PROCESS {
    struct _CLIENT_ID ClientId;
    struct _LIST_ENTRY ListLink;
    struct _LIST_ENTRY ThreadList;
    struct _CSR_NT_SESSION *NtSession;
    PVOID ClientPort;
    PCHAR ClientViewBase;
    PCHAR ClientViewBounds;
    PVOID ProcessHandle;
    ULONG SequenceNumber;
    ULONG Flags;
    ULONG DebugFlags;
    LONG ReferenceCount;
    ULONG ProcessGroupId;
    ULONG ProcessGroupSequence;
    ULONG LastMessageSequence;
    ULONG NumOutstandingMessages;
    ULONG ShutdownLevel;
    ULONG ShutdownFlags;
    struct _LUID Luid;
    PVOID ServerDllPerProcessData[1];
};

typedef struct _CSR_THREAD {
    union _LARGE_INTEGER CreateTime;
    struct _LIST_ENTRY Link;
    struct _LIST_ENTRY HashLinks;
    struct _CLIENT_ID ClientId;
    struct _CSR_PROCESS *Process;
    PVOID ThreadHandle;
    ULONG Flags;
    LONG ReferenceCount;
    ULONG ImpersonateCount;
};

typedef struct _CURDIR {
    struct _UNICODE_STRING DosPath;
    PVOID Handle;
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

typedef struct _EX_PUSH_LOCK {
    ULONG64 Locked : 1;
    ULONG64 Waiting : 1;
    ULONG64 Waking : 1;
    ULONG64 MultipleShared : 1;
    ULONG64 Shared : 60;
    ULONG64 Value;
    PVOID Ptr;
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

typedef struct _FLS_CALLBACK_INFO {
};

typedef struct _GDI_TEB_BATCH {
    ULONG Offset : 31;
    ULONG HasRenderingCommand : 1;
    ULONG64 HDC;
    ULONG Buffer[310];
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

typedef struct _IMAGE_DATA_DIRECTORY {
    ULONG VirtualAddress;
    ULONG Size;
};

typedef struct _IMAGE_DOS_HEADER {
    USHORT e_magic;
    USHORT e_cblp;
    USHORT e_cp;
    USHORT e_crlc;
    USHORT e_cparhdr;
    USHORT e_minalloc;
    USHORT e_maxalloc;
    USHORT e_ss;
    USHORT e_sp;
    USHORT e_csum;
    USHORT e_ip;
    USHORT e_cs;
    USHORT e_lfarlc;
    USHORT e_ovno;
    USHORT e_res[4];
    USHORT e_oemid;
    USHORT e_oeminfo;
    USHORT e_res2[10];
    LONG e_lfanew;
};

typedef struct _IMAGE_FILE_HEADER {
    USHORT Machine;
    USHORT NumberOfSections;
    ULONG TimeDateStamp;
    ULONG PointerToSymbolTable;
    ULONG NumberOfSymbols;
    USHORT SizeOfOptionalHeader;
    USHORT Characteristics;
};

typedef struct _IMAGE_NT_HEADERS64 {
    ULONG Signature;
    struct _IMAGE_FILE_HEADER FileHeader;
    struct _IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct _IMAGE_OPTIONAL_HEADER64 {
    USHORT Magic;
    UCHAR MajorLinkerVersion;
    UCHAR MinorLinkerVersion;
    ULONG SizeOfCode;
    ULONG SizeOfInitializedData;
    ULONG SizeOfUninitializedData;
    ULONG AddressOfEntryPoint;
    ULONG BaseOfCode;
    ULONG64 ImageBase;
    ULONG SectionAlignment;
    ULONG FileAlignment;
    USHORT MajorOperatingSystemVersion;
    USHORT MinorOperatingSystemVersion;
    USHORT MajorImageVersion;
    USHORT MinorImageVersion;
    USHORT MajorSubsystemVersion;
    USHORT MinorSubsystemVersion;
    ULONG Win32VersionValue;
    ULONG SizeOfImage;
    ULONG SizeOfHeaders;
    ULONG CheckSum;
    USHORT Subsystem;
    USHORT DllCharacteristics;
    ULONG64 SizeOfStackReserve;
    ULONG64 SizeOfStackCommit;
    ULONG64 SizeOfHeapReserve;
    ULONG64 SizeOfHeapCommit;
    ULONG LoaderFlags;
    ULONG NumberOfRvaAndSizes;
    struct _IMAGE_DATA_DIRECTORY DataDirectory[16];
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
            USHORT AffinityPolicy;
            USHORT Group;
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
            enum _FSINFOCLASS FsInformationClass;
        } QueryVolume;
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
    USHORT AllocationProcessorNumber;
    USHORT Reserved;
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
            PVOID IrpExtension;
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
    PVOID KernelRoutine;
    PVOID RundownRoutine;
    PVOID NormalRoutine;
    PVOID Reserved[3];
    PVOID NormalContext;
    PVOID SystemArgument1;
    PVOID SystemArgument2;
    CHAR ApcStateIndex;
    CHAR ApcMode;
    UCHAR Inserted;
};

typedef struct _KDESCRIPTOR {
    USHORT Pad[3];
    USHORT Limit;
    PVOID Base;
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

typedef struct _KNODE {
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
    struct _KPRCB Prcb;
};

typedef struct _KPRCB {
    ULONG MxCsr;
    UCHAR LegacyNumber;
    UCHAR ReservedMustBeZero;
    UCHAR InterruptRequest;
    UCHAR IdleHalt;
    struct _KTHREAD *CurrentThread;
    struct _KTHREAD *NextThread;
    struct _KTHREAD *IdleThread;
    UCHAR NestingLevel;
    UCHAR ClockOwner;
    UCHAR PendingTickFlags;
    UCHAR PendingTick : 1;
    UCHAR PendingBackupTick : 1;
    UCHAR IdleState;
    ULONG Number;
    ULONG64 RspBase;
    ULONG64 PrcbLock;
    PCHAR PriorityState;
    CHAR CpuType;
    CHAR CpuID;
    USHORT CpuStep;
    UCHAR CpuStepping;
    UCHAR CpuModel;
    ULONG MHz;
    ULONG64 HalReserved[8];
    USHORT MinorVersion;
    USHORT MajorVersion;
    UCHAR BuildType;
    UCHAR CpuVendor;
    UCHAR CoresPerPhysicalProcessor;
    UCHAR LogicalProcessorsPerCore;
    ULONG64 PrcbPad04[6];
    struct _KNODE *ParentNode;
    ULONG64 GroupSetMember;
    UCHAR Group;
    UCHAR GroupIndex;
    UCHAR PrcbPad05[2];
    ULONG InitialApicId;
    ULONG ScbOffset;
    ULONG ApicMask;
    PVOID AcpiReserved;
    ULONG CFlushSize;
    ULONG64 TrappedSecurityDomain;
    UCHAR BpbState;
    UCHAR BpbCpuIdle : 1;
    UCHAR BpbFlushRsbOnTrap : 1;
    UCHAR BpbIbpbOnReturn : 1;
    UCHAR BpbIbpbOnTrap : 1;
    UCHAR BpbIbpbOnRetpolineExit : 1;
    UCHAR BpbStateReserved : 3;
    UCHAR BpbFeatures;
    UCHAR BpbClearOnIdle : 1;
    UCHAR BpbEnabled : 1;
    UCHAR BpbSmep : 1;
    UCHAR BpbFeaturesReserved : 5;
    UCHAR BpbCurrentSpecCtrl;
    UCHAR BpbKernelSpecCtrl;
    UCHAR BpbNmiSpecCtrl;
    UCHAR BpbUserSpecCtrl;
    SHORT PairRegister;
    ULONG64 PrcbPad11[2];
    struct _KPROCESSOR_STATE ProcessorState;
    struct _XSAVE_AREA_HEADER *ExtendedSupervisorState;
    ULONG ProcessorSignature;
    ULONG ProcessorFlags;
    ULONG64 PrcbPad12a;
    ULONG64 PrcbPad12[3];
};

typedef struct _KPROCESS {
};

typedef struct _KPROCESSOR_STATE {
    struct _KSPECIAL_REGISTERS SpecialRegisters;
    struct _CONTEXT ContextFrame;
};

typedef struct _KSPECIAL_REGISTERS {
    ULONG64 Cr0;
    ULONG64 Cr2;
    ULONG64 Cr3;
    ULONG64 Cr4;
    ULONG64 KernelDr0;
    ULONG64 KernelDr1;
    ULONG64 KernelDr2;
    ULONG64 KernelDr3;
    ULONG64 KernelDr6;
    ULONG64 KernelDr7;
    struct _KDESCRIPTOR Gdtr;
    struct _KDESCRIPTOR Idtr;
    USHORT Tr;
    USHORT Ldtr;
    ULONG MxCsr;
    ULONG64 DebugControl;
    ULONG64 LastBranchToRip;
    ULONG64 LastBranchFromRip;
    ULONG64 LastExceptionToRip;
    ULONG64 LastExceptionFromRip;
    ULONG64 Cr8;
    ULONG64 MsrGsBase;
    ULONG64 MsrGsSwap;
    ULONG64 MsrStar;
    ULONG64 MsrLStar;
    ULONG64 MsrCStar;
    ULONG64 MsrSyscallMask;
    ULONG64 Xcr0;
    ULONG64 MsrFsBase;
    ULONG64 SpecialPadding0;
};

typedef struct _KSPIN_LOCK_QUEUE {
    struct _KSPIN_LOCK_QUEUE *Next;
    PULONG64 Lock;
};

typedef struct _KSYSTEM_TIME {
    ULONG LowPart;
    LONG High1Time;
    LONG High2Time;
};

typedef struct _KTHREAD {
};

typedef struct _KTSS64 {
    ULONG Reserved0;
    ULONG64 Rsp0;
    ULONG64 Rsp1;
    ULONG64 Rsp2;
    ULONG64 Ist[8];
    ULONG64 Reserved1;
    USHORT Reserved2;
    USHORT IoMapBase;
};

typedef struct _KUSER_SHARED_DATA {
    ULONG TickCountLowDeprecated;
    ULONG TickCountMultiplier;
    struct _KSYSTEM_TIME InterruptTime;
    struct _KSYSTEM_TIME SystemTime;
    struct _KSYSTEM_TIME TimeZoneBias;
    USHORT ImageNumberLow;
    USHORT ImageNumberHigh;
    WCHAR NtSystemRoot[260];
    ULONG MaxStackTraceDepth;
    ULONG CryptoExponent;
    ULONG TimeZoneId;
    ULONG LargePageMinimum;
    ULONG AitSamplingValue;
    ULONG AppCompatFlag;
    ULONG64 RNGSeedVersion;
    ULONG GlobalValidationRunlevel;
    LONG TimeZoneBiasStamp;
    ULONG NtBuildNumber;
    enum _NT_PRODUCT_TYPE NtProductType;
    UCHAR ProductTypeIsValid;
    UCHAR Reserved0[1];
    USHORT NativeProcessorArchitecture;
    ULONG NtMajorVersion;
    ULONG NtMinorVersion;
    UCHAR ProcessorFeatures[64];
    ULONG Reserved1;
    ULONG Reserved3;
    ULONG TimeSlip;
    enum _ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;
    ULONG BootId;
    union _LARGE_INTEGER SystemExpirationDate;
    ULONG SuiteMask;
    UCHAR KdDebuggerEnabled;
    UCHAR MitigationPolicies;
    UCHAR NXSupportPolicy : 2;
    UCHAR SEHValidationPolicy : 2;
    UCHAR CurDirDevicesSkippedForDlls : 2;
    UCHAR Reserved : 2;
    UCHAR Reserved6[2];
    ULONG ActiveConsoleId;
    ULONG DismountCount;
    ULONG ComPlusPackage;
    ULONG LastSystemRITEventTickCount;
    ULONG NumberOfPhysicalPages;
    UCHAR SafeBootMode;
    UCHAR VirtualizationFlags;
    UCHAR Reserved12[2];
    ULONG SharedDataFlags;
    ULONG DbgErrorPortPresent : 1;
    ULONG DbgElevationEnabled : 1;
    ULONG DbgVirtEnabled : 1;
    ULONG DbgInstallerDetectEnabled : 1;
    ULONG DbgLkgEnabled : 1;
    ULONG DbgDynProcessorEnabled : 1;
    ULONG DbgConsoleBrokerEnabled : 1;
    ULONG DbgSecureBootEnabled : 1;
    ULONG DbgMultiSessionSku : 1;
    ULONG DbgMultiUsersInSessionSku : 1;
    ULONG DbgStateSeparationEnabled : 1;
    ULONG SpareBits : 21;
    ULONG DataFlagsPad[1];
    ULONG64 TestRetInstruction;
    LONG64 QpcFrequency;
    ULONG SystemCall;
    ULONG SystemCallPad0;
    ULONG64 SystemCallPad[2];
    struct _KSYSTEM_TIME TickCount;
    ULONG64 TickCountQuad;
    ULONG ReservedTickCountOverlay[3];
    ULONG TickCountPad[1];
    ULONG Cookie;
    ULONG CookiePad[1];
    LONG64 ConsoleSessionForegroundProcessId;
    ULONG64 TimeUpdateLock;
    ULONG64 BaselineSystemTimeQpc;
    ULONG64 BaselineInterruptTimeQpc;
    ULONG64 QpcSystemTimeIncrement;
    ULONG64 QpcInterruptTimeIncrement;
    UCHAR QpcSystemTimeIncrementShift;
    UCHAR QpcInterruptTimeIncrementShift;
    USHORT UnparkedProcessorCount;
    ULONG EnclaveFeatureMask[4];
    ULONG TelemetryCoverageRound;
    USHORT UserModeGlobalLogger[16];
    ULONG ImageFileExecutionOptions;
    ULONG LangGenerationCount;
    ULONG64 Reserved4;
    ULONG64 InterruptTimeBias;
    ULONG64 QpcBias;
    ULONG ActiveProcessorCount;
    UCHAR ActiveGroupCount;
    UCHAR Reserved9;
    USHORT QpcData;
    UCHAR QpcBypassEnabled;
    UCHAR QpcShift;
    union _LARGE_INTEGER TimeZoneBiasEffectiveStart;
    union _LARGE_INTEGER TimeZoneBiasEffectiveEnd;
    struct _XSTATE_CONFIGURATION XState;
};

typedef struct _LEAP_SECOND_DATA {
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
    USHORT AllocationProcessorNumber;
    USHORT Reserved;
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

typedef struct _OBJECT_DUMP_CONTROL {
    PVOID Stream;
    ULONG Detail;
};

typedef struct _OBJECT_HANDLE_INFORMATION {
    ULONG HandleAttributes;
    ULONG GrantedAccess;
};

typedef struct _OBJECT_NAME_INFORMATION {
    struct _UNICODE_STRING Name;
};

typedef struct _OBJECT_TYPE {
    struct _LIST_ENTRY TypeList;
    struct _UNICODE_STRING Name;
    PVOID DefaultObject;
    UCHAR Index;
    ULONG TotalNumberOfObjects;
    ULONG TotalNumberOfHandles;
    ULONG HighWaterNumberOfObjects;
    ULONG HighWaterNumberOfHandles;
    struct _OBJECT_TYPE_INITIALIZER TypeInfo;
    struct _EX_PUSH_LOCK TypeLock;
    ULONG Key;
    struct _LIST_ENTRY CallbackList;
};

typedef struct _OBJECT_TYPE_INITIALIZER {
    USHORT Length;
    USHORT ObjectTypeFlags;
    UCHAR CaseInsensitive : 1;
    UCHAR UnnamedObjectsOnly : 1;
    UCHAR UseDefaultObject : 1;
    UCHAR SecurityRequired : 1;
    UCHAR MaintainHandleCount : 1;
    UCHAR MaintainTypeList : 1;
    UCHAR SupportsObjectCallbacks : 1;
    UCHAR CacheAligned : 1;
    UCHAR UseExtendedParameters : 1;
    UCHAR Reserved : 7;
    ULONG ObjectTypeCode;
    ULONG InvalidAttributes;
    struct _GENERIC_MAPPING GenericMapping;
    ULONG ValidAccessMask;
    ULONG RetainAccess;
    enum _POOL_TYPE PoolType;
    ULONG DefaultPagedPoolCharge;
    ULONG DefaultNonPagedPoolCharge;
    PVOID DumpProcedure;
    PLONG OpenProcedure;
    PVOID CloseProcedure;
    PVOID DeleteProcedure;
    PLONG ParseProcedure;
    PLONG ParseProcedureEx;
    PLONG SecurityProcedure;
    PLONG QueryNameProcedure;
    PUCHAR OkayToCloseProcedure;
    ULONG WaitObjectFlagMask;
    USHORT WaitObjectFlagOffset;
    USHORT WaitObjectPointerOffset;
};

typedef struct _OB_EXTENDED_PARSE_PARAMETERS {
    USHORT Length;
    ULONG RestrictedAccessMask;
    struct _EJOB *Silo;
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

typedef struct _PEB {
    UCHAR InheritedAddressSpace;
    UCHAR ReadImageFileExecOptions;
    UCHAR BeingDebugged;
    UCHAR BitField;
    UCHAR ImageUsesLargePages : 1;
    UCHAR IsProtectedProcess : 1;
    UCHAR IsImageDynamicallyRelocated : 1;
    UCHAR SkipPatchingUser32Forwarders : 1;
    UCHAR IsPackagedProcess : 1;
    UCHAR IsAppContainer : 1;
    UCHAR IsProtectedProcessLight : 1;
    UCHAR IsLongPathAwareProcess : 1;
    UCHAR Padding0[4];
    PVOID Mutant;
    PVOID ImageBaseAddress;
    struct _PEB_LDR_DATA *Ldr;
    struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters;
    PVOID SubSystemData;
    PVOID ProcessHeap;
    struct _RTL_CRITICAL_SECTION *FastPebLock;
    union _SLIST_HEADER *AtlThunkSListPtr;
    PVOID IFEOKey;
    ULONG CrossProcessFlags;
    ULONG ProcessInJob : 1;
    ULONG ProcessInitializing : 1;
    ULONG ProcessUsingVEH : 1;
    ULONG ProcessUsingVCH : 1;
    ULONG ProcessUsingFTH : 1;
    ULONG ProcessPreviouslyThrottled : 1;
    ULONG ProcessCurrentlyThrottled : 1;
    ULONG ProcessImagesHotPatched : 1;
    ULONG ReservedBits0 : 24;
    UCHAR Padding1[4];
    PVOID KernelCallbackTable;
    PVOID UserSharedInfoPtr;
    ULONG SystemReserved;
    ULONG AtlThunkSListPtr32;
    PVOID ApiSetMap;
    ULONG TlsExpansionCounter;
    UCHAR Padding2[4];
    PVOID TlsBitmap;
    ULONG TlsBitmapBits[2];
    PVOID ReadOnlySharedMemoryBase;
    PVOID SharedData;
    PVOID *ReadOnlyStaticServerData;
    PVOID AnsiCodePageData;
    PVOID OemCodePageData;
    PVOID UnicodeCaseTableData;
    ULONG NumberOfProcessors;
    ULONG NtGlobalFlag;
    union _LARGE_INTEGER CriticalSectionTimeout;
    ULONG64 HeapSegmentReserve;
    ULONG64 HeapSegmentCommit;
    ULONG64 HeapDeCommitTotalFreeThreshold;
    ULONG64 HeapDeCommitFreeBlockThreshold;
    ULONG NumberOfHeaps;
    ULONG MaximumNumberOfHeaps;
    PVOID *ProcessHeaps;
    PVOID GdiSharedHandleTable;
    PVOID ProcessStarterHelper;
    ULONG GdiDCAttributeList;
    UCHAR Padding3[4];
    struct _RTL_CRITICAL_SECTION *LoaderLock;
    ULONG OSMajorVersion;
    ULONG OSMinorVersion;
    USHORT OSBuildNumber;
    USHORT OSCSDVersion;
    ULONG OSPlatformId;
    ULONG ImageSubsystem;
    ULONG ImageSubsystemMajorVersion;
    ULONG ImageSubsystemMinorVersion;
    UCHAR Padding4[4];
    ULONG64 ActiveProcessAffinityMask;
    ULONG GdiHandleBuffer[60];
    PVOID PostProcessInitRoutine;
    PVOID TlsExpansionBitmap;
    ULONG TlsExpansionBitmapBits[32];
    ULONG SessionId;
    UCHAR Padding5[4];
    union _ULARGE_INTEGER AppCompatFlags;
    union _ULARGE_INTEGER AppCompatFlagsUser;
    PVOID pShimData;
    PVOID AppCompatInfo;
    struct _UNICODE_STRING CSDVersion;
    struct _ACTIVATION_CONTEXT_DATA *ActivationContextData;
    struct _ASSEMBLY_STORAGE_MAP *ProcessAssemblyStorageMap;
    struct _ACTIVATION_CONTEXT_DATA *SystemDefaultActivationContextData;
    struct _ASSEMBLY_STORAGE_MAP *SystemAssemblyStorageMap;
    ULONG64 MinimumStackCommit;
    struct _FLS_CALLBACK_INFO *FlsCallback;
    struct _LIST_ENTRY FlsListHead;
    PVOID FlsBitmap;
    ULONG FlsBitmapBits[4];
    ULONG FlsHighIndex;
    PVOID WerRegistrationData;
    PVOID WerShipAssertPtr;
    PVOID pUnused;
    PVOID pImageHeaderHash;
    ULONG TracingFlags;
    ULONG HeapTracingEnabled : 1;
    ULONG CritSecTracingEnabled : 1;
    ULONG LibLoaderTracingEnabled : 1;
    ULONG SpareTracingBits : 29;
    UCHAR Padding6[4];
    ULONG64 CsrServerReadOnlySharedMemoryBase;
    ULONG64 TppWorkerpListLock;
    struct _LIST_ENTRY TppWorkerpList;
    PVOID WaitOnAddressHashTable[128];
    PVOID TelemetryCoverageHeader;
    ULONG CloudFileFlags;
    ULONG CloudFileDiagFlags;
    CHAR PlaceholderCompatibilityMode;
    CHAR PlaceholderCompatibilityModeReserved[7];
    struct _LEAP_SECOND_DATA *LeapSecondData;
    ULONG LeapSecondFlags;
    ULONG SixtySecondEnabled : 1;
    ULONG Reserved : 31;
    ULONG NtGlobalFlag2;
};

typedef struct _PEB_LDR_DATA {
    ULONG Length;
    UCHAR Initialized;
    PVOID SsHandle;
    struct _LIST_ENTRY InLoadOrderModuleList;
    struct _LIST_ENTRY InMemoryOrderModuleList;
    struct _LIST_ENTRY InInitializationOrderModuleList;
    PVOID EntryInProgress;
    UCHAR ShutdownInProgress;
    PVOID ShutdownThreadId;
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

typedef struct _PROCESSOR_NUMBER {
    USHORT Group;
    UCHAR Number;
    UCHAR Reserved;
};

typedef struct _PS_MITIGATION_AUDIT_OPTIONS_MAP {
    ULONG64 Map[2];
};

typedef struct _PS_MITIGATION_OPTIONS_MAP {
    ULONG64 Map[2];
};

typedef struct _QUAD {
    LONG64 UseThisFieldToCopy;
    DOUBLE DoNotUseThisField;
};

typedef struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME {
    struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME *Previous;
    struct _ACTIVATION_CONTEXT *ActivationContext;
    ULONG Flags;
};

typedef struct _RTL_AVL_TREE {
    struct _RTL_BALANCED_NODE *Root;
};

typedef struct _RTL_BALANCED_NODE {
    struct _RTL_BALANCED_NODE *Children[2];
    struct _RTL_BALANCED_NODE *Left;
    struct _RTL_BALANCED_NODE *Right;
    UCHAR Red : 1;
    UCHAR Balance : 2;
    ULONG64 ParentValue;
};

typedef struct _RTL_BITMAP {
    ULONG SizeOfBitMap;
    PULONG Buffer;
};

typedef struct _RTL_CRITICAL_SECTION {
    struct _RTL_CRITICAL_SECTION_DEBUG *DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    PVOID OwningThread;
    PVOID LockSemaphore;
    ULONG64 SpinCount;
};

typedef struct _RTL_CRITICAL_SECTION_DEBUG {
    USHORT Type;
    USHORT CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    struct _LIST_ENTRY ProcessLocksList;
    ULONG EntryCount;
    ULONG ContentionCount;
    ULONG Flags;
    USHORT CreatorBackTraceIndexHigh;
    USHORT SpareUSHORT;
};

typedef struct _RTL_DRIVE_LETTER_CURDIR {
    USHORT Flags;
    USHORT Length;
    ULONG TimeStamp;
    struct _STRING DosPath;
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

typedef struct _RTL_RB_TREE {
    struct _RTL_BALANCED_NODE *Root;
    UCHAR Encoded : 1;
    struct _RTL_BALANCED_NODE *Min;
};

typedef struct _RTL_SPLAY_LINKS {
    struct _RTL_SPLAY_LINKS *Parent;
    struct _RTL_SPLAY_LINKS *LeftChild;
    struct _RTL_SPLAY_LINKS *RightChild;
};

typedef struct _RTL_USER_PROCESS_PARAMETERS {
    ULONG MaximumLength;
    ULONG Length;
    ULONG Flags;
    ULONG DebugFlags;
    PVOID ConsoleHandle;
    ULONG ConsoleFlags;
    PVOID StandardInput;
    PVOID StandardOutput;
    PVOID StandardError;
    struct _CURDIR CurrentDirectory;
    struct _UNICODE_STRING DllPath;
    struct _UNICODE_STRING ImagePathName;
    struct _UNICODE_STRING CommandLine;
    PVOID Environment;
    ULONG StartingX;
    ULONG StartingY;
    ULONG CountX;
    ULONG CountY;
    ULONG CountCharsX;
    ULONG CountCharsY;
    ULONG FillAttribute;
    ULONG WindowFlags;
    ULONG ShowWindowFlags;
    struct _UNICODE_STRING WindowTitle;
    struct _UNICODE_STRING DesktopInfo;
    struct _UNICODE_STRING ShellInfo;
    struct _UNICODE_STRING RuntimeData;
    struct _RTL_DRIVE_LETTER_CURDIR CurrentDirectores[32];
    ULONG64 EnvironmentSize;
    ULONG64 EnvironmentVersion;
    PVOID PackageDependencyData;
    ULONG ProcessGroupId;
    ULONG LoaderThreads;
    struct _UNICODE_STRING RedirectionDllName;
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

typedef struct _TEB {
    struct _NT_TIB NtTib;
    PVOID EnvironmentPointer;
    struct _CLIENT_ID ClientId;
    PVOID ActiveRpcHandle;
    PVOID ThreadLocalStoragePointer;
    struct _PEB *ProcessEnvironmentBlock;
    ULONG LastErrorValue;
    ULONG CountOfOwnedCriticalSections;
    PVOID CsrClientThread;
    PVOID Win32ThreadInfo;
    ULONG User32Reserved[26];
    ULONG UserReserved[5];
    PVOID WOW32Reserved;
    ULONG CurrentLocale;
    ULONG FpSoftwareStatusRegister;
    PVOID ReservedForDebuggerInstrumentation[16];
    PVOID SystemReserved1[30];
    CHAR PlaceholderCompatibilityMode;
    UCHAR PlaceholderHydrationAlwaysExplicit;
    CHAR PlaceholderReserved[10];
    ULONG ProxiedProcessId;
    struct _ACTIVATION_CONTEXT_STACK _ActivationStack;
    UCHAR WorkingOnBehalfTicket[8];
    LONG ExceptionCode;
    UCHAR Padding0[4];
    struct _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer;
    ULONG64 InstrumentationCallbackSp;
    ULONG64 InstrumentationCallbackPreviousPc;
    ULONG64 InstrumentationCallbackPreviousSp;
    ULONG TxFsContext;
    UCHAR InstrumentationCallbackDisabled;
    UCHAR UnalignedLoadStoreExceptions;
    UCHAR Padding1[2];
    struct _GDI_TEB_BATCH GdiTebBatch;
    struct _CLIENT_ID RealClientId;
    PVOID GdiCachedProcessHandle;
    ULONG GdiClientPID;
    ULONG GdiClientTID;
    PVOID GdiThreadLocalInfo;
    ULONG64 Win32ClientInfo[62];
    PVOID glDispatchTable[233];
    ULONG64 glReserved1[29];
    PVOID glReserved2;
    PVOID glSectionInfo;
    PVOID glSection;
    PVOID glTable;
    PVOID glCurrentRC;
    PVOID glContext;
    ULONG LastStatusValue;
    UCHAR Padding2[4];
    struct _UNICODE_STRING StaticUnicodeString;
    WCHAR StaticUnicodeBuffer[261];
    UCHAR Padding3[6];
    PVOID DeallocationStack;
    PVOID TlsSlots[64];
    struct _LIST_ENTRY TlsLinks;
    PVOID Vdm;
    PVOID ReservedForNtRpc;
    PVOID DbgSsReserved[2];
    ULONG HardErrorMode;
    UCHAR Padding4[4];
    PVOID Instrumentation[11];
    struct _GUID ActivityId;
    PVOID SubProcessTag;
    PVOID PerflibData;
    PVOID EtwTraceData;
    PVOID WinSockData;
    ULONG GdiBatchCount;
    struct _PROCESSOR_NUMBER CurrentIdealProcessor;
    ULONG IdealProcessorValue;
    UCHAR ReservedPad0;
    UCHAR ReservedPad1;
    UCHAR ReservedPad2;
    UCHAR IdealProcessor;
    ULONG GuaranteedStackBytes;
    UCHAR Padding5[4];
    PVOID ReservedForPerf;
    PVOID ReservedForOle;
    ULONG WaitingOnLoaderLock;
    UCHAR Padding6[4];
    PVOID SavedPriorityState;
    ULONG64 ReservedForCodeCoverage;
    PVOID ThreadPoolData;
    PVOID *TlsExpansionSlots;
    PVOID DeallocationBStore;
    PVOID BStoreLimit;
    ULONG MuiGeneration;
    ULONG IsImpersonating;
    PVOID NlsCache;
    PVOID pShimData;
    ULONG HeapData;
    UCHAR Padding7[4];
    PVOID CurrentTransactionHandle;
    struct _TEB_ACTIVE_FRAME *ActiveFrame;
    PVOID FlsData;
    PVOID PreferredLanguages;
    PVOID UserPrefLanguages;
    PVOID MergedPrefLanguages;
    ULONG MuiImpersonation;
    USHORT CrossTebFlags;
    USHORT SpareCrossTebBits : 16;
    USHORT SameTebFlags;
    USHORT SafeThunkCall : 1;
    USHORT InDebugPrint : 1;
    USHORT HasFiberData : 1;
    USHORT SkipThreadAttach : 1;
    USHORT WerInShipAssertCode : 1;
    USHORT RanProcessInit : 1;
    USHORT ClonedThread : 1;
    USHORT SuppressDebugMsg : 1;
    USHORT DisableUserStackWalk : 1;
    USHORT RtlExceptionAttached : 1;
    USHORT InitialThread : 1;
    USHORT SessionAware : 1;
    USHORT LoadOwner : 1;
    USHORT LoaderWorker : 1;
    USHORT SkipLoaderInit : 1;
    USHORT SpareSameTebBits : 1;
    PVOID TxnScopeEnterCallback;
    PVOID TxnScopeExitCallback;
    PVOID TxnScopeContext;
    ULONG LockCount;
    LONG WowTebOffset;
    PVOID ResourceRetValue;
    PVOID ReservedForWdf;
    ULONG64 ReservedForCrt;
    struct _GUID EffectiveContainerId;
};

typedef struct _TEB_ACTIVE_FRAME {
    ULONG Flags;
    struct _TEB_ACTIVE_FRAME *Previous;
    struct _TEB_ACTIVE_FRAME_CONTEXT *Context;
};

typedef struct _TEB_ACTIVE_FRAME_CONTEXT {
    ULONG Flags;
    PCHAR FrameName;
};

typedef struct _TP_CALLBACK_ENVIRON_V3 {
    ULONG Version;
    struct _TP_POOL *Pool;
    struct _TP_CLEANUP_GROUP *CleanupGroup;
    PVOID CleanupGroupCancelCallback;
    PVOID RaceDll;
    struct _ACTIVATION_CONTEXT *ActivationContext;
    PVOID FinalizationCallback;
    union {
        ULONG Flags;
        struct {
            ULONG LongFunction : 1;
            ULONG Persistent : 1;
            ULONG Private : 30;
        } s;
    } u;
    enum _TP_CALLBACK_PRIORITY CallbackPriority;
    ULONG Size;
};

typedef struct _TP_CALLBACK_INSTANCE {
};

typedef struct _TP_CLEANUP_GROUP {
};

typedef struct _TP_POOL {
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

typedef struct _XSAVE_AREA_HEADER {
    ULONG64 Mask;
    ULONG64 CompactionMask;
    ULONG64 Reserved2[6];
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

typedef struct _XSTATE_CONFIGURATION {
    ULONG64 EnabledFeatures;
    ULONG64 EnabledVolatileFeatures;
    ULONG Size;
    ULONG ControlFlags;
    ULONG OptimizedSave : 1;
    ULONG CompactionEnabled : 1;
    struct _XSTATE_FEATURE Features[64];
    ULONG64 EnabledSupervisorFeatures;
    ULONG64 AlignedFeatures;
    ULONG AllFeatureSize;
    ULONG AllFeatures[64];
    ULONG64 EnabledUserVisibleSupervisorFeatures;
};

typedef struct _XSTATE_FEATURE {
    ULONG Offset;
    ULONG Size;
};

typedef union _KGDTENTRY64 {
    USHORT LimitLow;
    USHORT BaseLow;
    struct {
        UCHAR BaseMiddle;
        UCHAR Flags1;
        UCHAR Flags2;
        UCHAR BaseHigh;
    } Bytes;
    struct {
        ULONG BaseMiddle : 8;
        ULONG Type : 5;
        ULONG Dpl : 2;
        ULONG Present : 1;
        ULONG LimitHigh : 4;
        ULONG System : 1;
        ULONG LongMode : 1;
        ULONG DefaultBig : 1;
        ULONG Granularity : 1;
        ULONG BaseHigh : 8;
    } Bits;
    ULONG BaseUpper;
    ULONG MustBeZero;
    LONG64 DataLow;
    LONG64 DataHigh;
};

typedef union _KIDTENTRY64 {
    USHORT OffsetLow;
    USHORT Selector;
    USHORT IstIndex : 3;
    USHORT Reserved0 : 5;
    USHORT Type : 5;
    USHORT Dpl : 2;
    USHORT Present : 1;
    USHORT OffsetMiddle;
    ULONG OffsetHigh;
    ULONG Reserved1;
    ULONG64 Alignment;
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

typedef enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS {
    JOB_OBJECT_IO_RATE_CONTROL_ENABLE = 1,
    JOB_OBJECT_IO_RATE_CONTROL_STANDALONE_VOLUME = 2,
    JOB_OBJECT_IO_RATE_CONTROL_FORCE_UNIT_ACCESS_ALL = 4,
    JOB_OBJECT_IO_RATE_CONTROL_FORCE_UNIT_ACCESS_ON_SOFT_CAP = 8,
    JOB_OBJECT_IO_RATE_CONTROL_VALID_FLAGS = 15
};

typedef enum JOB_OBJECT_NET_RATE_CONTROL_FLAGS {
    JOB_OBJECT_NET_RATE_CONTROL_ENABLE = 1,
    JOB_OBJECT_NET_RATE_CONTROL_MAX_BANDWIDTH = 2,
    JOB_OBJECT_NET_RATE_CONTROL_DSCP_TAG = 4,
    JOB_OBJECT_NET_RATE_CONTROL_VALID_FLAGS = 7
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

typedef enum PS_CREATE_STATE {
    PsCreateInitialState = 0,
    PsCreateFailOnFileOpen = 1,
    PsCreateFailOnSectionCreate = 2,
    PsCreateFailExeFormat = 3,
    PsCreateFailMachineMismatch = 4,
    PsCreateFailExeName = 5,
    PsCreateSuccess = 6,
    PsCreateMaximumStates = 7
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

typedef enum SE_WS_APPX_SIGNATURE_ORIGIN {
    SE_WS_APPX_SIGNATURE_ORIGIN_NOT_VALIDATED = 0,
    SE_WS_APPX_SIGNATURE_ORIGIN_UNKNOWN = 1,
    SE_WS_APPX_SIGNATURE_ORIGIN_APPSTORE = 2,
    SE_WS_APPX_SIGNATURE_ORIGIN_WINDOWS = 3,
    SE_WS_APPX_SIGNATURE_ORIGIN_ENTERPRISE = 4
};

typedef enum _ALTERNATIVE_ARCHITECTURE_TYPE {
    StandardDesign = 0,
    NEC98x86 = 1,
    EndAlternatives = 2
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

typedef enum _IO_PRIORITY_HINT {
    IoPriorityVeryLow = 0,
    IoPriorityLow = 1,
    IoPriorityNormal = 2,
    IoPriorityHigh = 3,
    IoPriorityCritical = 4,
    MaxIoPriorityTypes = 5
};

typedef enum _IO_RATE_CONTROL_TYPE {
    IoRateControlTypeCapMin = 0,
    IoRateControlTypeIopsCap = 0,
    IoRateControlTypeBandwidthCap = 1,
    IoRateControlTypeTimePercentCap = 2,
    IoRateControlTypeCapMax = 2,
    IoRateControlTypeReservationMin = 3,
    IoRateControlTypeIopsReservation = 3,
    IoRateControlTypeBandwidthReservation = 4,
    IoRateControlTypeTimePercentReservation = 5,
    IoRateControlTypeReservationMax = 5,
    IoRateControlTypeCriticalReservationMin = 6,
    IoRateControlTypeIopsCriticalReservation = 6,
    IoRateControlTypeBandwidthCriticalReservation = 7,
    IoRateControlTypeTimePercentCriticalReservation = 8,
    IoRateControlTypeCriticalReservationMax = 8,
    IoRateControlTypeSoftCapMin = 9,
    IoRateControlTypeIopsSoftCap = 9,
    IoRateControlTypeBandwidthSoftCap = 10,
    IoRateControlTypeTimePercentSoftCap = 11,
    IoRateControlTypeSoftCapMax = 11,
    IoRateControlTypeLimitExcessNotifyMin = 12,
    IoRateControlTypeIopsLimitExcessNotify = 12,
    IoRateControlTypeBandwidthLimitExcessNotify = 13,
    IoRateControlTypeTimePercentLimitExcessNotify = 14,
    IoRateControlTypeLimitExcessNotifyMax = 14,
    IoRateControlTypeMax = 15
};

typedef enum _IRQ_PRIORITY {
    IrqPriorityUndefined = 0,
    IrqPriorityLow = 1,
    IrqPriorityNormal = 2,
    IrqPriorityHigh = 3
};

typedef enum _JOBOBJECTINFOCLASS {
    JobObjectBasicAccountingInformation = 1,
    JobObjectBasicLimitInformation = 2,
    JobObjectBasicProcessIdList = 3,
    JobObjectBasicUIRestrictions = 4,
    JobObjectSecurityLimitInformation = 5,
    JobObjectEndOfJobTimeInformation = 6,
    JobObjectAssociateCompletionPortInformation = 7,
    JobObjectBasicAndIoAccountingInformation = 8,
    JobObjectExtendedLimitInformation = 9,
    JobObjectJobSetInformation = 10,
    JobObjectGroupInformation = 11,
    JobObjectNotificationLimitInformation = 12,
    JobObjectLimitViolationInformation = 13,
    JobObjectGroupInformationEx = 14,
    JobObjectCpuRateControlInformation = 15,
    JobObjectCompletionFilter = 16,
    JobObjectCompletionCounter = 17,
    JobObjectFreezeInformation = 18,
    JobObjectExtendedAccountingInformation = 19,
    JobObjectWakeInformation = 20,
    JobObjectBackgroundInformation = 21,
    JobObjectSchedulingRankBiasInformation = 22,
    JobObjectTimerVirtualizationInformation = 23,
    JobObjectCycleTimeNotification = 24,
    JobObjectClearEvent = 25,
    JobObjectInterferenceInformation = 26,
    JobObjectClearPeakJobMemoryUsed = 27,
    JobObjectMemoryUsageInformation = 28,
    JobObjectSharedCommit = 29,
    JobObjectContainerId = 30,
    JobObjectIoRateControlInformation = 31,
    JobObjectSiloRootDirectory = 37,
    JobObjectServerSiloBasicInformation = 38,
    JobObjectServerSiloUserSharedData = 39,
    JobObjectServerSiloInitialize = 40,
    JobObjectServerSiloRunningState = 41,
    JobObjectIoAttribution = 42,
    JobObjectMemoryPartitionInformation = 43,
    JobObjectContainerTelemetryId = 44,
    JobObjectSiloSystemRoot = 45,
    JobObjectEnergyTrackingState = 46,
    JobObjectThreadImpersonationInformation = 47,
    JobObjectReserved1Information = 18,
    JobObjectReserved2Information = 19,
    JobObjectReserved3Information = 20,
    JobObjectReserved4Information = 21,
    JobObjectReserved5Information = 22,
    JobObjectReserved6Information = 23,
    JobObjectReserved7Information = 24,
    JobObjectReserved8Information = 25,
    JobObjectReserved9Information = 26,
    JobObjectReserved10Information = 27,
    JobObjectReserved11Information = 28,
    JobObjectReserved12Information = 29,
    JobObjectReserved13Information = 30,
    JobObjectReserved14Information = 31,
    JobObjectNetRateControlInformation = 32,
    JobObjectNotificationLimitInformation2 = 33,
    JobObjectLimitViolationInformation2 = 34,
    JobObjectCreateSilo = 35,
    JobObjectSiloBasicInformation = 36,
    JobObjectReserved15Information = 37,
    JobObjectReserved16Information = 38,
    JobObjectReserved17Information = 39,
    JobObjectReserved18Information = 40,
    JobObjectReserved19Information = 41,
    JobObjectReserved20Information = 42,
    JobObjectReserved21Information = 43,
    JobObjectReserved22Information = 44,
    JobObjectReserved23Information = 45,
    JobObjectReserved24Information = 46,
    JobObjectReserved25Information = 47,
    MaxJobObjectInfoClass = 48
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

typedef enum _NT_PRODUCT_TYPE {
    NtProductWinNt = 1,
    NtProductLanManNt = 2,
    NtProductServer = 3
};

typedef enum _OB_OPEN_REASON {
    ObCreateHandle = 0,
    ObOpenHandle = 1,
    ObDuplicateHandle = 2,
    ObInheritHandle = 3,
    ObMaxOpenReason = 4
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

typedef enum _PS_ATTRIBUTE_NUM {
    PsAttributeParentProcess = 0,
    PsAttributeDebugObject = 1,
    PsAttributeToken = 2,
    PsAttributeClientId = 3,
    PsAttributeTebAddress = 4,
    PsAttributeImageName = 5,
    PsAttributeImageInfo = 6,
    PsAttributeMemoryReserve = 7,
    PsAttributePriorityClass = 8,
    PsAttributeErrorMode = 9,
    PsAttributeStdHandleInfo = 10,
    PsAttributeHandleList = 11,
    PsAttributeGroupAffinity = 12,
    PsAttributePreferredNode = 13,
    PsAttributeIdealProcessor = 14,
    PsAttributeUmsThread = 15,
    PsAttributeMitigationOptions = 16,
    PsAttributeProtectionLevel = 17,
    PsAttributeSecureProcess = 18,
    PsAttributeJobList = 19,
    PsAttributeChildProcessPolicy = 20,
    PsAttributeAllApplicationPackagesPolicy = 21,
    PsAttributeWin32kFilter = 22,
    PsAttributeSafeOpenPromptOriginClaim = 23,
    PsAttributeBnoIsolation = 24,
    PsAttributeDesktopAppPolicy = 25,
    PsAttributeChpe = 26,
    PsAttributeMax = 27
};

typedef enum _PS_MITIGATION_OPTION {
    PS_MITIGATION_OPTION_NX = 0,
    PS_MITIGATION_OPTION_SEHOP = 1,
    PS_MITIGATION_OPTION_FORCE_RELOCATE_IMAGES = 2,
    PS_MITIGATION_OPTION_HEAP_TERMINATE = 3,
    PS_MITIGATION_OPTION_BOTTOM_UP_ASLR = 4,
    PS_MITIGATION_OPTION_HIGH_ENTROPY_ASLR = 5,
    PS_MITIGATION_OPTION_STRICT_HANDLE_CHECKS = 6,
    PS_MITIGATION_OPTION_WIN32K_SYSTEM_CALL_DISABLE = 7,
    PS_MITIGATION_OPTION_EXTENSION_POINT_DISABLE = 8,
    PS_MITIGATION_OPTION_PROHIBIT_DYNAMIC_CODE = 9,
    PS_MITIGATION_OPTION_CONTROL_FLOW_GUARD = 10,
    PS_MITIGATION_OPTION_BLOCK_NON_MICROSOFT_BINARIES = 11,
    PS_MITIGATION_OPTION_FONT_DISABLE = 12,
    PS_MITIGATION_OPTION_IMAGE_LOAD_NO_REMOTE = 13,
    PS_MITIGATION_OPTION_IMAGE_LOAD_NO_LOW_LABEL = 14,
    PS_MITIGATION_OPTION_IMAGE_LOAD_PREFER_SYSTEM32 = 15,
    PS_MITIGATION_OPTION_RETURN_FLOW_GUARD = 16,
    PS_MITIGATION_OPTION_LOADER_INTEGRITY_CONTINUITY = 17,
    PS_MITIGATION_OPTION_STRICT_CONTROL_FLOW_GUARD = 18,
    PS_MITIGATION_OPTION_RESTRICT_SET_THREAD_CONTEXT = 19,
    PS_MITIGATION_OPTION_ROP_STACKPIVOT = 20,
    PS_MITIGATION_OPTION_ROP_CALLER_CHECK = 21,
    PS_MITIGATION_OPTION_ROP_SIMEXEC = 22,
    PS_MITIGATION_OPTION_EXPORT_ADDRESS_FILTER = 23,
    PS_MITIGATION_OPTION_EXPORT_ADDRESS_FILTER_PLUS = 24,
    PS_MITIGATION_OPTION_RESTRICT_CHILD_PROCESS_CREATION = 25,
    PS_MITIGATION_OPTION_IMPORT_ADDRESS_FILTER = 26,
    PS_MITIGATION_OPTION_MODULE_TAMPERING_PROTECTION = 27,
    PS_MITIGATION_OPTION_RESTRICT_INDIRECT_BRANCH_PREDICTION = 28,
    PS_MITIGATION_OPTION_SPECULATIVE_STORE_BYPASS_DISABLE = 29,
    PS_MITIGATION_OPTION_ALLOW_DOWNGRADE_DYNAMIC_CODE_POLICY = 30,
    PS_MITIGATION_OPTION_CET_SHADOW_STACKS = 31
};

typedef enum _PS_PROTECTED_SIGNER {
    PsProtectedSignerNone = 0,
    PsProtectedSignerAuthenticode = 1,
    PsProtectedSignerCodeGen = 2,
    PsProtectedSignerAntimalware = 3,
    PsProtectedSignerLsa = 4,
    PsProtectedSignerWindows = 5,
    PsProtectedSignerWinTcb = 6,
    PsProtectedSignerWinSystem = 7,
    PsProtectedSignerApp = 8,
    PsProtectedSignerMax = 9
};

typedef enum _PS_PROTECTED_TYPE {
    PsProtectedTypeNone = 0,
    PsProtectedTypeProtectedLight = 1,
    PsProtectedTypeProtected = 2,
    PsProtectedTypeMax = 3
};

typedef enum _PS_STD_HANDLE_STATE {
    PsNeverDuplicate = 0,
    PsRequestDuplicate = 1,
    PsAlwaysDuplicate = 2,
    PsMaxStdHandleStates = 3
};

typedef enum _PS_WAKE_REASON {
    PsWakeReasonUser = 0,
    PsWakeReasonExecutionRequired = 1,
    PsWakeReasonKernel = 2,
    PsWakeReasonInstrumentation = 3,
    PsWakeReasonPreserveProcess = 4,
    PsWakeReasonActivityReference = 5,
    PsWakeReasonWorkOnBehalf = 6,
    PsMaxWakeReasons = 7
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

typedef enum _SECURITY_OPERATION_CODE {
    SetSecurityDescriptor = 0,
    QuerySecurityDescriptor = 1,
    DeleteSecurityDescriptor = 2,
    AssignSecurityDescriptor = 3
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

typedef enum _SYSTEM_PROCESS_CLASSIFICATION {
    SystemProcessClassificationNormal = 0,
    SystemProcessClassificationSystem = 1,
    SystemProcessClassificationSecureSystem = 2,
    SystemProcessClassificationMemCompression = 3,
    SystemProcessClassificationRegistry = 4,
    SystemProcessClassificationMaximum = 5
};

typedef enum _TP_CALLBACK_PRIORITY {
    TP_CALLBACK_PRIORITY_HIGH = 0,
    TP_CALLBACK_PRIORITY_NORMAL = 1,
    TP_CALLBACK_PRIORITY_LOW = 2,
    TP_CALLBACK_PRIORITY_INVALID = 3,
    TP_CALLBACK_PRIORITY_COUNT = 3
};

typedef enum _TRACE_INFORMATION_CLASS {
    TraceIdClass = 0,
    TraceHandleClass = 1,
    TraceEnableFlagsClass = 2,
    TraceEnableLevelClass = 3,
    GlobalLoggerHandleClass = 4,
    EventLoggerHandleClass = 5,
    AllLoggerHandlesClass = 6,
    TraceHandleByNameClass = 7,
    LoggerEventsLostClass = 8,
    TraceSessionSettingsClass = 9,
    LoggerEventsLoggedClass = 10,
    DiskIoNotifyRoutinesClass = 11,
    TraceInformationClassReserved1 = 12,
    AllPossibleNotifyRoutinesClass = 12,
    FltIoNotifyRoutinesClass = 13,
    TraceInformationClassReserved2 = 14,
    WdfNotifyRoutinesClass = 15,
    MaxTraceInformationClass = 16
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

_IMPORT_DESCRIPTOR_CSRSRV;
_IMPORT_DESCRIPTOR_ntdll;
_NULL_IMPORT_DESCRIPTOR;
_guard_check_icall_fptr;
_guard_dispatch_icall_fptr;
_guard_fids_table;
_guard_iat_table;
_imp_CsrServerInitialization;
_imp_CsrUnhandledExceptionFilter;
_imp_NtSetInformationProcess;
_imp_NtTerminateProcess;
_imp_NtTerminateThread;
_imp_RtlAllocateHeap;
_imp_RtlCaptureContext;
_imp_RtlFreeAnsiString;
_imp_RtlLookupFunctionEntry;
_imp_RtlNormalizeProcessParams;
_imp_RtlSetHeapInformation;
_imp_RtlSetUnhandledExceptionFilter;
_imp_RtlUnhandledExceptionFilter;
_imp_RtlUnicodeStringToAnsiString;
_imp_RtlVirtualUnwind;
_imp_isspace;
_security_cookie;
_security_cookie_complement;
load_config_used;
CSRSRV_NULL_THUNK_DATA;
ntdll_NULL_THUNK_DATA;

NtProcessStartup();
NtProcessStartup_AfterSecurityCookieInitialized();
NtTerminateProcess();
RtlCaptureContext();
RtlLookupFunctionEntry();
RtlUnhandledExceptionFilter();
RtlVirtualUnwind();
_report_gsfailure();
_security_check_cookie();
_security_init_cookie();
_security_init_cookie_ex();
guard_check_icall_nop();
guard_dispatch_icall_nop();
main();
