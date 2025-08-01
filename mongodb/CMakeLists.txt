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

set(mongodb_public_header
  include/tencentcloud/mongodb/v20190725/MongodbClient.h
  )

set(mongodb_public_header_model
  include/tencentcloud/mongodb/v20190725/model/ResetDBInstancePasswordResponse.h
  include/tencentcloud/mongodb/v20190725/model/DescribeSpecInfoRequest.h
  include/tencentcloud/mongodb/v20190725/model/CreateDBInstanceRequest.h
  include/tencentcloud/mongodb/v20190725/model/DescribeSecurityGroupResponse.h
  include/tencentcloud/mongodb/v20190725/model/IsolateDBInstanceRequest.h
  include/tencentcloud/mongodb/v20190725/model/IsolateDBInstanceResponse.h
  include/tencentcloud/mongodb/v20190725/model/BackupDownloadTaskStatus.h
  include/tencentcloud/mongodb/v20190725/model/ModifyDBInstanceNetworkAddressResponse.h
  include/tencentcloud/mongodb/v20190725/model/CreateBackupDBInstanceResponse.h
  include/tencentcloud/mongodb/v20190725/model/DBInstancePrice.h
  include/tencentcloud/mongodb/v20190725/model/DescribeSlowLogPatternsResponse.h
  include/tencentcloud/mongodb/v20190725/model/ReplicaSetInfo.h
  include/tencentcloud/mongodb/v20190725/model/CreateDBInstanceHourRequest.h
  include/tencentcloud/mongodb/v20190725/model/AssignProjectRequest.h
  include/tencentcloud/mongodb/v20190725/model/SecurityGroupBound.h
  include/tencentcloud/mongodb/v20190725/model/CreateBackupDownloadTaskResponse.h
  include/tencentcloud/mongodb/v20190725/model/ClientConnection.h
  include/tencentcloud/mongodb/v20190725/model/InquirePriceModifyDBInstanceSpecRequest.h
  include/tencentcloud/mongodb/v20190725/model/BackupInfo.h
  include/tencentcloud/mongodb/v20190725/model/ModifyDBInstanceSecurityGroupResponse.h
  include/tencentcloud/mongodb/v20190725/model/SecurityGroup.h
  include/tencentcloud/mongodb/v20190725/model/DescribeDBInstanceNamespaceResponse.h
  include/tencentcloud/mongodb/v20190725/model/DescribeAsyncRequestInfoRequest.h
  include/tencentcloud/mongodb/v20190725/model/SpecificationInfo.h
  include/tencentcloud/mongodb/v20190725/model/CreateBackupDownloadTaskRequest.h
  include/tencentcloud/mongodb/v20190725/model/DescribeSlowLogPatternsRequest.h
  include/tencentcloud/mongodb/v20190725/model/DescribeSlowLogsResponse.h
  include/tencentcloud/mongodb/v20190725/model/FlushInstanceRouterConfigResponse.h
  include/tencentcloud/mongodb/v20190725/model/InquirePriceModifyDBInstanceSpecResponse.h
  include/tencentcloud/mongodb/v20190725/model/SpecItem.h
  include/tencentcloud/mongodb/v20190725/model/DescribeSpecInfoResponse.h
  include/tencentcloud/mongodb/v20190725/model/InquirePriceRenewDBInstancesResponse.h
  include/tencentcloud/mongodb/v20190725/model/ResetDBInstancePasswordRequest.h
  include/tencentcloud/mongodb/v20190725/model/TagInfo.h
  include/tencentcloud/mongodb/v20190725/model/RenewDBInstancesResponse.h
  include/tencentcloud/mongodb/v20190725/model/DescribeDBInstancesResponse.h
  include/tencentcloud/mongodb/v20190725/model/OfflineIsolatedDBInstanceRequest.h
  include/tencentcloud/mongodb/v20190725/model/InstanceIntegerParam.h
  include/tencentcloud/mongodb/v20190725/model/DescribeDBInstanceDealRequest.h
  include/tencentcloud/mongodb/v20190725/model/InquirePriceCreateDBInstancesRequest.h
  include/tencentcloud/mongodb/v20190725/model/DescribeAsyncRequestInfoResponse.h
  include/tencentcloud/mongodb/v20190725/model/CreateDBInstanceResponse.h
  include/tencentcloud/mongodb/v20190725/model/DescribeInstanceParamsResponse.h
  include/tencentcloud/mongodb/v20190725/model/RemoveNodeList.h
  include/tencentcloud/mongodb/v20190725/model/AssignProjectResponse.h
  include/tencentcloud/mongodb/v20190725/model/BackupDownloadTask.h
  include/tencentcloud/mongodb/v20190725/model/ModifyDBInstanceSpecResponse.h
  include/tencentcloud/mongodb/v20190725/model/DescribeDBBackupsRequest.h
  include/tencentcloud/mongodb/v20190725/model/InstanceMultiParam.h
  include/tencentcloud/mongodb/v20190725/model/ModifyDBInstanceSecurityGroupRequest.h
  include/tencentcloud/mongodb/v20190725/model/DescribeClientConnectionsRequest.h
  include/tencentcloud/mongodb/v20190725/model/DescribeDBInstanceDealResponse.h
  include/tencentcloud/mongodb/v20190725/model/InquirePriceRenewDBInstancesRequest.h
  include/tencentcloud/mongodb/v20190725/model/InstanceTextParam.h
  include/tencentcloud/mongodb/v20190725/model/OfflineIsolatedDBInstanceResponse.h
  include/tencentcloud/mongodb/v20190725/model/DescribeBackupDownloadTaskRequest.h
  include/tencentcloud/mongodb/v20190725/model/DescribeDBInstancesRequest.h
  include/tencentcloud/mongodb/v20190725/model/ModifyNetworkAddress.h
  include/tencentcloud/mongodb/v20190725/model/DescribeSecurityGroupRequest.h
  include/tencentcloud/mongodb/v20190725/model/RenameInstanceRequest.h
  include/tencentcloud/mongodb/v20190725/model/InstanceEnumParam.h
  include/tencentcloud/mongodb/v20190725/model/DescribeBackupDownloadTaskResponse.h
  include/tencentcloud/mongodb/v20190725/model/AddNodeList.h
  include/tencentcloud/mongodb/v20190725/model/RenameInstanceResponse.h
  include/tencentcloud/mongodb/v20190725/model/DescribeClientConnectionsResponse.h
  include/tencentcloud/mongodb/v20190725/model/FlushInstanceRouterConfigRequest.h
  include/tencentcloud/mongodb/v20190725/model/DBInstanceInfo.h
  include/tencentcloud/mongodb/v20190725/model/DescribeSlowLogsRequest.h
  include/tencentcloud/mongodb/v20190725/model/DescribeDBBackupsResponse.h
  include/tencentcloud/mongodb/v20190725/model/InstanceDetail.h
  include/tencentcloud/mongodb/v20190725/model/ModifyDBInstanceSpecRequest.h
  include/tencentcloud/mongodb/v20190725/model/SlowLogPattern.h
  include/tencentcloud/mongodb/v20190725/model/ModifyDBInstanceNetworkAddressRequest.h
  include/tencentcloud/mongodb/v20190725/model/CreateDBInstanceHourResponse.h
  include/tencentcloud/mongodb/v20190725/model/DescribeDBInstanceNamespaceRequest.h
  include/tencentcloud/mongodb/v20190725/model/CreateBackupDBInstanceRequest.h
  include/tencentcloud/mongodb/v20190725/model/DescribeInstanceParamsRequest.h
  include/tencentcloud/mongodb/v20190725/model/InstanceChargePrepaid.h
  include/tencentcloud/mongodb/v20190725/model/InquirePriceCreateDBInstancesResponse.h
  include/tencentcloud/mongodb/v20190725/model/RenewDBInstancesRequest.h
  include/tencentcloud/mongodb/v20190725/model/ShardInfo.h
  )

