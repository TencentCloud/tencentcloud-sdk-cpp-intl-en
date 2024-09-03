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

set(car_public_header
  include/tencentcloud/car/v20220110/CarClient.h
  )

set(car_public_header_model
  include/tencentcloud/car/v20220110/model/CreateApplicationVersionResponse.h
  include/tencentcloud/car/v20220110/model/DeleteApplicationRequest.h
  include/tencentcloud/car/v20220110/model/ApplicationBaseInfo.h
  include/tencentcloud/car/v20220110/model/CreateSessionRequest.h
  include/tencentcloud/car/v20220110/model/DescribeApplicationPathListResponse.h
  include/tencentcloud/car/v20220110/model/ModifyMobileApplicationInfoRequest.h
  include/tencentcloud/car/v20220110/model/StartPublishStreamWithURLResponse.h
  include/tencentcloud/car/v20220110/model/CreateApplicationSnapshotRequest.h
  include/tencentcloud/car/v20220110/model/DeleteApplicationVersionRequest.h
  include/tencentcloud/car/v20220110/model/UserMobileApplicationInfo.h
  include/tencentcloud/car/v20220110/model/Filter.h
  include/tencentcloud/car/v20220110/model/SetApplicationVersionOnlineRequest.h
  include/tencentcloud/car/v20220110/model/CreateApplicationSnapshotResponse.h
  include/tencentcloud/car/v20220110/model/DescribeApplicationFileInfoResponse.h
  include/tencentcloud/car/v20220110/model/ModifyMobileApplicationInfoResponse.h
  include/tencentcloud/car/v20220110/model/ModifyApplicationBaseInfoRequest.h
  include/tencentcloud/car/v20220110/model/ModifyApplicationBaseInfoResponse.h
  include/tencentcloud/car/v20220110/model/DescribeApplicationVersionRequest.h
  include/tencentcloud/car/v20220110/model/DescribeApplicationListResponse.h
  include/tencentcloud/car/v20220110/model/DescribeCosCredentialResponse.h
  include/tencentcloud/car/v20220110/model/DescribeApplicationStatusRequest.h
  include/tencentcloud/car/v20220110/model/CreateApplicationRequest.h
  include/tencentcloud/car/v20220110/model/DescribeConcurrentCountRequest.h
  include/tencentcloud/car/v20220110/model/DeleteApplicationVersionResponse.h
  include/tencentcloud/car/v20220110/model/ModifyApplicationVersionResponse.h
  include/tencentcloud/car/v20220110/model/DescribeCosCredentialRequest.h
  include/tencentcloud/car/v20220110/model/StopPublishStreamResponse.h
  include/tencentcloud/car/v20220110/model/CreateApplicationVersionRequest.h
  include/tencentcloud/car/v20220110/model/DescribeApplicationStatusResponse.h
  include/tencentcloud/car/v20220110/model/DestroySessionResponse.h
  include/tencentcloud/car/v20220110/model/DescribeApplicationVersionResponse.h
  include/tencentcloud/car/v20220110/model/DescribeApplicationPathListRequest.h
  include/tencentcloud/car/v20220110/model/StartPublishStreamResponse.h
  include/tencentcloud/car/v20220110/model/CreateSessionResponse.h
  include/tencentcloud/car/v20220110/model/DescribeApplicationListRequest.h
  include/tencentcloud/car/v20220110/model/StartPublishStreamRequest.h
  include/tencentcloud/car/v20220110/model/UserApplicationInfo.h
  include/tencentcloud/car/v20220110/model/DeleteApplicationResponse.h
  include/tencentcloud/car/v20220110/model/UserApplicationStatus.h
  include/tencentcloud/car/v20220110/model/StopPublishStreamRequest.h
  include/tencentcloud/car/v20220110/model/CreateApplicationResponse.h
  include/tencentcloud/car/v20220110/model/UserApplicationFileInfo.h
  include/tencentcloud/car/v20220110/model/UserApplicationVersion.h
  include/tencentcloud/car/v20220110/model/StartPublishStreamWithURLRequest.h
  include/tencentcloud/car/v20220110/model/ApplyConcurrentResponse.h
  include/tencentcloud/car/v20220110/model/SetApplicationVersionOnlineResponse.h
  include/tencentcloud/car/v20220110/model/ApplyConcurrentRequest.h
  include/tencentcloud/car/v20220110/model/DescribeConcurrentCountResponse.h
  include/tencentcloud/car/v20220110/model/DestroySessionRequest.h
  include/tencentcloud/car/v20220110/model/DescribeApplicationFileInfoRequest.h
  include/tencentcloud/car/v20220110/model/ModifyApplicationVersionRequest.h
  include/tencentcloud/car/v20220110/model/UserApplicationStore.h
  )

