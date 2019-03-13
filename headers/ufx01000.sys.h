struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct _ACCESS_STATE;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _CM_RESOURCE_LIST;
struct _COMPRESSED_DATA_INFO;
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
struct _EPROCESS;
struct _ERESOURCE;
struct _ETHREAD;
struct _EVENT_DATA_DESCRIPTOR;
struct _EVENT_DESCRIPTOR;
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
struct _KTHREAD;
struct _LIST_ENTRY;
struct _LOOKASIDE_LIST_EX;
struct _LUID;
struct _LUID_AND_ATTRIBUTES;
struct _MAILSLOT_CREATE_PARAMETERS;
struct _MDL;
struct _NAMED_PIPE_CREATE_PARAMETERS;
struct _NPAGED_LOOKASIDE_LIST;
struct _OWNER_ENTRY;
struct _PAGED_LOOKASIDE_LIST;
struct _POWER_SEQUENCE;
struct _PRIVILEGE_SET;
struct _RTL_BITMAP;
struct _RTL_QUERY_REGISTRY_TABLE;
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
struct _UNICODE_STRING;
struct _VPB;
struct _WAIT_CONTEXT_BLOCK;
struct _WORK_QUEUE_ITEM;
struct _WPP_TRACE_CONTROL_BLOCK;

union _LARGE_INTEGER;
union _POWER_STATE;
union _SLIST_HEADER;
union _ULARGE_INTEGER;

enum BUS_QUERY_ID_TYPE;
enum DEVICE_TEXT_TYPE;
enum DMA_COMPLETION_STATUS;
enum POWER_ACTION;
enum _DEVICE_POWER_STATE;
enum _DEVICE_RELATION_TYPE;
enum _DEVICE_USAGE_NOTIFICATION_TYPE;
enum _DEVICE_WAKE_DEPTH;
enum _DIRECTORY_NOTIFY_INFORMATION_CLASS;
enum _EVENT_TYPE;
enum _FILE_INFORMATION_CLASS;
enum _FSINFOCLASS;
enum _INTERFACE_TYPE;
enum _IO_ALLOCATION_ACTION;
enum _IRQ_DEVICE_POLICY;
enum _IRQ_PRIORITY;
enum _KINTERRUPT_POLARITY;
enum _MEMORY_CACHING_TYPE;
enum _MEMORY_CACHING_TYPE_ORIG;
enum _MODE;
enum _POOL_TYPE;
enum _POWER_STATE_TYPE;
enum _REG_NOTIFY_CLASS;
enum _SECURITY_IMPERSONATION_LEVEL;
enum _SYSTEM_POWER_STATE;
enum _USER_ACTIVITY_PRESENCE;

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

