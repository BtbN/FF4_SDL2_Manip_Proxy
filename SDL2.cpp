#include <windows.h>
#include <shlwapi.h>
#include <stdio.h>
#pragma comment(lib, "shlwapi.lib")

#include "minhook/MinHook.h"

struct SDL2_dll { 
	HMODULE dll;
	FARPROC OrignalSDL_AddEventWatch;
	FARPROC OrignalSDL_AddHintCallback;
	FARPROC OrignalSDL_AddTimer;
	FARPROC OrignalSDL_AllocFormat;
	FARPROC OrignalSDL_AllocPalette;
	FARPROC OrignalSDL_AllocRW;
	FARPROC OrignalSDL_AtomicAdd;
	FARPROC OrignalSDL_AtomicCAS;
	FARPROC OrignalSDL_AtomicCASPtr;
	FARPROC OrignalSDL_AtomicGet;
	FARPROC OrignalSDL_AtomicGetPtr;
	FARPROC OrignalSDL_AtomicLock;
	FARPROC OrignalSDL_AtomicSet;
	FARPROC OrignalSDL_AtomicSetPtr;
	FARPROC OrignalSDL_AtomicTryLock;
	FARPROC OrignalSDL_AtomicUnlock;
	FARPROC OrignalSDL_AudioInit;
	FARPROC OrignalSDL_AudioQuit;
	FARPROC OrignalSDL_AudioStreamAvailable;
	FARPROC OrignalSDL_AudioStreamClear;
	FARPROC OrignalSDL_AudioStreamFlush;
	FARPROC OrignalSDL_AudioStreamGet;
	FARPROC OrignalSDL_AudioStreamPut;
	FARPROC OrignalSDL_BuildAudioCVT;
	FARPROC OrignalSDL_CalculateGammaRamp;
	FARPROC OrignalSDL_CaptureMouse;
	FARPROC OrignalSDL_ClearError;
	FARPROC OrignalSDL_ClearHints;
	FARPROC OrignalSDL_ClearQueuedAudio;
	FARPROC OrignalSDL_CloseAudio;
	FARPROC OrignalSDL_CloseAudioDevice;
	FARPROC OrignalSDL_ComposeCustomBlendMode;
	FARPROC OrignalSDL_CondBroadcast;
	FARPROC OrignalSDL_CondSignal;
	FARPROC OrignalSDL_CondWait;
	FARPROC OrignalSDL_CondWaitTimeout;
	FARPROC OrignalSDL_ConvertAudio;
	FARPROC OrignalSDL_ConvertPixels;
	FARPROC OrignalSDL_ConvertSurface;
	FARPROC OrignalSDL_ConvertSurfaceFormat;
	FARPROC OrignalSDL_CreateColorCursor;
	FARPROC OrignalSDL_CreateCond;
	FARPROC OrignalSDL_CreateCursor;
	FARPROC OrignalSDL_CreateMutex;
	FARPROC OrignalSDL_CreateRGBSurface;
	FARPROC OrignalSDL_CreateRGBSurfaceFrom;
	FARPROC OrignalSDL_CreateRGBSurfaceWithFormat;
	FARPROC OrignalSDL_CreateRGBSurfaceWithFormatFrom;
	FARPROC OrignalSDL_CreateRenderer;
	FARPROC OrignalSDL_CreateSemaphore;
	FARPROC OrignalSDL_CreateShapedWindow;
	FARPROC OrignalSDL_CreateSoftwareRenderer;
	FARPROC OrignalSDL_CreateSystemCursor;
	FARPROC OrignalSDL_CreateTexture;
	FARPROC OrignalSDL_CreateTextureFromSurface;
	FARPROC OrignalSDL_CreateThread;
	FARPROC OrignalSDL_CreateThreadWithStackSize;
	FARPROC OrignalSDL_CreateWindow;
	FARPROC OrignalSDL_CreateWindowAndRenderer;
	FARPROC OrignalSDL_CreateWindowFrom;
	FARPROC OrignalSDL_DXGIGetOutputInfo;
	FARPROC OrignalSDL_DYNAPI_entry;
	FARPROC OrignalSDL_DelEventWatch;
	FARPROC OrignalSDL_DelHintCallback;
	FARPROC OrignalSDL_Delay;
	FARPROC OrignalSDL_DequeueAudio;
	FARPROC OrignalSDL_DestroyCond;
	FARPROC OrignalSDL_DestroyMutex;
	FARPROC OrignalSDL_DestroyRenderer;
	FARPROC OrignalSDL_DestroySemaphore;
	FARPROC OrignalSDL_DestroyTexture;
	FARPROC OrignalSDL_DestroyWindow;
	FARPROC OrignalSDL_DetachThread;
	FARPROC OrignalSDL_Direct3D9GetAdapterIndex;
	FARPROC OrignalSDL_DisableScreenSaver;
	FARPROC OrignalSDL_DuplicateSurface;
	FARPROC OrignalSDL_EnableScreenSaver;
	FARPROC OrignalSDL_EnclosePoints;
	FARPROC OrignalSDL_Error;
	FARPROC OrignalSDL_EventState;
	FARPROC OrignalSDL_FillRect;
	FARPROC OrignalSDL_FillRects;
	FARPROC OrignalSDL_FilterEvents;
	FARPROC OrignalSDL_FlushEvent;
	FARPROC OrignalSDL_FlushEvents;
	FARPROC OrignalSDL_FreeAudioStream;
	FARPROC OrignalSDL_FreeCursor;
	FARPROC OrignalSDL_FreeFormat;
	FARPROC OrignalSDL_FreePalette;
	FARPROC OrignalSDL_FreeRW;
	FARPROC OrignalSDL_FreeSurface;
	FARPROC OrignalSDL_FreeWAV;
	FARPROC OrignalSDL_GL_BindTexture;
	FARPROC OrignalSDL_GL_CreateContext;
	FARPROC OrignalSDL_GL_DeleteContext;
	FARPROC OrignalSDL_GL_ExtensionSupported;
	FARPROC OrignalSDL_GL_GetAttribute;
	FARPROC OrignalSDL_GL_GetCurrentContext;
	FARPROC OrignalSDL_GL_GetCurrentWindow;
	FARPROC OrignalSDL_GL_GetDrawableSize;
	FARPROC OrignalSDL_GL_GetProcAddress;
	FARPROC OrignalSDL_GL_GetSwapInterval;
	FARPROC OrignalSDL_GL_LoadLibrary;
	FARPROC OrignalSDL_GL_MakeCurrent;
	FARPROC OrignalSDL_GL_ResetAttributes;
	FARPROC OrignalSDL_GL_SetAttribute;
	FARPROC OrignalSDL_GL_SetSwapInterval;
	FARPROC OrignalSDL_GL_SwapWindow;
	FARPROC OrignalSDL_GL_UnbindTexture;
	FARPROC OrignalSDL_GL_UnloadLibrary;
	FARPROC OrignalSDL_GameControllerAddMapping;
	FARPROC OrignalSDL_GameControllerAddMappingsFromRW;
	FARPROC OrignalSDL_GameControllerClose;
	FARPROC OrignalSDL_GameControllerEventState;
	FARPROC OrignalSDL_GameControllerFromInstanceID;
	FARPROC OrignalSDL_GameControllerGetAttached;
	FARPROC OrignalSDL_GameControllerGetAxis;
	FARPROC OrignalSDL_GameControllerGetAxisFromString;
	FARPROC OrignalSDL_GameControllerGetBindForAxis;
	FARPROC OrignalSDL_GameControllerGetBindForButton;
	FARPROC OrignalSDL_GameControllerGetButton;
	FARPROC OrignalSDL_GameControllerGetButtonFromString;
	FARPROC OrignalSDL_GameControllerGetJoystick;
	FARPROC OrignalSDL_GameControllerGetPlayerIndex;
	FARPROC OrignalSDL_GameControllerGetProduct;
	FARPROC OrignalSDL_GameControllerGetProductVersion;
	FARPROC OrignalSDL_GameControllerGetStringForAxis;
	FARPROC OrignalSDL_GameControllerGetStringForButton;
	FARPROC OrignalSDL_GameControllerGetVendor;
	FARPROC OrignalSDL_GameControllerMapping;
	FARPROC OrignalSDL_GameControllerMappingForDeviceIndex;
	FARPROC OrignalSDL_GameControllerMappingForGUID;
	FARPROC OrignalSDL_GameControllerMappingForIndex;
	FARPROC OrignalSDL_GameControllerName;
	FARPROC OrignalSDL_GameControllerNameForIndex;
	FARPROC OrignalSDL_GameControllerNumMappings;
	FARPROC OrignalSDL_GameControllerOpen;
	FARPROC OrignalSDL_GameControllerRumble;
	FARPROC OrignalSDL_GameControllerUpdate;
	FARPROC OrignalSDL_GetAssertionHandler;
	FARPROC OrignalSDL_GetAssertionReport;
	FARPROC OrignalSDL_GetAudioDeviceName;
	FARPROC OrignalSDL_GetAudioDeviceStatus;
	FARPROC OrignalSDL_GetAudioDriver;
	FARPROC OrignalSDL_GetAudioStatus;
	FARPROC OrignalSDL_GetBasePath;
	FARPROC OrignalSDL_GetCPUCacheLineSize;
	FARPROC OrignalSDL_GetCPUCount;
	FARPROC OrignalSDL_GetClipRect;
	FARPROC OrignalSDL_GetClipboardText;
	FARPROC OrignalSDL_GetClosestDisplayMode;
	FARPROC OrignalSDL_GetColorKey;
	FARPROC OrignalSDL_GetCurrentAudioDriver;
	FARPROC OrignalSDL_GetCurrentDisplayMode;
	FARPROC OrignalSDL_GetCurrentVideoDriver;
	FARPROC OrignalSDL_GetCursor;
	FARPROC OrignalSDL_GetDefaultAssertionHandler;
	FARPROC OrignalSDL_GetDefaultCursor;
	FARPROC OrignalSDL_GetDesktopDisplayMode;
	FARPROC OrignalSDL_GetDisplayBounds;
	FARPROC OrignalSDL_GetDisplayDPI;
	FARPROC OrignalSDL_GetDisplayMode;
	FARPROC OrignalSDL_GetDisplayName;
	FARPROC OrignalSDL_GetDisplayOrientation;
	FARPROC OrignalSDL_GetDisplayUsableBounds;
	FARPROC OrignalSDL_GetError;
	FARPROC OrignalSDL_GetEventFilter;
	FARPROC OrignalSDL_GetGlobalMouseState;
	FARPROC OrignalSDL_GetGrabbedWindow;
	FARPROC OrignalSDL_GetHint;
	FARPROC OrignalSDL_GetHintBoolean;
	FARPROC OrignalSDL_GetKeyFromName;
	FARPROC OrignalSDL_GetKeyFromScancode;
	FARPROC OrignalSDL_GetKeyName;
	FARPROC OrignalSDL_GetKeyboardFocus;
	FARPROC OrignalSDL_GetKeyboardState;
	FARPROC OrignalSDL_GetMemoryFunctions;
	FARPROC OrignalSDL_GetModState;
	FARPROC OrignalSDL_GetMouseFocus;
	FARPROC OrignalSDL_GetMouseState;
	FARPROC OrignalSDL_GetNumAllocations;
	FARPROC OrignalSDL_GetNumAudioDevices;
	FARPROC OrignalSDL_GetNumAudioDrivers;
	FARPROC OrignalSDL_GetNumDisplayModes;
	FARPROC OrignalSDL_GetNumRenderDrivers;
	FARPROC OrignalSDL_GetNumTouchDevices;
	FARPROC OrignalSDL_GetNumTouchFingers;
	FARPROC OrignalSDL_GetNumVideoDisplays;
	FARPROC OrignalSDL_GetNumVideoDrivers;
	FARPROC OrignalSDL_GetPerformanceCounter;
	FARPROC OrignalSDL_GetPerformanceFrequency;
	FARPROC OrignalSDL_GetPixelFormatName;
	FARPROC OrignalSDL_GetPlatform;
	FARPROC OrignalSDL_GetPowerInfo;
	FARPROC OrignalSDL_GetPrefPath;
	FARPROC OrignalSDL_GetQueuedAudioSize;
	FARPROC OrignalSDL_GetRGB;
	FARPROC OrignalSDL_GetRGBA;
	FARPROC OrignalSDL_GetRelativeMouseMode;
	FARPROC OrignalSDL_GetRelativeMouseState;
	FARPROC OrignalSDL_GetRenderDrawBlendMode;
	FARPROC OrignalSDL_GetRenderDrawColor;
	FARPROC OrignalSDL_GetRenderDriverInfo;
	FARPROC OrignalSDL_GetRenderTarget;
	FARPROC OrignalSDL_GetRenderer;
	FARPROC OrignalSDL_GetRendererInfo;
	FARPROC OrignalSDL_GetRendererOutputSize;
	FARPROC OrignalSDL_GetRevision;
	FARPROC OrignalSDL_GetRevisionNumber;
	FARPROC OrignalSDL_GetScancodeFromKey;
	FARPROC OrignalSDL_GetScancodeFromName;
	FARPROC OrignalSDL_GetScancodeName;
	FARPROC OrignalSDL_GetShapedWindowMode;
	FARPROC OrignalSDL_GetSurfaceAlphaMod;
	FARPROC OrignalSDL_GetSurfaceBlendMode;
	FARPROC OrignalSDL_GetSurfaceColorMod;
	FARPROC OrignalSDL_GetSystemRAM;
	FARPROC OrignalSDL_GetTextureAlphaMod;
	FARPROC OrignalSDL_GetTextureBlendMode;
	FARPROC OrignalSDL_GetTextureColorMod;
	FARPROC OrignalSDL_GetThreadID;
	FARPROC OrignalSDL_GetThreadName;
	FARPROC OrignalSDL_GetTicks;
	FARPROC OrignalSDL_GetTouchDevice;
	FARPROC OrignalSDL_GetTouchDeviceType;
	FARPROC OrignalSDL_GetTouchFinger;
	FARPROC OrignalSDL_GetVersion;
	FARPROC OrignalSDL_GetVideoDriver;
	FARPROC OrignalSDL_GetWindowBordersSize;
	FARPROC OrignalSDL_GetWindowBrightness;
	FARPROC OrignalSDL_GetWindowData;
	FARPROC OrignalSDL_GetWindowDisplayIndex;
	FARPROC OrignalSDL_GetWindowDisplayMode;
	FARPROC OrignalSDL_GetWindowFlags;
	FARPROC OrignalSDL_GetWindowFromID;
	FARPROC OrignalSDL_GetWindowGammaRamp;
	FARPROC OrignalSDL_GetWindowGrab;
	FARPROC OrignalSDL_GetWindowID;
	FARPROC OrignalSDL_GetWindowMaximumSize;
	FARPROC OrignalSDL_GetWindowMinimumSize;
	FARPROC OrignalSDL_GetWindowOpacity;
	FARPROC OrignalSDL_GetWindowPixelFormat;
	FARPROC OrignalSDL_GetWindowPosition;
	FARPROC OrignalSDL_GetWindowSize;
	FARPROC OrignalSDL_GetWindowSurface;
	FARPROC OrignalSDL_GetWindowTitle;
	FARPROC OrignalSDL_GetWindowWMInfo;
	FARPROC OrignalSDL_GetYUVConversionMode;
	FARPROC OrignalSDL_GetYUVConversionModeForResolution;
	FARPROC OrignalSDL_HapticClose;
	FARPROC OrignalSDL_HapticDestroyEffect;
	FARPROC OrignalSDL_HapticEffectSupported;
	FARPROC OrignalSDL_HapticGetEffectStatus;
	FARPROC OrignalSDL_HapticIndex;
	FARPROC OrignalSDL_HapticName;
	FARPROC OrignalSDL_HapticNewEffect;
	FARPROC OrignalSDL_HapticNumAxes;
	FARPROC OrignalSDL_HapticNumEffects;
	FARPROC OrignalSDL_HapticNumEffectsPlaying;
	FARPROC OrignalSDL_HapticOpen;
	FARPROC OrignalSDL_HapticOpenFromJoystick;
	FARPROC OrignalSDL_HapticOpenFromMouse;
	FARPROC OrignalSDL_HapticOpened;
	FARPROC OrignalSDL_HapticPause;
	FARPROC OrignalSDL_HapticQuery;
	FARPROC OrignalSDL_HapticRumbleInit;
	FARPROC OrignalSDL_HapticRumblePlay;
	FARPROC OrignalSDL_HapticRumbleStop;
	FARPROC OrignalSDL_HapticRumbleSupported;
	FARPROC OrignalSDL_HapticRunEffect;
	FARPROC OrignalSDL_HapticSetAutocenter;
	FARPROC OrignalSDL_HapticSetGain;
	FARPROC OrignalSDL_HapticStopAll;
	FARPROC OrignalSDL_HapticStopEffect;
	FARPROC OrignalSDL_HapticUnpause;
	FARPROC OrignalSDL_HapticUpdateEffect;
	FARPROC OrignalSDL_Has3DNow;
	FARPROC OrignalSDL_HasAVX;
	FARPROC OrignalSDL_HasAVX2;
	FARPROC OrignalSDL_HasAVX512F;
	FARPROC OrignalSDL_HasAltiVec;
	FARPROC OrignalSDL_HasClipboardText;
	FARPROC OrignalSDL_HasColorKey;
	FARPROC OrignalSDL_HasEvent;
	FARPROC OrignalSDL_HasEvents;
	FARPROC OrignalSDL_HasIntersection;
	FARPROC OrignalSDL_HasMMX;
	FARPROC OrignalSDL_HasNEON;
	FARPROC OrignalSDL_HasRDTSC;
	FARPROC OrignalSDL_HasSSE;
	FARPROC OrignalSDL_HasSSE2;
	FARPROC OrignalSDL_HasSSE3;
	FARPROC OrignalSDL_HasSSE41;
	FARPROC OrignalSDL_HasSSE42;
	FARPROC OrignalSDL_HasScreenKeyboardSupport;
	FARPROC OrignalSDL_HideWindow;
	FARPROC OrignalSDL_Init;
	FARPROC OrignalSDL_InitSubSystem;
	FARPROC OrignalSDL_IntersectRect;
	FARPROC OrignalSDL_IntersectRectAndLine;
	FARPROC OrignalSDL_IsGameController;
	FARPROC OrignalSDL_IsScreenKeyboardShown;
	FARPROC OrignalSDL_IsScreenSaverEnabled;
	FARPROC OrignalSDL_IsShapedWindow;
	FARPROC OrignalSDL_IsTablet;
	FARPROC OrignalSDL_IsTextInputActive;
	FARPROC OrignalSDL_JoystickClose;
	FARPROC OrignalSDL_JoystickCurrentPowerLevel;
	FARPROC OrignalSDL_JoystickEventState;
	FARPROC OrignalSDL_JoystickFromInstanceID;
	FARPROC OrignalSDL_JoystickGetAttached;
	FARPROC OrignalSDL_JoystickGetAxis;
	FARPROC OrignalSDL_JoystickGetAxisInitialState;
	FARPROC OrignalSDL_JoystickGetBall;
	FARPROC OrignalSDL_JoystickGetButton;
	FARPROC OrignalSDL_JoystickGetDeviceGUID;
	FARPROC OrignalSDL_JoystickGetDeviceInstanceID;
	FARPROC OrignalSDL_JoystickGetDevicePlayerIndex;
	FARPROC OrignalSDL_JoystickGetDeviceProduct;
	FARPROC OrignalSDL_JoystickGetDeviceProductVersion;
	FARPROC OrignalSDL_JoystickGetDeviceType;
	FARPROC OrignalSDL_JoystickGetDeviceVendor;
	FARPROC OrignalSDL_JoystickGetGUID;
	FARPROC OrignalSDL_JoystickGetGUIDFromString;
	FARPROC OrignalSDL_JoystickGetGUIDString;
	FARPROC OrignalSDL_JoystickGetHat;
	FARPROC OrignalSDL_JoystickGetPlayerIndex;
	FARPROC OrignalSDL_JoystickGetProduct;
	FARPROC OrignalSDL_JoystickGetProductVersion;
	FARPROC OrignalSDL_JoystickGetType;
	FARPROC OrignalSDL_JoystickGetVendor;
	FARPROC OrignalSDL_JoystickInstanceID;
	FARPROC OrignalSDL_JoystickIsHaptic;
	FARPROC OrignalSDL_JoystickName;
	FARPROC OrignalSDL_JoystickNameForIndex;
	FARPROC OrignalSDL_JoystickNumAxes;
	FARPROC OrignalSDL_JoystickNumBalls;
	FARPROC OrignalSDL_JoystickNumButtons;
	FARPROC OrignalSDL_JoystickNumHats;
	FARPROC OrignalSDL_JoystickOpen;
	FARPROC OrignalSDL_JoystickRumble;
	FARPROC OrignalSDL_JoystickUpdate;
	FARPROC OrignalSDL_LoadBMP_RW;
	FARPROC OrignalSDL_LoadDollarTemplates;
	FARPROC OrignalSDL_LoadFile;
	FARPROC OrignalSDL_LoadFile_RW;
	FARPROC OrignalSDL_LoadFunction;
	FARPROC OrignalSDL_LoadObject;
	FARPROC OrignalSDL_LoadWAV_RW;
	FARPROC OrignalSDL_LockAudio;
	FARPROC OrignalSDL_LockAudioDevice;
	FARPROC OrignalSDL_LockJoysticks;
	FARPROC OrignalSDL_LockMutex;
	FARPROC OrignalSDL_LockSurface;
	FARPROC OrignalSDL_LockTexture;
	FARPROC OrignalSDL_Log;
	FARPROC OrignalSDL_LogCritical;
	FARPROC OrignalSDL_LogDebug;
	FARPROC OrignalSDL_LogError;
	FARPROC OrignalSDL_LogGetOutputFunction;
	FARPROC OrignalSDL_LogGetPriority;
	FARPROC OrignalSDL_LogInfo;
	FARPROC OrignalSDL_LogMessage;
	FARPROC OrignalSDL_LogMessageV;
	FARPROC OrignalSDL_LogResetPriorities;
	FARPROC OrignalSDL_LogSetAllPriority;
	FARPROC OrignalSDL_LogSetOutputFunction;
	FARPROC OrignalSDL_LogSetPriority;
	FARPROC OrignalSDL_LogVerbose;
	FARPROC OrignalSDL_LogWarn;
	FARPROC OrignalSDL_LowerBlit;
	FARPROC OrignalSDL_LowerBlitScaled;
	FARPROC OrignalSDL_MapRGB;
	FARPROC OrignalSDL_MapRGBA;
	FARPROC OrignalSDL_MasksToPixelFormatEnum;
	FARPROC OrignalSDL_MaximizeWindow;
	FARPROC OrignalSDL_MemoryBarrierAcquireFunction;
	FARPROC OrignalSDL_MemoryBarrierReleaseFunction;
	FARPROC OrignalSDL_MinimizeWindow;
	FARPROC OrignalSDL_MixAudio;
	FARPROC OrignalSDL_MixAudioFormat;
	FARPROC OrignalSDL_MouseIsHaptic;
	FARPROC OrignalSDL_NewAudioStream;
	FARPROC OrignalSDL_NumHaptics;
	FARPROC OrignalSDL_NumJoysticks;
	FARPROC OrignalSDL_NumSensors;
	FARPROC OrignalSDL_OpenAudio;
	FARPROC OrignalSDL_OpenAudioDevice;
	FARPROC OrignalSDL_PauseAudio;
	FARPROC OrignalSDL_PauseAudioDevice;
	FARPROC OrignalSDL_PeepEvents;
	FARPROC OrignalSDL_PixelFormatEnumToMasks;
	FARPROC OrignalSDL_PollEvent;
	FARPROC OrignalSDL_PumpEvents;
	FARPROC OrignalSDL_PushEvent;
	FARPROC OrignalSDL_QueryTexture;
	FARPROC OrignalSDL_QueueAudio;
	FARPROC OrignalSDL_Quit;
	FARPROC OrignalSDL_QuitSubSystem;
	FARPROC OrignalSDL_RWFromConstMem;
	FARPROC OrignalSDL_RWFromFP;
	FARPROC OrignalSDL_RWFromFile;
	FARPROC OrignalSDL_RWFromMem;
	FARPROC OrignalSDL_RWclose;
	FARPROC OrignalSDL_RWread;
	FARPROC OrignalSDL_RWseek;
	FARPROC OrignalSDL_RWsize;
	FARPROC OrignalSDL_RWtell;
	FARPROC OrignalSDL_RWwrite;
	FARPROC OrignalSDL_RaiseWindow;
	FARPROC OrignalSDL_ReadBE16;
	FARPROC OrignalSDL_ReadBE32;
	FARPROC OrignalSDL_ReadBE64;
	FARPROC OrignalSDL_ReadLE16;
	FARPROC OrignalSDL_ReadLE32;
	FARPROC OrignalSDL_ReadLE64;
	FARPROC OrignalSDL_ReadU8;
	FARPROC OrignalSDL_RecordGesture;
	FARPROC OrignalSDL_RegisterApp;
	FARPROC OrignalSDL_RegisterEvents;
	FARPROC OrignalSDL_RemoveTimer;
	FARPROC OrignalSDL_RenderClear;
	FARPROC OrignalSDL_RenderCopy;
	FARPROC OrignalSDL_RenderCopyEx;
	FARPROC OrignalSDL_RenderCopyExF;
	FARPROC OrignalSDL_RenderCopyF;
	FARPROC OrignalSDL_RenderDrawLine;
	FARPROC OrignalSDL_RenderDrawLineF;
	FARPROC OrignalSDL_RenderDrawLines;
	FARPROC OrignalSDL_RenderDrawLinesF;
	FARPROC OrignalSDL_RenderDrawPoint;
	FARPROC OrignalSDL_RenderDrawPointF;
	FARPROC OrignalSDL_RenderDrawPoints;
	FARPROC OrignalSDL_RenderDrawPointsF;
	FARPROC OrignalSDL_RenderDrawRect;
	FARPROC OrignalSDL_RenderDrawRectF;
	FARPROC OrignalSDL_RenderDrawRects;
	FARPROC OrignalSDL_RenderDrawRectsF;
	FARPROC OrignalSDL_RenderFillRect;
	FARPROC OrignalSDL_RenderFillRectF;
	FARPROC OrignalSDL_RenderFillRects;
	FARPROC OrignalSDL_RenderFillRectsF;
	FARPROC OrignalSDL_RenderFlush;
	FARPROC OrignalSDL_RenderGetClipRect;
	FARPROC OrignalSDL_RenderGetD3D9Device;
	FARPROC OrignalSDL_RenderGetIntegerScale;
	FARPROC OrignalSDL_RenderGetLogicalSize;
	FARPROC OrignalSDL_RenderGetMetalCommandEncoder;
	FARPROC OrignalSDL_RenderGetMetalLayer;
	FARPROC OrignalSDL_RenderGetScale;
	FARPROC OrignalSDL_RenderGetViewport;
	FARPROC OrignalSDL_RenderIsClipEnabled;
	FARPROC OrignalSDL_RenderPresent;
	FARPROC OrignalSDL_RenderReadPixels;
	FARPROC OrignalSDL_RenderSetClipRect;
	FARPROC OrignalSDL_RenderSetIntegerScale;
	FARPROC OrignalSDL_RenderSetLogicalSize;
	FARPROC OrignalSDL_RenderSetScale;
	FARPROC OrignalSDL_RenderSetViewport;
	FARPROC OrignalSDL_RenderTargetSupported;
	FARPROC OrignalSDL_ReportAssertion;
	FARPROC OrignalSDL_ResetAssertionReport;
	FARPROC OrignalSDL_RestoreWindow;
	FARPROC OrignalSDL_SIMDAlloc;
	FARPROC OrignalSDL_SIMDFree;
	FARPROC OrignalSDL_SIMDGetAlignment;
	FARPROC OrignalSDL_SaveAllDollarTemplates;
	FARPROC OrignalSDL_SaveBMP_RW;
	FARPROC OrignalSDL_SaveDollarTemplate;
	FARPROC OrignalSDL_SemPost;
	FARPROC OrignalSDL_SemTryWait;
	FARPROC OrignalSDL_SemValue;
	FARPROC OrignalSDL_SemWait;
	FARPROC OrignalSDL_SemWaitTimeout;
	FARPROC OrignalSDL_SensorClose;
	FARPROC OrignalSDL_SensorFromInstanceID;
	FARPROC OrignalSDL_SensorGetData;
	FARPROC OrignalSDL_SensorGetDeviceInstanceID;
	FARPROC OrignalSDL_SensorGetDeviceName;
	FARPROC OrignalSDL_SensorGetDeviceNonPortableType;
	FARPROC OrignalSDL_SensorGetDeviceType;
	FARPROC OrignalSDL_SensorGetInstanceID;
	FARPROC OrignalSDL_SensorGetName;
	FARPROC OrignalSDL_SensorGetNonPortableType;
	FARPROC OrignalSDL_SensorGetType;
	FARPROC OrignalSDL_SensorOpen;
	FARPROC OrignalSDL_SensorUpdate;
	FARPROC OrignalSDL_SetAssertionHandler;
	FARPROC OrignalSDL_SetClipRect;
	FARPROC OrignalSDL_SetClipboardText;
	FARPROC OrignalSDL_SetColorKey;
	FARPROC OrignalSDL_SetCursor;
	FARPROC OrignalSDL_SetError;
	FARPROC OrignalSDL_SetEventFilter;
	FARPROC OrignalSDL_SetHint;
	FARPROC OrignalSDL_SetHintWithPriority;
	FARPROC OrignalSDL_SetMainReady;
	FARPROC OrignalSDL_SetMemoryFunctions;
	FARPROC OrignalSDL_SetModState;
	FARPROC OrignalSDL_SetPaletteColors;
	FARPROC OrignalSDL_SetPixelFormatPalette;
	FARPROC OrignalSDL_SetRelativeMouseMode;
	FARPROC OrignalSDL_SetRenderDrawBlendMode;
	FARPROC OrignalSDL_SetRenderDrawColor;
	FARPROC OrignalSDL_SetRenderTarget;
	FARPROC OrignalSDL_SetSurfaceAlphaMod;
	FARPROC OrignalSDL_SetSurfaceBlendMode;
	FARPROC OrignalSDL_SetSurfaceColorMod;
	FARPROC OrignalSDL_SetSurfacePalette;
	FARPROC OrignalSDL_SetSurfaceRLE;
	FARPROC OrignalSDL_SetTextInputRect;
	FARPROC OrignalSDL_SetTextureAlphaMod;
	FARPROC OrignalSDL_SetTextureBlendMode;
	FARPROC OrignalSDL_SetTextureColorMod;
	FARPROC OrignalSDL_SetThreadPriority;
	FARPROC OrignalSDL_SetWindowBordered;
	FARPROC OrignalSDL_SetWindowBrightness;
	FARPROC OrignalSDL_SetWindowData;
	FARPROC OrignalSDL_SetWindowDisplayMode;
	FARPROC OrignalSDL_SetWindowFullscreen;
	FARPROC OrignalSDL_SetWindowGammaRamp;
	FARPROC OrignalSDL_SetWindowGrab;
	FARPROC OrignalSDL_SetWindowHitTest;
	FARPROC OrignalSDL_SetWindowIcon;
	FARPROC OrignalSDL_SetWindowInputFocus;
	FARPROC OrignalSDL_SetWindowMaximumSize;
	FARPROC OrignalSDL_SetWindowMinimumSize;
	FARPROC OrignalSDL_SetWindowModalFor;
	FARPROC OrignalSDL_SetWindowOpacity;
	FARPROC OrignalSDL_SetWindowPosition;
	FARPROC OrignalSDL_SetWindowResizable;
	FARPROC OrignalSDL_SetWindowShape;
	FARPROC OrignalSDL_SetWindowSize;
	FARPROC OrignalSDL_SetWindowTitle;
	FARPROC OrignalSDL_SetWindowsMessageHook;
	FARPROC OrignalSDL_SetYUVConversionMode;
	FARPROC OrignalSDL_ShowCursor;
	FARPROC OrignalSDL_ShowMessageBox;
	FARPROC OrignalSDL_ShowSimpleMessageBox;
	FARPROC OrignalSDL_ShowWindow;
	FARPROC OrignalSDL_SoftStretch;
	FARPROC OrignalSDL_StartTextInput;
	FARPROC OrignalSDL_StopTextInput;
	FARPROC OrignalSDL_TLSCreate;
	FARPROC OrignalSDL_TLSGet;
	FARPROC OrignalSDL_TLSSet;
	FARPROC OrignalSDL_ThreadID;
	FARPROC OrignalSDL_TryLockMutex;
	FARPROC OrignalSDL_UnionRect;
	FARPROC OrignalSDL_UnloadObject;
	FARPROC OrignalSDL_UnlockAudio;
	FARPROC OrignalSDL_UnlockAudioDevice;
	FARPROC OrignalSDL_UnlockJoysticks;
	FARPROC OrignalSDL_UnlockMutex;
	FARPROC OrignalSDL_UnlockSurface;
	FARPROC OrignalSDL_UnlockTexture;
	FARPROC OrignalSDL_UnregisterApp;
	FARPROC OrignalSDL_UpdateTexture;
	FARPROC OrignalSDL_UpdateWindowSurface;
	FARPROC OrignalSDL_UpdateWindowSurfaceRects;
	FARPROC OrignalSDL_UpdateYUVTexture;
	FARPROC OrignalSDL_UpperBlit;
	FARPROC OrignalSDL_UpperBlitScaled;
	FARPROC OrignalSDL_VideoInit;
	FARPROC OrignalSDL_VideoQuit;
	FARPROC OrignalSDL_Vulkan_CreateSurface;
	FARPROC OrignalSDL_Vulkan_GetDrawableSize;
	FARPROC OrignalSDL_Vulkan_GetInstanceExtensions;
	FARPROC OrignalSDL_Vulkan_GetVkGetInstanceProcAddr;
	FARPROC OrignalSDL_Vulkan_LoadLibrary;
	FARPROC OrignalSDL_Vulkan_UnloadLibrary;
	FARPROC OrignalSDL_WaitEvent;
	FARPROC OrignalSDL_WaitEventTimeout;
	FARPROC OrignalSDL_WaitThread;
	FARPROC OrignalSDL_WarpMouseGlobal;
	FARPROC OrignalSDL_WarpMouseInWindow;
	FARPROC OrignalSDL_WasInit;
	FARPROC OrignalSDL_WriteBE16;
	FARPROC OrignalSDL_WriteBE32;
	FARPROC OrignalSDL_WriteBE64;
	FARPROC OrignalSDL_WriteLE16;
	FARPROC OrignalSDL_WriteLE32;
	FARPROC OrignalSDL_WriteLE64;
	FARPROC OrignalSDL_WriteU8;
	FARPROC OrignalSDL_abs;
	FARPROC OrignalSDL_acos;
	FARPROC OrignalSDL_acosf;
	FARPROC OrignalSDL_asin;
	FARPROC OrignalSDL_asinf;
	FARPROC OrignalSDL_atan;
	FARPROC OrignalSDL_atan2;
	FARPROC OrignalSDL_atan2f;
	FARPROC OrignalSDL_atanf;
	FARPROC OrignalSDL_atof;
	FARPROC OrignalSDL_atoi;
	FARPROC OrignalSDL_calloc;
	FARPROC OrignalSDL_ceil;
	FARPROC OrignalSDL_ceilf;
	FARPROC OrignalSDL_copysign;
	FARPROC OrignalSDL_copysignf;
	FARPROC OrignalSDL_cos;
	FARPROC OrignalSDL_cosf;
	FARPROC OrignalSDL_exp;
	FARPROC OrignalSDL_expf;
	FARPROC OrignalSDL_fabs;
	FARPROC OrignalSDL_fabsf;
	FARPROC OrignalSDL_floor;
	FARPROC OrignalSDL_floorf;
	FARPROC OrignalSDL_fmod;
	FARPROC OrignalSDL_fmodf;
	FARPROC OrignalSDL_free;
	FARPROC OrignalSDL_getenv;
	FARPROC OrignalSDL_iconv;
	FARPROC OrignalSDL_iconv_close;
	FARPROC OrignalSDL_iconv_open;
	FARPROC OrignalSDL_iconv_string;
	FARPROC OrignalSDL_isdigit;
	FARPROC OrignalSDL_isspace;
	FARPROC OrignalSDL_itoa;
	FARPROC OrignalSDL_lltoa;
	FARPROC OrignalSDL_log;
	FARPROC OrignalSDL_log10;
	FARPROC OrignalSDL_log10f;
	FARPROC OrignalSDL_logf;
	FARPROC OrignalSDL_ltoa;
	FARPROC OrignalSDL_malloc;
	FARPROC OrignalSDL_memcmp;
	FARPROC OrignalSDL_memcpy;
	FARPROC OrignalSDL_memmove;
	FARPROC OrignalSDL_memset;
	FARPROC OrignalSDL_pow;
	FARPROC OrignalSDL_powf;
	FARPROC OrignalSDL_qsort;
	FARPROC OrignalSDL_realloc;
	FARPROC OrignalSDL_scalbn;
	FARPROC OrignalSDL_scalbnf;
	FARPROC OrignalSDL_setenv;
	FARPROC OrignalSDL_sin;
	FARPROC OrignalSDL_sinf;
	FARPROC OrignalSDL_snprintf;
	FARPROC OrignalSDL_sqrt;
	FARPROC OrignalSDL_sqrtf;
	FARPROC OrignalSDL_sscanf;
	FARPROC OrignalSDL_strcasecmp;
	FARPROC OrignalSDL_strchr;
	FARPROC OrignalSDL_strcmp;
	FARPROC OrignalSDL_strdup;
	FARPROC OrignalSDL_strlcat;
	FARPROC OrignalSDL_strlcpy;
	FARPROC OrignalSDL_strlen;
	FARPROC OrignalSDL_strlwr;
	FARPROC OrignalSDL_strncasecmp;
	FARPROC OrignalSDL_strncmp;
	FARPROC OrignalSDL_strrchr;
	FARPROC OrignalSDL_strrev;
	FARPROC OrignalSDL_strstr;
	FARPROC OrignalSDL_strtod;
	FARPROC OrignalSDL_strtol;
	FARPROC OrignalSDL_strtoll;
	FARPROC OrignalSDL_strtoul;
	FARPROC OrignalSDL_strtoull;
	FARPROC OrignalSDL_strupr;
	FARPROC OrignalSDL_tan;
	FARPROC OrignalSDL_tanf;
	FARPROC OrignalSDL_tolower;
	FARPROC OrignalSDL_toupper;
	FARPROC OrignalSDL_uitoa;
	FARPROC OrignalSDL_ulltoa;
	FARPROC OrignalSDL_ultoa;
	FARPROC OrignalSDL_utf8strlcpy;
	FARPROC OrignalSDL_utf8strlen;
	FARPROC OrignalSDL_vsnprintf;
	FARPROC OrignalSDL_vsscanf;
	FARPROC OrignalSDL_wcscmp;
	FARPROC OrignalSDL_wcsdup;
	FARPROC OrignalSDL_wcslcat;
	FARPROC OrignalSDL_wcslcpy;
	FARPROC OrignalSDL_wcslen;
} SDL2;

