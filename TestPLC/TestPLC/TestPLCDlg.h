
// TestPLCDlg.h : 头文件
//

#pragma once
#include <string>
#include "SocketComm.h"
#include "afxcmn.h"
// CTestPLCDlg 对话框
class CTestPLCDlg : public CDialogEx 
{
// 构造
public:
	CTestPLCDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TESTPLC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnSend();
	void Connect();
	char* output;
	CEdit m_msglist;
	void Send(std::string str);
	char * hextostr(const std::string & hexStr);

	CString m_strShake;
	int m_radiobtngroup;
	afx_msg void OnBnClickedRadio1();
	
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	CIPAddressCtrl m_add;
	CString m_port;
	afx_msg void OnBnClickedRadio21();
};
