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

set(ams_public_header
  include/tencentcloud/ams/v20201229/AmsClient.h
  )

set(ams_public_header_model
  include/tencentcloud/ams/v20201229/model/DescribeTasksRequest.h
  include/tencentcloud/ams/v20201229/model/StorageInfo.h
  include/tencentcloud/ams/v20201229/model/BucketInfo.h
  include/tencentcloud/ams/v20201229/model/CreateAudioModerationTaskResponse.h
  include/tencentcloud/ams/v20201229/model/TaskResult.h
  include/tencentcloud/ams/v20201229/model/CancelTaskRequest.h
  include/tencentcloud/ams/v20201229/model/DescribeTaskDetailResponse.h
  include/tencentcloud/ams/v20201229/model/CreateAudioModerationTaskRequest.h
  include/tencentcloud/ams/v20201229/model/TaskInput.h
  include/tencentcloud/ams/v20201229/model/DescribeTaskDetailRequest.h
  include/tencentcloud/ams/v20201229/model/TaskLabel.h
  include/tencentcloud/ams/v20201229/model/TaskFilter.h
  include/tencentcloud/ams/v20201229/model/InputInfo.h
  include/tencentcloud/ams/v20201229/model/DescribeTasksResponse.h
  include/tencentcloud/ams/v20201229/model/AudioResultDetailLanguageResult.h
  include/tencentcloud/ams/v20201229/model/RecognitionResult.h
  include/tencentcloud/ams/v20201229/model/CancelTaskResponse.h
  include/tencentcloud/ams/v20201229/model/AudioResultDetailTextResult.h
  include/tencentcloud/ams/v20201229/model/AudioResult.h
  include/tencentcloud/ams/v20201229/model/AudioResultDetailMoanResult.h
  include/tencentcloud/ams/v20201229/model/TaskData.h
  include/tencentcloud/ams/v20201229/model/MediaInfo.h
  include/tencentcloud/ams/v20201229/model/Tag.h
  include/tencentcloud/ams/v20201229/model/AudioSegments.h
  )

set(ams_src
  src/v20201229/AmsClient.cpp
  src/v20201229/model/DescribeTasksRequest.cpp
  src/v20201229/model/StorageInfo.cpp
  src/v20201229/model/BucketInfo.cpp
  src/v20201229/model/CreateAudioModerationTaskResponse.cpp
  src/v20201229/model/TaskResult.cpp
  src/v20201229/model/CancelTaskRequest.cpp
  src/v20201229/model/DescribeTaskDetailResponse.cpp
  src/v20201229/model/CreateAudioModerationTaskRequest.cpp
  src/v20201229/model/TaskInput.cpp
  src/v20201229/model/DescribeTaskDetailRequest.cpp
  src/v20201229/model/TaskLabel.cpp
  src/v20201229/model/TaskFilter.cpp
  src/v20201229/model/InputInfo.cpp
  src/v20201229/model/DescribeTasksResponse.cpp
  src/v20201229/model/AudioResultDetailLanguageResult.cpp
  src/v20201229/model/RecognitionResult.cpp
  src/v20201229/model/CancelTaskResponse.cpp
  src/v20201229/model/AudioResultDetailTextResult.cpp
  src/v20201229/model/AudioResult.cpp
  src/v20201229/model/AudioResultDetailMoanResult.cpp
  src/v20201229/model/TaskData.cpp
  src/v20201229/model/MediaInfo.cpp
  src/v20201229/model/Tag.cpp
  src/v20201229/model/AudioSegments.cpp
  )

set(ams_include
    include/tencentcloud/ams
  )

add_library(ams ${LIB_TYPE}
  ${ams_public_header}
  ${ams_public_header_model}
  ${ams_src})

set_target_properties(ams
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ams
  )

target_include_directories(ams
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ams
  core)

#install(FILES ${ams_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ams/v20201229)
#install(FILES ${ams_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ams/v20201229/model)
install(DIRECTORY ${ams_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ams
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
