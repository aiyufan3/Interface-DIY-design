/**
 * @file GreenBackground.cpp
 * @author Yufan_Ai
 *The set up for the green background which will further used in mainframe
 *
 */

#ifndef YUFANAI_YUFANAILIB_GREENBACKGROUND_H
#define YUFANAI_YUFANAILIB_GREENBACKGROUND_H

/**
 * The green background setting of the application
 */
class GreenBackground : public wxWindow
{
public:
	void Initialize(wxFrame *parent);
private:
	void OnPaint(wxPaintEvent &event);

};

#endif //YUFANAI_YUFANAILIB_GREENBACKGROUND_H
