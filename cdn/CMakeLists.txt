#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

set(cdn_public_header
  include/tencentcloud/cdn/v20180606/CdnClient.h
  )

set(cdn_public_header_model
  include/tencentcloud/cdn/v20180606/model/PurgePathCacheRequest.h
  include/tencentcloud/cdn/v20180606/model/PurgePathCacheResponse.h
  include/tencentcloud/cdn/v20180606/model/PushUrlsCacheResponse.h
  include/tencentcloud/cdn/v20180606/model/CreateScdnFailedLogTaskRequest.h
  include/tencentcloud/cdn/v20180606/model/CreateScdnFailedLogTaskResponse.h
  include/tencentcloud/cdn/v20180606/model/PushUrlsCacheRequest.h
  )

set(cdn_src
  src/v20180606/CdnClient.cpp
  src/v20180606/model/PurgePathCacheRequest.cpp
  src/v20180606/model/PurgePathCacheResponse.cpp
  src/v20180606/model/PushUrlsCacheResponse.cpp
  src/v20180606/model/CreateScdnFailedLogTaskRequest.cpp
  src/v20180606/model/CreateScdnFailedLogTaskResponse.cpp
  src/v20180606/model/PushUrlsCacheRequest.cpp
  )

set(cdn_include
    include/tencentcloud/cdn
  )

add_library(cdn ${LIB_TYPE}
  ${cdn_public_header}
  ${cdn_public_header_model}
  ${cdn_src})

set_target_properties(cdn
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cdn
  )

target_include_directories(cdn
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cdn
  core)

#install(FILES ${cdn_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdn/v20180606)
#install(FILES ${cdn_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cdn/v20180606/model)
install(DIRECTORY ${cdn_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cdn
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
