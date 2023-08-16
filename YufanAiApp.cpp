/**
 * @file YufanAiApp.cpp
 * @author Yufan Ai
 */

#include "YufanAiApp.h"
#include "pch.h"
#include <MainFrame.h>

/**
* Initialize the application.
* @return
*/
bool YufanAiApp::OnInit()
{
	if (!wxApp::OnInit())
		return false;

	auto frame = new MainFrame();
	frame->Initialize();
	frame->Show(true);

	return true;
}
