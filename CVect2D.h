#pragma once
#include<math.h>
class CVect2D {

	//donnees membres
private:
	float m_fltX;
	float m_fltY;

	//fonctions(ou methodes) membres
public:
	float getVecteurEnX()const;
	float getVecteurEnY()const;
	void setVecteurEnX(float fltX);
	void setVecteurEnY(float fltY);


	void somme_vectorielle(CVect2D CmonVect1, CVect2D CmonVect2, CVect2D &CmonVect3);
	void soustraction_vectorielle(CVect2D CmonVect1, CVect2D CmonVect2, CVect2D &CmonVect3);
	void produit_scalaire(CVect2D &CmonVect1, float scalaire);
	float multiplication_vecteurs(CVect2D CmonVect1, CVect2D CmonVect2);
	float produit_norme(CVect2D CmonVect1, CVect2D CmonVect2);



	//contructeur
	CVect2D();
	CVect2D(float fltX, float fltY);

};