/*
Desura is the leading indie game distribution platform
Copyright (C) 2011 Mark Chandler (Desura Net Pty Ltd)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>
*/

#ifndef DESURA_MENUFILLER_H
#define DESURA_MENUFILLER_H
#ifdef _WIN32
#pragma once
#endif

#include "wx_controls/gcControls.h"
#include "wx_controls/gcImageHandle.h"
#include "wx_controls/gcFlickerFreePaint.h"

class MenuFiller : public gcFlickerFreePaint<gcPanel>
{
public:
	MenuFiller(wxWindow *parent, const char* image, const wxSize& size = wxDefaultSize);
	~MenuFiller();

protected:
	virtual void doPaint(wxDC* dc);

	gcImageHandle m_imgHandle;
};

#endif //DESURA_MENUFILLER_H
