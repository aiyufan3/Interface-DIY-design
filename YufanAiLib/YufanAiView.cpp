/**
 * @file YufanAiView.cpp
 * @author Yufan Ai
 */

#include "pch.h"
#include "YufanAiView.h"
#include <wx/dcbuffer.h>
#include <wx/graphics.h>

/**
 * Initialize the Yufan Ai view class.
 * @param parent The parent window for this class
 */
void YufanAiView::Initialize(wxFrame* parent)
{
	Create(parent, wxID_ANY);
	SetBackgroundStyle(wxBG_STYLE_PAINT);
	Bind(wxEVT_PAINT, &YufanAiView::OnPaint, this);
}


/**
 * Paint event, draws the window.
 * @param event Paint event object
 */
void YufanAiView::OnPaint(wxPaintEvent& event)
{
	wxAutoBufferedPaintDC dc(this);

	//set up the white background
	wxBrush background(*wxWHITE);
	dc.SetBackground(background);
	dc.Clear();
	dc.SetPen(wxColour(93,233,54));
	for ( int i = 0 ; i< 8 ; ++i )
	{
		for ( int j = i%2 ; j< 8 ; j+=2 )
		{
			dc.DrawRectangle(i*100,j*100,150,150);
		}
	}

	dc.SetPen(wxPen(wxColour(0,0,0), 5)); // set the color and thickness of the line
	//draw some lines for the staff art work

	for (int i = 0; i < 5; i++)
	{
		double frequency = 0.02;
		double amplitude = 20;

		for (double x = 50; x < GetSize().GetWidth()-50; x += 0.4)
		{
			double y = (40*i)+amplitude * sin(frequency * x) + GetSize().GetHeight() / 2;
			y-=200;
			dc.DrawPoint(x, y);
		}
	}
	dc.SetPen(wxPen(wxColour(0,0,0), 6)); // set the color and thickness of the line
	dc.DrawLine(50, 190, 50, 350); // draw the line from point (50, 50) to (50, 200)
	dc.DrawLine(690, 190, 690, 350); // draw the line from point (50, 50) to (50, 200)


	dc.SetPen(wxPen(wxColour(33,117,9), 6)); // set the color and thickness of the line
	// Draw the stem of the quarter note
	dc.DrawLine(500, 150, 500, 200);
// Draw the head of the quarter note
	dc.DrawCircle(500, 150, 10);


	// Draw the stem of the quarter note
	dc.DrawLine(100, 150, 100, 200);
	// Draw the head of the quarter note
	dc.DrawCircle(100, 150, 10);


	dc.SetPen(wxPen(wxColour(0, 0, 0)));
	dc.SetBrush(wxBrush(wxColour(33, 117, 9)));
	dc.DrawCircle(wxPoint(200, 200), 30);
	dc.SetBrush(wxBrush(wxColour(255, 255, 255)));
	dc.DrawCircle(wxPoint(200, 200), 20);
	dc.SetBrush(wxBrush(wxColour(33, 117, 9)));
	dc.DrawCircle(wxPoint(200, 200), 15);
	dc.SetBrush(wxBrush(wxColour(255, 255, 255)));
	dc.DrawCircle(wxPoint(200, 200), 10);


	dc.SetPen(wxPen(wxColour(0, 0, 0)));
	dc.SetBrush(wxBrush(wxColour(33, 117, 9)));
	dc.DrawCircle(wxPoint(600, 200), 30);
	dc.SetBrush(wxBrush(wxColour(255, 255, 255)));
	dc.DrawCircle(wxPoint(600, 200), 20);
	dc.SetBrush(wxBrush(wxColour(33, 117, 9)));
	dc.DrawCircle(wxPoint(600, 200), 15);
	dc.SetBrush(wxBrush(wxColour(255, 255, 255)));
	dc.DrawCircle(wxPoint(600, 200), 10);

	dc.SetPen(wxPen(wxColour(0, 0, 0)));
	dc.SetBrush(wxBrush(wxColour(33, 117, 9)));
	dc.DrawCircle(wxPoint(400, 300), 30);
	dc.SetBrush(wxBrush(wxColour(255, 255, 255)));
	dc.DrawCircle(wxPoint(400, 300), 20);
	dc.SetBrush(wxBrush(wxColour(33, 117, 9)));
	dc.DrawCircle(wxPoint(400, 300), 15);
	dc.SetBrush(wxBrush(wxColour(255, 255, 255)));
	dc.DrawCircle(wxPoint(400, 300), 10);



	dc.SetBrush(wxBrush(wxColour(33, 117, 9)));
	dc.SetPen(wxPen(wxColour(33,117,9), 6));
	dc.DrawLine(150, 250, 180, 250);
	dc.DrawLine(150, 250, 150, 300);
	dc.DrawCircle(wxPoint(150, 300), 10);
	dc.DrawLine(180, 250, 180, 320);
	dc.DrawCircle(wxPoint(180, 320), 10);



	dc.SetBrush(wxBrush(wxColour(33, 117, 9)));
	dc.SetPen(wxPen(wxColour(33,117,9), 6));
	dc.DrawLine(350, 150, 380, 150);
	dc.DrawLine(350, 150, 350, 200);
	dc.DrawCircle(wxPoint(350, 200), 10);
	dc.DrawLine(380, 150, 380, 220);
	dc.DrawCircle(wxPoint(380, 220), 10);


	dc.SetBrush(wxBrush(wxColour(33, 117, 9)));
	dc.SetPen(wxPen(wxColour(33,117,9), 6));
	dc.DrawLine(550, 250, 580, 250);
	dc.DrawLine(550, 250, 550, 300);
	dc.DrawCircle(wxPoint(550, 300), 10);
	dc.DrawLine(580, 250, 580, 320);
	dc.DrawCircle(wxPoint(580, 320), 10);


	dc.SetPen(wxPen(wxColour(100,0,0), 6));
	wxBrush BrushWhite(wxColour(240, 240, 240));
	dc.SetBrush(BrushWhite);
	dc.DrawRectangle(0, 560, 50, 280);
	dc.DrawRectangle(100, 560, 50, 280);
	dc.DrawRectangle(200, 560, 50, 280);
	dc.DrawRectangle(300, 560, 50, 280);
	dc.DrawRectangle(400, 560, 50, 280);
	dc.DrawRectangle(500, 560, 50, 280);
	dc.DrawRectangle(600, 560, 50, 280);
	dc.DrawRectangle(700, 560, 50, 280);
	dc.DrawRectangle(800, 560, 50, 280);
	dc.DrawRectangle(900, 560, 50, 280);
	dc.DrawRectangle(1000, 560, 50, 280);
	dc.DrawRectangle(1100, 560, 50, 280);

	wxBrush BrushBlack(wxColour(20, 20, 20));
	dc.SetBrush(BrushBlack);
	dc.DrawRectangle(50, 560, 50, 280);
	dc.DrawRectangle(150, 560, 50, 280);
	dc.DrawRectangle(250, 560, 50, 280);
	dc.DrawRectangle(350, 560, 50, 280);
	dc.DrawRectangle(450, 560, 50, 280);
	dc.DrawRectangle(550, 560, 50, 280);
	dc.DrawRectangle(650, 560, 50, 280);
	dc.DrawRectangle(750, 560, 50, 280);
	dc.DrawRectangle(850, 560, 50, 280);
	dc.DrawRectangle(950, 560, 50, 280);
	dc.DrawRectangle(1050, 560, 50, 280);
	dc.DrawRectangle(1150, 560, 50, 280);

}