__declspec(naked) void FakeSDL_AddEventWatch() { _asm { jmp[SDL2.OrignalSDL_AddEventWatch] } }
__declspec(naked) void FakeSDL_AddHintCallback() { _asm { jmp[SDL2.OrignalSDL_AddHintCallback] } }
__declspec(naked) void FakeSDL_AddTimer() { _asm { jmp[SDL2.OrignalSDL_AddTimer] } }
__declspec(naked) void FakeSDL_AllocFormat() { _asm { jmp[SDL2.OrignalSDL_AllocFormat] } }
__declspec(naked) void FakeSDL_AllocPalette() { _asm { jmp[SDL2.OrignalSDL_AllocPalette] } }
__declspec(naked) void FakeSDL_AllocRW() { _asm { jmp[SDL2.OrignalSDL_AllocRW] } }
__declspec(naked) void FakeSDL_AtomicAdd() { _asm { jmp[SDL2.OrignalSDL_AtomicAdd] } }
__declspec(naked) void FakeSDL_AtomicCAS() { _asm { jmp[SDL2.OrignalSDL_AtomicCAS] } }
__declspec(naked) void FakeSDL_AtomicCASPtr() { _asm { jmp[SDL2.OrignalSDL_AtomicCASPtr] } }
__declspec(naked) void FakeSDL_AtomicGet() { _asm { jmp[SDL2.OrignalSDL_AtomicGet] } }
__declspec(naked) void FakeSDL_AtomicGetPtr() { _asm { jmp[SDL2.OrignalSDL_AtomicGetPtr] } }
__declspec(naked) void FakeSDL_AtomicLock() { _asm { jmp[SDL2.OrignalSDL_AtomicLock] } }
__declspec(naked) void FakeSDL_AtomicSet() { _asm { jmp[SDL2.OrignalSDL_AtomicSet] } }
__declspec(naked) void FakeSDL_AtomicSetPtr() { _asm { jmp[SDL2.OrignalSDL_AtomicSetPtr] } }
__declspec(naked) void FakeSDL_AtomicTryLock() { _asm { jmp[SDL2.OrignalSDL_AtomicTryLock] } }
__declspec(naked) void FakeSDL_AtomicUnlock() { _asm { jmp[SDL2.OrignalSDL_AtomicUnlock] } }
__declspec(naked) void FakeSDL_AudioInit() { _asm { jmp[SDL2.OrignalSDL_AudioInit] } }
__declspec(naked) void FakeSDL_AudioQuit() { _asm { jmp[SDL2.OrignalSDL_AudioQuit] } }
__declspec(naked) void FakeSDL_AudioStreamAvailable() { _asm { jmp[SDL2.OrignalSDL_AudioStreamAvailable] } }
__declspec(naked) void FakeSDL_AudioStreamClear() { _asm { jmp[SDL2.OrignalSDL_AudioStreamClear] } }
__declspec(naked) void FakeSDL_AudioStreamFlush() { _asm { jmp[SDL2.OrignalSDL_AudioStreamFlush] } }
__declspec(naked) void FakeSDL_AudioStreamGet() { _asm { jmp[SDL2.OrignalSDL_AudioStreamGet] } }
__declspec(naked) void FakeSDL_AudioStreamPut() { _asm { jmp[SDL2.OrignalSDL_AudioStreamPut] } }
__declspec(naked) void FakeSDL_BuildAudioCVT() { _asm { jmp[SDL2.OrignalSDL_BuildAudioCVT] } }
__declspec(naked) void FakeSDL_CalculateGammaRamp() { _asm { jmp[SDL2.OrignalSDL_CalculateGammaRamp] } }
__declspec(naked) void FakeSDL_CaptureMouse() { _asm { jmp[SDL2.OrignalSDL_CaptureMouse] } }
__declspec(naked) void FakeSDL_ClearError() { _asm { jmp[SDL2.OrignalSDL_ClearError] } }
__declspec(naked) void FakeSDL_ClearHints() { _asm { jmp[SDL2.OrignalSDL_ClearHints] } }
__declspec(naked) void FakeSDL_ClearQueuedAudio() { _asm { jmp[SDL2.OrignalSDL_ClearQueuedAudio] } }
__declspec(naked) void FakeSDL_CloseAudio() { _asm { jmp[SDL2.OrignalSDL_CloseAudio] } }
__declspec(naked) void FakeSDL_CloseAudioDevice() { _asm { jmp[SDL2.OrignalSDL_CloseAudioDevice] } }
__declspec(naked) void FakeSDL_ComposeCustomBlendMode() { _asm { jmp[SDL2.OrignalSDL_ComposeCustomBlendMode] } }
__declspec(naked) void FakeSDL_CondBroadcast() { _asm { jmp[SDL2.OrignalSDL_CondBroadcast] } }
__declspec(naked) void FakeSDL_CondSignal() { _asm { jmp[SDL2.OrignalSDL_CondSignal] } }
__declspec(naked) void FakeSDL_CondWait() { _asm { jmp[SDL2.OrignalSDL_CondWait] } }
__declspec(naked) void FakeSDL_CondWaitTimeout() { _asm { jmp[SDL2.OrignalSDL_CondWaitTimeout] } }
__declspec(naked) void FakeSDL_ConvertAudio() { _asm { jmp[SDL2.OrignalSDL_ConvertAudio] } }
__declspec(naked) void FakeSDL_ConvertPixels() { _asm { jmp[SDL2.OrignalSDL_ConvertPixels] } }
__declspec(naked) void FakeSDL_ConvertSurface() { _asm { jmp[SDL2.OrignalSDL_ConvertSurface] } }
__declspec(naked) void FakeSDL_ConvertSurfaceFormat() { _asm { jmp[SDL2.OrignalSDL_ConvertSurfaceFormat] } }
__declspec(naked) void FakeSDL_CreateColorCursor() { _asm { jmp[SDL2.OrignalSDL_CreateColorCursor] } }
__declspec(naked) void FakeSDL_CreateCond() { _asm { jmp[SDL2.OrignalSDL_CreateCond] } }
__declspec(naked) void FakeSDL_CreateCursor() { _asm { jmp[SDL2.OrignalSDL_CreateCursor] } }
__declspec(naked) void FakeSDL_CreateMutex() { _asm { jmp[SDL2.OrignalSDL_CreateMutex] } }
__declspec(naked) void FakeSDL_CreateRGBSurface() { _asm { jmp[SDL2.OrignalSDL_CreateRGBSurface] } }
__declspec(naked) void FakeSDL_CreateRGBSurfaceFrom() { _asm { jmp[SDL2.OrignalSDL_CreateRGBSurfaceFrom] } }
__declspec(naked) void FakeSDL_CreateRGBSurfaceWithFormat() { _asm { jmp[SDL2.OrignalSDL_CreateRGBSurfaceWithFormat] } }
__declspec(naked) void FakeSDL_CreateRGBSurfaceWithFormatFrom() { _asm { jmp[SDL2.OrignalSDL_CreateRGBSurfaceWithFormatFrom] } }
__declspec(naked) void FakeSDL_CreateRenderer() { _asm { jmp[SDL2.OrignalSDL_CreateRenderer] } }
__declspec(naked) void FakeSDL_CreateSemaphore() { _asm { jmp[SDL2.OrignalSDL_CreateSemaphore] } }
__declspec(naked) void FakeSDL_CreateShapedWindow() { _asm { jmp[SDL2.OrignalSDL_CreateShapedWindow] } }
__declspec(naked) void FakeSDL_CreateSoftwareRenderer() { _asm { jmp[SDL2.OrignalSDL_CreateSoftwareRenderer] } }
__declspec(naked) void FakeSDL_CreateSystemCursor() { _asm { jmp[SDL2.OrignalSDL_CreateSystemCursor] } }
__declspec(naked) void FakeSDL_CreateTexture() { _asm { jmp[SDL2.OrignalSDL_CreateTexture] } }
__declspec(naked) void FakeSDL_CreateTextureFromSurface() { _asm { jmp[SDL2.OrignalSDL_CreateTextureFromSurface] } }
__declspec(naked) void FakeSDL_CreateThread() { _asm { jmp[SDL2.OrignalSDL_CreateThread] } }
__declspec(naked) void FakeSDL_CreateThreadWithStackSize() { _asm { jmp[SDL2.OrignalSDL_CreateThreadWithStackSize] } }
__declspec(naked) void FakeSDL_CreateWindow() { _asm { jmp[SDL2.OrignalSDL_CreateWindow] } }
__declspec(naked) void FakeSDL_CreateWindowAndRenderer() { _asm { jmp[SDL2.OrignalSDL_CreateWindowAndRenderer] } }
__declspec(naked) void FakeSDL_CreateWindowFrom() { _asm { jmp[SDL2.OrignalSDL_CreateWindowFrom] } }
__declspec(naked) void FakeSDL_DXGIGetOutputInfo() { _asm { jmp[SDL2.OrignalSDL_DXGIGetOutputInfo] } }
__declspec(naked) void FakeSDL_DYNAPI_entry() { _asm { jmp[SDL2.OrignalSDL_DYNAPI_entry] } }
__declspec(naked) void FakeSDL_DelEventWatch() { _asm { jmp[SDL2.OrignalSDL_DelEventWatch] } }
__declspec(naked) void FakeSDL_DelHintCallback() { _asm { jmp[SDL2.OrignalSDL_DelHintCallback] } }
__declspec(naked) void FakeSDL_Delay() { _asm { jmp[SDL2.OrignalSDL_Delay] } }
__declspec(naked) void FakeSDL_DequeueAudio() { _asm { jmp[SDL2.OrignalSDL_DequeueAudio] } }
__declspec(naked) void FakeSDL_DestroyCond() { _asm { jmp[SDL2.OrignalSDL_DestroyCond] } }
__declspec(naked) void FakeSDL_DestroyMutex() { _asm { jmp[SDL2.OrignalSDL_DestroyMutex] } }
__declspec(naked) void FakeSDL_DestroyRenderer() { _asm { jmp[SDL2.OrignalSDL_DestroyRenderer] } }
__declspec(naked) void FakeSDL_DestroySemaphore() { _asm { jmp[SDL2.OrignalSDL_DestroySemaphore] } }
__declspec(naked) void FakeSDL_DestroyTexture() { _asm { jmp[SDL2.OrignalSDL_DestroyTexture] } }
__declspec(naked) void FakeSDL_DestroyWindow() { _asm { jmp[SDL2.OrignalSDL_DestroyWindow] } }
__declspec(naked) void FakeSDL_DetachThread() { _asm { jmp[SDL2.OrignalSDL_DetachThread] } }
__declspec(naked) void FakeSDL_Direct3D9GetAdapterIndex() { _asm { jmp[SDL2.OrignalSDL_Direct3D9GetAdapterIndex] } }
__declspec(naked) void FakeSDL_DisableScreenSaver() { _asm { jmp[SDL2.OrignalSDL_DisableScreenSaver] } }
__declspec(naked) void FakeSDL_DuplicateSurface() { _asm { jmp[SDL2.OrignalSDL_DuplicateSurface] } }
__declspec(naked) void FakeSDL_EnableScreenSaver() { _asm { jmp[SDL2.OrignalSDL_EnableScreenSaver] } }
__declspec(naked) void FakeSDL_EnclosePoints() { _asm { jmp[SDL2.OrignalSDL_EnclosePoints] } }
__declspec(naked) void FakeSDL_Error() { _asm { jmp[SDL2.OrignalSDL_Error] } }
__declspec(naked) void FakeSDL_EventState() { _asm { jmp[SDL2.OrignalSDL_EventState] } }
__declspec(naked) void FakeSDL_FillRect() { _asm { jmp[SDL2.OrignalSDL_FillRect] } }
__declspec(naked) void FakeSDL_FillRects() { _asm { jmp[SDL2.OrignalSDL_FillRects] } }
__declspec(naked) void FakeSDL_FilterEvents() { _asm { jmp[SDL2.OrignalSDL_FilterEvents] } }
__declspec(naked) void FakeSDL_FlushEvent() { _asm { jmp[SDL2.OrignalSDL_FlushEvent] } }
__declspec(naked) void FakeSDL_FlushEvents() { _asm { jmp[SDL2.OrignalSDL_FlushEvents] } }
__declspec(naked) void FakeSDL_FreeAudioStream() { _asm { jmp[SDL2.OrignalSDL_FreeAudioStream] } }
__declspec(naked) void FakeSDL_FreeCursor() { _asm { jmp[SDL2.OrignalSDL_FreeCursor] } }
__declspec(naked) void FakeSDL_FreeFormat() { _asm { jmp[SDL2.OrignalSDL_FreeFormat] } }
__declspec(naked) void FakeSDL_FreePalette() { _asm { jmp[SDL2.OrignalSDL_FreePalette] } }
__declspec(naked) void FakeSDL_FreeRW() { _asm { jmp[SDL2.OrignalSDL_FreeRW] } }
__declspec(naked) void FakeSDL_FreeSurface() { _asm { jmp[SDL2.OrignalSDL_FreeSurface] } }
__declspec(naked) void FakeSDL_FreeWAV() { _asm { jmp[SDL2.OrignalSDL_FreeWAV] } }
__declspec(naked) void FakeSDL_GL_BindTexture() { _asm { jmp[SDL2.OrignalSDL_GL_BindTexture] } }
__declspec(naked) void FakeSDL_GL_CreateContext() { _asm { jmp[SDL2.OrignalSDL_GL_CreateContext] } }
__declspec(naked) void FakeSDL_GL_DeleteContext() { _asm { jmp[SDL2.OrignalSDL_GL_DeleteContext] } }
__declspec(naked) void FakeSDL_GL_ExtensionSupported() { _asm { jmp[SDL2.OrignalSDL_GL_ExtensionSupported] } }
__declspec(naked) void FakeSDL_GL_GetAttribute() { _asm { jmp[SDL2.OrignalSDL_GL_GetAttribute] } }
__declspec(naked) void FakeSDL_GL_GetCurrentContext() { _asm { jmp[SDL2.OrignalSDL_GL_GetCurrentContext] } }
__declspec(naked) void FakeSDL_GL_GetCurrentWindow() { _asm { jmp[SDL2.OrignalSDL_GL_GetCurrentWindow] } }
__declspec(naked) void FakeSDL_GL_GetDrawableSize() { _asm { jmp[SDL2.OrignalSDL_GL_GetDrawableSize] } }
__declspec(naked) void FakeSDL_GL_GetProcAddress() { _asm { jmp[SDL2.OrignalSDL_GL_GetProcAddress] } }
__declspec(naked) void FakeSDL_GL_GetSwapInterval() { _asm { jmp[SDL2.OrignalSDL_GL_GetSwapInterval] } }
__declspec(naked) void FakeSDL_GL_LoadLibrary() { _asm { jmp[SDL2.OrignalSDL_GL_LoadLibrary] } }
__declspec(naked) void FakeSDL_GL_MakeCurrent() { _asm { jmp[SDL2.OrignalSDL_GL_MakeCurrent] } }
__declspec(naked) void FakeSDL_GL_ResetAttributes() { _asm { jmp[SDL2.OrignalSDL_GL_ResetAttributes] } }
__declspec(naked) void FakeSDL_GL_SetAttribute() { _asm { jmp[SDL2.OrignalSDL_GL_SetAttribute] } }
__declspec(naked) void FakeSDL_GL_SetSwapInterval() { _asm { jmp[SDL2.OrignalSDL_GL_SetSwapInterval] } }
__declspec(naked) void FakeSDL_GL_SwapWindow() { _asm { jmp[SDL2.OrignalSDL_GL_SwapWindow] } }
__declspec(naked) void FakeSDL_GL_UnbindTexture() { _asm { jmp[SDL2.OrignalSDL_GL_UnbindTexture] } }
__declspec(naked) void FakeSDL_GL_UnloadLibrary() { _asm { jmp[SDL2.OrignalSDL_GL_UnloadLibrary] } }
__declspec(naked) void FakeSDL_GameControllerAddMapping() { _asm { jmp[SDL2.OrignalSDL_GameControllerAddMapping] } }
__declspec(naked) void FakeSDL_GameControllerAddMappingsFromRW() { _asm { jmp[SDL2.OrignalSDL_GameControllerAddMappingsFromRW] } }
__declspec(naked) void FakeSDL_GameControllerClose() { _asm { jmp[SDL2.OrignalSDL_GameControllerClose] } }
__declspec(naked) void FakeSDL_GameControllerEventState() { _asm { jmp[SDL2.OrignalSDL_GameControllerEventState] } }
__declspec(naked) void FakeSDL_GameControllerFromInstanceID() { _asm { jmp[SDL2.OrignalSDL_GameControllerFromInstanceID] } }
__declspec(naked) void FakeSDL_GameControllerGetAttached() { _asm { jmp[SDL2.OrignalSDL_GameControllerGetAttached] } }
__declspec(naked) void FakeSDL_GameControllerGetAxis() { _asm { jmp[SDL2.OrignalSDL_GameControllerGetAxis] } }
__declspec(naked) void FakeSDL_GameControllerGetAxisFromString() { _asm { jmp[SDL2.OrignalSDL_GameControllerGetAxisFromString] } }
__declspec(naked) void FakeSDL_GameControllerGetBindForAxis() { _asm { jmp[SDL2.OrignalSDL_GameControllerGetBindForAxis] } }
__declspec(naked) void FakeSDL_GameControllerGetBindForButton() { _asm { jmp[SDL2.OrignalSDL_GameControllerGetBindForButton] } }
__declspec(naked) void FakeSDL_GameControllerGetButton() { _asm { jmp[SDL2.OrignalSDL_GameControllerGetButton] } }
__declspec(naked) void FakeSDL_GameControllerGetButtonFromString() { _asm { jmp[SDL2.OrignalSDL_GameControllerGetButtonFromString] } }
__declspec(naked) void FakeSDL_GameControllerGetJoystick() { _asm { jmp[SDL2.OrignalSDL_GameControllerGetJoystick] } }
__declspec(naked) void FakeSDL_GameControllerGetPlayerIndex() { _asm { jmp[SDL2.OrignalSDL_GameControllerGetPlayerIndex] } }
__declspec(naked) void FakeSDL_GameControllerGetProduct() { _asm { jmp[SDL2.OrignalSDL_GameControllerGetProduct] } }
__declspec(naked) void FakeSDL_GameControllerGetProductVersion() { _asm { jmp[SDL2.OrignalSDL_GameControllerGetProductVersion] } }
__declspec(naked) void FakeSDL_GameControllerGetStringForAxis() { _asm { jmp[SDL2.OrignalSDL_GameControllerGetStringForAxis] } }
__declspec(naked) void FakeSDL_GameControllerGetStringForButton() { _asm { jmp[SDL2.OrignalSDL_GameControllerGetStringForButton] } }
__declspec(naked) void FakeSDL_GameControllerGetVendor() { _asm { jmp[SDL2.OrignalSDL_GameControllerGetVendor] } }
__declspec(naked) void FakeSDL_GameControllerMapping() { _asm { jmp[SDL2.OrignalSDL_GameControllerMapping] } }
__declspec(naked) void FakeSDL_GameControllerMappingForDeviceIndex() { _asm { jmp[SDL2.OrignalSDL_GameControllerMappingForDeviceIndex] } }
__declspec(naked) void FakeSDL_GameControllerMappingForGUID() { _asm { jmp[SDL2.OrignalSDL_GameControllerMappingForGUID] } }
__declspec(naked) void FakeSDL_GameControllerMappingForIndex() { _asm { jmp[SDL2.OrignalSDL_GameControllerMappingForIndex] } }
__declspec(naked) void FakeSDL_GameControllerName() { _asm { jmp[SDL2.OrignalSDL_GameControllerName] } }
__declspec(naked) void FakeSDL_GameControllerNameForIndex() { _asm { jmp[SDL2.OrignalSDL_GameControllerNameForIndex] } }
__declspec(naked) void FakeSDL_GameControllerNumMappings() { _asm { jmp[SDL2.OrignalSDL_GameControllerNumMappings] } }
__declspec(naked) void FakeSDL_GameControllerOpen() { _asm { jmp[SDL2.OrignalSDL_GameControllerOpen] } }
__declspec(naked) void FakeSDL_GameControllerRumble() { _asm { jmp[SDL2.OrignalSDL_GameControllerRumble] } }
__declspec(naked) void FakeSDL_GameControllerUpdate() { _asm { jmp[SDL2.OrignalSDL_GameControllerUpdate] } }
__declspec(naked) void FakeSDL_GetAssertionHandler() { _asm { jmp[SDL2.OrignalSDL_GetAssertionHandler] } }
__declspec(naked) void FakeSDL_GetAssertionReport() { _asm { jmp[SDL2.OrignalSDL_GetAssertionReport] } }
__declspec(naked) void FakeSDL_GetAudioDeviceName() { _asm { jmp[SDL2.OrignalSDL_GetAudioDeviceName] } }
__declspec(naked) void FakeSDL_GetAudioDeviceStatus() { _asm { jmp[SDL2.OrignalSDL_GetAudioDeviceStatus] } }
__declspec(naked) void FakeSDL_GetAudioDriver() { _asm { jmp[SDL2.OrignalSDL_GetAudioDriver] } }
__declspec(naked) void FakeSDL_GetAudioStatus() { _asm { jmp[SDL2.OrignalSDL_GetAudioStatus] } }
__declspec(naked) void FakeSDL_GetBasePath() { _asm { jmp[SDL2.OrignalSDL_GetBasePath] } }
__declspec(naked) void FakeSDL_GetCPUCacheLineSize() { _asm { jmp[SDL2.OrignalSDL_GetCPUCacheLineSize] } }
__declspec(naked) void FakeSDL_GetCPUCount() { _asm { jmp[SDL2.OrignalSDL_GetCPUCount] } }
__declspec(naked) void FakeSDL_GetClipRect() { _asm { jmp[SDL2.OrignalSDL_GetClipRect] } }
__declspec(naked) void FakeSDL_GetClipboardText() { _asm { jmp[SDL2.OrignalSDL_GetClipboardText] } }
__declspec(naked) void FakeSDL_GetClosestDisplayMode() { _asm { jmp[SDL2.OrignalSDL_GetClosestDisplayMode] } }
__declspec(naked) void FakeSDL_GetColorKey() { _asm { jmp[SDL2.OrignalSDL_GetColorKey] } }
__declspec(naked) void FakeSDL_GetCurrentAudioDriver() { _asm { jmp[SDL2.OrignalSDL_GetCurrentAudioDriver] } }
__declspec(naked) void FakeSDL_GetCurrentDisplayMode() { _asm { jmp[SDL2.OrignalSDL_GetCurrentDisplayMode] } }
__declspec(naked) void FakeSDL_GetCurrentVideoDriver() { _asm { jmp[SDL2.OrignalSDL_GetCurrentVideoDriver] } }
__declspec(naked) void FakeSDL_GetCursor() { _asm { jmp[SDL2.OrignalSDL_GetCursor] } }
__declspec(naked) void FakeSDL_GetDefaultAssertionHandler() { _asm { jmp[SDL2.OrignalSDL_GetDefaultAssertionHandler] } }
__declspec(naked) void FakeSDL_GetDefaultCursor() { _asm { jmp[SDL2.OrignalSDL_GetDefaultCursor] } }
__declspec(naked) void FakeSDL_GetDesktopDisplayMode() { _asm { jmp[SDL2.OrignalSDL_GetDesktopDisplayMode] } }
__declspec(naked) void FakeSDL_GetDisplayBounds() { _asm { jmp[SDL2.OrignalSDL_GetDisplayBounds] } }
__declspec(naked) void FakeSDL_GetDisplayDPI() { _asm { jmp[SDL2.OrignalSDL_GetDisplayDPI] } }
__declspec(naked) void FakeSDL_GetDisplayMode() { _asm { jmp[SDL2.OrignalSDL_GetDisplayMode] } }
__declspec(naked) void FakeSDL_GetDisplayName() { _asm { jmp[SDL2.OrignalSDL_GetDisplayName] } }
__declspec(naked) void FakeSDL_GetDisplayOrientation() { _asm { jmp[SDL2.OrignalSDL_GetDisplayOrientation] } }
__declspec(naked) void FakeSDL_GetDisplayUsableBounds() { _asm { jmp[SDL2.OrignalSDL_GetDisplayUsableBounds] } }
__declspec(naked) void FakeSDL_GetError() { _asm { jmp[SDL2.OrignalSDL_GetError] } }
__declspec(naked) void FakeSDL_GetEventFilter() { _asm { jmp[SDL2.OrignalSDL_GetEventFilter] } }
__declspec(naked) void FakeSDL_GetGlobalMouseState() { _asm { jmp[SDL2.OrignalSDL_GetGlobalMouseState] } }
__declspec(naked) void FakeSDL_GetGrabbedWindow() { _asm { jmp[SDL2.OrignalSDL_GetGrabbedWindow] } }
__declspec(naked) void FakeSDL_GetHint() { _asm { jmp[SDL2.OrignalSDL_GetHint] } }
__declspec(naked) void FakeSDL_GetHintBoolean() { _asm { jmp[SDL2.OrignalSDL_GetHintBoolean] } }
__declspec(naked) void FakeSDL_GetKeyFromName() { _asm { jmp[SDL2.OrignalSDL_GetKeyFromName] } }
__declspec(naked) void FakeSDL_GetKeyFromScancode() { _asm { jmp[SDL2.OrignalSDL_GetKeyFromScancode] } }
__declspec(naked) void FakeSDL_GetKeyName() { _asm { jmp[SDL2.OrignalSDL_GetKeyName] } }
__declspec(naked) void FakeSDL_GetKeyboardFocus() { _asm { jmp[SDL2.OrignalSDL_GetKeyboardFocus] } }
__declspec(naked) void FakeSDL_GetKeyboardState() { _asm { jmp[SDL2.OrignalSDL_GetKeyboardState] } }
__declspec(naked) void FakeSDL_GetMemoryFunctions() { _asm { jmp[SDL2.OrignalSDL_GetMemoryFunctions] } }
__declspec(naked) void FakeSDL_GetModState() { _asm { jmp[SDL2.OrignalSDL_GetModState] } }
__declspec(naked) void FakeSDL_GetMouseFocus() { _asm { jmp[SDL2.OrignalSDL_GetMouseFocus] } }
__declspec(naked) void FakeSDL_GetMouseState() { _asm { jmp[SDL2.OrignalSDL_GetMouseState] } }
__declspec(naked) void FakeSDL_GetNumAllocations() { _asm { jmp[SDL2.OrignalSDL_GetNumAllocations] } }
__declspec(naked) void FakeSDL_GetNumAudioDevices() { _asm { jmp[SDL2.OrignalSDL_GetNumAudioDevices] } }
__declspec(naked) void FakeSDL_GetNumAudioDrivers() { _asm { jmp[SDL2.OrignalSDL_GetNumAudioDrivers] } }
__declspec(naked) void FakeSDL_GetNumDisplayModes() { _asm { jmp[SDL2.OrignalSDL_GetNumDisplayModes] } }
__declspec(naked) void FakeSDL_GetNumRenderDrivers() { _asm { jmp[SDL2.OrignalSDL_GetNumRenderDrivers] } }
__declspec(naked) void FakeSDL_GetNumTouchDevices() { _asm { jmp[SDL2.OrignalSDL_GetNumTouchDevices] } }
__declspec(naked) void FakeSDL_GetNumTouchFingers() { _asm { jmp[SDL2.OrignalSDL_GetNumTouchFingers] } }
__declspec(naked) void FakeSDL_GetNumVideoDisplays() { _asm { jmp[SDL2.OrignalSDL_GetNumVideoDisplays] } }
__declspec(naked) void FakeSDL_GetNumVideoDrivers() { _asm { jmp[SDL2.OrignalSDL_GetNumVideoDrivers] } }
__declspec(naked) void FakeSDL_GetPerformanceCounter() { _asm { jmp[SDL2.OrignalSDL_GetPerformanceCounter] } }
__declspec(naked) void FakeSDL_GetPerformanceFrequency() { _asm { jmp[SDL2.OrignalSDL_GetPerformanceFrequency] } }
__declspec(naked) void FakeSDL_GetPixelFormatName() { _asm { jmp[SDL2.OrignalSDL_GetPixelFormatName] } }
__declspec(naked) void FakeSDL_GetPlatform() { _asm { jmp[SDL2.OrignalSDL_GetPlatform] } }
__declspec(naked) void FakeSDL_GetPowerInfo() { _asm { jmp[SDL2.OrignalSDL_GetPowerInfo] } }
__declspec(naked) void FakeSDL_GetPrefPath() { _asm { jmp[SDL2.OrignalSDL_GetPrefPath] } }
__declspec(naked) void FakeSDL_GetQueuedAudioSize() { _asm { jmp[SDL2.OrignalSDL_GetQueuedAudioSize] } }
__declspec(naked) void FakeSDL_GetRGB() { _asm { jmp[SDL2.OrignalSDL_GetRGB] } }
__declspec(naked) void FakeSDL_GetRGBA() { _asm { jmp[SDL2.OrignalSDL_GetRGBA] } }
__declspec(naked) void FakeSDL_GetRelativeMouseMode() { _asm { jmp[SDL2.OrignalSDL_GetRelativeMouseMode] } }
__declspec(naked) void FakeSDL_GetRelativeMouseState() { _asm { jmp[SDL2.OrignalSDL_GetRelativeMouseState] } }
__declspec(naked) void FakeSDL_GetRenderDrawBlendMode() { _asm { jmp[SDL2.OrignalSDL_GetRenderDrawBlendMode] } }
__declspec(naked) void FakeSDL_GetRenderDrawColor() { _asm { jmp[SDL2.OrignalSDL_GetRenderDrawColor] } }
__declspec(naked) void FakeSDL_GetRenderDriverInfo() { _asm { jmp[SDL2.OrignalSDL_GetRenderDriverInfo] } }
__declspec(naked) void FakeSDL_GetRenderTarget() { _asm { jmp[SDL2.OrignalSDL_GetRenderTarget] } }
__declspec(naked) void FakeSDL_GetRenderer() { _asm { jmp[SDL2.OrignalSDL_GetRenderer] } }
__declspec(naked) void FakeSDL_GetRendererInfo() { _asm { jmp[SDL2.OrignalSDL_GetRendererInfo] } }
__declspec(naked) void FakeSDL_GetRendererOutputSize() { _asm { jmp[SDL2.OrignalSDL_GetRendererOutputSize] } }
__declspec(naked) void FakeSDL_GetRevision() { _asm { jmp[SDL2.OrignalSDL_GetRevision] } }
__declspec(naked) void FakeSDL_GetRevisionNumber() { _asm { jmp[SDL2.OrignalSDL_GetRevisionNumber] } }
__declspec(naked) void FakeSDL_GetScancodeFromKey() { _asm { jmp[SDL2.OrignalSDL_GetScancodeFromKey] } }
__declspec(naked) void FakeSDL_GetScancodeFromName() { _asm { jmp[SDL2.OrignalSDL_GetScancodeFromName] } }
__declspec(naked) void FakeSDL_GetScancodeName() { _asm { jmp[SDL2.OrignalSDL_GetScancodeName] } }
__declspec(naked) void FakeSDL_GetShapedWindowMode() { _asm { jmp[SDL2.OrignalSDL_GetShapedWindowMode] } }
__declspec(naked) void FakeSDL_GetSurfaceAlphaMod() { _asm { jmp[SDL2.OrignalSDL_GetSurfaceAlphaMod] } }
__declspec(naked) void FakeSDL_GetSurfaceBlendMode() { _asm { jmp[SDL2.OrignalSDL_GetSurfaceBlendMode] } }
__declspec(naked) void FakeSDL_GetSurfaceColorMod() { _asm { jmp[SDL2.OrignalSDL_GetSurfaceColorMod] } }
__declspec(naked) void FakeSDL_GetSystemRAM() { _asm { jmp[SDL2.OrignalSDL_GetSystemRAM] } }
__declspec(naked) void FakeSDL_GetTextureAlphaMod() { _asm { jmp[SDL2.OrignalSDL_GetTextureAlphaMod] } }
__declspec(naked) void FakeSDL_GetTextureBlendMode() { _asm { jmp[SDL2.OrignalSDL_GetTextureBlendMode] } }
__declspec(naked) void FakeSDL_GetTextureColorMod() { _asm { jmp[SDL2.OrignalSDL_GetTextureColorMod] } }
__declspec(naked) void FakeSDL_GetThreadID() { _asm { jmp[SDL2.OrignalSDL_GetThreadID] } }
__declspec(naked) void FakeSDL_GetThreadName() { _asm { jmp[SDL2.OrignalSDL_GetThreadName] } }
__declspec(naked) void FakeSDL_GetTicks() { _asm { jmp[SDL2.OrignalSDL_GetTicks] } }
__declspec(naked) void FakeSDL_GetTouchDevice() { _asm { jmp[SDL2.OrignalSDL_GetTouchDevice] } }
__declspec(naked) void FakeSDL_GetTouchDeviceType() { _asm { jmp[SDL2.OrignalSDL_GetTouchDeviceType] } }
__declspec(naked) void FakeSDL_GetTouchFinger() { _asm { jmp[SDL2.OrignalSDL_GetTouchFinger] } }
__declspec(naked) void FakeSDL_GetVersion() { _asm { jmp[SDL2.OrignalSDL_GetVersion] } }
__declspec(naked) void FakeSDL_GetVideoDriver() { _asm { jmp[SDL2.OrignalSDL_GetVideoDriver] } }
__declspec(naked) void FakeSDL_GetWindowBordersSize() { _asm { jmp[SDL2.OrignalSDL_GetWindowBordersSize] } }
__declspec(naked) void FakeSDL_GetWindowBrightness() { _asm { jmp[SDL2.OrignalSDL_GetWindowBrightness] } }
__declspec(naked) void FakeSDL_GetWindowData() { _asm { jmp[SDL2.OrignalSDL_GetWindowData] } }
__declspec(naked) void FakeSDL_GetWindowDisplayIndex() { _asm { jmp[SDL2.OrignalSDL_GetWindowDisplayIndex] } }
__declspec(naked) void FakeSDL_GetWindowDisplayMode() { _asm { jmp[SDL2.OrignalSDL_GetWindowDisplayMode] } }
__declspec(naked) void FakeSDL_GetWindowFlags() { _asm { jmp[SDL2.OrignalSDL_GetWindowFlags] } }
__declspec(naked) void FakeSDL_GetWindowFromID() { _asm { jmp[SDL2.OrignalSDL_GetWindowFromID] } }
__declspec(naked) void FakeSDL_GetWindowGammaRamp() { _asm { jmp[SDL2.OrignalSDL_GetWindowGammaRamp] } }
__declspec(naked) void FakeSDL_GetWindowGrab() { _asm { jmp[SDL2.OrignalSDL_GetWindowGrab] } }
__declspec(naked) void FakeSDL_GetWindowID() { _asm { jmp[SDL2.OrignalSDL_GetWindowID] } }
__declspec(naked) void FakeSDL_GetWindowMaximumSize() { _asm { jmp[SDL2.OrignalSDL_GetWindowMaximumSize] } }
__declspec(naked) void FakeSDL_GetWindowMinimumSize() { _asm { jmp[SDL2.OrignalSDL_GetWindowMinimumSize] } }
__declspec(naked) void FakeSDL_GetWindowOpacity() { _asm { jmp[SDL2.OrignalSDL_GetWindowOpacity] } }
__declspec(naked) void FakeSDL_GetWindowPixelFormat() { _asm { jmp[SDL2.OrignalSDL_GetWindowPixelFormat] } }
__declspec(naked) void FakeSDL_GetWindowPosition() { _asm { jmp[SDL2.OrignalSDL_GetWindowPosition] } }
__declspec(naked) void FakeSDL_GetWindowSize() { _asm { jmp[SDL2.OrignalSDL_GetWindowSize] } }
__declspec(naked) void FakeSDL_GetWindowSurface() { _asm { jmp[SDL2.OrignalSDL_GetWindowSurface] } }
__declspec(naked) void FakeSDL_GetWindowTitle() { _asm { jmp[SDL2.OrignalSDL_GetWindowTitle] } }
__declspec(naked) void FakeSDL_GetWindowWMInfo() { _asm { jmp[SDL2.OrignalSDL_GetWindowWMInfo] } }
__declspec(naked) void FakeSDL_GetYUVConversionMode() { _asm { jmp[SDL2.OrignalSDL_GetYUVConversionMode] } }
__declspec(naked) void FakeSDL_GetYUVConversionModeForResolution() { _asm { jmp[SDL2.OrignalSDL_GetYUVConversionModeForResolution] } }
__declspec(naked) void FakeSDL_HapticClose() { _asm { jmp[SDL2.OrignalSDL_HapticClose] } }
__declspec(naked) void FakeSDL_HapticDestroyEffect() { _asm { jmp[SDL2.OrignalSDL_HapticDestroyEffect] } }
__declspec(naked) void FakeSDL_HapticEffectSupported() { _asm { jmp[SDL2.OrignalSDL_HapticEffectSupported] } }
__declspec(naked) void FakeSDL_HapticGetEffectStatus() { _asm { jmp[SDL2.OrignalSDL_HapticGetEffectStatus] } }
__declspec(naked) void FakeSDL_HapticIndex() { _asm { jmp[SDL2.OrignalSDL_HapticIndex] } }
__declspec(naked) void FakeSDL_HapticName() { _asm { jmp[SDL2.OrignalSDL_HapticName] } }
__declspec(naked) void FakeSDL_HapticNewEffect() { _asm { jmp[SDL2.OrignalSDL_HapticNewEffect] } }
__declspec(naked) void FakeSDL_HapticNumAxes() { _asm { jmp[SDL2.OrignalSDL_HapticNumAxes] } }
__declspec(naked) void FakeSDL_HapticNumEffects() { _asm { jmp[SDL2.OrignalSDL_HapticNumEffects] } }
__declspec(naked) void FakeSDL_HapticNumEffectsPlaying() { _asm { jmp[SDL2.OrignalSDL_HapticNumEffectsPlaying] } }
__declspec(naked) void FakeSDL_HapticOpen() { _asm { jmp[SDL2.OrignalSDL_HapticOpen] } }
__declspec(naked) void FakeSDL_HapticOpenFromJoystick() { _asm { jmp[SDL2.OrignalSDL_HapticOpenFromJoystick] } }
__declspec(naked) void FakeSDL_HapticOpenFromMouse() { _asm { jmp[SDL2.OrignalSDL_HapticOpenFromMouse] } }
__declspec(naked) void FakeSDL_HapticOpened() { _asm { jmp[SDL2.OrignalSDL_HapticOpened] } }
__declspec(naked) void FakeSDL_HapticPause() { _asm { jmp[SDL2.OrignalSDL_HapticPause] } }
__declspec(naked) void FakeSDL_HapticQuery() { _asm { jmp[SDL2.OrignalSDL_HapticQuery] } }
__declspec(naked) void FakeSDL_HapticRumbleInit() { _asm { jmp[SDL2.OrignalSDL_HapticRumbleInit] } }
__declspec(naked) void FakeSDL_HapticRumblePlay() { _asm { jmp[SDL2.OrignalSDL_HapticRumblePlay] } }
__declspec(naked) void FakeSDL_HapticRumbleStop() { _asm { jmp[SDL2.OrignalSDL_HapticRumbleStop] } }
__declspec(naked) void FakeSDL_HapticRumbleSupported() { _asm { jmp[SDL2.OrignalSDL_HapticRumbleSupported] } }
__declspec(naked) void FakeSDL_HapticRunEffect() { _asm { jmp[SDL2.OrignalSDL_HapticRunEffect] } }
__declspec(naked) void FakeSDL_HapticSetAutocenter() { _asm { jmp[SDL2.OrignalSDL_HapticSetAutocenter] } }
__declspec(naked) void FakeSDL_HapticSetGain() { _asm { jmp[SDL2.OrignalSDL_HapticSetGain] } }
__declspec(naked) void FakeSDL_HapticStopAll() { _asm { jmp[SDL2.OrignalSDL_HapticStopAll] } }
__declspec(naked) void FakeSDL_HapticStopEffect() { _asm { jmp[SDL2.OrignalSDL_HapticStopEffect] } }
__declspec(naked) void FakeSDL_HapticUnpause() { _asm { jmp[SDL2.OrignalSDL_HapticUnpause] } }
__declspec(naked) void FakeSDL_HapticUpdateEffect() { _asm { jmp[SDL2.OrignalSDL_HapticUpdateEffect] } }
__declspec(naked) void FakeSDL_Has3DNow() { _asm { jmp[SDL2.OrignalSDL_Has3DNow] } }
__declspec(naked) void FakeSDL_HasAVX() { _asm { jmp[SDL2.OrignalSDL_HasAVX] } }
__declspec(naked) void FakeSDL_HasAVX2() { _asm { jmp[SDL2.OrignalSDL_HasAVX2] } }
__declspec(naked) void FakeSDL_HasAVX512F() { _asm { jmp[SDL2.OrignalSDL_HasAVX512F] } }
__declspec(naked) void FakeSDL_HasAltiVec() { _asm { jmp[SDL2.OrignalSDL_HasAltiVec] } }
__declspec(naked) void FakeSDL_HasClipboardText() { _asm { jmp[SDL2.OrignalSDL_HasClipboardText] } }
__declspec(naked) void FakeSDL_HasColorKey() { _asm { jmp[SDL2.OrignalSDL_HasColorKey] } }
__declspec(naked) void FakeSDL_HasEvent() { _asm { jmp[SDL2.OrignalSDL_HasEvent] } }
__declspec(naked) void FakeSDL_HasEvents() { _asm { jmp[SDL2.OrignalSDL_HasEvents] } }
__declspec(naked) void FakeSDL_HasIntersection() { _asm { jmp[SDL2.OrignalSDL_HasIntersection] } }
__declspec(naked) void FakeSDL_HasMMX() { _asm { jmp[SDL2.OrignalSDL_HasMMX] } }
__declspec(naked) void FakeSDL_HasNEON() { _asm { jmp[SDL2.OrignalSDL_HasNEON] } }
__declspec(naked) void FakeSDL_HasRDTSC() { _asm { jmp[SDL2.OrignalSDL_HasRDTSC] } }
__declspec(naked) void FakeSDL_HasSSE() { _asm { jmp[SDL2.OrignalSDL_HasSSE] } }
__declspec(naked) void FakeSDL_HasSSE2() { _asm { jmp[SDL2.OrignalSDL_HasSSE2] } }
__declspec(naked) void FakeSDL_HasSSE3() { _asm { jmp[SDL2.OrignalSDL_HasSSE3] } }
__declspec(naked) void FakeSDL_HasSSE41() { _asm { jmp[SDL2.OrignalSDL_HasSSE41] } }
__declspec(naked) void FakeSDL_HasSSE42() { _asm { jmp[SDL2.OrignalSDL_HasSSE42] } }
__declspec(naked) void FakeSDL_HasScreenKeyboardSupport() { _asm { jmp[SDL2.OrignalSDL_HasScreenKeyboardSupport] } }
__declspec(naked) void FakeSDL_HideWindow() { _asm { jmp[SDL2.OrignalSDL_HideWindow] } }
__declspec(naked) void FakeSDL_Init() { _asm { jmp[SDL2.OrignalSDL_Init] } }
__declspec(naked) void FakeSDL_InitSubSystem() { _asm { jmp[SDL2.OrignalSDL_InitSubSystem] } }
__declspec(naked) void FakeSDL_IntersectRect() { _asm { jmp[SDL2.OrignalSDL_IntersectRect] } }
__declspec(naked) void FakeSDL_IntersectRectAndLine() { _asm { jmp[SDL2.OrignalSDL_IntersectRectAndLine] } }
__declspec(naked) void FakeSDL_IsGameController() { _asm { jmp[SDL2.OrignalSDL_IsGameController] } }
__declspec(naked) void FakeSDL_IsScreenKeyboardShown() { _asm { jmp[SDL2.OrignalSDL_IsScreenKeyboardShown] } }
__declspec(naked) void FakeSDL_IsScreenSaverEnabled() { _asm { jmp[SDL2.OrignalSDL_IsScreenSaverEnabled] } }
__declspec(naked) void FakeSDL_IsShapedWindow() { _asm { jmp[SDL2.OrignalSDL_IsShapedWindow] } }
__declspec(naked) void FakeSDL_IsTablet() { _asm { jmp[SDL2.OrignalSDL_IsTablet] } }
__declspec(naked) void FakeSDL_IsTextInputActive() { _asm { jmp[SDL2.OrignalSDL_IsTextInputActive] } }
__declspec(naked) void FakeSDL_JoystickClose() { _asm { jmp[SDL2.OrignalSDL_JoystickClose] } }
__declspec(naked) void FakeSDL_JoystickCurrentPowerLevel() { _asm { jmp[SDL2.OrignalSDL_JoystickCurrentPowerLevel] } }
__declspec(naked) void FakeSDL_JoystickEventState() { _asm { jmp[SDL2.OrignalSDL_JoystickEventState] } }
__declspec(naked) void FakeSDL_JoystickFromInstanceID() { _asm { jmp[SDL2.OrignalSDL_JoystickFromInstanceID] } }
__declspec(naked) void FakeSDL_JoystickGetAttached() { _asm { jmp[SDL2.OrignalSDL_JoystickGetAttached] } }
__declspec(naked) void FakeSDL_JoystickGetAxis() { _asm { jmp[SDL2.OrignalSDL_JoystickGetAxis] } }
__declspec(naked) void FakeSDL_JoystickGetAxisInitialState() { _asm { jmp[SDL2.OrignalSDL_JoystickGetAxisInitialState] } }
__declspec(naked) void FakeSDL_JoystickGetBall() { _asm { jmp[SDL2.OrignalSDL_JoystickGetBall] } }
__declspec(naked) void FakeSDL_JoystickGetButton() { _asm { jmp[SDL2.OrignalSDL_JoystickGetButton] } }
__declspec(naked) void FakeSDL_JoystickGetDeviceGUID() { _asm { jmp[SDL2.OrignalSDL_JoystickGetDeviceGUID] } }
__declspec(naked) void FakeSDL_JoystickGetDeviceInstanceID() { _asm { jmp[SDL2.OrignalSDL_JoystickGetDeviceInstanceID] } }
__declspec(naked) void FakeSDL_JoystickGetDevicePlayerIndex() { _asm { jmp[SDL2.OrignalSDL_JoystickGetDevicePlayerIndex] } }
__declspec(naked) void FakeSDL_JoystickGetDeviceProduct() { _asm { jmp[SDL2.OrignalSDL_JoystickGetDeviceProduct] } }
__declspec(naked) void FakeSDL_JoystickGetDeviceProductVersion() { _asm { jmp[SDL2.OrignalSDL_JoystickGetDeviceProductVersion] } }
__declspec(naked) void FakeSDL_JoystickGetDeviceType() { _asm { jmp[SDL2.OrignalSDL_JoystickGetDeviceType] } }
__declspec(naked) void FakeSDL_JoystickGetDeviceVendor() { _asm { jmp[SDL2.OrignalSDL_JoystickGetDeviceVendor] } }
__declspec(naked) void FakeSDL_JoystickGetGUID() { _asm { jmp[SDL2.OrignalSDL_JoystickGetGUID] } }
__declspec(naked) void FakeSDL_JoystickGetGUIDFromString() { _asm { jmp[SDL2.OrignalSDL_JoystickGetGUIDFromString] } }
__declspec(naked) void FakeSDL_JoystickGetGUIDString() { _asm { jmp[SDL2.OrignalSDL_JoystickGetGUIDString] } }
__declspec(naked) void FakeSDL_JoystickGetHat() { _asm { jmp[SDL2.OrignalSDL_JoystickGetHat] } }
__declspec(naked) void FakeSDL_JoystickGetPlayerIndex() { _asm { jmp[SDL2.OrignalSDL_JoystickGetPlayerIndex] } }
__declspec(naked) void FakeSDL_JoystickGetProduct() { _asm { jmp[SDL2.OrignalSDL_JoystickGetProduct] } }
__declspec(naked) void FakeSDL_JoystickGetProductVersion() { _asm { jmp[SDL2.OrignalSDL_JoystickGetProductVersion] } }
__declspec(naked) void FakeSDL_JoystickGetType() { _asm { jmp[SDL2.OrignalSDL_JoystickGetType] } }
__declspec(naked) void FakeSDL_JoystickGetVendor() { _asm { jmp[SDL2.OrignalSDL_JoystickGetVendor] } }
__declspec(naked) void FakeSDL_JoystickInstanceID() { _asm { jmp[SDL2.OrignalSDL_JoystickInstanceID] } }
__declspec(naked) void FakeSDL_JoystickIsHaptic() { _asm { jmp[SDL2.OrignalSDL_JoystickIsHaptic] } }
__declspec(naked) void FakeSDL_JoystickName() { _asm { jmp[SDL2.OrignalSDL_JoystickName] } }
__declspec(naked) void FakeSDL_JoystickNameForIndex() { _asm { jmp[SDL2.OrignalSDL_JoystickNameForIndex] } }
__declspec(naked) void FakeSDL_JoystickNumAxes() { _asm { jmp[SDL2.OrignalSDL_JoystickNumAxes] } }
__declspec(naked) void FakeSDL_JoystickNumBalls() { _asm { jmp[SDL2.OrignalSDL_JoystickNumBalls] } }
__declspec(naked) void FakeSDL_JoystickNumButtons() { _asm { jmp[SDL2.OrignalSDL_JoystickNumButtons] } }
__declspec(naked) void FakeSDL_JoystickNumHats() { _asm { jmp[SDL2.OrignalSDL_JoystickNumHats] } }
__declspec(naked) void FakeSDL_JoystickOpen() { _asm { jmp[SDL2.OrignalSDL_JoystickOpen] } }
__declspec(naked) void FakeSDL_JoystickRumble() { _asm { jmp[SDL2.OrignalSDL_JoystickRumble] } }
__declspec(naked) void FakeSDL_JoystickUpdate() { _asm { jmp[SDL2.OrignalSDL_JoystickUpdate] } }
__declspec(naked) void FakeSDL_LoadBMP_RW() { _asm { jmp[SDL2.OrignalSDL_LoadBMP_RW] } }
__declspec(naked) void FakeSDL_LoadDollarTemplates() { _asm { jmp[SDL2.OrignalSDL_LoadDollarTemplates] } }
__declspec(naked) void FakeSDL_LoadFile() { _asm { jmp[SDL2.OrignalSDL_LoadFile] } }
__declspec(naked) void FakeSDL_LoadFile_RW() { _asm { jmp[SDL2.OrignalSDL_LoadFile_RW] } }
__declspec(naked) void FakeSDL_LoadFunction() { _asm { jmp[SDL2.OrignalSDL_LoadFunction] } }
__declspec(naked) void FakeSDL_LoadObject() { _asm { jmp[SDL2.OrignalSDL_LoadObject] } }
__declspec(naked) void FakeSDL_LoadWAV_RW() { _asm { jmp[SDL2.OrignalSDL_LoadWAV_RW] } }
__declspec(naked) void FakeSDL_LockAudio() { _asm { jmp[SDL2.OrignalSDL_LockAudio] } }
__declspec(naked) void FakeSDL_LockAudioDevice() { _asm { jmp[SDL2.OrignalSDL_LockAudioDevice] } }
__declspec(naked) void FakeSDL_LockJoysticks() { _asm { jmp[SDL2.OrignalSDL_LockJoysticks] } }
__declspec(naked) void FakeSDL_LockMutex() { _asm { jmp[SDL2.OrignalSDL_LockMutex] } }
__declspec(naked) void FakeSDL_LockSurface() { _asm { jmp[SDL2.OrignalSDL_LockSurface] } }
__declspec(naked) void FakeSDL_LockTexture() { _asm { jmp[SDL2.OrignalSDL_LockTexture] } }
__declspec(naked) void FakeSDL_Log() { _asm { jmp[SDL2.OrignalSDL_Log] } }
__declspec(naked) void FakeSDL_LogCritical() { _asm { jmp[SDL2.OrignalSDL_LogCritical] } }
__declspec(naked) void FakeSDL_LogDebug() { _asm { jmp[SDL2.OrignalSDL_LogDebug] } }
__declspec(naked) void FakeSDL_LogError() { _asm { jmp[SDL2.OrignalSDL_LogError] } }
__declspec(naked) void FakeSDL_LogGetOutputFunction() { _asm { jmp[SDL2.OrignalSDL_LogGetOutputFunction] } }
__declspec(naked) void FakeSDL_LogGetPriority() { _asm { jmp[SDL2.OrignalSDL_LogGetPriority] } }
__declspec(naked) void FakeSDL_LogInfo() { _asm { jmp[SDL2.OrignalSDL_LogInfo] } }
__declspec(naked) void FakeSDL_LogMessage() { _asm { jmp[SDL2.OrignalSDL_LogMessage] } }
__declspec(naked) void FakeSDL_LogMessageV() { _asm { jmp[SDL2.OrignalSDL_LogMessageV] } }
__declspec(naked) void FakeSDL_LogResetPriorities() { _asm { jmp[SDL2.OrignalSDL_LogResetPriorities] } }
__declspec(naked) void FakeSDL_LogSetAllPriority() { _asm { jmp[SDL2.OrignalSDL_LogSetAllPriority] } }
__declspec(naked) void FakeSDL_LogSetOutputFunction() { _asm { jmp[SDL2.OrignalSDL_LogSetOutputFunction] } }
__declspec(naked) void FakeSDL_LogSetPriority() { _asm { jmp[SDL2.OrignalSDL_LogSetPriority] } }
__declspec(naked) void FakeSDL_LogVerbose() { _asm { jmp[SDL2.OrignalSDL_LogVerbose] } }
__declspec(naked) void FakeSDL_LogWarn() { _asm { jmp[SDL2.OrignalSDL_LogWarn] } }
__declspec(naked) void FakeSDL_LowerBlit() { _asm { jmp[SDL2.OrignalSDL_LowerBlit] } }
__declspec(naked) void FakeSDL_LowerBlitScaled() { _asm { jmp[SDL2.OrignalSDL_LowerBlitScaled] } }
__declspec(naked) void FakeSDL_MapRGB() { _asm { jmp[SDL2.OrignalSDL_MapRGB] } }
__declspec(naked) void FakeSDL_MapRGBA() { _asm { jmp[SDL2.OrignalSDL_MapRGBA] } }
__declspec(naked) void FakeSDL_MasksToPixelFormatEnum() { _asm { jmp[SDL2.OrignalSDL_MasksToPixelFormatEnum] } }
__declspec(naked) void FakeSDL_MaximizeWindow() { _asm { jmp[SDL2.OrignalSDL_MaximizeWindow] } }
__declspec(naked) void FakeSDL_MemoryBarrierAcquireFunction() { _asm { jmp[SDL2.OrignalSDL_MemoryBarrierAcquireFunction] } }
__declspec(naked) void FakeSDL_MemoryBarrierReleaseFunction() { _asm { jmp[SDL2.OrignalSDL_MemoryBarrierReleaseFunction] } }
__declspec(naked) void FakeSDL_MinimizeWindow() { _asm { jmp[SDL2.OrignalSDL_MinimizeWindow] } }
__declspec(naked) void FakeSDL_MixAudio() { _asm { jmp[SDL2.OrignalSDL_MixAudio] } }
__declspec(naked) void FakeSDL_MixAudioFormat() { _asm { jmp[SDL2.OrignalSDL_MixAudioFormat] } }
__declspec(naked) void FakeSDL_MouseIsHaptic() { _asm { jmp[SDL2.OrignalSDL_MouseIsHaptic] } }
__declspec(naked) void FakeSDL_NewAudioStream() { _asm { jmp[SDL2.OrignalSDL_NewAudioStream] } }
__declspec(naked) void FakeSDL_NumHaptics() { _asm { jmp[SDL2.OrignalSDL_NumHaptics] } }
__declspec(naked) void FakeSDL_NumJoysticks() { _asm { jmp[SDL2.OrignalSDL_NumJoysticks] } }
__declspec(naked) void FakeSDL_NumSensors() { _asm { jmp[SDL2.OrignalSDL_NumSensors] } }
__declspec(naked) void FakeSDL_OpenAudio() { _asm { jmp[SDL2.OrignalSDL_OpenAudio] } }
__declspec(naked) void FakeSDL_OpenAudioDevice() { _asm { jmp[SDL2.OrignalSDL_OpenAudioDevice] } }
__declspec(naked) void FakeSDL_PauseAudio() { _asm { jmp[SDL2.OrignalSDL_PauseAudio] } }
__declspec(naked) void FakeSDL_PauseAudioDevice() { _asm { jmp[SDL2.OrignalSDL_PauseAudioDevice] } }
__declspec(naked) void FakeSDL_PeepEvents() { _asm { jmp[SDL2.OrignalSDL_PeepEvents] } }
__declspec(naked) void FakeSDL_PixelFormatEnumToMasks() { _asm { jmp[SDL2.OrignalSDL_PixelFormatEnumToMasks] } }
__declspec(naked) void FakeSDL_PollEvent() { _asm { jmp[SDL2.OrignalSDL_PollEvent] } }
__declspec(naked) void FakeSDL_PumpEvents() { _asm { jmp[SDL2.OrignalSDL_PumpEvents] } }
__declspec(naked) void FakeSDL_PushEvent() { _asm { jmp[SDL2.OrignalSDL_PushEvent] } }
__declspec(naked) void FakeSDL_QueryTexture() { _asm { jmp[SDL2.OrignalSDL_QueryTexture] } }
__declspec(naked) void FakeSDL_QueueAudio() { _asm { jmp[SDL2.OrignalSDL_QueueAudio] } }
__declspec(naked) void FakeSDL_Quit() { _asm { jmp[SDL2.OrignalSDL_Quit] } }
__declspec(naked) void FakeSDL_QuitSubSystem() { _asm { jmp[SDL2.OrignalSDL_QuitSubSystem] } }
__declspec(naked) void FakeSDL_RWFromConstMem() { _asm { jmp[SDL2.OrignalSDL_RWFromConstMem] } }
__declspec(naked) void FakeSDL_RWFromFP() { _asm { jmp[SDL2.OrignalSDL_RWFromFP] } }
__declspec(naked) void FakeSDL_RWFromFile() { _asm { jmp[SDL2.OrignalSDL_RWFromFile] } }
__declspec(naked) void FakeSDL_RWFromMem() { _asm { jmp[SDL2.OrignalSDL_RWFromMem] } }
__declspec(naked) void FakeSDL_RWclose() { _asm { jmp[SDL2.OrignalSDL_RWclose] } }
__declspec(naked) void FakeSDL_RWread() { _asm { jmp[SDL2.OrignalSDL_RWread] } }
__declspec(naked) void FakeSDL_RWseek() { _asm { jmp[SDL2.OrignalSDL_RWseek] } }
__declspec(naked) void FakeSDL_RWsize() { _asm { jmp[SDL2.OrignalSDL_RWsize] } }
__declspec(naked) void FakeSDL_RWtell() { _asm { jmp[SDL2.OrignalSDL_RWtell] } }
__declspec(naked) void FakeSDL_RWwrite() { _asm { jmp[SDL2.OrignalSDL_RWwrite] } }
__declspec(naked) void FakeSDL_RaiseWindow() { _asm { jmp[SDL2.OrignalSDL_RaiseWindow] } }
__declspec(naked) void FakeSDL_ReadBE16() { _asm { jmp[SDL2.OrignalSDL_ReadBE16] } }
__declspec(naked) void FakeSDL_ReadBE32() { _asm { jmp[SDL2.OrignalSDL_ReadBE32] } }
__declspec(naked) void FakeSDL_ReadBE64() { _asm { jmp[SDL2.OrignalSDL_ReadBE64] } }
__declspec(naked) void FakeSDL_ReadLE16() { _asm { jmp[SDL2.OrignalSDL_ReadLE16] } }
__declspec(naked) void FakeSDL_ReadLE32() { _asm { jmp[SDL2.OrignalSDL_ReadLE32] } }
__declspec(naked) void FakeSDL_ReadLE64() { _asm { jmp[SDL2.OrignalSDL_ReadLE64] } }
__declspec(naked) void FakeSDL_ReadU8() { _asm { jmp[SDL2.OrignalSDL_ReadU8] } }
__declspec(naked) void FakeSDL_RecordGesture() { _asm { jmp[SDL2.OrignalSDL_RecordGesture] } }
__declspec(naked) void FakeSDL_RegisterApp() { _asm { jmp[SDL2.OrignalSDL_RegisterApp] } }
__declspec(naked) void FakeSDL_RegisterEvents() { _asm { jmp[SDL2.OrignalSDL_RegisterEvents] } }
__declspec(naked) void FakeSDL_RemoveTimer() { _asm { jmp[SDL2.OrignalSDL_RemoveTimer] } }
__declspec(naked) void FakeSDL_RenderClear() { _asm { jmp[SDL2.OrignalSDL_RenderClear] } }
__declspec(naked) void FakeSDL_RenderCopy() { _asm { jmp[SDL2.OrignalSDL_RenderCopy] } }
__declspec(naked) void FakeSDL_RenderCopyEx() { _asm { jmp[SDL2.OrignalSDL_RenderCopyEx] } }
__declspec(naked) void FakeSDL_RenderCopyExF() { _asm { jmp[SDL2.OrignalSDL_RenderCopyExF] } }
__declspec(naked) void FakeSDL_RenderCopyF() { _asm { jmp[SDL2.OrignalSDL_RenderCopyF] } }
__declspec(naked) void FakeSDL_RenderDrawLine() { _asm { jmp[SDL2.OrignalSDL_RenderDrawLine] } }
__declspec(naked) void FakeSDL_RenderDrawLineF() { _asm { jmp[SDL2.OrignalSDL_RenderDrawLineF] } }
__declspec(naked) void FakeSDL_RenderDrawLines() { _asm { jmp[SDL2.OrignalSDL_RenderDrawLines] } }
__declspec(naked) void FakeSDL_RenderDrawLinesF() { _asm { jmp[SDL2.OrignalSDL_RenderDrawLinesF] } }
__declspec(naked) void FakeSDL_RenderDrawPoint() { _asm { jmp[SDL2.OrignalSDL_RenderDrawPoint] } }
__declspec(naked) void FakeSDL_RenderDrawPointF() { _asm { jmp[SDL2.OrignalSDL_RenderDrawPointF] } }
__declspec(naked) void FakeSDL_RenderDrawPoints() { _asm { jmp[SDL2.OrignalSDL_RenderDrawPoints] } }
__declspec(naked) void FakeSDL_RenderDrawPointsF() { _asm { jmp[SDL2.OrignalSDL_RenderDrawPointsF] } }
__declspec(naked) void FakeSDL_RenderDrawRect() { _asm { jmp[SDL2.OrignalSDL_RenderDrawRect] } }
__declspec(naked) void FakeSDL_RenderDrawRectF() { _asm { jmp[SDL2.OrignalSDL_RenderDrawRectF] } }
__declspec(naked) void FakeSDL_RenderDrawRects() { _asm { jmp[SDL2.OrignalSDL_RenderDrawRects] } }
__declspec(naked) void FakeSDL_RenderDrawRectsF() { _asm { jmp[SDL2.OrignalSDL_RenderDrawRectsF] } }
__declspec(naked) void FakeSDL_RenderFillRect() { _asm { jmp[SDL2.OrignalSDL_RenderFillRect] } }
__declspec(naked) void FakeSDL_RenderFillRectF() { _asm { jmp[SDL2.OrignalSDL_RenderFillRectF] } }
__declspec(naked) void FakeSDL_RenderFillRects() { _asm { jmp[SDL2.OrignalSDL_RenderFillRects] } }
__declspec(naked) void FakeSDL_RenderFillRectsF() { _asm { jmp[SDL2.OrignalSDL_RenderFillRectsF] } }
__declspec(naked) void FakeSDL_RenderFlush() { _asm { jmp[SDL2.OrignalSDL_RenderFlush] } }
__declspec(naked) void FakeSDL_RenderGetClipRect() { _asm { jmp[SDL2.OrignalSDL_RenderGetClipRect] } }
__declspec(naked) void FakeSDL_RenderGetD3D9Device() { _asm { jmp[SDL2.OrignalSDL_RenderGetD3D9Device] } }
__declspec(naked) void FakeSDL_RenderGetIntegerScale() { _asm { jmp[SDL2.OrignalSDL_RenderGetIntegerScale] } }
__declspec(naked) void FakeSDL_RenderGetLogicalSize() { _asm { jmp[SDL2.OrignalSDL_RenderGetLogicalSize] } }
__declspec(naked) void FakeSDL_RenderGetMetalCommandEncoder() { _asm { jmp[SDL2.OrignalSDL_RenderGetMetalCommandEncoder] } }
__declspec(naked) void FakeSDL_RenderGetMetalLayer() { _asm { jmp[SDL2.OrignalSDL_RenderGetMetalLayer] } }
__declspec(naked) void FakeSDL_RenderGetScale() { _asm { jmp[SDL2.OrignalSDL_RenderGetScale] } }
__declspec(naked) void FakeSDL_RenderGetViewport() { _asm { jmp[SDL2.OrignalSDL_RenderGetViewport] } }
__declspec(naked) void FakeSDL_RenderIsClipEnabled() { _asm { jmp[SDL2.OrignalSDL_RenderIsClipEnabled] } }
__declspec(naked) void FakeSDL_RenderPresent() { _asm { jmp[SDL2.OrignalSDL_RenderPresent] } }
__declspec(naked) void FakeSDL_RenderReadPixels() { _asm { jmp[SDL2.OrignalSDL_RenderReadPixels] } }
__declspec(naked) void FakeSDL_RenderSetClipRect() { _asm { jmp[SDL2.OrignalSDL_RenderSetClipRect] } }
__declspec(naked) void FakeSDL_RenderSetIntegerScale() { _asm { jmp[SDL2.OrignalSDL_RenderSetIntegerScale] } }
__declspec(naked) void FakeSDL_RenderSetLogicalSize() { _asm { jmp[SDL2.OrignalSDL_RenderSetLogicalSize] } }
__declspec(naked) void FakeSDL_RenderSetScale() { _asm { jmp[SDL2.OrignalSDL_RenderSetScale] } }
__declspec(naked) void FakeSDL_RenderSetViewport() { _asm { jmp[SDL2.OrignalSDL_RenderSetViewport] } }
__declspec(naked) void FakeSDL_RenderTargetSupported() { _asm { jmp[SDL2.OrignalSDL_RenderTargetSupported] } }
__declspec(naked) void FakeSDL_ReportAssertion() { _asm { jmp[SDL2.OrignalSDL_ReportAssertion] } }
__declspec(naked) void FakeSDL_ResetAssertionReport() { _asm { jmp[SDL2.OrignalSDL_ResetAssertionReport] } }
__declspec(naked) void FakeSDL_RestoreWindow() { _asm { jmp[SDL2.OrignalSDL_RestoreWindow] } }
__declspec(naked) void FakeSDL_SIMDAlloc() { _asm { jmp[SDL2.OrignalSDL_SIMDAlloc] } }
__declspec(naked) void FakeSDL_SIMDFree() { _asm { jmp[SDL2.OrignalSDL_SIMDFree] } }
__declspec(naked) void FakeSDL_SIMDGetAlignment() { _asm { jmp[SDL2.OrignalSDL_SIMDGetAlignment] } }
__declspec(naked) void FakeSDL_SaveAllDollarTemplates() { _asm { jmp[SDL2.OrignalSDL_SaveAllDollarTemplates] } }
__declspec(naked) void FakeSDL_SaveBMP_RW() { _asm { jmp[SDL2.OrignalSDL_SaveBMP_RW] } }
__declspec(naked) void FakeSDL_SaveDollarTemplate() { _asm { jmp[SDL2.OrignalSDL_SaveDollarTemplate] } }
__declspec(naked) void FakeSDL_SemPost() { _asm { jmp[SDL2.OrignalSDL_SemPost] } }
__declspec(naked) void FakeSDL_SemTryWait() { _asm { jmp[SDL2.OrignalSDL_SemTryWait] } }
__declspec(naked) void FakeSDL_SemValue() { _asm { jmp[SDL2.OrignalSDL_SemValue] } }
__declspec(naked) void FakeSDL_SemWait() { _asm { jmp[SDL2.OrignalSDL_SemWait] } }
__declspec(naked) void FakeSDL_SemWaitTimeout() { _asm { jmp[SDL2.OrignalSDL_SemWaitTimeout] } }
__declspec(naked) void FakeSDL_SensorClose() { _asm { jmp[SDL2.OrignalSDL_SensorClose] } }
__declspec(naked) void FakeSDL_SensorFromInstanceID() { _asm { jmp[SDL2.OrignalSDL_SensorFromInstanceID] } }
__declspec(naked) void FakeSDL_SensorGetData() { _asm { jmp[SDL2.OrignalSDL_SensorGetData] } }
__declspec(naked) void FakeSDL_SensorGetDeviceInstanceID() { _asm { jmp[SDL2.OrignalSDL_SensorGetDeviceInstanceID] } }
__declspec(naked) void FakeSDL_SensorGetDeviceName() { _asm { jmp[SDL2.OrignalSDL_SensorGetDeviceName] } }
__declspec(naked) void FakeSDL_SensorGetDeviceNonPortableType() { _asm { jmp[SDL2.OrignalSDL_SensorGetDeviceNonPortableType] } }
__declspec(naked) void FakeSDL_SensorGetDeviceType() { _asm { jmp[SDL2.OrignalSDL_SensorGetDeviceType] } }
__declspec(naked) void FakeSDL_SensorGetInstanceID() { _asm { jmp[SDL2.OrignalSDL_SensorGetInstanceID] } }
__declspec(naked) void FakeSDL_SensorGetName() { _asm { jmp[SDL2.OrignalSDL_SensorGetName] } }
__declspec(naked) void FakeSDL_SensorGetNonPortableType() { _asm { jmp[SDL2.OrignalSDL_SensorGetNonPortableType] } }
__declspec(naked) void FakeSDL_SensorGetType() { _asm { jmp[SDL2.OrignalSDL_SensorGetType] } }
__declspec(naked) void FakeSDL_SensorOpen() { _asm { jmp[SDL2.OrignalSDL_SensorOpen] } }
__declspec(naked) void FakeSDL_SensorUpdate() { _asm { jmp[SDL2.OrignalSDL_SensorUpdate] } }
__declspec(naked) void FakeSDL_SetAssertionHandler() { _asm { jmp[SDL2.OrignalSDL_SetAssertionHandler] } }
__declspec(naked) void FakeSDL_SetClipRect() { _asm { jmp[SDL2.OrignalSDL_SetClipRect] } }
__declspec(naked) void FakeSDL_SetClipboardText() { _asm { jmp[SDL2.OrignalSDL_SetClipboardText] } }
__declspec(naked) void FakeSDL_SetColorKey() { _asm { jmp[SDL2.OrignalSDL_SetColorKey] } }
__declspec(naked) void FakeSDL_SetCursor() { _asm { jmp[SDL2.OrignalSDL_SetCursor] } }
__declspec(naked) void FakeSDL_SetError() { _asm { jmp[SDL2.OrignalSDL_SetError] } }
__declspec(naked) void FakeSDL_SetEventFilter() { _asm { jmp[SDL2.OrignalSDL_SetEventFilter] } }
__declspec(naked) void FakeSDL_SetHint() { _asm { jmp[SDL2.OrignalSDL_SetHint] } }
__declspec(naked) void FakeSDL_SetHintWithPriority() { _asm { jmp[SDL2.OrignalSDL_SetHintWithPriority] } }
__declspec(naked) void FakeSDL_SetMainReady() { _asm { jmp[SDL2.OrignalSDL_SetMainReady] } }
__declspec(naked) void FakeSDL_SetMemoryFunctions() { _asm { jmp[SDL2.OrignalSDL_SetMemoryFunctions] } }
__declspec(naked) void FakeSDL_SetModState() { _asm { jmp[SDL2.OrignalSDL_SetModState] } }
__declspec(naked) void FakeSDL_SetPaletteColors() { _asm { jmp[SDL2.OrignalSDL_SetPaletteColors] } }
__declspec(naked) void FakeSDL_SetPixelFormatPalette() { _asm { jmp[SDL2.OrignalSDL_SetPixelFormatPalette] } }
__declspec(naked) void FakeSDL_SetRelativeMouseMode() { _asm { jmp[SDL2.OrignalSDL_SetRelativeMouseMode] } }
__declspec(naked) void FakeSDL_SetRenderDrawBlendMode() { _asm { jmp[SDL2.OrignalSDL_SetRenderDrawBlendMode] } }
__declspec(naked) void FakeSDL_SetRenderDrawColor() { _asm { jmp[SDL2.OrignalSDL_SetRenderDrawColor] } }
__declspec(naked) void FakeSDL_SetRenderTarget() { _asm { jmp[SDL2.OrignalSDL_SetRenderTarget] } }
__declspec(naked) void FakeSDL_SetSurfaceAlphaMod() { _asm { jmp[SDL2.OrignalSDL_SetSurfaceAlphaMod] } }
__declspec(naked) void FakeSDL_SetSurfaceBlendMode() { _asm { jmp[SDL2.OrignalSDL_SetSurfaceBlendMode] } }
__declspec(naked) void FakeSDL_SetSurfaceColorMod() { _asm { jmp[SDL2.OrignalSDL_SetSurfaceColorMod] } }
__declspec(naked) void FakeSDL_SetSurfacePalette() { _asm { jmp[SDL2.OrignalSDL_SetSurfacePalette] } }
__declspec(naked) void FakeSDL_SetSurfaceRLE() { _asm { jmp[SDL2.OrignalSDL_SetSurfaceRLE] } }
__declspec(naked) void FakeSDL_SetTextInputRect() { _asm { jmp[SDL2.OrignalSDL_SetTextInputRect] } }
__declspec(naked) void FakeSDL_SetTextureAlphaMod() { _asm { jmp[SDL2.OrignalSDL_SetTextureAlphaMod] } }
__declspec(naked) void FakeSDL_SetTextureBlendMode() { _asm { jmp[SDL2.OrignalSDL_SetTextureBlendMode] } }
__declspec(naked) void FakeSDL_SetTextureColorMod() { _asm { jmp[SDL2.OrignalSDL_SetTextureColorMod] } }
__declspec(naked) void FakeSDL_SetThreadPriority() { _asm { jmp[SDL2.OrignalSDL_SetThreadPriority] } }
__declspec(naked) void FakeSDL_SetWindowBordered() { _asm { jmp[SDL2.OrignalSDL_SetWindowBordered] } }
__declspec(naked) void FakeSDL_SetWindowBrightness() { _asm { jmp[SDL2.OrignalSDL_SetWindowBrightness] } }
__declspec(naked) void FakeSDL_SetWindowData() { _asm { jmp[SDL2.OrignalSDL_SetWindowData] } }
__declspec(naked) void FakeSDL_SetWindowDisplayMode() { _asm { jmp[SDL2.OrignalSDL_SetWindowDisplayMode] } }
__declspec(naked) void FakeSDL_SetWindowFullscreen() { _asm { jmp[SDL2.OrignalSDL_SetWindowFullscreen] } }
__declspec(naked) void FakeSDL_SetWindowGammaRamp() { _asm { jmp[SDL2.OrignalSDL_SetWindowGammaRamp] } }
__declspec(naked) void FakeSDL_SetWindowGrab() { _asm { jmp[SDL2.OrignalSDL_SetWindowGrab] } }
__declspec(naked) void FakeSDL_SetWindowHitTest() { _asm { jmp[SDL2.OrignalSDL_SetWindowHitTest] } }
__declspec(naked) void FakeSDL_SetWindowIcon() { _asm { jmp[SDL2.OrignalSDL_SetWindowIcon] } }
__declspec(naked) void FakeSDL_SetWindowInputFocus() { _asm { jmp[SDL2.OrignalSDL_SetWindowInputFocus] } }
__declspec(naked) void FakeSDL_SetWindowMaximumSize() { _asm { jmp[SDL2.OrignalSDL_SetWindowMaximumSize] } }
__declspec(naked) void FakeSDL_SetWindowMinimumSize() { _asm { jmp[SDL2.OrignalSDL_SetWindowMinimumSize] } }
__declspec(naked) void FakeSDL_SetWindowModalFor() { _asm { jmp[SDL2.OrignalSDL_SetWindowModalFor] } }
__declspec(naked) void FakeSDL_SetWindowOpacity() { _asm { jmp[SDL2.OrignalSDL_SetWindowOpacity] } }
__declspec(naked) void FakeSDL_SetWindowPosition() { _asm { jmp[SDL2.OrignalSDL_SetWindowPosition] } }
__declspec(naked) void FakeSDL_SetWindowResizable() { _asm { jmp[SDL2.OrignalSDL_SetWindowResizable] } }
__declspec(naked) void FakeSDL_SetWindowShape() { _asm { jmp[SDL2.OrignalSDL_SetWindowShape] } }
__declspec(naked) void FakeSDL_SetWindowSize() { _asm { jmp[SDL2.OrignalSDL_SetWindowSize] } }
__declspec(naked) void FakeSDL_SetWindowTitle() { _asm { jmp[SDL2.OrignalSDL_SetWindowTitle] } }
__declspec(naked) void FakeSDL_SetWindowsMessageHook() { _asm { jmp[SDL2.OrignalSDL_SetWindowsMessageHook] } }
__declspec(naked) void FakeSDL_SetYUVConversionMode() { _asm { jmp[SDL2.OrignalSDL_SetYUVConversionMode] } }
__declspec(naked) void FakeSDL_ShowCursor() { _asm { jmp[SDL2.OrignalSDL_ShowCursor] } }
__declspec(naked) void FakeSDL_ShowMessageBox() { _asm { jmp[SDL2.OrignalSDL_ShowMessageBox] } }
__declspec(naked) void FakeSDL_ShowSimpleMessageBox() { _asm { jmp[SDL2.OrignalSDL_ShowSimpleMessageBox] } }
__declspec(naked) void FakeSDL_ShowWindow() { _asm { jmp[SDL2.OrignalSDL_ShowWindow] } }
__declspec(naked) void FakeSDL_SoftStretch() { _asm { jmp[SDL2.OrignalSDL_SoftStretch] } }
__declspec(naked) void FakeSDL_StartTextInput() { _asm { jmp[SDL2.OrignalSDL_StartTextInput] } }
__declspec(naked) void FakeSDL_StopTextInput() { _asm { jmp[SDL2.OrignalSDL_StopTextInput] } }
__declspec(naked) void FakeSDL_TLSCreate() { _asm { jmp[SDL2.OrignalSDL_TLSCreate] } }
__declspec(naked) void FakeSDL_TLSGet() { _asm { jmp[SDL2.OrignalSDL_TLSGet] } }
__declspec(naked) void FakeSDL_TLSSet() { _asm { jmp[SDL2.OrignalSDL_TLSSet] } }
__declspec(naked) void FakeSDL_ThreadID() { _asm { jmp[SDL2.OrignalSDL_ThreadID] } }
__declspec(naked) void FakeSDL_TryLockMutex() { _asm { jmp[SDL2.OrignalSDL_TryLockMutex] } }
__declspec(naked) void FakeSDL_UnionRect() { _asm { jmp[SDL2.OrignalSDL_UnionRect] } }
__declspec(naked) void FakeSDL_UnloadObject() { _asm { jmp[SDL2.OrignalSDL_UnloadObject] } }
__declspec(naked) void FakeSDL_UnlockAudio() { _asm { jmp[SDL2.OrignalSDL_UnlockAudio] } }
__declspec(naked) void FakeSDL_UnlockAudioDevice() { _asm { jmp[SDL2.OrignalSDL_UnlockAudioDevice] } }
__declspec(naked) void FakeSDL_UnlockJoysticks() { _asm { jmp[SDL2.OrignalSDL_UnlockJoysticks] } }
__declspec(naked) void FakeSDL_UnlockMutex() { _asm { jmp[SDL2.OrignalSDL_UnlockMutex] } }
__declspec(naked) void FakeSDL_UnlockSurface() { _asm { jmp[SDL2.OrignalSDL_UnlockSurface] } }
__declspec(naked) void FakeSDL_UnlockTexture() { _asm { jmp[SDL2.OrignalSDL_UnlockTexture] } }
__declspec(naked) void FakeSDL_UnregisterApp() { _asm { jmp[SDL2.OrignalSDL_UnregisterApp] } }
__declspec(naked) void FakeSDL_UpdateTexture() { _asm { jmp[SDL2.OrignalSDL_UpdateTexture] } }
__declspec(naked) void FakeSDL_UpdateWindowSurface() { _asm { jmp[SDL2.OrignalSDL_UpdateWindowSurface] } }
__declspec(naked) void FakeSDL_UpdateWindowSurfaceRects() { _asm { jmp[SDL2.OrignalSDL_UpdateWindowSurfaceRects] } }
__declspec(naked) void FakeSDL_UpdateYUVTexture() { _asm { jmp[SDL2.OrignalSDL_UpdateYUVTexture] } }
__declspec(naked) void FakeSDL_UpperBlit() { _asm { jmp[SDL2.OrignalSDL_UpperBlit] } }
__declspec(naked) void FakeSDL_UpperBlitScaled() { _asm { jmp[SDL2.OrignalSDL_UpperBlitScaled] } }
__declspec(naked) void FakeSDL_VideoInit() { _asm { jmp[SDL2.OrignalSDL_VideoInit] } }
__declspec(naked) void FakeSDL_VideoQuit() { _asm { jmp[SDL2.OrignalSDL_VideoQuit] } }
__declspec(naked) void FakeSDL_Vulkan_CreateSurface() { _asm { jmp[SDL2.OrignalSDL_Vulkan_CreateSurface] } }
__declspec(naked) void FakeSDL_Vulkan_GetDrawableSize() { _asm { jmp[SDL2.OrignalSDL_Vulkan_GetDrawableSize] } }
__declspec(naked) void FakeSDL_Vulkan_GetInstanceExtensions() { _asm { jmp[SDL2.OrignalSDL_Vulkan_GetInstanceExtensions] } }
__declspec(naked) void FakeSDL_Vulkan_GetVkGetInstanceProcAddr() { _asm { jmp[SDL2.OrignalSDL_Vulkan_GetVkGetInstanceProcAddr] } }
__declspec(naked) void FakeSDL_Vulkan_LoadLibrary() { _asm { jmp[SDL2.OrignalSDL_Vulkan_LoadLibrary] } }
__declspec(naked) void FakeSDL_Vulkan_UnloadLibrary() { _asm { jmp[SDL2.OrignalSDL_Vulkan_UnloadLibrary] } }
__declspec(naked) void FakeSDL_WaitEvent() { _asm { jmp[SDL2.OrignalSDL_WaitEvent] } }
__declspec(naked) void FakeSDL_WaitEventTimeout() { _asm { jmp[SDL2.OrignalSDL_WaitEventTimeout] } }
__declspec(naked) void FakeSDL_WaitThread() { _asm { jmp[SDL2.OrignalSDL_WaitThread] } }
__declspec(naked) void FakeSDL_WarpMouseGlobal() { _asm { jmp[SDL2.OrignalSDL_WarpMouseGlobal] } }
__declspec(naked) void FakeSDL_WarpMouseInWindow() { _asm { jmp[SDL2.OrignalSDL_WarpMouseInWindow] } }
__declspec(naked) void FakeSDL_WasInit() { _asm { jmp[SDL2.OrignalSDL_WasInit] } }
__declspec(naked) void FakeSDL_WriteBE16() { _asm { jmp[SDL2.OrignalSDL_WriteBE16] } }
__declspec(naked) void FakeSDL_WriteBE32() { _asm { jmp[SDL2.OrignalSDL_WriteBE32] } }
__declspec(naked) void FakeSDL_WriteBE64() { _asm { jmp[SDL2.OrignalSDL_WriteBE64] } }
__declspec(naked) void FakeSDL_WriteLE16() { _asm { jmp[SDL2.OrignalSDL_WriteLE16] } }
__declspec(naked) void FakeSDL_WriteLE32() { _asm { jmp[SDL2.OrignalSDL_WriteLE32] } }
__declspec(naked) void FakeSDL_WriteLE64() { _asm { jmp[SDL2.OrignalSDL_WriteLE64] } }
__declspec(naked) void FakeSDL_WriteU8() { _asm { jmp[SDL2.OrignalSDL_WriteU8] } }
__declspec(naked) void FakeSDL_abs() { _asm { jmp[SDL2.OrignalSDL_abs] } }
__declspec(naked) void FakeSDL_acos() { _asm { jmp[SDL2.OrignalSDL_acos] } }
__declspec(naked) void FakeSDL_acosf() { _asm { jmp[SDL2.OrignalSDL_acosf] } }
__declspec(naked) void FakeSDL_asin() { _asm { jmp[SDL2.OrignalSDL_asin] } }
__declspec(naked) void FakeSDL_asinf() { _asm { jmp[SDL2.OrignalSDL_asinf] } }
__declspec(naked) void FakeSDL_atan() { _asm { jmp[SDL2.OrignalSDL_atan] } }
__declspec(naked) void FakeSDL_atan2() { _asm { jmp[SDL2.OrignalSDL_atan2] } }
__declspec(naked) void FakeSDL_atan2f() { _asm { jmp[SDL2.OrignalSDL_atan2f] } }
__declspec(naked) void FakeSDL_atanf() { _asm { jmp[SDL2.OrignalSDL_atanf] } }
__declspec(naked) void FakeSDL_atof() { _asm { jmp[SDL2.OrignalSDL_atof] } }
__declspec(naked) void FakeSDL_atoi() { _asm { jmp[SDL2.OrignalSDL_atoi] } }
__declspec(naked) void FakeSDL_calloc() { _asm { jmp[SDL2.OrignalSDL_calloc] } }
__declspec(naked) void FakeSDL_ceil() { _asm { jmp[SDL2.OrignalSDL_ceil] } }
__declspec(naked) void FakeSDL_ceilf() { _asm { jmp[SDL2.OrignalSDL_ceilf] } }
__declspec(naked) void FakeSDL_copysign() { _asm { jmp[SDL2.OrignalSDL_copysign] } }
__declspec(naked) void FakeSDL_copysignf() { _asm { jmp[SDL2.OrignalSDL_copysignf] } }
__declspec(naked) void FakeSDL_cos() { _asm { jmp[SDL2.OrignalSDL_cos] } }
__declspec(naked) void FakeSDL_cosf() { _asm { jmp[SDL2.OrignalSDL_cosf] } }
__declspec(naked) void FakeSDL_exp() { _asm { jmp[SDL2.OrignalSDL_exp] } }
__declspec(naked) void FakeSDL_expf() { _asm { jmp[SDL2.OrignalSDL_expf] } }
__declspec(naked) void FakeSDL_fabs() { _asm { jmp[SDL2.OrignalSDL_fabs] } }
__declspec(naked) void FakeSDL_fabsf() { _asm { jmp[SDL2.OrignalSDL_fabsf] } }
__declspec(naked) void FakeSDL_floor() { _asm { jmp[SDL2.OrignalSDL_floor] } }
__declspec(naked) void FakeSDL_floorf() { _asm { jmp[SDL2.OrignalSDL_floorf] } }
__declspec(naked) void FakeSDL_fmod() { _asm { jmp[SDL2.OrignalSDL_fmod] } }
__declspec(naked) void FakeSDL_fmodf() { _asm { jmp[SDL2.OrignalSDL_fmodf] } }
__declspec(naked) void FakeSDL_free() { _asm { jmp[SDL2.OrignalSDL_free] } }
__declspec(naked) void FakeSDL_getenv() { _asm { jmp[SDL2.OrignalSDL_getenv] } }
__declspec(naked) void FakeSDL_iconv() { _asm { jmp[SDL2.OrignalSDL_iconv] } }
__declspec(naked) void FakeSDL_iconv_close() { _asm { jmp[SDL2.OrignalSDL_iconv_close] } }
__declspec(naked) void FakeSDL_iconv_open() { _asm { jmp[SDL2.OrignalSDL_iconv_open] } }
__declspec(naked) void FakeSDL_iconv_string() { _asm { jmp[SDL2.OrignalSDL_iconv_string] } }
__declspec(naked) void FakeSDL_isdigit() { _asm { jmp[SDL2.OrignalSDL_isdigit] } }
__declspec(naked) void FakeSDL_isspace() { _asm { jmp[SDL2.OrignalSDL_isspace] } }
__declspec(naked) void FakeSDL_itoa() { _asm { jmp[SDL2.OrignalSDL_itoa] } }
__declspec(naked) void FakeSDL_lltoa() { _asm { jmp[SDL2.OrignalSDL_lltoa] } }
__declspec(naked) void FakeSDL_log() { _asm { jmp[SDL2.OrignalSDL_log] } }
__declspec(naked) void FakeSDL_log10() { _asm { jmp[SDL2.OrignalSDL_log10] } }
__declspec(naked) void FakeSDL_log10f() { _asm { jmp[SDL2.OrignalSDL_log10f] } }
__declspec(naked) void FakeSDL_logf() { _asm { jmp[SDL2.OrignalSDL_logf] } }
__declspec(naked) void FakeSDL_ltoa() { _asm { jmp[SDL2.OrignalSDL_ltoa] } }
__declspec(naked) void FakeSDL_malloc() { _asm { jmp[SDL2.OrignalSDL_malloc] } }
__declspec(naked) void FakeSDL_memcmp() { _asm { jmp[SDL2.OrignalSDL_memcmp] } }
__declspec(naked) void FakeSDL_memcpy() { _asm { jmp[SDL2.OrignalSDL_memcpy] } }
__declspec(naked) void FakeSDL_memmove() { _asm { jmp[SDL2.OrignalSDL_memmove] } }
__declspec(naked) void FakeSDL_memset() { _asm { jmp[SDL2.OrignalSDL_memset] } }
__declspec(naked) void FakeSDL_pow() { _asm { jmp[SDL2.OrignalSDL_pow] } }
__declspec(naked) void FakeSDL_powf() { _asm { jmp[SDL2.OrignalSDL_powf] } }
__declspec(naked) void FakeSDL_qsort() { _asm { jmp[SDL2.OrignalSDL_qsort] } }
__declspec(naked) void FakeSDL_realloc() { _asm { jmp[SDL2.OrignalSDL_realloc] } }
__declspec(naked) void FakeSDL_scalbn() { _asm { jmp[SDL2.OrignalSDL_scalbn] } }
__declspec(naked) void FakeSDL_scalbnf() { _asm { jmp[SDL2.OrignalSDL_scalbnf] } }
__declspec(naked) void FakeSDL_setenv() { _asm { jmp[SDL2.OrignalSDL_setenv] } }
__declspec(naked) void FakeSDL_sin() { _asm { jmp[SDL2.OrignalSDL_sin] } }
__declspec(naked) void FakeSDL_sinf() { _asm { jmp[SDL2.OrignalSDL_sinf] } }
__declspec(naked) void FakeSDL_snprintf() { _asm { jmp[SDL2.OrignalSDL_snprintf] } }
__declspec(naked) void FakeSDL_sqrt() { _asm { jmp[SDL2.OrignalSDL_sqrt] } }
__declspec(naked) void FakeSDL_sqrtf() { _asm { jmp[SDL2.OrignalSDL_sqrtf] } }
__declspec(naked) void FakeSDL_sscanf() { _asm { jmp[SDL2.OrignalSDL_sscanf] } }
__declspec(naked) void FakeSDL_strcasecmp() { _asm { jmp[SDL2.OrignalSDL_strcasecmp] } }
__declspec(naked) void FakeSDL_strchr() { _asm { jmp[SDL2.OrignalSDL_strchr] } }
__declspec(naked) void FakeSDL_strcmp() { _asm { jmp[SDL2.OrignalSDL_strcmp] } }
__declspec(naked) void FakeSDL_strdup() { _asm { jmp[SDL2.OrignalSDL_strdup] } }
__declspec(naked) void FakeSDL_strlcat() { _asm { jmp[SDL2.OrignalSDL_strlcat] } }
__declspec(naked) void FakeSDL_strlcpy() { _asm { jmp[SDL2.OrignalSDL_strlcpy] } }
__declspec(naked) void FakeSDL_strlen() { _asm { jmp[SDL2.OrignalSDL_strlen] } }
__declspec(naked) void FakeSDL_strlwr() { _asm { jmp[SDL2.OrignalSDL_strlwr] } }
__declspec(naked) void FakeSDL_strncasecmp() { _asm { jmp[SDL2.OrignalSDL_strncasecmp] } }
__declspec(naked) void FakeSDL_strncmp() { _asm { jmp[SDL2.OrignalSDL_strncmp] } }
__declspec(naked) void FakeSDL_strrchr() { _asm { jmp[SDL2.OrignalSDL_strrchr] } }
__declspec(naked) void FakeSDL_strrev() { _asm { jmp[SDL2.OrignalSDL_strrev] } }
__declspec(naked) void FakeSDL_strstr() { _asm { jmp[SDL2.OrignalSDL_strstr] } }
__declspec(naked) void FakeSDL_strtod() { _asm { jmp[SDL2.OrignalSDL_strtod] } }
__declspec(naked) void FakeSDL_strtol() { _asm { jmp[SDL2.OrignalSDL_strtol] } }
__declspec(naked) void FakeSDL_strtoll() { _asm { jmp[SDL2.OrignalSDL_strtoll] } }
__declspec(naked) void FakeSDL_strtoul() { _asm { jmp[SDL2.OrignalSDL_strtoul] } }
__declspec(naked) void FakeSDL_strtoull() { _asm { jmp[SDL2.OrignalSDL_strtoull] } }
__declspec(naked) void FakeSDL_strupr() { _asm { jmp[SDL2.OrignalSDL_strupr] } }
__declspec(naked) void FakeSDL_tan() { _asm { jmp[SDL2.OrignalSDL_tan] } }
__declspec(naked) void FakeSDL_tanf() { _asm { jmp[SDL2.OrignalSDL_tanf] } }
__declspec(naked) void FakeSDL_tolower() { _asm { jmp[SDL2.OrignalSDL_tolower] } }
__declspec(naked) void FakeSDL_toupper() { _asm { jmp[SDL2.OrignalSDL_toupper] } }
__declspec(naked) void FakeSDL_uitoa() { _asm { jmp[SDL2.OrignalSDL_uitoa] } }
__declspec(naked) void FakeSDL_ulltoa() { _asm { jmp[SDL2.OrignalSDL_ulltoa] } }
__declspec(naked) void FakeSDL_ultoa() { _asm { jmp[SDL2.OrignalSDL_ultoa] } }
__declspec(naked) void FakeSDL_utf8strlcpy() { _asm { jmp[SDL2.OrignalSDL_utf8strlcpy] } }
__declspec(naked) void FakeSDL_utf8strlen() { _asm { jmp[SDL2.OrignalSDL_utf8strlen] } }
__declspec(naked) void FakeSDL_vsnprintf() { _asm { jmp[SDL2.OrignalSDL_vsnprintf] } }
__declspec(naked) void FakeSDL_vsscanf() { _asm { jmp[SDL2.OrignalSDL_vsscanf] } }
__declspec(naked) void FakeSDL_wcscmp() { _asm { jmp[SDL2.OrignalSDL_wcscmp] } }
__declspec(naked) void FakeSDL_wcsdup() { _asm { jmp[SDL2.OrignalSDL_wcsdup] } }
__declspec(naked) void FakeSDL_wcslcat() { _asm { jmp[SDL2.OrignalSDL_wcslcat] } }
__declspec(naked) void FakeSDL_wcslcpy() { _asm { jmp[SDL2.OrignalSDL_wcslcpy] } }
__declspec(naked) void FakeSDL_wcslen() { _asm { jmp[SDL2.OrignalSDL_wcslen] } }

