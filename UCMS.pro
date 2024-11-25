QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AdminLogin.cpp \
    admin.cpp \
    admindashboard.cpp \
    course.cpp \
    coursemanagement.cpp \
    event.cpp \
    main.cpp \
    mainwindow.cpp \
    newuserregistration.cpp \
    student.cpp \
    studentdashboard.cpp \
    studentlogin.cpp \
    university.cpp \
    user.cpp

HEADERS += \
    AdminLogin.h \
    admin.h \
    admindashboard.h \
    course.h \
    coursemanagement.h \
    event.h \
    mainwindow.h \
    newuserregistration.h \
    student.h \
    studentdashboard.h \
    studentlogin.h \
    university.h \
    user.h

FORMS += \
    AdminLogin.ui \
    admindashboard.ui \
    coursemanagement.ui \
    mainwindow.ui \
    newuserregistration.ui \
    studentdashboard.ui \
    studentlogin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
