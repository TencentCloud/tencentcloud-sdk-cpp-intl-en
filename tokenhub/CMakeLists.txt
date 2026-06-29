#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(tokenhub_public_header
  include/tencentcloud/tokenhub/v20260322/TokenhubClient.h
  )

set(tokenhub_public_header_model
  include/tencentcloud/tokenhub/v20260322/model/ModifyGlossaryEntriesRequest.h
  include/tencentcloud/tokenhub/v20260322/model/CreateGlossaryRequest.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeGlossaryEntriesResponse.h
  include/tencentcloud/tokenhub/v20260322/model/DeleteGlossaryRequest.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeGlossaryEntriesRequest.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeGlossariesRequest.h
  include/tencentcloud/tokenhub/v20260322/model/RequestFilter.h
  include/tencentcloud/tokenhub/v20260322/model/DeleteGlossaryEntriesRequest.h
  include/tencentcloud/tokenhub/v20260322/model/CreateGlossaryEntriesResponse.h
  include/tencentcloud/tokenhub/v20260322/model/DeleteGlossaryEntryInput.h
  include/tencentcloud/tokenhub/v20260322/model/GlossaryEntryItem.h
  include/tencentcloud/tokenhub/v20260322/model/DeleteGlossaryResponse.h
  include/tencentcloud/tokenhub/v20260322/model/CreateGlossaryEntriesRequest.h
  include/tencentcloud/tokenhub/v20260322/model/RequestSort.h
  include/tencentcloud/tokenhub/v20260322/model/ModifyGlossaryEntriesResponse.h
  include/tencentcloud/tokenhub/v20260322/model/ModifyGlossaryEntryInput.h
  include/tencentcloud/tokenhub/v20260322/model/DeleteGlossaryEntriesResponse.h
  include/tencentcloud/tokenhub/v20260322/model/DescribeGlossariesResponse.h
  include/tencentcloud/tokenhub/v20260322/model/GlossaryItem.h
  include/tencentcloud/tokenhub/v20260322/model/GlossaryEntryInput.h
  include/tencentcloud/tokenhub/v20260322/model/CreateGlossaryResponse.h
  )

set(tokenhub_src
  src/v20260322/TokenhubClient.cpp
  src/v20260322/model/ModifyGlossaryEntriesRequest.cpp
  src/v20260322/model/CreateGlossaryRequest.cpp
  src/v20260322/model/DescribeGlossaryEntriesResponse.cpp
  src/v20260322/model/DeleteGlossaryRequest.cpp
  src/v20260322/model/DescribeGlossaryEntriesRequest.cpp
  src/v20260322/model/DescribeGlossariesRequest.cpp
  src/v20260322/model/RequestFilter.cpp
  src/v20260322/model/DeleteGlossaryEntriesRequest.cpp
  src/v20260322/model/CreateGlossaryEntriesResponse.cpp
  src/v20260322/model/DeleteGlossaryEntryInput.cpp
  src/v20260322/model/GlossaryEntryItem.cpp
  src/v20260322/model/DeleteGlossaryResponse.cpp
  src/v20260322/model/CreateGlossaryEntriesRequest.cpp
  src/v20260322/model/RequestSort.cpp
  src/v20260322/model/ModifyGlossaryEntriesResponse.cpp
  src/v20260322/model/ModifyGlossaryEntryInput.cpp
  src/v20260322/model/DeleteGlossaryEntriesResponse.cpp
  src/v20260322/model/DescribeGlossariesResponse.cpp
  src/v20260322/model/GlossaryItem.cpp
  src/v20260322/model/GlossaryEntryInput.cpp
  src/v20260322/model/CreateGlossaryResponse.cpp
  )

set(tokenhub_include
    include/tencentcloud/tokenhub
  )

add_library(tokenhub ${LIB_TYPE}
  ${tokenhub_public_header}
  ${tokenhub_public_header_model}
  ${tokenhub_src})

set_target_properties(tokenhub
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tokenhub
  )

target_include_directories(tokenhub
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tokenhub
  core)

#install(FILES ${tokenhub_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tokenhub/v20260322)
#install(FILES ${tokenhub_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tokenhub/v20260322/model)
install(DIRECTORY ${tokenhub_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tokenhub
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
