struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct _ACTIVATION_CONTEXT;
struct _ACTIVATION_CONTEXT_DATA;
struct _ACTIVATION_CONTEXT_STACK;
struct _ASSEMBLY_STORAGE_MAP;
struct _AVRF_AVL_TREE;
struct _AVRF_DEADLOCK_GLOBALS;
struct _AVRF_DEADLOCK_NODE;
struct _AVRF_DEADLOCK_RESOURCE;
struct _AVRF_DEADLOCK_THREAD;
struct _AVRF_EXCEPTION_LOG_ENTRY;
struct _AVRF_IO_WORKITEM;
struct _AVRF_LEAKS;
struct _AVRF_LEAK_LOCK;
struct _AVRF_SRWLOCKS;
struct _AVRF_SRWLOCK_NODE;
struct _AVRF_SRWLOCK_OWNER_NODE;
struct _AVRF_THREAD_ENTRY;
struct _AVRF_TRACKER;
struct _AVRF_TRACKER_ENTRY;
struct _CLIENT_ID;
struct _CONTEXT;
struct _CRITICAL_SECTION_SPLAY_NODE;
struct _CURDIR;
struct _CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG;
struct _DLL_RESOURCE;
struct _DPH_BLOCK_INFORMATION;
struct _DPH_DELAY_FREE_QUEUE_ENTRY;
struct _DPH_HEAP_BLOCK;
struct _DPH_HEAP_ROOT;
struct _EXCEPTION_RECORD;
struct _EXCEPTION_REGISTRATION_RECORD;
struct _FLS_CALLBACK_INFO;
struct _GDI_TEB_BATCH;
struct _GUID;
struct _IMAGE_DATA_DIRECTORY;
struct _IMAGE_DOS_HEADER;
struct _IMAGE_FILE_HEADER;
struct _IMAGE_NT_HEADERS64;
struct _IMAGE_OPTIONAL_HEADER64;
struct _IO_STATUS_BLOCK;
struct _KSYSTEM_TIME;
struct _KUSER_SHARED_DATA;
struct _LDRP_CSLIST;
struct _LDRP_LOAD_CONTEXT;
struct _LDR_DATA_TABLE_ENTRY;
struct _LDR_DDAG_NODE;
struct _LDR_SERVICE_TAG_RECORD;
struct _LEAP_SECOND_DATA;
struct _LIST_ENTRY;
struct _LUID;
struct _M128A;
struct _NT_TIB;
struct _PEB;
struct _PEB_LDR_DATA;
struct _PROCESSOR_NUMBER;
struct _PS_MITIGATION_AUDIT_OPTIONS_MAP;
struct _PS_MITIGATION_OPTIONS_MAP;
struct _RESOURCE_RECORD;
struct _RESOURCE_RECORD_SIZE;
struct _RESOURCE_TRACKER;
struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME;
struct _RTL_AVL_TABLE;
struct _RTL_AVL_TREE;
struct _RTL_BALANCED_LINKS;
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
struct _RTL_SRWLOCK;
struct _RTL_TRACE_BLOCK;
struct _RTL_USER_PROCESS_PARAMETERS;
struct _SINGLE_LIST_ENTRY;
struct _STRING;
struct _TEB;
struct _TEB_ACTIVE_FRAME;
struct _TEB_ACTIVE_FRAME_CONTEXT;
struct _TP_CALLBACK_ENVIRON_V3;
struct _TP_CALLBACK_INSTANCE;
struct _TP_CLEANUP_GROUP;
struct _TP_IO;
struct _TP_POOL;
struct _UNICODE_STRING;
struct _XSAVE_FORMAT;
struct _XSTATE_CONFIGURATION;
struct _XSTATE_FEATURE;

union _DPH_BLOCK_INTERNAL_INFORMATION;
union _DPH_DELAY_FREE_FLAGS;
union _DPH_HEAP_BLOCK_FLAGS;
union _LARGE_INTEGER;
union _SLIST_HEADER;
union _ULARGE_INTEGER;

enum AVRF_IO_WORKITEM_TYPE;
enum AVRF_SRWLOCK_MODE;
enum DISPLAYCONFIG_SCANLINE_ORDERING;
enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS;
enum JOB_OBJECT_NET_RATE_CONTROL_FLAGS;
enum PS_CREATE_STATE;
enum ReplacesCorHdrNumericDefines;
enum SE_WS_APPX_SIGNATURE_ORIGIN;
enum _ALTERNATIVE_ARCHITECTURE_TYPE;
enum _AVRF_DEADLOCK_RESOURCE_TYPE;
enum _EXCEPTION_DISPOSITION;
enum _JOBOBJECTINFOCLASS;
enum _LDR_DDAG_STATE;
enum _LDR_DLL_LOAD_REASON;
enum _NT_PRODUCT_TYPE;
enum _PS_ATTRIBUTE_NUM;
enum _PS_MITIGATION_OPTION;
enum _PS_PROTECTED_SIGNER;
enum _PS_PROTECTED_TYPE;
enum _PS_STD_HANDLE_STATE;
enum _PS_WAKE_REASON;
enum _RESOURCE_RECORD_TYPE;
enum _RTL_GENERIC_COMPARE_RESULTS;
enum _SYSTEM_PROCESS_CLASSIFICATION;
enum _TP_CALLBACK_PRIORITY;
enum _USER_ACTIVITY_PRESENCE;

typedef struct LIST_ENTRY32 {
    ULONG Flink;
    ULONG Blink;
};

