struct LIST_ENTRY32;
struct LIST_ENTRY64;
struct _ACTIVATION_CONTEXT;
struct _ACTIVATION_CONTEXT_DATA;
struct _ACTIVATION_CONTEXT_STACK;
struct _ASSEMBLY_STORAGE_MAP;
struct _CLIENT_ID;
struct _CONTEXT;
struct _CURDIR;
struct _CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG;
struct _EXCEPTION_RECORD;
struct _EXCEPTION_REGISTRATION_RECORD;
struct _FLS_CALLBACK_INFO;
struct _FTH_BLOCK_PADDER;
struct _FTH_ISSUE;
struct _GDI_TEB_BATCH;
struct _GUID;
struct _IMAGE_DATA_DIRECTORY;
struct _IMAGE_DOS_HEADER;
struct _IMAGE_FILE_HEADER;
struct _IMAGE_NT_HEADERS64;
struct _IMAGE_OPTIONAL_HEADER64;
struct _KSYSTEM_TIME;
struct _KUSER_SHARED_DATA;
struct _LEAP_SECOND_DATA;
struct _LIST_ENTRY;
struct _LUID;
struct _M128A;
struct _NT_TIB;
struct _OVERLAPPED;
struct _PEB;
struct _PEB_LDR_DATA;
struct _PROCESSOR_NUMBER;
struct _PS_MITIGATION_AUDIT_OPTIONS_MAP;
struct _PS_MITIGATION_OPTIONS_MAP;
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
struct _SINGLE_LIST_ENTRY;
struct _STRING;
struct _TEB;
struct _TEB_ACTIVE_FRAME;
struct _TEB_ACTIVE_FRAME_CONTEXT;
struct _TP_CALLBACK_ENVIRON_V3;
struct _TP_CALLBACK_INSTANCE;
struct _TP_CLEANUP_GROUP;
struct _TP_POOL;
struct _UNICODE_STRING;
struct _XSAVE_FORMAT;
struct _XSTATE_CONFIGURATION;
struct _XSTATE_FEATURE;
struct __FTH_CLIENT;
struct __FTH_WATSON;

union _LARGE_INTEGER;
union _SLIST_HEADER;
union _ULARGE_INTEGER;

enum DISPLAYCONFIG_SCANLINE_ORDERING;
enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS;
enum JOB_OBJECT_NET_RATE_CONTROL_FLAGS;
enum PS_CREATE_STATE;
enum ReplacesCorHdrNumericDefines;
enum SE_WS_APPX_SIGNATURE_ORIGIN;
enum _ALTERNATIVE_ARCHITECTURE_TYPE;
enum _EXCEPTION_DISPOSITION;
enum _JOBOBJECTINFOCLASS;
enum _NT_PRODUCT_TYPE;
enum _PS_ATTRIBUTE_NUM;
enum _PS_MITIGATION_OPTION;
enum _PS_PROTECTED_SIGNER;
enum _PS_PROTECTED_TYPE;
enum _PS_STD_HANDLE_STATE;
enum _PS_WAKE_REASON;
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

typedef struct _CURDIR {
    struct _UNICODE_STRING DosPath;
    PVOID Handle;
};

