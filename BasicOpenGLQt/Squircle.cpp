#include "Squircle.h"

#include <QtQuick/qquickwindow.h>
#include <QtGui/QOpenGLShaderProgram>
#include <QtGui/QOpenGLContext>
SquircleRenderer::~SquircleRenderer() 
{
}

Squircle::Squircle() : m_t(0),
	m_renderer(nullptr)
{
	connect(this, &QQuickItem::windowChanged, this, &Squircle::handleWindowChanged);
}

Squircle::~Squircle()
{
}

void Squircle::setT(qreal t) 
{
	
}
