/**
 * @file MainFrame.cpp
 * @author Yufan Ai
 *
 * The top-level (main) frame of the application
 */

#include "MainFrame.h"
#include "pch.h"
#include "YufanAiView.h"
#include "GreenBackground.h"
/**
 * Initialize the MainFrame window.
 */
void MainFrame::Initialize()
{
	Create(nullptr, wxID_ANY, L"Yufan Ai", wxDefaultPosition,  wxSize( 1000,800 ));

	// Create a sizer that will lay out child windows vertically
	// one above each other

	// Create the view class object as a child of MainFrame

	auto sizer = new wxBoxSizer( wxHORIZONTAL);

	//set up the green background from the new class
	auto greenBackground = new GreenBackground();
	greenBackground->Initialize(this);
	// Add it to the sizer as 1/4 screen
	sizer->Add(greenBackground,1,wxEXPAND | wxALL);

	// Set the sizer for this frame from the view screen which is white background before bind the painting
	auto whiteBackground = new YufanAiView();
	whiteBackground->Initialize(this);
	// Add it to the sizer as 3/4 screen
	sizer->Add(whiteBackground,3, wxEXPAND | wxALL );
	SetSizer( sizer );

	// Layout (place) the child windows.
	Layout();
}
