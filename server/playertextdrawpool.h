
#ifndef _PLAYERTEXTDRAWPOOL_H
#define _PLAYERTEXTDRAWPOOL_H

class CPlayerTextDrawPool
{
private:
	TEXT_DRAW_TRANSMIT* m_pTextDraws[MAX_PLAYER_TEXT_DRAWS];
	char* m_szFontText[MAX_PLAYER_TEXT_DRAWS];
	bool m_bHasText[MAX_PLAYER_TEXT_DRAWS];

public:
	CPlayerTextDrawPool();
	~CPlayerTextDrawPool();

	bool IsValid(int iID);

	int New(float fX, float fY, char* szText);
	void SetLetterSize(int iID, float fWidth, float fHeight);
	void SetTextSize(int iID, float fWidth, float fHeight);
	void SetAlignment(int iID, int iAlignment);
};

#endif // _PLAYERTEXTDRAWPOOL_H
