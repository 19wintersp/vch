#include <windows.h>

#include <EuroScopePlugIn.hpp>

namespace EuroScope = EuroScopePlugIn;

void __declspec(dllexport) EuroScopePlugInInit(EuroScope::CPlugIn **ptr) {}

void __declspec(dllexport) EuroScopePlugInExit(void) {}
