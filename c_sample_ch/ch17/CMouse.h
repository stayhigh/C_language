class CMouse {
private:
	int  m_ix,  m_iy;	// 老鼠的起始位置
	int  m_iTx, m_iTy;	// 被跟隨目標的位置
	int  m_iStatus;	
	bool m_bTracer; // 設定是否為跟隨者
	char m_cIcon;		
	char m_cMicon[2]; //儲存兩種不同的圖示
public:
	CMouse() {	// 建構元
		m_ix = 1, m_iy =1; // 老鼠的起始位置
		m_iStatus = 1;   // 1:正常狀態, 2:離開邊界 0:死亡狀態
		m_cIcon = m_cMicon[0] = '@'; m_cMicon[1] = 'Q';
		m_bTracer = false;	// 非跟隨者
	}
	void Show();
	void SetPos(int x, int y) {	m_ix = x; m_iy = y; }
	void SetIcon(char cN, char cB) { m_cIcon = m_cMicon[0] = cN; m_cMicon[1] = cB;}
	int  Update(char cIn);
	void GetPos(int *ix, int *iy)  {*ix = m_ix;  *iy = m_iy;}
	void SetTrcPos(int ix, int iy) {
		m_iTx = ix; m_iTy = iy; m_ix = m_iTx + 6; m_iy = m_iTy;
	}
	void SetTracer(bool bT) { m_bTracer = bT;}
	int  GetStatus(){return(m_iStatus);}
};