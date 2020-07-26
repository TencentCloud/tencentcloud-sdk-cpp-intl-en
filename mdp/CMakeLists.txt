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

set(mdp_public_header
  include/tencentcloud/mdp/v20200527/MdpClient.h
  )

set(mdp_public_header_model
  include/tencentcloud/mdp/v20200527/model/ModifyMediaPackageChannelEndpointRequest.h
  include/tencentcloud/mdp/v20200527/model/DescribeMediaPackageChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/DeleteMediaPackageChannelEndpointsResponse.h
  include/tencentcloud/mdp/v20200527/model/ModifyMediaPackageChannelInputAuthInfoRequest.h
  include/tencentcloud/mdp/v20200527/model/CreateMediaPackageChannelEndpointRequest.h
  include/tencentcloud/mdp/v20200527/model/CreateMediaPackageChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/ModifyMediaPackageChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/ModifyMediaPackageChannelEndpointResponse.h
  include/tencentcloud/mdp/v20200527/model/ChannelInfo.h
  include/tencentcloud/mdp/v20200527/model/ModifyMediaPackageChannelInputAuthInfoResponse.h
  include/tencentcloud/mdp/v20200527/model/InputInfo.h
  include/tencentcloud/mdp/v20200527/model/InputAuthInfo.h
  include/tencentcloud/mdp/v20200527/model/CreateMediaPackageChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/DeleteMediaPackageChannelEndpointsRequest.h
  include/tencentcloud/mdp/v20200527/model/DeleteMediaPackageChannelsRequest.h
  include/tencentcloud/mdp/v20200527/model/EndpointInfo.h
  include/tencentcloud/mdp/v20200527/model/DescribeMediaPackageChannelsResponse.h
  include/tencentcloud/mdp/v20200527/model/ModifyMediaPackageChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/DescribeMediaPackageChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/PointInfo.h
  include/tencentcloud/mdp/v20200527/model/DeleteMediaPackageChannelsResponse.h
  include/tencentcloud/mdp/v20200527/model/DescribeMediaPackageChannelsRequest.h
  include/tencentcloud/mdp/v20200527/model/EndpointAuthInfo.h
  include/tencentcloud/mdp/v20200527/model/CreateMediaPackageChannelEndpointResponse.h
  )

set(mdp_src
  src/v20200527/MdpClient.cpp
  src/v20200527/model/ModifyMediaPackageChannelEndpointRequest.cpp
  src/v20200527/model/DescribeMediaPackageChannelRequest.cpp
  src/v20200527/model/DeleteMediaPackageChannelEndpointsResponse.cpp
  src/v20200527/model/ModifyMediaPackageChannelInputAuthInfoRequest.cpp
  src/v20200527/model/CreateMediaPackageChannelEndpointRequest.cpp
  src/v20200527/model/CreateMediaPackageChannelResponse.cpp
  src/v20200527/model/ModifyMediaPackageChannelRequest.cpp
  src/v20200527/model/ModifyMediaPackageChannelEndpointResponse.cpp
  src/v20200527/model/ChannelInfo.cpp
  src/v20200527/model/ModifyMediaPackageChannelInputAuthInfoResponse.cpp
  src/v20200527/model/InputInfo.cpp
  src/v20200527/model/InputAuthInfo.cpp
  src/v20200527/model/CreateMediaPackageChannelRequest.cpp
  src/v20200527/model/DeleteMediaPackageChannelEndpointsRequest.cpp
  src/v20200527/model/DeleteMediaPackageChannelsRequest.cpp
  src/v20200527/model/EndpointInfo.cpp
  src/v20200527/model/DescribeMediaPackageChannelsResponse.cpp
  src/v20200527/model/ModifyMediaPackageChannelResponse.cpp
  src/v20200527/model/DescribeMediaPackageChannelResponse.cpp
  src/v20200527/model/PointInfo.cpp
  src/v20200527/model/DeleteMediaPackageChannelsResponse.cpp
  src/v20200527/model/DescribeMediaPackageChannelsRequest.cpp
  src/v20200527/model/EndpointAuthInfo.cpp
  src/v20200527/model/CreateMediaPackageChannelEndpointResponse.cpp
  )

set(mdp_include
    include/tencentcloud/mdp
  )

add_library(mdp ${LIB_TYPE}
  ${mdp_public_header}
  ${mdp_public_header_model}
  ${mdp_src})

set_target_properties(mdp
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mdp
  )

target_include_directories(mdp
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(mdp
  core)

#install(FILES ${mdp_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mdp/v20200527)
#install(FILES ${mdp_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mdp/v20200527/model)
install(DIRECTORY ${mdp_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS mdp
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
