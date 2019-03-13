struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct _ACCESS_STATE;
struct _BIP;
struct _BIP_CONTEXT;
struct _BTDEVICE;
struct _BTH_SCO_MP_INDICATION_PARAMETERS;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _CM_RESOURCE_LIST;
struct _COMPOSITE_DEVICE_CAPABILITIES;
struct _COMPRESSED_DATA_INFO;
struct _CONTEXT;
struct _COUNTER;
struct _CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG;
struct _DEVICE_CAPABILITIES;
struct _DEVICE_EXTENSION;
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
struct _INTERRUPT_READ_WRAPPER;
struct _IO_COMPLETION_CONTEXT;
struct _IO_DRIVER_CREATE_CONTEXT;
struct _IO_QUEUE;
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
struct _IRP_LIST;
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
struct _KTIMER;
struct _KTSS64;
struct _LIST_ENTRY;
struct _LOCKED_LIST;
struct _LOOKASIDE_LIST_EX;
struct _LUID;
struct _LUID_AND_ATTRIBUTES;
struct _M128A;
struct _MAILSLOT_CREATE_PARAMETERS;
struct _MDL;
struct _NAMED_PIPE_CREATE_PARAMETERS;
struct _NPAGED_LOOKASIDE_LIST;
struct _NT_TIB;
struct _OWNER_ENTRY;
struct _PAGED_LOOKASIDE_LIST;
struct _POWER_SEQUENCE;
struct _PRIVILEGE_SET;
struct _REF_OBJ;
struct _REF_OBJ_DEBUG_INFO;
struct _RESOURCE_QUEUE;
struct _RTL_BITMAP;
struct _RTL_DYNAMIC_HASH_TABLE;
struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT;
struct _RTL_DYNAMIC_HASH_TABLE_ENTRY;
struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR;
struct _RTL_QUERY_REGISTRY_TABLE;
struct _RTL_SPLAY_LINKS;
struct _SCATTER_GATHER_ELEMENT;
struct _SCATTER_GATHER_LIST;
struct _SCO_USB_CHANNEL;
struct _SCO_USB_INTERFACE;
struct _SCO_USB_PIPE_OBJ;
struct _SCO_USB_TRANSFER_CTX;
struct _SCSI_REQUEST_BLOCK;
struct _SECTION_OBJECT_POINTERS;
struct _SECURITY_QUALITY_OF_SERVICE;
struct _SECURITY_SUBJECT_CONTEXT;
struct _SINGLE_LIST_ENTRY;
struct _SLIST_ENTRY;
struct _STRING;
struct _SYSTEM_POWER_STATE_CONTEXT;
struct _TRANSFER_CONTEXT;
struct _TXN_PARAMETER_BLOCK;
struct _UNICODE_STRING;
struct _URB;
struct _URB_BULK_OR_INTERRUPT_TRANSFER;
struct _URB_CONTROL_DESCRIPTOR_REQUEST;
struct _URB_CONTROL_FEATURE_REQUEST;
struct _URB_CONTROL_GET_CONFIGURATION_REQUEST;
struct _URB_CONTROL_GET_INTERFACE_REQUEST;
struct _URB_CONTROL_GET_STATUS_REQUEST;
struct _URB_CONTROL_TRANSFER;
struct _URB_CONTROL_TRANSFER_EX;
struct _URB_CONTROL_VENDOR_OR_CLASS_REQUEST;
struct _URB_FRAME_LENGTH_CONTROL;
struct _URB_GET_CURRENT_FRAME_NUMBER;
struct _URB_GET_FRAME_LENGTH;
struct _URB_GET_ISOCH_PIPE_TRANSFER_PATH_DELAYS;
struct _URB_HCD_AREA;
struct _URB_HEADER;
struct _URB_ISOCH_TRANSFER;
struct _URB_OPEN_STATIC_STREAMS;
struct _URB_OS_FEATURE_DESCRIPTOR_REQUEST;
struct _URB_PIPE_REQUEST;
struct _URB_SELECT_CONFIGURATION;
struct _URB_SELECT_INTERFACE;
struct _URB_SET_FRAME_LENGTH;
struct _USBD_INTERFACE_INFORMATION;
struct _USBD_ISO_PACKET_DESCRIPTOR;
struct _USBD_PIPE_INFORMATION;
struct _USBD_STREAM_INFORMATION;
struct _USBD_VERSION_INFORMATION;
struct _USB_BUS_INTERFACE_USBDI_V0;
struct _USB_CONFIGURATION_DESCRIPTOR;
struct _USB_DEVICE_DESCRIPTOR;
struct _USB_IDLE_CALLBACK_INFO;
struct _USB_INTERFACE_DESCRIPTOR;
struct _USB_WRAPPER_EXTENSION;
struct _USB_WRAPPER_PINGPONG;
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
enum _BTH_PIPE_TYPE;
enum _BTH_SCO_MP_INDICATION_CODE;
enum _DEVICE_POWER_STATE;
enum _DEVICE_RELATION_TYPE;
enum _DEVICE_USAGE_NOTIFICATION_TYPE;
enum _DEVICE_WAKE_DEPTH;
enum _DEVSTATE;
enum _DIRECTORY_NOTIFY_INFORMATION_CLASS;
enum _EVENT_TYPE;
enum _EXCEPTION_DISPOSITION;
enum _FILE_INFORMATION_CLASS;
enum _FSINFOCLASS;
enum _HCI_PKT_TYPE;
enum _INTERFACE_TYPE;
enum _INTERLOCKED_RESULT;
enum _IO_ALLOCATION_ACTION;
enum _IRQ_DEVICE_POLICY;
enum _IRQ_PRIORITY;
enum _KINTERRUPT_POLARITY;
enum _MEMORY_CACHING_TYPE;
enum _MEMORY_CACHING_TYPE_ORIG;
enum _MODE;
enum _PIPE_STATE;
enum _POOL_TYPE;
enum _POWER_STATE_TYPE;
enum _REG_NOTIFY_CLASS;
enum _SECURITY_IMPERSONATION_LEVEL;
enum _SYSTEM_POWER_STATE;
enum _USBD_PIPE_TYPE;
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