static void install_hook();

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	{
		SDL2.dll = LoadLibraryA("SDL2_orig.dll");
		if (!SDL2.dll)
		{
			MessageBoxA(0, "Cannot load original SDL2.dll library from SDL2_orig.dll", "Proxy", MB_ICONERROR);
			ExitProcess(0);
		}
		SDL2.OrignalSDL_AddEventWatch = GetProcAddress(SDL2.dll, "SDL_AddEventWatch");
		SDL2.OrignalSDL_AddHintCallback = GetProcAddress(SDL2.dll, "SDL_AddHintCallback");
		SDL2.OrignalSDL_AddTimer = GetProcAddress(SDL2.dll, "SDL_AddTimer");
		SDL2.OrignalSDL_AllocFormat = GetProcAddress(SDL2.dll, "SDL_AllocFormat");
		SDL2.OrignalSDL_AllocPalette = GetProcAddress(SDL2.dll, "SDL_AllocPalette");
		SDL2.OrignalSDL_AllocRW = GetProcAddress(SDL2.dll, "SDL_AllocRW");
		SDL2.OrignalSDL_AtomicAdd = GetProcAddress(SDL2.dll, "SDL_AtomicAdd");
		SDL2.OrignalSDL_AtomicCAS = GetProcAddress(SDL2.dll, "SDL_AtomicCAS");
		SDL2.OrignalSDL_AtomicCASPtr = GetProcAddress(SDL2.dll, "SDL_AtomicCASPtr");
		SDL2.OrignalSDL_AtomicGet = GetProcAddress(SDL2.dll, "SDL_AtomicGet");
		SDL2.OrignalSDL_AtomicGetPtr = GetProcAddress(SDL2.dll, "SDL_AtomicGetPtr");
		SDL2.OrignalSDL_AtomicLock = GetProcAddress(SDL2.dll, "SDL_AtomicLock");
		SDL2.OrignalSDL_AtomicSet = GetProcAddress(SDL2.dll, "SDL_AtomicSet");
		SDL2.OrignalSDL_AtomicSetPtr = GetProcAddress(SDL2.dll, "SDL_AtomicSetPtr");
		SDL2.OrignalSDL_AtomicTryLock = GetProcAddress(SDL2.dll, "SDL_AtomicTryLock");
		SDL2.OrignalSDL_AtomicUnlock = GetProcAddress(SDL2.dll, "SDL_AtomicUnlock");
		SDL2.OrignalSDL_AudioInit = GetProcAddress(SDL2.dll, "SDL_AudioInit");
		SDL2.OrignalSDL_AudioQuit = GetProcAddress(SDL2.dll, "SDL_AudioQuit");
		SDL2.OrignalSDL_AudioStreamAvailable = GetProcAddress(SDL2.dll, "SDL_AudioStreamAvailable");
		SDL2.OrignalSDL_AudioStreamClear = GetProcAddress(SDL2.dll, "SDL_AudioStreamClear");
		SDL2.OrignalSDL_AudioStreamFlush = GetProcAddress(SDL2.dll, "SDL_AudioStreamFlush");
		SDL2.OrignalSDL_AudioStreamGet = GetProcAddress(SDL2.dll, "SDL_AudioStreamGet");
		SDL2.OrignalSDL_AudioStreamPut = GetProcAddress(SDL2.dll, "SDL_AudioStreamPut");
		SDL2.OrignalSDL_BuildAudioCVT = GetProcAddress(SDL2.dll, "SDL_BuildAudioCVT");
		SDL2.OrignalSDL_CalculateGammaRamp = GetProcAddress(SDL2.dll, "SDL_CalculateGammaRamp");
		SDL2.OrignalSDL_CaptureMouse = GetProcAddress(SDL2.dll, "SDL_CaptureMouse");
		SDL2.OrignalSDL_ClearError = GetProcAddress(SDL2.dll, "SDL_ClearError");
		SDL2.OrignalSDL_ClearHints = GetProcAddress(SDL2.dll, "SDL_ClearHints");
		SDL2.OrignalSDL_ClearQueuedAudio = GetProcAddress(SDL2.dll, "SDL_ClearQueuedAudio");
		SDL2.OrignalSDL_CloseAudio = GetProcAddress(SDL2.dll, "SDL_CloseAudio");
		SDL2.OrignalSDL_CloseAudioDevice = GetProcAddress(SDL2.dll, "SDL_CloseAudioDevice");
		SDL2.OrignalSDL_ComposeCustomBlendMode = GetProcAddress(SDL2.dll, "SDL_ComposeCustomBlendMode");
		SDL2.OrignalSDL_CondBroadcast = GetProcAddress(SDL2.dll, "SDL_CondBroadcast");
		SDL2.OrignalSDL_CondSignal = GetProcAddress(SDL2.dll, "SDL_CondSignal");
		SDL2.OrignalSDL_CondWait = GetProcAddress(SDL2.dll, "SDL_CondWait");
		SDL2.OrignalSDL_CondWaitTimeout = GetProcAddress(SDL2.dll, "SDL_CondWaitTimeout");
		SDL2.OrignalSDL_ConvertAudio = GetProcAddress(SDL2.dll, "SDL_ConvertAudio");
		SDL2.OrignalSDL_ConvertPixels = GetProcAddress(SDL2.dll, "SDL_ConvertPixels");
		SDL2.OrignalSDL_ConvertSurface = GetProcAddress(SDL2.dll, "SDL_ConvertSurface");
		SDL2.OrignalSDL_ConvertSurfaceFormat = GetProcAddress(SDL2.dll, "SDL_ConvertSurfaceFormat");
		SDL2.OrignalSDL_CreateColorCursor = GetProcAddress(SDL2.dll, "SDL_CreateColorCursor");
		SDL2.OrignalSDL_CreateCond = GetProcAddress(SDL2.dll, "SDL_CreateCond");
		SDL2.OrignalSDL_CreateCursor = GetProcAddress(SDL2.dll, "SDL_CreateCursor");
		SDL2.OrignalSDL_CreateMutex = GetProcAddress(SDL2.dll, "SDL_CreateMutex");
		SDL2.OrignalSDL_CreateRGBSurface = GetProcAddress(SDL2.dll, "SDL_CreateRGBSurface");
		SDL2.OrignalSDL_CreateRGBSurfaceFrom = GetProcAddress(SDL2.dll, "SDL_CreateRGBSurfaceFrom");
		SDL2.OrignalSDL_CreateRGBSurfaceWithFormat = GetProcAddress(SDL2.dll, "SDL_CreateRGBSurfaceWithFormat");
		SDL2.OrignalSDL_CreateRGBSurfaceWithFormatFrom = GetProcAddress(SDL2.dll, "SDL_CreateRGBSurfaceWithFormatFrom");
		SDL2.OrignalSDL_CreateRenderer = GetProcAddress(SDL2.dll, "SDL_CreateRenderer");
		SDL2.OrignalSDL_CreateSemaphore = GetProcAddress(SDL2.dll, "SDL_CreateSemaphore");
		SDL2.OrignalSDL_CreateShapedWindow = GetProcAddress(SDL2.dll, "SDL_CreateShapedWindow");
		SDL2.OrignalSDL_CreateSoftwareRenderer = GetProcAddress(SDL2.dll, "SDL_CreateSoftwareRenderer");
		SDL2.OrignalSDL_CreateSystemCursor = GetProcAddress(SDL2.dll, "SDL_CreateSystemCursor");
		SDL2.OrignalSDL_CreateTexture = GetProcAddress(SDL2.dll, "SDL_CreateTexture");
		SDL2.OrignalSDL_CreateTextureFromSurface = GetProcAddress(SDL2.dll, "SDL_CreateTextureFromSurface");
		SDL2.OrignalSDL_CreateThread = GetProcAddress(SDL2.dll, "SDL_CreateThread");
		SDL2.OrignalSDL_CreateThreadWithStackSize = GetProcAddress(SDL2.dll, "SDL_CreateThreadWithStackSize");
		SDL2.OrignalSDL_CreateWindow = GetProcAddress(SDL2.dll, "SDL_CreateWindow");
		SDL2.OrignalSDL_CreateWindowAndRenderer = GetProcAddress(SDL2.dll, "SDL_CreateWindowAndRenderer");
		SDL2.OrignalSDL_CreateWindowFrom = GetProcAddress(SDL2.dll, "SDL_CreateWindowFrom");
		SDL2.OrignalSDL_DXGIGetOutputInfo = GetProcAddress(SDL2.dll, "SDL_DXGIGetOutputInfo");
		SDL2.OrignalSDL_DYNAPI_entry = GetProcAddress(SDL2.dll, "SDL_DYNAPI_entry");
		SDL2.OrignalSDL_DelEventWatch = GetProcAddress(SDL2.dll, "SDL_DelEventWatch");
		SDL2.OrignalSDL_DelHintCallback = GetProcAddress(SDL2.dll, "SDL_DelHintCallback");
		SDL2.OrignalSDL_Delay = GetProcAddress(SDL2.dll, "SDL_Delay");
		SDL2.OrignalSDL_DequeueAudio = GetProcAddress(SDL2.dll, "SDL_DequeueAudio");
		SDL2.OrignalSDL_DestroyCond = GetProcAddress(SDL2.dll, "SDL_DestroyCond");
		SDL2.OrignalSDL_DestroyMutex = GetProcAddress(SDL2.dll, "SDL_DestroyMutex");
		SDL2.OrignalSDL_DestroyRenderer = GetProcAddress(SDL2.dll, "SDL_DestroyRenderer");
		SDL2.OrignalSDL_DestroySemaphore = GetProcAddress(SDL2.dll, "SDL_DestroySemaphore");
		SDL2.OrignalSDL_DestroyTexture = GetProcAddress(SDL2.dll, "SDL_DestroyTexture");
		SDL2.OrignalSDL_DestroyWindow = GetProcAddress(SDL2.dll, "SDL_DestroyWindow");
		SDL2.OrignalSDL_DetachThread = GetProcAddress(SDL2.dll, "SDL_DetachThread");
		SDL2.OrignalSDL_Direct3D9GetAdapterIndex = GetProcAddress(SDL2.dll, "SDL_Direct3D9GetAdapterIndex");
		SDL2.OrignalSDL_DisableScreenSaver = GetProcAddress(SDL2.dll, "SDL_DisableScreenSaver");
		SDL2.OrignalSDL_DuplicateSurface = GetProcAddress(SDL2.dll, "SDL_DuplicateSurface");
		SDL2.OrignalSDL_EnableScreenSaver = GetProcAddress(SDL2.dll, "SDL_EnableScreenSaver");
		SDL2.OrignalSDL_EnclosePoints = GetProcAddress(SDL2.dll, "SDL_EnclosePoints");
		SDL2.OrignalSDL_Error = GetProcAddress(SDL2.dll, "SDL_Error");
		SDL2.OrignalSDL_EventState = GetProcAddress(SDL2.dll, "SDL_EventState");
		SDL2.OrignalSDL_FillRect = GetProcAddress(SDL2.dll, "SDL_FillRect");
		SDL2.OrignalSDL_FillRects = GetProcAddress(SDL2.dll, "SDL_FillRects");
		SDL2.OrignalSDL_FilterEvents = GetProcAddress(SDL2.dll, "SDL_FilterEvents");
		SDL2.OrignalSDL_FlushEvent = GetProcAddress(SDL2.dll, "SDL_FlushEvent");
		SDL2.OrignalSDL_FlushEvents = GetProcAddress(SDL2.dll, "SDL_FlushEvents");
		SDL2.OrignalSDL_FreeAudioStream = GetProcAddress(SDL2.dll, "SDL_FreeAudioStream");
		SDL2.OrignalSDL_FreeCursor = GetProcAddress(SDL2.dll, "SDL_FreeCursor");
		SDL2.OrignalSDL_FreeFormat = GetProcAddress(SDL2.dll, "SDL_FreeFormat");
		SDL2.OrignalSDL_FreePalette = GetProcAddress(SDL2.dll, "SDL_FreePalette");
		SDL2.OrignalSDL_FreeRW = GetProcAddress(SDL2.dll, "SDL_FreeRW");
		SDL2.OrignalSDL_FreeSurface = GetProcAddress(SDL2.dll, "SDL_FreeSurface");
		SDL2.OrignalSDL_FreeWAV = GetProcAddress(SDL2.dll, "SDL_FreeWAV");
		SDL2.OrignalSDL_GL_BindTexture = GetProcAddress(SDL2.dll, "SDL_GL_BindTexture");
		SDL2.OrignalSDL_GL_CreateContext = GetProcAddress(SDL2.dll, "SDL_GL_CreateContext");
		SDL2.OrignalSDL_GL_DeleteContext = GetProcAddress(SDL2.dll, "SDL_GL_DeleteContext");
		SDL2.OrignalSDL_GL_ExtensionSupported = GetProcAddress(SDL2.dll, "SDL_GL_ExtensionSupported");
		SDL2.OrignalSDL_GL_GetAttribute = GetProcAddress(SDL2.dll, "SDL_GL_GetAttribute");
		SDL2.OrignalSDL_GL_GetCurrentContext = GetProcAddress(SDL2.dll, "SDL_GL_GetCurrentContext");
		SDL2.OrignalSDL_GL_GetCurrentWindow = GetProcAddress(SDL2.dll, "SDL_GL_GetCurrentWindow");
		SDL2.OrignalSDL_GL_GetDrawableSize = GetProcAddress(SDL2.dll, "SDL_GL_GetDrawableSize");
		SDL2.OrignalSDL_GL_GetProcAddress = GetProcAddress(SDL2.dll, "SDL_GL_GetProcAddress");
		SDL2.OrignalSDL_GL_GetSwapInterval = GetProcAddress(SDL2.dll, "SDL_GL_GetSwapInterval");
		SDL2.OrignalSDL_GL_LoadLibrary = GetProcAddress(SDL2.dll, "SDL_GL_LoadLibrary");
		SDL2.OrignalSDL_GL_MakeCurrent = GetProcAddress(SDL2.dll, "SDL_GL_MakeCurrent");
		SDL2.OrignalSDL_GL_ResetAttributes = GetProcAddress(SDL2.dll, "SDL_GL_ResetAttributes");
		SDL2.OrignalSDL_GL_SetAttribute = GetProcAddress(SDL2.dll, "SDL_GL_SetAttribute");
		SDL2.OrignalSDL_GL_SetSwapInterval = GetProcAddress(SDL2.dll, "SDL_GL_SetSwapInterval");
		SDL2.OrignalSDL_GL_SwapWindow = GetProcAddress(SDL2.dll, "SDL_GL_SwapWindow");
		SDL2.OrignalSDL_GL_UnbindTexture = GetProcAddress(SDL2.dll, "SDL_GL_UnbindTexture");
		SDL2.OrignalSDL_GL_UnloadLibrary = GetProcAddress(SDL2.dll, "SDL_GL_UnloadLibrary");
		SDL2.OrignalSDL_GameControllerAddMapping = GetProcAddress(SDL2.dll, "SDL_GameControllerAddMapping");
		SDL2.OrignalSDL_GameControllerAddMappingsFromRW = GetProcAddress(SDL2.dll, "SDL_GameControllerAddMappingsFromRW");
		SDL2.OrignalSDL_GameControllerClose = GetProcAddress(SDL2.dll, "SDL_GameControllerClose");
		SDL2.OrignalSDL_GameControllerEventState = GetProcAddress(SDL2.dll, "SDL_GameControllerEventState");
		SDL2.OrignalSDL_GameControllerFromInstanceID = GetProcAddress(SDL2.dll, "SDL_GameControllerFromInstanceID");
		SDL2.OrignalSDL_GameControllerGetAttached = GetProcAddress(SDL2.dll, "SDL_GameControllerGetAttached");
		SDL2.OrignalSDL_GameControllerGetAxis = GetProcAddress(SDL2.dll, "SDL_GameControllerGetAxis");
		SDL2.OrignalSDL_GameControllerGetAxisFromString = GetProcAddress(SDL2.dll, "SDL_GameControllerGetAxisFromString");
		SDL2.OrignalSDL_GameControllerGetBindForAxis = GetProcAddress(SDL2.dll, "SDL_GameControllerGetBindForAxis");
		SDL2.OrignalSDL_GameControllerGetBindForButton = GetProcAddress(SDL2.dll, "SDL_GameControllerGetBindForButton");
		SDL2.OrignalSDL_GameControllerGetButton = GetProcAddress(SDL2.dll, "SDL_GameControllerGetButton");
		SDL2.OrignalSDL_GameControllerGetButtonFromString = GetProcAddress(SDL2.dll, "SDL_GameControllerGetButtonFromString");
		SDL2.OrignalSDL_GameControllerGetJoystick = GetProcAddress(SDL2.dll, "SDL_GameControllerGetJoystick");
		SDL2.OrignalSDL_GameControllerGetPlayerIndex = GetProcAddress(SDL2.dll, "SDL_GameControllerGetPlayerIndex");
		SDL2.OrignalSDL_GameControllerGetProduct = GetProcAddress(SDL2.dll, "SDL_GameControllerGetProduct");
		SDL2.OrignalSDL_GameControllerGetProductVersion = GetProcAddress(SDL2.dll, "SDL_GameControllerGetProductVersion");
		SDL2.OrignalSDL_GameControllerGetStringForAxis = GetProcAddress(SDL2.dll, "SDL_GameControllerGetStringForAxis");
		SDL2.OrignalSDL_GameControllerGetStringForButton = GetProcAddress(SDL2.dll, "SDL_GameControllerGetStringForButton");
		SDL2.OrignalSDL_GameControllerGetVendor = GetProcAddress(SDL2.dll, "SDL_GameControllerGetVendor");
		SDL2.OrignalSDL_GameControllerMapping = GetProcAddress(SDL2.dll, "SDL_GameControllerMapping");
		SDL2.OrignalSDL_GameControllerMappingForDeviceIndex = GetProcAddress(SDL2.dll, "SDL_GameControllerMappingForDeviceIndex");
		SDL2.OrignalSDL_GameControllerMappingForGUID = GetProcAddress(SDL2.dll, "SDL_GameControllerMappingForGUID");
		SDL2.OrignalSDL_GameControllerMappingForIndex = GetProcAddress(SDL2.dll, "SDL_GameControllerMappingForIndex");
		SDL2.OrignalSDL_GameControllerName = GetProcAddress(SDL2.dll, "SDL_GameControllerName");
		SDL2.OrignalSDL_GameControllerNameForIndex = GetProcAddress(SDL2.dll, "SDL_GameControllerNameForIndex");
		SDL2.OrignalSDL_GameControllerNumMappings = GetProcAddress(SDL2.dll, "SDL_GameControllerNumMappings");
		SDL2.OrignalSDL_GameControllerOpen = GetProcAddress(SDL2.dll, "SDL_GameControllerOpen");
		SDL2.OrignalSDL_GameControllerRumble = GetProcAddress(SDL2.dll, "SDL_GameControllerRumble");
		SDL2.OrignalSDL_GameControllerUpdate = GetProcAddress(SDL2.dll, "SDL_GameControllerUpdate");
		SDL2.OrignalSDL_GetAssertionHandler = GetProcAddress(SDL2.dll, "SDL_GetAssertionHandler");
		SDL2.OrignalSDL_GetAssertionReport = GetProcAddress(SDL2.dll, "SDL_GetAssertionReport");
		SDL2.OrignalSDL_GetAudioDeviceName = GetProcAddress(SDL2.dll, "SDL_GetAudioDeviceName");
		SDL2.OrignalSDL_GetAudioDeviceStatus = GetProcAddress(SDL2.dll, "SDL_GetAudioDeviceStatus");
		SDL2.OrignalSDL_GetAudioDriver = GetProcAddress(SDL2.dll, "SDL_GetAudioDriver");
		SDL2.OrignalSDL_GetAudioStatus = GetProcAddress(SDL2.dll, "SDL_GetAudioStatus");
		SDL2.OrignalSDL_GetBasePath = GetProcAddress(SDL2.dll, "SDL_GetBasePath");
		SDL2.OrignalSDL_GetCPUCacheLineSize = GetProcAddress(SDL2.dll, "SDL_GetCPUCacheLineSize");
		SDL2.OrignalSDL_GetCPUCount = GetProcAddress(SDL2.dll, "SDL_GetCPUCount");
		SDL2.OrignalSDL_GetClipRect = GetProcAddress(SDL2.dll, "SDL_GetClipRect");
		SDL2.OrignalSDL_GetClipboardText = GetProcAddress(SDL2.dll, "SDL_GetClipboardText");
		SDL2.OrignalSDL_GetClosestDisplayMode = GetProcAddress(SDL2.dll, "SDL_GetClosestDisplayMode");
		SDL2.OrignalSDL_GetColorKey = GetProcAddress(SDL2.dll, "SDL_GetColorKey");
		SDL2.OrignalSDL_GetCurrentAudioDriver = GetProcAddress(SDL2.dll, "SDL_GetCurrentAudioDriver");
		SDL2.OrignalSDL_GetCurrentDisplayMode = GetProcAddress(SDL2.dll, "SDL_GetCurrentDisplayMode");
		SDL2.OrignalSDL_GetCurrentVideoDriver = GetProcAddress(SDL2.dll, "SDL_GetCurrentVideoDriver");
		SDL2.OrignalSDL_GetCursor = GetProcAddress(SDL2.dll, "SDL_GetCursor");
		SDL2.OrignalSDL_GetDefaultAssertionHandler = GetProcAddress(SDL2.dll, "SDL_GetDefaultAssertionHandler");
		SDL2.OrignalSDL_GetDefaultCursor = GetProcAddress(SDL2.dll, "SDL_GetDefaultCursor");
		SDL2.OrignalSDL_GetDesktopDisplayMode = GetProcAddress(SDL2.dll, "SDL_GetDesktopDisplayMode");
		SDL2.OrignalSDL_GetDisplayBounds = GetProcAddress(SDL2.dll, "SDL_GetDisplayBounds");
		SDL2.OrignalSDL_GetDisplayDPI = GetProcAddress(SDL2.dll, "SDL_GetDisplayDPI");
		SDL2.OrignalSDL_GetDisplayMode = GetProcAddress(SDL2.dll, "SDL_GetDisplayMode");
		SDL2.OrignalSDL_GetDisplayName = GetProcAddress(SDL2.dll, "SDL_GetDisplayName");
		SDL2.OrignalSDL_GetDisplayOrientation = GetProcAddress(SDL2.dll, "SDL_GetDisplayOrientation");
		SDL2.OrignalSDL_GetDisplayUsableBounds = GetProcAddress(SDL2.dll, "SDL_GetDisplayUsableBounds");
		SDL2.OrignalSDL_GetError = GetProcAddress(SDL2.dll, "SDL_GetError");
		SDL2.OrignalSDL_GetEventFilter = GetProcAddress(SDL2.dll, "SDL_GetEventFilter");
		SDL2.OrignalSDL_GetGlobalMouseState = GetProcAddress(SDL2.dll, "SDL_GetGlobalMouseState");
		SDL2.OrignalSDL_GetGrabbedWindow = GetProcAddress(SDL2.dll, "SDL_GetGrabbedWindow");
		SDL2.OrignalSDL_GetHint = GetProcAddress(SDL2.dll, "SDL_GetHint");
		SDL2.OrignalSDL_GetHintBoolean = GetProcAddress(SDL2.dll, "SDL_GetHintBoolean");
		SDL2.OrignalSDL_GetKeyFromName = GetProcAddress(SDL2.dll, "SDL_GetKeyFromName");
		SDL2.OrignalSDL_GetKeyFromScancode = GetProcAddress(SDL2.dll, "SDL_GetKeyFromScancode");
		SDL2.OrignalSDL_GetKeyName = GetProcAddress(SDL2.dll, "SDL_GetKeyName");
		SDL2.OrignalSDL_GetKeyboardFocus = GetProcAddress(SDL2.dll, "SDL_GetKeyboardFocus");
		SDL2.OrignalSDL_GetKeyboardState = GetProcAddress(SDL2.dll, "SDL_GetKeyboardState");
		SDL2.OrignalSDL_GetMemoryFunctions = GetProcAddress(SDL2.dll, "SDL_GetMemoryFunctions");
		SDL2.OrignalSDL_GetModState = GetProcAddress(SDL2.dll, "SDL_GetModState");
		SDL2.OrignalSDL_GetMouseFocus = GetProcAddress(SDL2.dll, "SDL_GetMouseFocus");
		SDL2.OrignalSDL_GetMouseState = GetProcAddress(SDL2.dll, "SDL_GetMouseState");
		SDL2.OrignalSDL_GetNumAllocations = GetProcAddress(SDL2.dll, "SDL_GetNumAllocations");
		SDL2.OrignalSDL_GetNumAudioDevices = GetProcAddress(SDL2.dll, "SDL_GetNumAudioDevices");
		SDL2.OrignalSDL_GetNumAudioDrivers = GetProcAddress(SDL2.dll, "SDL_GetNumAudioDrivers");
		SDL2.OrignalSDL_GetNumDisplayModes = GetProcAddress(SDL2.dll, "SDL_GetNumDisplayModes");
		SDL2.OrignalSDL_GetNumRenderDrivers = GetProcAddress(SDL2.dll, "SDL_GetNumRenderDrivers");
		SDL2.OrignalSDL_GetNumTouchDevices = GetProcAddress(SDL2.dll, "SDL_GetNumTouchDevices");
		SDL2.OrignalSDL_GetNumTouchFingers = GetProcAddress(SDL2.dll, "SDL_GetNumTouchFingers");
		SDL2.OrignalSDL_GetNumVideoDisplays = GetProcAddress(SDL2.dll, "SDL_GetNumVideoDisplays");
		SDL2.OrignalSDL_GetNumVideoDrivers = GetProcAddress(SDL2.dll, "SDL_GetNumVideoDrivers");
		SDL2.OrignalSDL_GetPerformanceCounter = GetProcAddress(SDL2.dll, "SDL_GetPerformanceCounter");
		SDL2.OrignalSDL_GetPerformanceFrequency = GetProcAddress(SDL2.dll, "SDL_GetPerformanceFrequency");
		SDL2.OrignalSDL_GetPixelFormatName = GetProcAddress(SDL2.dll, "SDL_GetPixelFormatName");
		SDL2.OrignalSDL_GetPlatform = GetProcAddress(SDL2.dll, "SDL_GetPlatform");
		SDL2.OrignalSDL_GetPowerInfo = GetProcAddress(SDL2.dll, "SDL_GetPowerInfo");
		SDL2.OrignalSDL_GetPrefPath = GetProcAddress(SDL2.dll, "SDL_GetPrefPath");
		SDL2.OrignalSDL_GetQueuedAudioSize = GetProcAddress(SDL2.dll, "SDL_GetQueuedAudioSize");
		SDL2.OrignalSDL_GetRGB = GetProcAddress(SDL2.dll, "SDL_GetRGB");
		SDL2.OrignalSDL_GetRGBA = GetProcAddress(SDL2.dll, "SDL_GetRGBA");
		SDL2.OrignalSDL_GetRelativeMouseMode = GetProcAddress(SDL2.dll, "SDL_GetRelativeMouseMode");
		SDL2.OrignalSDL_GetRelativeMouseState = GetProcAddress(SDL2.dll, "SDL_GetRelativeMouseState");
		SDL2.OrignalSDL_GetRenderDrawBlendMode = GetProcAddress(SDL2.dll, "SDL_GetRenderDrawBlendMode");
		SDL2.OrignalSDL_GetRenderDrawColor = GetProcAddress(SDL2.dll, "SDL_GetRenderDrawColor");
		SDL2.OrignalSDL_GetRenderDriverInfo = GetProcAddress(SDL2.dll, "SDL_GetRenderDriverInfo");
		SDL2.OrignalSDL_GetRenderTarget = GetProcAddress(SDL2.dll, "SDL_GetRenderTarget");
		SDL2.OrignalSDL_GetRenderer = GetProcAddress(SDL2.dll, "SDL_GetRenderer");
		SDL2.OrignalSDL_GetRendererInfo = GetProcAddress(SDL2.dll, "SDL_GetRendererInfo");
		SDL2.OrignalSDL_GetRendererOutputSize = GetProcAddress(SDL2.dll, "SDL_GetRendererOutputSize");
		SDL2.OrignalSDL_GetRevision = GetProcAddress(SDL2.dll, "SDL_GetRevision");
		SDL2.OrignalSDL_GetRevisionNumber = GetProcAddress(SDL2.dll, "SDL_GetRevisionNumber");
		SDL2.OrignalSDL_GetScancodeFromKey = GetProcAddress(SDL2.dll, "SDL_GetScancodeFromKey");
		SDL2.OrignalSDL_GetScancodeFromName = GetProcAddress(SDL2.dll, "SDL_GetScancodeFromName");
		SDL2.OrignalSDL_GetScancodeName = GetProcAddress(SDL2.dll, "SDL_GetScancodeName");
		SDL2.OrignalSDL_GetShapedWindowMode = GetProcAddress(SDL2.dll, "SDL_GetShapedWindowMode");
		SDL2.OrignalSDL_GetSurfaceAlphaMod = GetProcAddress(SDL2.dll, "SDL_GetSurfaceAlphaMod");
		SDL2.OrignalSDL_GetSurfaceBlendMode = GetProcAddress(SDL2.dll, "SDL_GetSurfaceBlendMode");
		SDL2.OrignalSDL_GetSurfaceColorMod = GetProcAddress(SDL2.dll, "SDL_GetSurfaceColorMod");
		SDL2.OrignalSDL_GetSystemRAM = GetProcAddress(SDL2.dll, "SDL_GetSystemRAM");
		SDL2.OrignalSDL_GetTextureAlphaMod = GetProcAddress(SDL2.dll, "SDL_GetTextureAlphaMod");
		SDL2.OrignalSDL_GetTextureBlendMode = GetProcAddress(SDL2.dll, "SDL_GetTextureBlendMode");
		SDL2.OrignalSDL_GetTextureColorMod = GetProcAddress(SDL2.dll, "SDL_GetTextureColorMod");
		SDL2.OrignalSDL_GetThreadID = GetProcAddress(SDL2.dll, "SDL_GetThreadID");
		SDL2.OrignalSDL_GetThreadName = GetProcAddress(SDL2.dll, "SDL_GetThreadName");
		SDL2.OrignalSDL_GetTicks = GetProcAddress(SDL2.dll, "SDL_GetTicks");
		SDL2.OrignalSDL_GetTouchDevice = GetProcAddress(SDL2.dll, "SDL_GetTouchDevice");
		SDL2.OrignalSDL_GetTouchDeviceType = GetProcAddress(SDL2.dll, "SDL_GetTouchDeviceType");
		SDL2.OrignalSDL_GetTouchFinger = GetProcAddress(SDL2.dll, "SDL_GetTouchFinger");
		SDL2.OrignalSDL_GetVersion = GetProcAddress(SDL2.dll, "SDL_GetVersion");
		SDL2.OrignalSDL_GetVideoDriver = GetProcAddress(SDL2.dll, "SDL_GetVideoDriver");
		SDL2.OrignalSDL_GetWindowBordersSize = GetProcAddress(SDL2.dll, "SDL_GetWindowBordersSize");
		SDL2.OrignalSDL_GetWindowBrightness = GetProcAddress(SDL2.dll, "SDL_GetWindowBrightness");
		SDL2.OrignalSDL_GetWindowData = GetProcAddress(SDL2.dll, "SDL_GetWindowData");
		SDL2.OrignalSDL_GetWindowDisplayIndex = GetProcAddress(SDL2.dll, "SDL_GetWindowDisplayIndex");
		SDL2.OrignalSDL_GetWindowDisplayMode = GetProcAddress(SDL2.dll, "SDL_GetWindowDisplayMode");
		SDL2.OrignalSDL_GetWindowFlags = GetProcAddress(SDL2.dll, "SDL_GetWindowFlags");
		SDL2.OrignalSDL_GetWindowFromID = GetProcAddress(SDL2.dll, "SDL_GetWindowFromID");
		SDL2.OrignalSDL_GetWindowGammaRamp = GetProcAddress(SDL2.dll, "SDL_GetWindowGammaRamp");
		SDL2.OrignalSDL_GetWindowGrab = GetProcAddress(SDL2.dll, "SDL_GetWindowGrab");
		SDL2.OrignalSDL_GetWindowID = GetProcAddress(SDL2.dll, "SDL_GetWindowID");
		SDL2.OrignalSDL_GetWindowMaximumSize = GetProcAddress(SDL2.dll, "SDL_GetWindowMaximumSize");
		SDL2.OrignalSDL_GetWindowMinimumSize = GetProcAddress(SDL2.dll, "SDL_GetWindowMinimumSize");
		SDL2.OrignalSDL_GetWindowOpacity = GetProcAddress(SDL2.dll, "SDL_GetWindowOpacity");
		SDL2.OrignalSDL_GetWindowPixelFormat = GetProcAddress(SDL2.dll, "SDL_GetWindowPixelFormat");
		SDL2.OrignalSDL_GetWindowPosition = GetProcAddress(SDL2.dll, "SDL_GetWindowPosition");
		SDL2.OrignalSDL_GetWindowSize = GetProcAddress(SDL2.dll, "SDL_GetWindowSize");
		SDL2.OrignalSDL_GetWindowSurface = GetProcAddress(SDL2.dll, "SDL_GetWindowSurface");
		SDL2.OrignalSDL_GetWindowTitle = GetProcAddress(SDL2.dll, "SDL_GetWindowTitle");
		SDL2.OrignalSDL_GetWindowWMInfo = GetProcAddress(SDL2.dll, "SDL_GetWindowWMInfo");
		SDL2.OrignalSDL_GetYUVConversionMode = GetProcAddress(SDL2.dll, "SDL_GetYUVConversionMode");
		SDL2.OrignalSDL_GetYUVConversionModeForResolution = GetProcAddress(SDL2.dll, "SDL_GetYUVConversionModeForResolution");
		SDL2.OrignalSDL_HapticClose = GetProcAddress(SDL2.dll, "SDL_HapticClose");
		SDL2.OrignalSDL_HapticDestroyEffect = GetProcAddress(SDL2.dll, "SDL_HapticDestroyEffect");
		SDL2.OrignalSDL_HapticEffectSupported = GetProcAddress(SDL2.dll, "SDL_HapticEffectSupported");
		SDL2.OrignalSDL_HapticGetEffectStatus = GetProcAddress(SDL2.dll, "SDL_HapticGetEffectStatus");
		SDL2.OrignalSDL_HapticIndex = GetProcAddress(SDL2.dll, "SDL_HapticIndex");
		SDL2.OrignalSDL_HapticName = GetProcAddress(SDL2.dll, "SDL_HapticName");
		SDL2.OrignalSDL_HapticNewEffect = GetProcAddress(SDL2.dll, "SDL_HapticNewEffect");
		SDL2.OrignalSDL_HapticNumAxes = GetProcAddress(SDL2.dll, "SDL_HapticNumAxes");
		SDL2.OrignalSDL_HapticNumEffects = GetProcAddress(SDL2.dll, "SDL_HapticNumEffects");
		SDL2.OrignalSDL_HapticNumEffectsPlaying = GetProcAddress(SDL2.dll, "SDL_HapticNumEffectsPlaying");
		SDL2.OrignalSDL_HapticOpen = GetProcAddress(SDL2.dll, "SDL_HapticOpen");
		SDL2.OrignalSDL_HapticOpenFromJoystick = GetProcAddress(SDL2.dll, "SDL_HapticOpenFromJoystick");
		SDL2.OrignalSDL_HapticOpenFromMouse = GetProcAddress(SDL2.dll, "SDL_HapticOpenFromMouse");
		SDL2.OrignalSDL_HapticOpened = GetProcAddress(SDL2.dll, "SDL_HapticOpened");
		SDL2.OrignalSDL_HapticPause = GetProcAddress(SDL2.dll, "SDL_HapticPause");
		SDL2.OrignalSDL_HapticQuery = GetProcAddress(SDL2.dll, "SDL_HapticQuery");
		SDL2.OrignalSDL_HapticRumbleInit = GetProcAddress(SDL2.dll, "SDL_HapticRumbleInit");
		SDL2.OrignalSDL_HapticRumblePlay = GetProcAddress(SDL2.dll, "SDL_HapticRumblePlay");
		SDL2.OrignalSDL_HapticRumbleStop = GetProcAddress(SDL2.dll, "SDL_HapticRumbleStop");
		SDL2.OrignalSDL_HapticRumbleSupported = GetProcAddress(SDL2.dll, "SDL_HapticRumbleSupported");
		SDL2.OrignalSDL_HapticRunEffect = GetProcAddress(SDL2.dll, "SDL_HapticRunEffect");
		SDL2.OrignalSDL_HapticSetAutocenter = GetProcAddress(SDL2.dll, "SDL_HapticSetAutocenter");
		SDL2.OrignalSDL_HapticSetGain = GetProcAddress(SDL2.dll, "SDL_HapticSetGain");
		SDL2.OrignalSDL_HapticStopAll = GetProcAddress(SDL2.dll, "SDL_HapticStopAll");
		SDL2.OrignalSDL_HapticStopEffect = GetProcAddress(SDL2.dll, "SDL_HapticStopEffect");
		SDL2.OrignalSDL_HapticUnpause = GetProcAddress(SDL2.dll, "SDL_HapticUnpause");
		SDL2.OrignalSDL_HapticUpdateEffect = GetProcAddress(SDL2.dll, "SDL_HapticUpdateEffect");
		SDL2.OrignalSDL_Has3DNow = GetProcAddress(SDL2.dll, "SDL_Has3DNow");
		SDL2.OrignalSDL_HasAVX = GetProcAddress(SDL2.dll, "SDL_HasAVX");
		SDL2.OrignalSDL_HasAVX2 = GetProcAddress(SDL2.dll, "SDL_HasAVX2");
		SDL2.OrignalSDL_HasAVX512F = GetProcAddress(SDL2.dll, "SDL_HasAVX512F");
		SDL2.OrignalSDL_HasAltiVec = GetProcAddress(SDL2.dll, "SDL_HasAltiVec");
		SDL2.OrignalSDL_HasClipboardText = GetProcAddress(SDL2.dll, "SDL_HasClipboardText");
		SDL2.OrignalSDL_HasColorKey = GetProcAddress(SDL2.dll, "SDL_HasColorKey");
		SDL2.OrignalSDL_HasEvent = GetProcAddress(SDL2.dll, "SDL_HasEvent");
		SDL2.OrignalSDL_HasEvents = GetProcAddress(SDL2.dll, "SDL_HasEvents");
		SDL2.OrignalSDL_HasIntersection = GetProcAddress(SDL2.dll, "SDL_HasIntersection");
		SDL2.OrignalSDL_HasMMX = GetProcAddress(SDL2.dll, "SDL_HasMMX");
		SDL2.OrignalSDL_HasNEON = GetProcAddress(SDL2.dll, "SDL_HasNEON");
		SDL2.OrignalSDL_HasRDTSC = GetProcAddress(SDL2.dll, "SDL_HasRDTSC");
		SDL2.OrignalSDL_HasSSE = GetProcAddress(SDL2.dll, "SDL_HasSSE");
		SDL2.OrignalSDL_HasSSE2 = GetProcAddress(SDL2.dll, "SDL_HasSSE2");
		SDL2.OrignalSDL_HasSSE3 = GetProcAddress(SDL2.dll, "SDL_HasSSE3");
		SDL2.OrignalSDL_HasSSE41 = GetProcAddress(SDL2.dll, "SDL_HasSSE41");
		SDL2.OrignalSDL_HasSSE42 = GetProcAddress(SDL2.dll, "SDL_HasSSE42");
		SDL2.OrignalSDL_HasScreenKeyboardSupport = GetProcAddress(SDL2.dll, "SDL_HasScreenKeyboardSupport");
		SDL2.OrignalSDL_HideWindow = GetProcAddress(SDL2.dll, "SDL_HideWindow");
		SDL2.OrignalSDL_Init = GetProcAddress(SDL2.dll, "SDL_Init");
		SDL2.OrignalSDL_InitSubSystem = GetProcAddress(SDL2.dll, "SDL_InitSubSystem");
		SDL2.OrignalSDL_IntersectRect = GetProcAddress(SDL2.dll, "SDL_IntersectRect");
		SDL2.OrignalSDL_IntersectRectAndLine = GetProcAddress(SDL2.dll, "SDL_IntersectRectAndLine");
		SDL2.OrignalSDL_IsGameController = GetProcAddress(SDL2.dll, "SDL_IsGameController");
		SDL2.OrignalSDL_IsScreenKeyboardShown = GetProcAddress(SDL2.dll, "SDL_IsScreenKeyboardShown");
		SDL2.OrignalSDL_IsScreenSaverEnabled = GetProcAddress(SDL2.dll, "SDL_IsScreenSaverEnabled");
		SDL2.OrignalSDL_IsShapedWindow = GetProcAddress(SDL2.dll, "SDL_IsShapedWindow");
		SDL2.OrignalSDL_IsTablet = GetProcAddress(SDL2.dll, "SDL_IsTablet");
		SDL2.OrignalSDL_IsTextInputActive = GetProcAddress(SDL2.dll, "SDL_IsTextInputActive");
		SDL2.OrignalSDL_JoystickClose = GetProcAddress(SDL2.dll, "SDL_JoystickClose");
		SDL2.OrignalSDL_JoystickCurrentPowerLevel = GetProcAddress(SDL2.dll, "SDL_JoystickCurrentPowerLevel");
		SDL2.OrignalSDL_JoystickEventState = GetProcAddress(SDL2.dll, "SDL_JoystickEventState");
		SDL2.OrignalSDL_JoystickFromInstanceID = GetProcAddress(SDL2.dll, "SDL_JoystickFromInstanceID");
		SDL2.OrignalSDL_JoystickGetAttached = GetProcAddress(SDL2.dll, "SDL_JoystickGetAttached");
		SDL2.OrignalSDL_JoystickGetAxis = GetProcAddress(SDL2.dll, "SDL_JoystickGetAxis");
		SDL2.OrignalSDL_JoystickGetAxisInitialState = GetProcAddress(SDL2.dll, "SDL_JoystickGetAxisInitialState");
		SDL2.OrignalSDL_JoystickGetBall = GetProcAddress(SDL2.dll, "SDL_JoystickGetBall");
		SDL2.OrignalSDL_JoystickGetButton = GetProcAddress(SDL2.dll, "SDL_JoystickGetButton");
		SDL2.OrignalSDL_JoystickGetDeviceGUID = GetProcAddress(SDL2.dll, "SDL_JoystickGetDeviceGUID");
		SDL2.OrignalSDL_JoystickGetDeviceInstanceID = GetProcAddress(SDL2.dll, "SDL_JoystickGetDeviceInstanceID");
		SDL2.OrignalSDL_JoystickGetDevicePlayerIndex = GetProcAddress(SDL2.dll, "SDL_JoystickGetDevicePlayerIndex");
		SDL2.OrignalSDL_JoystickGetDeviceProduct = GetProcAddress(SDL2.dll, "SDL_JoystickGetDeviceProduct");
		SDL2.OrignalSDL_JoystickGetDeviceProductVersion = GetProcAddress(SDL2.dll, "SDL_JoystickGetDeviceProductVersion");
		SDL2.OrignalSDL_JoystickGetDeviceType = GetProcAddress(SDL2.dll, "SDL_JoystickGetDeviceType");
		SDL2.OrignalSDL_JoystickGetDeviceVendor = GetProcAddress(SDL2.dll, "SDL_JoystickGetDeviceVendor");
		SDL2.OrignalSDL_JoystickGetGUID = GetProcAddress(SDL2.dll, "SDL_JoystickGetGUID");
		SDL2.OrignalSDL_JoystickGetGUIDFromString = GetProcAddress(SDL2.dll, "SDL_JoystickGetGUIDFromString");
		SDL2.OrignalSDL_JoystickGetGUIDString = GetProcAddress(SDL2.dll, "SDL_JoystickGetGUIDString");
		SDL2.OrignalSDL_JoystickGetHat = GetProcAddress(SDL2.dll, "SDL_JoystickGetHat");
		SDL2.OrignalSDL_JoystickGetPlayerIndex = GetProcAddress(SDL2.dll, "SDL_JoystickGetPlayerIndex");
		SDL2.OrignalSDL_JoystickGetProduct = GetProcAddress(SDL2.dll, "SDL_JoystickGetProduct");
		SDL2.OrignalSDL_JoystickGetProductVersion = GetProcAddress(SDL2.dll, "SDL_JoystickGetProductVersion");
		SDL2.OrignalSDL_JoystickGetType = GetProcAddress(SDL2.dll, "SDL_JoystickGetType");
		SDL2.OrignalSDL_JoystickGetVendor = GetProcAddress(SDL2.dll, "SDL_JoystickGetVendor");
		SDL2.OrignalSDL_JoystickInstanceID = GetProcAddress(SDL2.dll, "SDL_JoystickInstanceID");
		SDL2.OrignalSDL_JoystickIsHaptic = GetProcAddress(SDL2.dll, "SDL_JoystickIsHaptic");
		SDL2.OrignalSDL_JoystickName = GetProcAddress(SDL2.dll, "SDL_JoystickName");
		SDL2.OrignalSDL_JoystickNameForIndex = GetProcAddress(SDL2.dll, "SDL_JoystickNameForIndex");
		SDL2.OrignalSDL_JoystickNumAxes = GetProcAddress(SDL2.dll, "SDL_JoystickNumAxes");
		SDL2.OrignalSDL_JoystickNumBalls = GetProcAddress(SDL2.dll, "SDL_JoystickNumBalls");
		SDL2.OrignalSDL_JoystickNumButtons = GetProcAddress(SDL2.dll, "SDL_JoystickNumButtons");
		SDL2.OrignalSDL_JoystickNumHats = GetProcAddress(SDL2.dll, "SDL_JoystickNumHats");
		SDL2.OrignalSDL_JoystickOpen = GetProcAddress(SDL2.dll, "SDL_JoystickOpen");
		SDL2.OrignalSDL_JoystickRumble = GetProcAddress(SDL2.dll, "SDL_JoystickRumble");
		SDL2.OrignalSDL_JoystickUpdate = GetProcAddress(SDL2.dll, "SDL_JoystickUpdate");
		SDL2.OrignalSDL_LoadBMP_RW = GetProcAddress(SDL2.dll, "SDL_LoadBMP_RW");
		SDL2.OrignalSDL_LoadDollarTemplates = GetProcAddress(SDL2.dll, "SDL_LoadDollarTemplates");
		SDL2.OrignalSDL_LoadFile = GetProcAddress(SDL2.dll, "SDL_LoadFile");
		SDL2.OrignalSDL_LoadFile_RW = GetProcAddress(SDL2.dll, "SDL_LoadFile_RW");
		SDL2.OrignalSDL_LoadFunction = GetProcAddress(SDL2.dll, "SDL_LoadFunction");
		SDL2.OrignalSDL_LoadObject = GetProcAddress(SDL2.dll, "SDL_LoadObject");
		SDL2.OrignalSDL_LoadWAV_RW = GetProcAddress(SDL2.dll, "SDL_LoadWAV_RW");
		SDL2.OrignalSDL_LockAudio = GetProcAddress(SDL2.dll, "SDL_LockAudio");
		SDL2.OrignalSDL_LockAudioDevice = GetProcAddress(SDL2.dll, "SDL_LockAudioDevice");
		SDL2.OrignalSDL_LockJoysticks = GetProcAddress(SDL2.dll, "SDL_LockJoysticks");
		SDL2.OrignalSDL_LockMutex = GetProcAddress(SDL2.dll, "SDL_LockMutex");
		SDL2.OrignalSDL_LockSurface = GetProcAddress(SDL2.dll, "SDL_LockSurface");
		SDL2.OrignalSDL_LockTexture = GetProcAddress(SDL2.dll, "SDL_LockTexture");
		SDL2.OrignalSDL_Log = GetProcAddress(SDL2.dll, "SDL_Log");
		SDL2.OrignalSDL_LogCritical = GetProcAddress(SDL2.dll, "SDL_LogCritical");
		SDL2.OrignalSDL_LogDebug = GetProcAddress(SDL2.dll, "SDL_LogDebug");
		SDL2.OrignalSDL_LogError = GetProcAddress(SDL2.dll, "SDL_LogError");
		SDL2.OrignalSDL_LogGetOutputFunction = GetProcAddress(SDL2.dll, "SDL_LogGetOutputFunction");
		SDL2.OrignalSDL_LogGetPriority = GetProcAddress(SDL2.dll, "SDL_LogGetPriority");
		SDL2.OrignalSDL_LogInfo = GetProcAddress(SDL2.dll, "SDL_LogInfo");
		SDL2.OrignalSDL_LogMessage = GetProcAddress(SDL2.dll, "SDL_LogMessage");
		SDL2.OrignalSDL_LogMessageV = GetProcAddress(SDL2.dll, "SDL_LogMessageV");
		SDL2.OrignalSDL_LogResetPriorities = GetProcAddress(SDL2.dll, "SDL_LogResetPriorities");
		SDL2.OrignalSDL_LogSetAllPriority = GetProcAddress(SDL2.dll, "SDL_LogSetAllPriority");
		SDL2.OrignalSDL_LogSetOutputFunction = GetProcAddress(SDL2.dll, "SDL_LogSetOutputFunction");
		SDL2.OrignalSDL_LogSetPriority = GetProcAddress(SDL2.dll, "SDL_LogSetPriority");
		SDL2.OrignalSDL_LogVerbose = GetProcAddress(SDL2.dll, "SDL_LogVerbose");
		SDL2.OrignalSDL_LogWarn = GetProcAddress(SDL2.dll, "SDL_LogWarn");
		SDL2.OrignalSDL_LowerBlit = GetProcAddress(SDL2.dll, "SDL_LowerBlit");
		SDL2.OrignalSDL_LowerBlitScaled = GetProcAddress(SDL2.dll, "SDL_LowerBlitScaled");
		SDL2.OrignalSDL_MapRGB = GetProcAddress(SDL2.dll, "SDL_MapRGB");
		SDL2.OrignalSDL_MapRGBA = GetProcAddress(SDL2.dll, "SDL_MapRGBA");
		SDL2.OrignalSDL_MasksToPixelFormatEnum = GetProcAddress(SDL2.dll, "SDL_MasksToPixelFormatEnum");
		SDL2.OrignalSDL_MaximizeWindow = GetProcAddress(SDL2.dll, "SDL_MaximizeWindow");
		SDL2.OrignalSDL_MemoryBarrierAcquireFunction = GetProcAddress(SDL2.dll, "SDL_MemoryBarrierAcquireFunction");
		SDL2.OrignalSDL_MemoryBarrierReleaseFunction = GetProcAddress(SDL2.dll, "SDL_MemoryBarrierReleaseFunction");
		SDL2.OrignalSDL_MinimizeWindow = GetProcAddress(SDL2.dll, "SDL_MinimizeWindow");
		SDL2.OrignalSDL_MixAudio = GetProcAddress(SDL2.dll, "SDL_MixAudio");
		SDL2.OrignalSDL_MixAudioFormat = GetProcAddress(SDL2.dll, "SDL_MixAudioFormat");
		SDL2.OrignalSDL_MouseIsHaptic = GetProcAddress(SDL2.dll, "SDL_MouseIsHaptic");
		SDL2.OrignalSDL_NewAudioStream = GetProcAddress(SDL2.dll, "SDL_NewAudioStream");
		SDL2.OrignalSDL_NumHaptics = GetProcAddress(SDL2.dll, "SDL_NumHaptics");
		SDL2.OrignalSDL_NumJoysticks = GetProcAddress(SDL2.dll, "SDL_NumJoysticks");
		SDL2.OrignalSDL_NumSensors = GetProcAddress(SDL2.dll, "SDL_NumSensors");
		SDL2.OrignalSDL_OpenAudio = GetProcAddress(SDL2.dll, "SDL_OpenAudio");
		SDL2.OrignalSDL_OpenAudioDevice = GetProcAddress(SDL2.dll, "SDL_OpenAudioDevice");
		SDL2.OrignalSDL_PauseAudio = GetProcAddress(SDL2.dll, "SDL_PauseAudio");
		SDL2.OrignalSDL_PauseAudioDevice = GetProcAddress(SDL2.dll, "SDL_PauseAudioDevice");
		SDL2.OrignalSDL_PeepEvents = GetProcAddress(SDL2.dll, "SDL_PeepEvents");
		SDL2.OrignalSDL_PixelFormatEnumToMasks = GetProcAddress(SDL2.dll, "SDL_PixelFormatEnumToMasks");
		SDL2.OrignalSDL_PollEvent = GetProcAddress(SDL2.dll, "SDL_PollEvent");
		SDL2.OrignalSDL_PumpEvents = GetProcAddress(SDL2.dll, "SDL_PumpEvents");
		SDL2.OrignalSDL_PushEvent = GetProcAddress(SDL2.dll, "SDL_PushEvent");
		SDL2.OrignalSDL_QueryTexture = GetProcAddress(SDL2.dll, "SDL_QueryTexture");
		SDL2.OrignalSDL_QueueAudio = GetProcAddress(SDL2.dll, "SDL_QueueAudio");
		SDL2.OrignalSDL_Quit = GetProcAddress(SDL2.dll, "SDL_Quit");
		SDL2.OrignalSDL_QuitSubSystem = GetProcAddress(SDL2.dll, "SDL_QuitSubSystem");
		SDL2.OrignalSDL_RWFromConstMem = GetProcAddress(SDL2.dll, "SDL_RWFromConstMem");
		SDL2.OrignalSDL_RWFromFP = GetProcAddress(SDL2.dll, "SDL_RWFromFP");
		SDL2.OrignalSDL_RWFromFile = GetProcAddress(SDL2.dll, "SDL_RWFromFile");
		SDL2.OrignalSDL_RWFromMem = GetProcAddress(SDL2.dll, "SDL_RWFromMem");
		SDL2.OrignalSDL_RWclose = GetProcAddress(SDL2.dll, "SDL_RWclose");
		SDL2.OrignalSDL_RWread = GetProcAddress(SDL2.dll, "SDL_RWread");
		SDL2.OrignalSDL_RWseek = GetProcAddress(SDL2.dll, "SDL_RWseek");
		SDL2.OrignalSDL_RWsize = GetProcAddress(SDL2.dll, "SDL_RWsize");
		SDL2.OrignalSDL_RWtell = GetProcAddress(SDL2.dll, "SDL_RWtell");
		SDL2.OrignalSDL_RWwrite = GetProcAddress(SDL2.dll, "SDL_RWwrite");
		SDL2.OrignalSDL_RaiseWindow = GetProcAddress(SDL2.dll, "SDL_RaiseWindow");
		SDL2.OrignalSDL_ReadBE16 = GetProcAddress(SDL2.dll, "SDL_ReadBE16");
		SDL2.OrignalSDL_ReadBE32 = GetProcAddress(SDL2.dll, "SDL_ReadBE32");
		SDL2.OrignalSDL_ReadBE64 = GetProcAddress(SDL2.dll, "SDL_ReadBE64");
		SDL2.OrignalSDL_ReadLE16 = GetProcAddress(SDL2.dll, "SDL_ReadLE16");
		SDL2.OrignalSDL_ReadLE32 = GetProcAddress(SDL2.dll, "SDL_ReadLE32");
		SDL2.OrignalSDL_ReadLE64 = GetProcAddress(SDL2.dll, "SDL_ReadLE64");
		SDL2.OrignalSDL_ReadU8 = GetProcAddress(SDL2.dll, "SDL_ReadU8");
		SDL2.OrignalSDL_RecordGesture = GetProcAddress(SDL2.dll, "SDL_RecordGesture");
		SDL2.OrignalSDL_RegisterApp = GetProcAddress(SDL2.dll, "SDL_RegisterApp");
		SDL2.OrignalSDL_RegisterEvents = GetProcAddress(SDL2.dll, "SDL_RegisterEvents");
		SDL2.OrignalSDL_RemoveTimer = GetProcAddress(SDL2.dll, "SDL_RemoveTimer");
		SDL2.OrignalSDL_RenderClear = GetProcAddress(SDL2.dll, "SDL_RenderClear");
		SDL2.OrignalSDL_RenderCopy = GetProcAddress(SDL2.dll, "SDL_RenderCopy");
		SDL2.OrignalSDL_RenderCopyEx = GetProcAddress(SDL2.dll, "SDL_RenderCopyEx");
		SDL2.OrignalSDL_RenderCopyExF = GetProcAddress(SDL2.dll, "SDL_RenderCopyExF");
		SDL2.OrignalSDL_RenderCopyF = GetProcAddress(SDL2.dll, "SDL_RenderCopyF");
		SDL2.OrignalSDL_RenderDrawLine = GetProcAddress(SDL2.dll, "SDL_RenderDrawLine");
		SDL2.OrignalSDL_RenderDrawLineF = GetProcAddress(SDL2.dll, "SDL_RenderDrawLineF");
		SDL2.OrignalSDL_RenderDrawLines = GetProcAddress(SDL2.dll, "SDL_RenderDrawLines");
		SDL2.OrignalSDL_RenderDrawLinesF = GetProcAddress(SDL2.dll, "SDL_RenderDrawLinesF");
		SDL2.OrignalSDL_RenderDrawPoint = GetProcAddress(SDL2.dll, "SDL_RenderDrawPoint");
		SDL2.OrignalSDL_RenderDrawPointF = GetProcAddress(SDL2.dll, "SDL_RenderDrawPointF");
		SDL2.OrignalSDL_RenderDrawPoints = GetProcAddress(SDL2.dll, "SDL_RenderDrawPoints");
		SDL2.OrignalSDL_RenderDrawPointsF = GetProcAddress(SDL2.dll, "SDL_RenderDrawPointsF");
		SDL2.OrignalSDL_RenderDrawRect = GetProcAddress(SDL2.dll, "SDL_RenderDrawRect");
		SDL2.OrignalSDL_RenderDrawRectF = GetProcAddress(SDL2.dll, "SDL_RenderDrawRectF");
		SDL2.OrignalSDL_RenderDrawRects = GetProcAddress(SDL2.dll, "SDL_RenderDrawRects");
		SDL2.OrignalSDL_RenderDrawRectsF = GetProcAddress(SDL2.dll, "SDL_RenderDrawRectsF");
		SDL2.OrignalSDL_RenderFillRect = GetProcAddress(SDL2.dll, "SDL_RenderFillRect");
		SDL2.OrignalSDL_RenderFillRectF = GetProcAddress(SDL2.dll, "SDL_RenderFillRectF");
		SDL2.OrignalSDL_RenderFillRects = GetProcAddress(SDL2.dll, "SDL_RenderFillRects");
		SDL2.OrignalSDL_RenderFillRectsF = GetProcAddress(SDL2.dll, "SDL_RenderFillRectsF");
		SDL2.OrignalSDL_RenderFlush = GetProcAddress(SDL2.dll, "SDL_RenderFlush");
		SDL2.OrignalSDL_RenderGetClipRect = GetProcAddress(SDL2.dll, "SDL_RenderGetClipRect");
		SDL2.OrignalSDL_RenderGetD3D9Device = GetProcAddress(SDL2.dll, "SDL_RenderGetD3D9Device");
		SDL2.OrignalSDL_RenderGetIntegerScale = GetProcAddress(SDL2.dll, "SDL_RenderGetIntegerScale");
		SDL2.OrignalSDL_RenderGetLogicalSize = GetProcAddress(SDL2.dll, "SDL_RenderGetLogicalSize");
		SDL2.OrignalSDL_RenderGetMetalCommandEncoder = GetProcAddress(SDL2.dll, "SDL_RenderGetMetalCommandEncoder");
		SDL2.OrignalSDL_RenderGetMetalLayer = GetProcAddress(SDL2.dll, "SDL_RenderGetMetalLayer");
		SDL2.OrignalSDL_RenderGetScale = GetProcAddress(SDL2.dll, "SDL_RenderGetScale");
		SDL2.OrignalSDL_RenderGetViewport = GetProcAddress(SDL2.dll, "SDL_RenderGetViewport");
		SDL2.OrignalSDL_RenderIsClipEnabled = GetProcAddress(SDL2.dll, "SDL_RenderIsClipEnabled");
		SDL2.OrignalSDL_RenderPresent = GetProcAddress(SDL2.dll, "SDL_RenderPresent");
		SDL2.OrignalSDL_RenderReadPixels = GetProcAddress(SDL2.dll, "SDL_RenderReadPixels");
		SDL2.OrignalSDL_RenderSetClipRect = GetProcAddress(SDL2.dll, "SDL_RenderSetClipRect");
		SDL2.OrignalSDL_RenderSetIntegerScale = GetProcAddress(SDL2.dll, "SDL_RenderSetIntegerScale");
		SDL2.OrignalSDL_RenderSetLogicalSize = GetProcAddress(SDL2.dll, "SDL_RenderSetLogicalSize");
		SDL2.OrignalSDL_RenderSetScale = GetProcAddress(SDL2.dll, "SDL_RenderSetScale");
		SDL2.OrignalSDL_RenderSetViewport = GetProcAddress(SDL2.dll, "SDL_RenderSetViewport");
		SDL2.OrignalSDL_RenderTargetSupported = GetProcAddress(SDL2.dll, "SDL_RenderTargetSupported");
		SDL2.OrignalSDL_ReportAssertion = GetProcAddress(SDL2.dll, "SDL_ReportAssertion");
		SDL2.OrignalSDL_ResetAssertionReport = GetProcAddress(SDL2.dll, "SDL_ResetAssertionReport");
		SDL2.OrignalSDL_RestoreWindow = GetProcAddress(SDL2.dll, "SDL_RestoreWindow");
		SDL2.OrignalSDL_SIMDAlloc = GetProcAddress(SDL2.dll, "SDL_SIMDAlloc");
		SDL2.OrignalSDL_SIMDFree = GetProcAddress(SDL2.dll, "SDL_SIMDFree");
		SDL2.OrignalSDL_SIMDGetAlignment = GetProcAddress(SDL2.dll, "SDL_SIMDGetAlignment");
		SDL2.OrignalSDL_SaveAllDollarTemplates = GetProcAddress(SDL2.dll, "SDL_SaveAllDollarTemplates");
		SDL2.OrignalSDL_SaveBMP_RW = GetProcAddress(SDL2.dll, "SDL_SaveBMP_RW");
		SDL2.OrignalSDL_SaveDollarTemplate = GetProcAddress(SDL2.dll, "SDL_SaveDollarTemplate");
		SDL2.OrignalSDL_SemPost = GetProcAddress(SDL2.dll, "SDL_SemPost");
		SDL2.OrignalSDL_SemTryWait = GetProcAddress(SDL2.dll, "SDL_SemTryWait");
		SDL2.OrignalSDL_SemValue = GetProcAddress(SDL2.dll, "SDL_SemValue");
		SDL2.OrignalSDL_SemWait = GetProcAddress(SDL2.dll, "SDL_SemWait");
		SDL2.OrignalSDL_SemWaitTimeout = GetProcAddress(SDL2.dll, "SDL_SemWaitTimeout");
		SDL2.OrignalSDL_SensorClose = GetProcAddress(SDL2.dll, "SDL_SensorClose");
		SDL2.OrignalSDL_SensorFromInstanceID = GetProcAddress(SDL2.dll, "SDL_SensorFromInstanceID");
		SDL2.OrignalSDL_SensorGetData = GetProcAddress(SDL2.dll, "SDL_SensorGetData");
		SDL2.OrignalSDL_SensorGetDeviceInstanceID = GetProcAddress(SDL2.dll, "SDL_SensorGetDeviceInstanceID");
		SDL2.OrignalSDL_SensorGetDeviceName = GetProcAddress(SDL2.dll, "SDL_SensorGetDeviceName");
		SDL2.OrignalSDL_SensorGetDeviceNonPortableType = GetProcAddress(SDL2.dll, "SDL_SensorGetDeviceNonPortableType");
		SDL2.OrignalSDL_SensorGetDeviceType = GetProcAddress(SDL2.dll, "SDL_SensorGetDeviceType");
		SDL2.OrignalSDL_SensorGetInstanceID = GetProcAddress(SDL2.dll, "SDL_SensorGetInstanceID");
		SDL2.OrignalSDL_SensorGetName = GetProcAddress(SDL2.dll, "SDL_SensorGetName");
		SDL2.OrignalSDL_SensorGetNonPortableType = GetProcAddress(SDL2.dll, "SDL_SensorGetNonPortableType");
		SDL2.OrignalSDL_SensorGetType = GetProcAddress(SDL2.dll, "SDL_SensorGetType");
		SDL2.OrignalSDL_SensorOpen = GetProcAddress(SDL2.dll, "SDL_SensorOpen");
		SDL2.OrignalSDL_SensorUpdate = GetProcAddress(SDL2.dll, "SDL_SensorUpdate");
		SDL2.OrignalSDL_SetAssertionHandler = GetProcAddress(SDL2.dll, "SDL_SetAssertionHandler");
		SDL2.OrignalSDL_SetClipRect = GetProcAddress(SDL2.dll, "SDL_SetClipRect");
		SDL2.OrignalSDL_SetClipboardText = GetProcAddress(SDL2.dll, "SDL_SetClipboardText");
		SDL2.OrignalSDL_SetColorKey = GetProcAddress(SDL2.dll, "SDL_SetColorKey");
		SDL2.OrignalSDL_SetCursor = GetProcAddress(SDL2.dll, "SDL_SetCursor");
		SDL2.OrignalSDL_SetError = GetProcAddress(SDL2.dll, "SDL_SetError");
		SDL2.OrignalSDL_SetEventFilter = GetProcAddress(SDL2.dll, "SDL_SetEventFilter");
		SDL2.OrignalSDL_SetHint = GetProcAddress(SDL2.dll, "SDL_SetHint");
		SDL2.OrignalSDL_SetHintWithPriority = GetProcAddress(SDL2.dll, "SDL_SetHintWithPriority");
		SDL2.OrignalSDL_SetMainReady = GetProcAddress(SDL2.dll, "SDL_SetMainReady");
		SDL2.OrignalSDL_SetMemoryFunctions = GetProcAddress(SDL2.dll, "SDL_SetMemoryFunctions");
		SDL2.OrignalSDL_SetModState = GetProcAddress(SDL2.dll, "SDL_SetModState");
		SDL2.OrignalSDL_SetPaletteColors = GetProcAddress(SDL2.dll, "SDL_SetPaletteColors");
		SDL2.OrignalSDL_SetPixelFormatPalette = GetProcAddress(SDL2.dll, "SDL_SetPixelFormatPalette");
		SDL2.OrignalSDL_SetRelativeMouseMode = GetProcAddress(SDL2.dll, "SDL_SetRelativeMouseMode");
		SDL2.OrignalSDL_SetRenderDrawBlendMode = GetProcAddress(SDL2.dll, "SDL_SetRenderDrawBlendMode");
		SDL2.OrignalSDL_SetRenderDrawColor = GetProcAddress(SDL2.dll, "SDL_SetRenderDrawColor");
		SDL2.OrignalSDL_SetRenderTarget = GetProcAddress(SDL2.dll, "SDL_SetRenderTarget");
		SDL2.OrignalSDL_SetSurfaceAlphaMod = GetProcAddress(SDL2.dll, "SDL_SetSurfaceAlphaMod");
		SDL2.OrignalSDL_SetSurfaceBlendMode = GetProcAddress(SDL2.dll, "SDL_SetSurfaceBlendMode");
		SDL2.OrignalSDL_SetSurfaceColorMod = GetProcAddress(SDL2.dll, "SDL_SetSurfaceColorMod");
		SDL2.OrignalSDL_SetSurfacePalette = GetProcAddress(SDL2.dll, "SDL_SetSurfacePalette");
		SDL2.OrignalSDL_SetSurfaceRLE = GetProcAddress(SDL2.dll, "SDL_SetSurfaceRLE");
		SDL2.OrignalSDL_SetTextInputRect = GetProcAddress(SDL2.dll, "SDL_SetTextInputRect");
		SDL2.OrignalSDL_SetTextureAlphaMod = GetProcAddress(SDL2.dll, "SDL_SetTextureAlphaMod");
		SDL2.OrignalSDL_SetTextureBlendMode = GetProcAddress(SDL2.dll, "SDL_SetTextureBlendMode");
		SDL2.OrignalSDL_SetTextureColorMod = GetProcAddress(SDL2.dll, "SDL_SetTextureColorMod");
		SDL2.OrignalSDL_SetThreadPriority = GetProcAddress(SDL2.dll, "SDL_SetThreadPriority");
		SDL2.OrignalSDL_SetWindowBordered = GetProcAddress(SDL2.dll, "SDL_SetWindowBordered");
		SDL2.OrignalSDL_SetWindowBrightness = GetProcAddress(SDL2.dll, "SDL_SetWindowBrightness");
		SDL2.OrignalSDL_SetWindowData = GetProcAddress(SDL2.dll, "SDL_SetWindowData");
		SDL2.OrignalSDL_SetWindowDisplayMode = GetProcAddress(SDL2.dll, "SDL_SetWindowDisplayMode");
		SDL2.OrignalSDL_SetWindowFullscreen = GetProcAddress(SDL2.dll, "SDL_SetWindowFullscreen");
		SDL2.OrignalSDL_SetWindowGammaRamp = GetProcAddress(SDL2.dll, "SDL_SetWindowGammaRamp");
		SDL2.OrignalSDL_SetWindowGrab = GetProcAddress(SDL2.dll, "SDL_SetWindowGrab");
		SDL2.OrignalSDL_SetWindowHitTest = GetProcAddress(SDL2.dll, "SDL_SetWindowHitTest");
		SDL2.OrignalSDL_SetWindowIcon = GetProcAddress(SDL2.dll, "SDL_SetWindowIcon");
		SDL2.OrignalSDL_SetWindowInputFocus = GetProcAddress(SDL2.dll, "SDL_SetWindowInputFocus");
		SDL2.OrignalSDL_SetWindowMaximumSize = GetProcAddress(SDL2.dll, "SDL_SetWindowMaximumSize");
		SDL2.OrignalSDL_SetWindowMinimumSize = GetProcAddress(SDL2.dll, "SDL_SetWindowMinimumSize");
		SDL2.OrignalSDL_SetWindowModalFor = GetProcAddress(SDL2.dll, "SDL_SetWindowModalFor");
		SDL2.OrignalSDL_SetWindowOpacity = GetProcAddress(SDL2.dll, "SDL_SetWindowOpacity");
		SDL2.OrignalSDL_SetWindowPosition = GetProcAddress(SDL2.dll, "SDL_SetWindowPosition");
		SDL2.OrignalSDL_SetWindowResizable = GetProcAddress(SDL2.dll, "SDL_SetWindowResizable");
		SDL2.OrignalSDL_SetWindowShape = GetProcAddress(SDL2.dll, "SDL_SetWindowShape");
		SDL2.OrignalSDL_SetWindowSize = GetProcAddress(SDL2.dll, "SDL_SetWindowSize");
		SDL2.OrignalSDL_SetWindowTitle = GetProcAddress(SDL2.dll, "SDL_SetWindowTitle");
		SDL2.OrignalSDL_SetWindowsMessageHook = GetProcAddress(SDL2.dll, "SDL_SetWindowsMessageHook");
		SDL2.OrignalSDL_SetYUVConversionMode = GetProcAddress(SDL2.dll, "SDL_SetYUVConversionMode");
		SDL2.OrignalSDL_ShowCursor = GetProcAddress(SDL2.dll, "SDL_ShowCursor");
		SDL2.OrignalSDL_ShowMessageBox = GetProcAddress(SDL2.dll, "SDL_ShowMessageBox");
		SDL2.OrignalSDL_ShowSimpleMessageBox = GetProcAddress(SDL2.dll, "SDL_ShowSimpleMessageBox");
		SDL2.OrignalSDL_ShowWindow = GetProcAddress(SDL2.dll, "SDL_ShowWindow");
		SDL2.OrignalSDL_SoftStretch = GetProcAddress(SDL2.dll, "SDL_SoftStretch");
		SDL2.OrignalSDL_StartTextInput = GetProcAddress(SDL2.dll, "SDL_StartTextInput");
		SDL2.OrignalSDL_StopTextInput = GetProcAddress(SDL2.dll, "SDL_StopTextInput");
		SDL2.OrignalSDL_TLSCreate = GetProcAddress(SDL2.dll, "SDL_TLSCreate");
		SDL2.OrignalSDL_TLSGet = GetProcAddress(SDL2.dll, "SDL_TLSGet");
		SDL2.OrignalSDL_TLSSet = GetProcAddress(SDL2.dll, "SDL_TLSSet");
		SDL2.OrignalSDL_ThreadID = GetProcAddress(SDL2.dll, "SDL_ThreadID");
		SDL2.OrignalSDL_TryLockMutex = GetProcAddress(SDL2.dll, "SDL_TryLockMutex");
		SDL2.OrignalSDL_UnionRect = GetProcAddress(SDL2.dll, "SDL_UnionRect");
		SDL2.OrignalSDL_UnloadObject = GetProcAddress(SDL2.dll, "SDL_UnloadObject");
		SDL2.OrignalSDL_UnlockAudio = GetProcAddress(SDL2.dll, "SDL_UnlockAudio");
		SDL2.OrignalSDL_UnlockAudioDevice = GetProcAddress(SDL2.dll, "SDL_UnlockAudioDevice");
		SDL2.OrignalSDL_UnlockJoysticks = GetProcAddress(SDL2.dll, "SDL_UnlockJoysticks");
		SDL2.OrignalSDL_UnlockMutex = GetProcAddress(SDL2.dll, "SDL_UnlockMutex");
		SDL2.OrignalSDL_UnlockSurface = GetProcAddress(SDL2.dll, "SDL_UnlockSurface");
		SDL2.OrignalSDL_UnlockTexture = GetProcAddress(SDL2.dll, "SDL_UnlockTexture");
		SDL2.OrignalSDL_UnregisterApp = GetProcAddress(SDL2.dll, "SDL_UnregisterApp");
		SDL2.OrignalSDL_UpdateTexture = GetProcAddress(SDL2.dll, "SDL_UpdateTexture");
		SDL2.OrignalSDL_UpdateWindowSurface = GetProcAddress(SDL2.dll, "SDL_UpdateWindowSurface");
		SDL2.OrignalSDL_UpdateWindowSurfaceRects = GetProcAddress(SDL2.dll, "SDL_UpdateWindowSurfaceRects");
		SDL2.OrignalSDL_UpdateYUVTexture = GetProcAddress(SDL2.dll, "SDL_UpdateYUVTexture");
		SDL2.OrignalSDL_UpperBlit = GetProcAddress(SDL2.dll, "SDL_UpperBlit");
		SDL2.OrignalSDL_UpperBlitScaled = GetProcAddress(SDL2.dll, "SDL_UpperBlitScaled");
		SDL2.OrignalSDL_VideoInit = GetProcAddress(SDL2.dll, "SDL_VideoInit");
		SDL2.OrignalSDL_VideoQuit = GetProcAddress(SDL2.dll, "SDL_VideoQuit");
		SDL2.OrignalSDL_Vulkan_CreateSurface = GetProcAddress(SDL2.dll, "SDL_Vulkan_CreateSurface");
		SDL2.OrignalSDL_Vulkan_GetDrawableSize = GetProcAddress(SDL2.dll, "SDL_Vulkan_GetDrawableSize");
		SDL2.OrignalSDL_Vulkan_GetInstanceExtensions = GetProcAddress(SDL2.dll, "SDL_Vulkan_GetInstanceExtensions");
		SDL2.OrignalSDL_Vulkan_GetVkGetInstanceProcAddr = GetProcAddress(SDL2.dll, "SDL_Vulkan_GetVkGetInstanceProcAddr");
		SDL2.OrignalSDL_Vulkan_LoadLibrary = GetProcAddress(SDL2.dll, "SDL_Vulkan_LoadLibrary");
		SDL2.OrignalSDL_Vulkan_UnloadLibrary = GetProcAddress(SDL2.dll, "SDL_Vulkan_UnloadLibrary");
		SDL2.OrignalSDL_WaitEvent = GetProcAddress(SDL2.dll, "SDL_WaitEvent");
		SDL2.OrignalSDL_WaitEventTimeout = GetProcAddress(SDL2.dll, "SDL_WaitEventTimeout");
		SDL2.OrignalSDL_WaitThread = GetProcAddress(SDL2.dll, "SDL_WaitThread");
		SDL2.OrignalSDL_WarpMouseGlobal = GetProcAddress(SDL2.dll, "SDL_WarpMouseGlobal");
		SDL2.OrignalSDL_WarpMouseInWindow = GetProcAddress(SDL2.dll, "SDL_WarpMouseInWindow");
		SDL2.OrignalSDL_WasInit = GetProcAddress(SDL2.dll, "SDL_WasInit");
		SDL2.OrignalSDL_WriteBE16 = GetProcAddress(SDL2.dll, "SDL_WriteBE16");
		SDL2.OrignalSDL_WriteBE32 = GetProcAddress(SDL2.dll, "SDL_WriteBE32");
		SDL2.OrignalSDL_WriteBE64 = GetProcAddress(SDL2.dll, "SDL_WriteBE64");
		SDL2.OrignalSDL_WriteLE16 = GetProcAddress(SDL2.dll, "SDL_WriteLE16");
		SDL2.OrignalSDL_WriteLE32 = GetProcAddress(SDL2.dll, "SDL_WriteLE32");
		SDL2.OrignalSDL_WriteLE64 = GetProcAddress(SDL2.dll, "SDL_WriteLE64");
		SDL2.OrignalSDL_WriteU8 = GetProcAddress(SDL2.dll, "SDL_WriteU8");
		SDL2.OrignalSDL_abs = GetProcAddress(SDL2.dll, "SDL_abs");
		SDL2.OrignalSDL_acos = GetProcAddress(SDL2.dll, "SDL_acos");
		SDL2.OrignalSDL_acosf = GetProcAddress(SDL2.dll, "SDL_acosf");
		SDL2.OrignalSDL_asin = GetProcAddress(SDL2.dll, "SDL_asin");
		SDL2.OrignalSDL_asinf = GetProcAddress(SDL2.dll, "SDL_asinf");
		SDL2.OrignalSDL_atan = GetProcAddress(SDL2.dll, "SDL_atan");
		SDL2.OrignalSDL_atan2 = GetProcAddress(SDL2.dll, "SDL_atan2");
		SDL2.OrignalSDL_atan2f = GetProcAddress(SDL2.dll, "SDL_atan2f");
		SDL2.OrignalSDL_atanf = GetProcAddress(SDL2.dll, "SDL_atanf");
		SDL2.OrignalSDL_atof = GetProcAddress(SDL2.dll, "SDL_atof");
		SDL2.OrignalSDL_atoi = GetProcAddress(SDL2.dll, "SDL_atoi");
		SDL2.OrignalSDL_calloc = GetProcAddress(SDL2.dll, "SDL_calloc");
		SDL2.OrignalSDL_ceil = GetProcAddress(SDL2.dll, "SDL_ceil");
		SDL2.OrignalSDL_ceilf = GetProcAddress(SDL2.dll, "SDL_ceilf");
		SDL2.OrignalSDL_copysign = GetProcAddress(SDL2.dll, "SDL_copysign");
		SDL2.OrignalSDL_copysignf = GetProcAddress(SDL2.dll, "SDL_copysignf");
		SDL2.OrignalSDL_cos = GetProcAddress(SDL2.dll, "SDL_cos");
		SDL2.OrignalSDL_cosf = GetProcAddress(SDL2.dll, "SDL_cosf");
		SDL2.OrignalSDL_exp = GetProcAddress(SDL2.dll, "SDL_exp");
		SDL2.OrignalSDL_expf = GetProcAddress(SDL2.dll, "SDL_expf");
		SDL2.OrignalSDL_fabs = GetProcAddress(SDL2.dll, "SDL_fabs");
		SDL2.OrignalSDL_fabsf = GetProcAddress(SDL2.dll, "SDL_fabsf");
		SDL2.OrignalSDL_floor = GetProcAddress(SDL2.dll, "SDL_floor");
		SDL2.OrignalSDL_floorf = GetProcAddress(SDL2.dll, "SDL_floorf");
		SDL2.OrignalSDL_fmod = GetProcAddress(SDL2.dll, "SDL_fmod");
		SDL2.OrignalSDL_fmodf = GetProcAddress(SDL2.dll, "SDL_fmodf");
		SDL2.OrignalSDL_free = GetProcAddress(SDL2.dll, "SDL_free");
		SDL2.OrignalSDL_getenv = GetProcAddress(SDL2.dll, "SDL_getenv");
		SDL2.OrignalSDL_iconv = GetProcAddress(SDL2.dll, "SDL_iconv");
		SDL2.OrignalSDL_iconv_close = GetProcAddress(SDL2.dll, "SDL_iconv_close");
		SDL2.OrignalSDL_iconv_open = GetProcAddress(SDL2.dll, "SDL_iconv_open");
		SDL2.OrignalSDL_iconv_string = GetProcAddress(SDL2.dll, "SDL_iconv_string");
		SDL2.OrignalSDL_isdigit = GetProcAddress(SDL2.dll, "SDL_isdigit");
		SDL2.OrignalSDL_isspace = GetProcAddress(SDL2.dll, "SDL_isspace");
		SDL2.OrignalSDL_itoa = GetProcAddress(SDL2.dll, "SDL_itoa");
		SDL2.OrignalSDL_lltoa = GetProcAddress(SDL2.dll, "SDL_lltoa");
		SDL2.OrignalSDL_log = GetProcAddress(SDL2.dll, "SDL_log");
		SDL2.OrignalSDL_log10 = GetProcAddress(SDL2.dll, "SDL_log10");
		SDL2.OrignalSDL_log10f = GetProcAddress(SDL2.dll, "SDL_log10f");
		SDL2.OrignalSDL_logf = GetProcAddress(SDL2.dll, "SDL_logf");
		SDL2.OrignalSDL_ltoa = GetProcAddress(SDL2.dll, "SDL_ltoa");
		SDL2.OrignalSDL_malloc = GetProcAddress(SDL2.dll, "SDL_malloc");
		SDL2.OrignalSDL_memcmp = GetProcAddress(SDL2.dll, "SDL_memcmp");
		SDL2.OrignalSDL_memcpy = GetProcAddress(SDL2.dll, "SDL_memcpy");
		SDL2.OrignalSDL_memmove = GetProcAddress(SDL2.dll, "SDL_memmove");
		SDL2.OrignalSDL_memset = GetProcAddress(SDL2.dll, "SDL_memset");
		SDL2.OrignalSDL_pow = GetProcAddress(SDL2.dll, "SDL_pow");
		SDL2.OrignalSDL_powf = GetProcAddress(SDL2.dll, "SDL_powf");
		SDL2.OrignalSDL_qsort = GetProcAddress(SDL2.dll, "SDL_qsort");
		SDL2.OrignalSDL_realloc = GetProcAddress(SDL2.dll, "SDL_realloc");
		SDL2.OrignalSDL_scalbn = GetProcAddress(SDL2.dll, "SDL_scalbn");
		SDL2.OrignalSDL_scalbnf = GetProcAddress(SDL2.dll, "SDL_scalbnf");
		SDL2.OrignalSDL_setenv = GetProcAddress(SDL2.dll, "SDL_setenv");
		SDL2.OrignalSDL_sin = GetProcAddress(SDL2.dll, "SDL_sin");
		SDL2.OrignalSDL_sinf = GetProcAddress(SDL2.dll, "SDL_sinf");
		SDL2.OrignalSDL_snprintf = GetProcAddress(SDL2.dll, "SDL_snprintf");
		SDL2.OrignalSDL_sqrt = GetProcAddress(SDL2.dll, "SDL_sqrt");
		SDL2.OrignalSDL_sqrtf = GetProcAddress(SDL2.dll, "SDL_sqrtf");
		SDL2.OrignalSDL_sscanf = GetProcAddress(SDL2.dll, "SDL_sscanf");
		SDL2.OrignalSDL_strcasecmp = GetProcAddress(SDL2.dll, "SDL_strcasecmp");
		SDL2.OrignalSDL_strchr = GetProcAddress(SDL2.dll, "SDL_strchr");
		SDL2.OrignalSDL_strcmp = GetProcAddress(SDL2.dll, "SDL_strcmp");
		SDL2.OrignalSDL_strdup = GetProcAddress(SDL2.dll, "SDL_strdup");
		SDL2.OrignalSDL_strlcat = GetProcAddress(SDL2.dll, "SDL_strlcat");
		SDL2.OrignalSDL_strlcpy = GetProcAddress(SDL2.dll, "SDL_strlcpy");
		SDL2.OrignalSDL_strlen = GetProcAddress(SDL2.dll, "SDL_strlen");
		SDL2.OrignalSDL_strlwr = GetProcAddress(SDL2.dll, "SDL_strlwr");
		SDL2.OrignalSDL_strncasecmp = GetProcAddress(SDL2.dll, "SDL_strncasecmp");
		SDL2.OrignalSDL_strncmp = GetProcAddress(SDL2.dll, "SDL_strncmp");
		SDL2.OrignalSDL_strrchr = GetProcAddress(SDL2.dll, "SDL_strrchr");
		SDL2.OrignalSDL_strrev = GetProcAddress(SDL2.dll, "SDL_strrev");
		SDL2.OrignalSDL_strstr = GetProcAddress(SDL2.dll, "SDL_strstr");
		SDL2.OrignalSDL_strtod = GetProcAddress(SDL2.dll, "SDL_strtod");
		SDL2.OrignalSDL_strtol = GetProcAddress(SDL2.dll, "SDL_strtol");
		SDL2.OrignalSDL_strtoll = GetProcAddress(SDL2.dll, "SDL_strtoll");
		SDL2.OrignalSDL_strtoul = GetProcAddress(SDL2.dll, "SDL_strtoul");
		SDL2.OrignalSDL_strtoull = GetProcAddress(SDL2.dll, "SDL_strtoull");
		SDL2.OrignalSDL_strupr = GetProcAddress(SDL2.dll, "SDL_strupr");
		SDL2.OrignalSDL_tan = GetProcAddress(SDL2.dll, "SDL_tan");
		SDL2.OrignalSDL_tanf = GetProcAddress(SDL2.dll, "SDL_tanf");
		SDL2.OrignalSDL_tolower = GetProcAddress(SDL2.dll, "SDL_tolower");
		SDL2.OrignalSDL_toupper = GetProcAddress(SDL2.dll, "SDL_toupper");
		SDL2.OrignalSDL_uitoa = GetProcAddress(SDL2.dll, "SDL_uitoa");
		SDL2.OrignalSDL_ulltoa = GetProcAddress(SDL2.dll, "SDL_ulltoa");
		SDL2.OrignalSDL_ultoa = GetProcAddress(SDL2.dll, "SDL_ultoa");
		SDL2.OrignalSDL_utf8strlcpy = GetProcAddress(SDL2.dll, "SDL_utf8strlcpy");
		SDL2.OrignalSDL_utf8strlen = GetProcAddress(SDL2.dll, "SDL_utf8strlen");
		SDL2.OrignalSDL_vsnprintf = GetProcAddress(SDL2.dll, "SDL_vsnprintf");
		SDL2.OrignalSDL_vsscanf = GetProcAddress(SDL2.dll, "SDL_vsscanf");
		SDL2.OrignalSDL_wcscmp = GetProcAddress(SDL2.dll, "SDL_wcscmp");
		SDL2.OrignalSDL_wcsdup = GetProcAddress(SDL2.dll, "SDL_wcsdup");
		SDL2.OrignalSDL_wcslcat = GetProcAddress(SDL2.dll, "SDL_wcslcat");
		SDL2.OrignalSDL_wcslcpy = GetProcAddress(SDL2.dll, "SDL_wcslcpy");
		SDL2.OrignalSDL_wcslen = GetProcAddress(SDL2.dll, "SDL_wcslen");

		install_hook();

		break;
	}
	case DLL_PROCESS_DETACH:
	{
		FreeLibrary(SDL2.dll);
	}
	break;
	}
	return TRUE;
}

