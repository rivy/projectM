EXTRA_DIST=
CLEANFILES=

SUBDIRS=Renderer NativePresetFactory MilkdropPresetFactory

AM_CPPFLAGS = \
  ${my_CFLAGS} \
	-include $(top_builddir)/config.h \
	-DSYSCONFDIR=\""$(sysconfdir)"\" \
	-I$(top_srcdir)/src/libprojectM \
	-I$(top_srcdir)/src/libprojectM/Renderer \
	-I$(top_srcdir)/vendor

lib_LTLIBRARIES = libprojectM.la  # public, possibly-shared library

# link flags
libprojectM_la_LDFLAGS = $(CG_LDFLAGS) -no-undefined -version-info 2:0:0

# link libRenderer, MilkdropPresetFactory, NativePresetFactory, and libprojectM sources
libprojectM_la_LIBADD = \
../libprojectM/MilkdropPresetFactory/libMilkdropPresetFactory.la \
../libprojectM/NativePresetFactory/libNativePresetFactory.la \
../libprojectM/Renderer/libRenderer.la
libprojectM_la_SOURCES = ConfigFile.cpp Preset.cpp PresetLoader.cpp timer.cpp \
  KeyHandler.cpp PresetChooser.cpp TimeKeeper.cpp PCM.cpp PresetFactory.cpp \
	fftsg.cpp wipemalloc.cpp PipelineMerger.cpp PresetFactoryManager.cpp projectM.cpp \
  Common.hpp                 PipelineMerger.hpp         PresetLoader.hpp\
	HungarianMethod.hpp        Preset.hpp                 RandomNumberGenerators.hpp\
	IdleTextures.hpp           PresetChooser.hpp          TimeKeeper.hpp\
	KeyHandler.hpp             PresetFactory.hpp          projectM.hpp\
	PCM.hpp                    PresetFactoryManager.hpp\
	projectM.hpp projectM-opengl.h \
	ConfigFile.h       glew.h\
	carbontoprojectM.h glxew.h\
	cocoatoprojectM.h  lvtoprojectM.h\
	dlldefs.h          resource.h\
	event.h            sdltoprojectM.h\
	fatal.h            timer.h\
	fftsg.h            win32-dirent.h\
	glError.h          wipemalloc.h\
  omptl/omptl_numeric_extentions_ser.h\
	omptl/omptl_algorithm_par.h          omptl/omptl_numeric_par.h\
	omptl/omptl_algorithm_ser.h          omptl/omptl_numeric_ser.h\
	omptl/omptl_numeric_extentions.h     omptl/omptl_tools.h\
	omptl/omptl_numeric_extentions_par.h omptl/omptl omptl/omptl_numeric\
	omptl/omptl_algorithm

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libprojectM.pc
EXTRA_DIST += libprojectM.pc.in
CLEANFILES += libprojectM.pc
