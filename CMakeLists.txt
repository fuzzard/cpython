cmake_minimum_required(VERSION 3.16.0)

project(python VERSION 3.7.5 LANGUAGES C CXX)
# enable_language(ASM_MASM)

find_package(zlib NO_MODULE REQUIRED)
find_package(expat 2.2.9 NO_MODULE REQUIRED)
find_package(openssl 1.1.1 NO_MODULE REQUIRED)
find_package(bzip2 NO_MODULE REQUIRED)
find_package(libffi NO_MODULE REQUIRED)
find_package(xz NO_MODULE REQUIRED)
find_package(sqlite3 NO_MODULE REQUIRED)

# add_custom_target(_generate_import_h
#   COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/PCbuild/get_externals.bat
#   COMMAND "${CMAKE_VS_MSBUILD_COMMAND}" ${CMAKE_CURRENT_SOURCE_DIR}/PCbuild/pcbuild.sln /p:Configuration=Release /p:Platform=x64 /t:_freeze_importlib
#   BYPRODUCTS
# 	${CMAKE_CURRENT_SOURCE_DIR}/Python/import.h
# 	${CMAKE_CURRENT_SOURCE_DIR}/Python/import_external.h
# )

add_library(python SHARED
    Include/abstract.h
    Include/accu.h
    Include/asdl.h
    Include/ast.h
    Include/bitset.h
    Include/boolobject.h
    Include/bytearrayobject.h
    Include/bytes_methods.h
    Include/bytesobject.h
    Include/cellobject.h
    Include/ceval.h
    Include/classobject.h
    Include/code.h
    Include/codecs.h
    Include/compile.h
    Include/complexobject.h
    Include/context.h
    Include/datetime.h
    Include/descrobject.h
    Include/dictobject.h
    Include/dtoa.h
    Include/dynamic_annotations.h
    Include/enumobject.h
    Include/errcode.h
    Include/eval.h
    Include/fileobject.h
    Include/fileutils.h
    Include/floatobject.h
    Include/frameobject.h
    Include/funcobject.h
    Include/genobject.h
    Include/graminit.h
    Include/grammar.h
    Include/import.h
    Include/internal/ceval.h
    Include/internal/condvar.h
    Include/internal/context.h
    Include/internal/gil.h
    Include/internal/hamt.h
    Include/internal/mem.h
    Include/internal/pygetopt.h
    Include/internal/pystate.h
    Include/internal/warnings.h
    Include/intrcheck.h
    Include/iterobject.h
    Include/listobject.h
    Include/longintrepr.h
    Include/longobject.h
    Include/marshal.h
    Include/memoryobject.h
    Include/metagrammar.h
    Include/methodobject.h
    Include/modsupport.h
    Include/moduleobject.h
    Include/namespaceobject.h
    Include/node.h
    Include/object.h
    Include/objimpl.h
    Include/odictobject.h
    Include/opcode.h
    Include/osdefs.h
    Include/osmodule.h
    Include/parsetok.h
    Include/patchlevel.h
    Include/pgen.h
    Include/pgenheaders.h
    Include/py_curses.h
    Include/pyarena.h
    Include/pycapsule.h
    Include/pyctype.h
    Include/pydebug.h
    Include/pyerrors.h
    Include/pyexpat.h
    Include/pyfpe.h
    Include/pyhash.h
    Include/pylifecycle.h
    Include/pymacro.h
    Include/pymath.h
    Include/pymem.h
    Include/pyport.h
    Include/pystate.h
    Include/pystrcmp.h
    Include/pystrhex.h
    Include/pystrtod.h
    Include/Python-ast.h
    Include/Python.h
    Include/pythonrun.h
    Include/pythread.h
    Include/pytime.h
    Include/rangeobject.h
    Include/setobject.h
    Include/sliceobject.h
    Include/structmember.h
    Include/structseq.h
    Include/symtable.h
    Include/sysmodule.h
    Include/token.h
    Include/traceback.h
    Include/tupleobject.h
    Include/ucnhash.h
    Include/unicodeobject.h
    Include/weakrefobject.h
    Modules/_abc.c
    Modules/_bisectmodule.c
    Modules/_blake2/blake2b_impl.c
    Modules/_blake2/blake2module.c
    Modules/_blake2/blake2s_impl.c
    Modules/_codecsmodule.c
    Modules/_collectionsmodule.c
    Modules/_contextvarsmodule.c
    Modules/_csv.c
    Modules/_datetimemodule.c
    Modules/_functoolsmodule.c
    Modules/_heapqmodule.c
    Modules/_io/_iomodule.c
    Modules/_io/_iomodule.h
    Modules/_io/bufferedio.c
    Modules/_io/bytesio.c
    Modules/_io/fileio.c
    Modules/_io/iobase.c
    Modules/_io/stringio.c
    Modules/_io/textio.c
    Modules/_io/winconsoleio.c
    Modules/_json.c
    Modules/_localemodule.c
    Modules/_lsprof.c
    Modules/_math.c
    Modules/_math.h
    Modules/_opcode.c
    Modules/_operator.c
    Modules/_pickle.c
    Modules/_randommodule.c
    Modules/_sha3/sha3module.c
    Modules/_sre.c
    Modules/_stat.c
    Modules/_struct.c
    Modules/_threadmodule.c
    Modules/_tracemalloc.c
    Modules/_weakref.c
    Modules/_winapi.c
    Modules/arraymodule.c
    Modules/atexitmodule.c
    Modules/audioop.c
    Modules/binascii.c
    Modules/cjkcodecs/_codecs_cn.c
    Modules/cjkcodecs/_codecs_hk.c
    Modules/cjkcodecs/_codecs_iso2022.c
    Modules/cjkcodecs/_codecs_jp.c
    Modules/cjkcodecs/_codecs_kr.c
    Modules/cjkcodecs/_codecs_tw.c
    Modules/cjkcodecs/alg_jisx0201.h
    Modules/cjkcodecs/cjkcodecs.h
    Modules/cjkcodecs/emu_jisx0213_2000.h
    Modules/cjkcodecs/mappings_cn.h
    Modules/cjkcodecs/mappings_hk.h
    Modules/cjkcodecs/mappings_jisx0213_pair.h
    Modules/cjkcodecs/mappings_jp.h
    Modules/cjkcodecs/mappings_kr.h
    Modules/cjkcodecs/mappings_tw.h
    Modules/cjkcodecs/multibytecodec.c
    Modules/cjkcodecs/multibytecodec.h
    Modules/cmathmodule.c
    Modules/errnomodule.c
    Modules/faulthandler.c
    Modules/gcmodule.c
    Modules/getbuildinfo.c
    Modules/hashtable.c
    Modules/hashtable.h
    Modules/itertoolsmodule.c
    Modules/main.c
    Modules/mathmodule.c
    Modules/md5module.c
    Modules/mmapmodule.c
    Modules/parsermodule.c
    Modules/posixmodule.c
    Modules/rotatingtree.c
    Modules/rotatingtree.h
    Modules/sha1module.c
    Modules/sha256module.c
    Modules/sha512module.c
    Modules/signalmodule.c
    Modules/sre_constants.h
    Modules/sre_lib.h
    Modules/sre.h
    Modules/symtablemodule.c
    Modules/timemodule.c
    Modules/xxsubtype.c
    Modules/zipimport.c
    Modules/zlibmodule.c
    Objects/abstract.c
    Objects/accu.c
    Objects/boolobject.c
    Objects/bytearrayobject.c
    Objects/bytes_methods.c
    Objects/bytesobject.c
    Objects/call.c
    Objects/capsule.c
    Objects/cellobject.c
    Objects/classobject.c
    Objects/codeobject.c
    Objects/complexobject.c
    Objects/descrobject.c
    Objects/dictobject.c
    Objects/enumobject.c
    Objects/exceptions.c
    Objects/fileobject.c
    Objects/floatobject.c
    Objects/frameobject.c
    Objects/funcobject.c
    Objects/genobject.c
    Objects/iterobject.c
    Objects/listobject.c
    Objects/longobject.c
    Objects/memoryobject.c
    Objects/methodobject.c
    Objects/moduleobject.c
    Objects/namespaceobject.c
    Objects/object.c
    Objects/obmalloc.c
    Objects/odictobject.c
    Objects/rangeobject.c
    Objects/setobject.c
    Objects/sliceobject.c
    Objects/stringlib/count.h
    Objects/stringlib/fastsearch.h
    Objects/stringlib/find.h
    Objects/stringlib/partition.h
    Objects/stringlib/replace.h
    Objects/stringlib/split.h
    Objects/structseq.c
    Objects/tupleobject.c
    Objects/typeobject.c
    Objects/unicodectype.c
    Objects/unicodeobject.c
    Objects/unicodetype_db.h
    Objects/weakrefobject.c
    Parser/acceler.c
    Parser/bitset.c
    Parser/firstsets.c
    Parser/grammar.c
    Parser/grammar1.c
    Parser/listnode.c
    Parser/metagrammar.c
    Parser/myreadline.c
    Parser/node.c
    Parser/parser.c
    Parser/parser.h
    Parser/parsetok.c
    Parser/tokenizer.c
    Parser/tokenizer.h
    PC/config.c
    PC/dl_nt.c
    PC/errmap.h
    PC/getpathp.c
    PC/invalid_parameter_handler.c
    PC/msvcrtmodule.c
    PC/pyconfig.h
    PC/winreg.c
    PCbuild/python.natvis
    Python/_warnings.c
    Python/asdl.c
    Python/ast_opt.c
    Python/ast_unparse.c
    Python/ast.c
    Python/bltinmodule.c
    Python/bootstrap_hash.c
    Python/ceval_gil.h
    Python/ceval.c
    Python/codecs.c
    Python/compile.c
    Python/condvar.h
    Python/context.c
    Python/dtoa.c
    Python/dynamic_annotations.c
    Python/dynload_win.c
    Python/errors.c
    Python/fileutils.c
    Python/formatter_unicode.c
    Python/frozen.c
    Python/future.c
    Python/getargs.c
    Python/getcompiler.c
    Python/getcopyright.c
    Python/getopt.c
    Python/getplatform.c
    Python/getversion.c
    Python/graminit.c
    Python/hamt.c
    Python/import.c
    Python/importdl.c
    Python/importdl.h
    Python/marshal.c
    Python/modsupport.c
    Python/mysnprintf.c
    Python/mystrtoul.c
    Python/pathconfig.c
    Python/peephole.c
    Python/pyarena.c
    Python/pyctype.c
    Python/pyfpe.c
    Python/pyhash.c
    Python/pylifecycle.c
    Python/pymath.c
    Python/pystate.c
    Python/pystrcmp.c
    Python/pystrhex.c
    Python/pystrtod.c
    Python/Python-ast.c
    Python/pythonrun.c
    Python/pytime.c
    Python/structmember.c
    Python/symtable.c
    Python/sysmodule.c
    Python/thread_nt.h
    Python/thread.c
    Python/traceback.c
    Python/wordcode_helpers.h
    Python/clinic/_warnings.c.h
    Python/clinic/bltinmodule.c.h
    Python/clinic/context.c.h
    Python/clinic/import.c.h
    Python/clinic/marshal.c.h
    Python/clinic/sysmodule.c.h
    Python/clinic/traceback.c.h
)

