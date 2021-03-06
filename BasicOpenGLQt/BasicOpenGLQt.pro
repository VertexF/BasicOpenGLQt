# ----------------------------------------------------
# This file is generated by the Qt Visual Studio Tools.
# ------------------------------------------------------

TEMPLATE = app
TARGET = BasicOpenGLQt
DESTDIR = ../Win32/Debug
QT += core opengl gui widgets qml quick openglextensions
CONFIG += debug
DEFINES += _UNICODE _ENABLE_EXTENDED_ALIGNED_STORAGE WIN64 QT_DLL QT_OPENGL_LIB QT_OPENGLEXTENSIONS_LIB QT_QML_LIB QT_QUICK_LIB QT_WIDGETS_LIB
INCLUDEPATH += ./GeneratedFiles \
    . \
    ./GeneratedFiles/$(ConfigurationName)
LIBS += -lopengl32 \
    -lglu32
DEPENDPATH += .
MOC_DIR += ./GeneratedFiles/$(ConfigurationName)
OBJECTS_DIR += debug
UI_DIR += ./GeneratedFiles
RCC_DIR += ./GeneratedFiles
include(BasicOpenGLQt.pri)
win32:RC_FILE = BasicOpenGLQt.rc
