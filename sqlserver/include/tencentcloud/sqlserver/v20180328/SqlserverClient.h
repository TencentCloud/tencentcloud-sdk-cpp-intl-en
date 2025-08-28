/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_SQLSERVERCLIENT_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_SQLSERVERCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/sqlserver/v20180328/model/AssociateSecurityGroupsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/AssociateSecurityGroupsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/BalanceReadOnlyGroupRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/BalanceReadOnlyGroupResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CloneDBRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CloneDBResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CloseInterCommunicationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CloseInterCommunicationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CompleteExpansionRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CompleteExpansionResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateAccountRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateAccountResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBackupRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBackupResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBackupMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBackupMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBasicDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBasicDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBusinessDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBusinessDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBusinessIntelligenceFileRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateBusinessIntelligenceFileResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateCloudDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateCloudDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateCloudReadOnlyDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateCloudReadOnlyDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateDBRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateDBResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateIncrementalMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateIncrementalMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreatePublishSubscribeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreatePublishSubscribeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateReadOnlyDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CreateReadOnlyDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/CutXEventsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/CutXEventsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteAccountRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteAccountResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteBackupMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteBackupMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteBusinessIntelligenceFileRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteBusinessIntelligenceFileResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteDBRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteDBResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteDBInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteIncrementalMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteIncrementalMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeleteMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DeletePublishSubscribeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DeletePublishSubscribeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeAccountPrivilegeByDBRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeAccountPrivilegeByDBResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeAccountsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeAccountsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupByFlowIdRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupByFlowIdResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupCommandRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupCommandResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupFilesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupFilesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupMonitorRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupMonitorResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupStatisticalRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupStatisticalResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupSummaryRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupSummaryResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupUploadSizeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupUploadSizeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBackupsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBusinessIntelligenceFileRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeBusinessIntelligenceFileResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeCollationTimeZoneRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeCollationTimeZoneResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeCrossBackupStatisticalRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeCrossBackupStatisticalResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeCrossRegionZoneRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeCrossRegionZoneResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeCrossRegionsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeCrossRegionsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBCharsetsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBCharsetsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstanceInterRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstanceInterResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstancesAttributeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstancesAttributeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBPrivilegeByAccountRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBPrivilegeByAccountResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBRestoreTimeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBRestoreTimeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBSecurityGroupsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBSecurityGroupsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBsNormalRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDBsNormalResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDatabaseNamesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDatabaseNamesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDatabasesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDatabasesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDatabasesNormalRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeDatabasesNormalResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeFlowStatusRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeFlowStatusResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeHASwitchLogRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeHASwitchLogResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeIncrementalMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeIncrementalMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceByOrdersRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceByOrdersResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceParamRecordsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceParamRecordsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceParamsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceParamsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceTasksRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceTasksResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceTradeParameterRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeInstanceTradeParameterResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeMaintenanceSpanRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeMaintenanceSpanResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeMigrationDetailRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeMigrationDetailResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeMigrationsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeMigrationsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeOrdersRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeOrdersResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeProductConfigRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeProductConfigResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeProjectSecurityGroupsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeProjectSecurityGroupsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribePublishSubscribeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribePublishSubscribeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeReadOnlyGroupAutoWeightRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeReadOnlyGroupAutoWeightResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeReadOnlyGroupByReadOnlyInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeReadOnlyGroupByReadOnlyInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeReadOnlyGroupDetailsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeReadOnlyGroupDetailsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeReadOnlyGroupListRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeReadOnlyGroupListResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeRegionsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeRegionsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeRegularBackupPlanRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeRegularBackupPlanResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeRestoreTaskRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeRestoreTaskResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeRestoreTimeRangeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeRestoreTimeRangeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeRollbackTimeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeRollbackTimeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeSlowlogsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeSlowlogsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeSpecSellStatusRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeSpecSellStatusResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeUpgradeInstanceCheckRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeUpgradeInstanceCheckResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeUploadBackupInfoRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeUploadBackupInfoResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeXEventsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeXEventsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeZonesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DescribeZonesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/DisassociateSecurityGroupsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/DisassociateSecurityGroupsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/InquiryPriceCreateDBInstancesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/InquiryPriceCreateDBInstancesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/InquiryPriceUpgradeDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/InquiryPriceUpgradeDBInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyAccountPrivilegeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyAccountPrivilegeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyAccountRemarkRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyAccountRemarkResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupNameRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupNameResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupStrategyRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyBackupStrategyResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyCloseWanIpRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyCloseWanIpResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyCrossBackupStrategyRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyCrossBackupStrategyResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBEncryptAttributesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBEncryptAttributesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNameRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNameResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNetworkRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNetworkResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNoteRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceNoteResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceProjectRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceProjectResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceSSLRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceSSLResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBNameRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBNameResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBRemarkRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDBRemarkResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDReadableRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDReadableResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseCDCRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseCDCResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseCTRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseCTResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseMdfRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseMdfResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabasePrivilegeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabasePrivilegeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseShrinkMDFRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDatabaseShrinkMDFResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyIncrementalMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyIncrementalMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyInstanceEncryptAttributesRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyInstanceEncryptAttributesResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyInstanceParamRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyInstanceParamResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyMaintenanceSpanRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyMaintenanceSpanResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyOpenWanIpRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyOpenWanIpResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyPublishSubscribeRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyPublishSubscribeResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyPublishSubscribeNameRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyPublishSubscribeNameResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyReadOnlyGroupDetailsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyReadOnlyGroupDetailsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/OpenInterCommunicationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/OpenInterCommunicationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RecycleDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RecycleDBInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RecycleReadOnlyGroupRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RecycleReadOnlyGroupResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RemoveBackupsRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RemoveBackupsResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RenewPostpaidDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RenewPostpaidDBInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/ResetAccountPasswordRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/ResetAccountPasswordResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RestartDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RestartDBInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RestoreInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RestoreInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RollbackInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RollbackInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/RunMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/RunMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/StartBackupMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/StartBackupMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/StartIncrementalMigrationRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/StartIncrementalMigrationResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/StartInstanceXEventRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/StartInstanceXEventResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/SwitchCloudInstanceHARequest.h>
#include <tencentcloud/sqlserver/v20180328/model/SwitchCloudInstanceHAResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/TerminateDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/TerminateDBInstanceResponse.h>
#include <tencentcloud/sqlserver/v20180328/model/UpgradeDBInstanceRequest.h>
#include <tencentcloud/sqlserver/v20180328/model/UpgradeDBInstanceResponse.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            class SqlserverClient : public AbstractClient
            {
            public:
                SqlserverClient(const Credential &credential, const std::string &region);
                SqlserverClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AssociateSecurityGroupsResponse> AssociateSecurityGroupsOutcome;
                typedef std::future<AssociateSecurityGroupsOutcome> AssociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::AssociateSecurityGroupsRequest&, AssociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::BalanceReadOnlyGroupResponse> BalanceReadOnlyGroupOutcome;
                typedef std::future<BalanceReadOnlyGroupOutcome> BalanceReadOnlyGroupOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::BalanceReadOnlyGroupRequest&, BalanceReadOnlyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BalanceReadOnlyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CloneDBResponse> CloneDBOutcome;
                typedef std::future<CloneDBOutcome> CloneDBOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CloneDBRequest&, CloneDBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneDBAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseInterCommunicationResponse> CloseInterCommunicationOutcome;
                typedef std::future<CloseInterCommunicationOutcome> CloseInterCommunicationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CloseInterCommunicationRequest&, CloseInterCommunicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseInterCommunicationAsyncHandler;
                typedef Outcome<Core::Error, Model::CompleteExpansionResponse> CompleteExpansionOutcome;
                typedef std::future<CompleteExpansionOutcome> CompleteExpansionOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CompleteExpansionRequest&, CompleteExpansionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompleteExpansionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccountResponse> CreateAccountOutcome;
                typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateAccountRequest&, CreateAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupResponse> CreateBackupOutcome;
                typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateBackupRequest&, CreateBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupMigrationResponse> CreateBackupMigrationOutcome;
                typedef std::future<CreateBackupMigrationOutcome> CreateBackupMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateBackupMigrationRequest&, CreateBackupMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBasicDBInstancesResponse> CreateBasicDBInstancesOutcome;
                typedef std::future<CreateBasicDBInstancesOutcome> CreateBasicDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateBasicDBInstancesRequest&, CreateBasicDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBasicDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBusinessDBInstancesResponse> CreateBusinessDBInstancesOutcome;
                typedef std::future<CreateBusinessDBInstancesOutcome> CreateBusinessDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateBusinessDBInstancesRequest&, CreateBusinessDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBusinessDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBusinessIntelligenceFileResponse> CreateBusinessIntelligenceFileOutcome;
                typedef std::future<CreateBusinessIntelligenceFileOutcome> CreateBusinessIntelligenceFileOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateBusinessIntelligenceFileRequest&, CreateBusinessIntelligenceFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBusinessIntelligenceFileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudDBInstancesResponse> CreateCloudDBInstancesOutcome;
                typedef std::future<CreateCloudDBInstancesOutcome> CreateCloudDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateCloudDBInstancesRequest&, CreateCloudDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudReadOnlyDBInstancesResponse> CreateCloudReadOnlyDBInstancesOutcome;
                typedef std::future<CreateCloudReadOnlyDBInstancesOutcome> CreateCloudReadOnlyDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateCloudReadOnlyDBInstancesRequest&, CreateCloudReadOnlyDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudReadOnlyDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBResponse> CreateDBOutcome;
                typedef std::future<CreateDBOutcome> CreateDBOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateDBRequest&, CreateDBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBInstancesResponse> CreateDBInstancesOutcome;
                typedef std::future<CreateDBInstancesOutcome> CreateDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateDBInstancesRequest&, CreateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIncrementalMigrationResponse> CreateIncrementalMigrationOutcome;
                typedef std::future<CreateIncrementalMigrationOutcome> CreateIncrementalMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateIncrementalMigrationRequest&, CreateIncrementalMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIncrementalMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMigrationResponse> CreateMigrationOutcome;
                typedef std::future<CreateMigrationOutcome> CreateMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateMigrationRequest&, CreateMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePublishSubscribeResponse> CreatePublishSubscribeOutcome;
                typedef std::future<CreatePublishSubscribeOutcome> CreatePublishSubscribeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreatePublishSubscribeRequest&, CreatePublishSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePublishSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReadOnlyDBInstancesResponse> CreateReadOnlyDBInstancesOutcome;
                typedef std::future<CreateReadOnlyDBInstancesOutcome> CreateReadOnlyDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CreateReadOnlyDBInstancesRequest&, CreateReadOnlyDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReadOnlyDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CutXEventsResponse> CutXEventsOutcome;
                typedef std::future<CutXEventsOutcome> CutXEventsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::CutXEventsRequest&, CutXEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CutXEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccountResponse> DeleteAccountOutcome;
                typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteAccountRequest&, DeleteAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBackupMigrationResponse> DeleteBackupMigrationOutcome;
                typedef std::future<DeleteBackupMigrationOutcome> DeleteBackupMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteBackupMigrationRequest&, DeleteBackupMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBusinessIntelligenceFileResponse> DeleteBusinessIntelligenceFileOutcome;
                typedef std::future<DeleteBusinessIntelligenceFileOutcome> DeleteBusinessIntelligenceFileOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteBusinessIntelligenceFileRequest&, DeleteBusinessIntelligenceFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBusinessIntelligenceFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDBResponse> DeleteDBOutcome;
                typedef std::future<DeleteDBOutcome> DeleteDBOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteDBRequest&, DeleteDBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDBInstanceResponse> DeleteDBInstanceOutcome;
                typedef std::future<DeleteDBInstanceOutcome> DeleteDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteDBInstanceRequest&, DeleteDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIncrementalMigrationResponse> DeleteIncrementalMigrationOutcome;
                typedef std::future<DeleteIncrementalMigrationOutcome> DeleteIncrementalMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteIncrementalMigrationRequest&, DeleteIncrementalMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIncrementalMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMigrationResponse> DeleteMigrationOutcome;
                typedef std::future<DeleteMigrationOutcome> DeleteMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeleteMigrationRequest&, DeleteMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePublishSubscribeResponse> DeletePublishSubscribeOutcome;
                typedef std::future<DeletePublishSubscribeOutcome> DeletePublishSubscribeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DeletePublishSubscribeRequest&, DeletePublishSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePublishSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountPrivilegeByDBResponse> DescribeAccountPrivilegeByDBOutcome;
                typedef std::future<DescribeAccountPrivilegeByDBOutcome> DescribeAccountPrivilegeByDBOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeAccountPrivilegeByDBRequest&, DescribeAccountPrivilegeByDBOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountPrivilegeByDBAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupByFlowIdResponse> DescribeBackupByFlowIdOutcome;
                typedef std::future<DescribeBackupByFlowIdOutcome> DescribeBackupByFlowIdOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupByFlowIdRequest&, DescribeBackupByFlowIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupByFlowIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupCommandResponse> DescribeBackupCommandOutcome;
                typedef std::future<DescribeBackupCommandOutcome> DescribeBackupCommandOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupCommandRequest&, DescribeBackupCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupFilesResponse> DescribeBackupFilesOutcome;
                typedef std::future<DescribeBackupFilesOutcome> DescribeBackupFilesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupFilesRequest&, DescribeBackupFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupMigrationResponse> DescribeBackupMigrationOutcome;
                typedef std::future<DescribeBackupMigrationOutcome> DescribeBackupMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupMigrationRequest&, DescribeBackupMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupMonitorResponse> DescribeBackupMonitorOutcome;
                typedef std::future<DescribeBackupMonitorOutcome> DescribeBackupMonitorOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupMonitorRequest&, DescribeBackupMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupStatisticalResponse> DescribeBackupStatisticalOutcome;
                typedef std::future<DescribeBackupStatisticalOutcome> DescribeBackupStatisticalOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupStatisticalRequest&, DescribeBackupStatisticalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupStatisticalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupSummaryResponse> DescribeBackupSummaryOutcome;
                typedef std::future<DescribeBackupSummaryOutcome> DescribeBackupSummaryOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupSummaryRequest&, DescribeBackupSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupUploadSizeResponse> DescribeBackupUploadSizeOutcome;
                typedef std::future<DescribeBackupUploadSizeOutcome> DescribeBackupUploadSizeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupUploadSizeRequest&, DescribeBackupUploadSizeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupUploadSizeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupsResponse> DescribeBackupsOutcome;
                typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBackupsRequest&, DescribeBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBusinessIntelligenceFileResponse> DescribeBusinessIntelligenceFileOutcome;
                typedef std::future<DescribeBusinessIntelligenceFileOutcome> DescribeBusinessIntelligenceFileOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeBusinessIntelligenceFileRequest&, DescribeBusinessIntelligenceFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBusinessIntelligenceFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCollationTimeZoneResponse> DescribeCollationTimeZoneOutcome;
                typedef std::future<DescribeCollationTimeZoneOutcome> DescribeCollationTimeZoneOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeCollationTimeZoneRequest&, DescribeCollationTimeZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCollationTimeZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCrossBackupStatisticalResponse> DescribeCrossBackupStatisticalOutcome;
                typedef std::future<DescribeCrossBackupStatisticalOutcome> DescribeCrossBackupStatisticalOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeCrossBackupStatisticalRequest&, DescribeCrossBackupStatisticalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossBackupStatisticalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCrossRegionZoneResponse> DescribeCrossRegionZoneOutcome;
                typedef std::future<DescribeCrossRegionZoneOutcome> DescribeCrossRegionZoneOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeCrossRegionZoneRequest&, DescribeCrossRegionZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossRegionZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCrossRegionsResponse> DescribeCrossRegionsOutcome;
                typedef std::future<DescribeCrossRegionsOutcome> DescribeCrossRegionsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeCrossRegionsRequest&, DescribeCrossRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBCharsetsResponse> DescribeDBCharsetsOutcome;
                typedef std::future<DescribeDBCharsetsOutcome> DescribeDBCharsetsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBCharsetsRequest&, DescribeDBCharsetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBCharsetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstanceInterResponse> DescribeDBInstanceInterOutcome;
                typedef std::future<DescribeDBInstanceInterOutcome> DescribeDBInstanceInterOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBInstanceInterRequest&, DescribeDBInstanceInterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstanceInterAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstancesResponse> DescribeDBInstancesOutcome;
                typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBInstancesRequest&, DescribeDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBInstancesAttributeResponse> DescribeDBInstancesAttributeOutcome;
                typedef std::future<DescribeDBInstancesAttributeOutcome> DescribeDBInstancesAttributeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBInstancesAttributeRequest&, DescribeDBInstancesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBInstancesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBPrivilegeByAccountResponse> DescribeDBPrivilegeByAccountOutcome;
                typedef std::future<DescribeDBPrivilegeByAccountOutcome> DescribeDBPrivilegeByAccountOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBPrivilegeByAccountRequest&, DescribeDBPrivilegeByAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBPrivilegeByAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBRestoreTimeResponse> DescribeDBRestoreTimeOutcome;
                typedef std::future<DescribeDBRestoreTimeOutcome> DescribeDBRestoreTimeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBRestoreTimeRequest&, DescribeDBRestoreTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBRestoreTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSecurityGroupsResponse> DescribeDBSecurityGroupsOutcome;
                typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBSecurityGroupsRequest&, DescribeDBSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBsResponse> DescribeDBsOutcome;
                typedef std::future<DescribeDBsOutcome> DescribeDBsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBsRequest&, DescribeDBsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBsNormalResponse> DescribeDBsNormalOutcome;
                typedef std::future<DescribeDBsNormalOutcome> DescribeDBsNormalOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDBsNormalRequest&, DescribeDBsNormalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBsNormalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseNamesResponse> DescribeDatabaseNamesOutcome;
                typedef std::future<DescribeDatabaseNamesOutcome> DescribeDatabaseNamesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDatabaseNamesRequest&, DescribeDatabaseNamesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseNamesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabasesResponse> DescribeDatabasesOutcome;
                typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDatabasesRequest&, DescribeDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabasesNormalResponse> DescribeDatabasesNormalOutcome;
                typedef std::future<DescribeDatabasesNormalOutcome> DescribeDatabasesNormalOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeDatabasesNormalRequest&, DescribeDatabasesNormalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesNormalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowStatusResponse> DescribeFlowStatusOutcome;
                typedef std::future<DescribeFlowStatusOutcome> DescribeFlowStatusOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeFlowStatusRequest&, DescribeFlowStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHASwitchLogResponse> DescribeHASwitchLogOutcome;
                typedef std::future<DescribeHASwitchLogOutcome> DescribeHASwitchLogOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeHASwitchLogRequest&, DescribeHASwitchLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHASwitchLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIncrementalMigrationResponse> DescribeIncrementalMigrationOutcome;
                typedef std::future<DescribeIncrementalMigrationOutcome> DescribeIncrementalMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeIncrementalMigrationRequest&, DescribeIncrementalMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIncrementalMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceByOrdersResponse> DescribeInstanceByOrdersOutcome;
                typedef std::future<DescribeInstanceByOrdersOutcome> DescribeInstanceByOrdersOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeInstanceByOrdersRequest&, DescribeInstanceByOrdersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceByOrdersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceParamRecordsResponse> DescribeInstanceParamRecordsOutcome;
                typedef std::future<DescribeInstanceParamRecordsOutcome> DescribeInstanceParamRecordsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeInstanceParamRecordsRequest&, DescribeInstanceParamRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceParamRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceParamsResponse> DescribeInstanceParamsOutcome;
                typedef std::future<DescribeInstanceParamsOutcome> DescribeInstanceParamsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeInstanceParamsRequest&, DescribeInstanceParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceTasksResponse> DescribeInstanceTasksOutcome;
                typedef std::future<DescribeInstanceTasksOutcome> DescribeInstanceTasksOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeInstanceTasksRequest&, DescribeInstanceTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceTradeParameterResponse> DescribeInstanceTradeParameterOutcome;
                typedef std::future<DescribeInstanceTradeParameterOutcome> DescribeInstanceTradeParameterOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeInstanceTradeParameterRequest&, DescribeInstanceTradeParameterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTradeParameterAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMaintenanceSpanResponse> DescribeMaintenanceSpanOutcome;
                typedef std::future<DescribeMaintenanceSpanOutcome> DescribeMaintenanceSpanOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeMaintenanceSpanRequest&, DescribeMaintenanceSpanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMaintenanceSpanAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrationDetailResponse> DescribeMigrationDetailOutcome;
                typedef std::future<DescribeMigrationDetailOutcome> DescribeMigrationDetailOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeMigrationDetailRequest&, DescribeMigrationDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrationsResponse> DescribeMigrationsOutcome;
                typedef std::future<DescribeMigrationsOutcome> DescribeMigrationsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeMigrationsRequest&, DescribeMigrationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrdersResponse> DescribeOrdersOutcome;
                typedef std::future<DescribeOrdersOutcome> DescribeOrdersOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeOrdersRequest&, DescribeOrdersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrdersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductConfigResponse> DescribeProductConfigOutcome;
                typedef std::future<DescribeProductConfigOutcome> DescribeProductConfigOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeProductConfigRequest&, DescribeProductConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectSecurityGroupsResponse> DescribeProjectSecurityGroupsOutcome;
                typedef std::future<DescribeProjectSecurityGroupsOutcome> DescribeProjectSecurityGroupsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeProjectSecurityGroupsRequest&, DescribeProjectSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublishSubscribeResponse> DescribePublishSubscribeOutcome;
                typedef std::future<DescribePublishSubscribeOutcome> DescribePublishSubscribeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribePublishSubscribeRequest&, DescribePublishSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublishSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReadOnlyGroupAutoWeightResponse> DescribeReadOnlyGroupAutoWeightOutcome;
                typedef std::future<DescribeReadOnlyGroupAutoWeightOutcome> DescribeReadOnlyGroupAutoWeightOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeReadOnlyGroupAutoWeightRequest&, DescribeReadOnlyGroupAutoWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReadOnlyGroupAutoWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReadOnlyGroupByReadOnlyInstanceResponse> DescribeReadOnlyGroupByReadOnlyInstanceOutcome;
                typedef std::future<DescribeReadOnlyGroupByReadOnlyInstanceOutcome> DescribeReadOnlyGroupByReadOnlyInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeReadOnlyGroupByReadOnlyInstanceRequest&, DescribeReadOnlyGroupByReadOnlyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReadOnlyGroupByReadOnlyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReadOnlyGroupDetailsResponse> DescribeReadOnlyGroupDetailsOutcome;
                typedef std::future<DescribeReadOnlyGroupDetailsOutcome> DescribeReadOnlyGroupDetailsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeReadOnlyGroupDetailsRequest&, DescribeReadOnlyGroupDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReadOnlyGroupDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReadOnlyGroupListResponse> DescribeReadOnlyGroupListOutcome;
                typedef std::future<DescribeReadOnlyGroupListOutcome> DescribeReadOnlyGroupListOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeReadOnlyGroupListRequest&, DescribeReadOnlyGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReadOnlyGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegularBackupPlanResponse> DescribeRegularBackupPlanOutcome;
                typedef std::future<DescribeRegularBackupPlanOutcome> DescribeRegularBackupPlanOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeRegularBackupPlanRequest&, DescribeRegularBackupPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegularBackupPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRestoreTaskResponse> DescribeRestoreTaskOutcome;
                typedef std::future<DescribeRestoreTaskOutcome> DescribeRestoreTaskOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeRestoreTaskRequest&, DescribeRestoreTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRestoreTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRestoreTimeRangeResponse> DescribeRestoreTimeRangeOutcome;
                typedef std::future<DescribeRestoreTimeRangeOutcome> DescribeRestoreTimeRangeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeRestoreTimeRangeRequest&, DescribeRestoreTimeRangeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRestoreTimeRangeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRollbackTimeResponse> DescribeRollbackTimeOutcome;
                typedef std::future<DescribeRollbackTimeOutcome> DescribeRollbackTimeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeRollbackTimeRequest&, DescribeRollbackTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRollbackTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowlogsResponse> DescribeSlowlogsOutcome;
                typedef std::future<DescribeSlowlogsOutcome> DescribeSlowlogsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeSlowlogsRequest&, DescribeSlowlogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowlogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpecSellStatusResponse> DescribeSpecSellStatusOutcome;
                typedef std::future<DescribeSpecSellStatusOutcome> DescribeSpecSellStatusOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeSpecSellStatusRequest&, DescribeSpecSellStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpecSellStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUpgradeInstanceCheckResponse> DescribeUpgradeInstanceCheckOutcome;
                typedef std::future<DescribeUpgradeInstanceCheckOutcome> DescribeUpgradeInstanceCheckOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeUpgradeInstanceCheckRequest&, DescribeUpgradeInstanceCheckOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpgradeInstanceCheckAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUploadBackupInfoResponse> DescribeUploadBackupInfoOutcome;
                typedef std::future<DescribeUploadBackupInfoOutcome> DescribeUploadBackupInfoOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeUploadBackupInfoRequest&, DescribeUploadBackupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUploadBackupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeXEventsResponse> DescribeXEventsOutcome;
                typedef std::future<DescribeXEventsOutcome> DescribeXEventsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeXEventsRequest&, DescribeXEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeXEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateSecurityGroupsResponse> DisassociateSecurityGroupsOutcome;
                typedef std::future<DisassociateSecurityGroupsOutcome> DisassociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::DisassociateSecurityGroupsRequest&, DisassociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceCreateDBInstancesResponse> InquiryPriceCreateDBInstancesOutcome;
                typedef std::future<InquiryPriceCreateDBInstancesOutcome> InquiryPriceCreateDBInstancesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::InquiryPriceCreateDBInstancesRequest&, InquiryPriceCreateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceUpgradeDBInstanceResponse> InquiryPriceUpgradeDBInstanceOutcome;
                typedef std::future<InquiryPriceUpgradeDBInstanceOutcome> InquiryPriceUpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::InquiryPriceUpgradeDBInstanceRequest&, InquiryPriceUpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceUpgradeDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountPrivilegeResponse> ModifyAccountPrivilegeOutcome;
                typedef std::future<ModifyAccountPrivilegeOutcome> ModifyAccountPrivilegeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyAccountPrivilegeRequest&, ModifyAccountPrivilegeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPrivilegeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountRemarkResponse> ModifyAccountRemarkOutcome;
                typedef std::future<ModifyAccountRemarkOutcome> ModifyAccountRemarkOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyAccountRemarkRequest&, ModifyAccountRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupMigrationResponse> ModifyBackupMigrationOutcome;
                typedef std::future<ModifyBackupMigrationOutcome> ModifyBackupMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyBackupMigrationRequest&, ModifyBackupMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupNameResponse> ModifyBackupNameOutcome;
                typedef std::future<ModifyBackupNameOutcome> ModifyBackupNameOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyBackupNameRequest&, ModifyBackupNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupStrategyResponse> ModifyBackupStrategyOutcome;
                typedef std::future<ModifyBackupStrategyOutcome> ModifyBackupStrategyOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyBackupStrategyRequest&, ModifyBackupStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloseWanIpResponse> ModifyCloseWanIpOutcome;
                typedef std::future<ModifyCloseWanIpOutcome> ModifyCloseWanIpOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyCloseWanIpRequest&, ModifyCloseWanIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloseWanIpAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCrossBackupStrategyResponse> ModifyCrossBackupStrategyOutcome;
                typedef std::future<ModifyCrossBackupStrategyOutcome> ModifyCrossBackupStrategyOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyCrossBackupStrategyRequest&, ModifyCrossBackupStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCrossBackupStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBEncryptAttributesResponse> ModifyDBEncryptAttributesOutcome;
                typedef std::future<ModifyDBEncryptAttributesOutcome> ModifyDBEncryptAttributesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBEncryptAttributesRequest&, ModifyDBEncryptAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBEncryptAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceNameResponse> ModifyDBInstanceNameOutcome;
                typedef std::future<ModifyDBInstanceNameOutcome> ModifyDBInstanceNameOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBInstanceNameRequest&, ModifyDBInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceNetworkResponse> ModifyDBInstanceNetworkOutcome;
                typedef std::future<ModifyDBInstanceNetworkOutcome> ModifyDBInstanceNetworkOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBInstanceNetworkRequest&, ModifyDBInstanceNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNetworkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceNoteResponse> ModifyDBInstanceNoteOutcome;
                typedef std::future<ModifyDBInstanceNoteOutcome> ModifyDBInstanceNoteOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBInstanceNoteRequest&, ModifyDBInstanceNoteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceNoteAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceProjectResponse> ModifyDBInstanceProjectOutcome;
                typedef std::future<ModifyDBInstanceProjectOutcome> ModifyDBInstanceProjectOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBInstanceProjectRequest&, ModifyDBInstanceProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSSLResponse> ModifyDBInstanceSSLOutcome;
                typedef std::future<ModifyDBInstanceSSLOutcome> ModifyDBInstanceSSLOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBInstanceSSLRequest&, ModifyDBInstanceSSLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSSLAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSecurityGroupsResponse> ModifyDBInstanceSecurityGroupsOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupsOutcome> ModifyDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBInstanceSecurityGroupsRequest&, ModifyDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBNameResponse> ModifyDBNameOutcome;
                typedef std::future<ModifyDBNameOutcome> ModifyDBNameOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBNameRequest&, ModifyDBNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBRemarkResponse> ModifyDBRemarkOutcome;
                typedef std::future<ModifyDBRemarkOutcome> ModifyDBRemarkOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDBRemarkRequest&, ModifyDBRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDReadableResponse> ModifyDReadableOutcome;
                typedef std::future<ModifyDReadableOutcome> ModifyDReadableOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDReadableRequest&, ModifyDReadableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDReadableAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatabaseCDCResponse> ModifyDatabaseCDCOutcome;
                typedef std::future<ModifyDatabaseCDCOutcome> ModifyDatabaseCDCOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDatabaseCDCRequest&, ModifyDatabaseCDCOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseCDCAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatabaseCTResponse> ModifyDatabaseCTOutcome;
                typedef std::future<ModifyDatabaseCTOutcome> ModifyDatabaseCTOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDatabaseCTRequest&, ModifyDatabaseCTOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseCTAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatabaseMdfResponse> ModifyDatabaseMdfOutcome;
                typedef std::future<ModifyDatabaseMdfOutcome> ModifyDatabaseMdfOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDatabaseMdfRequest&, ModifyDatabaseMdfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseMdfAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatabasePrivilegeResponse> ModifyDatabasePrivilegeOutcome;
                typedef std::future<ModifyDatabasePrivilegeOutcome> ModifyDatabasePrivilegeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDatabasePrivilegeRequest&, ModifyDatabasePrivilegeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabasePrivilegeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatabaseShrinkMDFResponse> ModifyDatabaseShrinkMDFOutcome;
                typedef std::future<ModifyDatabaseShrinkMDFOutcome> ModifyDatabaseShrinkMDFOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyDatabaseShrinkMDFRequest&, ModifyDatabaseShrinkMDFOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseShrinkMDFAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIncrementalMigrationResponse> ModifyIncrementalMigrationOutcome;
                typedef std::future<ModifyIncrementalMigrationOutcome> ModifyIncrementalMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyIncrementalMigrationRequest&, ModifyIncrementalMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIncrementalMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceEncryptAttributesResponse> ModifyInstanceEncryptAttributesOutcome;
                typedef std::future<ModifyInstanceEncryptAttributesOutcome> ModifyInstanceEncryptAttributesOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyInstanceEncryptAttributesRequest&, ModifyInstanceEncryptAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceEncryptAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceParamResponse> ModifyInstanceParamOutcome;
                typedef std::future<ModifyInstanceParamOutcome> ModifyInstanceParamOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyInstanceParamRequest&, ModifyInstanceParamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceParamAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMaintenanceSpanResponse> ModifyMaintenanceSpanOutcome;
                typedef std::future<ModifyMaintenanceSpanOutcome> ModifyMaintenanceSpanOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyMaintenanceSpanRequest&, ModifyMaintenanceSpanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMaintenanceSpanAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMigrationResponse> ModifyMigrationOutcome;
                typedef std::future<ModifyMigrationOutcome> ModifyMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyMigrationRequest&, ModifyMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOpenWanIpResponse> ModifyOpenWanIpOutcome;
                typedef std::future<ModifyOpenWanIpOutcome> ModifyOpenWanIpOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyOpenWanIpRequest&, ModifyOpenWanIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOpenWanIpAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPublishSubscribeResponse> ModifyPublishSubscribeOutcome;
                typedef std::future<ModifyPublishSubscribeOutcome> ModifyPublishSubscribeOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyPublishSubscribeRequest&, ModifyPublishSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPublishSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPublishSubscribeNameResponse> ModifyPublishSubscribeNameOutcome;
                typedef std::future<ModifyPublishSubscribeNameOutcome> ModifyPublishSubscribeNameOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyPublishSubscribeNameRequest&, ModifyPublishSubscribeNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPublishSubscribeNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyReadOnlyGroupDetailsResponse> ModifyReadOnlyGroupDetailsOutcome;
                typedef std::future<ModifyReadOnlyGroupDetailsOutcome> ModifyReadOnlyGroupDetailsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ModifyReadOnlyGroupDetailsRequest&, ModifyReadOnlyGroupDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReadOnlyGroupDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenInterCommunicationResponse> OpenInterCommunicationOutcome;
                typedef std::future<OpenInterCommunicationOutcome> OpenInterCommunicationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::OpenInterCommunicationRequest&, OpenInterCommunicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenInterCommunicationAsyncHandler;
                typedef Outcome<Core::Error, Model::RecycleDBInstanceResponse> RecycleDBInstanceOutcome;
                typedef std::future<RecycleDBInstanceOutcome> RecycleDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RecycleDBInstanceRequest&, RecycleDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecycleDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RecycleReadOnlyGroupResponse> RecycleReadOnlyGroupOutcome;
                typedef std::future<RecycleReadOnlyGroupOutcome> RecycleReadOnlyGroupOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RecycleReadOnlyGroupRequest&, RecycleReadOnlyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecycleReadOnlyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveBackupsResponse> RemoveBackupsOutcome;
                typedef std::future<RemoveBackupsOutcome> RemoveBackupsOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RemoveBackupsRequest&, RemoveBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewPostpaidDBInstanceResponse> RenewPostpaidDBInstanceOutcome;
                typedef std::future<RenewPostpaidDBInstanceOutcome> RenewPostpaidDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RenewPostpaidDBInstanceRequest&, RenewPostpaidDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewPostpaidDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAccountPasswordResponse> ResetAccountPasswordOutcome;
                typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::ResetAccountPasswordRequest&, ResetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartDBInstanceResponse> RestartDBInstanceOutcome;
                typedef std::future<RestartDBInstanceOutcome> RestartDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RestartDBInstanceRequest&, RestartDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RestoreInstanceResponse> RestoreInstanceOutcome;
                typedef std::future<RestoreInstanceOutcome> RestoreInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RestoreInstanceRequest&, RestoreInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestoreInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackInstanceResponse> RollbackInstanceOutcome;
                typedef std::future<RollbackInstanceOutcome> RollbackInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RollbackInstanceRequest&, RollbackInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RunMigrationResponse> RunMigrationOutcome;
                typedef std::future<RunMigrationOutcome> RunMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::RunMigrationRequest&, RunMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::StartBackupMigrationResponse> StartBackupMigrationOutcome;
                typedef std::future<StartBackupMigrationOutcome> StartBackupMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::StartBackupMigrationRequest&, StartBackupMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartBackupMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::StartIncrementalMigrationResponse> StartIncrementalMigrationOutcome;
                typedef std::future<StartIncrementalMigrationOutcome> StartIncrementalMigrationOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::StartIncrementalMigrationRequest&, StartIncrementalMigrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartIncrementalMigrationAsyncHandler;
                typedef Outcome<Core::Error, Model::StartInstanceXEventResponse> StartInstanceXEventOutcome;
                typedef std::future<StartInstanceXEventOutcome> StartInstanceXEventOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::StartInstanceXEventRequest&, StartInstanceXEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartInstanceXEventAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchCloudInstanceHAResponse> SwitchCloudInstanceHAOutcome;
                typedef std::future<SwitchCloudInstanceHAOutcome> SwitchCloudInstanceHAOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::SwitchCloudInstanceHARequest&, SwitchCloudInstanceHAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchCloudInstanceHAAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateDBInstanceResponse> TerminateDBInstanceOutcome;
                typedef std::future<TerminateDBInstanceOutcome> TerminateDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::TerminateDBInstanceRequest&, TerminateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeDBInstanceResponse> UpgradeDBInstanceOutcome;
                typedef std::future<UpgradeDBInstanceOutcome> UpgradeDBInstanceOutcomeCallable;
                typedef std::function<void(const SqlserverClient*, const Model::UpgradeDBInstanceRequest&, UpgradeDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeDBInstanceAsyncHandler;



                /**
                 *This API is used to bind security groups to instances in batches.
                 * @param req AssociateSecurityGroupsRequest
                 * @return AssociateSecurityGroupsOutcome
                 */
                AssociateSecurityGroupsOutcome AssociateSecurityGroups(const Model::AssociateSecurityGroupsRequest &request);
                void AssociateSecurityGroupsAsync(const Model::AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateSecurityGroupsOutcomeCallable AssociateSecurityGroupsCallable(const Model::AssociateSecurityGroupsRequest& request);

                /**
                 *This API is used to balance the routing weight of each read-only instance according to the predefined weights. The DescribeReadOnlyGroupAutoWeight API is used to query the predefined weights.
                 * @param req BalanceReadOnlyGroupRequest
                 * @return BalanceReadOnlyGroupOutcome
                 */
                BalanceReadOnlyGroupOutcome BalanceReadOnlyGroup(const Model::BalanceReadOnlyGroupRequest &request);
                void BalanceReadOnlyGroupAsync(const Model::BalanceReadOnlyGroupRequest& request, const BalanceReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BalanceReadOnlyGroupOutcomeCallable BalanceReadOnlyGroupCallable(const Model::BalanceReadOnlyGroupRequest& request);

                /**
                 *This API is used to clone and rename databases of an instance. The clones are still in the instance from which they are cloned.
                 * @param req CloneDBRequest
                 * @return CloneDBOutcome
                 */
                CloneDBOutcome CloneDB(const Model::CloneDBRequest &request);
                void CloneDBAsync(const Model::CloneDBRequest& request, const CloneDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneDBOutcomeCallable CloneDBCallable(const Model::CloneDBRequest& request);

                /**
                 *This API is used to disable instance interconnection.
                 * @param req CloseInterCommunicationRequest
                 * @return CloseInterCommunicationOutcome
                 */
                CloseInterCommunicationOutcome CloseInterCommunication(const Model::CloseInterCommunicationRequest &request);
                void CloseInterCommunicationAsync(const Model::CloseInterCommunicationRequest& request, const CloseInterCommunicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseInterCommunicationOutcomeCallable CloseInterCommunicationCallable(const Model::CloseInterCommunicationRequest& request);

                /**
                 *This API is used to complete the instance upgrade and switch immediately without waiting for the maintenance window when the instance status is "upgrade pending switch" after scale-out is initiated. This API needs to be called during off-peak hours of the instance. Some databases cannot be accessed before the switch is completed.
                 * @param req CompleteExpansionRequest
                 * @return CompleteExpansionOutcome
                 */
                CompleteExpansionOutcome CompleteExpansion(const Model::CompleteExpansionRequest &request);
                void CompleteExpansionAsync(const Model::CompleteExpansionRequest& request, const CompleteExpansionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CompleteExpansionOutcomeCallable CompleteExpansionCallable(const Model::CompleteExpansionRequest& request);

                /**
                 *This API is used to create an instance account.
                 * @param req CreateAccountRequest
                 * @return CreateAccountOutcome
                 */
                CreateAccountOutcome CreateAccount(const Model::CreateAccountRequest &request);
                void CreateAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccountOutcomeCallable CreateAccountCallable(const Model::CreateAccountRequest& request);

                /**
                 *This API is used to create a backup.
                 * @param req CreateBackupRequest
                 * @return CreateBackupOutcome
                 */
                CreateBackupOutcome CreateBackup(const Model::CreateBackupRequest &request);
                void CreateBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupOutcomeCallable CreateBackupCallable(const Model::CreateBackupRequest& request);

                /**
                 *This API is used to create a backup import task.
                 * @param req CreateBackupMigrationRequest
                 * @return CreateBackupMigrationOutcome
                 */
                CreateBackupMigrationOutcome CreateBackupMigration(const Model::CreateBackupMigrationRequest &request);
                void CreateBackupMigrationAsync(const Model::CreateBackupMigrationRequest& request, const CreateBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupMigrationOutcomeCallable CreateBackupMigrationCallable(const Model::CreateBackupMigrationRequest& request);

                /**
                 *This API is used to create basic edition instances (cloud disk).
                 * @param req CreateBasicDBInstancesRequest
                 * @return CreateBasicDBInstancesOutcome
                 */
                CreateBasicDBInstancesOutcome CreateBasicDBInstances(const Model::CreateBasicDBInstancesRequest &request);
                void CreateBasicDBInstancesAsync(const Model::CreateBasicDBInstancesRequest& request, const CreateBasicDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBasicDBInstancesOutcomeCallable CreateBasicDBInstancesCallable(const Model::CreateBasicDBInstancesRequest& request);

                /**
                 *This API is used to create business intelligence service instances (cloud disk).
                 * @param req CreateBusinessDBInstancesRequest
                 * @return CreateBusinessDBInstancesOutcome
                 */
                CreateBusinessDBInstancesOutcome CreateBusinessDBInstances(const Model::CreateBusinessDBInstancesRequest &request);
                void CreateBusinessDBInstancesAsync(const Model::CreateBusinessDBInstancesRequest& request, const CreateBusinessDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBusinessDBInstancesOutcomeCallable CreateBusinessDBInstancesCallable(const Model::CreateBusinessDBInstancesRequest& request);

                /**
                 *This API is used to add a business intelligence service file.
                 * @param req CreateBusinessIntelligenceFileRequest
                 * @return CreateBusinessIntelligenceFileOutcome
                 */
                CreateBusinessIntelligenceFileOutcome CreateBusinessIntelligenceFile(const Model::CreateBusinessIntelligenceFileRequest &request);
                void CreateBusinessIntelligenceFileAsync(const Model::CreateBusinessIntelligenceFileRequest& request, const CreateBusinessIntelligenceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBusinessIntelligenceFileOutcomeCallable CreateBusinessIntelligenceFileCallable(const Model::CreateBusinessIntelligenceFileRequest& request);

                /**
                 *This API is used to create high-availability instances (cloud disk).
                 * @param req CreateCloudDBInstancesRequest
                 * @return CreateCloudDBInstancesOutcome
                 */
                CreateCloudDBInstancesOutcome CreateCloudDBInstances(const Model::CreateCloudDBInstancesRequest &request);
                void CreateCloudDBInstancesAsync(const Model::CreateCloudDBInstancesRequest& request, const CreateCloudDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudDBInstancesOutcomeCallable CreateCloudDBInstancesCallable(const Model::CreateCloudDBInstancesRequest& request);

                /**
                 *This API is used to create read-only instances (cloud disk).
                 * @param req CreateCloudReadOnlyDBInstancesRequest
                 * @return CreateCloudReadOnlyDBInstancesOutcome
                 */
                CreateCloudReadOnlyDBInstancesOutcome CreateCloudReadOnlyDBInstances(const Model::CreateCloudReadOnlyDBInstancesRequest &request);
                void CreateCloudReadOnlyDBInstancesAsync(const Model::CreateCloudReadOnlyDBInstancesRequest& request, const CreateCloudReadOnlyDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudReadOnlyDBInstancesOutcomeCallable CreateCloudReadOnlyDBInstancesCallable(const Model::CreateCloudReadOnlyDBInstancesRequest& request);

                /**
                 *This API is used to create a database.
                 * @param req CreateDBRequest
                 * @return CreateDBOutcome
                 */
                CreateDBOutcome CreateDB(const Model::CreateDBRequest &request);
                void CreateDBAsync(const Model::CreateDBRequest& request, const CreateDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBOutcomeCallable CreateDBCallable(const Model::CreateDBRequest& request);

                /**
                 *This API is used to create high-availability instances (local disk).
                 * @param req CreateDBInstancesRequest
                 * @return CreateDBInstancesOutcome
                 */
                CreateDBInstancesOutcome CreateDBInstances(const Model::CreateDBInstancesRequest &request);
                void CreateDBInstancesAsync(const Model::CreateDBInstancesRequest& request, const CreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBInstancesOutcomeCallable CreateDBInstancesCallable(const Model::CreateDBInstancesRequest& request);

                /**
                 *This API is used to create an incremental backup import task.
                 * @param req CreateIncrementalMigrationRequest
                 * @return CreateIncrementalMigrationOutcome
                 */
                CreateIncrementalMigrationOutcome CreateIncrementalMigration(const Model::CreateIncrementalMigrationRequest &request);
                void CreateIncrementalMigrationAsync(const Model::CreateIncrementalMigrationRequest& request, const CreateIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIncrementalMigrationOutcomeCallable CreateIncrementalMigrationCallable(const Model::CreateIncrementalMigrationRequest& request);

                /**
                 *This API is used to create a migration task.
                 * @param req CreateMigrationRequest
                 * @return CreateMigrationOutcome
                 */
                CreateMigrationOutcome CreateMigration(const Model::CreateMigrationRequest &request);
                void CreateMigrationAsync(const Model::CreateMigrationRequest& request, const CreateMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMigrationOutcomeCallable CreateMigrationCallable(const Model::CreateMigrationRequest& request);

                /**
                 *This API is used to create a publish/subscribe relationship between two databases. A subscriber cannot act as a publisher, and a publisher can have multiple subscriber instances.
                 * @param req CreatePublishSubscribeRequest
                 * @return CreatePublishSubscribeOutcome
                 */
                CreatePublishSubscribeOutcome CreatePublishSubscribe(const Model::CreatePublishSubscribeRequest &request);
                void CreatePublishSubscribeAsync(const Model::CreatePublishSubscribeRequest& request, const CreatePublishSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePublishSubscribeOutcomeCallable CreatePublishSubscribeCallable(const Model::CreatePublishSubscribeRequest& request);

                /**
                 *This API is used to create read-only instances (local disk).
                 * @param req CreateReadOnlyDBInstancesRequest
                 * @return CreateReadOnlyDBInstancesOutcome
                 */
                CreateReadOnlyDBInstancesOutcome CreateReadOnlyDBInstances(const Model::CreateReadOnlyDBInstancesRequest &request);
                void CreateReadOnlyDBInstancesAsync(const Model::CreateReadOnlyDBInstancesRequest& request, const CreateReadOnlyDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReadOnlyDBInstancesOutcomeCallable CreateReadOnlyDBInstancesCallable(const Model::CreateReadOnlyDBInstancesRequest& request);

                /**
                 *This API is used to manually cut block logs and deadlock logs.
                 * @param req CutXEventsRequest
                 * @return CutXEventsOutcome
                 */
                CutXEventsOutcome CutXEvents(const Model::CutXEventsRequest &request);
                void CutXEventsAsync(const Model::CutXEventsRequest& request, const CutXEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CutXEventsOutcomeCallable CutXEventsCallable(const Model::CutXEventsRequest& request);

                /**
                 *This API is used to delete an instance account.
                 * @param req DeleteAccountRequest
                 * @return DeleteAccountOutcome
                 */
                DeleteAccountOutcome DeleteAccount(const Model::DeleteAccountRequest &request);
                void DeleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccountOutcomeCallable DeleteAccountCallable(const Model::DeleteAccountRequest& request);

                /**
                 *This API is used to delete a backup import task.
                 * @param req DeleteBackupMigrationRequest
                 * @return DeleteBackupMigrationOutcome
                 */
                DeleteBackupMigrationOutcome DeleteBackupMigration(const Model::DeleteBackupMigrationRequest &request);
                void DeleteBackupMigrationAsync(const Model::DeleteBackupMigrationRequest& request, const DeleteBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBackupMigrationOutcomeCallable DeleteBackupMigrationCallable(const Model::DeleteBackupMigrationRequest& request);

                /**
                 *This API is used to delete a business intelligence service file.
                 * @param req DeleteBusinessIntelligenceFileRequest
                 * @return DeleteBusinessIntelligenceFileOutcome
                 */
                DeleteBusinessIntelligenceFileOutcome DeleteBusinessIntelligenceFile(const Model::DeleteBusinessIntelligenceFileRequest &request);
                void DeleteBusinessIntelligenceFileAsync(const Model::DeleteBusinessIntelligenceFileRequest& request, const DeleteBusinessIntelligenceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBusinessIntelligenceFileOutcomeCallable DeleteBusinessIntelligenceFileCallable(const Model::DeleteBusinessIntelligenceFileRequest& request);

                /**
                 *This API is used to drop a database.
                 * @param req DeleteDBRequest
                 * @return DeleteDBOutcome
                 */
                DeleteDBOutcome DeleteDB(const Model::DeleteDBRequest &request);
                void DeleteDBAsync(const Model::DeleteDBRequest& request, const DeleteDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDBOutcomeCallable DeleteDBCallable(const Model::DeleteDBRequest& request);

                /**
                 *This API is used to release SQL server instances (eliminated immediately) in the recycle bin. The released instances will be physically terminated after being retained for a period of time. Their publish-subscribe relationships will be automatically disassociated, and their RO replicas will be automatically released.
                 * @param req DeleteDBInstanceRequest
                 * @return DeleteDBInstanceOutcome
                 */
                DeleteDBInstanceOutcome DeleteDBInstance(const Model::DeleteDBInstanceRequest &request);
                void DeleteDBInstanceAsync(const Model::DeleteDBInstanceRequest& request, const DeleteDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDBInstanceOutcomeCallable DeleteDBInstanceCallable(const Model::DeleteDBInstanceRequest& request);

                /**
                 *This API is used to delete an incremental backup import task.
                 * @param req DeleteIncrementalMigrationRequest
                 * @return DeleteIncrementalMigrationOutcome
                 */
                DeleteIncrementalMigrationOutcome DeleteIncrementalMigration(const Model::DeleteIncrementalMigrationRequest &request);
                void DeleteIncrementalMigrationAsync(const Model::DeleteIncrementalMigrationRequest& request, const DeleteIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIncrementalMigrationOutcomeCallable DeleteIncrementalMigrationCallable(const Model::DeleteIncrementalMigrationRequest& request);

                /**
                 *This API is used to delete a migration task.
                 * @param req DeleteMigrationRequest
                 * @return DeleteMigrationOutcome
                 */
                DeleteMigrationOutcome DeleteMigration(const Model::DeleteMigrationRequest &request);
                void DeleteMigrationAsync(const Model::DeleteMigrationRequest& request, const DeleteMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMigrationOutcomeCallable DeleteMigrationCallable(const Model::DeleteMigrationRequest& request);

                /**
                 *This API is used to delete the publish/subscribe relationship between two databases.
                 * @param req DeletePublishSubscribeRequest
                 * @return DeletePublishSubscribeOutcome
                 */
                DeletePublishSubscribeOutcome DeletePublishSubscribe(const Model::DeletePublishSubscribeRequest &request);
                void DeletePublishSubscribeAsync(const Model::DeletePublishSubscribeRequest& request, const DeletePublishSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePublishSubscribeOutcomeCallable DeletePublishSubscribeCallable(const Model::DeletePublishSubscribeRequest& request);

                /**
                 *This API is used to query information on the account and permissions associated with the database.
                 * @param req DescribeAccountPrivilegeByDBRequest
                 * @return DescribeAccountPrivilegeByDBOutcome
                 */
                DescribeAccountPrivilegeByDBOutcome DescribeAccountPrivilegeByDB(const Model::DescribeAccountPrivilegeByDBRequest &request);
                void DescribeAccountPrivilegeByDBAsync(const Model::DescribeAccountPrivilegeByDBRequest& request, const DescribeAccountPrivilegeByDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountPrivilegeByDBOutcomeCallable DescribeAccountPrivilegeByDBCallable(const Model::DescribeAccountPrivilegeByDBRequest& request);

                /**
                 *This API is used to pull the list of instance accounts.
                 * @param req DescribeAccountsRequest
                 * @return DescribeAccountsOutcome
                 */
                DescribeAccountsOutcome DescribeAccounts(const Model::DescribeAccountsRequest &request);
                void DescribeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountsOutcomeCallable DescribeAccountsCallable(const Model::DescribeAccountsRequest& request);

                /**
                 *This API is used to query the created backup details through the backup creation process ID. The process ID can be obtained through the CreateBackup API.
                 * @param req DescribeBackupByFlowIdRequest
                 * @return DescribeBackupByFlowIdOutcome
                 */
                DescribeBackupByFlowIdOutcome DescribeBackupByFlowId(const Model::DescribeBackupByFlowIdRequest &request);
                void DescribeBackupByFlowIdAsync(const Model::DescribeBackupByFlowIdRequest& request, const DescribeBackupByFlowIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupByFlowIdOutcomeCallable DescribeBackupByFlowIdCallable(const Model::DescribeBackupByFlowIdRequest& request);

                /**
                 *This API is used to query the commands of creating backups canonically.
                 * @param req DescribeBackupCommandRequest
                 * @return DescribeBackupCommandOutcome
                 */
                DescribeBackupCommandOutcome DescribeBackupCommand(const Model::DescribeBackupCommandRequest &request);
                void DescribeBackupCommandAsync(const Model::DescribeBackupCommandRequest& request, const DescribeBackupCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupCommandOutcomeCallable DescribeBackupCommandCallable(const Model::DescribeBackupCommandRequest& request);

                /**
                 *This API is used to query the details of an unarchived backup.
                 * @param req DescribeBackupFilesRequest
                 * @return DescribeBackupFilesOutcome
                 */
                DescribeBackupFilesOutcome DescribeBackupFiles(const Model::DescribeBackupFilesRequest &request);
                void DescribeBackupFilesAsync(const Model::DescribeBackupFilesRequest& request, const DescribeBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupFilesOutcomeCallable DescribeBackupFilesCallable(const Model::DescribeBackupFilesRequest& request);

                /**
                 *This API is used to create an incremental backup import task.
                 * @param req DescribeBackupMigrationRequest
                 * @return DescribeBackupMigrationOutcome
                 */
                DescribeBackupMigrationOutcome DescribeBackupMigration(const Model::DescribeBackupMigrationRequest &request);
                void DescribeBackupMigrationAsync(const Model::DescribeBackupMigrationRequest& request, const DescribeBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupMigrationOutcomeCallable DescribeBackupMigrationCallable(const Model::DescribeBackupMigrationRequest& request);

                /**
                 *This API is used to query backup space usage details.
                 * @param req DescribeBackupMonitorRequest
                 * @return DescribeBackupMonitorOutcome
                 */
                DescribeBackupMonitorOutcome DescribeBackupMonitor(const Model::DescribeBackupMonitorRequest &request);
                void DescribeBackupMonitorAsync(const Model::DescribeBackupMonitorRequest& request, const DescribeBackupMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupMonitorOutcomeCallable DescribeBackupMonitorCallable(const Model::DescribeBackupMonitorRequest& request);

                /**
                 *This API is used to query the real-time statistics list of backups.
                 * @param req DescribeBackupStatisticalRequest
                 * @return DescribeBackupStatisticalOutcome
                 */
                DescribeBackupStatisticalOutcome DescribeBackupStatistical(const Model::DescribeBackupStatisticalRequest &request);
                void DescribeBackupStatisticalAsync(const Model::DescribeBackupStatisticalRequest& request, const DescribeBackupStatisticalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupStatisticalOutcomeCallable DescribeBackupStatisticalCallable(const Model::DescribeBackupStatisticalRequest& request);

                /**
                 *This API is used to query the backup overview information of databases.
                 * @param req DescribeBackupSummaryRequest
                 * @return DescribeBackupSummaryOutcome
                 */
                DescribeBackupSummaryOutcome DescribeBackupSummary(const Model::DescribeBackupSummaryRequest &request);
                void DescribeBackupSummaryAsync(const Model::DescribeBackupSummaryRequest& request, const DescribeBackupSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupSummaryOutcomeCallable DescribeBackupSummaryCallable(const Model::DescribeBackupSummaryRequest& request);

                /**
                 *This API is used to query the size of uploaded backup files. It is valid if the backup file type is `COS_UPLOAD` (the file is stored in COS).
                 * @param req DescribeBackupUploadSizeRequest
                 * @return DescribeBackupUploadSizeOutcome
                 */
                DescribeBackupUploadSizeOutcome DescribeBackupUploadSize(const Model::DescribeBackupUploadSizeRequest &request);
                void DescribeBackupUploadSizeAsync(const Model::DescribeBackupUploadSizeRequest& request, const DescribeBackupUploadSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupUploadSizeOutcomeCallable DescribeBackupUploadSizeCallable(const Model::DescribeBackupUploadSizeRequest& request);

                /**
                 *This API is used to query the list of backups.
                 * @param req DescribeBackupsRequest
                 * @return DescribeBackupsOutcome
                 */
                DescribeBackupsOutcome DescribeBackups(const Model::DescribeBackupsRequest &request);
                void DescribeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupsOutcomeCallable DescribeBackupsCallable(const Model::DescribeBackupsRequest& request);

                /**
                 *This API is used to query the files required by business intelligence service.
                 * @param req DescribeBusinessIntelligenceFileRequest
                 * @return DescribeBusinessIntelligenceFileOutcome
                 */
                DescribeBusinessIntelligenceFileOutcome DescribeBusinessIntelligenceFile(const Model::DescribeBusinessIntelligenceFileRequest &request);
                void DescribeBusinessIntelligenceFileAsync(const Model::DescribeBusinessIntelligenceFileRequest& request, const DescribeBusinessIntelligenceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBusinessIntelligenceFileOutcomeCallable DescribeBusinessIntelligenceFileCallable(const Model::DescribeBusinessIntelligenceFileRequest& request);

                /**
                 *This API is used to query the character set and time zone supported by the instance.
                 * @param req DescribeCollationTimeZoneRequest
                 * @return DescribeCollationTimeZoneOutcome
                 */
                DescribeCollationTimeZoneOutcome DescribeCollationTimeZone(const Model::DescribeCollationTimeZoneRequest &request);
                void DescribeCollationTimeZoneAsync(const Model::DescribeCollationTimeZoneRequest& request, const DescribeCollationTimeZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCollationTimeZoneOutcomeCallable DescribeCollationTimeZoneCallable(const Model::DescribeCollationTimeZoneRequest& request);

                /**
                 *This API is used to query the real-time statistics list of cross-region backups.
                 * @param req DescribeCrossBackupStatisticalRequest
                 * @return DescribeCrossBackupStatisticalOutcome
                 */
                DescribeCrossBackupStatisticalOutcome DescribeCrossBackupStatistical(const Model::DescribeCrossBackupStatisticalRequest &request);
                void DescribeCrossBackupStatisticalAsync(const Model::DescribeCrossBackupStatisticalRequest& request, const DescribeCrossBackupStatisticalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCrossBackupStatisticalOutcomeCallable DescribeCrossBackupStatisticalCallable(const Model::DescribeCrossBackupStatisticalRequest& request);

                /**
                 *This API is used to query the disaster recovery region and AZ of the secondary node based on the primary instance.
                 * @param req DescribeCrossRegionZoneRequest
                 * @return DescribeCrossRegionZoneOutcome
                 */
                DescribeCrossRegionZoneOutcome DescribeCrossRegionZone(const Model::DescribeCrossRegionZoneRequest &request);
                void DescribeCrossRegionZoneAsync(const Model::DescribeCrossRegionZoneRequest& request, const DescribeCrossRegionZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCrossRegionZoneOutcomeCallable DescribeCrossRegionZoneCallable(const Model::DescribeCrossRegionZoneRequest& request);

                /**
                 *This API is used to query the target region for cross-region backups.
                 * @param req DescribeCrossRegionsRequest
                 * @return DescribeCrossRegionsOutcome
                 */
                DescribeCrossRegionsOutcome DescribeCrossRegions(const Model::DescribeCrossRegionsRequest &request);
                void DescribeCrossRegionsAsync(const Model::DescribeCrossRegionsRequest& request, const DescribeCrossRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCrossRegionsOutcomeCallable DescribeCrossRegionsCallable(const Model::DescribeCrossRegionsRequest& request);

                /**
                 *This API is used to query the database character sets supported by an instance.
                 * @param req DescribeDBCharsetsRequest
                 * @return DescribeDBCharsetsOutcome
                 */
                DescribeDBCharsetsOutcome DescribeDBCharsets(const Model::DescribeDBCharsetsRequest &request);
                void DescribeDBCharsetsAsync(const Model::DescribeDBCharsetsRequest& request, const DescribeDBCharsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBCharsetsOutcomeCallable DescribeDBCharsetsCallable(const Model::DescribeDBCharsetsRequest& request);

                /**
                 *This API is used to query the information of the interconnected instances.
                 * @param req DescribeDBInstanceInterRequest
                 * @return DescribeDBInstanceInterOutcome
                 */
                DescribeDBInstanceInterOutcome DescribeDBInstanceInter(const Model::DescribeDBInstanceInterRequest &request);
                void DescribeDBInstanceInterAsync(const Model::DescribeDBInstanceInterRequest& request, const DescribeDBInstanceInterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstanceInterOutcomeCallable DescribeDBInstanceInterCallable(const Model::DescribeDBInstanceInterRequest& request);

                /**
                 *This API is used to query the list of instances.
                 * @param req DescribeDBInstancesRequest
                 * @return DescribeDBInstancesOutcome
                 */
                DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest &request);
                void DescribeDBInstancesAsync(const Model::DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const Model::DescribeDBInstancesRequest& request);

                /**
                 *This API is used to query the attributes of an instance.
                 * @param req DescribeDBInstancesAttributeRequest
                 * @return DescribeDBInstancesAttributeOutcome
                 */
                DescribeDBInstancesAttributeOutcome DescribeDBInstancesAttribute(const Model::DescribeDBInstancesAttributeRequest &request);
                void DescribeDBInstancesAttributeAsync(const Model::DescribeDBInstancesAttributeRequest& request, const DescribeDBInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBInstancesAttributeOutcomeCallable DescribeDBInstancesAttributeCallable(const Model::DescribeDBInstancesAttributeRequest& request);

                /**
                 *This API is used to query information on the databases and permissions associated with the account.
                 * @param req DescribeDBPrivilegeByAccountRequest
                 * @return DescribeDBPrivilegeByAccountOutcome
                 */
                DescribeDBPrivilegeByAccountOutcome DescribeDBPrivilegeByAccount(const Model::DescribeDBPrivilegeByAccountRequest &request);
                void DescribeDBPrivilegeByAccountAsync(const Model::DescribeDBPrivilegeByAccountRequest& request, const DescribeDBPrivilegeByAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBPrivilegeByAccountOutcomeCallable DescribeDBPrivilegeByAccountCallable(const Model::DescribeDBPrivilegeByAccountRequest& request);

                /**
                 *This API is used to query databases that can be rolled back.
                 * @param req DescribeDBRestoreTimeRequest
                 * @return DescribeDBRestoreTimeOutcome
                 */
                DescribeDBRestoreTimeOutcome DescribeDBRestoreTime(const Model::DescribeDBRestoreTimeRequest &request);
                void DescribeDBRestoreTimeAsync(const Model::DescribeDBRestoreTimeRequest& request, const DescribeDBRestoreTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBRestoreTimeOutcomeCallable DescribeDBRestoreTimeCallable(const Model::DescribeDBRestoreTimeRequest& request);

                /**
                 *This API is used to query the security group details of instances.
                 * @param req DescribeDBSecurityGroupsRequest
                 * @return DescribeDBSecurityGroupsOutcome
                 */
                DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest &request);
                void DescribeDBSecurityGroupsAsync(const Model::DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const Model::DescribeDBSecurityGroupsRequest& request);

                /**
                 *This API is used to query the list of databases
                 * @param req DescribeDBsRequest
                 * @return DescribeDBsOutcome
                 */
                DescribeDBsOutcome DescribeDBs(const Model::DescribeDBsRequest &request);
                void DescribeDBsAsync(const Model::DescribeDBsRequest& request, const DescribeDBsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBsOutcomeCallable DescribeDBsCallable(const Model::DescribeDBsRequest& request);

                /**
                 *This API is used to query database configurations. It does not return information of the accounts that have permissions to operate the database.
                 * @param req DescribeDBsNormalRequest
                 * @return DescribeDBsNormalOutcome
                 */
                DescribeDBsNormalOutcome DescribeDBsNormal(const Model::DescribeDBsNormalRequest &request);
                void DescribeDBsNormalAsync(const Model::DescribeDBsNormalRequest& request, const DescribeDBsNormalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBsNormalOutcomeCallable DescribeDBsNormalCallable(const Model::DescribeDBsNormalRequest& request);

                /**
                 *This API is used to query the database name associated with the account.
                 * @param req DescribeDatabaseNamesRequest
                 * @return DescribeDatabaseNamesOutcome
                 */
                DescribeDatabaseNamesOutcome DescribeDatabaseNames(const Model::DescribeDatabaseNamesRequest &request);
                void DescribeDatabaseNamesAsync(const Model::DescribeDatabaseNamesRequest& request, const DescribeDatabaseNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseNamesOutcomeCallable DescribeDatabaseNamesCallable(const Model::DescribeDatabaseNamesRequest& request);

                /**
                 *This API is used to query the database list.
                 * @param req DescribeDatabasesRequest
                 * @return DescribeDatabasesOutcome
                 */
                DescribeDatabasesOutcome DescribeDatabases(const Model::DescribeDatabasesRequest &request);
                void DescribeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabasesOutcomeCallable DescribeDatabasesCallable(const Model::DescribeDatabasesRequest& request);

                /**
                 *This API is used to query database configuration information. This API does not contain accounts associated with databases.
                 * @param req DescribeDatabasesNormalRequest
                 * @return DescribeDatabasesNormalOutcome
                 */
                DescribeDatabasesNormalOutcome DescribeDatabasesNormal(const Model::DescribeDatabasesNormalRequest &request);
                void DescribeDatabasesNormalAsync(const Model::DescribeDatabasesNormalRequest& request, const DescribeDatabasesNormalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabasesNormalOutcomeCallable DescribeDatabasesNormalCallable(const Model::DescribeDatabasesNormalRequest& request);

                /**
                 *This API is used to query flow status.
                 * @param req DescribeFlowStatusRequest
                 * @return DescribeFlowStatusOutcome
                 */
                DescribeFlowStatusOutcome DescribeFlowStatus(const Model::DescribeFlowStatusRequest &request);
                void DescribeFlowStatusAsync(const Model::DescribeFlowStatusRequest& request, const DescribeFlowStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowStatusOutcomeCallable DescribeFlowStatusCallable(const Model::DescribeFlowStatusRequest& request);

                /**
                 *This API is used to perform the manual primary-secondary switch.
                 * @param req DescribeHASwitchLogRequest
                 * @return DescribeHASwitchLogOutcome
                 */
                DescribeHASwitchLogOutcome DescribeHASwitchLog(const Model::DescribeHASwitchLogRequest &request);
                void DescribeHASwitchLogAsync(const Model::DescribeHASwitchLogRequest& request, const DescribeHASwitchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHASwitchLogOutcomeCallable DescribeHASwitchLogCallable(const Model::DescribeHASwitchLogRequest& request);

                /**
                 *This API is used to query an incremental backup import task.
                 * @param req DescribeIncrementalMigrationRequest
                 * @return DescribeIncrementalMigrationOutcome
                 */
                DescribeIncrementalMigrationOutcome DescribeIncrementalMigration(const Model::DescribeIncrementalMigrationRequest &request);
                void DescribeIncrementalMigrationAsync(const Model::DescribeIncrementalMigrationRequest& request, const DescribeIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIncrementalMigrationOutcomeCallable DescribeIncrementalMigrationCallable(const Model::DescribeIncrementalMigrationRequest& request);

                /**
                 *This API is used to query the instance ID by the order number.
                 * @param req DescribeInstanceByOrdersRequest
                 * @return DescribeInstanceByOrdersOutcome
                 */
                DescribeInstanceByOrdersOutcome DescribeInstanceByOrders(const Model::DescribeInstanceByOrdersRequest &request);
                void DescribeInstanceByOrdersAsync(const Model::DescribeInstanceByOrdersRequest& request, const DescribeInstanceByOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceByOrdersOutcomeCallable DescribeInstanceByOrdersCallable(const Model::DescribeInstanceByOrdersRequest& request);

                /**
                 *This API is used to query the parameter modification records of an instance.
                 * @param req DescribeInstanceParamRecordsRequest
                 * @return DescribeInstanceParamRecordsOutcome
                 */
                DescribeInstanceParamRecordsOutcome DescribeInstanceParamRecords(const Model::DescribeInstanceParamRecordsRequest &request);
                void DescribeInstanceParamRecordsAsync(const Model::DescribeInstanceParamRecordsRequest& request, const DescribeInstanceParamRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceParamRecordsOutcomeCallable DescribeInstanceParamRecordsCallable(const Model::DescribeInstanceParamRecordsRequest& request);

                /**
                 *This API is used to query the parameter list of an instance.
                 * @param req DescribeInstanceParamsRequest
                 * @return DescribeInstanceParamsOutcome
                 */
                DescribeInstanceParamsOutcome DescribeInstanceParams(const Model::DescribeInstanceParamsRequest &request);
                void DescribeInstanceParamsAsync(const Model::DescribeInstanceParamsRequest& request, const DescribeInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceParamsOutcomeCallable DescribeInstanceParamsCallable(const Model::DescribeInstanceParamsRequest& request);

                /**
                 *This API is used to query the list of asynchronous tasks related to an instance.
                 * @param req DescribeInstanceTasksRequest
                 * @return DescribeInstanceTasksOutcome
                 */
                DescribeInstanceTasksOutcome DescribeInstanceTasks(const Model::DescribeInstanceTasksRequest &request);
                void DescribeInstanceTasksAsync(const Model::DescribeInstanceTasksRequest& request, const DescribeInstanceTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceTasksOutcomeCallable DescribeInstanceTasksCallable(const Model::DescribeInstanceTasksRequest& request);

                /**
                 *This API is used to query the instance billing parameters.
                 * @param req DescribeInstanceTradeParameterRequest
                 * @return DescribeInstanceTradeParameterOutcome
                 */
                DescribeInstanceTradeParameterOutcome DescribeInstanceTradeParameter(const Model::DescribeInstanceTradeParameterRequest &request);
                void DescribeInstanceTradeParameterAsync(const Model::DescribeInstanceTradeParameterRequest& request, const DescribeInstanceTradeParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceTradeParameterOutcomeCallable DescribeInstanceTradeParameterCallable(const Model::DescribeInstanceTradeParameterRequest& request);

                /**
                 *This API is used to query the maintenance time window of an instance based on its instance ID.
                 * @param req DescribeMaintenanceSpanRequest
                 * @return DescribeMaintenanceSpanOutcome
                 */
                DescribeMaintenanceSpanOutcome DescribeMaintenanceSpan(const Model::DescribeMaintenanceSpanRequest &request);
                void DescribeMaintenanceSpanAsync(const Model::DescribeMaintenanceSpanRequest& request, const DescribeMaintenanceSpanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMaintenanceSpanOutcomeCallable DescribeMaintenanceSpanCallable(const Model::DescribeMaintenanceSpanRequest& request);

                /**
                 *This API is used to query migration task details.
                 * @param req DescribeMigrationDetailRequest
                 * @return DescribeMigrationDetailOutcome
                 */
                DescribeMigrationDetailOutcome DescribeMigrationDetail(const Model::DescribeMigrationDetailRequest &request);
                void DescribeMigrationDetailAsync(const Model::DescribeMigrationDetailRequest& request, const DescribeMigrationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrationDetailOutcomeCallable DescribeMigrationDetailCallable(const Model::DescribeMigrationDetailRequest& request);

                /**
                 *This API is used to query the list of eligible migration tasks based on the entered criteria.
                 * @param req DescribeMigrationsRequest
                 * @return DescribeMigrationsOutcome
                 */
                DescribeMigrationsOutcome DescribeMigrations(const Model::DescribeMigrationsRequest &request);
                void DescribeMigrationsAsync(const Model::DescribeMigrationsRequest& request, const DescribeMigrationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrationsOutcomeCallable DescribeMigrationsCallable(const Model::DescribeMigrationsRequest& request);

                /**
                 *This API is used to query order information.
                 * @param req DescribeOrdersRequest
                 * @return DescribeOrdersOutcome
                 */
                DescribeOrdersOutcome DescribeOrders(const Model::DescribeOrdersRequest &request);
                void DescribeOrdersAsync(const Model::DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrdersOutcomeCallable DescribeOrdersCallable(const Model::DescribeOrdersRequest& request);

                /**
                 *This API is used to query purchasable specification configuration.
                 * @param req DescribeProductConfigRequest
                 * @return DescribeProductConfigOutcome
                 */
                DescribeProductConfigOutcome DescribeProductConfig(const Model::DescribeProductConfigRequest &request);
                void DescribeProductConfigAsync(const Model::DescribeProductConfigRequest& request, const DescribeProductConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductConfigOutcomeCallable DescribeProductConfigCallable(const Model::DescribeProductConfigRequest& request);

                /**
                 *This API is used to query security group details of a project.
                 * @param req DescribeProjectSecurityGroupsRequest
                 * @return DescribeProjectSecurityGroupsOutcome
                 */
                DescribeProjectSecurityGroupsOutcome DescribeProjectSecurityGroups(const Model::DescribeProjectSecurityGroupsRequest &request);
                void DescribeProjectSecurityGroupsAsync(const Model::DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectSecurityGroupsOutcomeCallable DescribeProjectSecurityGroupsCallable(const Model::DescribeProjectSecurityGroupsRequest& request);

                /**
                 *This API is used to query the publish/subscribe relationship list.
                 * @param req DescribePublishSubscribeRequest
                 * @return DescribePublishSubscribeOutcome
                 */
                DescribePublishSubscribeOutcome DescribePublishSubscribe(const Model::DescribePublishSubscribeRequest &request);
                void DescribePublishSubscribeAsync(const Model::DescribePublishSubscribeRequest& request, const DescribePublishSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublishSubscribeOutcomeCallable DescribePublishSubscribeCallable(const Model::DescribePublishSubscribeRequest& request);

                /**
                 *This API is used to query the automatic weight assignment result of the read-only group. The BalanceReadOnlyGroup API is used to perform routing weight assignment according to the automatic weight assignment result.
                 * @param req DescribeReadOnlyGroupAutoWeightRequest
                 * @return DescribeReadOnlyGroupAutoWeightOutcome
                 */
                DescribeReadOnlyGroupAutoWeightOutcome DescribeReadOnlyGroupAutoWeight(const Model::DescribeReadOnlyGroupAutoWeightRequest &request);
                void DescribeReadOnlyGroupAutoWeightAsync(const Model::DescribeReadOnlyGroupAutoWeightRequest& request, const DescribeReadOnlyGroupAutoWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReadOnlyGroupAutoWeightOutcomeCallable DescribeReadOnlyGroupAutoWeightCallable(const Model::DescribeReadOnlyGroupAutoWeightRequest& request);

                /**
                 *This API is used to query the read-only group where the read-only instance is located by its ID.
                 * @param req DescribeReadOnlyGroupByReadOnlyInstanceRequest
                 * @return DescribeReadOnlyGroupByReadOnlyInstanceOutcome
                 */
                DescribeReadOnlyGroupByReadOnlyInstanceOutcome DescribeReadOnlyGroupByReadOnlyInstance(const Model::DescribeReadOnlyGroupByReadOnlyInstanceRequest &request);
                void DescribeReadOnlyGroupByReadOnlyInstanceAsync(const Model::DescribeReadOnlyGroupByReadOnlyInstanceRequest& request, const DescribeReadOnlyGroupByReadOnlyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReadOnlyGroupByReadOnlyInstanceOutcomeCallable DescribeReadOnlyGroupByReadOnlyInstanceCallable(const Model::DescribeReadOnlyGroupByReadOnlyInstanceRequest& request);

                /**
                 *This API is used to query read-only group details.
                 * @param req DescribeReadOnlyGroupDetailsRequest
                 * @return DescribeReadOnlyGroupDetailsOutcome
                 */
                DescribeReadOnlyGroupDetailsOutcome DescribeReadOnlyGroupDetails(const Model::DescribeReadOnlyGroupDetailsRequest &request);
                void DescribeReadOnlyGroupDetailsAsync(const Model::DescribeReadOnlyGroupDetailsRequest& request, const DescribeReadOnlyGroupDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReadOnlyGroupDetailsOutcomeCallable DescribeReadOnlyGroupDetailsCallable(const Model::DescribeReadOnlyGroupDetailsRequest& request);

                /**
                 *This API is used to query the read-only group list.
                 * @param req DescribeReadOnlyGroupListRequest
                 * @return DescribeReadOnlyGroupListOutcome
                 */
                DescribeReadOnlyGroupListOutcome DescribeReadOnlyGroupList(const Model::DescribeReadOnlyGroupListRequest &request);
                void DescribeReadOnlyGroupListAsync(const Model::DescribeReadOnlyGroupListRequest& request, const DescribeReadOnlyGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReadOnlyGroupListOutcomeCallable DescribeReadOnlyGroupListCallable(const Model::DescribeReadOnlyGroupListRequest& request);

                /**
                 *This API is used to query purchasable regions.
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *This API is used to query the scheduled backup retention plans of instances.
                 * @param req DescribeRegularBackupPlanRequest
                 * @return DescribeRegularBackupPlanOutcome
                 */
                DescribeRegularBackupPlanOutcome DescribeRegularBackupPlan(const Model::DescribeRegularBackupPlanRequest &request);
                void DescribeRegularBackupPlanAsync(const Model::DescribeRegularBackupPlanRequest& request, const DescribeRegularBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegularBackupPlanOutcomeCallable DescribeRegularBackupPlanCallable(const Model::DescribeRegularBackupPlanRequest& request);

                /**
                 *This API is used to query the list of rollback tasks.
                 * @param req DescribeRestoreTaskRequest
                 * @return DescribeRestoreTaskOutcome
                 */
                DescribeRestoreTaskOutcome DescribeRestoreTask(const Model::DescribeRestoreTaskRequest &request);
                void DescribeRestoreTaskAsync(const Model::DescribeRestoreTaskRequest& request, const DescribeRestoreTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRestoreTaskOutcomeCallable DescribeRestoreTaskCallable(const Model::DescribeRestoreTaskRequest& request);

                /**
                 *This API is used to query the time range available for rollback by time point.
                 * @param req DescribeRestoreTimeRangeRequest
                 * @return DescribeRestoreTimeRangeOutcome
                 */
                DescribeRestoreTimeRangeOutcome DescribeRestoreTimeRange(const Model::DescribeRestoreTimeRangeRequest &request);
                void DescribeRestoreTimeRangeAsync(const Model::DescribeRestoreTimeRangeRequest& request, const DescribeRestoreTimeRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRestoreTimeRangeOutcomeCallable DescribeRestoreTimeRangeCallable(const Model::DescribeRestoreTimeRangeRequest& request);

                /**
                 *This API is used to query the time range available for instance rollback.
                 * @param req DescribeRollbackTimeRequest
                 * @return DescribeRollbackTimeOutcome
                 */
                DescribeRollbackTimeOutcome DescribeRollbackTime(const Model::DescribeRollbackTimeRequest &request);
                void DescribeRollbackTimeAsync(const Model::DescribeRollbackTimeRequest& request, const DescribeRollbackTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRollbackTimeOutcomeCallable DescribeRollbackTimeCallable(const Model::DescribeRollbackTimeRequest& request);

                /**
                 *This API is used to get file information of slow query logs.
                 * @param req DescribeSlowlogsRequest
                 * @return DescribeSlowlogsOutcome
                 */
                DescribeSlowlogsOutcome DescribeSlowlogs(const Model::DescribeSlowlogsRequest &request);
                void DescribeSlowlogsAsync(const Model::DescribeSlowlogsRequest& request, const DescribeSlowlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowlogsOutcomeCallable DescribeSlowlogsCallable(const Model::DescribeSlowlogsRequest& request);

                /**
                 *This API is used to query the status information on specifications, including the sales status and reference price. (The actual price is subject to the result returned by price querying APIs.)
                 * @param req DescribeSpecSellStatusRequest
                 * @return DescribeSpecSellStatusOutcome
                 */
                DescribeSpecSellStatusOutcome DescribeSpecSellStatus(const Model::DescribeSpecSellStatusRequest &request);
                void DescribeSpecSellStatusAsync(const Model::DescribeSpecSellStatusRequest& request, const DescribeSpecSellStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpecSellStatusOutcomeCallable DescribeSpecSellStatusCallable(const Model::DescribeSpecSellStatusRequest& request);

                /**
                 *This API is used to pre-check the impact of the instance configuration adjustment before the adjustment.
                 * @param req DescribeUpgradeInstanceCheckRequest
                 * @return DescribeUpgradeInstanceCheckOutcome
                 */
                DescribeUpgradeInstanceCheckOutcome DescribeUpgradeInstanceCheck(const Model::DescribeUpgradeInstanceCheckRequest &request);
                void DescribeUpgradeInstanceCheckAsync(const Model::DescribeUpgradeInstanceCheckRequest& request, const DescribeUpgradeInstanceCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUpgradeInstanceCheckOutcomeCallable DescribeUpgradeInstanceCheckCallable(const Model::DescribeUpgradeInstanceCheckRequest& request);

                /**
                 *This API is used to query a backup upload permission.
                 * @param req DescribeUploadBackupInfoRequest
                 * @return DescribeUploadBackupInfoOutcome
                 */
                DescribeUploadBackupInfoOutcome DescribeUploadBackupInfo(const Model::DescribeUploadBackupInfoRequest &request);
                void DescribeUploadBackupInfoAsync(const Model::DescribeUploadBackupInfoRequest& request, const DescribeUploadBackupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUploadBackupInfoOutcomeCallable DescribeUploadBackupInfoCallable(const Model::DescribeUploadBackupInfoRequest& request);

                /**
                 *This API is used to query the list of extended events.
                 * @param req DescribeXEventsRequest
                 * @return DescribeXEventsOutcome
                 */
                DescribeXEventsOutcome DescribeXEvents(const Model::DescribeXEventsRequest &request);
                void DescribeXEventsAsync(const Model::DescribeXEventsRequest& request, const DescribeXEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeXEventsOutcomeCallable DescribeXEventsCallable(const Model::DescribeXEventsRequest& request);

                /**
                 *This API is used to query currently purchasable AZs.
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *This API is used to unbind security groups from instances in batches.
                 * @param req DisassociateSecurityGroupsRequest
                 * @return DisassociateSecurityGroupsOutcome
                 */
                DisassociateSecurityGroupsOutcome DisassociateSecurityGroups(const Model::DisassociateSecurityGroupsRequest &request);
                void DisassociateSecurityGroupsAsync(const Model::DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateSecurityGroupsOutcomeCallable DisassociateSecurityGroupsCallable(const Model::DisassociateSecurityGroupsRequest& request);

                /**
                 *This API is used to query the price of requested instances.
                 * @param req InquiryPriceCreateDBInstancesRequest
                 * @return InquiryPriceCreateDBInstancesOutcome
                 */
                InquiryPriceCreateDBInstancesOutcome InquiryPriceCreateDBInstances(const Model::InquiryPriceCreateDBInstancesRequest &request);
                void InquiryPriceCreateDBInstancesAsync(const Model::InquiryPriceCreateDBInstancesRequest& request, const InquiryPriceCreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateDBInstancesOutcomeCallable InquiryPriceCreateDBInstancesCallable(const Model::InquiryPriceCreateDBInstancesRequest& request);

                /**
                 *This API is used to query the upgrade prices of a monthly subscribed instance.
.
                 * @param req InquiryPriceUpgradeDBInstanceRequest
                 * @return InquiryPriceUpgradeDBInstanceOutcome
                 */
                InquiryPriceUpgradeDBInstanceOutcome InquiryPriceUpgradeDBInstance(const Model::InquiryPriceUpgradeDBInstanceRequest &request);
                void InquiryPriceUpgradeDBInstanceAsync(const Model::InquiryPriceUpgradeDBInstanceRequest& request, const InquiryPriceUpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceUpgradeDBInstanceOutcomeCallable InquiryPriceUpgradeDBInstanceCallable(const Model::InquiryPriceUpgradeDBInstanceRequest& request);

                /**
                 *This API is used to modify instance account permissions.
                 * @param req ModifyAccountPrivilegeRequest
                 * @return ModifyAccountPrivilegeOutcome
                 */
                ModifyAccountPrivilegeOutcome ModifyAccountPrivilege(const Model::ModifyAccountPrivilegeRequest &request);
                void ModifyAccountPrivilegeAsync(const Model::ModifyAccountPrivilegeRequest& request, const ModifyAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountPrivilegeOutcomeCallable ModifyAccountPrivilegeCallable(const Model::ModifyAccountPrivilegeRequest& request);

                /**
                 *This API is used to modify account remarks.
                 * @param req ModifyAccountRemarkRequest
                 * @return ModifyAccountRemarkOutcome
                 */
                ModifyAccountRemarkOutcome ModifyAccountRemark(const Model::ModifyAccountRemarkRequest &request);
                void ModifyAccountRemarkAsync(const Model::ModifyAccountRemarkRequest& request, const ModifyAccountRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountRemarkOutcomeCallable ModifyAccountRemarkCallable(const Model::ModifyAccountRemarkRequest& request);

                /**
                 *This API is used to modify a backup import task.
                 * @param req ModifyBackupMigrationRequest
                 * @return ModifyBackupMigrationOutcome
                 */
                ModifyBackupMigrationOutcome ModifyBackupMigration(const Model::ModifyBackupMigrationRequest &request);
                void ModifyBackupMigrationAsync(const Model::ModifyBackupMigrationRequest& request, const ModifyBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupMigrationOutcomeCallable ModifyBackupMigrationCallable(const Model::ModifyBackupMigrationRequest& request);

                /**
                 *This API is used to modify the name of a backup task.
                 * @param req ModifyBackupNameRequest
                 * @return ModifyBackupNameOutcome
                 */
                ModifyBackupNameOutcome ModifyBackupName(const Model::ModifyBackupNameRequest &request);
                void ModifyBackupNameAsync(const Model::ModifyBackupNameRequest& request, const ModifyBackupNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupNameOutcomeCallable ModifyBackupNameCallable(const Model::ModifyBackupNameRequest& request);

                /**
                 *This API is used to modify the backup policy.
                 * @param req ModifyBackupStrategyRequest
                 * @return ModifyBackupStrategyOutcome
                 */
                ModifyBackupStrategyOutcome ModifyBackupStrategy(const Model::ModifyBackupStrategyRequest &request);
                void ModifyBackupStrategyAsync(const Model::ModifyBackupStrategyRequest& request, const ModifyBackupStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupStrategyOutcomeCallable ModifyBackupStrategyCallable(const Model::ModifyBackupStrategyRequest& request);

                /**
                 *This API is used to disable the public network for the instance.
                 * @param req ModifyCloseWanIpRequest
                 * @return ModifyCloseWanIpOutcome
                 */
                ModifyCloseWanIpOutcome ModifyCloseWanIp(const Model::ModifyCloseWanIpRequest &request);
                void ModifyCloseWanIpAsync(const Model::ModifyCloseWanIpRequest& request, const ModifyCloseWanIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloseWanIpOutcomeCallable ModifyCloseWanIpCallable(const Model::ModifyCloseWanIpRequest& request);

                /**
                 *This API is used to enable or disable cross-region backup policies.
                 * @param req ModifyCrossBackupStrategyRequest
                 * @return ModifyCrossBackupStrategyOutcome
                 */
                ModifyCrossBackupStrategyOutcome ModifyCrossBackupStrategy(const Model::ModifyCrossBackupStrategyRequest &request);
                void ModifyCrossBackupStrategyAsync(const Model::ModifyCrossBackupStrategyRequest& request, const ModifyCrossBackupStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCrossBackupStrategyOutcomeCallable ModifyCrossBackupStrategyCallable(const Model::ModifyCrossBackupStrategyRequest& request);

                /**
                 *This API is used to enable or disable TDE of a database.
                 * @param req ModifyDBEncryptAttributesRequest
                 * @return ModifyDBEncryptAttributesOutcome
                 */
                ModifyDBEncryptAttributesOutcome ModifyDBEncryptAttributes(const Model::ModifyDBEncryptAttributesRequest &request);
                void ModifyDBEncryptAttributesAsync(const Model::ModifyDBEncryptAttributesRequest& request, const ModifyDBEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBEncryptAttributesOutcomeCallable ModifyDBEncryptAttributesCallable(const Model::ModifyDBEncryptAttributesRequest& request);

                /**
                 *This API is used to rename an instance.
                 * @param req ModifyDBInstanceNameRequest
                 * @return ModifyDBInstanceNameOutcome
                 */
                ModifyDBInstanceNameOutcome ModifyDBInstanceName(const Model::ModifyDBInstanceNameRequest &request);
                void ModifyDBInstanceNameAsync(const Model::ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceNameOutcomeCallable ModifyDBInstanceNameCallable(const Model::ModifyDBInstanceNameRequest& request);

                /**
                 *This API is used to switch a running instance from a VPC to another.
                 * @param req ModifyDBInstanceNetworkRequest
                 * @return ModifyDBInstanceNetworkOutcome
                 */
                ModifyDBInstanceNetworkOutcome ModifyDBInstanceNetwork(const Model::ModifyDBInstanceNetworkRequest &request);
                void ModifyDBInstanceNetworkAsync(const Model::ModifyDBInstanceNetworkRequest& request, const ModifyDBInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceNetworkOutcomeCallable ModifyDBInstanceNetworkCallable(const Model::ModifyDBInstanceNetworkRequest& request);

                /**
                 *This API is used to modify the instance remarks.
                 * @param req ModifyDBInstanceNoteRequest
                 * @return ModifyDBInstanceNoteOutcome
                 */
                ModifyDBInstanceNoteOutcome ModifyDBInstanceNote(const Model::ModifyDBInstanceNoteRequest &request);
                void ModifyDBInstanceNoteAsync(const Model::ModifyDBInstanceNoteRequest& request, const ModifyDBInstanceNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceNoteOutcomeCallable ModifyDBInstanceNoteCallable(const Model::ModifyDBInstanceNoteRequest& request);

                /**
                 *This API is used to modify the project to which a database instance belongs.
                 * @param req ModifyDBInstanceProjectRequest
                 * @return ModifyDBInstanceProjectOutcome
                 */
                ModifyDBInstanceProjectOutcome ModifyDBInstanceProject(const Model::ModifyDBInstanceProjectRequest &request);
                void ModifyDBInstanceProjectAsync(const Model::ModifyDBInstanceProjectRequest& request, const ModifyDBInstanceProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceProjectOutcomeCallable ModifyDBInstanceProjectCallable(const Model::ModifyDBInstanceProjectRequest& request);

                /**
                 *This API is used to enable/disable/update SSL encryption.
                 * @param req ModifyDBInstanceSSLRequest
                 * @return ModifyDBInstanceSSLOutcome
                 */
                ModifyDBInstanceSSLOutcome ModifyDBInstanceSSL(const Model::ModifyDBInstanceSSLRequest &request);
                void ModifyDBInstanceSSLAsync(const Model::ModifyDBInstanceSSLRequest& request, const ModifyDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSSLOutcomeCallable ModifyDBInstanceSSLCallable(const Model::ModifyDBInstanceSSLRequest& request);

                /**
                 *This API is used to modify security groups bound to an instance.
                 * @param req ModifyDBInstanceSecurityGroupsRequest
                 * @return ModifyDBInstanceSecurityGroupsOutcome
                 */
                ModifyDBInstanceSecurityGroupsOutcome ModifyDBInstanceSecurityGroups(const Model::ModifyDBInstanceSecurityGroupsRequest &request);
                void ModifyDBInstanceSecurityGroupsAsync(const Model::ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSecurityGroupsOutcomeCallable ModifyDBInstanceSecurityGroupsCallable(const Model::ModifyDBInstanceSecurityGroupsRequest& request);

                /**
                 *This API is used to rename a database.
                 * @param req ModifyDBNameRequest
                 * @return ModifyDBNameOutcome
                 */
                ModifyDBNameOutcome ModifyDBName(const Model::ModifyDBNameRequest &request);
                void ModifyDBNameAsync(const Model::ModifyDBNameRequest& request, const ModifyDBNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBNameOutcomeCallable ModifyDBNameCallable(const Model::ModifyDBNameRequest& request);

                /**
                 *This API is used to modify database remarks.
                 * @param req ModifyDBRemarkRequest
                 * @return ModifyDBRemarkOutcome
                 */
                ModifyDBRemarkOutcome ModifyDBRemark(const Model::ModifyDBRemarkRequest &request);
                void ModifyDBRemarkAsync(const Model::ModifyDBRemarkRequest& request, const ModifyDBRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBRemarkOutcomeCallable ModifyDBRemarkCallable(const Model::ModifyDBRemarkRequest& request);

                /**
                 *This API is used to enable or disable the read-only feature of the replica server.
                 * @param req ModifyDReadableRequest
                 * @return ModifyDReadableOutcome
                 */
                ModifyDReadableOutcome ModifyDReadable(const Model::ModifyDReadableRequest &request);
                void ModifyDReadableAsync(const Model::ModifyDReadableRequest& request, const ModifyDReadableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDReadableOutcomeCallable ModifyDReadableCallable(const Model::ModifyDReadableRequest& request);

                /**
                 *This API is used to enable or disable the change data capture (CDC) feature.
                 * @param req ModifyDatabaseCDCRequest
                 * @return ModifyDatabaseCDCOutcome
                 */
                ModifyDatabaseCDCOutcome ModifyDatabaseCDC(const Model::ModifyDatabaseCDCRequest &request);
                void ModifyDatabaseCDCAsync(const Model::ModifyDatabaseCDCRequest& request, const ModifyDatabaseCDCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatabaseCDCOutcomeCallable ModifyDatabaseCDCCallable(const Model::ModifyDatabaseCDCRequest& request);

                /**
                 *This API is used to enable or disable the change tracking (CT) feature.
                 * @param req ModifyDatabaseCTRequest
                 * @return ModifyDatabaseCTOutcome
                 */
                ModifyDatabaseCTOutcome ModifyDatabaseCT(const Model::ModifyDatabaseCTRequest &request);
                void ModifyDatabaseCTAsync(const Model::ModifyDatabaseCTRequest& request, const ModifyDatabaseCTAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatabaseCTOutcomeCallable ModifyDatabaseCTCallable(const Model::ModifyDatabaseCTRequest& request);

                /**
                 *This API is used to shrink database MDF files.
                 * @param req ModifyDatabaseMdfRequest
                 * @return ModifyDatabaseMdfOutcome
                 */
                ModifyDatabaseMdfOutcome ModifyDatabaseMdf(const Model::ModifyDatabaseMdfRequest &request);
                void ModifyDatabaseMdfAsync(const Model::ModifyDatabaseMdfRequest& request, const ModifyDatabaseMdfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatabaseMdfOutcomeCallable ModifyDatabaseMdfCallable(const Model::ModifyDatabaseMdfRequest& request);

                /**
                 *This API is used to modify instance database permissions.
                 * @param req ModifyDatabasePrivilegeRequest
                 * @return ModifyDatabasePrivilegeOutcome
                 */
                ModifyDatabasePrivilegeOutcome ModifyDatabasePrivilege(const Model::ModifyDatabasePrivilegeRequest &request);
                void ModifyDatabasePrivilegeAsync(const Model::ModifyDatabasePrivilegeRequest& request, const ModifyDatabasePrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatabasePrivilegeOutcomeCallable ModifyDatabasePrivilegeCallable(const Model::ModifyDatabasePrivilegeRequest& request);

                /**
                 *This API is used to shrink the database mdf (Shrink mdf).
                 * @param req ModifyDatabaseShrinkMDFRequest
                 * @return ModifyDatabaseShrinkMDFOutcome
                 */
                ModifyDatabaseShrinkMDFOutcome ModifyDatabaseShrinkMDF(const Model::ModifyDatabaseShrinkMDFRequest &request);
                void ModifyDatabaseShrinkMDFAsync(const Model::ModifyDatabaseShrinkMDFRequest& request, const ModifyDatabaseShrinkMDFAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatabaseShrinkMDFOutcomeCallable ModifyDatabaseShrinkMDFCallable(const Model::ModifyDatabaseShrinkMDFRequest& request);

                /**
                 *This API is used to modify an incremental backup import task.
                 * @param req ModifyIncrementalMigrationRequest
                 * @return ModifyIncrementalMigrationOutcome
                 */
                ModifyIncrementalMigrationOutcome ModifyIncrementalMigration(const Model::ModifyIncrementalMigrationRequest &request);
                void ModifyIncrementalMigrationAsync(const Model::ModifyIncrementalMigrationRequest& request, const ModifyIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIncrementalMigrationOutcomeCallable ModifyIncrementalMigrationCallable(const Model::ModifyIncrementalMigrationRequest& request);

                /**
                 *This API is used to enable TDE of an instance.
                 * @param req ModifyInstanceEncryptAttributesRequest
                 * @return ModifyInstanceEncryptAttributesOutcome
                 */
                ModifyInstanceEncryptAttributesOutcome ModifyInstanceEncryptAttributes(const Model::ModifyInstanceEncryptAttributesRequest &request);
                void ModifyInstanceEncryptAttributesAsync(const Model::ModifyInstanceEncryptAttributesRequest& request, const ModifyInstanceEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceEncryptAttributesOutcomeCallable ModifyInstanceEncryptAttributesCallable(const Model::ModifyInstanceEncryptAttributesRequest& request);

                /**
                 *This API is used to modify instance parameters.
<b>Note</b>: if <b>the instance needs to be restarted</b> for the modified parameter to take effect, <b>it will be restarted</b> immediately or during the maintenance time according to the `WaitSwitch` parameter.
Before you modify a parameter, you can use the `DescribeInstanceParams` API to query whether the instance needs to be restarted.
                 * @param req ModifyInstanceParamRequest
                 * @return ModifyInstanceParamOutcome
                 */
                ModifyInstanceParamOutcome ModifyInstanceParam(const Model::ModifyInstanceParamRequest &request);
                void ModifyInstanceParamAsync(const Model::ModifyInstanceParamRequest& request, const ModifyInstanceParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceParamOutcomeCallable ModifyInstanceParamCallable(const Model::ModifyInstanceParamRequest& request);

                /**
                 *This API is used to modify the maintenance window of the instance.
                 * @param req ModifyMaintenanceSpanRequest
                 * @return ModifyMaintenanceSpanOutcome
                 */
                ModifyMaintenanceSpanOutcome ModifyMaintenanceSpan(const Model::ModifyMaintenanceSpanRequest &request);
                void ModifyMaintenanceSpanAsync(const Model::ModifyMaintenanceSpanRequest& request, const ModifyMaintenanceSpanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMaintenanceSpanOutcomeCallable ModifyMaintenanceSpanCallable(const Model::ModifyMaintenanceSpanRequest& request);

                /**
                 *This API is used to modify an existing migration task.
                 * @param req ModifyMigrationRequest
                 * @return ModifyMigrationOutcome
                 */
                ModifyMigrationOutcome ModifyMigration(const Model::ModifyMigrationRequest &request);
                void ModifyMigrationAsync(const Model::ModifyMigrationRequest& request, const ModifyMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMigrationOutcomeCallable ModifyMigrationCallable(const Model::ModifyMigrationRequest& request);

                /**
                 *This API is used to enable the public network for the instance.
                 * @param req ModifyOpenWanIpRequest
                 * @return ModifyOpenWanIpOutcome
                 */
                ModifyOpenWanIpOutcome ModifyOpenWanIp(const Model::ModifyOpenWanIpRequest &request);
                void ModifyOpenWanIpAsync(const Model::ModifyOpenWanIpRequest& request, const ModifyOpenWanIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOpenWanIpOutcomeCallable ModifyOpenWanIpCallable(const Model::ModifyOpenWanIpRequest& request);

                /**
                 *This API is used to modify the publish/subscribe relationship of the instance.
                 * @param req ModifyPublishSubscribeRequest
                 * @return ModifyPublishSubscribeOutcome
                 */
                ModifyPublishSubscribeOutcome ModifyPublishSubscribe(const Model::ModifyPublishSubscribeRequest &request);
                void ModifyPublishSubscribeAsync(const Model::ModifyPublishSubscribeRequest& request, const ModifyPublishSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPublishSubscribeOutcomeCallable ModifyPublishSubscribeCallable(const Model::ModifyPublishSubscribeRequest& request);

                /**
                 *This API is used to modify the publish/subscribe names.
                 * @param req ModifyPublishSubscribeNameRequest
                 * @return ModifyPublishSubscribeNameOutcome
                 */
                ModifyPublishSubscribeNameOutcome ModifyPublishSubscribeName(const Model::ModifyPublishSubscribeNameRequest &request);
                void ModifyPublishSubscribeNameAsync(const Model::ModifyPublishSubscribeNameRequest& request, const ModifyPublishSubscribeNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPublishSubscribeNameOutcomeCallable ModifyPublishSubscribeNameCallable(const Model::ModifyPublishSubscribeNameRequest& request);

                /**
                 *This API is used to modify read-only group details.
                 * @param req ModifyReadOnlyGroupDetailsRequest
                 * @return ModifyReadOnlyGroupDetailsOutcome
                 */
                ModifyReadOnlyGroupDetailsOutcome ModifyReadOnlyGroupDetails(const Model::ModifyReadOnlyGroupDetailsRequest &request);
                void ModifyReadOnlyGroupDetailsAsync(const Model::ModifyReadOnlyGroupDetailsRequest& request, const ModifyReadOnlyGroupDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyReadOnlyGroupDetailsOutcomeCallable ModifyReadOnlyGroupDetailsCallable(const Model::ModifyReadOnlyGroupDetailsRequest& request);

                /**
                 *This API is used to enable instance interconnection, which can interconnect business intelligence services.
                 * @param req OpenInterCommunicationRequest
                 * @return OpenInterCommunicationOutcome
                 */
                OpenInterCommunicationOutcome OpenInterCommunication(const Model::OpenInterCommunicationRequest &request);
                void OpenInterCommunicationAsync(const Model::OpenInterCommunicationRequest& request, const OpenInterCommunicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenInterCommunicationOutcomeCallable OpenInterCommunicationCallable(const Model::OpenInterCommunicationRequest& request);

                /**
                 *This API is used to return a deactivated SQL Server instance.
                 * @param req RecycleDBInstanceRequest
                 * @return RecycleDBInstanceOutcome
                 */
                RecycleDBInstanceOutcome RecycleDBInstance(const Model::RecycleDBInstanceRequest &request);
                void RecycleDBInstanceAsync(const Model::RecycleDBInstanceRequest& request, const RecycleDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecycleDBInstanceOutcomeCallable RecycleDBInstanceCallable(const Model::RecycleDBInstanceRequest& request);

                /**
                 *This API is used to reclaim resources of read-only groups immediately. The resources, such as VIP, occupied by the read-only group will be released immediately and cannot be recovered.
                 * @param req RecycleReadOnlyGroupRequest
                 * @return RecycleReadOnlyGroupOutcome
                 */
                RecycleReadOnlyGroupOutcome RecycleReadOnlyGroup(const Model::RecycleReadOnlyGroupRequest &request);
                void RecycleReadOnlyGroupAsync(const Model::RecycleReadOnlyGroupRequest& request, const RecycleReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecycleReadOnlyGroupOutcomeCallable RecycleReadOnlyGroupCallable(const Model::RecycleReadOnlyGroupRequest& request);

                /**
                 *This API is used to delete backup files created by users manually. The backup policy to be deleted can be instance backup or multi-database backup.
                 * @param req RemoveBackupsRequest
                 * @return RemoveBackupsOutcome
                 */
                RemoveBackupsOutcome RemoveBackups(const Model::RemoveBackupsRequest &request);
                void RemoveBackupsAsync(const Model::RemoveBackupsRequest& request, const RemoveBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveBackupsOutcomeCallable RemoveBackupsCallable(const Model::RemoveBackupsRequest& request);

                /**
                 *This API is used to recover the pay-as-you-go instance that is manually isolated through the API TerminateDBInstance from the recycle bin.
                 * @param req RenewPostpaidDBInstanceRequest
                 * @return RenewPostpaidDBInstanceOutcome
                 */
                RenewPostpaidDBInstanceOutcome RenewPostpaidDBInstance(const Model::RenewPostpaidDBInstanceRequest &request);
                void RenewPostpaidDBInstanceAsync(const Model::RenewPostpaidDBInstanceRequest& request, const RenewPostpaidDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewPostpaidDBInstanceOutcomeCallable RenewPostpaidDBInstanceCallable(const Model::RenewPostpaidDBInstanceRequest& request);

                /**
                 *This API is used to reset the account password of an instance.
                 * @param req ResetAccountPasswordRequest
                 * @return ResetAccountPasswordOutcome
                 */
                ResetAccountPasswordOutcome ResetAccountPassword(const Model::ResetAccountPasswordRequest &request);
                void ResetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAccountPasswordOutcomeCallable ResetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request);

                /**
                 *This API is used to restart a database instance.
                 * @param req RestartDBInstanceRequest
                 * @return RestartDBInstanceOutcome
                 */
                RestartDBInstanceOutcome RestartDBInstance(const Model::RestartDBInstanceRequest &request);
                void RestartDBInstanceAsync(const Model::RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartDBInstanceOutcomeCallable RestartDBInstanceCallable(const Model::RestartDBInstanceRequest& request);

                /**
                 *This API is used to roll back the database by backup set.
                 * @param req RestoreInstanceRequest
                 * @return RestoreInstanceOutcome
                 */
                RestoreInstanceOutcome RestoreInstance(const Model::RestoreInstanceRequest &request);
                void RestoreInstanceAsync(const Model::RestoreInstanceRequest& request, const RestoreInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestoreInstanceOutcomeCallable RestoreInstanceCallable(const Model::RestoreInstanceRequest& request);

                /**
                 *This API is used to roll back the instance by time point.
                 * @param req RollbackInstanceRequest
                 * @return RollbackInstanceOutcome
                 */
                RollbackInstanceOutcome RollbackInstance(const Model::RollbackInstanceRequest &request);
                void RollbackInstanceAsync(const Model::RollbackInstanceRequest& request, const RollbackInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackInstanceOutcomeCallable RollbackInstanceCallable(const Model::RollbackInstanceRequest& request);

                /**
                 *This API is used to start running a migration task.
                 * @param req RunMigrationRequest
                 * @return RunMigrationOutcome
                 */
                RunMigrationOutcome RunMigration(const Model::RunMigrationRequest &request);
                void RunMigrationAsync(const Model::RunMigrationRequest& request, const RunMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunMigrationOutcomeCallable RunMigrationCallable(const Model::RunMigrationRequest& request);

                /**
                 *This API is used to start a backup import task.
                 * @param req StartBackupMigrationRequest
                 * @return StartBackupMigrationOutcome
                 */
                StartBackupMigrationOutcome StartBackupMigration(const Model::StartBackupMigrationRequest &request);
                void StartBackupMigrationAsync(const Model::StartBackupMigrationRequest& request, const StartBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartBackupMigrationOutcomeCallable StartBackupMigrationCallable(const Model::StartBackupMigrationRequest& request);

                /**
                 *This API is used to start an incremental backup import task.
                 * @param req StartIncrementalMigrationRequest
                 * @return StartIncrementalMigrationOutcome
                 */
                StartIncrementalMigrationOutcome StartIncrementalMigration(const Model::StartIncrementalMigrationRequest &request);
                void StartIncrementalMigrationAsync(const Model::StartIncrementalMigrationRequest& request, const StartIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartIncrementalMigrationOutcomeCallable StartIncrementalMigrationCallable(const Model::StartIncrementalMigrationRequest& request);

                /**
                 *This API is used to start and stop an extended event.
                 * @param req StartInstanceXEventRequest
                 * @return StartInstanceXEventOutcome
                 */
                StartInstanceXEventOutcome StartInstanceXEvent(const Model::StartInstanceXEventRequest &request);
                void StartInstanceXEventAsync(const Model::StartInstanceXEventRequest& request, const StartInstanceXEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartInstanceXEventOutcomeCallable StartInstanceXEventCallable(const Model::StartInstanceXEventRequest& request);

                /**
                 *This API is used to manually switch between primary and secondary.
                 * @param req SwitchCloudInstanceHARequest
                 * @return SwitchCloudInstanceHAOutcome
                 */
                SwitchCloudInstanceHAOutcome SwitchCloudInstanceHA(const Model::SwitchCloudInstanceHARequest &request);
                void SwitchCloudInstanceHAAsync(const Model::SwitchCloudInstanceHARequest& request, const SwitchCloudInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchCloudInstanceHAOutcomeCallable SwitchCloudInstanceHACallable(const Model::SwitchCloudInstanceHARequest& request);

                /**
                 *This API is used to isolate an instance to move it into a recycle bin.
                 * @param req TerminateDBInstanceRequest
                 * @return TerminateDBInstanceOutcome
                 */
                TerminateDBInstanceOutcome TerminateDBInstance(const Model::TerminateDBInstanceRequest &request);
                void TerminateDBInstanceAsync(const Model::TerminateDBInstanceRequest& request, const TerminateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateDBInstanceOutcomeCallable TerminateDBInstanceCallable(const Model::TerminateDBInstanceRequest& request);

                /**
                 *This API is used to upgrade an instance.
                 * @param req UpgradeDBInstanceRequest
                 * @return UpgradeDBInstanceOutcome
                 */
                UpgradeDBInstanceOutcome UpgradeDBInstance(const Model::UpgradeDBInstanceRequest &request);
                void UpgradeDBInstanceAsync(const Model::UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeDBInstanceOutcomeCallable UpgradeDBInstanceCallable(const Model::UpgradeDBInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_SQLSERVERCLIENT_H_