typedef struct _CUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG {
    ULONG Size;
    PWCHAR TriggerId;
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

typedef struct _FTH_BLOCK_PADDER {
    ULONG64 Padding;
    ULONG Checksum;
    ULONG StartStamp;
    ULONG RequestedSize : 16;
    ULONG ActualSize : 16;
    PVOID Heap;
    struct _LIST_ENTRY FreeQueue;
    ULONG Filler;
    ULONG EndStamp;
};

typedef struct _FTH_ISSUE {
    ULONG Stamp;
    ULONG Issue;
    PVOID Heap;
    PVOID Address;
    struct _FTH_BLOCK_PADDER Padder;
    PVOID Trace[32];
    PVOID LastTrace[32];
    PVOID OlderTrace[32];
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

typedef struct _OVERLAPPED {
    ULONG64 Internal;
    ULONG64 InternalHigh;
    ULONG Offset;
    ULONG OffsetHigh;
    PVOID Pointer;
    PVOID hEvent;
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

typedef struct __FTH_CLIENT {
    LONG TrackingState;
    LONG QueryingState;
    LONG ServerEnabled;
    LONG ConnectionAttemptsAllowed;
    LONG ConnectionSkipsCounter;
    LONG ConnectionsAttempted;
    struct __FTH_WATSON *Watson;
    struct __FTH_WATSON WatsonInPassiveMode;
    PVOID WatsonSection;
    PVOID WatsonView;
    struct _RTL_CRITICAL_SECTION ClientLock;
    PVOID PipeHandle;
    PVOID PipeEvent;
    struct _OVERLAPPED PipeOverlapped;
    ULONG MaximumAllocOverhead;
    ULONG MaximumFreeOverhead;
    ULONG MaximumWatsonOverhead;
};

typedef struct __FTH_WATSON {
    ULONG Counter[32];
    PVOID MinAddress;
    PVOID MaxAddress;
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

AE_LOG_Context;
AE_SHIM_API_HIT_ONCE_EVENT;
CT??_R0?AVCStringErrorCStringShimLib;
CTA1?AVCStringErrorCStringShimLib;
GUID_NULL;
Microsoft_Windows_Application_ExperienceEnableBits;
Microsoft_Windows_Application_ExperienceKeywords;
Microsoft_Windows_Application_ExperienceLevels;
NS_DXMaximizedWindowedHwndOverride::g_bStaticDllsInit;
NS_DXMaximizedWindowedHwndOverride::g_bSubshimUsed;
NS_DXMaximizedWindowedHwndOverride::g_pAPIHooks;
NS_DXMaximizedWindowedHwndOverride::g_stShimId;
NS_DXMaximizedWindowedHwndOverride::g_szCommandLine;
NS_DXMaximizedWindowedMode::g_bStaticDllsInit;
NS_DXMaximizedWindowedMode::g_bSubshimUsed;
NS_DXMaximizedWindowedMode::g_pAPIHooks;
NS_DXMaximizedWindowedMode::g_stShimId;
NS_DXMaximizedWindowedMode::g_szCommandLine;
NS_EmulateSortingVista::g_bStaticDllsInit;
NS_EmulateSortingVista::g_bSubshimUsed;
NS_EmulateSortingVista::g_pAPIHooks;
NS_EmulateSortingVista::g_stShimId;
NS_EmulateSortingVista::g_szCommandLine;
NS_EmulateSortingWindows61::g_bStaticDllsInit;
NS_EmulateSortingWindows61::g_bSubshimUsed;
NS_EmulateSortingWindows61::g_pAPIHooks;
NS_EmulateSortingWindows61::g_pfnGetNamedLocaleHashNode;
NS_EmulateSortingWindows61::g_pfnNlsValidateLocale;
NS_EmulateSortingWindows61::g_stShimId;
NS_EmulateSortingWindows61::g_szCommandLine;
NS_FaultTolerantHeap::FthAssertHistory;
NS_FaultTolerantHeap::FthAssertHistoryIndex;
NS_FaultTolerantHeap::FthClient;
NS_FaultTolerantHeap::FthClientDebug;
NS_FaultTolerantHeap::FthCookie;
NS_FaultTolerantHeap::FthDelayFreeQueue;
NS_FaultTolerantHeap::FthDelayFreeQueueBlocks;
NS_FaultTolerantHeap::FthDelayFreeQueueFlushLock;
NS_FaultTolerantHeap::FthDelayFreeQueueLock;
NS_FaultTolerantHeap::FthDelayFreeQueueSize;
NS_FaultTolerantHeap::FthDelayFreeQueueTrims;
NS_FaultTolerantHeap::FthErrorHistory;
NS_FaultTolerantHeap::FthErrorHistoryIndex;
NS_FaultTolerantHeap::FthFreeTracker;
NS_FaultTolerantHeap::FthFreeTrackerIndex;
NS_FaultTolerantHeap::FthFreeTrackerLock;
NS_FaultTolerantHeap::FthHeapLocksCounter;
NS_FaultTolerantHeap::FthHeapLocksInProgress;
NS_FaultTolerantHeap::FthMaximumTrackedBlockSize;
NS_FaultTolerantHeap::FthMessageHistory;
NS_FaultTolerantHeap::FthMessageHistoryIndex;
NS_FaultTolerantHeap::FthPerformCheckSums;
NS_FaultTolerantHeap::FthRandomSeed;
NS_FaultTolerantHeap::FthSpecialHeaps;
NS_FaultTolerantHeap::FthSpecialHeapsCounter;
NS_FaultTolerantHeap::FthSpecialHeapsLock;
NS_FaultTolerantHeap::FthSpecialHeapsMaxIndex;
NS_FaultTolerantHeap::FthWatsonObjectCurrentIssue;
NS_FaultTolerantHeap::FthWatsonObjectLock;
NS_FaultTolerantHeap::g_bStaticDllsInit;
NS_FaultTolerantHeap::g_bSubshimUsed;
NS_FaultTolerantHeap::g_pAPIHooks;
NS_FaultTolerantHeap::g_stShimId;
NS_FaultTolerantHeap::g_szCommandLine;
NS_FaultTolerantHeap::pfnGetFileVersionInfoSizeW;
NS_FaultTolerantHeap::pfnGetFileVersionInfoW;
NS_FaultTolerantHeap::pfnGetModuleBaseNameW;
NS_FaultTolerantHeap::pfnVerQueryValueW;
NS_FaultTolerantHeap::pfnWerReportAddDump;
NS_FaultTolerantHeap::pfnWerReportCloseHandle;
NS_FaultTolerantHeap::pfnWerReportCreate;
NS_FaultTolerantHeap::pfnWerReportSetParameter;
NS_FaultTolerantHeap::pfnWerReportSubmit;
NS_FaultTolerantHeap::pfnWerpGetReportConsent;
NS_VerifyVersionInfoLite::g_bStaticDllsInit;
NS_VerifyVersionInfoLite::g_bSubshimUsed;
NS_VerifyVersionInfoLite::g_pAPIHooks;
NS_VerifyVersionInfoLite::g_stShimId;
NS_VerifyVersionInfoLite::g_szCommandLine;
NS_VirtualRegistry2::VRegistry;
NS_VirtualRegistry2::csRegCriticalSection;
NS_VirtualRegistry2::g_VEntryList;
NS_VirtualRegistry2::g_bStaticDllsInit;
NS_VirtualRegistry2::g_bSubshimUsed;
NS_VirtualRegistry2::g_pAPIHooks;
NS_VirtualRegistry2::g_stShimId;
NS_VirtualRegistry2::g_szCommandLine;
NS_VirtualRegistry::VRegistry;
NS_VirtualRegistry::csRegCriticalSection;
NS_VirtualRegistry::g_VList;
NS_VirtualRegistry::g_bStaticDllsInit;
NS_VirtualRegistry::g_bSubshimUsed;
NS_VirtualRegistry::g_pAPIHooks;
NS_VirtualRegistry::g_stShimId;
NS_VirtualRegistry::g_szCommandLine;
NS_VistaRTMVersionLie::MinorVersion;
NS_VistaRTMVersionLie::SpMajorVersion;
NS_VistaRTMVersionLie::SpMinorVersion;
NS_VistaRTMVersionLie::g_bStaticDllsInit;
NS_VistaRTMVersionLie::g_bSubshimUsed;
NS_VistaRTMVersionLie::g_pAPIHooks;
NS_VistaRTMVersionLie::g_stShimId;
NS_VistaRTMVersionLie::g_szCommandLine;
NS_VistaRTMVersionLie::pszServicePack;
NS_VistaRTMVersionLie::pwszServicePack;
NS_VistaSP1VersionLie::MinorVersion;
NS_VistaSP1VersionLie::SpMinorVersion;
NS_VistaSP1VersionLie::g_bStaticDllsInit;
NS_VistaSP1VersionLie::g_bSubshimUsed;
NS_VistaSP1VersionLie::g_pAPIHooks;
NS_VistaSP1VersionLie::g_stShimId;
NS_VistaSP1VersionLie::g_szCommandLine;
NS_VistaSP1VersionLie::pszServicePack;
NS_VistaSP1VersionLie::pwszServicePack;
NS_VistaSP2VersionLie::MinorVersion;
NS_VistaSP2VersionLie::SpMinorVersion;
NS_VistaSP2VersionLie::g_bStaticDllsInit;
NS_VistaSP2VersionLie::g_bSubshimUsed;
NS_VistaSP2VersionLie::g_pAPIHooks;
NS_VistaSP2VersionLie::g_stShimId;
NS_VistaSP2VersionLie::g_szCommandLine;
NS_VistaSP2VersionLie::pszServicePack;
NS_VistaSP2VersionLie::pwszServicePack;
NS_WRPMitigation::g_TISid;
NS_WRPMitigation::g_bStaticDllsInit;
NS_WRPMitigation::g_bSubshimUsed;
NS_WRPMitigation::g_fManifestCheck;
NS_WRPMitigation::g_pAPIHooks;
NS_WRPMitigation::g_stShimId;
NS_WRPMitigation::g_szCommandLine;
NS_WRPMitigation::g_szExePath;
NS_WRPRegDeleteKey::g_TISid;
NS_WRPRegDeleteKey::g_bStaticDllsInit;
NS_WRPRegDeleteKey::g_bSubshimUsed;
NS_WRPRegDeleteKey::g_pAPIHooks;
NS_WRPRegDeleteKey::g_stShimId;
NS_WRPRegDeleteKey::g_szCommandLine;
NS_WRPRegDeleteKey::g_szExePath;
NS_Win7RTMVersionLie::SpMajorVersion;
NS_Win7RTMVersionLie::SpMinorVersion;
NS_Win7RTMVersionLie::g_bStaticDllsInit;
NS_Win7RTMVersionLie::g_bSubshimUsed;
NS_Win7RTMVersionLie::g_pAPIHooks;
NS_Win7RTMVersionLie::g_stShimId;
NS_Win7RTMVersionLie::g_szCommandLine;
NS_Win7RTMVersionLie::pszServicePack;
NS_Win7RTMVersionLie::pwszServicePack;
NS_Win81RTMVersionLie::SpMajorVersion;
NS_Win81RTMVersionLie::SpMinorVersion;
NS_Win81RTMVersionLie::g_bStaticDllsInit;
NS_Win81RTMVersionLie::g_bSubshimUsed;
NS_Win81RTMVersionLie::g_pAPIHooks;
NS_Win81RTMVersionLie::g_stShimId;
NS_Win81RTMVersionLie::g_szCommandLine;
NS_Win81RTMVersionLie::pszServicePack;
NS_Win81RTMVersionLie::pwszServicePack;
NS_Win8RTMVersionLie::SpMajorVersion;
NS_Win8RTMVersionLie::SpMinorVersion;
NS_Win8RTMVersionLie::g_bStaticDllsInit;
NS_Win8RTMVersionLie::g_bSubshimUsed;
NS_Win8RTMVersionLie::g_pAPIHooks;
NS_Win8RTMVersionLie::g_stShimId;
NS_Win8RTMVersionLie::g_szCommandLine;
NS_Win8RTMVersionLie::pszServicePack;
NS_Win8RTMVersionLie::pwszServicePack;
NS_WsExCompositedShim::g_bStaticDllsInit;
NS_WsExCompositedShim::g_bSubshimUsed;
NS_WsExCompositedShim::g_pAPIHooks;
NS_WsExCompositedShim::g_stShimId;
NS_WsExCompositedShim::g_szCommandLine;
ShimLib::CString::CStringError `RTTI Type Descriptor';
ShimLib::CString::_afxInitData;
ShimLib::CString::_afxPchNil;
ShimLib::PathTreeNodeVisitor::`vftable';
ShimLib::PathTreePrivate::PathTreeNodeSetFlagsVisitor::`vftable';
ShimLib::g_hHeapManagerMutex;
ShimLib::g_hHeapTweakerMutex;
ShimLib::g_hinstDll;
TI1?AVCStringErrorCStringShimLib;
_IMPORT_DESCRIPTOR_ADVAPI32;
_IMPORT_DESCRIPTOR_KERNEL32;
_IMPORT_DESCRIPTOR_SHLWAPI;
_IMPORT_DESCRIPTOR_USER32;
_IMPORT_DESCRIPTOR_WINSPOOL;
_IMPORT_DESCRIPTOR_api-ms-win-core-registry-l1-1-0;
_IMPORT_DESCRIPTOR_api-ms-win-eventing-provider-l1-1-0;
_IMPORT_DESCRIPTOR_api-ms-win-security-base-l1-1-0;
_IMPORT_DESCRIPTOR_apphelp;
_IMPORT_DESCRIPTOR_msvcrt;
_IMPORT_DESCRIPTOR_ntdll;
_IMPORT_DESCRIPTOR_sfc;
_NULL_IMPORT_DESCRIPTOR;
__PchSym_;
_dyn_tls_init_callback;
_guard_check_icall_fptr;
_guard_dispatch_icall_fptr;
_guard_fids_table;
_guard_iat_table;
_imp_??1type_infoUEAAXZ;
_imp_AcquireSRWLockExclusive;
_imp_AcquireSRWLockShared;
_imp_AllocateAndInitializeSid;
_imp_CancelIo;
_imp_CharUpperW;
_imp_CheckTokenMembership;
_imp_CloseHandle;
_imp_CompareStringEx;
_imp_CopySid;
_imp_CreateActCtxW;
_imp_CreateEventW;
_imp_CreateFileMappingW;
_imp_CreateFileW;
_imp_CreateMutexW;
_imp_DeleteCriticalSection;
_imp_EnterCriticalSection;
_imp_EnumDisplaySettingsW;
_imp_EventWriteTransfer;
_imp_ExpandEnvironmentStringsA;
_imp_ExpandEnvironmentStringsW;
_imp_FindClose;
_imp_FindFirstFileW;
_imp_FindNLSStringEx;
_imp_FreeSid;
_imp_GetAce;
_imp_GetAclInformation;
_imp_GetCurrentProcess;
_imp_GetCurrentProcessId;
_imp_GetCurrentThread;
_imp_GetCurrentThreadId;
_imp_GetDefaultPrinterW;
_imp_GetDriveTypeW;
_imp_GetFileAttributesW;
_imp_GetFileSecurityA;
_imp_GetFileSecurityW;
_imp_GetFileSize;
_imp_GetLastError;
_imp_GetLocaleInfoEx;
_imp_GetLogicalDriveStringsW;
_imp_GetModuleFileNameW;
_imp_GetModuleHandleW;
_imp_GetProcAddress;
_imp_GetProcessHeap;
_imp_GetSecurityDescriptorDacl;
_imp_GetSecurityInfo;
_imp_GetShortPathNameW;
_imp_GetSystemDirectoryW;
_imp_GetSystemMetrics;
_imp_GetSystemTimeAsFileTime;
_imp_GetTempFileNameA;
_imp_GetTempFileNameW;
_imp_GetTempPathA;
_imp_GetTempPathW;
_imp_GetTickCount;
_imp_GetTokenInformation;
_imp_GetVolumeNameForVolumeMountPointW;
_imp_GetWindowsDirectoryW;
_imp_HeapAlloc;
_imp_HeapFree;
_imp_HeapReAlloc;
_imp_InitializeCriticalSection;
_imp_InitializeCriticalSectionAndSpinCount;
_imp_InitializeSRWLock;
_imp_IsNLSDefinedString;
_imp_LCIDToLocaleName;
_imp_LCMapStringEx;
_imp_LeaveCriticalSection;
_imp_LoadLibraryW;
_imp_LocalAlloc;
_imp_LocalFree;
_imp_MapViewOfFile;
_imp_MultiByteToWideChar;
_imp_NtOpenFile;
_imp_NtQueryInformationProcess;
_imp_NtQueryInformationToken;
_imp_NtQueryKey;
_imp_NtQueryObject;
_imp_NtQuerySystemInformation;
_imp_NtTerminateProcess;
_imp_OpenMutexW;
_imp_OpenProcessToken;
_imp_OpenThreadToken;
_imp_OutputDebugStringA;
_imp_PathFindFileNameW;
_imp_QueryActCtxW;
_imp_QueryFullProcessImageNameW;
_imp_QueryPerformanceCounter;
_imp_ReadFile;
_imp_RegCloseKey;
_imp_RegDeleteKeyExW;
_imp_RegEnumKeyExW;
_imp_RegGetKeySecurity;
_imp_RegOpenKeyExA;
_imp_RegOpenKeyExW;
_imp_RegQueryValueExW;
_imp_RegSetValueExW;
_imp_ReleaseActCtx;
_imp_ReleaseSRWLockExclusive;
_imp_ReleaseSRWLockShared;
_imp_RtlAllocateHeap;
_imp_RtlAppendUnicodeToString;
_imp_RtlCaptureContext;
_imp_RtlCaptureStackBackTrace;
_imp_RtlCreateUnicodeStringFromAsciiz;
_imp_RtlEqualSid;
_imp_RtlFormatCurrentUserKeyPath;
_imp_RtlFreeHeap;
_imp_RtlFreeUnicodeString;
_imp_RtlGetLastNtStatus;
_imp_RtlGetOwnerSecurityDescriptor;
_imp_RtlImageNtHeader;
_imp_RtlInitUnicodeString;
_imp_RtlInitializeSid;
_imp_RtlLengthRequiredSid;
_imp_RtlLookupFunctionEntry;
_imp_RtlMultiByteToUnicodeN;
_imp_RtlNtStatusToDosError;
_imp_RtlRaiseException;
_imp_RtlReportException;
_imp_RtlSetLastWin32ErrorAndNtStatusFromNtStatus;
_imp_RtlSubAuthoritySid;
_imp_RtlUnicodeToMultiByteN;
_imp_RtlUnicodeToMultiByteSize;
_imp_RtlUniform;
_imp_RtlValidateHeap;
_imp_RtlVirtualUnwind;
_imp_SE_GetShimId;
_imp_SE_ShimDPF;
_imp_SetFilePointer;
_imp_SetLastError;
_imp_SetNamedPipeHandleState;
_imp_SetUnhandledExceptionFilter;
_imp_SfcIsKeyProtected;
_imp_Sleep;
_imp_TerminateProcess;
_imp_UnhandledExceptionFilter;
_imp_UnmapViewOfFile;
_imp_WaitForSingleObject;
_imp_WerRegisterMemoryBlock;
_imp_WideCharToMultiByte;
_imp_WinSqmAddToStream;
_imp_WriteFile;
_imp__CxxThrowException;
_imp__XcptFilter;
_imp___C_specific_handler;
_imp___CxxFrameHandler3;
_imp__amsg_exit;
_imp__initterm;
_imp__scwprintf;
_imp__stricmp;
_imp__vscprintf;
_imp__vscwprintf;
_imp__vsnprintf;
_imp__vsnwprintf;
_imp__wcsicmp;
_imp__wcsnicmp;
_imp_atol;
_imp_free;
_imp_iswctype;
_imp_iswspace;
_imp_malloc;
_imp_memcpy;
_imp_memmove;
_imp_memset;
_imp_sprintf_s;
_imp_strcmp;
_imp_towlower;
_imp_vsprintf_s;
_imp_wcschr;
_imp_wcsncmp;
_imp_wcspbrk;
_imp_wcsrchr;
_imp_wcsstr;
_native_dllmain_reason;
_native_startup_lock;
_native_startup_state;
_onexitbegin;
_onexitend;
_security_cookie;
_security_cookie_complement;
_xc_a;
_xc_z;
_xi_a;
_xi_z;
load_config_used;
pRawDllMain;
type_info::`vftable';
ADVAPI32_NULL_THUNK_DATA;
KERNEL32_NULL_THUNK_DATA;
SHLWAPI_NULL_THUNK_DATA;
USER32_NULL_THUNK_DATA;
WINSPOOL_NULL_THUNK_DATA;
api-ms-win-core-registry-l1-1-0_NULL_THUNK_DATA;
api-ms-win-eventing-provider-l1-1-0_NULL_THUNK_DATA;
api-ms-win-security-base-l1-1-0_NULL_THUNK_DATA;
apphelp_NULL_THUNK_DATA;
msvcrt_NULL_THUNK_DATA;
ntdll_NULL_THUNK_DATA;
sfc_NULL_THUNK_DATA;

CRT_INIT();
CxxThrowException();
DllMain();
DllMainCRTStartup();
FindPESection();
IsNonwritableInCurrentImage();
McGenEventWrite();
McTemplateU0ssss();
NS_DXMaximizedWindowedHwndOverride::InitializeHooksMulti();
NS_DXMaximizedWindowedHwndOverride::SetD3D9MaximizedWindowedHwndOverride();
NS_DXMaximizedWindowedMode::InitializeHooksMulti();
NS_DXMaximizedWindowedMode::NotifyFn();
NS_DXMaximizedWindowedMode::SetD3D9MaximizedWindowedMode();
NS_EmulateSortingVista::APIHook_CompareStringA();
NS_EmulateSortingVista::APIHook_CompareStringEx();
NS_EmulateSortingVista::APIHook_CompareStringW();
NS_EmulateSortingVista::APIHook_FindNLSString();
NS_EmulateSortingVista::APIHook_FindNLSStringEx();
NS_EmulateSortingVista::APIHook_IsNLSDefinedString();
NS_EmulateSortingVista::APIHook_LCMapStringA();
NS_EmulateSortingVista::APIHook_LCMapStringEx();
NS_EmulateSortingVista::APIHook_LCMapStringW();
NS_EmulateSortingVista::InitializeHooksMulti();
NS_EmulateSortingWindows61::APIHook_CompareStringA();
NS_EmulateSortingWindows61::APIHook_CompareStringEx();
NS_EmulateSortingWindows61::APIHook_CompareStringW();
NS_EmulateSortingWindows61::APIHook_FindNLSString();
NS_EmulateSortingWindows61::APIHook_FindNLSStringEx();
NS_EmulateSortingWindows61::APIHook_GetNLSVersion();
NS_EmulateSortingWindows61::APIHook_GetNLSVersionEx();
NS_EmulateSortingWindows61::APIHook_IsNLSDefinedString();
NS_EmulateSortingWindows61::APIHook_LCMapStringA();
NS_EmulateSortingWindows61::APIHook_LCMapStringEx();
NS_EmulateSortingWindows61::APIHook_LCMapStringW();
NS_EmulateSortingWindows61::GetNLSVersionHelper();
NS_EmulateSortingWindows61::InitializeHooksMulti();
NS_EmulateSortingWindows61::`dynamic initializer for 'SortVer''();
NS_FaultTolerantHeap::APIHook_RtlAllocateHeap();
NS_FaultTolerantHeap::APIHook_RtlCreateHeap();
NS_FaultTolerantHeap::APIHook_RtlDestroyHeap();
NS_FaultTolerantHeap::APIHook_RtlExitUserProcess();
NS_FaultTolerantHeap::APIHook_RtlFreeHeap();
NS_FaultTolerantHeap::APIHook_RtlLockHeap();
NS_FaultTolerantHeap::APIHook_RtlReAllocateHeap();
NS_FaultTolerantHeap::APIHook_RtlSizeHeap();
NS_FaultTolerantHeap::APIHook_RtlUnlockHeap();
NS_FaultTolerantHeap::APIHook_RtlValidateHeap();
NS_FaultTolerantHeap::APIHook_RtlWalkHeap();
NS_FaultTolerantHeap::APIHook_exit();
NS_FaultTolerantHeap::FthClientAssert();
NS_FaultTolerantHeap::FthClientAttemptConnection();
NS_FaultTolerantHeap::FthClientError();
NS_FaultTolerantHeap::FthClientInitialize();
NS_FaultTolerantHeap::FthClientMessage();
NS_FaultTolerantHeap::FthClientReportSQM();
NS_FaultTolerantHeap::FthClientSendFinalAcknowledge();
NS_FaultTolerantHeap::FthCreateHeap();
NS_FaultTolerantHeap::FthCreateWerReport();
NS_FaultTolerantHeap::FthDelayFreeQueueFlush();
NS_FaultTolerantHeap::FthDelayFreeQueueInsert();
NS_FaultTolerantHeap::FthDestroyHeap();
NS_FaultTolerantHeap::FthExitUserProcess();
NS_FaultTolerantHeap::FthFreeTrackerFindStack();
NS_FaultTolerantHeap::FthFreeTrackerLogStack();
NS_FaultTolerantHeap::FthGetTimeStampString();
NS_FaultTolerantHeap::FthGetVersionString();
NS_FaultTolerantHeap::FthInitializeCookie();
NS_FaultTolerantHeap::FthInitializeSharedEntryPoints();
NS_FaultTolerantHeap::FthInitializeWerEntryPoints();
NS_FaultTolerantHeap::FthLogIssue();
NS_FaultTolerantHeap::FthReportCriticalFailure();
NS_FaultTolerantHeap::FthSecureRemoveEntryList();
NS_FaultTolerantHeap::FthSizeHeap();
NS_FaultTolerantHeap::FthValidateHeap();
NS_FaultTolerantHeap::FthWalkHeap();
NS_FaultTolerantHeap::FthpClientCreateMappedView();
NS_FaultTolerantHeap::FthpClientInitializeWatsonView();
NS_FaultTolerantHeap::InitializeHooksMulti();
NS_FaultTolerantHeap::NotifyFn();
NS_VerifyVersionInfoLite::APIHook_VerifyVersionInfoA();
NS_VerifyVersionInfoLite::APIHook_VerifyVersionInfoW();
NS_VerifyVersionInfoLite::InitializeHooksMulti();
NS_VirtualRegistry2::APIHook_RegCloseKey();
NS_VirtualRegistry2::APIHook_RegCreateKeyA();
NS_VirtualRegistry2::APIHook_RegCreateKeyExA();
NS_VirtualRegistry2::APIHook_RegCreateKeyExW();
NS_VirtualRegistry2::APIHook_RegCreateKeyW();
NS_VirtualRegistry2::APIHook_RegDeleteKeyA();
NS_VirtualRegistry2::APIHook_RegDeleteKeyExA();
NS_VirtualRegistry2::APIHook_RegDeleteKeyExW();
NS_VirtualRegistry2::APIHook_RegDeleteKeyW();
NS_VirtualRegistry2::APIHook_RegEnumKeyA();
NS_VirtualRegistry2::APIHook_RegEnumKeyExA();
NS_VirtualRegistry2::APIHook_RegEnumKeyExW();
NS_VirtualRegistry2::APIHook_RegEnumKeyW();
NS_VirtualRegistry2::APIHook_RegEnumValueA();
NS_VirtualRegistry2::APIHook_RegEnumValueW();
NS_VirtualRegistry2::APIHook_RegOpenKeyA();
NS_VirtualRegistry2::APIHook_RegOpenKeyExA();
NS_VirtualRegistry2::APIHook_RegOpenKeyExW();
NS_VirtualRegistry2::APIHook_RegOpenKeyW();
NS_VirtualRegistry2::APIHook_RegQueryInfoKeyA();
NS_VirtualRegistry2::APIHook_RegQueryInfoKeyW();
NS_VirtualRegistry2::APIHook_RegQueryValueA();
NS_VirtualRegistry2::APIHook_RegQueryValueExA();
NS_VirtualRegistry2::APIHook_RegQueryValueExW();
NS_VirtualRegistry2::APIHook_RegQueryValueW();
NS_VirtualRegistry2::APIHook_RegSetValueExA();
NS_VirtualRegistry2::APIHook_RegSetValueExW();
NS_VirtualRegistry2::BuildEnvironmentLie();
NS_VirtualRegistry2::BuildProgramFilesDirX86Lie();
NS_VirtualRegistry2::BuildWow64KeyLie();
NS_VirtualRegistry2::CRegLock::~CRegLock();
NS_VirtualRegistry2::CVirtualKey::AddKey();
NS_VirtualRegistry2::CVirtualKey::AddValue();
NS_VirtualRegistry2::CVirtualKey::FindKey();
NS_VirtualRegistry2::CVirtualKey::FindValue();
NS_VirtualRegistry2::CVirtualKey::Initialize();
NS_VirtualRegistry2::CVirtualRegistry::AddEntries();
NS_VirtualRegistry2::CVirtualRegistry::AddKey();
NS_VirtualRegistry2::CVirtualRegistry::AddKeyValues();
NS_VirtualRegistry2::CVirtualRegistry::AddSingleEntry();
NS_VirtualRegistry2::CVirtualRegistry::AppendSubKeyPath();
NS_VirtualRegistry2::CVirtualRegistry::CloseKey();
NS_VirtualRegistry2::CVirtualRegistry::CreateKeyExA();
NS_VirtualRegistry2::CVirtualRegistry::CreateKeyExW();
NS_VirtualRegistry2::CVirtualRegistry::DeleteKeyExA();
NS_VirtualRegistry2::CVirtualRegistry::DeleteKeyExW();
NS_VirtualRegistry2::CVirtualRegistry::EnumKeyExA();
NS_VirtualRegistry2::CVirtualRegistry::EnumKeyExW();
NS_VirtualRegistry2::CVirtualRegistry::EnumValueA();
NS_VirtualRegistry2::CVirtualRegistry::EnumValueW();
NS_VirtualRegistry2::CVirtualRegistry::FindKey();
NS_VirtualRegistry2::CVirtualRegistry::FindRootKey();
NS_VirtualRegistry2::CVirtualRegistry::FindSubKey();
NS_VirtualRegistry2::CVirtualRegistry::GetKeyFullPath();
NS_VirtualRegistry2::CVirtualRegistry::GetKeyHandle();
NS_VirtualRegistry2::CVirtualRegistry::GetKeyPath();
NS_VirtualRegistry2::CVirtualRegistry::GetOpenKey();
NS_VirtualRegistry2::CVirtualRegistry::GetRootKey();
NS_VirtualRegistry2::CVirtualRegistry::GetRootKeyPath();
NS_VirtualRegistry2::CVirtualRegistry::Initialize();
NS_VirtualRegistry2::CVirtualRegistry::OpenKeyExA();
NS_VirtualRegistry2::CVirtualRegistry::OpenKeyExW();
NS_VirtualRegistry2::CVirtualRegistry::QueryInfoKeyA();
NS_VirtualRegistry2::CVirtualRegistry::QueryInfoKeyW();
NS_VirtualRegistry2::CVirtualRegistry::QueryValueExA();
NS_VirtualRegistry2::CVirtualRegistry::QueryValueExW();
NS_VirtualRegistry2::CVirtualRegistry::QueryValueWorker();
NS_VirtualRegistry2::CVirtualRegistry::SetValueExA();
NS_VirtualRegistry2::CVirtualRegistry::SetValueExW();
NS_VirtualRegistry2::CVirtualValue::Initialize();
NS_VirtualRegistry2::DuplicateString();
NS_VirtualRegistry2::InitializeHooksMulti();
NS_VirtualRegistry2::NotifyFn();
NS_VirtualRegistry2::ParseCommandLineA();
NS_VirtualRegistry::APIHook_RegCloseKey();
NS_VirtualRegistry::APIHook_RegConnectRegistryA();
NS_VirtualRegistry::APIHook_RegConnectRegistryW();
NS_VirtualRegistry::APIHook_RegCreateKeyA();
NS_VirtualRegistry::APIHook_RegCreateKeyExA();
NS_VirtualRegistry::APIHook_RegCreateKeyExW();
NS_VirtualRegistry::APIHook_RegCreateKeyW();
NS_VirtualRegistry::APIHook_RegDeleteKeyA();
NS_VirtualRegistry::APIHook_RegDeleteKeyExA();
NS_VirtualRegistry::APIHook_RegDeleteKeyExW();
NS_VirtualRegistry::APIHook_RegDeleteKeyW();
NS_VirtualRegistry::APIHook_RegEnumKeyA();
NS_VirtualRegistry::APIHook_RegEnumKeyExA();
NS_VirtualRegistry::APIHook_RegEnumKeyExW();
NS_VirtualRegistry::APIHook_RegEnumKeyW();
NS_VirtualRegistry::APIHook_RegEnumValueA();
NS_VirtualRegistry::APIHook_RegEnumValueW();
NS_VirtualRegistry::APIHook_RegGetValueA();
NS_VirtualRegistry::APIHook_RegGetValueW();
NS_VirtualRegistry::APIHook_RegOpenKeyA();
NS_VirtualRegistry::APIHook_RegOpenKeyExA();
NS_VirtualRegistry::APIHook_RegOpenKeyExW();
NS_VirtualRegistry::APIHook_RegOpenKeyW();
NS_VirtualRegistry::APIHook_RegOpenUserClassesRoot();
NS_VirtualRegistry::APIHook_RegQueryInfoKeyA();
NS_VirtualRegistry::APIHook_RegQueryInfoKeyW();
NS_VirtualRegistry::APIHook_RegQueryValueA();
NS_VirtualRegistry::APIHook_RegQueryValueExA();
NS_VirtualRegistry::APIHook_RegQueryValueExW();
NS_VirtualRegistry::APIHook_RegQueryValueW();
NS_VirtualRegistry::APIHook_RegSetValueA();
NS_VirtualRegistry::APIHook_RegSetValueExA();
NS_VirtualRegistry::APIHook_RegSetValueExW();
NS_VirtualRegistry::APIHook_RegSetValueW();
NS_VirtualRegistry::AddCodecValues();
NS_VirtualRegistry::AddDirectSoundAppHack();
NS_VirtualRegistry::BuildAddRedirect();
NS_VirtualRegistry::BuildAirlineTycoon();
NS_VirtualRegistry::BuildArm64WOW();
NS_VirtualRegistry::BuildArm64X86ProcLie();
NS_VirtualRegistry::BuildAutoRun();
NS_VirtualRegistry::BuildBogusCtrlID();
NS_VirtualRegistry::BuildCLRVersion45Lie();
NS_VirtualRegistry::BuildCLRVersion46Lie();
NS_VirtualRegistry::BuildCLRVersionLie();
NS_VirtualRegistry::BuildCentennialOffice();
NS_VirtualRegistry::BuildCentennialOfficex64();
NS_VirtualRegistry::BuildCodecs();
NS_VirtualRegistry::BuildCookiePath();
NS_VirtualRegistry::BuildCurrentConfig();
NS_VirtualRegistry::BuildD3DReleaseDevice();
NS_VirtualRegistry::BuildD3DReleaseProcessVid();
NS_VirtualRegistry::BuildDDrawReleaseProcessVid();
NS_VirtualRegistry::BuildDSCachePositions();
NS_VirtualRegistry::BuildDSDevAccel();
NS_VirtualRegistry::BuildDSDisableDevice();
NS_VirtualRegistry::BuildDSPadCursors();
NS_VirtualRegistry::BuildDSReturnWritePos();
NS_VirtualRegistry::BuildDSSmoothWritePos();
NS_VirtualRegistry::BuildDX7A();
NS_VirtualRegistry::BuildDX8();
NS_VirtualRegistry::BuildDXDiag();
NS_VirtualRegistry::BuildDelphi5Pro();
NS_VirtualRegistry::BuildDisableWin9xMode();
NS_VirtualRegistry::BuildDynData();
NS_VirtualRegistry::BuildExpanders();
NS_VirtualRegistry::BuildFileNetWebServer();
NS_VirtualRegistry::BuildFlashUpdaterLie();
NS_VirtualRegistry::BuildFutureCop();
NS_VirtualRegistry::BuildGOMPack();
NS_VirtualRegistry::BuildHEDZ();
NS_VirtualRegistry::BuildHasbro();
NS_VirtualRegistry::BuildHotFix();
NS_VirtualRegistry::BuildIBMDirector();
NS_VirtualRegistry::BuildIE11NoRevisionLie();
NS_VirtualRegistry::BuildIE401();
NS_VirtualRegistry::BuildIE55();
NS_VirtualRegistry::BuildIE60();
NS_VirtualRegistry::BuildIESetupPath();
NS_VirtualRegistry::BuildITunesRedirectHKCR();
NS_VirtualRegistry::BuildIllustrator8();
NS_VirtualRegistry::BuildIndeo3();
NS_VirtualRegistry::BuildIndeo4();
NS_VirtualRegistry::BuildIndeo5();
NS_VirtualRegistry::BuildIndeoSound();
NS_VirtualRegistry::BuildInetComm();
NS_VirtualRegistry::BuildInstallRoot();
NS_VirtualRegistry::BuildJoystick();
NS_VirtualRegistry::BuildKrondor();
NS_VirtualRegistry::BuildLocale();
NS_VirtualRegistry::BuildMSA2001();
NS_VirtualRegistry::BuildMSI();
NS_VirtualRegistry::BuildModemWizard();
NS_VirtualRegistry::BuildNT4SP5();
NS_VirtualRegistry::BuildNT50();
NS_VirtualRegistry::BuildNT51();
NS_VirtualRegistry::BuildNetworkCards();
NS_VirtualRegistry::BuildNortonAntiVirus();
NS_VirtualRegistry::BuildNowroBlue();
NS_VirtualRegistry::BuildOleViewRedirect();
NS_VirtualRegistry::BuildPageKeepProDirectory();
NS_VirtualRegistry::BuildPageMaker65();
NS_VirtualRegistry::BuildPagingFiles();
NS_VirtualRegistry::BuildPrincetonACT();
NS_VirtualRegistry::BuildPrinter();
NS_VirtualRegistry::BuildProductSuite();
NS_VirtualRegistry::BuildProductTypeServerNT();
NS_VirtualRegistry::BuildProfile();
NS_VirtualRegistry::BuildRedirectors();
NS_VirtualRegistry::BuildRegisteredOwner();
NS_VirtualRegistry::BuildSpellItDeluxe();
NS_VirtualRegistry::BuildStarTrekArmada();
NS_VirtualRegistry::BuildTalkingDictionary();
NS_VirtualRegistry::BuildThemeActive();
NS_VirtualRegistry::BuildTrueMotion20();
NS_VirtualRegistry::BuildVersionLie();
NS_VirtualRegistry::BuildVirtualizeHKCR();
NS_VirtualRegistry::BuildVistaRTMLie();
NS_VirtualRegistry::BuildVistaSP1Lie();
NS_VirtualRegistry::BuildVistaSP2Lie();
NS_VirtualRegistry::BuildWABDLLPath();
NS_VirtualRegistry::BuildWebSphereSetup();
NS_VirtualRegistry::BuildWin2kSp2Lie();
NS_VirtualRegistry::BuildWin2kSp3Lie();
NS_VirtualRegistry::BuildWin7RTMLie();
NS_VirtualRegistry::BuildWin81RTMLie();
NS_VirtualRegistry::BuildWin8RTMLie();
NS_VirtualRegistry::BuildWin8ShellNSSortOrderIndex();
NS_VirtualRegistry::BuildWin98SE();
NS_VirtualRegistry::BuildWin9x();
NS_VirtualRegistry::BuildWinHelpPath();
NS_VirtualRegistry::BuildWinNT();
NS_VirtualRegistry::BuildWinNTCurrentVersion();
NS_VirtualRegistry::BuildWinSrv03Lie();
NS_VirtualRegistry::BuildWinSrv03Sp1Lie();
NS_VirtualRegistry::BuildWinSrv08R2RTMLie();
NS_VirtualRegistry::BuildWinSrv08Sp1Lie();
NS_VirtualRegistry::BuildWinSrv2012RTMLie();
NS_VirtualRegistry::BuildWinXP();
NS_VirtualRegistry::BuildWordPad();
NS_VirtualRegistry::BuildWordPerfect2002();
NS_VirtualRegistry::BuildX86ArchLie();
NS_VirtualRegistry::BuildXpLie();
NS_VirtualRegistry::BuildXpSp1Lie();
NS_VirtualRegistry::BuildXpSp2Lie();
NS_VirtualRegistry::BuildXpSp3Lie();
NS_VirtualRegistry::BuildiRCPlayer();
NS_VirtualRegistry::CRegLock::CRegLock();
NS_VirtualRegistry::CRegLock::~CRegLock();
NS_VirtualRegistry::CVirtualRegistry::AddKeyProtector();
NS_VirtualRegistry::CVirtualRegistry::AddRedirect();
NS_VirtualRegistry::CVirtualRegistry::AllocateHKCUClassesKeyName();
NS_VirtualRegistry::CVirtualRegistry::CheckProtected();
NS_VirtualRegistry::CVirtualRegistry::CheckRedirect();
NS_VirtualRegistry::CVirtualRegistry::CheckTriggers();
NS_VirtualRegistry::CVirtualRegistry::CloseKey();
NS_VirtualRegistry::CVirtualRegistry::CreateDummyKey();
NS_VirtualRegistry::CVirtualRegistry::CreateHKCUClassesKey();
NS_VirtualRegistry::CVirtualRegistry::DeleteKeyA();
NS_VirtualRegistry::CVirtualRegistry::DeleteKeyW();
NS_VirtualRegistry::CVirtualRegistry::EnableVirtualHKCRDelete();
NS_VirtualRegistry::CVirtualRegistry::EnumKeyA();
NS_VirtualRegistry::CVirtualRegistry::EnumKeyW();
NS_VirtualRegistry::CVirtualRegistry::EnumValueA();
NS_VirtualRegistry::CVirtualRegistry::EnumValueW();
NS_VirtualRegistry::CVirtualRegistry::ExpandRegString();
NS_VirtualRegistry::CVirtualRegistry::FindOpenKey();
NS_VirtualRegistry::CVirtualRegistry::FixRegGetValue();
NS_VirtualRegistry::CVirtualRegistry::FlushEnumLists();
NS_VirtualRegistry::CVirtualRegistry::GetValueA();
NS_VirtualRegistry::CVirtualRegistry::GetValueW();
NS_VirtualRegistry::CVirtualRegistry::Init();
NS_VirtualRegistry::CVirtualRegistry::IsHKCRPathVirtualDeleted();
NS_VirtualRegistry::CVirtualRegistry::NullTerminateRegSz();
NS_VirtualRegistry::CVirtualRegistry::OpenKeyA();
NS_VirtualRegistry::CVirtualRegistry::OpenKeyW();
NS_VirtualRegistry::CVirtualRegistry::OpenUserClassesRoot();
NS_VirtualRegistry::CVirtualRegistry::QueryInfoA();
NS_VirtualRegistry::CVirtualRegistry::QueryInfoW();
NS_VirtualRegistry::CVirtualRegistry::QueryValueA();
NS_VirtualRegistry::CVirtualRegistry::QueryValueW();
NS_VirtualRegistry::CVirtualRegistry::RemoveVirtualDeletedHKCRKeysFromEnum();
NS_VirtualRegistry::CVirtualRegistry::SetHKCRPathVirtualDeleted();
NS_VirtualRegistry::CVirtualRegistry::SetValueA();
NS_VirtualRegistry::CVirtualRegistry::SetValueW();
NS_VirtualRegistry::CreateNewEnumEntry();
NS_VirtualRegistry::Delphi5SetValue();
NS_VirtualRegistry::ExpandCodecString();
NS_VirtualRegistry::FindCDROMKey();
NS_VirtualRegistry::GetCentennialAppFolder();
NS_VirtualRegistry::GetDirectSoundAppId();
NS_VirtualRegistry::GetStringSID();
NS_VirtualRegistry::InitializeHooksMulti();
NS_VirtualRegistry::MakePath();
NS_VirtualRegistry::NotifyFn();
NS_VirtualRegistry::OPENKEY::AddEnumEntries<NS_VirtualRegistry::VIRTUALKEY>();
NS_VirtualRegistry::OPENKEY::AddEnumEntries<NS_VirtualRegistry::VIRTUALVAL>();
NS_VirtualRegistry::OPENKEY::BuildEnumList();
NS_VirtualRegistry::OPENKEY::FlushEnumList();
NS_VirtualRegistry::OPENKEY::Free();
NS_VirtualRegistry::ParseCommandLineA();
NS_VirtualRegistry::SplitPath();
NS_VirtualRegistry::TrimSlashW();
NS_VirtualRegistry::UseHKLM();
NS_VirtualRegistry::VIRTUALKEY::AddExpander();
NS_VirtualRegistry::VIRTUALKEY::AddKey();
NS_VirtualRegistry::VIRTUALKEY::AddProtector();
NS_VirtualRegistry::VIRTUALKEY::AddValue();
NS_VirtualRegistry::VIRTUALKEY::FindKey();
NS_VirtualRegistry::VIRTUALKEY::FindValue();
NS_VirtualRegistry::VR_Expand();
NS_VirtualRegistry::VR_Hasbro();
NS_VirtualRegistry::VR_MSA2001();
NS_VirtualRegistry::VR_Printer();
NS_VirtualRegistry::VR_Protect();
NS_VistaRTMVersionLie::APIHook_GetVersion();
NS_VistaRTMVersionLie::APIHook_GetVersionExA();
NS_VistaRTMVersionLie::APIHook_GetVersionExW();
NS_VistaRTMVersionLie::APIHook_RtlGetVersion();
NS_VistaRTMVersionLie::GetFormatStringLength();
NS_VistaRTMVersionLie::InitializeHooksMulti();
NS_VistaRTMVersionLie::NotifyFn();
NS_VistaRTMVersionLie::ReleaseServicePackStrings();
NS_VistaSP1VersionLie::APIHook_GetVersion();
NS_VistaSP1VersionLie::APIHook_GetVersionExA();
NS_VistaSP1VersionLie::APIHook_GetVersionExW();
NS_VistaSP1VersionLie::APIHook_RtlGetVersion();
NS_VistaSP1VersionLie::GetFormatStringLength();
NS_VistaSP1VersionLie::InitializeHooksMulti();
NS_VistaSP1VersionLie::NotifyFn();
NS_VistaSP1VersionLie::ReleaseServicePackStrings();
NS_VistaSP2VersionLie::APIHook_GetVersion();
NS_VistaSP2VersionLie::APIHook_GetVersionExA();
NS_VistaSP2VersionLie::APIHook_GetVersionExW();
NS_VistaSP2VersionLie::APIHook_RtlGetVersion();
NS_VistaSP2VersionLie::GetFormatStringLength();
NS_VistaSP2VersionLie::InitializeHooksMulti();
NS_VistaSP2VersionLie::NotifyFn();
NS_VistaSP2VersionLie::ReleaseServicePackStrings();
NS_WRPMitigation::APIHook_AccessCheck();
NS_WRPMitigation::APIHook_CopyFileA();
NS_WRPMitigation::APIHook_CopyFileExA();
NS_WRPMitigation::APIHook_CopyFileExW();
NS_WRPMitigation::APIHook_CopyFileW();
NS_WRPMitigation::APIHook_CreateFileA();
NS_WRPMitigation::APIHook_CreateFileW();
NS_WRPMitigation::APIHook_DeleteFileA();
NS_WRPMitigation::APIHook_DeleteFileW();
NS_WRPMitigation::APIHook_MoveFileA();
NS_WRPMitigation::APIHook_MoveFileExA();
NS_WRPMitigation::APIHook_MoveFileExW();
NS_WRPMitigation::APIHook_MoveFileW();
NS_WRPMitigation::APIHook_OpenFile();
NS_WRPMitigation::APIHook_PrivCopyFileExW();
NS_WRPMitigation::APIHook_RegCloseKey();
NS_WRPMitigation::APIHook_RegCreateKeyA();
NS_WRPMitigation::APIHook_RegCreateKeyExA();
NS_WRPMitigation::APIHook_RegCreateKeyExW();
NS_WRPMitigation::APIHook_RegCreateKeyW();
NS_WRPMitigation::APIHook_RegDeleteValueA();
NS_WRPMitigation::APIHook_RegDeleteValueW();
NS_WRPMitigation::APIHook_RegOpenKeyExA();
NS_WRPMitigation::APIHook_RegOpenKeyExW();
NS_WRPMitigation::APIHook_RegSetValueA();
NS_WRPMitigation::APIHook_RegSetValueExA();
NS_WRPMitigation::APIHook_RegSetValueExW();
NS_WRPMitigation::APIHook_RegSetValueW();
NS_WRPMitigation::APIHook_SetFileAttributesA();
NS_WRPMitigation::APIHook_SetFileAttributesW();
NS_WRPMitigation::APIHook_SetFileSecurityA();
NS_WRPMitigation::APIHook_SetFileSecurityW();
NS_WRPMitigation::APIHook_VerInstallFileA();
NS_WRPMitigation::APIHook_VerInstallFileW();
NS_WRPMitigation::APIHook__lcreat();
NS_WRPMitigation::APIHook__lopen();
NS_WRPMitigation::APIHook__lwrite();
NS_WRPMitigation::GetKeyPath();
NS_WRPMitigation::InitializeHooksMulti();
NS_WRPMitigation::IsExeManifested();
NS_WRPMitigation::IsKeyComKey();
NS_WRPMitigation::IsWrpFileDescriptor();
NS_WRPMitigation::LogSfpKeyA();
NS_WRPMitigation::LogSfpKeyW();
NS_WRPMitigation::LogSfpValueA();
NS_WRPMitigation::LogSfpValueW();
NS_WRPMitigation::MySfpIsFileProtectedA();
NS_WRPMitigation::MySfpIsFileProtectedW();
NS_WRPMitigation::MySfpIsHandleProtected();
NS_WRPMitigation::MySfpIsKeyProtectedA();
NS_WRPMitigation::MySfpIsParentKeyProtectedA();
NS_WRPMitigation::MySfpIsParentKeyProtectedW();
NS_WRPRegDeleteKey::APIHook_RegDeleteKeyA();
NS_WRPRegDeleteKey::APIHook_RegDeleteKeyW();
NS_WRPRegDeleteKey::GetKeyPath();
NS_WRPRegDeleteKey::InitializeHooksMulti();
NS_WRPRegDeleteKey::IsWrpKeyDescriptor();
NS_WRPRegDeleteKey::LogSfpKeyW();
NS_WRPRegDeleteKey::MySfpIsKeyOrAnySubkeyProtected();
NS_WRPRegDeleteKey::MySfpIsKeyProtected();
NS_WRPRegDeleteKey::NotifyFn();
NS_Win7RTMVersionLie::APIHook_GetVersion();
NS_Win7RTMVersionLie::APIHook_GetVersionExA();
NS_Win7RTMVersionLie::APIHook_GetVersionExW();
NS_Win7RTMVersionLie::APIHook_RtlGetVersion();
NS_Win7RTMVersionLie::GetFormatStringLength();
NS_Win7RTMVersionLie::InitializeHooksMulti();
NS_Win7RTMVersionLie::NotifyFn();
NS_Win7RTMVersionLie::ReleaseServicePackStrings();
NS_Win81RTMVersionLie::APIHook_GetVersion();
NS_Win81RTMVersionLie::APIHook_GetVersionExA();
NS_Win81RTMVersionLie::APIHook_GetVersionExW();
NS_Win81RTMVersionLie::APIHook_RtlGetVersion();
NS_Win81RTMVersionLie::GetFormatStringLength();
NS_Win81RTMVersionLie::InitializeHooksMulti();
NS_Win81RTMVersionLie::NotifyFn();
NS_Win81RTMVersionLie::ReleaseServicePackStrings();
NS_Win8RTMVersionLie::APIHook_GetVersion();
NS_Win8RTMVersionLie::APIHook_GetVersionExA();
NS_Win8RTMVersionLie::APIHook_GetVersionExW();
NS_Win8RTMVersionLie::APIHook_RtlGetVersion();
NS_Win8RTMVersionLie::GetFormatStringLength();
NS_Win8RTMVersionLie::InitializeHooksMulti();
NS_Win8RTMVersionLie::NotifyFn();
NS_Win8RTMVersionLie::ReleaseServicePackStrings();
NS_WsExCompositedShim::APIHook_CreateWindowExA();
NS_WsExCompositedShim::APIHook_CreateWindowExW();
NS_WsExCompositedShim::InitializeHooksMulti();
ShimLib::AcquireHeapManagerMutex();
ShimLib::CString::AllocBuffer();
ShimLib::CString::AllocCopy();
ShimLib::CString::AppendPath();
ShimLib::CString::Assign();
ShimLib::CString::AssignCopy();
ShimLib::CString::CString();
ShimLib::CString::CStringError::~CStringError();
ShimLib::CString::ConcatCopy();
ShimLib::CString::ConcatInPlace();
ShimLib::CString::CopyBeforeWrite();
ShimLib::CString::ExpandEnvironmentStringsW();
ShimLib::CString::FindLastPathComponent();
ShimLib::CString::FindOneNotOf();
ShimLib::CString::Format();
ShimLib::CString::FormatV();
ShimLib::CString::FreeData();
ShimLib::CString::GetAnsi();
ShimLib::CString::GetBuffer();
ShimLib::CString::Insert();
ShimLib::CString::Left();
ShimLib::CString::Mid();
ShimLib::CString::Release();
ShimLib::CString::ReleaseBuffer();
ShimLib::CString::ReplaceRoutine();
ShimLib::CString::SafeStrlen();
ShimLib::CString::TrimRight();
ShimLib::CString::Truncate();
ShimLib::CString::operator+=();
ShimLib::CString::operator=();
ShimLib::CString::~CString();
ShimLib::CStringToken::CStringToken();
ShimLib::CStringToken::GetToken();
ShimLib::CStringToken::Initialize();
ShimLib::CStringToken::~CStringToken();
ShimLib::GetHookAPIs();
ShimLib::InitializeHooksEx();
ShimLib::MutexExists();
ShimLib::NotifyShims();
ShimLib::NotifyShimsEx();
ShimLib::PathTree::GetFlags();
ShimLib::PathTree::Initialize();
ShimLib::PathTree::Search();
ShimLib::PathTree::SetFlags();
ShimLib::PathTree::Traverse();
ShimLib::PathTreeNode::AddChild();
ShimLib::PathTreeNode::Search();
ShimLib::PathTreeNode::Traverse();
ShimLib::PathTreeNode::`scalar deleting destructor'();
ShimLib::PathTreeNode::~PathTreeNode();
ShimLib::PathTreeNodeSearch::~PathTreeNodeSearch();
ShimLib::PathTreeNodeVisitor::Visit();
ShimLib::PathTreeNodeVisitor::`scalar deleting destructor'();
ShimLib::PathTreeNodeVisitor::`vector deleting destructor'();
ShimLib::PathTreePrivate::PathTreeNodeSetFlagsVisitor::Visit();
ShimLib::PathTreePrivate::PathTreeNodeSetFlagsVisitor::`scalar deleting destructor'();
ShimLib::PathTreePrivate::PathTreeNodeSetFlagsVisitor::`vector deleting destructor'();
ShimLib::PathTreePrivate::PathTreeNodeSetFlagsVisitor::~PathTreeNodeSetFlagsVisitor();
ShimLib::SafeCalloc();
ShimLib::SafeMalloc();
ShimLib::SearchGroupForSID();
ShimLib::ShouldApplyShim();
ShimLib::StringDuplicateA();
ShimLib::StringNDuplicateA();
ShimLib::ToUnicode();
ShimLib::VectorT<ShimLib::PathTreeNode * __ptr64>::Resize();
StringCbCopyExA();
StringCbCopyExW();
StringCbPrintfW();
StringCchCatA();
StringCchCatW();
StringCchCopyA();
StringCchCopyW();
StringCchLengthW();
StringCchPrintfA();
StringCchPrintfW();
StringCchVPrintfA();
StringCopyWorkerA();
StringCopyWorkerW();
StringLengthWorkerW();
ValidateImageBase();
XcptFilter();
_C_specific_handler();
_CxxFrameHandler3();
_GSHandlerCheck();
_GSHandlerCheckCommon();
_GSHandlerCheck_EH();
_GSHandlerCheck_SEH();
_IsNonwritableInCurrentImage$filt$0();
__DllMainCRTStartup();
__DllMainCRTStartup$filt$0();
__DllMainCRTStartup$filt$1();
__DllMainCRTStartup$filt$2();
__DllMainCRTStartup$filt$3();
__DllMainCRTStartup$filt$4();
__DllMainCRTStartup$filt$5();
__DllMainCRTStartup$filt$6();
__DllMainCRTStartup$filt$7();
__DllMainCRTStartup$fin$8();
_chkstk();
_raise_securityfailure();
_report_gsfailure();
_report_rangecheckfailure();
_security_check_cookie();
_security_init_cookie();
`NS_FaultTolerantHeap::FthReportCriticalFailure'::`1'::filt$0();
`NS_VirtualRegistry2::APIHook_RegCloseKey'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegCreateKeyA'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegCreateKeyExA'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegCreateKeyExW'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegCreateKeyExW'::`1'::dtor$1();
`NS_VirtualRegistry2::APIHook_RegCreateKeyW'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegDeleteKeyA'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegDeleteKeyExA'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegDeleteKeyExW'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegDeleteKeyW'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegEnumKeyA'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegEnumKeyExA'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegEnumKeyExW'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegEnumKeyW'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegEnumValueA'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegEnumValueW'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegOpenKeyA'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegOpenKeyExA'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegOpenKeyExW'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegOpenKeyW'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegQueryInfoKeyA'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegQueryInfoKeyW'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegQueryValueExA'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegQueryValueExW'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegSetValueExA'::`1'::dtor$0();
`NS_VirtualRegistry2::APIHook_RegSetValueExW'::`1'::dtor$0();
`NS_VirtualRegistry2::BuildWow64KeyLie'::`1'::catch$13();
`NS_VirtualRegistry2::BuildWow64KeyLie'::`1'::dtor$0();
`NS_VirtualRegistry2::BuildWow64KeyLie'::`1'::dtor$1();
`NS_VirtualRegistry2::BuildWow64KeyLie'::`1'::dtor$10();
`NS_VirtualRegistry2::BuildWow64KeyLie'::`1'::dtor$11();
`NS_VirtualRegistry2::BuildWow64KeyLie'::`1'::dtor$2();
`NS_VirtualRegistry2::BuildWow64KeyLie'::`1'::dtor$3();
`NS_VirtualRegistry2::BuildWow64KeyLie'::`1'::dtor$4();
`NS_VirtualRegistry2::ParseCommandLineA'::`1'::catch$9();
`NS_VirtualRegistry2::ParseCommandLineA'::`1'::dtor$0();
`NS_VirtualRegistry2::ParseCommandLineA'::`1'::dtor$1();
`NS_VirtualRegistry2::ParseCommandLineA'::`1'::dtor$2();
`NS_VirtualRegistry2::ParseCommandLineA'::`1'::dtor$3();
`NS_VirtualRegistry2::ParseCommandLineA'::`1'::dtor$4();
`NS_VirtualRegistry2::ParseCommandLineA'::`1'::dtor$5();
`NS_VirtualRegistry::APIHook_RegCloseKey'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegConnectRegistryW'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegCreateKeyA'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegCreateKeyExA'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegCreateKeyExW'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegCreateKeyW'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegDeleteKeyA'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegDeleteKeyExA'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegDeleteKeyExW'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegDeleteKeyW'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegEnumKeyA'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegEnumKeyExA'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegEnumKeyExW'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegEnumKeyW'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegEnumValueA'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegEnumValueW'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegGetValueA'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegGetValueW'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegOpenKeyA'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegOpenKeyExA'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegOpenKeyExW'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegOpenKeyW'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegOpenUserClassesRoot'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegQueryInfoKeyA'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegQueryInfoKeyW'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegQueryValueA'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegQueryValueExA'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegQueryValueExW'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegQueryValueW'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegSetValueExA'::`1'::dtor$0();
`NS_VirtualRegistry::APIHook_RegSetValueExW'::`1'::dtor$0();
`NS_VirtualRegistry::BuildAddRedirect'::`1'::catch$8();
`NS_VirtualRegistry::BuildAddRedirect'::`1'::dtor$0();
`NS_VirtualRegistry::BuildAddRedirect'::`1'::dtor$1();
`NS_VirtualRegistry::BuildAddRedirect'::`1'::dtor$2();
`NS_VirtualRegistry::BuildAddRedirect'::`1'::dtor$3();
`NS_VirtualRegistry::BuildAddRedirect'::`1'::dtor$4();
`NS_VirtualRegistry::BuildAddRedirect'::`1'::dtor$5();
`NS_VirtualRegistry::BuildAddRedirect'::`1'::dtor$6();
`NS_VirtualRegistry::BuildAirlineTycoon'::`1'::dtor$0();
`NS_VirtualRegistry::BuildBogusCtrlID'::`1'::catch$3();
`NS_VirtualRegistry::BuildBogusCtrlID'::`1'::dtor$0();
`NS_VirtualRegistry::BuildBogusCtrlID'::`1'::dtor$1();
`NS_VirtualRegistry::BuildBogusCtrlID'::`1'::dtor$2();
`NS_VirtualRegistry::BuildCentennialOffice'::`1'::catch$5();
`NS_VirtualRegistry::BuildCentennialOffice'::`1'::dtor$0();
`NS_VirtualRegistry::BuildCentennialOffice'::`1'::dtor$1();
`NS_VirtualRegistry::BuildCentennialOffice'::`1'::dtor$2();
`NS_VirtualRegistry::BuildCentennialOffice'::`1'::dtor$3();
`NS_VirtualRegistry::BuildCentennialOffice'::`1'::dtor$4();
`NS_VirtualRegistry::BuildCentennialOfficex64'::`1'::catch$5();
`NS_VirtualRegistry::BuildCentennialOfficex64'::`1'::dtor$0();
`NS_VirtualRegistry::BuildCentennialOfficex64'::`1'::dtor$1();
`NS_VirtualRegistry::BuildCentennialOfficex64'::`1'::dtor$2();
`NS_VirtualRegistry::BuildCentennialOfficex64'::`1'::dtor$3();
`NS_VirtualRegistry::BuildCentennialOfficex64'::`1'::dtor$4();
`NS_VirtualRegistry::BuildDSCachePositions'::`1'::dtor$0();
`NS_VirtualRegistry::BuildDSCachePositions'::`1'::dtor$1();
`NS_VirtualRegistry::BuildDSCachePositions'::`1'::dtor$2();
`NS_VirtualRegistry::BuildDSCachePositions'::`1'::dtor$3();
`NS_VirtualRegistry::BuildDSDevAccel'::`1'::dtor$0();
`NS_VirtualRegistry::BuildDSDevAccel'::`1'::dtor$1();
`NS_VirtualRegistry::BuildDSDevAccel'::`1'::dtor$2();
`NS_VirtualRegistry::BuildDSDevAccel'::`1'::dtor$3();
`NS_VirtualRegistry::BuildDSDisableDevice'::`1'::dtor$0();
`NS_VirtualRegistry::BuildDSDisableDevice'::`1'::dtor$1();
`NS_VirtualRegistry::BuildDSDisableDevice'::`1'::dtor$2();
`NS_VirtualRegistry::BuildDSDisableDevice'::`1'::dtor$3();
`NS_VirtualRegistry::BuildDSPadCursors'::`1'::dtor$0();
`NS_VirtualRegistry::BuildDSReturnWritePos'::`1'::dtor$0();
`NS_VirtualRegistry::BuildDSReturnWritePos'::`1'::dtor$1();
`NS_VirtualRegistry::BuildDSReturnWritePos'::`1'::dtor$2();
`NS_VirtualRegistry::BuildDSReturnWritePos'::`1'::dtor$3();
`NS_VirtualRegistry::BuildDSSmoothWritePos'::`1'::dtor$0();
`NS_VirtualRegistry::BuildWABDLLPath'::`1'::catch$1();
`NS_VirtualRegistry::BuildWABDLLPath'::`1'::dtor$0();
`NS_VirtualRegistry::CVirtualRegistry::IsHKCRPathVirtualDeleted'::`1'::catch$1();
`NS_VirtualRegistry::CVirtualRegistry::IsHKCRPathVirtualDeleted'::`1'::dtor$0();
`NS_VirtualRegistry::CVirtualRegistry::RemoveVirtualDeletedHKCRKeysFromEnum'::`1'::catch$2();
`NS_VirtualRegistry::CVirtualRegistry::RemoveVirtualDeletedHKCRKeysFromEnum'::`1'::dtor$0();
`NS_VirtualRegistry::CVirtualRegistry::RemoveVirtualDeletedHKCRKeysFromEnum'::`1'::dtor$1();
`NS_VirtualRegistry::CVirtualRegistry::SetHKCRPathVirtualDeleted'::`1'::catch$1();
`NS_VirtualRegistry::CVirtualRegistry::SetHKCRPathVirtualDeleted'::`1'::dtor$0();
`NS_VirtualRegistry::Delphi5SetValue'::`1'::catch$1();
`NS_VirtualRegistry::Delphi5SetValue'::`1'::dtor$0();
`NS_VirtualRegistry::FindCDROMKey'::`1'::dtor$0();
`NS_VirtualRegistry::GetDirectSoundAppId'::`1'::fin$0();
`NS_VirtualRegistry::ParseCommandLineA'::`1'::catch$9();
`NS_VirtualRegistry::ParseCommandLineA'::`1'::dtor$0();
`NS_VirtualRegistry::ParseCommandLineA'::`1'::dtor$1();
`NS_VirtualRegistry::ParseCommandLineA'::`1'::dtor$2();
`NS_VirtualRegistry::ParseCommandLineA'::`1'::dtor$3();
`NS_VirtualRegistry::ParseCommandLineA'::`1'::dtor$4();
`NS_VirtualRegistry::ParseCommandLineA'::`1'::dtor$5();
`NS_VirtualRegistry::VR_MSA2001'::`1'::catch$3();
`NS_VirtualRegistry::VR_MSA2001'::`1'::dtor$0();
`NS_VirtualRegistry::VR_MSA2001'::`1'::dtor$1();
`NS_VirtualRegistry::VR_MSA2001'::`1'::dtor$2();
`ShimLib::CString::ExpandEnvironmentStringsW'::`1'::dtor$0();
`ShimLib::CString::Mid'::`1'::dtor$0();
`ShimLib::CStringToken::CStringToken'::`1'::dtor$0();
`ShimLib::CStringToken::CStringToken'::`1'::dtor$1();
`ShimLib::PathTree::Initialize'::`1'::catch$1();
`ShimLib::PathTree::Initialize'::`1'::dtor$0();
`ShimLib::PathTree::Search'::`1'::catch$10();
`ShimLib::PathTree::Search'::`1'::dtor$0();
`ShimLib::PathTree::Search'::`1'::dtor$1();
`ShimLib::PathTree::SetFlags'::`1'::dtor$0();
`ShimLib::PathTreeNode::Search'::`1'::catch$2();
`ShimLib::PathTreeNode::Search'::`1'::dtor$0();
alloca_probe();
amsg_exit();
guard_check_icall_nop();
guard_dispatch_icall_nop();
initterm();
memcpy();
memmove();
memset();
operator delete();
pre_c_init();
strcmp();
type_info::`scalar deleting destructor'();
type_info::`vector deleting destructor'();
