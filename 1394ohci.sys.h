struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct POHANDLE__;
struct WDFCHILDLIST__;
struct WDFCMRESLIST__;
struct WDFCOLLECTION__;
struct WDFCOMMONBUFFER__;
struct WDFDEVICE_INIT;
struct WDFDEVICE__;
struct WDFDMAENABLER__;
struct WDFDMATRANSACTION__;
struct WDFDPC__;
struct WDFDRIVER__;
struct WDFFILEOBJECT__;
struct WDFINTERRUPT__;
struct WDFIORESLIST__;
struct WDFIORESREQLIST__;
struct WDFIOTARGET__;
struct WDFKEY__;
struct WDFLOOKASIDE__;
struct WDFMEMORY__;
struct WDFQUEUE__;
struct WDFREQUEST__;
struct WDFSPINLOCK__;
struct WDFSTRING__;
struct WDFTIMER__;
struct WDFWAITLOCK__;
struct WDFWMIINSTANCE__;
struct WDFWMIPROVIDER__;
struct WDFWORKITEM__;
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
struct _DEVPROPCOMPKEY;
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
struct _GROUP_AFFINITY;
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
struct _NAMED_PIPE_CREATE_PARAMETERS;
struct _NPAGED_LOOKASIDE_LIST;
struct _NT_TIB;
struct _OSVERSIONINFOW;
struct _OWNER_ENTRY;
struct _PAGED_LOOKASIDE_LIST;
struct _PNP_BUS_INFORMATION;
struct _POWER_SEQUENCE;
struct _PO_FX_COMPONENT_IDLE_STATE;
struct _PO_FX_COMPONENT_V1;
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
struct _VPB;
struct _WAIT_CONTEXT_BLOCK;
struct _WDFMEMORY_OFFSET;
struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER;
struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER;
struct _WDF_CHILD_LIST_CONFIG;
struct _WDF_CHILD_LIST_ITERATOR;
struct _WDF_CHILD_RETRIEVE_INFO;
struct _WDF_COMMON_BUFFER_CONFIG;
struct _WDF_DEVICE_PNP_CAPABILITIES;
struct _WDF_DEVICE_PNP_NOTIFICATION_DATA;
struct _WDF_DEVICE_POWER_CAPABILITIES;
struct _WDF_DEVICE_POWER_NOTIFICATION_DATA;
struct _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS;
struct _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA;
struct _WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS;
struct _WDF_DEVICE_PROPERTY_DATA;
struct _WDF_DEVICE_STATE;
struct _WDF_DMA_ENABLER_CONFIG;
struct _WDF_DMA_SYSTEM_PROFILE_CONFIG;
struct _WDF_DPC_CONFIG;
struct _WDF_DRIVER_CONFIG;
struct _WDF_DRIVER_GLOBALS;
struct _WDF_DRIVER_VERSION_AVAILABLE_PARAMS;
struct _WDF_FDO_EVENT_CALLBACKS;
struct _WDF_FILEOBJECT_CONFIG;
struct _WDF_INTERRUPT_CONFIG;
struct _WDF_INTERRUPT_EXTENDED_POLICY;
struct _WDF_INTERRUPT_INFO;
struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS;
struct _WDF_IO_QUEUE_CONFIG;
struct _WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY;
struct _WDF_IO_TARGET_OPEN_PARAMS;
struct _WDF_IO_TYPE_CONFIG;
struct _WDF_MEMORY_DESCRIPTOR;
struct _WDF_OBJECT_ATTRIBUTES;
struct _WDF_OBJECT_CONTEXT_TYPE_INFO;
struct _WDF_PDO_EVENT_CALLBACKS;
struct _WDF_PNPPOWER_EVENT_CALLBACKS;
struct _WDF_POWER_FRAMEWORK_SETTINGS;
struct _WDF_POWER_POLICY_EVENT_CALLBACKS;
struct _WDF_QUERY_INTERFACE_CONFIG;
struct _WDF_REMOVE_LOCK_OPTIONS;
struct _WDF_REQUEST_COMPLETION_PARAMS;
struct _WDF_REQUEST_FORWARD_OPTIONS;
struct _WDF_REQUEST_PARAMETERS;
struct _WDF_REQUEST_REUSE_PARAMS;
struct _WDF_REQUEST_SEND_OPTIONS;
struct _WDF_TIMER_CONFIG;
struct _WDF_USB_REQUEST_COMPLETION_PARAMS;
struct _WDF_WMI_INSTANCE_CONFIG;
struct _WDF_WMI_PROVIDER_CONFIG;
struct _WDF_WORKITEM_CONFIG;
struct _WHEA_ERROR_PACKET_V2;
struct _WHEA_ERROR_RECORD;
struct _WHEA_ERROR_RECORD_HEADER;
struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR;
struct _WHEA_EVENT_LOG_ENTRY;
struct _WHEA_EVENT_LOG_ENTRY_HEADER;
struct _WORK_QUEUE_ITEM;
struct _WPP_TRACE_CONTROL_BLOCK;
struct _XSAVE_FORMAT;
struct __vc_attributes::aggregatableAttribute;
struct __vc_attributes::event_receiverAttribute;
struct __vc_attributes::event_sourceAttribute;
struct __vc_attributes::helper_attributes::usageAttribute;
struct __vc_attributes::helper_attributes::v1_alttypeAttribute;
struct __vc_attributes::moduleAttribute;
struct __vc_attributes::threadingAttribute;

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
enum DEVICE_REGISTRY_PROPERTY;
enum DEVICE_TEXT_TYPE;
enum DMA_COMPLETION_STATUS;
enum POWER_ACTION;
enum _DEVICE_POWER_STATE;
enum _DEVICE_RELATION_TYPE;
enum _DEVICE_USAGE_NOTIFICATION_TYPE;
enum _DEVICE_WAKE_DEPTH;
enum _DEVPROPSTORE;
enum _DIRECTORY_NOTIFY_INFORMATION_CLASS;
enum _DMA_WIDTH;
enum _DRIVER_RUNTIME_INIT_FLAGS;
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
enum _SECURITY_IMPERSONATION_LEVEL;
enum _SYSTEM_POWER_STATE;
enum _USER_ACTIVITY_PRESENCE;
enum _WDFFUNCENUM;
enum _WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS;
enum _WDF_DEVICE_FAILED_ACTION;
enum _WDF_DEVICE_IO_TYPE;
enum _WDF_DEVICE_PNP_STATE;
enum _WDF_DEVICE_POWER_POLICY_STATE;
enum _WDF_DEVICE_POWER_STATE;
enum _WDF_DEVICE_STATE_FLAGS;
enum _WDF_DMA_DIRECTION;
enum _WDF_DMA_PROFILE;
enum _WDF_EXECUTION_LEVEL;
enum _WDF_FILEOBJECT_CLASS;
enum _WDF_INTERRUPT_POLARITY;
enum _WDF_INTERRUPT_POLICY;
enum _WDF_INTERRUPT_PRIORITY;
enum _WDF_IO_FORWARD_PROGRESS_ACTION;
enum _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY;
enum _WDF_IO_QUEUE_DISPATCH_TYPE;
enum _WDF_IO_QUEUE_STATE;
enum _WDF_IO_TARGET_OPEN_TYPE;
enum _WDF_IO_TARGET_PURGE_IO_ACTION;
enum _WDF_IO_TARGET_SENT_IO_ACTION;
enum _WDF_IO_TARGET_STATE;
enum _WDF_MEMORY_DESCRIPTOR_TYPE;
enum _WDF_POWER_DEVICE_STATE;
enum _WDF_POWER_POLICY_IDLE_TIMEOUT_CONSTANTS;
enum _WDF_POWER_POLICY_IDLE_TIMEOUT_TYPE;
enum _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES;
enum _WDF_POWER_POLICY_S0_IDLE_USER_CONTROL;
enum _WDF_POWER_POLICY_SX_WAKE_USER_CONTROL;
enum _WDF_RELEASE_HARDWARE_ORDER_ON_FAILURE;
enum _WDF_REQUEST_FORWARD_OPTIONS_FLAGS;
enum _WDF_REQUEST_REUSE_FLAGS;
enum _WDF_REQUEST_SEND_OPTIONS_FLAGS;
enum _WDF_REQUEST_TYPE;
enum _WDF_RETRIEVE_CHILD_FLAGS;
enum _WDF_SPECIAL_FILE_TYPE;
enum _WDF_STATE_NOTIFICATION_TYPE;
enum _WDF_SYNCHRONIZATION_SCOPE;
enum _WDF_TRI_STATE;
enum _WDF_WMI_PROVIDER_CONTROL;
enum _WDF_WMI_PROVIDER_FLAGS;
enum _WHEA_ERROR_PACKET_DATA_FORMAT;
enum _WHEA_ERROR_SEVERITY;
enum _WHEA_ERROR_SOURCE_TYPE;
enum _WHEA_ERROR_TYPE;
enum _WHEA_EVENT_LOG_ENTRY_ID;
enum _WHEA_EVENT_LOG_ENTRY_TYPE;
enum __vc_attributes::aggregatableAttribute::type_e;
enum __vc_attributes::event_receiverAttribute::type_e;
enum __vc_attributes::event_sourceAttribute::optimize_e;
enum __vc_attributes::event_sourceAttribute::type_e;
enum __vc_attributes::helper_attributes::usageAttribute::usage_e;
enum __vc_attributes::helper_attributes::v1_alttypeAttribute::type_e;
enum __vc_attributes::moduleAttribute::type_e;
enum __vc_attributes::threadingAttribute::threading_e;
enum optimize_e;
enum threading_e;
enum type_e;
enum usage_e;

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

typedef struct WDFCHILDLIST__ {
    LONG unused;
};

typedef struct WDFCMRESLIST__ {
    LONG unused;
};

typedef struct WDFCOLLECTION__ {
    LONG unused;
};

typedef struct WDFCOMMONBUFFER__ {
    LONG unused;
};

typedef struct WDFDEVICE_INIT {
};

typedef struct WDFDEVICE__ {
    LONG unused;
};

typedef struct WDFDMAENABLER__ {
    LONG unused;
};

typedef struct WDFDMATRANSACTION__ {
    LONG unused;
};

typedef struct WDFDPC__ {
    LONG unused;
};

typedef struct WDFDRIVER__ {
    LONG unused;
};

typedef struct WDFFILEOBJECT__ {
    LONG unused;
};

typedef struct WDFINTERRUPT__ {
    LONG unused;
};

typedef struct WDFIORESLIST__ {
    LONG unused;
};

typedef struct WDFIORESREQLIST__ {
    LONG unused;
};

typedef struct WDFIOTARGET__ {
    LONG unused;
};

typedef struct WDFKEY__ {
    LONG unused;
};

typedef struct WDFLOOKASIDE__ {
    LONG unused;
};

typedef struct WDFMEMORY__ {
    LONG unused;
};

typedef struct WDFQUEUE__ {
    LONG unused;
};

typedef struct WDFREQUEST__ {
    LONG unused;
};

typedef struct WDFSPINLOCK__ {
    LONG unused;
};

typedef struct WDFSTRING__ {
    LONG unused;
};

typedef struct WDFTIMER__ {
    LONG unused;
};

typedef struct WDFWAITLOCK__ {
    LONG unused;
};

typedef struct WDFWMIINSTANCE__ {
    LONG unused;
};

typedef struct WDFWMIPROVIDER__ {
    LONG unused;
};

typedef struct WDFWORKITEM__ {
    LONG unused;
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
     <unnamed-type-Privileges>;
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
     <unnamed-type-u>;
    union {
         <unnamed-type-Generic>;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length;
        } Generic;
         <unnamed-type-Port>;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length;
        } Port;
         <unnamed-type-Interrupt>;
        struct {
            ULONG Level;
            ULONG Vector;
            ULONG64 Affinity;
        } Interrupt;
         <unnamed-type-MessageInterrupt>;
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
         <unnamed-type-Memory>;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length;
        } Memory;
         <unnamed-type-Dma>;
        struct {
            ULONG Channel;
            ULONG Port;
            ULONG Reserved1;
        } Dma;
         <unnamed-type-DmaV3>;
        struct {
            ULONG Channel;
            ULONG RequestLine;
            UCHAR TransferWidth;
            UCHAR Reserved1;
            UCHAR Reserved2;
            UCHAR Reserved3;
        } DmaV3;
         <unnamed-type-DevicePrivate>;
        struct {
            ULONG Data[3];
        } DevicePrivate;
         <unnamed-type-BusNumber>;
        struct {
            ULONG Start;
            ULONG Length;
            ULONG Reserved;
        } BusNumber;
         <unnamed-type-DeviceSpecificData>;
        struct {
            ULONG DataSize;
            ULONG Reserved1;
            ULONG Reserved2;
        } DeviceSpecificData;
         <unnamed-type-Memory40>;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length40;
        } Memory40;
         <unnamed-type-Memory48>;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length48;
        } Memory48;
         <unnamed-type-Memory64>;
        struct {
            union _LARGE_INTEGER Start;
            ULONG Length64;
        } Memory64;
         <unnamed-type-Connection>;
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
     <unnamed-type-Queue>;
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
    VOID _DEVICE_OBJECT;
    VOID _DEVICE_OBJECT;
    struct _DEVICE_OBJECT *operator=;
    struct _DEVICE_OBJECT *operator=;
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

