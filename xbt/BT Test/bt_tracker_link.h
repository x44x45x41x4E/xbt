// bt_tracker_link.h: interface for the Cbt_tracker_link class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BT_TRACKER_LINK_H__19566F35_0475_4CE0_BF87_19345BBD0E42__INCLUDED_)
#define AFX_BT_TRACKER_LINK_H__19566F35_0475_4CE0_BF87_19345BBD0E42__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "socket.h"

class Cbt_file;

class Cbt_tracker_link  
{
public:
	void close();
	int read(const Cvirtual_binary&);
	int pre_select(fd_set* fd_read_set, fd_set* fd_write_set, fd_set* fd_except_set);
	void post_select(fd_set* fd_read_set, fd_set* fd_write_set, fd_set* fd_except_set);
	int write(Cbt_file* f);
	Cbt_tracker_link();
	~Cbt_tracker_link();

	Cvirtual_binary m_d;
	byte* m_w;
	Cbt_file* m_f;
	int m_protocol;
	string m_host;
	int m_port;
	string m_path;
	Csocket m_s;
	int m_state;
	int m_announce_time;
private:
};

#endif // !defined(AFX_BT_TRACKER_LINK_H__19566F35_0475_4CE0_BF87_19345BBD0E42__INCLUDED_)