if(WINDOWS_STORE)
  target_sources(python PRIVATE
    PC/uwp_compat.cpp
  )
endif()

# add_dependencies(python _generate_import_h)

target_compile_definitions(python PRIVATE
  _USRDLL
  Py_BUILD_CORE
  Py_ENABLE_SHARED
  _Py_HAVE_ZLIB
  MS_DLL_ID="3.7"
  _WIN32_WINNT=0x0A00
  WINVER=0x0A00
  NTDDI_VERSION=0x0A000007
  $<$<CONFIG:Debug>:DEBUG>
  $<$<CONFIG:RelWithDebInfo>:NDEBUG>
)

target_include_directories(python PRIVATE
    Include/
    Include/internal
    PC/
)

target_compile_options(python PRIVATE
  /ZW
  /EHsc
  /MP
)

set(PY_SHARED_LIB_NAME ${PROJECT_NAME}${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR})
set_target_properties(python PROPERTIES
  OUTPUT_NAME ${PY_SHARED_LIB_NAME}
  # OUTPUT_NAME_DEBUG ${PY_SHARED_LIB_NAME}d
  COMPILE_PDB_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}
  COMPILE_PDB_NAME ${PY_SHARED_LIB_NAME}
  # COMPILE_PDB_NAME_DEBUG ${PY_SHARED_LIB_NAME}d.pdb
)

