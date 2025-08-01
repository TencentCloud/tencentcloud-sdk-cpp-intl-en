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

set(mariadb_public_header
  include/tencentcloud/mariadb/v20170312/MariadbClient.h
  )

set(mariadb_public_header_model
  include/tencentcloud/mariadb/v20170312/model/CreateDBInstanceRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBTmpInstancesRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeAccountPrivilegesResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDatabasesRequest.h
  include/tencentcloud/mariadb/v20170312/model/ParamDesc.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBParametersRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeAccountsRequest.h
  include/tencentcloud/mariadb/v20170312/model/ModifyInstanceNetworkResponse.h
  include/tencentcloud/mariadb/v20170312/model/ModifyInstanceVportResponse.h
  include/tencentcloud/mariadb/v20170312/model/DestroyHourDBInstanceRequest.h
  include/tencentcloud/mariadb/v20170312/model/ModifyInstanceVipResponse.h
  include/tencentcloud/mariadb/v20170312/model/AssociateSecurityGroupsRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBSecurityGroupsResponse.h
  include/tencentcloud/mariadb/v20170312/model/CancelDcnJobResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeFileDownloadUrlRequest.h
  include/tencentcloud/mariadb/v20170312/model/DestroyHourDBInstanceResponse.h
  include/tencentcloud/mariadb/v20170312/model/Account.h
  include/tencentcloud/mariadb/v20170312/model/DescribeProjectSecurityGroupsRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBSlowLogsRequest.h
  include/tencentcloud/mariadb/v20170312/model/CreateAccountRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBParametersResponse.h
  include/tencentcloud/mariadb/v20170312/model/IsolateDBInstanceResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDatabaseTableRequest.h
  include/tencentcloud/mariadb/v20170312/model/CloneAccountResponse.h
  include/tencentcloud/mariadb/v20170312/model/IsolateDedicatedDBInstanceRequest.h
  include/tencentcloud/mariadb/v20170312/model/ModifyAccountDescriptionResponse.h
  include/tencentcloud/mariadb/v20170312/model/ParamConstraint.h
  include/tencentcloud/mariadb/v20170312/model/ModifyDBInstancesProjectResponse.h
  include/tencentcloud/mariadb/v20170312/model/ModifyDBEncryptAttributesResponse.h
  include/tencentcloud/mariadb/v20170312/model/DatabaseView.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBLogFilesRequest.h
  include/tencentcloud/mariadb/v20170312/model/UpgradeDedicatedDBInstanceResponse.h
  include/tencentcloud/mariadb/v20170312/model/NodeInfo.h
  include/tencentcloud/mariadb/v20170312/model/DescribeOrdersResponse.h
  include/tencentcloud/mariadb/v20170312/model/ModifySyncTaskAttributeResponse.h
  include/tencentcloud/mariadb/v20170312/model/DcnDetailItem.h
  include/tencentcloud/mariadb/v20170312/model/ResetAccountPasswordRequest.h
  include/tencentcloud/mariadb/v20170312/model/CopyAccountPrivilegesResponse.h
  include/tencentcloud/mariadb/v20170312/model/DCNReplicaStatus.h
  include/tencentcloud/mariadb/v20170312/model/CreateHourDBInstanceResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribePriceRequest.h
  include/tencentcloud/mariadb/v20170312/model/ParamModifyResult.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBInstancesRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBSecurityGroupsRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeBackupFilesResponse.h
  include/tencentcloud/mariadb/v20170312/model/TablePrivilege.h
  include/tencentcloud/mariadb/v20170312/model/DescribeProjectSecurityGroupsResponse.h
  include/tencentcloud/mariadb/v20170312/model/DatabaseFunction.h
  include/tencentcloud/mariadb/v20170312/model/ViewPrivileges.h
  include/tencentcloud/mariadb/v20170312/model/ResetAccountPasswordResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBInstanceDetailResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDatabaseObjectsRequest.h
  include/tencentcloud/mariadb/v20170312/model/CreateDBInstanceResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBEncryptAttributesResponse.h
  include/tencentcloud/mariadb/v20170312/model/UpgradeDedicatedDBInstanceRequest.h
  include/tencentcloud/mariadb/v20170312/model/DestroyDBInstanceRequest.h
  include/tencentcloud/mariadb/v20170312/model/DatabaseTable.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBInstanceDetailRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBEncryptAttributesRequest.h
  include/tencentcloud/mariadb/v20170312/model/Deal.h
  include/tencentcloud/mariadb/v20170312/model/GrantAccountPrivilegesRequest.h
  include/tencentcloud/mariadb/v20170312/model/DBParamValue.h
  include/tencentcloud/mariadb/v20170312/model/TmpInstance.h
  include/tencentcloud/mariadb/v20170312/model/ModifyDBParametersRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDcnDetailRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeFileDownloadUrlResponse.h
  include/tencentcloud/mariadb/v20170312/model/ModifyDBParametersResponse.h
  include/tencentcloud/mariadb/v20170312/model/CopyAccountPrivilegesRequest.h
  include/tencentcloud/mariadb/v20170312/model/SecurityGroup.h
  include/tencentcloud/mariadb/v20170312/model/DescribeBackupFilesRequest.h
  include/tencentcloud/mariadb/v20170312/model/KillSessionRequest.h
  include/tencentcloud/mariadb/v20170312/model/TerminateDedicatedDBInstanceRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDatabaseObjectsResponse.h
  include/tencentcloud/mariadb/v20170312/model/DeleteAccountRequest.h
  include/tencentcloud/mariadb/v20170312/model/TableColumn.h
  include/tencentcloud/mariadb/v20170312/model/SecurityGroupBound.h
  include/tencentcloud/mariadb/v20170312/model/ColumnPrivilege.h
  include/tencentcloud/mariadb/v20170312/model/ModifySyncTaskAttributeRequest.h
  include/tencentcloud/mariadb/v20170312/model/AssociateSecurityGroupsResponse.h
  include/tencentcloud/mariadb/v20170312/model/DBInstance.h
  include/tencentcloud/mariadb/v20170312/model/DescribePriceResponse.h
  include/tencentcloud/mariadb/v20170312/model/ModifyAccountPrivilegesResponse.h
  include/tencentcloud/mariadb/v20170312/model/Database.h
  include/tencentcloud/mariadb/v20170312/model/GrantAccountPrivilegesResponse.h
  include/tencentcloud/mariadb/v20170312/model/CancelDcnJobRequest.h
  include/tencentcloud/mariadb/v20170312/model/ModifyInstanceVipRequest.h
  include/tencentcloud/mariadb/v20170312/model/ReservedNetResource.h
  include/tencentcloud/mariadb/v20170312/model/DatabasePrivilege.h
  include/tencentcloud/mariadb/v20170312/model/CloseDBExtranetAccessResponse.h
  include/tencentcloud/mariadb/v20170312/model/FunctionPrivilege.h
  include/tencentcloud/mariadb/v20170312/model/ModifyAccountDescriptionRequest.h
  include/tencentcloud/mariadb/v20170312/model/KillSessionResponse.h
  include/tencentcloud/mariadb/v20170312/model/SlowLogData.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDatabasesResponse.h
  include/tencentcloud/mariadb/v20170312/model/InstanceBackupFileItem.h
  include/tencentcloud/mariadb/v20170312/model/DescribeOrdersRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBLogFilesResponse.h
  include/tencentcloud/mariadb/v20170312/model/CloseDBExtranetAccessRequest.h
  include/tencentcloud/mariadb/v20170312/model/ResourceTag.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDcnDetailResponse.h
  include/tencentcloud/mariadb/v20170312/model/IsolateDBInstanceRequest.h
  include/tencentcloud/mariadb/v20170312/model/DCNReplicaConfig.h
  include/tencentcloud/mariadb/v20170312/model/ModifyAccountPrivilegesRequest.h
  include/tencentcloud/mariadb/v20170312/model/DatabaseProcedure.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBTmpInstancesResponse.h
  include/tencentcloud/mariadb/v20170312/model/ModifyDBSyncModeRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeInstanceNodeInfoRequest.h
  include/tencentcloud/mariadb/v20170312/model/CloneAccountRequest.h
  include/tencentcloud/mariadb/v20170312/model/ModifyDBEncryptAttributesRequest.h
  include/tencentcloud/mariadb/v20170312/model/CreateAccountResponse.h
  include/tencentcloud/mariadb/v20170312/model/IsolateDedicatedDBInstanceResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeLogFileRetentionPeriodResponse.h
  include/tencentcloud/mariadb/v20170312/model/TerminateDedicatedDBInstanceResponse.h
  include/tencentcloud/mariadb/v20170312/model/ModifyInstanceNetworkRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBInstancesResponse.h
  include/tencentcloud/mariadb/v20170312/model/ConstraintRange.h
  include/tencentcloud/mariadb/v20170312/model/LogFileInfo.h
  include/tencentcloud/mariadb/v20170312/model/ProcedurePrivilege.h
  include/tencentcloud/mariadb/v20170312/model/DisassociateSecurityGroupsRequest.h
  include/tencentcloud/mariadb/v20170312/model/DBAccount.h
  include/tencentcloud/mariadb/v20170312/model/CreateHourDBInstanceRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDatabaseTableResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeAccountPrivilegesRequest.h
  include/tencentcloud/mariadb/v20170312/model/DescribeAccountsResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeDBSlowLogsResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeLogFileRetentionPeriodRequest.h
  include/tencentcloud/mariadb/v20170312/model/ModifyDBInstancesProjectRequest.h
  include/tencentcloud/mariadb/v20170312/model/DestroyDBInstanceResponse.h
  include/tencentcloud/mariadb/v20170312/model/ModifyDBSyncModeResponse.h
  include/tencentcloud/mariadb/v20170312/model/DescribeInstanceNodeInfoResponse.h
  include/tencentcloud/mariadb/v20170312/model/DisassociateSecurityGroupsResponse.h
  include/tencentcloud/mariadb/v20170312/model/ModifyInstanceVportRequest.h
  include/tencentcloud/mariadb/v20170312/model/DeleteAccountResponse.h
  )