typedef struct _DEVPROPCOMPKEY {
    struct _DEVPROPKEY Key;
    enum _DEVPROPSTORE Store;
    PWCHAR LocaleName;
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
    VOID _DISPATCHER_HEADER;
    VOID _DISPATCHER_HEADER;
    struct _DISPATCHER_HEADER *operator=;
    struct _DISPATCHER_HEADER *operator=;
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
    VOID _FAST_MUTEX;
    VOID _FAST_MUTEX;
    struct _FAST_MUTEX *operator=;
    struct _FAST_MUTEX *operator=;
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
    VOID _FILE_OBJECT;
    VOID _FILE_OBJECT;
    struct _FILE_OBJECT *operator=;
    struct _FILE_OBJECT *operator=;
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

typedef struct _GROUP_AFFINITY {
    ULONG64 Mask;
    USHORT Group;
    USHORT Reserved[3];
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
     <unnamed-type-u>;
    union {
         <unnamed-type-Port>;
        struct {
            ULONG Length;
            ULONG Alignment;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Port;
         <unnamed-type-Memory>;
        struct {
            ULONG Length;
            ULONG Alignment;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Memory;
         <unnamed-type-Interrupt>;
        struct {
            ULONG MinimumVector;
            ULONG MaximumVector;
            enum _IRQ_DEVICE_POLICY AffinityPolicy;
            enum _IRQ_PRIORITY PriorityPolicy;
            ULONG64 TargetedProcessors;
        } Interrupt;
         <unnamed-type-Dma>;
        struct {
            ULONG MinimumChannel;
            ULONG MaximumChannel;
        } Dma;
         <unnamed-type-DmaV3>;
        struct {
            ULONG RequestLine;
            ULONG Reserved;
            ULONG Channel;
            ULONG TransferWidth;
        } DmaV3;
         <unnamed-type-Generic>;
        struct {
            ULONG Length;
            ULONG Alignment;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Generic;
         <unnamed-type-DevicePrivate>;
        struct {
            ULONG Data[3];
        } DevicePrivate;
         <unnamed-type-BusNumber>;
        struct {
            ULONG Length;
            ULONG MinBusNumber;
            ULONG MaxBusNumber;
            ULONG Reserved;
        } BusNumber;
         <unnamed-type-ConfigData>;
        struct {
            ULONG Priority;
            ULONG Reserved1;
            ULONG Reserved2;
        } ConfigData;
         <unnamed-type-Memory40>;
        struct {
            ULONG Length40;
            ULONG Alignment40;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Memory40;
         <unnamed-type-Memory48>;
        struct {
            ULONG Length48;
            ULONG Alignment48;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Memory48;
         <unnamed-type-Memory64>;
        struct {
            ULONG Length64;
            ULONG Alignment64;
            union _LARGE_INTEGER MinimumAddress;
            union _LARGE_INTEGER MaximumAddress;
        } Memory64;
         <unnamed-type-Connection>;
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
     <unnamed-type-Parameters>;
    union {
         <unnamed-type-Create>;
        struct {
            struct _IO_SECURITY_CONTEXT *SecurityContext;
            ULONG Options;
            USHORT FileAttributes;
            USHORT ShareAccess;
            ULONG EaLength;
        } Create;
         <unnamed-type-CreatePipe>;
        struct {
            struct _IO_SECURITY_CONTEXT *SecurityContext;
            ULONG Options;
            USHORT Reserved;
            USHORT ShareAccess;
            struct _NAMED_PIPE_CREATE_PARAMETERS *Parameters;
        } CreatePipe;
         <unnamed-type-CreateMailslot>;
        struct {
            struct _IO_SECURITY_CONTEXT *SecurityContext;
            ULONG Options;
            USHORT Reserved;
            USHORT ShareAccess;
            struct _MAILSLOT_CREATE_PARAMETERS *Parameters;
        } CreateMailslot;
         <unnamed-type-Read>;
        struct {
            ULONG Length;
            ULONG Key;
            ULONG Flags;
            union _LARGE_INTEGER ByteOffset;
        } Read;
         <unnamed-type-Write>;
        struct {
            ULONG Length;
            ULONG Key;
            ULONG Flags;
            union _LARGE_INTEGER ByteOffset;
        } Write;
         <unnamed-type-QueryDirectory>;
        struct {
            ULONG Length;
            struct _UNICODE_STRING *FileName;
            enum _FILE_INFORMATION_CLASS FileInformationClass;
            ULONG FileIndex;
        } QueryDirectory;
         <unnamed-type-NotifyDirectory>;
        struct {
            ULONG Length;
            ULONG CompletionFilter;
        } NotifyDirectory;
         <unnamed-type-NotifyDirectoryEx>;
        struct {
            ULONG Length;
            ULONG CompletionFilter;
            enum _DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass;
        } NotifyDirectoryEx;
         <unnamed-type-QueryFile>;
        struct {
            ULONG Length;
            enum _FILE_INFORMATION_CLASS FileInformationClass;
        } QueryFile;
         <unnamed-type-SetFile>;
        struct {
            ULONG Length;
            enum _FILE_INFORMATION_CLASS FileInformationClass;
            struct _FILE_OBJECT *FileObject;
            UCHAR ReplaceIfExists;
            UCHAR AdvanceOnly;
            ULONG ClusterCount;
            PVOID DeleteHandle;
        } SetFile;
         <unnamed-type-QueryEa>;
        struct {
            ULONG Length;
            PVOID EaList;
            ULONG EaListLength;
            ULONG EaIndex;
        } QueryEa;
         <unnamed-type-SetEa>;
        struct {
            ULONG Length;
        } SetEa;
         <unnamed-type-QueryVolume>;
        struct {
            ULONG Length;
            enum _FSINFOCLASS FsInformationClass;
        } QueryVolume;
         <unnamed-type-SetVolume>;
        struct {
            ULONG Length;
            enum _FSINFOCLASS FsInformationClass;
        } SetVolume;
         <unnamed-type-FileSystemControl>;
        struct {
            ULONG OutputBufferLength;
            ULONG InputBufferLength;
            ULONG FsControlCode;
            PVOID Type3InputBuffer;
        } FileSystemControl;
         <unnamed-type-LockControl>;
        struct {
            union _LARGE_INTEGER *Length;
            ULONG Key;
            union _LARGE_INTEGER ByteOffset;
        } LockControl;
         <unnamed-type-DeviceIoControl>;
        struct {
            ULONG OutputBufferLength;
            ULONG InputBufferLength;
            ULONG IoControlCode;
            PVOID Type3InputBuffer;
        } DeviceIoControl;
         <unnamed-type-QuerySecurity>;
        struct {
            ULONG SecurityInformation;
            ULONG Length;
        } QuerySecurity;
         <unnamed-type-SetSecurity>;
        struct {
            ULONG SecurityInformation;
            PVOID SecurityDescriptor;
        } SetSecurity;
         <unnamed-type-MountVolume>;
        struct {
            struct _VPB *Vpb;
            struct _DEVICE_OBJECT *DeviceObject;
        } MountVolume;
         <unnamed-type-VerifyVolume>;
        struct {
            struct _VPB *Vpb;
            struct _DEVICE_OBJECT *DeviceObject;
        } VerifyVolume;
         <unnamed-type-Scsi>;
        struct {
            struct _SCSI_REQUEST_BLOCK *Srb;
        } Scsi;
         <unnamed-type-QueryQuota>;
        struct {
            ULONG Length;
            PVOID StartSid;
            struct _FILE_GET_QUOTA_INFORMATION *SidList;
            ULONG SidListLength;
        } QueryQuota;
         <unnamed-type-SetQuota>;
        struct {
            ULONG Length;
        } SetQuota;
         <unnamed-type-QueryDeviceRelations>;
        struct {
            enum _DEVICE_RELATION_TYPE Type;
        } QueryDeviceRelations;
         <unnamed-type-QueryInterface>;
        struct {
            struct _GUID *InterfaceType;
            USHORT Size;
            USHORT Version;
            struct _INTERFACE *Interface;
            PVOID InterfaceSpecificData;
        } QueryInterface;
         <unnamed-type-DeviceCapabilities>;
        struct {
            struct _DEVICE_CAPABILITIES *Capabilities;
        } DeviceCapabilities;
         <unnamed-type-FilterResourceRequirements>;
        struct {
            struct _IO_RESOURCE_REQUIREMENTS_LIST *IoResourceRequirementList;
        } FilterResourceRequirements;
         <unnamed-type-ReadWriteConfig>;
        struct {
            ULONG WhichSpace;
            PVOID Buffer;
            ULONG Offset;
            ULONG Length;
        } ReadWriteConfig;
         <unnamed-type-SetLock>;
        struct {
            UCHAR Lock;
        } SetLock;
         <unnamed-type-QueryId>;
        struct {
            enum BUS_QUERY_ID_TYPE IdType;
        } QueryId;
         <unnamed-type-QueryDeviceText>;
        struct {
            enum DEVICE_TEXT_TYPE DeviceTextType;
            ULONG LocaleId;
        } QueryDeviceText;
         <unnamed-type-UsageNotification>;
        struct {
            UCHAR InPath;
            UCHAR Reserved[3];
            enum _DEVICE_USAGE_NOTIFICATION_TYPE Type;
        } UsageNotification;
         <unnamed-type-WaitWake>;
        struct {
            enum _SYSTEM_POWER_STATE PowerState;
        } WaitWake;
         <unnamed-type-PowerSequence>;
        struct {
            struct _POWER_SEQUENCE *PowerSequence;
        } PowerSequence;
         <unnamed-type-Power>;
        struct {
            ULONG SystemContext;
            struct _SYSTEM_POWER_STATE_CONTEXT SystemPowerStateContext;
            enum _POWER_STATE_TYPE Type;
            union _POWER_STATE State;
            enum POWER_ACTION ShutdownType;
        } Power;
         <unnamed-type-StartDevice>;
        struct {
            struct _CM_RESOURCE_LIST *AllocatedResources;
            struct _CM_RESOURCE_LIST *AllocatedResourcesTranslated;
        } StartDevice;
         <unnamed-type-WMI>;
        struct {
            ULONG64 ProviderId;
            PVOID DataPath;
            ULONG BufferSize;
            PVOID Buffer;
        } WMI;
         <unnamed-type-Others>;
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
     <unnamed-type-AssociatedIrp>;
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
     <unnamed-type-Overlay>;
    union {
         <unnamed-type-AsynchronousParameters>;
        struct {
            PVOID UserApcRoutine;
            PVOID IssuingProcess;
            PVOID UserApcContext;
        } AsynchronousParameters;
        union _LARGE_INTEGER AllocationSize;
    } Overlay;
    PVOID CancelRoutine;
    PVOID UserBuffer;
     <unnamed-type-Tail>;
    union {
         <unnamed-type-Overlay>;
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
    VOID _KDPC;
    VOID _KDPC;
    struct _KDPC *operator=;
    struct _KDPC *operator=;
};

typedef struct _KEVENT {
    struct _DISPATCHER_HEADER Header;
    VOID _KEVENT;
    VOID _KEVENT;
    struct _KEVENT *operator=;
    struct _KEVENT *operator=;
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
    VOID _KSPIN_LOCK_QUEUE;
    VOID _KSPIN_LOCK_QUEUE;
    struct _KSPIN_LOCK_QUEUE *operator=;
    struct _KSPIN_LOCK_QUEUE *operator=;
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

typedef struct _PNP_BUS_INFORMATION {
    struct _GUID BusTypeGuid;
    enum _INTERFACE_TYPE LegacyBusType;
    ULONG BusNumber;
};

typedef struct _POWER_SEQUENCE {
    ULONG SequenceD1;
    ULONG SequenceD2;
    ULONG SequenceD3;
};

typedef struct _PO_FX_COMPONENT_IDLE_STATE {
    ULONG64 TransitionLatency;
    ULONG64 ResidencyRequirement;
    ULONG NominalPower;
};

typedef struct _PO_FX_COMPONENT_V1 {
    struct _GUID Id;
    ULONG IdleStateCount;
    ULONG DeepestWakeableIdleState;
    struct _PO_FX_COMPONENT_IDLE_STATE *IdleStates;
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

typedef struct _WDFMEMORY_OFFSET {
    ULONG64 BufferOffset;
    ULONG64 BufferLength;
};

typedef struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER {
    ULONG AddressDescriptionSize;
};

typedef struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER {
    ULONG IdentificationDescriptionSize;
};

typedef struct _WDF_CHILD_LIST_CONFIG {
    ULONG Size;
    ULONG IdentificationDescriptionSize;
    ULONG AddressDescriptionSize;
    PLONG EvtChildListCreateDevice;
    PVOID EvtChildListScanForChildren;
    PVOID EvtChildListIdentificationDescriptionCopy;
    PLONG EvtChildListIdentificationDescriptionDuplicate;
    PVOID EvtChildListIdentificationDescriptionCleanup;
    PUCHAR EvtChildListIdentificationDescriptionCompare;
    PVOID EvtChildListAddressDescriptionCopy;
    PLONG EvtChildListAddressDescriptionDuplicate;
    PVOID EvtChildListAddressDescriptionCleanup;
    PUCHAR EvtChildListDeviceReenumerated;
};

typedef struct _WDF_CHILD_LIST_ITERATOR {
    ULONG Size;
    ULONG Flags;
    PVOID Reserved[4];
};

typedef struct _WDF_CHILD_RETRIEVE_INFO {
    ULONG Size;
    struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription;
    struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription;
    enum _WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS Status;
    PUCHAR EvtChildListIdentificationDescriptionCompare;
};

typedef struct _WDF_COMMON_BUFFER_CONFIG {
    ULONG Size;
    ULONG AlignmentRequirement;
};

typedef struct _WDF_DEVICE_PNP_CAPABILITIES {
    ULONG Size;
    enum _WDF_TRI_STATE LockSupported;
    enum _WDF_TRI_STATE EjectSupported;
    enum _WDF_TRI_STATE Removable;
    enum _WDF_TRI_STATE DockDevice;
    enum _WDF_TRI_STATE UniqueID;
    enum _WDF_TRI_STATE SilentInstall;
    enum _WDF_TRI_STATE SurpriseRemovalOK;
    enum _WDF_TRI_STATE HardwareDisabled;
    enum _WDF_TRI_STATE NoDisplayInUI;
    ULONG Address;
    ULONG UINumber;
};

typedef struct _WDF_DEVICE_PNP_NOTIFICATION_DATA {
    enum _WDF_STATE_NOTIFICATION_TYPE Type;
     <unnamed-type-Data>;
    union {
         <unnamed-type-EnterState>;
        struct {
            enum _WDF_DEVICE_PNP_STATE CurrentState;
            enum _WDF_DEVICE_PNP_STATE NewState;
        } EnterState;
         <unnamed-type-PostProcessState>;
        struct {
            enum _WDF_DEVICE_PNP_STATE CurrentState;
        } PostProcessState;
         <unnamed-type-LeaveState>;
        struct {
            enum _WDF_DEVICE_PNP_STATE CurrentState;
            enum _WDF_DEVICE_PNP_STATE NewState;
        } LeaveState;
    } Data;
};

typedef struct _WDF_DEVICE_POWER_CAPABILITIES {
    ULONG Size;
    enum _WDF_TRI_STATE DeviceD1;
    enum _WDF_TRI_STATE DeviceD2;
    enum _WDF_TRI_STATE WakeFromD0;
    enum _WDF_TRI_STATE WakeFromD1;
    enum _WDF_TRI_STATE WakeFromD2;
    enum _WDF_TRI_STATE WakeFromD3;
    enum _DEVICE_POWER_STATE DeviceState[7];
    enum _DEVICE_POWER_STATE DeviceWake;
    enum _SYSTEM_POWER_STATE SystemWake;
    ULONG D1Latency;
    ULONG D2Latency;
    ULONG D3Latency;
    enum _DEVICE_POWER_STATE IdealDxStateForSx;
};

typedef struct _WDF_DEVICE_POWER_NOTIFICATION_DATA {
    enum _WDF_STATE_NOTIFICATION_TYPE Type;
     <unnamed-type-Data>;
    union {
         <unnamed-type-EnterState>;
        struct {
            enum _WDF_DEVICE_POWER_STATE CurrentState;
            enum _WDF_DEVICE_POWER_STATE NewState;
        } EnterState;
         <unnamed-type-PostProcessState>;
        struct {
            enum _WDF_DEVICE_POWER_STATE CurrentState;
        } PostProcessState;
         <unnamed-type-LeaveState>;
        struct {
            enum _WDF_DEVICE_POWER_STATE CurrentState;
            enum _WDF_DEVICE_POWER_STATE NewState;
        } LeaveState;
    } Data;
};

typedef struct _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS {
    ULONG Size;
    enum _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps;
    enum _DEVICE_POWER_STATE DxState;
    ULONG IdleTimeout;
    enum _WDF_POWER_POLICY_S0_IDLE_USER_CONTROL UserControlOfIdleSettings;
    enum _WDF_TRI_STATE Enabled;
    enum _WDF_TRI_STATE PowerUpIdleDeviceOnSystemWake;
    enum _WDF_POWER_POLICY_IDLE_TIMEOUT_TYPE IdleTimeoutType;
    enum _WDF_TRI_STATE ExcludeD3Cold;
};

typedef struct _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA {
    enum _WDF_STATE_NOTIFICATION_TYPE Type;
     <unnamed-type-Data>;
    union {
         <unnamed-type-EnterState>;
        struct {
            enum _WDF_DEVICE_POWER_POLICY_STATE CurrentState;
            enum _WDF_DEVICE_POWER_POLICY_STATE NewState;
        } EnterState;
         <unnamed-type-PostProcessState>;
        struct {
            enum _WDF_DEVICE_POWER_POLICY_STATE CurrentState;
        } PostProcessState;
         <unnamed-type-LeaveState>;
        struct {
            enum _WDF_DEVICE_POWER_POLICY_STATE CurrentState;
            enum _WDF_DEVICE_POWER_POLICY_STATE NewState;
        } LeaveState;
    } Data;
};

typedef struct _WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS {
    ULONG Size;
    enum _DEVICE_POWER_STATE DxState;
    enum _WDF_POWER_POLICY_SX_WAKE_USER_CONTROL UserControlOfWakeSettings;
    enum _WDF_TRI_STATE Enabled;
    UCHAR ArmForWakeIfChildrenAreArmedForWake;
    UCHAR IndicateChildWakeOnParentWake;
};

typedef struct _WDF_DEVICE_PROPERTY_DATA {
    ULONG Size;
    struct _DEVPROPKEY *PropertyKey;
    ULONG Lcid;
    ULONG Flags;
};

typedef struct _WDF_DEVICE_STATE {
    ULONG Size;
    enum _WDF_TRI_STATE Disabled;
    enum _WDF_TRI_STATE DontDisplayInUI;
    enum _WDF_TRI_STATE Failed;
    enum _WDF_TRI_STATE NotDisableable;
    enum _WDF_TRI_STATE Removed;
    enum _WDF_TRI_STATE ResourcesChanged;
};

typedef struct _WDF_DMA_ENABLER_CONFIG {
    ULONG Size;
    enum _WDF_DMA_PROFILE Profile;
    ULONG64 MaximumLength;
    PLONG EvtDmaEnablerFill;
    PLONG EvtDmaEnablerFlush;
    PLONG EvtDmaEnablerDisable;
    PLONG EvtDmaEnablerEnable;
    PLONG EvtDmaEnablerSelfManagedIoStart;
    PLONG EvtDmaEnablerSelfManagedIoStop;
    ULONG AddressWidthOverride;
    ULONG WdmDmaVersionOverride;
    ULONG Flags;
};

typedef struct _WDF_DMA_SYSTEM_PROFILE_CONFIG {
    ULONG Size;
    UCHAR DemandMode;
    UCHAR LoopedTransfer;
    enum _DMA_WIDTH DmaWidth;
    union _LARGE_INTEGER DeviceAddress;
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *DmaDescriptor;
};

typedef struct _WDF_DPC_CONFIG {
    ULONG Size;
    PVOID EvtDpcFunc;
    UCHAR AutomaticSerialization;
};

typedef struct _WDF_DRIVER_CONFIG {
    ULONG Size;
    PLONG EvtDriverDeviceAdd;
    PVOID EvtDriverUnload;
    ULONG DriverInitFlags;
    ULONG DriverPoolTag;
};

typedef struct _WDF_DRIVER_GLOBALS {
    struct WDFDRIVER__ *Driver;
    ULONG DriverFlags;
    ULONG DriverTag;
    CHAR DriverName[32];
    UCHAR DisplaceDriverUnload;
};

typedef struct _WDF_DRIVER_VERSION_AVAILABLE_PARAMS {
    ULONG Size;
    ULONG MajorVersion;
    ULONG MinorVersion;
};

typedef struct _WDF_FDO_EVENT_CALLBACKS {
    ULONG Size;
    PLONG EvtDeviceFilterAddResourceRequirements;
    PLONG EvtDeviceFilterRemoveResourceRequirements;
    PLONG EvtDeviceRemoveAddedResources;
};

typedef struct _WDF_FILEOBJECT_CONFIG {
    ULONG Size;
    PVOID EvtDeviceFileCreate;
    PVOID EvtFileClose;
    PVOID EvtFileCleanup;
    enum _WDF_TRI_STATE AutoForwardCleanupClose;
    enum _WDF_FILEOBJECT_CLASS FileObjectClass;
};

typedef struct _WDF_INTERRUPT_CONFIG {
    ULONG Size;
    struct WDFSPINLOCK__ *SpinLock;
    enum _WDF_TRI_STATE ShareVector;
    UCHAR FloatingSave;
    UCHAR AutomaticSerialization;
    PUCHAR EvtInterruptIsr;
    PVOID EvtInterruptDpc;
    PLONG EvtInterruptEnable;
    PLONG EvtInterruptDisable;
    PVOID EvtInterruptWorkItem;
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *InterruptRaw;
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *InterruptTranslated;
    struct WDFWAITLOCK__ *WaitLock;
    UCHAR PassiveHandling;
    enum _WDF_TRI_STATE ReportInactiveOnPowerDown;
    UCHAR CanWakeDevice;
};

typedef struct _WDF_INTERRUPT_EXTENDED_POLICY {
    ULONG Size;
    enum _WDF_INTERRUPT_POLICY Policy;
    enum _WDF_INTERRUPT_PRIORITY Priority;
    struct _GROUP_AFFINITY TargetProcessorSetAndGroup;
};

typedef struct _WDF_INTERRUPT_INFO {
    ULONG Size;
    ULONG64 Reserved1;
    ULONG64 TargetProcessorSet;
    ULONG Reserved2;
    ULONG MessageNumber;
    ULONG Vector;
    UCHAR Irql;
    enum _KINTERRUPT_MODE Mode;
    enum _WDF_INTERRUPT_POLARITY Polarity;
    UCHAR MessageSignaled;
    UCHAR ShareDisposition;
    USHORT Group;
};

typedef struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS {
     <unnamed-type-Policy>;
    union {
         <unnamed-type-ExaminePolicy>;
        struct {
            enum _WDF_IO_FORWARD_PROGRESS_ACTION *EvtIoWdmIrpForForwardProgress;
        } ExaminePolicy;
    } Policy;
};

typedef struct _WDF_IO_QUEUE_CONFIG {
    ULONG Size;
    enum _WDF_IO_QUEUE_DISPATCH_TYPE DispatchType;
    enum _WDF_TRI_STATE PowerManaged;
    UCHAR AllowZeroLengthRequests;
    UCHAR DefaultQueue;
    PVOID EvtIoDefault;
    PVOID EvtIoRead;
    PVOID EvtIoWrite;
    PVOID EvtIoDeviceControl;
    PVOID EvtIoInternalDeviceControl;
    PVOID EvtIoStop;
    PVOID EvtIoResume;
    PVOID EvtIoCanceledOnQueue;
     <unnamed-type-Settings>;
    union {
         <unnamed-type-Parallel>;
        struct {
            ULONG NumberOfPresentedRequests;
        } Parallel;
    } Settings;
    struct WDFDRIVER__ *Driver;
};

typedef struct _WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY {
    ULONG Size;
    ULONG TotalForwardProgressRequests;
    enum _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY ForwardProgressReservedPolicy;
    struct _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS ForwardProgressReservePolicySettings;
    PLONG EvtIoAllocateResourcesForReservedRequest;
    PLONG EvtIoAllocateRequestResources;
};

typedef struct _WDF_IO_TARGET_OPEN_PARAMS {
    ULONG Size;
    enum _WDF_IO_TARGET_OPEN_TYPE Type;
    PLONG EvtIoTargetQueryRemove;
    PVOID EvtIoTargetRemoveCanceled;
    PVOID EvtIoTargetRemoveComplete;
    struct _DEVICE_OBJECT *TargetDeviceObject;
    struct _FILE_OBJECT *TargetFileObject;
    struct _UNICODE_STRING TargetDeviceName;
    ULONG DesiredAccess;
    ULONG ShareAccess;
    ULONG FileAttributes;
    ULONG CreateDisposition;
    ULONG CreateOptions;
    PVOID EaBuffer;
    ULONG EaBufferLength;
    PLONG64 AllocationSize;
    ULONG FileInformation;
    struct _UNICODE_STRING FileName;
};

typedef struct _WDF_IO_TYPE_CONFIG {
    ULONG Size;
    enum _WDF_DEVICE_IO_TYPE ReadWriteIoType;
    enum _WDF_DEVICE_IO_TYPE DeviceControlIoType;
    ULONG DirectTransferThreshold;
};

typedef struct _WDF_MEMORY_DESCRIPTOR {
    enum _WDF_MEMORY_DESCRIPTOR_TYPE Type;
     <unnamed-type-u>;
    union {
         <unnamed-type-BufferType>;
        struct {
            PVOID Buffer;
            ULONG Length;
        } BufferType;
         <unnamed-type-MdlType>;
        struct {
            struct _MDL *Mdl;
            ULONG BufferLength;
        } MdlType;
         <unnamed-type-HandleType>;
        struct {
            struct WDFMEMORY__ *Memory;
            struct _WDFMEMORY_OFFSET *Offsets;
        } HandleType;
    } u;
};

typedef struct _WDF_OBJECT_ATTRIBUTES {
    ULONG Size;
    PVOID EvtCleanupCallback;
    PVOID EvtDestroyCallback;
    enum _WDF_EXECUTION_LEVEL ExecutionLevel;
    enum _WDF_SYNCHRONIZATION_SCOPE SynchronizationScope;
    PVOID ParentObject;
    ULONG64 ContextSizeOverride;
    struct _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo;
};

typedef struct _WDF_OBJECT_CONTEXT_TYPE_INFO {
    ULONG Size;
    PCHAR ContextName;
    ULONG64 ContextSize;
    struct _WDF_OBJECT_CONTEXT_TYPE_INFO *UniqueType;
    struct _WDF_OBJECT_CONTEXT_TYPE_INFO **EvtDriverGetUniqueContextType;
};

typedef struct _WDF_PDO_EVENT_CALLBACKS {
    ULONG Size;
    PLONG EvtDeviceResourcesQuery;
    PLONG EvtDeviceResourceRequirementsQuery;
    PLONG EvtDeviceEject;
    PLONG EvtDeviceSetLock;
    PLONG EvtDeviceEnableWakeAtBus;
    PVOID EvtDeviceDisableWakeAtBus;
    PVOID EvtDeviceReportedMissing;
};

typedef struct _WDF_PNPPOWER_EVENT_CALLBACKS {
    ULONG Size;
    PLONG EvtDeviceD0Entry;
    PLONG EvtDeviceD0EntryPostInterruptsEnabled;
    PLONG EvtDeviceD0Exit;
    PLONG EvtDeviceD0ExitPreInterruptsDisabled;
    PLONG EvtDevicePrepareHardware;
    PLONG EvtDeviceReleaseHardware;
    PVOID EvtDeviceSelfManagedIoCleanup;
    PVOID EvtDeviceSelfManagedIoFlush;
    PLONG EvtDeviceSelfManagedIoInit;
    PLONG EvtDeviceSelfManagedIoSuspend;
    PLONG EvtDeviceSelfManagedIoRestart;
    PVOID EvtDeviceSurpriseRemoval;
    PLONG EvtDeviceQueryRemove;
    PLONG EvtDeviceQueryStop;
    PVOID EvtDeviceUsageNotification;
    PVOID EvtDeviceRelationsQuery;
    PLONG EvtDeviceUsageNotificationEx;
};

typedef struct _WDF_POWER_FRAMEWORK_SETTINGS {
    ULONG Size;
    PLONG EvtDeviceWdmPostPoFxRegisterDevice;
    PVOID EvtDeviceWdmPrePoFxUnregisterDevice;
    struct _PO_FX_COMPONENT_V1 *Component;
    PVOID ComponentActiveConditionCallback;
    PVOID ComponentIdleConditionCallback;
    PVOID ComponentIdleStateCallback;
    PLONG PowerControlCallback;
    PVOID PoFxDeviceContext;
};

typedef struct _WDF_POWER_POLICY_EVENT_CALLBACKS {
    ULONG Size;
    PLONG EvtDeviceArmWakeFromS0;
    PVOID EvtDeviceDisarmWakeFromS0;
    PVOID EvtDeviceWakeFromS0Triggered;
    PLONG EvtDeviceArmWakeFromSx;
    PVOID EvtDeviceDisarmWakeFromSx;
    PVOID EvtDeviceWakeFromSxTriggered;
    PLONG EvtDeviceArmWakeFromSxWithReason;
};

typedef struct _WDF_QUERY_INTERFACE_CONFIG {
    ULONG Size;
    struct _INTERFACE *Interface;
    struct _GUID *InterfaceType;
    UCHAR SendQueryToParentStack;
    PLONG EvtDeviceProcessQueryInterfaceRequest;
    UCHAR ImportInterface;
};

typedef struct _WDF_REMOVE_LOCK_OPTIONS {
    ULONG Size;
    ULONG Flags;
};

typedef struct _WDF_REQUEST_COMPLETION_PARAMS {
    ULONG Size;
    enum _WDF_REQUEST_TYPE Type;
    struct _IO_STATUS_BLOCK IoStatus;
     <unnamed-type-Parameters>;
    union {
         <unnamed-type-Write>;
        struct {
            struct WDFMEMORY__ *Buffer;
            ULONG64 Length;
            ULONG64 Offset;
        } Write;
         <unnamed-type-Read>;
        struct {
            struct WDFMEMORY__ *Buffer;
            ULONG64 Length;
            ULONG64 Offset;
        } Read;
         <unnamed-type-Ioctl>;
        struct {
            ULONG IoControlCode;
             <unnamed-type-Input>;
            struct {
                struct WDFMEMORY__ *Buffer;
                ULONG64 Offset;
            } Input;
             <unnamed-type-Output>;
            struct {
                struct WDFMEMORY__ *Buffer;
                ULONG64 Offset;
                ULONG64 Length;
            } Output;
        } Ioctl;
         <unnamed-type-Others>;
        struct {
             <unnamed-type-Argument1>;
            union {
                PVOID Ptr;
                ULONG64 Value;
            } Argument1;
             <unnamed-type-Argument2>;
            union {
                PVOID Ptr;
                ULONG64 Value;
            } Argument2;
             <unnamed-type-Argument3>;
            union {
                PVOID Ptr;
                ULONG64 Value;
            } Argument3;
             <unnamed-type-Argument4>;
            union {
                PVOID Ptr;
                ULONG64 Value;
            } Argument4;
        } Others;
         <unnamed-type-Usb>;
        struct {
            struct _WDF_USB_REQUEST_COMPLETION_PARAMS *Completion;
        } Usb;
    } Parameters;
};

typedef struct _WDF_REQUEST_FORWARD_OPTIONS {
    ULONG Size;
    ULONG Flags;
};

typedef struct _WDF_REQUEST_PARAMETERS {
    USHORT Size;
    UCHAR MinorFunction;
    enum _WDF_REQUEST_TYPE Type;
     <unnamed-type-Parameters>;
    union {
         <unnamed-type-Create>;
        struct {
            struct _IO_SECURITY_CONTEXT *SecurityContext;
            ULONG Options;
            USHORT FileAttributes;
            USHORT ShareAccess;
            ULONG EaLength;
        } Create;
         <unnamed-type-Read>;
        struct {
            ULONG64 Length;
            ULONG Key;
            LONG64 DeviceOffset;
        } Read;
         <unnamed-type-Write>;
        struct {
            ULONG64 Length;
            ULONG Key;
            LONG64 DeviceOffset;
        } Write;
         <unnamed-type-DeviceIoControl>;
        struct {
            ULONG64 OutputBufferLength;
            ULONG64 InputBufferLength;
            ULONG IoControlCode;
            PVOID Type3InputBuffer;
        } DeviceIoControl;
         <unnamed-type-Others>;
        struct {
            PVOID Arg1;
            PVOID Arg2;
            ULONG IoControlCode;
            PVOID Arg4;
        } Others;
    } Parameters;
};

typedef struct _WDF_REQUEST_REUSE_PARAMS {
    ULONG Size;
    ULONG Flags;
    LONG Status;
    struct _IRP *NewIrp;
};

typedef struct _WDF_REQUEST_SEND_OPTIONS {
    ULONG Size;
    ULONG Flags;
    LONG64 Timeout;
};

typedef struct _WDF_TIMER_CONFIG {
    ULONG Size;
    PVOID EvtTimerFunc;
    ULONG Period;
    UCHAR AutomaticSerialization;
    ULONG TolerableDelay;
    UCHAR UseHighResolutionTimer;
};

typedef struct _WDF_USB_REQUEST_COMPLETION_PARAMS {
};

typedef struct _WDF_WMI_INSTANCE_CONFIG {
    ULONG Size;
    struct WDFWMIPROVIDER__ *Provider;
    struct _WDF_WMI_PROVIDER_CONFIG *ProviderConfig;
    UCHAR UseContextForQuery;
    UCHAR Register;
    PLONG EvtWmiInstanceQueryInstance;
    PLONG EvtWmiInstanceSetInstance;
    PLONG EvtWmiInstanceSetItem;
    PLONG EvtWmiInstanceExecuteMethod;
};

typedef struct _WDF_WMI_PROVIDER_CONFIG {
    ULONG Size;
    struct _GUID Guid;
    ULONG Flags;
    ULONG MinInstanceBufferSize;
    PLONG EvtWmiProviderFunctionControl;
};

typedef struct _WDF_WORKITEM_CONFIG {
    ULONG Size;
    PVOID EvtWorkItemFunc;
    UCHAR AutomaticSerialization;
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

typedef struct __vc_attributes::aggregatableAttribute {
    LONG type_e;
    VOID aggregatableAttribute;
    VOID aggregatableAttribute;
    enum __vc_attributes::aggregatableAttribute::type_e type;
};

typedef struct __vc_attributes::event_receiverAttribute {
    LONG type_e;
    VOID event_receiverAttribute;
    VOID event_receiverAttribute;
    VOID event_receiverAttribute;
    enum __vc_attributes::event_receiverAttribute::type_e type;
    BOOLEAN layout_dependent;
};

typedef struct __vc_attributes::event_sourceAttribute {
    LONG type_e;
    LONG optimize_e;
    VOID event_sourceAttribute;
    VOID event_sourceAttribute;
    enum __vc_attributes::event_sourceAttribute::type_e type;
    enum __vc_attributes::event_sourceAttribute::optimize_e optimize;
    BOOLEAN decorate;
};

typedef struct __vc_attributes::helper_attributes::usageAttribute {
    LONG usage_e;
    VOID usageAttribute;
    ULONG value;
};

typedef struct __vc_attributes::helper_attributes::v1_alttypeAttribute {
    LONG type_e;
    VOID v1_alttypeAttribute;
    enum __vc_attributes::helper_attributes::v1_alttypeAttribute::type_e type;
};

typedef struct __vc_attributes::moduleAttribute {
    LONG type_e;
    VOID moduleAttribute;
    VOID moduleAttribute;
    VOID moduleAttribute;
    enum __vc_attributes::moduleAttribute::type_e type;
    PCHAR name;
    PCHAR version;
    PCHAR uuid;
    LONG lcid;
    BOOLEAN control;
    PCHAR helpstring;
    LONG helpstringcontext;
    PCHAR helpstringdll;
    PCHAR helpfile;
    LONG helpcontext;
    BOOLEAN hidden;
    BOOLEAN restricted;
    PCHAR custom;
    PCHAR resource_name;
};

typedef struct __vc_attributes::threadingAttribute {
    LONG threading_e;
    VOID threadingAttribute;
    VOID threadingAttribute;
    enum __vc_attributes::threadingAttribute::threading_e value;
};

typedef union _KGDTENTRY64 {
};

typedef union _KIDTENTRY64 {
};

typedef union _LARGE_INTEGER {
    ULONG LowPart;
    LONG HighPart;
     <unnamed-type-u>;
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
     <unnamed-type-HeaderX64>;
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
     <unnamed-type-u>;
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

typedef enum DEVICE_REGISTRY_PROPERTY {
    DevicePropertyDeviceDescription = 0,
    DevicePropertyHardwareID = 1,
    DevicePropertyCompatibleIDs = 2,
    DevicePropertyBootConfiguration = 3,
    DevicePropertyBootConfigurationTranslated = 4,
    DevicePropertyClassName = 5,
    DevicePropertyClassGuid = 6,
    DevicePropertyDriverKeyName = 7,
    DevicePropertyManufacturer = 8,
    DevicePropertyFriendlyName = 9,
    DevicePropertyLocationInformation = 10,
    DevicePropertyPhysicalDeviceObjectName = 11,
    DevicePropertyBusTypeGuid = 12,
    DevicePropertyLegacyBusType = 13,
    DevicePropertyBusNumber = 14,
    DevicePropertyEnumeratorName = 15,
    DevicePropertyAddress = 16,
    DevicePropertyUINumber = 17,
    DevicePropertyInstallState = 18,
    DevicePropertyRemovalPolicy = 19,
    DevicePropertyResourceRequirements = 20,
    DevicePropertyAllocatedResources = 21,
    DevicePropertyContainerID = 22
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

typedef enum _DEVPROPSTORE {
    DEVPROP_STORE_SYSTEM = 0,
    DEVPROP_STORE_USER = 1
};

typedef enum _DIRECTORY_NOTIFY_INFORMATION_CLASS {
    DirectoryNotifyInformation = 1,
    DirectoryNotifyExtendedInformation = 2
};

typedef enum _DMA_WIDTH {
    Width8Bits = 0,
    Width16Bits = 1,
    Width32Bits = 2,
    Width64Bits = 3,
    WidthNoWrap = 4,
    MaximumDmaWidth = 5
};

typedef enum _DRIVER_RUNTIME_INIT_FLAGS {
    DrvRtPoolNxOptIn = 1,
    LastDrvRtFlag = 2
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

typedef enum _WDFFUNCENUM {
    WdfChildListCreateTableIndex = 0,
    WdfChildListGetDeviceTableIndex = 1,
    WdfChildListRetrievePdoTableIndex = 2,
    WdfChildListRetrieveAddressDescriptionTableIndex = 3,
    WdfChildListBeginScanTableIndex = 4,
    WdfChildListEndScanTableIndex = 5,
    WdfChildListBeginIterationTableIndex = 6,
    WdfChildListRetrieveNextDeviceTableIndex = 7,
    WdfChildListEndIterationTableIndex = 8,
    WdfChildListAddOrUpdateChildDescriptionAsPresentTableIndex = 9,
    WdfChildListUpdateChildDescriptionAsMissingTableIndex = 10,
    WdfChildListUpdateAllChildDescriptionsAsPresentTableIndex = 11,
    WdfChildListRequestChildEjectTableIndex = 12,
    WdfCollectionCreateTableIndex = 13,
    WdfCollectionGetCountTableIndex = 14,
    WdfCollectionAddTableIndex = 15,
    WdfCollectionRemoveTableIndex = 16,
    WdfCollectionRemoveItemTableIndex = 17,
    WdfCollectionGetItemTableIndex = 18,
    WdfCollectionGetFirstItemTableIndex = 19,
    WdfCollectionGetLastItemTableIndex = 20,
    WdfCommonBufferCreateTableIndex = 21,
    WdfCommonBufferGetAlignedVirtualAddressTableIndex = 22,
    WdfCommonBufferGetAlignedLogicalAddressTableIndex = 23,
    WdfCommonBufferGetLengthTableIndex = 24,
    WdfControlDeviceInitAllocateTableIndex = 25,
    WdfControlDeviceInitSetShutdownNotificationTableIndex = 26,
    WdfControlFinishInitializingTableIndex = 27,
    WdfDeviceGetDeviceStateTableIndex = 28,
    WdfDeviceSetDeviceStateTableIndex = 29,
    WdfWdmDeviceGetWdfDeviceHandleTableIndex = 30,
    WdfDeviceWdmGetDeviceObjectTableIndex = 31,
    WdfDeviceWdmGetAttachedDeviceTableIndex = 32,
    WdfDeviceWdmGetPhysicalDeviceTableIndex = 33,
    WdfDeviceWdmDispatchPreprocessedIrpTableIndex = 34,
    WdfDeviceAddDependentUsageDeviceObjectTableIndex = 35,
    WdfDeviceAddRemovalRelationsPhysicalDeviceTableIndex = 36,
    WdfDeviceRemoveRemovalRelationsPhysicalDeviceTableIndex = 37,
    WdfDeviceClearRemovalRelationsDevicesTableIndex = 38,
    WdfDeviceGetDriverTableIndex = 39,
    WdfDeviceRetrieveDeviceNameTableIndex = 40,
    WdfDeviceAssignMofResourceNameTableIndex = 41,
    WdfDeviceGetIoTargetTableIndex = 42,
    WdfDeviceGetDevicePnpStateTableIndex = 43,
    WdfDeviceGetDevicePowerStateTableIndex = 44,
    WdfDeviceGetDevicePowerPolicyStateTableIndex = 45,
    WdfDeviceAssignS0IdleSettingsTableIndex = 46,
    WdfDeviceAssignSxWakeSettingsTableIndex = 47,
    WdfDeviceOpenRegistryKeyTableIndex = 48,
    WdfDeviceSetSpecialFileSupportTableIndex = 49,
    WdfDeviceSetCharacteristicsTableIndex = 50,
    WdfDeviceGetCharacteristicsTableIndex = 51,
    WdfDeviceGetAlignmentRequirementTableIndex = 52,
    WdfDeviceSetAlignmentRequirementTableIndex = 53,
    WdfDeviceInitFreeTableIndex = 54,
    WdfDeviceInitSetPnpPowerEventCallbacksTableIndex = 55,
    WdfDeviceInitSetPowerPolicyEventCallbacksTableIndex = 56,
    WdfDeviceInitSetPowerPolicyOwnershipTableIndex = 57,
    WdfDeviceInitRegisterPnpStateChangeCallbackTableIndex = 58,
    WdfDeviceInitRegisterPowerStateChangeCallbackTableIndex = 59,
    WdfDeviceInitRegisterPowerPolicyStateChangeCallbackTableIndex = 60,
    WdfDeviceInitSetIoTypeTableIndex = 61,
    WdfDeviceInitSetExclusiveTableIndex = 62,
    WdfDeviceInitSetPowerNotPageableTableIndex = 63,
    WdfDeviceInitSetPowerPageableTableIndex = 64,
    WdfDeviceInitSetPowerInrushTableIndex = 65,
    WdfDeviceInitSetDeviceTypeTableIndex = 66,
    WdfDeviceInitAssignNameTableIndex = 67,
    WdfDeviceInitAssignSDDLStringTableIndex = 68,
    WdfDeviceInitSetDeviceClassTableIndex = 69,
    WdfDeviceInitSetCharacteristicsTableIndex = 70,
    WdfDeviceInitSetFileObjectConfigTableIndex = 71,
    WdfDeviceInitSetRequestAttributesTableIndex = 72,
    WdfDeviceInitAssignWdmIrpPreprocessCallbackTableIndex = 73,
    WdfDeviceInitSetIoInCallerContextCallbackTableIndex = 74,
    WdfDeviceCreateTableIndex = 75,
    WdfDeviceSetStaticStopRemoveTableIndex = 76,
    WdfDeviceCreateDeviceInterfaceTableIndex = 77,
    WdfDeviceSetDeviceInterfaceStateTableIndex = 78,
    WdfDeviceRetrieveDeviceInterfaceStringTableIndex = 79,
    WdfDeviceCreateSymbolicLinkTableIndex = 80,
    WdfDeviceQueryPropertyTableIndex = 81,
    WdfDeviceAllocAndQueryPropertyTableIndex = 82,
    WdfDeviceSetPnpCapabilitiesTableIndex = 83,
    WdfDeviceSetPowerCapabilitiesTableIndex = 84,
    WdfDeviceSetBusInformationForChildrenTableIndex = 85,
    WdfDeviceIndicateWakeStatusTableIndex = 86,
    WdfDeviceSetFailedTableIndex = 87,
    WdfDeviceStopIdleNoTrackTableIndex = 88,
    WdfDeviceResumeIdleNoTrackTableIndex = 89,
    WdfDeviceGetFileObjectTableIndex = 90,
    WdfDeviceEnqueueRequestTableIndex = 91,
    WdfDeviceGetDefaultQueueTableIndex = 92,
    WdfDeviceConfigureRequestDispatchingTableIndex = 93,
    WdfDmaEnablerCreateTableIndex = 94,
    WdfDmaEnablerGetMaximumLengthTableIndex = 95,
    WdfDmaEnablerGetMaximumScatterGatherElementsTableIndex = 96,
    WdfDmaEnablerSetMaximumScatterGatherElementsTableIndex = 97,
    WdfDmaTransactionCreateTableIndex = 98,
    WdfDmaTransactionInitializeTableIndex = 99,
    WdfDmaTransactionInitializeUsingRequestTableIndex = 100,
    WdfDmaTransactionExecuteTableIndex = 101,
    WdfDmaTransactionReleaseTableIndex = 102,
    WdfDmaTransactionDmaCompletedTableIndex = 103,
    WdfDmaTransactionDmaCompletedWithLengthTableIndex = 104,
    WdfDmaTransactionDmaCompletedFinalTableIndex = 105,
    WdfDmaTransactionGetBytesTransferredTableIndex = 106,
    WdfDmaTransactionSetMaximumLengthTableIndex = 107,
    WdfDmaTransactionGetRequestTableIndex = 108,
    WdfDmaTransactionGetCurrentDmaTransferLengthTableIndex = 109,
    WdfDmaTransactionGetDeviceTableIndex = 110,
    WdfDpcCreateTableIndex = 111,
    WdfDpcEnqueueTableIndex = 112,
    WdfDpcCancelTableIndex = 113,
    WdfDpcGetParentObjectTableIndex = 114,
    WdfDpcWdmGetDpcTableIndex = 115,
    WdfDriverCreateTableIndex = 116,
    WdfDriverGetRegistryPathTableIndex = 117,
    WdfDriverWdmGetDriverObjectTableIndex = 118,
    WdfDriverOpenParametersRegistryKeyTableIndex = 119,
    WdfWdmDriverGetWdfDriverHandleTableIndex = 120,
    WdfDriverRegisterTraceInfoTableIndex = 121,
    WdfDriverRetrieveVersionStringTableIndex = 122,
    WdfDriverIsVersionAvailableTableIndex = 123,
    WdfFdoInitWdmGetPhysicalDeviceTableIndex = 124,
    WdfFdoInitOpenRegistryKeyTableIndex = 125,
    WdfFdoInitQueryPropertyTableIndex = 126,
    WdfFdoInitAllocAndQueryPropertyTableIndex = 127,
    WdfFdoInitSetEventCallbacksTableIndex = 128,
    WdfFdoInitSetFilterTableIndex = 129,
    WdfFdoInitSetDefaultChildListConfigTableIndex = 130,
    WdfFdoQueryForInterfaceTableIndex = 131,
    WdfFdoGetDefaultChildListTableIndex = 132,
    WdfFdoAddStaticChildTableIndex = 133,
    WdfFdoLockStaticChildListForIterationTableIndex = 134,
    WdfFdoRetrieveNextStaticChildTableIndex = 135,
    WdfFdoUnlockStaticChildListFromIterationTableIndex = 136,
    WdfFileObjectGetFileNameTableIndex = 137,
    WdfFileObjectGetFlagsTableIndex = 138,
    WdfFileObjectGetDeviceTableIndex = 139,
    WdfFileObjectWdmGetFileObjectTableIndex = 140,
    WdfInterruptCreateTableIndex = 141,
    WdfInterruptQueueDpcForIsrTableIndex = 142,
    WdfInterruptSynchronizeTableIndex = 143,
    WdfInterruptAcquireLockTableIndex = 144,
    WdfInterruptReleaseLockTableIndex = 145,
    WdfInterruptEnableTableIndex = 146,
    WdfInterruptDisableTableIndex = 147,
    WdfInterruptWdmGetInterruptTableIndex = 148,
    WdfInterruptGetInfoTableIndex = 149,
    WdfInterruptSetPolicyTableIndex = 150,
    WdfInterruptGetDeviceTableIndex = 151,
    WdfIoQueueCreateTableIndex = 152,
    WdfIoQueueGetStateTableIndex = 153,
    WdfIoQueueStartTableIndex = 154,
    WdfIoQueueStopTableIndex = 155,
    WdfIoQueueStopSynchronouslyTableIndex = 156,
    WdfIoQueueGetDeviceTableIndex = 157,
    WdfIoQueueRetrieveNextRequestTableIndex = 158,
    WdfIoQueueRetrieveRequestByFileObjectTableIndex = 159,
    WdfIoQueueFindRequestTableIndex = 160,
    WdfIoQueueRetrieveFoundRequestTableIndex = 161,
    WdfIoQueueDrainSynchronouslyTableIndex = 162,
    WdfIoQueueDrainTableIndex = 163,
    WdfIoQueuePurgeSynchronouslyTableIndex = 164,
    WdfIoQueuePurgeTableIndex = 165,
    WdfIoQueueReadyNotifyTableIndex = 166,
    WdfIoTargetCreateTableIndex = 167,
    WdfIoTargetOpenTableIndex = 168,
    WdfIoTargetCloseForQueryRemoveTableIndex = 169,
    WdfIoTargetCloseTableIndex = 170,
    WdfIoTargetStartTableIndex = 171,
    WdfIoTargetStopTableIndex = 172,
    WdfIoTargetGetStateTableIndex = 173,
    WdfIoTargetGetDeviceTableIndex = 174,
    WdfIoTargetQueryTargetPropertyTableIndex = 175,
    WdfIoTargetAllocAndQueryTargetPropertyTableIndex = 176,
    WdfIoTargetQueryForInterfaceTableIndex = 177,
    WdfIoTargetWdmGetTargetDeviceObjectTableIndex = 178,
    WdfIoTargetWdmGetTargetPhysicalDeviceTableIndex = 179,
    WdfIoTargetWdmGetTargetFileObjectTableIndex = 180,
    WdfIoTargetWdmGetTargetFileHandleTableIndex = 181,
    WdfIoTargetSendReadSynchronouslyTableIndex = 182,
    WdfIoTargetFormatRequestForReadTableIndex = 183,
    WdfIoTargetSendWriteSynchronouslyTableIndex = 184,
    WdfIoTargetFormatRequestForWriteTableIndex = 185,
    WdfIoTargetSendIoctlSynchronouslyTableIndex = 186,
    WdfIoTargetFormatRequestForIoctlTableIndex = 187,
    WdfIoTargetSendInternalIoctlSynchronouslyTableIndex = 188,
    WdfIoTargetFormatRequestForInternalIoctlTableIndex = 189,
    WdfIoTargetSendInternalIoctlOthersSynchronouslyTableIndex = 190,
    WdfIoTargetFormatRequestForInternalIoctlOthersTableIndex = 191,
    WdfMemoryCreateTableIndex = 192,
    WdfMemoryCreatePreallocatedTableIndex = 193,
    WdfMemoryGetBufferTableIndex = 194,
    WdfMemoryAssignBufferTableIndex = 195,
    WdfMemoryCopyToBufferTableIndex = 196,
    WdfMemoryCopyFromBufferTableIndex = 197,
    WdfLookasideListCreateTableIndex = 198,
    WdfMemoryCreateFromLookasideTableIndex = 199,
    WdfDeviceMiniportCreateTableIndex = 200,
    WdfDriverMiniportUnloadTableIndex = 201,
    WdfObjectGetTypedContextWorkerTableIndex = 202,
    WdfObjectAllocateContextTableIndex = 203,
    WdfObjectContextGetObjectTableIndex = 204,
    WdfObjectReferenceActualTableIndex = 205,
    WdfObjectDereferenceActualTableIndex = 206,
    WdfObjectCreateTableIndex = 207,
    WdfObjectDeleteTableIndex = 208,
    WdfObjectQueryTableIndex = 209,
    WdfPdoInitAllocateTableIndex = 210,
    WdfPdoInitSetEventCallbacksTableIndex = 211,
    WdfPdoInitAssignDeviceIDTableIndex = 212,
    WdfPdoInitAssignInstanceIDTableIndex = 213,
    WdfPdoInitAddHardwareIDTableIndex = 214,
    WdfPdoInitAddCompatibleIDTableIndex = 215,
    WdfPdoInitAddDeviceTextTableIndex = 216,
    WdfPdoInitSetDefaultLocaleTableIndex = 217,
    WdfPdoInitAssignRawDeviceTableIndex = 218,
    WdfPdoMarkMissingTableIndex = 219,
    WdfPdoRequestEjectTableIndex = 220,
    WdfPdoGetParentTableIndex = 221,
    WdfPdoRetrieveIdentificationDescriptionTableIndex = 222,
    WdfPdoRetrieveAddressDescriptionTableIndex = 223,
    WdfPdoUpdateAddressDescriptionTableIndex = 224,
    WdfPdoAddEjectionRelationsPhysicalDeviceTableIndex = 225,
    WdfPdoRemoveEjectionRelationsPhysicalDeviceTableIndex = 226,
    WdfPdoClearEjectionRelationsDevicesTableIndex = 227,
    WdfDeviceAddQueryInterfaceTableIndex = 228,
    WdfRegistryOpenKeyTableIndex = 229,
    WdfRegistryCreateKeyTableIndex = 230,
    WdfRegistryCloseTableIndex = 231,
    WdfRegistryWdmGetHandleTableIndex = 232,
    WdfRegistryRemoveKeyTableIndex = 233,
    WdfRegistryRemoveValueTableIndex = 234,
    WdfRegistryQueryValueTableIndex = 235,
    WdfRegistryQueryMemoryTableIndex = 236,
    WdfRegistryQueryMultiStringTableIndex = 237,
    WdfRegistryQueryUnicodeStringTableIndex = 238,
    WdfRegistryQueryStringTableIndex = 239,
    WdfRegistryQueryULongTableIndex = 240,
    WdfRegistryAssignValueTableIndex = 241,
    WdfRegistryAssignMemoryTableIndex = 242,
    WdfRegistryAssignMultiStringTableIndex = 243,
    WdfRegistryAssignUnicodeStringTableIndex = 244,
    WdfRegistryAssignStringTableIndex = 245,
    WdfRegistryAssignULongTableIndex = 246,
    WdfRequestCreateTableIndex = 247,
    WdfRequestCreateFromIrpTableIndex = 248,
    WdfRequestReuseTableIndex = 249,
    WdfRequestChangeTargetTableIndex = 250,
    WdfRequestFormatRequestUsingCurrentTypeTableIndex = 251,
    WdfRequestWdmFormatUsingStackLocationTableIndex = 252,
    WdfRequestSendTableIndex = 253,
    WdfRequestGetStatusTableIndex = 254,
    WdfRequestMarkCancelableTableIndex = 255,
    WdfRequestUnmarkCancelableTableIndex = 256,
    WdfRequestIsCanceledTableIndex = 257,
    WdfRequestCancelSentRequestTableIndex = 258,
    WdfRequestIsFrom32BitProcessTableIndex = 259,
    WdfRequestSetCompletionRoutineTableIndex = 260,
    WdfRequestGetCompletionParamsTableIndex = 261,
    WdfRequestAllocateTimerTableIndex = 262,
    WdfRequestCompleteTableIndex = 263,
    WdfRequestCompleteWithPriorityBoostTableIndex = 264,
    WdfRequestCompleteWithInformationTableIndex = 265,
    WdfRequestGetParametersTableIndex = 266,
    WdfRequestRetrieveInputMemoryTableIndex = 267,
    WdfRequestRetrieveOutputMemoryTableIndex = 268,
    WdfRequestRetrieveInputBufferTableIndex = 269,
    WdfRequestRetrieveOutputBufferTableIndex = 270,
    WdfRequestRetrieveInputWdmMdlTableIndex = 271,
    WdfRequestRetrieveOutputWdmMdlTableIndex = 272,
    WdfRequestRetrieveUnsafeUserInputBufferTableIndex = 273,
    WdfRequestRetrieveUnsafeUserOutputBufferTableIndex = 274,
    WdfRequestSetInformationTableIndex = 275,
    WdfRequestGetInformationTableIndex = 276,
    WdfRequestGetFileObjectTableIndex = 277,
    WdfRequestProbeAndLockUserBufferForReadTableIndex = 278,
    WdfRequestProbeAndLockUserBufferForWriteTableIndex = 279,
    WdfRequestGetRequestorModeTableIndex = 280,
    WdfRequestForwardToIoQueueTableIndex = 281,
    WdfRequestGetIoQueueTableIndex = 282,
    WdfRequestRequeueTableIndex = 283,
    WdfRequestStopAcknowledgeTableIndex = 284,
    WdfRequestWdmGetIrpTableIndex = 285,
    WdfIoResourceRequirementsListSetSlotNumberTableIndex = 286,
    WdfIoResourceRequirementsListSetInterfaceTypeTableIndex = 287,
    WdfIoResourceRequirementsListAppendIoResListTableIndex = 288,
    WdfIoResourceRequirementsListInsertIoResListTableIndex = 289,
    WdfIoResourceRequirementsListGetCountTableIndex = 290,
    WdfIoResourceRequirementsListGetIoResListTableIndex = 291,
    WdfIoResourceRequirementsListRemoveTableIndex = 292,
    WdfIoResourceRequirementsListRemoveByIoResListTableIndex = 293,
    WdfIoResourceListCreateTableIndex = 294,
    WdfIoResourceListAppendDescriptorTableIndex = 295,
    WdfIoResourceListInsertDescriptorTableIndex = 296,
    WdfIoResourceListUpdateDescriptorTableIndex = 297,
    WdfIoResourceListGetCountTableIndex = 298,
    WdfIoResourceListGetDescriptorTableIndex = 299,
    WdfIoResourceListRemoveTableIndex = 300,
    WdfIoResourceListRemoveByDescriptorTableIndex = 301,
    WdfCmResourceListAppendDescriptorTableIndex = 302,
    WdfCmResourceListInsertDescriptorTableIndex = 303,
    WdfCmResourceListGetCountTableIndex = 304,
    WdfCmResourceListGetDescriptorTableIndex = 305,
    WdfCmResourceListRemoveTableIndex = 306,
    WdfCmResourceListRemoveByDescriptorTableIndex = 307,
    WdfStringCreateTableIndex = 308,
    WdfStringGetUnicodeStringTableIndex = 309,
    WdfObjectAcquireLockTableIndex = 310,
    WdfObjectReleaseLockTableIndex = 311,
    WdfWaitLockCreateTableIndex = 312,
    WdfWaitLockAcquireTableIndex = 313,
    WdfWaitLockReleaseTableIndex = 314,
    WdfSpinLockCreateTableIndex = 315,
    WdfSpinLockAcquireTableIndex = 316,
    WdfSpinLockReleaseTableIndex = 317,
    WdfTimerCreateTableIndex = 318,
    WdfTimerStartTableIndex = 319,
    WdfTimerStopTableIndex = 320,
    WdfTimerGetParentObjectTableIndex = 321,
    WdfUsbTargetDeviceCreateTableIndex = 322,
    WdfUsbTargetDeviceRetrieveInformationTableIndex = 323,
    WdfUsbTargetDeviceGetDeviceDescriptorTableIndex = 324,
    WdfUsbTargetDeviceRetrieveConfigDescriptorTableIndex = 325,
    WdfUsbTargetDeviceQueryStringTableIndex = 326,
    WdfUsbTargetDeviceAllocAndQueryStringTableIndex = 327,
    WdfUsbTargetDeviceFormatRequestForStringTableIndex = 328,
    WdfUsbTargetDeviceGetNumInterfacesTableIndex = 329,
    WdfUsbTargetDeviceSelectConfigTableIndex = 330,
    WdfUsbTargetDeviceWdmGetConfigurationHandleTableIndex = 331,
    WdfUsbTargetDeviceRetrieveCurrentFrameNumberTableIndex = 332,
    WdfUsbTargetDeviceSendControlTransferSynchronouslyTableIndex = 333,
    WdfUsbTargetDeviceFormatRequestForControlTransferTableIndex = 334,
    WdfUsbTargetDeviceIsConnectedSynchronousTableIndex = 335,
    WdfUsbTargetDeviceResetPortSynchronouslyTableIndex = 336,
    WdfUsbTargetDeviceCyclePortSynchronouslyTableIndex = 337,
    WdfUsbTargetDeviceFormatRequestForCyclePortTableIndex = 338,
    WdfUsbTargetDeviceSendUrbSynchronouslyTableIndex = 339,
    WdfUsbTargetDeviceFormatRequestForUrbTableIndex = 340,
    WdfUsbTargetPipeGetInformationTableIndex = 341,
    WdfUsbTargetPipeIsInEndpointTableIndex = 342,
    WdfUsbTargetPipeIsOutEndpointTableIndex = 343,
    WdfUsbTargetPipeGetTypeTableIndex = 344,
    WdfUsbTargetPipeSetNoMaximumPacketSizeCheckTableIndex = 345,
    WdfUsbTargetPipeWriteSynchronouslyTableIndex = 346,
    WdfUsbTargetPipeFormatRequestForWriteTableIndex = 347,
    WdfUsbTargetPipeReadSynchronouslyTableIndex = 348,
    WdfUsbTargetPipeFormatRequestForReadTableIndex = 349,
    WdfUsbTargetPipeConfigContinuousReaderTableIndex = 350,
    WdfUsbTargetPipeAbortSynchronouslyTableIndex = 351,
    WdfUsbTargetPipeFormatRequestForAbortTableIndex = 352,
    WdfUsbTargetPipeResetSynchronouslyTableIndex = 353,
    WdfUsbTargetPipeFormatRequestForResetTableIndex = 354,
    WdfUsbTargetPipeSendUrbSynchronouslyTableIndex = 355,
    WdfUsbTargetPipeFormatRequestForUrbTableIndex = 356,
    WdfUsbInterfaceGetInterfaceNumberTableIndex = 357,
    WdfUsbInterfaceGetNumEndpointsTableIndex = 358,
    WdfUsbInterfaceGetDescriptorTableIndex = 359,
    WdfUsbInterfaceSelectSettingTableIndex = 360,
    WdfUsbInterfaceGetEndpointInformationTableIndex = 361,
    WdfUsbTargetDeviceGetInterfaceTableIndex = 362,
    WdfUsbInterfaceGetConfiguredSettingIndexTableIndex = 363,
    WdfUsbInterfaceGetNumConfiguredPipesTableIndex = 364,
    WdfUsbInterfaceGetConfiguredPipeTableIndex = 365,
    WdfUsbTargetPipeWdmGetPipeHandleTableIndex = 366,
    WdfVerifierDbgBreakPointTableIndex = 367,
    WdfVerifierKeBugCheckTableIndex = 368,
    WdfWmiProviderCreateTableIndex = 369,
    WdfWmiProviderGetDeviceTableIndex = 370,
    WdfWmiProviderIsEnabledTableIndex = 371,
    WdfWmiProviderGetTracingHandleTableIndex = 372,
    WdfWmiInstanceCreateTableIndex = 373,
    WdfWmiInstanceRegisterTableIndex = 374,
    WdfWmiInstanceDeregisterTableIndex = 375,
    WdfWmiInstanceGetDeviceTableIndex = 376,
    WdfWmiInstanceGetProviderTableIndex = 377,
    WdfWmiInstanceFireEventTableIndex = 378,
    WdfWorkItemCreateTableIndex = 379,
    WdfWorkItemEnqueueTableIndex = 380,
    WdfWorkItemGetParentObjectTableIndex = 381,
    WdfWorkItemFlushTableIndex = 382,
    WdfCommonBufferCreateWithConfigTableIndex = 383,
    WdfDmaEnablerGetFragmentLengthTableIndex = 384,
    WdfDmaEnablerWdmGetDmaAdapterTableIndex = 385,
    WdfUsbInterfaceGetNumSettingsTableIndex = 386,
    WdfDeviceRemoveDependentUsageDeviceObjectTableIndex = 387,
    WdfDeviceGetSystemPowerActionTableIndex = 388,
    WdfInterruptSetExtendedPolicyTableIndex = 389,
    WdfIoQueueAssignForwardProgressPolicyTableIndex = 390,
    WdfPdoInitAssignContainerIDTableIndex = 391,
    WdfPdoInitAllowForwardingRequestToParentTableIndex = 392,
    WdfRequestMarkCancelableExTableIndex = 393,
    WdfRequestIsReservedTableIndex = 394,
    WdfRequestForwardToParentDeviceIoQueueTableIndex = 395,
    WdfCxDeviceInitAllocateTableIndex = 396,
    WdfCxDeviceInitAssignWdmIrpPreprocessCallbackTableIndex = 397,
    WdfCxDeviceInitSetIoInCallerContextCallbackTableIndex = 398,
    WdfCxDeviceInitSetRequestAttributesTableIndex = 399,
    WdfCxDeviceInitSetFileObjectConfigTableIndex = 400,
    WdfDeviceWdmDispatchIrpTableIndex = 401,
    WdfDeviceWdmDispatchIrpToIoQueueTableIndex = 402,
    WdfDeviceInitSetRemoveLockOptionsTableIndex = 403,
    WdfDeviceConfigureWdmIrpDispatchCallbackTableIndex = 404,
    WdfDmaEnablerConfigureSystemProfileTableIndex = 405,
    WdfDmaTransactionInitializeUsingOffsetTableIndex = 406,
    WdfDmaTransactionGetTransferInfoTableIndex = 407,
    WdfDmaTransactionSetChannelConfigurationCallbackTableIndex = 408,
    WdfDmaTransactionSetTransferCompleteCallbackTableIndex = 409,
    WdfDmaTransactionSetImmediateExecutionTableIndex = 410,
    WdfDmaTransactionAllocateResourcesTableIndex = 411,
    WdfDmaTransactionSetDeviceAddressOffsetTableIndex = 412,
    WdfDmaTransactionFreeResourcesTableIndex = 413,
    WdfDmaTransactionCancelTableIndex = 414,
    WdfDmaTransactionWdmGetTransferContextTableIndex = 415,
    WdfInterruptQueueWorkItemForIsrTableIndex = 416,
    WdfInterruptTryToAcquireLockTableIndex = 417,
    WdfIoQueueStopAndPurgeTableIndex = 418,
    WdfIoQueueStopAndPurgeSynchronouslyTableIndex = 419,
    WdfIoTargetPurgeTableIndex = 420,
    WdfUsbTargetDeviceCreateWithParametersTableIndex = 421,
    WdfUsbTargetDeviceQueryUsbCapabilityTableIndex = 422,
    WdfUsbTargetDeviceCreateUrbTableIndex = 423,
    WdfUsbTargetDeviceCreateIsochUrbTableIndex = 424,
    WdfDeviceWdmAssignPowerFrameworkSettingsTableIndex = 425,
    WdfDmaTransactionStopSystemTransferTableIndex = 426,
    WdfCxVerifierKeBugCheckTableIndex = 427,
    WdfInterruptReportActiveTableIndex = 428,
    WdfInterruptReportInactiveTableIndex = 429,
    WdfDeviceInitSetReleaseHardwareOrderOnFailureTableIndex = 430,
    WdfGetTriageInfoTableIndex = 431,
    WdfDeviceInitSetIoTypeExTableIndex = 432,
    WdfDeviceQueryPropertyExTableIndex = 433,
    WdfDeviceAllocAndQueryPropertyExTableIndex = 434,
    WdfDeviceAssignPropertyTableIndex = 435,
    WdfFdoInitQueryPropertyExTableIndex = 436,
    WdfFdoInitAllocAndQueryPropertyExTableIndex = 437,
    WdfDeviceStopIdleActualTableIndex = 438,
    WdfDeviceResumeIdleActualTableIndex = 439,
    WdfDeviceGetSelfIoTargetTableIndex = 440,
    WdfDeviceInitAllowSelfIoTargetTableIndex = 441,
    WdfIoTargetSelfAssignDefaultIoQueueTableIndex = 442,
    WdfDeviceOpenDevicemapKeyTableIndex = 443,
    WdfFunctionTableNumEntries = 444
};

typedef enum _WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS {
    WdfChildListRetrieveDeviceUndefined = 0,
    WdfChildListRetrieveDeviceSuccess = 1,
    WdfChildListRetrieveDeviceNotYetCreated = 2,
    WdfChildListRetrieveDeviceNoSuchDevice = 3
};

typedef enum _WDF_DEVICE_FAILED_ACTION {
    WdfDeviceFailedUndefined = 0,
    WdfDeviceFailedAttemptRestart = 1,
    WdfDeviceFailedNoRestart = 2
};

typedef enum _WDF_DEVICE_IO_TYPE {
    WdfDeviceIoUndefined = 0,
    WdfDeviceIoNeither = 1,
    WdfDeviceIoBuffered = 2,
    WdfDeviceIoDirect = 3,
    WdfDeviceIoBufferedOrDirect = 4,
    WdfDeviceIoMaximum = 5
};

typedef enum _WDF_DEVICE_PNP_STATE {
    WdfDevStatePnpInvalid = 0,
    WdfDevStatePnpObjectCreated = 256,
    WdfDevStatePnpCheckForDevicePresence = 257,
    WdfDevStatePnpEjectFailed = 258,
    WdfDevStatePnpEjectHardware = 259,
    WdfDevStatePnpEjectedWaitingForRemove = 260,
    WdfDevStatePnpInit = 261,
    WdfDevStatePnpInitStarting = 262,
    WdfDevStatePnpInitSurpriseRemoved = 263,
    WdfDevStatePnpHardwareAvailable = 264,
    WdfDevStatePnpEnableInterfaces = 265,
    WdfDevStatePnpHardwareAvailablePowerPolicyFailed = 266,
    WdfDevStatePnpQueryRemoveAskDriver = 267,
    WdfDevStatePnpQueryRemovePending = 268,
    WdfDevStatePnpQueryRemoveStaticCheck = 269,
    WdfDevStatePnpQueriedRemoving = 270,
    WdfDevStatePnpQueryStopAskDriver = 271,
    WdfDevStatePnpQueryStopPending = 272,
    WdfDevStatePnpQueryStopStaticCheck = 273,
    WdfDevStatePnpQueryCanceled = 274,
    WdfDevStatePnpRemoved = 275,
    WdfDevStatePnpPdoRemoved = 276,
    WdfDevStatePnpRemovedPdoWait = 277,
    WdfDevStatePnpRemovedPdoSurpriseRemoved = 278,
    WdfDevStatePnpRemovingDisableInterfaces = 279,
    WdfDevStatePnpRestarting = 280,
    WdfDevStatePnpStarted = 281,
    WdfDevStatePnpStartedCancelStop = 282,
    WdfDevStatePnpStartedCancelRemove = 283,
    WdfDevStatePnpStartedRemoving = 284,
    WdfDevStatePnpStartingFromStopped = 285,
    WdfDevStatePnpStopped = 286,
    WdfDevStatePnpStoppedWaitForStartCompletion = 287,
    WdfDevStatePnpStartedStopping = 288,
    WdfDevStatePnpSurpriseRemove = 289,
    WdfDevStatePnpInitQueryRemove = 290,
    WdfDevStatePnpInitQueryRemoveCanceled = 291,
    WdfDevStatePnpFdoRemoved = 292,
    WdfDevStatePnpRemovedWaitForChildren = 293,
    WdfDevStatePnpQueriedSurpriseRemove = 294,
    WdfDevStatePnpSurpriseRemoveIoStarted = 295,
    WdfDevStatePnpFailedPowerDown = 296,
    WdfDevStatePnpFailedIoStarting = 297,
    WdfDevStatePnpFailedOwnHardware = 298,
    WdfDevStatePnpFailed = 299,
    WdfDevStatePnpFailedSurpriseRemoved = 300,
    WdfDevStatePnpFailedStarted = 301,
    WdfDevStatePnpFailedWaitForRemove = 302,
    WdfDevStatePnpFailedInit = 303,
    WdfDevStatePnpPdoInitFailed = 304,
    WdfDevStatePnpRestart = 305,
    WdfDevStatePnpRestartReleaseHardware = 306,
    WdfDevStatePnpRestartHardwareAvailable = 307,
    WdfDevStatePnpPdoRestart = 308,
    WdfDevStatePnpFinal = 309,
    WdfDevStatePnpRemovedChildrenRemoved = 310,
    WdfDevStatePnpQueryRemoveEnsureDeviceAwake = 311,
    WdfDevStatePnpQueryStopEnsureDeviceAwake = 312,
    WdfDevStatePnpFailedPowerPolicyRemoved = 313,
    WdfDevStatePnpNull = 314
};

typedef enum _WDF_DEVICE_POWER_POLICY_STATE {
    WdfDevStatePwrPolInvalid = 0,
    WdfDevStatePwrPolObjectCreated = 1280,
    WdfDevStatePwrPolStarting = 1281,
    WdfDevStatePwrPolStartingSucceeded = 1282,
    WdfDevStatePwrPolStartingFailed = 1283,
    WdfDevStatePwrPolStartingDecideS0Wake = 1284,
    WdfDevStatePwrPolStartedIdleCapable = 1285,
    WdfDevStatePwrPolTimerExpiredNoWake = 1286,
    WdfDevStatePwrPolTimerExpiredNoWakeCompletePowerDown = 1287,
    WdfDevStatePwrPolWaitingUnarmed = 1288,
    WdfDevStatePwrPolWaitingUnarmedQueryIdle = 1289,
    WdfDevStatePwrPolS0NoWakePowerUp = 1290,
    WdfDevStatePwrPolS0NoWakeCompletePowerUp = 1291,
    WdfDevStatePwrPolSystemSleepFromDeviceWaitingUnarmed = 1292,
    WdfDevStatePwrPolSystemSleepNeedWake = 1293,
    WdfDevStatePwrPolSystemSleepNeedWakeCompletePowerUp = 1294,
    WdfDevStatePwrPolSystemSleepPowerRequestFailed = 1295,
    WdfDevStatePwrPolCheckPowerPageable = 1296,
    WdfDevStatePwrPolSleepingWakeWakeArrived = 1297,
    WdfDevStatePwrPolSleepingWakeRevertArmWake = 1298,
    WdfDevStatePwrPolSystemAsleepWakeArmed = 1299,
    WdfDevStatePwrPolSystemWakeDeviceWakeEnabled = 1300,
    WdfDevStatePwrPolSystemWakeDeviceWakeEnabledWakeCanceled = 1301,
    WdfDevStatePwrPolSystemWakeDeviceWakeDisarm = 1302,
    WdfDevStatePwrPolSystemWakeDeviceWakeTriggered = 1303,
    WdfDevStatePwrPolSystemWakeDeviceWakeTriggeredS0 = 1304,
    WdfDevStatePwrPolSystemWakeDeviceWokeDisarm = 1305,
    WdfDevStatePwrPolSleepingWakeWakeArrivedNP = 0x851a,
    WdfDevStatePwrPolSleepingWakeRevertArmWakeNP = 0x851b,
    WdfDevStatePwrPolSleepingWakePowerDownFailed = 1308,
    WdfDevStatePwrPolSleepingWakePowerDownFailedWakeCanceled = 1309,
    WdfDevStatePwrPolSystemAsleepWakeArmedNP = 0x851e,
    WdfDevStatePwrPolSystemWakeDeviceWakeEnabledNP = 0x851f,
    WdfDevStatePwrPolSystemWakeDeviceWakeEnabledWakeCanceledNP = 0x8520,
    WdfDevStatePwrPolSystemWakeDeviceWakeDisarmNP = 0x8521,
    WdfDevStatePwrPolSystemWakeDeviceWakeTriggeredNP = 0x8522,
    WdfDevStatePwrPolSystemWakeDeviceWakeTriggeredS0NP = 0x8523,
    WdfDevStatePwrPolSystemWakeDeviceWokeDisarmNP = 0x8524,
    WdfDevStatePwrPolSystemWakeDeviceWakeCompletePowerUp = 1317,
    WdfDevStatePwrPolSleeping = 1318,
    WdfDevStatePwrPolSleepingNoWakePowerDown = 1319,
    WdfDevStatePwrPolSleepingNoWakeCompletePowerDown = 1320,
    WdfDevStatePwrPolSleepingNoWakeDxRequestFailed = 1321,
    WdfDevStatePwrPolSleepingWakePowerDown = 1322,
    WdfDevStatePwrPolSleepingSendWake = 1323,
    WdfDevStatePwrPolSystemAsleepNoWake = 1324,
    WdfDevStatePwrPolSystemWakeDeviceWakeDisabled = 1325,
    WdfDevStatePwrPolSystemWakeDeviceToD0 = 1326,
    WdfDevStatePwrPolSystemWakeDeviceToD0CompletePowerUp = 1327,
    WdfDevStatePwrPolSystemWakeQueryIdle = 1328,
    WdfDevStatePwrPolStartedWakeCapable = 1329,
    WdfDevStatePwrPolTimerExpiredDecideUsbSS = 1330,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDown = 1331,
    WdfDevStatePwrPolTimerExpiredWakeCapableSendWake = 1332,
    WdfDevStatePwrPolTimerExpiredWakeCapableUsbSS = 1333,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeArrived = 1334,
    WdfDevStatePwrPolTimerExpiredWakeCapableCancelWake = 1335,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeCanceled = 1336,
    WdfDevStatePwrPolTimerExpiredWakeCapableCleanup = 1337,
    WdfDevStatePwrPolTimerExpiredWakeCapableDxAllocFailed = 1338,
    WdfDevStatePwrPolTimerExpiredWakeCompletedPowerDown = 1339,
    WdfDevStatePwrPolTimerExpiredWakeCompletedPowerUp = 1340,
    WdfDevStatePwrPolWaitingArmedUsbSS = 1341,
    WdfDevStatePwrPolWaitingArmed = 1342,
    WdfDevStatePwrPolWaitingArmedQueryIdle = 1343,
    WdfDevStatePwrPolIoPresentArmed = 1344,
    WdfDevStatePwrPolIoPresentArmedWakeCanceled = 1345,
    WdfDevStatePwrPolS0WakeDisarm = 1346,
    WdfDevStatePwrPolS0WakeCompletePowerUp = 1347,
    WdfDevStatePwrPolTimerExpiredWakeSucceeded = 1348,
    WdfDevStatePwrPolTimerExpiredWakeCompletedDisarm = 1349,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeSucceeded = 1350,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeFailed = 1351,
    WdfDevStatePwrPolWakeFailedUsbSS = 1352,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDownFailedCancelWake = 1353,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDownFailedWakeCanceled = 1354,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDownFailedUsbSS = 1355,
    WdfDevStatePwrPolCancelingWakeForSystemSleep = 1356,
    WdfDevStatePwrPolCancelingWakeForSystemSleepWakeCanceled = 1357,
    WdfDevStatePwrPolDisarmingWakeForSystemSleepCompletePowerUp = 1358,
    WdfDevStatePwrPolPowerUpForSystemSleepFailed = 1359,
    WdfDevStatePwrPolWokeFromS0UsbSS = 1360,
    WdfDevStatePwrPolWokeFromS0 = 1361,
    WdfDevStatePwrPolWokeFromS0NotifyDriver = 1362,
    WdfDevStatePwrPolStoppingResetDevice = 1363,
    WdfDevStatePwrPolStoppingResetDeviceCompletePowerUp = 1364,
    WdfDevStatePwrPolStoppingResetDeviceFailed = 1365,
    WdfDevStatePwrPolStoppingD0 = 1366,
    WdfDevStatePwrPolStoppingD0Failed = 1367,
    WdfDevStatePwrPolStoppingDisarmWake = 1368,
    WdfDevStatePwrPolStoppingDisarmWakeCancelWake = 1369,
    WdfDevStatePwrPolStoppingDisarmWakeWakeCanceled = 1370,
    WdfDevStatePwrPolStopping = 1371,
    WdfDevStatePwrPolStoppingFailed = 1372,
    WdfDevStatePwrPolStoppingSendStatus = 1373,
    WdfDevStatePwrPolStoppingCancelTimer = 1374,
    WdfDevStatePwrPolStoppingWaitForIdleTimeout = 1375,
    WdfDevStatePwrPolStoppingCancelUsbSS = 1376,
    WdfDevStatePwrPolStoppingWaitForUsbSSCompletion = 1377,
    WdfDevStatePwrPolStoppingCancelWake = 1378,
    WdfDevStatePwrPolStopped = 1379,
    WdfDevStatePwrPolCancelUsbSS = 1380,
    WdfDevStatePwrPolStarted = 1381,
    WdfDevStatePwrPolStartedCancelTimer = 1382,
    WdfDevStatePwrPolStartedWaitForIdleTimeout = 1383,
    WdfDevStatePwrPolStartedWakeCapableCancelTimerForSleep = 1384,
    WdfDevStatePwrPolStartedWakeCapableWaitForIdleTimeout = 1385,
    WdfDevStatePwrPolStartedWakeCapableSleepingUsbSS = 1386,
    WdfDevStatePwrPolStartedIdleCapableCancelTimerForSleep = 1387,
    WdfDevStatePwrPolStartedIdleCapableWaitForIdleTimeout = 1388,
    WdfDevStatePwrPolDeviceD0PowerRequestFailed = 1389,
    WdfDevStatePwrPolDevicePowerRequestFailed = 1390,
    WdfDevStatePwrPolGotoDx = 1391,
    WdfDevStatePwrPolGotoDxInDx = 1392,
    WdfDevStatePwrPolDx = 1393,
    WdfDevStatePwrPolGotoD0 = 1394,
    WdfDevStatePwrPolGotoD0InD0 = 1395,
    WdfDevStatePwrPolFinal = 1396,
    WdfDevStatePwrPolSleepingPowerDownNotProcessed = 1397,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDownNotProcessed = 1398,
    WdfDevStatePwrPolTimerExpiredNoWakePowerDownNotProcessed = 1399,
    WdfDevStatePwrPolTimerExpiredNoWakePoweredDownDisableIdleTimer = 1400,
    WdfDevStatePwrPolStoppingWaitingForImplicitPowerDown = 1401,
    WdfDevStatePwrPolStoppingPoweringUp = 1402,
    WdfDevStatePwrPolStoppingPoweringDown = 1403,
    WdfDevStatePwrPolPowerUpForSystemSleepNotSeen = 1404,
    WdfDevStatePwrPolWaitingArmedStoppingCancelUsbSS = 1405,
    WdfDevStatePwrPolWaitingArmedWakeFailedCancelUsbSS = 1406,
    WdfDevStatePwrPolWaitingArmedIoPresentCancelUsbSS = 1407,
    WdfDevStatePwrPolWaitingArmedWakeSucceededCancelUsbSS = 1408,
    WdfDevStatePwrPolCancelingUsbSSForSystemSleep = 1409,
    WdfDevStatePwrPolStoppingD0CancelUsbSS = 1410,
    WdfDevStatePwrPolStartingPoweredUp = 1411,
    WdfDevStatePwrPolIdleCapableDeviceIdle = 1412,
    WdfDevStatePwrPolDeviceIdleReturnToActive = 1413,
    WdfDevStatePwrPolDeviceIdleSleeping = 1414,
    WdfDevStatePwrPolDeviceIdleStopping = 1415,
    WdfDevStatePwrPolTimerExpiredNoWakeUndoPowerDown = 1416,
    WdfDevStatePwrPolWakeCapableDeviceIdle = 1417,
    WdfDevStatePwrPolWakeCapableUsbSSCompleted = 1418,
    WdfDevStatePwrPolTimerExpiredWakeCapableUndoPowerDown = 1419,
    WdfDevStatePwrPolTimerExpiredWakeCompletedHardwareStarted = 1420,
    WdfDevStatePwrPolStoppedRemoving = 1421,
    WdfDevStatePwrPolRemoved = 1422,
    WdfDevStatePwrPolRestarting = 1423,
    WdfDevStatePwrPolRestartingFailed = 1424,
    WdfDevStatePwrPolStartingPoweredUpFailed = 1425,
    WdfDevStatePwrPolTimerExpiredNoWakeReturnToActive = 1426,
    WdfDevStatePwrPolWaitingArmedWakeInterruptFired = 1427,
    WdfDevStatePwrPolSystemWakeDeviceWakeInterruptFired = 1428,
    WdfDevStatePwrPolSystemWakeDeviceWakeInterruptFiredNP = 0x8595,
    WdfDevStatePwrPolTimerExpiredWakeCapableWakeInterruptArrived = 1430,
    WdfDevStatePwrPolTimerExpiredWakeCapablePowerDownFailedWakeInterruptArrived = 1431,
    WdfDevStatePwrPolWaitingArmedWakeInterruptFiredDuringPowerDown = 1432,
    WdfDevStatePwrPolNull = 1433
};

typedef enum _WDF_DEVICE_POWER_STATE {
    WdfDevStatePowerInvalid = 0,
    WdfDevStatePowerObjectCreated = 768,
    WdfDevStatePowerCheckDeviceType = 769,
    WdfDevStatePowerCheckDeviceTypeNP = 0x8302,
    WdfDevStatePowerCheckParentState = 771,
    WdfDevStatePowerCheckParentStateNP = 0x8304,
    WdfDevStatePowerEnablingWakeAtBus = 773,
    WdfDevStatePowerEnablingWakeAtBusNP = 0x8306,
    WdfDevStatePowerD0 = 775,
    WdfDevStatePowerD0NP = 0x8308,
    WdfDevStatePowerD0BusWakeOwner = 777,
    WdfDevStatePowerD0BusWakeOwnerNP = 0x830a,
    WdfDevStatePowerD0ArmedForWake = 779,
    WdfDevStatePowerD0ArmedForWakeNP = 0x830c,
    WdfDevStatePowerD0DisarmingWakeAtBus = 781,
    WdfDevStatePowerD0DisarmingWakeAtBusNP = 0x830e,
    WdfDevStatePowerD0Starting = 783,
    WdfDevStatePowerD0StartingConnectInterrupt = 784,
    WdfDevStatePowerD0StartingDmaEnable = 785,
    WdfDevStatePowerD0StartingStartSelfManagedIo = 786,
    WdfDevStatePowerDecideD0State = 787,
    WdfDevStatePowerGotoD3Stopped = 788,
    WdfDevStatePowerStopped = 789,
    WdfDevStatePowerStartingCheckDeviceType = 790,
    WdfDevStatePowerStartingChild = 791,
    WdfDevStatePowerDxDisablingWakeAtBus = 792,
    WdfDevStatePowerDxDisablingWakeAtBusNP = 0x8319,
    WdfDevStatePowerGotoDx = 794,
    WdfDevStatePowerGotoDxNP = 0x831b,
    WdfDevStatePowerGotoDxIoStopped = 796,
    WdfDevStatePowerGotoDxIoStoppedNP = 0x831d,
    WdfDevStatePowerGotoDxNPFailed = 0x831e,
    WdfDevStatePowerDx = 799,
    WdfDevStatePowerDxNP = 0x8320,
    WdfDevStatePowerGotoDxArmedForWake = 801,
    WdfDevStatePowerGotoDxArmedForWakeNP = 0x8322,
    WdfDevStatePowerGotoDxIoStoppedArmedForWake = 803,
    WdfDevStatePowerGotoDxIoStoppedArmedForWakeNP = 0x8324,
    WdfDevStatePowerDxArmedForWake = 805,
    WdfDevStatePowerDxArmedForWakeNP = 0x8326,
    WdfDevStatePowerCheckParentStateArmedForWake = 807,
    WdfDevStatePowerCheckParentStateArmedForWakeNP = 0x8328,
    WdfDevStatePowerWaitForParentArmedForWake = 809,
    WdfDevStatePowerWaitForParentArmedForWakeNP = 0x832a,
    WdfDevStatePowerStartSelfManagedIo = 811,
    WdfDevStatePowerStartSelfManagedIoNP = 0x832c,
    WdfDevStatePowerStartSelfManagedIoFailed = 813,
    WdfDevStatePowerStartSelfManagedIoFailedNP = 0x832e,
    WdfDevStatePowerWaitForParent = 815,
    WdfDevStatePowerWaitForParentNP = 0x8330,
    WdfDevStatePowerWakePending = 817,
    WdfDevStatePowerWakePendingNP = 0x8332,
    WdfDevStatePowerWaking = 819,
    WdfDevStatePowerWakingNP = 0x8334,
    WdfDevStatePowerWakingConnectInterrupt = 821,
    WdfDevStatePowerWakingConnectInterruptNP = 0x8336,
    WdfDevStatePowerWakingConnectInterruptFailed = 823,
    WdfDevStatePowerWakingConnectInterruptFailedNP = 0x8338,
    WdfDevStatePowerWakingDmaEnable = 825,
    WdfDevStatePowerWakingDmaEnableNP = 0x833a,
    WdfDevStatePowerWakingDmaEnableFailed = 827,
    WdfDevStatePowerWakingDmaEnableFailedNP = 0x833c,
    WdfDevStatePowerReportPowerUpFailedDerefParent = 829,
    WdfDevStatePowerReportPowerUpFailed = 830,
    WdfDevStatePowerPowerFailedPowerDown = 831,
    WdfDevStatePowerReportPowerDownFailed = 832,
    WdfDevStatePowerInitialConnectInterruptFailed = 833,
    WdfDevStatePowerInitialDmaEnableFailed = 834,
    WdfDevStatePowerInitialSelfManagedIoFailed = 835,
    WdfDevStatePowerInitialPowerUpFailedDerefParent = 836,
    WdfDevStatePowerInitialPowerUpFailed = 837,
    WdfDevStatePowerDxStoppedDisarmWake = 838,
    WdfDevStatePowerDxStoppedDisarmWakeNP = 0x8347,
    WdfDevStatePowerGotoDxStoppedDisableInterruptNP = 0x8348,
    WdfDevStatePowerGotoDxStopped = 841,
    WdfDevStatePowerDxStopped = 842,
    WdfDevStatePowerGotoStopped = 843,
    WdfDevStatePowerStoppedCompleteDx = 844,
    WdfDevStatePowerDxStoppedDecideDxState = 845,
    WdfDevStatePowerDxStoppedArmForWake = 846,
    WdfDevStatePowerDxStoppedArmForWakeNP = 0x834f,
    WdfDevStatePowerFinalPowerDownFailed = 848,
    WdfDevStatePowerFinal = 849,
    WdfDevStatePowerGotoImplicitD3DisarmWakeAtBus = 850,
    WdfDevStatePowerUpFailed = 851,
    WdfDevStatePowerUpFailedDerefParent = 852,
    WdfDevStatePowerGotoDxFailed = 853,
    WdfDevStatePowerGotoDxStoppedDisableInterrupt = 854,
    WdfDevStatePowerUpFailedNP = 0x8357,
    WdfDevStatePowerUpFailedDerefParentNP = 0x8358,
    WdfDevStatePowerNotifyingD0ExitToWakeInterrupts = 857,
    WdfDevStatePowerNotifyingD0EntryToWakeInterrupts = 858,
    WdfDevStatePowerNotifyingD0ExitToWakeInterruptsNP = 0x835b,
    WdfDevStatePowerNotifyingD0EntryToWakeInterruptsNP = 0x835c,
    WdfDevStatePowerNull = 861
};

typedef enum _WDF_DEVICE_STATE_FLAGS {
    WdfDevStateNP = 0x8000
};

typedef enum _WDF_DMA_DIRECTION {
    WdfDmaDirectionReadFromDevice = 0,
    WdfDmaDirectionWriteToDevice = 1
};

typedef enum _WDF_DMA_PROFILE {
    WdfDmaProfileInvalid = 0,
    WdfDmaProfilePacket = 1,
    WdfDmaProfileScatterGather = 2,
    WdfDmaProfilePacket64 = 3,
    WdfDmaProfileScatterGather64 = 4,
    WdfDmaProfileScatterGatherDuplex = 5,
    WdfDmaProfileScatterGather64Duplex = 6,
    WdfDmaProfileSystem = 7,
    WdfDmaProfileSystemDuplex = 8
};

typedef enum _WDF_EXECUTION_LEVEL {
    WdfExecutionLevelInvalid = 0,
    WdfExecutionLevelInheritFromParent = 1,
    WdfExecutionLevelPassive = 2,
    WdfExecutionLevelDispatch = 3
};

typedef enum _WDF_FILEOBJECT_CLASS {
    WdfFileObjectInvalid = 0,
    WdfFileObjectNotRequired = 1,
    WdfFileObjectWdfCanUseFsContext = 2,
    WdfFileObjectWdfCanUseFsContext2 = 3,
    WdfFileObjectWdfCannotUseFsContexts = 4,
    WdfFileObjectCanBeOptional = -2147483648
};

typedef enum _WDF_INTERRUPT_POLARITY {
    WdfInterruptPolarityUnknown = 0,
    WdfInterruptActiveHigh = 1,
    WdfInterruptActiveLow = 2
};

typedef enum _WDF_INTERRUPT_POLICY {
    WdfIrqPolicyMachineDefault = 0,
    WdfIrqPolicyAllCloseProcessors = 1,
    WdfIrqPolicyOneCloseProcessor = 2,
    WdfIrqPolicyAllProcessorsInMachine = 3,
    WdfIrqPolicySpecifiedProcessors = 4,
    WdfIrqPolicySpreadMessagesAcrossAllProcessors = 5
};

typedef enum _WDF_INTERRUPT_PRIORITY {
    WdfIrqPriorityUndefined = 0,
    WdfIrqPriorityLow = 1,
    WdfIrqPriorityNormal = 2,
    WdfIrqPriorityHigh = 3
};

typedef enum _WDF_IO_FORWARD_PROGRESS_ACTION {
    WdfIoForwardProgressActionInvalid = 0,
    WdfIoForwardProgressActionFailRequest = 1,
    WdfIoForwardProgressActionUseReservedRequest = 2
};

typedef enum _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY {
    WdfIoForwardProgressInvalidPolicy = 0,
    WdfIoForwardProgressReservedPolicyAlwaysUseReservedRequest = 1,
    WdfIoForwardProgressReservedPolicyUseExamine = 2,
    WdfIoForwardProgressReservedPolicyPagingIO = 3
};

typedef enum _WDF_IO_QUEUE_DISPATCH_TYPE {
    WdfIoQueueDispatchInvalid = 0,
    WdfIoQueueDispatchSequential = 1,
    WdfIoQueueDispatchParallel = 2,
    WdfIoQueueDispatchManual = 3,
    WdfIoQueueDispatchMax = 4
};

typedef enum _WDF_IO_QUEUE_STATE {
    WdfIoQueueAcceptRequests = 1,
    WdfIoQueueDispatchRequests = 2,
    WdfIoQueueNoRequests = 4,
    WdfIoQueueDriverNoRequests = 8,
    WdfIoQueuePnpHeld = 16
};

typedef enum _WDF_IO_TARGET_OPEN_TYPE {
    WdfIoTargetOpenUndefined = 0,
    WdfIoTargetOpenUseExistingDevice = 1,
    WdfIoTargetOpenByName = 2,
    WdfIoTargetOpenReopen = 3,
    WdfIoTargetOpenLocalTargetByFile = 4
};

typedef enum _WDF_IO_TARGET_PURGE_IO_ACTION {
    WdfIoTargetPurgeIoUndefined = 0,
    WdfIoTargetPurgeIoAndWait = 1,
    WdfIoTargetPurgeIo = 2
};

typedef enum _WDF_IO_TARGET_SENT_IO_ACTION {
    WdfIoTargetSentIoUndefined = 0,
    WdfIoTargetCancelSentIo = 1,
    WdfIoTargetWaitForSentIoToComplete = 2,
    WdfIoTargetLeaveSentIoPending = 3
};

typedef enum _WDF_IO_TARGET_STATE {
    WdfIoTargetStateUndefined = 0,
    WdfIoTargetStarted = 1,
    WdfIoTargetStopped = 2,
    WdfIoTargetClosedForQueryRemove = 3,
    WdfIoTargetClosed = 4,
    WdfIoTargetDeleted = 5,
    WdfIoTargetPurged = 6
};

typedef enum _WDF_MEMORY_DESCRIPTOR_TYPE {
    WdfMemoryDescriptorTypeInvalid = 0,
    WdfMemoryDescriptorTypeBuffer = 1,
    WdfMemoryDescriptorTypeMdl = 2,
    WdfMemoryDescriptorTypeHandle = 3
};

typedef enum _WDF_POWER_DEVICE_STATE {
    WdfPowerDeviceInvalid = 0,
    WdfPowerDeviceD0 = 1,
    WdfPowerDeviceD1 = 2,
    WdfPowerDeviceD2 = 3,
    WdfPowerDeviceD3 = 4,
    WdfPowerDeviceD3Final = 5,
    WdfPowerDevicePrepareForHibernation = 6,
    WdfPowerDeviceMaximum = 7
};

typedef enum _WDF_POWER_POLICY_IDLE_TIMEOUT_CONSTANTS {
    IdleTimeoutDefaultConstant = 0
};

typedef enum _WDF_POWER_POLICY_IDLE_TIMEOUT_TYPE {
    DriverManagedIdleTimeout = 0,
    SystemManagedIdleTimeout = 1,
    SystemManagedIdleTimeoutWithHint = 2
};

typedef enum _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES {
    IdleCapsInvalid = 0,
    IdleCannotWakeFromS0 = 1,
    IdleCanWakeFromS0 = 2,
    IdleUsbSelectiveSuspend = 3
};

typedef enum _WDF_POWER_POLICY_S0_IDLE_USER_CONTROL {
    IdleUserControlInvalid = 0,
    IdleDoNotAllowUserControl = 1,
    IdleAllowUserControl = 2
};

typedef enum _WDF_POWER_POLICY_SX_WAKE_USER_CONTROL {
    WakeUserControlInvalid = 0,
    WakeDoNotAllowUserControl = 1,
    WakeAllowUserControl = 2
};

typedef enum _WDF_RELEASE_HARDWARE_ORDER_ON_FAILURE {
    WdfReleaseHardwareOrderOnFailureInvalid = 0,
    WdfReleaseHardwareOrderOnFailureEarly = 1,
    WdfReleaseHardwareOrderOnFailureAfterDescendants = 2
};

typedef enum _WDF_REQUEST_FORWARD_OPTIONS_FLAGS {
    WDF_REQUEST_FORWARD_OPTION_SEND_AND_FORGET = 1
};

typedef enum _WDF_REQUEST_REUSE_FLAGS {
    WDF_REQUEST_REUSE_NO_FLAGS = 0,
    WDF_REQUEST_REUSE_SET_NEW_IRP = 1
};

typedef enum _WDF_REQUEST_SEND_OPTIONS_FLAGS {
    WDF_REQUEST_SEND_OPTION_TIMEOUT = 1,
    WDF_REQUEST_SEND_OPTION_SYNCHRONOUS = 2,
    WDF_REQUEST_SEND_OPTION_IGNORE_TARGET_STATE = 4,
    WDF_REQUEST_SEND_OPTION_SEND_AND_FORGET = 8,
    WDF_REQUEST_SEND_OPTION_IMPERSONATE_CLIENT = 0x10000,
    WDF_REQUEST_SEND_OPTION_IMPERSONATION_IGNORE_FAILURE = 0x20000
};

typedef enum _WDF_REQUEST_TYPE {
    WdfRequestTypeCreate = 0,
    WdfRequestTypeCreateNamedPipe = 1,
    WdfRequestTypeClose = 2,
    WdfRequestTypeRead = 3,
    WdfRequestTypeWrite = 4,
    WdfRequestTypeQueryInformation = 5,
    WdfRequestTypeSetInformation = 6,
    WdfRequestTypeQueryEA = 7,
    WdfRequestTypeSetEA = 8,
    WdfRequestTypeFlushBuffers = 9,
    WdfRequestTypeQueryVolumeInformation = 10,
    WdfRequestTypeSetVolumeInformation = 11,
    WdfRequestTypeDirectoryControl = 12,
    WdfRequestTypeFileSystemControl = 13,
    WdfRequestTypeDeviceControl = 14,
    WdfRequestTypeDeviceControlInternal = 15,
    WdfRequestTypeShutdown = 16,
    WdfRequestTypeLockControl = 17,
    WdfRequestTypeCleanup = 18,
    WdfRequestTypeCreateMailSlot = 19,
    WdfRequestTypeQuerySecurity = 20,
    WdfRequestTypeSetSecurity = 21,
    WdfRequestTypePower = 22,
    WdfRequestTypeSystemControl = 23,
    WdfRequestTypeDeviceChange = 24,
    WdfRequestTypeQueryQuota = 25,
    WdfRequestTypeSetQuota = 26,
    WdfRequestTypePnp = 27,
    WdfRequestTypeOther = 28,
    WdfRequestTypeUsb = 64,
    WdfRequestTypeNoFormat = 255,
    WdfRequestTypeMax = 256
};

typedef enum _WDF_RETRIEVE_CHILD_FLAGS {
    WdfRetrieveUnspecified = 0,
    WdfRetrievePresentChildren = 1,
    WdfRetrieveMissingChildren = 2,
    WdfRetrievePendingChildren = 4,
    WdfRetrieveAddedChildren = 5,
    WdfRetrieveAllChildren = 7
};

typedef enum _WDF_SPECIAL_FILE_TYPE {
    WdfSpecialFileUndefined = 0,
    WdfSpecialFilePaging = 1,
    WdfSpecialFileHibernation = 2,
    WdfSpecialFileDump = 3,
    WdfSpecialFileBoot = 4,
    WdfSpecialFileMax = 5
};

typedef enum _WDF_STATE_NOTIFICATION_TYPE {
    StateNotificationInvalid = 0,
    StateNotificationEnterState = 1,
    StateNotificationPostProcessState = 2,
    StateNotificationLeaveState = 4,
    StateNotificationAllStates = 7
};

typedef enum _WDF_SYNCHRONIZATION_SCOPE {
    WdfSynchronizationScopeInvalid = 0,
    WdfSynchronizationScopeInheritFromParent = 1,
    WdfSynchronizationScopeDevice = 2,
    WdfSynchronizationScopeQueue = 3,
    WdfSynchronizationScopeNone = 4
};

typedef enum _WDF_TRI_STATE {
    WdfFalse = 0,
    WdfTrue = 1,
    WdfUseDefault = 2
};

typedef enum _WDF_WMI_PROVIDER_CONTROL {
    WdfWmiControlInvalid = 0,
    WdfWmiEventControl = 1,
    WdfWmiInstanceControl = 2
};

typedef enum _WDF_WMI_PROVIDER_FLAGS {
    WdfWmiProviderEventOnly = 1,
    WdfWmiProviderExpensive = 2,
    WdfWmiProviderTracing = 4,
    WdfWmiProviderValidFlags = 7
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

typedef enum __vc_attributes::aggregatableAttribute::type_e {
    never = 0,
    allowed = 1,
    always = 2
};

typedef enum __vc_attributes::event_receiverAttribute::type_e {
    native = 0,
    com = 1,
    managed = 2
};

typedef enum __vc_attributes::event_sourceAttribute::optimize_e {
    speed = 0,
    size = 1
};

typedef enum __vc_attributes::event_sourceAttribute::type_e {
    native = 0,
    com = 1,
    managed = 2
};

typedef enum __vc_attributes::helper_attributes::usageAttribute::usage_e {
    eAnyUsage = 0,
    eCoClassUsage = 1,
    eCOMInterfaceUsage = 2,
    eInterfaceUsage = 6,
    eMemberUsage = 8,
    eMethodUsage = 16,
    eInterfaceMethodUsage = 32,
    eInterfaceMemberUsage = 64,
    eCoClassMemberUsage = 128,
    eCoClassMethodUsage = 256,
    eGlobalMethodUsage = 768,
    eGlobalDataUsage = 1024,
    eClassUsage = 2048,
    eInterfaceParameterUsage = 4096,
    eMethodParameterUsage = 12288,
    eIDLModuleUsage = 16384,
    eAnonymousUsage = 0x8000,
    eTypedefUsage = 0x10000,
    eUnionUsage = 0x20000,
    eEnumUsage = 0x40000,
    eDefineTagUsage = 0x80000,
    eStructUsage = 0x100000,
    eLocalUsage = 0x200000,
    ePropertyUsage = 0x400000,
    eEventUsage = 0x800000,
    eTemplateUsage = 0x1000000,
    eModuleUsage = 0x1000000,
    eIllegalUsage = 0x2000000,
    eAsynchronousUsage = 0x4000000,
    eAnyIDLUsage = 0x3f7fff
};

typedef enum __vc_attributes::helper_attributes::v1_alttypeAttribute::type_e {
    eBoolean = 0,
    eInteger = 1,
    eFloat = 2,
    eDouble = 3
};

typedef enum __vc_attributes::moduleAttribute::type_e {
    dll = 1,
    exe = 2,
    service = 3,
    unspecified = 4,
    EXE = 2,
    SERVICE = 3
};

typedef enum __vc_attributes::threadingAttribute::threading_e {
    apartment = 1,
    single = 2,
    free = 3,
    neutral = 4,
    both = 5
};

typedef enum optimize_e {
    speed = 0,
    size = 1
};

typedef enum threading_e {
    apartment = 1,
    single = 2,
    free = 3,
    neutral = 4,
    both = 5
};

typedef enum type_e {
    eBoolean = 0,
    eInteger = 1,
    eFloat = 2,
    eDouble = 3
};

typedef enum usage_e {
    eAnyUsage = 0,
    eCoClassUsage = 1,
    eCOMInterfaceUsage = 2,
    eInterfaceUsage = 6,
    eMemberUsage = 8,
    eMethodUsage = 16,
    eInterfaceMethodUsage = 32,
    eInterfaceMemberUsage = 64,
    eCoClassMemberUsage = 128,
    eCoClassMethodUsage = 256,
    eGlobalMethodUsage = 768,
    eGlobalDataUsage = 1024,
    eClassUsage = 2048,
    eInterfaceParameterUsage = 4096,
    eMethodParameterUsage = 12288,
    eIDLModuleUsage = 16384,
    eAnonymousUsage = 0x8000,
    eTypedefUsage = 0x10000,
    eUnionUsage = 0x20000,
    eEnumUsage = 0x40000,
    eDefineTagUsage = 0x80000,
    eStructUsage = 0x100000,
    eLocalUsage = 0x200000,
    ePropertyUsage = 0x400000,
    eEventUsage = 0x800000,
    eTemplateUsage = 0x1000000,
    eModuleUsage = 0x1000000,
    eIllegalUsage = 0x2000000,
    eAsynchronousUsage = 0x4000000,
    eAnyIDLUsage = 0x3f7fff
};

BUS1394_CLASS_GUID;
ExDefaultMdlProtection;
ExDefaultNonPagedPoolType;
GUID_BUS_INTERFACE_STANDARD;
GUID_BUS_TYPE_1394;
GUID_NULL;
MS1394_BusDriverInformationGuid;
MS1394_BusErrorInformationGuid;
MS1394_BusInformationGuid;
MS1394_DeviceInformationGuid;
MS1394_PortDriverInformationGuid;
MS1394_PortErrorInformationGuid;
SDDL_DEVOBJ_SYS_ALL_ADM_ALL;
SDDL_DEVOBJ_SYS_ALL_ADM_ALL_buffer;
WDF_AsyncRx_TYPE_INFO;
WDF_AsyncTx_TYPE_INFO;
WDF_ChildDevice_TYPE_INFO;
WDF_ConfigRom_TYPE_INFO;
WDF_DMATRANSACTION_DATA_TYPE_INFO;
WDF_Dispatch_TYPE_INFO;
WDF_Interrupt_TYPE_INFO;
WDF_IoWorkers_TYPE_INFO;
WDF_IsochRx_TYPE_INFO;
WDF_IsochTx_TYPE_INFO;
WDF_Isoch_TYPE_INFO;
WDF_NODE_DEVICE_EXTENSION_TYPE_INFO;
WDF_OhciDevice_TYPE_INFO;
WDF_OhciDriver_TYPE_INFO;
WDF_Phy_TYPE_INFO;
WDF_Register_TYPE_INFO;
WDF_Topology_TYPE_INFO;
WDF_VirtualDevices_TYPE_INFO;
WDF_Wmi_TYPE_INFO;
WPPTraceSuite;
WPP_0aed90270f593ccbfddf649c93eaa3e6_Traceguids;
WPP_0b24783946b13bc5608cd7352fdff3e9_Traceguids;
WPP_1b402b3725fd33e8a20826ad591d0e06_Traceguids;
WPP_2302bbcc733234378f15b98e93dca675_Traceguids;
WPP_2c250ec5d041339d4719a278a8a108a4_Traceguids;
WPP_4ed564d4685c35abd32fe1d73e648c9b_Traceguids;
WPP_4fcb1b578e8d33484823d4f083312511_Traceguids;
WPP_52b764f19a9c339cbe5ee7de58e87da1_Traceguids;
WPP_5b81009bbfe63f491027756cd55d6a50_Traceguids;
WPP_75a64b6002e73124fcfa84fb498e5087_Traceguids;
WPP_7734e8751a9833f14605c37998b76e98_Traceguids;
WPP_7cb485d653e5386d2f47b43d32813b3d_Traceguids;
WPP_8308a052127f3d4f28275c6603ded734_Traceguids;
WPP_8ea3128df1de3552719c1e2ef4809ff2_Traceguids;
WPP_9cc43b8b390d3e7e76a0a3b0c760ebd9_Traceguids;
WPP_GLOBAL_Control;
WPP_MAIN_CB;
WPP_ThisDir_CTLGUID_1394OHCI;
WPP_c5d3c730672d3f74da186edbdfe13ff6_Traceguids;
WPP_e7a489acfd4b3a18536c6a2fd7e0fbe8_Traceguids;
WdfBindInfo;
WdfDriverGlobals;
WdfFunctions_01015;
_IMPORT_DESCRIPTOR_HAL;
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
_imp_ExAllocatePoolWithTag;
_imp_ExDeleteNPagedLookasideList;
_imp_ExFreePoolWithTag;
_imp_ExInitializeNPagedLookasideList;
_imp_ExQueryDepthSList;
_imp_ExpInterlockedPopEntrySList;
_imp_ExpInterlockedPushEntrySList;
_imp_IoAllocateMdl;
_imp_IoBuildPartialMdl;
_imp_IoFreeMdl;
_imp_IoGetDmaAdapter;
_imp_IoWMIRegistrationControl;
_imp_KeAcquireInStackQueuedSpinLock;
_imp_KeCancelTimer;
_imp_KeDelayExecutionThread;
_imp_KeInitializeDpc;
_imp_KeInitializeSpinLock;
_imp_KeInitializeTimer;
_imp_KeReleaseInStackQueuedSpinLock;
_imp_KeSetEvent;
_imp_KeSetTimer;
_imp_KeStallExecutionProcessor;
_imp_MmBuildMdlForNonPagedPool;
_imp_MmGetSystemRoutineAddress;
_imp_MmMapIoSpaceEx;
_imp_MmMapLockedPagesSpecifyCache;
_imp_MmUnmapIoSpace;
_imp_RtlAnsiStringToUnicodeString;
_imp_RtlAppendUnicodeStringToString;
_imp_RtlAppendUnicodeToString;
_imp_RtlClearAllBits;
_imp_RtlClearBit;
_imp_RtlCompareUnicodeString;
_imp_RtlCopyUnicodeString;
_imp_RtlFindClearBitsAndSet;
_imp_RtlFreeUnicodeString;
_imp_RtlGetVersion;
_imp_RtlInitAnsiString;
_imp_RtlInitUnicodeString;
_imp_RtlInitializeBitMap;
_imp_RtlStringFromGUID;
_imp_WdfVersionBind;
_imp_WdfVersionBindClass;
_imp_WdfVersionUnbind;
_imp_WdfVersionUnbindClass;
_imp_WppAutoLogStart;
_imp_WppAutoLogStop;
_imp_WppAutoLogTrace;
_imp_ZwEnumerateKey;
_imp___chkstk;
_imp__vsnwprintf;
_imp__wcsicmp;
_imp_imp_WppRecorderReplay;
_security_cookie;
_security_cookie_complement;
load_config_used;
pfnEtwRegisterClassicProvider;
pfnEtwUnregister;
pfnWppGetVersion;
pfnWppQueryTraceInformation;
pfnWppTraceMessage;
HAL_NULL_THUNK_DATA;
WDFLDR_NULL_THUNK_DATA;
WppRecorder_NULL_THUNK_DATA;
ntoskrnl_NULL_THUNK_DATA;

AsyncRx::AllocateCommonBuffer();
AsyncRx::AllocateScatterGather();
AsyncRx::AllocateVirtualMapping();
AsyncRx::BuildNotificationData();
AsyncRx::BusResetHandler();
AsyncRx::Create();
AsyncRx::D0Entry();
AsyncRx::FindAddressMapping();
AsyncRx::FindAvailableAddressRange();
AsyncRx::FreeNotificationData();
AsyncRx::GetDataBuffer();
AsyncRx::HandleAllocateAddressRange();
AsyncRx::HandleFreeAddressRange();
AsyncRx::HandleReceivePhyPackets();
AsyncRx::HandleReceiveRequestCompleteInt();
AsyncRx::HandleRequest_GetPhysAddrRoutine();
AsyncRx::HandleTransmitResponsePacketInt();
AsyncRx::InterruptHandler();
AsyncRx::MappingDataOnList();
AsyncRx::MappingHandler();
AsyncRx::Prepare();
AsyncRx::ProcessLockRequest();
AsyncRx::ProcessLockTransaction();
AsyncRx::ProcessPhyPacket();
AsyncRx::ProcessReadRequestBlock();
AsyncRx::ProcessReadRequestQuadlet();
AsyncRx::ProcessWriteRequestBlock();
AsyncRx::ProcessWriteRequestQuadlet();
AsyncRx::Release();
AsyncRx::SetInitialMappingData();
AsyncRx::SetPhysicalAccess();
AsyncRx::SetTxRunBit();
AsyncRx::StateMachine();
AsyncRx::TimeoutHandler();
AsyncRx::UpdateMappingData();
AsyncRx::WdfEvtCleanupCallback();
AsyncRx::WdfEvtIoInternalDeviceControl();
AsyncRx::WdfEvtNotificationDpc();
AsyncRx::WdfEvtPhyNotificationDpc();
AsyncRx::WdfEvtProgramAsyncReadResponseDma();
AsyncRx::WdfEvtProgramAsyncRxDma();
AsyncTx::AllocateTxWorker();
AsyncTx::BusResetHandler();
AsyncTx::Create();
AsyncTx::D0Exit();
AsyncTx::Free_tLabel();
AsyncTx::GetTxWorker();
AsyncTx::Get_tLabel();
AsyncTx::HandleAsyncLock();
AsyncTx::HandleAsyncRead();
AsyncTx::HandleAsyncStream();
AsyncTx::HandleAsyncWrite();
AsyncTx::HandleReceiveResponsePacketInt();
AsyncTx::HandleSendPhyConfigPacket();
AsyncTx::HandleSendPhyPacket();
AsyncTx::HandleTransmitRequestCompleteInt();
AsyncTx::InterruptHandler();
AsyncTx::Prepare();
AsyncTx::ProcessReadResponseQuadlet();
AsyncTx::ProcessResponseBlock();
AsyncTx::ProcessTxWorkerData();
AsyncTx::ProcessWriteResponse();
AsyncTx::SetTxRunBit();
AsyncTx::StateMachine();
AsyncTx::TimeoutHandler();
AsyncTx::VerifyGenerationCount();
AsyncTx::WdfEvtCleanupCallback();
AsyncTx::WdfEvtIoInternalDeviceControl();
AsyncTx::WdfEvtProgramAsyncTxDma();
AsyncTx::WdmTimerDpc();
BaseClass::Bus1394CalculateCRC();
ChildDevice::CreatePhysicalDeviceCompatIds();
ChildDevice::DispatchAsyncLockRequest();
ChildDevice::DispatchAsyncReadRequest();
ChildDevice::DispatchAsyncStreamRequest();
ChildDevice::DispatchAsyncWriteRequest();
ChildDevice::DispatchBusResetRequest();
ChildDevice::DispatchGetLocalHostInfoRequest();
ChildDevice::DispatchIrbRequest();
ChildDevice::GetBlockSizeFromSpeed();
ChildDevice::HandleBusResetNotificationRequest();
ChildDevice::HandleGetAddrFromDeviceObject();
ChildDevice::HandleGetConfigRom();
ChildDevice::HandleGetConfigurationInfo();
ChildDevice::HandleGetGenerationCount();
ChildDevice::HandleGetSpeedBetweenDevices();
ChildDevice::HandleIrbRequest();
ChildDevice::HandleSetDeviceXmitProperties();
ChildDevice::InitializeWmi();
ChildDevice::LeafTextToUnicodeString();
ChildDevice::SetNodeDeviceExtension();
ChildDevice::WdfEvtCleanupCallback();
ChildDevice::WdfEvtCreateChild();
ChildDevice::WdfEvtDeviceD0Entry();
ChildDevice::WdfEvtDeviceD0Exit();
ChildDevice::WdfEvtDeviceReleaseHardware();
ChildDevice::WdfEvtIoInternalDeviceControl();
ChildDevice::WdfEvtWmiInstanceQueryInstance_DeviceInformation();
ConfigRom::AddConfigRomEntry();
ConfigRom::BuildLocalConfigRom();
ConfigRom::Create();
ConfigRom::GetHostConfigRom();
ConfigRom::Prepare();
ConfigRom::RemoveConfigRomEntry();
ConfigRom::SetHostDebugEntry();
ConfigRom::UpdateConfigRom();
ConfigRom::WdfEvtCleanupCallback();
Dispatch::DeregisterApiRequestHandler();
Dispatch::DeregisterIrbRequestHandler();
Dispatch::DispatchApiRequest();
Dispatch::DispatchIrbRequest();
Dispatch::RegisterApiRequestHandler();
Dispatch::RegisterIrbRequestHandler();
Dispatch::WdfEvtCleanupCallback();
Dispatch::WdfEvtIoDeviceControl();
Dispatch::WdfEvtIoInternalDeviceControl();
DriverCleanup();
DriverEntry();
FxDriverEntry();
FxDriverEntryWorker();
FxStubBindClasses();
FxStubDriverUnload();
FxStubDriverUnloadCommon();
Interrupt::Create();
Interrupt::WdfEvtCleanupCallback();
Interrupt::WdfEvtInterruptDisable();
Interrupt::WdfEvtInterruptDpc();
Interrupt::WdfEvtInterruptEnable();
Interrupt::WdfEvtInterruptIsr();
IoWorkers::Create();
IoWorkers::D0Entry();
IoWorkers::FlushAndReleaseWdfDmaTransaction();
IoWorkers::FlushTransmitContext();
IoWorkers::FlushWdfDmaTransaction();
IoWorkers::GetReceiveBufferFilledBytes();
IoWorkers::GetWdfDmaTransaction();
IoWorkers::GetWdfDmaTransactionWithLock();
IoWorkers::InsertIoWorkerIntoTransmitContext();
IoWorkers::Prepare();
IoWorkers::ProcessAckType();
IoWorkers::Release();
IoWorkers::ReleaseWdfDmaTransaction();
IoWorkers::RemoveIoWorkerFromTransmitList();
IoWorkers::ResetTransmitContext();
IoWorkers::StartReceiveContext();
IoWorkers::StopReceiveContext();
IoWorkers::StopTransmitContext();
IoWorkers::UpdateReceiveBufferOffset();
IoWorkers::WdfEvtCleanupCallback();
IoWorkers::WdmTimerDpc();
Isoch::CalculateBandwidthUnits();
Isoch::CalculateBytesPerFrameAvailable();
Isoch::ConvertSpeedFlagsToSCode();
Isoch::Create();
Isoch::D0Entry();
Isoch::FindAvailableIsochChannel();
Isoch::FindIsochResource();
Isoch::HandleIsochAllocateBandwidth();
Isoch::HandleIsochAllocateChannel();
Isoch::HandleIsochAllocateResources();
Isoch::HandleIsochAttachBuffers();
Isoch::HandleIsochDetachBuffers();
Isoch::HandleIsochFreeBandwidth();
Isoch::HandleIsochFreeChannel();
Isoch::HandleIsochFreeResources();
Isoch::HandleIsochListen();
Isoch::HandleIsochModifyStreamProperties();
Isoch::HandleIsochQueryResources();
Isoch::HandleIsochSetChannelBandwidth();
Isoch::HandleIsochStop();
Isoch::HandleIsochTalk();
Isoch::IsochAllocateBandwidthCallback();
Isoch::IsochAllocateChannelCallback();
Isoch::IsochFreeBandwidthCallback();
Isoch::IsochFreeChannelCallback();
Isoch::IsochQueryResourcesCallback();
Isoch::IsochSetChannelBandwidthCallback();
Isoch::IsrHandler();
Isoch::Prepare();
Isoch::Release();
Isoch::WdfEvtCleanupCallback();
Isoch::WdfEvtIoInternalDeviceControl();
IsochRx::ClearRunBit();
IsochRx::Create();
IsochRx::HandleIsochAttachBuffers();
IsochRx::HandleIsochDetachBuffers();
IsochRx::HandleIsochListen();
IsochRx::HandleIsochModifyStreamProperties();
IsochRx::HandleIsochStop();
IsochRx::Release();
IsochRx::SetRunBit();
IsochRx::WdfEvtNotificationDpc();
IsochRx::WdfEvtProgramIsochRxDma_BufferFill();
IsochRx::WdfEvtProgramIsochRxDma_DualBuffer();
IsochRx::WdfEvtProgramIsochRxDma_PacketBased();
IsochTx::ClearRunBit();
IsochTx::Create();
IsochTx::HandleIsochAttachBuffers();
IsochTx::HandleIsochDetachBuffers();
IsochTx::HandleIsochModifyStreamProperties();
IsochTx::HandleIsochStop();
IsochTx::HandleIsochTalk();
IsochTx::Release();
IsochTx::SetRunBit();
IsochTx::WdfEvtNotificationDpc();
IsochTx::WdfEvtProgramIsochTxDma();
OhciDevice::CreateObjects();
OhciDevice::PrepareObjects();
OhciDevice::ReleaseObjects();
OhciDevice::SetDeviceFlags();
OhciDevice::SetDeviceFlagsFromRegistry();
OhciDevice::StartObjects();
OhciDevice::StartObjectsPostInterruptsEnabled();
OhciDevice::StopObjects();
OhciDevice::WdfEvtDeviceAdd();
OhciDevice::WdfEvtDeviceArmWakeFromS0();
OhciDevice::WdfEvtDeviceD0Entry();
OhciDevice::WdfEvtDeviceD0EntryPostInterruptsEnabled();
OhciDevice::WdfEvtDeviceD0Exit();
OhciDevice::WdfEvtDevicePrepareHardware();
OhciDevice::WdfEvtDeviceReleaseHardware();
OhciDevice::WdfEvtDeviceWakeFromS0Triggered();
OhciDriver::DeRegisterDevice();
OhciDriver::RegisterDevice();
Phy::Create();
Phy::D0Entry();
Phy::Enable1394PowerMgmt();
Phy::ForceRootCallback();
Phy::HandleIrbRequest_BusReset();
Phy::IssueBusReset();
Phy::IssueBusResetWithLock();
Phy::Prepare();
Phy::ReadRegister();
Phy::RetrievePhyData();
Phy::WdfEvtCleanupCallback();
Phy::WriteRegister();
Register::BusManagementsCsrs();
Register::Create();
Register::D0Entry();
Register::ParseResources();
Register::WdfEvtCleanupCallback();
RtlGetVersionResource();
RtlStringCbPrintfW();
RtlUnicodeStringPrintf();
RtlpCheckBounds();
RtlpDetermineVersionResourceValueLengthInBytes();
RtlpFindNamedVerChild();
RtlpFindVersionResource();
RtlpGetFirstVerChild();
RtlpGetNextVerSibling();
RtlpUntrustedStringLengthW();
Topology::BuildMapsAndPostEnumProcessing();
Topology::BuildTopologyMap();
Topology::Bus1394FindDeepestPath();
Topology::Bus1394FindLongestPath();
Topology::Bus1394PnpDetectDuplicateModelText();
Topology::Bus1394PnpEnumDevices();
Topology::Bus1394PnpEnumUnitDependentDirectory();
Topology::Create();
Topology::CreateNodeData();
Topology::D0Entry();
Topology::EnumerateAddToExistingNode();
Topology::EnumerateAsyncCallback();
Topology::EnumerateCleanStaleNodeList();
Topology::EnumerateConfigRomBlock();
Topology::EnumerateConfigRomHeader();
Topology::EnumerateFindExistingNode();
Topology::EnumerateFinished();
Topology::EnumerateMarkStaleDevicesAsRemoved();
Topology::EnumerateNodes();
Topology::EnumerateValidateConfigRom();
Topology::ForceRoot();
Topology::ForceRootCallback();
Topology::GetBusManagerNodeId();
Topology::HandleIrbRequest_GetAddrFromDeviceObject();
Topology::HandleIrbRequest_GetGenerationCount();
Topology::HandleIrbRequest_GetLocalHostInfo();
Topology::HandleIrbRequest_SetLocalHostProperties();
Topology::InterruptHandler();
Topology::NotifyAndUpdateChildDevice();
Topology::OptimizeGapCount();
Topology::OptimizeGapCountCallback();
Topology::Prepare();
Topology::Release();
Topology::RetrieveNodeSpeedFromSelfId();
Topology::RetrieveTopologyMap();
Topology::WdfEvtCleanupCallback();
VirtualDevices::AddVirtualDevice();
VirtualDevices::Create();
VirtualDevices::CreateVirtualDeviceRegistryKeys();
VirtualDevices::DeleteVirtualDeviceRegistryKeys();
VirtualDevices::EnumerateVirtualDevices();
VirtualDevices::HandleApiRequest();
VirtualDevices::HandleBusReset();
VirtualDevices::NotifyChildrenOfBusReset();
VirtualDevices::OpenVirtualDeviceRegistryStore();
VirtualDevices::Prepare();
VirtualDevices::RemoveVirtualDevice();
VirtualDevices::UnicodeStringToLargeInteger();
VirtualDevices::VerifyApiBuffer();
VirtualDevices::WdfEvtCleanupCallback();
WPP_RECORDER_SF_();
WPP_RECORDER_SF_D();
WPP_RECORDER_SF_DD();
WPP_RECORDER_SF_DDD();
WPP_RECORDER_SF_DDDD();
WPP_RECORDER_SF_DDDDD();
WPP_RECORDER_SF_DDd();
WPP_RECORDER_SF_DDddddd();
WPP_RECORDER_SF_DSi();
WPP_RECORDER_SF_Dd();
WPP_RECORDER_SF_DdD();
WPP_RECORDER_SF_Ddd();
WPP_RECORDER_SF_DddD();
WPP_RECORDER_SF_Dq();
WPP_RECORDER_SF_DqdD();
WPP_RECORDER_SF_S();
WPP_RECORDER_SF_Si();
WPP_RECORDER_SF_d();
WPP_RECORDER_SF_dD();
WPP_RECORDER_SF_dDD();
WPP_RECORDER_SF_dDDD();
WPP_RECORDER_SF_dDDid();
WPP_RECORDER_SF_dDd();
WPP_RECORDER_SF_dd();
WPP_RECORDER_SF_ddD();
WPP_RECORDER_SF_ddDD();
WPP_RECORDER_SF_ddDDD();
WPP_RECORDER_SF_ddDd();
WPP_RECORDER_SF_ddd();
WPP_RECORDER_SF_dddDDD();
WPP_RECORDER_SF_dddDDDD();
WPP_RECORDER_SF_dddDDdD();
WPP_RECORDER_SF_dddDDdd();
WPP_RECORDER_SF_dddDDiD();
WPP_RECORDER_SF_dddd();
WPP_RECORDER_SF_ddddD();
WPP_RECORDER_SF_ddddd();
WPP_RECORDER_SF_dddddDD();
WPP_RECORDER_SF_dddddDDDD();
WPP_RECORDER_SF_dddddd();
WPP_RECORDER_SF_ddddddd();
WPP_RECORDER_SF_dddddddd();
WPP_RECORDER_SF_dddq();
WPP_RECORDER_SF_dddqDDiD();
WPP_RECORDER_SF_dddqDDiDdd();
WPP_RECORDER_SF_dddqdqd();
WPP_RECORDER_SF_dddqq();
WPP_RECORDER_SF_dddqqq();
WPP_RECORDER_SF_dddqqqDDdD();
WPP_RECORDER_SF_dddqqqDDdDd();
WPP_RECORDER_SF_ddi();
WPP_RECORDER_SF_ddq();
WPP_RECORDER_SF_ddqDDdq();
WPP_RECORDER_SF_ddqq();
WPP_RECORDER_SF_ddss();
WPP_RECORDER_SF_dq();
WPP_RECORDER_SF_dqDd();
WPP_RECORDER_SF_dqd();
WPP_RECORDER_SF_dqi();
WPP_RECORDER_SF_dqq();
WPP_RECORDER_SF_dqqDD();
WPP_RECORDER_SF_dqqDDD();
WPP_RECORDER_SF_dqqdd();
WPP_RECORDER_SF_dqqqi();
WPP_RECORDER_SF_dsssd();
WPP_RECORDER_SF_dsssds();
WPP_RECORDER_SF_dssss();
WPP_RECORDER_SF_dsssss();
WPP_RECORDER_SF_q();
WPP_RECORDER_SF_qD();
WPP_RECORDER_SF_qDD();
WPP_RECORDER_SF_qDDD();
WPP_RECORDER_SF_qDDDd();
WPP_RECORDER_SF_qDDd();
WPP_RECORDER_SF_qDDqqq();
WPP_RECORDER_SF_qDd();
WPP_RECORDER_SF_qDddD();
WPP_RECORDER_SF_qd();
WPP_RECORDER_SF_qdDD();
WPP_RECORDER_SF_qdd();
WPP_RECORDER_SF_qddD();
WPP_RECORDER_SF_qdq();
WPP_RECORDER_SF_qdqd();
WPP_RECORDER_SF_qdqqq();
WPP_RECORDER_SF_qi();
WPP_RECORDER_SF_qq();
WPP_RECORDER_SF_qqDDd();
WPP_RECORDER_SF_qqDd();
WPP_RECORDER_SF_qqd();
WPP_RECORDER_SF_qqdD();
WPP_RECORDER_SF_qqqd();
WPP_RECORDER_SF_s();
Wmi::Create();
Wmi::Prepare();
Wmi::WdfEvtCleanupCallback();
Wmi::WdfEvtWmiInstanceQueryInstance_BusDriverInformation();
Wmi::WdfEvtWmiInstanceQueryInstance_BusErrorInformation();
Wmi::WdfEvtWmiInstanceQueryInstance_BusInformation();
Wmi::WdfEvtWmiInstanceQueryInstance_PortDriverInformation();
Wmi::WdfEvtWmiInstanceQueryInstance_PortErrorInformation();
WppClassicProviderCallback();
WppCleanupKm();
WppInitKm();
WppLoadTracingSupport();
WppTraceCallback();
_GSHandlerCheck();
_GSHandlerCheckCommon();
_chkstk();
_report_gsfailure();
_security_check_cookie();
_security_init_cookie();
guard_check_icall_nop();
guard_dispatch_icall_nop();
memcmp();
memcpy();
memmove();
memset();