target_link_libraries(python
  PRIVATE
    debug vccorlibd.lib
    optimized vccorlib.lib
    debug msvcrtd.lib
    optimized msvcrt.lib
    zlib::zlibstatic
    ws2_32.lib
    version.lib
    shlwapi.lib
    Advapi32.lib
    Kernel32.lib
    bufferoverflowU.lib
    
)

target_link_options(python PRIVATE
  /NODEFAULTLIB:vccorlibd
  /NODEFAULTLIB:msvcrtd
  /NODEFAULTLIB:vccorlib
  /NODEFAULTLIB:msvcrt
  /INCREMENTAL:NO
  /debug:full
)

add_executable(python_cli
  Programs/python.c
)
target_compile_definitions(python_cli PRIVATE
  _CONSOLE
  Py_BUILD_CORE
  Py_ENABLE_SHARED
  _Py_HAVE_ZLIB
  MS_DLL_ID="3.7"
  _WIN32_WINNT=0x0A00
  WINVER=0x0A00
  NTDDI_VERSION=0x0A000007
  $<$<CONFIG:Debug>:DEBUG>
  $<$<CONFIG:RelWithDebInfo>:NDEBUG>
)

target_include_directories(python_cli PRIVATE
    Include/
    Include/internal
    PC/
)

target_compile_options(python_cli PRIVATE
  /ZW
  /EHsc
  /MP
)

