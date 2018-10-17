// SocketManager.h: interface for the CSocketManager class.
//
//////////////////////////////////////////////////////////////////////

#pragma once

#include "SocketComm.h"

#define WM_UPDATE_CONNECTION	WM_APP+0x1234

class CSocketManager : public CSocketComm  
{
public:
	int FeedBackFL;
	CString FeedbackStr;
	CSocketManager();
	virtual ~CSocketManager();

	void SetMessageWindow(CEdit* pMsgCtrl);
	void AppendMessage(LPCTSTR strText );
public:

	virtual void OnDataReceived(const LPBYTE lpBuffer, DWORD dwCount);
	virtual void OnEvent(UINT uEvent, LPVOID lpvData);

protected:
	void DisplayData(const LPBYTE lpData, DWORD dwCount, const SockAddrIn& sfrom);
	CEdit* m_pMsgCtrl;
	CString m_csCommandCrrnt;
	CString m_csCommandLast;
};

