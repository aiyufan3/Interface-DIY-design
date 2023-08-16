/**
 * @file YufanAiView.h
 * @author Yufan Ai
 *
 */

#ifndef YUFANAI_YUFANAILIB_YUFANAIVIEW_H
#define YUFANAI_YUFANAILIB_YUFANAIVIEW_H

/**
 * View class for YufanAi application
 */
class YufanAiView : public wxWindow {
public:
	void Initialize(wxFrame *parent);
private:
	void OnPaint(wxPaintEvent &event);
};

#endif //YUFANAI_YUFANAILIB_YUFANAIVIEW_H
