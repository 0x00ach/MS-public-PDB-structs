struct DMABuffer;
struct DMATransfer;
struct KSALLOCATOR_FRAMING;
struct KSALLOCATOR_FRAMING_EX;
struct KSATTRIBUTE;
struct KSATTRIBUTE_LIST;
struct KSAUTOMATION_TABLE_;
struct KSBUFFER_ITEM;
struct KSCLOCK_FUNCTIONTABLE;
struct KSCOMPONENTID;
struct KSDPC_ITEM;
struct KSEVENTDATA;
struct KSEVENT_ITEM;
struct KSEVENT_SET;
struct KSFASTMETHOD_ITEM;
struct KSFASTPROPERTY_ITEM;
struct KSIDENTIFIER;
struct KSMETHOD_ITEM;
struct KSMETHOD_SET;
struct KSMULTIPLE_ITEM;
struct KSOBJECT_CREATE_ITEM;
struct KSPIN_DESCRIPTOR;
struct KSPRIORITY;
struct KSPROPERTY_ITEM;
struct KSPROPERTY_MEMBERSHEADER;
struct KSPROPERTY_MEMBERSLIST;
struct KSPROPERTY_SET;
struct KSPROPERTY_VALUES;
struct KSP_PIN;
struct KSRESOLUTION;
struct KSSCATTER_GATHER;
struct KSSTREAM_HEADER;
struct KSTIME;
struct KSTOPOLOGY;
struct KSTOPOLOGY_CONNECTION;
struct KS_COMPRESSION;
struct KS_FRAMING_ITEM;
struct KS_FRAMING_RANGE;
struct KS_FRAMING_RANGE_WEIGHTED;
struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct _ACCESS_RANGE;
struct _ACCESS_STATE;
struct _ADDITIONAL_PIN_INFO;
struct _CLOCK_INSTANCE;
struct _CM_FULL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR;
struct _CM_PARTIAL_RESOURCE_LIST;
struct _CM_RESOURCE_LIST;
struct _COMMON_OBJECT;
struct _COMPRESSED_DATA_INFO;
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
struct _EPROCESS;
struct _ERESOURCE;
struct _ERROR_LOG_ENTRY;
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
struct _FILTER_INSTANCE;
struct _FILTER_TYPE_INFORMATION;
struct _GENERAL_LOOKASIDE;
struct _GENERAL_LOOKASIDE_POOL;
struct _GUID;
struct _HW_CLOCK_OBJECT;
struct _HW_DEVICE_EXTENSION;
struct _HW_EVENT_DESCRIPTOR;
struct _HW_INITIALIZATION_DATA;
struct _HW_STREAM_DESCRIPTOR;
struct _HW_STREAM_HEADER;
struct _HW_STREAM_INFORMATION;
struct _HW_STREAM_OBJECT;
struct _HW_STREAM_REQUEST_BLOCK;
struct _HW_TIME_CONTEXT;
struct _INITIAL_PRIVILEGE_SET;
struct _INTERFACE;
struct _INTERRUPT_DATA;
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
struct _KINTERRUPT;
struct _KSALLOCATOR_DISPATCH;
struct _KSCLOCK_DISPATCH;
struct _KSDEVICE;
struct _KSDEVICE_DESCRIPTOR;
struct _KSDEVICE_DISPATCH;
struct _KSEVENT_ENTRY;
struct _KSFILTER;
struct _KSFILTERFACTORY;
struct _KSFILTER_DESCRIPTOR;
struct _KSFILTER_DISPATCH;
struct _KSGATE;
struct _KSMAPPING;
struct _KSNODE_DESCRIPTOR;
struct _KSPIN;
struct _KSPIN_DESCRIPTOR_EX;
struct _KSPIN_DISPATCH;
struct _KSPROCESSPIN;
struct _KSPROCESSPIN_INDEXENTRY;
struct _KSSTREAM_POINTER;
struct _KSSTREAM_POINTER_OFFSET;
struct _KTHREAD;
struct _KTIMER;
struct _LIST_ENTRY;
struct _LOOKASIDE_LIST_EX;
struct _LUID;
struct _LUID_AND_ATTRIBUTES;
struct _MAILSLOT_CREATE_PARAMETERS;
struct _MAPPED_ADDRESS;
struct _MASTER_CLOCK_INFO;
struct _MDL;
struct _MINIDRIVER_INFORMATION;
struct _NAMED_PIPE_CREATE_PARAMETERS;
struct _NPAGED_LOOKASIDE_LIST;
struct _OWNER_ENTRY;
struct _PAGED_LOOKASIDE_LIST;
struct _PORT_CONFIGURATION_INFORMATION;
struct _POWER_SEQUENCE;
struct _PRIVILEGE_SET;
struct _QUEUE;
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
struct _STREAM_ADDITIONAL_INFO;
struct _STREAM_DATA_INTERSECT_INFO;
struct _STREAM_HEADER_EX;
struct _STREAM_OBJECT;
struct _STREAM_PROPERTY_DESCRIPTOR;
struct _STREAM_REQUEST_BLOCK;
struct _STREAM_TIME_REFERENCE;
struct _STRING;
struct _SYSTEM_POWER_STATE_CONTEXT;
struct _UNICODE_STRING;
struct _VPB;
struct _WAIT_CONTEXT_BLOCK;
struct _WORK_QUEUE_ITEM;

union KSDATAFORMAT;
union _CommandData;
union _LARGE_INTEGER;
union _POWER_STATE;
union _SLIST_HEADER;
union _ULARGE_INTEGER;

enum BUS_QUERY_ID_TYPE;
enum DEVICE_TEXT_TYPE;
enum DMA_COMPLETION_STATUS;
enum KSPIN_COMMUNICATION;
enum KSPIN_DATAFLOW;
enum KSRESET;
enum KSSTATE;
enum PIN_STATE;
enum PIN_TYPE;
enum POWER_ACTION;
enum TIME_FUNCTION;
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
enum _KINTERRUPT_MODE;
enum _KINTERRUPT_POLARITY;
enum _MEMORY_CACHING_TYPE;
enum _MEMORY_CACHING_TYPE_ORIG;
enum _MODE;
enum _POOL_TYPE;
enum _POWER_STATE_TYPE;
enum _REG_NOTIFY_CLASS;
enum _SECURITY_IMPERSONATION_LEVEL;
enum _SRB_COMMAND;
enum _STREAM_PRIORITY;
enum _SYSTEM_POWER_STATE;
enum _USER_ACTIVITY_PRESENCE;
enum _WORK_QUEUE_TYPE;

typedef struct DMABuffer {
    ULONG64 Synchronizer;
    struct _FAST_MUTEX RemappingNeeded;
    PVOID Buffer;
    struct _MDL *MDLForBuffer;
    UCHAR Bitmap[64];
    ULONG PagesAvailable;
    ULONG PagesToMap;
    ULONG MaximumPages;
    struct _DEVICE_EXTENSION *Owner;
    struct DMATransfer *NextTransfer;
    struct DMATransfer *LastTransfer;
};

typedef struct DMATransfer {
    PVOID TargetAddress;
    struct _MDL *TargetMDL;
    PULONG64 OriginalPage;
    ULONG PagesMapped;
    UCHAR Bitmap[64];
    struct _STREAM_REQUEST_BLOCK *Owner;
    struct DMATransfer *NextTransfer;
    ULONG PagesNeeded;
    UCHAR IsRead;
    ULONG Size;
    ULONG Pages;
    PULONG64 Page;
};

typedef struct KSALLOCATOR_FRAMING {
    ULONG OptionsFlags;
    ULONG RequirementsFlags;
    enum _POOL_TYPE PoolType;
    ULONG Frames;
    ULONG FrameSize;
    ULONG FileAlignment;
    LONG FramePitch;
    ULONG Reserved;
};

