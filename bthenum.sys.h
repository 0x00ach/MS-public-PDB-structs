struct FEATURE_ERROR;
struct FEATURE_LOGGED_TRAITS;
struct FEATURE_STATE_CHANGE_SUBSCRIPTION__;
struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct SPIN_LOCK;
struct _ACCESS_STATE;
struct _BTHENUM_FDO_DEVICE_EXTENSION;
struct _BTHENUM_GLOBALS;
struct _BTHENUM_PDO_DEVICE_EXTENSION;
struct _BTH_DEVICE_INFO;
struct _BTH_DEVICE_INFO_V2;
struct _BTH_DEVICE_INFO_V3;
struct _BTH_ENUMERATOR_INFO;
struct _BTH_ENUMERATOR_INTERFACE;
struct _BTH_LOCAL_RADIO_INFO;
struct _BTH_RADIO_INFO;
struct _BTH_WW_FUNCTION_CONTEXT;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _CM_RESOURCE_LIST;
struct _COMPRESSED_DATA_INFO;
struct _COUNTER;
struct _DEVICE_CAPABILITIES;
struct _DEVICE_OBJECT;
struct _DEVICE_OBJECT_POWER_EXTENSION;
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
struct _EPROCESS;
struct _ERESOURCE;
struct _ETHREAD;
struct _EVENT_DATA_DESCRIPTOR;
struct _EVENT_DESCRIPTOR;
struct _EVENT_FILTER_DESCRIPTOR;
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
struct _IO_QUEUE;
struct _IO_RESOURCE_DESCRIPTOR;
struct _IO_RESOURCE_LIST;
struct _IO_RESOURCE_REQUIREMENTS_LIST;
struct _IO_SECURITY_CONTEXT;
struct _IO_STACK_LOCATION;
struct _IO_STATUS_BLOCK;
struct _IO_TIMER;
struct _IRP;
struct _IRP_LIST;
struct _KAPC;
struct _KDEVICE_QUEUE;
struct _KDEVICE_QUEUE_ENTRY;
struct _KDPC;
struct _KEVENT;
struct _KFLOATING_SAVE;
struct _KTHREAD;
struct _LIST_ENTRY;
struct _LOCKED_LIST;
struct _LOOKASIDE_LIST_EX;
struct _LUID;
struct _LUID_AND_ATTRIBUTES;
struct _MAILSLOT_CREATE_PARAMETERS;
struct _MCGEN_TRACE_CONTEXT;
struct _MDL;
struct _NAMED_PIPE_CREATE_PARAMETERS;
struct _NPAGED_LOOKASIDE_LIST;
struct _OWNER_ENTRY;
struct _PAGED_LOOKASIDE_LIST;
struct _POWER_SEQUENCE;
struct _PRIVILEGE_SET;
struct _RTL_AVL_TREE;
struct _RTL_BALANCED_NODE;
struct _RTL_BITMAP;
struct _RTL_QUERY_REGISTRY_TABLE;
struct _RTL_RB_TREE;
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
struct _TlgProviderMetadata_t;
struct _TlgProvider_t;
struct _TraceLoggingMetadata_t;
struct _UNICODE_STRING;
struct _VPB;
struct _WAIT_CONTEXT_BLOCK;
struct _WNF_STATE_NAME;
struct _WNF_TYPE_ID;
struct _WORK_QUEUE_ITEM;
struct __WIL__WNF_STATE_NAME;
struct __WIL__WNF_TYPE_ID;
struct __WIL__WNF_USER_SUBSCRIPTION;
struct _wil_details_UsageSubscriptionData;
struct wil_FeatureState;
struct wil_StagingConfig;
struct wil_details_FeatureProperties;
struct wil_details_FeatureTestState;
struct wil_details_FeatureVariantPropertyCache;
struct wil_details_RecordUsageResult;
struct wil_details_SetPropertyCacheUsageContext;
struct wil_details_SetPropertyFlagContext;
struct wil_details_StagingConfig;
struct wil_details_StagingConfigFeature;
struct wil_details_StagingConfigHeader;
struct wil_details_StagingConfigHeaderProperties;
struct wil_details_StagingConfigUsageTrigger;
struct wil_details_StagingConfigWnfStateName;
struct wil_details_VariantProperties;

union _LARGE_INTEGER;
union _POWER_STATE;
union _SLIST_HEADER;
union _ULARGE_INTEGER;
union wil_details_FeaturePropertyCache;