target_link_libraries(python_cli
  PRIVATE
    debug vccorlibd.lib
    optimized vccorlib.lib
    debug msvcrtd.lib
    optimized msvcrt.lib
    zlib::zlibstatic
    python
    ws2_32.lib
    version.lib
    shlwapi.lib
    Advapi32.lib
    Kernel32.lib
)

target_link_options(python_cli PRIVATE
  /NODEFAULTLIB:vccorlibd
  /NODEFAULTLIB:msvcrtd
  /NODEFAULTLIB:vccorlib
  /NODEFAULTLIB:msvcrt
  /INCREMENTAL:NO
  /debug:full
)

add_library(python3dll SHARED
  PC/python3.def
  PC/python3dll.c
)

target_compile_definitions(python3dll PRIVATE
  _USRDLL
  Py_BUILD_CORE
  Py_ENABLE_SHARED
  _Py_HAVE_ZLIB
  MS_DLL_ID="3.7"
  _WIN32_WINNT=0x0A00
  WINVER=0x0A00
  NTDDI_VERSION=0x0A000007
  $<$<CONFIG:Debug>:DEBUG>
  $<$<CONFIG:RelWithDebInfo>:NDEBUG>
)

target_include_directories(python3dll PRIVATE
    Include/
    Include/internal
    PC/
    INTERFACE
    $<INSTALL_INTERFACE:Include>
)

set(LIB_NAME ${PROJECT_NAME}${PROJECT_VERSION_MAJOR})
set_target_properties(python3dll PROPERTIES
  OUTPUT_NAME ${LIB_NAME}
  # OUTPUT_NAME_DEBUG ${LIB_NAME}d
  COMPILE_PDB_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}
  COMPILE_PDB_NAME ${LIB_NAME}
  # COMPILE_PDB_NAME_DEBUG ${LIB_NAME}d
)

