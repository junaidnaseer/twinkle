/*
    Copyright (C) 2005-2009  Michel de Boer <michel@twinklephone.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

// RFC 3892
// Referred-By header

#ifndef _H_HDR_REFERRED_BY
#define _H_HDR_REFERRED_BY

#include <string>
#include "header.h"
#include "parameter.h"
#include "sockets/url.h"

using namespace std;

class t_hdr_referred_by : public t_header {
public:
	string			display; // display name
	t_url			uri;
	string			cid;
	list<t_parameter>	params;

	t_hdr_referred_by();
	void set_display(const string &d);
	void set_uri(const string &u);
	void set_uri(const t_url &u);
	void set_cid(const string &c);
	void set_params(const list<t_parameter> &l);
	void add_param(const t_parameter &p);
	string encode_value(void) const;
};

#endif
