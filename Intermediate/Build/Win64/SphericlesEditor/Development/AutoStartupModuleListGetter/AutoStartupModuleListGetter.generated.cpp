#include "AutoStartupModuleListGetter.h"

const char* EnumAutoStartupModuleName(int Index)
{
	const char* Names[] = {
		"GameplayDebugger",
		"Landscape",
		nullptr
	};

	return Names[Index];
}