target_link_libraries(python3dll
  PRIVATE
    debug vccorlibd.lib
    optimized vccorlib.lib
    debug msvcrtd.lib
    optimized msvcrt.lib
    zlib::zlibstatic
    python
    ws2_32.lib
    version.lib
    shlwapi.lib
    Advapi32.lib
    Kernel32.lib
    WindowsApp.lib
)

target_link_options(python3dll PRIVATE
  /NODEFAULTLIB:vccorlibd
  /NODEFAULTLIB:msvcrtd
  /NODEFAULTLIB:vccorlib
  /NODEFAULTLIB:msvcrt
  /INCREMENTAL:NO
  /debug:full
)


########################################################################
## Modules
########################################################################
set(PYTHON_MODULES)

macro(add_py_module)
  set(options)
  set(oneValueArgs NAME )
  set(multiValueArgs SOURCES DEFINITIONS INCLUDES LIBRARIES)
  cmake_parse_arguments(PY_MODULE "${options}" "${oneValueArgs}"
                        "${multiValueArgs}" ${ARGN}
  )

  list(APPEND PYTHON_MODULES ${PY_MODULE_NAME})

  add_library(${PY_MODULE_NAME} SHARED
    ${PY_MODULE_SOURCES}
  )

  target_compile_definitions(${PY_MODULE_NAME} PRIVATE
      Py_BUILD_CORE_MODULE
      Py_ENABLE_SHARED
      _WIN32_WINNT=0x0A00
      WINVER=0x0A00
      NTDDI_VERSION=0x0A000007
      MS_DLL_ID="3.7"
      $<$<CONFIG:Debug>:DEBUG>
      $<$<CONFIG:RelWithDebInfo>:NDEBUG>
      ${PY_MODULE_DEFINITIONS}
  )

  target_compile_options(python PRIVATE
    /EHsc
    /MP
  )

  target_include_directories(${PY_MODULE_NAME} PRIVATE
      Include/
      Include/internal
      PC/
      ${PY_MODULE_INCLUDES}
  )

  set_target_properties(${PY_MODULE_NAME} PROPERTIES
    # OUTPUT_NAME_DEBUG ${PY_MODULE_NAME}d
    SUFFIX ".pyd"
    COMPILE_PDB_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}
    COMPILE_PDB_NAME ${PY_MODULE_NAME}
    # COMPILE_PDB_NAME_DEBUG ${PY_MODULE_NAME}d
  )

  target_link_libraries(${PY_MODULE_NAME}
    PRIVATE
      debug vccorlibd.lib
      optimized vccorlib.lib
      debug msvcrtd.lib
      optimized msvcrt.lib
      ${PY_MODULE_LIBRARIES}
      python
      ws2_32.lib
      version.lib
      shlwapi.lib
      Advapi32.lib
      Kernel32.lib
      WindowsApp.lib
  )

  target_link_options(${PY_MODULE_NAME} PRIVATE
	/NODEFAULTLIB:vccorlibd
	/NODEFAULTLIB:msvcrtd
	/NODEFAULTLIB:vccorlib
	/NODEFAULTLIB:msvcrt
	/INCREMENTAL:NO
	/debug:full
  )
endmacro()

add_py_module(NAME _asyncio
  SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_asynciomodule.c
)


## _bz2
add_py_module(NAME _bz2
  SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_bz2module.c
  LIBRARIES
    bzip2::bzip2
)

## _ctypes
add_py_module(NAME _ctypes
  SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_ctypes/_ctypes.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_ctypes/callbacks.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_ctypes/callproc.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_ctypes/cfield.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_ctypes/ctypes_dlfcn.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_ctypes/ctypes.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_ctypes/malloc_closure.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_ctypes/stgdict.c
  DEFINITIONS
    FFI_BUILDING
  LIBRARIES
    libffi::libffi
    OleAut32.lib
    Ole32.lib
)

