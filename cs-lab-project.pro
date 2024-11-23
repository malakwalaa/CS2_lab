QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ../../Desktop/university/AUC/lab assignment cs/CS2_lab-main/admin.h \
    ../../Desktop/university/AUC/lab assignment cs/CS2_lab-main/admin.h \
    ../../Desktop/university/AUC/lab assignment cs/CS2_lab-main/course.h \
    ../../Desktop/university/AUC/lab assignment cs/CS2_lab-main/event.h \
    ../../Desktop/university/AUC/lab assignment cs/CS2_lab-main/mainwindow.h \
    ../../Desktop/university/AUC/lab assignment cs/CS2_lab-main/student.h \
    ../../Desktop/university/AUC/lab assignment cs/CS2_lab-main/university.h \
    ../../Desktop/university/AUC/lab assignment cs/CS2_lab-main/user.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../../Desktop/university/AUC/lab assignment cs/CS2_lab-main.zip \
    ../../Desktop/university/AUC/lab assignment cs/CS2_lab-main.zip