typedef struct _BIP {
    struct _BTDEVICE *BtDevice;
    enum _HCI_PKT_TYPE Type;
    LONG Status;
    struct _GUID TrackIrpActivity;
    ULONG BytesTransferred;
    ULONG Flags;
    PVOID BufferData;
    struct _MDL *MdlData;
    ULONG DataLen;
    PVOID CancelRoutine;
    UCHAR CancelIrql;
    struct _LIST_ENTRY BipChain;
    struct _LIST_ENTRY ListEntry;
    struct _BIP_CONTEXT PacketContexts[3];
    UCHAR DoNotLogToETWIfAboveMaxLen;
    ULONG MaxETWLogLen;
    UCHAR DataBuffer[1];
};

typedef struct _BIP_CONTEXT {
    PVOID CompletionRoutine;
    PVOID Context;
    PVOID BufferStart;
    ULONG BufferLen;
    PVOID TxStartCallback;
};

typedef struct _BTDEVICE {
    PVOID MiniportContext;
    struct _DEVICE_OBJECT *FunctionalDeviceObject;
    struct _DEVICE_OBJECT *PhysicalDeviceObject;
    struct _DEVICE_OBJECT *NextDeviceObject;
};

typedef struct _BTH_SCO_MP_INDICATION_PARAMETERS {
    USHORT ConnectionHandle;
    struct {
        PVOID BufferData;
        ULONG DataLen;
        ULONG64 DataTag;
    } Read;
    struct {
        PVOID BufferData;
        ULONG DataLen;
        PVOID WriteCtx;
    } Write;
    struct {
        PVOID WriteCtx;
        LONG Status;
        PVOID BufferData;
        ULONG DataLen;
        ULONG64 DataTag;
    } WriteComplete;
    struct {
        UCHAR Read;
        ULONG DataLen;
    } GetSize;
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

typedef struct _COMPOSITE_DEVICE_CAPABILITIES {
    ULONG CapabilityFunctionSuspend : 1;
    ULONG Reserved : 31;
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

typedef struct _COUNTER {
    LONG Count;
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

typedef struct _DEVICE_EXTENSION {
    struct _BTDEVICE *BtDevice;
    struct _UNICODE_STRING PhysicalDeviceObjectName;
    struct _DEVICE_OBJECT *TopOfStack;
    ULONG64 SpinLock;
    struct _IO_REMOVE_LOCK RemoveLock;
    UCHAR bMustClearErrorOnPipeStart;
    PVOID EventPipeWrap;
    PVOID ReadPipeWrap;
    enum _DEVSTATE RadioState;
    ULONG StartDelay;
    ULONG AclWriteDelay;
    ULONG BulkInSize;
    PVOID ConfigHandle;
    struct _USB_DEVICE_DESCRIPTOR *DeviceDescriptor;
    struct _USB_CONFIGURATION_DESCRIPTOR *ConfigDescriptor;
    struct _LOCKED_LIST UrbContextErrorQueue;
    struct _IO_WORKITEM *ErrorWorkItem;
    struct _IRP *CommandIrp;
    struct _USB_IDLE_CALLBACK_INFO UsbIdleCallbackInfo;
    struct _IRP *IdleNotificationIrp;
    struct _BIP *SelectiveSuspendBip;
    struct _USBD_PIPE_INFORMATION Pipes[5];
    struct _SCO_USB_INTERFACE Sco;
    UCHAR SurpriseRemoved;
    UCHAR IdleNotificationPended;
    struct _LOCKED_LIST PendingWriteTransferQueue;
    struct _LIST_ENTRY DevExtListEntry;
    UCHAR RemoteWakeCapable;
    UCHAR SelfPoweredCapable;
    UCHAR SelfPoweredStatus;
    UCHAR SelectiveSuspendDisabledViaRegistry;
    UCHAR SelectiveSuspendEnabled;
    enum _PIPE_STATE PipeState;
    struct _KEVENT SyncPipeEvent;
    LONG PipeStatus;
    ULONG64 PipeStateLock;
    UCHAR IsLoadedOn30Stack;
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

typedef struct _INTERRUPT_READ_WRAPPER {
    struct _USBD_PIPE_INFORMATION *InterruptPipe;
    PLONG ClientCallback;
    PVOID ClientContext;
    ULONG MaxTransferSize;
    ULONG NotificationTypes;
    struct _USB_WRAPPER_PINGPONG *PingPongs;
    ULONG NumPingPongs;
    ULONG MaxReportSize;
    ULONG OutstandingRequests;
    struct _LIST_ENTRY SavedQueue;
    struct _LIST_ENTRY IncomingQueue;
    ULONG64 QueueLock;
    ULONG PumpState;
    ULONG HandlingError;
    ULONG WorkItemRunning;
    ULONG ErrorCount;
    ULONG TransferCount;
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

typedef struct _IO_QUEUE {
    struct _IRP_LIST IrpList;
    LONG AbortStatus;
    UCHAR SimpleQueue;
    struct _IRP *CurrentIrp;
    UCHAR Busy;
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

typedef struct _IRP_LIST {
    struct _LOCKED_LIST LockedList;
    PVOID CancelRoutine;
    PLONG IrpCompletionRoutine;
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

typedef struct _LOCKED_LIST {
    struct _LIST_ENTRY ListHead;
    ULONG64 SpinLock;
    PULONG64 ListLock;
    LONG Count;
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

typedef struct _REF_OBJ {
    ULONG Count;
    PVOID DestroyFunction;
    struct _REF_OBJ_DEBUG_INFO *DebugInfo;
};

typedef struct _REF_OBJ_DEBUG_INFO {
};

typedef struct _RESOURCE_QUEUE {
    LONG AbortStatus;
    ULONG64 Lock;
    struct _LIST_ENTRY ListEntry;
    ULONG Counter;
    struct _KEVENT AbortAndWaitEvent;
    PVOID *FnGetItem;
    PVOID FnFreeItem;
    PVOID FnDestroyItems;
    PVOID ContextFn;
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

typedef struct _SCO_USB_CHANNEL {
    USHORT ConnectionHandle;
    ULONG64 Lock;
    ULONG Flags;
    ULONG TxBandwidth;
    ULONG RxBandwidth;
    ULONG TxPacketSize;
    ULONG RxPacketSize;
    ULONG PacketInterval;
    ULONG TxFragmentSize;
    ULONG RxFragmentSize;
    PLONG Callback;
    PVOID CallbackContext;
    struct _SCO_USB_PIPE_OBJ WritePipeObj;
    ULONG WriteDataSizePerReq;
};

typedef struct _SCO_USB_INTERFACE {
    LONG InitStatus;
    struct _USB_BUS_INTERFACE_USBDI_V0 UsbBusInterface;
    struct _RESOURCE_QUEUE WriteCtxQueue;
    struct _RESOURCE_QUEUE ReadCtxQueue;
    struct _SCO_USB_PIPE_OBJ ReadPipeObj;
    ULONG64 ReadLock;
    ULONG ReadLastFrame;
    USHORT ReadLastPipeId;
    UCHAR ReadsEnabled;
    struct _SCO_USB_TRANSFER_CTX *PartialReadCtx;
    ULONG64 WriteLock;
    ULONG WriteLastFrame;
    USHORT WriteLastPipeId;
    ULONG WriteFramesPerReq;
    ULONG WriteHciPacketsPerReq;
    LONG WriteMaxPendingReq;
    UCHAR InterfaceNumber;
    struct _USB_INTERFACE_DESCRIPTOR *OffInterface;
    struct _USB_INTERFACE_DESCRIPTOR *MaxInterface;
    struct _USB_INTERFACE_DESCRIPTOR *CurInterface;
    ULONG MaxFrameSize;
    ULONG MaxBandwidth;
    USHORT NumChannels;
    struct _SCO_USB_CHANNEL Channel[3];
};

typedef struct _SCO_USB_PIPE_OBJ {
    PLONG FnSendUrb;
    PLONG FnCompleteUrb;
    PULONG FnAlignFrame;
    PULONG FnGetNextFrame;
    enum _BTH_PIPE_TYPE PipeType;
    USHORT Id;
    ULONG64 Lock;
    ULONG Flags;
    LONG InProgressUrbs;
    struct _LIST_ENTRY InProgressUrbsHead;
    ULONG NextStartFrame;
    UCHAR fNextStartFrame;
};

typedef struct _SCO_USB_TRANSFER_CTX {
    ULONG Signature;
    struct _REF_OBJ RefObj;
    struct _RESOURCE_QUEUE *CtxQueue;
    struct _LIST_ENTRY ListEntry;
    struct _DEVICE_EXTENSION *DevExt;
    struct _IRP *Irp;
    struct _URB *Urb;
    ULONG UrbFrames;
    ULONG UrbSize;
    ULONG UrbFrameIndex;
    ULONG Flags;
    enum _BTH_PIPE_TYPE IndexPipe;
    PUCHAR TransferBuffer;
    struct _MDL *TransferMdl;
    ULONG BufferLen;
    PVOID AuxiliaryBuffer;
    ULONG AuxBufferLen;
    struct _SCO_USB_CHANNEL *Chx;
    ULONG64 StartTimestamp;
    ULONG64 EndTimestamp;
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
    ULONG Signature;
    struct _LIST_ENTRY ListEntry;
    struct _DEVICE_EXTENSION *DeviceExtension;
    struct _IRP *Irp;
    struct _URB Urb;
    struct _BIP *Bip;
    struct _GUID ActivityId;
    ULONG Flags;
    enum _BTH_PIPE_TYPE Index;
    PUCHAR TransferBuffer;
    ULONG BufferLen;
    struct _LIST_ENTRY PendingListEntry;
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

typedef struct _URB {
    struct _URB_HEADER UrbHeader;
    struct _URB_SELECT_INTERFACE UrbSelectInterface;
    struct _URB_SELECT_CONFIGURATION UrbSelectConfiguration;
    struct _URB_PIPE_REQUEST UrbPipeRequest;
    struct _URB_FRAME_LENGTH_CONTROL UrbFrameLengthControl;
    struct _URB_GET_FRAME_LENGTH UrbGetFrameLength;
    struct _URB_SET_FRAME_LENGTH UrbSetFrameLength;
    struct _URB_GET_CURRENT_FRAME_NUMBER UrbGetCurrentFrameNumber;
    struct _URB_CONTROL_TRANSFER UrbControlTransfer;
    struct _URB_CONTROL_TRANSFER_EX UrbControlTransferEx;
    struct _URB_BULK_OR_INTERRUPT_TRANSFER UrbBulkOrInterruptTransfer;
    struct _URB_ISOCH_TRANSFER UrbIsochronousTransfer;
    struct _URB_CONTROL_DESCRIPTOR_REQUEST UrbControlDescriptorRequest;
    struct _URB_CONTROL_GET_STATUS_REQUEST UrbControlGetStatusRequest;
    struct _URB_CONTROL_FEATURE_REQUEST UrbControlFeatureRequest;
    struct _URB_CONTROL_VENDOR_OR_CLASS_REQUEST UrbControlVendorClassRequest;
    struct _URB_CONTROL_GET_INTERFACE_REQUEST UrbControlGetInterfaceRequest;
    struct _URB_CONTROL_GET_CONFIGURATION_REQUEST UrbControlGetConfigurationRequest;
    struct _URB_OS_FEATURE_DESCRIPTOR_REQUEST UrbOSFeatureDescriptorRequest;
    struct _URB_OPEN_STATIC_STREAMS UrbOpenStaticStreams;
    struct _URB_GET_ISOCH_PIPE_TRANSFER_PATH_DELAYS UrbGetIsochPipeTransferPathDelays;
};

typedef struct _URB_BULK_OR_INTERRUPT_TRANSFER {
    struct _URB_HEADER Hdr;
    PVOID PipeHandle;
    ULONG TransferFlags;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    struct _MDL *TransferBufferMDL;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
};

typedef struct _URB_CONTROL_DESCRIPTOR_REQUEST {
    struct _URB_HEADER Hdr;
    PVOID Reserved;
    ULONG Reserved0;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    struct _MDL *TransferBufferMDL;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
    USHORT Reserved1;
    UCHAR Index;
    UCHAR DescriptorType;
    USHORT LanguageId;
    USHORT Reserved2;
};

typedef struct _URB_CONTROL_FEATURE_REQUEST {
    struct _URB_HEADER Hdr;
    PVOID Reserved;
    ULONG Reserved2;
    ULONG Reserved3;
    PVOID Reserved4;
    struct _MDL *Reserved5;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
    USHORT Reserved0;
    USHORT FeatureSelector;
    USHORT Index;
    USHORT Reserved1;
};

typedef struct _URB_CONTROL_GET_CONFIGURATION_REQUEST {
    struct _URB_HEADER Hdr;
    PVOID Reserved;
    ULONG Reserved0;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    struct _MDL *TransferBufferMDL;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
    UCHAR Reserved1[8];
};

typedef struct _URB_CONTROL_GET_INTERFACE_REQUEST {
    struct _URB_HEADER Hdr;
    PVOID Reserved;
    ULONG Reserved0;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    struct _MDL *TransferBufferMDL;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
    UCHAR Reserved1[4];
    USHORT Interface;
    USHORT Reserved2;
};

typedef struct _URB_CONTROL_GET_STATUS_REQUEST {
    struct _URB_HEADER Hdr;
    PVOID Reserved;
    ULONG Reserved0;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    struct _MDL *TransferBufferMDL;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
    UCHAR Reserved1[4];
    USHORT Index;
    USHORT Reserved2;
};

typedef struct _URB_CONTROL_TRANSFER {
    struct _URB_HEADER Hdr;
    PVOID PipeHandle;
    ULONG TransferFlags;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    struct _MDL *TransferBufferMDL;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
    UCHAR SetupPacket[8];
};

typedef struct _URB_CONTROL_TRANSFER_EX {
    struct _URB_HEADER Hdr;
    PVOID PipeHandle;
    ULONG TransferFlags;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    struct _MDL *TransferBufferMDL;
    ULONG Timeout;
    struct _URB_HCD_AREA hca;
    UCHAR SetupPacket[8];
};

typedef struct _URB_CONTROL_VENDOR_OR_CLASS_REQUEST {
    struct _URB_HEADER Hdr;
    PVOID Reserved;
    ULONG TransferFlags;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    struct _MDL *TransferBufferMDL;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
    UCHAR RequestTypeReservedBits;
    UCHAR Request;
    USHORT Value;
    USHORT Index;
    USHORT Reserved1;
};

typedef struct _URB_FRAME_LENGTH_CONTROL {
    struct _URB_HEADER Hdr;
};

typedef struct _URB_GET_CURRENT_FRAME_NUMBER {
    struct _URB_HEADER Hdr;
    ULONG FrameNumber;
};

typedef struct _URB_GET_FRAME_LENGTH {
    struct _URB_HEADER Hdr;
    ULONG FrameLength;
    ULONG FrameNumber;
};

typedef struct _URB_GET_ISOCH_PIPE_TRANSFER_PATH_DELAYS {
    struct _URB_HEADER Hdr;
    PVOID PipeHandle;
    ULONG MaximumSendPathDelayInMilliSeconds;
    ULONG MaximumCompletionPathDelayInMilliSeconds;
};

typedef struct _URB_HCD_AREA {
    PVOID Reserved8[8];
};

typedef struct _URB_HEADER {
    USHORT Length;
    USHORT Function;
    LONG Status;
    PVOID UsbdDeviceHandle;
    ULONG UsbdFlags;
};

typedef struct _URB_ISOCH_TRANSFER {
    struct _URB_HEADER Hdr;
    PVOID PipeHandle;
    ULONG TransferFlags;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    struct _MDL *TransferBufferMDL;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
    ULONG StartFrame;
    ULONG NumberOfPackets;
    ULONG ErrorCount;
    struct _USBD_ISO_PACKET_DESCRIPTOR IsoPacket[1];
};

typedef struct _URB_OPEN_STATIC_STREAMS {
    struct _URB_HEADER Hdr;
    PVOID PipeHandle;
    ULONG NumberOfStreams;
    USHORT StreamInfoVersion;
    USHORT StreamInfoSize;
    struct _USBD_STREAM_INFORMATION *Streams;
};

typedef struct _URB_OS_FEATURE_DESCRIPTOR_REQUEST {
    struct _URB_HEADER Hdr;
    PVOID Reserved;
    ULONG Reserved0;
    ULONG TransferBufferLength;
    PVOID TransferBuffer;
    struct _MDL *TransferBufferMDL;
    struct _URB *UrbLink;
    struct _URB_HCD_AREA hca;
    UCHAR Recipient : 5;
    UCHAR Reserved1 : 3;
    UCHAR Reserved2;
    UCHAR InterfaceNumber;
    UCHAR MS_PageIndex;
    USHORT MS_FeatureDescriptorIndex;
    USHORT Reserved3;
};

typedef struct _URB_PIPE_REQUEST {
    struct _URB_HEADER Hdr;
    PVOID PipeHandle;
    ULONG Reserved;
};

typedef struct _URB_SELECT_CONFIGURATION {
    struct _URB_HEADER Hdr;
    struct _USB_CONFIGURATION_DESCRIPTOR *ConfigurationDescriptor;
    PVOID ConfigurationHandle;
    struct _USBD_INTERFACE_INFORMATION Interface;
};

typedef struct _URB_SELECT_INTERFACE {
    struct _URB_HEADER Hdr;
    PVOID ConfigurationHandle;
    struct _USBD_INTERFACE_INFORMATION Interface;
};

typedef struct _URB_SET_FRAME_LENGTH {
    struct _URB_HEADER Hdr;
    LONG FrameLengthDelta;
};

typedef struct _USBD_INTERFACE_INFORMATION {
    USHORT Length;
    UCHAR InterfaceNumber;
    UCHAR AlternateSetting;
    UCHAR Class;
    UCHAR SubClass;
    UCHAR Protocol;
    UCHAR Reserved;
    PVOID InterfaceHandle;
    ULONG NumberOfPipes;
    struct _USBD_PIPE_INFORMATION Pipes[1];
};

typedef struct _USBD_ISO_PACKET_DESCRIPTOR {
    ULONG Offset;
    ULONG Length;
    LONG Status;
};

typedef struct _USBD_PIPE_INFORMATION {
    USHORT MaximumPacketSize;
    UCHAR EndpointAddress;
    UCHAR Interval;
    enum _USBD_PIPE_TYPE PipeType;
    PVOID PipeHandle;
    ULONG MaximumTransferSize;
    ULONG PipeFlags;
};

typedef struct _USBD_STREAM_INFORMATION {
    PVOID PipeHandle;
    ULONG StreamID;
    ULONG MaximumTransferSize;
    ULONG PipeFlags;
};

typedef struct _USBD_VERSION_INFORMATION {
    ULONG USBDI_Version;
    ULONG Supported_USB_Version;
};

typedef struct _USB_BUS_INTERFACE_USBDI_V0 {
    USHORT Size;
    USHORT Version;
    PVOID BusContext;
    PVOID InterfaceReference;
    PVOID InterfaceDereference;
    PVOID GetUSBDIVersion;
    PLONG QueryBusTime;
    PLONG SubmitIsoOutUrb;
    PLONG QueryBusInformation;
};

typedef struct _USB_CONFIGURATION_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    USHORT wTotalLength;
    UCHAR bNumInterfaces;
    UCHAR bConfigurationValue;
    UCHAR iConfiguration;
    UCHAR bmAttributes;
    UCHAR MaxPower;
};

typedef struct _USB_DEVICE_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    USHORT bcdUSB;
    UCHAR bDeviceClass;
    UCHAR bDeviceSubClass;
    UCHAR bDeviceProtocol;
    UCHAR bMaxPacketSize0;
    USHORT idVendor;
    USHORT idProduct;
    USHORT bcdDevice;
    UCHAR iManufacturer;
    UCHAR iProduct;
    UCHAR iSerialNumber;
    UCHAR bNumConfigurations;
};

typedef struct _USB_IDLE_CALLBACK_INFO {
    PVOID IdleCallback;
    PVOID IdleContext;
};

typedef struct _USB_INTERFACE_DESCRIPTOR {
    UCHAR bLength;
    UCHAR bDescriptorType;
    UCHAR bInterfaceNumber;
    UCHAR bAlternateSetting;
    UCHAR bNumEndpoints;
    UCHAR bInterfaceClass;
    UCHAR bInterfaceSubClass;
    UCHAR bInterfaceProtocol;
    UCHAR iInterface;
};

typedef struct _USB_WRAPPER_EXTENSION {
    struct _DEVICE_OBJECT *LowerDeviceObject;
    struct _DEVICE_OBJECT *DeviceObject;
    struct _IO_REMOVE_LOCK *RemoveLock;
    struct _INTERRUPT_READ_WRAPPER IntReadWrap;
    ULONG RemLockSize;
};

typedef struct _USB_WRAPPER_PINGPONG {
    ULONG sig;
    ULONG ReadInterlock;
    struct _IRP *irp;
    struct _URB *urb;
    PUCHAR reportBuffer;
    LONG weAreCancelling;
    struct _KEVENT sentEvent;
    struct _KEVENT pumpDoneEvent;
    LONG pingPongInProgress;
    struct _USB_WRAPPER_EXTENSION *myWrapExt;
    struct _KTIMER backoffTimer;
    struct _KDPC backoffTimerDPC;
    union _LARGE_INTEGER backoffTimerPeriod;
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

typedef enum _BTH_PIPE_TYPE {
    READ_PIPE = 0,
    WRITE_PIPE = 1,
    EVENT_PIPE = 2,
    READ_SCO_PIPE = 3,
    WRITE_SCO_PIPE = 4,
    MAX_NUM_PIPES = 5
};

typedef enum _BTH_SCO_MP_INDICATION_CODE {
    ScoMpIndicationRead = 0,
    ScoMpIndicationGetSize = 1,
    ScoMpIndicationWrite = 2,
    ScoMpIndicationWriteComplete = 3
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

typedef enum _DEVSTATE {
    UNKNOWN = 0,
    STOPPED = 1,
    WORKING = 2,
    PENDING_STOP = 3,
    PENDING_REMOVE = 4,
    SURPRISE_REMOVED = 5,
    REMOVED = 6
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

typedef enum _HCI_PKT_TYPE {
    NULL_PKT = 0,
    CMND_PKT = 1,
    EVENT_PKT = 2,
    DATA_PKT_R = 3,
    DATA_PKT_W = 4,
    SCO_PKT_R = 5,
    SCO_PKT_W = 6,
    POWER_PKT_ENTER_SUSPEND = 7
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

typedef enum _PIPE_STATE {
    PIPE_UNINITIALIZED = 0,
    PIPE_RESETTING = 1,
    PIPE_OPENED = 2
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

typedef enum _USBD_PIPE_TYPE {
    UsbdPipeTypeControl = 0,
    UsbdPipeTypeIsochronous = 1,
    UsbdPipeTypeBulk = 2,
    UsbdPipeTypeInterrupt = 3
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

BTHUSB_ETW_EVENT_BIP_RECEIVE;
BTHUSB_ETW_EVENT_BIP_SEND;
BTHUSB_ETW_EVENT_HC_INFORMATION;
BTHUSB_ETW_PROVIDER;
BthLib_RefObjGlobals;
GUID_USBD_INTERFACE;
Globals;
PipeStrings;
USB_BUS_INTERFACE_USBDI_GUID;
WPPTraceSuite;
WPP_3aed00f7e159325f742a3108a7c79ed0_Traceguids;
WPP_66243e52bf09376ad5cce25102984987_Traceguids;
WPP_70c62e514d01356f09ca988639effc8f_Traceguids;
WPP_77c390ac72c43b3239daa70754e07c08_Traceguids;
WPP_7fac81b47cb63985bfe36a3d3ed5d71f_Traceguids;
WPP_GLOBAL_Control;
WPP_MAIN_CB;
WPP_ThisDir_CTLGUID_bthusb;
WPP_e2c72cd9b1e235a8f8e3e1da8fe88917_Traceguids;
WPP_e86fdc8b50993e86553d670b6d8ba12b_Traceguids;
_IMPORT_DESCRIPTOR_USBD;
_IMPORT_DESCRIPTOR_WppRecorder;
_IMPORT_DESCRIPTOR_bthport;
_IMPORT_DESCRIPTOR_ntoskrnl;
_NULL_IMPORT_DESCRIPTOR;
__PchSym_;
_guard_check_icall_fptr;
_guard_dispatch_icall_fptr;
_guard_fids_table;
_guard_iat_table;
_imp_BTHPORT_AllocateBip;
_imp_BTHPORT_FreeBip;
_imp_BTHPORT_RecvMpBip;
_imp_BTHPORT_RegisterMiniport;
_imp_BthAcquireBipCancelLock;
_imp_BthReleaseBipCancelLock;
_imp_DbgPrintEx;
_imp_EtwActivityIdControl;
_imp_EtwProviderEnabled;
_imp_EtwRegister;
_imp_EtwUnregister;
_imp_EtwWrite;
_imp_ExAllocatePoolWithTag;
_imp_ExFreePool;
_imp_ExFreePoolWithTag;
_imp_ExInterlockedInsertTailList;
_imp_ExInterlockedRemoveHeadList;
_imp_IoAcquireRemoveLockEx;
_imp_IoAllocateIrp;
_imp_IoAllocateMdl;
_imp_IoAllocateWorkItem;
_imp_IoBuildDeviceIoControlRequest;
_imp_IoCancelIrp;
_imp_IoFreeIrp;
_imp_IoFreeMdl;
_imp_IoFreeWorkItem;
_imp_IoGetDeviceProperty;
_imp_IoInitializeRemoveLockEx;
_imp_IoOpenDeviceRegistryKey;
_imp_IoQueueWorkItem;
_imp_IoReleaseRemoveLockAndWaitEx;
_imp_IoReleaseRemoveLockEx;
_imp_IoReuseIrp;
_imp_IoSetActivityIdIrp;
_imp_IoSetCompletionRoutineEx;
_imp_IoWMIRegistrationControl;
_imp_IofCallDriver;
_imp_KeAcquireSpinLockRaiseToDpc;
_imp_KeClearEvent;
_imp_KeDelayExecutionThread;
_imp_KeInitializeEvent;
_imp_KeInitializeSpinLock;
_imp_KeInitializeTimer;
_imp_KeLowerIrql;
_imp_KeQueryTimeIncrement;
_imp_KeReleaseSpinLock;
_imp_KeResetEvent;
_imp_KeSetEvent;
_imp_KeSetTimer;
_imp_KeWaitForSingleObject;
_imp_KfRaiseIrql;
_imp_MmBuildMdlForNonPagedPool;
_imp_MmGetSystemRoutineAddress;
_imp_MmIsDriverVerifying;
_imp_RtlCompareMemory;
_imp_RtlGetVersion;
_imp_RtlInitUnicodeString;
_imp_RtlQueryRegistryValues;
_imp_USBD_CreateConfigurationRequestEx;
_imp_USBD_ParseConfigurationDescriptorEx;
_imp_WppAutoLogStart;
_imp_WppAutoLogStop;
_imp_WppAutoLogTrace;
_imp_ZwClose;
_imp_ZwQueryValueKey;
_imp___C_specific_handler;
_imp__vsnprintf;
_imp_imp_WppRecorderReplay;
_security_cookie;
_security_cookie_complement;
_staticf1e332bc79be5bd36678cc08f23ab0ed5e9fd285240e843439c0e006a325c677;
g_DataTypeStrings;
g_EnableDbgPrints;
g_EtwRegHandle;
g_PdoLockedList;
g_StateStrings;
load_config_used;
pfnEtwRegisterClassicProvider;
pfnEtwUnregister;
pfnWppGetVersion;
pfnWppQueryTraceInformation;
pfnWppTraceMessage;
USBD_NULL_THUNK_DATA;
WppRecorder_NULL_THUNK_DATA;
bthport_NULL_THUNK_DATA;
ntoskrnl_NULL_THUNK_DATA;

BthGetActivityID();
BthQueryKeyValue();
BthQueryKeyValueEx();
BthUsbPushBipComplete();
BthUsb_AsynchCallUsbd();
BthUsb_CommandBipCancelRoutine();
BthUsb_CreateDeviceExtension();
BthUsb_DelayPowerUp();
BthUsb_DestroyDeviceExtension();
BthUsb_DestroyTransferContext();
BthUsb_EnterSelectiveSuspend();
BthUsb_EtwEnableCallback();
BthUsb_EventTransferComplete();
BthUsb_FindUsbdPipeDescriptor();
BthUsb_GetCapabilities();
BthUsb_GetConfigDescriptor();
BthUsb_GetDeviceDescriptor();
BthUsb_GetInterfaceDescriptor();
BthUsb_GetMaxIsoInterface();
BthUsb_GetPhysicalDeviceObjectName();
BthUsb_GetRadioState();
BthUsb_GetSelectiveSuspendBip();
BthUsb_GetUsbBusInterface();
BthUsb_HandleStateChange();
BthUsb_HciWrite();
BthUsb_IdleCallback();
BthUsb_IdleNotificationComplete();
BthUsb_InitDeviceExtension();
BthUsb_InitializeIsochPipes();
BthUsb_InitializeNonIsochPipes();
BthUsb_IsIsochInterface();
BthUsb_IsNonIsochInterface();
BthUsb_PipeErrorWorkItem();
BthUsb_PipeRequest();
BthUsb_PnpCreateDevice();
BthUsb_PnpRemove();
BthUsb_PnpStartDevice();
BthUsb_PnpStopDevice();
BthUsb_Power();
BthUsb_ProcessPdoEtwRundown();
BthUsb_QueryRemoteWake();
BthUsb_QuerySelectiveSuspend();
BthUsb_ReadTransferComplete();
BthUsb_ResetPipe();
BthUsb_ScoAddChannel();
BthUsb_ScoAllocReadTransferCtxImpl();
BthUsb_ScoAllocTransferContextImpl();
BthUsb_ScoAllocTransferContextsImpl();
BthUsb_ScoAllocWriteTransferCtxImpl();
BthUsb_ScoAnyTransfer();
BthUsb_ScoBasicValidation();
BthUsb_ScoComputeChannelInfo();
BthUsb_ScoControlChannel();
BthUsb_ScoDestroyTransferContextsImpl();
BthUsb_ScoFindInterfaceByFrame();
BthUsb_ScoFreePartialUsbCtx();
BthUsb_ScoFreeReadResources();
BthUsb_ScoFreeTransferContextImpl();
BthUsb_ScoFreeWriteResources();
BthUsb_ScoGetTransferContextImpl();
BthUsb_ScoInitReadResources();
BthUsb_ScoInitWriteTransferUrb();
BthUsb_ScoIsPacketInFrames();
BthUsb_ScoPipeObjInit();
BthUsb_ScoProcessReadUrb();
BthUsb_ScoReadAlignFrame();
BthUsb_ScoReadData();
BthUsb_ScoReadNextFrame();
BthUsb_ScoReadStart();
BthUsb_ScoReadStop();
BthUsb_ScoReadStopWait();
BthUsb_ScoReadTransferCallback();
BthUsb_ScoReadUrbDone();
BthUsb_ScoReadUrbSend();
BthUsb_ScoReconstructReadPackets();
BthUsb_ScoReleaseUsbBusInterface();
BthUsb_ScoRemoveChannel();
BthUsb_ScoReuseTransferCtxImpl();
BthUsb_ScoSelectInterface();
BthUsb_ScoStartUsbTraffic();
BthUsb_ScoUpdateChannelsInfo();
BthUsb_ScoUpdateWriteResources();
BthUsb_ScoUrbComplete();
BthUsb_ScoUrbError();
BthUsb_ScoUrbStart();
BthUsb_ScoValidateAndAdjustBandwidth();
BthUsb_ScoValidateChannel();
BthUsb_ScoValidateChnInfo();
BthUsb_ScoWriteAlignFrame();
BthUsb_ScoWriteData();
BthUsb_ScoWriteNextFrame();
BthUsb_ScoWriteStopWait();
BthUsb_ScoWriteTransferCallback();
BthUsb_ScoWriteUrbDone();
BthUsb_ScoWriteUrbSend();
BthUsb_SelectConfigAndInitialize();
BthUsb_SelectIsoInterface();
BthUsb_SelectiveSuspendBipCancelRoutine();
BthUsb_SendTransferUrb();
BthUsb_SetPipeState();
BthUsb_SetRadioState();
BthUsb_StartUpPipes();
BthUsb_SyncCompletionRoutine();
BthUsb_Unload();
BthUsb_WriteAclData();
BthUsb_WriteHciCommand();
BthUsb_WriteHciCommandComplete();
BthUsb_WriteTransferComplete();
DbgHci_AddData();
DbgHci_Destroy();
DbgHci_Init();
DriverEntry();
FindCmdInfo();
GsDriverEntry();
LockedList_Drain();
LockedList_EnqueueTail();
LockedList_RemoveEntry();
RefObj_AddRefEx();
RefObj_ReleaseEx();
ResourceQueue_GetItem();
ResourceQueue_Initialize();
ResourceQueue_Start();
ResourceQueue_Stop();
ResourceQueue_StopAndWait();
RtlStringCchPrintfA();
USBCallSyncCompletionRoutine();
USBCallSyncEx();
USBCallSyncEx$fin$0();
USBDInternal_BuildAndSendQueryInterfaceSynchronously();
USBDInternal_BuildServicePath();
USBDInternal_QueryUsbVerifierSettings();
USBD_CloseHandle();
USBD_CreateHandle();
USBD_IsInterfaceVersionSupported();
USBD_SyncCompletionRoutine();
USBD_VerifierSettingsCallback();
USBInitializeInterruptTransfersEx();
USBInitializeInterruptTransfersEx$fin$0();
USBReleaseInterruptTransfers();
USBReleaseInterruptTransfers$fin$0();
USBResetPort();
USBStartInterruptTransfers();
USBStartInterruptTransfers$fin$0();
USBStopInterruptTransfers();
USBStopInterruptTransfers$fin$0();
UsbSendIoctlSynchronously();
UsbWrapCancelAllPingPongIrps();
UsbWrapDestroyPingPongs();
UsbWrapEmptyQueue();
UsbWrapEmptyQueue$fin$0();
UsbWrapEnqueueData();
UsbWrapErrorHandlerWorkRoutine();
UsbWrapFreeTransferBuffer();
UsbWrapInitializeInterruptReadData();
UsbWrapInitializePingPongIrps();
UsbWrapInterruptReadComplete();
UsbWrapIsDeviceConnected();
UsbWrapStartAllPingPongs();
UsbWrapSubmitInterruptRead();
UsbWrapWorkRoutine();
UsbWrapWorkRoutine$fin$0();
WPP_RECORDER_SF_();
WPP_RECORDER_SF_D();
WPP_RECORDER_SF_DD();
WPP_RECORDER_SF_DDd();
WPP_RECORDER_SF_Dd();
WPP_RECORDER_SF_Dq();
WPP_RECORDER_SF_cdd();
WPP_RECORDER_SF_cddd();
WPP_RECORDER_SF_d();
WPP_RECORDER_SF_dd();
WPP_RECORDER_SF_ddd();
WPP_RECORDER_SF_dsd();
WPP_RECORDER_SF_i();
WPP_RECORDER_SF_iDD();
WPP_RECORDER_SF_iDi();
WPP_RECORDER_SF_q();
WPP_RECORDER_SF_qD();
WPP_RECORDER_SF_qH();
WPP_RECORDER_SF_qd();
WPP_RECORDER_SF_qdD();
WPP_RECORDER_SF_qdd();
WPP_RECORDER_SF_qds();
WPP_RECORDER_SF_qdsD();
WPP_RECORDER_SF_qi();
WPP_RECORDER_SF_qii();
WPP_RECORDER_SF_qq();
WPP_RECORDER_SF_qqD();
WPP_RECORDER_SF_qqd();
WPP_RECORDER_SF_qqdd();
WPP_RECORDER_SF_qqds();
WPP_RECORDER_SF_qs();
WPP_RECORDER_SF_qsD();
WPP_RECORDER_SF_qsDd();
WPP_RECORDER_SF_qsd();
WPP_RECORDER_SF_s();
WPP_RECORDER_SF_sqDD();
WPP_RECORDER_SF_ss();
WPP_RECORDER_SF_sss();
WppClassicProviderCallback();
WppCleanupKm();
WppInitKm();
WppLoadTracingSupport();
WppTraceCallback();
_C_specific_handler();
_GSHandlerCheck();
_GSHandlerCheckCommon();
_report_gsfailure();
_security_check_cookie();
_security_init_cookie();
g_BthUsb_GetUsbCtrlString();
guard_check_icall_nop();
guard_dispatch_icall_nop();
memcpy();
memmove();
memset();
ntStatusStr();
usbStatusStr();