## _decinaml
add_py_module(NAME _decimal
  SOURCES
    Modules/_decimal/libmpdec/basearith.h
    Modules/_decimal/libmpdec/bits.h
    Modules/_decimal/libmpdec/constants.h
    Modules/_decimal/libmpdec/convolute.h
    Modules/_decimal/libmpdec/crt.h
    Modules/_decimal/libmpdec/difradix2.h
    Modules/_decimal/docstrings.h
    Modules/_decimal/libmpdec/fnt.h
    Modules/_decimal/libmpdec/fourstep.h
    Modules/_decimal/libmpdec/mpdecimal.h
    Modules/_decimal/libmpdec/numbertheory.h
    Modules/_decimal/libmpdec/sixstep.h
    Modules/_decimal/libmpdec/transpose.h
    Modules/_decimal/libmpdec/typearith.h
    Modules/_decimal/libmpdec/umodarith.h
    Modules/_decimal/libmpdec/vccompat.h
    Modules/_decimal/libmpdec/vcstdint.h
    Modules/_decimal/_decimal.c
    Modules/_decimal/libmpdec/basearith.c
    Modules/_decimal/libmpdec/constants.c
    Modules/_decimal/libmpdec/context.c
    Modules/_decimal/libmpdec/convolute.c
    Modules/_decimal/libmpdec/crt.c
    Modules/_decimal/libmpdec/difradix2.c
    Modules/_decimal/libmpdec/fnt.c
    Modules/_decimal/libmpdec/fourstep.c
    Modules/_decimal/libmpdec/io.c
    Modules/_decimal/libmpdec/memory.c
    Modules/_decimal/libmpdec/mpdecimal.c
    Modules/_decimal/libmpdec/numbertheory.c
    Modules/_decimal/libmpdec/sixstep.c
    Modules/_decimal/libmpdec/transpose.c
  DEFINITIONS
    ANSI
    _CRT_SECURE_NO_WARNINGS
  INCLUDES
    Modules/_decimal/libmpdec
)

if(${CMAKE_GENERATOR_PLATFORM} STREQUAL "win32")
  target_compile_definitions(_decimal PRIVATE
    CONFIG_32
    PPRO

  )
elseif(${CMAKE_GENERATOR_PLATFORM} STREQUAL "x64")
  target_compile_definitions(_decimal PRIVATE
    CONFIG_64
  )
  # target_sources(_decimal PRIVATE
  #   ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_decimal/libmpdec/vcdiv64.asm
  # )
elseif(${CMAKE_GENERATOR_PLATFORM} STREQUAL "arm")
  target_compile_definitions(_decimal PRIVATE
    CONFIG_32
  )
elseif(${CMAKE_GENERATOR_PLATFORM} STREQUAL "arm64")
  target_compile_definitions(_decimal PRIVATE
    CONFIG_64
  )
endif()

## _elementtree
add_py_module(NAME _elementtree
  SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_elementtree.c
  DEFINITIONS
    USE_PYEXPAT_CAPI
    XML_STATIC
  LIBRARIES
    expat::libexpat
)

## _hashlib
add_py_module(NAME _hashlib
  SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_hashopenssl.c
  LIBRARIES
    openssl::crypto
)

## _lzma
add_py_module(NAME _lzma
  SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_lzmamodule.c
  LIBRARIES
    xz::lzma
)

## _multiprocessing
add_py_module(NAME _multiprocessing
  SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_multiprocessing/multiprocessing.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_multiprocessing/multiprocessing.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_multiprocessing/semaphore.c
)

## _overlapped
add_py_module(NAME _overlapped
  SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/overlapped.c
)

## _queue
add_py_module(NAME _queue
  SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_queuemodule.c
)

## _socket
add_py_module(NAME _socket
  SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/socketmodule.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/socketmodule.h
  LIBRARIES
    iphlpapi.lib
)

## _sqlite3
add_py_module(NAME _sqlite3
  SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_sqlite/cache.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_sqlite/cache.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_sqlite/connection.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_sqlite/connection.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_sqlite/cursor.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_sqlite/cursor.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_sqlite/microprotocols.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_sqlite/microprotocols.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_sqlite/module.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_sqlite/module.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_sqlite/prepare_protocol.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_sqlite/prepare_protocol.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_sqlite/row.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_sqlite/row.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_sqlite/statement.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_sqlite/statement.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_sqlite/util.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_sqlite/util.h
  DEFINITIONS
    MODULE_NAME="sqlite3"
  LIBRARIES
    sqlite3::sqlite3
)

