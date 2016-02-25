class CMouse {
private:
	int  m_ix,  m_iy;	// �ѹ����_�l��m
	int  m_iTx, m_iTy;	// �Q���H�ؼЪ���m
	int  m_iStatus;	
	bool m_bTracer; // �]�w�O�_�����H��
	char m_cIcon;		
	char m_cMicon[2]; //�x�s��ؤ��P���ϥ�
public:
	CMouse() {	// �غc��
		m_ix = 1, m_iy =1; // �ѹ����_�l��m
		m_iStatus = 1;   // 1:���`���A, 2:���}��� 0:���`���A
		m_cIcon = m_cMicon[0] = '@'; m_cMicon[1] = 'Q';
		m_bTracer = false;	// �D���H��
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