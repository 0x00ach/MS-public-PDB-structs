struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct NDIS_REFCOUNT_HANDLE__;
struct SCOPE_ID;
struct _ACCESS_STATE;
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
struct _NAMED_PIPE_CREATE_PARAMETERS;
struct _NDIS_OBJECT_HEADER;
struct _NDIS_PACKET;
struct _NDIS_PACKET_PRIVATE;
struct _NDIS_SPIN_LOCK;
struct _NDIS_SWITCH_FORWARDING_DESTINATION_ARRAY;
struct _NDIS_SWITCH_PORT_DESTINATION;
struct _NET_BUFFER;
struct _NET_BUFFER_LIST;
struct _NET_BUFFER_LIST_CONTEXT;
struct _NET_BUFFER_LIST_TIMESTAMP;
struct _NET_BUFFER_SHARED_MEMORY;
struct _NPAGED_LOOKASIDE_LIST;
struct _NT_TIB;
struct _NVSP_ROUTING_DESTINATION_LIST;
struct _NVSP_ROUTING_DESTINATION_PORT;
struct _OWNER_ENTRY;
struct _PAGED_LOOKASIDE_LIST;
struct _POWER_SEQUENCE;
struct _PRIVILEGE_SET;
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
struct _TXN_PARAMETER_BLOCK;
struct _UNICODE_STRING;
struct _VMS_EXTENSION_STACK_DATA;
struct _VMS_MINIPORT_EXT;
struct _VMS_NBL_ROUTING_CONTEXT;
struct _VMS_OBJ_EXT;
struct _VMS_OBJ_GENERIC_PROPERTY;
struct _VMS_OBJ_HDR;
struct _VMS_OBJ_MEMBER_NIC_HEADER;
struct _VMS_OBJ_NIC;
struct _VMS_OBJ_NIC_PER_PROC_PACKET_REF;
struct _VMS_OBJ_PORT;
struct _VMS_OBJ_SWITCH;
struct _VMS_PACKET_EXT_HEADER;
struct _VMS_PORT_ISOLATION_PROPERTY;
struct _VMS_PORT_SECURITY_PROPERTY;
struct _VMS_PORT_TYPE;
struct _VMS_PORT_VLAN_INFO;
struct _VMS_PROTOCOL_EXT;
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
struct in6_addr;
struct sockaddr_in6;

union _KGDTENTRY64;
union _KIDTENTRY64;
union _LARGE_INTEGER;
union _NDIS_SWITCH_FORWARDING_DETAIL_NET_BUFFER_LIST_INFO;
union _NET_BUFFER_HEADER;
union _NET_BUFFER_LIST_HEADER;
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
enum _DOT11_PHY_TYPE;
enum _EVENT_TYPE;
enum _EXCEPTION_DISPOSITION;
enum _FILE_INFORMATION_CLASS;
enum _FSINFOCLASS;
enum _INTERFACE_TYPE;
enum _INTERLOCKED_RESULT;
enum _IO_ALLOCATION_ACTION;
enum _IRQ_DEVICE_POLICY;
enum _IRQ_PRIORITY;
enum _KINTERRUPT_POLARITY;
enum _MEMORY_CACHING_TYPE;
enum _MEMORY_CACHING_TYPE_ORIG;
enum _MODE;
enum _NDIS_802_11_WEP_STATUS;
enum _NDIS_NET_BUFFER_LIST_INFO;
enum _NDIS_PER_PACKET_INFO;
enum _NDIS_PROCESSOR_VENDOR;
enum _NDIS_SWITCH_NIC_STATE;
enum _NDIS_SWITCH_PORT_STATE;
enum _POOL_TYPE;
enum _POWER_STATE_TYPE;
enum _REG_NOTIFY_CLASS;
enum _SECURITY_IMPERSONATION_LEVEL;
enum _SYSTEM_POWER_STATE;
enum _USER_ACTIVITY_PRESENCE;
enum _VMS_EXT_FILTER_STATE;
enum _VMS_EXT_MINIPORT_STATE;
enum _VMS_EXT_PROTOCOL_STATE;
enum _VMS_NIC_CONNECT_STATE;
enum _VMS_NIC_TYPE;
enum _VMS_PORT_ISOLATION_MODE;
enum _VMS_PVLAN_MODE;
enum _VMS_VLAN_MODE;
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

typedef struct NDIS_REFCOUNT_HANDLE__ {
    LONG unused;
};

