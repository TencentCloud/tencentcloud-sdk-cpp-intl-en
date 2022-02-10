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

set(tcr_public_header
  include/tencentcloud/tcr/v20190924/TcrClient.h
  )

set(tcr_public_header_model
  include/tencentcloud/tcr/v20190924/model/DeleteImmutableTagRulesResponse.h
  include/tencentcloud/tcr/v20190924/model/ModifyInstanceResponse.h
  include/tencentcloud/tcr/v20190924/model/TaskDetail.h
  include/tencentcloud/tcr/v20190924/model/ReplicationRegistry.h
  include/tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceCreateTasksResponse.h
  include/tencentcloud/tcr/v20190924/model/DeleteMultipleSecurityPolicyResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeReplicationInstancesRequest.h
  include/tencentcloud/tcr/v20190924/model/ManageReplicationRequest.h
  include/tencentcloud/tcr/v20190924/model/ModifyImmutableTagRulesRequest.h
  include/tencentcloud/tcr/v20190924/model/CreateReplicationInstanceResponse.h
  include/tencentcloud/tcr/v20190924/model/CreateInstanceTokenRequest.h
  include/tencentcloud/tcr/v20190924/model/ReplicationRule.h
  include/tencentcloud/tcr/v20190924/model/CreateMultipleSecurityPolicyRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeReplicationInstancesResponse.h
  include/tencentcloud/tcr/v20190924/model/ModifyInstanceRequest.h
  include/tencentcloud/tcr/v20190924/model/CheckInstanceRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceSyncStatusRequest.h
  include/tencentcloud/tcr/v20190924/model/ModifyImmutableTagRulesResponse.h
  include/tencentcloud/tcr/v20190924/model/CreateReplicationInstanceRequest.h
  include/tencentcloud/tcr/v20190924/model/CheckInstanceResponse.h
  include/tencentcloud/tcr/v20190924/model/CreateImmutableTagRulesResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeImmutableTagRulesRequest.h
  include/tencentcloud/tcr/v20190924/model/CreateMultipleSecurityPolicyResponse.h
  include/tencentcloud/tcr/v20190924/model/DeleteImmutableTagRulesRequest.h
  include/tencentcloud/tcr/v20190924/model/ManageReplicationResponse.h
  include/tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceCreateTasksRequest.h
  include/tencentcloud/tcr/v20190924/model/CreateImmutableTagRulesRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeReplicationInstanceSyncStatusResponse.h
  include/tencentcloud/tcr/v20190924/model/ImmutableTagRule.h
  include/tencentcloud/tcr/v20190924/model/DeleteMultipleSecurityPolicyRequest.h
  include/tencentcloud/tcr/v20190924/model/DescribeImmutableTagRulesResponse.h
  include/tencentcloud/tcr/v20190924/model/PeerReplicationOption.h
  include/tencentcloud/tcr/v20190924/model/ReplicationLog.h
  include/tencentcloud/tcr/v20190924/model/SecurityPolicy.h
  include/tencentcloud/tcr/v20190924/model/ReplicationFilter.h
  include/tencentcloud/tcr/v20190924/model/CreateInstanceTokenResponse.h
  )

set(tcr_src
  src/v20190924/TcrClient.cpp
  src/v20190924/model/DeleteImmutableTagRulesResponse.cpp
  src/v20190924/model/ModifyInstanceResponse.cpp
  src/v20190924/model/TaskDetail.cpp
  src/v20190924/model/ReplicationRegistry.cpp
  src/v20190924/model/DescribeReplicationInstanceCreateTasksResponse.cpp
  src/v20190924/model/DeleteMultipleSecurityPolicyResponse.cpp
  src/v20190924/model/DescribeReplicationInstancesRequest.cpp
  src/v20190924/model/ManageReplicationRequest.cpp
  src/v20190924/model/ModifyImmutableTagRulesRequest.cpp
  src/v20190924/model/CreateReplicationInstanceResponse.cpp
  src/v20190924/model/CreateInstanceTokenRequest.cpp
  src/v20190924/model/ReplicationRule.cpp
  src/v20190924/model/CreateMultipleSecurityPolicyRequest.cpp
  src/v20190924/model/DescribeReplicationInstancesResponse.cpp
  src/v20190924/model/ModifyInstanceRequest.cpp
  src/v20190924/model/CheckInstanceRequest.cpp
  src/v20190924/model/DescribeReplicationInstanceSyncStatusRequest.cpp
  src/v20190924/model/ModifyImmutableTagRulesResponse.cpp
  src/v20190924/model/CreateReplicationInstanceRequest.cpp
  src/v20190924/model/CheckInstanceResponse.cpp
  src/v20190924/model/CreateImmutableTagRulesResponse.cpp
  src/v20190924/model/DescribeImmutableTagRulesRequest.cpp
  src/v20190924/model/CreateMultipleSecurityPolicyResponse.cpp
  src/v20190924/model/DeleteImmutableTagRulesRequest.cpp
  src/v20190924/model/ManageReplicationResponse.cpp
  src/v20190924/model/DescribeReplicationInstanceCreateTasksRequest.cpp
  src/v20190924/model/CreateImmutableTagRulesRequest.cpp
  src/v20190924/model/DescribeReplicationInstanceSyncStatusResponse.cpp
  src/v20190924/model/ImmutableTagRule.cpp
  src/v20190924/model/DeleteMultipleSecurityPolicyRequest.cpp
  src/v20190924/model/DescribeImmutableTagRulesResponse.cpp
  src/v20190924/model/PeerReplicationOption.cpp
  src/v20190924/model/ReplicationLog.cpp
  src/v20190924/model/SecurityPolicy.cpp
  src/v20190924/model/ReplicationFilter.cpp
  src/v20190924/model/CreateInstanceTokenResponse.cpp
  )

set(tcr_include
    include/tencentcloud/tcr
  )

add_library(tcr ${LIB_TYPE}
  ${tcr_public_header}
  ${tcr_public_header_model}
  ${tcr_src})

set_target_properties(tcr
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tcr
  )

target_include_directories(tcr
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tcr
  core)

#install(FILES ${tcr_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcr/v20190924)
#install(FILES ${tcr_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcr/v20190924/model)
install(DIRECTORY ${tcr_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tcr
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
