#include "AutoStartupModuleListGetter.h"

const char* EnumAutoStartupModuleName(int Index)
{
	const char* Names[] = {
		"Landscape",
		nullptr
	};

	return Names[Index];
}