set(car_src
  src/v20220110/CarClient.cpp
  src/v20220110/model/CreateApplicationVersionResponse.cpp
  src/v20220110/model/DeleteApplicationRequest.cpp
  src/v20220110/model/ApplicationBaseInfo.cpp
  src/v20220110/model/CreateSessionRequest.cpp
  src/v20220110/model/DescribeApplicationPathListResponse.cpp
  src/v20220110/model/ModifyMobileApplicationInfoRequest.cpp
  src/v20220110/model/StartPublishStreamWithURLResponse.cpp
  src/v20220110/model/CreateApplicationSnapshotRequest.cpp
  src/v20220110/model/DeleteApplicationVersionRequest.cpp
  src/v20220110/model/UserMobileApplicationInfo.cpp
  src/v20220110/model/Filter.cpp
  src/v20220110/model/SetApplicationVersionOnlineRequest.cpp
  src/v20220110/model/CreateApplicationSnapshotResponse.cpp
  src/v20220110/model/DescribeApplicationFileInfoResponse.cpp
  src/v20220110/model/ModifyMobileApplicationInfoResponse.cpp
  src/v20220110/model/ModifyApplicationBaseInfoRequest.cpp
  src/v20220110/model/ModifyApplicationBaseInfoResponse.cpp
  src/v20220110/model/DescribeApplicationVersionRequest.cpp
  src/v20220110/model/DescribeApplicationListResponse.cpp
  src/v20220110/model/DescribeCosCredentialResponse.cpp
  src/v20220110/model/DescribeApplicationStatusRequest.cpp
  src/v20220110/model/CreateApplicationRequest.cpp
  src/v20220110/model/DescribeConcurrentCountRequest.cpp
  src/v20220110/model/DeleteApplicationVersionResponse.cpp
  src/v20220110/model/ModifyApplicationVersionResponse.cpp
  src/v20220110/model/DescribeCosCredentialRequest.cpp
  src/v20220110/model/StopPublishStreamResponse.cpp
  src/v20220110/model/CreateApplicationVersionRequest.cpp
  src/v20220110/model/DescribeApplicationStatusResponse.cpp
  src/v20220110/model/DestroySessionResponse.cpp
  src/v20220110/model/DescribeApplicationVersionResponse.cpp
  src/v20220110/model/DescribeApplicationPathListRequest.cpp
  src/v20220110/model/StartPublishStreamResponse.cpp
  src/v20220110/model/CreateSessionResponse.cpp
  src/v20220110/model/DescribeApplicationListRequest.cpp
  src/v20220110/model/StartPublishStreamRequest.cpp
  src/v20220110/model/UserApplicationInfo.cpp
  src/v20220110/model/DeleteApplicationResponse.cpp
  src/v20220110/model/UserApplicationStatus.cpp
  src/v20220110/model/StopPublishStreamRequest.cpp
  src/v20220110/model/CreateApplicationResponse.cpp
  src/v20220110/model/UserApplicationFileInfo.cpp
  src/v20220110/model/UserApplicationVersion.cpp
  src/v20220110/model/StartPublishStreamWithURLRequest.cpp
  src/v20220110/model/ApplyConcurrentResponse.cpp
  src/v20220110/model/SetApplicationVersionOnlineResponse.cpp
  src/v20220110/model/ApplyConcurrentRequest.cpp
  src/v20220110/model/DescribeConcurrentCountResponse.cpp
  src/v20220110/model/DestroySessionRequest.cpp
  src/v20220110/model/DescribeApplicationFileInfoRequest.cpp
  src/v20220110/model/ModifyApplicationVersionRequest.cpp
  src/v20220110/model/UserApplicationStore.cpp
  )

set(car_include
    include/tencentcloud/car
  )

add_library(car ${LIB_TYPE}
  ${car_public_header}
  ${car_public_header_model}
  ${car_src})

set_target_properties(car
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}car
  )

target_include_directories(car
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(car
  core)

#install(FILES ${car_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/car/v20220110)
#install(FILES ${car_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/car/v20220110/model)
install(DIRECTORY ${car_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS car
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