## _ssl
add_py_module(NAME _ssl
  SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/_ssl.c
  LIBRARIES
    openssl::ssl
    openssl::crypto
    crypt32.lib
)

## select
add_py_module(NAME select
  SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/selectmodule.c
)

## pyexpat
add_py_module(NAME pyexpat
  SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/pyexpat.c
  LIBRARIES
    expat::libexpat
)

## unicodedata
add_py_module(NAME unicodedata
  SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/unicodedata.c
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/unicodedata_db.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Modules/unicodename_db.h
)

include(CMakePackageConfigHelpers)
write_basic_package_version_file(
  ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config-version.cmake
  VERSION ${PROJECT_VERSION}
  COMPATIBILITY AnyNewerVersion
)

install(TARGETS python3dll python EXPORT python
  RUNTIME DESTINATION bin
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  INCLUDES DESTINATION include/${PY_SHARED_LIB_NAME}
)

install(DIRECTORY
  ${CMAKE_CURRENT_SOURCE_DIR}/Include/
  DESTINATION include/${PY_SHARED_LIB_NAME}
)

install(FILES
  ${CMAKE_CURRENT_SOURCE_DIR}/PC/pyconfig.h
  DESTINATION include/${PY_SHARED_LIB_NAME}
)

foreach(PYTHON_MODULE IN LISTS PYTHON_MODULES)
  install(TARGETS ${PYTHON_MODULE}
    RUNTIME DESTINATION bin/python/DLLs
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
  )

install(FILES
  ${PROJECT_BINARY_DIR}/RelWithDebInfo/${PYTHON_MODULE}.pdb
  DESTINATION lib
  CONFIGURATIONS RelWithDebInfo
)
install(FILES
  ${PROJECT_BINARY_DIR}/Debug/${PYTHON_MODULE}.pdb
  DESTINATION lib
  CONFIGURATIONS Debug
)
endforeach(PYTHON_MODULE IN LISTS PYTHON_MODULES)

install(DIRECTORY
    ${CMAKE_CURRENT_SOURCE_DIR}/Lib
    DESTINATION bin/python
    PATTERN plat-* EXCLUDE
    PATTERN msilib EXCLUDE
    PATTERN lib-tk EXCLUDE
    PATTERN curses EXCLUDE
    PATTERN bsddb EXCLUDE
    PATTERN *test EXCLUDE
    PATTERN idlelib EXCLUDE
    PATTERN __pycache__ EXCLUDE
)

install(FILES
  ${PROJECT_BINARY_DIR}/RelWithDebInfo/${LIB_NAME}.pdb
  ${PROJECT_BINARY_DIR}/RelWithDebInfo/${PY_SHARED_LIB_NAME}.pdb
  DESTINATION lib
  CONFIGURATIONS RelWithDebInfo
)
install(FILES
  ${PROJECT_BINARY_DIR}/Debug/${LIB_NAME}.pdb
  ${PROJECT_BINARY_DIR}/Debug/${PY_SHARED_LIB_NAME}.pdb
  DESTINATION lib
  CONFIGURATIONS Debug
)


install(EXPORT ${PROJECT_NAME}
  FILE
  ${PROJECT_NAME}.cmake
  NAMESPACE
    ${PROJECT_NAME}::
  DESTINATION
    lib/cmake/${PROJECT_NAME}
)

install(FILES
  ${CMAKE_CURRENT_SOURCE_DIR}/cmake/${PROJECT_NAME}-config.cmake
  ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config-version.cmake
  DESTINATION
    lib/cmake/${PROJECT_NAME}
)

export(TARGETS ${PROJECT_NAME} python3dll
  FILE
  ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}-config.cmake
  NAMESPACE ${PROJECT_NAME}::
)