typedef struct KSALLOCATOR_FRAMING_EX {
    ULONG CountItems;
    ULONG PinFlags;
    struct KS_COMPRESSION OutputCompression;
    ULONG PinWeight;
    struct KS_FRAMING_ITEM FramingItem[1];
};

typedef struct KSATTRIBUTE {
    ULONG Size;
    ULONG Flags;
    struct _GUID Attribute;
};

typedef struct KSATTRIBUTE_LIST {
    ULONG Count;
    struct KSATTRIBUTE **Attributes;
};

typedef struct KSAUTOMATION_TABLE_ {
    ULONG PropertySetsCount;
    ULONG PropertyItemSize;
    struct KSPROPERTY_SET *PropertySets;
    ULONG MethodSetsCount;
    ULONG MethodItemSize;
    struct KSMETHOD_SET *MethodSets;
    ULONG EventSetsCount;
    ULONG EventItemSize;
    struct KSEVENT_SET *EventSets;
};

typedef struct KSBUFFER_ITEM {
    struct KSDPC_ITEM DpcItem;
    struct _LIST_ENTRY BufferList;
};

typedef struct KSCLOCK_FUNCTIONTABLE {
    PLONG64 GetTime;
    PLONG64 GetPhysicalTime;
    PLONG64 GetCorrelatedTime;
    PLONG64 GetCorrelatedPhysicalTime;
};

typedef struct KSCOMPONENTID {
    struct _GUID Manufacturer;
    struct _GUID Product;
    struct _GUID Component;
    struct _GUID Name;
    ULONG Version;
    ULONG Revision;
};

typedef struct KSDPC_ITEM {
    struct _KDPC Dpc;
    ULONG ReferenceCount;
    ULONG64 AccessLock;
};

typedef struct KSEVENTDATA {
    ULONG NotificationType;
    struct {
        PVOID Event;
        ULONG64 Reserved[2];
    } EventHandle;
    struct {
        PVOID Semaphore;
        ULONG Reserved;
        LONG Adjustment;
    } SemaphoreHandle;
    struct {
        PVOID Event;
        LONG Increment;
        ULONG64 Reserved;
    } EventObject;
    struct {
        PVOID Semaphore;
        LONG Increment;
        LONG Adjustment;
    } SemaphoreObject;
    struct {
        struct _KDPC *Dpc;
        ULONG ReferenceCount;
        ULONG64 Reserved;
    } Dpc;
    struct {
        struct _WORK_QUEUE_ITEM *WorkQueueItem;
        enum _WORK_QUEUE_TYPE WorkQueueType;
        ULONG64 Reserved;
    } WorkItem;
    struct {
        struct _WORK_QUEUE_ITEM *WorkQueueItem;
        PVOID KsWorkerObject;
        ULONG64 Reserved;
    } KsWorkItem;
    struct {
        PVOID Unused;
        LONG64 Alignment[2];
    } Alignment;
};

typedef struct KSEVENT_ITEM {
    ULONG EventId;
    ULONG DataInput;
    ULONG ExtraEntryData;
    PLONG AddHandler;
    PVOID RemoveHandler;
    PLONG SupportHandler;
};

typedef struct KSEVENT_SET {
    struct _GUID *Set;
    ULONG EventsCount;
    struct KSEVENT_ITEM *EventItem;
};

typedef struct KSFASTMETHOD_ITEM {
    ULONG MethodId;
    PUCHAR MethodHandler;
    UCHAR MethodSupported;
};

typedef struct KSFASTPROPERTY_ITEM {
    ULONG PropertyId;
    PUCHAR GetPropertyHandler;
    UCHAR GetSupported;
    PUCHAR SetPropertyHandler;
    UCHAR SetSupported;
    ULONG Reserved;
};

typedef struct KSIDENTIFIER {
    struct _GUID Set;
    ULONG Id;
    ULONG Flags;
    LONG64 Alignment;
};

typedef struct KSMETHOD_ITEM {
    ULONG MethodId;
    PLONG MethodHandler;
    UCHAR MethodSupported;
    ULONG MinMethod;
    ULONG MinData;
    PLONG SupportHandler;
    ULONG Flags;
};

typedef struct KSMETHOD_SET {
    struct _GUID *Set;
    ULONG MethodsCount;
    struct KSMETHOD_ITEM *MethodItem;
    ULONG FastIoCount;
    struct KSFASTMETHOD_ITEM *FastIoTable;
};

typedef struct KSMULTIPLE_ITEM {
    ULONG Size;
    ULONG Count;
};

typedef struct KSOBJECT_CREATE_ITEM {
    PLONG Create;
    PVOID Context;
    struct _UNICODE_STRING ObjectClass;
    PVOID SecurityDescriptor;
    ULONG Flags;
};

typedef struct KSPIN_DESCRIPTOR {
    ULONG InterfacesCount;
    struct KSIDENTIFIER *Interfaces;
    ULONG MediumsCount;
    struct KSIDENTIFIER *Mediums;
    ULONG DataRangesCount;
    union KSDATAFORMAT **DataRanges;
    enum KSPIN_DATAFLOW DataFlow;
    enum KSPIN_COMMUNICATION Communication;
    struct _GUID *Category;
    struct _GUID *Name;
    LONG64 Reserved;
    ULONG ConstrainedDataRangesCount;
    union KSDATAFORMAT **ConstrainedDataRanges;
};

typedef struct KSPRIORITY {
    ULONG PriorityClass;
    ULONG PrioritySubClass;
};

typedef struct KSPROPERTY_ITEM {
    ULONG PropertyId;
    PLONG GetPropertyHandler;
    UCHAR GetSupported;
    ULONG MinProperty;
    ULONG MinData;
    PLONG SetPropertyHandler;
    UCHAR SetSupported;
    struct KSPROPERTY_VALUES *Values;
    ULONG RelationsCount;
    struct KSIDENTIFIER *Relations;
    PLONG SupportHandler;
    ULONG SerializedSize;
};

typedef struct KSPROPERTY_MEMBERSHEADER {
    ULONG MembersFlags;
    ULONG MembersSize;
    ULONG MembersCount;
    ULONG Flags;
};

typedef struct KSPROPERTY_MEMBERSLIST {
    struct KSPROPERTY_MEMBERSHEADER MembersHeader;
    PVOID Members;
};

typedef struct KSPROPERTY_SET {
    struct _GUID *Set;
    ULONG PropertiesCount;
    struct KSPROPERTY_ITEM *PropertyItem;
    ULONG FastIoCount;
    struct KSFASTPROPERTY_ITEM *FastIoTable;
};

typedef struct KSPROPERTY_VALUES {
    struct KSIDENTIFIER PropTypeSet;
    ULONG MembersListCount;
    struct KSPROPERTY_MEMBERSLIST *MembersList;
};

typedef struct KSP_PIN {
    struct KSIDENTIFIER Property;
    ULONG PinId;
    ULONG Reserved;
    ULONG Flags;
};

typedef struct KSRESOLUTION {
    LONG64 Granularity;
    LONG64 Error;
};

typedef struct KSSCATTER_GATHER {
    union _LARGE_INTEGER PhysicalAddress;
    ULONG Length;
};

typedef struct KSSTREAM_HEADER {
    ULONG Size;
    ULONG TypeSpecificFlags;
    struct KSTIME PresentationTime;
    LONG64 Duration;
    ULONG FrameExtent;
    ULONG DataUsed;
    PVOID Data;
    ULONG OptionsFlags;
    ULONG Reserved;
};

