#include "Cvect2D.h"

float CVect2D::getVecteurEnX() const
{
	return m_fltX;
}

float CVect2D::getVecteurEnY() const
{
	return m_fltY;
}

void CVect2D::setVecteurEnX(float fltX)
{
	m_fltX = fltX;
}

void CVect2D::setVecteurEnY(float fltY)
{
	m_fltY = fltY;
}

void CVect2D::somme_vectorielle(CVect2D CmonVect1, CVect2D CmonVect2, CVect2D &CmonVect3)
{
	CmonVect3.m_fltX = CmonVect1.getVecteurEnX() + CmonVect2.getVecteurEnX();
	CmonVect3.m_fltY = CmonVect1.getVecteurEnY() + CmonVect2.getVecteurEnY();

}

void CVect2D::soustraction_vectorielle(CVect2D CmonVect1, CVect2D CmonVect2, CVect2D &CmonVect3)
{
	CmonVect3.m_fltX = CmonVect1.getVecteurEnX() - CmonVect2.getVecteurEnX();
	CmonVect3.m_fltY = CmonVect1.getVecteurEnY() - CmonVect2.getVecteurEnY();
}

void CVect2D::produit_scalaire(CVect2D &CmonVect1, float scalaire)
{
	CmonVect1.m_fltX = (CmonVect1.getVecteurEnX() * scalaire);
	CmonVect1.m_fltY = (CmonVect1.getVecteurEnY() * scalaire);
}

float CVect2D::multiplication_vecteurs(CVect2D CmonVect1, CVect2D CmonVect2)
{
	return ((CmonVect1.getVecteurEnX() * CmonVect2.getVecteurEnX()) + (CmonVect1.getVecteurEnY() * CmonVect2.getVecteurEnY()));
}

float CVect2D::produit_norme(CVect2D CmonVect1, CVect2D CmonVect2)
{
	return sqrt(pow(CmonVect2.getVecteurEnX() - CmonVect1.getVecteurEnX(), 2) + pow(CmonVect2.getVecteurEnY() - CmonVect1.getVecteurEnY(), 2));
}







CVect2D::CVect2D()
{
	m_fltX = m_fltY = 0.0;
}

CVect2D::CVect2D(float fltX, float fltY)
{
	m_fltX = fltX;
	m_fltY = fltY;
}
