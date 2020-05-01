#pragma once

extern bool g_destructive;
extern std::string g_slash;

// shitty macro because somewhere in the lib is using GetTickCount64 and doesn't work on xp
#if WINVER < 0x600
#define GetTickCount64 GetTickCount
#endif