set(mongodb_src
  src/v20190725/MongodbClient.cpp
  src/v20190725/model/ResetDBInstancePasswordResponse.cpp
  src/v20190725/model/DescribeSpecInfoRequest.cpp
  src/v20190725/model/CreateDBInstanceRequest.cpp
  src/v20190725/model/DescribeSecurityGroupResponse.cpp
  src/v20190725/model/IsolateDBInstanceRequest.cpp
  src/v20190725/model/IsolateDBInstanceResponse.cpp
  src/v20190725/model/BackupDownloadTaskStatus.cpp
  src/v20190725/model/ModifyDBInstanceNetworkAddressResponse.cpp
  src/v20190725/model/CreateBackupDBInstanceResponse.cpp
  src/v20190725/model/DBInstancePrice.cpp
  src/v20190725/model/DescribeSlowLogPatternsResponse.cpp
  src/v20190725/model/ReplicaSetInfo.cpp
  src/v20190725/model/CreateDBInstanceHourRequest.cpp
  src/v20190725/model/AssignProjectRequest.cpp
  src/v20190725/model/SecurityGroupBound.cpp
  src/v20190725/model/CreateBackupDownloadTaskResponse.cpp
  src/v20190725/model/ClientConnection.cpp
  src/v20190725/model/InquirePriceModifyDBInstanceSpecRequest.cpp
  src/v20190725/model/BackupInfo.cpp
  src/v20190725/model/ModifyDBInstanceSecurityGroupResponse.cpp
  src/v20190725/model/SecurityGroup.cpp
  src/v20190725/model/DescribeDBInstanceNamespaceResponse.cpp
  src/v20190725/model/DescribeAsyncRequestInfoRequest.cpp
  src/v20190725/model/SpecificationInfo.cpp
  src/v20190725/model/CreateBackupDownloadTaskRequest.cpp
  src/v20190725/model/DescribeSlowLogPatternsRequest.cpp
  src/v20190725/model/DescribeSlowLogsResponse.cpp
  src/v20190725/model/FlushInstanceRouterConfigResponse.cpp
  src/v20190725/model/InquirePriceModifyDBInstanceSpecResponse.cpp
  src/v20190725/model/SpecItem.cpp
  src/v20190725/model/DescribeSpecInfoResponse.cpp
  src/v20190725/model/InquirePriceRenewDBInstancesResponse.cpp
  src/v20190725/model/ResetDBInstancePasswordRequest.cpp
  src/v20190725/model/TagInfo.cpp
  src/v20190725/model/RenewDBInstancesResponse.cpp
  src/v20190725/model/DescribeDBInstancesResponse.cpp
  src/v20190725/model/OfflineIsolatedDBInstanceRequest.cpp
  src/v20190725/model/InstanceIntegerParam.cpp
  src/v20190725/model/DescribeDBInstanceDealRequest.cpp
  src/v20190725/model/InquirePriceCreateDBInstancesRequest.cpp
  src/v20190725/model/DescribeAsyncRequestInfoResponse.cpp
  src/v20190725/model/CreateDBInstanceResponse.cpp
  src/v20190725/model/DescribeInstanceParamsResponse.cpp
  src/v20190725/model/RemoveNodeList.cpp
  src/v20190725/model/AssignProjectResponse.cpp
  src/v20190725/model/BackupDownloadTask.cpp
  src/v20190725/model/ModifyDBInstanceSpecResponse.cpp
  src/v20190725/model/DescribeDBBackupsRequest.cpp
  src/v20190725/model/InstanceMultiParam.cpp
  src/v20190725/model/ModifyDBInstanceSecurityGroupRequest.cpp
  src/v20190725/model/DescribeClientConnectionsRequest.cpp
  src/v20190725/model/DescribeDBInstanceDealResponse.cpp
  src/v20190725/model/InquirePriceRenewDBInstancesRequest.cpp
  src/v20190725/model/InstanceTextParam.cpp
  src/v20190725/model/OfflineIsolatedDBInstanceResponse.cpp
  src/v20190725/model/DescribeBackupDownloadTaskRequest.cpp
  src/v20190725/model/DescribeDBInstancesRequest.cpp
  src/v20190725/model/ModifyNetworkAddress.cpp
  src/v20190725/model/DescribeSecurityGroupRequest.cpp
  src/v20190725/model/RenameInstanceRequest.cpp
  src/v20190725/model/InstanceEnumParam.cpp
  src/v20190725/model/DescribeBackupDownloadTaskResponse.cpp
  src/v20190725/model/AddNodeList.cpp
  src/v20190725/model/RenameInstanceResponse.cpp
  src/v20190725/model/DescribeClientConnectionsResponse.cpp
  src/v20190725/model/FlushInstanceRouterConfigRequest.cpp
  src/v20190725/model/DBInstanceInfo.cpp
  src/v20190725/model/DescribeSlowLogsRequest.cpp
  src/v20190725/model/DescribeDBBackupsResponse.cpp
  src/v20190725/model/InstanceDetail.cpp
  src/v20190725/model/ModifyDBInstanceSpecRequest.cpp
  src/v20190725/model/SlowLogPattern.cpp
  src/v20190725/model/ModifyDBInstanceNetworkAddressRequest.cpp
  src/v20190725/model/CreateDBInstanceHourResponse.cpp
  src/v20190725/model/DescribeDBInstanceNamespaceRequest.cpp
  src/v20190725/model/CreateBackupDBInstanceRequest.cpp
  src/v20190725/model/DescribeInstanceParamsRequest.cpp
  src/v20190725/model/InstanceChargePrepaid.cpp
  src/v20190725/model/InquirePriceCreateDBInstancesResponse.cpp
  src/v20190725/model/RenewDBInstancesRequest.cpp
  src/v20190725/model/ShardInfo.cpp
  )

set(mongodb_include
    include/tencentcloud/mongodb
  )

add_library(mongodb ${LIB_TYPE}
  ${mongodb_public_header}
  ${mongodb_public_header_model}
  ${mongodb_src})

set_target_properties(mongodb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mongodb
  )

target_include_directories(mongodb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(mongodb
  core)

#install(FILES ${mongodb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mongodb/v20190725)
#install(FILES ${mongodb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mongodb/v20190725/model)
install(DIRECTORY ${mongodb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS mongodb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