typedef struct KSTIME {
    LONG64 Time;
    ULONG Numerator;
    ULONG Denominator;
};

typedef struct KSTOPOLOGY {
    ULONG CategoriesCount;
    struct _GUID *Categories;
    ULONG TopologyNodesCount;
    struct _GUID *TopologyNodes;
    ULONG TopologyConnectionsCount;
    struct KSTOPOLOGY_CONNECTION *TopologyConnections;
    struct _GUID *TopologyNodesNames;
    ULONG Reserved;
};

typedef struct KSTOPOLOGY_CONNECTION {
    ULONG FromNode;
    ULONG FromNodePin;
    ULONG ToNode;
    ULONG ToNodePin;
};

typedef struct KS_COMPRESSION {
    ULONG RatioNumerator;
    ULONG RatioDenominator;
    ULONG RatioConstantMargin;
};

typedef struct KS_FRAMING_ITEM {
    struct _GUID MemoryType;
    struct _GUID BusType;
    ULONG MemoryFlags;
    ULONG BusFlags;
    ULONG Flags;
    ULONG Frames;
    ULONG FileAlignment;
    LONG FramePitch;
    ULONG MemoryTypeWeight;
    struct KS_FRAMING_RANGE PhysicalRange;
    struct KS_FRAMING_RANGE_WEIGHTED FramingRange;
};

typedef struct KS_FRAMING_RANGE {
    ULONG MinFrameSize;
    ULONG MaxFrameSize;
    ULONG Stepping;
};

typedef struct KS_FRAMING_RANGE_WEIGHTED {
    struct KS_FRAMING_RANGE Range;
    ULONG InPlaceWeight;
    ULONG NotInPlaceWeight;
};

typedef struct LIST_ENTRY32 {
    ULONG Flink;
    ULONG Blink;
};

typedef struct LIST_ENTRY64 {
    ULONG64 Flink;
    ULONG64 Blink;
};

