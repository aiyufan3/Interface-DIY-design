/**
 * @file GreenBackground.h
 * @author Yufan_Ai
 * The green background window which will further used in mainframe
 *
 */

#include "pch.h"
#include "GreenBackground.h"
#include "YufanAiView.h"
#include <wx/dcbuffer.h>

/**
 * Initialize the YufanAi background view class.
 * @param parent The parent green background window for this class
 */
void GreenBackground::Initialize (wxFrame* parent)
{
	Create(parent, wxID_ANY);
	SetBackgroundStyle(wxBG_STYLE_PAINT);
	Bind(wxEVT_PAINT, &GreenBackground::OnPaint, this);
}

/**
 * Paint event on green background, draws the window.
 * @param event Paint event object
 */
void GreenBackground::OnPaint(wxPaintEvent& event)
{
//	SetBackgroundColour(wxColour(24, 69, 59));
	wxAutoBufferedPaintDC dc(this);

	//set up the green background
	wxBrush background(wxColour(24,69,59));
	dc.SetBackground(background);
	dc.Clear();

	dc.SetPen(wxPen(wxColour(255,255,255), 5)); // set the color and thickness of the line

	//draw some lines for the staff art work in the green background windows
	for (int i = 0; i < 50; i++)
	{
		double frequency = 0.03;
		double amplitude = 15;

		for (double x = 5; x < GetSize().GetWidth()-10; x += 0.1)
		{
			double y = (40*i)+amplitude * sin(frequency * x) + GetSize().GetHeight() / 2;
			y-=340;
			dc.DrawPoint(x, y);
		}
	}
}