typedef struct LIST_ENTRY64 {
    ULONG64 Flink;
    ULONG64 Blink;
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

typedef struct _AVRF_AVL_TREE {
    struct _RTL_AVL_TABLE List;
    struct _RTL_SRWLOCK Lock;
};

typedef struct _AVRF_DEADLOCK_GLOBALS {
    ULONG Nodes[2];
    ULONG Resources[2];
    ULONG Threads[2];
    ULONG64 BytesAllocated;
    struct _LIST_ENTRY *ResourceDatabase;
    struct _LIST_ENTRY *ThreadDatabase;
    ULONG AllocationFailures;
    ULONG NodesTrimmedBasedOnAge;
    ULONG NodesTrimmedBasedOnCount;
    ULONG NodesSearched;
    ULONG MaxNodesSearched;
    ULONG SequenceNumber;
    ULONG RecursionDepthLimit;
    ULONG SearchedNodesLimit;
    ULONG DepthLimitHits;
    ULONG SearchLimitHits;
    ULONG ABC_ACB_Skipped;
    ULONG OutOfOrderReleases;
    ULONG NodesReleasedOutOfOrder;
    ULONG NodeLevelCounter[8];
    ULONG GraphNodes[8];
    ULONG TotalReleases;
    ULONG RootNodesDeleted;
    ULONG ForgetHistoryCounter;
    ULONG PoolTrimCounter;
    struct _LIST_ENTRY FreeResourceList;
    struct _LIST_ENTRY FreeThreadList;
    struct _LIST_ENTRY FreeNodeList;
    ULONG FreeResourceCount;
    ULONG FreeThreadCount;
    ULONG FreeNodeCount;
    PVOID Instigator;
    ULONG NumberOfParticipants;
    struct _AVRF_DEADLOCK_NODE *Participant[32];
    ULONG CacheReductionInProgress;
};

typedef struct _AVRF_DEADLOCK_NODE {
    struct _AVRF_DEADLOCK_NODE *Parent;
    struct _LIST_ENTRY ChildrenList;
    struct _LIST_ENTRY SiblingsList;
    struct _LIST_ENTRY ResourceList;
    struct _LIST_ENTRY FreeListEntry;
    struct _AVRF_DEADLOCK_RESOURCE *Root;
    struct _AVRF_DEADLOCK_THREAD *ThreadEntry;
    ULONG Active : 1;
    ULONG OnlyTryAcquireUsed : 1;
    ULONG ReleasedOutOfOrder : 1;
    ULONG SequenceNumber : 29;
    PVOID StackTrace[32];
    PVOID ParentStackTrace[32];
};

typedef struct _AVRF_DEADLOCK_RESOURCE {
    enum _AVRF_DEADLOCK_RESOURCE_TYPE Type;
    ULONG NodeCount : 16;
    ULONG RecursionCount : 16;
    PVOID ResourceAddress;
    struct _AVRF_DEADLOCK_THREAD *ThreadOwner;
    struct _LIST_ENTRY ResourceList;
    struct _LIST_ENTRY HashChainList;
    struct _LIST_ENTRY FreeListEntry;
    PVOID StackTrace[32];
    PVOID LastAcquireTrace[32];
    PVOID LastReleaseTrace[32];
};

typedef struct _AVRF_DEADLOCK_THREAD {
    PVOID Thread;
    struct _AVRF_DEADLOCK_NODE *CurrentTopNode;
    struct _LIST_ENTRY ListEntry;
    struct _LIST_ENTRY FreeListEntry;
    ULONG NodeCount;
};

typedef struct _AVRF_EXCEPTION_LOG_ENTRY {
    PVOID ThreadId;
    ULONG ExceptionCode;
    PVOID ExceptionAddress;
    PVOID ExceptionRecord;
    PVOID ContextRecord;
    PVOID Trace[32];
};

typedef struct _AVRF_IO_WORKITEM {
    struct _LIST_ENTRY PendingIoLinks;
    enum AVRF_IO_WORKITEM_TYPE Type;
    PVOID ThreadId;
    PVOID RealHandle;
    PVOID FileHandle;
    PVOID CompletionPort;
    PVOID Event;
    PVOID EventWaitHandle;
    PVOID OriginalEvent;
    PVOID OriginalApcRoutine;
    PVOID OriginalApcContext;
    PVOID OriginalCallback;
    struct _TP_IO *TpIo;
    ULONG IoStatusFlags;
    struct _IO_STATUS_BLOCK IoStatusBlock;
    struct _IO_STATUS_BLOCK *OriginalIoStatusBlock;
    LONG IOSBOnStack;
    ULONG64 IOSBChecksum;
    PVOID Buffer;
    PVOID OriginalBuffer;
    LONG BufferOnStack;
    ULONG64 BufferChecksum;
    ULONG Length;
    PVOID StackAddress;
    LONG VerifyStackAddress;
    LONG IoCompleted;
    ULONG IoNotificationFlags;
    PVOID StackTrace[32];
    ULONG StackTraceLength;
};

typedef struct _AVRF_LEAKS {
    LONG LeakInitialized;
    PVOID Lookaside;
    struct _RESOURCE_TRACKER Dlls;
    ULONG Outstanding;
    ULONG NotFound;
    struct _AVRF_LEAK_LOCK TlsLockFailOver;
    struct _RESOURCE_TRACKER HeapTracker;
};

typedef struct _AVRF_LEAK_LOCK {
    LONG LockLog;
    LONG LockRemove;
};

typedef struct _AVRF_SRWLOCKS {
    LONG Initialized;
    LONG IgnoreVerification;
    PVOID Lookaside;
    ULONG NumInitialized;
    ULONG NumStaticInitialized;
    ULONG NumReInitialized;
    ULONG NumAcquiredShared;
    ULONG NumAcquiredExclusive;
    ULONG NumReleasedShared;
    ULONG NumReleasedExclusive;
    ULONG NumConditionVariable;
    struct _AVRF_AVL_TREE SRWLocks;
};

typedef struct _AVRF_SRWLOCK_NODE {
    struct _RTL_SRWLOCK *SRWLock;
    PVOID InitializeThread;
    PVOID InitStackTrace;
    struct _AVRF_AVL_TREE Owners;
};

typedef struct _AVRF_SRWLOCK_OWNER_NODE {
    PVOID ThreadId;
    enum AVRF_SRWLOCK_MODE Mode;
    PVOID AcquireStackTrace;
    ULONG AcquireCount;
};

typedef struct _AVRF_THREAD_ENTRY {
    struct _LIST_ENTRY HashChain;
    PVOID Id;
    PULONG Function;
    PVOID Parameter;
    PVOID ParentThreadId;
    ULONG64 StackSize;
    ULONG CreationFlags;
};

typedef struct _AVRF_TRACKER {
    ULONG Size;
    ULONG Index;
    PVOID EntryReplaceCallback;
    struct _RTL_CRITICAL_SECTION Lock;
    struct _AVRF_TRACKER_ENTRY Entry[1];
};

typedef struct _AVRF_TRACKER_ENTRY {
    USHORT Type;
    USHORT TraceDepth;
    LONG TrackerIndex;
    union _LARGE_INTEGER Time;
    PVOID Info[4];
    PVOID Trace[32];
};

typedef struct _CLIENT_ID {
    PVOID UniqueProcess;
    PVOID UniqueThread;
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

typedef struct _CRITICAL_SECTION_SPLAY_NODE {
    struct _RTL_SPLAY_LINKS SplayLinks;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    struct _RTL_CRITICAL_SECTION_DEBUG *DebugInfo;
    struct _CRITICAL_SECTION_SPLAY_NODE *NextNode;
    PVOID EnterThread;
    PVOID WaitThread;
    PVOID TryEnterThread;
    PVOID LeaveThread;
    PVOID InitializeThread;
    ULONG EnterCount;
    ULONG ContentionCount;
};

typedef struct _CURDIR {
    struct _UNICODE_STRING DosPath;
    PVOID Handle;
};

typedef struct _CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG {
    ULONG Size;
    PWCHAR TriggerId;
};

typedef struct _DLL_RESOURCE {
    struct _RESOURCE_RECORD_SIZE Module;
    struct _LDR_DATA_TABLE_ENTRY *Ldr;
    struct _RESOURCE_TRACKER Tracker[9];
};

typedef struct _DPH_BLOCK_INFORMATION {
    ULONG StartStamp;
    ULONG PaddingStart;
    PVOID Heap;
    ULONG64 RequestedSize;
    ULONG64 ActualSize;
    union _DPH_BLOCK_INTERNAL_INFORMATION Internal;
    PVOID StackTrace;
    ULONG PaddingEnd;
    ULONG EndStamp;
};

typedef struct _DPH_DELAY_FREE_QUEUE_ENTRY {
    union _DPH_DELAY_FREE_FLAGS Flags;
    struct _DPH_DELAY_FREE_QUEUE_ENTRY *NextEntry;
};

typedef struct _DPH_HEAP_BLOCK {
    struct _DPH_HEAP_BLOCK *NextFullPageHeapDelayedNode;
    struct _DPH_DELAY_FREE_QUEUE_ENTRY DelayQueueEntry;
    struct _LIST_ENTRY LookasideEntry;
    struct _LIST_ENTRY UnusedListEntry;
    struct _LIST_ENTRY VirtualListEntry;
    struct _LIST_ENTRY FreeListEntry;
    struct _RTL_BALANCED_LINKS TableLinks;
    PUCHAR pUserAllocation;
    PUCHAR pVirtualBlock;
    ULONG64 nVirtualBlockSize;
    union _DPH_HEAP_BLOCK_FLAGS Flags;
    ULONG Unused1;
    ULONG64 nUserRequestedSize;
    struct _LIST_ENTRY AdjacencyEntry;
    ULONG Unused2;
    ULONG ThreadId;
    PVOID StackTrace;
};

typedef struct _DPH_HEAP_ROOT {
    ULONG Signature;
    ULONG HeapFlags;
    struct _RTL_CRITICAL_SECTION *HeapCritSect;
    ULONG NodesCount;
    struct _LIST_ENTRY VirtualStorageList;
    ULONG VirtualStorageCount;
    PVOID PoolReservedLimit;
    struct _RTL_AVL_TABLE BusyNodesTable;
    struct _DPH_HEAP_BLOCK *NodeToAllocate;
    ULONG nBusyAllocations;
    ULONG64 nBusyAllocationBytesCommitted;
    struct _DPH_HEAP_BLOCK *pFreeAllocationListHead;
    struct _DPH_HEAP_BLOCK *FullPageHeapDelayedListTail;
    struct _DPH_DELAY_FREE_QUEUE_ENTRY *DelayFreeQueueHead;
    struct _DPH_DELAY_FREE_QUEUE_ENTRY *DelayFreeQueueTail;
    ULONG DelayFreeCount;
    struct _LIST_ENTRY LookasideList;
    ULONG LookasideCount;
    struct _LIST_ENTRY UnusedNodeList;
    ULONG UnusedNodeCount;
    ULONG64 nBusyAllocationBytesAccessible;
    struct _LIST_ENTRY GeneralizedFreeList;
    ULONG FreeCount;
    PVOID PoolCommitLimit;
    struct _LIST_ENTRY NextHeap;
    ULONG ExtraFlags;
    ULONG Seed;
    PVOID NormalHeap;
    struct _RTL_TRACE_BLOCK *CreateStackTrace;
    PVOID ThreadInHeap;
    struct _LIST_ENTRY BusyListHead;
    struct _LIST_ENTRY SpecializedFreeList[64];
    PVOID DelayFreeListLookup[257];
    struct _RTL_CRITICAL_SECTION HeapCritSectionStorage;
    ULONG64 nDelayFreeSize;
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

typedef struct _FLS_CALLBACK_INFO {
};

typedef struct _GDI_TEB_BATCH {
    ULONG Offset : 31;
    ULONG HasRenderingCommand : 1;
    ULONG64 HDC;
    ULONG Buffer[310];
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

typedef struct _IO_STATUS_BLOCK {
    LONG Status;
    PVOID Pointer;
    ULONG64 Information;
};

typedef struct _KSYSTEM_TIME {
    ULONG LowPart;
    LONG High1Time;
    LONG High2Time;
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

typedef struct _LDRP_CSLIST {
    struct _SINGLE_LIST_ENTRY *Tail;
};

typedef struct _LDRP_LOAD_CONTEXT {
};

typedef struct _LDR_DATA_TABLE_ENTRY {
    struct _LIST_ENTRY InLoadOrderLinks;
    struct _LIST_ENTRY InMemoryOrderLinks;
    struct _LIST_ENTRY InInitializationOrderLinks;
    PVOID DllBase;
    PVOID EntryPoint;
    ULONG SizeOfImage;
    struct _UNICODE_STRING FullDllName;
    struct _UNICODE_STRING BaseDllName;
    UCHAR FlagGroup[4];
    ULONG Flags;
    ULONG PackagedBinary : 1;
    ULONG MarkedForRemoval : 1;
    ULONG ImageDll : 1;
    ULONG LoadNotificationsSent : 1;
    ULONG TelemetryEntryProcessed : 1;
    ULONG ProcessStaticImport : 1;
    ULONG InLegacyLists : 1;
    ULONG InIndexes : 1;
    ULONG ShimDll : 1;
    ULONG InExceptionTable : 1;
    ULONG ReservedFlags1 : 2;
    ULONG LoadInProgress : 1;
    ULONG LoadConfigProcessed : 1;
    ULONG EntryProcessed : 1;
    ULONG ProtectDelayLoad : 1;
    ULONG ReservedFlags3 : 2;
    ULONG DontCallForThreads : 1;
    ULONG ProcessAttachCalled : 1;
    ULONG ProcessAttachFailed : 1;
    ULONG CorDeferredValidate : 1;
    ULONG CorImage : 1;
    ULONG DontRelocate : 1;
    ULONG CorILOnly : 1;
    ULONG ChpeImage : 1;
    ULONG ReservedFlags5 : 2;
    ULONG Redirected : 1;
    ULONG ReservedFlags6 : 2;
    ULONG CompatDatabaseProcessed : 1;
    USHORT ObsoleteLoadCount;
    USHORT TlsIndex;
    struct _LIST_ENTRY HashLinks;
    ULONG TimeDateStamp;
    struct _ACTIVATION_CONTEXT *EntryPointActivationContext;
    PVOID Lock;
    struct _LDR_DDAG_NODE *DdagNode;
    struct _LIST_ENTRY NodeModuleLink;
    struct _LDRP_LOAD_CONTEXT *LoadContext;
    PVOID ParentDllBase;
    PVOID SwitchBackContext;
    struct _RTL_BALANCED_NODE BaseAddressIndexNode;
    struct _RTL_BALANCED_NODE MappingInfoIndexNode;
    ULONG64 OriginalBase;
    union _LARGE_INTEGER LoadTime;
    ULONG BaseNameHashValue;
    enum _LDR_DLL_LOAD_REASON LoadReason;
    ULONG ImplicitPathOptions;
    ULONG ReferenceCount;
    ULONG DependentLoadFlags;
    UCHAR SigningLevel;
};

typedef struct _LDR_DDAG_NODE {
    struct _LIST_ENTRY Modules;
    struct _LDR_SERVICE_TAG_RECORD *ServiceTagList;
    ULONG LoadCount;
    ULONG LoadWhileUnloadingCount;
    ULONG LowestLink;
    struct _LDRP_CSLIST Dependencies;
    struct _LDRP_CSLIST IncomingDependencies;
    enum _LDR_DDAG_STATE State;
    struct _SINGLE_LIST_ENTRY CondenseLink;
    ULONG PreorderNumber;
};

typedef struct _LDR_SERVICE_TAG_RECORD {
    struct _LDR_SERVICE_TAG_RECORD *Next;
    ULONG ServiceTag;
};

typedef struct _LEAP_SECOND_DATA {
};

typedef struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

typedef struct _LUID {
    ULONG LowPart;
    LONG HighPart;
};

typedef struct _M128A {
    ULONG64 Low;
    LONG64 High;
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

typedef struct _RESOURCE_RECORD {
    PVOID Address;
    PVOID Stack;
    ULONG64 StackOwnedByOther : 1;
};

typedef struct _RESOURCE_RECORD_SIZE {
    PVOID Address;
    PVOID Stack;
    ULONG64 Size;
};

typedef struct _RESOURCE_TRACKER {
    struct _RTL_AVL_TABLE List;
    struct _RTL_SRWLOCK ListLock;
};

typedef struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME {
    struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME *Previous;
    struct _ACTIVATION_CONTEXT *ActivationContext;
    ULONG Flags;
};

typedef struct _RTL_AVL_TABLE {
    struct _RTL_BALANCED_LINKS BalancedRoot;
    PVOID OrderedPointer;
    ULONG WhichOrderedElement;
    ULONG NumberGenericTableElements;
    ULONG DepthOfTree;
    struct _RTL_BALANCED_LINKS *RestartKey;
    ULONG DeleteCount;
    enum _RTL_GENERIC_COMPARE_RESULTS *CompareRoutine;
    PVOID *AllocateRoutine;
    PVOID FreeRoutine;
    PVOID TableContext;
};

typedef struct _RTL_AVL_TREE {
    struct _RTL_BALANCED_NODE *Root;
};

typedef struct _RTL_BALANCED_LINKS {
    struct _RTL_BALANCED_LINKS *Parent;
    struct _RTL_BALANCED_LINKS *LeftChild;
    struct _RTL_BALANCED_LINKS *RightChild;
    CHAR Balance;
    UCHAR Reserved[3];
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

typedef struct _RTL_SRWLOCK {
    ULONG64 Locked : 1;
    ULONG64 Waiting : 1;
    ULONG64 Waking : 1;
    ULONG64 MultipleShared : 1;
    ULONG64 Shared : 60;
    ULONG64 Value;
    PVOID Ptr;
};

typedef struct _RTL_TRACE_BLOCK {
    ULONG Magic;
    ULONG Count;
    ULONG Size;
    ULONG64 UserCount;
    ULONG64 UserSize;
    PVOID UserContext;
    struct _RTL_TRACE_BLOCK *Next;
    PVOID *Trace;
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

typedef struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
};

typedef struct _STRING {
    USHORT Length;
    USHORT MaximumLength;
    PCHAR Buffer;
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

typedef struct _TP_IO {
};

typedef struct _TP_POOL {
};

typedef struct _UNICODE_STRING {
    USHORT Length;
    USHORT MaximumLength;
    PWCHAR Buffer;
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

typedef union _DPH_BLOCK_INTERNAL_INFORMATION {
    union {
        struct _DPH_DELAY_FREE_QUEUE_ENTRY DelayQueueEntry;
        struct _LIST_ENTRY BusyListEntry;
    } NormalHeap;
    struct {
        PVOID UserValue;
        ULONG UserFlags;
    } PageHeap;
};

typedef union _DPH_DELAY_FREE_FLAGS {
    ULONG PageHeapBlock : 1;
    ULONG NormalHeapBlock : 1;
    ULONG Lookaside : 1;
    ULONG All;
};

typedef union _DPH_HEAP_BLOCK_FLAGS {
    ULONG Virtual : 1;
    ULONG UnusedNode : 1;
    ULONG Delay : 1;
    ULONG Lookaside : 1;
    ULONG Free : 1;
    ULONG Busy : 1;
    ULONG All;
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

typedef enum AVRF_IO_WORKITEM_TYPE {
    AVRF_IO_WORKITEM_PENDINGIO = 0,
    AVRF_IO_WORKITEM_POST_IOPACKET = 1,
    AVRF_IO_WORKITEM_MAXVALUE = 2
};

typedef enum AVRF_SRWLOCK_MODE {
    AVRF_SRWLOCK_MODE_SHARED = 0,
    AVRF_SRWLOCK_MODE_EXCLUSIVE = 1
};

typedef enum DISPLAYCONFIG_SCANLINE_ORDERING {
    DISPLAYCONFIG_SCANLINE_ORDERING_UNSPECIFIED = 0,
    DISPLAYCONFIG_SCANLINE_ORDERING_PROGRESSIVE = 1,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED = 2,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_UPPERFIELDFIRST = 2,
    DISPLAYCONFIG_SCANLINE_ORDERING_INTERLACED_LOWERFIELDFIRST = 3,
    DISPLAYCONFIG_SCANLINE_ORDERING_FORCE_UINT32 = -1
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

typedef enum _AVRF_DEADLOCK_RESOURCE_TYPE {
    AVrfpDeadlockTypeUnknown = 0,
    AVrfpDeadlockTypeCriticalSection = 1,
    AVrfpDeadlockTypeMaximum = 2
};

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution = 0,
    ExceptionContinueSearch = 1,
    ExceptionNestedException = 2,
    ExceptionCollidedUnwind = 3
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

typedef enum _LDR_DDAG_STATE {
    LdrModulesMerged = -5,
    LdrModulesInitError = -4,
    LdrModulesSnapError = -3,
    LdrModulesUnloaded = -2,
    LdrModulesUnloading = -1,
    LdrModulesPlaceHolder = 0,
    LdrModulesMapping = 1,
    LdrModulesMapped = 2,
    LdrModulesWaitingForDependencies = 3,
    LdrModulesSnapping = 4,
    LdrModulesSnapped = 5,
    LdrModulesCondensed = 6,
    LdrModulesReadyToInit = 7,
    LdrModulesInitializing = 8,
    LdrModulesReadyToRun = 9
};

typedef enum _LDR_DLL_LOAD_REASON {
    LoadReasonStaticDependency = 0,
    LoadReasonStaticForwarderDependency = 1,
    LoadReasonDynamicForwarderDependency = 2,
    LoadReasonDelayloadDependency = 3,
    LoadReasonDynamicLoad = 4,
    LoadReasonAsImageLoad = 5,
    LoadReasonAsDataLoad = 6,
    LoadReasonEnclavePrimary = 7,
    LoadReasonEnclaveDependency = 8,
    LoadReasonUnknown = -1
};

typedef enum _NT_PRODUCT_TYPE {
    NtProductWinNt = 1,
    NtProductLanManNt = 2,
    NtProductServer = 3
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

typedef enum _RESOURCE_RECORD_TYPE {
    LEAK_RESOURCE_HEAP_ALLOCATION = 0,
    LEAK_RESOURCE_LOCALGLOBAL = 1,
    LEAK_RESOURCE_CRT_ALLOCATION = 2,
    LEAK_RESOURCE_SYSSTRING = 3,
    LEAK_RESOURCE_HANDLE = 4,
    LEAK_RESOURCE_REGISTRY = 5,
    LEAK_RESOURCE_VIRTUAL = 6,
    LEAK_RESOURCE_POWER_NOTIFICATION = 7,
    LEAK_RESOURCE_COM_ALLOCATION = 8,
    LEAK_TRACKERS_MAX = 9
};

typedef enum _RTL_GENERIC_COMPARE_RESULTS {
    GenericLessThan = 0,
    GenericGreaterThan = 1,
    GenericEqual = 2
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

typedef enum _USER_ACTIVITY_PRESENCE {
    PowerUserPresent = 0,
    PowerUserNotPresent = 1,
    PowerUserInactive = 2,
    PowerUserMaximum = 3,
    PowerUserInvalid = 3
};

AVrfCritsectDeleteTracker;
AVrfDangerousApisCheckEnabled;
AVrfDeadlockCheckEnabled;
AVrfDllLoadUnloadTracker;
AVrfDphGlobalFlags;
AVrfEngineCommitDebugInfo;
AVrfEngineLogStackTrace;
AVrfEngineNtdllHeapFreeCallback;
AVrfEngineReleaseStackTrace;
AVrfEngineSetProcessDebugInformation;
AVrfEventTracker;
AVrfForcePendingIOTracker;
AVrfForcePendingIoSeed;
AVrfHeapTracker;
AVrfIoApcCompletionCount;
AVrfIoCancelCount;
AVrfIoCheckEnabled;
AVrfIoCompletionCount;
AVrfIoErrorCount;
AVrfIoEventCompletionCount;
AVrfIoForcePendingCount;
AVrfIoIocpCompletionCount;
AVrfIoPendingTpIoRemoveCount;
AVrfIoRequestCount;
AVrfIoSyncCompletionCount;
AVrfIoThreadPoolCompletionCount;
AVrfIoThreadTerminateCount;
AVrfLdrQueryImageFileExecutionOptionsEx;
AVrfLeakCheckEnabled;
AVrfLeaks;
AVrfLocksCheckEnabled;
AVrfOptionsKey;
AVrfOriginalStopCode;
AVrfOutbuffTracker;
AVrfPreviousOriginalStopCode;
AVrfRtlAcquireSRWLockExclusiveFunction;
AVrfRtlAcquireSRWLockSharedFunction;
AVrfRtlAllocateMemoryBlockLookaside;
AVrfRtlCreateMemoryBlockLookaside;
AVrfRtlExtendMemoryBlockLookaside;
AVrfRtlFreeMemoryBlockLookaside;
AVrfRtlInitializeSRWLockFunction;
AVrfRtlLogStackTrace;
AVrfRtlReleaseSRWLockExclusiveFunction;
AVrfRtlReleaseSRWLockSharedFunction;
AVrfRtlReleaseStackTrace;
AVrfSRWLockCheckEnabled;
AVrfSRWLocks;
AVrfSystemDllBase;
AVrfThreadTracker;
AVrfThreadpoolCheckEnabled;
AVrfThreadpoolTracker;
AVrfTimeRollOverCheckEnabled;
AVrfTrackerIndex;
AVrfTrackerSizes;
AVrfVspaceTracker;
AVrfWspyErrorLoggingEnabled;
AVrfpAddressRangePackageInitialized;
AVrfpAdvapi32Thunks;
AVrfpAllowResourceConversion;
AVrfpAutomaticallyDisableStops;
AVrfpBaseCreateThreadPoolThreadOriginal;
AVrfpBaseExitThreadPoolThreadOriginal;
AVrfpBreak;
AVrfpBreakForInvalidTlsValue;
AVrfpBuildNumber;
AVrfpCSCountHacks;
AVrfpCSWithoutDebugInfo;
AVrfpCSWithoutTreeNode;
AVrfpCombaseThunks;
AVrfpCounter;
AVrfpCrashDumpRanges;
AVrfpCsTraversalMaxDepthHits;
AVrfpCsTraversalMillionsOfLocks;
AVrfpDeadlockAgeWindow;
AVrfpDeadlockDatabaseLock;
AVrfpDeadlockDebug;
AVrfpDeadlockGlobals;
AVrfpDeadlockIssue;
AVrfpDeadlockResourceTypeInfo;
AVrfpDeadlockState;
AVrfpDeadlockTrimThreshold;
AVrfpDebuggerReadMemoryRoutine64;
AVrfpDirtyStackCounter;
AVrfpDphBlockDistribution;
AVrfpDphBreakOptions;
AVrfpDphDllRangeEnd;
AVrfpDphDllRangeStart;
AVrfpDphMaxSystemWideCommitPercent;
AVrfpDphMaxUsedVASpacePercent;
AVrfpDphNDelayFreeSize;
AVrfpDphPageHeapList;
AVrfpDphPageHeapListInitialized;
AVrfpDphPageHeapListLength;
AVrfpDphPageHeapListLock;
AVrfpDphPageHeapListLock_DEBUG;
AVrfpDphRandomProbability;
AVrfpDphSizeRangeEnd;
AVrfpDphSizeRangeStart;
AVrfpDphTargetDllNamesAnsi;
AVrfpEnumThreadWindows;
AVrfpEventCache;
AVrfpExceptionLog;
AVrfpExceptionLogCurrentIndex;
AVrfpExceptionLogEntriesNo;
AVrfpExportDlls;
AVrfpFailureOfCleanup;
AVrfpFaultBreak;
AVrfpFaultExcludeDllUstr;
AVrfpFaultExcludeDllUstrPtr;
AVrfpFaultExcludeDlls;
AVrfpFaultExclusionEnd;
AVrfpFaultExclusionHits;
AVrfpFaultExclusionMaximumIndex;
AVrfpFaultExclusionStart;
AVrfpFaultFalse;
AVrfpFaultIncludeDllUstr;
AVrfpFaultIncludeDllUstrPtr;
AVrfpFaultIncludeDlls;
AVrfpFaultInitialized;
AVrfpFaultInjectionLock;
AVrfpFaultNumberOfTraces;
AVrfpFaultPeriodTimeInMsecs;
AVrfpFaultProbability;
AVrfpFaultSeed;
AVrfpFaultStartTime;
AVrfpFaultTargetEnd;
AVrfpFaultTargetHits;
AVrfpFaultTargetMaximumIndex;
AVrfpFaultTargetStart;
AVrfpFaultTrace;
AVrfpFaultTraceIndex;
AVrfpFaultTraceSize;
AVrfpFaultTrue;
AVrfpFirstThreadTlsStruct;
AVrfpFreeCallBackResource;
AVrfpFreeCallBackResourceInitialized;
AVrfpFreeMemoryCallbacks;
AVrfpGetStackTraceAddress;
AVrfpGetStackTraceAddressEx;
AVrfpHeap;
AVrfpHeapTable;
AVrfpHkcuIfeoPath;
AVrfpHklmIfeoPath;
AVrfpIgnoreAvDlls;
AVrfpIgnoreOutbufDlls;
AVrfpIgnoreVirtualSpaceDlls;
AVrfpIoCleanupList;
AVrfpIoCleanupLock;
AVrfpIoFileInfoList;
AVrfpIoFileInfoLock;
AVrfpIoPendingIoLock;
AVrfpIoPendingWorkItemList;
AVrfpIocpWorkItemList;
AVrfpIocpWorkItemLock;
AVrfpKernel32Thunks;
AVrfpKernelbaseThunks;
AVrfpLargeAddressAware;
AVrfpLogEntryMessageEx;
AVrfpLoggingStopSupportInitialized;
AVrfpMissedDirtyThread;
AVrfpMostRecentRemovedThreadEntry;
AVrfpMsvcrtThunks;
AVrfpNtdllName;
AVrfpNtdllThunks;
AVrfpNtdllUpdatesTeb;
AVrfpOaNoCacheDefined;
AVrfpObjectTypeNames;
AVrfpOle32Thunks;
AVrfpOleaut32Thunks;
AVrfpPeekMessageW;
AVrfpPreviousStopData;
AVrfpPrivateLocksDlls;
AVrfpProcessAttachCalled;
AVrfpProcessAttachResult;
AVrfpProcessBeingTerminated;
AVrfpProvider;
AVrfpRaceDelayInitialSeed;
AVrfpRaceDelaySeed;
AVrfpRaceProbability;
AVrfpRealGetWindowClassW;
AVrfpRtlReportException;
AVrfpSPNumber;
AVrfpSetupApiThunks;
AVrfpSplayNodesSList;
AVrfpSqmInfoLogged;
AVrfpSqmStreamEntry;
AVrfpStaticSplayNodes;
AVrfpStaticSplayNodesEnd;
AVrfpStopData;
AVrfpStopDataLock;
AVrfpStopInitialized;
AVrfpSysBasicInfo;
AVrfpSystemTimeStart;
AVrfpTPCheckForUser32Ready;
AVrfpTargetPageSize;
AVrfpTebCSCountHacks;
AVrfpThreadName;
AVrfpThreadObjectName;
AVrfpThreadTable;
AVrfpThreadTableLock;
AVrfpTlsIndex;
AVrfpTlsListHead;
AVrfpTlsTable;
AVrfpTlsTableLock;
AVrfpTpObjectList;
AVrfpTpObjectLock;
AVrfpUser32DllBase;
AVrfpUser32Thunks;
AVrfpVectoredExceptionPointer;
AVrfpVerifierSelfhostApp;
AVrfpWinSqmAddToStreamEx;
AVrfpWinSqmInitialized;
AVrfpWinSqmIsOptedIn;
AvrfStopProcessing;
AvrfpCallerAwareNtdllGPAName;
AvrfpNtdllName;
AvrfpVerifierDllBaseAddress;
AvrfpVerifierDllImageSize;
BasicsApiClassBase;
CritSectSplayRoot;
CriticalSectionLock;
CriticalSectionLockInitialized;
CurrentSymbols;
DllLoadListHead;
DllLoadListLock;
FnRegCloseKey;
FnRegCreateKey;
FnRegDeleteValue;
FnRegQueryValue;
FnRegSetValue;
HighCommitConditionEvent;
LdrQueryProcessModuleInformation_;
MitLibHandle;
NtClose_;
NtOpenThread_;
NtQueryInformationProcess_;
NtQuerySystemInformation_;
NtQueryVirtualMemory_;
NtReadVirtualMemory_;
NtResumeProcess_;
NtResumeThread_;
NtSuspendProcess_;
NtSuspendThread_;
ProcessVirtualMemorySize;
RedirectedVerifierStopFunction;
RtlAllocateHeap_;
RtlFreeHeap_;
RtlInitAnsiString_;
RtlNtStatusToDosError_;
StarUstr;
TargetDlls;
TraceLoggingMetadata;
TraceLoggingMetadataEnd;
VerifierAnsiStringFormatMessageFailed;
VerifierAnsiStringStopContinuable;
VerifierAnsiStringStopMessage;
VerifierAnsiStringStopMessage2;
VerifierAnsiStringStopNotContinuable;
VerifierAnsiStringTerminateProcessFailed;
VerifierAnsiStringTerminatingProcess;
VerifierEngCheckPageHeap;
VerifierEngSetHeapPathCaller;
VerifierStops;
VerifierStringFormatMessageFailed;
VerifierStringStopContinuable;
VerifierStringStopMessage;
VerifierStringStopMessage2;
VerifierStringStopNotContinuable;
VerifierStringTerminateProcessFailed;
VerifierStringTerminatingProcess;
VfCombaseBase;
VfCombaseSize;
VfDangerousPropertyDescriptor;
VfDangerousPropertyLoadLibraryCheck;
VfHandlesPropertyDescriptor;
VfHandlesPropertyTraces;
VfIoPropertyDescriptor;
VfIoPropertyFillReadBuffer;
VfIoPropertyForcePendingIo;
VfKernel32Base;
VfKernel32Size;
VfKernelbaseBase;
VfKernelbaseSize;
VfLeakPropertyDescriptor;
VfLeakPropertyExcludedDlls;
VfMFPlatBase;
VfMFPlatSize;
VfMemoryExecutableMemory;
VfMemoryPropertyDescriptor;
VfNsiBase;
VfNsiSize;
VfProviderDangerousBreakDescriptors;
VfProviderDangerousLayerDescriptor;
VfProviderDirtyStacksLayerDescriptor;
VfProviderExceptionsBreakDescriptors;
VfProviderExceptionsLayerDescriptor;
VfProviderHandlesBreakDescriptors;
VfProviderHandlesLayerDescriptor;
VfProviderIOBreakDescriptors;
VfProviderIoLayerDescriptor;
VfProviderLeakBreakDescriptors;
VfProviderLeakLayerDescriptor;
VfProviderLocksBreakDescriptors;
VfProviderLocksLayerDescriptor;
VfProviderMemoryBreakDescriptors;
VfProviderMemoryLayerDescriptor;
VfProviderSRWLockBreakDescriptors;
VfProviderSRWLockLayerDescriptor;
VfProviderTLSBreakDescriptors;
VfProviderThreadpoolBreakDescriptors;
VfProviderThreadpoolLayerDescriptor;
VfProviderTimeRollOverLayerDescriptor;
VfProviderTlsLayerDescriptor;
VfRTWorkQBase;
VfRTWorkQSize;
VfTimeRollOverPropertyDelay;
VfTimeRollOverPropertyDescriptor;
VfTpCheckingAsyncCallOnPersistentThread;
VfTpPropertyDescriptor;
VfTpWinrtBase;
VfTpWinrtSize;
VfWudfhostBase;
VfWudfhostSize;
Vista_x64_SymbolTable;
VrfDbgOutputBuffer;
W2K3_SP2_x64_SymbolTable;
Win7_x64_SymbolTable;
Win8_x64_SymbolTable;
WinXP_SP2_x64_SymbolTable;
_IMPORT_DESCRIPTOR_ntdll;
_NULL_IMPORT_DESCRIPTOR;
_guard_check_icall_fptr;
_guard_dispatch_icall_fptr;
_guard_fids_table;
_guard_iat_table;
_imp_DbgPrint;
_imp_DbgPrintEx;
_imp_EtwEventRegister;
_imp_EtwEventUnregister;
_imp_EtwEventWriteTransfer;
_imp_LdrAccessResource;
_imp_LdrFindEntryForAddress;
_imp_LdrFindResource_U;
_imp_LdrGetDllHandle;
_imp_LdrGetProcedureAddress;
_imp_LdrLoadDll;
_imp_LdrLockLoaderLock;
_imp_LdrQueryImageFileExecutionOptions;
_imp_LdrQueryImageFileKeyOption;
_imp_LdrQueryProcessModuleInformation;
_imp_LdrUnloadDll;
_imp_LdrUnlockLoaderLock;
_imp_NtAllocateVirtualMemory;
_imp_NtClearEvent;
_imp_NtClose;
_imp_NtCreateEvent;
_imp_NtCreateKey;
_imp_NtCreateSection;
_imp_NtDelayExecution;
_imp_NtDeleteValueKey;
_imp_NtFreeVirtualMemory;
_imp_NtGetContextThread;
_imp_NtMapViewOfSection;
_imp_NtOpenEvent;
_imp_NtOpenKey;
_imp_NtOpenProcessTokenEx;
_imp_NtOpenSection;
_imp_NtOpenThread;
_imp_NtProtectVirtualMemory;
_imp_NtQueryEvent;
_imp_NtQueryInformationProcess;
_imp_NtQueryInformationThread;
_imp_NtQueryInformationToken;
_imp_NtQueryKey;
_imp_NtQueryObject;
_imp_NtQueryPerformanceCounter;
_imp_NtQuerySystemInformation;
_imp_NtQuerySystemTime;
_imp_NtQueryValueKey;
_imp_NtQueryVirtualMemory;
_imp_NtReadVirtualMemory;
_imp_NtResumeThread;
_imp_NtSetEvent;
_imp_NtSetValueKey;
_imp_NtSuspendThread;
_imp_NtTerminateProcess;
_imp_NtUnmapViewOfSection;
_imp_NtWaitForMultipleObjects;
_imp_NtWaitForSingleObject;
_imp_NtWriteVirtualMemory;
_imp_RtlAcquirePebLock;
_imp_RtlAcquireResourceExclusive;
_imp_RtlAcquireResourceShared;
_imp_RtlAcquireSRWLockExclusive;
_imp_RtlAcquireSRWLockShared;
_imp_RtlAddVectoredExceptionHandler;
_imp_RtlAllocateHeap;
_imp_RtlAppendUnicodeStringToString;
_imp_RtlAppendUnicodeToString;
_imp_RtlCaptureContext;
_imp_RtlCaptureStackBackTrace;
_imp_RtlCheckForOrphanedCriticalSections;
_imp_RtlCompareUnicodeString;
_imp_RtlConvertExclusiveToShared;
_imp_RtlConvertSharedToExclusive;
_imp_RtlConvertSidToUnicodeString;
_imp_RtlCreateHeap;
_imp_RtlDecodePointer;
_imp_RtlDelete;
_imp_RtlDeleteCriticalSection;
_imp_RtlDeleteElementGenericTableAvl;
_imp_RtlDeleteResource;
_imp_RtlDeregisterWait;
_imp_RtlDeregisterWaitEx;
_imp_RtlDestroyHeap;
_imp_RtlDllShutdownInProgress;
_imp_RtlEncodePointer;
_imp_RtlEnterCriticalSection;
_imp_RtlEnumerateGenericTableAvl;
_imp_RtlEnumerateGenericTableWithoutSplayingAvl;
_imp_RtlEqualUnicodeString;
_imp_RtlFindClearBitsAndSet;
_imp_RtlFlushSecureMemoryCache;
_imp_RtlFormatCurrentUserKeyPath;
_imp_RtlFreeAnsiString;
_imp_RtlFreeHeap;
_imp_RtlFreeUnicodeString;
_imp_RtlGetUserInfoHeap;
_imp_RtlImageNtHeader;
_imp_RtlInitAnsiString;
_imp_RtlInitUnicodeString;
_imp_RtlInitializeCriticalSection;
_imp_RtlInitializeCriticalSectionAndSpinCount;
_imp_RtlInitializeCriticalSectionEx;
_imp_RtlInitializeGenericTableAvl;
_imp_RtlInitializeResource;
_imp_RtlInitializeSListHead;
_imp_RtlInitializeSRWLock;
_imp_RtlInsertElementGenericTableAvl;
_imp_RtlInterlockedPopEntrySList;
_imp_RtlInterlockedPushEntrySList;
_imp_RtlLeaveCriticalSection;
_imp_RtlLockHeap;
_imp_RtlLookupElementGenericTableAvl;
_imp_RtlLookupFunctionEntry;
_imp_RtlNtStatusToDosError;
_imp_RtlQueryDepthSList;
_imp_RtlQueryHeapInformation;
_imp_RtlRaiseException;
_imp_RtlRaiseStatus;
_imp_RtlRandom;
_imp_RtlRegisterWait;
_imp_RtlReleasePebLock;
_imp_RtlReleaseResource;
_imp_RtlReleaseSRWLockExclusive;
_imp_RtlReleaseSRWLockShared;
_imp_RtlRemoveVectoredExceptionHandler;
_imp_RtlReportException;
_imp_RtlSetEnvironmentVariable;
_imp_RtlSetHeapInformation;
_imp_RtlSetThreadPoolStartFunc;
_imp_RtlSetUserFlagsHeap;
_imp_RtlSetUserValueHeap;
_imp_RtlSizeHeap;
_imp_RtlSplay;
_imp_RtlTryEnterCriticalSection;
_imp_RtlUnhandledExceptionFilter;
_imp_RtlUnicodeStringToAnsiString;
_imp_RtlUnlockHeap;
_imp_RtlUpcaseUnicodeChar;
_imp_RtlValidateHeap;
_imp_RtlVerifyVersionInfo;
_imp_RtlVirtualUnwind;
_imp_RtlWalkFrameChain;
_imp_RtlpWaitForCriticalSection;
_imp_VerSetConditionMask;
_imp___C_specific_handler;
_imp___chkstk;
_imp__stricmp;
_imp__vsnprintf;
_imp__vsnwprintf;
_imp__wcsicmp;
_imp__wcsnicmp;
_imp_iswspace;
_imp_memcpy;
_imp_memmove;
_imp_memset;
_imp_sscanf_s;
_imp_swprintf_s;
_imp_wcsnlen;
_imp_wcsstr;
_imp_wcstoul;
_security_cookie;
_security_cookie_complement;
g_CurrentProcessId;
g_hApplicationVerifierProvider;
g_szFullPathTo_HKEY_CLASSES_ROOT;
g_szFullPathTo_HKEY_CURRENT_USER;
g_ulStrLen_HKEY_CLASSES_ROOT;
g_ulStrLen_HKEY_CURRENT_USER;
g_ulStrLen_HKEY_LOCAL_MACHINE;
g_ulStrLen_HKEY_USERS;
g_ulStrLen_Registry_Machine;
g_ulStrLen_Registry_User;
g_ulStrLen_Registry_User_Sid;
g_ulStrLen_Registry_User_Sid_Classes;
g_ulWspyBreakAfterNErrors;
g_ulWspyErrorIndex;
load_config_used;
ntdll_NULL_THUNK_DATA;

AVrfAPILookupCallback();
AVrfAddStorageBlock();
AVrfCheckForOrphanedCriticalSections();
AVrfCreateTracker();
AVrfCreateTrackers();
AVrfDeadlockDetectionInitialize();
AVrfDebugPageHeapAllocate();
AVrfDebugPageHeapCompact();
AVrfDebugPageHeapCreate();
AVrfDebugPageHeapDestroy();
AVrfDebugPageHeapExtend();
AVrfDebugPageHeapFree();
AVrfDebugPageHeapGetProcessHeaps();
AVrfDebugPageHeapGetUserInfo();
AVrfDebugPageHeapIsLocked();
AVrfDebugPageHeapLock();
AVrfDebugPageHeapReAllocate();
AVrfDebugPageHeapSerialize();
AVrfDebugPageHeapSetUserFlags();
AVrfDebugPageHeapSetUserValue();
AVrfDebugPageHeapSize();
AVrfDebugPageHeapUnlock();
AVrfDebugPageHeapValidate();
AVrfDebugPageHeapWalk();
AVrfDebugPageHeapZero();
AVrfDestroyTracker();
AVrfDestroyTrackers();
AVrfInitializeHeapWalk();
AVrfInitializeMemoryBlockLookasideFunctionPointers();
AVrfInitializeSRWFunctionPointers();
AVrfIsSRWLockCheckInitialized();
AVrfLeakInitialize();
AVrfLogInTracker();
AVrfQueryVerifierOptions();
AVrfSRWLockCheckInitialize();
AVrfSetHeapPathCaller();
AVrfSetVerifierOptions();
AVrfStackTraceFromIndex();
AVrfWspyInitialize();
AVrfpAddrRangeInitialize();
AVrfpAllocateForAvlTree();
AVrfpAllocateForTree();
AVrfpAllocateStorage();
AVrfpAllocateVerifierTlsSlot();
AVrfpAppendCurrentUserSid();
AVrfpBaseCreateThreadPoolThread();
AVrfpBaseExitThreadPoolThread();
AVrfpCallFreeMemoryCallbacks();
AVrfpCallFreeMemoryCallbacks$fin$0();
AVrfpCallbackEpilogCheck();
AVrfpCallbackInSpecialDll();
AVrfpCallbackPrologCheck();
AVrfpCheckAndCopyCompletionStatus();
AVrfpCheckAndFreeDllLeakedTlsSlots();
AVrfpCheckCriticalSection();
AVrfpCheckCriticalSectionTree();
AVrfpCheckDllLeaks();
AVrfpCheckForOrphanedThreadMessages();
AVrfpCheckForOrphanedThreadWindows();
AVrfpCheckForOrphanedThreadWindowsCallback();
AVrfpCheckObjectType();
AVrfpCheckStaticInitializedCriticalSection();
AVrfpCleanupExceptionChecking();
AVrfpCloseHandleCommon();
AVrfpCloseHandleCommon$fin$0();
AVrfpCoInitialize();
AVrfpCoInitializeEx();
AVrfpCoTaskMemAlloc();
AVrfpCoTaskMemAlloc$fin$0();
AVrfpCoTaskMemFree();
AVrfpCoTaskMemFree$fin$0();
AVrfpCoTaskMemRealloc();
AVrfpCoTaskMemRealloc$fin$0();
AVrfpCoUninitialize();
AVrfpCompareForOwnersTree();
AVrfpCompareForSRWLocksTree();
AVrfpCompareForTree();
AVrfpCompareSizeForTree();
AVrfpCopyHandleTraceInformation();
AVrfpCopyHandleTraceInformationWow64();
AVrfpCopyThunksToRelocatedDlls();
AVrfpCreateEventA();
AVrfpCreateEventW();
AVrfpCreateFileACommon();
AVrfpCreateFileWCommon();
AVrfpCreateRandomDelay();
AVrfpCreateThread();
AVrfpDeadlockAcquireResource();
AVrfpDeadlockAddResource();
AVrfpDeadlockAllocate();
AVrfpDeadlockAnalyze();
AVrfpDeadlockCanProceed();
AVrfpDeadlockCertify();
AVrfpDeadlockDeleteNode();
AVrfpDeadlockDeleteResource();
AVrfpDeadlockDeleteThread();
AVrfpDeadlockFree();
AVrfpDeadlockMergeNodes();
AVrfpDeadlockReleaseResource();
AVrfpDeadlockReportIssue();
AVrfpDeadlockSearchResource();
AVrfpDeadlockSearchThread();
AVrfpDeadlockTrimPoolCacheWorker();
AVrfpDeadlockTrimResources();
AVrfpDeleteCritSectFromSplayTree();
AVrfpDirtyThreadStack();
AVrfpDisableCurrentStop();
AVrfpDllEntryPointExceptionFilter();
AVrfpDllLoadCallback();
AVrfpDllRangeCollectionAdd();
AVrfpDllRangeCollectionDllLoadCallback();
AVrfpDllRangeCollectionInit();
AVrfpDllRangeIsAddressIncluded();
AVrfpDllTrackerAdd();
AVrfpDllTrackerReplaceCallback();
AVrfpDllUnloadCallback();
AVrfpDphAddNewPool();
AVrfpDphAllocateNode();
AVrfpDphAllocateNodeForTable();
AVrfpDphCheckNormalFreeHeapBlock();
AVrfpDphCheckNormalFreeHeapBlock$filt$0();
AVrfpDphCheckNormalHeapBlock();
AVrfpDphCheckNormalHeapBlock$filt$0();
AVrfpDphCheckPageHeapBlock();
AVrfpDphCheckPageHeapBlock$filt$0();
AVrfpDphCoalesceNodeIntoAvailable();
AVrfpDphCompareNodeForTable();
AVrfpDphEnterHeapPath();
AVrfpDphFindAvailableMemory();
AVrfpDphFindBusyMemory();
AVrfpDphFindBusyMemoryAndRemoveFromBusyList();
AVrfpDphFindBusyMemoryNoCheck();
AVrfpDphFindBusyMemoryNoCheck$filt$0();
AVrfpDphFreeNodeForTable();
AVrfpDphFreeVm();
AVrfpDphGetActualSizeForAllocation();
AVrfpDphGetAlignedSizeOfProtectedPageSpace();
AVrfpDphGetBlockInformation();
AVrfpDphGetBusyBlockData();
AVrfpDphGetProtectedPageSpaceAddress();
AVrfpDphIsAddressInPageHeap();
AVrfpDphNormalHeapAllocate();
AVrfpDphNormalHeapFree();
AVrfpDphNormalHeapReAllocate();
AVrfpDphPlaceOnBusyList();
AVrfpDphPlaceOnDelayFree();
AVrfpDphPlaceOnFreeList();
AVrfpDphPlaceOnUnusedList();
AVrfpDphPointerFromHandle();
AVrfpDphPointerFromHandle$filt$0();
AVrfpDphProcessStartupInitialization();
AVrfpDphProtectVm();
AVrfpDphPublishVirtualBlock();
AVrfpDphRaiseException();
AVrfpDphRemoveEntry();
AVrfpDphRemoveFromDelayFree();
AVrfpDphRemoveFromFreeList();
AVrfpDphRemoveFromUnusedList();
AVrfpDphReportCorruptedBlock();
AVrfpDphSetProtectionsAfterUse();
AVrfpDphSetProtectionsBeforeUse();
AVrfpDphShouldAllocateInPageHeap();
AVrfpDphWriteNormalHeapBlockInformation();
AVrfpDumpCritSectTree();
AVrfpDumpCritSectTreeRecursion();
AVrfpEnterHeapCall();
AVrfpEnumerateBalancedLinks();
AVrfpEnumerateHandleTraceInformation();
AVrfpEnumerateHeapAllocationsWorker2();
AVrfpEnumerateHeapEntries();
AVrfpEnumerateLinkedList();
AVrfpExitThread();
AVrfpExtractVersionCallback();
AVrfpFaultsParseDllStrings();
AVrfpFinalizeRtlTpObject();
AVrfpFindCritSectInSplayTree();
AVrfpFindDllEntryPointInfo();
AVrfpFixupLookAside();
AVrfpFreeForDllTree();
AVrfpFreeForOwnersTree();
AVrfpFreeForSRWLocksTree();
AVrfpFreeForTree();
AVrfpFreeHeapAllocationForTree();
AVrfpFreeIoWorkItem();
AVrfpFreeLibraryAndExitThread();
AVrfpFreeMemIoChecks();
AVrfpFreeMemLockChecks();
AVrfpFreeMemNotify();
AVrfpFreeMemSanityChecks();
AVrfpFreeVirtualMemNotify();
AVrfpFreeWaitEvent();
AVrfpGetDllImageName();
AVrfpGetDllImageName$fin$0();
AVrfpGetRegistryInterfaces();
AVrfpGetRemoteStackTrace();
AVrfpGetStackPointer();
AVrfpGetTargetDllIndexNoLock();
AVrfpGetThunkDescriptor();
AVrfpGetTickCount();
AVrfpGetVerifierTlsValue();
AVrfpGlobalAlloc();
AVrfpGlobalAlloc$fin$0();
AVrfpGlobalFree();
AVrfpGlobalFree$fin$0();
AVrfpGlobalReAlloc();
AVrfpGlobalReAlloc$fin$0();
AVrfpHandleSanityChecks();
AVrfpHandleSelfhostSupport();
AVrfpHeapAlloc();
AVrfpHeapAlloc$fin$0();
AVrfpHeapBlockLevelCallback();
AVrfpHeapCreate();
AVrfpHeapDestroy();
AVrfpHeapEntryDecodedFunction();
AVrfpHeapEntryFunction();
AVrfpHeapFree();
AVrfpHeapFree$filt$0();
AVrfpHeapFree$fin$1();
AVrfpHeapReAlloc();
AVrfpHeapReAlloc$filt$0();
AVrfpHeapReAlloc$fin$1();
AVrfpHeapSegmentsListEntryCallback();
AVrfpIncrementOwnedCriticalSections();
AVrfpInitFreeMemoryCallBacks();
AVrfpInitOutputBuffer();
AVrfpInitOutputBuffer$filt$0();
AVrfpInitialTPCheckForUser32();
AVrfpInitializeCriticalSectionCommon();
AVrfpInitializeExceptionChecking();
AVrfpInitializeFaultInjectionSupport();
AVrfpInitializeLoggingStopSupport();
AVrfpInitializeResourceTracker();
AVrfpInitializeSRWTracker();
AVrfpInitializeThreadPoolCheck();
AVrfpInsertCritSectInSplayTree();
AVrfpInsertIoWorkItem();
AVrfpIoApcRoutine();
AVrfpIoCalculateChecksum();
AVrfpIoCheckStack();
AVrfpIoCloseHandle();
AVrfpIoCreateFileInfoForDuplicateObject();
AVrfpIoEventCompletionCallback();
AVrfpIoInsertFileInfo();
AVrfpIoRemovePendingTpIoWorkItems();
AVrfpIoTerminateThreadChecks();
AVrfpIoThreadPoolApcCallback();
AVrfpIoThreadPoolApcCallbackNew();
AVrfpIoUpdateOrRemoveWorkItems();
AVrfpIsBadCodePtr();
AVrfpIsBadHugeReadPtr();
AVrfpIsBadHugeWritePtr();
AVrfpIsBadReadPtr();
AVrfpIsBadStringPtrA();
AVrfpIsBadStringPtrA$filt$0();
AVrfpIsBadStringPtrW();
AVrfpIsBadStringPtrW$filt$0();
AVrfpIsBadWritePtr();
AVrfpIsCurrentStopDisabled();
AVrfpKernel32CloseHandle();
AVrfpKernel32CreateFileA();
AVrfpKernel32CreateFileW();
AVrfpKernel32WaitForMultipleObjects();
AVrfpKernel32WaitForMultipleObjectsEx();
AVrfpKernel32WaitForSingleObject();
AVrfpKernel32WaitForSingleObjectEx();
AVrfpKernelbaseCloseHandle();
AVrfpKernelbaseCreateFileA();
AVrfpKernelbaseCreateFileW();
AVrfpKernelbaseWaitForMultipleObjects();
AVrfpKernelbaseWaitForMultipleObjectsEx();
AVrfpKernelbaseWaitForSingleObject();
AVrfpKernelbaseWaitForSingleObjectEx();
AVrfpLdrGetProcedureAddress();
AVrfpLdrLoadDll();
AVrfpLdrQueryImageFileExecutionOptionsEx();
AVrfpLdrUnloadDll();
AVrfpLeakLock();
AVrfpLeakLogResource();
AVrfpLeakRemoveResource();
AVrfpLeakRemoveResourceInternal();
AVrfpLeakUnlock();
AVrfpLeaveHeapCall();
AVrfpLoadSuspendResumeFunctions();
AVrfpLocalAlloc();
AVrfpLocalAlloc$fin$0();
AVrfpLocalFree();
AVrfpLocalFree$fin$0();
AVrfpLocalReAlloc();
AVrfpLocalReAlloc$fin$0();
AVrfpMiniLoadAttach();
AVrfpMultiByteToWideChar();
AVrfpNavigateHeap();
AVrfpNavigatePageHeap();
AVrfpNavigatePageHeapLH();
AVrfpNavigateSegment();
AVrfpNavigateSegmentUCRList();
AVrfpNtAlertResumeThread();
AVrfpNtAlertThread();
AVrfpNtAllocateUserPhysicalPages();
AVrfpNtAllocateVirtualMemory();
AVrfpNtCancelIoFile();
AVrfpNtCancelIoFileEx();
AVrfpNtClearEvent();
AVrfpNtClose();
AVrfpNtCompactKeys();
AVrfpNtCompressKey();
AVrfpNtCreateEvent();
AVrfpNtCreateFile();
AVrfpNtCreateKey();
AVrfpNtCreateSection();
AVrfpNtDeleteKey();
AVrfpNtDeleteValueKey();
AVrfpNtDeviceIoControlFile();
AVrfpNtDuplicateObject();
AVrfpNtEnumerateKey();
AVrfpNtEnumerateValueKey();
AVrfpNtExtendSection();
AVrfpNtFlushInstructionCache();
AVrfpNtFlushKey();
AVrfpNtFlushVirtualMemory();
AVrfpNtFreeUserPhysicalPages();
AVrfpNtFreeVirtualMemory();
AVrfpNtFsControlFile();
AVrfpNtGetContextThread();
AVrfpNtGetNextProcess();
AVrfpNtGetNextThread();
AVrfpNtGetWriteWatch();
AVrfpNtImpersonateThread();
AVrfpNtLockRegistryKey();
AVrfpNtLockVirtualMemory();
AVrfpNtMapViewOfSection();
AVrfpNtNotifyChangeDirectoryFile();
AVrfpNtNotifyChangeKey();
AVrfpNtNotifyChangeMultipleKeys();
AVrfpNtOpenEvent();
AVrfpNtOpenFile();
AVrfpNtOpenKey();
AVrfpNtOpenSection();
AVrfpNtProtectVirtualMemory();
AVrfpNtPulseEvent();
AVrfpNtQueryEvent();
AVrfpNtQueryInformationProcess();
AVrfpNtQueryInformationThread();
AVrfpNtQueryKey();
AVrfpNtQueryMultipleValueKey();
AVrfpNtQuerySection();
AVrfpNtQueryValueKey();
AVrfpNtQueueApcThread();
AVrfpNtReadFile();
AVrfpNtReadFileScatter();
AVrfpNtReadVirtualMemory();
AVrfpNtRemoveIoCompletion();
AVrfpNtRemoveIoCompletionEx();
AVrfpNtRenameKey();
AVrfpNtReplaceKey();
AVrfpNtResetEvent();
AVrfpNtResetWriteWatch();
AVrfpNtRestoreKey();
AVrfpNtResumeProcess();
AVrfpNtResumeThread();
AVrfpNtSaveKey();
AVrfpNtSaveKeyEx();
AVrfpNtSaveMergedKeys();
AVrfpNtSetContextThread();
AVrfpNtSetEvent();
AVrfpNtSetEventBoostPriority();
AVrfpNtSetInformationFile();
AVrfpNtSetInformationKey();
AVrfpNtSetInformationProcess();
AVrfpNtSetInformationThread();
AVrfpNtSetValueKey();
AVrfpNtSuspendProcess();
AVrfpNtSuspendThread();
AVrfpNtTerminateProcess();
AVrfpNtTerminateThread();
AVrfpNtUnloadKeyEx();
AVrfpNtUnlockVirtualMemory();
AVrfpNtUnmapViewOfSection();
AVrfpNtUnmapViewOfSectionEx();
AVrfpNtWaitForMultipleObjects();
AVrfpNtWaitForSingleObject();
AVrfpNtWriteFile();
AVrfpNtWriteFileGather();
AVrfpNtWriteVirtualMemory();
AVrfpNtdllHeapFreeCallback();
AVrfpOpenEventA();
AVrfpOpenEventW();
AVrfpOpenImageKey();
AVrfpOpenImageOptionsKey();
AVrfpOpenImageOptionsKeyFromHkcu();
AVrfpPostMessageA();
AVrfpPostMessageW();
AVrfpPostProcessIoRequest();
AVrfpPostQuitMessage();
AVrfpPostRtlTpFinalizationCallback();
AVrfpPostThreadMessageA();
AVrfpPostThreadMessageW();
AVrfpPreProcessIoRequest();
AVrfpProbeMemoryBlockChecks();
AVrfpReadFieldFromLocalStruct();
AVrfpReadFieldFromRemoteStruct();
AVrfpReadGlobalFlags();
AVrfpReadMemory();
AVrfpRegCloseKey();
AVrfpRegCloseKey$fin$0();
AVrfpRegCreateKeyA();
AVrfpRegCreateKeyExA();
AVrfpRegCreateKeyExW();
AVrfpRegCreateKeyW();
AVrfpRegGetValueA();
AVrfpRegGetValueW();
AVrfpRegNotifyChangeKeyValue();
AVrfpRegOpenKeyA();
AVrfpRegOpenKeyExA();
AVrfpRegOpenKeyExW();
AVrfpRegOpenKeyW();
AVrfpRegSetValueA();
AVrfpRegSetValueExA();
AVrfpRegSetValueExW();
AVrfpRegSetValueW();
AVrfpRegisterPowerSettingNotification();
AVrfpRegisterPowerSettingNotification$fin$0();
AVrfpRemoveIoWorkItem();
AVrfpRoInitialize();
AVrfpRoUninitialize();
AVrfpRtlAcquireReleaseSRWLockExclusive();
AVrfpRtlAcquireResourceExclusive();
AVrfpRtlAcquireResourceShared();
AVrfpRtlAcquireSRWLockExclusive();
AVrfpRtlAcquireSRWLockShared();
AVrfpRtlAllocateHeap();
AVrfpRtlAllocateHeap$fin$0();
AVrfpRtlCancelTimer();
AVrfpRtlConvertExclusiveToShared();
AVrfpRtlConvertSharedToExclusive();
AVrfpRtlCreateHeap();
AVrfpRtlCreateTimer();
AVrfpRtlCreateTimerQueue();
AVrfpRtlDeleteCriticalSection();
AVrfpRtlDeleteResource();
AVrfpRtlDeleteResource$fin$0();
AVrfpRtlDeleteSecurityObject();
AVrfpRtlDeleteTimer();
AVrfpRtlDeleteTimerQueue();
AVrfpRtlDeleteTimerQueueEx();
AVrfpRtlDeregisterWait();
AVrfpRtlDeregisterWaitEx();
AVrfpRtlDestroyHeap();
AVrfpRtlEnterCriticalSection();
AVrfpRtlEnterCriticalSection1();
AVrfpRtlEnterCriticalSection2();
AVrfpRtlExitUserProcess();
AVrfpRtlExitUserThread();
AVrfpRtlFreeHeap();
AVrfpRtlFreeHeap$filt$0();
AVrfpRtlFreeHeap$fin$1();
AVrfpRtlFreeSid();
AVrfpRtlFreeSid$fin$0();
AVrfpRtlFreeUnicodeString();
AVrfpRtlFreeUnicodeString$fin$0();
AVrfpRtlInitializeCriticalSection();
AVrfpRtlInitializeCriticalSectionAndSpinCount();
AVrfpRtlInitializeCriticalSectionEx();
AVrfpRtlInitializeResource();
AVrfpRtlInitializeResource$fin$0();
AVrfpRtlInitializeResource$fin$1();
AVrfpRtlInitializeResource$fin$2();
AVrfpRtlInitializeSRWLock();
AVrfpRtlLeaveCriticalSection();
AVrfpRtlQueueWorkItem();
AVrfpRtlReAllocateHeap();
AVrfpRtlReAllocateHeap$filt$0();
AVrfpRtlReAllocateHeap$fin$1();
AVrfpRtlRegisterWait();
AVrfpRtlReleaseResource();
AVrfpRtlReleaseSRWLockExclusive();
AVrfpRtlReleaseSRWLockShared();
AVrfpRtlSetIoCompletionCallback();
AVrfpRtlSetSecurityObject();
AVrfpRtlSetSecurityObject$fin$0();
AVrfpRtlSetSecurityObjectEx();
AVrfpRtlSetSecurityObjectEx$fin$0();
AVrfpRtlSetThreadPoolStartFunc();
AVrfpRtlSetTimer();
AVrfpRtlSleepConditionVariableSRW();
AVrfpRtlTryAcquireSRWLockExclusive();
AVrfpRtlTryAcquireSRWLockShared();
AVrfpRtlTryEnterCriticalSection();
AVrfpRtlTryEnterCriticalSection1();
AVrfpRtlTryEnterCriticalSection2();
AVrfpRtlUpdateTimer();
AVrfpRtlWorkerCallback();
AVrfpRtlWorkerCallback$fin$0();
AVrfpSRWLockFreeMemoryChecks();
AVrfpSRWLockTerminateThreadChecks();
AVrfpSanityCheckAddressRange();
AVrfpSetClipboardData();
AVrfpSetHeapPathStackTrace();
AVrfpSetProcessWorkingSetSize();
AVrfpSetProcessWorkingSetSizeEx();
AVrfpSetThreadAffinityMask();
AVrfpSetThreadPriority();
AVrfpSetVerifierFlagsForChecks();
AVrfpShouldFaultInject();
AVrfpSizeHeapExceptionFilter();
AVrfpSqmUpload();
AVrfpStackBacktraceDatabase();
AVrfpStandardDllEntryPointRoutine();
AVrfpStandardDllEntryPointRoutine$filt$0();
AVrfpStandardDllEntryPointRoutine$fin$1();
AVrfpStandardThreadFunction();
AVrfpStandardThreadFunction$filt$0();
AVrfpSuspendEnumerateAllocations();
AVrfpSuspendThread();
AVrfpSysAllocString();
AVrfpSysAllocString$fin$0();
AVrfpSysAllocStringByteLen();
AVrfpSysAllocStringByteLen$fin$0();
AVrfpSysAllocStringLen();
AVrfpSysAllocStringLen$fin$0();
AVrfpSysFreeString();
AVrfpSysReAllocString();
AVrfpSysReAllocString$fin$0();
AVrfpSysReAllocStringLen();
AVrfpSysReAllocStringLen$fin$0();
AVrfpTerminateThread();
AVrfpThreadFunctionExceptionFilter();
AVrfpThreadTableAddEntry();
AVrfpThreadTableRemoveEntry();
AVrfpThreadTableSearchEntry();
AVrfpTimerFinalizationCallback();
AVrfpTimerQueueFinalizationCallback();
AVrfpTlsAlloc();
AVrfpTlsFree();
AVrfpTlsGetValue();
AVrfpTlsSetValue();
AVrfpTpAllocAlpcCompletion();
AVrfpTpAllocIoCompletion();
AVrfpTpAllocTimer();
AVrfpTpAllocWait();
AVrfpTpAllocWork();
AVrfpTpAllocateThreadPoolBlock();
AVrfpTpAlpcCallback();
AVrfpTpAlpcCallback$fin$0();
AVrfpTpCallbackDetectedUnrecoverableError();
AVrfpTpCallbackLeaveCriticalSectionOnCompletion();
AVrfpTpCheckForTransactions();
AVrfpTpCleanupGroupCancelCallback();
AVrfpTpFinalizationCallback();
AVrfpTpFreeThreadPoolBlock();
AVrfpTpIoCallback();
AVrfpTpIoCallback$fin$0();
AVrfpTpReleaseIoCompletion();
AVrfpTpSimpleCallback();
AVrfpTpSimpleCallback$fin$0();
AVrfpTpSimpleTryPost();
AVrfpTpTimerCallback();
AVrfpTpTimerCallback$fin$0();
AVrfpTpWaitCallback();
AVrfpTpWaitCallback$fin$0();
AVrfpTpWorkCallback();
AVrfpTpWorkCallback$fin$0();
AVrfpTraceAddressToBackTrace();
AVrfpTrackOwnerForSRWLockAcquire();
AVrfpUnmapViewOfFile();
AVrfpUnmapViewOfFile$fin$0();
AVrfpUnmapViewOfFileEx();
AVrfpUnmapViewOfFileEx$fin$0();
AVrfpUnregisterPowerSettingNotification();
AVrfpUpdateSelfhostCount();
AVrfpVariantClear();
AVrfpVectoredExceptionHandler();
AVrfpVerifyCriticalSectionOwner();
AVrfpVerifyInitializedCriticalSection();
AVrfpVerifyInitializedCriticalSection2();
AVrfpVerifyLegalWait();
AVrfpVerifyNoWaitersCriticalSection();
AVrfpVerifySRWLockAcquire();
AVrfpVerifySRWLockRelease();
AVrfpVirtualAlloc();
AVrfpVirtualAllocBlockListEntryCallback();
AVrfpVirtualFree();
AVrfpVirtualFree$fin$0();
AVrfpVirtualFreeEx();
AVrfpWaitFinalizationCallback();
AVrfpWaitForMultipleObjectsCommon();
AVrfpWaitForMultipleObjectsExCommon();
AVrfpWaitForSingleObjectCommon();
AVrfpWaitForSingleObjectExCommon();
AVrfpWaitOrTimerCallback();
AVrfpWaitOrTimerCallback$fin$0();
AVrfpWideCharToMultiByte();
AVrfpWriteGlobalFlags();
AVrfp__mbsdup();
AVrfp__mbsdup$fin$0();
AVrfp__snprintf_Msvcrt();
AVrfp__snprintf_Ntdll();
AVrfp__snwprintf_Msvcrt();
AVrfp__snwprintf_Ntdll();
AVrfp__strdup();
AVrfp__strdup$fin$0();
AVrfp__vsnprintf_Msvcrt();
AVrfp__vsnprintf_Ntdll();
AVrfp__vsnwprintf_Msvcrt();
AVrfp__vsnwprintf_Ntdll();
AVrfp__wcsdup();
AVrfp__wcsdup$fin$0();
AVrfp_calloc();
AVrfp_calloc$fin$0();
AVrfp_delete();
AVrfp_delete$fin$0();
AVrfp_deletearray();
AVrfp_deletearray$fin$0();
AVrfp_free();
AVrfp_free$fin$0();
AVrfp_malloc();
AVrfp_malloc$fin$0();
AVrfp_new();
AVrfp_new$fin$0();
AVrfp_newarray();
AVrfp_newarray$fin$0();
AVrfp_realloc();
AVrfp_realloc$fin$0();
AvrfGetRegKeyName();
AvrfLeakRemoveHeap();
AvrfpGetVerifierStopForException();
AvrfpReadVirtualMemory();
AvrfpSetupDiCreateDevRegKeyA();
AvrfpSetupDiCreateDevRegKeyA$fin$0();
AvrfpSetupDiCreateDevRegKeyW();
AvrfpSetupDiCreateDevRegKeyW$fin$0();
AvrfpSetupDiOpenDevRegKey();
AvrfpSetupDiOpenDevRegKey$fin$0();
AvrfpThreadDetach();
AvrfpTryToVerifySamePointerSize();
CheckTlsIndex();
CritSectInitialize();
DllMain();
DllMainCRTStartupForGS2();
DllMainWithoutVerifierEnabled();
DphCommitMemoryForPageHeap();
DphPatternCheck();
DphReserveMemoryForPageHeap();
MitLibInitialize();
MitLibQueryMitigations();
NtTerminateProcess();
RtlCaptureContext();
RtlLookupFunctionEntry();
RtlUnhandledExceptionFilter();
RtlVirtualUnwind();
StringCbPrintfA();
StringCchPrintfW();
TlgDefineProvider_annotation__Tlgg_hApplicationVerifierProviderProv();
TlgEnableCallback();
TlgWrite();
VerifierAddFreeMemoryCallback();
VerifierCaptureContextAndReportStop();
VerifierCheckPageHeapAllocation();
VerifierConvertStringToGuid();
VerifierCreateRpcPageHeap();
VerifierDeleteFreeMemoryCallback();
VerifierDestroyRpcPageHeap();
VerifierDisableFaultInjectionExclusionRange();
VerifierDisableFaultInjectionTargetRange();
VerifierEnableFaultInjectionExclusionRange();
VerifierEnableFaultInjectionTargetRange();
VerifierEnumerateResource();
VerifierForceNormalHeap();
VerifierGetInfoForException();
VerifierGetMemoryForDump();
VerifierGetPropertyValueByName();
VerifierGetProviderHelper();
VerifierGetProviderImageName();
VerifierGetProviderImageName$fin$0();
VerifierIsAddressInAnyPageHeap();
VerifierIsCurrentThreadHoldingLocks();
VerifierIsDllEntryActive();
VerifierIsPerUserSettingsEnabled();
VerifierLoadEssentialStrings();
VerifierLoadString();
VerifierQueryRuntimeFlags();
VerifierRedirectStopFunctions();
VerifierRegisterBasicsLayers();
VerifierRegisterBreaks();
VerifierRegisterLayer();
VerifierSetFaultInjectionProbability();
VerifierSetFlags();
VerifierSetRuntimeFlags();
VerifierStopMessage();
VerifierStopMessageEx();
VerifierStopMessageEx$fin$0();
VerifierUnregisterBasicsLayers();
VerifierUnregisterBreaks();
VerifierUnregisterLayer();
_C_specific_handler();
_DllMain$fin$0();
_GSHandlerCheck();
_GSHandlerCheckCommon();
_GSHandlerCheck_SEH();
_HEAP_ENTRY_WALK::DecodeRead();
_HEAP_ENTRY_WALK::GetAllocationSize();
_HEAP_ENTRY_WALK::GetExtendedInfoSize();
_HEAP_USERDATA_OFFSETS_WALK::EncodeDecodeOffset();
_chkstk();
_raise_securityfailure();
_report_gsfailure();
_report_rangecheckfailure();
_report_securityfailure();
_security_check_cookie();
_security_init_cookie();
_security_init_cookie_ex();
guard_check_icall_nop();
guard_dispatch_icall_nop();
memcpy();
memmove();
memset();