typedef struct _KTHREAD {
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

typedef struct _NPAGED_LOOKASIDE_LIST {
    struct _GENERAL_LOOKASIDE L;
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

typedef struct _RTL_QUERY_REGISTRY_TABLE {
    PLONG QueryRoutine;
    ULONG Flags;
    PWCHAR Name;
    PVOID EntryContext;
    ULONG DefaultType;
    PVOID DefaultData;
    ULONG DefaultLength;
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

typedef enum _EVENT_TYPE {
    NotificationEvent = 0,
    SynchronizationEvent = 1
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

Action;
ActionTable_Bus_ClassDriversActive_BusEnumerate_Bus;
ActionTable_Bus_Dead_Initialize_Bus;
ActionTable_Bus_Initialized_Initialize_Bus;
ActionTable_Bus_WaitForBusClassDriverActivateRequest_BusEnumerate_Bus;
ActionTable_Bus_WaitForEvtChildListCreateDevice_BusEnumerate_Bus;
ActionTable_Device_Attached_Detached_Device;
ActionTable_Device_BadReset_AttachedToPc_Device;
ActionTable_Device_ChargePdcp_Attached_Device;
ActionTable_Device_Charger_Attached_Device;
ActionTable_Device_Configuring_Enumeration_Device;
ActionTable_Device_Connecting_Attached_Device;
ActionTable_Device_Dead_Initialize_Device;
ActionTable_Device_Detached_Detached_Device;
ActionTable_Device_DetectingPdcp_Attached_Device;
ActionTable_Device_Detecting_Attached_Device;
ActionTable_Device_Disconnecting_Attached_Device;
ActionTable_Device_EnableRemoteWakeup_RemoteWakeup_Device;
ActionTable_Device_FlushRequests_RemoteWakeup_Device;
ActionTable_Device_Flush_Initialize_Device;
ActionTable_Device_Initializing_Initialize_Device;
ActionTable_Device_Ready_Initialize_Device;
ActionTable_Device_Reset_AttachedToPc_Device;
ActionTable_Device_Restart_Initialize_Device;
ActionTable_Device_SignalRemoteWakeup_RemoteWakeup_Device;
ActionTable_Device_StopChargeTimer_FUNCTIONS_Device;
ActionTable_Device_StopConfigTimer_FUNCTIONS_Device;
ActionTable_Device_Suspended_Suspended_Device;
ActionTable_Device_TestMode_Initialize_Device;
ActionTable_Device_WaitForBusOwnership_Attached_Device;
ActionTable_Device_WaitForDetach_Attached_Device;
ActionTable_Device_WaitForSharedConnect_Attached_Device;
Actions_Bus_AddChildrenDescriptions_BusEnumerate_Bus_Packed;
Actions_Bus_ChildrenRemoved_BusTeardown_Bus_Packed;
Actions_Bus_ClassDriversActive_BusEnumerate_Bus_Packed;
Actions_Bus_Dead_Initialize_Bus_Packed;
Actions_Bus_Initialized_Initialize_Bus_Packed;
Actions_Bus_Initializing_Initialize_Bus_Packed;
Actions_Bus_LateBusCLassDriverActivation_BusEnumerate_Bus_Packed;
Actions_Bus_PartialBusActivation_BusEnumerate_Bus_Packed;
Actions_Bus_ProcessingActivateRequest_BusEnumerate_Bus_Packed;
Actions_Bus_ProcessingEvtChildListCreateDevice_BusEnumerate_Bus_Packed;
Actions_Bus_SetInterface_BusEnumerate_Bus_Packed;
Actions_Bus_Teardown_BusTeardown_Bus_Packed;
Actions_Bus_WaitForBusClassDriverActivateRequest_BusEnumerate_Bus_Packed;
Actions_Bus_WaitForChildRemoval_BusTeardown_Bus_Packed;
Actions_Bus_WaitForEvtChildListCreateDevice_BusEnumerate_Bus_Packed;
Actions_Bus_WaitForValidPowerState_Initialize_Bus_Packed;
Actions_Device_Addressed_Enumeration_Device_Packed;
Actions_Device_Addressing_Enumeration_Device_Packed;
Actions_Device_Attached_Detached_Device_Packed;
Actions_Device_Attaching_Detached_Device_Packed;
Actions_Device_BadReset_AttachedToPc_Device_Packed;
Actions_Device_CancelBusRequestOnDetach_Attached_Device_Packed;
Actions_Device_CancelBusRequestOnError_Attached_Device_Packed;
Actions_Device_CancelInt_WaitForTransfer_Device_Packed;
Actions_Device_Cancel_WaitForTransfer_Device_Packed;
Actions_Device_ChargePdcp_Attached_Device_Packed;
Actions_Device_Charger_Attached_Device_Packed;
Actions_Device_Charging_InvalidCharger_Device_Packed;
Actions_Device_Cleanup_RemoteWakeup_Device_Packed;
Actions_Device_Configured_Enumeration_Device_Packed;
Actions_Device_Configuring_Enumeration_Device_Packed;
Actions_Device_Connecting_Attached_Device_Packed;
Actions_Device_Dead_Initialize_Device_Packed;
Actions_Device_Default_Enumeration_Device_Packed;
Actions_Device_Detach_Suspended_Device_Packed;
Actions_Device_Detached_Detached_Device_Packed;
Actions_Device_Detaching_Detached_Device_Packed;
Actions_Device_DetectingPdcp_Attached_Device_Packed;
Actions_Device_Detecting_Attached_Device_Packed;
Actions_Device_DisableRemoteWakeup_RemoteWakeup_Device_Packed;
Actions_Device_Disconnecting_Attached_Device_Packed;
Actions_Device_Done_WaitForFlush_Device_Packed;
Actions_Device_EnableRemoteWakeup_RemoteWakeup_Device_Packed;
Actions_Device_Error_WaitForChargeTimer_Device_Packed;
Actions_Device_Error_WaitForComplete_Device_Packed;
Actions_Device_Error_WaitForEpPurge_Device_Packed;
Actions_Device_Error_WaitForTransfer_Device_Packed;
Actions_Device_Exiting_INT_RemoteWakeup_Device_Packed;
Actions_Device_Exiting_RemoteWakeup_Device_Packed;
Actions_Device_Failure_Detached_Device_Packed;
Actions_Device_FlushRequests_RemoteWakeup_Device_Packed;
Actions_Device_Flush_Initialize_Device_Packed;
Actions_Device_Initializing_Initialize_Device_Packed;
Actions_Device_Other_WaitForChargeTimer_Device_Packed;
Actions_Device_PdcpSetProperty_Attached_Device_Packed;
Actions_Device_PopInt_Suspended_Device_Packed;
Actions_Device_PopInt_WaitForPort_Device_Packed;
Actions_Device_Pop_WaitForBusDown_Device_Packed;
Actions_Device_Pop_WaitForChargeTimer_Device_Packed;
Actions_Device_Pop_WaitForComplete_Device_Packed;
Actions_Device_Pop_WaitForEpPurge_Device_Packed;
Actions_Device_Pop_WaitForPort_Device_Packed;
Actions_Device_Pop_WaitForTransfer_Device_Packed;
Actions_Device_PortChange_FUNCTIONS_Device_Packed;
Actions_Device_PurgeEndpoints_FUNCTIONS_Device_Packed;
Actions_Device_Ready_Initialize_Device_Packed;
Actions_Device_RecoverInt_InvalidCharger_Device_Packed;
Actions_Device_RecoverInt_Suspended_Device_Packed;
Actions_Device_Recover_InvalidCharger_Device_Packed;
Actions_Device_Recover_Suspended_Device_Packed;
Actions_Device_Reset_AttachedToPc_Device_Packed;
Actions_Device_Restart_Initialize_Device_Packed;
Actions_Device_SendBusEventToChild_FUNCTIONS_Device_Packed;
Actions_Device_SendBusEvent_FUNCTIONS_Device_Packed;
Actions_Device_SetInterfaceEvents_Enumeration_Device_Packed;
Actions_Device_SetInterfaceWait_Enumeration_Device_Packed;
Actions_Device_SharedConnect_Attached_Device_Packed;
Actions_Device_SignalRemoteWakeup_RemoteWakeup_Device_Packed;
Actions_Device_StateChange_FUNCTIONS_Device_Packed;
Actions_Device_StopChargeTimer_FUNCTIONS_Device_Packed;
Actions_Device_StopConfigTimer_FUNCTIONS_Device_Packed;
Actions_Device_StopConnectionTimer_FUNCTIONS_Device_Packed;
Actions_Device_Suspended_Suspended_Device_Packed;
Actions_Device_TestMode_Initialize_Device_Packed;
Actions_Device_UnconfiguredTimedOut_Enumeration_Device_Packed;
Actions_Device_Unconfiguring1_Enumeration_Device_Packed;
Actions_Device_Unconfiguring2_Enumeration_Device_Packed;
Actions_Device_WaitForBusOwnership_Attached_Device_Packed;
Actions_Device_WaitForBusUp_Attached_Device_Packed;
Actions_Device_WaitForDetach_Attached_Device_Packed;
Actions_Device_WaitForRemoteWakeupRequests_RemoteWakeup_Device_Packed;
Actions_Device_WaitForSharedConnect_Attached_Device_Packed;
Actions_Device_WaitForUserPrompt_Attached_Device_Packed;
Actions_Device_Wait_WaitForBusDown_Device_Packed;
Actions_Device_Wait_WaitForChargeTimer_Device_Packed;
Actions_Device_Wait_WaitForComplete_Device_Packed;
Actions_Device_Wait_WaitForEpPurge_Device_Packed;
Actions_Device_Wait_WaitForFlush_Device_Packed;
Actions_Device_Wait_WaitForPort_Device_Packed;
Actions_Device_Wait_WaitForTransfer_Device_Packed;
ChildIoctlRequest;
CreateMachine;
DEFAULT_CONFIGURATION;
DEFAULT_CONFIGURATION_buffer;
DUAL_ROLE_DEVICE_CONFIGURATION;
DUAL_ROLE_DEVICE_CONFIGURATION_buffer;
DUAL_ROLE_DEVICE_INTERFACE;
DUAL_ROLE_DEVICE_INTERFACE_buffer;
DUAL_ROLE_DEVICE_MANUFACTURER;
DUAL_ROLE_DEVICE_MANUFACTURER_buffer;
DUAL_ROLE_DEVICE_PRODUCT;
DUAL_ROLE_DEVICE_PRODUCT_buffer;
DebugMessage;
DebugMessageInt;
Dequeue;
DriverDecl_UFXSM;
DualRoleDeviceInterfaceDescriptor;
Enqueue;
Error;
EventSetMbrs_Bus_None_Packed;
EventSetMbrs_Bus_defer_AddChildrenDescriptions_BusEnumerate_Bus_Packed;
EventSetMbrs_Bus_defer_PartialBusActivation_BusEnumerate_Bus_Packed;
EventSetMbrs_Bus_defer_ProcessingActivateRequest_BusEnumerate_Bus_Packed;
EventSetMbrs_Bus_defer_Teardown_BusTeardown_Bus_Packed;
EventSetMbrs_Bus_defer_WaitForBusClassDriverActivateRequest_BusEnumerate_Bus_Packed;
EventSetMbrs_Bus_defer_WaitForChildRemoval_BusTeardown_Bus_Packed;
EventSetMbrs_Bus_defer_WaitForEvtChildListCreateDevice_BusEnumerate_Bus_Packed;
EventSetMbrs_Bus_defer_WaitForValidPowerState_Initialize_Bus_Packed;
EventSetMbrs_Device_None_Packed;
EventSetMbrs_Device_defer_Addressed_Enumeration_Device_Packed;
EventSetMbrs_Device_defer_CancelInt_WaitForTransfer_Device_Packed;
EventSetMbrs_Device_defer_Cancel_WaitForTransfer_Device_Packed;
EventSetMbrs_Device_defer_Connecting_Attached_Device_Packed;
EventSetMbrs_Device_defer_DetectingPdcp_Attached_Device_Packed;
EventSetMbrs_Device_defer_Disconnecting_Attached_Device_Packed;
EventSetMbrs_Device_defer_FlushRequests_RemoteWakeup_Device_Packed;
EventSetMbrs_Device_defer_SetInterfaceWait_Enumeration_Device_Packed;
EventSetMbrs_Device_defer_StopChargeTimer_FUNCTIONS_Device_Packed;
EventSetMbrs_Device_defer_StopConfigTimer_FUNCTIONS_Device_Packed;
EventSetMbrs_Device_defer_Unconfiguring2_Enumeration_Device_Packed;
EventSetMbrs_Device_defer_WaitForBusUp_Attached_Device_Packed;
EventSetMbrs_Device_defer_Wait_WaitForBusDown_Device_Packed;
EventSetMbrs_Device_defer_Wait_WaitForComplete_Device_Packed;
EventSetMbrs_Device_defer_Wait_WaitForEpPurge_Device_Packed;
EventSetMbrs_Device_defer_Wait_WaitForFlush_Device_Packed;
EventSetMbrs_Device_defer_Wait_WaitForPort_Device_Packed;
EventSetMbrs_Device_defer_Wait_WaitForTransfer_Device_Packed;
EventSetTable_Bus;
EventSetTable_Device;
EventTable;
Exit;
FailedCall;
FailedCallWithMessage;
GUID_DEVICE_INTERFACE_ARRIVAL;
GUID_DEVINTERFACE_CHARGING_ARBITRATION;
GUID_DEVINTERFACE_CONFIGURABLE_USBFN_CHARGER;
GUID_EMPTY;
GUID_USB_PLATFORM_FEATURES;
MachineException;
MachineTable;
Microsoft_WindowsPhone_UfxEnableBits;
Microsoft_WindowsPhone_UfxKeywords;
Microsoft_WindowsPhone_UfxLevels;
Notification;
NotificationInt;
QueueResize;
REGISTRY_ALTERNATES;
REGISTRY_ALTERNATES_buffer;
REGISTRY_ASSOCIATIONS;
REGISTRY_ASSOCIATIONS_buffer;
REGISTRY_BASE;
REGISTRY_BASE_MANUFACTURING;
REGISTRY_BASE_MANUFACTURING_buffer;
REGISTRY_BASE_buffer;
REGISTRY_CONFIGURATIONS;
REGISTRY_CONFIGURATIONS_buffer;
REGISTRY_DEFAULT;
REGISTRY_DEFAULT_buffer;
REGISTRY_INTERFACES;
REGISTRY_INTERFACES_buffer;
SDDL_DEVOBJ_KERNEL_ONLY;
SDDL_DEVOBJ_KERNEL_ONLY_buffer;
SDDL_DEVOBJ_SYS_ALL;
SDDL_DEVOBJ_SYS_ALL_buffer;
Setup;
StateTable_Bus;
StateTable_Device;
StrSmf;
StrSmf_buffer;
StrVerifyEventHandlers;
StrVerifyEventHandlers_buffer;
StrVerifyEventInstances;
StrVerifyEventInstances_buffer;
StrVerifyEventQueueSize;
StrVerifyEventQueueSize_buffer;
TransTable_Bus_AddChildrenDescriptions_BusEnumerate_Bus;
TransTable_Bus_ClassDriversActive_BusEnumerate_Bus;
TransTable_Bus_Initialized_Initialize_Bus;
TransTable_Bus_Initializing_Initialize_Bus;
TransTable_Bus_LateBusCLassDriverActivation_BusEnumerate_Bus;
TransTable_Bus_PartialBusActivation_BusEnumerate_Bus;
TransTable_Bus_ProcessingActivateRequest_BusEnumerate_Bus;
TransTable_Bus_ProcessingEvtChildListCreateDevice_BusEnumerate_Bus;
TransTable_Bus_SetInterface_BusEnumerate_Bus;
TransTable_Bus_Teardown_BusTeardown_Bus;
TransTable_Bus_WaitForBusClassDriverActivateRequest_BusEnumerate_Bus;
TransTable_Bus_WaitForChildRemoval_BusTeardown_Bus;
TransTable_Bus_WaitForEvtChildListCreateDevice_BusEnumerate_Bus;
TransTable_Bus_WaitForValidPowerState_Initialize_Bus;
TransTable_Device_Addressed_Enumeration_Device;
TransTable_Device_Addressing_Enumeration_Device;
TransTable_Device_Attached_Detached_Device;
TransTable_Device_Attaching_Detached_Device;
TransTable_Device_CancelInt_WaitForTransfer_Device;
TransTable_Device_Cancel_WaitForTransfer_Device;
TransTable_Device_ChargePdcp_Attached_Device;
TransTable_Device_Charging_InvalidCharger_Device;
TransTable_Device_Configured_Enumeration_Device;
TransTable_Device_Configuring_Enumeration_Device;
TransTable_Device_Connecting_Attached_Device;
TransTable_Device_Default_Enumeration_Device;
TransTable_Device_Detached_Detached_Device;
TransTable_Device_Detaching_Detached_Device;
TransTable_Device_DetectingPdcp_Attached_Device;
TransTable_Device_Detecting_Attached_Device;
TransTable_Device_DisableRemoteWakeup_RemoteWakeup_Device;
TransTable_Device_Disconnecting_Attached_Device;
TransTable_Device_EnableRemoteWakeup_RemoteWakeup_Device;
TransTable_Device_Exiting_INT_RemoteWakeup_Device;
TransTable_Device_Exiting_RemoteWakeup_Device;
TransTable_Device_FlushRequests_RemoteWakeup_Device;
TransTable_Device_Flush_Initialize_Device;
TransTable_Device_Initializing_Initialize_Device;
TransTable_Device_PdcpSetProperty_Attached_Device;
TransTable_Device_Ready_Initialize_Device;
TransTable_Device_Reset_AttachedToPc_Device;
TransTable_Device_Restart_Initialize_Device;
TransTable_Device_SetInterfaceEvents_Enumeration_Device;
TransTable_Device_SetInterfaceWait_Enumeration_Device;
TransTable_Device_SharedConnect_Attached_Device;
TransTable_Device_SignalRemoteWakeup_RemoteWakeup_Device;
TransTable_Device_Suspended_Suspended_Device;
TransTable_Device_TestMode_Initialize_Device;
TransTable_Device_UnconfiguredTimedOut_Enumeration_Device;
TransTable_Device_Unconfiguring1_Enumeration_Device;
TransTable_Device_Unconfiguring2_Enumeration_Device;
TransTable_Device_WaitForBusOwnership_Attached_Device;
TransTable_Device_WaitForBusUp_Attached_Device;
TransTable_Device_WaitForDetach_Attached_Device;
TransTable_Device_WaitForRemoteWakeupRequests_RemoteWakeup_Device;
TransTable_Device_WaitForSharedConnect_Attached_Device;
TransTable_Device_WaitForUserPrompt_Attached_Device;
TransTable_Device_Wait_WaitForBusDown_Device;
TransTable_Device_Wait_WaitForChargeTimer_Device;
TransTable_Device_Wait_WaitForComplete_Device;
TransTable_Device_Wait_WaitForEpPurge_Device;
TransTable_Device_Wait_WaitForFlush_Device;
TransTable_Device_Wait_WaitForPort_Device;
TransTable_Device_Wait_WaitForTransfer_Device;
Transition;
Transitions_Bus_AddChildrenDescriptions_BusEnumerate_Bus_Packed;
Transitions_Bus_ChildrenRemoved_BusTeardown_Bus_Packed;
Transitions_Bus_ClassDriversActive_BusEnumerate_Bus_Packed;
Transitions_Bus_Dead_Initialize_Bus_Packed;
Transitions_Bus_Initialized_Initialize_Bus_Packed;
Transitions_Bus_Initializing_Initialize_Bus_Packed;
Transitions_Bus_LateBusCLassDriverActivation_BusEnumerate_Bus_Packed;
Transitions_Bus_PartialBusActivation_BusEnumerate_Bus_Packed;
Transitions_Bus_ProcessingActivateRequest_BusEnumerate_Bus_Packed;
Transitions_Bus_ProcessingEvtChildListCreateDevice_BusEnumerate_Bus_Packed;
Transitions_Bus_SetInterface_BusEnumerate_Bus_Packed;
Transitions_Bus_Teardown_BusTeardown_Bus_Packed;
Transitions_Bus_WaitForBusClassDriverActivateRequest_BusEnumerate_Bus_Packed;
Transitions_Bus_WaitForChildRemoval_BusTeardown_Bus_Packed;
Transitions_Bus_WaitForEvtChildListCreateDevice_BusEnumerate_Bus_Packed;
Transitions_Bus_WaitForValidPowerState_Initialize_Bus_Packed;
Transitions_Device_Addressed_Enumeration_Device_Packed;
Transitions_Device_Addressing_Enumeration_Device_Packed;
Transitions_Device_Attached_Detached_Device_Packed;
Transitions_Device_Attaching_Detached_Device_Packed;
Transitions_Device_BadReset_AttachedToPc_Device_Packed;
Transitions_Device_CancelBusRequestOnDetach_Attached_Device_Packed;
Transitions_Device_CancelBusRequestOnError_Attached_Device_Packed;
Transitions_Device_CancelInt_WaitForTransfer_Device_Packed;
Transitions_Device_Cancel_WaitForTransfer_Device_Packed;
Transitions_Device_ChargePdcp_Attached_Device_Packed;
Transitions_Device_Charger_Attached_Device_Packed;
Transitions_Device_Charging_InvalidCharger_Device_Packed;
Transitions_Device_Cleanup_RemoteWakeup_Device_Packed;
Transitions_Device_Configured_Enumeration_Device_Packed;
Transitions_Device_Configuring_Enumeration_Device_Packed;
Transitions_Device_Connecting_Attached_Device_Packed;
Transitions_Device_Dead_Initialize_Device_Packed;
Transitions_Device_Default_Enumeration_Device_Packed;
Transitions_Device_Detach_Suspended_Device_Packed;
Transitions_Device_Detached_Detached_Device_Packed;
Transitions_Device_Detaching_Detached_Device_Packed;
Transitions_Device_DetectingPdcp_Attached_Device_Packed;
Transitions_Device_Detecting_Attached_Device_Packed;
Transitions_Device_DisableRemoteWakeup_RemoteWakeup_Device_Packed;
Transitions_Device_Disconnecting_Attached_Device_Packed;
Transitions_Device_Done_WaitForFlush_Device_Packed;
Transitions_Device_EnableRemoteWakeup_RemoteWakeup_Device_Packed;
Transitions_Device_Error_WaitForChargeTimer_Device_Packed;
Transitions_Device_Error_WaitForComplete_Device_Packed;
Transitions_Device_Error_WaitForEpPurge_Device_Packed;
Transitions_Device_Error_WaitForTransfer_Device_Packed;
Transitions_Device_Exiting_INT_RemoteWakeup_Device_Packed;
Transitions_Device_Exiting_RemoteWakeup_Device_Packed;
Transitions_Device_Failure_Detached_Device_Packed;
Transitions_Device_FlushRequests_RemoteWakeup_Device_Packed;
Transitions_Device_Flush_Initialize_Device_Packed;
Transitions_Device_Initializing_Initialize_Device_Packed;
Transitions_Device_Other_WaitForChargeTimer_Device_Packed;
Transitions_Device_PdcpSetProperty_Attached_Device_Packed;
Transitions_Device_PopInt_Suspended_Device_Packed;
Transitions_Device_PopInt_WaitForPort_Device_Packed;
Transitions_Device_Pop_WaitForBusDown_Device_Packed;
Transitions_Device_Pop_WaitForChargeTimer_Device_Packed;
Transitions_Device_Pop_WaitForComplete_Device_Packed;
Transitions_Device_Pop_WaitForEpPurge_Device_Packed;
Transitions_Device_Pop_WaitForPort_Device_Packed;
Transitions_Device_Pop_WaitForTransfer_Device_Packed;
Transitions_Device_PortChange_FUNCTIONS_Device_Packed;
Transitions_Device_PurgeEndpoints_FUNCTIONS_Device_Packed;
Transitions_Device_Ready_Initialize_Device_Packed;
Transitions_Device_RecoverInt_InvalidCharger_Device_Packed;
Transitions_Device_RecoverInt_Suspended_Device_Packed;
Transitions_Device_Recover_InvalidCharger_Device_Packed;
Transitions_Device_Recover_Suspended_Device_Packed;
Transitions_Device_Reset_AttachedToPc_Device_Packed;
Transitions_Device_Restart_Initialize_Device_Packed;
Transitions_Device_SendBusEventToChild_FUNCTIONS_Device_Packed;
Transitions_Device_SendBusEvent_FUNCTIONS_Device_Packed;
Transitions_Device_SetInterfaceEvents_Enumeration_Device_Packed;
Transitions_Device_SetInterfaceWait_Enumeration_Device_Packed;
Transitions_Device_SharedConnect_Attached_Device_Packed;
Transitions_Device_SignalRemoteWakeup_RemoteWakeup_Device_Packed;
Transitions_Device_StateChange_FUNCTIONS_Device_Packed;
Transitions_Device_StopChargeTimer_FUNCTIONS_Device_Packed;
Transitions_Device_StopConfigTimer_FUNCTIONS_Device_Packed;
Transitions_Device_StopConnectionTimer_FUNCTIONS_Device_Packed;
Transitions_Device_Suspended_Suspended_Device_Packed;
Transitions_Device_TestMode_Initialize_Device_Packed;
Transitions_Device_UnconfiguredTimedOut_Enumeration_Device_Packed;
Transitions_Device_Unconfiguring1_Enumeration_Device_Packed;
Transitions_Device_Unconfiguring2_Enumeration_Device_Packed;
Transitions_Device_WaitForBusOwnership_Attached_Device_Packed;
Transitions_Device_WaitForBusUp_Attached_Device_Packed;
Transitions_Device_WaitForDetach_Attached_Device_Packed;
Transitions_Device_WaitForRemoteWakeupRequests_RemoteWakeup_Device_Packed;
Transitions_Device_WaitForSharedConnect_Attached_Device_Packed;
Transitions_Device_WaitForUserPrompt_Attached_Device_Packed;
Transitions_Device_Wait_WaitForBusDown_Device_Packed;
Transitions_Device_Wait_WaitForChargeTimer_Device_Packed;
Transitions_Device_Wait_WaitForComplete_Device_Packed;
Transitions_Device_Wait_WaitForEpPurge_Device_Packed;
Transitions_Device_Wait_WaitForFlush_Device_Packed;
Transitions_Device_Wait_WaitForPort_Device_Packed;
Transitions_Device_Wait_WaitForTransfer_Device_Packed;
UFX_BUS_HWID_PREFIX;
UFX_BUS_HWID_PREFIX_buffer;
UFX_DEVICE_INTERFACE;
UFX_DSM_ACPI_ENDPOINT_GUID;
UfxGuid;
UfxGuid_Context;
Unhandled;
VAL_CurrentConfiguration;
VAL_CurrentConfiguration_buffer;
VAL_Disabled;
VAL_Disabled_buffer;
VAL_IncludeDefaultCfg;
VAL_IncludeDefaultCfg_buffer;
VAL_InterfaceDescriptor;
VAL_InterfaceDescriptor_buffer;
VAL_InterfaceGuid;
VAL_InterfaceGuid_buffer;
VAL_InterfaceList;
VAL_InterfaceList_buffer;
VAL_InterfaceNumber;
VAL_InterfaceNumber_buffer;
VAL_MSOSCompatIdDescriptor;
VAL_MSOSCompatIdDescriptor_buffer;
VAL_MSOSExtendedPropertyDescriptor;
VAL_MSOSExtendedPropertyDescriptor_buffer;
VAL_ManufacturerString;
VAL_ManufacturerString_buffer;
VAL_MirrorLink;
VAL_MirrorLink_buffer;
VAL_PriorityList;
VAL_PriorityList_buffer;
VAL_ProductString;
VAL_ProductString_buffer;
VAL_bDeviceClass;
VAL_bDeviceClass_buffer;
VAL_bDeviceProtocol;
VAL_bDeviceProtocol_buffer;
VAL_bDeviceSubclass;
VAL_bDeviceSubclass_buffer;
VAL_bFunctionClass;
VAL_bFunctionClass_buffer;
VAL_bFunctionProtocol;
VAL_bFunctionProtocol_buffer;
VAL_bFunctionSubclass;
VAL_bFunctionSubclass_buffer;
VAL_bMaxPower;
VAL_bMaxPower_buffer;
VAL_bcdDevice;
VAL_bcdDevice_buffer;
VAL_bmAttributes;
VAL_bmAttributes_buffer;
VAL_iSerialNumber;
VAL_iSerialNumber_buffer;
VAL_idProduct;
VAL_idProduct_buffer;
VAL_idVendor;
VAL_idVendor_buffer;
VarTable_Bus;
VarTable_Device;
WDF_ACTIVATION_TIMER_CONTEXT_TYPE_INFO;
WDF_CHARGE_TIMER_CONTEXT_TYPE_INFO;
WDF_CHILD_NOTIFICATION_QUEUE_CONTEXT_TYPE_INFO;
WDF_CONFIG_TIMER_CONTEXT_TYPE_INFO;
WDF_CONNECTION_TIMER_CONTEXT_TYPE_INFO;
WDF_DRIVER_GLOBALS_TYPE_INFO;
WDF_REMOTE_WAKEUP_TIMER_CONTEXT_TYPE_INFO;
WDF_UFXBUS_CHILD_CONTEXT_TYPE_INFO;
WDF_UFXBUS_CONTEXT_TYPE_INFO;
WDF_UFXDESCRIPTOR_CONTEXT_TYPE_INFO;
WDF_UFXDEVICE_CAD_CONTEXT_TYPE_INFO;
WDF_UFXDEVICE_CONTEXT_TYPE_INFO;
WDF_UFXENDPOINT_CONTEXT_TYPE_INFO;
WDF_UFX_FDO_CONTEXT_TYPE_INFO;
WNF_USB_ERROR_NOTIFICATION;
WNF_USB_FUNCTION_CONTROLLER_STATE;
WNF_USB_TYPE_C_PARTNER_STATE;
WPPTraceSuite;
WPP_28e10e0069e73f55a50cfeec2702ee26_Traceguids;
WPP_299e6e2c43913d4798eb4b289610cb78_Traceguids;
WPP_41639af906e837c9ccaaaa8e1ea3db88_Traceguids;
WPP_43bf447b97f831826fdb9dcf09444a2b_Traceguids;
WPP_468fdac889503204d7a099c67f7cdd67_Traceguids;
WPP_4ead7ce60e3a33c08025712431dc1b98_Traceguids;
WPP_54d8673c83ae399027f3797630c31449_Traceguids;
WPP_664ec089052e30f71fcda1935e084ea3_Traceguids;
WPP_8aba09495b34346418a067f2106266e0_Traceguids;
WPP_GLOBAL_Control;
WPP_MAIN_CB;
WPP_ThisDir_CTLGUID_UFX01000;
WPP_aa9306f9437838a0c487ecb0acfb405e_Traceguids;
WPP_aec505ae145031ef41195f190edd2f95_Traceguids;
WPP_daf64fc1aec23c11a26ce70231ed3977_Traceguids;
WPP_ef0ad5fc4c4a33d546cb4e5e2dc11326_Traceguids;
WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids;
WdfBindInfo;
WdfDriverGlobals;
WdfFunctions_01015;
WinUsbMSOSCompatIdDescriptor;
_IMPORT_DESCRIPTOR_WDFLDR;
_IMPORT_DESCRIPTOR_WppRecorder;
_IMPORT_DESCRIPTOR_ntoskrnl;
_NULL_IMPORT_DESCRIPTOR;
__KMDF_CLASS_BIND_END;
__KMDF_CLASS_BIND_START;
__KMDF_TYPE_INIT_END;
__KMDF_TYPE_INIT_START;
_guard_check_icall_fptr;
_guard_dispatch_icall_fptr;
_guard_fids_table;
_guard_iat_table;
_imp_DbgkWerCaptureLiveKernelDump;
_imp_EtwRegister;
_imp_EtwSetInformation;
_imp_EtwUnregister;
_imp_EtwWriteTransfer;
_imp_ExAllocatePoolWithTag;
_imp_ExFreePool;
_imp_ExFreePoolWithTag;
_imp_ExIsManufacturingModeEnabled;
_imp_IoAllocateWorkItem;
_imp_IoBuildDeviceIoControlRequest;
_imp_IoFreeWorkItem;
_imp_IoQueueWorkItemEx;
_imp_IoRegisterPlugPlayNotification;
_imp_IoSetCompletionRoutineEx;
_imp_IoUnregisterPlugPlayNotificationEx;
_imp_IoWMIOpenBlock;
_imp_IoWMIQueryAllData;
_imp_IoWMIRegistrationControl;
_imp_KeAcquireSpinLockRaiseToDpc;
_imp_KeInitializeSpinLock;
_imp_KeQueryTimeIncrement;
_imp_KeReleaseSpinLock;
_imp_MmGetSystemRoutineAddress;
_imp_RtlAppendUnicodeStringToString;
_imp_RtlClearAllBits;
_imp_RtlCompareMemory;
_imp_RtlCompareUnicodeString;
_imp_RtlCopyUnicodeString;
_imp_RtlGetPersistedStateLocation;
_imp_RtlInitUnicodeString;
_imp_RtlInitializeBitMap;
_imp_RtlIsStateSeparationEnabled;
_imp_RtlSetBit;
_imp_WdfRegisterClassLibrary;
_imp_WdfVersionBind;
_imp_WdfVersionBindClass;
_imp_WdfVersionUnbind;
_imp_WdfVersionUnbindClass;
_imp_WppAutoLogStart;
_imp_WppAutoLogStop;
_imp_WppAutoLogTrace;
_imp_ZwClose;
_imp_ZwEnumerateKey;
_imp_ZwOpenKey;
_imp_ZwQueryValueKey;
_imp_ZwUpdateWnfStateData;
_imp__vsnwprintf;
_imp__wcsicmp;
_imp_imp_WppRecorderReplay;
_imp_memcpy_s;
_imp_wcscat_s;
_imp_wcscpy_s;
_security_cookie;
_security_cookie_complement;
`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits;
load_config_used;
pfnEtwRegisterClassicProvider;
pfnEtwUnregister;
pfnWppGetVersion;
pfnWppQueryTraceInformation;
pfnWppTraceMessage;
WDFLDR_NULL_THUNK_DATA;
WppRecorder_NULL_THUNK_DATA;
ntoskrnl_NULL_THUNK_DATA;

ActionFun_Bus_A_AckEnumerate();
ActionFun_Bus_A_HandleBusEvent();
ActionFun_Bus_A_HandleFastEvents();
ActionFun_Bus_A_Ignore();
ActionFun_Bus_A_IgnoreINTPayload();
ActionFun_Device_A_BadEvent();
ActionFun_Device_A_BadEventInt();
ActionFun_Device_A_BusUp();
ActionFun_Device_A_BusUpFakeAttach();
ActionFun_Device_A_CompleteRequestWithNotConnected();
ActionFun_Device_A_DeviceHandleRemoteWakeupRequest();
ActionFun_Device_A_HandleDetach();
ActionFun_Device_A_HandleEndpointsPurged();
ActionFun_Device_A_HandleSetupPacket();
ActionFun_Device_A_HandleSuspend();
ActionFun_Device_A_HandleTestModeSetupPacket();
ActionFun_Device_A_HandleUpdateWaitForUserPrompt();
ActionFun_Device_A_Ignore();
ActionFun_Device_A_IgnoreINTPayload();
ActionFun_Device_A_RestartConnectionTimer();
BuildClassInterface();
BuildClassInterfaceEx();
BuildDescriptors();
BuildUfxAlternateInterfaceDescriptor();
BuildUfxAlternateInterfaceDescriptorWrapper();
BuildUfxConfigurationDescriptor();
BuildUfxConfigurationDescriptors();
BuildUfxDeviceDescriptor();
BuildUfxEndpointDescriptor();
BuildUfxEndpointDescriptors();
BuildUfxInterfaceDescriptors();
BuildUfxSingleInterfaceOrAlternateInterfaces();
BusChildAdd();
CheckUSBFnConfiguration();
CheckUSBFnIncludeDefaultCfg();
ChildDevicesRemoved();
ChildEnqueueBusEvent();
ChildNotificationQueue_EvtIoQueueState();
ChildNotifyPendingBusEvents();
Child_EvtDestroyCallback();
Child_EvtIoInternalDeviceControl();
Constructor_Bus();
Constructor_Device();
CreateUfxInterfaces();
DescriptorConsolidateConfigurationDescriptor();
DescriptorGetExpandedConfigurationDescriptor();
DescriptorUpdateConfigurationDescriptor();
DescriptorUpdateEndpointDescriptor();
DriverEntry();
Driver_EvtUnload();
EndpointPurged();
EntryFun_Bus_AddChildrenDescriptions_BusEnumerate_Bus();
EntryFun_Bus_ChildrenRemoved_BusTeardown_Bus();
EntryFun_Bus_ClassDriversActive_BusEnumerate_Bus();
EntryFun_Bus_Dead_Initialize_Bus();
EntryFun_Bus_Initialized_Initialize_Bus();
EntryFun_Bus_Initializing_Initialize_Bus();
EntryFun_Bus_LateBusCLassDriverActivation_BusEnumerate_Bus();
EntryFun_Bus_PartialBusActivation_BusEnumerate_Bus();
EntryFun_Bus_ProcessingActivateRequest_BusEnumerate_Bus();
EntryFun_Bus_ProcessingEvtChildListCreateDevice_BusEnumerate_Bus();
EntryFun_Bus_SetInterface_BusEnumerate_Bus();
EntryFun_Bus_Teardown_BusTeardown_Bus();
EntryFun_Bus_WaitForBusClassDriverActivateRequest_BusEnumerate_Bus();
EntryFun_Bus_WaitForChildRemoval_BusTeardown_Bus();
EntryFun_Bus_WaitForEvtChildListCreateDevice_BusEnumerate_Bus();
EntryFun_Bus_WaitForValidPowerState_Initialize_Bus();
EntryFun_Device_Addressed_Enumeration_Device();
EntryFun_Device_Addressing_Enumeration_Device();
EntryFun_Device_Attached_Detached_Device();
EntryFun_Device_Attaching_Detached_Device();
EntryFun_Device_BadReset_AttachedToPc_Device();
EntryFun_Device_CancelBusRequestOnDetach_Attached_Device();
EntryFun_Device_CancelBusRequestOnError_Attached_Device();
EntryFun_Device_CancelInt_WaitForTransfer_Device();
EntryFun_Device_Cancel_WaitForTransfer_Device();
EntryFun_Device_ChargePdcp_Attached_Device();
EntryFun_Device_Charger_Attached_Device();
EntryFun_Device_Charging_InvalidCharger_Device();
EntryFun_Device_Cleanup_RemoteWakeup_Device();
EntryFun_Device_Configured_Enumeration_Device();
EntryFun_Device_Configuring_Enumeration_Device();
EntryFun_Device_Connecting_Attached_Device();
EntryFun_Device_Dead_Initialize_Device();
EntryFun_Device_Default_Enumeration_Device();
EntryFun_Device_Detach_Suspended_Device();
EntryFun_Device_Detached_Detached_Device();
EntryFun_Device_Detaching_Detached_Device();
EntryFun_Device_DetectingPdcp_Attached_Device();
EntryFun_Device_Detecting_Attached_Device();
EntryFun_Device_DisableRemoteWakeup_RemoteWakeup_Device();
EntryFun_Device_Disconnecting_Attached_Device();
EntryFun_Device_Done_WaitForFlush_Device();
EntryFun_Device_EnableRemoteWakeup_RemoteWakeup_Device();
EntryFun_Device_Error_WaitForChargeTimer_Device();
EntryFun_Device_Error_WaitForComplete_Device();
EntryFun_Device_Error_WaitForEpPurge_Device();
EntryFun_Device_Error_WaitForTransfer_Device();
EntryFun_Device_Exiting_INT_RemoteWakeup_Device();
EntryFun_Device_Exiting_RemoteWakeup_Device();
EntryFun_Device_Failure_Detached_Device();
EntryFun_Device_FlushRequests_RemoteWakeup_Device();
EntryFun_Device_Flush_Initialize_Device();
EntryFun_Device_Initializing_Initialize_Device();
EntryFun_Device_Other_WaitForChargeTimer_Device();
EntryFun_Device_PdcpSetProperty_Attached_Device();
EntryFun_Device_PopInt_Suspended_Device();
EntryFun_Device_PopInt_WaitForPort_Device();
EntryFun_Device_Pop_WaitForBusDown_Device();
EntryFun_Device_Pop_WaitForChargeTimer_Device();
EntryFun_Device_Pop_WaitForComplete_Device();
EntryFun_Device_Pop_WaitForEpPurge_Device();
EntryFun_Device_Pop_WaitForPort_Device();
EntryFun_Device_Pop_WaitForTransfer_Device();
EntryFun_Device_PortChange_FUNCTIONS_Device();
EntryFun_Device_PurgeEndpoints_FUNCTIONS_Device();
EntryFun_Device_Ready_Initialize_Device();
EntryFun_Device_RecoverInt_InvalidCharger_Device();
EntryFun_Device_RecoverInt_Suspended_Device();
EntryFun_Device_Recover_InvalidCharger_Device();
EntryFun_Device_Recover_Suspended_Device();
EntryFun_Device_Reset_AttachedToPc_Device();
EntryFun_Device_Restart_Initialize_Device();
EntryFun_Device_SendBusEventToChild_FUNCTIONS_Device();
EntryFun_Device_SendBusEvent_FUNCTIONS_Device();
EntryFun_Device_SetInterfaceEvents_Enumeration_Device();
EntryFun_Device_SetInterfaceWait_Enumeration_Device();
EntryFun_Device_SharedConnect_Attached_Device();
EntryFun_Device_SignalRemoteWakeup_RemoteWakeup_Device();
EntryFun_Device_StateChange_FUNCTIONS_Device();
EntryFun_Device_StopChargeTimer_FUNCTIONS_Device();
EntryFun_Device_StopConfigTimer_FUNCTIONS_Device();
EntryFun_Device_StopConnectionTimer_FUNCTIONS_Device();
EntryFun_Device_Suspended_Suspended_Device();
EntryFun_Device_TestMode_Initialize_Device();
EntryFun_Device_UnconfiguredTimedOut_Enumeration_Device();
EntryFun_Device_Unconfiguring1_Enumeration_Device();
EntryFun_Device_Unconfiguring2_Enumeration_Device();
EntryFun_Device_WaitForBusOwnership_Attached_Device();
EntryFun_Device_WaitForBusUp_Attached_Device();
EntryFun_Device_WaitForDetach_Attached_Device();
EntryFun_Device_WaitForRemoteWakeupRequests_RemoteWakeup_Device();
EntryFun_Device_WaitForSharedConnect_Attached_Device();
EntryFun_Device_WaitForUserPrompt_Attached_Device();
EntryFun_Device_Wait_WaitForBusDown_Device();
EntryFun_Device_Wait_WaitForChargeTimer_Device();
EntryFun_Device_Wait_WaitForComplete_Device();
EntryFun_Device_Wait_WaitForEpPurge_Device();
EntryFun_Device_Wait_WaitForFlush_Device();
EntryFun_Device_Wait_WaitForPort_Device();
EntryFun_Device_Wait_WaitForTransfer_Device();
EvtActivationTimer();
EvtChargeTimer();
EvtConfigTimer();
EvtConnectionTimer();
ExpandInterfaceDescriptor();
FF_BusAddChildDevices();
FF_BusAllActivated();
FF_BusCancelActivationTimer();
FF_BusCaptureActivationTimeoutLiveDump();
FF_BusHandleChildDeviceCreated();
FF_BusInitialize();
FF_BusIsClassDriverActivated();
FF_BusReenumerateController();
FF_BusRemoveChildDevices();
FF_BusSetInterface();
FF_BusStartActivationTimer();
FF_DeviceAcknowledgeTestModeSetupPacket();
FF_DeviceCompleteRequestWithNotConnected();
FF_DeviceConfigureBusEndpoints();
FF_DeviceControlHandshake();
FF_DeviceControllerReset();
FF_DeviceCreateBusEvent();
FF_DeviceDefaultEndpointAdd();
FF_DeviceDisableRemoteWakeUpSupport();
FF_DeviceEnableRemoteWakeUpSupport();
FF_DeviceForceHost();
FF_DeviceForceUnknown();
FF_DeviceHandleGetEndpointStatus();
FF_DeviceHandlePortDetect();
FF_DeviceHandleReset();
FF_DeviceHandleSetupPacket();
FF_DeviceHostConnect();
FF_DeviceHostDisconnect();
FF_DeviceInitialize();
FF_DeviceNotifyClientOfPortType();
FF_DevicePortChange();
FF_DevicePortDetect();
FF_DeviceProprietaryChargerDetect();
FF_DeviceProprietaryChargerSetProperty();
FF_DevicePurgeBusEndpoints();
FF_DevicePurgeDefaultEndpoint();
FF_DevicePurgeInterface();
FF_DeviceSetAddress();
FF_DeviceSetTestMode();
FF_DeviceSignalRemoteWakeup();
FF_DeviceStartBusEndpointCommandQueues();
FF_DeviceStartBusEndpointTransferQueues();
FF_DeviceStartChargeTimer();
FF_DeviceStartConfigTimer();
FF_DeviceStartConnectionTimer();
FF_DeviceStartDefaultEndpoint();
FF_DeviceStartInterface();
FF_DeviceStateChange();
FF_DeviceStopChargeTimer();
FF_DeviceStopConfigTimer();
FF_DeviceStopConnectionTimer();
FF_DeviceStopEndpoints();
FF_DeviceUpdateConnectorId();
FF_ReleaseBusOwnership();
FF_RequestBusOwnership();
FxDriverEntry();
FxDriverEntryWorker();
FxStubBindClasses();
FxStubDriverUnload();
FxStubDriverUnloadCommon();
GetInterfaceCount();
GetPersistedKeyPath();
HandleActivateRequest();
HandleChargingPolicyChange();
HandleControlStatusHandshake();
HandleDeactivateRequest();
HandleEventNotificationRequest();
HandleGetClassInfo();
HandleGetClassInfoEx();
HandleGetInterfaceDescriptorSet();
HandlePipeStateRequest();
HandleRegisterUsbString();
HandleRemoteWakeupRequest();
HandleTestHookRequest();
HandleTransferRequest();
LiveDumpSecondaryCallback();
McGenControlCallbackV2();
McGenEventRegister();
McGenEventUnregister();
McGenEventWrite();
McTemplateK0qq();
McTemplateK0s();
McTemplateK0sq();
McTemplateK0sqq();
McTemplateK0sqqqqqqq();
McTemplateK0ss();
McTemplateK0ssp();
McTemplateK0ssq();
McTemplateK0sss();
McTemplateK0sssp();
MyRegOpenKeyForRead();
MyRegQueryString();
MyRegQueryUlong();
NotifyPowerSourceUpdateToCAD();
ParseSmbiosTableForUuid();
PopulateInterfacesAndEndpoints();
PurgeChildComplete();
ReadManifestAssignedValue();
ReadUSBFnFeaturesFromCurrentConfiguration();
RemoteWakeupTimerFunc();
RtlStringCbCopyUnicodeString();
RtlUnicodeStringCat();
RtlUnicodeStringCatString();
RtlUnicodeStringCopy();
RtlUnicodeStringPrintf();
SmfCall();
SmfClonePackedSet();
SmfCreate();
SmfCreateAttributes();
SmfDelete();
SmfDequeueEvent();
SmfDereference();
SmfEnqueueEvent();
SmfEnqueueEventCommon();
SmfFreeSMContext();
SmfInitAttributes();
SmfIsCallTransition();
SmfNew();
SmfPopState();
SmfPurgeEvent();
SmfPushState();
SmfRaise();
SmfReadRegistry();
SmfRemoveMachine();
SmfReportException();
SmfResizeEventQueue();
SmfRunStateMachine();
SmfRunStateMachineWorkItemNonBlocking();
SmfRunStateMachineWorkItemPassiveFlag();
SmfThrottleEvents();
SmfTraceStep();
UfxAcpiGetConnectorId();
UfxAcpiGetUpcConnectorType();
UfxAcpiInvokeMethodDsm();
UfxAddControllerToGroup();
UfxBroadcastAttachDetach();
UfxBusCreateChildPipes();
UfxBusCreateChildPipesForInterface();
UfxBusCreateChildQueues();
UfxBusGetChild();
UfxBusNotifyBusEventToAllChildren();
UfxBusNotifyBusEventToChildAtIndex();
UfxBusReadCurrentConfiguration();
UfxBusSetChildCapabilities();
UfxBus_EvtChildListCreateDevice();
UfxBus_EvtChildListDeviceReenumerated();
UfxBus_EvtCleanupCallback();
UfxCADInitialize();
UfxCADProcessPowerSourceNotification();
UfxCADUninitialize();
UfxCAD_NotificationCompletionCallback();
UfxCAD_PnPNotificationCallback();
UfxChildGetAssociatedEndpoint();
UfxClassLibraryBindClient();
UfxClassLibraryCreate();
UfxClassLibraryDeinitialize();
UfxClassLibraryInitialize();
UfxClassLibraryUnbindClient();
UfxControlHandshake();
UfxControlHandshakeCompletion();
UfxControlSend();
UfxControlSendCompletion();
UfxDescriptorCreate();
UfxDescriptorGetBinaryDeviceObjectStoreDescriptor();
UfxDescriptorGetConfigurationDescriptor();
UfxDescriptorGetDeviceDescriptor();
UfxDescriptorGetMSOSCompatIdDescriptor();
UfxDescriptorGetMSOSExtendedPropertyDescriptor();
UfxDescriptorGetQualifierDescriptor();
UfxDescriptorGetStringDescriptorAtIndex();
UfxDescriptorGetUfxConfigurationDescriptor();
UfxDescriptorGetUfxInterfaceDescriptor();
UfxDescriptorReleaseMemory();
UfxDescriptorUpdateDeviceSpeed();
UfxDeviceCreateInternal();
UfxDeviceEventCompleteInternal();
UfxDeviceHandleGetSetFunctionState();
UfxDeviceIoControlInternal();
UfxDeviceIoInternalControlInternal();
UfxDeviceNotifyAttachInternal();
UfxDeviceNotifyDetachInternal();
UfxDeviceNotifyFinalExitInternal();
UfxDeviceNotifyHardwareFailureInternal();
UfxDeviceNotifyHardwareReadyInternal();
UfxDeviceNotifyResetInternal();
UfxDeviceNotifyResumeInternal();
UfxDeviceNotifySuspendInternal();
UfxDevicePortDetectCompleteCommon();
UfxDevicePortDetectCompleteExInternal();
UfxDevicePortDetectCompleteInternal();
UfxDeviceProprietaryChargerDetectCompleteInternal();
UfxDevice_EvtCleanupCallback();
UfxDevice_EvtDestroyCallback();
UfxEnableDisableFunction();
UfxEnableDisableFunctionList();
UfxEndpointCommandComplete();
UfxEndpointCreateInternal();
UfxEndpointDescriptorUpdate();
UfxEndpointGetCommandQueueInternal();
UfxEndpointGetPipeState();
UfxEndpointGetTransferQueueInternal();
UfxEndpointInitSetEventCallbacksInternal();
UfxEndpointNotifySetupInternal();
UfxEndpointSetPipeState();
UfxEndpoint_RequestCompletionRoutine();
UfxFdoInitInternal();
UfxFindFunction();
UfxGetChildName();
UfxGetFunctionDescriptorForChild();
UfxGetInterfaceGuid();
UfxInitializeEndPointBitmaps();
UfxQueryIsFakeLoad();
UfxReenumerateSelf();
UfxRegisterDeviceExports();
UfxRegisterEndpointExports();
UfxRegistryDeviceFree();
UfxRegistryDeviceRead();
UfxRegistryDeviceReadAlternates();
UfxRegistryDeviceReadAssociations();
UfxRegistryDeviceReadConfigurations();
UfxRegistryDeviceReadDevice();
UfxRegistryDeviceReadInterfaces();
UfxRegistryDeviceReadUserPromptSettings();
UfxRegistryDeviceValidate();
UfxRegistryGetRegistryAlternate();
UfxRegistryGetRegistryAssociation();
UfxRegistryGetRegistryConfiguration();
UfxRegistryGetRegistryInterface();
UfxRegistryInterfaceNumberValidate();
UfxRegistryOpenPersistedUsbFnKey();
UfxRegistryUpdateFunctionState();
UfxRegistryValidateMsosExtendedProperty();
UfxRemoveControllerFromGroup();
UfxSendIoctlToInternalQueue();
UfxSendSynchronousIoctlToPdo();
UfxUuidReadSmbiosUuid();
UsbDualRoleFeaturesQueryLocalMachine();
ValidatePowerSourceNotification();
WPP_RECORDER_SF_();
WPP_RECORDER_SF_D();
WPP_RECORDER_SF_DD();
WPP_RECORDER_SF_DDD();
WPP_RECORDER_SF_DDDD();
WPP_RECORDER_SF_DDDDDDD();
WPP_RECORDER_SF_DDDDqq();
WPP_RECORDER_SF_DDDd();
WPP_RECORDER_SF_DDDqq();
WPP_RECORDER_SF_DDL();
WPP_RECORDER_SF_DDd();
WPP_RECORDER_SF_DLD();
WPP_RECORDER_SF_DLLL();
WPP_RECORDER_SF_DP();
WPP_RECORDER_SF_Dd();
WPP_RECORDER_SF_Dq();
WPP_RECORDER_SF_Dqd();
WPP_RECORDER_SF_Dqq();
WPP_RECORDER_SF_L();
WPP_RECORDER_SF_LD();
WPP_RECORDER_SF_LDDDDD();
WPP_RECORDER_SF_LL();
WPP_RECORDER_SF_LLLq();
WPP_RECORDER_SF_Ld();
WPP_RECORDER_SF_Lq();
WPP_RECORDER_SF_Lqd();
WPP_RECORDER_SF_Lqqq();
WPP_RECORDER_SF_Lqqqd();
WPP_RECORDER_SF_P();
WPP_RECORDER_SF_PD();
WPP_RECORDER_SF_PP();
WPP_RECORDER_SF_SS();
WPP_RECORDER_SF_Sd();
WPP_RECORDER_SF_d();
WPP_RECORDER_SF_dd();
WPP_RECORDER_SF_ddqq();
WPP_RECORDER_SF_dq();
WPP_RECORDER_SF_dqd();
WPP_RECORDER_SF_dqqq();
WPP_RECORDER_SF_i();
WPP_RECORDER_SF_iddddL_guid_();
WPP_RECORDER_SF_q();
WPP_RECORDER_SF_qL();
WPP_RECORDER_SF_qLD();
WPP_RECORDER_SF_qd();
WPP_RECORDER_SF_ql();
WPP_RECORDER_SF_qq();
WPP_RECORDER_SF_qqD();
WPP_RECORDER_SF_qqd();
WPP_RECORDER_SF_qqq();
WPP_RECORDER_SF_qqqd();
WPP_RECORDER_SF_qqqq();
WPP_RECORDER_SF_qsDq();
WnfPublishUsbDeviceState();
WnfPublishUsbPartnerDualRoleFeatures();
WnfPublishWeakChargerStatus();
WppClassicProviderCallback();
WppCleanupKm();
WppInitKm();
WppLoadTracingSupport();
WppTraceCallback();
_GSHandlerCheck();
_GSHandlerCheckCommon();
_report_gsfailure();
_security_check_cookie();
_security_init_cookie();
guard_check_icall_nop();
guard_dispatch_icall_nop();
memcmp();
memcpy();
memmove();
memset();
wcsicmp();
