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

set(es_public_header
  include/tencentcloud/es/v20180416/EsClient.h
  )

set(es_public_header_model
  include/tencentcloud/es/v20180416/model/WebNodeTypeInfo.h
  include/tencentcloud/es/v20180416/model/InstanceLog.h
  include/tencentcloud/es/v20180416/model/LocalDiskInfo.h
  include/tencentcloud/es/v20180416/model/IndexPolicyField.h
  include/tencentcloud/es/v20180416/model/NodeInfo.h
  include/tencentcloud/es/v20180416/model/UpgradeInstanceResponse.h
  include/tencentcloud/es/v20180416/model/DescribeIndexMetaResponse.h
  include/tencentcloud/es/v20180416/model/UpdateInstanceResponse.h
  include/tencentcloud/es/v20180416/model/DescribeInstanceOperationsRequest.h
  include/tencentcloud/es/v20180416/model/CreateIndexResponse.h
  include/tencentcloud/es/v20180416/model/OperationDetail.h
  include/tencentcloud/es/v20180416/model/KibanaView.h
  include/tencentcloud/es/v20180416/model/EsPublicAcl.h
  include/tencentcloud/es/v20180416/model/BackingIndexMetaField.h
  include/tencentcloud/es/v20180416/model/DictInfo.h
  include/tencentcloud/es/v20180416/model/RestartInstanceResponse.h
  include/tencentcloud/es/v20180416/model/RestartKibanaRequest.h
  include/tencentcloud/es/v20180416/model/CreateInstanceResponse.h
  include/tencentcloud/es/v20180416/model/IndexSettingsField.h
  include/tencentcloud/es/v20180416/model/DescribeInstanceLogsRequest.h
  include/tencentcloud/es/v20180416/model/UpdateDictionariesRequest.h
  include/tencentcloud/es/v20180416/model/ZoneDetail.h
  include/tencentcloud/es/v20180416/model/UpdateRequestTargetNodeTypesRequest.h
  include/tencentcloud/es/v20180416/model/OperationDuration.h
  include/tencentcloud/es/v20180416/model/NodeView.h
  include/tencentcloud/es/v20180416/model/DescribeIndexListRequest.h
  include/tencentcloud/es/v20180416/model/CosBackup.h
  include/tencentcloud/es/v20180416/model/TagInfo.h
  include/tencentcloud/es/v20180416/model/KeyValue.h
  include/tencentcloud/es/v20180416/model/CreateInstanceRequest.h
  include/tencentcloud/es/v20180416/model/UpdateDictionariesResponse.h
  include/tencentcloud/es/v20180416/model/InstanceInfo.h
  include/tencentcloud/es/v20180416/model/DeleteInstanceResponse.h
  include/tencentcloud/es/v20180416/model/DescribeInstancesResponse.h
  include/tencentcloud/es/v20180416/model/DescribeInstanceLogsResponse.h
  include/tencentcloud/es/v20180416/model/IndexMetaField.h
  include/tencentcloud/es/v20180416/model/UpdatePluginsResponse.h
  include/tencentcloud/es/v20180416/model/RestartInstanceRequest.h
  include/tencentcloud/es/v20180416/model/RestartKibanaResponse.h
  include/tencentcloud/es/v20180416/model/DescribeInstancesRequest.h
  include/tencentcloud/es/v20180416/model/CreateIndexRequest.h
  include/tencentcloud/es/v20180416/model/ClusterView.h
  include/tencentcloud/es/v20180416/model/UpdateInstanceRequest.h
  include/tencentcloud/es/v20180416/model/EsDictionaryInfo.h
  include/tencentcloud/es/v20180416/model/DescribeInstanceOperationsResponse.h
  include/tencentcloud/es/v20180416/model/RestartNodesRequest.h
  include/tencentcloud/es/v20180416/model/UpdatePluginsRequest.h
  include/tencentcloud/es/v20180416/model/GetRequestTargetNodeTypesRequest.h
  include/tencentcloud/es/v20180416/model/KibanaNodeInfo.h
  include/tencentcloud/es/v20180416/model/OperationDurationUpdated.h
  include/tencentcloud/es/v20180416/model/UpgradeLicenseResponse.h
  include/tencentcloud/es/v20180416/model/EsAcl.h
  include/tencentcloud/es/v20180416/model/UpdateRequestTargetNodeTypesResponse.h
  include/tencentcloud/es/v20180416/model/UpdateIndexRequest.h
  include/tencentcloud/es/v20180416/model/MasterNodeInfo.h
  include/tencentcloud/es/v20180416/model/IndexOptionsField.h
  include/tencentcloud/es/v20180416/model/TaskDetail.h
  include/tencentcloud/es/v20180416/model/DeleteInstanceRequest.h
  include/tencentcloud/es/v20180416/model/DescribeViewsResponse.h
  include/tencentcloud/es/v20180416/model/RestartNodesResponse.h
  include/tencentcloud/es/v20180416/model/SubTaskDetail.h
  include/tencentcloud/es/v20180416/model/DescribeIndexMetaRequest.h
  include/tencentcloud/es/v20180416/model/UpgradeInstanceRequest.h
  include/tencentcloud/es/v20180416/model/DeleteIndexResponse.h
  include/tencentcloud/es/v20180416/model/DeleteIndexRequest.h
  include/tencentcloud/es/v20180416/model/EsConfigSetInfo.h
  include/tencentcloud/es/v20180416/model/DescribeViewsRequest.h
  include/tencentcloud/es/v20180416/model/GetRequestTargetNodeTypesResponse.h
  include/tencentcloud/es/v20180416/model/DescribeIndexListResponse.h
  include/tencentcloud/es/v20180416/model/Operation.h
  include/tencentcloud/es/v20180416/model/UpdateIndexResponse.h
  include/tencentcloud/es/v20180416/model/UpgradeLicenseRequest.h
  include/tencentcloud/es/v20180416/model/OptionalWebServiceInfo.h
  )

