
#a bug about qt.5.12.0
#use vs 2017 64 bits
#under windows 10 64 bits

TEMPLATE = subdirs

lib_grobal_object.file = $$PWD/GlobalObject/globalobject.pro
app_the_bug.file = $$PWD/TheBug/the_bug.pro

SUBDIRS += lib_grobal_object
SUBDIRS += app_the_bug