enum BTH_LE_DEVICE_CONTAINER_ID_SOURCE;
enum BUS_QUERY_ID_TYPE;
enum BthPolicy;
enum DEVICE_TEXT_TYPE;
enum DMA_COMPLETION_STATUS;
enum FEATURE_CHANGE_TIME;
enum FEATURE_ENABLED_STATE;
enum OOB_DATA_PRESENT;
enum POWER_ACTION;
enum PolicyManager_AllowAdvertising_PolicyValue;
enum PolicyManager_AllowBluetooth_PolicyValue;
enum PolicyManager_AllowConnectableMode_PolicyValue;
enum PolicyManager_AllowDiscoverableMode_PolicyValue;
enum PolicyManager_AllowOutOfBandPairing_PolicyValue;
enum PolicyManager_AllowPrepairing_PolicyValue;
enum PolicyManager_LinkSecurityLevel_PolicyValue;
enum PolicyManager_RequireRestrictedMode_PolicyValue;
enum TlgIn_t;
enum TlgOut_t;
enum _BTH_DEVICE_CONTAINER_ID_SOURCE;
enum _DEVICE_POWER_STATE;
enum _DEVICE_RELATIONS_STATE_VALUE;
enum _DEVICE_RELATION_TYPE;
enum _DEVICE_USAGE_NOTIFICATION_TYPE;
enum _DEVICE_WAKE_DEPTH;
enum _DIRECTORY_NOTIFY_INFORMATION_CLASS;
enum _ENUMERATOR_ACTION;
enum _ENUMERATOR_TYPE;
enum _EVENT_INFO_CLASS;
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
enum _TlgBlob_t;
enum _USER_ACTIVITY_PRESENCE;
enum wil_FeatureChangeTime;
enum wil_FeatureEnabledState;
enum wil_FeatureEnabledStateKind;
enum wil_FeatureEnabledStateOptions;
enum wil_FeatureStage;
enum wil_FeatureStore;
enum wil_FeatureVariantPayloadKind;
enum wil_ReportingKind;
enum wil_UsageReportingMode;
enum wil_VariantReportingKind;
enum wil_details_CachedFeatureEnabledState;
enum wil_details_CachedHasNotificationState;
enum wil_details_FeatureTestStateKind;
enum wil_details_ServiceReportingKind;
enum wil_details_ServiceReportingOptions;
enum wil_details_StagingConfigFeatureFields;

typedef struct FEATURE_ERROR {
    HRESULT hr;
    USHORT lineNumber;
    PCHAR file;
    PCHAR process;
    PCHAR modulePath;
    ULONG callerReturnAddressOffset;
    PCHAR callerModule;
    PCHAR message;
    USHORT originLineNumber;
    PCHAR originFile;
    PCHAR originModule;
    ULONG originCallerReturnAddressOffset;
    PCHAR originCallerModule;
    PCHAR originName;
};

typedef struct FEATURE_LOGGED_TRAITS {
    USHORT version;
    USHORT baseVersion;
    UCHAR stage;
};

typedef struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ {
    LONG unused;
};

typedef struct LIST_ENTRY32 {
    ULONG Flink;
    ULONG Blink;
};

typedef struct LIST_ENTRY64 {
    ULONG64 Flink;
    ULONG64 Blink;
};