set(es_src
  src/v20180416/EsClient.cpp
  src/v20180416/model/WebNodeTypeInfo.cpp
  src/v20180416/model/InstanceLog.cpp
  src/v20180416/model/LocalDiskInfo.cpp
  src/v20180416/model/IndexPolicyField.cpp
  src/v20180416/model/NodeInfo.cpp
  src/v20180416/model/UpgradeInstanceResponse.cpp
  src/v20180416/model/DescribeIndexMetaResponse.cpp
  src/v20180416/model/UpdateInstanceResponse.cpp
  src/v20180416/model/DescribeInstanceOperationsRequest.cpp
  src/v20180416/model/CreateIndexResponse.cpp
  src/v20180416/model/OperationDetail.cpp
  src/v20180416/model/KibanaView.cpp
  src/v20180416/model/EsPublicAcl.cpp
  src/v20180416/model/BackingIndexMetaField.cpp
  src/v20180416/model/DictInfo.cpp
  src/v20180416/model/RestartInstanceResponse.cpp
  src/v20180416/model/RestartKibanaRequest.cpp
  src/v20180416/model/CreateInstanceResponse.cpp
  src/v20180416/model/IndexSettingsField.cpp
  src/v20180416/model/DescribeInstanceLogsRequest.cpp
  src/v20180416/model/UpdateDictionariesRequest.cpp
  src/v20180416/model/ZoneDetail.cpp
  src/v20180416/model/UpdateRequestTargetNodeTypesRequest.cpp
  src/v20180416/model/OperationDuration.cpp
  src/v20180416/model/NodeView.cpp
  src/v20180416/model/DescribeIndexListRequest.cpp
  src/v20180416/model/CosBackup.cpp
  src/v20180416/model/TagInfo.cpp
  src/v20180416/model/KeyValue.cpp
  src/v20180416/model/CreateInstanceRequest.cpp
  src/v20180416/model/UpdateDictionariesResponse.cpp
  src/v20180416/model/InstanceInfo.cpp
  src/v20180416/model/DeleteInstanceResponse.cpp
  src/v20180416/model/DescribeInstancesResponse.cpp
  src/v20180416/model/DescribeInstanceLogsResponse.cpp
  src/v20180416/model/IndexMetaField.cpp
  src/v20180416/model/UpdatePluginsResponse.cpp
  src/v20180416/model/RestartInstanceRequest.cpp
  src/v20180416/model/RestartKibanaResponse.cpp
  src/v20180416/model/DescribeInstancesRequest.cpp
  src/v20180416/model/CreateIndexRequest.cpp
  src/v20180416/model/ClusterView.cpp
  src/v20180416/model/UpdateInstanceRequest.cpp
  src/v20180416/model/EsDictionaryInfo.cpp
  src/v20180416/model/DescribeInstanceOperationsResponse.cpp
  src/v20180416/model/RestartNodesRequest.cpp
  src/v20180416/model/UpdatePluginsRequest.cpp
  src/v20180416/model/GetRequestTargetNodeTypesRequest.cpp
  src/v20180416/model/KibanaNodeInfo.cpp
  src/v20180416/model/OperationDurationUpdated.cpp
  src/v20180416/model/UpgradeLicenseResponse.cpp
  src/v20180416/model/EsAcl.cpp
  src/v20180416/model/UpdateRequestTargetNodeTypesResponse.cpp
  src/v20180416/model/UpdateIndexRequest.cpp
  src/v20180416/model/MasterNodeInfo.cpp
  src/v20180416/model/IndexOptionsField.cpp
  src/v20180416/model/TaskDetail.cpp
  src/v20180416/model/DeleteInstanceRequest.cpp
  src/v20180416/model/DescribeViewsResponse.cpp
  src/v20180416/model/RestartNodesResponse.cpp
  src/v20180416/model/SubTaskDetail.cpp
  src/v20180416/model/DescribeIndexMetaRequest.cpp
  src/v20180416/model/UpgradeInstanceRequest.cpp
  src/v20180416/model/DeleteIndexResponse.cpp
  src/v20180416/model/DeleteIndexRequest.cpp
  src/v20180416/model/EsConfigSetInfo.cpp
  src/v20180416/model/DescribeViewsRequest.cpp
  src/v20180416/model/GetRequestTargetNodeTypesResponse.cpp
  src/v20180416/model/DescribeIndexListResponse.cpp
  src/v20180416/model/Operation.cpp
  src/v20180416/model/UpdateIndexResponse.cpp
  src/v20180416/model/UpgradeLicenseRequest.cpp
  src/v20180416/model/OptionalWebServiceInfo.cpp
  )

set(es_include
    include/tencentcloud/es
  )

add_library(es ${LIB_TYPE}
  ${es_public_header}
  ${es_public_header_model}
  ${es_src})

set_target_properties(es
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}es
  )

target_include_directories(es
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(es
  core)

#install(FILES ${es_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/es/v20180416)
#install(FILES ${es_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/es/v20180416/model)
install(DIRECTORY ${es_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS es
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
