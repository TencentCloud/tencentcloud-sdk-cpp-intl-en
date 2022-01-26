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
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageChannelsRequest.h
  include/tencentcloud/mdp/v20200527/model/PointInfo.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageChannelsResponse.h
  include/tencentcloud/mdp/v20200527/model/BindNewLVBDomainWithChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageChannelsResponse.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageChannelsRequest.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelEndpointResponse.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelInputAuthInfoResponse.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageChannelEndpointResponse.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageChannelEndpointsRequest.h
  include/tencentcloud/mdp/v20200527/model/ChannelInfo.h
  include/tencentcloud/mdp/v20200527/model/CacheInfo.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageChannelEndpointsResponse.h
  include/tencentcloud/mdp/v20200527/model/InputInfo.h
  include/tencentcloud/mdp/v20200527/model/InputAuthInfo.h
  include/tencentcloud/mdp/v20200527/model/UnbindCdnDomainWithChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/EndpointInfo.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelEndpointRequest.h
  include/tencentcloud/mdp/v20200527/model/CacheInfoInfo.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageChannelEndpointRequest.h
  include/tencentcloud/mdp/v20200527/model/UnbindCdnDomainWithChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelInputAuthInfoRequest.h
  include/tencentcloud/mdp/v20200527/model/BindNewLVBDomainWithChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/EndpointAuthInfo.h
  )

set(mdp_src
  src/v20200527/MdpClient.cpp
  src/v20200527/model/DeleteStreamPackageChannelsRequest.cpp
  src/v20200527/model/PointInfo.cpp
  src/v20200527/model/DeleteStreamPackageChannelsResponse.cpp
  src/v20200527/model/BindNewLVBDomainWithChannelResponse.cpp
  src/v20200527/model/DescribeStreamPackageChannelsResponse.cpp
  src/v20200527/model/DescribeStreamPackageChannelsRequest.cpp
  src/v20200527/model/ModifyStreamPackageChannelEndpointResponse.cpp
  src/v20200527/model/ModifyStreamPackageChannelInputAuthInfoResponse.cpp
  src/v20200527/model/CreateStreamPackageChannelResponse.cpp
  src/v20200527/model/CreateStreamPackageChannelEndpointResponse.cpp
  src/v20200527/model/DeleteStreamPackageChannelEndpointsRequest.cpp
  src/v20200527/model/ChannelInfo.cpp
  src/v20200527/model/CacheInfo.cpp
  src/v20200527/model/DeleteStreamPackageChannelEndpointsResponse.cpp
  src/v20200527/model/InputInfo.cpp
  src/v20200527/model/InputAuthInfo.cpp
  src/v20200527/model/UnbindCdnDomainWithChannelRequest.cpp
  src/v20200527/model/EndpointInfo.cpp
  src/v20200527/model/DescribeStreamPackageChannelRequest.cpp
  src/v20200527/model/ModifyStreamPackageChannelRequest.cpp
  src/v20200527/model/ModifyStreamPackageChannelEndpointRequest.cpp
  src/v20200527/model/CacheInfoInfo.cpp
  src/v20200527/model/CreateStreamPackageChannelEndpointRequest.cpp
  src/v20200527/model/UnbindCdnDomainWithChannelResponse.cpp
  src/v20200527/model/CreateStreamPackageChannelRequest.cpp
  src/v20200527/model/ModifyStreamPackageChannelInputAuthInfoRequest.cpp
  src/v20200527/model/BindNewLVBDomainWithChannelRequest.cpp
  src/v20200527/model/DescribeStreamPackageChannelResponse.cpp
  src/v20200527/model/ModifyStreamPackageChannelResponse.cpp
  src/v20200527/model/EndpointAuthInfo.cpp
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