typedef VOID(WINAPI* GetSystemTimeAsFileTime_t)(LPFILETIME);
typedef VOID(WINAPI* GetSystemTime_t)(LPSYSTEMTIME);

GetSystemTimeAsFileTime_t Orig_GetSystemTimeAsFileTime = nullptr;
GetSystemTime_t Orig_GetSystemTime = nullptr;

static ULONGLONG fakeTime = 0;

static ULONGLONG GetFakeTime()
{
	FILE *file = nullptr;
	_wfopen_s(&file, L"FF4_time.txt", L"r");

	// 2021-10-24 14:20:00 UTC, 1635085200, New Game Manip Time
	ULONGLONG res = 132795588000000000ULL;

	if (!file)
		return res;

	unsigned long long unix_time = 0;
	if (fscanf_s(file, "%llu", &unix_time) == 1)
		res = (unix_time + 11644473600ULL) * 10000000ULL;

	fclose(file);
	return res;
}

void WINAPI My_GetSystemTimeAsFileTime(LPFILETIME lpSystemTimeAsFileTime)
{
	lpSystemTimeAsFileTime->dwLowDateTime = (DWORD)(fakeTime);
	lpSystemTimeAsFileTime->dwHighDateTime = (DWORD)(fakeTime >> 32);
}

void WINAPI My_GetSystemTime(LPSYSTEMTIME lpSystemTime)
{
	FILETIME ft;
	ft.dwLowDateTime = (DWORD)(fakeTime);
	ft.dwHighDateTime = (DWORD)(fakeTime >> 32);
	FileTimeToSystemTime(&ft, lpSystemTime);
}

static void install_hook()
{
	wchar_t exepath[MAX_PATH];
	if (GetModuleFileNameW(NULL, exepath, MAX_PATH) == 0)
		return;

	LPCWSTR filename = PathFindFileNameW(exepath);

	if (_wcsicmp(filename, L"FF4.exe") != 0)
		return;

	fakeTime = GetFakeTime();

	MH_Initialize();
	MH_CreateHook(&GetSystemTimeAsFileTime, &My_GetSystemTimeAsFileTime, (LPVOID*)&Orig_GetSystemTimeAsFileTime);
	MH_EnableHook(&GetSystemTimeAsFileTime);
	MH_CreateHook(&GetSystemTime, &My_GetSystemTime, (LPVOID*)&Orig_GetSystemTime);
	MH_EnableHook(&GetSystemTime);
}