typedef struct _ACCESS_RANGE {
    union _LARGE_INTEGER RangeStart;
    ULONG RangeLength;
    UCHAR RangeInMemory;
    ULONG Reserved;
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

typedef struct _ADDITIONAL_PIN_INFO {
    ULONG CurrentInstances;
    ULONG MaxInstances;
    ULONG Reserved;
};

typedef struct _CLOCK_INSTANCE {
    PVOID DeviceHeader;
    struct _FILE_OBJECT *ParentFileObject;
    struct _STREAM_OBJECT *StreamObject;
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

typedef struct _COMMON_OBJECT {
    PVOID DeviceHeader;
    ULONG Cookie;
    ULONG Alignment;
    struct _INTERRUPT_DATA InterruptData;
    PVOID HwTimerRoutine;
    PVOID HwTimerContext;
    struct _KTIMER MiniDriverTimer;
    struct _KDPC MiniDriverTimerDpc;
    struct _WORK_QUEUE_ITEM WorkItem;
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

typedef struct _DEVICE_EXTENSION {
    struct _COMMON_OBJECT ComObj;
    ULONG Flags;
    struct _DEVICE_OBJECT *DeviceObject;
    struct _DEVICE_OBJECT *AttachedPdo;
    ULONG RegistryFlags;
    struct _KINTERRUPT *InterruptObject;
    PUCHAR InterruptRoutine;
    struct _DMA_ADAPTER *DmaAdapterObject;
    ULONG NumberOfMapRegisters;
    struct DMABuffer Mapper;
    struct _MINIDRIVER_INFORMATION *MinidriverData;
    struct _DEVICE_OBJECT *PhysicalDeviceObject;
    PVOID HwDeviceExtension;
    struct _PORT_CONFIGURATION_INFORMATION *ConfigurationInformation;
    struct _MAPPED_ADDRESS *MappedAddressList;
    PUCHAR SynchronizeExecution;
    ULONG64 SpinLock;
    ULONG SequenceNumber;
    ULONG DmaBufferLength;
    union _LARGE_INTEGER DmaBufferPhysical;
    PVOID DmaBuffer;
    struct _LIST_ENTRY PendingQueue;
    struct _LIST_ENTRY OutstandingQueue;
    struct _KDPC WorkDpc;
    ULONG Signature2;
    struct _LIST_ENTRY FilterInstanceList;
    ULONG NumberOfOpenInstances;
    struct _STREAM_OBJECT *NeedyStream;
    struct _HW_STREAM_DESCRIPTOR *StreamDescriptor;
    struct _KEVENT ControlEvent;
    struct _KEVENT RemoveEvent;
    UCHAR NoSync;
    struct _MINIDRIVER_INFORMATION *DriverInfo;
    PVOID BeginMinidriverCallin;
    PVOID EndMinidriverStreamCallin;
    PVOID EndMinidriverDeviceCallin;
    LONG OneBasedIoCount;
    struct _UNICODE_STRING *SymbolicLinks;
    enum _DEVICE_POWER_STATE DeviceState[7];
    enum _DEVICE_POWER_STATE CurrentPowerState;
    struct _LIST_ENTRY Children;
    struct _LIST_ENTRY DeadEventList;
    struct _WORK_QUEUE_ITEM EventWorkItem;
    struct _WORK_QUEUE_ITEM RescanWorkItem;
    struct _WORK_QUEUE_ITEM PowerCompletionWorkItem;
    struct _WORK_QUEUE_ITEM DevIrpCompletionWorkItem;
    UCHAR ReadyForNextReq;
    UCHAR DeadEventItemQueued;
    ULONG NumberOfNameExtensions;
    ULONG NumberOfFilterTypes;
    struct KSOBJECT_CREATE_ITEM *CreateItems;
    struct _FILTER_TYPE_INFORMATION *FilterTypeInfos;
    ULONG Signature;
    ULONG FilterExtensionSize;
    struct _LIST_ENTRY PendedIrps;
    ULONG64 PendedIrpsLock;
    ULONG64 PowerLock;
    enum _SYSTEM_POWER_STATE CurrentSystemState;
    struct _KEVENT BlockPoweredDownEvent;
    struct _FAST_MUTEX AdapterLock;
    struct _LIST_ENTRY ReserveSrbList;
    ULONG64 ReserveSrbListLock;
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

typedef struct _ERROR_LOG_ENTRY {
    LONG ErrorCode;
    ULONG SequenceNumber;
    ULONG UniqueId;
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

typedef struct _FILTER_INSTANCE {
    PVOID DeviceHeader;
    struct _DEVICE_OBJECT *DeviceObject;
    struct _LIST_ENTRY NextFilterInstance;
    struct _LIST_ENTRY FirstStream;
    PVOID HwInstanceExtension;
    struct _ADDITIONAL_PIN_INFO *PinInstanceInfo;
    PVOID WorkerRead;
    PVOID WorkerWrite;
    struct KSMETHOD_SET *DeviceMethodsArray;
    ULONG Signature;
    struct KSPIN_DESCRIPTOR *PinInformation;
    ULONG NumberOfPins;
    struct KSEVENT_SET *EventInfo;
    ULONG EventInfoCount;
    struct _LIST_ENTRY NotifyList;
    PLONG HwEventRoutine;
    struct KSPROPERTY_SET *DevicePropertiesArray;
    struct _STREAM_ADDITIONAL_INFO *StreamPropEventArray;
    ULONG Reenumerated;
    ULONG NeedReenumeration;
    ULONG StreamDescriptorSize;
    struct _DEVICE_EXTENSION *DeviceExtension;
    struct _HW_STREAM_DESCRIPTOR *StreamDescriptor;
    ULONG FilterTypeIndex;
};

typedef struct _FILTER_TYPE_INFORMATION {
    struct _UNICODE_STRING *SymbolicLinks;
    ULONG LinkNameCount;
    struct _HW_STREAM_DESCRIPTOR *StreamDescriptor;
    ULONG Reserved;
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

typedef struct _HW_CLOCK_OBJECT {
    PVOID HwClockFunction;
    ULONG ClockSupportFlags;
    ULONG Reserved[2];
};

typedef struct _HW_DEVICE_EXTENSION {
};

typedef struct _HW_EVENT_DESCRIPTOR {
    UCHAR Enable;
    struct _KSEVENT_ENTRY *EventEntry;
    struct KSEVENTDATA *EventData;
    struct _HW_STREAM_OBJECT *StreamObject;
    struct _HW_DEVICE_EXTENSION *DeviceExtension;
    ULONG EnableEventSetIndex;
    PVOID HwInstanceExtension;
    ULONG Reserved;
};

typedef struct _HW_INITIALIZATION_DATA {
    ULONG HwInitializationDataSize;
    USHORT SizeOfThisPacket;
    USHORT StreamClassVersion;
    PUCHAR HwInterrupt;
    PVOID HwReceivePacket;
    PVOID HwCancelPacket;
    PVOID HwRequestTimeoutHandler;
    ULONG DeviceExtensionSize;
    ULONG PerRequestExtensionSize;
    ULONG PerStreamExtensionSize;
    ULONG FilterInstanceExtensionSize;
    UCHAR BusMasterDMA;
    UCHAR Dma24BitAddresses;
    ULONG BufferAlignment;
    UCHAR TurnOffSynchronization;
    ULONG DmaBufferSize;
    ULONG NumNameExtensions;
    PWCHAR *NameExtensionArray;
};

typedef struct _HW_STREAM_DESCRIPTOR {
    struct _HW_STREAM_HEADER StreamHeader;
    struct _HW_STREAM_INFORMATION StreamInfo;
};

typedef struct _HW_STREAM_HEADER {
    ULONG NumberOfStreams;
    ULONG SizeOfHwStreamInformation;
    ULONG NumDevPropArrayEntries;
    struct KSPROPERTY_SET *DevicePropertiesArray;
    ULONG NumDevEventArrayEntries;
    struct KSEVENT_SET *DeviceEventsArray;
    struct KSTOPOLOGY *Topology;
    PLONG DeviceEventRoutine;
    LONG NumDevMethodArrayEntries;
    struct KSMETHOD_SET *DeviceMethodsArray;
};

typedef struct _HW_STREAM_INFORMATION {
    ULONG NumberOfPossibleInstances;
    enum KSPIN_DATAFLOW DataFlow;
    UCHAR DataAccessible;
    ULONG NumberOfFormatArrayEntries;
    union KSDATAFORMAT **StreamFormatsArray;
    PVOID ClassReserved[4];
    ULONG NumStreamPropArrayEntries;
    struct KSPROPERTY_SET *StreamPropertiesArray;
    ULONG NumStreamEventArrayEntries;
    struct KSEVENT_SET *StreamEventsArray;
    struct _GUID *Category;
    struct _GUID *Name;
    ULONG MediumsCount;
    struct KSIDENTIFIER *Mediums;
    UCHAR BridgeStream;
    ULONG Reserved[2];
};

typedef struct _HW_STREAM_OBJECT {
    ULONG SizeOfThisPacket;
    ULONG StreamNumber;
    PVOID HwStreamExtension;
    PVOID ReceiveDataPacket;
    PVOID ReceiveControlPacket;
    struct _HW_CLOCK_OBJECT HwClockObject;
    UCHAR Dma;
    UCHAR Pio;
    PVOID HwDeviceExtension;
    ULONG StreamHeaderMediaSpecific;
    ULONG StreamHeaderWorkspace;
    UCHAR Allocator;
    PLONG HwEventRoutine;
    ULONG Reserved[2];
};

typedef struct _HW_STREAM_REQUEST_BLOCK {
    ULONG SizeOfThisPacket;
    enum _SRB_COMMAND Command;
    LONG Status;
    struct _HW_STREAM_OBJECT *StreamObject;
    PVOID HwDeviceExtension;
    PVOID SRBExtension;
    union _CommandData CommandData;
    ULONG NumberOfBuffers;
    ULONG TimeoutCounter;
    ULONG TimeoutOriginal;
    struct _HW_STREAM_REQUEST_BLOCK *NextSRB;
    struct _IRP *Irp;
    ULONG Flags;
    PVOID HwInstanceExtension;
    ULONG NumberOfBytesToTransfer;
    ULONG ActualBytesTransferred;
    struct KSSCATTER_GATHER *ScatterGatherBuffer;
    ULONG NumberOfPhysicalPages;
    ULONG NumberOfScatterGatherElements;
    ULONG Reserved[1];
};

typedef struct _HW_TIME_CONTEXT {
    struct _HW_DEVICE_EXTENSION *HwDeviceExtension;
    struct _HW_STREAM_OBJECT *HwStreamObject;
    enum TIME_FUNCTION Function;
    ULONG64 Time;
    ULONG64 SystemTime;
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

typedef struct _INTERRUPT_DATA {
    ULONG Flags;
    struct _ERROR_LOG_ENTRY LogEntry;
    struct _HW_STREAM_REQUEST_BLOCK *CompletedSRB;
    PVOID HwTimerRoutine;
    ULONG HwTimerValue;
    PVOID HwTimerContext;
    PVOID HwPriorityRoutine;
    enum _STREAM_PRIORITY HwPriorityLevel;
    PVOID HwPriorityContext;
    PVOID HwQueryClockRoutine;
    enum TIME_FUNCTION HwQueryClockFunction;
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

typedef struct _KINTERRUPT {
};

typedef struct _KSALLOCATOR_DISPATCH {
    PLONG InitializeAllocator;
    PVOID DeleteAllocator;
    PVOID *Allocate;
    PVOID Free;
};

typedef struct _KSCLOCK_DISPATCH {
    PUCHAR SetTimer;
    PUCHAR CancelTimer;
    PLONG64 CorrelatedTime;
    PVOID Resolution;
};

typedef struct _KSDEVICE {
    struct _KSDEVICE_DESCRIPTOR *Descriptor;
    PVOID Bag;
    PVOID Context;
    struct _DEVICE_OBJECT *FunctionalDeviceObject;
    struct _DEVICE_OBJECT *PhysicalDeviceObject;
    struct _DEVICE_OBJECT *NextDeviceObject;
    UCHAR Started;
    enum _SYSTEM_POWER_STATE SystemPowerState;
    enum _DEVICE_POWER_STATE DevicePowerState;
};

typedef struct _KSDEVICE_DESCRIPTOR {
    struct _KSDEVICE_DISPATCH *Dispatch;
    ULONG FilterDescriptorsCount;
    struct _KSFILTER_DESCRIPTOR **FilterDescriptors;
    ULONG Version;
    ULONG Flags;
};

typedef struct _KSDEVICE_DISPATCH {
    PLONG Add;
    PLONG Start;
    PLONG PostStart;
    PLONG QueryStop;
    PVOID CancelStop;
    PVOID Stop;
    PLONG QueryRemove;
    PVOID CancelRemove;
    PVOID Remove;
    PLONG QueryCapabilities;
    PVOID SurpriseRemoval;
    PLONG QueryPower;
    PVOID SetPower;
    PLONG QueryInterface;
};

typedef struct _KSEVENT_ENTRY {
    struct _LIST_ENTRY ListEntry;
    PVOID Object;
    struct KSDPC_ITEM *DpcItem;
    struct KSBUFFER_ITEM *BufferItem;
    struct KSEVENTDATA *EventData;
    ULONG NotificationType;
    struct KSEVENT_SET *EventSet;
    struct KSEVENT_ITEM *EventItem;
    struct _FILE_OBJECT *FileObject;
    ULONG SemaphoreAdjustment;
    ULONG Reserved;
    ULONG Flags;
};

typedef struct _KSFILTER {
    struct _KSFILTER_DESCRIPTOR *Descriptor;
    PVOID Bag;
    PVOID Context;
};

typedef struct _KSFILTERFACTORY {
    struct _KSFILTER_DESCRIPTOR *FilterDescriptor;
    PVOID Bag;
    PVOID Context;
};

typedef struct _KSFILTER_DESCRIPTOR {
    struct _KSFILTER_DISPATCH *Dispatch;
    struct KSAUTOMATION_TABLE_ *AutomationTable;
    ULONG Version;
    ULONG Flags;
    struct _GUID *ReferenceGuid;
    ULONG PinDescriptorsCount;
    ULONG PinDescriptorSize;
    struct _KSPIN_DESCRIPTOR_EX *PinDescriptors;
    ULONG CategoriesCount;
    struct _GUID *Categories;
    ULONG NodeDescriptorsCount;
    ULONG NodeDescriptorSize;
    struct _KSNODE_DESCRIPTOR *NodeDescriptors;
    ULONG ConnectionsCount;
    struct KSTOPOLOGY_CONNECTION *Connections;
    struct KSCOMPONENTID *ComponentId;
};

typedef struct _KSFILTER_DISPATCH {
    PLONG Create;
    PLONG Close;
    PLONG Process;
    PLONG Reset;
};

typedef struct _KSGATE {
    LONG Count;
    struct _KSGATE *NextGate;
};

typedef struct _KSMAPPING {
    union _LARGE_INTEGER PhysicalAddress;
    ULONG ByteCount;
    ULONG Alignment;
};

typedef struct _KSNODE_DESCRIPTOR {
    struct KSAUTOMATION_TABLE_ *AutomationTable;
    struct _GUID *Type;
    struct _GUID *Name;
};

typedef struct _KSPIN {
    struct _KSPIN_DESCRIPTOR_EX *Descriptor;
    PVOID Bag;
    PVOID Context;
    ULONG Id;
    enum KSPIN_COMMUNICATION Communication;
    UCHAR ConnectionIsExternal;
    struct KSIDENTIFIER ConnectionInterface;
    struct KSIDENTIFIER ConnectionMedium;
    struct KSPRIORITY ConnectionPriority;
    union KSDATAFORMAT *ConnectionFormat;
    struct KSMULTIPLE_ITEM *AttributeList;
    ULONG StreamHeaderSize;
    enum KSPIN_DATAFLOW DataFlow;
    enum KSSTATE DeviceState;
    enum KSRESET ResetState;
    enum KSSTATE ClientState;
};

typedef struct _KSPIN_DESCRIPTOR_EX {
    struct _KSPIN_DISPATCH *Dispatch;
    struct KSAUTOMATION_TABLE_ *AutomationTable;
    struct KSPIN_DESCRIPTOR PinDescriptor;
    ULONG Flags;
    ULONG InstancesPossible;
    ULONG InstancesNecessary;
    struct KSALLOCATOR_FRAMING_EX *AllocatorFraming;
    PLONG IntersectHandler;
};

typedef struct _KSPIN_DISPATCH {
    PLONG Create;
    PLONG Close;
    PLONG Process;
    PVOID Reset;
    PLONG SetDataFormat;
    PLONG SetDeviceState;
    PLONG Connect;
    PVOID Disconnect;
    struct _KSCLOCK_DISPATCH *Clock;
    struct _KSALLOCATOR_DISPATCH *Allocator;
};

typedef struct _KSPROCESSPIN {
    struct _KSPIN *Pin;
    struct _KSSTREAM_POINTER *StreamPointer;
    struct _KSPROCESSPIN *InPlaceCounterpart;
    struct _KSPROCESSPIN *DelegateBranch;
    struct _KSPROCESSPIN *CopySource;
    PVOID Data;
    ULONG BytesAvailable;
    ULONG BytesUsed;
    ULONG Flags;
    UCHAR Terminate;
};

typedef struct _KSPROCESSPIN_INDEXENTRY {
    struct _KSPROCESSPIN **Pins;
    ULONG Count;
};

typedef struct _KSSTREAM_POINTER {
    PVOID Context;
    struct _KSPIN *Pin;
    struct KSSTREAM_HEADER *StreamHeader;
    struct _KSSTREAM_POINTER_OFFSET *Offset;
    struct _KSSTREAM_POINTER_OFFSET OffsetIn;
    struct _KSSTREAM_POINTER_OFFSET OffsetOut;
};

typedef struct _KSSTREAM_POINTER_OFFSET {
    PUCHAR Data;
    struct _KSMAPPING *Mappings;
    ULONG Count;
    ULONG Remaining;
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

typedef struct _MAPPED_ADDRESS {
    struct _MAPPED_ADDRESS *NextMappedAddress;
    PVOID MappedAddress;
    ULONG NumberOfBytes;
    union _LARGE_INTEGER IoAddress;
    ULONG BusNumber;
};

typedef struct _MASTER_CLOCK_INFO {
    struct _FILE_OBJECT *ClockFileObject;
    struct KSCLOCK_FUNCTIONTABLE FunctionTable;
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

typedef struct _MINIDRIVER_INFORMATION {
    struct _HW_INITIALIZATION_DATA HwInitData;
    ULONG Flags;
    struct _KEVENT ControlEvent;
    ULONG UseCount;
    ULONG OpenCount;
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

typedef struct _PORT_CONFIGURATION_INFORMATION {
    ULONG SizeOfThisPacket;
    PVOID HwDeviceExtension;
    struct _DEVICE_OBJECT *ClassDeviceObject;
    struct _DEVICE_OBJECT *PhysicalDeviceObject;
    ULONG SystemIoBusNumber;
    enum _INTERFACE_TYPE AdapterInterfaceType;
    ULONG BusInterruptLevel;
    ULONG BusInterruptVector;
    enum _KINTERRUPT_MODE InterruptMode;
    ULONG DmaChannel;
    ULONG NumberOfAccessRanges;
    struct _ACCESS_RANGE *AccessRanges;
    ULONG StreamDescriptorSize;
    struct _IRP *Irp;
    struct _KINTERRUPT *InterruptObject;
    struct _DMA_ADAPTER *DmaAdapterObject;
    struct _DEVICE_OBJECT *RealPhysicalDeviceObject;
    ULONG Reserved[1];
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

typedef struct _QUEUE {
    ULONG64 QueueLock;
    struct _LIST_ENTRY ActiveQueue;
    struct _WORK_QUEUE_ITEM WorkItem;
    LONG WorkItemQueued;
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

typedef struct _STREAM_ADDITIONAL_INFO {
    struct KSPROPERTY_SET *StreamPropertiesArray;
    struct KSEVENT_SET *StreamEventsArray;
};

typedef struct _STREAM_DATA_INTERSECT_INFO {
    ULONG StreamNumber;
    union KSDATAFORMAT *DataRange;
    PVOID DataFormatBuffer;
    ULONG SizeOfDataFormatBuffer;
};

typedef struct _STREAM_HEADER_EX {
    ULONG WhichQueue;
    ULONG Id;
    struct _IO_STATUS_BLOCK IoStatus;
    struct _KEVENT CompletionEvent;
    struct _LIST_ENTRY ListEntry;
    ULONG ReferenceCount;
    struct _FILE_OBJECT *OwnerFileObject;
    struct _FILE_OBJECT *NextFileObject;
    ULONG Reserved;
    struct KSSTREAM_HEADER Header;
};

typedef struct _STREAM_OBJECT {
    struct _COMMON_OBJECT ComObj;
    struct _FILE_OBJECT *FilterFileObject;
    struct _FILE_OBJECT *FileObject;
    struct _FILTER_INSTANCE *FilterInstance;
    struct _HW_STREAM_OBJECT HwStreamObject;
    struct _LIST_ENTRY DataPendingQueue;
    struct _LIST_ENTRY ControlPendingQueue;
    struct _LIST_ENTRY OutstandingQueue;
    struct _LIST_ENTRY NextStream;
    struct _LIST_ENTRY NotifyList;
    struct _DEVICE_EXTENSION *DeviceExtension;
    struct _STREAM_OBJECT *NextNeedyStream;
    struct KSPROPERTY_SET *PropertyInfo;
    ULONG PropInfoSize;
    struct KSEVENT_SET *EventInfo;
    ULONG EventInfoCount;
    struct _KEVENT ControlSetMasterClock;
    ULONG64 LockUseMasterClock;
    struct _MASTER_CLOCK_INFO *MasterClockInfo;
    struct _CLOCK_INSTANCE *ClockInstance;
    struct KSPROPERTY_SET *ConstructedPropertyInfo;
    ULONG ConstructedPropInfoSize;
    enum KSSTATE CurrentState;
    UCHAR ReadyForNextControlReq;
    UCHAR ReadyForNextDataReq;
    UCHAR OnNeedyQueue;
    UCHAR InFlush;
    enum PIN_STATE PinState;
    enum PIN_TYPE PinType;
    struct _FILE_OBJECT *AllocatorFileObject;
    struct _FILE_OBJECT *NextFileObject;
    struct _LIST_ENTRY FreeQueue;
    ULONG64 FreeQueueLock;
    struct _KEVENT StopEvent;
    union KSDATAFORMAT *DataFormat;
    ULONG PinId;
    PVOID PinToHandle;
    struct KSALLOCATOR_FRAMING Framing;
    LONG EndOfStream;
    struct _QUEUE Queues[2];
    struct KSMETHOD_SET *MethodInfo;
    ULONG MethodInfoSize;
    UCHAR StandardTransport;
    LONG QueuedFramesPlusOne;
};

typedef struct _STREAM_PROPERTY_DESCRIPTOR {
    struct KSIDENTIFIER *Property;
    ULONG PropertySetID;
    PVOID PropertyInfo;
    ULONG PropertyInputSize;
    ULONG PropertyOutputSize;
};

typedef struct _STREAM_REQUEST_BLOCK {
    struct _HW_STREAM_REQUEST_BLOCK HwSRB;
    ULONG Flags;
    ULONG SequenceNumber;
    ULONG ExtensionLength;
    struct _MDL *Mdl;
    struct DMATransfer Transfer;
    union _LARGE_INTEGER PhysicalAddress;
    ULONG Length;
    PVOID Callback;
    struct _LIST_ENTRY SRBListEntry;
    struct _KEVENT Event;
    ULONG StreamHeaderSize;
    LONG DoNotCallBack;
    struct _KEVENT DmaEvent;
    UCHAR bMemPtrValid;
    PVOID *pMemPtrArray;
};

typedef struct _STREAM_TIME_REFERENCE {
    ULONG64 CurrentOnboardClockValue;
    union _LARGE_INTEGER OnboardClockFrequency;
    union _LARGE_INTEGER CurrentSystemTime;
    ULONG Reserved[2];
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

typedef union KSDATAFORMAT {
    ULONG FormatSize;
    ULONG Flags;
    ULONG SampleSize;
    ULONG Reserved;
    struct _GUID MajorFormat;
    struct _GUID SubFormat;
    struct _GUID Specifier;
    LONG64 Alignment;
};

typedef union _CommandData {
    struct KSSTREAM_HEADER *DataBufferArray;
    struct _HW_STREAM_DESCRIPTOR *StreamBuffer;
    enum KSSTATE StreamState;
    struct _STREAM_TIME_REFERENCE *TimeReference;
    struct _STREAM_PROPERTY_DESCRIPTOR *PropertyInfo;
    union KSDATAFORMAT *OpenFormat;
    struct _PORT_CONFIGURATION_INFORMATION *ConfigInfo;
    PVOID MasterClockHandle;
    enum _DEVICE_POWER_STATE DeviceState;
    struct _STREAM_DATA_INTERSECT_INFO *IntersectInfo;
    PVOID MethodInfo;
    LONG FilterTypeIndex;
    UCHAR Idle;
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

typedef enum KSPIN_COMMUNICATION {
    KSPIN_COMMUNICATION_NONE = 0,
    KSPIN_COMMUNICATION_SINK = 1,
    KSPIN_COMMUNICATION_SOURCE = 2,
    KSPIN_COMMUNICATION_BOTH = 3,
    KSPIN_COMMUNICATION_BRIDGE = 4
};

typedef enum KSPIN_DATAFLOW {
    KSPIN_DATAFLOW_IN = 1,
    KSPIN_DATAFLOW_OUT = 2
};

typedef enum KSRESET {
    KSRESET_BEGIN = 0,
    KSRESET_END = 1
};

typedef enum KSSTATE {
    KSSTATE_STOP = 0,
    KSSTATE_ACQUIRE = 1,
    KSSTATE_PAUSE = 2,
    KSSTATE_RUN = 3
};

typedef enum PIN_STATE {
    PinStopped = 0,
    PinStopPending = 1,
    PinPrepared = 2,
    PinRunning = 3
};

typedef enum PIN_TYPE {
    IrpSource = 0,
    IrpSink = 1
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

typedef enum TIME_FUNCTION {
    TIME_GET_STREAM_TIME = 0,
    TIME_READ_ONBOARD_CLOCK = 1,
    TIME_SET_ONBOARD_CLOCK = 2
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

typedef enum _SRB_COMMAND {
    SRB_READ_DATA = 0,
    SRB_WRITE_DATA = 1,
    SRB_GET_STREAM_STATE = 2,
    SRB_SET_STREAM_STATE = 3,
    SRB_SET_STREAM_PROPERTY = 4,
    SRB_GET_STREAM_PROPERTY = 5,
    SRB_OPEN_MASTER_CLOCK = 6,
    SRB_INDICATE_MASTER_CLOCK = 7,
    SRB_UNKNOWN_STREAM_COMMAND = 8,
    SRB_SET_STREAM_RATE = 9,
    SRB_PROPOSE_DATA_FORMAT = 10,
    SRB_CLOSE_MASTER_CLOCK = 11,
    SRB_PROPOSE_STREAM_RATE = 12,
    SRB_SET_DATA_FORMAT = 13,
    SRB_GET_DATA_FORMAT = 14,
    SRB_BEGIN_FLUSH = 15,
    SRB_END_FLUSH = 16,
    SRB_GET_STREAM_INFO = 256,
    SRB_OPEN_STREAM = 257,
    SRB_CLOSE_STREAM = 258,
    SRB_OPEN_DEVICE_INSTANCE = 259,
    SRB_CLOSE_DEVICE_INSTANCE = 260,
    SRB_GET_DEVICE_PROPERTY = 261,
    SRB_SET_DEVICE_PROPERTY = 262,
    SRB_INITIALIZE_DEVICE = 263,
    SRB_CHANGE_POWER_STATE = 264,
    SRB_UNINITIALIZE_DEVICE = 265,
    SRB_UNKNOWN_DEVICE_COMMAND = 266,
    SRB_PAGING_OUT_DRIVER = 267,
    SRB_GET_DATA_INTERSECTION = 268,
    SRB_INITIALIZATION_COMPLETE = 269,
    SRB_SURPRISE_REMOVAL = 270,
    SRB_DEVICE_METHOD = 271,
    SRB_STREAM_METHOD = 272,
    SRB_NOTIFY_IDLE_STATE = 273
};

typedef enum _STREAM_PRIORITY {
    High = 0,
    Dispatch = 1,
    Low = 2,
    LowToHigh = 3
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

typedef enum _WORK_QUEUE_TYPE {
    CriticalWorkQueue = 0,
    DelayedWorkQueue = 1,
    HyperCriticalWorkQueue = 2,
    NormalWorkQueue = 3,
    BackgroundWorkQueue = 4,
    RealTimeWorkQueue = 5,
    SuperCriticalWorkQueue = 6,
    MaximumWorkQueue = 7,
    CustomPriorityWorkQueue = 32
};

ClockDispatchTable;
ClockPropertyItems;
ClockPropertySets;
FilterDispatchTable;
GUID_STREAM_FDO_INTERFACE;
IoFileObjectType;
KSINTERFACESETID_Standard;
KSMEDIUMSETID_Standard;
KSMETHODSETID_StreamAllocator;
KSPROPSETID_Clock;
KSPROPSETID_Connection;
KSPROPSETID_Pin;
KSPROPSETID_Stream;
KSPROPSETID_StreamAllocator;
KSPROPSETID_StreamInterface;
KSPROPSETID_Topology;
PinInterfaces;
PinMediums;
StreamDispatchTable;
StreamInterfaceHandlers;
StreamStreamHandlers;
WPPTraceSuite;
WPP_GLOBAL_Control;
WPP_MAIN_CB;
WPP_ThisDir_CTLGUID_Stream;
_IMPORT_DESCRIPTOR_HAL;
_IMPORT_DESCRIPTOR_ks;
_IMPORT_DESCRIPTOR_ntoskrnl;
_NULL_IMPORT_DESCRIPTOR;
_guard_check_icall_fptr;
_guard_dispatch_icall_fptr;
_guard_fids_table;
_guard_iat_table;
_imp_ExAcquireFastMutex;
_imp_ExAllocatePoolWithTag;
_imp_ExFreePool;
_imp_ExGetPreviousMode;
_imp_ExQueueWorkItem;
_imp_ExReleaseFastMutex;
_imp_IoAcquireCancelSpinLock;
_imp_IoAllocateDriverObjectExtension;
_imp_IoAllocateErrorLogEntry;
_imp_IoAllocateIrp;
_imp_IoAllocateMdl;
_imp_IoAttachDeviceToDeviceStack;
_imp_IoBuildSynchronousFsdRequest;
_imp_IoCancelIrp;
_imp_IoConnectInterrupt;
_imp_IoCreateDevice;
_imp_IoDeleteDevice;
_imp_IoDetachDevice;
_imp_IoDisconnectInterrupt;
_imp_IoFileObjectType;
_imp_IoFreeIrp;
_imp_IoFreeMdl;
_imp_IoGetAttachedDeviceReference;
_imp_IoGetDeviceInterfaces;
_imp_IoGetDeviceProperty;
_imp_IoGetDmaAdapter;
_imp_IoGetDriverObjectExtension;
_imp_IoGetRelatedDeviceObject;
_imp_IoInitializeTimer;
_imp_IoOpenDeviceInterfaceRegistryKey;
_imp_IoOpenDeviceRegistryKey;
_imp_IoRegisterDeviceInterface;
_imp_IoReleaseCancelSpinLock;
_imp_IoSetDeviceInterfaceState;
_imp_IoStartTimer;
_imp_IoStopTimer;
_imp_IoWMIRegistrationControl;
_imp_IoWriteErrorLogEntry;
_imp_IofCallDriver;
_imp_IofCompleteRequest;
_imp_KeAcquireSpinLockAtDpcLevel;
_imp_KeAcquireSpinLockRaiseToDpc;
_imp_KeCancelTimer;
_imp_KeDelayExecutionThread;
_imp_KeFlushIoBuffers;
_imp_KeInitializeDpc;
_imp_KeInitializeEvent;
_imp_KeInitializeSpinLock;
_imp_KeInitializeTimer;
_imp_KeInsertQueueDpc;
_imp_KeLowerIrql;
_imp_KeQueryPerformanceCounter;
_imp_KeReleaseSpinLock;
_imp_KeReleaseSpinLockFromDpcLevel;
_imp_KeResetEvent;
_imp_KeSetEvent;
_imp_KeSetTimer;
_imp_KeSynchronizeExecution;
_imp_KeWaitForSingleObject;
_imp_KfRaiseIrql;
_imp_KsAddIrpToCancelableQueue;
_imp_KsAllocateDeviceHeader;
_imp_KsAllocateExtraData;
_imp_KsAllocateObjectHeader;
_imp_KsCacheMedium;
_imp_KsCreateDefaultAllocator;
_imp_KsDisableEvent;
_imp_KsDiscardEvent;
_imp_KsDispatchFastIoDeviceControlFailure;
_imp_KsDispatchFastReadFailure;
_imp_KsDispatchInvalidDeviceRequest;
_imp_KsDispatchIrp;
_imp_KsEnableEvent;
_imp_KsFreeDeviceHeader;
_imp_KsFreeEventList;
_imp_KsFreeObjectHeader;
_imp_KsGenerateEvent;
_imp_KsGenerateEventList;
_imp_KsMethodHandler;
_imp_KsNullDriverUnload;
_imp_KsPinDataIntersection;
_imp_KsPinPropertyHandler;
_imp_KsProbeStreamIrp;
_imp_KsPropertyHandler;
_imp_KsQueueWorkItem;
_imp_KsRegisterWorker;
_imp_KsRemoveIrpFromCancelableQueue;
_imp_KsSetDevicePnpAndBaseObject;
_imp_KsSetMajorFunctionHandler;
_imp_KsSetTargetDeviceObject;
_imp_KsStreamIo;
_imp_KsSynchronousIoControlDevice;
_imp_KsTopologyPropertyHandler;
_imp_KsUnregisterWorker;
_imp_KsUnserializeObjectPropertiesFromRegistry;
_imp_KsValidateClockCreateRequest;
_imp_KsValidateConnectRequest;
_imp_MmAllocatePagesForMdl;
_imp_MmBuildMdlForNonPagedPool;
_imp_MmFreePagesFromMdl;
_imp_MmGetSystemRoutineAddress;
_imp_MmMapIoSpaceEx;
_imp_MmMapLockedPages;
_imp_MmMapLockedPagesSpecifyCache;
_imp_MmPageEntireDriver;
_imp_MmResetDriverPaging;
_imp_MmUnmapIoSpace;
_imp_MmUnmapLockedPages;
_imp_ObReferenceObjectByHandle;
_imp_ObfDereferenceObject;
_imp_ObfReferenceObject;
_imp_PoCallDriver;
_imp_PoRequestPowerIrp;
_imp_PoStartNextPowerIrp;
_imp_ProbeForRead;
_imp_RtlAnsiStringToUnicodeString;
_imp_RtlFreeUnicodeString;
_imp_RtlInitAnsiString;
_imp_RtlInitUnicodeString;
_imp_RtlIntegerToUnicodeString;
_imp_ZwClose;
_imp_ZwEnumerateKey;
_imp_ZwOpenKey;
_imp_ZwQueryValueKey;
_imp_ZwSetValueKey;
_imp___C_specific_handler;
_imp__vsnprintf;
_imp__vsnwprintf;
_security_cookie;
_security_cookie_complement;
g_StreamFDOInterfaceTable;
load_config_used;
pfnEtwRegisterClassicProvider;
pfnEtwUnregister;
pfnWppGetVersion;
pfnWppQueryTraceInformation;
HAL_NULL_THUNK_DATA;
ks_NULL_THUNK_DATA;
ntoskrnl_NULL_THUNK_DATA;

AllocatorDispatchCreate();
BeginTransfer();
ClockDispatchClose();
ClockDispatchCreate();
ClockDispatchIoControl();
ComputeScatterGatherList();
DMABuffer::CompleteMapping();
DMABuffer::DoneMapping();
DMABuffer::StartMapping();
DMATransfer::Purge();
DllInitialize();
DllUnload();
DriverEntry();
EndTransfer();
FDOInterfaceDereference();
FDOInterfaceReference();
FilterDispatchClose();
FilterDispatchGlobalCreate();
FilterDispatchIoControl();
FreeFrame();
GetDeviceObjects();
GsDriverEntry();
HeaderTransfer();
IoCompletionRoutine();
IoWorker();
IoWorkerRead();
IoWorkerWrite();
KsDispatchFastIoDeviceControlFailure();
KsDispatchFastReadFailure();
KsDispatchInvalidDeviceRequest();
PrepareTransfer();
QICompletionRoutine();
RtlStringCbPrintfA();
RtlStringCbPrintfW();
SCAcquireReserveSrb();
SCBeginSynchronizedMinidriverCallin();
SCBeginUnsynchronizedMinidriverCallin();
SCBuildChildIds();
SCBuildRequestPacket();
SCBustedSynchPowerCompletionRoutine();
SCCallBackSrb();
SCCallNextDriver();
SCCancelOutstandingIrp();
SCCheckPowerDown();
SCCheckRequestsForIrp();
SCClockGetFunctionTable();
SCClockGetPhysicalTime();
SCClockGetSynchronizedTime();
SCClockGetTime();
SCCloseClockCallback();
SCCloseInstanceCallback();
SCCloseStreamCallback();
SCCompleteIrp();
SCCopyMinidriverEvents();
SCCopyMinidriverMethods();
SCCopyMinidriverProperties();
SCCreateChildPdo();
SCDataIntersectionCallback();
SCDequeueAndDeleteSrb();
SCDequeueAndStartStreamDataRequest();
SCDereferenceDriver();
SCDevIrpCompletionWorker();
SCDevWakeCompletionRoutine();
SCDummyMinidriverRoutine();
SCEnableDeviceEventSynchronized();
SCEnableEventSynchronized();
SCEndSynchronizedMinidriverDeviceCallin();
SCEndSynchronizedMinidriverStreamCallin();
SCEndUnsynchronizedMinidriverDeviceCallin();
SCEndUnsynchronizedMinidriverStreamCallin();
SCEnumerateChildren();
SCErrorDataSRB();
SCFilterPinInstances();
SCFilterPinIntersectionHandler();
SCFilterPinPropertyHandler();
SCFilterTopologyHandler();
SCFreeAllResources();
SCFreeDeadEvents();
SCGetDeadListSynchronized();
SCGetInterruptState();
SCGetMasterClock();
SCGetPhysicalTime();
SCGetRegistryValue();
SCGetStreamDeviceState();
SCGetStreamDeviceStateCallback();
SCGetStreamHeaderSize();
SCGetStreamTime();
SCGetSynchronizedTime();
SCHandleQueryInterface();
SCInitializeCallback();
SCInsertFiltersInDevice();
SCInsertStreamInFilter();
SCIntersectHandler();
SCIssueRequestToDevice();
SCLogError();
SCMinidriverDevicePropertyHandler();
SCMinidriverDeviceTimerDpc();
SCMinidriverStreamPropertyHandler();
SCMinidriverStreamTimerDpc();
SCMinidriverTimeFunction();
SCNotifyMinidriverCancel();
SCOpenMasterCallback();
SCOpenMinidriverInstance();
SCOpenStreamCallback();
SCPowerCallback();
SCPowerCompletionWorker();
SCProcessCompletedDataRequest();
SCProcessCompletedMethodRequest();
SCProcessCompletedPropertyRequest();
SCProcessCompletedRequest();
SCProcessDataTransfer();
SCProcessPriorityChangeRequest();
SCQueryCapabilities();
SCQueryEnumId();
SCQueryWorker();
SCRedispatchPendedIrps();
SCReferenceDriver();
SCReferenceSwEnumDriver();
SCRequestDpcForStream();
SCSendSurpriseNotification();
SCSendUnknownCommand();
SCSetCurrentDPowerState();
SCSetMasterClock();
SCSetMasterClockWhenDeviceInaccessible();
SCShowIoPending();
SCSignalSRBEvent();
SCStartMinidriverRequest();
SCStartRequestOnStream();
SCStartWorker();
SCStreamAllocator();
SCStreamDeviceRate();
SCStreamDeviceRateCapability();
SCStreamDeviceState();
SCStreamInfoCallback();
SCStreamProposeNewFormat();
SCStreamSetFormat();
SCSubmitIdleNotification();
SCSubmitRequest();
SCSynchCompletionRoutine();
SCSynchPowerCompletionRoutine();
SCUninitializeCallback();
SCUninitializeMinidriver();
SCUnknownPNPCallback();
SCUnknownPowerCallback();
SCUpdateMinidriverEvents();
SCUpdateMinidriverProperties();
SCWaitForOutstandingIo();
SciCreateSymbolicLinks();
SciFreeFilterInstance();
SciOnFilterStreamDescriptor();
SciSetMasterClockInfo();
StreamClassAbortOutstandingRequests();
StreamClassCallAtNewPriority();
StreamClassCancelOutstandingIrp();
StreamClassCancelPendingIrp();
StreamClassCleanup();
StreamClassCompleteRequestAndMarkQueueReady();
StreamClassDebugAssert();
StreamClassDebugPrint();
StreamClassDeviceNotification();
StreamClassDisableDeviceEventHandler();
StreamClassDisableEventHandler();
StreamClassDpc();
StreamClassEnableDeviceEventHandler();
StreamClassEnableEventHandler();
StreamClassFilterReenumerateStreams();
StreamClassForwardUnsupported();
StreamClassGetDmaBuffer();
StreamClassGetNextEvent();
StreamClassGetPhysicalAddress();
StreamClassInterrupt();
StreamClassLogError();
StreamClassMinidriverDeviceGetProperty();
StreamClassMinidriverDeviceMethod();
StreamClassMinidriverDeviceSetProperty();
StreamClassMinidriverStreamGetProperty();
StreamClassMinidriverStreamSetProperty();
StreamClassPassThroughIrp();
StreamClassPnP();
StreamClassPnPAddDevice();
StreamClassPnPAddDeviceWorker();
StreamClassPower();
StreamClassQueryMasterClock();
StreamClassQueryMasterClockSync();
StreamClassReadWriteConfig();
StreamClassReenumerateStreams();
StreamClassRegisterAdapter();
StreamClassRegisterFilterWithNoKSPins();
StreamClassScheduleTimer();
StreamClassStreamNotification();
StreamClassSynchronizeExecution();
StreamClassTickHandler();
StreamDispatchCleanup();
StreamDispatchClose();
StreamDispatchCreate();
StreamDispatchIoControl();
StreamFlushIo();
WppClassicProviderCallback();
WppInitKm();
WppLoadTracingSupport();
WppTraceCallback();
_C_specific_handler();
_GSHandlerCheck();
_GSHandlerCheckCommon();
_report_gsfailure();
_security_check_cookie();
_security_init_cookie();
dma64ConstructBuffer();
dma64DestroyBuffer();
dma64InitBuffer();
dma64InitTransfer();
guard_check_icall_nop();
guard_dispatch_icall_nop();
memcpy();
memmove();
memset();