typedef struct SCOPE_ID {
    ULONG Zone : 28;
    ULONG Level : 4;
    ULONG Value;
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

typedef struct _NDIS_OBJECT_HEADER {
    UCHAR Type;
    UCHAR Revision;
    USHORT Size;
};

typedef struct _NDIS_PACKET {
    struct _NDIS_PACKET_PRIVATE Private;
    UCHAR MiniportReserved[16];
    UCHAR WrapperReserved[16];
    UCHAR MiniportReservedEx[24];
    UCHAR WrapperReservedEx[8];
    UCHAR MacReserved[32];
    ULONG64 Reserved[2];
    UCHAR ProtocolReserved[1];
};

typedef struct _NDIS_PACKET_PRIVATE {
    ULONG PhysicalCount;
    ULONG TotalLength;
    struct _MDL *Head;
    struct _MDL *Tail;
    PVOID Pool;
    ULONG Count;
    ULONG Flags;
    UCHAR ValidCounts;
    UCHAR NdisPacketFlags;
    USHORT NdisPacketOobOffset;
};

typedef struct _NDIS_SPIN_LOCK {
    ULONG64 SpinLock;
    UCHAR OldIrql;
};

typedef struct _NDIS_SWITCH_FORWARDING_DESTINATION_ARRAY {
    struct _NDIS_OBJECT_HEADER Header;
    ULONG ElementSize;
    ULONG NumElements;
    ULONG NumDestinations;
    PVOID FirstElement;
};

typedef struct _NDIS_SWITCH_PORT_DESTINATION {
    ULONG PortId;
    USHORT NicIndex;
    USHORT IsExcluded : 1;
    USHORT PreserveVLAN : 1;
    USHORT PreservePriority : 1;
    USHORT Reserved : 13;
};

typedef struct _NET_BUFFER {
    struct _NET_BUFFER *Next;
    struct _MDL *CurrentMdl;
    ULONG CurrentMdlOffset;
    ULONG DataLength;
    ULONG64 stDataLength;
    struct _MDL *MdlChain;
    ULONG DataOffset;
    union _SLIST_HEADER Link;
    union _NET_BUFFER_HEADER NetBufferHeader;
    USHORT ChecksumBias;
    USHORT Reserved;
    PVOID NdisPoolHandle;
    PVOID NdisReserved[2];
    PVOID ProtocolReserved[6];
    PVOID MiniportReserved[4];
    union _LARGE_INTEGER DataPhysicalAddress;
    struct _NET_BUFFER_SHARED_MEMORY *SharedMemoryInfo;
    struct _SCATTER_GATHER_LIST *ScatterGatherList;
};

typedef struct _NET_BUFFER_LIST {
    struct _NET_BUFFER_LIST *Next;
    struct _NET_BUFFER *FirstNetBuffer;
    union _SLIST_HEADER Link;
    union _NET_BUFFER_LIST_HEADER NetBufferListHeader;
    struct _NET_BUFFER_LIST_CONTEXT *Context;
    struct _NET_BUFFER_LIST *ParentNetBufferList;
    PVOID NdisPoolHandle;
    PVOID NdisReserved[2];
    PVOID ProtocolReserved[4];
    PVOID MiniportReserved[2];
    PVOID Scratch;
    PVOID SourceHandle;
    ULONG NblFlags;
    LONG ChildRefCount;
    ULONG Flags;
    LONG Status;
    ULONG NdisReserved2;
    PVOID NetBufferListInfo[27];
};

typedef struct _NET_BUFFER_LIST_CONTEXT {
    struct _NET_BUFFER_LIST_CONTEXT *Next;
    USHORT Size;
    USHORT Offset;
    UCHAR ContextData[0];
};

typedef struct _NET_BUFFER_LIST_TIMESTAMP {
    ULONG64 Timestamp;
};

typedef struct _NET_BUFFER_SHARED_MEMORY {
    struct _NET_BUFFER_SHARED_MEMORY *NextSharedMemorySegment;
    ULONG SharedMemoryFlags;
    PVOID SharedMemoryHandle;
    ULONG SharedMemoryOffset;
    ULONG SharedMemoryLength;
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

typedef struct _NVSP_ROUTING_DESTINATION_LIST {
    UCHAR Reserved1[16];
    struct _NDIS_SWITCH_FORWARDING_DESTINATION_ARRAY DestinationArray;
};

typedef struct _NVSP_ROUTING_DESTINATION_PORT {
    struct _NDIS_SWITCH_PORT_DESTINATION DestinationPort;
    struct _VMS_OBJ_NIC *DestinationNic;
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

typedef struct _VMS_EXTENSION_STACK_DATA {
    enum _VMS_EXT_PROTOCOL_STATE ProtocolState;
    enum _VMS_EXT_MINIPORT_STATE MiniportState;
    enum _VMS_EXT_FILTER_STATE FilterState;
    PVOID ProtocolHandle;
    PVOID MiniportAdapterHandle;
    PVOID FilterHandle;
    UCHAR Reserved1[16];
    struct _UNICODE_STRING MiniportDeviceIdString;
    WCHAR MiniportDeviceIdStringBuffer[128];
    UCHAR Reserved2[1808];
};

typedef struct _VMS_MINIPORT_EXT {
    UCHAR Reserved1[24];
    PVOID MiniportHandle;
};

typedef struct _VMS_NBL_ROUTING_CONTEXT {
    UCHAR Reserved1[16];
    struct _VMS_OBJ_NIC *SourceNic;
    UCHAR Reserved2[8];
    struct _NVSP_ROUTING_DESTINATION_LIST DestinationList;
};

typedef struct _VMS_OBJ_EXT {
    PVOID ExtContext;
    UCHAR Reserved[16];
};

typedef struct _VMS_OBJ_GENERIC_PROPERTY {
    UCHAR HashEntry[24];
    struct _LIST_ENTRY PropertyListEntry;
    struct _GUID PropertyId;
    struct _GUID InstanceId;
    USHORT PropertyVersion;
    ULONG PropertySize;
    PUCHAR Property;
};

typedef struct _VMS_OBJ_HDR {
    struct _LIST_ENTRY Link;
    UCHAR Reserved1[24];
    ULONG RefCount;
    struct NDIS_REFCOUNT_HANDLE__ *RefCountTracker;
    UCHAR Reserved2[288];
    struct _UNICODE_STRING OriginalName;
    WCHAR OriginalNameBuffer[128];
    struct _UNICODE_STRING FriendlyName;
    WCHAR FriendlyNameBuffer[256];
    UCHAR Reserved4[80];
};

typedef struct _VMS_OBJ_MEMBER_NIC_HEADER {
    struct _VMS_OBJ_NIC *ParentNic;
    USHORT NicIndex;
    UCHAR Reserved1[4];
    enum _NDIS_SWITCH_NIC_STATE NdisNicState;
    UCHAR Reserved2[12];
    struct _VMS_OBJ_NIC_PER_PROC_PACKET_REF *PacketRef;
    UCHAR Reserved3[8];
    ULONG ControlMessageCount;
    struct NDIS_REFCOUNT_HANDLE__ *ControlMessageCountTracker;
    struct _UNICODE_STRING FriendlyName;
    WCHAR FriendlyNameBuffer[256];
    struct _GUID NetCfgInstanceId;
    UCHAR PermanentMacAddress[6];
    UCHAR CurrentMacAddress[6];
    ULONG MTU;
    UCHAR Reserved4[13];
};

typedef struct _VMS_OBJ_NIC {
    struct _VMS_OBJ_HDR ObjectHeader;
    struct _VMS_OBJ_MEMBER_NIC_HEADER NicHeader;
    enum _VMS_NIC_TYPE Type;
    UCHAR Reserved1[4];
    enum _VMS_NIC_CONNECT_STATE ConnectState;
    UCHAR IsRequiredExtensionMissing;
    struct _VMS_OBJ_SWITCH *ParentSwitch;
    UCHAR Reserved2[24];
    struct _VMS_OBJ_PORT *Port;
    UCHAR PermanentMacAddress[6];
    struct _UNICODE_STRING VmFriendlyName;
    WCHAR VmFriendlyNameBuffer[256];
    struct _UNICODE_STRING VmName;
    WCHAR VmNameBuffer[256];
    UCHAR Reserved3[144];
    struct _VMS_OBJ_EXT NicExt;
    UCHAR Reserved4[616];
    UCHAR MacSpoofingAllowed;
    UCHAR Reserved5[84];
    PUCHAR MulticastList;
    ULONG MulticastListSize;
    UCHAR Reserved6[500];
};

typedef struct _VMS_OBJ_NIC_PER_PROC_PACKET_REF {
    LONG64 ForwardedPacketCount;
    LONG64 RoutedPacketCount;
};

typedef struct _VMS_OBJ_PORT {
    struct _VMS_OBJ_HDR ObjectHeader;
    LONG ExtensionReferenceCount;
    struct _VMS_OBJ_SWITCH *ParentSwitch;
    UCHAR Reserved1[8];
    struct _VMS_OBJ_NIC *Nic;
    enum _NDIS_SWITCH_PORT_STATE NdisPortState;
    UCHAR Reserved2[660];
    struct _VMS_PORT_VLAN_INFO VlanInfo;
    UCHAR Reserved3[2696];
    ULONG PortId;
    UCHAR Reserved4[76];
    struct _VMS_PORT_SECURITY_PROPERTY SecurityInfo;
    UCHAR Reserved5[3224];
    CHAR PortPropertiesHashTable[40];
    UCHAR Reserved6[16];
    ULONG ProfileCount;
    struct _LIST_ENTRY ProfilelList;
    struct _VMS_PORT_ISOLATION_PROPERTY IsolationInfo;
    UCHAR Reserved7[16];
    ULONG RoutingDomainCount;
    struct _LIST_ENTRY RoutingDomainList;
    struct _GUID DefaultNicNetCfgId;
    UCHAR Reserved8[16];
    struct _VMS_PORT_TYPE PortType;
    UCHAR Reserved9[12];
    ULONG RequiredExtensionCount;
    struct _GUID *RequiredExtensionIds;
    UCHAR IsUnknownRequirementPresent;
    UCHAR Reserved10[920];
};

typedef struct _VMS_OBJ_SWITCH {
    struct _VMS_OBJ_HDR ObjectHeader;
    UCHAR Reserved1[188];
    LONG PortCount;
    struct _LIST_ENTRY PortList;
    UCHAR Reserved2[2840];
    struct _VMS_EXTENSION_STACK_DATA ExtensionStack;
    UCHAR Reserved3[2088];
    ULONG IovPreferred;
    UCHAR Reserved4[716];
};

typedef struct _VMS_PACKET_EXT_HEADER {
    UCHAR Reserved1[16];
    struct _VMS_NBL_ROUTING_CONTEXT *RoutingContext;
};

typedef struct _VMS_PORT_ISOLATION_PROPERTY {
    enum _VMS_PORT_ISOLATION_MODE IsolationMode;
    UCHAR AllowUntaggedTraffic;
    ULONG DefaultIsolationId;
    UCHAR EnableMultiTenantStack;
};

typedef struct _VMS_PORT_SECURITY_PROPERTY {
    UCHAR AllowMacSpoofing;
    UCHAR EnableDhcpGuard;
    UCHAR EnableRouterGuard;
    UCHAR MonitorMode;
    UCHAR MonitorSession;
    UCHAR AllowIeeePriorityTag;
    ULONG VirtualSubnetId;
    UCHAR AllowTeaming;
    UCHAR Reserved1[262];
    ULONG StormLimit;
    ULONG DynamicIPAddressLimit;
    UCHAR Reserved;
    UCHAR EnableFixSpeed10G;
};

typedef struct _VMS_PORT_TYPE {
    ULONG Type : 16;
    ULONG Flags : 16;
};

typedef struct _VMS_PORT_VLAN_INFO {
    enum _VMS_VLAN_MODE OperationMode;
    USHORT AccessVlanId;
    USHORT NativeVlanId;
    ULONG64 PruneVlanIdArray[64];
    ULONG64 TrunkVlanIdArray[64];
    enum _VMS_PVLAN_MODE PvlanMode;
    USHORT PrimaryVlanId;
    USHORT SecondaryVlanId;
    ULONG64 SecondaryVlanIdArray[64];
    ULONG64 SupportedModes;
};

typedef struct _VMS_PROTOCOL_EXT {
    UCHAR Reserved1[83];
    PVOID ProtocolHandle;
    UCHAR Reserved2[1372];
    struct _VMS_OBJ_MEMBER_NIC_HEADER *NicIndexes[64];
    UCHAR IsTeam;
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

typedef struct in6_addr {
    union {
        UCHAR Byte[16];
        USHORT Word[8];
    } u;
};

typedef struct sockaddr_in6 {
    USHORT sin6_family;
    USHORT sin6_port;
    ULONG sin6_flowinfo;
    struct in6_addr sin6_addr;
    ULONG sin6_scope_id;
    struct SCOPE_ID sin6_scope_struct;
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

typedef union _NDIS_SWITCH_FORWARDING_DETAIL_NET_BUFFER_LIST_INFO {
    ULONG64 AsUINT64;
    ULONG NumAvailableDestinations : 16;
    ULONG SourcePortId : 16;
    ULONG SourceNicIndex : 8;
    ULONG NativeForwardingRequired : 1;
    ULONG Reserved1 : 1;
    ULONG IsPacketDataSafe : 1;
    ULONG SafePacketDataSize : 12;
    ULONG IsPacketDataUncached : 1;
    ULONG IsSafePacketDataUncached : 1;
    ULONG Reserved2 : 7;
};

typedef union _NET_BUFFER_HEADER {
    struct _NET_BUFFER *Next;
    struct _MDL *CurrentMdl;
    ULONG CurrentMdlOffset;
    ULONG DataLength;
    ULONG64 stDataLength;
    struct _MDL *MdlChain;
    ULONG DataOffset;
    union _SLIST_HEADER Link;
};

typedef union _NET_BUFFER_LIST_HEADER {
    struct _NET_BUFFER_LIST *Next;
    struct _NET_BUFFER *FirstNetBuffer;
    union _SLIST_HEADER Link;
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

typedef enum _DOT11_PHY_TYPE {
    dot11_phy_type_unknown = 0,
    dot11_phy_type_any = 0,
    dot11_phy_type_fhss = 1,
    dot11_phy_type_dsss = 2,
    dot11_phy_type_irbaseband = 3,
    dot11_phy_type_ofdm = 4,
    dot11_phy_type_hrdsss = 5,
    dot11_phy_type_erp = 6,
    dot11_phy_type_ht = 7,
    dot11_phy_type_vht = 8,
    dot11_phy_type_dmg = 9,
    dot11_phy_type_he = 10,
    dot11_phy_type_IHV_start = -2147483648,
    dot11_phy_type_IHV_end = -1
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

typedef enum _NDIS_802_11_WEP_STATUS {
    Ndis802_11WEPEnabled = 0,
    Ndis802_11Encryption1Enabled = 0,
    Ndis802_11WEPDisabled = 1,
    Ndis802_11EncryptionDisabled = 1,
    Ndis802_11WEPKeyAbsent = 2,
    Ndis802_11Encryption1KeyAbsent = 2,
    Ndis802_11WEPNotSupported = 3,
    Ndis802_11EncryptionNotSupported = 3,
    Ndis802_11Encryption2Enabled = 4,
    Ndis802_11Encryption2KeyAbsent = 5,
    Ndis802_11Encryption3Enabled = 6,
    Ndis802_11Encryption3KeyAbsent = 7
};

typedef enum _NDIS_NET_BUFFER_LIST_INFO {
    TcpIpChecksumNetBufferListInfo = 0,
    TcpOffloadBytesTransferred = 0,
    IPsecOffloadV1NetBufferListInfo = 1,
    IPsecOffloadV2NetBufferListInfo = 1,
    TcpLargeSendNetBufferListInfo = 2,
    TcpReceiveNoPush = 2,
    ClassificationHandleNetBufferListInfo = 3,
    Ieee8021QNetBufferListInfo = 4,
    NetBufferListCancelId = 5,
    MediaSpecificInformation = 6,
    NetBufferListFrameType = 7,
    NetBufferListProtocolId = 7,
    NetBufferListHashValue = 8,
    NetBufferListHashInfo = 9,
    WfpNetBufferListInfo = 10,
    IPsecOffloadV2TunnelNetBufferListInfo = 11,
    IPsecOffloadV2HeaderNetBufferListInfo = 12,
    NetBufferListCorrelationId = 13,
    NetBufferListFilteringInfo = 14,
    MediaSpecificInformationEx = 15,
    NblOriginalInterfaceIfIndex = 16,
    NblReAuthWfpFlowContext = 16,
    TcpReceiveBytesTransferred = 17,
    NrtNameResolutionId = 17,
    SwitchForwardingReserved = 18,
    SwitchForwardingDetail = 19,
    VirtualSubnetInfo = 20,
    IMReserved = 21,
    TcpRecvSegCoalesceInfo = 22,
    RscTcpTimestampDelta = 23,
    TcpSendOffloadsSupplementalNetBufferListInfo = 23,
    GftOffloadInformation = 24,
    GftFlowEntryId = 25,
    NetBufferListInfoReserved3 = 26,
    MaxNetBufferListInfo = 27
};

typedef enum _NDIS_PER_PACKET_INFO {
    TcpIpChecksumPacketInfo = 0,
    IpSecPacketInfo = 1,
    TcpLargeSendPacketInfo = 2,
    ClassificationHandlePacketInfo = 3,
    NdisReserved = 4,
    ScatterGatherListPacketInfo = 5,
    Ieee8021QInfo = 6,
    OriginalPacketInfo = 7,
    PacketCancelId = 8,
    OriginalNetBufferList = 9,
    CachedNetBufferList = 10,
    ShortPacketPaddingInfo = 11,
    MaxPerPacketInfo = 12
};

typedef enum _NDIS_PROCESSOR_VENDOR {
    NdisProcessorVendorUnknown = 0,
    NdisProcessorVendorGenuinIntel = 1,
    NdisProcessorVendorGenuineIntel = 1,
    NdisProcessorVendorAuthenticAMD = 2
};

typedef enum _NDIS_SWITCH_NIC_STATE {
    NdisSwitchNicStateUnknown = 0,
    NdisSwitchNicStateCreated = 1,
    NdisSwitchNicStateConnected = 2,
    NdisSwitchNicStateDisconnected = 3,
    NdisSwitchNicStateDeleted = 4
};

typedef enum _NDIS_SWITCH_PORT_STATE {
    NdisSwitchPortStateUnknown = 0,
    NdisSwitchPortStateCreated = 1,
    NdisSwitchPortStateTeardown = 2,
    NdisSwitchPortStateDeleted = 3
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

typedef enum _VMS_EXT_FILTER_STATE {
    VmsExtFilterStateUninitialized = 0,
    VmsExtFilterStateAttached = 1,
    VmsExtFilterStatePaused = 2,
    VmsExtFilterStateRunning = 3,
    VmsExtFilterStateDetached = 4
};

typedef enum _VMS_EXT_MINIPORT_STATE {
    VmsExtMpStateUninitialized = 0,
    VmsExtMpStateInitialized = 1,
    VmsExtMpStateHalted = 2,
    VmsExtMpStateRunning = 3,
    VmsExtMpStatePaused = 4,
    VmsExtMpStateInitializeFailed = 5
};

typedef enum _VMS_EXT_PROTOCOL_STATE {
    VmsExtPtStateUnbound = 0,
    VmsExtPtStateOpening = 1,
    VmsExtPtStatePaused = 2,
    VmsExtPtStateRunning = 3,
    VmsExtPtStateBindAdapterFailed = 4,
    VmsExtPtStateNetEventBindFailed = 5
};

typedef enum _VMS_NIC_CONNECT_STATE {
    VmsNicConnectStateUnknown = 0,
    VmsNicConnectStateConnected = 1,
    VmsNicConnectStateDisconnected = 2
};

typedef enum _VMS_NIC_TYPE {
    VmsNicUnknown = 0,
    VmsNicMiniport = 1,
    VmsNicProtocol = 2,
    VmsNicVirtualMachine = 3,
    VmsNicDirectIo = 4,
    VmsNicExtDefault = 5,
    VmsNicTeam = 6,
    VmsNicMax = 7
};

typedef enum _VMS_PORT_ISOLATION_MODE {
    VmsPortIsolationModeNone = 0,
    VmsPortIsolationModeNativeVirtualSubnet = 1,
    VmsPortIsolationModeExternalVirtualSubnet = 2,
    VmsPortIsolationModeVlan = 3,
    VmsPortIsolationModeMax = 4
};

typedef enum _VMS_PVLAN_MODE {
    VmsPvlanModeUndefined = 0,
    VmsPvlanModeIsolated = 1,
    VmsPvlanModeCommunity = 2,
    VmsPvlanModePromiscuous = 3
};

typedef enum _VMS_VLAN_MODE {
    VmsVlanModeUnknown = 0,
    VmsVlanModeAccess = 1,
    VmsVlanModeTrunk = 2,
    VmsVlanModePrivate = 3,
    VmsVlanModeMax = 4
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

ActivityStart;
ActivityStop;
ActivityTransfer;
AggregatorCreatedInfo;
BannedIpCleanupTimer;
BannedIpPairsTable;
BucketClassString;
EMBEDDED_TEAMING_LOOP_BACK_PACKET;
EMBEDDED_TEAMING_TCP_OFFLOAD_SYNC_FAILED;
EMBEDDED_TEAMING_TCP_OFFLOAD_SYNC_SUCCEEDED;
GUID_NDIS_SWITCH_MICROSOFT_VENDOR_ID;
GUID_NDIS_SWITCH_PORT_PROPERTY_PROFILE_ID_DEFAULT_EXTERNAL_NIC;
HOST_VNIC_CLOSE_NDK_ADAPTER_FAILED;
HOST_VNIC_NDK_OID;
HOST_VNIC_NDK_PNP_FAILED;
HOST_VNIC_NDK_PNP_SUCCESSFUL;
HOST_VNIC_NDK_REQUEST_RDMA_FAILURE;
HOST_VNIC_OPEN_NDK_ADAPTER_FAILED;
IPsecGlobalBannedIPPairsRWLock;
IPsecGlobalSadbRWLock;
IncomingMessageHandlers;
InitializedBannedIpCleanup;
InitializingTNicInfo;
IoFileObjectType;
KdDebuggerEnabled;
KdDebuggerNotPresent;
LACPChurnDetectionInfo;
LACPMuxMcTransitionInfo;
LACPPeriodicTrMcTransitionInfo;
LACPRcvMcTransitionInfo;
LACPSelectAggrInfo;
LACPUnselectAggrInfo;
LBAlgoOperations;
LacpDeinitingInfo;
LacpInitingInfo;
LbAlgoConfigToLbAlgo;
LbfoGlobal;
MICROSOFT_VMSWITCH_PROVIDER;
MICROSOFT_VMSWITCH_PROVIDER_Context;
MemberAggrChangeInfo;
MemberCreatedInfo;
MemberTeamedInfo;
MemberUnteamedInfo;
Microsoft_Windows_Hyper_V_VmSwitchEnableBits;
Microsoft_Windows_Hyper_V_VmSwitchKeywords;
Microsoft_Windows_Hyper_V_VmSwitchLevels;
Microsoft_Windows_Networking_CorrelationEnabled;
Microsoft_Windows_Networking_CorrelationHandle;
Microsoft_Windows_Networking_CorrelationId;
Microsoft_Windows_Networking_CorrelationTraceActivityPayload;
Microsoft_Windows_Networking_ProviderId;
NDK_UPDATE_VPORT_FAILURE;
NPI_MS_VMSWITCH_MODULEID;
NPI_PKTCAP_INTERFACE_ID;
NPI_PKTMON_INTERFACE_ID;
NvlibMaxHeaderCount;
OffloadSADBHandleLookup;
OffloadSADBIpSpiLookup;
OffloadSADBPortLookup;
PD_DATA_PATH_MODE_FAILED;
PktCapClientDispatch;
PktCapClientNotify;
PktCapClientNpiModuleId;
PktMon;
PktMonClientDispatch;
PktMonClientNotify;
QosgBoundaryPeriod;
QosgEtwDispatchTable;
QosgInitializedModules;
QosgLastSendBoundary;
QosgNblCadLookasideList;
QosgRandomValue;
QosgTimerTable;
ROUTING_DOMAIN_VLAN_IOV_FAILED;
ReceivedLACPDUInfo;
RemovingAggregatorInfo;
RemovingTeamNicInfo;
SEND_NDK_PNP_EVENT_TO_ALL_MINIPORTS;
SETUP_PD_ACCESS_FAILED;
SWITCH_PD_ENABLE_FAILED;
SYS_EVENT_CRITICAL_OID_FAILURE;
SavedStateToProtocolMapping;
StartingConnectTimerInfo;
StoppingToUseMemberInfo;
TNicDefaultAggChangedInfo;
TRUNK_VLAN_IOV_FAILED;
TeamingModeOperations;
TraceLoggingMetadata;
TraceLoggingMetadataEnd;
UsingMemberInfo;
VFP_EXTENSION_GUID;
VMNIC_CONTROL_ALLOW_REFERENCE_FAILURE;
VMNIC_DATAPATH_ALLOW_REFERENCE_FAILURE;
VMNIC_NDK_REQUEST_RDMA_FAILURE;
VMS_ACTIVITY_GUID;
VMS_PORT_POLICY_ACL_SETTINGS_GUID;
VMS_PORT_POLICY_BANDWIDTH_SETTINGS_GUID;
VMS_PORT_POLICY_EXTENDED_ACL_SETTINGS_GUID;
VMS_PORT_POLICY_ISOLATION_SETTINGS_GUID;
VMS_PORT_POLICY_OFFLOAD_SETTINGS_GUID;
VMS_PORT_POLICY_PROFILE_SETTINGS_GUID;
VMS_PORT_POLICY_QUEUE_PLAN_SETTINGS_GUID;
VMS_PORT_POLICY_RDMA_SETTINGS_GUID;
VMS_PORT_POLICY_ROUTING_DOMAIN_SETTINGS_GUID;
VMS_PORT_POLICY_SECURITY_SETTINGS_GUID;
VMS_PORT_POLICY_TEAM_MAPPING_SETTINGS_GUID;
VMS_PORT_POLICY_VLAN_SETTINGS_GUID;
VMS_SWITCH_FEATURE_STATUS_BANDWIDTH_GUID;
VMS_SWITCH_FEATURE_STATUS_HARDWARE_GUID;
VMS_SWITCH_FEATURE_STATUS_PERFORMANCE_GUID;
VMS_SWITCH_FEATURE_STATUS_ROUTING_MODES_GUID;
VMS_SWITCH_POLICY_BANDWIDTH_SETTINGS_GUID;
VMS_SWITCH_POLICY_NIC_TEAMING_SETTINGS_GUID;
VMS_SWITCH_POLICY_OFFLOAD_SETTINGS_GUID;
VMS_SWITCH_POLICY_PERFORMANCE_SETTINGS_GUID;
VMS_VMNIC_CHANNEL_TYPE_GUID;
VMS_VMNIC_ETHER_CHANNEL_TYPE_GUID;
VMS_VMNIC_MBB_CDMA_CHANNEL_TYPE_GUID;
VMS_VMNIC_MBB_GSM_CHANNEL_TYPE_GUID;
VMS_VMNIC_PPP_CHANNEL_TYPE_GUID;
VMS_VMNIC_WIFI_CHANNEL_TYPE_GUID;
VM_BANDWIDTH_RESERVATION_FAILURE;
VM_CLEAR_MAC_FILTER_OPERATION_FAILURE;
VM_CLEAR_MAC_FILTER_OPERATION_SUCCESS;
VM_CONFIG_STORE_ROOT_OPEN_FAILED;
VM_CREATE_PORT_FAILED_EXTENSIBILITY;
VM_DELETE_PORT_FAILED;
VM_DELETE_SWITCH_FAILED;
VM_EMBEDDED_TEAMING_ADD_NIC_FAILED;
VM_EMBEDDED_TEAMING_ADD_NIC_SUCCEEDED;
VM_EMBEDDED_TEAMING_NIC_REMOVED;
VM_EMBEDDED_TEAMING_TEAM_DETACHED;
VM_EMBEDDED_TEAMING_TEAM_INITIALIZATION_FAILED;
VM_EMBEDDED_TEAMING_TEAM_INITIALIZATION_SUCCEEDED;
VM_EMBEDDED_TEAMING_TEAM_PAUSE_FAILED;
VM_EMBEDDED_TEAMING_TEAM_PAUSE_SUCCEEDED;
VM_EMBEDDED_TEAMING_TEAM_PREDETACHED;
VM_EXTENDED_PORT_ACL_PKT_DROPPED;
VM_EXTENDED_PORT_ACL_POLICY_FAILED;
VM_EXTENSION_NIC_STATUS_FAILURE;
VM_FAILED_SWITCH_EXTENSION_QUERY;
VM_FAILED_TO_ENABLE_MINIPORT_NIC;
VM_FAILED_TO_INITIALIZE;
VM_FAILED_TO_INITIALIZE_MINIPORT_NIC;
VM_FAILED_TO_INITIALIZE_SWITCH;
VM_FAILED_TO_RESTORE_CONFIG_FOR_SWITCH;
VM_FAILED_TO_RESTORE_CONFIG_FOR_SWITCHPORT;
VM_FAILED_TO_STORE_CONFIG_FOR_NIC;
VM_FAILED_TO_STORE_CONFIG_FOR_SWITCH;
VM_FAILED_TO_STORE_CONFIG_FOR_SWITCHPORT;
VM_FLOW_CONFORMANCE;
VM_FLOW_CONTROL_INTERVAL;
VM_FLOW_SEND_QUEUE;
VM_IGNORE_IPSEC_OFFLOAD_CRYPTO_FAILURE_INBOUND;
VM_INVALID_SWITCH_NAME_IN_CONFIG_STORE;
VM_IPSEC_OFFLOAD_INBOUND_DROPPED;
VM_IPSEC_OFFLOAD_MUTIPLE_DESTINATION_DROPPED;
VM_IPSEC_OFFLOAD_OUTBOUND_DROPPED;
VM_IPSEC_SA_OFFLOAD_FAILURE;
VM_LINE_BUFFER_SAMPLE;
VM_LINE_CONTROL_INTERVAL;
VM_MAC_ADDRESS_CONFIG_OVERRIDDEN;
VM_MAC_ADDRESS_CONFIG_PREVENTED;
VM_MAC_ADDRESS_RELEARNED;
VM_MAC_ADDRESS_RELEARN_PREVENTED;
VM_MAC_INVALID_CONFIGURED_MAC_ADDRESS;
VM_MEDIA_CONNECTED;
VM_MEDIA_DISCONNECTED;
VM_MINIPORT_CONNECTED;
VM_MINIPORT_DISCONNECTED;
VM_MINIPORT_RESTART;
VM_MINIPORT_SUCCESSFULLY_ENABLED;
VM_MINIPORT_SUCCESSFULLY_INITIALIZED;
VM_MOVE_MAC_FILTER_OPERATION_FAILURE;
VM_MOVE_MAC_FILTER_OPERATION_SUCCESS;
VM_NBL_DELIVER;
VM_NBL_EXTENSION_DROP;
VM_NBL_INCOMING_DROP;
VM_NBL_OUTGOING_DROP;
VM_NBL_RECEIVE;
VM_NBL_ROUTE;
VM_NIC_ALLOCATE_VF_FAILED;
VM_NIC_CONNECT_FAILED;
VM_NIC_CONNECT_FAILED_EXTENSIBILITY;
VM_NIC_CONNECT_SUCCESS;
VM_NIC_DISCONNECT_FAILED;
VM_NIC_DISCONNECT_FAILURE;
VM_NIC_DISCONNECT_SUCCESS;
VM_NIC_NON_OPERATIONAL;
VM_NIC_OPERATIONAL;
VM_NIC_OPERATION_FAILED;
VM_NIC_OPERATION_FAILED_DEBUG;
VM_NIC_OPERATION_SUCCEEDED;
VM_NIC_PROTOCOL_VERSION_MISMATCH;
VM_NIC_PROTOCOL_VERSION_NEGOTIATION_SUCCESS;
VM_NIC_RESTORE_PROPERTY_NOT_HANDLED;
VM_NIC_RSC_SUBOPTIMAL_CONFIG_WARNING;
VM_NIC_STATUS_SEND;
VM_NIC_TEAM_CONFIGURATION;
VM_NIC_TEAM_MEMBER_CONNECT;
VM_NIC_TEAM_MEMBER_DISCONNECT;
VM_PD_BUFFER_DELIVER;
VM_PD_BUFFER_RECEIVE;
VM_PD_BUFFER_ROUTE;
VM_PHYSICAL_NIC_GET_DEVICE_VLANID_FAILED;
VM_PHYSICAL_NIC_GET_STORED_VLANID_FAILED;
VM_PORT_ACL_PKT_DROPPED;
VM_PORT_ACL_POLICY_FAILED;
VM_PORT_ACL_POLICY_SUCCESS;
VM_PORT_BANDWIDTH_POLICY_FAILED;
VM_PORT_BANDWIDTH_POLICY_SUCCESS;
VM_PORT_CREATED;
VM_PORT_CREATED_INT_EXT;
VM_PORT_CREATE_FAILED;
VM_PORT_DELETE_COMPLETE;
VM_PORT_DELETE_ISOLATION_FAILED;
VM_PORT_GET_RDMA_POLICY_FAILED;
VM_PORT_INFO;
VM_PORT_IOV_EXTENSION_REVOKE_VF;
VM_PORT_IOV_MAC_SPOOFING_NOT_SUPPORTED;
VM_PORT_IP_SPOOF_PKT_DROPPED;
VM_PORT_ISOLATION_QUERY;
VM_PORT_ISOLATION_QUERY_DEBUG;
VM_PORT_OFFLOAD_POLICY_FAILED;
VM_PORT_OPERATION_FAILED;
VM_PORT_OPERATION_FAILED_DEBUG;
VM_PORT_POLICY_FAILED_DEBUG;
VM_PORT_POLICY_FAILED_EXTENSION;
VM_PORT_POLICY_FAILED_SYSTEM;
VM_PORT_POLICY_SUCCESS;
VM_PORT_SECURITY_POLICY_FAILED;
VM_PORT_SECURITY_POLICY_SUCCESS;
VM_PORT_SET_IP_SPOOFING_INFO_FAILED;
VM_PORT_SET_RDMA_POLICY_FAILED;
VM_PORT_SET_RDMA_POLICY_SUCCEEDED;
VM_PORT_SET_VLAN_INFO_FAILED;
VM_PORT_SUCCESSFULLY_DELETED;
VM_PORT_VALIDATE_ISOLATION_FAILED;
VM_PORT_VALIDATE_ROUTING_DOMAIN_FAILED;
VM_PORT_VALIDATE_VLAN_INFO_FAILED;
VM_PORT_VLAN_EXTNIC_NOT_ENABLED;
VM_PORT_VLAN_PTNIC_NOT_SUPPORTED;
VM_PORT_VLAN_TRUNK_NOT_SUPPORTED;
VM_PROTOCOL_BIND_FAILED;
VM_PROTOCOL_BIND_SUCCEEDED;
VM_PROTOCOL_NIC_PAUSE;
VM_PROTOCOL_NIC_PAUSING;
VM_PROTOCOL_NIC_RESTART;
VM_PROTOCOL_UNBIND_FAILED;
VM_PROTOCOL_UNBIND_SUCCEEDED;
VM_QOS_PACKET_DROP;
VM_RSS_ADJUSTED_LOAD;
VM_RSS_CANDIDATE_RSS_QUEUE;
VM_RSS_CANDIDATE_VMQ_QUEUE;
VM_RSS_INIT_FAILED;
VM_RSS_INIT_SUCCESS;
VM_RSS_MOVE_FAILURE;
VM_RSS_PERSPECTIVE_LOAD;
VM_RSS_PROC_AFFINITY_CHANGE;
VM_RSS_PROC_EXCEED_UPPER_THRESHOLD;
VM_RSS_UPDATE_FAILED;
VM_RSS_UPDATE_SUCCESS;
VM_SET_MAC_FILTER_OPERATION_FAILURE;
VM_SET_MAC_FILTER_OPERATION_SUCCESS;
VM_SET_MAC_VLAN_FILTER_FAILED;
VM_SWITCH_BANDWIDTH_POLICY_FAILED;
VM_SWITCH_BANDWIDTH_POLICY_SUCCESS;
VM_SWITCH_DELETE_COMPLETE;
VM_SWITCH_EXT_ACTIVATE_FAILED;
VM_SWITCH_FORWARDING_DISABLED;
VM_SWITCH_FORWARDING_ENABLED;
VM_SWITCH_GET_EXTENSIONS_FAILURE;
VM_SWITCH_INFO;
VM_SWITCH_INFO_SET;
VM_SWITCH_INFO_SET_FAILED;
VM_SWITCH_NATIVE_RSS_ENABLE_FAILED;
VM_SWITCH_NATIVE_RSS_ENABLE_SUCCEEDED;
VM_SWITCH_NATIVE_RSS_ENABLE_UNSUPPORTED;
VM_SWITCH_NATIVE_RSS_SEND_SPREADING_FAILED;
VM_SWITCH_NATIVE_RSS_SEND_SPREADING_NOT_READY;
VM_SWITCH_NATIVE_RSS_SEND_SPREADING_SUCCEEDED;
VM_SWITCH_NATIVE_RSS_SEND_SPREADING_UNSUPPORTED;
VM_SWITCH_NIC_EXTENSION_REQUIREMENTS_NOT_MET;
VM_SWITCH_NIC_EXTENSION_REQUIREMENT_MISSING;
VM_SWITCH_OFFLOAD_POLICY_FAILED;
VM_SWITCH_OFFLOAD_POLICY_SUCCESS;
VM_SWITCH_OID_FORWARD;
VM_SWITCH_OID_FORWARD_RESULT;
VM_SWITCH_OID_NIC_REQ_FORWARD;
VM_SWITCH_PERFORMANCE_POLICY_FAILED;
VM_SWITCH_PERFORMANCE_POLICY_SUCCESS;
VM_SWITCH_POLICY_FAILED;
VM_SWITCH_POLICY_FAILED_DEBUG;
VM_SWITCH_POLICY_FAILED_EXTENSION;
VM_SWITCH_POLICY_SUCCESS;
VM_SWITCH_SAVE_RESTORE_EXTENSION_OPERATION_FAILED;
VM_SWITCH_SAVE_RESTORE_EXTENSION_OPERATION_SUCCEEDED;
VM_SWITCH_SAVE_RESTORE_OPERATION_FAILED;
VM_SWITCH_SERVICING_CONNECTIVITY;
VM_SWITCH_SERVICING_IOCTL;
VM_SWITCH_STATUS_FORWARD;
VM_SWITCH_STATUS_NIC_STATUS_FORWARD;
VM_SWITCH_SUCCESSFULLY_DELETED;
VM_SWITCH_SUCCESSFULLY_INITIALIZED;
VM_TEAM_NDIS_QOS_CONSISTENT;
VM_TEAM_NDIS_QOS_INCONSISTENT;
VM_TEAM_STATUS_INDICATION_NDIS_QOS_FAILED;
VM_TEAM_STATUS_INDICATION_NDIS_QOS_SUCCEEDED;
VM_UPDATE_NDIS_QOS_FAILED;
VM_UPDATE_NDIS_QOS_SUCCEEDED;
VM_VERIFIER_FAILURE;
VM_VMQ_ADJUSTED_LOAD;
VM_VMQ_ALLOCATION_FAILED;
VM_VMQ_ALLOCATION_FAILED_DEBUG;
VM_VMQ_ALLOCATION_SUCCESS;
VM_VMQ_CAPS;
VM_VMQ_GROUP_CREATE_FAILED;
VM_VMQ_GROUP_PROCESSOR_SET_INVALID;
VM_VMQ_PERSPECTIVE_LOAD;
VM_VMQ_PROC_AFFINITY_CHANGE;
VM_VMQ_RSS_QUEUE_GROUP_ACTION;
VM_VRSS_OUTSTANDING_DUP_NBL_BYTES_DECREASING;
VM_VRSS_OUTSTANDING_DUP_NBL_BYTES_INCREASING;
Vms37HashSeed;
Vms8021xEnabled;
Vms8021xEnabledStr;
VmsActiveProcCount;
VmsAllowVersionQuery;
VmsAllowVersionQueryStr;
VmsBroadcastNetworkChangeStatusIndicationStr;
VmsBroadcastUplinkDisconnectStr;
VmsBypassExtStack;
VmsBypassExtStackStr;
VmsCdCtlDeviceObject;
VmsCdCtlDeviceObjectInternal;
VmsCdpCtlProxyContext;
VmsCdpCtlProxyHandlers;
VmsCoalescingDurationInMsStr;
VmsCpuLoadLowerThresholdStr;
VmsCpuLoadUpperThresholdStr;
VmsCpuTargetProcessorLoadPressureStr;
VmsCpuTargetProcessorLoadThresholdStr;
VmsCsComputerName;
VmsCumulativeDpcLowThreshold;
VmsCumulativeDpcLowThresholdStr;
VmsDataFlowBypassModeEnabled;
VmsDataFlowBypassModeEnabledStr;
VmsDedicatedVFModeInSet;
VmsDedicatedVFModeInSetStr;
VmsDefaultHostNicRecvUseL2RssTable;
VmsDefaultHostNicRecvUseL2RssTableStr;
VmsDefaultNblForwardingDetail;
VmsDefaultPtNicDropLowResourcesPackets;
VmsDefaultPtNicDropLowResourcesPacketsStr;
VmsDefaultRssInfo;
VmsDefaultTeamingAlgorithm;
VmsDefaultTeamingAlgorithmStr;
VmsDelayQueue;
VmsDiagnosticFlags;
VmsDiagnosticFlagsStr;
VmsDisableInterruptModerationStr;
VmsDisableUDPvRss;
VmsDisableUDPvRssStr;
VmsDpcAdjustmentPerSecondaryCpuStr;
VmsDriverObject;
VmsEtwDispatchTable;
VmsEtwFilterLock;
VmsEtwFilterLockInitialized;
VmsEtwStoredRules;
VmsEtwTraceDatapath;
VmsEtwTraceEnabled;
VmsEtwTraceFiltersExist;
VmsEtwTraceHandle;
VmsEtwTraceRss;
VmsExecutionMode;
VmsExecutionModeStr;
VmsExpansionPeriodInMsStr;
VmsExtMpOidHandlers;
VmsFatalOidErrorEvent;
VmsFatalOidErrorMode;
VmsFatalOidErrorModeStr;
VmsGenericObjectHandle;
VmsIfrLog;
VmsIfrLogSize;
VmsIfrLogSizeStr;
VmsInitStateMiniport;
VmsInitStateSwitch;
VmsInstanceGuidVlanSettings;
VmsIsHnvV1Enabled;
VmsIsHnvV1EnabledStr;
VmsIsHypercopyEnabled;
VmsIsHypercopyEnabledStr;
VmsIsInServicingBlackout;
VmsIsNativeRssEnabled;
VmsIsRscOverVmBusEnabled;
VmsIsRscOverVmBusEnabledStr;
VmsIsSystemShuttingDown;
VmsIsUnloadForServicing;
VmsKnownProcessors;
VmsLbfoCfgMacRebalanceDelay;
VmsLbfoCfgMacRebalanceDelayStr;
VmsLbfoNicActivationDelay;
VmsLbfoNicActivationDelayStr;
VmsLibIoctlMajorVersion;
VmsLibIoctlMinorVersion;
VmsLowLoadDurationInMsStr;
VmsMaxNicResetTimeInSeconds;
VmsMaxNicResetTimeInSecondsStr;
VmsMaxNumMoveTokenStr;
VmsMaxNumberOfQueuesPerVPort;
VmsMaxNumberOfQueuesPerVPortStr;
VmsMaxPacketHeaderCountStr;
VmsMaxSafeHeaderSize;
VmsMaxSafeHeaderSizeStr;
VmsMaxVrssQueueAllocatedBytes;
VmsMaxVrssQueueAllocatedMBytesStr;
VmsMaximumProcCount;
VmsMinFragmentOffset;
VmsMinFragmentOffsetStr;
VmsMinNumberOfQueuesPerVPort;
VmsMinNumberOfQueuesPerVPortStr;
VmsMiniCommonIp4IpChecksum;
VmsMiniCommonIp4Rsc;
VmsMiniCommonIp4TcpChecksum;
VmsMiniCommonIp4TcpLsoV1;
VmsMiniCommonIp4TcpLsoV2;
VmsMiniCommonIp4UdpChecksum;
VmsMiniCommonIp6Rsc;
VmsMiniCommonIp6TcpChecksum;
VmsMiniCommonIp6TcpLsoV2;
VmsMiniCommonIp6UdpChecksum;
VmsMiniCommonJumboPacket;
VmsMiniCommonNetworkDirect;
VmsMiniCommonRssEnabled;
VmsMiniportHandle;
VmsMiniportHandleLW;
VmsMpCommonNdis5VscOids;
VmsMpCommonNdis61VscOids;
VmsMpCommonNdis63VscOids;
VmsMpCommonNdis63VspOids;
VmsMpCommonNdis6VscOids;
VmsNativeRssEnabledStr;
VmsNblCadLookasideList;
VmsNblCadLookasideListInitialized;
VmsNblContextSize;
VmsNetworkIndication;
VmsNicProxy;
VmsNumPDBuffersPerEC;
VmsNumPDBuffersPerECStr;
VmsNumberOfIndirectionTableEntries;
VmsNumberOfIndirectionTableEntriesStr;
VmsOmBackupStr;
VmsOmCleanupEvent;
VmsOmCleanupList;
VmsOmCleanupLock;
VmsOmCleanupWorkItem;
VmsOmCleanupWorkItemEnqueued;
VmsOmFriendlyNameStr;
VmsOmIoctlMutex;
VmsOmIsLightWeightNicStr;
VmsOmMarkForDeletion;
VmsOmMigrationStr;
VmsOmMiniportDeviceGuidStr;
VmsOmNicCount;
VmsOmNicCurrentMacAddressStr;
VmsOmNicIsMigrating;
VmsOmNicList;
VmsOmNicListConfigKeyStr;
VmsOmNicPermanentMacAddressStr;
VmsOmNicTypeStr;
VmsOmNicVlanIDStr;
VmsOmNicsConfigKeyStr;
VmsOmObjectListLock;
VmsOmOriginalNameStr;
VmsOmPortNameStr;
VmsOmPropertiesKeyStr;
VmsOmSwitchCount;
VmsOmSwitchList;
VmsOmSwitchNameStr;
VmsOmSwitchesConfigKeyStr;
VmsPDClientDispatch;
VmsPDClientHandle;
VmsPDDefaultVNicModerationCount;
VmsPDDefaultVNicModerationCountStr;
VmsPDDefaultVNicModerationInterval;
VmsPDDefaultVNicModerationIntervalStr;
VmsPDPlatformDispatch;
VmsPDSwitchCount;
VmsPDTestExtensionGuid;
VmsPDTestExtensionGuidStr;
VmsPlanChange_AllManagementStateElements;
VmsPlanChange_GuestRssState;
VmsPlanChange_VmmqElements;
VmsPlanCpuTable;
VmsPlanGroupTable;
VmsPlanMaxGroup;
VmsPlanMaxNumaNode;
VmsPlanNumaNodeTable;
VmsPolicyHandlerData;
VmsPolicyNullGuid;
VmsPortPropertyId;
VmsProtocolHandle;
VmsPtDynVmqInfo;
VmsPtNicSendMinStackThresholdInBytes;
VmsPtNicSendMinStackThresholdInBytesStr;
VmsQosSendNblPoolHandle;
VmsQsInfo;
VmsQsUserConfig;
VmsQueueSchedulingModeStr;
VmsRscLayerNvspHVNicCookie;
VmsRscLayerNvspVSwitchCookie;
VmsRscLayerNvspVSwitchVrssCookie;
VmsRtlGuidFormat;
VmsSafeHeaderSize;
VmsSafeHeaderSizeStr;
VmsSendInterruptModeStr;
VmsSingleInstanceDpcLowThreshold;
VmsSingleInstanceDpcLowThresholdStr;
VmsStaggeringIntervalInMsStr;
VmsSwitchPolicyHandlerData;
VmsSwitchPropertyId;
VmsSwitchRssSendPacketCountMultiplierStr;
VmsTeamNicNamePrefix;
VmsTeamNicNameSuffix;
VmsTestAllowDisableMNF;
VmsTimerTable;
VmsTimerUnitAssignmentIndex;
VmsTimerUnits;
VmsTokenRefundPeriodInMsStr;
VmsVerifierBugcheckFlagEnabled;
VmsVerifierEnabled;
VmsVirtualLine;
VmsVmBatchCopyLookAsideBatchSize;
VmsVmBatchCopyLookAsideBatchSizeStr;
VmsVmBatchCopyOnStackBatchSize;
VmsVmBatchCopyOnStackBatchSizeStr;
VmsVmBatchCopyRndisBatchSize;
VmsVmBatchCopyRndisBatchSizeStr;
VmsVmExternalMdlShadowModeStr;
VmsVmMaxBatchesPerFlush;
VmsVmMaxBatchesPerFlushStr;
VmsVmMaxNBLsPerFlush;
VmsVmMaxNBLsPerFlushStr;
VmsVmMaximumMTU;
VmsVmMaximumMTUStr;
VmsVmNicDisableMediaIndicationStr;
VmsVmNicExternalMdlShadowMode;
VmsVmNicMaxSendBufferSizeInBytes;
VmsVmNicMaxSendBufferSizeInMBStr;
VmsVmNicMaxSendShadowSizeInBytes;
VmsVmNicMaxSendShadowSizeInMBStr;
VmsVmNicPvtProtocolVersions;
VmsVmNicSendLmNetworkChangeIndicationStr;
VmsVmpControlDevice;
VmsVmqUserConfig;
VmsVswitchFilterHandle;
VmsVswitchMiniportHandle;
VmsVswitchProtocolHandle;
VmsWnvInitialized;
WPPTraceSuite;
WPP_006a7b31acf53f0d6273d85c797262c3_Traceguids;
WPP_0100ca7cace834c5592b77f1670568d8_Traceguids;
WPP_06a2ee6e8cf234a538c3ac50eb14eca0_Traceguids;
WPP_07bdf9f99adb39e7fc7a254c4e3109ca_Traceguids;
WPP_0a25a1789f6532de8fab46857e5aad73_Traceguids;
WPP_0c63a2e3fb143488ffdce4979f4ea592_Traceguids;
WPP_0d1a236287de3fb3d431c1fbced6e419_Traceguids;
WPP_114a8edc6d273d70d89728d56ad1dcdc_Traceguids;
WPP_125352abebef3146b42f49035a4cc2ec_Traceguids;
WPP_196773f890c63d4780d436f0db8c7485_Traceguids;
WPP_1b2b22c0af1b353fc600684fe6501338_Traceguids;
WPP_212057154daf3b7814ec907459d39c1d_Traceguids;
WPP_24894fa3d5a93e825199a1a00b84710c_Traceguids;
WPP_27ef394f7a743e2e914aa7c4b2d8b461_Traceguids;
WPP_287079ad7390319a75e958541c087fd4_Traceguids;
WPP_28b163bf8c6730a3d994a79a27f3f7fe_Traceguids;
WPP_2b34acecd5d5315cda86e62d2e5df55f_Traceguids;
WPP_2b54a970b31d3ca96cac7388623373e2_Traceguids;
WPP_2f3a3141d9c13986d626bb28e891a15f_Traceguids;
WPP_3000b97c6b4430efe4a932613021c5f3_Traceguids;
WPP_3625b70dd8ca3d32a3e8a0f1268768e5_Traceguids;
WPP_37805bed29fa3c372fc9f345b57cc1e0_Traceguids;
WPP_3d46210de9353f258e1de374c35c84af_Traceguids;
WPP_40c36c2c24ca3f966bdadb2d53d8c06d_Traceguids;
WPP_44641b05b2c73dfc3d24424a698098fc_Traceguids;
WPP_4566a6fef466375b55233e6b10f0ae48_Traceguids;
WPP_45b0d8265751365e12bb81cc9a40959b_Traceguids;
WPP_46aedffdcef33ea903d365dbb12b7077_Traceguids;
WPP_47278acdf0cc3ae995c7888288e38fc7_Traceguids;
WPP_4c29d6bda0d533b126b891a5a291f94f_Traceguids;
WPP_515b78a9b65339220c52c13db926a9a5_Traceguids;
WPP_51e75957e1a0398219356d16593e7a32_Traceguids;
WPP_52a49c4dc10d37d547683855ef737da3_Traceguids;
WPP_564e2a5d92d53f68967073e234bfc164_Traceguids;
WPP_56bedd24096738b66b2343f6e7f36858_Traceguids;
WPP_5701215c40873077e73bea629dc5899a_Traceguids;
WPP_5d06ee66c6e032fa4e14bfb86171af77_Traceguids;
WPP_610d6d0e776d3dd8d2680c0abbcfdfe7_Traceguids;
WPP_639c52251abb383a27bc212f0409976a_Traceguids;
WPP_6f785fdb87cb3788f4683138ce7e9bd9_Traceguids;
WPP_775af36cd4af3960f4d938482841577f_Traceguids;
WPP_7eac589ec0e932248b9764bf155057c4_Traceguids;
WPP_82d1e3a511903e5d58ddfe8e34d5dc05_Traceguids;
WPP_82ff9f944d6831046ee996e815cb5765_Traceguids;
WPP_83895a3816c73a56c366aaade6908122_Traceguids;
WPP_88d93cca4a4a37562e7047f578498897_Traceguids;
WPP_895863ac378233018822297936b3becd_Traceguids;
WPP_8ac846ec59563c7b79799c03735a21a5_Traceguids;
WPP_8b4f32d6ffff3ae21134e4099c00edc0_Traceguids;
WPP_8e69597d5978314faea97e1740175686_Traceguids;
WPP_9098f131c25b3c0cc86b0eafe4be955f_Traceguids;
WPP_93b1e1c884d633f214bee06c6c3cd886_Traceguids;
WPP_97afd29b356330a5a3ec025cca79717a_Traceguids;
WPP_98cf6000388d31075006c77778f5c7df_Traceguids;
WPP_9ce341e967873bb5b1b88aa5f7a5d699_Traceguids;
WPP_GLOBAL_Control;
WPP_MAIN_CB;
WPP_ThisDir_CTLGUID_vmswitch;
WPP_a016d259ddb9327de01af9436c3db7f7_Traceguids;
WPP_a113ebb268b63d6dd2905075cc9f5ab3_Traceguids;
WPP_a1acac0a678f36918fe8ba98ff6f5404_Traceguids;
WPP_a3b4de379bd530f128d19b0733a19328_Traceguids;
WPP_aa287bfb73a538d0f3fbfe96c8a79d30_Traceguids;
WPP_aa627b7c4f9830820e33ef2ab5cf2bb6_Traceguids;
WPP_abf0c21f25a6354c0df719dc7b12cbb7_Traceguids;
WPP_ae841a10812f3e9fe9394b5a282aaf4a_Traceguids;
WPP_af47251fcb093d76b880ede7b1e093ca_Traceguids;
WPP_af764db9a962382a3e00b121736e5f61_Traceguids;
WPP_b2ba6a2f2c9a3d92b2d3512293ebdb02_Traceguids;
WPP_b4eb6faabbb639aa06cf2db497b92404_Traceguids;
WPP_b729ae4a7e103857834219926f65b9cb_Traceguids;
WPP_b7eb89a46fc636054b7dfa5c608344e8_Traceguids;
WPP_bc941d2e075d3d7468e03863db7db862_Traceguids;
WPP_bd8600a2b9b33ad7fae56a91a12e9926_Traceguids;
WPP_be5f629213af3cb5b5ff1149a8d2fec2_Traceguids;
WPP_be66ff44fe5b3173c81468a3146b6822_Traceguids;
WPP_c2a65e2daba0346dd5e4b1452a9e082d_Traceguids;
WPP_c39200ca636f32cd7a845c5a0756a08f_Traceguids;
WPP_d0413cd4c5533b68b339328230190de2_Traceguids;
WPP_d0669f23870637b6ade0d6890033e360_Traceguids;
WPP_d3c5b6988b023f4106a9b1c46ae0a6fc_Traceguids;
WPP_dac6d83180413185181704bd250d58d8_Traceguids;
WPP_e7e2f76d34ce3a5649fda0998643e2ae_Traceguids;
WPP_e8e8216a6e6a319c13174fd575e091c9_Traceguids;
WPP_e9bf3034762633ee66ebbdfc1b03c75f_Traceguids;
WPP_eab381f70e77328b89be2289b72d54ca_Traceguids;
WPP_eb5d1f57d08633bd959db7f0b77c0b79_Traceguids;
WPP_ebce48a5884d3bf2af4cc50200fb2a44_Traceguids;
WPP_ecfa459e42b03ddef67a7a6958f4a319_Traceguids;
WPP_ef098784a6c0316598e44e6001c6d293_Traceguids;
WPP_effbede06898334e1fa5bc6f1bc56906_Traceguids;
WPP_f001718f37d138b2fc587053a2f24480_Traceguids;
WPP_f0f0cb6a837430d55c734c696829ddc4_Traceguids;
WPP_f2d99243c0be3724eee572748a589d5c_Traceguids;
WPP_fb199a4c1a1b3cf4776e35a553a00efa_Traceguids;
WPP_fd8d320455f23ca1b13ea2e57b3aee4f_Traceguids;
WPP_fdd0317dbed83af615036534dfc046da_Traceguids;
WPP_fef0b6bb9399309502b597a6a4051514_Traceguids;
_IMPORT_DESCRIPTOR_HAL;
_IMPORT_DESCRIPTOR_NDIS;
_IMPORT_DESCRIPTOR_NETIO;
_IMPORT_DESCRIPTOR_WppRecorder;
_IMPORT_DESCRIPTOR_cng;
_IMPORT_DESCRIPTOR_ext-ms-win-wnv-l1-1-0;
_IMPORT_DESCRIPTOR_ntoskrnl;
_IMPORT_DESCRIPTOR_vmbkmclr;
_IMPORT_DESCRIPTOR_winhvr;
_NULL_IMPORT_DESCRIPTOR;
__PchSym_;
_guard_check_icall_fptr;
_guard_dispatch_icall_fptr;
_guard_fids_table;
_guard_iat_table;
_imp_ConvertInterfaceGuidToLuid;
_imp_ConvertInterfaceLuidToGuid;
_imp_ConvertInterfaceLuidToIndex;
_imp_DbgPrintEx;
_imp_DbgkWerCaptureLiveKernelDump;
_imp_EtwRegister;
_imp_EtwSetInformation;
_imp_EtwUnregister;
_imp_EtwWrite;
_imp_EtwWriteTransfer;
_imp_ExAcquireFastMutex;
_imp_ExAcquirePushLockExclusiveEx;
_imp_ExAcquirePushLockSharedEx;
_imp_ExAcquireRundownProtection;
_imp_ExAcquireRundownProtectionCacheAware;
_imp_ExAcquireSpinLockExclusive;
_imp_ExAcquireSpinLockShared;
_imp_ExAcquireSpinLockSharedAtDpcLevel;
_imp_ExAllocateCacheAwareRundownProtection;
_imp_ExAllocatePoolWithTag;
_imp_ExAllocatePoolWithTagPriority;
_imp_ExAllocateTimer;
_imp_ExDeleteLookasideListEx;
_imp_ExDeleteNPagedLookasideList;
_imp_ExDeleteTimer;
_imp_ExFreeCacheAwareRundownProtection;
_imp_ExFreePool;
_imp_ExFreePoolWithTag;
_imp_ExInitializeLookasideListEx;
_imp_ExInitializeNPagedLookasideList;
_imp_ExInitializeRundownProtection;
_imp_ExQueryDepthSList;
_imp_ExQueueWorkItem;
_imp_ExReInitializeRundownProtectionCacheAware;
_imp_ExReleaseFastMutex;
_imp_ExReleasePushLockExclusiveEx;
_imp_ExReleasePushLockSharedEx;
_imp_ExReleaseRundownProtection;
_imp_ExReleaseRundownProtectionCacheAware;
_imp_ExReleaseSpinLockExclusive;
_imp_ExReleaseSpinLockShared;
_imp_ExReleaseSpinLockSharedFromDpcLevel;
_imp_ExRundownCompleted;
_imp_ExSetTimer;
_imp_ExTryAcquirePushLockExclusiveEx;
_imp_ExTryAcquireSpinLockSharedAtDpcLevel;
_imp_ExWaitForRundownProtectionRelease;
_imp_ExWaitForRundownProtectionReleaseCacheAware;
_imp_ExpInterlockedFlushSList;
_imp_ExpInterlockedPopEntrySList;
_imp_ExpInterlockedPushEntrySList;
_imp_FirstEntrySList;
_imp_HviGetEnlightenmentInformation;
_imp_HviGetHardwareFeatures;
_imp_HviGetHypervisorFeatures;
_imp_HviIsAnyHypervisorPresent;
_imp_HviIsHypervisorVendorMicrosoft;
_imp_InitializeSListHead;
_imp_IoAllocateMdl;
_imp_IoAllocateWorkItem;
_imp_IoBuildPartialMdl;
_imp_IoCreateDevice;
_imp_IoDeleteDevice;
_imp_IoFileObjectType;
_imp_IoFreeMdl;
_imp_IoFreeWorkItem;
_imp_IoGetStackLimits;
_imp_IoInitializeWorkItem;
_imp_IoOpenDeviceRegistryKey;
_imp_IoQueueWorkItem;
_imp_IoQueueWorkItemEx;
_imp_IoReleaseCancelSpinLock;
_imp_IoSizeofWorkItem;
_imp_IoUninitializeWorkItem;
_imp_IoWMIRegistrationControl;
_imp_IofCompleteRequest;
_imp_KdDebuggerEnabled;
_imp_KdDebuggerNotPresent;
_imp_KeAcquireInStackQueuedSpinLock;
_imp_KeAcquireInStackQueuedSpinLockAtDpcLevel;
_imp_KeAcquireSpinLockAtDpcLevel;
_imp_KeAcquireSpinLockRaiseToDpc;
_imp_KeBugCheckEx;
_imp_KeCancelTimer;
_imp_KeClearEvent;
_imp_KeDelayExecutionThread;
_imp_KeExpandKernelStackAndCalloutEx;
_imp_KeFlushQueuedDpcs;
_imp_KeGetCurrentProcessorNumberEx;
_imp_KeGetProcessorIndexFromNumber;
_imp_KeGetProcessorNumberFromIndex;
_imp_KeGetRecommendedSharedDataAlignment;
_imp_KeInitializeDpc;
_imp_KeInitializeEvent;
_imp_KeInitializeMutex;
_imp_KeInitializeSpinLock;
_imp_KeInitializeThreadedDpc;
_imp_KeInitializeTimer;
_imp_KeInitializeTimerEx;
_imp_KeInsertQueueDpc;
_imp_KeIsExecutingDpc;
_imp_KeLowerIrql;
_imp_KeQueryActiveGroupCount;
_imp_KeQueryActiveProcessorCountEx;
_imp_KeQueryDpcWatchdogInformation;
_imp_KeQueryGroupAffinity;
_imp_KeQueryHighestNodeNumber;
_imp_KeQueryInterruptTimePrecise;
_imp_KeQueryLogicalProcessorRelationship;
_imp_KeQueryMaximumProcessorCountEx;
_imp_KeQueryNodeActiveAffinity;
_imp_KeQueryNodeMaximumProcessorCount;
_imp_KeQueryPerformanceCounter;
_imp_KeQueryTimeIncrement;
_imp_KeReadStateEvent;
_imp_KeReadStateMutex;
_imp_KeReleaseInStackQueuedSpinLock;
_imp_KeReleaseInStackQueuedSpinLockFromDpcLevel;
_imp_KeReleaseMutex;
_imp_KeReleaseSpinLock;
_imp_KeReleaseSpinLockFromDpcLevel;
_imp_KeRemoveQueueDpc;
_imp_KeResetEvent;
_imp_KeSetEvent;
_imp_KeSetImportanceDpc;
_imp_KeSetSystemGroupAffinityThread;
_imp_KeSetTargetProcessorDpcEx;
_imp_KeSetTimerEx;
_imp_KeShouldYieldProcessor;
_imp_KeTestSpinLock;
_imp_KeWaitForMultipleObjects;
_imp_KeWaitForSingleObject;
_imp_KfRaiseIrql;
_imp_MmAllocatePagesForMdlEx;
_imp_MmBuildMdlForNonPagedPool;
_imp_MmFreePagesFromMdl;
_imp_MmGetSystemRoutineAddress;
_imp_MmIsDriverSuspectForVerifier;
_imp_MmIsVerifierEnabled;
_imp_MmMapLockedPagesSpecifyCache;
_imp_MmSizeOfMdl;
_imp_MmUnmapLockedPages;
_imp_NdisAcquireRWLockRead;
_imp_NdisAcquireRWLockWrite;
_imp_NdisAcquireReadWriteLock;
_imp_NdisAdvanceNetBufferDataStart;
_imp_NdisAdvanceNetBufferListDataStart;
_imp_NdisAllocateCloneNetBufferList;
_imp_NdisAllocateFragmentNetBufferList;
_imp_NdisAllocateGenericObject;
_imp_NdisAllocateIoWorkItem;
_imp_NdisAllocateNetBufferAndNetBufferList;
_imp_NdisAllocateNetBufferList;
_imp_NdisAllocateNetBufferListContext;
_imp_NdisAllocateNetBufferListPool;
_imp_NdisAllocateNetBufferPool;
_imp_NdisAllocateRWLock;
_imp_NdisAllocateRefCount;
_imp_NdisAllocateTimerObject;
_imp_NdisCancelTimerObject;
_imp_NdisCloseAdapterEx;
_imp_NdisCloseConfiguration;
_imp_NdisCloseNDKAdapter;
_imp_NdisConvertNdisStatusToNtStatus;
_imp_NdisConvertNtStatusToNdisStatus;
_imp_NdisCopyFromNetBufferToNetBuffer;
_imp_NdisCopyReceiveNetBufferListInfo;
_imp_NdisCopySendNetBufferListInfo;
_imp_NdisDereferenceWithTag;
_imp_NdisDeregisterProtocolDriver;
_imp_NdisDirectOidRequest;
_imp_NdisEnumerateFilterModules;
_imp_NdisFDeregisterFilterDriver;
_imp_NdisFIndicateReceiveNetBufferLists;
_imp_NdisFRegisterFilterDriver;
_imp_NdisFReturnNetBufferLists;
_imp_NdisFSendNetBufferLists;
_imp_NdisFSendNetBufferListsComplete;
_imp_NdisFSetAttributes;
_imp_NdisFreeCloneNetBufferList;
_imp_NdisFreeFragmentNetBufferList;
_imp_NdisFreeGenericObject;
_imp_NdisFreeIoWorkItem;
_imp_NdisFreeMemory;
_imp_NdisFreeMemoryWithTag;
_imp_NdisFreeNetBufferList;
_imp_NdisFreeNetBufferListContext;
_imp_NdisFreeNetBufferListPool;
_imp_NdisFreeNetBufferPool;
_imp_NdisFreeRWLock;
_imp_NdisFreeRefCount;
_imp_NdisFreeTimerObject;
_imp_NdisGetDataBuffer;
_imp_NdisGetRssProcessorInformation;
_imp_NdisGroupMaxProcessorCount;
_imp_NdisIMAssociateMiniport;
_imp_NdisIMCancelInitializeDeviceInstance;
_imp_NdisIfAddIfStackEntry;
_imp_NdisIfDeleteIfStackEntry;
_imp_NdisInitializeEvent;
_imp_NdisInitializeReadWriteLock;
_imp_NdisIsStatusIndicationCloneable;
_imp_NdisMDeregisterMiniportDriver;
_imp_NdisMDirectOidRequestComplete;
_imp_NdisMIndicateReceiveNetBufferLists;
_imp_NdisMIndicateStatusEx;
_imp_NdisMNetPnPEvent;
_imp_NdisMOidRequestComplete;
_imp_NdisMRegisterMiniportDriver;
_imp_NdisMSendNetBufferListsComplete;
_imp_NdisMSetMiniportAttributes;
_imp_NdisMSleep;
_imp_NdisOidRequest;
_imp_NdisOpenAdapterEx;
_imp_NdisOpenConfigurationEx;
_imp_NdisOpenNDKAdapter;
_imp_NdisPDStartup;
_imp_NdisQueryAdapterInstanceName;
_imp_NdisQueryDiagnosticSetting;
_imp_NdisQueueIoWorkItem;
_imp_NdisReadConfiguration;
_imp_NdisReadNetworkAddress;
_imp_NdisReferenceWithTag;
_imp_NdisRegisterProtocolDriver;
_imp_NdisReleaseRWLock;
_imp_NdisReleaseReadWriteLock;
_imp_NdisResetEvent;
_imp_NdisRetreatNetBufferDataStart;
_imp_NdisRetreatNetBufferListDataStart;
_imp_NdisReturnNetBufferLists;
_imp_NdisSendNetBufferLists;
_imp_NdisSetCoalescableTimerObject;
_imp_NdisSetEvent;
_imp_NdisSetOptionalHandlers;
_imp_NdisSetTimerObject;
_imp_NdisSynchronousOidRequest;
_imp_NdisWaitEvent;
_imp_NetioAllocateAndInitializeStackBlock;
_imp_NetioFreeStackBlock;
_imp_NmrClientAttachProvider;
_imp_NmrDeregisterClient;
_imp_NmrRegisterClient;
_imp_NmrWaitForClientDeregisterComplete;
_imp_ObReferenceObjectByHandle;
_imp_ObfDereferenceObject;
_imp_PsCreateSystemThread;
_imp_PsTerminateSystemThread;
_imp_PtCreateTable;
_imp_PtDeleteEntry;
_imp_PtDestroyTable;
_imp_PtEnumOverTable;
_imp_PtGetExactMatch;
_imp_PtGetLongestMatch;
_imp_PtGetNumNodes;
_imp_PtInsertEntry;
_imp_RtlAppendUnicodeStringToString;
_imp_RtlAppendUnicodeToString;
_imp_RtlCharToInteger;
_imp_RtlCleanupTimerWheel;
_imp_RtlCleanupTimerWheelEntry;
_imp_RtlCleanupToeplitzHash;
_imp_RtlCompareMemory;
_imp_RtlCompute37Hash;
_imp_RtlComputeToeplitzHash;
_imp_RtlCopyUnicodeString;
_imp_RtlCreateHashTable;
_imp_RtlDeleteHashTable;
_imp_RtlEndEnumerationHashTable;
_imp_RtlEnumerateEntryHashTable;
_imp_RtlEqualUnicodeString;
_imp_RtlFreeAnsiString;
_imp_RtlFreeUnicodeString;
_imp_RtlGUIDFromString;
_imp_RtlGetNextEntryHashTable;
_imp_RtlGetNextExpirationTimerWheelTick;
_imp_RtlGetNextExpiredTimerWheelEntry;
_imp_RtlGetPersistedStateLocation;
_imp_RtlGetVersion;
_imp_RtlIndicateTimerWheelEntryTimerStart;
_imp_RtlInitAnsiString;
_imp_RtlInitEnumerationHashTable;
_imp_RtlInitUnicodeString;
_imp_RtlInitializeTimerWheel;
_imp_RtlInitializeTimerWheelEntry;
_imp_RtlInitializeToeplitzHash;
_imp_RtlInsertEntryHashTable;
_imp_RtlIntegerToUnicodeString;
_imp_RtlIpv4StringToAddressW;
_imp_RtlIpv6StringToAddressW;
_imp_RtlIsTimerWheelSuspended;
_imp_RtlLookupEntryHashTable;
_imp_RtlNumberOfSetBitsUlongPtr;
_imp_RtlPrefixUnicodeString;
_imp_RtlQueryRegistryValuesEx;
_imp_RtlReinitializeToeplitzHash;
_imp_RtlRemoveEntryHashTable;
_imp_RtlResumeTimerWheel;
_imp_RtlReturnTimerWheelEntry;
_imp_RtlStringFromGUID;
_imp_RtlSuspendTimerWheel;
_imp_RtlUnicodeStringToAnsiString;
_imp_RtlUnicodeStringToInteger;
_imp_RtlUpcaseUnicodeString;
_imp_RtlUpdateCurrentTimerWheelTick;
_imp_SystemPrng;
_imp_VmbChannelDisable;
_imp_VmbChannelEnable;
_imp_VmbChannelGetNodeNumber;
_imp_VmbChannelGetNumaNodeMap;
_imp_VmbChannelGetPointer;
_imp_VmbChannelGetStatistics;
_imp_VmbChannelGetVirtualProcessorCount;
_imp_VmbChannelInitSetClientContextSize;
_imp_VmbChannelInitSetMaximumExternalData;
_imp_VmbChannelInitSetMaximumPacketSize;
_imp_VmbChannelInitSetPrimaryChannel;
_imp_VmbChannelMapGpadl;
_imp_VmbChannelPacketComplete;
_imp_VmbChannelPacketDeferToPassive;
_imp_VmbChannelPacketDeferUntilPolled;
_imp_VmbChannelPacketFail;
_imp_VmbChannelPacketGetClientContext;
_imp_VmbChannelPacketGetExternalData;
_imp_VmbChannelPacketShortLifetime;
_imp_VmbChannelPause;
_imp_VmbChannelPollRingBuffer;
_imp_VmbChannelRestoreFromBuffer;
_imp_VmbChannelSaveBegin;
_imp_VmbChannelSaveContinue;
_imp_VmbChannelSaveEnd;
_imp_VmbChannelSetInterruptPolicy;
_imp_VmbChannelSetPointer;
_imp_VmbChannelSetPollingMode;
_imp_VmbChannelSetTransactionQuota;
_imp_VmbChannelSizeofPacket;
_imp_VmbChannelStart;
_imp_VmbChannelUnmapChildMmioSpace;
_imp_VmbChannelUnmapGpadl;
_imp_VmbConvertVmbusHandleToKernelHandle;
_imp_VmbPacketAddTransferPageRanges;
_imp_VmbPacketGetPointer;
_imp_VmbPacketInitialize;
_imp_VmbPacketRestore;
_imp_VmbPacketSend;
_imp_VmbPacketSendWithTransferPageRanges;
_imp_VmbPacketSetCompletionRoutine;
_imp_VmbPacketSetPointer;
_imp_VmbServerChannelInitSetFlags;
_imp_VmbServerChannelInitSetMmioMegabytes;
_imp_VmbServerChannelInitSetMonitoredNotifications;
_imp_VmbServerChannelInitSetTargetInterfaceId;
_imp_VmbServerChannelInitSetVmbusHandle;
_imp_WinHvGetPartitionId;
_imp_WinHvMapStatsPage;
_imp_WinHvProcessorIndexToLpIndex;
_imp_WinHvUnmapStatsPage;
_imp_WnvCompleteSwitchNetBufferLists;
_imp_WnvInitSwitchFunctions;
_imp_WnvIsNblWnvOwned;
_imp_WnvNicConnect;
_imp_WnvNicCreate;
_imp_WnvNicDelete;
_imp_WnvNicDisconnect;
_imp_WnvNicUpdate;
_imp_WnvProcessOidCompletion;
_imp_WnvProcessOidRequest;
_imp_WnvProcessStatusIndication;
_imp_WnvSendSwitchNetBufferLists;
_imp_WnvSwitchCreate;
_imp_WnvSwitchDelete;
_imp_WnvSwitchForwardingExtensionStatus;
_imp_WnvSwitchInit;
_imp_WppAutoLogStart;
_imp_WppAutoLogStop;
_imp_WppAutoLogTrace;
_imp_ZwClose;
_imp_ZwCreateKey;
_imp_ZwDeleteKey;
_imp_ZwDeleteValueKey;
_imp_ZwDeviceIoControlFile;
_imp_ZwEnumerateKey;
_imp_ZwEnumerateValueKey;
_imp_ZwOpenFile;
_imp_ZwOpenKey;
_imp_ZwQueryLicenseValue;
_imp_ZwQueryValueKey;
_imp_ZwSetInformationThread;
_imp_ZwSetValueKey;
_imp___C_specific_handler;
_imp___chkstk;
_imp__local_unwind;
_imp__vsnwprintf;
_imp__wcslwr_s;
_imp__wcsnicmp;
_imp_imp_WppRecorderConfigure;
_imp_imp_WppRecorderLogCreate;
_imp_imp_WppRecorderLogDelete;
_imp_imp_WppRecorderReplay;
_imp_isdigit;
_imp_wcsncmp;
_imp_wcsstr;
_imp_wcstoul;
_security_cookie;
_security_cookie_complement;
g_AssertSpinLock;
g_AssertsOperational;
g_BatchLibContext;
g_LibIoctlLibraryContext;
g_MicrosoftTelemetryAssertsTriggeredList;
g_ModuleName;
g_NvLibContext;
g_ProtocolNicMemberNbls;
g_SegLibContext;
g_VmsIoctlDispatchTable;
g_VmsIoctlLegacyInfo;
g_VmsSkuInfo;
load_config_used;
pfnEtwRegisterClassicProvider;
pfnEtwUnregister;
pfnWppGetVersion;
pfnWppQueryTraceInformation;
pfnWppTraceMessage;
HAL_NULL_THUNK_DATA;
NDIS_NULL_THUNK_DATA;
NETIO_NULL_THUNK_DATA;
WppRecorder_NULL_THUNK_DATA;
cng_NULL_THUNK_DATA;
ext-ms-win-wnv-l1-1-0_NULL_THUNK_DATA;
ntoskrnl_NULL_THUNK_DATA;
vmbkmclr_NULL_THUNK_DATA;
winhvr_NULL_THUNK_DATA;

AddressTableCreate();
AddressTableDestroy();
AddressTableFind();
AddressTableGetNextEntry();
AddressTableRehash();
AddressTableReplace();
AddressTableSetFlags();
AssertEntryIsInRange();
BLFlushBatchOpContextEx();
BLGetLibOptions();
BLInitializeBatchOpContextFromContextEx();
BLInitializeEx();
BLReconfigure();
BLUninitialize();
BuildTable();
CBufferGetNextOffset();
CancelTimerCallbacksAndDeleteTimer();
ComputeFlushPeriod();
CopyEntries();
CreateEntries();
CreateNewEventEntry();
CreateTlgAggregateSession();
DestroyAggregateSession();
DestroyEventEntry();
DriverEntry();
EnableFlushTimer();
EtwEx_tidActivityInfo();
EtwEx_tidActivityInfoTransfer();
EvaluateBinaryRuleEx();
EvaluateListRule();
EvaluateMaskRule();
ExAllocateFromNPagedLookasideList();
ExFreeToNPagedLookasideList();
ExtractAggregateFieldTypes();
FindEntry();
FinishHash();
FlattenEventEntryTree();
FlushEventEntryList();
FlushLookUpTableBucket();
GetDeviceId();
GetNblVlan();
GsDriverEntry();
HviEnterKernelAperture();
HviIsKernelApertureAvailable();
HviLeaveKernelAperture();
HvipApertureAmdVmcall();
HvipApertureDetectParameters();
HvipApertureIntelVmcall();
HvipApertureVmfuncSwitchEptp();
IN6_IS_ADDR_UNSPECIFIED();
InitializeTelemetryAssertsKM();
InsertEventEntryInLookUpTable();
LibIoctlAddArrayRecordElement();
LibIoctlAddArrayRecordEx();
LibIoctlAddRecordEx();
LibIoctlDeinitializeOperation();
LibIoctlFinalizeAndDeinitializeOperationEx();
LibIoctlGetArrayRecordElementEx();
LibIoctlGetArrayRecordInfoEx();
LibIoctlGetRecordEx();
LibIoctlHelperAddArrayRecord();
LibIoctlHelperAddArrayRecordElement();
LibIoctlHelperCalculateSizeInLegacyBuffer();
LibIoctlHelperCopyRecordToLegacyBuffer();
LibIoctlHelperCopyRecordToVersionedBuffer();
LibIoctlHelperDeinitializeOperation();
LibIoctlHelperInitializeOperation();
LibIoctlHelperPrivConvertError();
LibIoctlHelperPrivGetRecordInfoFromLegacyBuffer();
LibIoctlHelperPrivGetVersionedArrayRecordInfo();
LibIoctlHelperPrivValidateLegacyBufferInfo();
LibIoctlHelperStubLog();
LibIoctlInitializeOperation();
LibIoctlIsOutputRequested();
LibIoctlPrivFinalizeOutputBuffer();
LibIoctlPrivReserveArrayElement();
LibIoctlReserveSpaceForRecordEx();
LibIoctlSetOutputFixedSizeIfLegacy();
LibIoctlValidateLegacyInfo();
LookUpTableFlushComplete();
LookUpTableFlushPartial();
McGenEventWrite();
McTemplateK0jd();
McTemplateK0jdd();
McTemplateK0jddd();
McTemplateK0jpp();
McTemplateK0jppt();
McTemplateK0jqbr1();
McTemplateK0p();
McTemplateK0pd();
McTemplateK0pjd();
McTemplateK0pp();
MergeSortList();
MergeSortedLists();
MicrosoftTelemetryAssertTriggeredArgsMsgKM();
MicrosoftTelemetryAssertTriggeredNoArgsKM();
MicrosoftTelemetryAssertTriggeredWorker();
Microsoft_Windows_Networking_Correlation_EtwEnableCallback();
NetioExpandKernelStackAndCallout();
NvLibCapsFillCapabilitiesBlob();
NvLibCapsFillCapabilityFromInferenceDb();
NvLibCapsGetMaxIdFromInferenceDb();
NvLibIsInferenceActiveInVersion();
NvLibRscCoalesceNbls();
NvLibRscGetLsoHint();
NvLibRscInitialize();
NvLibRscPvtAddLocalStats();
NvLibRscPvtAllocateScu();
NvLibRscPvtCoalesceNBL();
NvLibRscPvtFlushAllScu();
NvLibRscPvtFlushScu();
NvLibRscPvtGetPacketInfo();
NvLibRscPvtStatsGetBucketIndex();
NvLibRscPvtTryCoalesceNBL();
NvLibRscUncoalesceNbls();
NvspRoutingObjAttachPort();
NvspRoutingObjClearPort();
NvspRoutingObjCountLearnedEntriesForPort();
NvspRoutingObjCreate();
NvspRoutingObjDestroy();
NvspRoutingObjFindSingleDestination();
NvspRoutingObjGetNextLearnedEntriesForPort();
NvspRoutingObjLearn();
NvspRoutingObjPerformRehash();
NvspRoutingObjPriBuildDestinationList();
NvspRoutingObjPriCopyTableWithTimeout();
NvspRoutingObjPriIterate();
NvspRoutingObjPriLearnPinned();
NvspRoutingObjPriLearnUnpinned();
NvspRoutingObjPriLookup();
NvspRoutingObjPriNotifyPortChange();
NvspRoutingObjRemovePort();
PktCapAttachProvider();
PktCapCleanupBindingContext();
PktCapClientInitialize();
PktCapClientUninitialize();
PktCapDetachProvider();
PktCapGetSourceInfo();
PktCapLogEvent();
PktCapLogNetPacket();
PktCapLogPdPacket();
PktCapPacketFromPdBuffer();
PktCapReference();
PktCapRundownNotification();
PktCapSetEnabledLayers();
PktMonAttachProvider();
PktMonCleanupBindingContext();
PktMonClientAddEdge();
PktMonClientComponentRegister();
PktMonClientComponentUnregister();
PktMonClientEnableCallback();
PktMonClientNblDrop();
PktMonClientNblLogNdis();
PktMonClientSetCompPropery();
PktMonCompCloseCallback();
PktMonCompEnableCallback();
PktMonDetachProvider();
PplCreateLookasideList();
PplDestroyLookasideList();
PplGenericAllocateFunction();
PplGenericFreeFunction();
PplpCreateOneLookasideList();
PplpFreeOneLookasideList();
PplpLazyInitializeLookasideList();
QosAssignSlot();
QosComputeNetBufferConformanceTime();
QosComputeNetBufferPeakConformanceTime();
QosConstructNetBufferListToSend();
QosFlowNeedQueueFeedback();
QosFlowProcessQueuedNetBufferLists();
QosFlowSendNetBufferLists();
QosFlowUpdate();
QosFlowUpdateComplete();
QosGetNblChainDataLength();
QosGetNetBufferCount();
QosInit();
QosLineAdjustSendWindow();
QosLineComputeBufferSizes();
QosLineComputeControlInterval();
QosLineCreate();
QosLineNeedSignal();
QosLineSignalExternalEvent();
QosLineStartNextSendInterval();
QosLineUpdate();
QosLineUpdateTotalWeight();
QosMrkFlowUpdate();
QosNblCadDisassemble();
QosNblCadReassemble();
QosNblChainInsert();
QosNblChainRemove();
QosSelectSlot();
QosTbcAdjustBytesSent();
QosTbcAdjustSendWindow();
QosTbcBeginRcEpisode();
QosTbcComputeDropRate();
QosTbcComputeNbsToDrop();
QosTbcDropNbl();
QosTbcEndRcEpisode();
QosTbcEndRcMonitoring();
QosTbcFlowInitialize();
QosTbcFlowUpdate();
QosTbcFlushNetBufferLists();
QosTbcFrontalSpread();
QosTbcProcessQueuedNetBufferLists();
QosTbcRandomSpread();
QosTbcSampleMaxBytesRequested();
QosTbcSendNetBufferList();
QosTbcSmoothBytesRequested();
QosTbcTuneParameters();
QosTerminate();
QosTimerConvertPerformanceCounterToMicroseconds();
QosTimerGetCurrentTime();
QosTimerInitialize();
QosTraceFlowConformance();
QosTraceFlowSendQueue();
QosUtilComputeTokenSpec();
QosUtilSetTokenSpec();
RndisDevCreate();
RndisDevDestroy();
RndisDevDeviceAcquireOperation();
RndisDevDeviceCompleteSetEx();
RndisDevDeviceHostQuery();
RndisDevDeviceIndicateBuffers();
RndisDevDeviceIndicatePackets();
RndisDevDeviceIndicateStatus();
RndisDevDeviceReleaseOperation();
RndisDevHostAcquireOperationByIndex();
RndisDevHostCleanupMessageOpContext();
RndisDevHostCleanupOpContext();
RndisDevHostCompleteControlMessage();
RndisDevHostCompleteMessage();
RndisDevHostControlMessageWorkerRoutine();
RndisDevHostDestroy();
RndisDevHostDestroyBuffers();
RndisDevHostDeviceCompletePacket();
RndisDevHostDeviceCompleteReset();
RndisDevHostDeviceCompleteSet();
RndisDevHostDeviceCompleteSetEx();
RndisDevHostDeviceIndicateBuffers();
RndisDevHostDeviceIndicatePackets();
RndisDevHostDeviceIndicateStatus();
RndisDevHostDispatchControlMessage();
RndisDevHostHandleHaltMessage();
RndisDevHostHandleInitializeMessage();
RndisDevHostHandleKeepAliveMessage();
RndisDevHostHandlePacketMessages();
RndisDevHostHandleQueryMessage();
RndisDevHostHandleResetMessage();
RndisDevHostHandleSetExMessage();
RndisDevHostHandleSetMessage();
RndisDevHostInitializeOpContext();
RndisDevHostInitializeOpData();
RndisDevHostInternalAllocateSingleSubAllocation();
RndisDevHostInternalAllocateSubAllocations();
RndisDevHostInternalCopyIntoSubAllocation();
RndisDevHostInternalFreeSubAllocation();
RndisDevHostInternalIsReceiveBuffersReady();
RndisDevHostInternalParsePacketMessage();
RndisDevHostInternalParsePerPacketInfo();
RndisDevHostInternalParseRndisPacket();
RndisDevHostInternalPrepareRndisPacketMessage();
RndisDevHostInternalReallocateSubAllocation();
RndisDevHostInternalSendQueryCompleteMessage();
RndisDevHostQueueWorkItem();
RndisDevHostReleaseOperation();
RndisDevHostRestore();
RndisDevHostRestoreMessage();
RndisDevHostSave();
RndisDevHostSaveMessage();
RndisDevHostSetBuffers();
RndisDevHostSetConfig();
RndisDevHostSetMessageOpContext();
RndisDevRestore();
RndisDevSave();
RndisDevStartCtrlMessageProcessing();
RscLibExCoalesceSegmentWithScu();
RscLibExFlushScu();
RscLibExIsNBLFitForCoalescing();
RscLibExIsSegmentCoalescableWithScu();
RscLibExStartNewScu();
RsclibExtractTCPPayloadChecksum();
RsclibFixupTCPChecksum();
RtlAcquireReadLock();
RtlStringCbLengthW();
RtlStringCbPrintfW();
RtlStringCchCopyW();
RtlStringCopyWorkerW();
RtlUShortAdd();
RtlUnicodeStringCchCopyStringN();
RtlUnicodeStringPrintf();
RtlWideCharArrayCopyStringWorker();
RunningHash();
ScanHexFormat();
SegLibCreateDuplicateNblsCopyData();
SegLibCreateMultiNbNblClone();
SegLibDeferredChecksumPacket();
SegLibOffloadIteratorDeferredCopyFragment();
SegLibOffloadIteratorDeferredCopyNetBuffer();
SegLibOffloadIteratorInitialize();
SegLibOffloadIteratorNext();
SegLibOffloadIteratorPacketSize();
SegLibPDDeferredLsoCopySegments();
SegLibPDDeferredTcpChecksumAndCopyBuffer();
SegLibPDLsoGetCurrentSegmentPacketSize();
SegLibPDLsoInitialize();
SegLibPvtDeferredChecksumIpv4Header();
SegLibPvtDeferredChecksumIpv4HeaderNetBuffer();
SegLibPvtDeferredChecksumMdlChain();
SegLibPvtDeferredChecksumTransport();
SegLibPvtDeferredCopyMdlChainData();
SegLibPvtGetTcpDataOffset();
SegLibPvtLsoDeferredFixHeaders();
SegLibPvtLsoInitialize();
SegLibPvtPDGetTcpDataOffset();
SegLibPvtParseHeaders();
SegLibPvtProcessAdditionalOffloadInfo();
SegLibPvtReduceMdlChain();
TlgAggregateInternalFlushTimerCallbackKernelMode();
TlgAggregateInternalFlushWorkItemRoutineKernelMode();
TlgAggregateInternalProviderCallback();
TlgAggregateInternalRegisteredProviderEtwCallback();
TlgCreateSz();
TlgCreateWsz();
TlgDefineProvider_annotation__TlgTlgAggregateInternalProviderProv();
TlgDefineProvider_annotation__Tlgg_hTraceVmsProviderProv();
TlgDefineProvider_annotation__Tlgmtakm_hTelemetryAssertDiagTrackProv();
TlgDefineProvider_annotation__Tlgmtakm_hTelemetryAssertDiagTrack_KMProv();
TlgDefineProvider_annotation__Tlgmtakm_hTelemetryAssertProv();
TlgEnableCallback();
TlgKeywordOn();
TlgRegisterAggregateProvider();
TlgRegisterAggregateProviderEx();
TlgUnregisterAggregateProvider();
TlgWrite();
TraceFilterEngineAllowedByRuleEx2();
TraceFilterEngineEvaluateFilterExpression();
TraceFilterEngineStoreFilterRulesInternal();
TraceFilterEngineValidateAndStoreRules();
TraceFilterEngineValidateRule();
TraceLoggingRegisterEx();
UninitializeTelemetryAssertsKM();
UpdateInternalStatsOnFlush();
VmqQsAppendQueueToDeferredList();
VmsAcquireSkuInfo();
VmsArpPacketValidator();
VmsCdDeviceDeregister();
VmsCdDeviceRegister();
VmsCdNicProxyDeregister();
VmsCdNicProxyRegister();
VmsCdOpenProxyDevice();
VmsCdPortCustomPropertyEnumNdis();
VmsCdPortPropertyAddOnRestore();
VmsCdPortPropertyIsolationEnumNdis();
VmsCdPortPropertyProfileEnumNdis();
VmsCdPortPropertyRoutingDomainEnumNdis();
VmsCdPortPropertySecurityEnumNdis();
VmsCdPortPropertyVlanEnumNdis();
VmsCdSwitchPropertyAddOnRestore();
VmsCdpAllocateMemory();
VmsCdpBuildNdisCustomFeatureStatusObject();
VmsCdpBuildNdisCustomPropertyObject();
VmsCdpBuildNdisCustomSwitchFeatureStatusObject();
VmsCdpBuildNdisCustomSwitchPropertyObject();
VmsCdpBuildNdisEnumPropertyParametersObject();
VmsCdpBuiltinFeatureStatusGet();
VmsCdpBuiltinPropertyAdd();
VmsCdpBuiltinPropertyDelete();
VmsCdpBuiltinPropertyEnum();
VmsCdpBuiltinPropertyGet();
VmsCdpBuiltinPropertySet();
VmsCdpBuiltinSwitchPropertyAdd();
VmsCdpBuiltinSwitchPropertyDelete();
VmsCdpBuiltinSwitchPropertyEnum();
VmsCdpBuiltinSwitchPropertyGet();
VmsCdpBuiltinSwitchPropertySet();
VmsCdpClose();
VmsCdpCopyMemberNicsToIoctlBuffer();
VmsCdpCopyNicInfo();
VmsCdpCopyNicOperationalStatus();
VmsCdpCopyNicVRSSInfo();
VmsCdpCopyNicVmqInfo();
VmsCdpCopyPortInfo();
VmsCdpCopySwitchInfo();
VmsCdpCreate();
VmsCdpCustomFeatureStatusGet();
VmsCdpCustomPropertyAdd();
VmsCdpCustomPropertyDelete();
VmsCdpCustomPropertyGet();
VmsCdpCustomPropertySet();
VmsCdpCustomSwitchFeatureStatusGet();
VmsCdpCustomSwitchPropertyAdd();
VmsCdpCustomSwitchPropertyDelete();
VmsCdpCustomSwitchPropertyGet();
VmsCdpCustomSwitchPropertySet();
VmsCdpDeleteMiniportNic();
VmsCdpDeviceControl();
VmsCdpEnumNics();
VmsCdpEnumNicsCount();
VmsCdpEnumPorts();
VmsCdpEnumPorts$fin$0();
VmsCdpEnumPorts$fin$1();
VmsCdpEnumPortsCount();
VmsCdpEnumPortsCount$fin$0();
VmsCdpEnumProcs();
VmsCdpEnumProcsCount();
VmsCdpEnumSwitches();
VmsCdpEnumSwitchesCount();
VmsCdpEnumVmqGroupCount();
VmsCdpEnumVmqGroups();
VmsCdpFindPortBySwitchName();
VmsCdpGetGlobalVariable();
VmsCdpGetInitState();
VmsCdpGetInternalStats();
VmsCdpGetPortPolicyHandler();
VmsCdpGetPortPropertyEnum();
VmsCdpGetSwitchAndPortInitialized();
VmsCdpGetSwitchInitialized();
VmsCdpGetSwitchNameFromTeamNicName();
VmsCdpGetSwitchPolicyHandler();
VmsCdpGetTeamNicName();
VmsCdpGetVRSSIndirectionEntries();
VmsCdpGetVRSSInfo();
VmsCdpGetVersionCapabilities();
VmsCdpInitMiniportNic();
VmsCdpIsTeamNic();
VmsCdpNicAddNicNameToArray();
VmsCdpNicAllocateVF();
VmsCdpNicBeginSaveVmNic();
VmsCdpNicCollectInternalStats();
VmsCdpNicConnect();
VmsCdpNicContinueSaveVmNic();
VmsCdpNicCreateIcmpEchoReply();
VmsCdpNicDisableOptimizations();
VmsCdpNicDisconnect();
VmsCdpNicEnableOptimizations();
VmsCdpNicEndSaveVmNic();
VmsCdpNicExtendArray();
VmsCdpNicFindAndDequeueIcmpListenerIrp();
VmsCdpNicFindAndDequeueIcmpRequestIrp();
VmsCdpNicFlushIcmpRequestIrps();
VmsCdpNicFreeVF();
VmsCdpNicGetAddresses();
VmsCdpNicGetDropReasonsStats();
VmsCdpNicGetInfo();
VmsCdpNicGetInternalStats();
VmsCdpNicGetOperationalStatus();
VmsCdpNicGetStats();
VmsCdpNicGetVlanInfo();
VmsCdpNicGetVmqInfo();
VmsCdpNicHandleIcmpEchoReply();
VmsCdpNicHandleIcmpEchoRequest();
VmsCdpNicIcmpEchoIrpCancelRoutine();
VmsCdpNicIcmpEchoWorkRoutine();
VmsCdpNicLinkChangeNotify();
VmsCdpNicListenIcmpEcho();
VmsCdpNicMorphToDIoNic();
VmsCdpNicMorphToVmNic();
VmsCdpNicPauseVmNic();
VmsCdpNicPendIcmpEchoRequestIrp();
VmsCdpNicRelearnMac();
VmsCdpNicRelearnMacOnSwitch();
VmsCdpNicRestoreVmNic();
VmsCdpNicResumeVmNic();
VmsCdpNicSendIcmpEchoRequest();
VmsCdpNicSendStatus();
VmsCdpNicSetAddressesDirectIONic();
VmsCdpNicSetInfo();
VmsCdpNicSetMacAddressDirectIONic();
VmsCdpNicSetPacketFilter();
VmsCdpNicSuspendVmNic();
VmsCdpNicUplinkChangeNotify();
VmsCdpObjectDeleted();
VmsCdpOffloadPropertyAdd();
VmsCdpOffloadPropertyDelete();
VmsCdpOffloadPropertyGet();
VmsCdpOffloadPropertySet();
VmsCdpOffloadPropertyValidate();
VmsCdpParseFileName();
VmsCdpParseObjectName();
VmsCdpPortCreate();
VmsCdpPortDelete();
VmsCdpPortDeleteByName();
VmsCdpPortEnumLearnedMac();
VmsCdpPortEnumLearnedMac$fin$0();
VmsCdpPortEnumLearnedMac$fin$1();
VmsCdpPortEnumLearnedMacCount();
VmsCdpPortEnumLearnedMacCount$fin$0();
VmsCdpPortEnumLearnedMacCount$fin$1();
VmsCdpPortFeatureStatusGet();
VmsCdpPortGetEncapInfo();
VmsCdpPortGetInfo();
VmsCdpPortGetRequiredExtensions();
VmsCdpPortGetStats();
VmsCdpPortGetVlan();
VmsCdpPortLookupFromMac();
VmsCdpPortPropertyAdd();
VmsCdpPortPropertyBandwidthAdd();
VmsCdpPortPropertyBandwidthDelete();
VmsCdpPortPropertyBandwidthGet();
VmsCdpPortPropertyBandwidthGetFeatureStatus();
VmsCdpPortPropertyBandwidthSet();
VmsCdpPortPropertyBandwidthValidate();
VmsCdpPortPropertyDelete();
VmsCdpPortPropertyEnum();
VmsCdpPortPropertyGet();
VmsCdpPortPropertyGetSize();
VmsCdpPortPropertyIsolationAdd();
VmsCdpPortPropertyIsolationBuildNdisObject();
VmsCdpPortPropertyIsolationCreateNdisObject();
VmsCdpPortPropertyIsolationDelete();
VmsCdpPortPropertyIsolationGet();
VmsCdpPortPropertyIsolationHandleConfigChange();
VmsCdpPortPropertyIsolationRelearn();
VmsCdpPortPropertyIsolationSet();
VmsCdpPortPropertyIsolationValidate();
VmsCdpPortPropertyProfileAdd();
VmsCdpPortPropertyProfileBuildNdisObject();
VmsCdpPortPropertyProfileConvertToEntry();
VmsCdpPortPropertyProfileCreateNdisObject();
VmsCdpPortPropertyProfileDelete();
VmsCdpPortPropertyProfileEnum();
VmsCdpPortPropertyProfileGet();
VmsCdpPortPropertyProfileGetCount();
VmsCdpPortPropertyProfileGetEntry();
VmsCdpPortPropertyProfileSet();
VmsCdpPortPropertyProfileValidate();
VmsCdpPortPropertyRoutingDomainAdd();
VmsCdpPortPropertyRoutingDomainBuildNdisObject();
VmsCdpPortPropertyRoutingDomainCreateEntry();
VmsCdpPortPropertyRoutingDomainCreateNdisObject();
VmsCdpPortPropertyRoutingDomainDelete();
VmsCdpPortPropertyRoutingDomainEnum();
VmsCdpPortPropertyRoutingDomainGet();
VmsCdpPortPropertyRoutingDomainGetCount();
VmsCdpPortPropertyRoutingDomainGetEntry();
VmsCdpPortPropertyRoutingDomainGetSize();
VmsCdpPortPropertyRoutingDomainSet();
VmsCdpPortPropertyRoutingDomainValidate();
VmsCdpPortPropertySecurityAdd();
VmsCdpPortPropertySecurityBuildNdisObject();
VmsCdpPortPropertySecurityCreateNdisObject();
VmsCdpPortPropertySecurityDelete();
VmsCdpPortPropertySecurityGet();
VmsCdpPortPropertySecuritySet();
VmsCdpPortPropertySecurityUpdate();
VmsCdpPortPropertySecurityValidate();
VmsCdpPortPropertySet();
VmsCdpPortPropertyVlanAdd();
VmsCdpPortPropertyVlanBuildNdisObject();
VmsCdpPortPropertyVlanConvertToBitmap();
VmsCdpPortPropertyVlanConvertToInfo();
VmsCdpPortPropertyVlanConvertToProperty();
VmsCdpPortPropertyVlanConvertToVlanIdArray();
VmsCdpPortPropertyVlanCreateNdisObject();
VmsCdpPortPropertyVlanDelete();
VmsCdpPortPropertyVlanGet();
VmsCdpPortPropertyVlanGetSize();
VmsCdpPortPropertyVlanGetSizeFromInfo();
VmsCdpPortPropertyVlanGetVlanIdArraySize();
VmsCdpPortPropertyVlanRestore();
VmsCdpPortPropertyVlanSet();
VmsCdpPortPropertyVlanValidate();
VmsCdpPortSetEncapInfo();
VmsCdpPortSetInfo();
VmsCdpPortSetRequiredExtensions();
VmsCdpPortSetVlan();
VmsCdpProcGetStats();
VmsCdpQueuePlanAdd();
VmsCdpQueuePlanDelete();
VmsCdpQueuePlanGet();
VmsCdpQueuePlanSet();
VmsCdpQueuePlanValidate();
VmsCdpRdmaPropertyAdd();
VmsCdpRdmaPropertyDelete();
VmsCdpRdmaPropertyGet();
VmsCdpRdmaPropertySet();
VmsCdpRdmaPropertyValidate();
VmsCdpRead();
VmsCdpSetGlobalVariable();
VmsCdpSetNicConnectionInfo();
VmsCdpSwitchBandwidthFeatureStatusGet();
VmsCdpSwitchBandwidthPropertyAdd();
VmsCdpSwitchBandwidthPropertyDelete();
VmsCdpSwitchBandwidthPropertyGet();
VmsCdpSwitchBandwidthPropertySet();
VmsCdpSwitchBandwidthPropertyValidate();
VmsCdpSwitchCreate();
VmsCdpSwitchDelete();
VmsCdpSwitchDeregisterProtocolDriver();
VmsCdpSwitchFeatureStatusGet();
VmsCdpSwitchGetExtensionEnum();
VmsCdpSwitchGetInfo();
VmsCdpSwitchGetStats();
VmsCdpSwitchHardwareFeatureStatusGet();
VmsCdpSwitchNicTeamingPropertyAdd();
VmsCdpSwitchNicTeamingPropertyDelete();
VmsCdpSwitchNicTeamingPropertyGet();
VmsCdpSwitchNicTeamingPropertySet();
VmsCdpSwitchNicTeamingPropertyValidate();
VmsCdpSwitchOffloadPropertyAdd();
VmsCdpSwitchOffloadPropertyGet();
VmsCdpSwitchOffloadPropertySet();
VmsCdpSwitchOffloadPropertyValidate();
VmsCdpSwitchPerformanceFeatureStatusGet();
VmsCdpSwitchPerformancePropertyAdd();
VmsCdpSwitchPerformancePropertyGet();
VmsCdpSwitchPerformancePropertySet();
VmsCdpSwitchPerformancePropertyValidate();
VmsCdpSwitchPopulateFeatureStatus();
VmsCdpSwitchPopulatePropertyEnum();
VmsCdpSwitchPropertyAdd();
VmsCdpSwitchPropertyDelete();
VmsCdpSwitchPropertyEnum();
VmsCdpSwitchPropertyGet();
VmsCdpSwitchPropertySet();
VmsCdpSwitchRegisterProtocolDriver();
VmsCdpSwitchRoutingModesFeatureStatusGet();
VmsCdpSwitchServicingBegin();
VmsCdpSwitchServicingEnd();
VmsCdpSwitchSetInfo();
VmsCdpTeamMappingPropertyAdd();
VmsCdpTeamMappingPropertyDelete();
VmsCdpTeamMappingPropertyGet();
VmsCdpTeamMappingPropertySet();
VmsCdpTeamMappingPropertyValidate();
VmsCdpWrite();
VmsConvertGuidToWcharString();
VmsConvertIpv4AddressToWcharString();
VmsConvertIpv6AddressToWcharString();
VmsConvertMacAddressToString();
VmsConvertMacAddressToWcharString();
VmsConvertStringToMacAddress();
VmsConvertStringToType();
VmsCpuSetAddProcessor();
VmsCpuSetAddProcessors();
VmsCpuSetContainsProcessor();
VmsCpuSetCountProcessors();
VmsCpuSetFromGroupAffinity();
VmsCpuSetInterlockedAddProcessor();
VmsCpuSetIntersect();
VmsCpuSetIsEmpty();
VmsCpuSetRemoveProcessor();
VmsCpuSetRoundRobinScan();
VmsCpuSetScanForward();
VmsCpuSetScanReverse();
VmsCpuSetTranslateNumberToIndex();
VmsCriticalOidFailureHandler();
VmsCsAttrValueDelete();
VmsCsAttrValueEnumerate();
VmsCsAttrValueReadBinary();
VmsCsAttrValueReadBinaryEx();
VmsCsAttrValueReadString();
VmsCsAttrValueReadULong();
VmsCsAttrValueWriteBinary();
VmsCsAttrValueWriteString();
VmsCsAttrValueWriteULong();
VmsCsInitialize();
VmsCsKeyClose();
VmsCsKeyCreateEx();
VmsCsKeyDeleteByName();
VmsCsKeyEnumerate();
VmsCsKeyOpenEx();
VmsCsKeyTreeDeleteByName();
VmsCsPvtAttrValueReadString();
VmsCsPvtGetNextKey();
VmsCsPvtReadComputerName();
VmsCtlPortOffloadGetFeatureStatus();
VmsCtlQueuePlanGetFeatureStatus();
VmsDIoNicMorph();
VmsDIoNicMorph$fin$0();
VmsDIoNicPvtCancelRead();
VmsDIoNicPvtContextCleanup();
VmsDIoNicPvtDeliverPDBuffers();
VmsDIoNicPvtForwardLiveNbls();
VmsDIoNicPvtInsertPacket();
VmsDIoNicPvtLinkStateChanged();
VmsDIoNicPvtPacketForward();
VmsDIoNicPvtPacketRouted();
VmsDIoNicPvtRead();
VmsDIoNicPvtSendRelearnPacket();
VmsDIoNicPvtWrite();
VmsDriverUnload();
VmsEptCreateNicOidRequest();
VmsEptProcessPrivateOid();
VmsEptProcessPublicOid();
VmsEptPvtProcessPrivateOid();
VmsEtwCallback();
VmsEtwCleanupFilterData();
VmsEtwPrepareAndStoreFilterData();
VmsEtwStartTrace();
VmsEtwStopTrace();
VmsEtwTraceBandwidthReservationFailure();
VmsEtwTraceCriticalOidFailure();
VmsEtwTraceDefaultFlow();
VmsEtwTraceEmbeddedTeaming();
VmsEtwTraceEmbeddedTeamingLoopBackPacket();
VmsEtwTraceEmbeddedTeamingNic();
VmsEtwTraceEmbeddedTeamingSyncTcpOffloadFailed();
VmsEtwTraceEmbeddedTeamingSyncTcpOffloadSucceeded();
VmsEtwTraceExtendedPortAclPktDrop();
VmsEtwTraceExtendedPortAclPolicyFailure();
VmsEtwTraceExtensibilityNicRequestOid();
VmsEtwTraceExtensibilityNicRequestOidResult();
VmsEtwTraceExtensibilityNicStatus();
VmsEtwTraceExtensibilityOid();
VmsEtwTraceExtensibilityOidResult();
VmsEtwTraceExtensibilityStatus();
VmsEtwTraceFilterOperation();
VmsEtwTraceFlowConformance();
VmsEtwTraceFlowControlInterval();
VmsEtwTraceFlowSendQueue();
VmsEtwTraceIPSpoofPktDrop();
VmsEtwTraceIoctlOperation();
VmsEtwTraceIovExtensionRevokeVF();
VmsEtwTraceIovMacSpoofingConflict();
VmsEtwTraceIpecOffloadInboundIgnoreCryptoFailure();
VmsEtwTraceIpecOffloadMultipleDestDrop();
VmsEtwTraceIpecOffloadOutboundDrop();
VmsEtwTraceIpecSaOffloadFailure();
VmsEtwTraceIpsecOffloadInboundDrop();
VmsEtwTraceIsolationExtractionFailure();
VmsEtwTraceIsolationQueryResult();
VmsEtwTraceLineBufferSample();
VmsEtwTraceLineControlInterval();
VmsEtwTraceMacChange();
VmsEtwTraceMacConfig();
VmsEtwTraceNativeRssResult();
VmsEtwTraceNblExtensionDrop();
VmsEtwTraceNblReceiveDeliver();
VmsEtwTraceNblRoute();
VmsEtwTraceNicDisconnectFailure();
VmsEtwTraceNicDisconnectSuccess();
VmsEtwTraceNicError();
VmsEtwTraceNicExtensionRequirementFailure();
VmsEtwTraceNicExtensionRequirementMissing();
VmsEtwTraceNicFailure();
VmsEtwTraceNicName();
VmsEtwTraceNicNdkAdapterFailure();
VmsEtwTraceNicNdkOid();
VmsEtwTraceNicNdkPnP();
VmsEtwTraceNicNdkRequestNdkFailure();
VmsEtwTraceNicNdkVPortUpdateFailure();
VmsEtwTraceNicOperationFailure();
VmsEtwTraceNicOperationSuccess();
VmsEtwTraceNicSendStatusResult();
VmsEtwTraceNicSuccess();
VmsEtwTraceNicTeamConfiguration();
VmsEtwTraceNicTeamMemberStatusChange();
VmsEtwTraceNonConformingQueryTrafficClassEvent();
VmsEtwTracePdNotSupported();
VmsEtwTracePktDrop();
VmsEtwTracePortAclPktDrop();
VmsEtwTracePortAclPolicyFailure();
VmsEtwTracePortAclPolicySuccess();
VmsEtwTracePortBandwidthPolicyFailure();
VmsEtwTracePortBandwidthPolicySuccess();
VmsEtwTracePortFailure();
VmsEtwTracePortInfo();
VmsEtwTracePortIsolationPropertyFailure();
VmsEtwTracePortOffloadPolicyFailure();
VmsEtwTracePortOperationFailure();
VmsEtwTracePortPolicyExtensionBlock();
VmsEtwTracePortPolicyFailure();
VmsEtwTracePortPolicySuccess();
VmsEtwTracePortRdmaPolicyEvent();
VmsEtwTracePortRoutingDomainPropertyFailure();
VmsEtwTracePortSecurityPolicyFailure();
VmsEtwTracePortSecurityPolicySuccess();
VmsEtwTracePortSuccess();
VmsEtwTracePortVlanValidationFailure();
VmsEtwTraceProtVersion();
VmsEtwTraceProtocolNegotiationSuccess();
VmsEtwTracePtNicPause();
VmsEtwTraceQosPacketDrop();
VmsEtwTraceRestoreWarning();
VmsEtwTraceRssCandidateQueue();
VmsEtwTraceRssMove();
VmsEtwTraceRssMoveEntryFailure();
VmsEtwTraceRssQueueGroupAction();
VmsEtwTraceRssQueueLoad();
VmsEtwTraceRssUpdateFailure();
VmsEtwTraceRssUpdateSuccess();
VmsEtwTraceSaveRestoreExtensionResult();
VmsEtwTraceSaveRestoreFailure();
VmsEtwTraceStatusEx();
VmsEtwTraceSwitchBandwidthPolicyFailure();
VmsEtwTraceSwitchBandwidthPolicySuccess();
VmsEtwTraceSwitchFailure();
VmsEtwTraceSwitchGetExtensionsFailure();
VmsEtwTraceSwitchInfo();
VmsEtwTraceSwitchOffloadPolicyFailure();
VmsEtwTraceSwitchOffloadPolicySuccess();
VmsEtwTraceSwitchPerformancePolicyFailure();
VmsEtwTraceSwitchPerformancePolicySuccess();
VmsEtwTraceSwitchPolicyExtensionBlock();
VmsEtwTraceSwitchPolicyFailure();
VmsEtwTraceSwitchPolicySuccess();
VmsEtwTraceSwitchSuccess();
VmsEtwTraceVlanPtNicNotSupported();
VmsEtwTraceVlanTrunkIovResources();
VmsEtwTraceVlanTrunkNotSupported();
VmsEtwTraceVmNicAllowReferenceFail();
VmsEtwTraceVmqAllocationFailure();
VmsEtwTraceVmqAllocationSuccess();
VmsEtwTraceVmqCaps();
VmsEtwTraceVmqGroupCreateFailure();
VmsEtwTraceVmqGroupProcessorSetInvalid();
VmsEtwTraceVrssQueueDepth();
VmsEtwWriteEvent();
VmsExtFilterAttach();
VmsExtFilterCancelSendNetBufferLists();
VmsExtFilterDestinationProcessing();
VmsExtFilterDetach();
VmsExtFilterEgressFilterNetBufferLists();
VmsExtFilterIndicatePackets();
VmsExtFilterIngressFilterNetBufferLists();
VmsExtFilterPause();
VmsExtFilterReceiveNetBufferLists();
VmsExtFilterRestart();
VmsExtFilterReturnNetBufferLists();
VmsExtFilterSendNetBufferLists();
VmsExtFilterSendNetBufferListsComplete();
VmsExtFilterSetFilterModuleOptions();
VmsExtFilterSetOptions();
VmsExtFilterSourceProcessing();
VmsExtHelperReportAllPacketsDropped();
VmsExtIoForwardDirectNicRequest();
VmsExtIoForwardNicRequest();
VmsExtIoGetControlPathHandles();
VmsExtIoPacketRouted();
VmsExtIoPvtTraceOid();
VmsExtIoSetNicState();
VmsExtIoSetPortState();
VmsExtIoTraceIndication();
VmsExtIoTraceOid();
VmsExtMpAdapterShutdownEx();
VmsExtMpCancelDirectOidRequest();
VmsExtMpCancelOidRequest();
VmsExtMpCancelSendNetBufferLists();
VmsExtMpDefaultNicDeliverPDBuffers();
VmsExtMpDefaultNicPacketForward();
VmsExtMpDequeueAllStatusNotifications();
VmsExtMpDevicePnPEvent();
VmsExtMpDirectOidRequest();
VmsExtMpDriverUnload();
VmsExtMpHaltEx();
VmsExtMpIndicateNicStatus();
VmsExtMpIndicatePackets();
VmsExtMpInitializeEx();
VmsExtMpNdisSwitchAddNblDestination();
VmsExtMpNdisSwitchAllocateNblForwardingContext();
VmsExtMpNdisSwitchCopyNblInfo();
VmsExtMpNdisSwitchDereferenceSwitchNic();
VmsExtMpNdisSwitchDereferenceSwitchPort();
VmsExtMpNdisSwitchFreeNblForwardingContext();
VmsExtMpNdisSwitchGetNblDestinations();
VmsExtMpNdisSwitchGetNetBufferListSwitchContext();
VmsExtMpNdisSwitchGrowNblDestinations();
VmsExtMpNdisSwitchReferenceSwitchNic();
VmsExtMpNdisSwitchReferenceSwitchPort();
VmsExtMpNdisSwitchReportFilteredNbls();
VmsExtMpNdisSwitchSetNblSource();
VmsExtMpNdisSwitchSetNetBufferListSwitchContext();
VmsExtMpNdisSwitchUpdateNblDestinations();
VmsExtMpNotifySwitchActivation();
VmsExtMpOidRequest();
VmsExtMpPause();
VmsExtMpProcessPDEgressInjection();
VmsExtMpProcessPDEgressTestInjection();
VmsExtMpProcessPDIngressInjection();
VmsExtMpProcessPDIngressTestInjection();
VmsExtMpPvtDeliverPDBuffersToExtEgress();
VmsExtMpPvtGetValidNicHeader();
VmsExtMpPvtGetValidNicHeaderFromPort();
VmsExtMpPvtHandleMulticastListOid();
VmsExtMpPvtSetNblSource();
VmsExtMpQueueStatusNotification();
VmsExtMpRestart();
VmsExtMpRestartExtensibleStack();
VmsExtMpReturnNetBufferLists();
VmsExtMpSendNetBufferLists();
VmsExtMpSendPDBuffers();
VmsExtMpSwitchPortPropertiesEnumerate();
VmsExtMppOidSwitchNicArrayHandler();
VmsExtMppOidSwitchNicOidRequestHandler();
VmsExtMppOidSwitchNicRestoreHandler();
VmsExtMppOidSwitchNicSaveHandler();
VmsExtMppOidSwitchNicStateChange();
VmsExtMppOidSwitchParametersHandler();
VmsExtMppOidSwitchPortArrayHandler();
VmsExtMppOidSwitchPortPropertiesEnumHandler();
VmsExtMppOidSwitchPortStateChange();
VmsExtMppOidSwitchPropertiesEnumHandler();
VmsExtMppOidSwitchPropertyUpdateHandler();
VmsExtPtBindAdapterEx();
VmsExtPtCloseAdapterCompleteEx();
VmsExtPtDeliverPDBuffersToExtIngress();
VmsExtPtDirectOidRequestComplete();
VmsExtPtNetPnPEvent();
VmsExtPtOidRequestComplete();
VmsExtPtOpenAdapterCompleteEx();
VmsExtPtReceiveNetBufferLists();
VmsExtPtReceivePDBuffers();
VmsExtPtRestore();
VmsExtPtRouteNetBufferLists();
VmsExtPtRouteNetBufferListsWithBwCap();
VmsExtPtRoutePDBuffers();
VmsExtPtSaveContinue();
VmsExtPtSaveEnd();
VmsExtPtSaveGetRevisionSpecificInfo();
VmsExtPtSendNetBufferListsComplete();
VmsExtPtSendNetBufferListsCompleteFinal();
VmsExtPtStatusEx();
VmsExtPtUnbindAdapterEx();
VmsExtPtUninstall();
VmsFltGetVLANId();
VmsFltIsIncomingPacketValid();
VmsFltIsolationIsFiltered();
VmsFltIsolationProcessIncomingPacket();
VmsFltPacketFilterIsPacketFiltered();
VmsFltVlanIsFiltered();
VmsFltVlanProcessIncomingPacket();
VmsFltVlanProcessOutgoingPacket();
VmsGetPtNicFromParentSwitch();
VmsGetVmNicMediaTypeSpecificIfType();
VmsIfrLogCreate();
VmsIoExtForwardNetBufferLists();
VmsIoExtMpNdisPDExtProviderAddPDBufferDestination();
VmsIoExtMpNdisPDExtProviderCopyPDBufferInfo();
VmsIoExtMpNdisPDExtProviderDeregisterClient();
VmsIoExtMpNdisPDExtProviderGetFreePDBuffer();
VmsIoExtMpNdisPDExtProviderGetPDBufferClientContext();
VmsIoExtMpNdisPDExtProviderGetPDBufferDestinations();
VmsIoExtMpNdisPDExtProviderGetPDBufferForwardingDetail();
VmsIoExtMpNdisPDExtProviderGetSwitchInfo();
VmsIoExtMpNdisPDExtProviderGrowPDBufferDestinations();
VmsIoExtMpNdisPDExtProviderInjectPDBuffer();
VmsIoExtMpNdisPDExtProviderRegisterClient();
VmsIoExtMpNdisPDExtProviderReturnPDBuffer();
VmsIoExtMpNdisPDExtProviderSetupBufferFromPDBuffer();
VmsIoExtMpNdisPDExtProviderUpdatePDBufferDestinations();
VmsIoWnvAllocateNblContext();
VmsIoWnvCompleteNetBufferLists();
VmsIoWnvEnumNicProperty();
VmsIoWnvForwardNetBufferLists();
VmsIoWnvFreeNblContext();
VmsIoWnvGetFilterContext();
VmsIoWnvGetNicList();
VmsIoWnvGetNicLuid();
VmsIoWnvInjectNicUpdate();
VmsIoWnvInjectOidSync();
VmsIoWnvInjectStatusIndication();
VmsIoWnvNblCopyNetBufferListInfo();
VmsIoWnvNblSetSource();
VmsIoWnvNicConnect();
VmsIoWnvNicCreate();
VmsIoWnvNicDelete();
VmsIoWnvNicDisconnect();
VmsIoWnvNicUpdate();
VmsIoWnvPolicyChanged();
VmsIoWnvProcessOidCompletion();
VmsIoWnvProcessOidRequest();
VmsIoWnvSetFilterContext();
VmsIoWnvSwitchCreate();
VmsIoWnvSwitchInit();
VmsIoctlGetLegacyInfo();
VmsIoctlInitialize();
VmsIoctlValidateDataBase();
VmsIovActivateVPort();
VmsIovAllocateMacFilters();
VmsIovAllocateMacFiltersForNic();
VmsIovAllocateMacFiltersOnProtocolNic();
VmsIovAllocateVF();
VmsIovCreatePfVPort();
VmsIovDecrementPendingVfRevokeCount();
VmsIovDeleteMacFilters();
VmsIovDeleteVPort();
VmsIovDeleteVPortOnPtNic();
VmsIovFilterExistsOnVPort();
VmsIovFreeVF();
VmsIovGetDefaultSwitchConfig();
VmsIovGetNicFromVPortId();
VmsIovHandleDataPathSwitch();
VmsIovIsIovSupported();
VmsIovMoveFiltersToDefaultVPort();
VmsIovMoveFiltersToVPort();
VmsIovPvtIssueOidToCreateVPort();
VmsIovPvtIssueOidToDeleteVF();
VmsIovReAssignVFIfPossible();
VmsIovRevokeVFIfAssigned();
VmsIovRevokeVFIfAssignedWorkItem();
VmsIovRevokeVfsOnSwitch();
VmsIovSwitchRevokeVFCallback();
VmsIovUpdateGftVportStatus();
VmsIovUpdateMacFilters();
VmsIovUpdateVfMacFilters();
VmsIsQueueUnderLowLoad();
VmsMcGetFlowTableSize();
VmsMcNicHandleRssParametersChange();
VmsMcNicRestoreNicVarData();
VmsMcNicSaveNicVarData();
VmsMcNicStateRestore();
VmsMcpIsOidSupported();
VmsMcpQuerySupportedOidList();
VmsMpCommonGetEnabledReceiveChecksums();
VmsMpCommonInitialize();
VmsMpCommonIpsecEnable();
VmsMpCommonPvtHandleIsolationConfig();
VmsMpCommonPvtHandleMulticastOids();
VmsMpCommonPvtInitializeSupportedOffloadsNdis6();
VmsMpCommonPvtInitializeSupportedOffloadsNdis61();
VmsMpCommonPvtQueryRequestCommon();
VmsMpCommonPvtQueryRequestNdis5();
VmsMpCommonPvtQueryRequestNdis6();
VmsMpCommonPvtSetNetworkAddress();
VmsMpCommonPvtSetRequestCommon();
VmsMpCommonPvtSetRequestNdis5();
VmsMpCommonPvtSetRequestNdis6();
VmsMpCommonPvtSetTcpOffloadParameters();
VmsMpCommonQueryRequest();
VmsMpCommonSetOffload();
VmsMpCommonSetRequest();
VmsMpInitializeNic();
VmsMpNicAdapterShutdownEx();
VmsMpNicCancelDirectOidRequest();
VmsMpNicCancelOidRequest();
VmsMpNicCancelSendNetBufferLists();
VmsMpNicCloseNDKAdapterHandler();
VmsMpNicCreate();
VmsMpNicCreateLW();
VmsMpNicCreateOrEnableAll();
VmsMpNicDelete();
VmsMpNicDevicePnPEvent();
VmsMpNicDirectOidRequest();
VmsMpNicDriverUnload();
VmsMpNicHaltEx();
VmsMpNicIndirectionTableUpdateWorker();
VmsMpNicInitializeEx();
VmsMpNicIsStarted();
VmsMpNicLinkStateChanged();
VmsMpNicLogAndUpdateServicingState();
VmsMpNicOidRequest();
VmsMpNicOpenNDKAdapterHandler();
VmsMpNicPause();
VmsMpNicPauseNdisStack();
VmsMpNicPvtContextCleanup();
VmsMpNicPvtDeliverPDBuffers();
VmsMpNicPvtDoReceiveChecksum();
VmsMpNicPvtEnable();
VmsMpNicPvtIndicate();
VmsMpNicPvtOidSetRequest();
VmsMpNicPvtPacketForward();
VmsMpNicPvtPacketRouted();
VmsMpNicPvtPinMacAddress();
VmsMpNicPvtReceiveRssProcessNblGroup();
VmsMpNicPvtRssGetReceiveProc();
VmsMpNicPvtSendStatus();
VmsMpNicPvtSetPortInfo();
VmsMpNicPvtUpdateNdisStack();
VmsMpNicRestart();
VmsMpNicRestore();
VmsMpNicReturnNetBufferLists();
VmsMpNicSave();
VmsMpNicSendComplete();
VmsMpNicSendCompleteDecrementRoutedCount();
VmsMpNicSendNetBufferLists();
VmsMpNicSendNetBufferListsCompleteWithRss();
VmsMpNicSendStatusIndication();
VmsMpNicSetOptionsHandler();
VmsMpNicUpdateIndirectionTable();
VmsMpNicUplinkConnectStateChange();
VmsMpPvtNicCreateOrEnable();
VmsNblAddSingleDestinationToChain();
VmsNblGenerateToeplitzRssHash();
VmsNblHelperAllocateMdlAndData();
VmsNblHelperAllocateNetBufferAndNetBufferList();
VmsNblHelperAllocateNetBufferListContext();
VmsNblHelperAppendNblsMoveLast();
VmsNblHelperApplySingleDestinationToChain();
VmsNblHelperCalculateContextSize();
VmsNblHelperCleanupNblContext();
VmsNblHelperCleanupRoutingContext();
VmsNblHelperCommitDestinations();
VmsNblHelperCompleteNbls();
VmsNblHelperCopyDestinations();
VmsNblHelperCopyNblDestinations();
VmsNblHelperCreateCloneNbl();
VmsNblHelperCreateDuplicateNblForInspection();
VmsNblHelperCreateDuplicateNblsCopyData();
VmsNblHelperCreateFragmentNbl();
VmsNblHelperCreateWnvDuplicateNbls();
VmsNblHelperDestinationGroupNetBufferLists();
VmsNblHelperExtractDuplicateInspectionNbls();
VmsNblHelperFreeDestinations();
VmsNblHelperFreeDuplicateNbl();
VmsNblHelperFreeNetBufferList();
VmsNblHelperFreeNetBufferListContext();
VmsNblHelperGetOrGrowDestinations();
VmsNblHelperGetSwitchNblContext();
VmsNblHelperGrowDestinations();
VmsNblHelperIncrementSuccessCsoStats();
VmsNblHelperInitializeContext();
VmsNblHelperInitializeNblContext();
VmsNblHelperInitializeOriginalNbl();
VmsNblHelperIsDestinationGroup();
VmsNblHelperIsPortInDestinations();
VmsNblHelperRefCountDecrement();
VmsNblHelperRefCountDecrementMany();
VmsNblHelperRefCountIncrement();
VmsNblHelperSetSourceInContext();
VmsNblHelperSetSwitchNblContext();
VmsNblHelperUpdateDestinationForwardingDetail();
VmsNblHelperVerifyRefCount();
VmsNblHelperVerifyRoutedRefCount();
VmsNblHelperVerifySingleSourcePort();
VmsNblUpdateDestinationForSet();
VmsNdkCloseNDKAdapterHandler();
VmsNdkCreatePfVPortForRdma();
VmsNdkGetNicFromVPortId();
VmsNdkHandleOidRequest();
VmsNdkOpenNDKAdapterHandler();
VmsNdkRequestRdma();
VmsNdkRequestRdmaForHostVNic();
VmsNdkRequestRdmaForVmNic();
VmsNdkScheduleSendPnPEventWorkItem();
VmsNdkSendPendingRdmaRequests();
VmsNdkSendPnPEvent();
VmsNdkSendPnPEventToAllMiniports();
VmsNdkSendPnPEventWorkerRoutine();
VmsNdkSetVPortNdkParams();
VmsNdkUpdateVPortParamsForNdk();
VmsNeighborSolicitationValidator();
VmsOidMaxRetryCountReached();
VmsOidRequestSync();
VmsOmAllocateWorkItem();
VmsOmAssertIoctlMutexIsHeld();
VmsOmCreateObjectRegistryKey();
VmsOmDeInitialize();
VmsOmDeleteObjectRegistryKey();
VmsOmFindNicInitialized();
VmsOmFindNicInitialized$fin$0();
VmsOmFindNicUnsafe();
VmsOmFindPortInitialized();
VmsOmFindPortInitialized$fin$0();
VmsOmFindProtocolNicObject();
VmsOmFindSwitchInitialized();
VmsOmFindSwitchInitialized$fin$0();
VmsOmFindSwitchUnsafe();
VmsOmFreeWorkItem();
VmsOmGetNicCountUnsafe();
VmsOmGetPropertiesFromInMemory();
VmsOmGetPropertyFromInMemory();
VmsOmInitialize();
VmsOmInitializeWorkItem();
VmsOmIsObjectMarkedForDeletion();
VmsOmIsPortHandleRefZero();
VmsOmLockInitialize();
VmsOmMarkObjectConfigDeletion();
VmsOmNicAssignMacAddress();
VmsOmNicChannelSuspended();
VmsOmNicConnect();
VmsOmNicConnect$fin$0();
VmsOmNicConnect$fin$1();
VmsOmNicConnect$fin$2();
VmsOmNicConnect$fin$3();
VmsOmNicCopyDataUnsafe();
VmsOmNicCopyIndexInfoUnsafe();
VmsOmNicCreate();
VmsOmNicDecrementControlCount();
VmsOmNicDecrementDefaultForwardedCount();
VmsOmNicDecrementDefaultRoutedCount();
VmsOmNicDecrementForwardedCount();
VmsOmNicDecrementRoutedCount();
VmsOmNicDelete();
VmsOmNicDelete$fin$0();
VmsOmNicDelete$fin$1();
VmsOmNicDisconnect();
VmsOmNicDisconnect$fin$0();
VmsOmNicDisconnect$fin$1();
VmsOmNicGetDropReasonsStatsUnsafe();
VmsOmNicGetDropReasonsStatsUnsafeLegacy();
VmsOmNicGetMediaConnectState();
VmsOmNicGetPtNic();
VmsOmNicGetStatsUnsafe();
VmsOmNicGetUnhashedPacketsStatsUnsafe();
VmsOmNicGetUplinkSpeed();
VmsOmNicGetVRSSIndirectionEntries();
VmsOmNicGetVlan();
VmsOmNicHandleLinkChangeNotifyIrp();
VmsOmNicHandleLinkChangeNotifyIrp$fin$0();
VmsOmNicHandleSwitchUplinkConnectChange();
VmsOmNicHandleUpLinkChangeNotifyIrp();
VmsOmNicHandleUpLinkChangeNotifyIrp$fin$0();
VmsOmNicHeaderAllocate();
VmsOmNicHeaderGetRoutedPacketCount();
VmsOmNicHeaderInitialize();
VmsOmNicHeaderUninitialize();
VmsOmNicIncrementControlCount();
VmsOmNicIncrementDefaultForwardedCount();
VmsOmNicIncrementDefaultRoutedCount();
VmsOmNicIncrementForwardedCount();
VmsOmNicIncrementRoutedCount();
VmsOmNicIsControlReferenceCountNonZero();
VmsOmNicIsDataReferenceCountNonZero();
VmsOmNicIsIndexControlReferenceCountNonZero();
VmsOmNicIsIndexDataReferenceCountNonZero();
VmsOmNicIsIndexReferenceCountNonZero();
VmsOmNicIsMediaIndicationEnabled();
VmsOmNicIsReferenceCountNonZero();
VmsOmNicIsolationStateChanged();
VmsOmNicLinkStateChanged();
VmsOmNicMgmtFinalDisableVrss();
VmsOmNicNetworkLayerAddressAssign();
VmsOmNicPacketFilterAssign();
VmsOmNicPreStoreConfigForTeamMemberNic();
VmsOmNicPropagateGuestRssState();
VmsOmNicPvtCancelLinkChangeIrp();
VmsOmNicPvtCancelUpLinkChangeIrp();
VmsOmNicPvtCompleteLinkChangeIrp();
VmsOmNicPvtCompleteUpLinkChangeIrp();
VmsOmNicPvtDisconnect();
VmsOmNicPvtDisconnect$fin$0();
VmsOmNicPvtDisconnect$fin$1();
VmsOmNicPvtNotifyUplinkStateChange();
VmsOmNicResume();
VmsOmNicSendMultipleOids();
VmsOmNicSendWnvNicUpdate();
VmsOmNicSetInfo();
VmsOmNicSetInfo$fin$0();
VmsOmNicSetPortInfo();
VmsOmNicSetPortInfo$fin$0();
VmsOmNicStoreConfig();
VmsOmNicSuspendedLmFinished();
VmsOmNicSuspendedLmStarted();
VmsOmNicTranslatePortInfoToDisposition();
VmsOmNicUpLinkStateChanged();
VmsOmNicUpdateExtensions();
VmsOmNicUpdateExtensionsWorkItem();
VmsOmNicUpdateMacSpoofing();
VmsOmNicValidateExtensionRequirements();
VmsOmNicVmSuspended();
VmsOmObjectLockExclusive();
VmsOmObjectLockShared();
VmsOmObjectPrepareForConfigStore();
VmsOmObjectUnlockExclusive();
VmsOmPortAclInitialize();
VmsOmPortAclUninitialize();
VmsOmPortCleanupFlowEntries();
VmsOmPortCopyDataUnsafe();
VmsOmPortCreate();
VmsOmPortCreate$fin$0();
VmsOmPortCreate$fin$1();
VmsOmPortDelete();
VmsOmPortDelete$fin$0();
VmsOmPortDelete$fin$1();
VmsOmPortDelete$fin$2();
VmsOmPortDeleteIsolationTrunkTable();
VmsOmPortEmptyFlowHashTable();
VmsOmPortGetStats();
VmsOmPortInfoSet();
VmsOmPortInfoSet$fin$0();
VmsOmPortInitializePlanSettings();
VmsOmPortIsIovConflictingPoliciesPresent();
VmsOmPortMonitorModeSet();
VmsOmPortProfileUninitialize();
VmsOmPortPropertyDeleteConfig();
VmsOmPortPropertyDeleteConfig$fin$0();
VmsOmPortPropertyStoreConfig();
VmsOmPortPropertyStoreConfig$fin$0();
VmsOmPortPropertyVlanSet();
VmsOmPortPropertyVlanValidate();
VmsOmPortSetRequiredExtensions();
VmsOmPortSetRequiredExtensions$fin$0();
VmsOmPortUpdateIsolationTrunk();
VmsOmPortVlanInfoGet();
VmsOmPortVlanInfoSet();
VmsOmQueueWorkItem();
VmsOmRoutingDomainUninitialize();
VmsOmSwitchBandwidthStatusGet();
VmsOmSwitchCleanupDefaultObjects();
VmsOmSwitchCopyDataUnsafe();
VmsOmSwitchCopyDefaultQueueOffloadInfo();
VmsOmSwitchCopyNicArrayDataSafe();
VmsOmSwitchCopyPortArrayDataSafe();
VmsOmSwitchCreate();
VmsOmSwitchCreateDefaultObjects();
VmsOmSwitchDelete();
VmsOmSwitchDelete$fin$0();
VmsOmSwitchDelete$fin$1();
VmsOmSwitchEnumerateCustomProperties();
VmsOmSwitchGetPortCountUnsafe();
VmsOmSwitchGetStats();
VmsOmSwitchGetType();
VmsOmSwitchHardwareStatusGet();
VmsOmSwitchInfoSet();
VmsOmSwitchInfoSet$fin$0();
VmsOmSwitchInvokeForEachPort();
VmsOmSwitchPerformanceStatusGet();
VmsOmSwitchPropertyDeleteConfig();
VmsOmSwitchPropertyStoreConfig();
VmsOmSwitchRefreshFilterList();
VmsOmSwitchSetDataFlowState();
VmsOmSwitchSetDataFlowStateUnsafe();
VmsOmSwitchStoreConfig();
VmsOmSwitchWaitForPendingData();
VmsOmUpdateVlanOnRdmaNic();
VmsOmWaitForWorkItem();
VmsOmWorkItemWrapper();
VmsOmpCleanupWorkerRoutine();
VmsOmpCreateIpHashTable();
VmsOmpDestroyInMemoryPropertiesHashTable();
VmsOmpDestroyIpHashTable();
VmsOmpEmptyIpHashTable();
VmsOmpFindPortInListUnsafe();
VmsOmpFindSwitchByExtMiniportAdapterInfo();
VmsOmpFindSwitchByExtMiniportAdapterInfo$fin$0();
VmsOmpFreeBinaryConfig();
VmsOmpInMemoryPropertyDelete();
VmsOmpInMemoryPropertyStore();
VmsOmpNicDeleted();
VmsOmpNicGenerateExtOidBitmaskUnsafe();
VmsOmpNicHeaderGetPacketCount();
VmsOmpNicValidateExtensionRequirementsUnsafe();
VmsOmpObjectAllocate();
VmsOmpObjectCleanup();
VmsOmpObjectDereference();
VmsOmpObjectReference();
VmsOmpOpenObjectKey();
VmsOmpPortCleanupFlowEntriesAtDpc();
VmsOmpPortDeleteUnusedIsolationTrunkTableEntries();
VmsOmpPortDeleted();
VmsOmpPortDestroyFlowHashTable();
VmsOmpPortIPSpoofingInfoSet();
VmsOmpPortInMemoryPropertyDelete();
VmsOmpPortInMemoryPropertyDelete$fin$0();
VmsOmpPortInMemoryPropertyStore();
VmsOmpPortInMemoryPropertyStore$fin$0();
VmsOmpPortInitializeFlowTable();
VmsOmpPortPropertiesRestoreConfig();
VmsOmpPortPropertyVlanIsZeroBitmap();
VmsOmpPortRestoreConfig();
VmsOmpPortStoreConfig();
VmsOmpPortUninitializeFlowTable();
VmsOmpPortUpdateIsolationTrunkTableEntries();
VmsOmpPortUpdateStatsUnsafe();
VmsOmpPropertyRestoreConfig();
VmsOmpReadBinaryConfig();
VmsOmpRestoreConfig();
VmsOmpRscStructsAllocateAndInit();
VmsOmpRscStructsFree();
VmsOmpSetPortPropertyOnRestore();
VmsOmpSetSwitchPropertyOnRestore();
VmsOmpSwitchBuildNdisCustomEnumPropertyObject();
VmsOmpSwitchCompleteRestore();
VmsOmpSwitchDeleted();
VmsOmpSwitchInMemoryPropertyDelete();
VmsOmpSwitchInMemoryPropertyDelete$fin$0();
VmsOmpSwitchInMemoryPropertyStore();
VmsOmpSwitchInMemoryPropertyStore$fin$0();
VmsOmpSwitchPropertiesRestoreConfig();
VmsOmpSwitchRestoreConfig();
VmsOmpSwitchStormLimitInitialize();
VmsOmpSwitchUpdateNicStackEntryCallback();
VmsOmpSwitchUpdateStormPackets();
VmsOmpSwitchValidateRequirementsCallback();
VmsOmpWaitForVFsToBeRevoked();
VmsOmpWaitForVFsToBeRevoked$fin$0();
VmsOmpWriteBinaryConfig();
VmsPDAcquireRssPdqSet();
VmsPDAllocateBufferSet();
VmsPDAppendPDBuffers();
VmsPDBufferIsDestinationGroup();
VmsPDCheckAndCreateBmGroupForSwitch();
VmsPDCloseProvider();
VmsPDConfigureAwmOnEC();
VmsPDConfigureAwmOnQueue();
VmsPDConvertNblToPDBuffer();
VmsPDConvertPDBufferToNbl();
VmsPDConvertPDMetaDataToNblOOB();
VmsPDCopyDestinations();
VmsPDCountNumBytesAndPackets();
VmsPDCreateTransmitQueue();
VmsPDCreateTransmitQueues();
VmsPDDeleteTransmitQueues();
VmsPDDrainQueue();
VmsPDExecuteCommandOnEC();
VmsPDFreeAllBufferSets();
VmsPDGetBasicHeaderInfo();
VmsPDGetNumberOfPartialBuffersInChain();
VmsPDGetTrafficClassId();
VmsPDGetTransmitQueue();
VmsPDInitializePDBuffers();
VmsPDInjectBuffersFromExtension();
VmsPDIsPDSupported();
VmsPDOpenProvider();
VmsPDPerformOperationOnAllECs();
VmsPDPerformOperationOnEC();
VmsPDPopPDBuffers();
VmsPDProcessPDConfigChange();
VmsPDProcessQueueStateChange();
VmsPDPushPDBuffers();
VmsPDPushPDBuffersWithoutScrub();
VmsPDPvtAllocateECBlock();
VmsPDPvtConvertPDBufferToNblFinalize();
VmsPDPvtConvertPDBufferToSingleNbl();
VmsPDPvtECWorker();
VmsPDPvtFreeECBlock();
VmsPDPvtGetNicSwitchVPortFromNicIndex();
VmsPDPvtGroupAffinityToNode();
VmsPDPvtHandleCreateReceiveQueue();
VmsPDPvtPerformOperationForAllNics();
VmsPDPvtProcessPDConfigChangeWorkItem();
VmsPDPvtProcessQueueStateChangeWorkItem();
VmsPDPvtProcessShutdown();
VmsPDPvtRunEC();
VmsPDPvtSetNblOOBFromPDMetaData();
VmsPDPvtSetupAllECs();
VmsPDPvtSwitchDataPathModeWorkItem();
VmsPDPvtTeardownAllECs();
VmsPDReAcquirePDAccess();
VmsPDReSetupQueues();
VmsPDReSetupQueuesForAllNics();
VmsPDReadRegistrySettings();
VmsPDReleaseRssPdqSet();
VmsPDRemoveQueueFromECList();
VmsPDReturnPDBuffers();
VmsPDRevokePDAccess();
VmsPDSendRssOid();
VmsPDSetContextInfoForPartialBuffers();
VmsPDSetCsoMetaDataForInternalForward();
VmsPDSetPDMetaData();
VmsPDSetupPDAccess();
VmsPDSetupPDAccessForAllNics();
VmsPDSetupPDAccessForSubChannels();
VmsPDSetupPDBuffersForAllECs();
VmsPDSetupPDBuffersForEC();
VmsPDSwitchDataPathMode();
VmsPDSwitchDataPathModeUnsafe();
VmsPDWaitDrainOneItem();
VmsPdAllocatePdBatchPacket();
VmsPktAdvanceNetBuffer();
VmsPktAllocateAndBuildArpPacket();
VmsPktAllocateAndBuildIcmpPacket();
VmsPktCheckForIpSpoofing();
VmsPktExtractEthernetHeader();
VmsPktFreeArpPacket();
VmsPktFreeIcmpPacket();
VmsPktGetDropReason();
VmsPktMonRegisterComponentsCallback();
VmsPktMonRegisterExtNic();
VmsPktMonRegisterHostVnic();
VmsPktMonRegisterNic();
VmsPktMonRegisterProtocolNic();
VmsPktMonRegisterVmNic();
VmsPktParseArpPacket();
VmsPktParseDhcpPacket();
VmsPktParseDhcpV6Packet();
VmsPktParseGrePacket();
VmsPktParseIPv4Packet();
VmsPktParseIPv6ExtensionHeaders();
VmsPktParseIPv6Packet();
VmsPktParseIcmpV4Packet();
VmsPktParseIcmpV6Packet();
VmsPktParseNeighborAdvertisementPacket();
VmsPktParseNeighborSolicitationPacket();
VmsPktParseTcpPacket();
VmsPktParseUdpPacket();
VmsPktParseVxlanPacket();
VmsPktPvtAdvanceFlatBuffer();
VmsPktPvtGetDataFlatBuffer();
VmsPktPvtGetLengthFlatBuffer();
VmsPktPvtGetLengthNetBuffer();
VmsPktPvtGetRoutingKeys();
VmsPktPvtRetreatFlatBuffer();
VmsPktReportDropWithReason();
VmsPktReportDroppedNbl();
VmsPktReportDroppedNblChain();
VmsPktReportDroppedPDList();
VmsPktReportDroppedPacket();
VmsPktReportDroppedPacketEx();
VmsPktReportDroppedPacketOnSwitch();
VmsPktRetreatNetBuffer();
VmsPktUtilCheckIfAddressExists();
VmsPlanActivate();
VmsPlanAddCostToProcessor();
VmsPlanAddProcessor();
VmsPlanAdjustAfterPrimaryCpuMove();
VmsPlanAdjustQueuePairs();
VmsPlanAllocateIndirectionTable();
VmsPlanApplyDpcAdjustmentIfNecessary();
VmsPlanAssertCpuCostInvariants();
VmsPlanAssertCpuCountInvariants();
VmsPlanAssertMaxQueuesForRestrictedNic();
VmsPlanAssignCpusStatically();
VmsPlanAssignRepeatPattern();
VmsPlanBuild();
VmsPlanCalculateAllowedCpuSet();
VmsPlanCalculateIsPrimaryCpuExcluded();
VmsPlanCleanup();
VmsPlanClear();
VmsPlanClearParameters();
VmsPlanConnect();
VmsPlanDeactivate();
VmsPlanDisableAffinitization();
VmsPlanDisconnect();
VmsPlanEnableAffinitization();
VmsPlanEvaluate();
VmsPlanFindLeastLoadedCpu();
VmsPlanFindSwapEntryIndex();
VmsPlanGetActualNumberOfCpus();
VmsPlanGetActualNumberOfHwQueuesFromQueuePairs();
VmsPlanGetCurrentVmbusChannelAffinityPolicy();
VmsPlanGetPlannedPrimaryCpuIndex();
VmsPlanGetPlannedProcessorForEntry();
VmsPlanGetPlannedVmbusChannelAffinityPolicy();
VmsPlanGetProcessorForEntryEx();
VmsPlanHasIndirectionTableEntryChanged();
VmsPlanInitializeDomainForProtocolNic();
VmsPlanIsAdapterRssCpu();
VmsPlanIsIndirectionTableAffinitized();
VmsPlanIsVmmqBeingTurnedOn();
VmsPlanIsVrssBeingTurnedOff();
VmsPlanIsVrssBeingTurnedOn();
VmsPlanParametersGetIndirectionTableOccurrences();
VmsPlanReconcileIndirectionTable();
VmsPlanRemoveProcessor();
VmsPlanSetCurrentAffinitizationDisabled();
VmsPlanSetCurrentAffinitizationEnabled();
VmsPlanSetCurrentStateToPlanned();
VmsPlanSetCurrentVmmqDisabled();
VmsPlanSetCurrentVmmqEnabled();
VmsPlanSetCurrentVrssDisabled();
VmsPlanSetCurrentVrssEnabled();
VmsPlanSetNumaProcessorSet();
VmsPlanSetPlannedProcessorForEntry();
VmsPlanSetPlannedProcessorForEntryIfAllowedByQuota();
VmsPlanSetProcessorForEntry();
VmsPlanSettingGetNumberOfHwQueues();
VmsPlanSettingsAssertCpuCountInvariants();
VmsPlanSettingsCleanup();
VmsPlanSettingsInitialize();
VmsPlanUpdateGuestIndirectionTable();
VmsPlanUpdateGuestParameters();
VmsPlanUpdateRequestedParameters();
VmsPlanUpdateStateAfterRssQueueMove();
VmsPlcApplyPolicy();
VmsPlcGetPacketSizeToInspect();
VmsPlcpApplyPolicy();
VmsPlcpPolicyEnforcer();
VmsPmInitialize();
VmsPortMapAssignIdUnsafe();
VmsPortMapDeInitialize();
VmsPortMapGetPortById();
VmsPortMapRevokeIdUnsafe();
VmsPortMapUpdateNextAvailableIdUnsafe();
VmsPortMappAssignIdUnsafe();
VmsPortMappRevokeIdUnsafe();
VmsPtAdjustNumQueuePairsInUse();
VmsPtCalculateChangeInNumQueuePairs();
VmsPtCheckIsEmbeddedTeamingEnabled();
VmsPtGetNicAtIndex();
VmsPtGetVlanIDFromNdisDeviceRegkey();
VmsPtGetVlanIDFromVSwitchNicListRegkey();
VmsPtInitialize();
VmsPtIpsecOffloadDirectOidProcessing();
VmsPtIpsecPortCapDisable();
VmsPtIpsecPortCapEnable();
VmsPtIpsecPortCapResync();
VmsPtIpsecPvtAddOidProcessing();
VmsPtIpsecPvtDelOidProcessing();
VmsPtIpsecPvtLookupSaAndUpdateSadbOnDelSaOid();
VmsPtIpsecPvtValidateAddSaOid();
VmsPtIpsecSendDirectOidToExternalNic();
VmsPtIpsecSwitchCapDisable();
VmsPtIpsecSwitchCapResync();
VmsPtNativeRssActivateSendSpreading();
VmsPtNativeRssCheckCapability();
VmsPtNativeRssCoalesceSendSpreading();
VmsPtNativeRssDeactivateSendSpreading();
VmsPtNativeRssDeactivateSendSpreadingOnSwitch();
VmsPtNativeRssEnableSendSpreading();
VmsPtNativeRssEnableSendSpreadingOnSwitch();
VmsPtNativeRssInitializeRssIndirectionTable();
VmsPtNativeRssInterfaceInitialize();
VmsPtNativeRssIsEnabled();
VmsPtNativeRssPrepareParameters();
VmsPtNativeRssSetParameters();
VmsPtNativeRssUpdateHashKey();
VmsPtNativeRssUpdateSwitchState();
VmsPtNicAddConfiguredNicsToIoctlBuffer();
VmsPtNicAssertMemberAdapter();
VmsPtNicBindAdapterEx();
VmsPtNicCloseAdapterCompleteEx();
VmsPtNicConnectNicIndex();
VmsPtNicConnectNicIndexEx();
VmsPtNicCreateDefaultNicSwitch();
VmsPtNicDeleteDefaultNicSwitch();
VmsPtNicDeleteVmqIdMapping();
VmsPtNicDirectOidRequestComplete();
VmsPtNicDisconnectNicIndex();
VmsPtNicDisconnectNicIndexEx();
VmsPtNicFinalComplete();
VmsPtNicFindNicHeaderByNetCfgId();
VmsPtNicGetConfiguredNicCount();
VmsPtNicGetInfoFromRegistry();
VmsPtNicImmediateSendNetBufferListsToNdis();
VmsPtNicInitNicIndexes();
VmsPtNicIsNblFitforHwCso();
VmsPtNicIsNblFitforHwLso();
VmsPtNicMUXFindProtocolNicMemberByIndex();
VmsPtNicMUXGetAggregateVMQId();
VmsPtNicMUXGetNDISHandleFromIndex();
VmsPtNicMUXHandleWhiteListPrivateOids();
VmsPtNicMUXNotifyConnectToExtStack();
VmsPtNicMUXNotifyDisconnectToExtStack();
VmsPtNicMUXScheduleRebalancingForIovChange();
VmsPtNicMUXScheduleUpdateReservableBandwidthHelper();
VmsPtNicMUXScheduleUpdateVNicsLinkSpeedHelper();
VmsPtNicMUXUpdateHostVNicLinkSpeedWorkItem();
VmsPtNicMUXUpdateReservableBandwidthWorkItem();
VmsPtNicMUXUpdateVmNicLinkSpeed();
VmsPtNicMUXUpdateVmNicLinkSpeedWorkItem();
VmsPtNicMarkVmqAllocPending();
VmsPtNicMuxAggregateNicSwitchCaps();
VmsPtNicMuxCalculateProtocolNicLinkState();
VmsPtNicMuxCalculateProtocolNicTaskOffloadCapsChange();
VmsPtNicMuxCalculateProtocolNicTaskOffloadCapsChangeHelper();
VmsPtNicMuxConsolidateProtocolNicNdisQosSettings();
VmsPtNicMuxCreateNewMemberAdapter();
VmsPtNicMuxDeleteVmqGroup();
VmsPtNicMuxDisconnectAllMemberNics();
VmsPtNicMuxFindMemberAdapterByGuid();
VmsPtNicMuxFindMemberAdapterByGuidInternal();
VmsPtNicMuxFindMemberAdapterByName();
VmsPtNicMuxIndicateStatusNdisQosSettings();
VmsPtNicMuxInitTaskOffloadHWCaps();
VmsPtNicMuxInitTaskOffloadParams();
VmsPtNicMuxManageResources();
VmsPtNicMuxMemberAdapterInitializeNdisQosSettings();
VmsPtNicMuxMemberAdapterUpdateNdisQosOperationalParameters();
VmsPtNicMuxMemberAdapterUpdateOffloadCaps();
VmsPtNicMuxSyncMemberAdaptarToTCPOffloadParameters();
VmsPtNicMuxTaskOffloadFinal();
VmsPtNicMuxTaskOffloadLowestCommonDenominator();
VmsPtNicNetPnPEvent();
VmsPtNicNicStatusHandler();
VmsPtNicOidRequestComplete();
VmsPtNicOpenAdapterCompleteEx();
VmsPtNicProcessPrivateDirectOid();
VmsPtNicProcessPrivateOid();
VmsPtNicProcessPublicOid();
VmsPtNicPvtContextCleanup();
VmsPtNicPvtDeliverPDBuffers();
VmsPtNicPvtHandleVmqCapsChangeWorkItem();
VmsPtNicPvtHandleVmqStatusIndicationWorkItem();
VmsPtNicPvtLinkStateChanged();
VmsPtNicPvtPacketForward();
VmsPtNicPvtPacketRouted();
VmsPtNicPvtPostPDBuffersOnTransmitQueue();
VmsPtNicPvtProcessNicSwitchCapabilitiesChange();
VmsPtNicPvtProcessPrivateOidAsync();
VmsPtNicPvtProcessVmqCapabilitiesChange();
VmsPtNicPvtProcessVmqSingleQueueRebuild();
VmsPtNicPvtReadConnectionInfo();
VmsPtNicPvtReadConnectionInfo$fin$0();
VmsPtNicPvtSendNblImmediateCallout();
VmsPtNicPvtUpdateFriendlyName();
VmsPtNicPvtUpdateNdisStack();
VmsPtNicPvtUpdateNdisStackEx();
VmsPtNicPvtUpdateNicSwitch();
VmsPtNicPvtUpdateVportBasedVmqParameters();
VmsPtNicPvtWriteFriendlyInfo();
VmsPtNicPvtWriteFriendlyInfo$fin$0();
VmsPtNicReallocateResourceWorkerRountine();
VmsPtNicReceiveNetBufferLists();
VmsPtNicRetrieveDefaultNicSwitch();
VmsPtNicSendNetBufferListsComplete();
VmsPtNicSendNetBufferListsCompleteWithRss();
VmsPtNicSendSwitchConfiguration();
VmsPtNicStatusEx();
VmsPtNicUnbindAdapterEx();
VmsPtNicUninstall();
VmsPtNicUpdateCurrentOffloadCache();
VmsPtNicUpdateNicName();
VmsPtNicUpdateVmqIdMapping();
VmsPtPvtAllocateNicIndex();
VmsPtPvtCleanupNicIndex();
VmsPtPvtCopyNdisQosOperationalParameters();
VmsPtPvtDetectReservableBandwidth();
VmsPtPvtDetectTeamingProvider();
VmsPtPvtDirectOidRequestComplete();
VmsPtPvtFindFirstAvailableNicIndex();
VmsPtPvtInitializePtNicNdisQosSettings();
VmsPtPvtInitializeRss();
VmsPtPvtNicMuxSyncMemberAdaptersTCPOffloadWorkitem();
VmsPtPvtNonPagedNxCacheAlignedAllocate();
VmsPtPvtProcessLinkSpeedChangeWorkItem();
VmsPtPvtProcessLinkStateChange();
VmsPtPvtProcessPortStateChange();
VmsPtPvtProcessPortStateChangeWorkItem();
VmsPtPvtProcessPrivateDirectOid();
VmsPtPvtProcessPrivateOid();
VmsPtPvtProcessRssOid();
VmsPtPvtQueryNdisQosSettings();
VmsPtPvtRemovePtNicNdisQosSettings();
VmsPtPvtRssReceiveProcessNblGroup();
VmsPtPvtRssSendCompleteProcessNblGroup();
VmsPtPvtUpdatePDQosSettings();
VmsPtPvtUpdatePDQosSettingsWorkItem();
VmsPtPvtUpdatePtNicNdisQosOperationalParameters();
VmsPtPvtUpdateReservableBandwidth();
VmsPtRssInitialize();
VmsPtRssUpdate();
VmsPtSwitchNetworkChangeBroadcast();
VmsPtSwitchUpdateHostVNicLinkSpeed();
VmsPtSwitchUplinkConnectChangeBroadcast();
VmsPtVmmqMoveMultipleEntries();
VmsPtVrssGetRecvProc();
VmsPtVrssGetSendProc();
VmsPtpFinalCompleteRoutine();
VmsPtpIpsecTranslateAddv2toAddv2Ex();
VmsPtpIpsecUpdateCache();
VmsPtpIpsecUpdateCacheWorkItem();
VmsPtpNetworkChangeBroadcast();
VmsPtpNetworkChangeBroadcastWorkItem();
VmsPtpUplinkConnectChangeBroadcastWorkItem();
VmsPvtQueueGroupAddRssQueueToChannel();
VmsQsAcquireManagementLock();
VmsQsAppendAndFlushIfNeeded();
VmsQsAppendToEvictionList();
VmsQsAppendToSortedListFromTail();
VmsQsAssertManagementLockIsHeld();
VmsQsAttemptToMoveQueue();
VmsQsCoalesceDpc();
VmsQsCpuInitialize();
VmsQsCpuStartTimer();
VmsQsCpuStopTimer();
VmsQsCpuUninitialize();
VmsQsDeinitialize();
VmsQsDirectDpc();
VmsQsDropQueueMoveReference();
VmsQsEnterProcessor();
VmsQsExecuteLocalQueueScheduler();
VmsQsFlushBothLists();
VmsQsFlushPendingSignals();
VmsQsFlushRssV2Context();
VmsQsFlushRssV2ContextOnCurrentProcessor();
VmsQsGetNextDynamicQueue();
VmsQsGetParkingTarget();
VmsQsHandleParkingStateChange();
VmsQsInitialize();
VmsQsInitiateQueueArrivalToPlanned();
VmsQsInitiateQueueArrivalToPrimary();
VmsQsInitiateQueueMove();
VmsQsInitiateQueueMoveAtDispatch();
VmsQsInlineRebalanceRoutine();
VmsQsInsertIntoLocalQueueList();
VmsQsInsertIntoVPortIdGroup();
VmsQsIsRebalanceDue();
VmsQsLeaveProcessor();
VmsQsMgmtDeferredWorkerThread();
VmsQsMgmtDisableDynamicModeAndHardwareInteractions();
VmsQsMgmtDisableVrss();
VmsQsMgmtFetchDeferredWork();
VmsQsMgmtFinalDisableVrss();
VmsQsMgmtHandleParametersChange();
VmsQsMgmtInitializeDeferredQueue();
VmsQsMgmtPerformHealthCheck();
VmsQsMgmtPostDeferredWork();
VmsQsMgmtProcessDeferredWork();
VmsQsMgmtPropagateChanges();
VmsQsMgmtRequestDeferredStateUpdate();
VmsQsMgmtSignalDeferredWork();
VmsQsMgmtUnitializeDeferredQueue();
VmsQsMoveQueueToTargetProcessor();
VmsQsProcessDeferredList();
VmsQsProcessEvictionList();
VmsQsProcessQueues();
VmsQsQueueGroupRequestStatsUpdate();
VmsQsReadUserConfig();
VmsQsReleaseDynamicLock();
VmsQsReleaseManagementLock();
VmsQsRestartTimers();
VmsQsSelectTargetForRebalance();
VmsQsSelectTargetProcessor();
VmsQsSelectTargetProcessorForPrimary();
VmsQsStartQueueMoves();
VmsQsTakeQueueMoveReference();
VmsQsTakeQueueMoveReferenceAtDispatch();
VmsQsTryAcquireDynamicLock();
VmsQsUpdatePerProcessorPacketStats();
VmsQsUpdatePerProcessorRuntimeStats();
VmsQsUpdateQueueDetectorAndToken();
VmsQsV2Initialize();
VmsQsWaitForDynamicMovesToComplete();
VmsQsWaitForQueueMovesToComplete();
VmsQspCpuAssertDuringUninitialize();
VmsQspCpuInitialize();
VmsQspInitializeSearchContextForQueue();
VmsQspPerfGetPointerToCounter();
VmsQspPerfMapHvStats();
VmsQspQueryHypervisorInformation();
VmsQueueGroupActivate();
VmsQueueGroupActivateQueue();
VmsQueueGroupActivateVrssInternal();
VmsQueueGroupAdjustIndirectionTable();
VmsQueueGroupAdjustNumberOfHwQueuesIfNecessary();
VmsQueueGroupAlignSendQueuesWithReceiveCpus();
VmsQueueGroupApplyAffinitizedIndirectionTable();
VmsQueueGroupDisconnect();
VmsQueueGroupExpandIndirectionTable();
VmsQueueGroupFinalizeQueueMoves();
VmsQueueGroupGetProcessorNumberForEntry();
VmsQueueGroupInitialize();
VmsQueueGroupInitializeQueue();
VmsQueueGroupInitiatePrimaryMove();
VmsQueueGroupInitiateQueueMoves();
VmsQueueGroupIsRestrictedQueue();
VmsQueueGroupMovePrimaryQueue();
VmsQueueGroupMovePrimaryQueueIfNecessary();
VmsQueueGroupMoveQueues();
VmsQueueGroupPopScaler();
VmsQueueGroupPushScaler();
VmsQueueGroupResetIndirectionTable();
VmsQueueGroupResetSendIndirectionTable();
VmsQueueGroupResizeIndirectionTable();
VmsQueueGroupSetIndirectionTableSize();
VmsQueueGroupSetNumberOfQueues();
VmsQueueGroupSetPrimaryProcessorIfNecessary();
VmsQueueGroupSetPrimaryProcessorToPlanned();
VmsQueueGroupSetPrimaryProcessorToPlannedIfNecessary();
VmsQueueGroupShrinkIndirectionTable();
VmsQueueGroupUninitialize();
VmsQueueGroupUpdateIndirectionTable();
VmsQueueGroupVrssDisable();
VmsRSSv2ScalerSetIndirectionTableSize();
VmsRSSv2ScalerSetNumberOfQueues();
VmsRSSv2ScalerSetPrimaryProcessor();
VmsRSSv2ScalerUpdateIndirectionTable();
VmsRSSv2SetNumberOfQueues();
VmsReadGlobalParameters();
VmsReadReloadableParameters();
VmsRegisterProtocol();
VmsRemoveHeadEntryFromChain();
VmsRouterAddMonitorDestinations();
VmsRouterCountNetBufferListBytesAndPackets();
VmsRouterDeliverNetBufferLists();
VmsRouterDeliverPDBuffers();
VmsRouterForceRelearn();
VmsRouterForwardPackets();
VmsRouterLearnAndRehash();
VmsRouterLookupPortFromMac();
VmsRouterMacRelearned();
VmsRouterPortAdded();
VmsRouterPortRemoved();
VmsRouterPvtForceRelearnVlanIdArray();
VmsRouterPvtForceRelearnVlanIsolation();
VmsRouterPvtRoutingTimeoutDpc();
VmsRouterPvtSwitchContextCleanup();
VmsRouterPvtUpdateOutgoingStats();
VmsRouterPvtUpdatePacketsFloodedStats();
VmsRouterRebuildDestinationList();
VmsRouterSourceProcessing();
VmsRouterSwitchAdded();
VmsRouterUpdateBypassExtStackStats();
VmsRouterUpdateIncomingStats();
VmsRouterUpdateMacSpoofing();
VmsRssV2Execute();
VmsRssV2Format();
VmsRssV2SendOid();
VmsRssV2SendUpdateOid();
VmsRtlGUIDFromWcharString();
VmsScApplyPortAcl();
VmsScExtendedPortAclAddEntry();
VmsScExtendedPortAclAddFlowEntry();
VmsScExtendedPortAclApply();
VmsScExtendedPortAclDeleteEntry();
VmsScExtendedPortAclEnumEntries();
VmsScExtendedPortAclGetEntry();
VmsScExtendedPortAclGetEntryCount();
VmsScExtendedPortAclValidateEntry();
VmsScIPsecOffloadSAMatchesBannedIpList();
VmsScIPsecOffloadStateInit();
VmsScInitializePrefixTree();
VmsScIpsecHandleOffloadPacketWithMultipleDest();
VmsScIpsecOffloadSaDeRef();
VmsScIpsecOffloadSaLookupAndDeleteFromSadb();
VmsScIpsecUpdateIpsecRecvStats();
VmsScIpsecUpdateIpsecSendStats();
VmsScIpsecUpdateSadbOnAddSaOid();
VmsScPortAclAddEntry();
VmsScPortAclDeleteEntry();
VmsScPortAclEnumEntries();
VmsScPortAclGetEntry();
VmsScPortAclGetEntryCount();
VmsScPortAclGetFeatureStatus();
VmsScPortAclValidateEntry();
VmsScPortIpsecStateCleanup();
VmsScQosApplyBandwidthReservation();
VmsScQosCompleteNbls();
VmsScQosCreateFlow();
VmsScQosCreateLine();
VmsScQosDeinit();
VmsScQosDeleteFlow();
VmsScQosDeleteLine();
VmsScQosDeleteQosPolicy();
VmsScQosDropNbls();
VmsScQosFlushNbls();
VmsScQosInit();
VmsScQosSendNbls();
VmsScQosUpdateFlow();
VmsScQosUpdateLine();
VmsScQosUpdatePortNic();
VmsScQosUpdateReservation();
VmsScQospCleanupFlow();
VmsScQospConvertRateToWeight();
VmsScQospCreateTimerUnits();
VmsScQospDereferenceFlow();
VmsScQospFlowDelay();
VmsScQospFlushDelay();
VmsScQospFlushFlow();
VmsScQospIndicateDelayQueueConsumerEnd();
VmsScQospIndicateTimerUnitConsumerEnd();
VmsScQospInitializeTimerUnit();
VmsScQospInitializeTimerWheelEntry();
VmsScQospLineDereference();
VmsScQospPopulateNblProperties();
VmsScQospSendProcessedNbls();
VmsScQospSetDestNic();
VmsScQospSetFlowTimer();
VmsScQospSetTimer();
VmsScQospStartDelayModule();
VmsScQospStartTimerWheel();
VmsScQospStopTimerWheel();
VmsScQospTimeoutHandler();
VmsScQospUninitializeFlow();
VmsScQospUninitializeTimerUnit();
VmsScUninitializePrefixTree();
VmsScalerAcquireMemberAdapter();
VmsScalerGetDomain();
VmsScalerGetId();
VmsScalerReleaseMemberAdapter();
VmsScalerSetIndirectionTableSize();
VmsScalerSetNumberOfQueues();
VmsScalerSetPrimaryProcessor();
VmsScalerStopTelemetry();
VmsScpEmptyPrefixTree();
VmsScpExtendedPortAclParseIPAddress();
VmsScpExtendedPortAclParseIPString();
VmsScpExtendedPortAclParseNumberString();
VmsScpExtendedPortAclParsePort();
VmsScpExtendedPortAclParsePrefix();
VmsScpExtendedPortAclParseProtocol();
VmsScpExtendedPortAclUpdateFlowState();
VmsScpGetEntryFromInstanceId();
VmsScpGetPropertyFromPrefixEntry();
VmsScpIPsecEntryExistsInBannedIpList();
VmsScpIpsecCleanupLruBannedIpEntries();
VmsScpIpsecCleanupLruBannedIpEntriesAtDpc();
VmsScpIpsecComputeBannedIpSignature();
VmsScpIpsecDatapathCleanupPort();
VmsScpIpsecDatapathCleanupPortAsync();
VmsScpIpsecGenericUpdateHash();
VmsScpIpsecInitializeBannedIpCleanup();
VmsScpIpsecInsertEntryToBannedIpList();
VmsScpIpsecOffloadEgressProcessing();
VmsScpIpsecOffloadInboundProcessing();
VmsScpIpsecOffloadIngressProcessing();
VmsScpIpsecOffloadOutboundProcessing();
VmsScpIpsecOffloadOutboundSecureLookup();
VmsScpIpsecOffloadSaComputeHandlePlusPortSignature();
VmsScpIpsecOffloadSaComputeIpSpiSignature();
VmsScpIpsecOffloadSaInsertToSadb();
VmsScpIpsecOffloadSaLookupFromHandleSadb();
VmsScpIpsecOffloadSaLookupFromIpSpiSadb();
VmsScpIpsecUninitializeBannedIpCleanup();
VmsScpIpsecUpdateBannedIpListForPacket();
VmsScpPortAclAddDefaultPrefixEntry();
VmsScpPortAclAddPrefixEntry();
VmsScpPortAclCreatePrefixEntry();
VmsScpPortAclDeletePrefixEntry();
VmsScpPortAclGetPrefixEntry();
VmsSendCapabilitiesOID();
VmsStartPD();
VmsSwScalerAcquireMemberAdapter();
VmsSwScalerDisableSpreading();
VmsSwScalerEnableSpreading();
VmsSwScalerGetDomain();
VmsSwScalerGetId();
VmsSwScalerInitialize();
VmsSwScalerReleaseMemberAdapter();
VmsSwScalerSetIndirectionTableSize();
VmsSwScalerSetNumberOfQueues();
VmsSwScalerSetPrimaryProcessor();
VmsSwScalerStartTelemetry();
VmsSwScalerStopTelemetry();
VmsSwScalerUninitialize();
VmsSwScalerUpdateIndirectionTable();
VmsTmAddNicToTeam();
VmsTmAddVmsPort();
VmsTmAllocateTimer();
VmsTmCfgMacRebalanceTimer();
VmsTmCreateTeam();
VmsTmDecrementTeamRefCount();
VmsTmFreeAllVMSPortsAndMacs();
VmsTmGenerateStatusIndication();
VmsTmGetMappedNicIndexByObjNic();
VmsTmGetVmsNicArray();
VmsTmIncrementTeamRefCount();
VmsTmInitTeamWithPnP();
VmsTmInitialize();
VmsTmInterceptStatusIndication();
VmsTmIsVmqOidRequest();
VmsTmReceiveNetBufferLists();
VmsTmRemoveAllAggregators();
VmsTmRemoveNicFromTeam();
VmsTmRemoveTeam();
VmsTmRemoveVmsPort();
VmsTmSendCompleteInternalNbls();
VmsTmShouldDropLoopBackPacket();
VmsTmTeamDetach();
VmsTmTeamInitialize();
VmsTmTeamPause();
VmsTmTeamPreDetach();
VmsTmTeamReInitializeWorkItem();
VmsTmTeamRestart();
VmsTmUpdateStubAllocationMaskByObjNic();
VmsTmUpdateVmsPort();
VmsTmUpdateVmsPortCfgMacVlan();
VmsTmVmqInterceptOidRequestWorkItem();
VmsTraceLoggingDirectIoNicConnect();
VmsTraceLoggingExtDefaultNicConnect();
VmsTraceLoggingIoctlOperation();
VmsTraceLoggingMiniportNicConnect();
VmsTraceLoggingNDKAdapterClose();
VmsTraceLoggingNDKAdapterOpen();
VmsTraceLoggingNDKAdapterOpenVMNic();
VmsTraceLoggingNDKAdapterOpenVNic();
VmsTraceLoggingNicChannelAllocate();
VmsTraceLoggingNicConnect();
VmsTraceLoggingNicDisconnect();
VmsTraceLoggingOidOperation();
VmsTraceLoggingProtocolNicConnect();
VmsTraceLoggingSwitchCreate();
VmsTraceLoggingSwitchDelete();
VmsTraceLoggingSwitchPropertyStateChange();
VmsTraceLoggingTeamedNicStateChange();
VmsTraceLoggingTraceEmbeddedTeamingLoadBalacingAlgorithm();
VmsTraceLoggingTraceEmbeddedTeamingNicOperation();
VmsTraceLoggingTraceEmbeddedTeamingTeamOperation();
VmsTraceLoggingUnknownNicConnect();
VmsTraceLoggingVMMQOperation();
VmsTraceLoggingVMMQRequest();
VmsTraceLoggingVMQOperation();
VmsTraceLoggingVNicNdkPnpEvent();
VmsTraceLoggingVNicNdkPnpEventDisable();
VmsTraceLoggingVNicNdkPnpEventEnable();
VmsTraceLoggingVNicRequestRdma();
VmsTraceLoggingVirtualMachineNicConnect();
VmsTraceLoggingVmmqOidFailures();
VmsTrcActivityIdStart();
VmsTrcEvaluatePortFilter();
VmsTrcIsDebugStatus();
VmsTrcLogInitialize();
VmsTrcOnPktCapRundown();
VmsTrcPktCapGetSourceInfo();
VmsTrcPktCapLogPdBuffer();
VmsTrcPktCapLogPdBufferChain();
VmsTrcPktCapSetEnabledLayers();
VmsTrcPortRundownAndApplyTraceFilters();
VmsTrcPvtEvaluatePortFilter();
VmsTrcSwitchRundownAndApplyTraceFilters();
VmsTrcTransferNblActivityId();
VmsTrcVerifierFailure();
VmsUninitializeDriver();
VmsUninitializePD();
VmsUtilComputeFlowSignature();
VmsUtilGetLwfInfo();
VmsUtilInitUnicodeStringSafe();
VmsUtilIsPowerOfTwo();
VmsUtilLockExclusive();
VmsUtilLockShared();
VmsUtilNameLengthInChar();
VmsUtilRoundDownToPowerOfTwo();
VmsUtilRoundUpToPowerOfTwo();
VmsUtilStrMakeRegistryCompliant();
VmsUtilStrMatch();
VmsVmChannelAssignProcToPrimaryChannel();
VmsVmChannelSetProcAssignment();
VmsVmDeinitialize();
VmsVmGetProcessorSet();
VmsVmInitialize();
VmsVmInitilizeVersions();
VmsVmNicChannelAllocateChannel();
VmsVmNicChannelAllocatePrimaryChannel();
VmsVmNicChannelAllocateSubChannels();
VmsVmNicChannelDeleteAllChannels();
VmsVmNicChannelDeleteChannel();
VmsVmNicChannelDeleteSubChannels();
VmsVmNicChannelFindChannelFromProc();
VmsVmNicChannelGetOperationalChannel();
VmsVmNicChannelMoveRssQueue();
VmsVmNicChannelResetProcAssignments();
VmsVmNicChannelTryAssigningProcToChannel();
VmsVmNicChannelUpdateAffinityPolicy();
VmsVmNicCollectInternalStatistics();
VmsVmNicDeepCopyMdl();
VmsVmNicDestroyControlDevice();
VmsVmNicFreeShadowMdl();
VmsVmNicGetIdealProcessorIndexForVpIndex();
VmsVmNicGetInternalStatistics();
VmsVmNicHandleLbfoMacAddressChange();
VmsVmNicMorph();
VmsVmNicMorph$fin$0();
VmsVmNicPartialCopyMdl();
VmsVmNicPause();
VmsVmNicPvtAllocateControlMessages();
VmsVmNicPvtAllowRef();
VmsVmNicPvtBindToHostPDBuffer();
VmsVmNicPvtCalculateSaveBufferSize();
VmsVmNicPvtChannelGetOperationalChannelProcIndex();
VmsVmNicPvtContextCleanup();
VmsVmNicPvtControlMesgSent();
VmsVmNicPvtConvertRndisPacketToNbl();
VmsVmNicPvtConvertRndisPacketToPDBuffer();
VmsVmNicPvtCopyHeadersToHostPDBuffer();
VmsVmNicPvtCreateNetBufferListPool();
VmsVmNicPvtCreateRndisDevice();
VmsVmNicPvtDeliverPDBuffers();
VmsVmNicPvtDeliverPDBuffersDirect();
VmsVmNicPvtDestroyReceiveBuffers();
VmsVmNicPvtDestroySendBuffers();
VmsVmNicPvtDisableOptimizations();
VmsVmNicPvtEnableOptimizations();
VmsVmNicPvtHandleInitMessage();
VmsVmNicPvtInitializeVmbPacket();
VmsVmNicPvtInitializeVmbPacketWithChannel();
VmsVmNicPvtKmclChannelClosed();
VmsVmNicPvtKmclChannelOpened();
VmsVmNicPvtKmclChannelRestorePacket();
VmsVmNicPvtKmclChannelRestoreRndisPacket();
VmsVmNicPvtKmclChannelRestoreSendIndTablePacket();
VmsVmNicPvtKmclChannelRestoreVFAssocPacket();
VmsVmNicPvtKmclChannelRestoreVFSwitchDataPathPacket();
VmsVmNicPvtKmclChannelSavePacket();
VmsVmNicPvtKmclChannelStarted();
VmsVmNicPvtKmclChannelSuspend();
VmsVmNicPvtKmclPacketSent();
VmsVmNicPvtKmclPdPacketSent();
VmsVmNicPvtKmclProcessPacket();
VmsVmNicPvtKmclProcessingComplete();
VmsVmNicPvtLinkStateChanged();
VmsVmNicPvtLogProtocolVersionMismatch();
VmsVmNicPvtPacketForward();
VmsVmNicPvtPacketRouted();
VmsVmNicPvtPacketShortLifetime();
VmsVmNicPvtPauseGuestStack();
VmsVmNicPvtPauseHostStack();
VmsVmNicPvtPrepareForDelete();
VmsVmNicPvtProcessPendingStatusIndications();
VmsVmNicPvtRestoreVmNic();
VmsVmNicPvtRestoreVmNicBase();
VmsVmNicPvtRestoreVmNicV1();
VmsVmNicPvtRestoreVmNicV2();
VmsVmNicPvtRestoreVmNicV3();
VmsVmNicPvtRestoreVmNicVarData();
VmsVmNicPvtResumeGuestStack();
VmsVmNicPvtResumeHostStack();
VmsVmNicPvtRevokeRecieveBufferWorkItem();
VmsVmNicPvtRevokeSendBufferWorkItem();
VmsVmNicPvtRndisDeviceHaltRequest();
VmsVmNicPvtRndisDeviceInitRequest();
VmsVmNicPvtRndisDeviceQueryRequest();
VmsVmNicPvtRndisDeviceResetRequest();
VmsVmNicPvtRndisDeviceSendPackets();
VmsVmNicPvtRndisDeviceSetExRequest();
VmsVmNicPvtRndisDeviceSetRequest();
VmsVmNicPvtRndisHostGetCapabilities();
VmsVmNicPvtRndisHostGetMessageOverhead();
VmsVmNicPvtRndisHostMessageComplete();
VmsVmNicPvtRndisHostMessageSend();
VmsVmNicPvtRndisHostPacketShortLifetime();
VmsVmNicPvtRndisHostReportDrop();
VmsVmNicPvtSendRelearnPacket();
VmsVmNicPvtSendStatus();
VmsVmNicPvtSetMessageHandlerTables();
VmsVmNicPvtSetPortInfo();
VmsVmNicPvtSetReceiveBuffers();
VmsVmNicPvtSetRndisMaxPacketsPerMessage();
VmsVmNicPvtSetSendBuffers();
VmsVmNicPvtShadowByHostPDBuffer();
VmsVmNicPvtValidateAndCaptureGuestPDBuffer();
VmsVmNicPvtVersion1HandleRevokeReceiveBufferMessage();
VmsVmNicPvtVersion1HandleRevokeSendBufferMessage();
VmsVmNicPvtVersion1HandleRndisSendMessage();
VmsVmNicPvtVersion1HandleSendNdisVersionMessage();
VmsVmNicPvtVersion1HandleSendReceiveBufferMessage();
VmsVmNicPvtVersion1HandleSendSendBufferMessage();
VmsVmNicPvtVersion2HandleSendNdisConfigMessage();
VmsVmNicPvtVersion4HandleSwitchDataPathMessage();
VmsVmNicPvtVersion5HandleOidQueryEx();
VmsVmNicPvtVersion5HandleSubChannelMessage();
VmsVmNicPvtVersion6HandleRxPdBatch();
VmsVmNicPvtVersion6HandleTxPdBatch();
VmsVmNicPvtVscCleanup();
VmsVmNicRestore();
VmsVmNicResume();
VmsVmNicSaveBegin();
VmsVmNicSaveContinue();
VmsVmNicSaveEnd();
VmsVmNicSendRssSendIndirectionTableMsg();
VmsVmNicSendStatusInternal();
VmsVmNicSendVFAssociationMesg();
VmsVmNicSendVFSwitchDataPathMessage();
VmsVmNicSuspend();
VmsVmPDCreateQueue();
VmsVmPDDeleteQueue();
VmsVmPDFlushBucket();
VmsVmPDFlushBuckets();
VmsVmPDFlushQueue();
VmsVmPDInitializeGuestPacketDirect();
VmsVmPDPvtAllocateChannel();
VmsVmPDPvtChannelDeleteAllChannels();
VmsVmPDPvtCommitAndUnbindPDBuffer();
VmsVmPDPvtKmclChannelClosed();
VmsVmPDPvtKmclChannelOpened();
VmsVmPDPvtPrepareBucket();
VmsVmPDPvtSendSwitchDatapathMessage();
VmsVmPDPvtShutdownWorkItem();
VmsVmPDPvtTeardown();
VmsVmPDRecyclePDBuffersBoundToVm();
VmsVmPDReturnPDBufferBoundToVm();
VmsVmPauseChannel();
VmsVmResumeChannel();
VmsVmmqApplyDefaultQueueSettings();
VmsVmmqApplyHashToDefaultQueue();
VmsVmmqDisableSpreading();
VmsVmmqEnableSpreading();
VmsVmmqInitialize();
VmsVmmqInitializeForVmqQueue();
VmsVmmqMgmtHandleParametersChange();
VmsVmmqPvtUpdateQueuePlanIndirectionTable();
VmsVmmqSendOid();
VmsVmmqSetDefaultQueueParameters();
VmsVmmqSetNumberOfQueues();
VmsVmmqTelemetryLogOIDFailure();
VmsVmmqTelemetryStartLog();
VmsVmmqTelemetryStopAndTraceLog();
VmsVmmqUninitializeForVmqQueue();
VmsVmmqUpdateOffloadFeatureStatus();
VmsVmmqUpdateQueuePlanStatus();
VmsVmnicPvtAllocateVmqWorkItem();
VmsVmpGetHighestAllowedProtocolIndex();
VmsVmpGetProtocolVersionIndex();
VmsVmqAcquireMemberAdapter();
VmsVmqAllocateNblRefCounters();
VmsVmqAssignToNic();
VmsVmqCreateVmqGroup();
VmsVmqCreateVmqGroupsOnPtNic();
VmsVmqDeleteVmqGroup();
VmsVmqDeleteVmqGroupsOnPtNic();
VmsVmqDoVmqOperation();
VmsVmqExtractVlansFromRoutingDomains();
VmsVmqFindGroup();
VmsVmqFindProtocolNicObject();
VmsVmqGetFirstMemberNicPlan();
VmsVmqGetNicIndex();
VmsVmqInitialize();
VmsVmqIsMinModeVmqGroupsProcSetValid();
VmsVmqIsNblRefCountZero();
VmsVmqIsVmqGroupsProcSetValid();
VmsVmqMinModeCreateVmqGroupOnPtNic();
VmsVmqPvtAllocateHardwareResources();
VmsVmqPvtAllocateVmq();
VmsVmqPvtAllocateVmqAndPropagateChanges();
VmsVmqPvtAllocateVmqForNic();
VmsVmqPvtAllocateVmqsOnPtNic();
VmsVmqPvtCompleteAllQueueAllocationsOnPtNic();
VmsVmqPvtCompleteQueueAllocationForNic();
VmsVmqPvtDeleteAllFiltersOnVmq();
VmsVmqPvtDeleteFilterOnVmq();
VmsVmqPvtDeleteVmq();
VmsVmqPvtDeleteVmqOnNic();
VmsVmqPvtDeleteVmqsOnPtNic();
VmsVmqPvtHandleVlanIdConfig();
VmsVmqPvtSetFiltersOnVmq();
VmsVmqPvtSetPrimaryProcessor();
VmsVmqPvtTraceAllocation();
VmsVmqRecreate();
VmsVmqRemoveFromNic();
VmsVmqRemoveVmqFromGroup();
VmsVmqScalerAcquireMemberAdapter();
VmsVmqScalerDisableSpreading();
VmsVmqScalerEnableSpreading();
VmsVmqScalerGetDomain();
VmsVmqScalerGetId();
VmsVmqScalerInitialize();
VmsVmqScalerReleaseMemberAdapter();
VmsVmqScalerSetIndirectionTableSize();
VmsVmqScalerSetNumberOfQueues();
VmsVmqScalerSetPrimaryProcessor();
VmsVmqScalerStartTelemetry();
VmsVmqScalerStopTelemetry();
VmsVmqScalerUpdateIndirectionTable();
VmsVmqSendReceiveFilterSetFilterOid();
VmsVmqSetMacFilter();
VmsVmqSetVmqGroup();
VmsVmqSumModeUpdateVmqGroupsOnPtNic();
VmsVrssAllocateNblGroupPool();
VmsVrssCheckWatchdog();
VmsVrssDpc();
VmsVrssExclusiveThreadedDpc();
VmsVrssInitialize();
VmsVrssInitializeRssConfig();
VmsVrssInitializeRssQueue();
VmsVrssPvtCleanupWorkerThread();
VmsVrssPvtConfigureDpc();
VmsVrssPvtCreateWorkerThread();
VmsVrssPvtDataProcessingRoutine();
VmsVrssPvtDrainBreakerQueue();
VmsVrssPvtFetchAllNblGroupsFromQueue();
VmsVrssPvtFindNblGroup();
VmsVrssPvtGetOneNblGroupFromQueue();
VmsVrssPvtPushNblGroupToQueue();
VmsVrssSetDefaultHostRssConfig();
VmsVrssStandardThreadedDpc();
VmsVrssUninitializeRssConfig();
VmsVrssUninitializeRssQueue();
VmsVrssUpdateHostRssConfig();
VmsVrssWorkerThread();
VmsVrssWorkerThreadCallout();
VmsWppEnableCallback();
VmsWppMacFiltersRundown();
VmsWppNicRundown();
VmsWppPortRundown();
VmsWppProtocolNicRundown();
VmsWppSwitchRundown();
VmsWppTraceOidCompletion();
VncChecksumVerifyHeaders();
VncDeferredChecksumIcmpMessageNetBuffer();
VncDeferredChecksumIpv4HeaderNetBuffer();
VncDeferredChecksumMdlChain();
VncDeferredCopyMdlChainData();
VncDeferredCopyNetBufferData();
VncFlushBatchRndisContext();
VncGetOffsetAfterIpHeader();
VncGetTcpDataOffset();
VncGetTxChecksumOffloadInfo();
VncReduceMdlChain();
VncVerifyChecksumIpv4HeaderNBL();
VncVerifyChecksumTransportHeaderFlatBuffer();
VncVerifyChecksumTransportHeaderNBL();
VsmPtNicMuxDisconnectMemberNic();
WPP_RECORDER_SF_();
WPP_RECORDER_SF_D();
WPP_RECORDER_SF_DD();
WPP_RECORDER_SF_DDD();
WPP_RECORDER_SF_DDDD();
WPP_RECORDER_SF_DDDDDDDd();
WPP_RECORDER_SF_DDDDDDd();
WPP_RECORDER_SF_DDDDLDDd();
WPP_RECORDER_SF_DDDDd();
WPP_RECORDER_SF_DDDLd();
WPP_RECORDER_SF_DDDd();
WPP_RECORDER_SF_DDLZZZd();
WPP_RECORDER_SF_DDLd();
WPP_RECORDER_SF_DDd();
WPP_RECORDER_SF_DDq();
WPP_RECORDER_SF_DL();
WPP_RECORDER_SF_DLIL();
WPP_RECORDER_SF_DLL();
WPP_RECORDER_SF_DLd();
WPP_RECORDER_SF_Dd();
WPP_RECORDER_SF_Dll();
WPP_RECORDER_SF_Dqdqqqd();
WPP_RECORDER_SF_H();
WPP_RECORDER_SF_HDDHd();
WPP_RECORDER_SF_HDDd();
WPP_RECORDER_SF_HDHd();
WPP_RECORDER_SF_HDd();
WPP_RECORDER_SF_HDqD();
WPP_RECORDER_SF_HH();
WPP_RECORDER_SF_HHH();
WPP_RECORDER_SF_HHd();
WPP_RECORDER_SF_HHd_guid_dd();
WPP_RECORDER_SF_HHqd();
WPP_RECORDER_SF_HLd();
WPP_RECORDER_SF_H_guid__guid_qDd();
WPP_RECORDER_SF_Hd();
WPP_RECORDER_SF_I();
WPP_RECORDER_SF_IDDd();
WPP_RECORDER_SF_II();
WPP_RECORDER_SF_Id();
WPP_RECORDER_SF_IdDd();
WPP_RECORDER_SF_Iddq();
WPP_RECORDER_SF_IsDL();
WPP_RECORDER_SF_L();
WPP_RECORDER_SF_LDDD();
WPP_RECORDER_SF_LDLd();
WPP_RECORDER_SF_LDd();
WPP_RECORDER_SF_LDlLd();
WPP_RECORDER_SF_LL();
WPP_RECORDER_SF_LLD();
WPP_RECORDER_SF_LLDLd();
WPP_RECORDER_SF_LLDd();
WPP_RECORDER_SF_LLHHHHq();
WPP_RECORDER_SF_LLLLHHHHq();
WPP_RECORDER_SF_LLLd();
WPP_RECORDER_SF_LLd();
WPP_RECORDER_SF_LLdLd();
WPP_RECORDER_SF_LLdd();
WPP_RECORDER_SF_LLld();
WPP_RECORDER_SF_LLq();
WPP_RECORDER_SF_LLqDd();
WPP_RECORDER_SF_LLqd();
WPP_RECORDER_SF_LLqdDd();
WPP_RECORDER_SF_LLqddd();
WPP_RECORDER_SF_LSd();
WPP_RECORDER_SF_Ld();
WPP_RECORDER_SF_LdqLl();
WPP_RECORDER_SF_Ldqd();
WPP_RECORDER_SF_Ll();
WPP_RECORDER_SF_Llld();
WPP_RECORDER_SF_Lq();
WPP_RECORDER_SF_LqLDDDDd();
WPP_RECORDER_SF_LqLDd();
WPP_RECORDER_SF_LqLHDDDDDd();
WPP_RECORDER_SF_LqLLd();
WPP_RECORDER_SF_LqZ();
WPP_RECORDER_SF_Lqd();
WPP_RECORDER_SF_Lqld();
WPP_RECORDER_SF_LqqDd();
WPP_RECORDER_SF_Lqqdd();
WPP_RECORDER_SF_P();
WPP_RECORDER_SF_Pd();
WPP_RECORDER_SF_S();
WPP_RECORDER_SF_SSSDDDDDDDd();
WPP_RECORDER_SF_SSS_MAC_lDDd();
WPP_RECORDER_SF_SSSd();
WPP_RECORDER_SF_SS_MAC_dd();
WPP_RECORDER_SF_SS_guid__guid_d();
WPP_RECORDER_SF_SS_guid_d();
WPP_RECORDER_SF_SSd();
WPP_RECORDER_SF_Sd();
WPP_RECORDER_SF_Sdd();
WPP_RECORDER_SF_Z();
WPP_RECORDER_SF_ZD();
WPP_RECORDER_SF_ZDDd();
WPP_RECORDER_SF_ZDd();
WPP_RECORDER_SF_ZHddd();
WPP_RECORDER_SF_ZZZDDDDDDDd();
WPP_RECORDER_SF_ZZZZDDDDDDd();
WPP_RECORDER_SF_ZZZZDDDLDDd();
WPP_RECORDER_SF_ZZZZqq();
WPP_RECORDER_SF_ZZZ_MAC_lZd();
WPP_RECORDER_SF_ZZZ_MAC_lZdd();
WPP_RECORDER_SF_ZZZd();
WPP_RECORDER_SF_ZZZld();
WPP_RECORDER_SF_ZZ_MAC_lZDd();
WPP_RECORDER_SF_ZZd();
WPP_RECORDER_SF_ZZq();
WPP_RECORDER_SF_ZZqd();
WPP_RECORDER_SF_Zd();
WPP_RECORDER_SF_Zdd();
WPP_RECORDER_SF_Zld();
WPP_RECORDER_SF_Zqc();
WPP_RECORDER_SF_Zqd();
WPP_RECORDER_SF_Zqdd();
WPP_RECORDER_SF__IPV6_D();
WPP_RECORDER_SF__IPV6__IPV6_q();
WPP_RECORDER_SF__MAC_();
WPP_RECORDER_SF__MAC_Hd();
WPP_RECORDER_SF__MAC_Hq();
WPP_RECORDER_SF__MAC_Zi();
WPP_RECORDER_SF__MAC__MAC_dd();
WPP_RECORDER_SF__MAC_d();
WPP_RECORDER_SF__MAC_dd();
WPP_RECORDER_SF__guid_();
WPP_RECORDER_SF__guid_Hd();
WPP_RECORDER_SF__guid__guid_Dd();
WPP_RECORDER_SF__guid__guid_d();
WPP_RECORDER_SF__guid_d();
WPP_RECORDER_SF_cd();
WPP_RECORDER_SF_d();
WPP_RECORDER_SF_dD();
WPP_RECORDER_SF_dDDd();
WPP_RECORDER_SF_dDdd();
WPP_RECORDER_SF_dDddd();
WPP_RECORDER_SF_dII();
WPP_RECORDER_SF_dLLd();
WPP_RECORDER_SF_dLd();
WPP_RECORDER_SF_dLqd();
WPP_RECORDER_SF_dSd();
WPP_RECORDER_SF_dZZqqd();
WPP_RECORDER_SF_d_guid_d();
WPP_RECORDER_SF_dd();
WPP_RECORDER_SF_ddD();
WPP_RECORDER_SF_ddHHd();
WPP_RECORDER_SF_ddZD();
WPP_RECORDER_SF_ddd();
WPP_RECORDER_SF_dddd();
WPP_RECORDER_SF_ddddI();
WPP_RECORDER_SF_ddddIdII();
WPP_RECORDER_SF_ddddd();
WPP_RECORDER_SF_dddddI();
WPP_RECORDER_SF_dddddd();
WPP_RECORDER_SF_dddii();
WPP_RECORDER_SF_ddi();
WPP_RECORDER_SF_ddii();
WPP_RECORDER_SF_ddqd();
WPP_RECORDER_SF_ddqddd();
WPP_RECORDER_SF_di();
WPP_RECORDER_SF_did();
WPP_RECORDER_SF_diddd();
WPP_RECORDER_SF_dq();
WPP_RECORDER_SF_dqd();
WPP_RECORDER_SF_dqqd();
WPP_RECORDER_SF_dqqqld();
WPP_RECORDER_SF_h();
WPP_RECORDER_SF_hh();
WPP_RECORDER_SF_id();
WPP_RECORDER_SF_lL();
WPP_RECORDER_SF_ld();
WPP_RECORDER_SF_ll_MAC_();
WPP_RECORDER_SF_lld();
WPP_RECORDER_SF_q();
WPP_RECORDER_SF_qD();
WPP_RECORDER_SF_qDD();
WPP_RECORDER_SF_qDDD();
WPP_RECORDER_SF_qDDDDDDd();
WPP_RECORDER_SF_qDDDd();
WPP_RECORDER_SF_qDD_MAC_dDd();
WPP_RECORDER_SF_qDDd();
WPP_RECORDER_SF_qDHDDd();
WPP_RECORDER_SF_qDH_MAC_Hd();
WPP_RECORDER_SF_qDHd();
WPP_RECORDER_SF_qDHqd();
WPP_RECORDER_SF_qDLLd();
WPP_RECORDER_SF_qDL_guid_d();
WPP_RECORDER_SF_qDLd();
WPP_RECORDER_SF_qD_MAC_dDd();
WPP_RECORDER_SF_qD_guid_Ld();
WPP_RECORDER_SF_qD_guid_d();
WPP_RECORDER_SF_qD_guid_qDZZZZlLd();
WPP_RECORDER_SF_qD_guid_qDd();
WPP_RECORDER_SF_qDd();
WPP_RECORDER_SF_qDdd();
WPP_RECORDER_SF_qDddd();
WPP_RECORDER_SF_qDldqd();
WPP_RECORDER_SF_qDlllddIdqd();
WPP_RECORDER_SF_qDqDd();
WPP_RECORDER_SF_qDqHld();
WPP_RECORDER_SF_qDqd();
WPP_RECORDER_SF_qHDDd();
WPP_RECORDER_SF_qHDd();
WPP_RECORDER_SF_qHHDd();
WPP_RECORDER_SF_qH_guid__guid_Dd();
WPP_RECORDER_SF_qH_guid_qDd();
WPP_RECORDER_SF_qH_guid_qdd();
WPP_RECORDER_SF_qHd();
WPP_RECORDER_SF_qHdd();
WPP_RECORDER_SF_qHqd();
WPP_RECORDER_SF_qHqqLd();
WPP_RECORDER_SF_qI();
WPP_RECORDER_SF_qIIId();
WPP_RECORDER_SF_qIId();
WPP_RECORDER_SF_qIIqqqdddd();
WPP_RECORDER_SF_qId();
WPP_RECORDER_SF_qIdd();
WPP_RECORDER_SF_qIqd();
WPP_RECORDER_SF_qL();
WPP_RECORDER_SF_qLDDd();
WPP_RECORDER_SF_qLDd();
WPP_RECORDER_SF_qLLDDqDDqd();
WPP_RECORDER_SF_qLLDqDDd();
WPP_RECORDER_SF_qLLDqDqd();
WPP_RECORDER_SF_qLLHDqDDqd();
WPP_RECORDER_SF_qLLLd();
WPP_RECORDER_SF_qLLd();
WPP_RECORDER_SF_qLLqDDd();
WPP_RECORDER_SF_qLLqDd();
WPP_RECORDER_SF_qLLqLd();
WPP_RECORDER_SF_qLd();
WPP_RECORDER_SF_qLdLd();
WPP_RECORDER_SF_qLdd();
WPP_RECORDER_SF_qLldd();
WPP_RECORDER_SF_qLll();
WPP_RECORDER_SF_qLqDd();
WPP_RECORDER_SF_qLqLd();
WPP_RECORDER_SF_qLqLqdd();
WPP_RECORDER_SF_qLqd();
WPP_RECORDER_SF_qLqdd();
WPP_RECORDER_SF_qPd();
WPP_RECORDER_SF_qPdd();
WPP_RECORDER_SF_qSSSDDDLDDd();
WPP_RECORDER_SF_qSSSDd();
WPP_RECORDER_SF_qSSS_MAC_lILd();
WPP_RECORDER_SF_qSSS_MAC_lIqlqLlld();
WPP_RECORDER_SF_qSd();
WPP_RECORDER_SF_qSdIddI();
WPP_RECORDER_SF_qZ();
WPP_RECORDER_SF_qZDDd();
WPP_RECORDER_SF_qZDd();
WPP_RECORDER_SF_qZHd();
WPP_RECORDER_SF_qZL();
WPP_RECORDER_SF_qZSd();
WPP_RECORDER_SF_qZZDDDDd();
WPP_RECORDER_SF_qZZDd();
WPP_RECORDER_SF_qZZLd();
WPP_RECORDER_SF_qZZZDDDDDDdIqdqLddd();
WPP_RECORDER_SF_qZZZDDDLDDd();
WPP_RECORDER_SF_qZZZZi_MAC_lDd();
WPP_RECORDER_SF_qZZZ_MAC_lIqlqLlld();
WPP_RECORDER_SF_qZZZd();
WPP_RECORDER_SF_qZZ_guid__guid_DDd();
WPP_RECORDER_SF_qZZ_guid__guid_d();
WPP_RECORDER_SF_qZZd();
WPP_RECORDER_SF_qZZqHd();
WPP_RECORDER_SF_qZZqZZDd();
WPP_RECORDER_SF_qZZqZZ_guid__guid_DDd();
WPP_RECORDER_SF_qZZqZZ_guid__guid_d();
WPP_RECORDER_SF_qZZqZZd();
WPP_RECORDER_SF_qZd();
WPP_RECORDER_SF_qZlld();
WPP_RECORDER_SF_qZqDd();
WPP_RECORDER_SF_qZqHd();
WPP_RECORDER_SF_qZqd();
WPP_RECORDER_SF_qZqq();
WPP_RECORDER_SF_q_MAC_d();
WPP_RECORDER_SF_q_MAC_dd();
WPP_RECORDER_SF_q_MAC_l();
WPP_RECORDER_SF_q_guid_Dd();
WPP_RECORDER_SF_q_guid_HH_guid_qDld();
WPP_RECORDER_SF_q_guid_H_guid_Dqd();
WPP_RECORDER_SF_q_guid_H_guid_qDd();
WPP_RECORDER_SF_q_guid_Ld();
WPP_RECORDER_SF_q_guid_ZZZZLd();
WPP_RECORDER_SF_q_guid__MAC_IIHd();
WPP_RECORDER_SF_q_guid__guid_Dd();
WPP_RECORDER_SF_q_guid__guid_HDd();
WPP_RECORDER_SF_q_guid__guid_HqDDd();
WPP_RECORDER_SF_q_guid__guid_HqDld();
WPP_RECORDER_SF_q_guid__guid_d();
WPP_RECORDER_SF_q_guid_d();
WPP_RECORDER_SF_q_guid_qd();
WPP_RECORDER_SF_qd();
WPP_RECORDER_SF_qdL();
WPP_RECORDER_SF_qdLd();
WPP_RECORDER_SF_qdLqDd();
WPP_RECORDER_SF_qdLqd();
WPP_RECORDER_SF_qd_MAC_d();
WPP_RECORDER_SF_qd_MAC_dd();
WPP_RECORDER_SF_qdd();
WPP_RECORDER_SF_qddII();
WPP_RECORDER_SF_qddLd();
WPP_RECORDER_SF_qddd();
WPP_RECORDER_SF_qddddd();
WPP_RECORDER_SF_qddiI();
WPP_RECORDER_SF_qddq();
WPP_RECORDER_SF_qddqd();
WPP_RECORDER_SF_qdqL();
WPP_RECORDER_SF_qdqd();
WPP_RECORDER_SF_qdqld();
WPP_RECORDER_SF_qdqqDd();
WPP_RECORDER_SF_qdqqq();
WPP_RECORDER_SF_ql();
WPP_RECORDER_SF_qld();
WPP_RECORDER_SF_qlllLHlDlDDlLd();
WPP_RECORDER_SF_qq();
WPP_RECORDER_SF_qqDDDd();
WPP_RECORDER_SF_qqDDd();
WPP_RECORDER_SF_qqDHD_MAC_Hd();
WPP_RECORDER_SF_qqDHd();
WPP_RECORDER_SF_qqDLd();
WPP_RECORDER_SF_qqDd();
WPP_RECORDER_SF_qqDdd();
WPP_RECORDER_SF_qqDq();
WPP_RECORDER_SF_qqDqd();
WPP_RECORDER_SF_qqDqld();
WPP_RECORDER_SF_qqH();
WPP_RECORDER_SF_qqHDDd();
WPP_RECORDER_SF_qqH_guid_qDd();
WPP_RECORDER_SF_qqHd();
WPP_RECORDER_SF_qqIId();
WPP_RECORDER_SF_qqIddd();
WPP_RECORDER_SF_qqIqd();
WPP_RECORDER_SF_qqLDdLd();
WPP_RECORDER_SF_qqLLDDDDqDD();
WPP_RECORDER_SF_qqLLDDDDqDDd();
WPP_RECORDER_SF_qqLLd();
WPP_RECORDER_SF_qqLLqDd();
WPP_RECORDER_SF_qqLLqd();
WPP_RECORDER_SF_qqLd();
WPP_RECORDER_SF_qqLqDd();
WPP_RECORDER_SF_qqLqLLd();
WPP_RECORDER_SF_qqLqLd();
WPP_RECORDER_SF_qqLqd();
WPP_RECORDER_SF_qqSS_MAC_Dd();
WPP_RECORDER_SF_qqSSd();
WPP_RECORDER_SF_qqZZ_MAC_Dd();
WPP_RECORDER_SF_qqZZd();
WPP_RECORDER_SF_qqZd();
WPP_RECORDER_SF_qq_guid_Dd();
WPP_RECORDER_SF_qq_guid_HH_guid_qDld();
WPP_RECORDER_SF_qq_guid_H_guid_d();
WPP_RECORDER_SF_qq_guid__guid_d();
WPP_RECORDER_SF_qq_guid_d();
WPP_RECORDER_SF_qq_guid_dd();
WPP_RECORDER_SF_qq_guid_qd();
WPP_RECORDER_SF_qq_guid_qqqd();
WPP_RECORDER_SF_qqd();
WPP_RECORDER_SF_qqdHd();
WPP_RECORDER_SF_qqdLdLd();
WPP_RECORDER_SF_qqdLqd();
WPP_RECORDER_SF_qqd_guid__MAC_();
WPP_RECORDER_SF_qqdd();
WPP_RECORDER_SF_qqdd_MAC_dDd();
WPP_RECORDER_SF_qqdd_MAC_dqd();
WPP_RECORDER_SF_qqddd();
WPP_RECORDER_SF_qqdi();
WPP_RECORDER_SF_qqdls();
WPP_RECORDER_SF_qqdq();
WPP_RECORDER_SF_qqdqd();
WPP_RECORDER_SF_qqdqdd();
WPP_RECORDER_SF_qqld();
WPP_RECORDER_SF_qqq();
WPP_RECORDER_SF_qqqDDd();
WPP_RECORDER_SF_qqqDDdLd();
WPP_RECORDER_SF_qqqDd();
WPP_RECORDER_SF_qqqH_guid_dd();
WPP_RECORDER_SF_qqqLDd();
WPP_RECORDER_SF_qqqLLd();
WPP_RECORDER_SF_qqqLd();
WPP_RECORDER_SF_qqqLqid();
WPP_RECORDER_SF_qqq_guid_d();
WPP_RECORDER_SF_qqqd();
WPP_RECORDER_SF_qqqdLqd();
WPP_RECORDER_SF_qqqdd();
WPP_RECORDER_SF_qqqdl();
WPP_RECORDER_SF_qqqld();
WPP_RECORDER_SF_qqqq();
WPP_RECORDER_SF_qqqqd();
WPP_RECORDER_SF_qqqqq();
WPP_RECORDER_SF_qqqqqZd();
WPP_RECORDER_SF_s();
WppClassicProviderCallback();
WppCleanupKm();
WppInitKm();
WppLoadTracingSupport();
WppTraceCallback();
_C_specific_handler();
_GSHandlerCheck();
_GSHandlerCheckCommon();
_GSHandlerCheck_SEH();
_chkstk();
_report_gsfailure();
_security_check_cookie();
_security_init_cookie();
ext_ms_win_wnv_l1_1_0_WnvCompleteSwitchNetBufferLists();
ext_ms_win_wnv_l1_1_0_WnvInitSwitchFunctions();
ext_ms_win_wnv_l1_1_0_WnvIsNblWnvOwned();
ext_ms_win_wnv_l1_1_0_WnvNicConnect();
ext_ms_win_wnv_l1_1_0_WnvNicCreate();
ext_ms_win_wnv_l1_1_0_WnvNicDelete();
ext_ms_win_wnv_l1_1_0_WnvNicDisconnect();
ext_ms_win_wnv_l1_1_0_WnvNicUpdate();
ext_ms_win_wnv_l1_1_0_WnvProcessOidCompletion();
ext_ms_win_wnv_l1_1_0_WnvProcessOidRequest();
ext_ms_win_wnv_l1_1_0_WnvProcessStatusIndication();
ext_ms_win_wnv_l1_1_0_WnvSendSwitchNetBufferLists();
ext_ms_win_wnv_l1_1_0_WnvSwitchCreate();
ext_ms_win_wnv_l1_1_0_WnvSwitchDelete();
ext_ms_win_wnv_l1_1_0_WnvSwitchForwardingExtensionStatus();
ext_ms_win_wnv_l1_1_0_WnvSwitchInit();
guard_check_icall_nop();
guard_dispatch_icall_nop();
lbfoAddEtherBcastNbl();
lbfoAddNic();
lbfoAddVmsPortInner();
lbfoAddVmsPortInner2();
lbfoCalculateAggregatorVmqCaps();
lbfoCalculateVmqCaps();
lbfoCancelSoftFailTimer();
lbfoCreateAggregator();
lbfoCreateNicObject();
lbfoDAddNic();
lbfoDAddVmsPort();
lbfoDCalcNicCost();
lbfoDCalcSearchDepth();
lbfoDChangeNicAggregator();
lbfoDConnectNic();
lbfoDDeInit();
lbfoDDisconnectNic();
lbfoDDpcCallback();
lbfoDGetNicWithHighestTokenCount();
lbfoDGetOutgoingNicId();
lbfoDGetSwitchPrimingNbls();
lbfoDInit();
lbfoDMoveBucket();
lbfoDPrepareForSend();
lbfoDQueueDpc();
lbfoDRebalanceBuckets();
lbfoDRebalanceCfgMacs();
lbfoDRemoveNic();
lbfoDRemoveVmsPort();
lbfoDResetTokenCounters();
lbfoDSearch();
lbfoDSearchHelper();
lbfoDSendComplete();
lbfoDUpdateBucketStats();
lbfoDUpdateTokenCounters();
lbfoDeInitVmq();
lbfoDestroyNic();
lbfoDestroyNicObject();
lbfoGetNicSrIov();
lbfoGetVmsPortFromVmsId();
lbfoIssueOidRequestAnyFilter();
lbfoIssueOidRequestOnFilter();
lbfoIssueOidRequestOnNic();
lbfoLACPAddNic();
lbfoLACPCalculateReady();
lbfoLACPChangeByteOrder();
lbfoLACPChurnDetectionMachine();
lbfoLACPConnectNic();
lbfoLACPDisconnectNic();
lbfoLACPInit();
lbfoLACPMarkerChangeByteOrder();
lbfoLACPMuxMachine();
lbfoLACPPeriodicTransmissionMachine();
lbfoLACPProcessLacpdu();
lbfoLACPProcessMarkerRequestPdu();
lbfoLACPProcessReceiveIndication();
lbfoLACPReceiveMachine();
lbfoLACPRecordDefault();
lbfoLACPRecordPDU();
lbfoLACPRemoveNic();
lbfoLACPSelectionLogic();
lbfoLACPSendLacpduWorkItem();
lbfoLACPTimerActorChurn();
lbfoLACPTimerCurrentWhile();
lbfoLACPTimerPartnerChurn();
lbfoLACPTimerPeriodic();
lbfoLACPTimerWaitWhile();
lbfoLACPTransmitMachine();
lbfoLACPUpdateDefaultSelected();
lbfoLACPUpdateNeedToTransmit();
lbfoLACPUpdateOwningAggregatorData();
lbfoLACPUpdateSelected();
lbfoLBChangeDefaultAggregator();
lbfoLBCompareCfgMacs();
lbfoLBCompareMappedDeviceId();
lbfoLBCompareNics();
lbfoLBComputeHash();
lbfoLBComputeMinVmsPortsPerNic();
lbfoLBDistributeSinglePortCfgMacs();
lbfoLBGetFirstUnmappedCfgMac();
lbfoLBGetMappedNicId();
lbfoLBGetMappedNicIdFromMac();
lbfoLBGetMappedNicIdFromVmsPortId();
lbfoLBGetMinNic();
lbfoLBGetMinNicUnadjusted();
lbfoLBGetNblHash();
lbfoLBGetSwitchPrimingNbls();
lbfoLBGetSwitchPrimingNblsForCfgMac();
lbfoLBInitialMapVmsPort();
lbfoLBMapCfgMacToNic();
lbfoLBMapMacConflictCfgMacs();
lbfoLBMapPreferredCfgMacs();
lbfoLBQueueResourceManagementWorkItem();
lbfoLBRebalanceCfgMacs();
lbfoLBReplaceNblMacAddress();
lbfoLBRestoreNblMacAddress();
lbfoLBRevertMacAddress();
lbfoLBSrIovAddNic();
lbfoLBUpdateCfgMacVmsPorts();
lbfoLBUpdateCfgMacsOffloadPreferenceMasksForCfgMac();
lbfoLearnMacOnVmsPort();
lbfoNTHAddNic();
lbfoNTHAddVmsPort();
lbfoNTHChangeNicAggregator();
lbfoNTHConnectNic();
lbfoNTHDisconnectNic();
lbfoNTHGetOutgoingNicId();
lbfoNTHGetSwitchPrimingNbls();
lbfoNTHGetUnicastReceiver();
lbfoNTHInit();
lbfoNTHPickDefaultNicId();
lbfoNTHPrepareForSend();
lbfoNTHRemoveNic();
lbfoNTHRemoveVmsPort();
lbfoNTHSendComplete();
lbfoNTHSetHashToNicIdTable();
lbfoNTHUpdateUnicastReceiver();
lbfoPrimeSwitchIfNeeded();
lbfoPrimeSwitchIfNeededWorkItem();
lbfoProcessMuxVmqStatusIndication();
lbfoQueuePrimeSwitchIfNeededWorkItem();
lbfoQueueUpdateNicMacAddrWorkItem();
lbfoRemoveNic();
lbfoRemoveVmsPortInner();
lbfoSIAddNic();
lbfoSIConnectDesiredNumNics();
lbfoSIConnectNic();
lbfoSIDeInit();
lbfoSIDisconnectNic();
lbfoSIInit();
lbfoSIStabilizationTimer();
lbfoSTGetAggregatorForNic();
lbfoSendInternalNblsOnNic();
lbfoSetCfgMacRebalanceTimer();
lbfoSetNicFailureReason();
lbfoSetOriginalMacOnNic();
lbfoSetOriginalMacOnNicImmediate();
lbfoSetTeamMacOnNic();
lbfoSoftFailTimer();
lbfoTFOConnectNic();
lbfoTFOConnectNicTimer();
lbfoTFOConnectOldestNic();
lbfoTFODisconnectNic();
lbfoTMBeginBatchUpdate();
lbfoTMChangeNicAggregator();
lbfoTMConnectNic();
lbfoTMCreateNewNicAggregator();
lbfoTMDisconnectNic();
lbfoTMEndBatchUpdate();
lbfoTMRemoveAggregator();
lbfoTMRemoveAggregatorWorkItem();
lbfoUpdateInitialNicState();
lbfoUpdateNicExtConnState();
lbfoUpdateNicMacWorkItem();
lbfoUpdateNicPHYState();
lbfoUpdateNicState();
lbfoUpdateReplaceMacAddressMask();
lbfoUpdateVmsPortInner();
lbfoVMSAddVmsPort();
lbfoVMSGetOutgoingNicId();
lbfoVMSGetSwitchPrimingNbls();
lbfoVMSInit();
lbfoVMSPrepareForSend();
lbfoVMSRebalanceCfgMacs();
lbfoVMSRemoveVmsPort();
lbfoVMSSendComplete();
local_unwind();
memcmp();
memcpy();
memmove();
memset();
tcpxsum();
tcpxsum_end();
tcpxsum_start();
vmqAddFilterToQueue();
vmqAllocateAllQueuesOnMNic();
vmqAllocateQueue();
vmqAllocateQueueOnMNic();
vmqAllocateTNicQueueArray();
vmqChangeQueueParams();
vmqCleanupMNicState();
vmqClearCapabilities();
vmqClearFilter();
vmqClearFilterOnMNic();
vmqClearFilterOnMNics();
vmqClearFiltersOnMNic();
vmqEnumFilters();
vmqEnumQueues();
vmqEqualNicSwitchCaps();
vmqEqualRcvFilterCaps();
vmqFindFilter();
vmqFindFreeFilterId();
vmqFreeAllQueuesOnMNic();
vmqFreeQueue();
vmqFreeQueueOnMNic();
vmqFreeQueueOnMNics();
vmqGenerateCapsChangeIndications();
vmqGetFilterCount();
vmqIncludeMemberCapabilities();
vmqIndicateCapsChange();
vmqIndicateNewCaps();
vmqIndicateQueueAllocState();
vmqInitCombinedCapabilities();
vmqInitMNicState();
vmqInterceptOidRequest();
vmqProcessReceiveNbls();
vmqProcessSendNbl();
vmqQueryFilterParams();
vmqQueryNicSwitchCaps();
vmqQueryNicSwitchHwCaps();
vmqQueryQueueParams();
vmqQueryRcvFilterCaps();
vmqQueryRcvFilterGlobalParams();
vmqQueryRcvFilterHwCaps();
vmqQueueAllocationComplete();
vmqSetFilter();
vmqSetFilterOnMNic();
vmqSetFiltersOnMNic();
vmqSetNewCapabilities();
vmqSetQueueInfo();
vmqSetQueueParamsOnMNic();
vmqUpdateNicSwitchCaps();
vmqUpdateRcvFilterCaps();
vmqVerifyMethodOidParamsAndCallHandler();
vmqVerifyQueryOidParamsAndCallHandler();
vmqVerifySetOidParamsAndCallHandler();
vmqcGetFirstMappedMNic();
vmqcGetNextMNic();
vmqcIsQueueMappedToMNic();
vmqcIssueOidRequest();
vmqcMapQueueToMNics();
vmqcOidRequestComplete();