typedef struct SPIN_LOCK {
    ULONG64 SpinLock;
    UCHAR OldIrql;
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

typedef struct _BTHENUM_FDO_DEVICE_EXTENSION {
    ULONG DoType;
    struct _DEVICE_OBJECT *DeviceObject;
    struct _DEVICE_OBJECT *Pdo;
    struct _DEVICE_OBJECT *LowerDevice;
    UCHAR Removing;
    UCHAR Removed;
    UCHAR Started;
    enum _DEVICE_POWER_STATE DeviceState;
    struct _BTH_WW_FUNCTION_CONTEXT SetWWIrpForDevice;
    struct _IRP_LIST WaitWakeIrpList;
    union _ULARGE_INTEGER *WaitWakeCapableCodMasks;
    ULONG NumWaitWakeCapableCodMasks;
    struct _RTL_RB_TREE ChildRbTree;
    struct _KEVENT PassiveChildLock;
    ULONG Protocol;
    struct _UNICODE_STRING DeviceObjectName;
    struct _BTH_ENUMERATOR_INTERFACE *EnumeratorInterface;
    struct _BTH_ENUMERATOR_INTERFACE *DeviceEnumeratorInterface;
    ULONG EnumeratorFlags;
    ULONG TdiPdoCount;
    struct _KEVENT PassiveLock;
    struct _BTH_LOCAL_RADIO_INFO BthLocalRadioInfo;
};

typedef struct _BTHENUM_GLOBALS {
    ULONG DebugFlags;
    ULONG DebugMemoryTag;
    WCHAR DunDeviceBuffer[32];
    struct _UNICODE_STRING DunDevice;
    struct _UNICODE_STRING DriverEntryRegPath;
    struct _DRIVER_OBJECT *gpDriverObject;
    ULONG Instance;
};

typedef struct _BTHENUM_PDO_DEVICE_EXTENSION {
    ULONG DoType;
    struct _DEVICE_OBJECT *ParentFdo;
    struct _DEVICE_OBJECT *Self;
    WCHAR BtAddrStr[13];
    PWCHAR GuidStr;
    PWCHAR DeviceName;
    PWCHAR ServiceName;
    struct _RTL_BALANCED_NODE ChildRbNode;
    struct _DEVICE_CAPABILITIES DeviceCapabilities;
    struct _IRP *ReceivedWWIrp;
    enum _DEVICE_RELATIONS_STATE_VALUE DeviceRelationsState;
    enum _DEVICE_POWER_STATE DeviceState;
    struct _BTH_DEVICE_INFO_V3 DeviceInfo;
    struct _BTH_ENUMERATOR_INFO EnumeratorInfo;
    ULONG HciBypassSupport;
    struct _UNICODE_STRING DeviceInterfaceLinkName;
    struct _UNICODE_STRING SecondaryDeviceInterfaceLinkName;
    UCHAR DeviceEnumerated;
    ULONG ConnectionCount;
};

typedef struct _BTH_DEVICE_INFO {
    ULONG flags;
    ULONG64 address;
    ULONG classOfDevice;
    CHAR name[248];
};

typedef struct _BTH_DEVICE_INFO_V2 {
    ULONG flags;
    ULONG64 address;
    ULONG classOfDevice;
    CHAR name[248];
    LONG RSSI;
    enum _BTH_DEVICE_CONTAINER_ID_SOURCE ContainerIdSource;
    enum BTH_LE_DEVICE_CONTAINER_ID_SOURCE LEContainerIdSource;
    struct _GUID ContainerId;
    struct _GUID LEContainerId;
    UCHAR LEAddressType;
};

typedef struct _BTH_DEVICE_INFO_V3 {
    ULONG flags;
    ULONG64 address;
    ULONG classOfDevice;
    CHAR name[248];
    LONG RSSI;
    enum _BTH_DEVICE_CONTAINER_ID_SOURCE ContainerIdSource;
    enum BTH_LE_DEVICE_CONTAINER_ID_SOURCE LEContainerIdSource;
    struct _GUID ContainerId;
    struct _GUID LEContainerId;
    UCHAR LEAddressType;
    UCHAR eirRecordData[240];
    USHORT LEAppearance;
    CHAR LEName[248];
    union _LARGE_INTEGER LastSeenTimestamp;
    union _LARGE_INTEGER LastConnectedTimestamp;
    USHORT VendorIdSource;
    USHORT VendorId;
    USHORT ProductId;
    USHORT ProductVersion;
};

typedef struct _BTH_ENUMERATOR_INFO {
    enum _ENUMERATOR_TYPE EnumeratorType;
    enum _ENUMERATOR_ACTION Action;
    ULONG Port;
    ULONG Flags;
    struct _GUID Guid;
    ULONG InstanceId;
    WCHAR InstanceIdStr[256];
    USHORT Vid;
    USHORT Pid;
    USHORT Mfg;
    USHORT LocalMfg;
    USHORT VidType;
    WCHAR ServiceName[256];
    CHAR SdpPriLangServiceName[256];
    WCHAR DeviceString[256];
};

typedef struct _BTH_ENUMERATOR_INTERFACE {
    struct _INTERFACE Interface;
    PVOID EnumeratorContext;
    PLONG EnumerateProtocol;
    PVOID EnumerateWWSettings;
    enum _ENUMERATOR_TYPE EnumeratorType;
    PVOID EnumerateFlags;
};

typedef struct _BTH_LOCAL_RADIO_INFO {
    struct _BTH_DEVICE_INFO localInfo;
    ULONG flags;
    USHORT hciRevision;
    UCHAR hciVersion;
    struct _BTH_RADIO_INFO radioInfo;
};

typedef struct _BTH_RADIO_INFO {
    ULONG64 lmpSupportedFeatures;
    USHORT mfg;
    USHORT lmpSubversion;
    UCHAR lmpVersion;
};

typedef struct _BTH_WW_FUNCTION_CONTEXT {
    PVOID Context;
    PVOID Function;
    PVOID ReferenceContext;
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

typedef struct _COUNTER {
    LONG Count;
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

typedef struct _EVENT_FILTER_DESCRIPTOR {
    ULONG64 Ptr;
    ULONG Size;
    ULONG Type;
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

typedef struct _IO_QUEUE {
    struct _IRP_LIST IrpList;
    LONG AbortStatus;
    UCHAR SimpleQueue;
    struct _IRP *CurrentIrp;
    UCHAR Busy;
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

typedef struct _KTHREAD {
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

typedef struct _RTL_QUERY_REGISTRY_TABLE {
    PLONG QueryRoutine;
    ULONG Flags;
    PWCHAR Name;
    PVOID EntryContext;
    ULONG DefaultType;
    PVOID DefaultData;
    ULONG DefaultLength;
};

typedef struct _RTL_RB_TREE {
    struct _RTL_BALANCED_NODE *Root;
    UCHAR Encoded : 1;
    struct _RTL_BALANCED_NODE *Min;
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

typedef struct _WNF_STATE_NAME {
    ULONG Data[2];
};

typedef struct _WNF_TYPE_ID {
    struct _GUID TypeId;
};

typedef struct _WORK_QUEUE_ITEM {
    struct _LIST_ENTRY List;
    PVOID WorkerRoutine;
    PVOID Parameter;
};

typedef struct __WIL__WNF_STATE_NAME {
    ULONG Data[2];
};

typedef struct __WIL__WNF_TYPE_ID {
    struct _GUID TypeId;
};

typedef struct __WIL__WNF_USER_SUBSCRIPTION {
};

typedef struct _wil_details_UsageSubscriptionData {
    ULONG featureId;
    USHORT serviceReportingKind;
};

typedef struct wil_FeatureState {
    enum wil_FeatureEnabledState enabledState;
    UCHAR variant;
    enum wil_FeatureVariantPayloadKind payloadKind;
    ULONG payload;
    LONG hasNotification;
    LONG isVariantConfiguration;
};

typedef struct wil_StagingConfig {
};

typedef struct wil_details_FeatureProperties {
    ULONG enabledState : 2;
    ULONG isVariant : 1;
    ULONG queuedForReporting : 1;
    ULONG hasNotificationState : 2;
    ULONG usageCount : 9;
    ULONG usageCountRepresentsPotential : 1;
    ULONG reportedDeviceUsage : 1;
    ULONG reportedDevicePotential : 1;
    ULONG reportedDeviceOpportunity : 1;
    ULONG reportedDevicePotentialOpportunity : 1;
    ULONG recordedDeviceUsage : 1;
    ULONG recordedDevicePotential : 1;
    ULONG recordedDeviceOpportunity : 1;
    ULONG recordedDevicePotentialOpportunity : 1;
    ULONG opportunityCount : 7;
    ULONG opportunityCountRepresentsPotential : 1;
};

typedef struct wil_details_FeatureTestState {
    enum wil_details_FeatureTestStateKind kind;
    ULONG featureId;
    enum wil_FeatureEnabledState state;
    UCHAR variant;
    ULONG payload;
    struct wil_details_FeatureTestState *next;
};

typedef struct wil_details_FeatureVariantPropertyCache {
    union wil_details_FeaturePropertyCache propertyCache;
    ULONG payloadId;
};

typedef struct wil_details_RecordUsageResult {
    LONG queueBackground;
    ULONG countImmediate;
    enum wil_details_ServiceReportingKind kindImmediate;
    ULONG payloadId;
    LONG ignoredUse;
    LONG isVariantConfiguration;
};

typedef struct wil_details_SetPropertyCacheUsageContext {
    struct wil_details_RecordUsageResult *result;
    enum wil_details_ServiceReportingKind kind;
    ULONG64 addend;
};

typedef struct wil_details_SetPropertyFlagContext {
    struct wil_details_RecordUsageResult *result;
    ULONG flags;
    LONG ignoreReporting;
};

typedef struct wil_details_StagingConfig {
    enum wil_FeatureStore store;
    LONG forUpdate;
    ULONG readChangeStamp;
    UCHAR readVersion;
    LONG modified;
    struct wil_details_StagingConfigHeader *header;
    struct wil_details_StagingConfigFeature *features;
    struct wil_details_StagingConfigUsageTrigger *triggers;
    LONG changedInSession;
    PVOID buffer;
    ULONG64 bufferSize;
    ULONG64 bufferAlloc;
    LONG bufferOwned;
};

typedef struct wil_details_StagingConfigFeature {
    ULONG featureId;
    ULONG changedInSession : 1;
    ULONG isVariantConfig : 1;
    ULONG unused1 : 6;
    ULONG serviceState : 2;
    ULONG userState : 2;
    ULONG testState : 2;
    ULONG unused2 : 2;
    ULONG unused3 : 8;
    ULONG variant : 6;
    ULONG payloadKind : 2;
    ULONG payload;
};

typedef struct wil_details_StagingConfigHeader {
    UCHAR version;
    UCHAR versionMinor;
    USHORT headerSizeBytes;
    USHORT featureCount;
    USHORT featureUsageTriggerCount;
    struct wil_details_StagingConfigHeaderProperties sessionProperties;
    struct wil_details_StagingConfigHeaderProperties properties;
};

typedef struct wil_details_StagingConfigHeaderProperties {
    ULONG ignoreServiceState : 1;
    ULONG ignoreUserState : 1;
    ULONG ignoreTestState : 1;
    ULONG ignoreVariants : 1;
    ULONG unused : 28;
};

typedef struct wil_details_StagingConfigUsageTrigger {
    ULONG featureId;
    struct wil_details_StagingConfigWnfStateName trigger;
    ULONG serviceReportingKind : 16;
    ULONG isVariantConfig : 1;
    ULONG unused : 15;
};

typedef struct wil_details_StagingConfigWnfStateName {
    ULONG Data[2];
};

typedef struct wil_details_VariantProperties {
    ULONG enabledState : 2;
    ULONG isVariant : 1;
    ULONG queuedForReporting : 1;
    ULONG hasNotificationState : 2;
    ULONG recordedDeviceUsage : 1;
    ULONG variant : 6;
    ULONG unused : 19;
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

typedef union wil_details_FeaturePropertyCache {
    struct wil_details_FeatureProperties cache;
    struct wil_details_VariantProperties variant;
    LONG var;
};

typedef enum BTH_LE_DEVICE_CONTAINER_ID_SOURCE {
    LEContainerIdSourceGenerated = 1,
    LEContainerIdSourceGatt = 2
};

typedef enum BUS_QUERY_ID_TYPE {
    BusQueryDeviceID = 0,
    BusQueryHardwareIDs = 1,
    BusQueryCompatibleIDs = 2,
    BusQueryInstanceID = 3,
    BusQueryDeviceSerialNumber = 4,
    BusQueryContainerID = 5
};

typedef enum BthPolicy {
    PolicyManager_AllowBluetooth = 1,
    PolicyManager_AllowDiscoverableMode = 2,
    PolicyManager_AllowConnectableMode = 4,
    PolicyManager_AllowAdvertising = 8,
    PolicyManager_AllowOutOfBandPairing = 16,
    PolicyManager_LinkSecurityLevel = 32,
    PolicyManager_LocalDeviceName = 64,
    PolicyManager_DevicesAllowedList = 128,
    PolicyManager_ServicesAllowedList = 256,
    PolicyManager_RequireRestrictedMode = 512,
    PolicyManager_AllowPrepairing = 1024,
    PolicyManager_MaxValue = 1024
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

typedef enum FEATURE_CHANGE_TIME {
    FEATURE_CHANGE_TIME_READ = 0,
    FEATURE_CHANGE_TIME_MODULE_RELOAD = 1,
    FEATURE_CHANGE_TIME_SESSION = 2,
    FEATURE_CHANGE_TIME_REBOOT = 3,
    FEATURE_CHANGE_TIME_USER_FLAG = 128
};

typedef enum FEATURE_ENABLED_STATE {
    FEATURE_ENABLED_STATE_DEFAULT = 0,
    FEATURE_ENABLED_STATE_DISABLED = 1,
    FEATURE_ENABLED_STATE_ENABLED = 2,
    FEATURE_ENABLED_STATE_HAS_NOTIFICATION = 128,
    FEATURE_ENABLED_STATE_HAS_VARIANT_CONFIGURATION = 64
};

typedef enum OOB_DATA_PRESENT {
    OOBAuthenticationDataNotPresent = 0,
    P192OOBAuthenticationDataFromRemoteDevicePresent = 1,
    OOBAuthenticationDataFromRemoteDevicePresent = 1,
    P256OOBAuthenticationDataFromRemoteDevicePresent = 2,
    LETKValueFromRemoteDevicePresent = 17,
    LEP256OOBAuthenticationDataFromRemoteDevicePresent = 18
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

typedef enum PolicyManager_AllowAdvertising_PolicyValue {
    PolicyManager_AllowAdvertising_Disallow = 0,
    PolicyManager_AllowAdvertising_Allow = 1,
    PolicyManager_AllowAdvertising_Default = 1,
    PolicyManager_AllowAdvertising_MostRestrictive = 0
};

typedef enum PolicyManager_AllowBluetooth_PolicyValue {
    PolicyManager_AllowBluetooth_Disallow = 0,
    PolicyManager_AllowBluetooth_Reserved = 1,
    PolicyManager_AllowBluetooth_Allow = 2,
    PolicyManager_AllowBluetooth_Default = 2,
    PolicyManager_AllowBluetooth_MostRestrictive = 0
};

typedef enum PolicyManager_AllowConnectableMode_PolicyValue {
    PolicyManager_AllowConnectableMode_Disallow = 0,
    PolicyManager_AllowConnectableMode_Allow = 1,
    PolicyManager_AllowConnectableMode_Default = 1,
    PolicyManager_AllowConnectableMode_MostRestrictive = 0
};

typedef enum PolicyManager_AllowDiscoverableMode_PolicyValue {
    PolicyManager_AllowDiscoverableMode_Disallow = 0,
    PolicyManager_AllowDiscoverableMode_Allow = 1,
    PolicyManager_AllowDiscoverableMode_Default = 1,
    PolicyManager_AllowDiscoverableMode_MostRestrictive = 0
};

typedef enum PolicyManager_AllowOutOfBandPairing_PolicyValue {
    PolicyManager_AllowOutOfBandPairing_Disallow = 0,
    PolicyManager_AllowOutOfBandPairing_Allow = 1,
    PolicyManager_AllowOutOfBandPairing_Default = 1,
    PolicyManager_AllowOutOfBandPairing_MostRestrictive = 0
};

typedef enum PolicyManager_AllowPrepairing_PolicyValue {
    PolicyManager_AllowPrepairing_Disabled = 0,
    PolicyManager_AllowPrepairing_Enabled = 1,
    PolicyManager_AllowPrepairing_Default = 1,
    PolicyManager_AllowPrepairing_MostRestrictive = 0
};

typedef enum PolicyManager_LinkSecurityLevel_PolicyValue {
    PolicyManager_LinkSecurityLevel_Low = 0,
    PolicyManager_LinkSecurityLevel_Medium = 1,
    PolicyManager_LinkSecurityLevel_High = 2,
    PolicyManager_LinkSecurityLevel_Default = 0,
    PolicyManager_LinkSecurityLevel_MostRestrictive = 2
};

typedef enum PolicyManager_RequireRestrictedMode_PolicyValue {
    PolicyManager_RequireRestrictedMode_Disabled = 0,
    PolicyManager_RequireRestrictedMode_Enabled = 1,
    PolicyManager_RequireRestrictedMode_Default = 0,
    PolicyManager_RequireRestrictedMode_MostRestrictive = 1
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

typedef enum _BTH_DEVICE_CONTAINER_ID_SOURCE {
    ContainerIdSourceGenerated = 1,
    ContainerIdSourceSDP = 2,
    ContainerIdSourceEIR = 3
};

typedef enum _DEVICE_POWER_STATE {
    PowerDeviceUnspecified = 0,
    PowerDeviceD0 = 1,
    PowerDeviceD1 = 2,
    PowerDeviceD2 = 3,
    PowerDeviceD3 = 4,
    PowerDeviceMaximum = 5
};

typedef enum _DEVICE_RELATIONS_STATE_VALUE {
    DeviceRelationsPDONotReported = 0,
    DeviceRelationsPDOReported = 1,
    DeviceRelationsPDONotPresent = 2,
    DeviceRelationsPDOReportedMissing = 3
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

typedef enum _ENUMERATOR_ACTION {
    ENUMERATOR_ACTION_CREATE = 0,
    ENUMERATOR_ACTION_REMOVE = 1,
    ENUMERATOR_ACTION_DESTROY = 2,
    ENUMERATOR_ACTION_MAX = 3,
    ENUMERATOR_ACTION_UPDATE = 5
};

typedef enum _ENUMERATOR_TYPE {
    ENUMERATOR_TYPE_PROTOCOL = 0,
    ENUMERATOR_TYPE_SERVICE = 1,
    ENUMERATOR_TYPE_DEVICE = 2,
    ENUMERATOR_TYPE_MAX = 3
};

typedef enum _EVENT_INFO_CLASS {
    EventProviderBinaryTrackInfo = 0,
    EventProviderSetReserved1 = 1,
    EventProviderSetTraits = 2,
    EventProviderUseDescriptorType = 3,
    MaxEventInfo = 4
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

typedef enum wil_FeatureChangeTime {
    wil_FeatureChangeTime_OnRead = 0,
    wil_FeatureChangeTime_OnReload = 1,
    wil_FeatureChangeTime_OnSession = 2,
    wil_FeatureChangeTime_OnReboot = 3
};

typedef enum wil_FeatureEnabledState {
    wil_FeatureEnabledState_Default = 0,
    wil_FeatureEnabledState_Disabled = 1,
    wil_FeatureEnabledState_Enabled = 2
};

typedef enum wil_FeatureEnabledStateKind {
    wil_FeatureEnabledStateKind_All = 0,
    wil_FeatureEnabledStateKind_Service = 1,
    wil_FeatureEnabledStateKind_User = 2,
    wil_FeatureEnabledStateKind_Test = 3
};

typedef enum wil_FeatureEnabledStateOptions {
    wil_FeatureEnabledStateOptions_None = 0,
    wil_FeatureEnabledStateOptions_VariantConfig = 1
};

typedef enum wil_FeatureStage {
    wil_FeatureStage_AlwaysDisabled = 0,
    wil_FeatureStage_DisabledByDefault = 1,
    wil_FeatureStage_EnabledByDefault = 2,
    wil_FeatureStage_AlwaysEnabled = 3
};

typedef enum wil_FeatureStore {
    wil_FeatureStore_Machine = 0,
    wil_FeatureStore_User = 1,
    wil_FeatureStore_All = 2
};

typedef enum wil_FeatureVariantPayloadKind {
    wil_FeatureVariantPayloadKind_None = 0,
    wil_FeatureVariantPayloadKind_Resident = 1,
    wil_FeatureVariantPayloadKind_External = 2
};

typedef enum wil_ReportingKind {
    wil_ReportingKind_None = 0,
    wil_ReportingKind_UniqueUsage = 1,
    wil_ReportingKind_UniqueOpportunity = 2,
    wil_ReportingKind_DeviceUsage = 3,
    wil_ReportingKind_DeviceOpportunity = 4,
    wil_ReportingKind_TotalDuration = 5,
    wil_ReportingKind_PausedDuration = 6
};

typedef enum wil_UsageReportingMode {
    wil_UsageReportingMode_Default = 0,
    wil_UsageReportingMode_SuppressPotential = 1,
    wil_UsageReportingMode_SuppressImplicit = 2
};

typedef enum wil_VariantReportingKind {
    wil_VariantReportingKind_None = 0,
    wil_VariantReportingKind_UniqueUsage = 1,
    wil_VariantReportingKind_DeviceUsage = 2
};

typedef enum wil_details_CachedFeatureEnabledState {
    wil_details_CachedFeatureEnabledState_Unknown = 0,
    wil_details_CachedFeatureEnabledState_Disabled = 1,
    wil_details_CachedFeatureEnabledState_Enabled = 2,
    wil_details_CachedFeatureEnabledState_Desired = 3
};

typedef enum wil_details_CachedHasNotificationState {
    wil_details_CachedHasNotificationState_Unknown = 0,
    wil_details_CachedHasNotificationState_DoesNotHaveNotifications = 1,
    wil_details_CachedHasNotificationState_HasNotification = 2
};

typedef enum wil_details_FeatureTestStateKind {
    wil_details_FeatureTestStateKind_EnabledState = 0,
    wil_details_FeatureTestStateKind_Variant = 1
};

typedef enum wil_details_ServiceReportingKind {
    wil_details_ServiceReportingKind_UniqueUsage = 0,
    wil_details_ServiceReportingKind_UniqueOpportunity = 1,
    wil_details_ServiceReportingKind_DeviceUsage = 2,
    wil_details_ServiceReportingKind_DeviceOpportunity = 3,
    wil_details_ServiceReportingKind_PotentialUniqueUsage = 4,
    wil_details_ServiceReportingKind_PotentialUniqueOpportunity = 5,
    wil_details_ServiceReportingKind_PotentialDeviceUsage = 6,
    wil_details_ServiceReportingKind_PotentialDeviceOpportunity = 7,
    wil_details_ServiceReportingKind_EnabledTotalDuration = 8,
    wil_details_ServiceReportingKind_EnabledPausedDuration = 9,
    wil_details_ServiceReportingKind_DisabledTotalDuration = 10,
    wil_details_ServiceReportingKind_DisabledPausedDuration = 11,
    wil_details_ServiceReportingKind_CustomEnabledBase = 100,
    wil_details_ServiceReportingKind_CustomDisabledBase = 150,
    wil_details_ServiceReportingKind_Store = 254,
    wil_details_ServiceReportingKind_None = 255,
    wil_details_ServiceReportingKind_VariantDevicePotentialBase = 256,
    wil_details_ServiceReportingKind_VariantDeviceUsageBase = 320,
    wil_details_ServiceReportingKind_VariantUniquePotentialBase = 384,
    wil_details_ServiceReportingKind_VariantUniqueUsageBase = 448
};

typedef enum wil_details_ServiceReportingOptions {
    wil_details_ServiceReportingOptions_None = 0,
    wil_details_ServiceReportingOptions_VariantConfig = 1
};

typedef enum wil_details_StagingConfigFeatureFields {
    wil_details_StagingConfigFeatureFields_None = 0,
    wil_details_StagingConfigFeatureFields_ServiceState = 1,
    wil_details_StagingConfigFeatureFields_UserState = 2,
    wil_details_StagingConfigFeatureFields_TestState = 4,
    wil_details_StagingConfigFeatureFields_Variant = 8
};

BTH_POLICY_PROVIDER;
BTH_POLICY_PROVIDER_Context;
BthEnumGlobals;
BthLib_RefObjGlobals;
DEVPKEY_AepService_ServiceId;
DEVPKEY_Aep_AepId;
DEVPKEY_Aep_DeviceAddress;
DEVPKEY_Bluetooth_ClassOfDevice;
DEVPKEY_Bluetooth_ClassOfDevice_Deprecated;
DEVPKEY_Bluetooth_DeviceAddress;
DEVPKEY_Bluetooth_DeviceFlags;
DEVPKEY_Bluetooth_DevicePID;
DEVPKEY_Bluetooth_DeviceVID;
DEVPKEY_Bluetooth_DeviceVIDSource;
DEVPKEY_Bluetooth_LastConnectedTime;
DEVPKEY_Bluetooth_LastConnectedTime_Deprecated;
DEVPKEY_Bluetooth_RadioAddress;
DEVPKEY_Bluetooth_SecureConnectionPaired;
DEVPKEY_Bluetooth_ServiceGUID;
DEVPKEY_DeviceContainer_AlwaysShowDeviceAsConnected;
DEVPKEY_DeviceContainer_Category;
DEVPKEY_DeviceContainer_DiscoveryMethod;
DEVPKEY_DeviceContainer_UnpairUninstall;
DEVPKEY_DeviceInterface_FriendlyName;
DEVPKEY_Device_ConnectionStateIsAuthoritative;
DEVPKEY_Device_FriendlyName;
DEVPKEY_Device_PresenceNotForDevice;
DialupNetworkingServiceClass_UUID;
FaxServiceClass_UUID;
GUID_BTHDDI_ENUMERATOR_INTERFACE;
GUID_BTH_DEVICE_INTERFACE;
GUID_BTH_RFCOMM_SERVICE_DEVICE_INTERFACE;
HCRPrintServiceClass_UUID;
Microsoft_Windows_Bluetooth_PolicyEnableBits;
Microsoft_Windows_Bluetooth_PolicyKeywords;
Microsoft_Windows_Bluetooth_PolicyLevels;
PolicyServiceBlockAudit;
SerialPortServiceClass_UUID;
TraceLoggingMetadata;
TraceLoggingMetadataEnd;
WNF_ENTR_BLUETOOTH_POLICY_VALUE_CHANGED;
WPPTraceSuite;
WPP_0b683014338330118df78a91d4ba37cb_Traceguids;
WPP_57890a5a3bb33a21ad6478ebabeb06d7_Traceguids;
WPP_GLOBAL_Control;
WPP_MAIN_CB;
WPP_ThisDir_CTLGUID_BthEnumTraceGuid;
WPP_aeefeb0e0c3636f67aa614f993f415b1_Traceguids;
WPP_b54f420bf3723c018d8c72893c71d34f_Traceguids;
WPP_baf8f9376e8d3840d4032b852870a351_Traceguids;
WPP_bcd8a89b64433ff5b105040ae79358b4_Traceguids;
_IMPORT_DESCRIPTOR_WppRecorder;
_IMPORT_DESCRIPTOR_ntoskrnl;
_NULL_IMPORT_DESCRIPTOR;
__PchSym_;
_guard_check_icall_fptr;
_guard_dispatch_icall_fptr;
_guard_fids_table;
_guard_iat_table;
_imp_EtwRegister;
_imp_EtwSetInformation;
_imp_EtwUnregister;
_imp_EtwWriteTransfer;
_imp_ExAllocatePoolWithTag;
_imp_ExFreePool;
_imp_ExFreePoolWithTag;
_imp_ExQueryWnfStateData;
_imp_ExSubscribeWnfStateChange;
_imp_ExUnsubscribeWnfStateChange;
_imp_IoAllocateIrp;
_imp_IoAttachDeviceToDeviceStack;
_imp_IoBuildDeviceIoControlRequest;
_imp_IoCreateDevice;
_imp_IoDeleteDevice;
_imp_IoDetachDevice;
_imp_IoFreeIrp;
_imp_IoInvalidateDeviceRelations;
_imp_IoInvalidateDeviceState;
_imp_IoOpenDeviceRegistryKey;
_imp_IoRegisterDeviceInterface;
_imp_IoReleaseCancelSpinLock;
_imp_IoSetDeviceInterfacePropertyData;
_imp_IoSetDeviceInterfaceState;
_imp_IoSetDevicePropertyData;
_imp_IoWMIRegistrationControl;
_imp_IofCallDriver;
_imp_IofCompleteRequest;
_imp_KeAcquireSpinLockRaiseToDpc;
_imp_KeEnterCriticalRegion;
_imp_KeInitializeEvent;
_imp_KeInitializeSpinLock;
_imp_KeLeaveCriticalRegion;
_imp_KeReleaseSpinLock;
_imp_KeSetEvent;
_imp_KeWaitForSingleObject;
_imp_MmGetSystemRoutineAddress;
_imp_ObfReferenceObject;
_imp_PoCallDriver;
_imp_PoSetPowerState;
_imp_PoStartNextPowerIrp;
_imp_RtlAppendUnicodeStringToString;
_imp_RtlAppendUnicodeToString;
_imp_RtlCompareMemory;
_imp_RtlCompareUnicodeString;
_imp_RtlFreeUnicodeString;
_imp_RtlGUIDFromString;
_imp_RtlInitUnicodeString;
_imp_RtlIntegerToUnicodeString;
_imp_RtlQueryRegistryValues;
_imp_RtlRbInsertNodeEx;
_imp_RtlRbRemoveNode;
_imp_RtlStringFromGUID;
_imp_RtlUTF8ToUnicodeN;
_imp_WppAutoLogStart;
_imp_WppAutoLogStop;
_imp_WppAutoLogTrace;
_imp_ZwClose;
_imp_ZwOpenKey;
_imp_ZwQueryValueKey;
_imp_ZwSetValueKey;
_imp__ui64tow_s;
_imp__vsnwprintf;
_imp_imp_WppRecorderReplay;
_security_cookie;
_security_cookie_complement;
busId;
g_Callback;
g_CallbackContext;
g_CallbackLock;
g_Policies;
g_PolicyLock;
g_PolicyStorePath;
load_config_used;
pfnEtwRegisterClassicProvider;
pfnEtwUnregister;
pfnWppGetVersion;
pfnWppQueryTraceInformation;
pfnWppTraceMessage;
WppRecorder_NULL_THUNK_DATA;
ntoskrnl_NULL_THUNK_DATA;

BthCheckForUnsupportedServiceID();
BthDispatchCleanup();
BthDispatchClose();
BthDispatchCreate();
BthEnumAddDevice();
BthEnumBuildDeviceCompatibleIds();
BthEnumBuildDeviceDeviceId();
BthEnumBuildDeviceHardwareIds();
BthEnumBuildDeviceInstanceId();
BthEnumBuildL2capCompatibleIds();
BthEnumBuildL2capDeviceId();
BthEnumBuildL2capHardwareIds();
BthEnumBuildL2capInstanceId();
BthEnumCheckGuidAgainstRegistry();
BthEnumChildCompare();
BthEnumDeleteAllPdos();
BthEnumDeleteProtocol();
BthEnumDestroyPdoExt();
BthEnumEnumerateFlags();
BthEnumEnumerateProtocolOrDevice();
BthEnumEnumerateWWSettings();
BthEnumFdoPower();
BthEnumFdoPowerComplete();
BthEnumForwardQueryInterface();
BthEnumGenerateAepDeviceAddress();
BthEnumGenerateAepId();
BthEnumGenerateRfcommAepServiceId();
BthEnumGetConnectionCountKey();
BthEnumGetDeviceList();
BthEnumGetLocalRadioInfo();
BthEnumGetProfilesUsage();
BthEnumGetUsage();
BthEnumGetUsageCount();
BthEnumInternalIoctl();
BthEnumIoctl();
BthEnumPdoPnp();
BthEnumPdoPower();
BthEnumPnP();
BthEnumPower();
BthEnumProcessWWIrp();
BthEnumQueryEnumeratorInterface();
BthEnumQueryProtocol();
BthEnumQueueIrp();
BthEnumRegUpdateWWCapableCodMasks();
BthEnumRemoveProtocol();
BthEnumReportID();
BthEnumSetDefaultCapabilities();
BthEnumSetDevicePdoProperties();
BthEnumSetPdoInterfaceProperties();
BthEnumUnregisterDeviceInterface();
BthEnumUpdateDevice();
BthEnumUpdateDeviceKey();
BthEnumUpdateProfileConnectionCountKey();
BthEnumWaitWakeCancelRoutine();
BthEnumWmi();
BthLib_Unload();
BthOpenKey();
BthOpenKeyEx();
BthPolicyDestroy();
BthQueryKeyValueEx();
BthQueryKeyValueUlong();
BthReportPolicyServiceBlockAudit();
BthServiceAllowedByPolicy();
BthSyncWithPolicyStore();
BthUnload();
BuildLocalMfgID();
BuildVidPidID();
CallbackInternal();
DriverEntry();
ForwardIrp();
GS_Init();
GsDriverEntry();
IoCompletionForOpenChannelSuccess();
IoCompletionSetEvent();
IrpList_DequeueIrpLocked();
IrpList_EnqueueLocked();
IrpList_InitEx();
McGenControlCallbackV2();
McGenEventRegister();
McGenEventUnregister();
McGenEventWrite();
McTemplateK0zjxzz();
NtStatusTxt();
ReadVariableLengthPolicy();
RtlStringCbCopyNExW();
RtlStringCbCopyW();
RtlStringCbPrintfW();
RtlStringCchPrintfW();
RtlUnicodeStringCatString();
RtlUnicodeStringCbCopyN();
TlgDefineProvider_annotation__Tlgg_hBluetoothProviderProv();
TlgEnableCallback();
TlgWrite();
UnHandledDispatch();
WPP_RECORDER_SF_();
WPP_RECORDER_SF_D();
WPP_RECORDER_SF_Dddd();
WPP_RECORDER_SF_S();
WPP_RECORDER_SF_SS();
WPP_RECORDER_SF_c();
WPP_RECORDER_SF_d();
WPP_RECORDER_SF_dD();
WPP_RECORDER_SF_dSd();
WPP_RECORDER_SF_dd();
WPP_RECORDER_SF_ddD();
WPP_RECORDER_SF_dq();
WPP_RECORDER_SF_iS();
WPP_RECORDER_SF_q();
WPP_RECORDER_SF_qD();
WPP_RECORDER_SF_qd();
WPP_RECORDER_SF_qdd();
WPP_RECORDER_SF_qq();
WPP_RECORDER_SF_qqq();
WPP_RECORDER_SF_qs();
WaitForLowerDriverToCompleteIrp();
WppClassicProviderCallback();
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