set(mariadb_src
  src/v20170312/MariadbClient.cpp
  src/v20170312/model/CreateDBInstanceRequest.cpp
  src/v20170312/model/DescribeDBTmpInstancesRequest.cpp
  src/v20170312/model/DescribeAccountPrivilegesResponse.cpp
  src/v20170312/model/DescribeDatabasesRequest.cpp
  src/v20170312/model/ParamDesc.cpp
  src/v20170312/model/DescribeDBParametersRequest.cpp
  src/v20170312/model/DescribeAccountsRequest.cpp
  src/v20170312/model/ModifyInstanceNetworkResponse.cpp
  src/v20170312/model/ModifyInstanceVportResponse.cpp
  src/v20170312/model/DestroyHourDBInstanceRequest.cpp
  src/v20170312/model/ModifyInstanceVipResponse.cpp
  src/v20170312/model/AssociateSecurityGroupsRequest.cpp
  src/v20170312/model/DescribeDBSecurityGroupsResponse.cpp
  src/v20170312/model/CancelDcnJobResponse.cpp
  src/v20170312/model/DescribeFileDownloadUrlRequest.cpp
  src/v20170312/model/DestroyHourDBInstanceResponse.cpp
  src/v20170312/model/Account.cpp
  src/v20170312/model/DescribeProjectSecurityGroupsRequest.cpp
  src/v20170312/model/DescribeDBSlowLogsRequest.cpp
  src/v20170312/model/CreateAccountRequest.cpp
  src/v20170312/model/DescribeDBParametersResponse.cpp
  src/v20170312/model/IsolateDBInstanceResponse.cpp
  src/v20170312/model/DescribeDatabaseTableRequest.cpp
  src/v20170312/model/CloneAccountResponse.cpp
  src/v20170312/model/IsolateDedicatedDBInstanceRequest.cpp
  src/v20170312/model/ModifyAccountDescriptionResponse.cpp
  src/v20170312/model/ParamConstraint.cpp
  src/v20170312/model/ModifyDBInstancesProjectResponse.cpp
  src/v20170312/model/ModifyDBEncryptAttributesResponse.cpp
  src/v20170312/model/DatabaseView.cpp
  src/v20170312/model/DescribeDBLogFilesRequest.cpp
  src/v20170312/model/UpgradeDedicatedDBInstanceResponse.cpp
  src/v20170312/model/NodeInfo.cpp
  src/v20170312/model/DescribeOrdersResponse.cpp
  src/v20170312/model/ModifySyncTaskAttributeResponse.cpp
  src/v20170312/model/DcnDetailItem.cpp
  src/v20170312/model/ResetAccountPasswordRequest.cpp
  src/v20170312/model/CopyAccountPrivilegesResponse.cpp
  src/v20170312/model/DCNReplicaStatus.cpp
  src/v20170312/model/CreateHourDBInstanceResponse.cpp
  src/v20170312/model/DescribePriceRequest.cpp
  src/v20170312/model/ParamModifyResult.cpp
  src/v20170312/model/DescribeDBInstancesRequest.cpp
  src/v20170312/model/DescribeDBSecurityGroupsRequest.cpp
  src/v20170312/model/DescribeBackupFilesResponse.cpp
  src/v20170312/model/TablePrivilege.cpp
  src/v20170312/model/DescribeProjectSecurityGroupsResponse.cpp
  src/v20170312/model/DatabaseFunction.cpp
  src/v20170312/model/ViewPrivileges.cpp
  src/v20170312/model/ResetAccountPasswordResponse.cpp
  src/v20170312/model/DescribeDBInstanceDetailResponse.cpp
  src/v20170312/model/DescribeDatabaseObjectsRequest.cpp
  src/v20170312/model/CreateDBInstanceResponse.cpp
  src/v20170312/model/DescribeDBEncryptAttributesResponse.cpp
  src/v20170312/model/UpgradeDedicatedDBInstanceRequest.cpp
  src/v20170312/model/DestroyDBInstanceRequest.cpp
  src/v20170312/model/DatabaseTable.cpp
  src/v20170312/model/DescribeDBInstanceDetailRequest.cpp
  src/v20170312/model/DescribeDBEncryptAttributesRequest.cpp
  src/v20170312/model/Deal.cpp
  src/v20170312/model/GrantAccountPrivilegesRequest.cpp
  src/v20170312/model/DBParamValue.cpp
  src/v20170312/model/TmpInstance.cpp
  src/v20170312/model/ModifyDBParametersRequest.cpp
  src/v20170312/model/DescribeDcnDetailRequest.cpp
  src/v20170312/model/DescribeFileDownloadUrlResponse.cpp
  src/v20170312/model/ModifyDBParametersResponse.cpp
  src/v20170312/model/CopyAccountPrivilegesRequest.cpp
  src/v20170312/model/SecurityGroup.cpp
  src/v20170312/model/DescribeBackupFilesRequest.cpp
  src/v20170312/model/KillSessionRequest.cpp
  src/v20170312/model/TerminateDedicatedDBInstanceRequest.cpp
  src/v20170312/model/DescribeDatabaseObjectsResponse.cpp
  src/v20170312/model/DeleteAccountRequest.cpp
  src/v20170312/model/TableColumn.cpp
  src/v20170312/model/SecurityGroupBound.cpp
  src/v20170312/model/ColumnPrivilege.cpp
  src/v20170312/model/ModifySyncTaskAttributeRequest.cpp
  src/v20170312/model/AssociateSecurityGroupsResponse.cpp
  src/v20170312/model/DBInstance.cpp
  src/v20170312/model/DescribePriceResponse.cpp
  src/v20170312/model/ModifyAccountPrivilegesResponse.cpp
  src/v20170312/model/Database.cpp
  src/v20170312/model/GrantAccountPrivilegesResponse.cpp
  src/v20170312/model/CancelDcnJobRequest.cpp
  src/v20170312/model/ModifyInstanceVipRequest.cpp
  src/v20170312/model/ReservedNetResource.cpp
  src/v20170312/model/DatabasePrivilege.cpp
  src/v20170312/model/CloseDBExtranetAccessResponse.cpp
  src/v20170312/model/FunctionPrivilege.cpp
  src/v20170312/model/ModifyAccountDescriptionRequest.cpp
  src/v20170312/model/KillSessionResponse.cpp
  src/v20170312/model/SlowLogData.cpp
  src/v20170312/model/DescribeDatabasesResponse.cpp
  src/v20170312/model/InstanceBackupFileItem.cpp
  src/v20170312/model/DescribeOrdersRequest.cpp
  src/v20170312/model/DescribeDBLogFilesResponse.cpp
  src/v20170312/model/CloseDBExtranetAccessRequest.cpp
  src/v20170312/model/ResourceTag.cpp
  src/v20170312/model/DescribeDcnDetailResponse.cpp
  src/v20170312/model/IsolateDBInstanceRequest.cpp
  src/v20170312/model/DCNReplicaConfig.cpp
  src/v20170312/model/ModifyAccountPrivilegesRequest.cpp
  src/v20170312/model/DatabaseProcedure.cpp
  src/v20170312/model/DescribeDBTmpInstancesResponse.cpp
  src/v20170312/model/ModifyDBSyncModeRequest.cpp
  src/v20170312/model/DescribeInstanceNodeInfoRequest.cpp
  src/v20170312/model/CloneAccountRequest.cpp
  src/v20170312/model/ModifyDBEncryptAttributesRequest.cpp
  src/v20170312/model/CreateAccountResponse.cpp
  src/v20170312/model/IsolateDedicatedDBInstanceResponse.cpp
  src/v20170312/model/DescribeLogFileRetentionPeriodResponse.cpp
  src/v20170312/model/TerminateDedicatedDBInstanceResponse.cpp
  src/v20170312/model/ModifyInstanceNetworkRequest.cpp
  src/v20170312/model/DescribeDBInstancesResponse.cpp
  src/v20170312/model/ConstraintRange.cpp
  src/v20170312/model/LogFileInfo.cpp
  src/v20170312/model/ProcedurePrivilege.cpp
  src/v20170312/model/DisassociateSecurityGroupsRequest.cpp
  src/v20170312/model/DBAccount.cpp
  src/v20170312/model/CreateHourDBInstanceRequest.cpp
  src/v20170312/model/DescribeDatabaseTableResponse.cpp
  src/v20170312/model/DescribeAccountPrivilegesRequest.cpp
  src/v20170312/model/DescribeAccountsResponse.cpp
  src/v20170312/model/DescribeDBSlowLogsResponse.cpp
  src/v20170312/model/DescribeLogFileRetentionPeriodRequest.cpp
  src/v20170312/model/ModifyDBInstancesProjectRequest.cpp
  src/v20170312/model/DestroyDBInstanceResponse.cpp
  src/v20170312/model/ModifyDBSyncModeResponse.cpp
  src/v20170312/model/DescribeInstanceNodeInfoResponse.cpp
  src/v20170312/model/DisassociateSecurityGroupsResponse.cpp
  src/v20170312/model/ModifyInstanceVportRequest.cpp
  src/v20170312/model/DeleteAccountResponse.cpp
  )

set(mariadb_include
    include/tencentcloud/mariadb
  )

add_library(mariadb ${LIB_TYPE}
  ${mariadb_public_header}
  ${mariadb_public_header_model}
  ${mariadb_src})

set_target_properties(mariadb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mariadb
  )

target_include_directories(mariadb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(mariadb
  core)

#install(FILES ${mariadb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mariadb/v20170312)
#install(FILES ${mariadb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mariadb/v20170312/model)
install(DIRECTORY ${mariadb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS mariadb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
