/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CWP_V20180228_CWPCLIENT_H_
#define TENCENTCLOUD_CWP_V20180228_CWPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cwp/v20180228/model/AddLoginWhiteListsRequest.h>
#include <tencentcloud/cwp/v20180228/model/AddLoginWhiteListsResponse.h>
#include <tencentcloud/cwp/v20180228/model/CancelIgnoreVulRequest.h>
#include <tencentcloud/cwp/v20180228/model/CancelIgnoreVulResponse.h>
#include <tencentcloud/cwp/v20180228/model/ChangeRuleEventsIgnoreStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ChangeRuleEventsIgnoreStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ChangeStrategyEnableStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ChangeStrategyEnableStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/CheckBashPolicyParamsRequest.h>
#include <tencentcloud/cwp/v20180228/model/CheckBashPolicyParamsResponse.h>
#include <tencentcloud/cwp/v20180228/model/CheckBashRuleParamsRequest.h>
#include <tencentcloud/cwp/v20180228/model/CheckBashRuleParamsResponse.h>
#include <tencentcloud/cwp/v20180228/model/CheckFileTamperRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/CheckFileTamperRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/CheckFirstScanBaselineRequest.h>
#include <tencentcloud/cwp/v20180228/model/CheckFirstScanBaselineResponse.h>
#include <tencentcloud/cwp/v20180228/model/CheckLogKafkaConnectionStateRequest.h>
#include <tencentcloud/cwp/v20180228/model/CheckLogKafkaConnectionStateResponse.h>
#include <tencentcloud/cwp/v20180228/model/ClearLocalStorageRequest.h>
#include <tencentcloud/cwp/v20180228/model/ClearLocalStorageResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateBanWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateBanWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateBaselineStrategyRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateBaselineStrategyResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateBuyBindTaskRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateBuyBindTaskResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateEmergencyVulScanRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateEmergencyVulScanResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateIncidentBacktrackingRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateIncidentBacktrackingResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateLicenseOrderRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateLicenseOrderResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateLogExportRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateLogExportResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateMaliciousRequestWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateMaliciousRequestWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateMalwareWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateMalwareWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateNetAttackWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateNetAttackWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateRansomDefenseStrategyRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateRansomDefenseStrategyResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateScanMalwareSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateScanMalwareSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateSearchLogRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateSearchLogResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateSearchTemplateRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateSearchTemplateResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateVulFixRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateVulFixResponse.h>
#include <tencentcloud/cwp/v20180228/model/CreateWhiteListOrderRequest.h>
#include <tencentcloud/cwp/v20180228/model/CreateWhiteListOrderResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteAllJavaMemShellsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteAllJavaMemShellsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBanWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBanWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBaselinePolicyRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBaselinePolicyResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBaselineStrategyRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBaselineStrategyResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBashEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBashEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBashPoliciesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBashPoliciesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBashRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBashRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBruteAttacksRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteBruteAttacksResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLicenseRecordRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLicenseRecordResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLicenseRecordAllRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLicenseRecordAllResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLogExportRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLogExportResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLoginWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteLoginWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMachineRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMachineResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMachineClearHistoryRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMachineClearHistoryResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMachineTagRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMachineTagResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMaliciousRequestWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMaliciousRequestWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMaliciousRequestsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMaliciousRequestsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMalwareScanTaskRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMalwareScanTaskResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMalwareWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMalwareWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMalwaresRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteMalwaresResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteNetAttackWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteNetAttackWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteNonlocalLoginPlacesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteNonlocalLoginPlacesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeletePrivilegeEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeletePrivilegeEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeletePrivilegeRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeletePrivilegeRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteReverseShellEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteReverseShellEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteReverseShellRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteReverseShellRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteRiskDnsEventRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteRiskDnsEventResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteRiskDnsPolicyRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteRiskDnsPolicyResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteScanTaskRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteScanTaskResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteSearchTemplateRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteSearchTemplateResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteTagsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteTagsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteWebHookPolicyRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteWebHookPolicyResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteWebHookReceiverRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteWebHookReceiverResponse.h>
#include <tencentcloud/cwp/v20180228/model/DeleteWebHookRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DeleteWebHookRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeABTestConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeABTestConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAESKeyRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAESKeyResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAccountStatisticsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAccountStatisticsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAgentInstallCommandRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAgentInstallCommandResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAgentInstallationTokenRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAgentInstallationTokenResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAlarmIncidentNodesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAlarmIncidentNodesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAlarmVertexIdRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAlarmVertexIdResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetAppCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetAppCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetAppListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetAppListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetAppProcessListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetAppProcessListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetCoreModuleInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetCoreModuleInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetCoreModuleListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetCoreModuleListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDatabaseCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDatabaseCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDatabaseInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDatabaseInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDatabaseListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDatabaseListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDiskListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetDiskListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetEnvListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetEnvListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetHostTotalCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetHostTotalCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetInitServiceListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetInitServiceListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetJarInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetJarInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetJarListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetJarListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetLoadInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetLoadInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetMachineDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetMachineDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetMachineListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetMachineListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetMachineTagTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetMachineTagTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetPlanTaskListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetPlanTaskListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetPortCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetPortCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetPortInfoListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetPortInfoListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetProcessCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetProcessCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetProcessInfoListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetProcessInfoListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetRecentMachineInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetRecentMachineInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetSystemPackageListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetSystemPackageListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetTotalCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetTotalCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetTypeTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetTypeTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetTypesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetTypesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserKeyListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserKeyListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetUserListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebAppCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebAppCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebAppListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebAppListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebAppPluginListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebAppPluginListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebFrameCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebFrameCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebFrameListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebFrameListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationPathListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebLocationPathListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebServiceCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebServiceCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebServiceInfoListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebServiceInfoListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebServiceProcessListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAssetWebServiceProcessListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackEventInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackEventInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackLogsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackLogsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackSourceRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackSourceResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackSourceEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackSourceEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackStatisticsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackStatisticsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackTrendsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackTrendsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackVulTypeListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAttackVulTypeListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAvailableExpertServiceDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeAvailableExpertServiceDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBanModeRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBanModeResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBanRegionsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBanRegionsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBanStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBanStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBanWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBanWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineBasicInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineBasicInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineDefaultStrategyListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineDefaultStrategyListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineEffectHostListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineEffectHostListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineHostDetectListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineHostDetectListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineHostTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineHostTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineItemDetectListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineItemDetectListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineItemListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineItemListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselinePolicyListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselinePolicyListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineScanScheduleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineScanScheduleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineStrategyDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineStrategyDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineStrategyListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineStrategyListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineWeakPasswordListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBaselineWeakPasswordListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashEventsInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashEventsInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashEventsInfoNewRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashEventsInfoNewResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashEventsNewRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashEventsNewResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashPoliciesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashPoliciesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBashRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBruteAttackListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBruteAttackListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBruteAttackRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeBruteAttackRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeCanFixVulMachineRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeCanFixVulMachineResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeCanNotSeparateMachineRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeCanNotSeparateMachineResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeClientExceptionRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeClientExceptionResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeComponentStatisticsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeComponentStatisticsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeDefenceEventDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeDefenceEventDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeDirectConnectInstallCommandRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeDirectConnectInstallCommandResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeESAggregationsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeESAggregationsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeEmergencyResponseListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeEmergencyResponseListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeEmergencyVulListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeEmergencyVulListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeEventByTableRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeEventByTableResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeExpertServiceListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeExpertServiceListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeExpertServiceOrderListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeExpertServiceOrderListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeExportMachinesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeExportMachinesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFastAnalysisRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFastAnalysisResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperEventRuleInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperEventRuleInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperRuleCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperRuleCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperRuleInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperRuleInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeFileTamperRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeGeneralStatRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeGeneralStatResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHistoryAccountsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHistoryAccountsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHistoryServiceRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHistoryServiceResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHostInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHostInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHostLoginListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHostLoginListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHotVulTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeHotVulTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIgnoreBaselineRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIgnoreBaselineRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIgnoreHostAndItemConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIgnoreHostAndItemConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIgnoreRuleEffectHostListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIgnoreRuleEffectHostListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIndexListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeIndexListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeJavaMemShellInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeJavaMemShellInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeJavaMemShellListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeJavaMemShellListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeJavaMemShellPluginInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeJavaMemShellPluginInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeJavaMemShellPluginListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeJavaMemShellPluginListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseBindListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseBindListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseBindScheduleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseBindScheduleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseGeneralRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseGeneralResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseWhiteConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLicenseWhiteConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogDeliveryKafkaOptionsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogDeliveryKafkaOptionsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogExportsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogExportsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogHistogramRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogHistogramResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogIndexRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogIndexResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogKafkaDeliverInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogKafkaDeliverInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogStorageConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogStorageConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogStorageRecordRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogStorageRecordResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogStorageStatisticRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogStorageStatisticResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogTypeRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLogTypeResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLoginWhiteCombinedListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLoginWhiteCombinedListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLoginWhiteHostListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLoginWhiteHostListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLoginWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeLoginWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineClearHistoryRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineClearHistoryResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineDefenseCntRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineDefenseCntResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineFileTamperRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineFileTamperRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineGeneralRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineGeneralResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineLicenseDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineLicenseDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineOsListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineOsListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineRegionListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineRegionListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineRegionsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineRegionsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineRiskCntRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineRiskCntResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineSnapshotRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachineSnapshotResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachinesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachinesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachinesSimpleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMachinesSimpleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalWareListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalWareListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMaliciousRequestWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMaliciousRequestWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareFileRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareFileResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareRiskOverviewRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareRiskOverviewResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareRiskWarningRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareRiskWarningResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareTimingScanSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareTimingScanSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareWhiteListAffectListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMalwareWhiteListAffectListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMonthInspectionReportRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeMonthInspectionReportResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeNetAttackSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeNetAttackSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeNetAttackWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeNetAttackWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeOpenPortStatisticsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeOpenPortStatisticsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeOverviewStatisticsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeOverviewStatisticsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribePrivilegeEventInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribePrivilegeEventInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribePrivilegeRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribePrivilegeRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProVersionInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProVersionInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProVersionStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProVersionStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProcessStatisticsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProcessStatisticsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProductStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeProductStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribePublicProxyInstallCommandRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribePublicProxyInstallCommandResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseBackupListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseBackupListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseEventsListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseEventsListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseMachineListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseMachineListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseMachineStrategyInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseMachineStrategyInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseRollBackTaskListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseRollBackTaskListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseStateRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseStateResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseStrategyDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseStrategyDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseStrategyListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseStrategyListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseStrategyMachinesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseStrategyMachinesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseTrendRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRansomDefenseTrendResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRecommendedProtectCpuRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRecommendedProtectCpuResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeReverseShellEventInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeReverseShellEventInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeReverseShellEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeReverseShellEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeReverseShellRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeReverseShellRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskBatchStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskBatchStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsEventInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsEventInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsEventListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsEventListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsPolicyListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskDnsPolicyListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskProcessEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeRiskProcessEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSafeInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSafeInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanMalwareScheduleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanMalwareScheduleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanScheduleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanScheduleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanStateRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanStateResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanTaskDetailsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanTaskDetailsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanTaskStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanTaskStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanVulSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScanVulSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenAttackHotspotRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenAttackHotspotResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenBroadcastsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenBroadcastsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenDefenseTrendsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenDefenseTrendsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenEmergentMsgRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenEmergentMsgResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenEventsCntRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenEventsCntResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenGeneralStatRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenGeneralStatResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenHostInvasionRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenHostInvasionResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenMachineRegionsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenMachineRegionsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenMachinesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenMachinesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenProtectionCntRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenProtectionCntResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenProtectionStatRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenProtectionStatResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenRiskAssetsTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeScreenRiskAssetsTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSearchLogsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSearchLogsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSearchTemplatesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSearchTemplatesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityBroadcastInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityBroadcastInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityBroadcastsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityBroadcastsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityDynamicsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityDynamicsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityEventStatRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityEventStatResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityEventsCntRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityEventsCntResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityProtectionStatRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityProtectionStatResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityTrendsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeSecurityTrendsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeServersAndRiskAndFirstInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeServersAndRiskAndFirstInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeStrategyExistRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeStrategyExistResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeTagMachinesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeTagMachinesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeTagsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeTagsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeTrialReportRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeTrialReportResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeUndoVulCountsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeUndoVulCountsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeUsersConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeUsersConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeUsualLoginPlacesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeUsualLoginPlacesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVdbAndPocInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVdbAndPocInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVersionCompareChartRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVersionCompareChartResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVersionStatisticsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVersionStatisticsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVertexDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVertexDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulCountByDatesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulCountByDatesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulCveIdInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulCveIdInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefenceEventRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefenceEventResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefenceListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefenceListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefenceOverviewRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefenceOverviewResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefencePluginDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefencePluginDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefencePluginExceptionCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefencePluginExceptionCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefencePluginStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefencePluginStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefenceSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulDefenceSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulEffectHostListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulEffectHostListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulEffectModulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulEffectModulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulEmergentMsgRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulEmergentMsgResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulFixStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulFixStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulHostCountScanTimeRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulHostCountScanTimeResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulHostTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulHostTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulInfoCvssRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulInfoCvssResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulLabelsRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulLabelsResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulLevelCountRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulLevelCountResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulOverviewRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulOverviewResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulStoreListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulStoreListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulTopRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulTopResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulTrendRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeVulTrendResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWarningHostConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWarningHostConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWarningListRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWarningListResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookPolicyRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookPolicyResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookReceiverRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookReceiverResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookReceiverUsageRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookReceiverUsageResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/DescribeWebHookRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/DestroyOrderRequest.h>
#include <tencentcloud/cwp/v20180228/model/DestroyOrderResponse.h>
#include <tencentcloud/cwp/v20180228/model/EditBashRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/EditBashRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/EditPrivilegeRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/EditPrivilegeRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/EditReverseShellRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/EditReverseShellRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/EditTagsRequest.h>
#include <tencentcloud/cwp/v20180228/model/EditTagsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetAppListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetAppListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetCoreModuleListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetCoreModuleListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetDatabaseListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetDatabaseListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetEnvListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetEnvListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetInitServiceListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetInitServiceListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetJarListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetJarListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetMachineDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetMachineDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetMachineListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetMachineListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetPlanTaskListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetPlanTaskListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetPortInfoListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetPortInfoListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetProcessInfoListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetProcessInfoListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetRecentMachineInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetRecentMachineInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetSystemPackageListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetSystemPackageListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetUserListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetUserListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetWebAppListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetWebAppListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetWebFrameListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetWebFrameListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetWebLocationListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetWebLocationListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetWebServiceInfoListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAssetWebServiceInfoListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportAttackEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportAttackEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineEffectHostListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineEffectHostListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineFixListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineFixListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineHostDetectListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineHostDetectListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineItemDetectListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineItemDetectListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBaselineListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBashEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBashEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBashEventsNewRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBashEventsNewResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBashPoliciesRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBashPoliciesResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportBruteAttacksRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportBruteAttacksResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportFileTamperEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportFileTamperEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportFileTamperRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportFileTamperRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportIgnoreBaselineRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportIgnoreBaselineRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportIgnoreRuleEffectHostListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportIgnoreRuleEffectHostListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportJavaMemShellPluginsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportJavaMemShellPluginsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportJavaMemShellsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportJavaMemShellsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportLicenseDetailRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportLicenseDetailResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportMaliciousRequestsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportMaliciousRequestsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportMalwaresRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportMalwaresResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportNonlocalLoginPlacesRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportNonlocalLoginPlacesResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportPrivilegeEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportPrivilegeEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseBackupListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseBackupListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseEventsListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseEventsListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseMachineListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseMachineListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseStrategyListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseStrategyListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseStrategyMachinesRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportRansomDefenseStrategyMachinesResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportReverseShellEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportReverseShellEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportRiskDnsEventListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportRiskDnsEventListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportRiskDnsPolicyListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportRiskDnsPolicyListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportRiskProcessEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportRiskProcessEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportScanTaskDetailsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportScanTaskDetailsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportSecurityTrendsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportSecurityTrendsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportTasksRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportTasksResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDefenceEventRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDefenceEventResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDefenceListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDefenceListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDefencePluginEventRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDefencePluginEventResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDetectionExcelRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDetectionExcelResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDetectionReportRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulDetectionReportResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulEffectHostListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulEffectHostListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ExportVulListResponse.h>
#include <tencentcloud/cwp/v20180228/model/GetLocalStorageItemRequest.h>
#include <tencentcloud/cwp/v20180228/model/GetLocalStorageItemResponse.h>
#include <tencentcloud/cwp/v20180228/model/IgnoreImpactedHostsRequest.h>
#include <tencentcloud/cwp/v20180228/model/IgnoreImpactedHostsResponse.h>
#include <tencentcloud/cwp/v20180228/model/KeysLocalStorageRequest.h>
#include <tencentcloud/cwp/v20180228/model/KeysLocalStorageResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyAutoOpenProVersionConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyAutoOpenProVersionConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBanModeRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBanModeResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBanStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBanStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBanWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBanWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBaselinePolicyRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBaselinePolicyResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBashPolicyRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBashPolicyResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBashPolicyStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBashPolicyStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBruteAttackRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyBruteAttackRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyEventAttackStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyEventAttackStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyFileTamperEventsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyFileTamperEventsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyFileTamperRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyFileTamperRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyFileTamperRuleStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyFileTamperRuleStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyJavaMemShellPluginSwitchRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyJavaMemShellPluginSwitchResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyJavaMemShellsStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyJavaMemShellsStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLicenseBindsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLicenseBindsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLicenseOrderRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLicenseOrderResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLogKafkaAccessRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLogKafkaAccessResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLogKafkaDeliverTypeRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLogKafkaDeliverTypeResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLogKafkaStateRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLogKafkaStateResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLogStorageConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLogStorageConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLoginWhiteInfoRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLoginWhiteInfoResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLoginWhiteRecordRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyLoginWhiteRecordResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMachineAutoClearConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMachineAutoClearConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMaliciousRequestWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMaliciousRequestWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMalwareTimingScanSettingsRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMalwareTimingScanSettingsResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMalwareWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyMalwareWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyNetAttackSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyNetAttackSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyNetAttackWhiteListRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyNetAttackWhiteListResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRansomDefenseEventsStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRansomDefenseEventsStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRansomDefenseStrategyStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRansomDefenseStrategyStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRiskDnsPolicyRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRiskDnsPolicyResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRiskDnsPolicyStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRiskDnsPolicyStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRiskEventsStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyRiskEventsStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyUsersConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyUsersConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyVulDefenceEventStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyVulDefenceEventStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyVulDefenceSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyVulDefenceSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWarningHostConfigRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWarningHostConfigResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWarningSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWarningSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookPolicyRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookPolicyResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookPolicyStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookPolicyStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookReceiverRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookReceiverResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookRuleStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebHookRuleStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebPageProtectSwitchRequest.h>
#include <tencentcloud/cwp/v20180228/model/ModifyWebPageProtectSwitchResponse.h>
#include <tencentcloud/cwp/v20180228/model/RansomDefenseRollbackRequest.h>
#include <tencentcloud/cwp/v20180228/model/RansomDefenseRollbackResponse.h>
#include <tencentcloud/cwp/v20180228/model/RecoverMalwaresRequest.h>
#include <tencentcloud/cwp/v20180228/model/RecoverMalwaresResponse.h>
#include <tencentcloud/cwp/v20180228/model/RemoveLocalStorageItemRequest.h>
#include <tencentcloud/cwp/v20180228/model/RemoveLocalStorageItemResponse.h>
#include <tencentcloud/cwp/v20180228/model/RemoveMachineRequest.h>
#include <tencentcloud/cwp/v20180228/model/RemoveMachineResponse.h>
#include <tencentcloud/cwp/v20180228/model/RetryCreateSnapshotRequest.h>
#include <tencentcloud/cwp/v20180228/model/RetryCreateSnapshotResponse.h>
#include <tencentcloud/cwp/v20180228/model/RetryVulFixRequest.h>
#include <tencentcloud/cwp/v20180228/model/RetryVulFixResponse.h>
#include <tencentcloud/cwp/v20180228/model/ScanBaselineRequest.h>
#include <tencentcloud/cwp/v20180228/model/ScanBaselineResponse.h>
#include <tencentcloud/cwp/v20180228/model/ScanTaskAgainRequest.h>
#include <tencentcloud/cwp/v20180228/model/ScanTaskAgainResponse.h>
#include <tencentcloud/cwp/v20180228/model/ScanVulRequest.h>
#include <tencentcloud/cwp/v20180228/model/ScanVulResponse.h>
#include <tencentcloud/cwp/v20180228/model/ScanVulAgainRequest.h>
#include <tencentcloud/cwp/v20180228/model/ScanVulAgainResponse.h>
#include <tencentcloud/cwp/v20180228/model/ScanVulSettingRequest.h>
#include <tencentcloud/cwp/v20180228/model/ScanVulSettingResponse.h>
#include <tencentcloud/cwp/v20180228/model/SearchLogRequest.h>
#include <tencentcloud/cwp/v20180228/model/SearchLogResponse.h>
#include <tencentcloud/cwp/v20180228/model/SeparateMalwaresRequest.h>
#include <tencentcloud/cwp/v20180228/model/SeparateMalwaresResponse.h>
#include <tencentcloud/cwp/v20180228/model/SetBashEventsStatusRequest.h>
#include <tencentcloud/cwp/v20180228/model/SetBashEventsStatusResponse.h>
#include <tencentcloud/cwp/v20180228/model/SetLocalStorageExpireRequest.h>
#include <tencentcloud/cwp/v20180228/model/SetLocalStorageExpireResponse.h>
#include <tencentcloud/cwp/v20180228/model/SetLocalStorageItemRequest.h>
#include <tencentcloud/cwp/v20180228/model/SetLocalStorageItemResponse.h>
#include <tencentcloud/cwp/v20180228/model/StartBaselineDetectRequest.h>
#include <tencentcloud/cwp/v20180228/model/StartBaselineDetectResponse.h>
#include <tencentcloud/cwp/v20180228/model/StopAssetScanRequest.h>
#include <tencentcloud/cwp/v20180228/model/StopAssetScanResponse.h>
#include <tencentcloud/cwp/v20180228/model/StopBaselineDetectRequest.h>
#include <tencentcloud/cwp/v20180228/model/StopBaselineDetectResponse.h>
#include <tencentcloud/cwp/v20180228/model/StopNoticeBanTipsRequest.h>
#include <tencentcloud/cwp/v20180228/model/StopNoticeBanTipsResponse.h>
#include <tencentcloud/cwp/v20180228/model/SwitchBashRulesRequest.h>
#include <tencentcloud/cwp/v20180228/model/SwitchBashRulesResponse.h>
#include <tencentcloud/cwp/v20180228/model/SyncAssetScanRequest.h>
#include <tencentcloud/cwp/v20180228/model/SyncAssetScanResponse.h>
#include <tencentcloud/cwp/v20180228/model/SyncBaselineDetectSummaryRequest.h>
#include <tencentcloud/cwp/v20180228/model/SyncBaselineDetectSummaryResponse.h>
#include <tencentcloud/cwp/v20180228/model/SyncMachinesRequest.h>
#include <tencentcloud/cwp/v20180228/model/SyncMachinesResponse.h>
#include <tencentcloud/cwp/v20180228/model/TestWebHookRuleRequest.h>
#include <tencentcloud/cwp/v20180228/model/TestWebHookRuleResponse.h>
#include <tencentcloud/cwp/v20180228/model/TrustMalwaresRequest.h>
#include <tencentcloud/cwp/v20180228/model/TrustMalwaresResponse.h>
#include <tencentcloud/cwp/v20180228/model/UntrustMalwaresRequest.h>
#include <tencentcloud/cwp/v20180228/model/UntrustMalwaresResponse.h>
#include <tencentcloud/cwp/v20180228/model/UpdateBaselineStrategyRequest.h>
#include <tencentcloud/cwp/v20180228/model/UpdateBaselineStrategyResponse.h>
#include <tencentcloud/cwp/v20180228/model/UpdateMachineTagsRequest.h>
#include <tencentcloud/cwp/v20180228/model/UpdateMachineTagsResponse.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            class CwpClient : public AbstractClient
            {
            public:
                CwpClient(const Credential &credential, const std::string &region);
                CwpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddLoginWhiteListsResponse> AddLoginWhiteListsOutcome;
                typedef std::future<AddLoginWhiteListsOutcome> AddLoginWhiteListsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::AddLoginWhiteListsRequest&, AddLoginWhiteListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddLoginWhiteListsAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelIgnoreVulResponse> CancelIgnoreVulOutcome;
                typedef std::future<CancelIgnoreVulOutcome> CancelIgnoreVulOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CancelIgnoreVulRequest&, CancelIgnoreVulOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelIgnoreVulAsyncHandler;
                typedef Outcome<Core::Error, Model::ChangeRuleEventsIgnoreStatusResponse> ChangeRuleEventsIgnoreStatusOutcome;
                typedef std::future<ChangeRuleEventsIgnoreStatusOutcome> ChangeRuleEventsIgnoreStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ChangeRuleEventsIgnoreStatusRequest&, ChangeRuleEventsIgnoreStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeRuleEventsIgnoreStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ChangeStrategyEnableStatusResponse> ChangeStrategyEnableStatusOutcome;
                typedef std::future<ChangeStrategyEnableStatusOutcome> ChangeStrategyEnableStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ChangeStrategyEnableStatusRequest&, ChangeStrategyEnableStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeStrategyEnableStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckBashPolicyParamsResponse> CheckBashPolicyParamsOutcome;
                typedef std::future<CheckBashPolicyParamsOutcome> CheckBashPolicyParamsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CheckBashPolicyParamsRequest&, CheckBashPolicyParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckBashPolicyParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckBashRuleParamsResponse> CheckBashRuleParamsOutcome;
                typedef std::future<CheckBashRuleParamsOutcome> CheckBashRuleParamsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CheckBashRuleParamsRequest&, CheckBashRuleParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckBashRuleParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckFileTamperRuleResponse> CheckFileTamperRuleOutcome;
                typedef std::future<CheckFileTamperRuleOutcome> CheckFileTamperRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CheckFileTamperRuleRequest&, CheckFileTamperRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckFileTamperRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckFirstScanBaselineResponse> CheckFirstScanBaselineOutcome;
                typedef std::future<CheckFirstScanBaselineOutcome> CheckFirstScanBaselineOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CheckFirstScanBaselineRequest&, CheckFirstScanBaselineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckFirstScanBaselineAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckLogKafkaConnectionStateResponse> CheckLogKafkaConnectionStateOutcome;
                typedef std::future<CheckLogKafkaConnectionStateOutcome> CheckLogKafkaConnectionStateOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CheckLogKafkaConnectionStateRequest&, CheckLogKafkaConnectionStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckLogKafkaConnectionStateAsyncHandler;
                typedef Outcome<Core::Error, Model::ClearLocalStorageResponse> ClearLocalStorageOutcome;
                typedef std::future<ClearLocalStorageOutcome> ClearLocalStorageOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ClearLocalStorageRequest&, ClearLocalStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClearLocalStorageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBanWhiteListResponse> CreateBanWhiteListOutcome;
                typedef std::future<CreateBanWhiteListOutcome> CreateBanWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateBanWhiteListRequest&, CreateBanWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBanWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBaselineStrategyResponse> CreateBaselineStrategyOutcome;
                typedef std::future<CreateBaselineStrategyOutcome> CreateBaselineStrategyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateBaselineStrategyRequest&, CreateBaselineStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBaselineStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBuyBindTaskResponse> CreateBuyBindTaskOutcome;
                typedef std::future<CreateBuyBindTaskOutcome> CreateBuyBindTaskOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateBuyBindTaskRequest&, CreateBuyBindTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBuyBindTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEmergencyVulScanResponse> CreateEmergencyVulScanOutcome;
                typedef std::future<CreateEmergencyVulScanOutcome> CreateEmergencyVulScanOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateEmergencyVulScanRequest&, CreateEmergencyVulScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmergencyVulScanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIncidentBacktrackingResponse> CreateIncidentBacktrackingOutcome;
                typedef std::future<CreateIncidentBacktrackingOutcome> CreateIncidentBacktrackingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateIncidentBacktrackingRequest&, CreateIncidentBacktrackingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIncidentBacktrackingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLicenseOrderResponse> CreateLicenseOrderOutcome;
                typedef std::future<CreateLicenseOrderOutcome> CreateLicenseOrderOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateLicenseOrderRequest&, CreateLicenseOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLicenseOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLogExportResponse> CreateLogExportOutcome;
                typedef std::future<CreateLogExportOutcome> CreateLogExportOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateLogExportRequest&, CreateLogExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogExportAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMaliciousRequestWhiteListResponse> CreateMaliciousRequestWhiteListOutcome;
                typedef std::future<CreateMaliciousRequestWhiteListOutcome> CreateMaliciousRequestWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateMaliciousRequestWhiteListRequest&, CreateMaliciousRequestWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMaliciousRequestWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMalwareWhiteListResponse> CreateMalwareWhiteListOutcome;
                typedef std::future<CreateMalwareWhiteListOutcome> CreateMalwareWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateMalwareWhiteListRequest&, CreateMalwareWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMalwareWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNetAttackWhiteListResponse> CreateNetAttackWhiteListOutcome;
                typedef std::future<CreateNetAttackWhiteListOutcome> CreateNetAttackWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateNetAttackWhiteListRequest&, CreateNetAttackWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetAttackWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRansomDefenseStrategyResponse> CreateRansomDefenseStrategyOutcome;
                typedef std::future<CreateRansomDefenseStrategyOutcome> CreateRansomDefenseStrategyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateRansomDefenseStrategyRequest&, CreateRansomDefenseStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRansomDefenseStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScanMalwareSettingResponse> CreateScanMalwareSettingOutcome;
                typedef std::future<CreateScanMalwareSettingOutcome> CreateScanMalwareSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateScanMalwareSettingRequest&, CreateScanMalwareSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScanMalwareSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSearchLogResponse> CreateSearchLogOutcome;
                typedef std::future<CreateSearchLogOutcome> CreateSearchLogOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateSearchLogRequest&, CreateSearchLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSearchLogAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSearchTemplateResponse> CreateSearchTemplateOutcome;
                typedef std::future<CreateSearchTemplateOutcome> CreateSearchTemplateOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateSearchTemplateRequest&, CreateSearchTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSearchTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulFixResponse> CreateVulFixOutcome;
                typedef std::future<CreateVulFixOutcome> CreateVulFixOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateVulFixRequest&, CreateVulFixOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulFixAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWhiteListOrderResponse> CreateWhiteListOrderOutcome;
                typedef std::future<CreateWhiteListOrderOutcome> CreateWhiteListOrderOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::CreateWhiteListOrderRequest&, CreateWhiteListOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWhiteListOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAllJavaMemShellsResponse> DeleteAllJavaMemShellsOutcome;
                typedef std::future<DeleteAllJavaMemShellsOutcome> DeleteAllJavaMemShellsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteAllJavaMemShellsRequest&, DeleteAllJavaMemShellsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAllJavaMemShellsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBanWhiteListResponse> DeleteBanWhiteListOutcome;
                typedef std::future<DeleteBanWhiteListOutcome> DeleteBanWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteBanWhiteListRequest&, DeleteBanWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBanWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBaselinePolicyResponse> DeleteBaselinePolicyOutcome;
                typedef std::future<DeleteBaselinePolicyOutcome> DeleteBaselinePolicyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteBaselinePolicyRequest&, DeleteBaselinePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBaselinePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBaselineStrategyResponse> DeleteBaselineStrategyOutcome;
                typedef std::future<DeleteBaselineStrategyOutcome> DeleteBaselineStrategyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteBaselineStrategyRequest&, DeleteBaselineStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBaselineStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBashEventsResponse> DeleteBashEventsOutcome;
                typedef std::future<DeleteBashEventsOutcome> DeleteBashEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteBashEventsRequest&, DeleteBashEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBashEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBashPoliciesResponse> DeleteBashPoliciesOutcome;
                typedef std::future<DeleteBashPoliciesOutcome> DeleteBashPoliciesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteBashPoliciesRequest&, DeleteBashPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBashPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBashRulesResponse> DeleteBashRulesOutcome;
                typedef std::future<DeleteBashRulesOutcome> DeleteBashRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteBashRulesRequest&, DeleteBashRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBashRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBruteAttacksResponse> DeleteBruteAttacksOutcome;
                typedef std::future<DeleteBruteAttacksOutcome> DeleteBruteAttacksOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteBruteAttacksRequest&, DeleteBruteAttacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBruteAttacksAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLicenseRecordResponse> DeleteLicenseRecordOutcome;
                typedef std::future<DeleteLicenseRecordOutcome> DeleteLicenseRecordOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteLicenseRecordRequest&, DeleteLicenseRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLicenseRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLicenseRecordAllResponse> DeleteLicenseRecordAllOutcome;
                typedef std::future<DeleteLicenseRecordAllOutcome> DeleteLicenseRecordAllOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteLicenseRecordAllRequest&, DeleteLicenseRecordAllOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLicenseRecordAllAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLogExportResponse> DeleteLogExportOutcome;
                typedef std::future<DeleteLogExportOutcome> DeleteLogExportOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteLogExportRequest&, DeleteLogExportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogExportAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoginWhiteListResponse> DeleteLoginWhiteListOutcome;
                typedef std::future<DeleteLoginWhiteListOutcome> DeleteLoginWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteLoginWhiteListRequest&, DeleteLoginWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoginWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMachineResponse> DeleteMachineOutcome;
                typedef std::future<DeleteMachineOutcome> DeleteMachineOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMachineRequest&, DeleteMachineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMachineClearHistoryResponse> DeleteMachineClearHistoryOutcome;
                typedef std::future<DeleteMachineClearHistoryOutcome> DeleteMachineClearHistoryOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMachineClearHistoryRequest&, DeleteMachineClearHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineClearHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMachineTagResponse> DeleteMachineTagOutcome;
                typedef std::future<DeleteMachineTagOutcome> DeleteMachineTagOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMachineTagRequest&, DeleteMachineTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineTagAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMaliciousRequestWhiteListResponse> DeleteMaliciousRequestWhiteListOutcome;
                typedef std::future<DeleteMaliciousRequestWhiteListOutcome> DeleteMaliciousRequestWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMaliciousRequestWhiteListRequest&, DeleteMaliciousRequestWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMaliciousRequestWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMaliciousRequestsResponse> DeleteMaliciousRequestsOutcome;
                typedef std::future<DeleteMaliciousRequestsOutcome> DeleteMaliciousRequestsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMaliciousRequestsRequest&, DeleteMaliciousRequestsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMaliciousRequestsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMalwareScanTaskResponse> DeleteMalwareScanTaskOutcome;
                typedef std::future<DeleteMalwareScanTaskOutcome> DeleteMalwareScanTaskOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMalwareScanTaskRequest&, DeleteMalwareScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMalwareScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMalwareWhiteListResponse> DeleteMalwareWhiteListOutcome;
                typedef std::future<DeleteMalwareWhiteListOutcome> DeleteMalwareWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMalwareWhiteListRequest&, DeleteMalwareWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMalwareWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMalwaresResponse> DeleteMalwaresOutcome;
                typedef std::future<DeleteMalwaresOutcome> DeleteMalwaresOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteMalwaresRequest&, DeleteMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNetAttackWhiteListResponse> DeleteNetAttackWhiteListOutcome;
                typedef std::future<DeleteNetAttackWhiteListOutcome> DeleteNetAttackWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteNetAttackWhiteListRequest&, DeleteNetAttackWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetAttackWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNonlocalLoginPlacesResponse> DeleteNonlocalLoginPlacesOutcome;
                typedef std::future<DeleteNonlocalLoginPlacesOutcome> DeleteNonlocalLoginPlacesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteNonlocalLoginPlacesRequest&, DeleteNonlocalLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNonlocalLoginPlacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrivilegeEventsResponse> DeletePrivilegeEventsOutcome;
                typedef std::future<DeletePrivilegeEventsOutcome> DeletePrivilegeEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeletePrivilegeEventsRequest&, DeletePrivilegeEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivilegeEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrivilegeRulesResponse> DeletePrivilegeRulesOutcome;
                typedef std::future<DeletePrivilegeRulesOutcome> DeletePrivilegeRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeletePrivilegeRulesRequest&, DeletePrivilegeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivilegeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReverseShellEventsResponse> DeleteReverseShellEventsOutcome;
                typedef std::future<DeleteReverseShellEventsOutcome> DeleteReverseShellEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteReverseShellEventsRequest&, DeleteReverseShellEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReverseShellEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReverseShellRulesResponse> DeleteReverseShellRulesOutcome;
                typedef std::future<DeleteReverseShellRulesOutcome> DeleteReverseShellRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteReverseShellRulesRequest&, DeleteReverseShellRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReverseShellRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRiskDnsEventResponse> DeleteRiskDnsEventOutcome;
                typedef std::future<DeleteRiskDnsEventOutcome> DeleteRiskDnsEventOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteRiskDnsEventRequest&, DeleteRiskDnsEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRiskDnsEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRiskDnsPolicyResponse> DeleteRiskDnsPolicyOutcome;
                typedef std::future<DeleteRiskDnsPolicyOutcome> DeleteRiskDnsPolicyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteRiskDnsPolicyRequest&, DeleteRiskDnsPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRiskDnsPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScanTaskResponse> DeleteScanTaskOutcome;
                typedef std::future<DeleteScanTaskOutcome> DeleteScanTaskOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteScanTaskRequest&, DeleteScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSearchTemplateResponse> DeleteSearchTemplateOutcome;
                typedef std::future<DeleteSearchTemplateOutcome> DeleteSearchTemplateOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteSearchTemplateRequest&, DeleteSearchTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSearchTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTagsResponse> DeleteTagsOutcome;
                typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteTagsRequest&, DeleteTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWebHookPolicyResponse> DeleteWebHookPolicyOutcome;
                typedef std::future<DeleteWebHookPolicyOutcome> DeleteWebHookPolicyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteWebHookPolicyRequest&, DeleteWebHookPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebHookPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWebHookReceiverResponse> DeleteWebHookReceiverOutcome;
                typedef std::future<DeleteWebHookReceiverOutcome> DeleteWebHookReceiverOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteWebHookReceiverRequest&, DeleteWebHookReceiverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebHookReceiverAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWebHookRuleResponse> DeleteWebHookRuleOutcome;
                typedef std::future<DeleteWebHookRuleOutcome> DeleteWebHookRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DeleteWebHookRuleRequest&, DeleteWebHookRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebHookRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeABTestConfigResponse> DescribeABTestConfigOutcome;
                typedef std::future<DescribeABTestConfigOutcome> DescribeABTestConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeABTestConfigRequest&, DescribeABTestConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeABTestConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAESKeyResponse> DescribeAESKeyOutcome;
                typedef std::future<DescribeAESKeyOutcome> DescribeAESKeyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAESKeyRequest&, DescribeAESKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAESKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountStatisticsResponse> DescribeAccountStatisticsOutcome;
                typedef std::future<DescribeAccountStatisticsOutcome> DescribeAccountStatisticsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAccountStatisticsRequest&, DescribeAccountStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentInstallCommandResponse> DescribeAgentInstallCommandOutcome;
                typedef std::future<DescribeAgentInstallCommandOutcome> DescribeAgentInstallCommandOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAgentInstallCommandRequest&, DescribeAgentInstallCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentInstallCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentInstallationTokenResponse> DescribeAgentInstallationTokenOutcome;
                typedef std::future<DescribeAgentInstallationTokenOutcome> DescribeAgentInstallationTokenOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAgentInstallationTokenRequest&, DescribeAgentInstallationTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentInstallationTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmIncidentNodesResponse> DescribeAlarmIncidentNodesOutcome;
                typedef std::future<DescribeAlarmIncidentNodesOutcome> DescribeAlarmIncidentNodesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAlarmIncidentNodesRequest&, DescribeAlarmIncidentNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmIncidentNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmVertexIdResponse> DescribeAlarmVertexIdOutcome;
                typedef std::future<DescribeAlarmVertexIdOutcome> DescribeAlarmVertexIdOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAlarmVertexIdRequest&, DescribeAlarmVertexIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmVertexIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetAppCountResponse> DescribeAssetAppCountOutcome;
                typedef std::future<DescribeAssetAppCountOutcome> DescribeAssetAppCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetAppCountRequest&, DescribeAssetAppCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetAppCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetAppListResponse> DescribeAssetAppListOutcome;
                typedef std::future<DescribeAssetAppListOutcome> DescribeAssetAppListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetAppListRequest&, DescribeAssetAppListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetAppListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetAppProcessListResponse> DescribeAssetAppProcessListOutcome;
                typedef std::future<DescribeAssetAppProcessListOutcome> DescribeAssetAppProcessListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetAppProcessListRequest&, DescribeAssetAppProcessListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetAppProcessListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetCoreModuleInfoResponse> DescribeAssetCoreModuleInfoOutcome;
                typedef std::future<DescribeAssetCoreModuleInfoOutcome> DescribeAssetCoreModuleInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetCoreModuleInfoRequest&, DescribeAssetCoreModuleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetCoreModuleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetCoreModuleListResponse> DescribeAssetCoreModuleListOutcome;
                typedef std::future<DescribeAssetCoreModuleListOutcome> DescribeAssetCoreModuleListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetCoreModuleListRequest&, DescribeAssetCoreModuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetCoreModuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetDatabaseCountResponse> DescribeAssetDatabaseCountOutcome;
                typedef std::future<DescribeAssetDatabaseCountOutcome> DescribeAssetDatabaseCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetDatabaseCountRequest&, DescribeAssetDatabaseCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDatabaseCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetDatabaseInfoResponse> DescribeAssetDatabaseInfoOutcome;
                typedef std::future<DescribeAssetDatabaseInfoOutcome> DescribeAssetDatabaseInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetDatabaseInfoRequest&, DescribeAssetDatabaseInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDatabaseInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetDatabaseListResponse> DescribeAssetDatabaseListOutcome;
                typedef std::future<DescribeAssetDatabaseListOutcome> DescribeAssetDatabaseListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetDatabaseListRequest&, DescribeAssetDatabaseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDatabaseListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetDiskListResponse> DescribeAssetDiskListOutcome;
                typedef std::future<DescribeAssetDiskListOutcome> DescribeAssetDiskListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetDiskListRequest&, DescribeAssetDiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetEnvListResponse> DescribeAssetEnvListOutcome;
                typedef std::future<DescribeAssetEnvListOutcome> DescribeAssetEnvListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetEnvListRequest&, DescribeAssetEnvListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetEnvListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetHostTotalCountResponse> DescribeAssetHostTotalCountOutcome;
                typedef std::future<DescribeAssetHostTotalCountOutcome> DescribeAssetHostTotalCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetHostTotalCountRequest&, DescribeAssetHostTotalCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetHostTotalCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetInfoResponse> DescribeAssetInfoOutcome;
                typedef std::future<DescribeAssetInfoOutcome> DescribeAssetInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetInfoRequest&, DescribeAssetInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetInitServiceListResponse> DescribeAssetInitServiceListOutcome;
                typedef std::future<DescribeAssetInitServiceListOutcome> DescribeAssetInitServiceListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetInitServiceListRequest&, DescribeAssetInitServiceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetInitServiceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetJarInfoResponse> DescribeAssetJarInfoOutcome;
                typedef std::future<DescribeAssetJarInfoOutcome> DescribeAssetJarInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetJarInfoRequest&, DescribeAssetJarInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetJarInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetJarListResponse> DescribeAssetJarListOutcome;
                typedef std::future<DescribeAssetJarListOutcome> DescribeAssetJarListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetJarListRequest&, DescribeAssetJarListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetJarListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetLoadInfoResponse> DescribeAssetLoadInfoOutcome;
                typedef std::future<DescribeAssetLoadInfoOutcome> DescribeAssetLoadInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetLoadInfoRequest&, DescribeAssetLoadInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetLoadInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetMachineDetailResponse> DescribeAssetMachineDetailOutcome;
                typedef std::future<DescribeAssetMachineDetailOutcome> DescribeAssetMachineDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetMachineDetailRequest&, DescribeAssetMachineDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetMachineDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetMachineListResponse> DescribeAssetMachineListOutcome;
                typedef std::future<DescribeAssetMachineListOutcome> DescribeAssetMachineListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetMachineListRequest&, DescribeAssetMachineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetMachineListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetMachineTagTopResponse> DescribeAssetMachineTagTopOutcome;
                typedef std::future<DescribeAssetMachineTagTopOutcome> DescribeAssetMachineTagTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetMachineTagTopRequest&, DescribeAssetMachineTagTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetMachineTagTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetPlanTaskListResponse> DescribeAssetPlanTaskListOutcome;
                typedef std::future<DescribeAssetPlanTaskListOutcome> DescribeAssetPlanTaskListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetPlanTaskListRequest&, DescribeAssetPlanTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetPlanTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetPortCountResponse> DescribeAssetPortCountOutcome;
                typedef std::future<DescribeAssetPortCountOutcome> DescribeAssetPortCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetPortCountRequest&, DescribeAssetPortCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetPortCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetPortInfoListResponse> DescribeAssetPortInfoListOutcome;
                typedef std::future<DescribeAssetPortInfoListOutcome> DescribeAssetPortInfoListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetPortInfoListRequest&, DescribeAssetPortInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetPortInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetProcessCountResponse> DescribeAssetProcessCountOutcome;
                typedef std::future<DescribeAssetProcessCountOutcome> DescribeAssetProcessCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetProcessCountRequest&, DescribeAssetProcessCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetProcessCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetProcessInfoListResponse> DescribeAssetProcessInfoListOutcome;
                typedef std::future<DescribeAssetProcessInfoListOutcome> DescribeAssetProcessInfoListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetProcessInfoListRequest&, DescribeAssetProcessInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetProcessInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetRecentMachineInfoResponse> DescribeAssetRecentMachineInfoOutcome;
                typedef std::future<DescribeAssetRecentMachineInfoOutcome> DescribeAssetRecentMachineInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetRecentMachineInfoRequest&, DescribeAssetRecentMachineInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetRecentMachineInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetSystemPackageListResponse> DescribeAssetSystemPackageListOutcome;
                typedef std::future<DescribeAssetSystemPackageListOutcome> DescribeAssetSystemPackageListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetSystemPackageListRequest&, DescribeAssetSystemPackageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetSystemPackageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetTotalCountResponse> DescribeAssetTotalCountOutcome;
                typedef std::future<DescribeAssetTotalCountOutcome> DescribeAssetTotalCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetTotalCountRequest&, DescribeAssetTotalCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetTotalCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetTypeTopResponse> DescribeAssetTypeTopOutcome;
                typedef std::future<DescribeAssetTypeTopOutcome> DescribeAssetTypeTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetTypeTopRequest&, DescribeAssetTypeTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetTypeTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetTypesResponse> DescribeAssetTypesOutcome;
                typedef std::future<DescribeAssetTypesOutcome> DescribeAssetTypesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetTypesRequest&, DescribeAssetTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetUserCountResponse> DescribeAssetUserCountOutcome;
                typedef std::future<DescribeAssetUserCountOutcome> DescribeAssetUserCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetUserCountRequest&, DescribeAssetUserCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetUserCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetUserInfoResponse> DescribeAssetUserInfoOutcome;
                typedef std::future<DescribeAssetUserInfoOutcome> DescribeAssetUserInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetUserInfoRequest&, DescribeAssetUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetUserInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetUserKeyListResponse> DescribeAssetUserKeyListOutcome;
                typedef std::future<DescribeAssetUserKeyListOutcome> DescribeAssetUserKeyListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetUserKeyListRequest&, DescribeAssetUserKeyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetUserKeyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetUserListResponse> DescribeAssetUserListOutcome;
                typedef std::future<DescribeAssetUserListOutcome> DescribeAssetUserListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetUserListRequest&, DescribeAssetUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebAppCountResponse> DescribeAssetWebAppCountOutcome;
                typedef std::future<DescribeAssetWebAppCountOutcome> DescribeAssetWebAppCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebAppCountRequest&, DescribeAssetWebAppCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebAppCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebAppListResponse> DescribeAssetWebAppListOutcome;
                typedef std::future<DescribeAssetWebAppListOutcome> DescribeAssetWebAppListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebAppListRequest&, DescribeAssetWebAppListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebAppListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebAppPluginListResponse> DescribeAssetWebAppPluginListOutcome;
                typedef std::future<DescribeAssetWebAppPluginListOutcome> DescribeAssetWebAppPluginListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebAppPluginListRequest&, DescribeAssetWebAppPluginListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebAppPluginListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebFrameCountResponse> DescribeAssetWebFrameCountOutcome;
                typedef std::future<DescribeAssetWebFrameCountOutcome> DescribeAssetWebFrameCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebFrameCountRequest&, DescribeAssetWebFrameCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebFrameCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebFrameListResponse> DescribeAssetWebFrameListOutcome;
                typedef std::future<DescribeAssetWebFrameListOutcome> DescribeAssetWebFrameListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebFrameListRequest&, DescribeAssetWebFrameListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebFrameListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebLocationCountResponse> DescribeAssetWebLocationCountOutcome;
                typedef std::future<DescribeAssetWebLocationCountOutcome> DescribeAssetWebLocationCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebLocationCountRequest&, DescribeAssetWebLocationCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebLocationCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebLocationInfoResponse> DescribeAssetWebLocationInfoOutcome;
                typedef std::future<DescribeAssetWebLocationInfoOutcome> DescribeAssetWebLocationInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebLocationInfoRequest&, DescribeAssetWebLocationInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebLocationInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebLocationListResponse> DescribeAssetWebLocationListOutcome;
                typedef std::future<DescribeAssetWebLocationListOutcome> DescribeAssetWebLocationListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebLocationListRequest&, DescribeAssetWebLocationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebLocationListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebLocationPathListResponse> DescribeAssetWebLocationPathListOutcome;
                typedef std::future<DescribeAssetWebLocationPathListOutcome> DescribeAssetWebLocationPathListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebLocationPathListRequest&, DescribeAssetWebLocationPathListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebLocationPathListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebServiceCountResponse> DescribeAssetWebServiceCountOutcome;
                typedef std::future<DescribeAssetWebServiceCountOutcome> DescribeAssetWebServiceCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebServiceCountRequest&, DescribeAssetWebServiceCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebServiceCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebServiceInfoListResponse> DescribeAssetWebServiceInfoListOutcome;
                typedef std::future<DescribeAssetWebServiceInfoListOutcome> DescribeAssetWebServiceInfoListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebServiceInfoListRequest&, DescribeAssetWebServiceInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebServiceInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetWebServiceProcessListResponse> DescribeAssetWebServiceProcessListOutcome;
                typedef std::future<DescribeAssetWebServiceProcessListOutcome> DescribeAssetWebServiceProcessListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAssetWebServiceProcessListRequest&, DescribeAssetWebServiceProcessListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetWebServiceProcessListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackEventInfoResponse> DescribeAttackEventInfoOutcome;
                typedef std::future<DescribeAttackEventInfoOutcome> DescribeAttackEventInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAttackEventInfoRequest&, DescribeAttackEventInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackEventInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackEventsResponse> DescribeAttackEventsOutcome;
                typedef std::future<DescribeAttackEventsOutcome> DescribeAttackEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAttackEventsRequest&, DescribeAttackEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackLogsResponse> DescribeAttackLogsOutcome;
                typedef std::future<DescribeAttackLogsOutcome> DescribeAttackLogsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAttackLogsRequest&, DescribeAttackLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackSourceResponse> DescribeAttackSourceOutcome;
                typedef std::future<DescribeAttackSourceOutcome> DescribeAttackSourceOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAttackSourceRequest&, DescribeAttackSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackSourceEventsResponse> DescribeAttackSourceEventsOutcome;
                typedef std::future<DescribeAttackSourceEventsOutcome> DescribeAttackSourceEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAttackSourceEventsRequest&, DescribeAttackSourceEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackSourceEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackStatisticsResponse> DescribeAttackStatisticsOutcome;
                typedef std::future<DescribeAttackStatisticsOutcome> DescribeAttackStatisticsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAttackStatisticsRequest&, DescribeAttackStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackTopResponse> DescribeAttackTopOutcome;
                typedef std::future<DescribeAttackTopOutcome> DescribeAttackTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAttackTopRequest&, DescribeAttackTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackTrendsResponse> DescribeAttackTrendsOutcome;
                typedef std::future<DescribeAttackTrendsOutcome> DescribeAttackTrendsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAttackTrendsRequest&, DescribeAttackTrendsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackTrendsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackVulTypeListResponse> DescribeAttackVulTypeListOutcome;
                typedef std::future<DescribeAttackVulTypeListOutcome> DescribeAttackVulTypeListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAttackVulTypeListRequest&, DescribeAttackVulTypeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackVulTypeListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAvailableExpertServiceDetailResponse> DescribeAvailableExpertServiceDetailOutcome;
                typedef std::future<DescribeAvailableExpertServiceDetailOutcome> DescribeAvailableExpertServiceDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeAvailableExpertServiceDetailRequest&, DescribeAvailableExpertServiceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableExpertServiceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBanModeResponse> DescribeBanModeOutcome;
                typedef std::future<DescribeBanModeOutcome> DescribeBanModeOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBanModeRequest&, DescribeBanModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBanModeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBanRegionsResponse> DescribeBanRegionsOutcome;
                typedef std::future<DescribeBanRegionsOutcome> DescribeBanRegionsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBanRegionsRequest&, DescribeBanRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBanRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBanStatusResponse> DescribeBanStatusOutcome;
                typedef std::future<DescribeBanStatusOutcome> DescribeBanStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBanStatusRequest&, DescribeBanStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBanStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBanWhiteListResponse> DescribeBanWhiteListOutcome;
                typedef std::future<DescribeBanWhiteListOutcome> DescribeBanWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBanWhiteListRequest&, DescribeBanWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBanWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineBasicInfoResponse> DescribeBaselineBasicInfoOutcome;
                typedef std::future<DescribeBaselineBasicInfoOutcome> DescribeBaselineBasicInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineBasicInfoRequest&, DescribeBaselineBasicInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineBasicInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineDefaultStrategyListResponse> DescribeBaselineDefaultStrategyListOutcome;
                typedef std::future<DescribeBaselineDefaultStrategyListOutcome> DescribeBaselineDefaultStrategyListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineDefaultStrategyListRequest&, DescribeBaselineDefaultStrategyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineDefaultStrategyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineDetailResponse> DescribeBaselineDetailOutcome;
                typedef std::future<DescribeBaselineDetailOutcome> DescribeBaselineDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineDetailRequest&, DescribeBaselineDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineEffectHostListResponse> DescribeBaselineEffectHostListOutcome;
                typedef std::future<DescribeBaselineEffectHostListOutcome> DescribeBaselineEffectHostListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineEffectHostListRequest&, DescribeBaselineEffectHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineEffectHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineHostDetectListResponse> DescribeBaselineHostDetectListOutcome;
                typedef std::future<DescribeBaselineHostDetectListOutcome> DescribeBaselineHostDetectListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineHostDetectListRequest&, DescribeBaselineHostDetectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineHostDetectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineHostTopResponse> DescribeBaselineHostTopOutcome;
                typedef std::future<DescribeBaselineHostTopOutcome> DescribeBaselineHostTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineHostTopRequest&, DescribeBaselineHostTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineHostTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineItemDetectListResponse> DescribeBaselineItemDetectListOutcome;
                typedef std::future<DescribeBaselineItemDetectListOutcome> DescribeBaselineItemDetectListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineItemDetectListRequest&, DescribeBaselineItemDetectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineItemDetectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineItemListResponse> DescribeBaselineItemListOutcome;
                typedef std::future<DescribeBaselineItemListOutcome> DescribeBaselineItemListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineItemListRequest&, DescribeBaselineItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineListResponse> DescribeBaselineListOutcome;
                typedef std::future<DescribeBaselineListOutcome> DescribeBaselineListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineListRequest&, DescribeBaselineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselinePolicyListResponse> DescribeBaselinePolicyListOutcome;
                typedef std::future<DescribeBaselinePolicyListOutcome> DescribeBaselinePolicyListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselinePolicyListRequest&, DescribeBaselinePolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselinePolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineRuleResponse> DescribeBaselineRuleOutcome;
                typedef std::future<DescribeBaselineRuleOutcome> DescribeBaselineRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineRuleRequest&, DescribeBaselineRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineScanScheduleResponse> DescribeBaselineScanScheduleOutcome;
                typedef std::future<DescribeBaselineScanScheduleOutcome> DescribeBaselineScanScheduleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineScanScheduleRequest&, DescribeBaselineScanScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineScanScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineStrategyDetailResponse> DescribeBaselineStrategyDetailOutcome;
                typedef std::future<DescribeBaselineStrategyDetailOutcome> DescribeBaselineStrategyDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineStrategyDetailRequest&, DescribeBaselineStrategyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineStrategyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineStrategyListResponse> DescribeBaselineStrategyListOutcome;
                typedef std::future<DescribeBaselineStrategyListOutcome> DescribeBaselineStrategyListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineStrategyListRequest&, DescribeBaselineStrategyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineStrategyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineTopResponse> DescribeBaselineTopOutcome;
                typedef std::future<DescribeBaselineTopOutcome> DescribeBaselineTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineTopRequest&, DescribeBaselineTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineWeakPasswordListResponse> DescribeBaselineWeakPasswordListOutcome;
                typedef std::future<DescribeBaselineWeakPasswordListOutcome> DescribeBaselineWeakPasswordListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBaselineWeakPasswordListRequest&, DescribeBaselineWeakPasswordListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineWeakPasswordListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBashEventsResponse> DescribeBashEventsOutcome;
                typedef std::future<DescribeBashEventsOutcome> DescribeBashEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBashEventsRequest&, DescribeBashEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBashEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBashEventsInfoResponse> DescribeBashEventsInfoOutcome;
                typedef std::future<DescribeBashEventsInfoOutcome> DescribeBashEventsInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBashEventsInfoRequest&, DescribeBashEventsInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBashEventsInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBashEventsInfoNewResponse> DescribeBashEventsInfoNewOutcome;
                typedef std::future<DescribeBashEventsInfoNewOutcome> DescribeBashEventsInfoNewOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBashEventsInfoNewRequest&, DescribeBashEventsInfoNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBashEventsInfoNewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBashEventsNewResponse> DescribeBashEventsNewOutcome;
                typedef std::future<DescribeBashEventsNewOutcome> DescribeBashEventsNewOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBashEventsNewRequest&, DescribeBashEventsNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBashEventsNewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBashPoliciesResponse> DescribeBashPoliciesOutcome;
                typedef std::future<DescribeBashPoliciesOutcome> DescribeBashPoliciesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBashPoliciesRequest&, DescribeBashPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBashPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBashRulesResponse> DescribeBashRulesOutcome;
                typedef std::future<DescribeBashRulesOutcome> DescribeBashRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBashRulesRequest&, DescribeBashRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBashRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBruteAttackListResponse> DescribeBruteAttackListOutcome;
                typedef std::future<DescribeBruteAttackListOutcome> DescribeBruteAttackListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBruteAttackListRequest&, DescribeBruteAttackListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBruteAttackListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBruteAttackRulesResponse> DescribeBruteAttackRulesOutcome;
                typedef std::future<DescribeBruteAttackRulesOutcome> DescribeBruteAttackRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeBruteAttackRulesRequest&, DescribeBruteAttackRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBruteAttackRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCanFixVulMachineResponse> DescribeCanFixVulMachineOutcome;
                typedef std::future<DescribeCanFixVulMachineOutcome> DescribeCanFixVulMachineOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeCanFixVulMachineRequest&, DescribeCanFixVulMachineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCanFixVulMachineAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCanNotSeparateMachineResponse> DescribeCanNotSeparateMachineOutcome;
                typedef std::future<DescribeCanNotSeparateMachineOutcome> DescribeCanNotSeparateMachineOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeCanNotSeparateMachineRequest&, DescribeCanNotSeparateMachineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCanNotSeparateMachineAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClientExceptionResponse> DescribeClientExceptionOutcome;
                typedef std::future<DescribeClientExceptionOutcome> DescribeClientExceptionOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeClientExceptionRequest&, DescribeClientExceptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientExceptionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComponentStatisticsResponse> DescribeComponentStatisticsOutcome;
                typedef std::future<DescribeComponentStatisticsOutcome> DescribeComponentStatisticsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeComponentStatisticsRequest&, DescribeComponentStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComponentStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDefenceEventDetailResponse> DescribeDefenceEventDetailOutcome;
                typedef std::future<DescribeDefenceEventDetailOutcome> DescribeDefenceEventDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeDefenceEventDetailRequest&, DescribeDefenceEventDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefenceEventDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDirectConnectInstallCommandResponse> DescribeDirectConnectInstallCommandOutcome;
                typedef std::future<DescribeDirectConnectInstallCommandOutcome> DescribeDirectConnectInstallCommandOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeDirectConnectInstallCommandRequest&, DescribeDirectConnectInstallCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirectConnectInstallCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeESAggregationsResponse> DescribeESAggregationsOutcome;
                typedef std::future<DescribeESAggregationsOutcome> DescribeESAggregationsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeESAggregationsRequest&, DescribeESAggregationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeESAggregationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEmergencyResponseListResponse> DescribeEmergencyResponseListOutcome;
                typedef std::future<DescribeEmergencyResponseListOutcome> DescribeEmergencyResponseListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeEmergencyResponseListRequest&, DescribeEmergencyResponseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmergencyResponseListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEmergencyVulListResponse> DescribeEmergencyVulListOutcome;
                typedef std::future<DescribeEmergencyVulListOutcome> DescribeEmergencyVulListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeEmergencyVulListRequest&, DescribeEmergencyVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmergencyVulListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventByTableResponse> DescribeEventByTableOutcome;
                typedef std::future<DescribeEventByTableOutcome> DescribeEventByTableOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeEventByTableRequest&, DescribeEventByTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventByTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExpertServiceListResponse> DescribeExpertServiceListOutcome;
                typedef std::future<DescribeExpertServiceListOutcome> DescribeExpertServiceListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeExpertServiceListRequest&, DescribeExpertServiceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExpertServiceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExpertServiceOrderListResponse> DescribeExpertServiceOrderListOutcome;
                typedef std::future<DescribeExpertServiceOrderListOutcome> DescribeExpertServiceOrderListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeExpertServiceOrderListRequest&, DescribeExpertServiceOrderListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExpertServiceOrderListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExportMachinesResponse> DescribeExportMachinesOutcome;
                typedef std::future<DescribeExportMachinesOutcome> DescribeExportMachinesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeExportMachinesRequest&, DescribeExportMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFastAnalysisResponse> DescribeFastAnalysisOutcome;
                typedef std::future<DescribeFastAnalysisOutcome> DescribeFastAnalysisOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeFastAnalysisRequest&, DescribeFastAnalysisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFastAnalysisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileTamperEventRuleInfoResponse> DescribeFileTamperEventRuleInfoOutcome;
                typedef std::future<DescribeFileTamperEventRuleInfoOutcome> DescribeFileTamperEventRuleInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeFileTamperEventRuleInfoRequest&, DescribeFileTamperEventRuleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileTamperEventRuleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileTamperEventsResponse> DescribeFileTamperEventsOutcome;
                typedef std::future<DescribeFileTamperEventsOutcome> DescribeFileTamperEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeFileTamperEventsRequest&, DescribeFileTamperEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileTamperEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileTamperRuleCountResponse> DescribeFileTamperRuleCountOutcome;
                typedef std::future<DescribeFileTamperRuleCountOutcome> DescribeFileTamperRuleCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeFileTamperRuleCountRequest&, DescribeFileTamperRuleCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileTamperRuleCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileTamperRuleInfoResponse> DescribeFileTamperRuleInfoOutcome;
                typedef std::future<DescribeFileTamperRuleInfoOutcome> DescribeFileTamperRuleInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeFileTamperRuleInfoRequest&, DescribeFileTamperRuleInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileTamperRuleInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileTamperRulesResponse> DescribeFileTamperRulesOutcome;
                typedef std::future<DescribeFileTamperRulesOutcome> DescribeFileTamperRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeFileTamperRulesRequest&, DescribeFileTamperRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileTamperRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGeneralStatResponse> DescribeGeneralStatOutcome;
                typedef std::future<DescribeGeneralStatOutcome> DescribeGeneralStatOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeGeneralStatRequest&, DescribeGeneralStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGeneralStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHistoryAccountsResponse> DescribeHistoryAccountsOutcome;
                typedef std::future<DescribeHistoryAccountsOutcome> DescribeHistoryAccountsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeHistoryAccountsRequest&, DescribeHistoryAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHistoryServiceResponse> DescribeHistoryServiceOutcome;
                typedef std::future<DescribeHistoryServiceOutcome> DescribeHistoryServiceOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeHistoryServiceRequest&, DescribeHistoryServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostInfoResponse> DescribeHostInfoOutcome;
                typedef std::future<DescribeHostInfoOutcome> DescribeHostInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeHostInfoRequest&, DescribeHostInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostLoginListResponse> DescribeHostLoginListOutcome;
                typedef std::future<DescribeHostLoginListOutcome> DescribeHostLoginListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeHostLoginListRequest&, DescribeHostLoginListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostLoginListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHotVulTopResponse> DescribeHotVulTopOutcome;
                typedef std::future<DescribeHotVulTopOutcome> DescribeHotVulTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeHotVulTopRequest&, DescribeHotVulTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHotVulTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIgnoreBaselineRuleResponse> DescribeIgnoreBaselineRuleOutcome;
                typedef std::future<DescribeIgnoreBaselineRuleOutcome> DescribeIgnoreBaselineRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeIgnoreBaselineRuleRequest&, DescribeIgnoreBaselineRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIgnoreBaselineRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIgnoreHostAndItemConfigResponse> DescribeIgnoreHostAndItemConfigOutcome;
                typedef std::future<DescribeIgnoreHostAndItemConfigOutcome> DescribeIgnoreHostAndItemConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeIgnoreHostAndItemConfigRequest&, DescribeIgnoreHostAndItemConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIgnoreHostAndItemConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIgnoreRuleEffectHostListResponse> DescribeIgnoreRuleEffectHostListOutcome;
                typedef std::future<DescribeIgnoreRuleEffectHostListOutcome> DescribeIgnoreRuleEffectHostListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeIgnoreRuleEffectHostListRequest&, DescribeIgnoreRuleEffectHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIgnoreRuleEffectHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIndexListResponse> DescribeIndexListOutcome;
                typedef std::future<DescribeIndexListOutcome> DescribeIndexListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeIndexListRequest&, DescribeIndexListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIndexListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJavaMemShellInfoResponse> DescribeJavaMemShellInfoOutcome;
                typedef std::future<DescribeJavaMemShellInfoOutcome> DescribeJavaMemShellInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeJavaMemShellInfoRequest&, DescribeJavaMemShellInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJavaMemShellInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJavaMemShellListResponse> DescribeJavaMemShellListOutcome;
                typedef std::future<DescribeJavaMemShellListOutcome> DescribeJavaMemShellListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeJavaMemShellListRequest&, DescribeJavaMemShellListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJavaMemShellListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJavaMemShellPluginInfoResponse> DescribeJavaMemShellPluginInfoOutcome;
                typedef std::future<DescribeJavaMemShellPluginInfoOutcome> DescribeJavaMemShellPluginInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeJavaMemShellPluginInfoRequest&, DescribeJavaMemShellPluginInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJavaMemShellPluginInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJavaMemShellPluginListResponse> DescribeJavaMemShellPluginListOutcome;
                typedef std::future<DescribeJavaMemShellPluginListOutcome> DescribeJavaMemShellPluginListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeJavaMemShellPluginListRequest&, DescribeJavaMemShellPluginListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJavaMemShellPluginListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLicenseResponse> DescribeLicenseOutcome;
                typedef std::future<DescribeLicenseOutcome> DescribeLicenseOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLicenseRequest&, DescribeLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLicenseBindListResponse> DescribeLicenseBindListOutcome;
                typedef std::future<DescribeLicenseBindListOutcome> DescribeLicenseBindListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLicenseBindListRequest&, DescribeLicenseBindListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseBindListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLicenseBindScheduleResponse> DescribeLicenseBindScheduleOutcome;
                typedef std::future<DescribeLicenseBindScheduleOutcome> DescribeLicenseBindScheduleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLicenseBindScheduleRequest&, DescribeLicenseBindScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseBindScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLicenseGeneralResponse> DescribeLicenseGeneralOutcome;
                typedef std::future<DescribeLicenseGeneralOutcome> DescribeLicenseGeneralOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLicenseGeneralRequest&, DescribeLicenseGeneralOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseGeneralAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLicenseListResponse> DescribeLicenseListOutcome;
                typedef std::future<DescribeLicenseListOutcome> DescribeLicenseListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLicenseListRequest&, DescribeLicenseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLicenseWhiteConfigResponse> DescribeLicenseWhiteConfigOutcome;
                typedef std::future<DescribeLicenseWhiteConfigOutcome> DescribeLicenseWhiteConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLicenseWhiteConfigRequest&, DescribeLicenseWhiteConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseWhiteConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogDeliveryKafkaOptionsResponse> DescribeLogDeliveryKafkaOptionsOutcome;
                typedef std::future<DescribeLogDeliveryKafkaOptionsOutcome> DescribeLogDeliveryKafkaOptionsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLogDeliveryKafkaOptionsRequest&, DescribeLogDeliveryKafkaOptionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogDeliveryKafkaOptionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogExportsResponse> DescribeLogExportsOutcome;
                typedef std::future<DescribeLogExportsOutcome> DescribeLogExportsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLogExportsRequest&, DescribeLogExportsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogExportsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogHistogramResponse> DescribeLogHistogramOutcome;
                typedef std::future<DescribeLogHistogramOutcome> DescribeLogHistogramOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLogHistogramRequest&, DescribeLogHistogramOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogHistogramAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogIndexResponse> DescribeLogIndexOutcome;
                typedef std::future<DescribeLogIndexOutcome> DescribeLogIndexOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLogIndexRequest&, DescribeLogIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogKafkaDeliverInfoResponse> DescribeLogKafkaDeliverInfoOutcome;
                typedef std::future<DescribeLogKafkaDeliverInfoOutcome> DescribeLogKafkaDeliverInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLogKafkaDeliverInfoRequest&, DescribeLogKafkaDeliverInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogKafkaDeliverInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogStorageConfigResponse> DescribeLogStorageConfigOutcome;
                typedef std::future<DescribeLogStorageConfigOutcome> DescribeLogStorageConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLogStorageConfigRequest&, DescribeLogStorageConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogStorageConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogStorageRecordResponse> DescribeLogStorageRecordOutcome;
                typedef std::future<DescribeLogStorageRecordOutcome> DescribeLogStorageRecordOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLogStorageRecordRequest&, DescribeLogStorageRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogStorageRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogStorageStatisticResponse> DescribeLogStorageStatisticOutcome;
                typedef std::future<DescribeLogStorageStatisticOutcome> DescribeLogStorageStatisticOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLogStorageStatisticRequest&, DescribeLogStorageStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogStorageStatisticAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogTypeResponse> DescribeLogTypeOutcome;
                typedef std::future<DescribeLogTypeOutcome> DescribeLogTypeOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLogTypeRequest&, DescribeLogTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoginWhiteCombinedListResponse> DescribeLoginWhiteCombinedListOutcome;
                typedef std::future<DescribeLoginWhiteCombinedListOutcome> DescribeLoginWhiteCombinedListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLoginWhiteCombinedListRequest&, DescribeLoginWhiteCombinedListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginWhiteCombinedListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoginWhiteHostListResponse> DescribeLoginWhiteHostListOutcome;
                typedef std::future<DescribeLoginWhiteHostListOutcome> DescribeLoginWhiteHostListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLoginWhiteHostListRequest&, DescribeLoginWhiteHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginWhiteHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoginWhiteListResponse> DescribeLoginWhiteListOutcome;
                typedef std::future<DescribeLoginWhiteListOutcome> DescribeLoginWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeLoginWhiteListRequest&, DescribeLoginWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineClearHistoryResponse> DescribeMachineClearHistoryOutcome;
                typedef std::future<DescribeMachineClearHistoryOutcome> DescribeMachineClearHistoryOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineClearHistoryRequest&, DescribeMachineClearHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineClearHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineDefenseCntResponse> DescribeMachineDefenseCntOutcome;
                typedef std::future<DescribeMachineDefenseCntOutcome> DescribeMachineDefenseCntOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineDefenseCntRequest&, DescribeMachineDefenseCntOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineDefenseCntAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineFileTamperRulesResponse> DescribeMachineFileTamperRulesOutcome;
                typedef std::future<DescribeMachineFileTamperRulesOutcome> DescribeMachineFileTamperRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineFileTamperRulesRequest&, DescribeMachineFileTamperRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineFileTamperRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineGeneralResponse> DescribeMachineGeneralOutcome;
                typedef std::future<DescribeMachineGeneralOutcome> DescribeMachineGeneralOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineGeneralRequest&, DescribeMachineGeneralOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineGeneralAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineLicenseDetailResponse> DescribeMachineLicenseDetailOutcome;
                typedef std::future<DescribeMachineLicenseDetailOutcome> DescribeMachineLicenseDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineLicenseDetailRequest&, DescribeMachineLicenseDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineLicenseDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineOsListResponse> DescribeMachineOsListOutcome;
                typedef std::future<DescribeMachineOsListOutcome> DescribeMachineOsListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineOsListRequest&, DescribeMachineOsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineOsListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineRegionListResponse> DescribeMachineRegionListOutcome;
                typedef std::future<DescribeMachineRegionListOutcome> DescribeMachineRegionListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineRegionListRequest&, DescribeMachineRegionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineRegionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineRegionsResponse> DescribeMachineRegionsOutcome;
                typedef std::future<DescribeMachineRegionsOutcome> DescribeMachineRegionsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineRegionsRequest&, DescribeMachineRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineRiskCntResponse> DescribeMachineRiskCntOutcome;
                typedef std::future<DescribeMachineRiskCntOutcome> DescribeMachineRiskCntOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineRiskCntRequest&, DescribeMachineRiskCntOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineRiskCntAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineSnapshotResponse> DescribeMachineSnapshotOutcome;
                typedef std::future<DescribeMachineSnapshotOutcome> DescribeMachineSnapshotOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachineSnapshotRequest&, DescribeMachineSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachinesResponse> DescribeMachinesOutcome;
                typedef std::future<DescribeMachinesOutcome> DescribeMachinesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachinesRequest&, DescribeMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachinesSimpleResponse> DescribeMachinesSimpleOutcome;
                typedef std::future<DescribeMachinesSimpleOutcome> DescribeMachinesSimpleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMachinesSimpleRequest&, DescribeMachinesSimpleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachinesSimpleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalWareListResponse> DescribeMalWareListOutcome;
                typedef std::future<DescribeMalWareListOutcome> DescribeMalWareListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMalWareListRequest&, DescribeMalWareListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalWareListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMaliciousRequestWhiteListResponse> DescribeMaliciousRequestWhiteListOutcome;
                typedef std::future<DescribeMaliciousRequestWhiteListOutcome> DescribeMaliciousRequestWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMaliciousRequestWhiteListRequest&, DescribeMaliciousRequestWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMaliciousRequestWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalwareFileResponse> DescribeMalwareFileOutcome;
                typedef std::future<DescribeMalwareFileOutcome> DescribeMalwareFileOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMalwareFileRequest&, DescribeMalwareFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwareFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalwareInfoResponse> DescribeMalwareInfoOutcome;
                typedef std::future<DescribeMalwareInfoOutcome> DescribeMalwareInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMalwareInfoRequest&, DescribeMalwareInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwareInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalwareRiskOverviewResponse> DescribeMalwareRiskOverviewOutcome;
                typedef std::future<DescribeMalwareRiskOverviewOutcome> DescribeMalwareRiskOverviewOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMalwareRiskOverviewRequest&, DescribeMalwareRiskOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwareRiskOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalwareRiskWarningResponse> DescribeMalwareRiskWarningOutcome;
                typedef std::future<DescribeMalwareRiskWarningOutcome> DescribeMalwareRiskWarningOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMalwareRiskWarningRequest&, DescribeMalwareRiskWarningOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwareRiskWarningAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalwareTimingScanSettingResponse> DescribeMalwareTimingScanSettingOutcome;
                typedef std::future<DescribeMalwareTimingScanSettingOutcome> DescribeMalwareTimingScanSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMalwareTimingScanSettingRequest&, DescribeMalwareTimingScanSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwareTimingScanSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalwareWhiteListResponse> DescribeMalwareWhiteListOutcome;
                typedef std::future<DescribeMalwareWhiteListOutcome> DescribeMalwareWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMalwareWhiteListRequest&, DescribeMalwareWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwareWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalwareWhiteListAffectListResponse> DescribeMalwareWhiteListAffectListOutcome;
                typedef std::future<DescribeMalwareWhiteListAffectListOutcome> DescribeMalwareWhiteListAffectListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMalwareWhiteListAffectListRequest&, DescribeMalwareWhiteListAffectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwareWhiteListAffectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMonthInspectionReportResponse> DescribeMonthInspectionReportOutcome;
                typedef std::future<DescribeMonthInspectionReportOutcome> DescribeMonthInspectionReportOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeMonthInspectionReportRequest&, DescribeMonthInspectionReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonthInspectionReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetAttackSettingResponse> DescribeNetAttackSettingOutcome;
                typedef std::future<DescribeNetAttackSettingOutcome> DescribeNetAttackSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeNetAttackSettingRequest&, DescribeNetAttackSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetAttackSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetAttackWhiteListResponse> DescribeNetAttackWhiteListOutcome;
                typedef std::future<DescribeNetAttackWhiteListOutcome> DescribeNetAttackWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeNetAttackWhiteListRequest&, DescribeNetAttackWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetAttackWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOpenPortStatisticsResponse> DescribeOpenPortStatisticsOutcome;
                typedef std::future<DescribeOpenPortStatisticsOutcome> DescribeOpenPortStatisticsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeOpenPortStatisticsRequest&, DescribeOpenPortStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpenPortStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOverviewStatisticsResponse> DescribeOverviewStatisticsOutcome;
                typedef std::future<DescribeOverviewStatisticsOutcome> DescribeOverviewStatisticsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeOverviewStatisticsRequest&, DescribeOverviewStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOverviewStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivilegeEventInfoResponse> DescribePrivilegeEventInfoOutcome;
                typedef std::future<DescribePrivilegeEventInfoOutcome> DescribePrivilegeEventInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribePrivilegeEventInfoRequest&, DescribePrivilegeEventInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivilegeEventInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivilegeRulesResponse> DescribePrivilegeRulesOutcome;
                typedef std::future<DescribePrivilegeRulesOutcome> DescribePrivilegeRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribePrivilegeRulesRequest&, DescribePrivilegeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivilegeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProVersionInfoResponse> DescribeProVersionInfoOutcome;
                typedef std::future<DescribeProVersionInfoOutcome> DescribeProVersionInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeProVersionInfoRequest&, DescribeProVersionInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProVersionInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProVersionStatusResponse> DescribeProVersionStatusOutcome;
                typedef std::future<DescribeProVersionStatusOutcome> DescribeProVersionStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeProVersionStatusRequest&, DescribeProVersionStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProVersionStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProcessStatisticsResponse> DescribeProcessStatisticsOutcome;
                typedef std::future<DescribeProcessStatisticsOutcome> DescribeProcessStatisticsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeProcessStatisticsRequest&, DescribeProcessStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductStatusResponse> DescribeProductStatusOutcome;
                typedef std::future<DescribeProductStatusOutcome> DescribeProductStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeProductStatusRequest&, DescribeProductStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicProxyInstallCommandResponse> DescribePublicProxyInstallCommandOutcome;
                typedef std::future<DescribePublicProxyInstallCommandOutcome> DescribePublicProxyInstallCommandOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribePublicProxyInstallCommandRequest&, DescribePublicProxyInstallCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicProxyInstallCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseBackupListResponse> DescribeRansomDefenseBackupListOutcome;
                typedef std::future<DescribeRansomDefenseBackupListOutcome> DescribeRansomDefenseBackupListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseBackupListRequest&, DescribeRansomDefenseBackupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseBackupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseEventsListResponse> DescribeRansomDefenseEventsListOutcome;
                typedef std::future<DescribeRansomDefenseEventsListOutcome> DescribeRansomDefenseEventsListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseEventsListRequest&, DescribeRansomDefenseEventsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseEventsListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseMachineListResponse> DescribeRansomDefenseMachineListOutcome;
                typedef std::future<DescribeRansomDefenseMachineListOutcome> DescribeRansomDefenseMachineListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseMachineListRequest&, DescribeRansomDefenseMachineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseMachineListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseMachineStrategyInfoResponse> DescribeRansomDefenseMachineStrategyInfoOutcome;
                typedef std::future<DescribeRansomDefenseMachineStrategyInfoOutcome> DescribeRansomDefenseMachineStrategyInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseMachineStrategyInfoRequest&, DescribeRansomDefenseMachineStrategyInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseMachineStrategyInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseRollBackTaskListResponse> DescribeRansomDefenseRollBackTaskListOutcome;
                typedef std::future<DescribeRansomDefenseRollBackTaskListOutcome> DescribeRansomDefenseRollBackTaskListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseRollBackTaskListRequest&, DescribeRansomDefenseRollBackTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseRollBackTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseStateResponse> DescribeRansomDefenseStateOutcome;
                typedef std::future<DescribeRansomDefenseStateOutcome> DescribeRansomDefenseStateOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseStateRequest&, DescribeRansomDefenseStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseStrategyDetailResponse> DescribeRansomDefenseStrategyDetailOutcome;
                typedef std::future<DescribeRansomDefenseStrategyDetailOutcome> DescribeRansomDefenseStrategyDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseStrategyDetailRequest&, DescribeRansomDefenseStrategyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseStrategyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseStrategyListResponse> DescribeRansomDefenseStrategyListOutcome;
                typedef std::future<DescribeRansomDefenseStrategyListOutcome> DescribeRansomDefenseStrategyListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseStrategyListRequest&, DescribeRansomDefenseStrategyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseStrategyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseStrategyMachinesResponse> DescribeRansomDefenseStrategyMachinesOutcome;
                typedef std::future<DescribeRansomDefenseStrategyMachinesOutcome> DescribeRansomDefenseStrategyMachinesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseStrategyMachinesRequest&, DescribeRansomDefenseStrategyMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseStrategyMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRansomDefenseTrendResponse> DescribeRansomDefenseTrendOutcome;
                typedef std::future<DescribeRansomDefenseTrendOutcome> DescribeRansomDefenseTrendOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRansomDefenseTrendRequest&, DescribeRansomDefenseTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRansomDefenseTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecommendedProtectCpuResponse> DescribeRecommendedProtectCpuOutcome;
                typedef std::future<DescribeRecommendedProtectCpuOutcome> DescribeRecommendedProtectCpuOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRecommendedProtectCpuRequest&, DescribeRecommendedProtectCpuOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecommendedProtectCpuAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReverseShellEventInfoResponse> DescribeReverseShellEventInfoOutcome;
                typedef std::future<DescribeReverseShellEventInfoOutcome> DescribeReverseShellEventInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeReverseShellEventInfoRequest&, DescribeReverseShellEventInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReverseShellEventInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReverseShellEventsResponse> DescribeReverseShellEventsOutcome;
                typedef std::future<DescribeReverseShellEventsOutcome> DescribeReverseShellEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeReverseShellEventsRequest&, DescribeReverseShellEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReverseShellEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReverseShellRulesResponse> DescribeReverseShellRulesOutcome;
                typedef std::future<DescribeReverseShellRulesOutcome> DescribeReverseShellRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeReverseShellRulesRequest&, DescribeReverseShellRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReverseShellRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskBatchStatusResponse> DescribeRiskBatchStatusOutcome;
                typedef std::future<DescribeRiskBatchStatusOutcome> DescribeRiskBatchStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRiskBatchStatusRequest&, DescribeRiskBatchStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskBatchStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskDnsEventInfoResponse> DescribeRiskDnsEventInfoOutcome;
                typedef std::future<DescribeRiskDnsEventInfoOutcome> DescribeRiskDnsEventInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRiskDnsEventInfoRequest&, DescribeRiskDnsEventInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskDnsEventInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskDnsEventListResponse> DescribeRiskDnsEventListOutcome;
                typedef std::future<DescribeRiskDnsEventListOutcome> DescribeRiskDnsEventListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRiskDnsEventListRequest&, DescribeRiskDnsEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskDnsEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskDnsInfoResponse> DescribeRiskDnsInfoOutcome;
                typedef std::future<DescribeRiskDnsInfoOutcome> DescribeRiskDnsInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRiskDnsInfoRequest&, DescribeRiskDnsInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskDnsInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskDnsListResponse> DescribeRiskDnsListOutcome;
                typedef std::future<DescribeRiskDnsListOutcome> DescribeRiskDnsListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRiskDnsListRequest&, DescribeRiskDnsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskDnsListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskDnsPolicyListResponse> DescribeRiskDnsPolicyListOutcome;
                typedef std::future<DescribeRiskDnsPolicyListOutcome> DescribeRiskDnsPolicyListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRiskDnsPolicyListRequest&, DescribeRiskDnsPolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskDnsPolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskProcessEventsResponse> DescribeRiskProcessEventsOutcome;
                typedef std::future<DescribeRiskProcessEventsOutcome> DescribeRiskProcessEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeRiskProcessEventsRequest&, DescribeRiskProcessEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskProcessEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSafeInfoResponse> DescribeSafeInfoOutcome;
                typedef std::future<DescribeSafeInfoOutcome> DescribeSafeInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSafeInfoRequest&, DescribeSafeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSafeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanMalwareScheduleResponse> DescribeScanMalwareScheduleOutcome;
                typedef std::future<DescribeScanMalwareScheduleOutcome> DescribeScanMalwareScheduleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScanMalwareScheduleRequest&, DescribeScanMalwareScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanMalwareScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanScheduleResponse> DescribeScanScheduleOutcome;
                typedef std::future<DescribeScanScheduleOutcome> DescribeScanScheduleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScanScheduleRequest&, DescribeScanScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanStateResponse> DescribeScanStateOutcome;
                typedef std::future<DescribeScanStateOutcome> DescribeScanStateOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScanStateRequest&, DescribeScanStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanTaskDetailsResponse> DescribeScanTaskDetailsOutcome;
                typedef std::future<DescribeScanTaskDetailsOutcome> DescribeScanTaskDetailsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScanTaskDetailsRequest&, DescribeScanTaskDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanTaskStatusResponse> DescribeScanTaskStatusOutcome;
                typedef std::future<DescribeScanTaskStatusOutcome> DescribeScanTaskStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScanTaskStatusRequest&, DescribeScanTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanVulSettingResponse> DescribeScanVulSettingOutcome;
                typedef std::future<DescribeScanVulSettingOutcome> DescribeScanVulSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScanVulSettingRequest&, DescribeScanVulSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanVulSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenAttackHotspotResponse> DescribeScreenAttackHotspotOutcome;
                typedef std::future<DescribeScreenAttackHotspotOutcome> DescribeScreenAttackHotspotOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenAttackHotspotRequest&, DescribeScreenAttackHotspotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenAttackHotspotAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenBroadcastsResponse> DescribeScreenBroadcastsOutcome;
                typedef std::future<DescribeScreenBroadcastsOutcome> DescribeScreenBroadcastsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenBroadcastsRequest&, DescribeScreenBroadcastsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenBroadcastsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenDefenseTrendsResponse> DescribeScreenDefenseTrendsOutcome;
                typedef std::future<DescribeScreenDefenseTrendsOutcome> DescribeScreenDefenseTrendsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenDefenseTrendsRequest&, DescribeScreenDefenseTrendsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenDefenseTrendsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenEmergentMsgResponse> DescribeScreenEmergentMsgOutcome;
                typedef std::future<DescribeScreenEmergentMsgOutcome> DescribeScreenEmergentMsgOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenEmergentMsgRequest&, DescribeScreenEmergentMsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenEmergentMsgAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenEventsCntResponse> DescribeScreenEventsCntOutcome;
                typedef std::future<DescribeScreenEventsCntOutcome> DescribeScreenEventsCntOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenEventsCntRequest&, DescribeScreenEventsCntOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenEventsCntAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenGeneralStatResponse> DescribeScreenGeneralStatOutcome;
                typedef std::future<DescribeScreenGeneralStatOutcome> DescribeScreenGeneralStatOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenGeneralStatRequest&, DescribeScreenGeneralStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenGeneralStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenHostInvasionResponse> DescribeScreenHostInvasionOutcome;
                typedef std::future<DescribeScreenHostInvasionOutcome> DescribeScreenHostInvasionOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenHostInvasionRequest&, DescribeScreenHostInvasionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenHostInvasionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenMachineRegionsResponse> DescribeScreenMachineRegionsOutcome;
                typedef std::future<DescribeScreenMachineRegionsOutcome> DescribeScreenMachineRegionsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenMachineRegionsRequest&, DescribeScreenMachineRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenMachineRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenMachinesResponse> DescribeScreenMachinesOutcome;
                typedef std::future<DescribeScreenMachinesOutcome> DescribeScreenMachinesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenMachinesRequest&, DescribeScreenMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenProtectionCntResponse> DescribeScreenProtectionCntOutcome;
                typedef std::future<DescribeScreenProtectionCntOutcome> DescribeScreenProtectionCntOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenProtectionCntRequest&, DescribeScreenProtectionCntOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenProtectionCntAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenProtectionStatResponse> DescribeScreenProtectionStatOutcome;
                typedef std::future<DescribeScreenProtectionStatOutcome> DescribeScreenProtectionStatOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenProtectionStatRequest&, DescribeScreenProtectionStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenProtectionStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScreenRiskAssetsTopResponse> DescribeScreenRiskAssetsTopOutcome;
                typedef std::future<DescribeScreenRiskAssetsTopOutcome> DescribeScreenRiskAssetsTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeScreenRiskAssetsTopRequest&, DescribeScreenRiskAssetsTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScreenRiskAssetsTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSearchLogsResponse> DescribeSearchLogsOutcome;
                typedef std::future<DescribeSearchLogsOutcome> DescribeSearchLogsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSearchLogsRequest&, DescribeSearchLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSearchTemplatesResponse> DescribeSearchTemplatesOutcome;
                typedef std::future<DescribeSearchTemplatesOutcome> DescribeSearchTemplatesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSearchTemplatesRequest&, DescribeSearchTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityBroadcastInfoResponse> DescribeSecurityBroadcastInfoOutcome;
                typedef std::future<DescribeSecurityBroadcastInfoOutcome> DescribeSecurityBroadcastInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSecurityBroadcastInfoRequest&, DescribeSecurityBroadcastInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityBroadcastInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityBroadcastsResponse> DescribeSecurityBroadcastsOutcome;
                typedef std::future<DescribeSecurityBroadcastsOutcome> DescribeSecurityBroadcastsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSecurityBroadcastsRequest&, DescribeSecurityBroadcastsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityBroadcastsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityDynamicsResponse> DescribeSecurityDynamicsOutcome;
                typedef std::future<DescribeSecurityDynamicsOutcome> DescribeSecurityDynamicsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSecurityDynamicsRequest&, DescribeSecurityDynamicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityDynamicsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityEventStatResponse> DescribeSecurityEventStatOutcome;
                typedef std::future<DescribeSecurityEventStatOutcome> DescribeSecurityEventStatOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSecurityEventStatRequest&, DescribeSecurityEventStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityEventStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityEventsCntResponse> DescribeSecurityEventsCntOutcome;
                typedef std::future<DescribeSecurityEventsCntOutcome> DescribeSecurityEventsCntOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSecurityEventsCntRequest&, DescribeSecurityEventsCntOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityEventsCntAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityProtectionStatResponse> DescribeSecurityProtectionStatOutcome;
                typedef std::future<DescribeSecurityProtectionStatOutcome> DescribeSecurityProtectionStatOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSecurityProtectionStatRequest&, DescribeSecurityProtectionStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityProtectionStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityTrendsResponse> DescribeSecurityTrendsOutcome;
                typedef std::future<DescribeSecurityTrendsOutcome> DescribeSecurityTrendsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeSecurityTrendsRequest&, DescribeSecurityTrendsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityTrendsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServersAndRiskAndFirstInfoResponse> DescribeServersAndRiskAndFirstInfoOutcome;
                typedef std::future<DescribeServersAndRiskAndFirstInfoOutcome> DescribeServersAndRiskAndFirstInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeServersAndRiskAndFirstInfoRequest&, DescribeServersAndRiskAndFirstInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServersAndRiskAndFirstInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStrategyExistResponse> DescribeStrategyExistOutcome;
                typedef std::future<DescribeStrategyExistOutcome> DescribeStrategyExistOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeStrategyExistRequest&, DescribeStrategyExistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStrategyExistAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagMachinesResponse> DescribeTagMachinesOutcome;
                typedef std::future<DescribeTagMachinesOutcome> DescribeTagMachinesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeTagMachinesRequest&, DescribeTagMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagsResponse> DescribeTagsOutcome;
                typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeTagsRequest&, DescribeTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrialReportResponse> DescribeTrialReportOutcome;
                typedef std::future<DescribeTrialReportOutcome> DescribeTrialReportOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeTrialReportRequest&, DescribeTrialReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrialReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUndoVulCountsResponse> DescribeUndoVulCountsOutcome;
                typedef std::future<DescribeUndoVulCountsOutcome> DescribeUndoVulCountsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeUndoVulCountsRequest&, DescribeUndoVulCountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUndoVulCountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsersConfigResponse> DescribeUsersConfigOutcome;
                typedef std::future<DescribeUsersConfigOutcome> DescribeUsersConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeUsersConfigRequest&, DescribeUsersConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsersConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsualLoginPlacesResponse> DescribeUsualLoginPlacesOutcome;
                typedef std::future<DescribeUsualLoginPlacesOutcome> DescribeUsualLoginPlacesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeUsualLoginPlacesRequest&, DescribeUsualLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsualLoginPlacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVdbAndPocInfoResponse> DescribeVdbAndPocInfoOutcome;
                typedef std::future<DescribeVdbAndPocInfoOutcome> DescribeVdbAndPocInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVdbAndPocInfoRequest&, DescribeVdbAndPocInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVdbAndPocInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVersionCompareChartResponse> DescribeVersionCompareChartOutcome;
                typedef std::future<DescribeVersionCompareChartOutcome> DescribeVersionCompareChartOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVersionCompareChartRequest&, DescribeVersionCompareChartOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVersionCompareChartAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVersionStatisticsResponse> DescribeVersionStatisticsOutcome;
                typedef std::future<DescribeVersionStatisticsOutcome> DescribeVersionStatisticsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVersionStatisticsRequest&, DescribeVersionStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVersionStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVertexDetailResponse> DescribeVertexDetailOutcome;
                typedef std::future<DescribeVertexDetailOutcome> DescribeVertexDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVertexDetailRequest&, DescribeVertexDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVertexDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulCountByDatesResponse> DescribeVulCountByDatesOutcome;
                typedef std::future<DescribeVulCountByDatesOutcome> DescribeVulCountByDatesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulCountByDatesRequest&, DescribeVulCountByDatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulCountByDatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulCveIdInfoResponse> DescribeVulCveIdInfoOutcome;
                typedef std::future<DescribeVulCveIdInfoOutcome> DescribeVulCveIdInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulCveIdInfoRequest&, DescribeVulCveIdInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulCveIdInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefenceEventResponse> DescribeVulDefenceEventOutcome;
                typedef std::future<DescribeVulDefenceEventOutcome> DescribeVulDefenceEventOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulDefenceEventRequest&, DescribeVulDefenceEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefenceEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefenceListResponse> DescribeVulDefenceListOutcome;
                typedef std::future<DescribeVulDefenceListOutcome> DescribeVulDefenceListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulDefenceListRequest&, DescribeVulDefenceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefenceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefenceOverviewResponse> DescribeVulDefenceOverviewOutcome;
                typedef std::future<DescribeVulDefenceOverviewOutcome> DescribeVulDefenceOverviewOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulDefenceOverviewRequest&, DescribeVulDefenceOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefenceOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefencePluginDetailResponse> DescribeVulDefencePluginDetailOutcome;
                typedef std::future<DescribeVulDefencePluginDetailOutcome> DescribeVulDefencePluginDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulDefencePluginDetailRequest&, DescribeVulDefencePluginDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefencePluginDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefencePluginExceptionCountResponse> DescribeVulDefencePluginExceptionCountOutcome;
                typedef std::future<DescribeVulDefencePluginExceptionCountOutcome> DescribeVulDefencePluginExceptionCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulDefencePluginExceptionCountRequest&, DescribeVulDefencePluginExceptionCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefencePluginExceptionCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefencePluginStatusResponse> DescribeVulDefencePluginStatusOutcome;
                typedef std::future<DescribeVulDefencePluginStatusOutcome> DescribeVulDefencePluginStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulDefencePluginStatusRequest&, DescribeVulDefencePluginStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefencePluginStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDefenceSettingResponse> DescribeVulDefenceSettingOutcome;
                typedef std::future<DescribeVulDefenceSettingOutcome> DescribeVulDefenceSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulDefenceSettingRequest&, DescribeVulDefenceSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDefenceSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulEffectHostListResponse> DescribeVulEffectHostListOutcome;
                typedef std::future<DescribeVulEffectHostListOutcome> DescribeVulEffectHostListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulEffectHostListRequest&, DescribeVulEffectHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulEffectHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulEffectModulesResponse> DescribeVulEffectModulesOutcome;
                typedef std::future<DescribeVulEffectModulesOutcome> DescribeVulEffectModulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulEffectModulesRequest&, DescribeVulEffectModulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulEffectModulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulEmergentMsgResponse> DescribeVulEmergentMsgOutcome;
                typedef std::future<DescribeVulEmergentMsgOutcome> DescribeVulEmergentMsgOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulEmergentMsgRequest&, DescribeVulEmergentMsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulEmergentMsgAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulFixStatusResponse> DescribeVulFixStatusOutcome;
                typedef std::future<DescribeVulFixStatusOutcome> DescribeVulFixStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulFixStatusRequest&, DescribeVulFixStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulFixStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulHostCountScanTimeResponse> DescribeVulHostCountScanTimeOutcome;
                typedef std::future<DescribeVulHostCountScanTimeOutcome> DescribeVulHostCountScanTimeOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulHostCountScanTimeRequest&, DescribeVulHostCountScanTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulHostCountScanTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulHostTopResponse> DescribeVulHostTopOutcome;
                typedef std::future<DescribeVulHostTopOutcome> DescribeVulHostTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulHostTopRequest&, DescribeVulHostTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulHostTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulInfoCvssResponse> DescribeVulInfoCvssOutcome;
                typedef std::future<DescribeVulInfoCvssOutcome> DescribeVulInfoCvssOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulInfoCvssRequest&, DescribeVulInfoCvssOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulInfoCvssAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulLabelsResponse> DescribeVulLabelsOutcome;
                typedef std::future<DescribeVulLabelsOutcome> DescribeVulLabelsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulLabelsRequest&, DescribeVulLabelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulLabelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulLevelCountResponse> DescribeVulLevelCountOutcome;
                typedef std::future<DescribeVulLevelCountOutcome> DescribeVulLevelCountOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulLevelCountRequest&, DescribeVulLevelCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulLevelCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulListResponse> DescribeVulListOutcome;
                typedef std::future<DescribeVulListOutcome> DescribeVulListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulListRequest&, DescribeVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulOverviewResponse> DescribeVulOverviewOutcome;
                typedef std::future<DescribeVulOverviewOutcome> DescribeVulOverviewOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulOverviewRequest&, DescribeVulOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulStoreListResponse> DescribeVulStoreListOutcome;
                typedef std::future<DescribeVulStoreListOutcome> DescribeVulStoreListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulStoreListRequest&, DescribeVulStoreListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulStoreListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulTopResponse> DescribeVulTopOutcome;
                typedef std::future<DescribeVulTopOutcome> DescribeVulTopOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulTopRequest&, DescribeVulTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulTopAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulTrendResponse> DescribeVulTrendOutcome;
                typedef std::future<DescribeVulTrendOutcome> DescribeVulTrendOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeVulTrendRequest&, DescribeVulTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWarningHostConfigResponse> DescribeWarningHostConfigOutcome;
                typedef std::future<DescribeWarningHostConfigOutcome> DescribeWarningHostConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeWarningHostConfigRequest&, DescribeWarningHostConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWarningHostConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWarningListResponse> DescribeWarningListOutcome;
                typedef std::future<DescribeWarningListOutcome> DescribeWarningListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeWarningListRequest&, DescribeWarningListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWarningListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebHookPolicyResponse> DescribeWebHookPolicyOutcome;
                typedef std::future<DescribeWebHookPolicyOutcome> DescribeWebHookPolicyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeWebHookPolicyRequest&, DescribeWebHookPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebHookPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebHookReceiverResponse> DescribeWebHookReceiverOutcome;
                typedef std::future<DescribeWebHookReceiverOutcome> DescribeWebHookReceiverOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeWebHookReceiverRequest&, DescribeWebHookReceiverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebHookReceiverAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebHookReceiverUsageResponse> DescribeWebHookReceiverUsageOutcome;
                typedef std::future<DescribeWebHookReceiverUsageOutcome> DescribeWebHookReceiverUsageOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeWebHookReceiverUsageRequest&, DescribeWebHookReceiverUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebHookReceiverUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebHookRuleResponse> DescribeWebHookRuleOutcome;
                typedef std::future<DescribeWebHookRuleOutcome> DescribeWebHookRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeWebHookRuleRequest&, DescribeWebHookRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebHookRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebHookRulesResponse> DescribeWebHookRulesOutcome;
                typedef std::future<DescribeWebHookRulesOutcome> DescribeWebHookRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DescribeWebHookRulesRequest&, DescribeWebHookRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebHookRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyOrderResponse> DestroyOrderOutcome;
                typedef std::future<DestroyOrderOutcome> DestroyOrderOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::DestroyOrderRequest&, DestroyOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::EditBashRulesResponse> EditBashRulesOutcome;
                typedef std::future<EditBashRulesOutcome> EditBashRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::EditBashRulesRequest&, EditBashRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditBashRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::EditPrivilegeRulesResponse> EditPrivilegeRulesOutcome;
                typedef std::future<EditPrivilegeRulesOutcome> EditPrivilegeRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::EditPrivilegeRulesRequest&, EditPrivilegeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditPrivilegeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::EditReverseShellRulesResponse> EditReverseShellRulesOutcome;
                typedef std::future<EditReverseShellRulesOutcome> EditReverseShellRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::EditReverseShellRulesRequest&, EditReverseShellRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditReverseShellRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::EditTagsResponse> EditTagsOutcome;
                typedef std::future<EditTagsOutcome> EditTagsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::EditTagsRequest&, EditTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetAppListResponse> ExportAssetAppListOutcome;
                typedef std::future<ExportAssetAppListOutcome> ExportAssetAppListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetAppListRequest&, ExportAssetAppListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetAppListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetCoreModuleListResponse> ExportAssetCoreModuleListOutcome;
                typedef std::future<ExportAssetCoreModuleListOutcome> ExportAssetCoreModuleListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetCoreModuleListRequest&, ExportAssetCoreModuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetCoreModuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetDatabaseListResponse> ExportAssetDatabaseListOutcome;
                typedef std::future<ExportAssetDatabaseListOutcome> ExportAssetDatabaseListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetDatabaseListRequest&, ExportAssetDatabaseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetDatabaseListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetEnvListResponse> ExportAssetEnvListOutcome;
                typedef std::future<ExportAssetEnvListOutcome> ExportAssetEnvListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetEnvListRequest&, ExportAssetEnvListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetEnvListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetInitServiceListResponse> ExportAssetInitServiceListOutcome;
                typedef std::future<ExportAssetInitServiceListOutcome> ExportAssetInitServiceListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetInitServiceListRequest&, ExportAssetInitServiceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetInitServiceListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetJarListResponse> ExportAssetJarListOutcome;
                typedef std::future<ExportAssetJarListOutcome> ExportAssetJarListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetJarListRequest&, ExportAssetJarListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetJarListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetMachineDetailResponse> ExportAssetMachineDetailOutcome;
                typedef std::future<ExportAssetMachineDetailOutcome> ExportAssetMachineDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetMachineDetailRequest&, ExportAssetMachineDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetMachineDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetMachineListResponse> ExportAssetMachineListOutcome;
                typedef std::future<ExportAssetMachineListOutcome> ExportAssetMachineListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetMachineListRequest&, ExportAssetMachineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetMachineListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetPlanTaskListResponse> ExportAssetPlanTaskListOutcome;
                typedef std::future<ExportAssetPlanTaskListOutcome> ExportAssetPlanTaskListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetPlanTaskListRequest&, ExportAssetPlanTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetPlanTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetPortInfoListResponse> ExportAssetPortInfoListOutcome;
                typedef std::future<ExportAssetPortInfoListOutcome> ExportAssetPortInfoListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetPortInfoListRequest&, ExportAssetPortInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetPortInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetProcessInfoListResponse> ExportAssetProcessInfoListOutcome;
                typedef std::future<ExportAssetProcessInfoListOutcome> ExportAssetProcessInfoListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetProcessInfoListRequest&, ExportAssetProcessInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetProcessInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetRecentMachineInfoResponse> ExportAssetRecentMachineInfoOutcome;
                typedef std::future<ExportAssetRecentMachineInfoOutcome> ExportAssetRecentMachineInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetRecentMachineInfoRequest&, ExportAssetRecentMachineInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetRecentMachineInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetSystemPackageListResponse> ExportAssetSystemPackageListOutcome;
                typedef std::future<ExportAssetSystemPackageListOutcome> ExportAssetSystemPackageListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetSystemPackageListRequest&, ExportAssetSystemPackageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetSystemPackageListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetUserListResponse> ExportAssetUserListOutcome;
                typedef std::future<ExportAssetUserListOutcome> ExportAssetUserListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetUserListRequest&, ExportAssetUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetWebAppListResponse> ExportAssetWebAppListOutcome;
                typedef std::future<ExportAssetWebAppListOutcome> ExportAssetWebAppListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetWebAppListRequest&, ExportAssetWebAppListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetWebAppListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetWebFrameListResponse> ExportAssetWebFrameListOutcome;
                typedef std::future<ExportAssetWebFrameListOutcome> ExportAssetWebFrameListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetWebFrameListRequest&, ExportAssetWebFrameListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetWebFrameListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetWebLocationListResponse> ExportAssetWebLocationListOutcome;
                typedef std::future<ExportAssetWebLocationListOutcome> ExportAssetWebLocationListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetWebLocationListRequest&, ExportAssetWebLocationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetWebLocationListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAssetWebServiceInfoListResponse> ExportAssetWebServiceInfoListOutcome;
                typedef std::future<ExportAssetWebServiceInfoListOutcome> ExportAssetWebServiceInfoListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAssetWebServiceInfoListRequest&, ExportAssetWebServiceInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAssetWebServiceInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAttackEventsResponse> ExportAttackEventsOutcome;
                typedef std::future<ExportAttackEventsOutcome> ExportAttackEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportAttackEventsRequest&, ExportAttackEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAttackEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBaselineEffectHostListResponse> ExportBaselineEffectHostListOutcome;
                typedef std::future<ExportBaselineEffectHostListOutcome> ExportBaselineEffectHostListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBaselineEffectHostListRequest&, ExportBaselineEffectHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBaselineEffectHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBaselineFixListResponse> ExportBaselineFixListOutcome;
                typedef std::future<ExportBaselineFixListOutcome> ExportBaselineFixListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBaselineFixListRequest&, ExportBaselineFixListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBaselineFixListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBaselineHostDetectListResponse> ExportBaselineHostDetectListOutcome;
                typedef std::future<ExportBaselineHostDetectListOutcome> ExportBaselineHostDetectListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBaselineHostDetectListRequest&, ExportBaselineHostDetectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBaselineHostDetectListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBaselineItemDetectListResponse> ExportBaselineItemDetectListOutcome;
                typedef std::future<ExportBaselineItemDetectListOutcome> ExportBaselineItemDetectListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBaselineItemDetectListRequest&, ExportBaselineItemDetectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBaselineItemDetectListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBaselineListResponse> ExportBaselineListOutcome;
                typedef std::future<ExportBaselineListOutcome> ExportBaselineListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBaselineListRequest&, ExportBaselineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBaselineListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBashEventsResponse> ExportBashEventsOutcome;
                typedef std::future<ExportBashEventsOutcome> ExportBashEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBashEventsRequest&, ExportBashEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBashEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBashEventsNewResponse> ExportBashEventsNewOutcome;
                typedef std::future<ExportBashEventsNewOutcome> ExportBashEventsNewOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBashEventsNewRequest&, ExportBashEventsNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBashEventsNewAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBashPoliciesResponse> ExportBashPoliciesOutcome;
                typedef std::future<ExportBashPoliciesOutcome> ExportBashPoliciesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBashPoliciesRequest&, ExportBashPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBashPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBruteAttacksResponse> ExportBruteAttacksOutcome;
                typedef std::future<ExportBruteAttacksOutcome> ExportBruteAttacksOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportBruteAttacksRequest&, ExportBruteAttacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBruteAttacksAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportFileTamperEventsResponse> ExportFileTamperEventsOutcome;
                typedef std::future<ExportFileTamperEventsOutcome> ExportFileTamperEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportFileTamperEventsRequest&, ExportFileTamperEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportFileTamperEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportFileTamperRulesResponse> ExportFileTamperRulesOutcome;
                typedef std::future<ExportFileTamperRulesOutcome> ExportFileTamperRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportFileTamperRulesRequest&, ExportFileTamperRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportFileTamperRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportIgnoreBaselineRuleResponse> ExportIgnoreBaselineRuleOutcome;
                typedef std::future<ExportIgnoreBaselineRuleOutcome> ExportIgnoreBaselineRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportIgnoreBaselineRuleRequest&, ExportIgnoreBaselineRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportIgnoreBaselineRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportIgnoreRuleEffectHostListResponse> ExportIgnoreRuleEffectHostListOutcome;
                typedef std::future<ExportIgnoreRuleEffectHostListOutcome> ExportIgnoreRuleEffectHostListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportIgnoreRuleEffectHostListRequest&, ExportIgnoreRuleEffectHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportIgnoreRuleEffectHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportJavaMemShellPluginsResponse> ExportJavaMemShellPluginsOutcome;
                typedef std::future<ExportJavaMemShellPluginsOutcome> ExportJavaMemShellPluginsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportJavaMemShellPluginsRequest&, ExportJavaMemShellPluginsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportJavaMemShellPluginsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportJavaMemShellsResponse> ExportJavaMemShellsOutcome;
                typedef std::future<ExportJavaMemShellsOutcome> ExportJavaMemShellsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportJavaMemShellsRequest&, ExportJavaMemShellsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportJavaMemShellsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportLicenseDetailResponse> ExportLicenseDetailOutcome;
                typedef std::future<ExportLicenseDetailOutcome> ExportLicenseDetailOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportLicenseDetailRequest&, ExportLicenseDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportLicenseDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportMaliciousRequestsResponse> ExportMaliciousRequestsOutcome;
                typedef std::future<ExportMaliciousRequestsOutcome> ExportMaliciousRequestsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportMaliciousRequestsRequest&, ExportMaliciousRequestsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportMaliciousRequestsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportMalwaresResponse> ExportMalwaresOutcome;
                typedef std::future<ExportMalwaresOutcome> ExportMalwaresOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportMalwaresRequest&, ExportMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportNonlocalLoginPlacesResponse> ExportNonlocalLoginPlacesOutcome;
                typedef std::future<ExportNonlocalLoginPlacesOutcome> ExportNonlocalLoginPlacesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportNonlocalLoginPlacesRequest&, ExportNonlocalLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportNonlocalLoginPlacesAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportPrivilegeEventsResponse> ExportPrivilegeEventsOutcome;
                typedef std::future<ExportPrivilegeEventsOutcome> ExportPrivilegeEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportPrivilegeEventsRequest&, ExportPrivilegeEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportPrivilegeEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportRansomDefenseBackupListResponse> ExportRansomDefenseBackupListOutcome;
                typedef std::future<ExportRansomDefenseBackupListOutcome> ExportRansomDefenseBackupListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportRansomDefenseBackupListRequest&, ExportRansomDefenseBackupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportRansomDefenseBackupListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportRansomDefenseEventsListResponse> ExportRansomDefenseEventsListOutcome;
                typedef std::future<ExportRansomDefenseEventsListOutcome> ExportRansomDefenseEventsListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportRansomDefenseEventsListRequest&, ExportRansomDefenseEventsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportRansomDefenseEventsListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportRansomDefenseMachineListResponse> ExportRansomDefenseMachineListOutcome;
                typedef std::future<ExportRansomDefenseMachineListOutcome> ExportRansomDefenseMachineListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportRansomDefenseMachineListRequest&, ExportRansomDefenseMachineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportRansomDefenseMachineListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportRansomDefenseStrategyListResponse> ExportRansomDefenseStrategyListOutcome;
                typedef std::future<ExportRansomDefenseStrategyListOutcome> ExportRansomDefenseStrategyListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportRansomDefenseStrategyListRequest&, ExportRansomDefenseStrategyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportRansomDefenseStrategyListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportRansomDefenseStrategyMachinesResponse> ExportRansomDefenseStrategyMachinesOutcome;
                typedef std::future<ExportRansomDefenseStrategyMachinesOutcome> ExportRansomDefenseStrategyMachinesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportRansomDefenseStrategyMachinesRequest&, ExportRansomDefenseStrategyMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportRansomDefenseStrategyMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportReverseShellEventsResponse> ExportReverseShellEventsOutcome;
                typedef std::future<ExportReverseShellEventsOutcome> ExportReverseShellEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportReverseShellEventsRequest&, ExportReverseShellEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportReverseShellEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportRiskDnsEventListResponse> ExportRiskDnsEventListOutcome;
                typedef std::future<ExportRiskDnsEventListOutcome> ExportRiskDnsEventListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportRiskDnsEventListRequest&, ExportRiskDnsEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportRiskDnsEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportRiskDnsPolicyListResponse> ExportRiskDnsPolicyListOutcome;
                typedef std::future<ExportRiskDnsPolicyListOutcome> ExportRiskDnsPolicyListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportRiskDnsPolicyListRequest&, ExportRiskDnsPolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportRiskDnsPolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportRiskProcessEventsResponse> ExportRiskProcessEventsOutcome;
                typedef std::future<ExportRiskProcessEventsOutcome> ExportRiskProcessEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportRiskProcessEventsRequest&, ExportRiskProcessEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportRiskProcessEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportScanTaskDetailsResponse> ExportScanTaskDetailsOutcome;
                typedef std::future<ExportScanTaskDetailsOutcome> ExportScanTaskDetailsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportScanTaskDetailsRequest&, ExportScanTaskDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportScanTaskDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportSecurityTrendsResponse> ExportSecurityTrendsOutcome;
                typedef std::future<ExportSecurityTrendsOutcome> ExportSecurityTrendsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportSecurityTrendsRequest&, ExportSecurityTrendsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportSecurityTrendsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportTasksResponse> ExportTasksOutcome;
                typedef std::future<ExportTasksOutcome> ExportTasksOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportTasksRequest&, ExportTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulDefenceEventResponse> ExportVulDefenceEventOutcome;
                typedef std::future<ExportVulDefenceEventOutcome> ExportVulDefenceEventOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulDefenceEventRequest&, ExportVulDefenceEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulDefenceEventAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulDefenceListResponse> ExportVulDefenceListOutcome;
                typedef std::future<ExportVulDefenceListOutcome> ExportVulDefenceListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulDefenceListRequest&, ExportVulDefenceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulDefenceListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulDefencePluginEventResponse> ExportVulDefencePluginEventOutcome;
                typedef std::future<ExportVulDefencePluginEventOutcome> ExportVulDefencePluginEventOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulDefencePluginEventRequest&, ExportVulDefencePluginEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulDefencePluginEventAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulDetectionExcelResponse> ExportVulDetectionExcelOutcome;
                typedef std::future<ExportVulDetectionExcelOutcome> ExportVulDetectionExcelOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulDetectionExcelRequest&, ExportVulDetectionExcelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulDetectionExcelAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulDetectionReportResponse> ExportVulDetectionReportOutcome;
                typedef std::future<ExportVulDetectionReportOutcome> ExportVulDetectionReportOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulDetectionReportRequest&, ExportVulDetectionReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulDetectionReportAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulEffectHostListResponse> ExportVulEffectHostListOutcome;
                typedef std::future<ExportVulEffectHostListOutcome> ExportVulEffectHostListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulEffectHostListRequest&, ExportVulEffectHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulEffectHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulInfoResponse> ExportVulInfoOutcome;
                typedef std::future<ExportVulInfoOutcome> ExportVulInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulInfoRequest&, ExportVulInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportVulListResponse> ExportVulListOutcome;
                typedef std::future<ExportVulListOutcome> ExportVulListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ExportVulListRequest&, ExportVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportVulListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetLocalStorageItemResponse> GetLocalStorageItemOutcome;
                typedef std::future<GetLocalStorageItemOutcome> GetLocalStorageItemOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::GetLocalStorageItemRequest&, GetLocalStorageItemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLocalStorageItemAsyncHandler;
                typedef Outcome<Core::Error, Model::IgnoreImpactedHostsResponse> IgnoreImpactedHostsOutcome;
                typedef std::future<IgnoreImpactedHostsOutcome> IgnoreImpactedHostsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::IgnoreImpactedHostsRequest&, IgnoreImpactedHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IgnoreImpactedHostsAsyncHandler;
                typedef Outcome<Core::Error, Model::KeysLocalStorageResponse> KeysLocalStorageOutcome;
                typedef std::future<KeysLocalStorageOutcome> KeysLocalStorageOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::KeysLocalStorageRequest&, KeysLocalStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KeysLocalStorageAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAutoOpenProVersionConfigResponse> ModifyAutoOpenProVersionConfigOutcome;
                typedef std::future<ModifyAutoOpenProVersionConfigOutcome> ModifyAutoOpenProVersionConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyAutoOpenProVersionConfigRequest&, ModifyAutoOpenProVersionConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoOpenProVersionConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBanModeResponse> ModifyBanModeOutcome;
                typedef std::future<ModifyBanModeOutcome> ModifyBanModeOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBanModeRequest&, ModifyBanModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBanModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBanStatusResponse> ModifyBanStatusOutcome;
                typedef std::future<ModifyBanStatusOutcome> ModifyBanStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBanStatusRequest&, ModifyBanStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBanStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBanWhiteListResponse> ModifyBanWhiteListOutcome;
                typedef std::future<ModifyBanWhiteListOutcome> ModifyBanWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBanWhiteListRequest&, ModifyBanWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBanWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaselinePolicyResponse> ModifyBaselinePolicyOutcome;
                typedef std::future<ModifyBaselinePolicyOutcome> ModifyBaselinePolicyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBaselinePolicyRequest&, ModifyBaselinePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaselinePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBashPolicyResponse> ModifyBashPolicyOutcome;
                typedef std::future<ModifyBashPolicyOutcome> ModifyBashPolicyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBashPolicyRequest&, ModifyBashPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBashPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBashPolicyStatusResponse> ModifyBashPolicyStatusOutcome;
                typedef std::future<ModifyBashPolicyStatusOutcome> ModifyBashPolicyStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBashPolicyStatusRequest&, ModifyBashPolicyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBashPolicyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBruteAttackRulesResponse> ModifyBruteAttackRulesOutcome;
                typedef std::future<ModifyBruteAttackRulesOutcome> ModifyBruteAttackRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyBruteAttackRulesRequest&, ModifyBruteAttackRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBruteAttackRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEventAttackStatusResponse> ModifyEventAttackStatusOutcome;
                typedef std::future<ModifyEventAttackStatusOutcome> ModifyEventAttackStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyEventAttackStatusRequest&, ModifyEventAttackStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEventAttackStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFileTamperEventsResponse> ModifyFileTamperEventsOutcome;
                typedef std::future<ModifyFileTamperEventsOutcome> ModifyFileTamperEventsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyFileTamperEventsRequest&, ModifyFileTamperEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFileTamperEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFileTamperRuleResponse> ModifyFileTamperRuleOutcome;
                typedef std::future<ModifyFileTamperRuleOutcome> ModifyFileTamperRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyFileTamperRuleRequest&, ModifyFileTamperRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFileTamperRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFileTamperRuleStatusResponse> ModifyFileTamperRuleStatusOutcome;
                typedef std::future<ModifyFileTamperRuleStatusOutcome> ModifyFileTamperRuleStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyFileTamperRuleStatusRequest&, ModifyFileTamperRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFileTamperRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyJavaMemShellPluginSwitchResponse> ModifyJavaMemShellPluginSwitchOutcome;
                typedef std::future<ModifyJavaMemShellPluginSwitchOutcome> ModifyJavaMemShellPluginSwitchOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyJavaMemShellPluginSwitchRequest&, ModifyJavaMemShellPluginSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyJavaMemShellPluginSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyJavaMemShellsStatusResponse> ModifyJavaMemShellsStatusOutcome;
                typedef std::future<ModifyJavaMemShellsStatusOutcome> ModifyJavaMemShellsStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyJavaMemShellsStatusRequest&, ModifyJavaMemShellsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyJavaMemShellsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLicenseBindsResponse> ModifyLicenseBindsOutcome;
                typedef std::future<ModifyLicenseBindsOutcome> ModifyLicenseBindsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyLicenseBindsRequest&, ModifyLicenseBindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLicenseBindsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLicenseOrderResponse> ModifyLicenseOrderOutcome;
                typedef std::future<ModifyLicenseOrderOutcome> ModifyLicenseOrderOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyLicenseOrderRequest&, ModifyLicenseOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLicenseOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLogKafkaAccessResponse> ModifyLogKafkaAccessOutcome;
                typedef std::future<ModifyLogKafkaAccessOutcome> ModifyLogKafkaAccessOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyLogKafkaAccessRequest&, ModifyLogKafkaAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogKafkaAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLogKafkaDeliverTypeResponse> ModifyLogKafkaDeliverTypeOutcome;
                typedef std::future<ModifyLogKafkaDeliverTypeOutcome> ModifyLogKafkaDeliverTypeOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyLogKafkaDeliverTypeRequest&, ModifyLogKafkaDeliverTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogKafkaDeliverTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLogKafkaStateResponse> ModifyLogKafkaStateOutcome;
                typedef std::future<ModifyLogKafkaStateOutcome> ModifyLogKafkaStateOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyLogKafkaStateRequest&, ModifyLogKafkaStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogKafkaStateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLogStorageConfigResponse> ModifyLogStorageConfigOutcome;
                typedef std::future<ModifyLogStorageConfigOutcome> ModifyLogStorageConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyLogStorageConfigRequest&, ModifyLogStorageConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogStorageConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoginWhiteInfoResponse> ModifyLoginWhiteInfoOutcome;
                typedef std::future<ModifyLoginWhiteInfoOutcome> ModifyLoginWhiteInfoOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyLoginWhiteInfoRequest&, ModifyLoginWhiteInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoginWhiteInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoginWhiteRecordResponse> ModifyLoginWhiteRecordOutcome;
                typedef std::future<ModifyLoginWhiteRecordOutcome> ModifyLoginWhiteRecordOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyLoginWhiteRecordRequest&, ModifyLoginWhiteRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoginWhiteRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMachineAutoClearConfigResponse> ModifyMachineAutoClearConfigOutcome;
                typedef std::future<ModifyMachineAutoClearConfigOutcome> ModifyMachineAutoClearConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyMachineAutoClearConfigRequest&, ModifyMachineAutoClearConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMachineAutoClearConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMaliciousRequestWhiteListResponse> ModifyMaliciousRequestWhiteListOutcome;
                typedef std::future<ModifyMaliciousRequestWhiteListOutcome> ModifyMaliciousRequestWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyMaliciousRequestWhiteListRequest&, ModifyMaliciousRequestWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMaliciousRequestWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMalwareTimingScanSettingsResponse> ModifyMalwareTimingScanSettingsOutcome;
                typedef std::future<ModifyMalwareTimingScanSettingsOutcome> ModifyMalwareTimingScanSettingsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyMalwareTimingScanSettingsRequest&, ModifyMalwareTimingScanSettingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMalwareTimingScanSettingsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMalwareWhiteListResponse> ModifyMalwareWhiteListOutcome;
                typedef std::future<ModifyMalwareWhiteListOutcome> ModifyMalwareWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyMalwareWhiteListRequest&, ModifyMalwareWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMalwareWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetAttackSettingResponse> ModifyNetAttackSettingOutcome;
                typedef std::future<ModifyNetAttackSettingOutcome> ModifyNetAttackSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyNetAttackSettingRequest&, ModifyNetAttackSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetAttackSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetAttackWhiteListResponse> ModifyNetAttackWhiteListOutcome;
                typedef std::future<ModifyNetAttackWhiteListOutcome> ModifyNetAttackWhiteListOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyNetAttackWhiteListRequest&, ModifyNetAttackWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetAttackWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRansomDefenseEventsStatusResponse> ModifyRansomDefenseEventsStatusOutcome;
                typedef std::future<ModifyRansomDefenseEventsStatusOutcome> ModifyRansomDefenseEventsStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyRansomDefenseEventsStatusRequest&, ModifyRansomDefenseEventsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRansomDefenseEventsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRansomDefenseStrategyStatusResponse> ModifyRansomDefenseStrategyStatusOutcome;
                typedef std::future<ModifyRansomDefenseStrategyStatusOutcome> ModifyRansomDefenseStrategyStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyRansomDefenseStrategyStatusRequest&, ModifyRansomDefenseStrategyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRansomDefenseStrategyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRiskDnsPolicyResponse> ModifyRiskDnsPolicyOutcome;
                typedef std::future<ModifyRiskDnsPolicyOutcome> ModifyRiskDnsPolicyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyRiskDnsPolicyRequest&, ModifyRiskDnsPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskDnsPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRiskDnsPolicyStatusResponse> ModifyRiskDnsPolicyStatusOutcome;
                typedef std::future<ModifyRiskDnsPolicyStatusOutcome> ModifyRiskDnsPolicyStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyRiskDnsPolicyStatusRequest&, ModifyRiskDnsPolicyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskDnsPolicyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRiskEventsStatusResponse> ModifyRiskEventsStatusOutcome;
                typedef std::future<ModifyRiskEventsStatusOutcome> ModifyRiskEventsStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyRiskEventsStatusRequest&, ModifyRiskEventsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskEventsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUsersConfigResponse> ModifyUsersConfigOutcome;
                typedef std::future<ModifyUsersConfigOutcome> ModifyUsersConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyUsersConfigRequest&, ModifyUsersConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUsersConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVulDefenceEventStatusResponse> ModifyVulDefenceEventStatusOutcome;
                typedef std::future<ModifyVulDefenceEventStatusOutcome> ModifyVulDefenceEventStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyVulDefenceEventStatusRequest&, ModifyVulDefenceEventStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulDefenceEventStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVulDefenceSettingResponse> ModifyVulDefenceSettingOutcome;
                typedef std::future<ModifyVulDefenceSettingOutcome> ModifyVulDefenceSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyVulDefenceSettingRequest&, ModifyVulDefenceSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulDefenceSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWarningHostConfigResponse> ModifyWarningHostConfigOutcome;
                typedef std::future<ModifyWarningHostConfigOutcome> ModifyWarningHostConfigOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWarningHostConfigRequest&, ModifyWarningHostConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWarningHostConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWarningSettingResponse> ModifyWarningSettingOutcome;
                typedef std::future<ModifyWarningSettingOutcome> ModifyWarningSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWarningSettingRequest&, ModifyWarningSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWarningSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebHookPolicyResponse> ModifyWebHookPolicyOutcome;
                typedef std::future<ModifyWebHookPolicyOutcome> ModifyWebHookPolicyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWebHookPolicyRequest&, ModifyWebHookPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebHookPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebHookPolicyStatusResponse> ModifyWebHookPolicyStatusOutcome;
                typedef std::future<ModifyWebHookPolicyStatusOutcome> ModifyWebHookPolicyStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWebHookPolicyStatusRequest&, ModifyWebHookPolicyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebHookPolicyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebHookReceiverResponse> ModifyWebHookReceiverOutcome;
                typedef std::future<ModifyWebHookReceiverOutcome> ModifyWebHookReceiverOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWebHookReceiverRequest&, ModifyWebHookReceiverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebHookReceiverAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebHookRuleResponse> ModifyWebHookRuleOutcome;
                typedef std::future<ModifyWebHookRuleOutcome> ModifyWebHookRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWebHookRuleRequest&, ModifyWebHookRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebHookRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebHookRuleStatusResponse> ModifyWebHookRuleStatusOutcome;
                typedef std::future<ModifyWebHookRuleStatusOutcome> ModifyWebHookRuleStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWebHookRuleStatusRequest&, ModifyWebHookRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebHookRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebPageProtectSwitchResponse> ModifyWebPageProtectSwitchOutcome;
                typedef std::future<ModifyWebPageProtectSwitchOutcome> ModifyWebPageProtectSwitchOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ModifyWebPageProtectSwitchRequest&, ModifyWebPageProtectSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebPageProtectSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::RansomDefenseRollbackResponse> RansomDefenseRollbackOutcome;
                typedef std::future<RansomDefenseRollbackOutcome> RansomDefenseRollbackOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::RansomDefenseRollbackRequest&, RansomDefenseRollbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RansomDefenseRollbackAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverMalwaresResponse> RecoverMalwaresOutcome;
                typedef std::future<RecoverMalwaresOutcome> RecoverMalwaresOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::RecoverMalwaresRequest&, RecoverMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveLocalStorageItemResponse> RemoveLocalStorageItemOutcome;
                typedef std::future<RemoveLocalStorageItemOutcome> RemoveLocalStorageItemOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::RemoveLocalStorageItemRequest&, RemoveLocalStorageItemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveLocalStorageItemAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveMachineResponse> RemoveMachineOutcome;
                typedef std::future<RemoveMachineOutcome> RemoveMachineOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::RemoveMachineRequest&, RemoveMachineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveMachineAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryCreateSnapshotResponse> RetryCreateSnapshotOutcome;
                typedef std::future<RetryCreateSnapshotOutcome> RetryCreateSnapshotOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::RetryCreateSnapshotRequest&, RetryCreateSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryCreateSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryVulFixResponse> RetryVulFixOutcome;
                typedef std::future<RetryVulFixOutcome> RetryVulFixOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::RetryVulFixRequest&, RetryVulFixOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryVulFixAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanBaselineResponse> ScanBaselineOutcome;
                typedef std::future<ScanBaselineOutcome> ScanBaselineOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ScanBaselineRequest&, ScanBaselineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanBaselineAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanTaskAgainResponse> ScanTaskAgainOutcome;
                typedef std::future<ScanTaskAgainOutcome> ScanTaskAgainOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ScanTaskAgainRequest&, ScanTaskAgainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanTaskAgainAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanVulResponse> ScanVulOutcome;
                typedef std::future<ScanVulOutcome> ScanVulOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ScanVulRequest&, ScanVulOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanVulAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanVulAgainResponse> ScanVulAgainOutcome;
                typedef std::future<ScanVulAgainOutcome> ScanVulAgainOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ScanVulAgainRequest&, ScanVulAgainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanVulAgainAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanVulSettingResponse> ScanVulSettingOutcome;
                typedef std::future<ScanVulSettingOutcome> ScanVulSettingOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::ScanVulSettingRequest&, ScanVulSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanVulSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchLogResponse> SearchLogOutcome;
                typedef std::future<SearchLogOutcome> SearchLogOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SearchLogRequest&, SearchLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchLogAsyncHandler;
                typedef Outcome<Core::Error, Model::SeparateMalwaresResponse> SeparateMalwaresOutcome;
                typedef std::future<SeparateMalwaresOutcome> SeparateMalwaresOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SeparateMalwaresRequest&, SeparateMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SeparateMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::SetBashEventsStatusResponse> SetBashEventsStatusOutcome;
                typedef std::future<SetBashEventsStatusOutcome> SetBashEventsStatusOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SetBashEventsStatusRequest&, SetBashEventsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetBashEventsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::SetLocalStorageExpireResponse> SetLocalStorageExpireOutcome;
                typedef std::future<SetLocalStorageExpireOutcome> SetLocalStorageExpireOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SetLocalStorageExpireRequest&, SetLocalStorageExpireOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetLocalStorageExpireAsyncHandler;
                typedef Outcome<Core::Error, Model::SetLocalStorageItemResponse> SetLocalStorageItemOutcome;
                typedef std::future<SetLocalStorageItemOutcome> SetLocalStorageItemOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SetLocalStorageItemRequest&, SetLocalStorageItemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetLocalStorageItemAsyncHandler;
                typedef Outcome<Core::Error, Model::StartBaselineDetectResponse> StartBaselineDetectOutcome;
                typedef std::future<StartBaselineDetectOutcome> StartBaselineDetectOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::StartBaselineDetectRequest&, StartBaselineDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartBaselineDetectAsyncHandler;
                typedef Outcome<Core::Error, Model::StopAssetScanResponse> StopAssetScanOutcome;
                typedef std::future<StopAssetScanOutcome> StopAssetScanOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::StopAssetScanRequest&, StopAssetScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopAssetScanAsyncHandler;
                typedef Outcome<Core::Error, Model::StopBaselineDetectResponse> StopBaselineDetectOutcome;
                typedef std::future<StopBaselineDetectOutcome> StopBaselineDetectOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::StopBaselineDetectRequest&, StopBaselineDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopBaselineDetectAsyncHandler;
                typedef Outcome<Core::Error, Model::StopNoticeBanTipsResponse> StopNoticeBanTipsOutcome;
                typedef std::future<StopNoticeBanTipsOutcome> StopNoticeBanTipsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::StopNoticeBanTipsRequest&, StopNoticeBanTipsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopNoticeBanTipsAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchBashRulesResponse> SwitchBashRulesOutcome;
                typedef std::future<SwitchBashRulesOutcome> SwitchBashRulesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SwitchBashRulesRequest&, SwitchBashRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchBashRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncAssetScanResponse> SyncAssetScanOutcome;
                typedef std::future<SyncAssetScanOutcome> SyncAssetScanOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SyncAssetScanRequest&, SyncAssetScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncAssetScanAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncBaselineDetectSummaryResponse> SyncBaselineDetectSummaryOutcome;
                typedef std::future<SyncBaselineDetectSummaryOutcome> SyncBaselineDetectSummaryOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SyncBaselineDetectSummaryRequest&, SyncBaselineDetectSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncBaselineDetectSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncMachinesResponse> SyncMachinesOutcome;
                typedef std::future<SyncMachinesOutcome> SyncMachinesOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::SyncMachinesRequest&, SyncMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::TestWebHookRuleResponse> TestWebHookRuleOutcome;
                typedef std::future<TestWebHookRuleOutcome> TestWebHookRuleOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::TestWebHookRuleRequest&, TestWebHookRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TestWebHookRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::TrustMalwaresResponse> TrustMalwaresOutcome;
                typedef std::future<TrustMalwaresOutcome> TrustMalwaresOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::TrustMalwaresRequest&, TrustMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TrustMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::UntrustMalwaresResponse> UntrustMalwaresOutcome;
                typedef std::future<UntrustMalwaresOutcome> UntrustMalwaresOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::UntrustMalwaresRequest&, UntrustMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UntrustMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateBaselineStrategyResponse> UpdateBaselineStrategyOutcome;
                typedef std::future<UpdateBaselineStrategyOutcome> UpdateBaselineStrategyOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::UpdateBaselineStrategyRequest&, UpdateBaselineStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBaselineStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateMachineTagsResponse> UpdateMachineTagsOutcome;
                typedef std::future<UpdateMachineTagsOutcome> UpdateMachineTagsOutcomeCallable;
                typedef std::function<void(const CwpClient*, const Model::UpdateMachineTagsRequest&, UpdateMachineTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMachineTagsAsyncHandler;



                /**
                 *This API is used to add cross-region log-in allowlists in batches.
                 * @param req AddLoginWhiteListsRequest
                 * @return AddLoginWhiteListsOutcome
                 */
                AddLoginWhiteListsOutcome AddLoginWhiteLists(const Model::AddLoginWhiteListsRequest &request);
                void AddLoginWhiteListsAsync(const Model::AddLoginWhiteListsRequest& request, const AddLoginWhiteListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddLoginWhiteListsOutcomeCallable AddLoginWhiteListsCallable(const Model::AddLoginWhiteListsRequest& request);

                /**
                 *This API is used to unignore the vulnerabilities.
                 * @param req CancelIgnoreVulRequest
                 * @return CancelIgnoreVulOutcome
                 */
                CancelIgnoreVulOutcome CancelIgnoreVul(const Model::CancelIgnoreVulRequest &request);
                void CancelIgnoreVulAsync(const Model::CancelIgnoreVulRequest& request, const CancelIgnoreVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelIgnoreVulOutcomeCallable CancelIgnoreVulCallable(const Model::CancelIgnoreVulRequest& request);

                /**
                 *This API is used to ignore events or cancel ignoring in batches based on check item ID or event ID.
                 * @param req ChangeRuleEventsIgnoreStatusRequest
                 * @return ChangeRuleEventsIgnoreStatusOutcome
                 */
                ChangeRuleEventsIgnoreStatusOutcome ChangeRuleEventsIgnoreStatus(const Model::ChangeRuleEventsIgnoreStatusRequest &request);
                void ChangeRuleEventsIgnoreStatusAsync(const Model::ChangeRuleEventsIgnoreStatusRequest& request, const ChangeRuleEventsIgnoreStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeRuleEventsIgnoreStatusOutcomeCallable ChangeRuleEventsIgnoreStatusCallable(const Model::ChangeRuleEventsIgnoreStatusRequest& request);

                /**
                 *This API is used to change the policy availability status by policy ID.
                 * @param req ChangeStrategyEnableStatusRequest
                 * @return ChangeStrategyEnableStatusOutcome
                 */
                ChangeStrategyEnableStatusOutcome ChangeStrategyEnableStatus(const Model::ChangeStrategyEnableStatusRequest &request);
                void ChangeStrategyEnableStatusAsync(const Model::ChangeStrategyEnableStatusRequest& request, const ChangeStrategyEnableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeStrategyEnableStatusOutcomeCallable ChangeStrategyEnableStatusCallable(const Model::ChangeStrategyEnableStatusRequest& request);

                /**
                 *This API is used to verify parameters entered for adding and editing high-risk command user rules.
                 * @param req CheckBashPolicyParamsRequest
                 * @return CheckBashPolicyParamsOutcome
                 */
                CheckBashPolicyParamsOutcome CheckBashPolicyParams(const Model::CheckBashPolicyParamsRequest &request);
                void CheckBashPolicyParamsAsync(const Model::CheckBashPolicyParamsRequest& request, const CheckBashPolicyParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckBashPolicyParamsOutcomeCallable CheckBashPolicyParamsCallable(const Model::CheckBashPolicyParamsRequest& request);

                /**
                 *This API is used to verify parameters entered for adding and editing high-risk command user rules.
                 * @param req CheckBashRuleParamsRequest
                 * @return CheckBashRuleParamsOutcome
                 */
                CheckBashRuleParamsOutcome CheckBashRuleParams(const Model::CheckBashRuleParamsRequest &request);
                void CheckBashRuleParamsAsync(const Model::CheckBashRuleParamsRequest& request, const CheckBashRuleParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckBashRuleParamsOutcomeCallable CheckBashRuleParamsCallable(const Model::CheckBashRuleParamsRequest& request);

                /**
                 *This API is used to check the rule parameters entered at the core file monitoring frontend.
                 * @param req CheckFileTamperRuleRequest
                 * @return CheckFileTamperRuleOutcome
                 */
                CheckFileTamperRuleOutcome CheckFileTamperRule(const Model::CheckFileTamperRuleRequest &request);
                void CheckFileTamperRuleAsync(const Model::CheckFileTamperRuleRequest& request, const CheckFileTamperRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckFileTamperRuleOutcomeCallable CheckFileTamperRuleCallable(const Model::CheckFileTamperRuleRequest& request);

                /**
                 *This API is used to query whether the baseline is detected for the first time.
                 * @param req CheckFirstScanBaselineRequest
                 * @return CheckFirstScanBaselineOutcome
                 */
                CheckFirstScanBaselineOutcome CheckFirstScanBaseline(const Model::CheckFirstScanBaselineRequest &request);
                void CheckFirstScanBaselineAsync(const Model::CheckFirstScanBaselineRequest& request, const CheckFirstScanBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckFirstScanBaselineOutcomeCallable CheckFirstScanBaselineCallable(const Model::CheckFirstScanBaselineRequest& request);

                /**
                 *This API is used to check the connectivity for log shipping from Kafka.
                 * @param req CheckLogKafkaConnectionStateRequest
                 * @return CheckLogKafkaConnectionStateOutcome
                 */
                CheckLogKafkaConnectionStateOutcome CheckLogKafkaConnectionState(const Model::CheckLogKafkaConnectionStateRequest &request);
                void CheckLogKafkaConnectionStateAsync(const Model::CheckLogKafkaConnectionStateRequest& request, const CheckLogKafkaConnectionStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckLogKafkaConnectionStateOutcomeCallable CheckLogKafkaConnectionStateCallable(const Model::CheckLogKafkaConnectionStateRequest& request);

                /**
                 *This API is used to clean up the locally stored data.
                 * @param req ClearLocalStorageRequest
                 * @return ClearLocalStorageOutcome
                 */
                ClearLocalStorageOutcome ClearLocalStorage(const Model::ClearLocalStorageRequest &request);
                void ClearLocalStorageAsync(const Model::ClearLocalStorageRequest& request, const ClearLocalStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClearLocalStorageOutcomeCallable ClearLocalStorageCallable(const Model::ClearLocalStorageRequest& request);

                /**
                 *This API is used to add the list of block allowlists.
                 * @param req CreateBanWhiteListRequest
                 * @return CreateBanWhiteListOutcome
                 */
                CreateBanWhiteListOutcome CreateBanWhiteList(const Model::CreateBanWhiteListRequest &request);
                void CreateBanWhiteListAsync(const Model::CreateBanWhiteListRequest& request, const CreateBanWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBanWhiteListOutcomeCallable CreateBanWhiteListCallable(const Model::CreateBanWhiteListRequest& request);

                /**
                 *This API is used to create a baseline policy based on the policy information.
                 * @param req CreateBaselineStrategyRequest
                 * @return CreateBaselineStrategyOutcome
                 */
                CreateBaselineStrategyOutcome CreateBaselineStrategy(const Model::CreateBaselineStrategyRequest &request);
                void CreateBaselineStrategyAsync(const Model::CreateBaselineStrategyRequest& request, const CreateBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBaselineStrategyOutcomeCallable CreateBaselineStrategyCallable(const Model::CreateBaselineStrategyRequest& request);

                /**
                 *This API is used to create an automatic binding task for newly purchased authorizations.
                 * @param req CreateBuyBindTaskRequest
                 * @return CreateBuyBindTaskOutcome
                 */
                CreateBuyBindTaskOutcome CreateBuyBindTask(const Model::CreateBuyBindTaskRequest &request);
                void CreateBuyBindTaskAsync(const Model::CreateBuyBindTaskRequest& request, const CreateBuyBindTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBuyBindTaskOutcomeCallable CreateBuyBindTaskCallable(const Model::CreateBuyBindTaskRequest& request);

                /**
                 *This API is used to create emergency vulnerability scan tasks.
                 * @param req CreateEmergencyVulScanRequest
                 * @return CreateEmergencyVulScanOutcome
                 */
                CreateEmergencyVulScanOutcome CreateEmergencyVulScan(const Model::CreateEmergencyVulScanRequest &request);
                void CreateEmergencyVulScanAsync(const Model::CreateEmergencyVulScanRequest& request, const CreateEmergencyVulScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmergencyVulScanOutcomeCallable CreateEmergencyVulScanCallable(const Model::CreateEmergencyVulScanRequest& request);

                /**
                 *This API is used to trigger event investigation and alarm backtracking for Ultimate Edition machines.
                 * @param req CreateIncidentBacktrackingRequest
                 * @return CreateIncidentBacktrackingOutcome
                 */
                CreateIncidentBacktrackingOutcome CreateIncidentBacktracking(const Model::CreateIncidentBacktrackingRequest &request);
                void CreateIncidentBacktrackingAsync(const Model::CreateIncidentBacktrackingRequest& request, const CreateIncidentBacktrackingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIncidentBacktrackingOutcomeCallable CreateIncidentBacktrackingCallable(const Model::CreateIncidentBacktrackingRequest& request);

                /**
                 *This API is used to create Professional/Flagship edition orders
.This API is used to support creating orders through prepaid and pay-as-you-go.
This API is used to directly create postpaid orders.
This API is used to call the billing payment API for payment since prepaid orders are only placed but not paid.
                 * @param req CreateLicenseOrderRequest
                 * @return CreateLicenseOrderOutcome
                 */
                CreateLicenseOrderOutcome CreateLicenseOrder(const Model::CreateLicenseOrderRequest &request);
                void CreateLicenseOrderAsync(const Model::CreateLicenseOrderRequest& request, const CreateLicenseOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLicenseOrderOutcomeCallable CreateLicenseOrderCallable(const Model::CreateLicenseOrderRequest& request);

                /**
                 *This API is used to create log download tasks.
                 * @param req CreateLogExportRequest
                 * @return CreateLogExportOutcome
                 */
                CreateLogExportOutcome CreateLogExport(const Model::CreateLogExportRequest &request);
                void CreateLogExportAsync(const Model::CreateLogExportRequest& request, const CreateLogExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLogExportOutcomeCallable CreateLogExportCallable(const Model::CreateLogExportRequest& request);

                /**
                 *This API is used to add malicious request allowlists.
                 * @param req CreateMaliciousRequestWhiteListRequest
                 * @return CreateMaliciousRequestWhiteListOutcome
                 */
                CreateMaliciousRequestWhiteListOutcome CreateMaliciousRequestWhiteList(const Model::CreateMaliciousRequestWhiteListRequest &request);
                void CreateMaliciousRequestWhiteListAsync(const Model::CreateMaliciousRequestWhiteListRequest& request, const CreateMaliciousRequestWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMaliciousRequestWhiteListOutcomeCallable CreateMaliciousRequestWhiteListCallable(const Model::CreateMaliciousRequestWhiteListRequest& request);

                /**
                 *This API is used to create the Trojan allowlist.
                 * @param req CreateMalwareWhiteListRequest
                 * @return CreateMalwareWhiteListOutcome
                 */
                CreateMalwareWhiteListOutcome CreateMalwareWhiteList(const Model::CreateMalwareWhiteListRequest &request);
                void CreateMalwareWhiteListAsync(const Model::CreateMalwareWhiteListRequest& request, const CreateMalwareWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMalwareWhiteListOutcomeCallable CreateMalwareWhiteListCallable(const Model::CreateMalwareWhiteListRequest& request);

                /**
                 *This API is used to create a network attack allowlist.
                 * @param req CreateNetAttackWhiteListRequest
                 * @return CreateNetAttackWhiteListOutcome
                 */
                CreateNetAttackWhiteListOutcome CreateNetAttackWhiteList(const Model::CreateNetAttackWhiteListRequest &request);
                void CreateNetAttackWhiteListAsync(const Model::CreateNetAttackWhiteListRequest& request, const CreateNetAttackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetAttackWhiteListOutcomeCallable CreateNetAttackWhiteListCallable(const Model::CreateNetAttackWhiteListRequest& request);

                /**
                 *This API is used to create or modify anti-ransomware policies.
                 * @param req CreateRansomDefenseStrategyRequest
                 * @return CreateRansomDefenseStrategyOutcome
                 */
                CreateRansomDefenseStrategyOutcome CreateRansomDefenseStrategy(const Model::CreateRansomDefenseStrategyRequest &request);
                void CreateRansomDefenseStrategyAsync(const Model::CreateRansomDefenseStrategyRequest& request, const CreateRansomDefenseStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRansomDefenseStrategyOutcomeCallable CreateRansomDefenseStrategyCallable(const Model::CreateRansomDefenseStrategyRequest& request);

                /**
                 *This API is used to detect the intrusion and virus scanning.
                 * @param req CreateScanMalwareSettingRequest
                 * @return CreateScanMalwareSettingOutcome
                 */
                CreateScanMalwareSettingOutcome CreateScanMalwareSetting(const Model::CreateScanMalwareSettingRequest &request);
                void CreateScanMalwareSettingAsync(const Model::CreateScanMalwareSettingRequest& request, const CreateScanMalwareSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScanMalwareSettingOutcomeCallable CreateScanMalwareSettingCallable(const Model::CreateScanMalwareSettingRequest& request);

                /**
                 *This API is used to add history search records.
                 * @param req CreateSearchLogRequest
                 * @return CreateSearchLogOutcome
                 */
                CreateSearchLogOutcome CreateSearchLog(const Model::CreateSearchLogRequest &request);
                void CreateSearchLogAsync(const Model::CreateSearchLogRequest& request, const CreateSearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSearchLogOutcomeCallable CreateSearchLogCallable(const Model::CreateSearchLogRequest& request);

                /**
                 *This API is used to add the	retrieval template.
                 * @param req CreateSearchTemplateRequest
                 * @return CreateSearchTemplateOutcome
                 */
                CreateSearchTemplateOutcome CreateSearchTemplate(const Model::CreateSearchTemplateRequest &request);
                void CreateSearchTemplateAsync(const Model::CreateSearchTemplateRequest& request, const CreateSearchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSearchTemplateOutcomeCallable CreateSearchTemplateCallable(const Model::CreateSearchTemplateRequest& request);

                /**
                 *This API is used to submit the vulnerabilities and fix them.
                 * @param req CreateVulFixRequest
                 * @return CreateVulFixOutcome
                 */
                CreateVulFixOutcome CreateVulFix(const Model::CreateVulFixRequest &request);
                void CreateVulFixAsync(const Model::CreateVulFixRequest& request, const CreateVulFixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulFixOutcomeCallable CreateVulFixCallable(const Model::CreateVulFixRequest& request);

                /**
                 *This API is used to create allowlist orders.
                 * @param req CreateWhiteListOrderRequest
                 * @return CreateWhiteListOrderOutcome
                 */
                CreateWhiteListOrderOutcome CreateWhiteListOrder(const Model::CreateWhiteListOrderRequest &request);
                void CreateWhiteListOrderAsync(const Model::CreateWhiteListOrderRequest& request, const CreateWhiteListOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWhiteListOrderOutcomeCallable CreateWhiteListOrderCallable(const Model::CreateWhiteListOrderRequest& request);

                /**
                 *This API is used to delete all Java webshell events.
                 * @param req DeleteAllJavaMemShellsRequest
                 * @return DeleteAllJavaMemShellsOutcome
                 */
                DeleteAllJavaMemShellsOutcome DeleteAllJavaMemShells(const Model::DeleteAllJavaMemShellsRequest &request);
                void DeleteAllJavaMemShellsAsync(const Model::DeleteAllJavaMemShellsRequest& request, const DeleteAllJavaMemShellsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAllJavaMemShellsOutcomeCallable DeleteAllJavaMemShellsCallable(const Model::DeleteAllJavaMemShellsRequest& request);

                /**
                 *This API is used to delete the list of blocking allowlists.
                 * @param req DeleteBanWhiteListRequest
                 * @return DeleteBanWhiteListOutcome
                 */
                DeleteBanWhiteListOutcome DeleteBanWhiteList(const Model::DeleteBanWhiteListRequest &request);
                void DeleteBanWhiteListAsync(const Model::DeleteBanWhiteListRequest& request, const DeleteBanWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBanWhiteListOutcomeCallable DeleteBanWhiteListCallable(const Model::DeleteBanWhiteListRequest& request);

                /**
                 *This API is used to delete the baseline policy configuration.
                 * @param req DeleteBaselinePolicyRequest
                 * @return DeleteBaselinePolicyOutcome
                 */
                DeleteBaselinePolicyOutcome DeleteBaselinePolicy(const Model::DeleteBaselinePolicyRequest &request);
                void DeleteBaselinePolicyAsync(const Model::DeleteBaselinePolicyRequest& request, const DeleteBaselinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBaselinePolicyOutcomeCallable DeleteBaselinePolicyCallable(const Model::DeleteBaselinePolicyRequest& request);

                /**
                 *This API is used to delete the policy by baseline policy ID.
                 * @param req DeleteBaselineStrategyRequest
                 * @return DeleteBaselineStrategyOutcome
                 */
                DeleteBaselineStrategyOutcome DeleteBaselineStrategy(const Model::DeleteBaselineStrategyRequest &request);
                void DeleteBaselineStrategyAsync(const Model::DeleteBaselineStrategyRequest& request, const DeleteBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBaselineStrategyOutcomeCallable DeleteBaselineStrategyCallable(const Model::DeleteBaselineStrategyRequest& request);

                /**
                 *This API is used to delete high-risk command events based on IDs.
                 * @param req DeleteBashEventsRequest
                 * @return DeleteBashEventsOutcome
                 */
                DeleteBashEventsOutcome DeleteBashEvents(const Model::DeleteBashEventsRequest &request);
                void DeleteBashEventsAsync(const Model::DeleteBashEventsRequest& request, const DeleteBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBashEventsOutcomeCallable DeleteBashEventsCallable(const Model::DeleteBashEventsRequest& request);

                /**
                 *This API is used to delete high-risk command policies.
                 * @param req DeleteBashPoliciesRequest
                 * @return DeleteBashPoliciesOutcome
                 */
                DeleteBashPoliciesOutcome DeleteBashPolicies(const Model::DeleteBashPoliciesRequest &request);
                void DeleteBashPoliciesAsync(const Model::DeleteBashPoliciesRequest& request, const DeleteBashPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBashPoliciesOutcomeCallable DeleteBashPoliciesCallable(const Model::DeleteBashPoliciesRequest& request);

                /**
                 *This API is used to delete high-risk command rules.
                 * @param req DeleteBashRulesRequest
                 * @return DeleteBashRulesOutcome
                 */
                DeleteBashRulesOutcome DeleteBashRules(const Model::DeleteBashRulesRequest &request);
                void DeleteBashRulesAsync(const Model::DeleteBashRulesRequest& request, const DeleteBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBashRulesOutcomeCallable DeleteBashRulesCallable(const Model::DeleteBashRulesRequest& request);

                /**
                 *This API is used to delete brute force attack records.
                 * @param req DeleteBruteAttacksRequest
                 * @return DeleteBruteAttacksOutcome
                 */
                DeleteBruteAttacksOutcome DeleteBruteAttacks(const Model::DeleteBruteAttacksRequest &request);
                void DeleteBruteAttacksAsync(const Model::DeleteBruteAttacksRequest& request, const DeleteBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBruteAttacksOutcomeCallable DeleteBruteAttacksCallable(const Model::DeleteBruteAttacksRequest& request);

                /**
                 *This API is used to delete expired orders in Authorization Management - Order List. (Deleted orders are not counted in statistics.)
                 * @param req DeleteLicenseRecordRequest
                 * @return DeleteLicenseRecordOutcome
                 */
                DeleteLicenseRecordOutcome DeleteLicenseRecord(const Model::DeleteLicenseRecordRequest &request);
                void DeleteLicenseRecordAsync(const Model::DeleteLicenseRecordRequest& request, const DeleteLicenseRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLicenseRecordOutcomeCallable DeleteLicenseRecordCallable(const Model::DeleteLicenseRecordRequest& request);

                /**
                 *This API is used to delete all authorization records.
                 * @param req DeleteLicenseRecordAllRequest
                 * @return DeleteLicenseRecordAllOutcome
                 */
                DeleteLicenseRecordAllOutcome DeleteLicenseRecordAll(const Model::DeleteLicenseRecordAllRequest &request);
                void DeleteLicenseRecordAllAsync(const Model::DeleteLicenseRecordAllRequest& request, const DeleteLicenseRecordAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLicenseRecordAllOutcomeCallable DeleteLicenseRecordAllCallable(const Model::DeleteLicenseRecordAllRequest& request);

                /**
                 *This API is used to delete log download tasks.
                 * @param req DeleteLogExportRequest
                 * @return DeleteLogExportOutcome
                 */
                DeleteLogExportOutcome DeleteLogExport(const Model::DeleteLogExportRequest &request);
                void DeleteLogExportAsync(const Model::DeleteLogExportRequest& request, const DeleteLogExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLogExportOutcomeCallable DeleteLogExportCallable(const Model::DeleteLogExportRequest& request);

                /**
                 *This API is used to delete the cross-region log-in allowlist rules.
                 * @param req DeleteLoginWhiteListRequest
                 * @return DeleteLoginWhiteListOutcome
                 */
                DeleteLoginWhiteListOutcome DeleteLoginWhiteList(const Model::DeleteLoginWhiteListRequest &request);
                void DeleteLoginWhiteListAsync(const Model::DeleteLoginWhiteListRequest& request, const DeleteLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoginWhiteListOutcomeCallable DeleteLoginWhiteListCallable(const Model::DeleteLoginWhiteListRequest& request);

                /**
                 *This API is used to uninstall the CWPP client.
                 * @param req DeleteMachineRequest
                 * @return DeleteMachineOutcome
                 */
                DeleteMachineOutcome DeleteMachine(const Model::DeleteMachineRequest &request);
                void DeleteMachineAsync(const Model::DeleteMachineRequest& request, const DeleteMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMachineOutcomeCallable DeleteMachineCallable(const Model::DeleteMachineRequest& request);

                /**
                 *This API is used to delete clearing records of a machine.
                 * @param req DeleteMachineClearHistoryRequest
                 * @return DeleteMachineClearHistoryOutcome
                 */
                DeleteMachineClearHistoryOutcome DeleteMachineClearHistory(const Model::DeleteMachineClearHistoryRequest &request);
                void DeleteMachineClearHistoryAsync(const Model::DeleteMachineClearHistoryRequest& request, const DeleteMachineClearHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMachineClearHistoryOutcomeCallable DeleteMachineClearHistoryCallable(const Model::DeleteMachineClearHistoryRequest& request);

                /**
                 *This API is used to delete tags associated with the server.
                 * @param req DeleteMachineTagRequest
                 * @return DeleteMachineTagOutcome
                 */
                DeleteMachineTagOutcome DeleteMachineTag(const Model::DeleteMachineTagRequest &request);
                void DeleteMachineTagAsync(const Model::DeleteMachineTagRequest& request, const DeleteMachineTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMachineTagOutcomeCallable DeleteMachineTagCallable(const Model::DeleteMachineTagRequest& request);

                /**
                 *This API is used to delete the malicious request allowlist.
                 * @param req DeleteMaliciousRequestWhiteListRequest
                 * @return DeleteMaliciousRequestWhiteListOutcome
                 */
                DeleteMaliciousRequestWhiteListOutcome DeleteMaliciousRequestWhiteList(const Model::DeleteMaliciousRequestWhiteListRequest &request);
                void DeleteMaliciousRequestWhiteListAsync(const Model::DeleteMaliciousRequestWhiteListRequest& request, const DeleteMaliciousRequestWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMaliciousRequestWhiteListOutcomeCallable DeleteMaliciousRequestWhiteListCallable(const Model::DeleteMaliciousRequestWhiteListRequest& request);

                /**
                 *This API is used to delete malicious request records.
                 * @param req DeleteMaliciousRequestsRequest
                 * @return DeleteMaliciousRequestsOutcome
                 */
                DeleteMaliciousRequestsOutcome DeleteMaliciousRequests(const Model::DeleteMaliciousRequestsRequest &request);
                void DeleteMaliciousRequestsAsync(const Model::DeleteMaliciousRequestsRequest& request, const DeleteMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMaliciousRequestsOutcomeCallable DeleteMaliciousRequestsCallable(const Model::DeleteMaliciousRequestsRequest& request);

                /**
                 *This API is used to terminate the scan tasks.
                 * @param req DeleteMalwareScanTaskRequest
                 * @return DeleteMalwareScanTaskOutcome
                 */
                DeleteMalwareScanTaskOutcome DeleteMalwareScanTask(const Model::DeleteMalwareScanTaskRequest &request);
                void DeleteMalwareScanTaskAsync(const Model::DeleteMalwareScanTaskRequest& request, const DeleteMalwareScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMalwareScanTaskOutcomeCallable DeleteMalwareScanTaskCallable(const Model::DeleteMalwareScanTaskRequest& request);

                /**
                 *This API is used to delete the Trojan whitelist.
                 * @param req DeleteMalwareWhiteListRequest
                 * @return DeleteMalwareWhiteListOutcome
                 */
                DeleteMalwareWhiteListOutcome DeleteMalwareWhiteList(const Model::DeleteMalwareWhiteListRequest &request);
                void DeleteMalwareWhiteListAsync(const Model::DeleteMalwareWhiteListRequest& request, const DeleteMalwareWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMalwareWhiteListOutcomeCallable DeleteMalwareWhiteListCallable(const Model::DeleteMalwareWhiteListRequest& request);

                /**
                 *This API is used to delete Trojan records.
                 * @param req DeleteMalwaresRequest
                 * @return DeleteMalwaresOutcome
                 */
                DeleteMalwaresOutcome DeleteMalwares(const Model::DeleteMalwaresRequest &request);
                void DeleteMalwaresAsync(const Model::DeleteMalwaresRequest& request, const DeleteMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMalwaresOutcomeCallable DeleteMalwaresCallable(const Model::DeleteMalwaresRequest& request);

                /**
                 *This API is used to delete the network attack allowlist.
                 * @param req DeleteNetAttackWhiteListRequest
                 * @return DeleteNetAttackWhiteListOutcome
                 */
                DeleteNetAttackWhiteListOutcome DeleteNetAttackWhiteList(const Model::DeleteNetAttackWhiteListRequest &request);
                void DeleteNetAttackWhiteListAsync(const Model::DeleteNetAttackWhiteListRequest& request, const DeleteNetAttackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNetAttackWhiteListOutcomeCallable DeleteNetAttackWhiteListCallable(const Model::DeleteNetAttackWhiteListRequest& request);

                /**
                 *This API is used to delete cross-region log-in records.
                 * @param req DeleteNonlocalLoginPlacesRequest
                 * @return DeleteNonlocalLoginPlacesOutcome
                 */
                DeleteNonlocalLoginPlacesOutcome DeleteNonlocalLoginPlaces(const Model::DeleteNonlocalLoginPlacesRequest &request);
                void DeleteNonlocalLoginPlacesAsync(const Model::DeleteNonlocalLoginPlacesRequest& request, const DeleteNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNonlocalLoginPlacesOutcomeCallable DeleteNonlocalLoginPlacesCallable(const Model::DeleteNonlocalLoginPlacesRequest& request);

                /**
                 *This API is used to delete local privilege escalation based on IDs.
                 * @param req DeletePrivilegeEventsRequest
                 * @return DeletePrivilegeEventsOutcome
                 */
                DeletePrivilegeEventsOutcome DeletePrivilegeEvents(const Model::DeletePrivilegeEventsRequest &request);
                void DeletePrivilegeEventsAsync(const Model::DeletePrivilegeEventsRequest& request, const DeletePrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrivilegeEventsOutcomeCallable DeletePrivilegeEventsCallable(const Model::DeletePrivilegeEventsRequest& request);

                /**
                 *This API is used to delete local privilege elevation rules.
                 * @param req DeletePrivilegeRulesRequest
                 * @return DeletePrivilegeRulesOutcome
                 */
                DeletePrivilegeRulesOutcome DeletePrivilegeRules(const Model::DeletePrivilegeRulesRequest &request);
                void DeletePrivilegeRulesAsync(const Model::DeletePrivilegeRulesRequest& request, const DeletePrivilegeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrivilegeRulesOutcomeCallable DeletePrivilegeRulesCallable(const Model::DeletePrivilegeRulesRequest& request);

                /**
                 *This API is used to delete Reverse Shell events based on IDs.
                 * @param req DeleteReverseShellEventsRequest
                 * @return DeleteReverseShellEventsOutcome
                 */
                DeleteReverseShellEventsOutcome DeleteReverseShellEvents(const Model::DeleteReverseShellEventsRequest &request);
                void DeleteReverseShellEventsAsync(const Model::DeleteReverseShellEventsRequest& request, const DeleteReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReverseShellEventsOutcomeCallable DeleteReverseShellEventsCallable(const Model::DeleteReverseShellEventsRequest& request);

                /**
                 *This API is used to delete Reverse Shell rules.
                 * @param req DeleteReverseShellRulesRequest
                 * @return DeleteReverseShellRulesOutcome
                 */
                DeleteReverseShellRulesOutcome DeleteReverseShellRules(const Model::DeleteReverseShellRulesRequest &request);
                void DeleteReverseShellRulesAsync(const Model::DeleteReverseShellRulesRequest& request, const DeleteReverseShellRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReverseShellRulesOutcomeCallable DeleteReverseShellRulesCallable(const Model::DeleteReverseShellRulesRequest& request);

                /**
                 *This API is used to delete malicious request events.
                 * @param req DeleteRiskDnsEventRequest
                 * @return DeleteRiskDnsEventOutcome
                 */
                DeleteRiskDnsEventOutcome DeleteRiskDnsEvent(const Model::DeleteRiskDnsEventRequest &request);
                void DeleteRiskDnsEventAsync(const Model::DeleteRiskDnsEventRequest& request, const DeleteRiskDnsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRiskDnsEventOutcomeCallable DeleteRiskDnsEventCallable(const Model::DeleteRiskDnsEventRequest& request);

                /**
                 *This API is used to delete malicious request policies.
                 * @param req DeleteRiskDnsPolicyRequest
                 * @return DeleteRiskDnsPolicyOutcome
                 */
                DeleteRiskDnsPolicyOutcome DeleteRiskDnsPolicy(const Model::DeleteRiskDnsPolicyRequest &request);
                void DeleteRiskDnsPolicyAsync(const Model::DeleteRiskDnsPolicyRequest& request, const DeleteRiskDnsPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRiskDnsPolicyOutcomeCallable DeleteRiskDnsPolicyCallable(const Model::DeleteRiskDnsPolicyRequest& request);

                /**
                 *This API is used to stop scan tasks of a specified type.
                 * @param req DeleteScanTaskRequest
                 * @return DeleteScanTaskOutcome
                 */
                DeleteScanTaskOutcome DeleteScanTask(const Model::DeleteScanTaskRequest &request);
                void DeleteScanTaskAsync(const Model::DeleteScanTaskRequest& request, const DeleteScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScanTaskOutcomeCallable DeleteScanTaskCallable(const Model::DeleteScanTaskRequest& request);

                /**
                 *This API is used to delete the retrieval template.
                 * @param req DeleteSearchTemplateRequest
                 * @return DeleteSearchTemplateOutcome
                 */
                DeleteSearchTemplateOutcome DeleteSearchTemplate(const Model::DeleteSearchTemplateRequest &request);
                void DeleteSearchTemplateAsync(const Model::DeleteSearchTemplateRequest& request, const DeleteSearchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSearchTemplateOutcomeCallable DeleteSearchTemplateCallable(const Model::DeleteSearchTemplateRequest& request);

                /**
                 *This API is used to delete tags.
                 * @param req DeleteTagsRequest
                 * @return DeleteTagsOutcome
                 */
                DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest &request);
                void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request);

                /**
                 *This API is used to delete alarm policies.
                 * @param req DeleteWebHookPolicyRequest
                 * @return DeleteWebHookPolicyOutcome
                 */
                DeleteWebHookPolicyOutcome DeleteWebHookPolicy(const Model::DeleteWebHookPolicyRequest &request);
                void DeleteWebHookPolicyAsync(const Model::DeleteWebHookPolicyRequest& request, const DeleteWebHookPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWebHookPolicyOutcomeCallable DeleteWebHookPolicyCallable(const Model::DeleteWebHookPolicyRequest& request);

                /**
                 *This API is used to delete the alert recipient.
                 * @param req DeleteWebHookReceiverRequest
                 * @return DeleteWebHookReceiverOutcome
                 */
                DeleteWebHookReceiverOutcome DeleteWebHookReceiver(const Model::DeleteWebHookReceiverRequest &request);
                void DeleteWebHookReceiverAsync(const Model::DeleteWebHookReceiverRequest& request, const DeleteWebHookReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWebHookReceiverOutcomeCallable DeleteWebHookReceiverCallable(const Model::DeleteWebHookReceiverRequest& request);

                /**
                 *This API is used to delete the rules of WeCom chatbots.
                 * @param req DeleteWebHookRuleRequest
                 * @return DeleteWebHookRuleOutcome
                 */
                DeleteWebHookRuleOutcome DeleteWebHookRule(const Model::DeleteWebHookRuleRequest &request);
                void DeleteWebHookRuleAsync(const Model::DeleteWebHookRuleRequest& request, const DeleteWebHookRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWebHookRuleOutcomeCallable DeleteWebHookRuleCallable(const Model::DeleteWebHookRuleRequest& request);

                /**
                 *This API is used to obtain the current grayscale configuration of the user.
                 * @param req DescribeABTestConfigRequest
                 * @return DescribeABTestConfigOutcome
                 */
                DescribeABTestConfigOutcome DescribeABTestConfig(const Model::DescribeABTestConfigRequest &request);
                void DescribeABTestConfigAsync(const Model::DescribeABTestConfigRequest& request, const DescribeABTestConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeABTestConfigOutcomeCallable DescribeABTestConfigCallable(const Model::DescribeABTestConfigRequest& request);

                /**
                 *This API is used to obtain the configured aeskey and aesiv.
                 * @param req DescribeAESKeyRequest
                 * @return DescribeAESKeyOutcome
                 */
                DescribeAESKeyOutcome DescribeAESKey(const Model::DescribeAESKeyRequest &request);
                void DescribeAESKeyAsync(const Model::DescribeAESKeyRequest& request, const DescribeAESKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAESKeyOutcomeCallable DescribeAESKeyCallable(const Model::DescribeAESKeyRequest& request);

                /**
                 *This API is used to obtain the account statistics data.
                 * @param req DescribeAccountStatisticsRequest
                 * @return DescribeAccountStatisticsOutcome
                 */
                DescribeAccountStatisticsOutcome DescribeAccountStatistics(const Model::DescribeAccountStatisticsRequest &request);
                void DescribeAccountStatisticsAsync(const Model::DescribeAccountStatisticsRequest& request, const DescribeAccountStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountStatisticsOutcomeCallable DescribeAccountStatisticsCallable(const Model::DescribeAccountStatisticsRequest& request);

                /**
                 *This API is used to obtain the agent installation command.
                 * @param req DescribeAgentInstallCommandRequest
                 * @return DescribeAgentInstallCommandOutcome
                 */
                DescribeAgentInstallCommandOutcome DescribeAgentInstallCommand(const Model::DescribeAgentInstallCommandRequest &request);
                void DescribeAgentInstallCommandAsync(const Model::DescribeAgentInstallCommandRequest& request, const DescribeAgentInstallCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentInstallCommandOutcomeCallable DescribeAgentInstallCommandCallable(const Model::DescribeAgentInstallCommandRequest& request);

                /**
                 *This API is used to obtain the token for installing the agent in a hybrid cloud environment.
                 * @param req DescribeAgentInstallationTokenRequest
                 * @return DescribeAgentInstallationTokenOutcome
                 */
                DescribeAgentInstallationTokenOutcome DescribeAgentInstallationToken(const Model::DescribeAgentInstallationTokenRequest &request);
                void DescribeAgentInstallationTokenAsync(const Model::DescribeAgentInstallationTokenRequest& request, const DescribeAgentInstallationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentInstallationTokenOutcomeCallable DescribeAgentInstallationTokenCallable(const Model::DescribeAgentInstallationTokenRequest& request);

                /**
                 *This API is used to obtain all node information on the event corresponding to an alarm.
                 * @param req DescribeAlarmIncidentNodesRequest
                 * @return DescribeAlarmIncidentNodesOutcome
                 */
                DescribeAlarmIncidentNodesOutcome DescribeAlarmIncidentNodes(const Model::DescribeAlarmIncidentNodesRequest &request);
                void DescribeAlarmIncidentNodesAsync(const Model::DescribeAlarmIncidentNodesRequest& request, const DescribeAlarmIncidentNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmIncidentNodesOutcomeCallable DescribeAlarmIncidentNodesCallable(const Model::DescribeAlarmIncidentNodesRequest& request);

                /**
                 *This API is used to query the list of alarm IDs.
                 * @param req DescribeAlarmVertexIdRequest
                 * @return DescribeAlarmVertexIdOutcome
                 */
                DescribeAlarmVertexIdOutcome DescribeAlarmVertexId(const Model::DescribeAlarmVertexIdRequest &request);
                void DescribeAlarmVertexIdAsync(const Model::DescribeAlarmVertexIdRequest& request, const DescribeAlarmVertexIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmVertexIdOutcomeCallable DescribeAlarmVertexIdCallable(const Model::DescribeAlarmVertexIdRequest& request);

                /**
                 *This API is used to obtain the number of all software applications.
                 * @param req DescribeAssetAppCountRequest
                 * @return DescribeAssetAppCountOutcome
                 */
                DescribeAssetAppCountOutcome DescribeAssetAppCount(const Model::DescribeAssetAppCountRequest &request);
                void DescribeAssetAppCountAsync(const Model::DescribeAssetAppCountRequest& request, const DescribeAssetAppCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetAppCountOutcomeCallable DescribeAssetAppCountCallable(const Model::DescribeAssetAppCountRequest& request);

                /**
                 *This API is used to query the application list.
                 * @param req DescribeAssetAppListRequest
                 * @return DescribeAssetAppListOutcome
                 */
                DescribeAssetAppListOutcome DescribeAssetAppList(const Model::DescribeAssetAppListRequest &request);
                void DescribeAssetAppListAsync(const Model::DescribeAssetAppListRequest& request, const DescribeAssetAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetAppListOutcomeCallable DescribeAssetAppListCallable(const Model::DescribeAssetAppListRequest& request);

                /**
                 *This API is used to obtain the list of software's associated processes.
                 * @param req DescribeAssetAppProcessListRequest
                 * @return DescribeAssetAppProcessListOutcome
                 */
                DescribeAssetAppProcessListOutcome DescribeAssetAppProcessList(const Model::DescribeAssetAppProcessListRequest &request);
                void DescribeAssetAppProcessListAsync(const Model::DescribeAssetAppProcessListRequest& request, const DescribeAssetAppProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetAppProcessListOutcomeCallable DescribeAssetAppProcessListCallable(const Model::DescribeAssetAppProcessListRequest& request);

                /**
                 *This API is used to obtain the kernel module details.
                 * @param req DescribeAssetCoreModuleInfoRequest
                 * @return DescribeAssetCoreModuleInfoOutcome
                 */
                DescribeAssetCoreModuleInfoOutcome DescribeAssetCoreModuleInfo(const Model::DescribeAssetCoreModuleInfoRequest &request);
                void DescribeAssetCoreModuleInfoAsync(const Model::DescribeAssetCoreModuleInfoRequest& request, const DescribeAssetCoreModuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetCoreModuleInfoOutcomeCallable DescribeAssetCoreModuleInfoCallable(const Model::DescribeAssetCoreModuleInfoRequest& request);

                /**
                 *This API is used to query the list of asset management kernel modules.
                 * @param req DescribeAssetCoreModuleListRequest
                 * @return DescribeAssetCoreModuleListOutcome
                 */
                DescribeAssetCoreModuleListOutcome DescribeAssetCoreModuleList(const Model::DescribeAssetCoreModuleListRequest &request);
                void DescribeAssetCoreModuleListAsync(const Model::DescribeAssetCoreModuleListRequest& request, const DescribeAssetCoreModuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetCoreModuleListOutcomeCallable DescribeAssetCoreModuleListCallable(const Model::DescribeAssetCoreModuleListRequest& request);

                /**
                 *This API is used to obtain the number of all databases.
                 * @param req DescribeAssetDatabaseCountRequest
                 * @return DescribeAssetDatabaseCountOutcome
                 */
                DescribeAssetDatabaseCountOutcome DescribeAssetDatabaseCount(const Model::DescribeAssetDatabaseCountRequest &request);
                void DescribeAssetDatabaseCountAsync(const Model::DescribeAssetDatabaseCountRequest& request, const DescribeAssetDatabaseCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetDatabaseCountOutcomeCallable DescribeAssetDatabaseCountCallable(const Model::DescribeAssetDatabaseCountRequest& request);

                /**
                 *This API is used to obtain the asset management database details.
                 * @param req DescribeAssetDatabaseInfoRequest
                 * @return DescribeAssetDatabaseInfoOutcome
                 */
                DescribeAssetDatabaseInfoOutcome DescribeAssetDatabaseInfo(const Model::DescribeAssetDatabaseInfoRequest &request);
                void DescribeAssetDatabaseInfoAsync(const Model::DescribeAssetDatabaseInfoRequest& request, const DescribeAssetDatabaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetDatabaseInfoOutcomeCallable DescribeAssetDatabaseInfoCallable(const Model::DescribeAssetDatabaseInfoRequest& request);

                /**
                 *This API is used to query the list of asset management databases.
                 * @param req DescribeAssetDatabaseListRequest
                 * @return DescribeAssetDatabaseListOutcome
                 */
                DescribeAssetDatabaseListOutcome DescribeAssetDatabaseList(const Model::DescribeAssetDatabaseListRequest &request);
                void DescribeAssetDatabaseListAsync(const Model::DescribeAssetDatabaseListRequest& request, const DescribeAssetDatabaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetDatabaseListOutcomeCallable DescribeAssetDatabaseListCallable(const Model::DescribeAssetDatabaseListRequest& request);

                /**
                 *This API is used to obtain the host disk partition list.
                 * @param req DescribeAssetDiskListRequest
                 * @return DescribeAssetDiskListOutcome
                 */
                DescribeAssetDiskListOutcome DescribeAssetDiskList(const Model::DescribeAssetDiskListRequest &request);
                void DescribeAssetDiskListAsync(const Model::DescribeAssetDiskListRequest& request, const DescribeAssetDiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetDiskListOutcomeCallable DescribeAssetDiskListCallable(const Model::DescribeAssetDiskListRequest& request);

                /**
                 *This API is used to query the list of asset management environment variables.
                 * @param req DescribeAssetEnvListRequest
                 * @return DescribeAssetEnvListOutcome
                 */
                DescribeAssetEnvListOutcome DescribeAssetEnvList(const Model::DescribeAssetEnvListRequest &request);
                void DescribeAssetEnvListAsync(const Model::DescribeAssetEnvListRequest& request, const DescribeAssetEnvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetEnvListOutcomeCallable DescribeAssetEnvListCallable(const Model::DescribeAssetEnvListRequest& request);

                /**
                 *This API is used to obtain the total number of resources of the host.
                 * @param req DescribeAssetHostTotalCountRequest
                 * @return DescribeAssetHostTotalCountOutcome
                 */
                DescribeAssetHostTotalCountOutcome DescribeAssetHostTotalCount(const Model::DescribeAssetHostTotalCountRequest &request);
                void DescribeAssetHostTotalCountAsync(const Model::DescribeAssetHostTotalCountRequest& request, const DescribeAssetHostTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetHostTotalCountOutcomeCallable DescribeAssetHostTotalCountCallable(const Model::DescribeAssetHostTotalCountRequest& request);

                /**
                 *This API is used to obtain the number of assets, including hosts, accounts, ports, processes, software, databases, web applications, web frameworks, web services, and web sites.
                 * @param req DescribeAssetInfoRequest
                 * @return DescribeAssetInfoOutcome
                 */
                DescribeAssetInfoOutcome DescribeAssetInfo(const Model::DescribeAssetInfoRequest &request);
                void DescribeAssetInfoAsync(const Model::DescribeAssetInfoRequest& request, const DescribeAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetInfoOutcomeCallable DescribeAssetInfoCallable(const Model::DescribeAssetInfoRequest& request);

                /**
                 *This API is used to query the list of asset management start services.
                 * @param req DescribeAssetInitServiceListRequest
                 * @return DescribeAssetInitServiceListOutcome
                 */
                DescribeAssetInitServiceListOutcome DescribeAssetInitServiceList(const Model::DescribeAssetInitServiceListRequest &request);
                void DescribeAssetInitServiceListAsync(const Model::DescribeAssetInitServiceListRequest& request, const DescribeAssetInitServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetInitServiceListOutcomeCallable DescribeAssetInitServiceListCallable(const Model::DescribeAssetInitServiceListRequest& request);

                /**
                 *This API is used to obtain Jar package details.
                 * @param req DescribeAssetJarInfoRequest
                 * @return DescribeAssetJarInfoOutcome
                 */
                DescribeAssetJarInfoOutcome DescribeAssetJarInfo(const Model::DescribeAssetJarInfoRequest &request);
                void DescribeAssetJarInfoAsync(const Model::DescribeAssetJarInfoRequest& request, const DescribeAssetJarInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetJarInfoOutcomeCallable DescribeAssetJarInfoCallable(const Model::DescribeAssetJarInfoRequest& request);

                /**
                 *This API is used to query the list of Jar packages.
                 * @param req DescribeAssetJarListRequest
                 * @return DescribeAssetJarListOutcome
                 */
                DescribeAssetJarListOutcome DescribeAssetJarList(const Model::DescribeAssetJarListRequest &request);
                void DescribeAssetJarListAsync(const Model::DescribeAssetJarListRequest& request, const DescribeAssetJarListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetJarListOutcomeCallable DescribeAssetJarListCallable(const Model::DescribeAssetJarListRequest& request);

                /**
                 *This API is used to obtain the utilization of the system load, memory, and hard disk.
                 * @param req DescribeAssetLoadInfoRequest
                 * @return DescribeAssetLoadInfoOutcome
                 */
                DescribeAssetLoadInfoOutcome DescribeAssetLoadInfo(const Model::DescribeAssetLoadInfoRequest &request);
                void DescribeAssetLoadInfoAsync(const Model::DescribeAssetLoadInfoRequest& request, const DescribeAssetLoadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetLoadInfoOutcomeCallable DescribeAssetLoadInfoCallable(const Model::DescribeAssetLoadInfoRequest& request);

                /**
                 *This API is used to obtain asset management host resource details.
                 * @param req DescribeAssetMachineDetailRequest
                 * @return DescribeAssetMachineDetailOutcome
                 */
                DescribeAssetMachineDetailOutcome DescribeAssetMachineDetail(const Model::DescribeAssetMachineDetailRequest &request);
                void DescribeAssetMachineDetailAsync(const Model::DescribeAssetMachineDetailRequest& request, const DescribeAssetMachineDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetMachineDetailOutcomeCallable DescribeAssetMachineDetailCallable(const Model::DescribeAssetMachineDetailRequest& request);

                /**
                 *This API is used to obtain the resource monitoring list of the asset fingerprint page.
                 * @param req DescribeAssetMachineListRequest
                 * @return DescribeAssetMachineListOutcome
                 */
                DescribeAssetMachineListOutcome DescribeAssetMachineList(const Model::DescribeAssetMachineListRequest &request);
                void DescribeAssetMachineListAsync(const Model::DescribeAssetMachineListRequest& request, const DescribeAssetMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetMachineListOutcomeCallable DescribeAssetMachineListCallable(const Model::DescribeAssetMachineListRequest& request);

                /**
                 *This API is used to obtain top 5 host tags.
                 * @param req DescribeAssetMachineTagTopRequest
                 * @return DescribeAssetMachineTagTopOutcome
                 */
                DescribeAssetMachineTagTopOutcome DescribeAssetMachineTagTop(const Model::DescribeAssetMachineTagTopRequest &request);
                void DescribeAssetMachineTagTopAsync(const Model::DescribeAssetMachineTagTopRequest& request, const DescribeAssetMachineTagTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetMachineTagTopOutcomeCallable DescribeAssetMachineTagTopCallable(const Model::DescribeAssetMachineTagTopRequest& request);

                /**
                 *This API is used to query the list of asset management plan tasks.
                 * @param req DescribeAssetPlanTaskListRequest
                 * @return DescribeAssetPlanTaskListOutcome
                 */
                DescribeAssetPlanTaskListOutcome DescribeAssetPlanTaskList(const Model::DescribeAssetPlanTaskListRequest &request);
                void DescribeAssetPlanTaskListAsync(const Model::DescribeAssetPlanTaskListRequest& request, const DescribeAssetPlanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetPlanTaskListOutcomeCallable DescribeAssetPlanTaskListCallable(const Model::DescribeAssetPlanTaskListRequest& request);

                /**
                 *This API is used to obtain the total number of ports.
                 * @param req DescribeAssetPortCountRequest
                 * @return DescribeAssetPortCountOutcome
                 */
                DescribeAssetPortCountOutcome DescribeAssetPortCount(const Model::DescribeAssetPortCountRequest &request);
                void DescribeAssetPortCountAsync(const Model::DescribeAssetPortCountRequest& request, const DescribeAssetPortCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetPortCountOutcomeCallable DescribeAssetPortCountCallable(const Model::DescribeAssetPortCountRequest& request);

                /**
                 *This API is used to obtain the list of asset management ports.
                 * @param req DescribeAssetPortInfoListRequest
                 * @return DescribeAssetPortInfoListOutcome
                 */
                DescribeAssetPortInfoListOutcome DescribeAssetPortInfoList(const Model::DescribeAssetPortInfoListRequest &request);
                void DescribeAssetPortInfoListAsync(const Model::DescribeAssetPortInfoListRequest& request, const DescribeAssetPortInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetPortInfoListOutcomeCallable DescribeAssetPortInfoListCallable(const Model::DescribeAssetPortInfoListRequest& request);

                /**
                 *This API is used to obtain the total number of processes.
                 * @param req DescribeAssetProcessCountRequest
                 * @return DescribeAssetProcessCountOutcome
                 */
                DescribeAssetProcessCountOutcome DescribeAssetProcessCount(const Model::DescribeAssetProcessCountRequest &request);
                void DescribeAssetProcessCountAsync(const Model::DescribeAssetProcessCountRequest& request, const DescribeAssetProcessCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetProcessCountOutcomeCallable DescribeAssetProcessCountCallable(const Model::DescribeAssetProcessCountRequest& request);

                /**
                 *This API is used to obtain the list of asset management processes.
                 * @param req DescribeAssetProcessInfoListRequest
                 * @return DescribeAssetProcessInfoListOutcome
                 */
                DescribeAssetProcessInfoListOutcome DescribeAssetProcessInfoList(const Model::DescribeAssetProcessInfoListRequest &request);
                void DescribeAssetProcessInfoListAsync(const Model::DescribeAssetProcessInfoListRequest& request, const DescribeAssetProcessInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetProcessInfoListOutcomeCallable DescribeAssetProcessInfoListCallable(const Model::DescribeAssetProcessInfoListRequest& request);

                /**
                 *This API is used to obtain the latest trend of hosts.
                 * @param req DescribeAssetRecentMachineInfoRequest
                 * @return DescribeAssetRecentMachineInfoOutcome
                 */
                DescribeAssetRecentMachineInfoOutcome DescribeAssetRecentMachineInfo(const Model::DescribeAssetRecentMachineInfoRequest &request);
                void DescribeAssetRecentMachineInfoAsync(const Model::DescribeAssetRecentMachineInfoRequest& request, const DescribeAssetRecentMachineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetRecentMachineInfoOutcomeCallable DescribeAssetRecentMachineInfoCallable(const Model::DescribeAssetRecentMachineInfoRequest& request);

                /**
                 *This API is used to obtain the list of system installation packages for asset management.
                 * @param req DescribeAssetSystemPackageListRequest
                 * @return DescribeAssetSystemPackageListOutcome
                 */
                DescribeAssetSystemPackageListOutcome DescribeAssetSystemPackageList(const Model::DescribeAssetSystemPackageListRequest &request);
                void DescribeAssetSystemPackageListAsync(const Model::DescribeAssetSystemPackageListRequest& request, const DescribeAssetSystemPackageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetSystemPackageListOutcomeCallable DescribeAssetSystemPackageListCallable(const Model::DescribeAssetSystemPackageListRequest& request);

                /**
                 *This API is used to obtain the number of resources, including hosts, accounts, ports, processes, software, databases, web applications, web frameworks, web services, and web sites.
                 * @param req DescribeAssetTotalCountRequest
                 * @return DescribeAssetTotalCountOutcome
                 */
                DescribeAssetTotalCountOutcome DescribeAssetTotalCount(const Model::DescribeAssetTotalCountRequest &request);
                void DescribeAssetTotalCountAsync(const Model::DescribeAssetTotalCountRequest& request, const DescribeAssetTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetTotalCountOutcomeCallable DescribeAssetTotalCountCallable(const Model::DescribeAssetTotalCountRequest& request);

                /**
                 *This API is used to obtain Top5 resources of various types.
                 * @param req DescribeAssetTypeTopRequest
                 * @return DescribeAssetTypeTopOutcome
                 */
                DescribeAssetTypeTopOutcome DescribeAssetTypeTop(const Model::DescribeAssetTypeTopRequest &request);
                void DescribeAssetTypeTopAsync(const Model::DescribeAssetTypeTopRequest& request, const DescribeAssetTypeTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetTypeTopOutcomeCallable DescribeAssetTypeTopCallable(const Model::DescribeAssetTypeTopRequest& request);

                /**
                 *This API is used to obtain the asset fingerprint type list.
                 * @param req DescribeAssetTypesRequest
                 * @return DescribeAssetTypesOutcome
                 */
                DescribeAssetTypesOutcome DescribeAssetTypes(const Model::DescribeAssetTypesRequest &request);
                void DescribeAssetTypesAsync(const Model::DescribeAssetTypesRequest& request, const DescribeAssetTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetTypesOutcomeCallable DescribeAssetTypesCallable(const Model::DescribeAssetTypesRequest& request);

                /**
                 *This API is used to obtain the total number of accounts.
                 * @param req DescribeAssetUserCountRequest
                 * @return DescribeAssetUserCountOutcome
                 */
                DescribeAssetUserCountOutcome DescribeAssetUserCount(const Model::DescribeAssetUserCountRequest &request);
                void DescribeAssetUserCountAsync(const Model::DescribeAssetUserCountRequest& request, const DescribeAssetUserCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetUserCountOutcomeCallable DescribeAssetUserCountCallable(const Model::DescribeAssetUserCountRequest& request);

                /**
                 *This API is used to obtain host account details.
                 * @param req DescribeAssetUserInfoRequest
                 * @return DescribeAssetUserInfoOutcome
                 */
                DescribeAssetUserInfoOutcome DescribeAssetUserInfo(const Model::DescribeAssetUserInfoRequest &request);
                void DescribeAssetUserInfoAsync(const Model::DescribeAssetUserInfoRequest& request, const DescribeAssetUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetUserInfoOutcomeCallable DescribeAssetUserInfoCallable(const Model::DescribeAssetUserInfoRequest& request);

                /**
                 *This API is used to obtain the list of host account Keys.
                 * @param req DescribeAssetUserKeyListRequest
                 * @return DescribeAssetUserKeyListOutcome
                 */
                DescribeAssetUserKeyListOutcome DescribeAssetUserKeyList(const Model::DescribeAssetUserKeyListRequest &request);
                void DescribeAssetUserKeyListAsync(const Model::DescribeAssetUserKeyListRequest& request, const DescribeAssetUserKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetUserKeyListOutcomeCallable DescribeAssetUserKeyListCallable(const Model::DescribeAssetUserKeyListRequest& request);

                /**
                 *This API is used to obtain the list of accounts.
                 * @param req DescribeAssetUserListRequest
                 * @return DescribeAssetUserListOutcome
                 */
                DescribeAssetUserListOutcome DescribeAssetUserList(const Model::DescribeAssetUserListRequest &request);
                void DescribeAssetUserListAsync(const Model::DescribeAssetUserListRequest& request, const DescribeAssetUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetUserListOutcomeCallable DescribeAssetUserListCallable(const Model::DescribeAssetUserListRequest& request);

                /**
                 *This API is used to obtain the number of all web applications.
                 * @param req DescribeAssetWebAppCountRequest
                 * @return DescribeAssetWebAppCountOutcome
                 */
                DescribeAssetWebAppCountOutcome DescribeAssetWebAppCount(const Model::DescribeAssetWebAppCountRequest &request);
                void DescribeAssetWebAppCountAsync(const Model::DescribeAssetWebAppCountRequest& request, const DescribeAssetWebAppCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebAppCountOutcomeCallable DescribeAssetWebAppCountCallable(const Model::DescribeAssetWebAppCountRequest& request);

                /**
                 *This API is used to obtain the list of asset management web applications.
                 * @param req DescribeAssetWebAppListRequest
                 * @return DescribeAssetWebAppListOutcome
                 */
                DescribeAssetWebAppListOutcome DescribeAssetWebAppList(const Model::DescribeAssetWebAppListRequest &request);
                void DescribeAssetWebAppListAsync(const Model::DescribeAssetWebAppListRequest& request, const DescribeAssetWebAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebAppListOutcomeCallable DescribeAssetWebAppListCallable(const Model::DescribeAssetWebAppListRequest& request);

                /**
                 *This API is used to obtain the list of asset management Web application plugins.
                 * @param req DescribeAssetWebAppPluginListRequest
                 * @return DescribeAssetWebAppPluginListOutcome
                 */
                DescribeAssetWebAppPluginListOutcome DescribeAssetWebAppPluginList(const Model::DescribeAssetWebAppPluginListRequest &request);
                void DescribeAssetWebAppPluginListAsync(const Model::DescribeAssetWebAppPluginListRequest& request, const DescribeAssetWebAppPluginListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebAppPluginListOutcomeCallable DescribeAssetWebAppPluginListCallable(const Model::DescribeAssetWebAppPluginListRequest& request);

                /**
                 *This API is used to obtain the number of all Web frameworks.
                 * @param req DescribeAssetWebFrameCountRequest
                 * @return DescribeAssetWebFrameCountOutcome
                 */
                DescribeAssetWebFrameCountOutcome DescribeAssetWebFrameCount(const Model::DescribeAssetWebFrameCountRequest &request);
                void DescribeAssetWebFrameCountAsync(const Model::DescribeAssetWebFrameCountRequest& request, const DescribeAssetWebFrameCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebFrameCountOutcomeCallable DescribeAssetWebFrameCountCallable(const Model::DescribeAssetWebFrameCountRequest& request);

                /**
                 *This API is used to obtain the list of asset management Web frameworks.
                 * @param req DescribeAssetWebFrameListRequest
                 * @return DescribeAssetWebFrameListOutcome
                 */
                DescribeAssetWebFrameListOutcome DescribeAssetWebFrameList(const Model::DescribeAssetWebFrameListRequest &request);
                void DescribeAssetWebFrameListAsync(const Model::DescribeAssetWebFrameListRequest& request, const DescribeAssetWebFrameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebFrameListOutcomeCallable DescribeAssetWebFrameListCallable(const Model::DescribeAssetWebFrameListRequest& request);

                /**
                 *This API is used to obtain the total number of Web sites.
                 * @param req DescribeAssetWebLocationCountRequest
                 * @return DescribeAssetWebLocationCountOutcome
                 */
                DescribeAssetWebLocationCountOutcome DescribeAssetWebLocationCount(const Model::DescribeAssetWebLocationCountRequest &request);
                void DescribeAssetWebLocationCountAsync(const Model::DescribeAssetWebLocationCountRequest& request, const DescribeAssetWebLocationCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebLocationCountOutcomeCallable DescribeAssetWebLocationCountCallable(const Model::DescribeAssetWebLocationCountRequest& request);

                /**
                 *This API is used to obtain the Web site details.
                 * @param req DescribeAssetWebLocationInfoRequest
                 * @return DescribeAssetWebLocationInfoOutcome
                 */
                DescribeAssetWebLocationInfoOutcome DescribeAssetWebLocationInfo(const Model::DescribeAssetWebLocationInfoRequest &request);
                void DescribeAssetWebLocationInfoAsync(const Model::DescribeAssetWebLocationInfoRequest& request, const DescribeAssetWebLocationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebLocationInfoOutcomeCallable DescribeAssetWebLocationInfoCallable(const Model::DescribeAssetWebLocationInfoRequest& request);

                /**
                 *This API is used to obtain the list of Web sites.
                 * @param req DescribeAssetWebLocationListRequest
                 * @return DescribeAssetWebLocationListOutcome
                 */
                DescribeAssetWebLocationListOutcome DescribeAssetWebLocationList(const Model::DescribeAssetWebLocationListRequest &request);
                void DescribeAssetWebLocationListAsync(const Model::DescribeAssetWebLocationListRequest& request, const DescribeAssetWebLocationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebLocationListOutcomeCallable DescribeAssetWebLocationListCallable(const Model::DescribeAssetWebLocationListRequest& request);

                /**
                 *This API is used to obtain the list of Web sites' virtual directories.
                 * @param req DescribeAssetWebLocationPathListRequest
                 * @return DescribeAssetWebLocationPathListOutcome
                 */
                DescribeAssetWebLocationPathListOutcome DescribeAssetWebLocationPathList(const Model::DescribeAssetWebLocationPathListRequest &request);
                void DescribeAssetWebLocationPathListAsync(const Model::DescribeAssetWebLocationPathListRequest& request, const DescribeAssetWebLocationPathListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebLocationPathListOutcomeCallable DescribeAssetWebLocationPathListCallable(const Model::DescribeAssetWebLocationPathListRequest& request);

                /**
                 *This API is used to obtain the number of all web services.
                 * @param req DescribeAssetWebServiceCountRequest
                 * @return DescribeAssetWebServiceCountOutcome
                 */
                DescribeAssetWebServiceCountOutcome DescribeAssetWebServiceCount(const Model::DescribeAssetWebServiceCountRequest &request);
                void DescribeAssetWebServiceCountAsync(const Model::DescribeAssetWebServiceCountRequest& request, const DescribeAssetWebServiceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebServiceCountOutcomeCallable DescribeAssetWebServiceCountCallable(const Model::DescribeAssetWebServiceCountRequest& request);

                /**
                 *This API is used to query the list of asset management Web services.
                 * @param req DescribeAssetWebServiceInfoListRequest
                 * @return DescribeAssetWebServiceInfoListOutcome
                 */
                DescribeAssetWebServiceInfoListOutcome DescribeAssetWebServiceInfoList(const Model::DescribeAssetWebServiceInfoListRequest &request);
                void DescribeAssetWebServiceInfoListAsync(const Model::DescribeAssetWebServiceInfoListRequest& request, const DescribeAssetWebServiceInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebServiceInfoListOutcomeCallable DescribeAssetWebServiceInfoListCallable(const Model::DescribeAssetWebServiceInfoListRequest& request);

                /**
                 *This API is used to obtain the list of processes associated with Web services.
                 * @param req DescribeAssetWebServiceProcessListRequest
                 * @return DescribeAssetWebServiceProcessListOutcome
                 */
                DescribeAssetWebServiceProcessListOutcome DescribeAssetWebServiceProcessList(const Model::DescribeAssetWebServiceProcessListRequest &request);
                void DescribeAssetWebServiceProcessListAsync(const Model::DescribeAssetWebServiceProcessListRequest& request, const DescribeAssetWebServiceProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetWebServiceProcessListOutcomeCallable DescribeAssetWebServiceProcessListCallable(const Model::DescribeAssetWebServiceProcessListRequest& request);

                /**
                 *This API is used to obtain network attack details.
                 * @param req DescribeAttackEventInfoRequest
                 * @return DescribeAttackEventInfoOutcome
                 */
                DescribeAttackEventInfoOutcome DescribeAttackEventInfo(const Model::DescribeAttackEventInfoRequest &request);
                void DescribeAttackEventInfoAsync(const Model::DescribeAttackEventInfoRequest& request, const DescribeAttackEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackEventInfoOutcomeCallable DescribeAttackEventInfoCallable(const Model::DescribeAttackEventInfoRequest& request);

                /**
                 *This API is used to display the list of network attack detection events in pagination.
                 * @param req DescribeAttackEventsRequest
                 * @return DescribeAttackEventsOutcome
                 */
                DescribeAttackEventsOutcome DescribeAttackEvents(const Model::DescribeAttackEventsRequest &request);
                void DescribeAttackEventsAsync(const Model::DescribeAttackEventsRequest& request, const DescribeAttackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackEventsOutcomeCallable DescribeAttackEventsCallable(const Model::DescribeAttackEventsRequest& request);

                /**
                 *DescribeAttackEvents 代替

This API is used to display the list of network attack logs in pagination.
                 * @param req DescribeAttackLogsRequest
                 * @return DescribeAttackLogsOutcome
                 */
                DescribeAttackLogsOutcome DescribeAttackLogs(const Model::DescribeAttackLogsRequest &request);
                void DescribeAttackLogsAsync(const Model::DescribeAttackLogsRequest& request, const DescribeAttackLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackLogsOutcomeCallable DescribeAttackLogsCallable(const Model::DescribeAttackLogsRequest& request);

                /**
                 *已废弃

This API is used to backtrack attacks.
                 * @param req DescribeAttackSourceRequest
                 * @return DescribeAttackSourceOutcome
                 */
                DescribeAttackSourceOutcome DescribeAttackSource(const Model::DescribeAttackSourceRequest &request);
                void DescribeAttackSourceAsync(const Model::DescribeAttackSourceRequest& request, const DescribeAttackSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackSourceOutcomeCallable DescribeAttackSourceCallable(const Model::DescribeAttackSourceRequest& request);

                /**
                 *已废弃

This API is used to query attack backtracking events.
                 * @param req DescribeAttackSourceEventsRequest
                 * @return DescribeAttackSourceEventsOutcome
                 */
                DescribeAttackSourceEventsOutcome DescribeAttackSourceEvents(const Model::DescribeAttackSourceEventsRequest &request);
                void DescribeAttackSourceEventsAsync(const Model::DescribeAttackSourceEventsRequest& request, const DescribeAttackSourceEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackSourceEventsOutcomeCallable DescribeAttackSourceEventsCallable(const Model::DescribeAttackSourceEventsRequest& request);

                /**
                 *This API is used to obtain the statistics of network attack data.
                 * @param req DescribeAttackStatisticsRequest
                 * @return DescribeAttackStatisticsOutcome
                 */
                DescribeAttackStatisticsOutcome DescribeAttackStatistics(const Model::DescribeAttackStatisticsRequest &request);
                void DescribeAttackStatisticsAsync(const Model::DescribeAttackStatisticsRequest& request, const DescribeAttackStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackStatisticsOutcomeCallable DescribeAttackStatisticsCallable(const Model::DescribeAttackStatisticsRequest& request);

                /**
                 *This API is used to obtain the list of Top 5 network attacks.
                 * @param req DescribeAttackTopRequest
                 * @return DescribeAttackTopOutcome
                 */
                DescribeAttackTopOutcome DescribeAttackTop(const Model::DescribeAttackTopRequest &request);
                void DescribeAttackTopAsync(const Model::DescribeAttackTopRequest& request, const DescribeAttackTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackTopOutcomeCallable DescribeAttackTopCallable(const Model::DescribeAttackTopRequest& request);

                /**
                 *This API is used to obtain the network attack trend data.
                 * @param req DescribeAttackTrendsRequest
                 * @return DescribeAttackTrendsOutcome
                 */
                DescribeAttackTrendsOutcome DescribeAttackTrends(const Model::DescribeAttackTrendsRequest &request);
                void DescribeAttackTrendsAsync(const Model::DescribeAttackTrendsRequest& request, const DescribeAttackTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackTrendsOutcomeCallable DescribeAttackTrendsCallable(const Model::DescribeAttackTrendsRequest& request);

                /**
                 *This API is used to obtain the list of network attack threat types.
                 * @param req DescribeAttackVulTypeListRequest
                 * @return DescribeAttackVulTypeListOutcome
                 */
                DescribeAttackVulTypeListOutcome DescribeAttackVulTypeList(const Model::DescribeAttackVulTypeListRequest &request);
                void DescribeAttackVulTypeListAsync(const Model::DescribeAttackVulTypeListRequest& request, const DescribeAttackVulTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackVulTypeListOutcomeCallable DescribeAttackVulTypeListCallable(const Model::DescribeAttackVulTypeListRequest& request);

                /**
                 *This API is used to obtain available order details.
                 * @param req DescribeAvailableExpertServiceDetailRequest
                 * @return DescribeAvailableExpertServiceDetailOutcome
                 */
                DescribeAvailableExpertServiceDetailOutcome DescribeAvailableExpertServiceDetail(const Model::DescribeAvailableExpertServiceDetailRequest &request);
                void DescribeAvailableExpertServiceDetailAsync(const Model::DescribeAvailableExpertServiceDetailRequest& request, const DescribeAvailableExpertServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailableExpertServiceDetailOutcomeCallable DescribeAvailableExpertServiceDetailCallable(const Model::DescribeAvailableExpertServiceDetailRequest& request);

                /**
                 *This API is used to obtain the brute-force blocking mode.
                 * @param req DescribeBanModeRequest
                 * @return DescribeBanModeOutcome
                 */
                DescribeBanModeOutcome DescribeBanMode(const Model::DescribeBanModeRequest &request);
                void DescribeBanModeAsync(const Model::DescribeBanModeRequest& request, const DescribeBanModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBanModeOutcomeCallable DescribeBanModeCallable(const Model::DescribeBanModeRequest& request);

                /**
                 *This API is used to obtain the block region.
                 * @param req DescribeBanRegionsRequest
                 * @return DescribeBanRegionsOutcome
                 */
                DescribeBanRegionsOutcome DescribeBanRegions(const Model::DescribeBanRegionsRequest &request);
                void DescribeBanRegionsAsync(const Model::DescribeBanRegionsRequest& request, const DescribeBanRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBanRegionsOutcomeCallable DescribeBanRegionsCallable(const Model::DescribeBanRegionsRequest& request);

                /**
                 *This API is used to obtain the block button status.
                 * @param req DescribeBanStatusRequest
                 * @return DescribeBanStatusOutcome
                 */
                DescribeBanStatusOutcome DescribeBanStatus(const Model::DescribeBanStatusRequest &request);
                void DescribeBanStatusAsync(const Model::DescribeBanStatusRequest& request, const DescribeBanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBanStatusOutcomeCallable DescribeBanStatusCallable(const Model::DescribeBanStatusRequest& request);

                /**
                 *This API is used to obtain the blocking allowlist list.
                 * @param req DescribeBanWhiteListRequest
                 * @return DescribeBanWhiteListOutcome
                 */
                DescribeBanWhiteListOutcome DescribeBanWhiteList(const Model::DescribeBanWhiteListRequest &request);
                void DescribeBanWhiteListAsync(const Model::DescribeBanWhiteListRequest& request, const DescribeBanWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBanWhiteListOutcomeCallable DescribeBanWhiteListCallable(const Model::DescribeBanWhiteListRequest& request);

                /**
                 *This API is used to query the list of baseline basic information.
                 * @param req DescribeBaselineBasicInfoRequest
                 * @return DescribeBaselineBasicInfoOutcome
                 */
                DescribeBaselineBasicInfoOutcome DescribeBaselineBasicInfo(const Model::DescribeBaselineBasicInfoRequest &request);
                void DescribeBaselineBasicInfoAsync(const Model::DescribeBaselineBasicInfoRequest& request, const DescribeBaselineBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineBasicInfoOutcomeCallable DescribeBaselineBasicInfoCallable(const Model::DescribeBaselineBasicInfoRequest& request);

                /**
                 *This API is used to query the list information of default policies of the baseline.
                 * @param req DescribeBaselineDefaultStrategyListRequest
                 * @return DescribeBaselineDefaultStrategyListOutcome
                 */
                DescribeBaselineDefaultStrategyListOutcome DescribeBaselineDefaultStrategyList(const Model::DescribeBaselineDefaultStrategyListRequest &request);
                void DescribeBaselineDefaultStrategyListAsync(const Model::DescribeBaselineDefaultStrategyListRequest& request, const DescribeBaselineDefaultStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineDefaultStrategyListOutcomeCallable DescribeBaselineDefaultStrategyListCallable(const Model::DescribeBaselineDefaultStrategyListRequest& request);

                /**
                 *This API is used to query baseline details by baseline ID.
                 * @param req DescribeBaselineDetailRequest
                 * @return DescribeBaselineDetailOutcome
                 */
                DescribeBaselineDetailOutcome DescribeBaselineDetail(const Model::DescribeBaselineDetailRequest &request);
                void DescribeBaselineDetailAsync(const Model::DescribeBaselineDetailRequest& request, const DescribeBaselineDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineDetailOutcomeCallable DescribeBaselineDetailCallable(const Model::DescribeBaselineDetailRequest& request);

                /**
                 *This API is used to query the list of hosts affected by a baseline based on baseline ID.
                 * @param req DescribeBaselineEffectHostListRequest
                 * @return DescribeBaselineEffectHostListOutcome
                 */
                DescribeBaselineEffectHostListOutcome DescribeBaselineEffectHostList(const Model::DescribeBaselineEffectHostListRequest &request);
                void DescribeBaselineEffectHostListAsync(const Model::DescribeBaselineEffectHostListRequest& request, const DescribeBaselineEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineEffectHostListOutcomeCallable DescribeBaselineEffectHostListCallable(const Model::DescribeBaselineEffectHostListRequest& request);

                /**
                 *This API is used to obtain the list of hosts for baseline detection.
                 * @param req DescribeBaselineHostDetectListRequest
                 * @return DescribeBaselineHostDetectListOutcome
                 */
                DescribeBaselineHostDetectListOutcome DescribeBaselineHostDetectList(const Model::DescribeBaselineHostDetectListRequest &request);
                void DescribeBaselineHostDetectListAsync(const Model::DescribeBaselineHostDetectListRequest& request, const DescribeBaselineHostDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineHostDetectListOutcomeCallable DescribeBaselineHostDetectListCallable(const Model::DescribeBaselineHostDetectListRequest& request);

                /**
                 *This API is used to return Top N risky servers.
                 * @param req DescribeBaselineHostTopRequest
                 * @return DescribeBaselineHostTopOutcome
                 */
                DescribeBaselineHostTopOutcome DescribeBaselineHostTop(const Model::DescribeBaselineHostTopRequest &request);
                void DescribeBaselineHostTopAsync(const Model::DescribeBaselineHostTopRequest& request, const DescribeBaselineHostTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineHostTopOutcomeCallable DescribeBaselineHostTopCallable(const Model::DescribeBaselineHostTopRequest& request);

                /**
                 *This API is used to obtain the list of baseline detection items.
                 * @param req DescribeBaselineItemDetectListRequest
                 * @return DescribeBaselineItemDetectListOutcome
                 */
                DescribeBaselineItemDetectListOutcome DescribeBaselineItemDetectList(const Model::DescribeBaselineItemDetectListRequest &request);
                void DescribeBaselineItemDetectListAsync(const Model::DescribeBaselineItemDetectListRequest& request, const DescribeBaselineItemDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineItemDetectListOutcomeCallable DescribeBaselineItemDetectListCallable(const Model::DescribeBaselineItemDetectListRequest& request);

                /**
                 *This API is used to obtain the list of check results on baseline check items.
                 * @param req DescribeBaselineItemListRequest
                 * @return DescribeBaselineItemListOutcome
                 */
                DescribeBaselineItemListOutcome DescribeBaselineItemList(const Model::DescribeBaselineItemListRequest &request);
                void DescribeBaselineItemListAsync(const Model::DescribeBaselineItemListRequest& request, const DescribeBaselineItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineItemListOutcomeCallable DescribeBaselineItemListCallable(const Model::DescribeBaselineItemListRequest& request);

                /**
                 *This API is used to query the information of the baseline list.
                 * @param req DescribeBaselineListRequest
                 * @return DescribeBaselineListOutcome
                 */
                DescribeBaselineListOutcome DescribeBaselineList(const Model::DescribeBaselineListRequest &request);
                void DescribeBaselineListAsync(const Model::DescribeBaselineListRequest& request, const DescribeBaselineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineListOutcomeCallable DescribeBaselineListCallable(const Model::DescribeBaselineListRequest& request);

                /**
                 *This API is used to obtain the list of baseline policies.
                 * @param req DescribeBaselinePolicyListRequest
                 * @return DescribeBaselinePolicyListOutcome
                 */
                DescribeBaselinePolicyListOutcome DescribeBaselinePolicyList(const Model::DescribeBaselinePolicyListRequest &request);
                void DescribeBaselinePolicyListAsync(const Model::DescribeBaselinePolicyListRequest& request, const DescribeBaselinePolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselinePolicyListOutcomeCallable DescribeBaselinePolicyListCallable(const Model::DescribeBaselinePolicyListRequest& request);

                /**
                 *This API is used to query the information on corresponding check items based on baseline ID.
                 * @param req DescribeBaselineRuleRequest
                 * @return DescribeBaselineRuleOutcome
                 */
                DescribeBaselineRuleOutcome DescribeBaselineRule(const Model::DescribeBaselineRuleRequest &request);
                void DescribeBaselineRuleAsync(const Model::DescribeBaselineRuleRequest& request, const DescribeBaselineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineRuleOutcomeCallable DescribeBaselineRuleCallable(const Model::DescribeBaselineRuleRequest& request);

                /**
                 *This API is used to query the baseline detection progress by task ID.
                 * @param req DescribeBaselineScanScheduleRequest
                 * @return DescribeBaselineScanScheduleOutcome
                 */
                DescribeBaselineScanScheduleOutcome DescribeBaselineScanSchedule(const Model::DescribeBaselineScanScheduleRequest &request);
                void DescribeBaselineScanScheduleAsync(const Model::DescribeBaselineScanScheduleRequest& request, const DescribeBaselineScanScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineScanScheduleOutcomeCallable DescribeBaselineScanScheduleCallable(const Model::DescribeBaselineScanScheduleRequest& request);

                /**
                 *This API is used to query policy details by baseline policy ID.
                 * @param req DescribeBaselineStrategyDetailRequest
                 * @return DescribeBaselineStrategyDetailOutcome
                 */
                DescribeBaselineStrategyDetailOutcome DescribeBaselineStrategyDetail(const Model::DescribeBaselineStrategyDetailRequest &request);
                void DescribeBaselineStrategyDetailAsync(const Model::DescribeBaselineStrategyDetailRequest& request, const DescribeBaselineStrategyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineStrategyDetailOutcomeCallable DescribeBaselineStrategyDetailCallable(const Model::DescribeBaselineStrategyDetailRequest& request);

                /**
                 *This API is used to query the information of baseline policies under the same user.
                 * @param req DescribeBaselineStrategyListRequest
                 * @return DescribeBaselineStrategyListOutcome
                 */
                DescribeBaselineStrategyListOutcome DescribeBaselineStrategyList(const Model::DescribeBaselineStrategyListRequest &request);
                void DescribeBaselineStrategyListAsync(const Model::DescribeBaselineStrategyListRequest& request, const DescribeBaselineStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineStrategyListOutcomeCallable DescribeBaselineStrategyListCallable(const Model::DescribeBaselineStrategyListRequest& request);

                /**
                 *This API is used to query TOP baseline detection items based on policy IDs.
                 * @param req DescribeBaselineTopRequest
                 * @return DescribeBaselineTopOutcome
                 */
                DescribeBaselineTopOutcome DescribeBaselineTop(const Model::DescribeBaselineTopRequest &request);
                void DescribeBaselineTopAsync(const Model::DescribeBaselineTopRequest& request, const DescribeBaselineTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineTopOutcomeCallable DescribeBaselineTopCallable(const Model::DescribeBaselineTopRequest& request);

                /**
                 *This API is used to obtain the list of baseline weak passwords.
                 * @param req DescribeBaselineWeakPasswordListRequest
                 * @return DescribeBaselineWeakPasswordListOutcome
                 */
                DescribeBaselineWeakPasswordListOutcome DescribeBaselineWeakPasswordList(const Model::DescribeBaselineWeakPasswordListRequest &request);
                void DescribeBaselineWeakPasswordListAsync(const Model::DescribeBaselineWeakPasswordListRequest& request, const DescribeBaselineWeakPasswordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineWeakPasswordListOutcomeCallable DescribeBaselineWeakPasswordListCallable(const Model::DescribeBaselineWeakPasswordListRequest& request);

                /**
                 *This API is used to obtain the high-risk command list.
                 * @param req DescribeBashEventsRequest
                 * @return DescribeBashEventsOutcome
                 */
                DescribeBashEventsOutcome DescribeBashEvents(const Model::DescribeBashEventsRequest &request);
                void DescribeBashEventsAsync(const Model::DescribeBashEventsRequest& request, const DescribeBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBashEventsOutcomeCallable DescribeBashEventsCallable(const Model::DescribeBashEventsRequest& request);

                /**
                 *This API is used to query high-risk command event details.
                 * @param req DescribeBashEventsInfoRequest
                 * @return DescribeBashEventsInfoOutcome
                 */
                DescribeBashEventsInfoOutcome DescribeBashEventsInfo(const Model::DescribeBashEventsInfoRequest &request);
                void DescribeBashEventsInfoAsync(const Model::DescribeBashEventsInfoRequest& request, const DescribeBashEventsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBashEventsInfoOutcomeCallable DescribeBashEventsInfoCallable(const Model::DescribeBashEventsInfoRequest& request);

                /**
                 *This API is used to query high-risk command event details (new).
                 * @param req DescribeBashEventsInfoNewRequest
                 * @return DescribeBashEventsInfoNewOutcome
                 */
                DescribeBashEventsInfoNewOutcome DescribeBashEventsInfoNew(const Model::DescribeBashEventsInfoNewRequest &request);
                void DescribeBashEventsInfoNewAsync(const Model::DescribeBashEventsInfoNewRequest& request, const DescribeBashEventsInfoNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBashEventsInfoNewOutcomeCallable DescribeBashEventsInfoNewCallable(const Model::DescribeBashEventsInfoNewRequest& request);

                /**
                 *This API is used to obtain the list of high-risk commands (new).
                 * @param req DescribeBashEventsNewRequest
                 * @return DescribeBashEventsNewOutcome
                 */
                DescribeBashEventsNewOutcome DescribeBashEventsNew(const Model::DescribeBashEventsNewRequest &request);
                void DescribeBashEventsNewAsync(const Model::DescribeBashEventsNewRequest& request, const DescribeBashEventsNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBashEventsNewOutcomeCallable DescribeBashEventsNewCallable(const Model::DescribeBashEventsNewRequest& request);

                /**
                 *This API is used to obtain the list of high-risk command policies.
                 * @param req DescribeBashPoliciesRequest
                 * @return DescribeBashPoliciesOutcome
                 */
                DescribeBashPoliciesOutcome DescribeBashPolicies(const Model::DescribeBashPoliciesRequest &request);
                void DescribeBashPoliciesAsync(const Model::DescribeBashPoliciesRequest& request, const DescribeBashPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBashPoliciesOutcomeCallable DescribeBashPoliciesCallable(const Model::DescribeBashPoliciesRequest& request);

                /**
                 *This API is used to obtain the list of high-risk command rules.
                 * @param req DescribeBashRulesRequest
                 * @return DescribeBashRulesOutcome
                 */
                DescribeBashRulesOutcome DescribeBashRules(const Model::DescribeBashRulesRequest &request);
                void DescribeBashRulesAsync(const Model::DescribeBashRulesRequest& request, const DescribeBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBashRulesOutcomeCallable DescribeBashRulesCallable(const Model::DescribeBashRulesRequest& request);

                /**
                 *This API is used to obtain the list of password cracking.
                 * @param req DescribeBruteAttackListRequest
                 * @return DescribeBruteAttackListOutcome
                 */
                DescribeBruteAttackListOutcome DescribeBruteAttackList(const Model::DescribeBruteAttackListRequest &request);
                void DescribeBruteAttackListAsync(const Model::DescribeBruteAttackListRequest& request, const DescribeBruteAttackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBruteAttackListOutcomeCallable DescribeBruteAttackListCallable(const Model::DescribeBruteAttackListRequest& request);

                /**
                 *This API is used to obtain brute force cracking rules.
                 * @param req DescribeBruteAttackRulesRequest
                 * @return DescribeBruteAttackRulesOutcome
                 */
                DescribeBruteAttackRulesOutcome DescribeBruteAttackRules(const Model::DescribeBruteAttackRulesRequest &request);
                void DescribeBruteAttackRulesAsync(const Model::DescribeBruteAttackRulesRequest& request, const DescribeBruteAttackRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBruteAttackRulesOutcomeCallable DescribeBruteAttackRulesCallable(const Model::DescribeBruteAttackRulesRequest& request);

                /**
                 *This API is used to query the fixable host information.
                 * @param req DescribeCanFixVulMachineRequest
                 * @return DescribeCanFixVulMachineOutcome
                 */
                DescribeCanFixVulMachineOutcome DescribeCanFixVulMachine(const Model::DescribeCanFixVulMachineRequest &request);
                void DescribeCanFixVulMachineAsync(const Model::DescribeCanFixVulMachineRequest& request, const DescribeCanFixVulMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCanFixVulMachineOutcomeCallable DescribeCanFixVulMachineCallable(const Model::DescribeCanFixVulMachineRequest& request);

                /**
                 *This API is used to obtain hosts where Trojans cannot be isolated.
                 * @param req DescribeCanNotSeparateMachineRequest
                 * @return DescribeCanNotSeparateMachineOutcome
                 */
                DescribeCanNotSeparateMachineOutcome DescribeCanNotSeparateMachine(const Model::DescribeCanNotSeparateMachineRequest &request);
                void DescribeCanNotSeparateMachineAsync(const Model::DescribeCanNotSeparateMachineRequest& request, const DescribeCanNotSeparateMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCanNotSeparateMachineOutcomeCallable DescribeCanNotSeparateMachineCallable(const Model::DescribeCanNotSeparateMachineRequest& request);

                /**
                 *This API is used to obtain client exception events.
                 * @param req DescribeClientExceptionRequest
                 * @return DescribeClientExceptionOutcome
                 */
                DescribeClientExceptionOutcome DescribeClientException(const Model::DescribeClientExceptionRequest &request);
                void DescribeClientExceptionAsync(const Model::DescribeClientExceptionRequest& request, const DescribeClientExceptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClientExceptionOutcomeCallable DescribeClientExceptionCallable(const Model::DescribeClientExceptionRequest& request);

                /**
                 *接口已无效

This API is used to obtain the data of the component statistics list.
                 * @param req DescribeComponentStatisticsRequest
                 * @return DescribeComponentStatisticsOutcome
                 */
                DescribeComponentStatisticsOutcome DescribeComponentStatistics(const Model::DescribeComponentStatisticsRequest &request);
                void DescribeComponentStatisticsAsync(const Model::DescribeComponentStatisticsRequest& request, const DescribeComponentStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComponentStatisticsOutcomeCallable DescribeComponentStatisticsCallable(const Model::DescribeComponentStatisticsRequest& request);

                /**
                 *This API is used to obtain vulnerability defense event details.
                 * @param req DescribeDefenceEventDetailRequest
                 * @return DescribeDefenceEventDetailOutcome
                 */
                DescribeDefenceEventDetailOutcome DescribeDefenceEventDetail(const Model::DescribeDefenceEventDetailRequest &request);
                void DescribeDefenceEventDetailAsync(const Model::DescribeDefenceEventDetailRequest& request, const DescribeDefenceEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefenceEventDetailOutcomeCallable DescribeDefenceEventDetailCallable(const Model::DescribeDefenceEventDetailRequest& request);

                /**
                 *This API is used to obtain DC agent installation command, including the token.
                 * @param req DescribeDirectConnectInstallCommandRequest
                 * @return DescribeDirectConnectInstallCommandOutcome
                 */
                DescribeDirectConnectInstallCommandOutcome DescribeDirectConnectInstallCommand(const Model::DescribeDirectConnectInstallCommandRequest &request);
                void DescribeDirectConnectInstallCommandAsync(const Model::DescribeDirectConnectInstallCommandRequest& request, const DescribeDirectConnectInstallCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDirectConnectInstallCommandOutcomeCallable DescribeDirectConnectInstallCommandCallable(const Model::DescribeDirectConnectInstallCommandRequest& request);

                /**
                 *This API is used to obtain the aggregation result of the ES field.
                 * @param req DescribeESAggregationsRequest
                 * @return DescribeESAggregationsOutcome
                 */
                DescribeESAggregationsOutcome DescribeESAggregations(const Model::DescribeESAggregationsRequest &request);
                void DescribeESAggregationsAsync(const Model::DescribeESAggregationsRequest& request, const DescribeESAggregationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeESAggregationsOutcomeCallable DescribeESAggregationsCallable(const Model::DescribeESAggregationsRequest& request);

                /**
                 *This API is used to obtain the emergency response list.
                 * @param req DescribeEmergencyResponseListRequest
                 * @return DescribeEmergencyResponseListOutcome
                 */
                DescribeEmergencyResponseListOutcome DescribeEmergencyResponseList(const Model::DescribeEmergencyResponseListRequest &request);
                void DescribeEmergencyResponseListAsync(const Model::DescribeEmergencyResponseListRequest& request, const DescribeEmergencyResponseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEmergencyResponseListOutcomeCallable DescribeEmergencyResponseListCallable(const Model::DescribeEmergencyResponseListRequest& request);

                /**
                 *This API is used to obtain the list of emergency vulnerabilities.
                 * @param req DescribeEmergencyVulListRequest
                 * @return DescribeEmergencyVulListOutcome
                 */
                DescribeEmergencyVulListOutcome DescribeEmergencyVulList(const Model::DescribeEmergencyVulListRequest &request);
                void DescribeEmergencyVulListAsync(const Model::DescribeEmergencyVulListRequest& request, const DescribeEmergencyVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEmergencyVulListOutcomeCallable DescribeEmergencyVulListCallable(const Model::DescribeEmergencyVulListRequest& request);

                /**
                 *This API is used to query alarm event details based on event table names and IDs.
                 * @param req DescribeEventByTableRequest
                 * @return DescribeEventByTableOutcome
                 */
                DescribeEventByTableOutcome DescribeEventByTable(const Model::DescribeEventByTableRequest &request);
                void DescribeEventByTableAsync(const Model::DescribeEventByTableRequest& request, const DescribeEventByTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventByTableOutcomeCallable DescribeEventByTableCallable(const Model::DescribeEventByTableRequest& request);

                /**
                 *This API is used to obtain the security manager list.
                 * @param req DescribeExpertServiceListRequest
                 * @return DescribeExpertServiceListOutcome
                 */
                DescribeExpertServiceListOutcome DescribeExpertServiceList(const Model::DescribeExpertServiceListRequest &request);
                void DescribeExpertServiceListAsync(const Model::DescribeExpertServiceListRequest& request, const DescribeExpertServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExpertServiceListOutcomeCallable DescribeExpertServiceListCallable(const Model::DescribeExpertServiceListRequest& request);

                /**
                 *This API is used to obtain the expert service order list.
                 * @param req DescribeExpertServiceOrderListRequest
                 * @return DescribeExpertServiceOrderListOutcome
                 */
                DescribeExpertServiceOrderListOutcome DescribeExpertServiceOrderList(const Model::DescribeExpertServiceOrderListRequest &request);
                void DescribeExpertServiceOrderListAsync(const Model::DescribeExpertServiceOrderListRequest& request, const DescribeExpertServiceOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExpertServiceOrderListOutcomeCallable DescribeExpertServiceOrderListCallable(const Model::DescribeExpertServiceOrderListRequest& request);

                /**
                 *This API is used to export the list of hosts in a specific region.
                 * @param req DescribeExportMachinesRequest
                 * @return DescribeExportMachinesOutcome
                 */
                DescribeExportMachinesOutcome DescribeExportMachines(const Model::DescribeExportMachinesRequest &request);
                void DescribeExportMachinesAsync(const Model::DescribeExportMachinesRequest& request, const DescribeExportMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExportMachinesOutcomeCallable DescribeExportMachinesCallable(const Model::DescribeExportMachinesRequest& request);

                /**
                 *This API is used to quickly analyze and count logs.
                 * @param req DescribeFastAnalysisRequest
                 * @return DescribeFastAnalysisOutcome
                 */
                DescribeFastAnalysisOutcome DescribeFastAnalysis(const Model::DescribeFastAnalysisRequest &request);
                void DescribeFastAnalysisAsync(const Model::DescribeFastAnalysisRequest& request, const DescribeFastAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFastAnalysisOutcomeCallable DescribeFastAnalysisCallable(const Model::DescribeFastAnalysisRequest& request);

                /**
                 *This API is used to view the rule details API when an event occurs.
                 * @param req DescribeFileTamperEventRuleInfoRequest
                 * @return DescribeFileTamperEventRuleInfoOutcome
                 */
                DescribeFileTamperEventRuleInfoOutcome DescribeFileTamperEventRuleInfo(const Model::DescribeFileTamperEventRuleInfoRequest &request);
                void DescribeFileTamperEventRuleInfoAsync(const Model::DescribeFileTamperEventRuleInfoRequest& request, const DescribeFileTamperEventRuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileTamperEventRuleInfoOutcomeCallable DescribeFileTamperEventRuleInfoCallable(const Model::DescribeFileTamperEventRuleInfoRequest& request);

                /**
                 *This API is used to obtain the list of core file monitoring events.
                 * @param req DescribeFileTamperEventsRequest
                 * @return DescribeFileTamperEventsOutcome
                 */
                DescribeFileTamperEventsOutcome DescribeFileTamperEvents(const Model::DescribeFileTamperEventsRequest &request);
                void DescribeFileTamperEventsAsync(const Model::DescribeFileTamperEventsRequest& request, const DescribeFileTamperEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileTamperEventsOutcomeCallable DescribeFileTamperEventsCallable(const Model::DescribeFileTamperEventsRequest& request);

                /**
                 *This API is used to query the number of rules for monitoring files associated with a host.
                 * @param req DescribeFileTamperRuleCountRequest
                 * @return DescribeFileTamperRuleCountOutcome
                 */
                DescribeFileTamperRuleCountOutcome DescribeFileTamperRuleCount(const Model::DescribeFileTamperRuleCountRequest &request);
                void DescribeFileTamperRuleCountAsync(const Model::DescribeFileTamperRuleCountRequest& request, const DescribeFileTamperRuleCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileTamperRuleCountOutcomeCallable DescribeFileTamperRuleCountCallable(const Model::DescribeFileTamperRuleCountRequest& request);

                /**
                 *This API is used to query details of a monitoring rule.
                 * @param req DescribeFileTamperRuleInfoRequest
                 * @return DescribeFileTamperRuleInfoOutcome
                 */
                DescribeFileTamperRuleInfoOutcome DescribeFileTamperRuleInfo(const Model::DescribeFileTamperRuleInfoRequest &request);
                void DescribeFileTamperRuleInfoAsync(const Model::DescribeFileTamperRuleInfoRequest& request, const DescribeFileTamperRuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileTamperRuleInfoOutcomeCallable DescribeFileTamperRuleInfoCallable(const Model::DescribeFileTamperRuleInfoRequest& request);

                /**
                 *This API is used to obtain the list of core file monitoring rules.
                 * @param req DescribeFileTamperRulesRequest
                 * @return DescribeFileTamperRulesOutcome
                 */
                DescribeFileTamperRulesOutcome DescribeFileTamperRules(const Model::DescribeFileTamperRulesRequest &request);
                void DescribeFileTamperRulesAsync(const Model::DescribeFileTamperRulesRequest& request, const DescribeFileTamperRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileTamperRulesOutcomeCallable DescribeFileTamperRulesCallable(const Model::DescribeFileTamperRulesRequest& request);

                /**
                 *This API is used to obtain the statistics data of hosts.
                 * @param req DescribeGeneralStatRequest
                 * @return DescribeGeneralStatOutcome
                 */
                DescribeGeneralStatOutcome DescribeGeneralStat(const Model::DescribeGeneralStatRequest &request);
                void DescribeGeneralStatAsync(const Model::DescribeGeneralStatRequest& request, const DescribeGeneralStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGeneralStatOutcomeCallable DescribeGeneralStatCallable(const Model::DescribeGeneralStatRequest& request);

                /**
                 *This API is used to obtain the data of the account change history list.
                 * @param req DescribeHistoryAccountsRequest
                 * @return DescribeHistoryAccountsOutcome
                 */
                DescribeHistoryAccountsOutcome DescribeHistoryAccounts(const Model::DescribeHistoryAccountsRequest &request);
                void DescribeHistoryAccountsAsync(const Model::DescribeHistoryAccountsRequest& request, const DescribeHistoryAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHistoryAccountsOutcomeCallable DescribeHistoryAccountsCallable(const Model::DescribeHistoryAccountsRequest& request);

                /**
                 *This API is used to query the log retrieval service information.
                 * @param req DescribeHistoryServiceRequest
                 * @return DescribeHistoryServiceOutcome
                 */
                DescribeHistoryServiceOutcome DescribeHistoryService(const Model::DescribeHistoryServiceRequest &request);
                void DescribeHistoryServiceAsync(const Model::DescribeHistoryServiceRequest& request, const DescribeHistoryServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHistoryServiceOutcomeCallable DescribeHistoryServiceCallable(const Model::DescribeHistoryServiceRequest& request);

                /**
                 *This API is used to query the host and tag information.
                 * @param req DescribeHostInfoRequest
                 * @return DescribeHostInfoOutcome
                 */
                DescribeHostInfoOutcome DescribeHostInfo(const Model::DescribeHostInfoRequest &request);
                void DescribeHostInfoAsync(const Model::DescribeHostInfoRequest& request, const DescribeHostInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostInfoOutcomeCallable DescribeHostInfoCallable(const Model::DescribeHostInfoRequest& request);

                /**
                 *This API is used to retrieve the log-in audit list.
                 * @param req DescribeHostLoginListRequest
                 * @return DescribeHostLoginListOutcome
                 */
                DescribeHostLoginListOutcome DescribeHostLoginList(const Model::DescribeHostLoginListRequest &request);
                void DescribeHostLoginListAsync(const Model::DescribeHostLoginListRequest& request, const DescribeHostLoginListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostLoginListOutcomeCallable DescribeHostLoginListCallable(const Model::DescribeHostLoginListRequest& request);

                /**
                 *This API is used to obtain hot spot vulnerabilities across the entire network.
                 * @param req DescribeHotVulTopRequest
                 * @return DescribeHotVulTopOutcome
                 */
                DescribeHotVulTopOutcome DescribeHotVulTop(const Model::DescribeHotVulTopRequest &request);
                void DescribeHotVulTopAsync(const Model::DescribeHotVulTopRequest& request, const DescribeHotVulTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHotVulTopOutcomeCallable DescribeHotVulTopCallable(const Model::DescribeHotVulTopRequest& request);

                /**
                 *This API is used to query the information of ignored inspection items.
                 * @param req DescribeIgnoreBaselineRuleRequest
                 * @return DescribeIgnoreBaselineRuleOutcome
                 */
                DescribeIgnoreBaselineRuleOutcome DescribeIgnoreBaselineRule(const Model::DescribeIgnoreBaselineRuleRequest &request);
                void DescribeIgnoreBaselineRuleAsync(const Model::DescribeIgnoreBaselineRuleRequest& request, const DescribeIgnoreBaselineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIgnoreBaselineRuleOutcomeCallable DescribeIgnoreBaselineRuleCallable(const Model::DescribeIgnoreBaselineRuleRequest& request);

                /**
                 *This API is used to obtain the information of affected inspection items and hosts ignored with one click.
                 * @param req DescribeIgnoreHostAndItemConfigRequest
                 * @return DescribeIgnoreHostAndItemConfigOutcome
                 */
                DescribeIgnoreHostAndItemConfigOutcome DescribeIgnoreHostAndItemConfig(const Model::DescribeIgnoreHostAndItemConfigRequest &request);
                void DescribeIgnoreHostAndItemConfigAsync(const Model::DescribeIgnoreHostAndItemConfigRequest& request, const DescribeIgnoreHostAndItemConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIgnoreHostAndItemConfigOutcomeCallable DescribeIgnoreHostAndItemConfigCallable(const Model::DescribeIgnoreHostAndItemConfigRequest& request);

                /**
                 *This API is used to query the information on the list of hosts affected by ignored detection items based on detection item IDs and filter criteria.
                 * @param req DescribeIgnoreRuleEffectHostListRequest
                 * @return DescribeIgnoreRuleEffectHostListOutcome
                 */
                DescribeIgnoreRuleEffectHostListOutcome DescribeIgnoreRuleEffectHostList(const Model::DescribeIgnoreRuleEffectHostListRequest &request);
                void DescribeIgnoreRuleEffectHostListAsync(const Model::DescribeIgnoreRuleEffectHostListRequest& request, const DescribeIgnoreRuleEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIgnoreRuleEffectHostListOutcomeCallable DescribeIgnoreRuleEffectHostListCallable(const Model::DescribeIgnoreRuleEffectHostListRequest& request);

                /**
                 *接口已废弃

This API is used to obtain the index list.
                 * @param req DescribeIndexListRequest
                 * @return DescribeIndexListOutcome
                 */
                DescribeIndexListOutcome DescribeIndexList(const Model::DescribeIndexListRequest &request);
                void DescribeIndexListAsync(const Model::DescribeIndexListRequest& request, const DescribeIndexListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIndexListOutcomeCallable DescribeIndexListCallable(const Model::DescribeIndexListRequest& request);

                /**
                 *This API is used to query Java webshell event details.
                 * @param req DescribeJavaMemShellInfoRequest
                 * @return DescribeJavaMemShellInfoOutcome
                 */
                DescribeJavaMemShellInfoOutcome DescribeJavaMemShellInfo(const Model::DescribeJavaMemShellInfoRequest &request);
                void DescribeJavaMemShellInfoAsync(const Model::DescribeJavaMemShellInfoRequest& request, const DescribeJavaMemShellInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJavaMemShellInfoOutcomeCallable DescribeJavaMemShellInfoCallable(const Model::DescribeJavaMemShellInfoRequest& request);

                /**
                 *This API is used to query the list of Java webshell events.
                 * @param req DescribeJavaMemShellListRequest
                 * @return DescribeJavaMemShellListOutcome
                 */
                DescribeJavaMemShellListOutcome DescribeJavaMemShellList(const Model::DescribeJavaMemShellListRequest &request);
                void DescribeJavaMemShellListAsync(const Model::DescribeJavaMemShellListRequest& request, const DescribeJavaMemShellListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJavaMemShellListOutcomeCallable DescribeJavaMemShellListCallable(const Model::DescribeJavaMemShellListRequest& request);

                /**
                 *This API is used to query the Java webshell plugin information of the given host.
                 * @param req DescribeJavaMemShellPluginInfoRequest
                 * @return DescribeJavaMemShellPluginInfoOutcome
                 */
                DescribeJavaMemShellPluginInfoOutcome DescribeJavaMemShellPluginInfo(const Model::DescribeJavaMemShellPluginInfoRequest &request);
                void DescribeJavaMemShellPluginInfoAsync(const Model::DescribeJavaMemShellPluginInfoRequest& request, const DescribeJavaMemShellPluginInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJavaMemShellPluginInfoOutcomeCallable DescribeJavaMemShellPluginInfoCallable(const Model::DescribeJavaMemShellPluginInfoRequest& request);

                /**
                 *This API is used to query the Java webshell plugin list.
                 * @param req DescribeJavaMemShellPluginListRequest
                 * @return DescribeJavaMemShellPluginListOutcome
                 */
                DescribeJavaMemShellPluginListOutcome DescribeJavaMemShellPluginList(const Model::DescribeJavaMemShellPluginListRequest &request);
                void DescribeJavaMemShellPluginListAsync(const Model::DescribeJavaMemShellPluginListRequest& request, const DescribeJavaMemShellPluginListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJavaMemShellPluginListOutcomeCallable DescribeJavaMemShellPluginListCallable(const Model::DescribeJavaMemShellPluginListRequest& request);

                /**
                 *This API is used to query the authorization information.
                 * @param req DescribeLicenseRequest
                 * @return DescribeLicenseOutcome
                 */
                DescribeLicenseOutcome DescribeLicense(const Model::DescribeLicenseRequest &request);
                void DescribeLicenseAsync(const Model::DescribeLicenseRequest& request, const DescribeLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLicenseOutcomeCallable DescribeLicenseCallable(const Model::DescribeLicenseRequest& request);

                /**
                 *This API is used to obtain the list of authorized machines bound to an authorization under the Settings Center-Authorization Management.
                 * @param req DescribeLicenseBindListRequest
                 * @return DescribeLicenseBindListOutcome
                 */
                DescribeLicenseBindListOutcome DescribeLicenseBindList(const Model::DescribeLicenseBindListRequest &request);
                void DescribeLicenseBindListAsync(const Model::DescribeLicenseBindListRequest& request, const DescribeLicenseBindListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLicenseBindListOutcomeCallable DescribeLicenseBindListCallable(const Model::DescribeLicenseBindListRequest& request);

                /**
                 *This API is used to query the binding task progress of the authorization.
                 * @param req DescribeLicenseBindScheduleRequest
                 * @return DescribeLicenseBindScheduleOutcome
                 */
                DescribeLicenseBindScheduleOutcome DescribeLicenseBindSchedule(const Model::DescribeLicenseBindScheduleRequest &request);
                void DescribeLicenseBindScheduleAsync(const Model::DescribeLicenseBindScheduleRequest& request, const DescribeLicenseBindScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLicenseBindScheduleOutcomeCallable DescribeLicenseBindScheduleCallable(const Model::DescribeLicenseBindScheduleRequest& request);

                /**
                 *This API is used to obtain the authorization overview information.
                 * @param req DescribeLicenseGeneralRequest
                 * @return DescribeLicenseGeneralOutcome
                 */
                DescribeLicenseGeneralOutcome DescribeLicenseGeneral(const Model::DescribeLicenseGeneralRequest &request);
                void DescribeLicenseGeneralAsync(const Model::DescribeLicenseGeneralRequest& request, const DescribeLicenseGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLicenseGeneralOutcomeCallable DescribeLicenseGeneralCallable(const Model::DescribeLicenseGeneralRequest& request);

                /**
                 *This API is used to obtain all authorization orders of a user.
                 * @param req DescribeLicenseListRequest
                 * @return DescribeLicenseListOutcome
                 */
                DescribeLicenseListOutcome DescribeLicenseList(const Model::DescribeLicenseListRequest &request);
                void DescribeLicenseListAsync(const Model::DescribeLicenseListRequest& request, const DescribeLicenseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLicenseListOutcomeCallable DescribeLicenseListCallable(const Model::DescribeLicenseListRequest& request);

                /**
                 *This API is used to query the available configurations for authorization allowlists.
                 * @param req DescribeLicenseWhiteConfigRequest
                 * @return DescribeLicenseWhiteConfigOutcome
                 */
                DescribeLicenseWhiteConfigOutcome DescribeLicenseWhiteConfig(const Model::DescribeLicenseWhiteConfigRequest &request);
                void DescribeLicenseWhiteConfigAsync(const Model::DescribeLicenseWhiteConfigRequest& request, const DescribeLicenseWhiteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLicenseWhiteConfigOutcomeCallable DescribeLicenseWhiteConfigCallable(const Model::DescribeLicenseWhiteConfigRequest& request);

                /**
                 *This API is used to query the list of logs available for shipping to Kafka.
                 * @param req DescribeLogDeliveryKafkaOptionsRequest
                 * @return DescribeLogDeliveryKafkaOptionsOutcome
                 */
                DescribeLogDeliveryKafkaOptionsOutcome DescribeLogDeliveryKafkaOptions(const Model::DescribeLogDeliveryKafkaOptionsRequest &request);
                void DescribeLogDeliveryKafkaOptionsAsync(const Model::DescribeLogDeliveryKafkaOptionsRequest& request, const DescribeLogDeliveryKafkaOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogDeliveryKafkaOptionsOutcomeCallable DescribeLogDeliveryKafkaOptionsCallable(const Model::DescribeLogDeliveryKafkaOptionsRequest& request);

                /**
                 *This API is used to obtain the list of log download tasks.
                 * @param req DescribeLogExportsRequest
                 * @return DescribeLogExportsOutcome
                 */
                DescribeLogExportsOutcome DescribeLogExports(const Model::DescribeLogExportsRequest &request);
                void DescribeLogExportsAsync(const Model::DescribeLogExportsRequest& request, const DescribeLogExportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogExportsOutcomeCallable DescribeLogExportsCallable(const Model::DescribeLogExportsRequest& request);

                /**
                 *This API is used to obtain the log histogram information.
                 * @param req DescribeLogHistogramRequest
                 * @return DescribeLogHistogramOutcome
                 */
                DescribeLogHistogramOutcome DescribeLogHistogram(const Model::DescribeLogHistogramRequest &request);
                void DescribeLogHistogramAsync(const Model::DescribeLogHistogramRequest& request, const DescribeLogHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogHistogramOutcomeCallable DescribeLogHistogramCallable(const Model::DescribeLogHistogramRequest& request);

                /**
                 *This API is used to query the index.
                 * @param req DescribeLogIndexRequest
                 * @return DescribeLogIndexOutcome
                 */
                DescribeLogIndexOutcome DescribeLogIndex(const Model::DescribeLogIndexRequest &request);
                void DescribeLogIndexAsync(const Model::DescribeLogIndexRequest& request, const DescribeLogIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogIndexOutcomeCallable DescribeLogIndexCallable(const Model::DescribeLogIndexRequest& request);

                /**
                 *This API is used to obtain the information of Kafka shipping.
                 * @param req DescribeLogKafkaDeliverInfoRequest
                 * @return DescribeLogKafkaDeliverInfoOutcome
                 */
                DescribeLogKafkaDeliverInfoOutcome DescribeLogKafkaDeliverInfo(const Model::DescribeLogKafkaDeliverInfoRequest &request);
                void DescribeLogKafkaDeliverInfoAsync(const Model::DescribeLogKafkaDeliverInfoRequest& request, const DescribeLogKafkaDeliverInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogKafkaDeliverInfoOutcomeCallable DescribeLogKafkaDeliverInfoCallable(const Model::DescribeLogKafkaDeliverInfoRequest& request);

                /**
                 *This API is used to obtain the log storage configuration.
                 * @param req DescribeLogStorageConfigRequest
                 * @return DescribeLogStorageConfigOutcome
                 */
                DescribeLogStorageConfigOutcome DescribeLogStorageConfig(const Model::DescribeLogStorageConfigRequest &request);
                void DescribeLogStorageConfigAsync(const Model::DescribeLogStorageConfigRequest& request, const DescribeLogStorageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogStorageConfigOutcomeCallable DescribeLogStorageConfigCallable(const Model::DescribeLogStorageConfigRequest& request);

                /**
                 *This API is used to obtain the record of stored log size.
                 * @param req DescribeLogStorageRecordRequest
                 * @return DescribeLogStorageRecordOutcome
                 */
                DescribeLogStorageRecordOutcome DescribeLogStorageRecord(const Model::DescribeLogStorageRecordRequest &request);
                void DescribeLogStorageRecordAsync(const Model::DescribeLogStorageRecordRequest& request, const DescribeLogStorageRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogStorageRecordOutcomeCallable DescribeLogStorageRecordCallable(const Model::DescribeLogStorageRecordRequest& request);

                /**
                 *This API is used to obtain the statistics of the used log retrieval capacity.
                 * @param req DescribeLogStorageStatisticRequest
                 * @return DescribeLogStorageStatisticOutcome
                 */
                DescribeLogStorageStatisticOutcome DescribeLogStorageStatistic(const Model::DescribeLogStorageStatisticRequest &request);
                void DescribeLogStorageStatisticAsync(const Model::DescribeLogStorageStatisticRequest& request, const DescribeLogStorageStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogStorageStatisticOutcomeCallable DescribeLogStorageStatisticCallable(const Model::DescribeLogStorageStatisticRequest& request);

                /**
                 *This API is used to obtain log types, and the returned result of this API indicates temporarily filterable log types.
                 * @param req DescribeLogTypeRequest
                 * @return DescribeLogTypeOutcome
                 */
                DescribeLogTypeOutcome DescribeLogType(const Model::DescribeLogTypeRequest &request);
                void DescribeLogTypeAsync(const Model::DescribeLogTypeRequest& request, const DescribeLogTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogTypeOutcomeCallable DescribeLogTypeCallable(const Model::DescribeLogTypeRequest& request);

                /**
                 *This API is used to obtain the list of cross-region log-in allowlists after merge.
                 * @param req DescribeLoginWhiteCombinedListRequest
                 * @return DescribeLoginWhiteCombinedListOutcome
                 */
                DescribeLoginWhiteCombinedListOutcome DescribeLoginWhiteCombinedList(const Model::DescribeLoginWhiteCombinedListRequest &request);
                void DescribeLoginWhiteCombinedListAsync(const Model::DescribeLoginWhiteCombinedListRequest& request, const DescribeLoginWhiteCombinedListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoginWhiteCombinedListOutcomeCallable DescribeLoginWhiteCombinedListCallable(const Model::DescribeLoginWhiteCombinedListRequest& request);

                /**
                 *This API is used to query the list of allowlisted machines after merge.
                 * @param req DescribeLoginWhiteHostListRequest
                 * @return DescribeLoginWhiteHostListOutcome
                 */
                DescribeLoginWhiteHostListOutcome DescribeLoginWhiteHostList(const Model::DescribeLoginWhiteHostListRequest &request);
                void DescribeLoginWhiteHostListAsync(const Model::DescribeLoginWhiteHostListRequest& request, const DescribeLoginWhiteHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoginWhiteHostListOutcomeCallable DescribeLoginWhiteHostListCallable(const Model::DescribeLoginWhiteHostListRequest& request);

                /**
                 *This API is used to obtain the cross-region log-in allowlist list.
                 * @param req DescribeLoginWhiteListRequest
                 * @return DescribeLoginWhiteListOutcome
                 */
                DescribeLoginWhiteListOutcome DescribeLoginWhiteList(const Model::DescribeLoginWhiteListRequest &request);
                void DescribeLoginWhiteListAsync(const Model::DescribeLoginWhiteListRequest& request, const DescribeLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoginWhiteListOutcomeCallable DescribeLoginWhiteListCallable(const Model::DescribeLoginWhiteListRequest& request);

                /**
                 *This API is used to query the clearing history records of a machine.
                 * @param req DescribeMachineClearHistoryRequest
                 * @return DescribeMachineClearHistoryOutcome
                 */
                DescribeMachineClearHistoryOutcome DescribeMachineClearHistory(const Model::DescribeMachineClearHistoryRequest &request);
                void DescribeMachineClearHistoryAsync(const Model::DescribeMachineClearHistoryRequest& request, const DescribeMachineClearHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineClearHistoryOutcomeCallable DescribeMachineClearHistoryCallable(const Model::DescribeMachineClearHistoryRequest& request);

                /**
                 *This API is used to query the statistics of advanced defense events for hosts.
                 * @param req DescribeMachineDefenseCntRequest
                 * @return DescribeMachineDefenseCntOutcome
                 */
                DescribeMachineDefenseCntOutcome DescribeMachineDefenseCnt(const Model::DescribeMachineDefenseCntRequest &request);
                void DescribeMachineDefenseCntAsync(const Model::DescribeMachineDefenseCntRequest& request, const DescribeMachineDefenseCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineDefenseCntOutcomeCallable DescribeMachineDefenseCntCallable(const Model::DescribeMachineDefenseCntRequest& request);

                /**
                 *This API is used to query the list of host-related core file monitoring rules.
                 * @param req DescribeMachineFileTamperRulesRequest
                 * @return DescribeMachineFileTamperRulesOutcome
                 */
                DescribeMachineFileTamperRulesOutcome DescribeMachineFileTamperRules(const Model::DescribeMachineFileTamperRulesRequest &request);
                void DescribeMachineFileTamperRulesAsync(const Model::DescribeMachineFileTamperRulesRequest& request, const DescribeMachineFileTamperRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineFileTamperRulesOutcomeCallable DescribeMachineFileTamperRulesCallable(const Model::DescribeMachineFileTamperRulesRequest& request);

                /**
                 *This API is used to query the information of the host overview.
                 * @param req DescribeMachineGeneralRequest
                 * @return DescribeMachineGeneralOutcome
                 */
                DescribeMachineGeneralOutcome DescribeMachineGeneral(const Model::DescribeMachineGeneralRequest &request);
                void DescribeMachineGeneralAsync(const Model::DescribeMachineGeneralRequest& request, const DescribeMachineGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineGeneralOutcomeCallable DescribeMachineGeneralCallable(const Model::DescribeMachineGeneralRequest& request);

                /**
                 *This API is used to query the machine authorization information.
                 * @param req DescribeMachineLicenseDetailRequest
                 * @return DescribeMachineLicenseDetailOutcome
                 */
                DescribeMachineLicenseDetailOutcome DescribeMachineLicenseDetail(const Model::DescribeMachineLicenseDetailRequest &request);
                void DescribeMachineLicenseDetailAsync(const Model::DescribeMachineLicenseDetailRequest& request, const DescribeMachineLicenseDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineLicenseDetailOutcomeCallable DescribeMachineLicenseDetailCallable(const Model::DescribeMachineLicenseDetailRequest& request);

                /**
                 *This API is used to query the machine operating system list.
                 * @param req DescribeMachineOsListRequest
                 * @return DescribeMachineOsListOutcome
                 */
                DescribeMachineOsListOutcome DescribeMachineOsList(const Model::DescribeMachineOsListRequest &request);
                void DescribeMachineOsListAsync(const Model::DescribeMachineOsListRequest& request, const DescribeMachineOsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineOsListOutcomeCallable DescribeMachineOsListCallable(const Model::DescribeMachineOsListRequest& request);

                /**
                 *This API is used to query the list of host regions.
                 * @param req DescribeMachineRegionListRequest
                 * @return DescribeMachineRegionListOutcome
                 */
                DescribeMachineRegionListOutcome DescribeMachineRegionList(const Model::DescribeMachineRegionListRequest &request);
                void DescribeMachineRegionListAsync(const Model::DescribeMachineRegionListRequest& request, const DescribeMachineRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineRegionListOutcomeCallable DescribeMachineRegionListCallable(const Model::DescribeMachineRegionListRequest& request);

                /**
                 *This API is used to obtain the list of machine regions.
                 * @param req DescribeMachineRegionsRequest
                 * @return DescribeMachineRegionsOutcome
                 */
                DescribeMachineRegionsOutcome DescribeMachineRegions(const Model::DescribeMachineRegionsRequest &request);
                void DescribeMachineRegionsAsync(const Model::DescribeMachineRegionsRequest& request, const DescribeMachineRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineRegionsOutcomeCallable DescribeMachineRegionsCallable(const Model::DescribeMachineRegionsRequest& request);

                /**
                 *This API is used to query the statistics of host intrusion detection events.
                 * @param req DescribeMachineRiskCntRequest
                 * @return DescribeMachineRiskCntOutcome
                 */
                DescribeMachineRiskCntOutcome DescribeMachineRiskCnt(const Model::DescribeMachineRiskCntRequest &request);
                void DescribeMachineRiskCntAsync(const Model::DescribeMachineRiskCntRequest& request, const DescribeMachineRiskCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineRiskCntOutcomeCallable DescribeMachineRiskCntCallable(const Model::DescribeMachineRiskCntRequest& request);

                /**
                 *This API is used to query snapshots created by the host.
                 * @param req DescribeMachineSnapshotRequest
                 * @return DescribeMachineSnapshotOutcome
                 */
                DescribeMachineSnapshotOutcome DescribeMachineSnapshot(const Model::DescribeMachineSnapshotRequest &request);
                void DescribeMachineSnapshotAsync(const Model::DescribeMachineSnapshotRequest& request, const DescribeMachineSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineSnapshotOutcomeCallable DescribeMachineSnapshotCallable(const Model::DescribeMachineSnapshotRequest& request);

                /**
                 *This API is used to obtain the list of hosts in a specific region.
                 * @param req DescribeMachinesRequest
                 * @return DescribeMachinesOutcome
                 */
                DescribeMachinesOutcome DescribeMachines(const Model::DescribeMachinesRequest &request);
                void DescribeMachinesAsync(const Model::DescribeMachinesRequest& request, const DescribeMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachinesOutcomeCallable DescribeMachinesCallable(const Model::DescribeMachinesRequest& request);

                /**
                 *This API is used to obtain the list of hosts.
                 * @param req DescribeMachinesSimpleRequest
                 * @return DescribeMachinesSimpleOutcome
                 */
                DescribeMachinesSimpleOutcome DescribeMachinesSimple(const Model::DescribeMachinesSimpleRequest &request);
                void DescribeMachinesSimpleAsync(const Model::DescribeMachinesSimpleRequest& request, const DescribeMachinesSimpleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachinesSimpleOutcomeCallable DescribeMachinesSimpleCallable(const Model::DescribeMachinesSimpleRequest& request);

                /**
                 *This API is used to obtain the Trojan list.
                 * @param req DescribeMalWareListRequest
                 * @return DescribeMalWareListOutcome
                 */
                DescribeMalWareListOutcome DescribeMalWareList(const Model::DescribeMalWareListRequest &request);
                void DescribeMalWareListAsync(const Model::DescribeMalWareListRequest& request, const DescribeMalWareListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalWareListOutcomeCallable DescribeMalWareListCallable(const Model::DescribeMalWareListRequest& request);

                /**
                 *This API is used to query the list of malicious request allowlists.
                 * @param req DescribeMaliciousRequestWhiteListRequest
                 * @return DescribeMaliciousRequestWhiteListOutcome
                 */
                DescribeMaliciousRequestWhiteListOutcome DescribeMaliciousRequestWhiteList(const Model::DescribeMaliciousRequestWhiteListRequest &request);
                void DescribeMaliciousRequestWhiteListAsync(const Model::DescribeMaliciousRequestWhiteListRequest& request, const DescribeMaliciousRequestWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMaliciousRequestWhiteListOutcomeCallable DescribeMaliciousRequestWhiteListCallable(const Model::DescribeMaliciousRequestWhiteListRequest& request);

                /**
                 *This API is used to obtain Trojan file download addresses.
                 * @param req DescribeMalwareFileRequest
                 * @return DescribeMalwareFileOutcome
                 */
                DescribeMalwareFileOutcome DescribeMalwareFile(const Model::DescribeMalwareFileRequest &request);
                void DescribeMalwareFileAsync(const Model::DescribeMalwareFileRequest& request, const DescribeMalwareFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalwareFileOutcomeCallable DescribeMalwareFileCallable(const Model::DescribeMalwareFileRequest& request);

                /**
                 *This API is used to view malicious file details.
                 * @param req DescribeMalwareInfoRequest
                 * @return DescribeMalwareInfoOutcome
                 */
                DescribeMalwareInfoOutcome DescribeMalwareInfo(const Model::DescribeMalwareInfoRequest &request);
                void DescribeMalwareInfoAsync(const Model::DescribeMalwareInfoRequest& request, const DescribeMalwareInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalwareInfoOutcomeCallable DescribeMalwareInfoCallable(const Model::DescribeMalwareInfoRequest& request);

                /**
                 *This API is used to obtain the information of virus scanning overview.
                 * @param req DescribeMalwareRiskOverviewRequest
                 * @return DescribeMalwareRiskOverviewOutcome
                 */
                DescribeMalwareRiskOverviewOutcome DescribeMalwareRiskOverview(const Model::DescribeMalwareRiskOverviewRequest &request);
                void DescribeMalwareRiskOverviewAsync(const Model::DescribeMalwareRiskOverviewRequest& request, const DescribeMalwareRiskOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalwareRiskOverviewOutcomeCallable DescribeMalwareRiskOverviewCallable(const Model::DescribeMalwareRiskOverviewRequest& request);

                /**
                 *This API is used to open Intrusion Detection - Virus Scanning, and the risk warning content pops up.
                 * @param req DescribeMalwareRiskWarningRequest
                 * @return DescribeMalwareRiskWarningOutcome
                 */
                DescribeMalwareRiskWarningOutcome DescribeMalwareRiskWarning(const Model::DescribeMalwareRiskWarningRequest &request);
                void DescribeMalwareRiskWarningAsync(const Model::DescribeMalwareRiskWarningRequest& request, const DescribeMalwareRiskWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalwareRiskWarningOutcomeCallable DescribeMalwareRiskWarningCallable(const Model::DescribeMalwareRiskWarningRequest& request);

                /**
                 *This API is used to query the scheduled scan configuration.
                 * @param req DescribeMalwareTimingScanSettingRequest
                 * @return DescribeMalwareTimingScanSettingOutcome
                 */
                DescribeMalwareTimingScanSettingOutcome DescribeMalwareTimingScanSetting(const Model::DescribeMalwareTimingScanSettingRequest &request);
                void DescribeMalwareTimingScanSettingAsync(const Model::DescribeMalwareTimingScanSettingRequest& request, const DescribeMalwareTimingScanSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalwareTimingScanSettingOutcomeCallable DescribeMalwareTimingScanSettingCallable(const Model::DescribeMalwareTimingScanSettingRequest& request);

                /**
                 *This API is used to obtain the list of Trojan allowlists.
                 * @param req DescribeMalwareWhiteListRequest
                 * @return DescribeMalwareWhiteListOutcome
                 */
                DescribeMalwareWhiteListOutcome DescribeMalwareWhiteList(const Model::DescribeMalwareWhiteListRequest &request);
                void DescribeMalwareWhiteListAsync(const Model::DescribeMalwareWhiteListRequest& request, const DescribeMalwareWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalwareWhiteListOutcomeCallable DescribeMalwareWhiteListCallable(const Model::DescribeMalwareWhiteListRequest& request);

                /**
                 *This API is used to obtain the list of affected Trojan allowlists.
                 * @param req DescribeMalwareWhiteListAffectListRequest
                 * @return DescribeMalwareWhiteListAffectListOutcome
                 */
                DescribeMalwareWhiteListAffectListOutcome DescribeMalwareWhiteListAffectList(const Model::DescribeMalwareWhiteListAffectListRequest &request);
                void DescribeMalwareWhiteListAffectListAsync(const Model::DescribeMalwareWhiteListAffectListRequest& request, const DescribeMalwareWhiteListAffectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalwareWhiteListAffectListOutcomeCallable DescribeMalwareWhiteListAffectListCallable(const Model::DescribeMalwareWhiteListAffectListRequest& request);

                /**
                 *This API is used to download the monthly inspection report of the security manager.
                 * @param req DescribeMonthInspectionReportRequest
                 * @return DescribeMonthInspectionReportOutcome
                 */
                DescribeMonthInspectionReportOutcome DescribeMonthInspectionReport(const Model::DescribeMonthInspectionReportRequest &request);
                void DescribeMonthInspectionReportAsync(const Model::DescribeMonthInspectionReportRequest& request, const DescribeMonthInspectionReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMonthInspectionReportOutcomeCallable DescribeMonthInspectionReportCallable(const Model::DescribeMonthInspectionReportRequest& request);

                /**
                 *This API is used to query network attack settings.
                 * @param req DescribeNetAttackSettingRequest
                 * @return DescribeNetAttackSettingOutcome
                 */
                DescribeNetAttackSettingOutcome DescribeNetAttackSetting(const Model::DescribeNetAttackSettingRequest &request);
                void DescribeNetAttackSettingAsync(const Model::DescribeNetAttackSettingRequest& request, const DescribeNetAttackSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetAttackSettingOutcomeCallable DescribeNetAttackSettingCallable(const Model::DescribeNetAttackSettingRequest& request);

                /**
                 *This API is used to obtain the network attack allowlist list.
                 * @param req DescribeNetAttackWhiteListRequest
                 * @return DescribeNetAttackWhiteListOutcome
                 */
                DescribeNetAttackWhiteListOutcome DescribeNetAttackWhiteList(const Model::DescribeNetAttackWhiteListRequest &request);
                void DescribeNetAttackWhiteListAsync(const Model::DescribeNetAttackWhiteListRequest& request, const DescribeNetAttackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetAttackWhiteListOutcomeCallable DescribeNetAttackWhiteListCallable(const Model::DescribeNetAttackWhiteListRequest& request);

                /**
                 *This API is used to obtain the list of port statistics.
                 * @param req DescribeOpenPortStatisticsRequest
                 * @return DescribeOpenPortStatisticsOutcome
                 */
                DescribeOpenPortStatisticsOutcome DescribeOpenPortStatistics(const Model::DescribeOpenPortStatisticsRequest &request);
                void DescribeOpenPortStatisticsAsync(const Model::DescribeOpenPortStatisticsRequest& request, const DescribeOpenPortStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOpenPortStatisticsOutcomeCallable DescribeOpenPortStatisticsCallable(const Model::DescribeOpenPortStatisticsRequest& request);

                /**
                 *This API is used to obtain the overview statistics.
                 * @param req DescribeOverviewStatisticsRequest
                 * @return DescribeOverviewStatisticsOutcome
                 */
                DescribeOverviewStatisticsOutcome DescribeOverviewStatistics(const Model::DescribeOverviewStatisticsRequest &request);
                void DescribeOverviewStatisticsAsync(const Model::DescribeOverviewStatisticsRequest& request, const DescribeOverviewStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOverviewStatisticsOutcomeCallable DescribeOverviewStatisticsCallable(const Model::DescribeOverviewStatisticsRequest& request);

                /**
                 *This API is used to obtain local privilege escalation information details.
                 * @param req DescribePrivilegeEventInfoRequest
                 * @return DescribePrivilegeEventInfoOutcome
                 */
                DescribePrivilegeEventInfoOutcome DescribePrivilegeEventInfo(const Model::DescribePrivilegeEventInfoRequest &request);
                void DescribePrivilegeEventInfoAsync(const Model::DescribePrivilegeEventInfoRequest& request, const DescribePrivilegeEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivilegeEventInfoOutcomeCallable DescribePrivilegeEventInfoCallable(const Model::DescribePrivilegeEventInfoRequest& request);

                /**
                 *This API is used to obtain the list of local privilege escalation rules.
                 * @param req DescribePrivilegeRulesRequest
                 * @return DescribePrivilegeRulesOutcome
                 */
                DescribePrivilegeRulesOutcome DescribePrivilegeRules(const Model::DescribePrivilegeRulesRequest &request);
                void DescribePrivilegeRulesAsync(const Model::DescribePrivilegeRulesRequest& request, const DescribePrivilegeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivilegeRulesOutcomeCallable DescribePrivilegeRulesCallable(const Model::DescribePrivilegeRulesRequest& request);

                /**
                 *This API is used to obtain the overview information of the Professional edition.
                 * @param req DescribeProVersionInfoRequest
                 * @return DescribeProVersionInfoOutcome
                 */
                DescribeProVersionInfoOutcome DescribeProVersionInfo(const Model::DescribeProVersionInfoRequest &request);
                void DescribeProVersionInfoAsync(const Model::DescribeProVersionInfoRequest& request, const DescribeProVersionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProVersionInfoOutcomeCallable DescribeProVersionInfoCallable(const Model::DescribeProVersionInfoRequest& request);

                /**
                 *This API is used to check whether a single host or all hosts enable the professional version.
                 * @param req DescribeProVersionStatusRequest
                 * @return DescribeProVersionStatusOutcome
                 */
                DescribeProVersionStatusOutcome DescribeProVersionStatus(const Model::DescribeProVersionStatusRequest &request);
                void DescribeProVersionStatusAsync(const Model::DescribeProVersionStatusRequest& request, const DescribeProVersionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProVersionStatusOutcomeCallable DescribeProVersionStatusCallable(const Model::DescribeProVersionStatusRequest& request);

                /**
                 *This API is used to obtain the process statistics data.
                 * @param req DescribeProcessStatisticsRequest
                 * @return DescribeProcessStatisticsOutcome
                 */
                DescribeProcessStatisticsOutcome DescribeProcessStatistics(const Model::DescribeProcessStatisticsRequest &request);
                void DescribeProcessStatisticsAsync(const Model::DescribeProcessStatisticsRequest& request, const DescribeProcessStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProcessStatisticsOutcomeCallable DescribeProcessStatisticsCallable(const Model::DescribeProcessStatisticsRequest& request);

                /**
                 *This API is used to query the product trial status.
                 * @param req DescribeProductStatusRequest
                 * @return DescribeProductStatusOutcome
                 */
                DescribeProductStatusOutcome DescribeProductStatus(const Model::DescribeProductStatusRequest &request);
                void DescribeProductStatusAsync(const Model::DescribeProductStatusRequest& request, const DescribeProductStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductStatusOutcomeCallable DescribeProductStatusCallable(const Model::DescribeProductStatusRequest& request);

                /**
                 *This API is used to obtain the installation command of the public network access proxy.
                 * @param req DescribePublicProxyInstallCommandRequest
                 * @return DescribePublicProxyInstallCommandOutcome
                 */
                DescribePublicProxyInstallCommandOutcome DescribePublicProxyInstallCommand(const Model::DescribePublicProxyInstallCommandRequest &request);
                void DescribePublicProxyInstallCommandAsync(const Model::DescribePublicProxyInstallCommandRequest& request, const DescribePublicProxyInstallCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicProxyInstallCommandOutcomeCallable DescribePublicProxyInstallCommandCallable(const Model::DescribePublicProxyInstallCommandRequest& request);

                /**
                 *This API is used to query the list of host snapshot backups.
                 * @param req DescribeRansomDefenseBackupListRequest
                 * @return DescribeRansomDefenseBackupListOutcome
                 */
                DescribeRansomDefenseBackupListOutcome DescribeRansomDefenseBackupList(const Model::DescribeRansomDefenseBackupListRequest &request);
                void DescribeRansomDefenseBackupListAsync(const Model::DescribeRansomDefenseBackupListRequest& request, const DescribeRansomDefenseBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseBackupListOutcomeCallable DescribeRansomDefenseBackupListCallable(const Model::DescribeRansomDefenseBackupListRequest& request);

                /**
                 *This API is used to query the anti-ransomware event list.
                 * @param req DescribeRansomDefenseEventsListRequest
                 * @return DescribeRansomDefenseEventsListOutcome
                 */
                DescribeRansomDefenseEventsListOutcome DescribeRansomDefenseEventsList(const Model::DescribeRansomDefenseEventsListRequest &request);
                void DescribeRansomDefenseEventsListAsync(const Model::DescribeRansomDefenseEventsListRequest& request, const DescribeRansomDefenseEventsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseEventsListOutcomeCallable DescribeRansomDefenseEventsListCallable(const Model::DescribeRansomDefenseEventsListRequest& request);

                /**
                 *This API is used to query the list of backup details.
                 * @param req DescribeRansomDefenseMachineListRequest
                 * @return DescribeRansomDefenseMachineListOutcome
                 */
                DescribeRansomDefenseMachineListOutcome DescribeRansomDefenseMachineList(const Model::DescribeRansomDefenseMachineListRequest &request);
                void DescribeRansomDefenseMachineListAsync(const Model::DescribeRansomDefenseMachineListRequest& request, const DescribeRansomDefenseMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseMachineListOutcomeCallable DescribeRansomDefenseMachineListCallable(const Model::DescribeRansomDefenseMachineListRequest& request);

                /**
                 *This API is used to obtain the list of policies bound to a host.
                 * @param req DescribeRansomDefenseMachineStrategyInfoRequest
                 * @return DescribeRansomDefenseMachineStrategyInfoOutcome
                 */
                DescribeRansomDefenseMachineStrategyInfoOutcome DescribeRansomDefenseMachineStrategyInfo(const Model::DescribeRansomDefenseMachineStrategyInfoRequest &request);
                void DescribeRansomDefenseMachineStrategyInfoAsync(const Model::DescribeRansomDefenseMachineStrategyInfoRequest& request, const DescribeRansomDefenseMachineStrategyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseMachineStrategyInfoOutcomeCallable DescribeRansomDefenseMachineStrategyInfoCallable(const Model::DescribeRansomDefenseMachineStrategyInfoRequest& request);

                /**
                 *This API is used to query the rollback task list.
                 * @param req DescribeRansomDefenseRollBackTaskListRequest
                 * @return DescribeRansomDefenseRollBackTaskListOutcome
                 */
                DescribeRansomDefenseRollBackTaskListOutcome DescribeRansomDefenseRollBackTaskList(const Model::DescribeRansomDefenseRollBackTaskListRequest &request);
                void DescribeRansomDefenseRollBackTaskListAsync(const Model::DescribeRansomDefenseRollBackTaskListRequest& request, const DescribeRansomDefenseRollBackTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseRollBackTaskListOutcomeCallable DescribeRansomDefenseRollBackTaskListCallable(const Model::DescribeRansomDefenseRollBackTaskListRequest& request);

                /**
                 *This API is used to obtain user anti-ransomware trends.
                 * @param req DescribeRansomDefenseStateRequest
                 * @return DescribeRansomDefenseStateOutcome
                 */
                DescribeRansomDefenseStateOutcome DescribeRansomDefenseState(const Model::DescribeRansomDefenseStateRequest &request);
                void DescribeRansomDefenseStateAsync(const Model::DescribeRansomDefenseStateRequest& request, const DescribeRansomDefenseStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseStateOutcomeCallable DescribeRansomDefenseStateCallable(const Model::DescribeRansomDefenseStateRequest& request);

                /**
                 *This API is used to obtain the policy details.
                 * @param req DescribeRansomDefenseStrategyDetailRequest
                 * @return DescribeRansomDefenseStrategyDetailOutcome
                 */
                DescribeRansomDefenseStrategyDetailOutcome DescribeRansomDefenseStrategyDetail(const Model::DescribeRansomDefenseStrategyDetailRequest &request);
                void DescribeRansomDefenseStrategyDetailAsync(const Model::DescribeRansomDefenseStrategyDetailRequest& request, const DescribeRansomDefenseStrategyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseStrategyDetailOutcomeCallable DescribeRansomDefenseStrategyDetailCallable(const Model::DescribeRansomDefenseStrategyDetailRequest& request);

                /**
                 *This API is used to query the list of anti-ransomware policies.
                 * @param req DescribeRansomDefenseStrategyListRequest
                 * @return DescribeRansomDefenseStrategyListOutcome
                 */
                DescribeRansomDefenseStrategyListOutcome DescribeRansomDefenseStrategyList(const Model::DescribeRansomDefenseStrategyListRequest &request);
                void DescribeRansomDefenseStrategyListAsync(const Model::DescribeRansomDefenseStrategyListRequest& request, const DescribeRansomDefenseStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseStrategyListOutcomeCallable DescribeRansomDefenseStrategyListCallable(const Model::DescribeRansomDefenseStrategyListRequest& request);

                /**
                 *This API is used to query the list of machines bound to an anti-ransomware policy.
                 * @param req DescribeRansomDefenseStrategyMachinesRequest
                 * @return DescribeRansomDefenseStrategyMachinesOutcome
                 */
                DescribeRansomDefenseStrategyMachinesOutcome DescribeRansomDefenseStrategyMachines(const Model::DescribeRansomDefenseStrategyMachinesRequest &request);
                void DescribeRansomDefenseStrategyMachinesAsync(const Model::DescribeRansomDefenseStrategyMachinesRequest& request, const DescribeRansomDefenseStrategyMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseStrategyMachinesOutcomeCallable DescribeRansomDefenseStrategyMachinesCallable(const Model::DescribeRansomDefenseStrategyMachinesRequest& request);

                /**
                 *This API is used to obtain the ransomware situation across the entire network.
                 * @param req DescribeRansomDefenseTrendRequest
                 * @return DescribeRansomDefenseTrendOutcome
                 */
                DescribeRansomDefenseTrendOutcome DescribeRansomDefenseTrend(const Model::DescribeRansomDefenseTrendRequest &request);
                void DescribeRansomDefenseTrendAsync(const Model::DescribeRansomDefenseTrendRequest& request, const DescribeRansomDefenseTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRansomDefenseTrendOutcomeCallable DescribeRansomDefenseTrendCallable(const Model::DescribeRansomDefenseTrendRequest& request);

                /**
                 *This API is used to query the recommended number of protection cores for purchase.
                 * @param req DescribeRecommendedProtectCpuRequest
                 * @return DescribeRecommendedProtectCpuOutcome
                 */
                DescribeRecommendedProtectCpuOutcome DescribeRecommendedProtectCpu(const Model::DescribeRecommendedProtectCpuRequest &request);
                void DescribeRecommendedProtectCpuAsync(const Model::DescribeRecommendedProtectCpuRequest& request, const DescribeRecommendedProtectCpuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecommendedProtectCpuOutcomeCallable DescribeRecommendedProtectCpuCallable(const Model::DescribeRecommendedProtectCpuRequest& request);

                /**
                 *This API is used to query reverse shell details.
                 * @param req DescribeReverseShellEventInfoRequest
                 * @return DescribeReverseShellEventInfoOutcome
                 */
                DescribeReverseShellEventInfoOutcome DescribeReverseShellEventInfo(const Model::DescribeReverseShellEventInfoRequest &request);
                void DescribeReverseShellEventInfoAsync(const Model::DescribeReverseShellEventInfoRequest& request, const DescribeReverseShellEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReverseShellEventInfoOutcomeCallable DescribeReverseShellEventInfoCallable(const Model::DescribeReverseShellEventInfoRequest& request);

                /**
                 *This API is used to obtain the list of Reverse Shell.
                 * @param req DescribeReverseShellEventsRequest
                 * @return DescribeReverseShellEventsOutcome
                 */
                DescribeReverseShellEventsOutcome DescribeReverseShellEvents(const Model::DescribeReverseShellEventsRequest &request);
                void DescribeReverseShellEventsAsync(const Model::DescribeReverseShellEventsRequest& request, const DescribeReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReverseShellEventsOutcomeCallable DescribeReverseShellEventsCallable(const Model::DescribeReverseShellEventsRequest& request);

                /**
                 *This API is used to obtain the list of Reverse Shell rules.
                 * @param req DescribeReverseShellRulesRequest
                 * @return DescribeReverseShellRulesOutcome
                 */
                DescribeReverseShellRulesOutcome DescribeReverseShellRules(const Model::DescribeReverseShellRulesRequest &request);
                void DescribeReverseShellRulesAsync(const Model::DescribeReverseShellRulesRequest& request, const DescribeReverseShellRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReverseShellRulesOutcomeCallable DescribeReverseShellRulesCallable(const Model::DescribeReverseShellRulesRequest& request);

                /**
                 *This API is used to query if the intrusion detection event update task is completed.
                 * @param req DescribeRiskBatchStatusRequest
                 * @return DescribeRiskBatchStatusOutcome
                 */
                DescribeRiskBatchStatusOutcome DescribeRiskBatchStatus(const Model::DescribeRiskBatchStatusRequest &request);
                void DescribeRiskBatchStatusAsync(const Model::DescribeRiskBatchStatusRequest& request, const DescribeRiskBatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskBatchStatusOutcomeCallable DescribeRiskBatchStatusCallable(const Model::DescribeRiskBatchStatusRequest& request);

                /**
                 *This API is used to query malicious request event details.
                 * @param req DescribeRiskDnsEventInfoRequest
                 * @return DescribeRiskDnsEventInfoOutcome
                 */
                DescribeRiskDnsEventInfoOutcome DescribeRiskDnsEventInfo(const Model::DescribeRiskDnsEventInfoRequest &request);
                void DescribeRiskDnsEventInfoAsync(const Model::DescribeRiskDnsEventInfoRequest& request, const DescribeRiskDnsEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskDnsEventInfoOutcomeCallable DescribeRiskDnsEventInfoCallable(const Model::DescribeRiskDnsEventInfoRequest& request);

                /**
                 *This API is used to obtain the list of malicious request events.
                 * @param req DescribeRiskDnsEventListRequest
                 * @return DescribeRiskDnsEventListOutcome
                 */
                DescribeRiskDnsEventListOutcome DescribeRiskDnsEventList(const Model::DescribeRiskDnsEventListRequest &request);
                void DescribeRiskDnsEventListAsync(const Model::DescribeRiskDnsEventListRequest& request, const DescribeRiskDnsEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskDnsEventListOutcomeCallable DescribeRiskDnsEventListCallable(const Model::DescribeRiskDnsEventListRequest& request);

                /**
                 *This API is used to query malicious request details.
                 * @param req DescribeRiskDnsInfoRequest
                 * @return DescribeRiskDnsInfoOutcome
                 */
                DescribeRiskDnsInfoOutcome DescribeRiskDnsInfo(const Model::DescribeRiskDnsInfoRequest &request);
                void DescribeRiskDnsInfoAsync(const Model::DescribeRiskDnsInfoRequest& request, const DescribeRiskDnsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskDnsInfoOutcomeCallable DescribeRiskDnsInfoCallable(const Model::DescribeRiskDnsInfoRequest& request);

                /**
                 *This API is used to obtain the malicious request list.
                 * @param req DescribeRiskDnsListRequest
                 * @return DescribeRiskDnsListOutcome
                 */
                DescribeRiskDnsListOutcome DescribeRiskDnsList(const Model::DescribeRiskDnsListRequest &request);
                void DescribeRiskDnsListAsync(const Model::DescribeRiskDnsListRequest& request, const DescribeRiskDnsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskDnsListOutcomeCallable DescribeRiskDnsListCallable(const Model::DescribeRiskDnsListRequest& request);

                /**
                 *This API is used to obtain the list of malicious request policies.
                 * @param req DescribeRiskDnsPolicyListRequest
                 * @return DescribeRiskDnsPolicyListOutcome
                 */
                DescribeRiskDnsPolicyListOutcome DescribeRiskDnsPolicyList(const Model::DescribeRiskDnsPolicyListRequest &request);
                void DescribeRiskDnsPolicyListAsync(const Model::DescribeRiskDnsPolicyListRequest& request, const DescribeRiskDnsPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskDnsPolicyListOutcomeCallable DescribeRiskDnsPolicyListCallable(const Model::DescribeRiskDnsPolicyListRequest& request);

                /**
                 *This API is used to obtain the list of abnormal processes.
                 * @param req DescribeRiskProcessEventsRequest
                 * @return DescribeRiskProcessEventsOutcome
                 */
                DescribeRiskProcessEventsOutcome DescribeRiskProcessEvents(const Model::DescribeRiskProcessEventsRequest &request);
                void DescribeRiskProcessEventsAsync(const Model::DescribeRiskProcessEventsRequest& request, const DescribeRiskProcessEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskProcessEventsOutcomeCallable DescribeRiskProcessEventsCallable(const Model::DescribeRiskProcessEventsRequest& request);

                /**
                 *This API is used to query the .security notification information.
                 * @param req DescribeSafeInfoRequest
                 * @return DescribeSafeInfoOutcome
                 */
                DescribeSafeInfoOutcome DescribeSafeInfo(const Model::DescribeSafeInfoRequest &request);
                void DescribeSafeInfoAsync(const Model::DescribeSafeInfoRequest& request, const DescribeSafeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSafeInfoOutcomeCallable DescribeSafeInfoCallable(const Model::DescribeSafeInfoRequest& request);

                /**
                 *This API is used to query the Trojan scan progress.
                 * @param req DescribeScanMalwareScheduleRequest
                 * @return DescribeScanMalwareScheduleOutcome
                 */
                DescribeScanMalwareScheduleOutcome DescribeScanMalwareSchedule(const Model::DescribeScanMalwareScheduleRequest &request);
                void DescribeScanMalwareScheduleAsync(const Model::DescribeScanMalwareScheduleRequest& request, const DescribeScanMalwareScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanMalwareScheduleOutcomeCallable DescribeScanMalwareScheduleCallable(const Model::DescribeScanMalwareScheduleRequest& request);

                /**
                 *This API is used to query the detection progress by taskid.
                 * @param req DescribeScanScheduleRequest
                 * @return DescribeScanScheduleOutcome
                 */
                DescribeScanScheduleOutcome DescribeScanSchedule(const Model::DescribeScanScheduleRequest &request);
                void DescribeScanScheduleAsync(const Model::DescribeScanScheduleRequest& request, const DescribeScanScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanScheduleOutcomeCallable DescribeScanScheduleCallable(const Model::DescribeScanScheduleRequest& request);

                /**
                 *This API is used to query the status of recent scan tasks of the corresponding module.
                 * @param req DescribeScanStateRequest
                 * @return DescribeScanStateOutcome
                 */
                DescribeScanStateOutcome DescribeScanState(const Model::DescribeScanStateRequest &request);
                void DescribeScanStateAsync(const Model::DescribeScanStateRequest& request, const DescribeScanStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanStateOutcomeCallable DescribeScanStateCallable(const Model::DescribeScanStateRequest& request);

                /**
                 *This API is used to query the scan task details and scan progress information/exceptions.
                 * @param req DescribeScanTaskDetailsRequest
                 * @return DescribeScanTaskDetailsOutcome
                 */
                DescribeScanTaskDetailsOutcome DescribeScanTaskDetails(const Model::DescribeScanTaskDetailsRequest &request);
                void DescribeScanTaskDetailsAsync(const Model::DescribeScanTaskDetailsRequest& request, const DescribeScanTaskDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanTaskDetailsOutcomeCallable DescribeScanTaskDetailsCallable(const Model::DescribeScanTaskDetailsRequest& request);

                /**
                 *This API is used to query the list of machine scan statuses for filtering.
                 * @param req DescribeScanTaskStatusRequest
                 * @return DescribeScanTaskStatusOutcome
                 */
                DescribeScanTaskStatusOutcome DescribeScanTaskStatus(const Model::DescribeScanTaskStatusRequest &request);
                void DescribeScanTaskStatusAsync(const Model::DescribeScanTaskStatusRequest& request, const DescribeScanTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanTaskStatusOutcomeCallable DescribeScanTaskStatusCallable(const Model::DescribeScanTaskStatusRequest& request);

                /**
                 *This API is used to query the configuration for regular detection.
                 * @param req DescribeScanVulSettingRequest
                 * @return DescribeScanVulSettingOutcome
                 */
                DescribeScanVulSettingOutcome DescribeScanVulSetting(const Model::DescribeScanVulSettingRequest &request);
                void DescribeScanVulSettingAsync(const Model::DescribeScanVulSettingRequest& request, const DescribeScanVulSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanVulSettingOutcomeCallable DescribeScanVulSettingCallable(const Model::DescribeScanVulSettingRequest& request);

                /**
                 *This API is used to visually obtain the attacked hot spots across the entire network on the large screen.
                 * @param req DescribeScreenAttackHotspotRequest
                 * @return DescribeScreenAttackHotspotOutcome
                 */
                DescribeScreenAttackHotspotOutcome DescribeScreenAttackHotspot(const Model::DescribeScreenAttackHotspotRequest &request);
                void DescribeScreenAttackHotspotAsync(const Model::DescribeScreenAttackHotspotRequest& request, const DescribeScreenAttackHotspotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenAttackHotspotOutcomeCallable DescribeScreenAttackHotspotCallable(const Model::DescribeScreenAttackHotspotRequest& request);

                /**
                 *This API is used to obtain the security report on the large screen.
                 * @param req DescribeScreenBroadcastsRequest
                 * @return DescribeScreenBroadcastsOutcome
                 */
                DescribeScreenBroadcastsOutcome DescribeScreenBroadcasts(const Model::DescribeScreenBroadcastsRequest &request);
                void DescribeScreenBroadcastsAsync(const Model::DescribeScreenBroadcastsRequest& request, const DescribeScreenBroadcastsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenBroadcastsOutcomeCallable DescribeScreenBroadcastsCallable(const Model::DescribeScreenBroadcastsRequest& request);

                /**
                 *This API is used to obtain the visualized attack and defense trends on the large screen.
                 * @param req DescribeScreenDefenseTrendsRequest
                 * @return DescribeScreenDefenseTrendsOutcome
                 */
                DescribeScreenDefenseTrendsOutcome DescribeScreenDefenseTrends(const Model::DescribeScreenDefenseTrendsRequest &request);
                void DescribeScreenDefenseTrendsAsync(const Model::DescribeScreenDefenseTrendsRequest& request, const DescribeScreenDefenseTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenDefenseTrendsOutcomeCallable DescribeScreenDefenseTrendsCallable(const Model::DescribeScreenDefenseTrendsRequest& request);

                /**
                 *This API is used to obtain the visualized emergency notification on the large screen.
                 * @param req DescribeScreenEmergentMsgRequest
                 * @return DescribeScreenEmergentMsgOutcome
                 */
                DescribeScreenEmergentMsgOutcome DescribeScreenEmergentMsg(const Model::DescribeScreenEmergentMsgRequest &request);
                void DescribeScreenEmergentMsgAsync(const Model::DescribeScreenEmergentMsgRequest& request, const DescribeScreenEmergentMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenEmergentMsgOutcomeCallable DescribeScreenEmergentMsgCallable(const Model::DescribeScreenEmergentMsgRequest& request);

                /**
                 *This API is used to obtain the statistics data of events on the security overview page.
                 * @param req DescribeScreenEventsCntRequest
                 * @return DescribeScreenEventsCntOutcome
                 */
                DescribeScreenEventsCntOutcome DescribeScreenEventsCnt(const Model::DescribeScreenEventsCntRequest &request);
                void DescribeScreenEventsCntAsync(const Model::DescribeScreenEventsCntRequest& request, const DescribeScreenEventsCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenEventsCntOutcomeCallable DescribeScreenEventsCntCallable(const Model::DescribeScreenEventsCntRequest& request);

                /**
                 *This API is used to obtain the visualized statistics data of hosts on the screen.
                 * @param req DescribeScreenGeneralStatRequest
                 * @return DescribeScreenGeneralStatOutcome
                 */
                DescribeScreenGeneralStatOutcome DescribeScreenGeneralStat(const Model::DescribeScreenGeneralStatRequest &request);
                void DescribeScreenGeneralStatAsync(const Model::DescribeScreenGeneralStatRequest& request, const DescribeScreenGeneralStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenGeneralStatOutcomeCallable DescribeScreenGeneralStatCallable(const Model::DescribeScreenGeneralStatRequest& request);

                /**
                 *This API is used to obtain the visualized host intrusion details on the large screen.
                 * @param req DescribeScreenHostInvasionRequest
                 * @return DescribeScreenHostInvasionOutcome
                 */
                DescribeScreenHostInvasionOutcome DescribeScreenHostInvasion(const Model::DescribeScreenHostInvasionRequest &request);
                void DescribeScreenHostInvasionAsync(const Model::DescribeScreenHostInvasionRequest& request, const DescribeScreenHostInvasionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenHostInvasionOutcomeCallable DescribeScreenHostInvasionCallable(const Model::DescribeScreenHostInvasionRequest& request);

                /**
                 *This API is used to obtain the list of available visualized host regions on the large screen.
                 * @param req DescribeScreenMachineRegionsRequest
                 * @return DescribeScreenMachineRegionsOutcome
                 */
                DescribeScreenMachineRegionsOutcome DescribeScreenMachineRegions(const Model::DescribeScreenMachineRegionsRequest &request);
                void DescribeScreenMachineRegionsAsync(const Model::DescribeScreenMachineRegionsRequest& request, const DescribeScreenMachineRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenMachineRegionsOutcomeCallable DescribeScreenMachineRegionsCallable(const Model::DescribeScreenMachineRegionsRequest& request);

                /**
                 *This API is used to obtain the visualized list of host regions on the large screen.
                 * @param req DescribeScreenMachinesRequest
                 * @return DescribeScreenMachinesOutcome
                 */
                DescribeScreenMachinesOutcome DescribeScreenMachines(const Model::DescribeScreenMachinesRequest &request);
                void DescribeScreenMachinesAsync(const Model::DescribeScreenMachinesRequest& request, const DescribeScreenMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenMachinesOutcomeCallable DescribeScreenMachinesCallable(const Model::DescribeScreenMachinesRequest& request);

                /**
                 *This API is used to obtain the visualized introduction of CWPP engine on the large screen.
                 * @param req DescribeScreenProtectionCntRequest
                 * @return DescribeScreenProtectionCntOutcome
                 */
                DescribeScreenProtectionCntOutcome DescribeScreenProtectionCnt(const Model::DescribeScreenProtectionCntRequest &request);
                void DescribeScreenProtectionCntAsync(const Model::DescribeScreenProtectionCntRequest& request, const DescribeScreenProtectionCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenProtectionCntOutcomeCallable DescribeScreenProtectionCntCallable(const Model::DescribeScreenProtectionCntRequest& request);

                /**
                 *This API is used to obtain the security protection status on the large screen.
                 * @param req DescribeScreenProtectionStatRequest
                 * @return DescribeScreenProtectionStatOutcome
                 */
                DescribeScreenProtectionStatOutcome DescribeScreenProtectionStat(const Model::DescribeScreenProtectionStatRequest &request);
                void DescribeScreenProtectionStatAsync(const Model::DescribeScreenProtectionStatRequest& request, const DescribeScreenProtectionStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenProtectionStatOutcomeCallable DescribeScreenProtectionStatCallable(const Model::DescribeScreenProtectionStatRequest& request);

                /**
                 *This API is used to count today's risky assets.
                 * @param req DescribeScreenRiskAssetsTopRequest
                 * @return DescribeScreenRiskAssetsTopOutcome
                 */
                DescribeScreenRiskAssetsTopOutcome DescribeScreenRiskAssetsTop(const Model::DescribeScreenRiskAssetsTopRequest &request);
                void DescribeScreenRiskAssetsTopAsync(const Model::DescribeScreenRiskAssetsTopRequest& request, const DescribeScreenRiskAssetsTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScreenRiskAssetsTopOutcomeCallable DescribeScreenRiskAssetsTopCallable(const Model::DescribeScreenRiskAssetsTopRequest& request);

                /**
                 *This API is used to obtain historical search records.
                 * @param req DescribeSearchLogsRequest
                 * @return DescribeSearchLogsOutcome
                 */
                DescribeSearchLogsOutcome DescribeSearchLogs(const Model::DescribeSearchLogsRequest &request);
                void DescribeSearchLogsAsync(const Model::DescribeSearchLogsRequest& request, const DescribeSearchLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSearchLogsOutcomeCallable DescribeSearchLogsCallable(const Model::DescribeSearchLogsRequest& request);

                /**
                 *This API is used to obtain the list of quick retrievals.
                 * @param req DescribeSearchTemplatesRequest
                 * @return DescribeSearchTemplatesOutcome
                 */
                DescribeSearchTemplatesOutcome DescribeSearchTemplates(const Model::DescribeSearchTemplatesRequest &request);
                void DescribeSearchTemplatesAsync(const Model::DescribeSearchTemplatesRequest& request, const DescribeSearchTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSearchTemplatesOutcomeCallable DescribeSearchTemplatesCallable(const Model::DescribeSearchTemplatesRequest& request);

                /**
                 *This API is used to query the information of security report articles.
                 * @param req DescribeSecurityBroadcastInfoRequest
                 * @return DescribeSecurityBroadcastInfoOutcome
                 */
                DescribeSecurityBroadcastInfoOutcome DescribeSecurityBroadcastInfo(const Model::DescribeSecurityBroadcastInfoRequest &request);
                void DescribeSecurityBroadcastInfoAsync(const Model::DescribeSecurityBroadcastInfoRequest& request, const DescribeSecurityBroadcastInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityBroadcastInfoOutcomeCallable DescribeSecurityBroadcastInfoCallable(const Model::DescribeSecurityBroadcastInfoRequest& request);

                /**
                 *This API is used to obtain the security report list page.
                 * @param req DescribeSecurityBroadcastsRequest
                 * @return DescribeSecurityBroadcastsOutcome
                 */
                DescribeSecurityBroadcastsOutcome DescribeSecurityBroadcasts(const Model::DescribeSecurityBroadcastsRequest &request);
                void DescribeSecurityBroadcastsAsync(const Model::DescribeSecurityBroadcastsRequest& request, const DescribeSecurityBroadcastsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityBroadcastsOutcomeCallable DescribeSecurityBroadcastsCallable(const Model::DescribeSecurityBroadcastsRequest& request);

                /**
                 *This API is used to obtain the dynamic message data of security events.
                 * @param req DescribeSecurityDynamicsRequest
                 * @return DescribeSecurityDynamicsOutcome
                 */
                DescribeSecurityDynamicsOutcome DescribeSecurityDynamics(const Model::DescribeSecurityDynamicsRequest &request);
                void DescribeSecurityDynamicsAsync(const Model::DescribeSecurityDynamicsRequest& request, const DescribeSecurityDynamicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityDynamicsOutcomeCallable DescribeSecurityDynamicsCallable(const Model::DescribeSecurityDynamicsRequest& request);

                /**
                 *This API is used to obtain the statistics of security events.
                 * @param req DescribeSecurityEventStatRequest
                 * @return DescribeSecurityEventStatOutcome
                 */
                DescribeSecurityEventStatOutcome DescribeSecurityEventStat(const Model::DescribeSecurityEventStatRequest &request);
                void DescribeSecurityEventStatAsync(const Model::DescribeSecurityEventStatRequest& request, const DescribeSecurityEventStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityEventStatOutcomeCallable DescribeSecurityEventStatCallable(const Model::DescribeSecurityEventStatRequest& request);

                /**
                 *This API is used to obtain the statistics data of security overview-related events.
                 * @param req DescribeSecurityEventsCntRequest
                 * @return DescribeSecurityEventsCntOutcome
                 */
                DescribeSecurityEventsCntOutcome DescribeSecurityEventsCnt(const Model::DescribeSecurityEventsCntRequest &request);
                void DescribeSecurityEventsCntAsync(const Model::DescribeSecurityEventsCntRequest& request, const DescribeSecurityEventsCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityEventsCntOutcomeCallable DescribeSecurityEventsCntCallable(const Model::DescribeSecurityEventsCntRequest& request);

                /**
                 *接口已无效

This API is used to obtain the summary of security protection statuses.
                 * @param req DescribeSecurityProtectionStatRequest
                 * @return DescribeSecurityProtectionStatOutcome
                 */
                DescribeSecurityProtectionStatOutcome DescribeSecurityProtectionStat(const Model::DescribeSecurityProtectionStatRequest &request);
                void DescribeSecurityProtectionStatAsync(const Model::DescribeSecurityProtectionStatRequest& request, const DescribeSecurityProtectionStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityProtectionStatOutcomeCallable DescribeSecurityProtectionStatCallable(const Model::DescribeSecurityProtectionStatRequest& request);

                /**
                 *This API is used to obtain the security event statistics data.
                 * @param req DescribeSecurityTrendsRequest
                 * @return DescribeSecurityTrendsOutcome
                 */
                DescribeSecurityTrendsOutcome DescribeSecurityTrends(const Model::DescribeSecurityTrendsRequest &request);
                void DescribeSecurityTrendsAsync(const Model::DescribeSecurityTrendsRequest& request, const DescribeSecurityTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityTrendsOutcomeCallable DescribeSecurityTrendsCallable(const Model::DescribeSecurityTrendsRequest& request);

                /**
                 *This API is used to obtain the number of risky files pending to be processed + the number of affected servers + whether to try to detect + last detection time.
                 * @param req DescribeServersAndRiskAndFirstInfoRequest
                 * @return DescribeServersAndRiskAndFirstInfoOutcome
                 */
                DescribeServersAndRiskAndFirstInfoOutcome DescribeServersAndRiskAndFirstInfo(const Model::DescribeServersAndRiskAndFirstInfoRequest &request);
                void DescribeServersAndRiskAndFirstInfoAsync(const Model::DescribeServersAndRiskAndFirstInfoRequest& request, const DescribeServersAndRiskAndFirstInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServersAndRiskAndFirstInfoOutcomeCallable DescribeServersAndRiskAndFirstInfoCallable(const Model::DescribeServersAndRiskAndFirstInfoRequest& request);

                /**
                 *This API is used to query whether a policy exists by policy name.
                 * @param req DescribeStrategyExistRequest
                 * @return DescribeStrategyExistOutcome
                 */
                DescribeStrategyExistOutcome DescribeStrategyExist(const Model::DescribeStrategyExistRequest &request);
                void DescribeStrategyExistAsync(const Model::DescribeStrategyExistRequest& request, const DescribeStrategyExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStrategyExistOutcomeCallable DescribeStrategyExistCallable(const Model::DescribeStrategyExistRequest& request);

                /**
                 *This API is used to obtain the server information associated with the specified tag.
                 * @param req DescribeTagMachinesRequest
                 * @return DescribeTagMachinesOutcome
                 */
                DescribeTagMachinesOutcome DescribeTagMachines(const Model::DescribeTagMachinesRequest &request);
                void DescribeTagMachinesAsync(const Model::DescribeTagMachinesRequest& request, const DescribeTagMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagMachinesOutcomeCallable DescribeTagMachinesCallable(const Model::DescribeTagMachinesRequest& request);

                /**
                 *This API is used to obtain all host tags.
                 * @param req DescribeTagsRequest
                 * @return DescribeTagsOutcome
                 */
                DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest &request);
                void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request);

                /**
                 *This API is used to query the CWPP authorized trial report (only available for console applications).
                 * @param req DescribeTrialReportRequest
                 * @return DescribeTrialReportOutcome
                 */
                DescribeTrialReportOutcome DescribeTrialReport(const Model::DescribeTrialReportRequest &request);
                void DescribeTrialReportAsync(const Model::DescribeTrialReportRequest& request, const DescribeTrialReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrialReportOutcomeCallable DescribeTrialReportCallable(const Model::DescribeTrialReportRequest& request);

                /**
                 *This API is used to obtain the number of pending vulnerabilities of a specified category and the number of hosts in the vulnerability management module.
                 * @param req DescribeUndoVulCountsRequest
                 * @return DescribeUndoVulCountsOutcome
                 */
                DescribeUndoVulCountsOutcome DescribeUndoVulCounts(const Model::DescribeUndoVulCountsRequest &request);
                void DescribeUndoVulCountsAsync(const Model::DescribeUndoVulCountsRequest& request, const DescribeUndoVulCountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUndoVulCountsOutcomeCallable DescribeUndoVulCountsCallable(const Model::DescribeUndoVulCountsRequest& request);

                /**
                 *This API is used to query the user's custom configurations.
                 * @param req DescribeUsersConfigRequest
                 * @return DescribeUsersConfigOutcome
                 */
                DescribeUsersConfigOutcome DescribeUsersConfig(const Model::DescribeUsersConfigRequest &request);
                void DescribeUsersConfigAsync(const Model::DescribeUsersConfigRequest& request, const DescribeUsersConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsersConfigOutcomeCallable DescribeUsersConfigCallable(const Model::DescribeUsersConfigRequest& request);

                /**
                 *This API is used to query common log-in locations.
                 * @param req DescribeUsualLoginPlacesRequest
                 * @return DescribeUsualLoginPlacesOutcome
                 */
                DescribeUsualLoginPlacesOutcome DescribeUsualLoginPlaces(const Model::DescribeUsualLoginPlacesRequest &request);
                void DescribeUsualLoginPlacesAsync(const Model::DescribeUsualLoginPlacesRequest& request, const DescribeUsualLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsualLoginPlacesOutcomeCallable DescribeUsualLoginPlacesCallable(const Model::DescribeUsualLoginPlacesRequest& request);

                /**
                 *This API is used to obtain virus database and POC updates.
                 * @param req DescribeVdbAndPocInfoRequest
                 * @return DescribeVdbAndPocInfoOutcome
                 */
                DescribeVdbAndPocInfoOutcome DescribeVdbAndPocInfo(const Model::DescribeVdbAndPocInfoRequest &request);
                void DescribeVdbAndPocInfoAsync(const Model::DescribeVdbAndPocInfoRequest& request, const DescribeVdbAndPocInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVdbAndPocInfoOutcomeCallable DescribeVdbAndPocInfoCallable(const Model::DescribeVdbAndPocInfoRequest& request);

                /**
                 *This API is used to obtain the version comparison information.
                 * @param req DescribeVersionCompareChartRequest
                 * @return DescribeVersionCompareChartOutcome
                 */
                DescribeVersionCompareChartOutcome DescribeVersionCompareChart(const Model::DescribeVersionCompareChartRequest &request);
                void DescribeVersionCompareChartAsync(const Model::DescribeVersionCompareChartRequest& request, const DescribeVersionCompareChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVersionCompareChartOutcomeCallable DescribeVersionCompareChartCallable(const Model::DescribeVersionCompareChartRequest& request);

                /**
                 *This API is used to count the number of machines of Professional and Basic editions.
                 * @param req DescribeVersionStatisticsRequest
                 * @return DescribeVersionStatisticsOutcome
                 */
                DescribeVersionStatisticsOutcome DescribeVersionStatistics(const Model::DescribeVersionStatisticsRequest &request);
                void DescribeVersionStatisticsAsync(const Model::DescribeVersionStatisticsRequest& request, const DescribeVersionStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVersionStatisticsOutcomeCallable DescribeVersionStatisticsCallable(const Model::DescribeVersionStatisticsRequest& request);

                /**
                 *This API is used to obtain the attribute information of the specified point.
                 * @param req DescribeVertexDetailRequest
                 * @return DescribeVertexDetailOutcome
                 */
                DescribeVertexDetailOutcome DescribeVertexDetail(const Model::DescribeVertexDetailRequest &request);
                void DescribeVertexDetailAsync(const Model::DescribeVertexDetailRequest& request, const DescribeVertexDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVertexDetailOutcomeCallable DescribeVertexDetailCallable(const Model::DescribeVertexDetailRequest& request);

                /**
                 *This API is used to obtain the number of vulnerabilities of specified types in recent days and the number of hosts.
                 * @param req DescribeVulCountByDatesRequest
                 * @return DescribeVulCountByDatesOutcome
                 */
                DescribeVulCountByDatesOutcome DescribeVulCountByDates(const Model::DescribeVulCountByDatesRequest &request);
                void DescribeVulCountByDatesAsync(const Model::DescribeVulCountByDatesRequest& request, const DescribeVulCountByDatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulCountByDatesOutcomeCallable DescribeVulCountByDatesCallable(const Model::DescribeVulCountByDatesRequest& request);

                /**
                 *This API is used to query vulnerability details by CveId.
                 * @param req DescribeVulCveIdInfoRequest
                 * @return DescribeVulCveIdInfoOutcome
                 */
                DescribeVulCveIdInfoOutcome DescribeVulCveIdInfo(const Model::DescribeVulCveIdInfoRequest &request);
                void DescribeVulCveIdInfoAsync(const Model::DescribeVulCveIdInfoRequest& request, const DescribeVulCveIdInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulCveIdInfoOutcomeCallable DescribeVulCveIdInfoCallable(const Model::DescribeVulCveIdInfoRequest& request);

                /**
                 *This API is used to obtain the list of vulnerability defense events.
                 * @param req DescribeVulDefenceEventRequest
                 * @return DescribeVulDefenceEventOutcome
                 */
                DescribeVulDefenceEventOutcome DescribeVulDefenceEvent(const Model::DescribeVulDefenceEventRequest &request);
                void DescribeVulDefenceEventAsync(const Model::DescribeVulDefenceEventRequest& request, const DescribeVulDefenceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefenceEventOutcomeCallable DescribeVulDefenceEventCallable(const Model::DescribeVulDefenceEventRequest& request);

                /**
                 *This API is used to query the vulnerability defense list.
                 * @param req DescribeVulDefenceListRequest
                 * @return DescribeVulDefenceListOutcome
                 */
                DescribeVulDefenceListOutcome DescribeVulDefenceList(const Model::DescribeVulDefenceListRequest &request);
                void DescribeVulDefenceListAsync(const Model::DescribeVulDefenceListRequest& request, const DescribeVulDefenceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefenceListOutcomeCallable DescribeVulDefenceListCallable(const Model::DescribeVulDefenceListRequest& request);

                /**
                 *This API is used to obtain the vulnerability defense overview information, including event trend and plugin enabling status.
                 * @param req DescribeVulDefenceOverviewRequest
                 * @return DescribeVulDefenceOverviewOutcome
                 */
                DescribeVulDefenceOverviewOutcome DescribeVulDefenceOverview(const Model::DescribeVulDefenceOverviewRequest &request);
                void DescribeVulDefenceOverviewAsync(const Model::DescribeVulDefenceOverviewRequest& request, const DescribeVulDefenceOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefenceOverviewOutcomeCallable DescribeVulDefenceOverviewCallable(const Model::DescribeVulDefenceOverviewRequest& request);

                /**
                 *This API is used to obtain the vulnerability defense plugin information on a single host.
                 * @param req DescribeVulDefencePluginDetailRequest
                 * @return DescribeVulDefencePluginDetailOutcome
                 */
                DescribeVulDefencePluginDetailOutcome DescribeVulDefencePluginDetail(const Model::DescribeVulDefencePluginDetailRequest &request);
                void DescribeVulDefencePluginDetailAsync(const Model::DescribeVulDefencePluginDetailRequest& request, const DescribeVulDefencePluginDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefencePluginDetailOutcomeCallable DescribeVulDefencePluginDetailCallable(const Model::DescribeVulDefencePluginDetailRequest& request);

                /**
                 *This API is used to obtain the current number of abnormal plugins.
                 * @param req DescribeVulDefencePluginExceptionCountRequest
                 * @return DescribeVulDefencePluginExceptionCountOutcome
                 */
                DescribeVulDefencePluginExceptionCountOutcome DescribeVulDefencePluginExceptionCount(const Model::DescribeVulDefencePluginExceptionCountRequest &request);
                void DescribeVulDefencePluginExceptionCountAsync(const Model::DescribeVulDefencePluginExceptionCountRequest& request, const DescribeVulDefencePluginExceptionCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefencePluginExceptionCountOutcomeCallable DescribeVulDefencePluginExceptionCountCallable(const Model::DescribeVulDefencePluginExceptionCountRequest& request);

                /**
                 *This API is used to obtain the vulnerability defense plugin status of each host.
                 * @param req DescribeVulDefencePluginStatusRequest
                 * @return DescribeVulDefencePluginStatusOutcome
                 */
                DescribeVulDefencePluginStatusOutcome DescribeVulDefencePluginStatus(const Model::DescribeVulDefencePluginStatusRequest &request);
                void DescribeVulDefencePluginStatusAsync(const Model::DescribeVulDefencePluginStatusRequest& request, const DescribeVulDefencePluginStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefencePluginStatusOutcomeCallable DescribeVulDefencePluginStatusCallable(const Model::DescribeVulDefencePluginStatusRequest& request);

                /**
                 *This API is used to obtain the current vulnerability defense plugin settings.
                 * @param req DescribeVulDefenceSettingRequest
                 * @return DescribeVulDefenceSettingOutcome
                 */
                DescribeVulDefenceSettingOutcome DescribeVulDefenceSetting(const Model::DescribeVulDefenceSettingRequest &request);
                void DescribeVulDefenceSettingAsync(const Model::DescribeVulDefenceSettingRequest& request, const DescribeVulDefenceSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDefenceSettingOutcomeCallable DescribeVulDefenceSettingCallable(const Model::DescribeVulDefenceSettingRequest& request);

                /**
                 *This API is used to obtain the list of hosts affected by vulnerabilities.
                 * @param req DescribeVulEffectHostListRequest
                 * @return DescribeVulEffectHostListOutcome
                 */
                DescribeVulEffectHostListOutcome DescribeVulEffectHostList(const Model::DescribeVulEffectHostListRequest &request);
                void DescribeVulEffectHostListAsync(const Model::DescribeVulEffectHostListRequest& request, const DescribeVulEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulEffectHostListOutcomeCallable DescribeVulEffectHostListCallable(const Model::DescribeVulEffectHostListRequest& request);

                /**
                 *This API is used to obtain the list of components affected by vulnerabilities.
                 * @param req DescribeVulEffectModulesRequest
                 * @return DescribeVulEffectModulesOutcome
                 */
                DescribeVulEffectModulesOutcome DescribeVulEffectModules(const Model::DescribeVulEffectModulesRequest &request);
                void DescribeVulEffectModulesAsync(const Model::DescribeVulEffectModulesRequest& request, const DescribeVulEffectModulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulEffectModulesOutcomeCallable DescribeVulEffectModulesCallable(const Model::DescribeVulEffectModulesRequest& request);

                /**
                 *This API is used to obtain vulnerability emergency notifications.
                 * @param req DescribeVulEmergentMsgRequest
                 * @return DescribeVulEmergentMsgOutcome
                 */
                DescribeVulEmergentMsgOutcome DescribeVulEmergentMsg(const Model::DescribeVulEmergentMsgRequest &request);
                void DescribeVulEmergentMsgAsync(const Model::DescribeVulEmergentMsgRequest& request, const DescribeVulEmergentMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulEmergentMsgOutcomeCallable DescribeVulEmergentMsgCallable(const Model::DescribeVulEmergentMsgRequest& request);

                /**
                 *This API is used to check the host vulnerability fixing progress.
                 * @param req DescribeVulFixStatusRequest
                 * @return DescribeVulFixStatusOutcome
                 */
                DescribeVulFixStatusOutcome DescribeVulFixStatus(const Model::DescribeVulFixStatusRequest &request);
                void DescribeVulFixStatusAsync(const Model::DescribeVulFixStatusRequest& request, const DescribeVulFixStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulFixStatusOutcomeCallable DescribeVulFixStatusCallable(const Model::DescribeVulFixStatusRequest& request);

                /**
                 *This API is used to obtain the number of vulnerabilities pending to be processed and affected hosts.
                 * @param req DescribeVulHostCountScanTimeRequest
                 * @return DescribeVulHostCountScanTimeOutcome
                 */
                DescribeVulHostCountScanTimeOutcome DescribeVulHostCountScanTime(const Model::DescribeVulHostCountScanTimeRequest &request);
                void DescribeVulHostCountScanTimeAsync(const Model::DescribeVulHostCountScanTimeRequest& request, const DescribeVulHostCountScanTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulHostCountScanTimeOutcomeCallable DescribeVulHostCountScanTimeCallable(const Model::DescribeVulHostCountScanTimeRequest& request);

                /**
                 *This API is used to obtain the list of top server risks.
                 * @param req DescribeVulHostTopRequest
                 * @return DescribeVulHostTopOutcome
                 */
                DescribeVulHostTopOutcome DescribeVulHostTop(const Model::DescribeVulHostTopRequest &request);
                void DescribeVulHostTopAsync(const Model::DescribeVulHostTopRequest& request, const DescribeVulHostTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulHostTopOutcomeCallable DescribeVulHostTopCallable(const Model::DescribeVulHostTopRequest& request);

                /**
                 *This API is used to obtain vulnerability details with the CVSS version.
                 * @param req DescribeVulInfoCvssRequest
                 * @return DescribeVulInfoCvssOutcome
                 */
                DescribeVulInfoCvssOutcome DescribeVulInfoCvss(const Model::DescribeVulInfoCvssRequest &request);
                void DescribeVulInfoCvssAsync(const Model::DescribeVulInfoCvssRequest& request, const DescribeVulInfoCvssAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulInfoCvssOutcomeCallable DescribeVulInfoCvssCallable(const Model::DescribeVulInfoCvssRequest& request);

                /**
                 *This API is used to obtain the list of all user vulnerability tags.
                 * @param req DescribeVulLabelsRequest
                 * @return DescribeVulLabelsOutcome
                 */
                DescribeVulLabelsOutcome DescribeVulLabels(const Model::DescribeVulLabelsRequest &request);
                void DescribeVulLabelsAsync(const Model::DescribeVulLabelsRequest& request, const DescribeVulLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulLabelsOutcomeCallable DescribeVulLabelsCallable(const Model::DescribeVulLabelsRequest& request);

                /**
                 *This API is used to obtain the statistics of vulnerability quantity and level distribution.
                 * @param req DescribeVulLevelCountRequest
                 * @return DescribeVulLevelCountOutcome
                 */
                DescribeVulLevelCountOutcome DescribeVulLevelCount(const Model::DescribeVulLevelCountRequest &request);
                void DescribeVulLevelCountAsync(const Model::DescribeVulLevelCountRequest& request, const DescribeVulLevelCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulLevelCountOutcomeCallable DescribeVulLevelCountCallable(const Model::DescribeVulLevelCountRequest& request);

                /**
                 *This API is used to obtain the data of the vulnerability list.
                 * @param req DescribeVulListRequest
                 * @return DescribeVulListOutcome
                 */
                DescribeVulListOutcome DescribeVulList(const Model::DescribeVulListRequest &request);
                void DescribeVulListAsync(const Model::DescribeVulListRequest& request, const DescribeVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulListOutcomeCallable DescribeVulListCallable(const Model::DescribeVulListRequest& request);

                /**
                 *This API is used to obtain the data for the vulnerability overview.
                 * @param req DescribeVulOverviewRequest
                 * @return DescribeVulOverviewOutcome
                 */
                DescribeVulOverviewOutcome DescribeVulOverview(const Model::DescribeVulOverviewRequest &request);
                void DescribeVulOverviewAsync(const Model::DescribeVulOverviewRequest& request, const DescribeVulOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulOverviewOutcomeCallable DescribeVulOverviewCallable(const Model::DescribeVulOverviewRequest& request);

                /**
                 *This API is used to obtain the vulnerability database list.
                 * @param req DescribeVulStoreListRequest
                 * @return DescribeVulStoreListOutcome
                 */
                DescribeVulStoreListOutcome DescribeVulStoreList(const Model::DescribeVulStoreListRequest &request);
                void DescribeVulStoreListAsync(const Model::DescribeVulStoreListRequest& request, const DescribeVulStoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulStoreListOutcomeCallable DescribeVulStoreListCallable(const Model::DescribeVulStoreListRequest& request);

                /**
                 *This API is used to count top vulnerabilities.
                 * @param req DescribeVulTopRequest
                 * @return DescribeVulTopOutcome
                 */
                DescribeVulTopOutcome DescribeVulTop(const Model::DescribeVulTopRequest &request);
                void DescribeVulTopAsync(const Model::DescribeVulTopRequest& request, const DescribeVulTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulTopOutcomeCallable DescribeVulTopCallable(const Model::DescribeVulTopRequest& request);

                /**
                 *This API is used to obtain information of the vulnerability situation.
                 * @param req DescribeVulTrendRequest
                 * @return DescribeVulTrendOutcome
                 */
                DescribeVulTrendOutcome DescribeVulTrend(const Model::DescribeVulTrendRequest &request);
                void DescribeVulTrendAsync(const Model::DescribeVulTrendRequest& request, const DescribeVulTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulTrendOutcomeCallable DescribeVulTrendCallable(const Model::DescribeVulTrendRequest& request);

                /**
                 *This API is used to query the alarming machine scope settings.
                 * @param req DescribeWarningHostConfigRequest
                 * @return DescribeWarningHostConfigOutcome
                 */
                DescribeWarningHostConfigOutcome DescribeWarningHostConfig(const Model::DescribeWarningHostConfigRequest &request);
                void DescribeWarningHostConfigAsync(const Model::DescribeWarningHostConfigRequest& request, const DescribeWarningHostConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWarningHostConfigOutcomeCallable DescribeWarningHostConfigCallable(const Model::DescribeWarningHostConfigRequest& request);

                /**
                 *This API is used to obtain the list of the current user's alarms.
                 * @param req DescribeWarningListRequest
                 * @return DescribeWarningListOutcome
                 */
                DescribeWarningListOutcome DescribeWarningList(const Model::DescribeWarningListRequest &request);
                void DescribeWarningListAsync(const Model::DescribeWarningListRequest& request, const DescribeWarningListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWarningListOutcomeCallable DescribeWarningListCallable(const Model::DescribeWarningListRequest& request);

                /**
                 *This API is used to query alarm policies.
                 * @param req DescribeWebHookPolicyRequest
                 * @return DescribeWebHookPolicyOutcome
                 */
                DescribeWebHookPolicyOutcome DescribeWebHookPolicy(const Model::DescribeWebHookPolicyRequest &request);
                void DescribeWebHookPolicyAsync(const Model::DescribeWebHookPolicyRequest& request, const DescribeWebHookPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebHookPolicyOutcomeCallable DescribeWebHookPolicyCallable(const Model::DescribeWebHookPolicyRequest& request);

                /**
                 *This API is used to query the list of alarm recipients.
                 * @param req DescribeWebHookReceiverRequest
                 * @return DescribeWebHookReceiverOutcome
                 */
                DescribeWebHookReceiverOutcome DescribeWebHookReceiver(const Model::DescribeWebHookReceiverRequest &request);
                void DescribeWebHookReceiverAsync(const Model::DescribeWebHookReceiverRequest& request, const DescribeWebHookReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebHookReceiverOutcomeCallable DescribeWebHookReceiverCallable(const Model::DescribeWebHookReceiverRequest& request);

                /**
                 *This API is used to query the usage of policies associated with the specified alarm recipient.
                 * @param req DescribeWebHookReceiverUsageRequest
                 * @return DescribeWebHookReceiverUsageOutcome
                 */
                DescribeWebHookReceiverUsageOutcome DescribeWebHookReceiverUsage(const Model::DescribeWebHookReceiverUsageRequest &request);
                void DescribeWebHookReceiverUsageAsync(const Model::DescribeWebHookReceiverUsageRequest& request, const DescribeWebHookReceiverUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebHookReceiverUsageOutcomeCallable DescribeWebHookReceiverUsageCallable(const Model::DescribeWebHookReceiverUsageRequest& request);

                /**
                 *This API is used to obtain the details of the WeCom chatbot rules.
                 * @param req DescribeWebHookRuleRequest
                 * @return DescribeWebHookRuleOutcome
                 */
                DescribeWebHookRuleOutcome DescribeWebHookRule(const Model::DescribeWebHookRuleRequest &request);
                void DescribeWebHookRuleAsync(const Model::DescribeWebHookRuleRequest& request, const DescribeWebHookRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebHookRuleOutcomeCallable DescribeWebHookRuleCallable(const Model::DescribeWebHookRuleRequest& request);

                /**
                 *This API is used to obtain the list of WeCom chatbot rules.
                 * @param req DescribeWebHookRulesRequest
                 * @return DescribeWebHookRulesOutcome
                 */
                DescribeWebHookRulesOutcome DescribeWebHookRules(const Model::DescribeWebHookRulesRequest &request);
                void DescribeWebHookRulesAsync(const Model::DescribeWebHookRulesRequest& request, const DescribeWebHookRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebHookRulesOutcomeCallable DescribeWebHookRulesCallable(const Model::DescribeWebHookRulesRequest& request);

                /**
                 *This API is used to terminate resources.
                 * @param req DestroyOrderRequest
                 * @return DestroyOrderOutcome
                 */
                DestroyOrderOutcome DestroyOrder(const Model::DestroyOrderRequest &request);
                void DestroyOrderAsync(const Model::DestroyOrderRequest& request, const DestroyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyOrderOutcomeCallable DestroyOrderCallable(const Model::DestroyOrderRequest& request);

                /**
                 *This API is used to add or modify high-risk command rules.
                 * @param req EditBashRulesRequest
                 * @return EditBashRulesOutcome
                 */
                EditBashRulesOutcome EditBashRules(const Model::EditBashRulesRequest &request);
                void EditBashRulesAsync(const Model::EditBashRulesRequest& request, const EditBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditBashRulesOutcomeCallable EditBashRulesCallable(const Model::EditBashRulesRequest& request);

                /**
                 *This API is used to add or modify local privilege escalation rules (multiple servers supported).
                 * @param req EditPrivilegeRulesRequest
                 * @return EditPrivilegeRulesOutcome
                 */
                EditPrivilegeRulesOutcome EditPrivilegeRules(const Model::EditPrivilegeRulesRequest &request);
                void EditPrivilegeRulesAsync(const Model::EditPrivilegeRulesRequest& request, const EditPrivilegeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditPrivilegeRulesOutcomeCallable EditPrivilegeRulesCallable(const Model::EditPrivilegeRulesRequest& request);

                /**
                 *This API is used to edit reverse shell rules (multiple servers supported).

                 * @param req EditReverseShellRulesRequest
                 * @return EditReverseShellRulesOutcome
                 */
                EditReverseShellRulesOutcome EditReverseShellRules(const Model::EditReverseShellRulesRequest &request);
                void EditReverseShellRulesAsync(const Model::EditReverseShellRulesRequest& request, const EditReverseShellRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditReverseShellRulesOutcomeCallable EditReverseShellRulesCallable(const Model::EditReverseShellRulesRequest& request);

                /**
                 *This API is used to add or edit tags.
                 * @param req EditTagsRequest
                 * @return EditTagsOutcome
                 */
                EditTagsOutcome EditTags(const Model::EditTagsRequest &request);
                void EditTagsAsync(const Model::EditTagsRequest& request, const EditTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditTagsOutcomeCallable EditTagsCallable(const Model::EditTagsRequest& request);

                /**
                 *This API is used to export the list of asset management applications.
                 * @param req ExportAssetAppListRequest
                 * @return ExportAssetAppListOutcome
                 */
                ExportAssetAppListOutcome ExportAssetAppList(const Model::ExportAssetAppListRequest &request);
                void ExportAssetAppListAsync(const Model::ExportAssetAppListRequest& request, const ExportAssetAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetAppListOutcomeCallable ExportAssetAppListCallable(const Model::ExportAssetAppListRequest& request);

                /**
                 *This API is used to export the list of asset management kernel modules.
                 * @param req ExportAssetCoreModuleListRequest
                 * @return ExportAssetCoreModuleListOutcome
                 */
                ExportAssetCoreModuleListOutcome ExportAssetCoreModuleList(const Model::ExportAssetCoreModuleListRequest &request);
                void ExportAssetCoreModuleListAsync(const Model::ExportAssetCoreModuleListRequest& request, const ExportAssetCoreModuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetCoreModuleListOutcomeCallable ExportAssetCoreModuleListCallable(const Model::ExportAssetCoreModuleListRequest& request);

                /**
                 *This API is used to export the list of asset management databases.
                 * @param req ExportAssetDatabaseListRequest
                 * @return ExportAssetDatabaseListOutcome
                 */
                ExportAssetDatabaseListOutcome ExportAssetDatabaseList(const Model::ExportAssetDatabaseListRequest &request);
                void ExportAssetDatabaseListAsync(const Model::ExportAssetDatabaseListRequest& request, const ExportAssetDatabaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetDatabaseListOutcomeCallable ExportAssetDatabaseListCallable(const Model::ExportAssetDatabaseListRequest& request);

                /**
                 *This API is used to export the list of asset management environment variables.
                 * @param req ExportAssetEnvListRequest
                 * @return ExportAssetEnvListOutcome
                 */
                ExportAssetEnvListOutcome ExportAssetEnvList(const Model::ExportAssetEnvListRequest &request);
                void ExportAssetEnvListAsync(const Model::ExportAssetEnvListRequest& request, const ExportAssetEnvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetEnvListOutcomeCallable ExportAssetEnvListCallable(const Model::ExportAssetEnvListRequest& request);

                /**
                 *This API is used to export the list of asset management startup services.
                 * @param req ExportAssetInitServiceListRequest
                 * @return ExportAssetInitServiceListOutcome
                 */
                ExportAssetInitServiceListOutcome ExportAssetInitServiceList(const Model::ExportAssetInitServiceListRequest &request);
                void ExportAssetInitServiceListAsync(const Model::ExportAssetInitServiceListRequest& request, const ExportAssetInitServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetInitServiceListOutcomeCallable ExportAssetInitServiceListCallable(const Model::ExportAssetInitServiceListRequest& request);

                /**
                 *This API is used to export the list of Jar packages.
                 * @param req ExportAssetJarListRequest
                 * @return ExportAssetJarListOutcome
                 */
                ExportAssetJarListOutcome ExportAssetJarList(const Model::ExportAssetJarListRequest &request);
                void ExportAssetJarListAsync(const Model::ExportAssetJarListRequest& request, const ExportAssetJarListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetJarListOutcomeCallable ExportAssetJarListCallable(const Model::ExportAssetJarListRequest& request);

                /**
                 *This API is used to export asset management host resource details.
                 * @param req ExportAssetMachineDetailRequest
                 * @return ExportAssetMachineDetailOutcome
                 */
                ExportAssetMachineDetailOutcome ExportAssetMachineDetail(const Model::ExportAssetMachineDetailRequest &request);
                void ExportAssetMachineDetailAsync(const Model::ExportAssetMachineDetailRequest& request, const ExportAssetMachineDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetMachineDetailOutcomeCallable ExportAssetMachineDetailCallable(const Model::ExportAssetMachineDetailRequest& request);

                /**
                 *This API is used to export the list of resource monitoring.
                 * @param req ExportAssetMachineListRequest
                 * @return ExportAssetMachineListOutcome
                 */
                ExportAssetMachineListOutcome ExportAssetMachineList(const Model::ExportAssetMachineListRequest &request);
                void ExportAssetMachineListAsync(const Model::ExportAssetMachineListRequest& request, const ExportAssetMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetMachineListOutcomeCallable ExportAssetMachineListCallable(const Model::ExportAssetMachineListRequest& request);

                /**
                 *This API is used to export the list of scheduled asset management tasks.
                 * @param req ExportAssetPlanTaskListRequest
                 * @return ExportAssetPlanTaskListOutcome
                 */
                ExportAssetPlanTaskListOutcome ExportAssetPlanTaskList(const Model::ExportAssetPlanTaskListRequest &request);
                void ExportAssetPlanTaskListAsync(const Model::ExportAssetPlanTaskListRequest& request, const ExportAssetPlanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetPlanTaskListOutcomeCallable ExportAssetPlanTaskListCallable(const Model::ExportAssetPlanTaskListRequest& request);

                /**
                 *This API is used to export the list of asset management ports.
                 * @param req ExportAssetPortInfoListRequest
                 * @return ExportAssetPortInfoListOutcome
                 */
                ExportAssetPortInfoListOutcome ExportAssetPortInfoList(const Model::ExportAssetPortInfoListRequest &request);
                void ExportAssetPortInfoListAsync(const Model::ExportAssetPortInfoListRequest& request, const ExportAssetPortInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetPortInfoListOutcomeCallable ExportAssetPortInfoListCallable(const Model::ExportAssetPortInfoListRequest& request);

                /**
                 *This API is used to export the asset management process list.
                 * @param req ExportAssetProcessInfoListRequest
                 * @return ExportAssetProcessInfoListOutcome
                 */
                ExportAssetProcessInfoListOutcome ExportAssetProcessInfoList(const Model::ExportAssetProcessInfoListRequest &request);
                void ExportAssetProcessInfoListAsync(const Model::ExportAssetProcessInfoListRequest& request, const ExportAssetProcessInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetProcessInfoListOutcomeCallable ExportAssetProcessInfoListCallable(const Model::ExportAssetProcessInfoListRequest& request);

                /**
                 *This API is used to export host trends of recent days (up to last 90 days).
                 * @param req ExportAssetRecentMachineInfoRequest
                 * @return ExportAssetRecentMachineInfoOutcome
                 */
                ExportAssetRecentMachineInfoOutcome ExportAssetRecentMachineInfo(const Model::ExportAssetRecentMachineInfoRequest &request);
                void ExportAssetRecentMachineInfoAsync(const Model::ExportAssetRecentMachineInfoRequest& request, const ExportAssetRecentMachineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetRecentMachineInfoOutcomeCallable ExportAssetRecentMachineInfoCallable(const Model::ExportAssetRecentMachineInfoRequest& request);

                /**
                 *This API is used to export the list of system installation packages for asset management.
                 * @param req ExportAssetSystemPackageListRequest
                 * @return ExportAssetSystemPackageListOutcome
                 */
                ExportAssetSystemPackageListOutcome ExportAssetSystemPackageList(const Model::ExportAssetSystemPackageListRequest &request);
                void ExportAssetSystemPackageListAsync(const Model::ExportAssetSystemPackageListRequest& request, const ExportAssetSystemPackageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetSystemPackageListOutcomeCallable ExportAssetSystemPackageListCallable(const Model::ExportAssetSystemPackageListRequest& request);

                /**
                 *This API is used to export the account list.
                 * @param req ExportAssetUserListRequest
                 * @return ExportAssetUserListOutcome
                 */
                ExportAssetUserListOutcome ExportAssetUserList(const Model::ExportAssetUserListRequest &request);
                void ExportAssetUserListAsync(const Model::ExportAssetUserListRequest& request, const ExportAssetUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetUserListOutcomeCallable ExportAssetUserListCallable(const Model::ExportAssetUserListRequest& request);

                /**
                 *This API is used to export the list of asset management Web applications.
                 * @param req ExportAssetWebAppListRequest
                 * @return ExportAssetWebAppListOutcome
                 */
                ExportAssetWebAppListOutcome ExportAssetWebAppList(const Model::ExportAssetWebAppListRequest &request);
                void ExportAssetWebAppListAsync(const Model::ExportAssetWebAppListRequest& request, const ExportAssetWebAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetWebAppListOutcomeCallable ExportAssetWebAppListCallable(const Model::ExportAssetWebAppListRequest& request);

                /**
                 *This API is used to export the list of asset management Web frameworks.
                 * @param req ExportAssetWebFrameListRequest
                 * @return ExportAssetWebFrameListOutcome
                 */
                ExportAssetWebFrameListOutcome ExportAssetWebFrameList(const Model::ExportAssetWebFrameListRequest &request);
                void ExportAssetWebFrameListAsync(const Model::ExportAssetWebFrameListRequest& request, const ExportAssetWebFrameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetWebFrameListOutcomeCallable ExportAssetWebFrameListCallable(const Model::ExportAssetWebFrameListRequest& request);

                /**
                 *This API is used to export the list of Web sites.
                 * @param req ExportAssetWebLocationListRequest
                 * @return ExportAssetWebLocationListOutcome
                 */
                ExportAssetWebLocationListOutcome ExportAssetWebLocationList(const Model::ExportAssetWebLocationListRequest &request);
                void ExportAssetWebLocationListAsync(const Model::ExportAssetWebLocationListRequest& request, const ExportAssetWebLocationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetWebLocationListOutcomeCallable ExportAssetWebLocationListCallable(const Model::ExportAssetWebLocationListRequest& request);

                /**
                 *This API is used to export the list of asset management Web services.
                 * @param req ExportAssetWebServiceInfoListRequest
                 * @return ExportAssetWebServiceInfoListOutcome
                 */
                ExportAssetWebServiceInfoListOutcome ExportAssetWebServiceInfoList(const Model::ExportAssetWebServiceInfoListRequest &request);
                void ExportAssetWebServiceInfoListAsync(const Model::ExportAssetWebServiceInfoListRequest& request, const ExportAssetWebServiceInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAssetWebServiceInfoListOutcomeCallable ExportAssetWebServiceInfoListCallable(const Model::ExportAssetWebServiceInfoListRequest& request);

                /**
                 *This API is used to export network attack events.
                 * @param req ExportAttackEventsRequest
                 * @return ExportAttackEventsOutcome
                 */
                ExportAttackEventsOutcome ExportAttackEvents(const Model::ExportAttackEventsRequest &request);
                void ExportAttackEventsAsync(const Model::ExportAttackEventsRequest& request, const ExportAttackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAttackEventsOutcomeCallable ExportAttackEventsCallable(const Model::ExportAttackEventsRequest& request);

                /**
                 *This API is used to export the list of hosts affected by baseline.
                 * @param req ExportBaselineEffectHostListRequest
                 * @return ExportBaselineEffectHostListOutcome
                 */
                ExportBaselineEffectHostListOutcome ExportBaselineEffectHostList(const Model::ExportBaselineEffectHostListRequest &request);
                void ExportBaselineEffectHostListAsync(const Model::ExportBaselineEffectHostListRequest& request, const ExportBaselineEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBaselineEffectHostListOutcomeCallable ExportBaselineEffectHostListCallable(const Model::ExportBaselineEffectHostListRequest& request);

                /**
                 *This API is used to export the list of fixing baselines.
                 * @param req ExportBaselineFixListRequest
                 * @return ExportBaselineFixListOutcome
                 */
                ExportBaselineFixListOutcome ExportBaselineFixList(const Model::ExportBaselineFixListRequest &request);
                void ExportBaselineFixListAsync(const Model::ExportBaselineFixListRequest& request, const ExportBaselineFixListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBaselineFixListOutcomeCallable ExportBaselineFixListCallable(const Model::ExportBaselineFixListRequest& request);

                /**
                 *This API is used to export the baseline for host detection.
                 * @param req ExportBaselineHostDetectListRequest
                 * @return ExportBaselineHostDetectListOutcome
                 */
                ExportBaselineHostDetectListOutcome ExportBaselineHostDetectList(const Model::ExportBaselineHostDetectListRequest &request);
                void ExportBaselineHostDetectListAsync(const Model::ExportBaselineHostDetectListRequest& request, const ExportBaselineHostDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBaselineHostDetectListOutcomeCallable ExportBaselineHostDetectListCallable(const Model::ExportBaselineHostDetectListRequest& request);

                /**
                 *This API is used to export baseline check items.
                 * @param req ExportBaselineItemDetectListRequest
                 * @return ExportBaselineItemDetectListOutcome
                 */
                ExportBaselineItemDetectListOutcome ExportBaselineItemDetectList(const Model::ExportBaselineItemDetectListRequest &request);
                void ExportBaselineItemDetectListAsync(const Model::ExportBaselineItemDetectListRequest& request, const ExportBaselineItemDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBaselineItemDetectListOutcomeCallable ExportBaselineItemDetectListCallable(const Model::ExportBaselineItemDetectListRequest& request);

                /**
                 *This API is used to export the list of baselines.
                 * @param req ExportBaselineListRequest
                 * @return ExportBaselineListOutcome
                 */
                ExportBaselineListOutcome ExportBaselineList(const Model::ExportBaselineListRequest &request);
                void ExportBaselineListAsync(const Model::ExportBaselineListRequest& request, const ExportBaselineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBaselineListOutcomeCallable ExportBaselineListCallable(const Model::ExportBaselineListRequest& request);

                /**
                 *This API is used to export high-risk command events.
                 * @param req ExportBashEventsRequest
                 * @return ExportBashEventsOutcome
                 */
                ExportBashEventsOutcome ExportBashEvents(const Model::ExportBashEventsRequest &request);
                void ExportBashEventsAsync(const Model::ExportBashEventsRequest& request, const ExportBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBashEventsOutcomeCallable ExportBashEventsCallable(const Model::ExportBashEventsRequest& request);

                /**
                 *This API is used to export high-risk command events (new).
                 * @param req ExportBashEventsNewRequest
                 * @return ExportBashEventsNewOutcome
                 */
                ExportBashEventsNewOutcome ExportBashEventsNew(const Model::ExportBashEventsNewRequest &request);
                void ExportBashEventsNewAsync(const Model::ExportBashEventsNewRequest& request, const ExportBashEventsNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBashEventsNewOutcomeCallable ExportBashEventsNewCallable(const Model::ExportBashEventsNewRequest& request);

                /**
                 *This API is used to export the high-risk command policy.
                 * @param req ExportBashPoliciesRequest
                 * @return ExportBashPoliciesOutcome
                 */
                ExportBashPoliciesOutcome ExportBashPolicies(const Model::ExportBashPoliciesRequest &request);
                void ExportBashPoliciesAsync(const Model::ExportBashPoliciesRequest& request, const ExportBashPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBashPoliciesOutcomeCallable ExportBashPoliciesCallable(const Model::ExportBashPoliciesRequest& request);

                /**
                 *This API is used to export password cracking records to a CSV file.
                 * @param req ExportBruteAttacksRequest
                 * @return ExportBruteAttacksOutcome
                 */
                ExportBruteAttacksOutcome ExportBruteAttacks(const Model::ExportBruteAttacksRequest &request);
                void ExportBruteAttacksAsync(const Model::ExportBruteAttacksRequest& request, const ExportBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBruteAttacksOutcomeCallable ExportBruteAttacksCallable(const Model::ExportBruteAttacksRequest& request);

                /**
                 *This API is used to export core file events.
                 * @param req ExportFileTamperEventsRequest
                 * @return ExportFileTamperEventsOutcome
                 */
                ExportFileTamperEventsOutcome ExportFileTamperEvents(const Model::ExportFileTamperEventsRequest &request);
                void ExportFileTamperEventsAsync(const Model::ExportFileTamperEventsRequest& request, const ExportFileTamperEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportFileTamperEventsOutcomeCallable ExportFileTamperEventsCallable(const Model::ExportFileTamperEventsRequest& request);

                /**
                 *This API is used to export core file monitoring rules.
                 * @param req ExportFileTamperRulesRequest
                 * @return ExportFileTamperRulesOutcome
                 */
                ExportFileTamperRulesOutcome ExportFileTamperRules(const Model::ExportFileTamperRulesRequest &request);
                void ExportFileTamperRulesAsync(const Model::ExportFileTamperRulesRequest& request, const ExportFileTamperRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportFileTamperRulesOutcomeCallable ExportFileTamperRulesCallable(const Model::ExportFileTamperRulesRequest& request);

                /**
                 *This API is used to export information of ignored baseline detection items.
                 * @param req ExportIgnoreBaselineRuleRequest
                 * @return ExportIgnoreBaselineRuleOutcome
                 */
                ExportIgnoreBaselineRuleOutcome ExportIgnoreBaselineRule(const Model::ExportIgnoreBaselineRuleRequest &request);
                void ExportIgnoreBaselineRuleAsync(const Model::ExportIgnoreBaselineRuleRequest& request, const ExportIgnoreBaselineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportIgnoreBaselineRuleOutcomeCallable ExportIgnoreBaselineRuleCallable(const Model::ExportIgnoreBaselineRuleRequest& request);

                /**
                 *This API is used to export the list of hosts affected by ignored detection items based on detection item IDs.
                 * @param req ExportIgnoreRuleEffectHostListRequest
                 * @return ExportIgnoreRuleEffectHostListOutcome
                 */
                ExportIgnoreRuleEffectHostListOutcome ExportIgnoreRuleEffectHostList(const Model::ExportIgnoreRuleEffectHostListRequest &request);
                void ExportIgnoreRuleEffectHostListAsync(const Model::ExportIgnoreRuleEffectHostListRequest& request, const ExportIgnoreRuleEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportIgnoreRuleEffectHostListOutcomeCallable ExportIgnoreRuleEffectHostListCallable(const Model::ExportIgnoreRuleEffectHostListRequest& request);

                /**
                 *This API is used to export the Java webshell plugin information.
                 * @param req ExportJavaMemShellPluginsRequest
                 * @return ExportJavaMemShellPluginsOutcome
                 */
                ExportJavaMemShellPluginsOutcome ExportJavaMemShellPlugins(const Model::ExportJavaMemShellPluginsRequest &request);
                void ExportJavaMemShellPluginsAsync(const Model::ExportJavaMemShellPluginsRequest& request, const ExportJavaMemShellPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportJavaMemShellPluginsOutcomeCallable ExportJavaMemShellPluginsCallable(const Model::ExportJavaMemShellPluginsRequest& request);

                /**
                 *This API is used to export the list of Java webshell events.
                 * @param req ExportJavaMemShellsRequest
                 * @return ExportJavaMemShellsOutcome
                 */
                ExportJavaMemShellsOutcome ExportJavaMemShells(const Model::ExportJavaMemShellsRequest &request);
                void ExportJavaMemShellsAsync(const Model::ExportJavaMemShellsRequest& request, const ExportJavaMemShellsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportJavaMemShellsOutcomeCallable ExportJavaMemShellsCallable(const Model::ExportJavaMemShellsRequest& request);

                /**
                 *This API is used to export authorization details.
                 * @param req ExportLicenseDetailRequest
                 * @return ExportLicenseDetailOutcome
                 */
                ExportLicenseDetailOutcome ExportLicenseDetail(const Model::ExportLicenseDetailRequest &request);
                void ExportLicenseDetailAsync(const Model::ExportLicenseDetailRequest& request, const ExportLicenseDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportLicenseDetailOutcomeCallable ExportLicenseDetailCallable(const Model::ExportLicenseDetailRequest& request);

                /**
                 *This API is used to export the downloaded malicious request files.
                 * @param req ExportMaliciousRequestsRequest
                 * @return ExportMaliciousRequestsOutcome
                 */
                ExportMaliciousRequestsOutcome ExportMaliciousRequests(const Model::ExportMaliciousRequestsRequest &request);
                void ExportMaliciousRequestsAsync(const Model::ExportMaliciousRequestsRequest& request, const ExportMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportMaliciousRequestsOutcomeCallable ExportMaliciousRequestsCallable(const Model::ExportMaliciousRequestsRequest& request);

                /**
                 *This API is used to export Trojan records to a CSV file.
                 * @param req ExportMalwaresRequest
                 * @return ExportMalwaresOutcome
                 */
                ExportMalwaresOutcome ExportMalwares(const Model::ExportMalwaresRequest &request);
                void ExportMalwaresAsync(const Model::ExportMalwaresRequest& request, const ExportMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportMalwaresOutcomeCallable ExportMalwaresCallable(const Model::ExportMalwaresRequest& request);

                /**
                 *This API is used to export cross-region log-in event records in CSV format.
                 * @param req ExportNonlocalLoginPlacesRequest
                 * @return ExportNonlocalLoginPlacesOutcome
                 */
                ExportNonlocalLoginPlacesOutcome ExportNonlocalLoginPlaces(const Model::ExportNonlocalLoginPlacesRequest &request);
                void ExportNonlocalLoginPlacesAsync(const Model::ExportNonlocalLoginPlacesRequest& request, const ExportNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportNonlocalLoginPlacesOutcomeCallable ExportNonlocalLoginPlacesCallable(const Model::ExportNonlocalLoginPlacesRequest& request);

                /**
                 *This API is used to export local privilege escalation events.
                 * @param req ExportPrivilegeEventsRequest
                 * @return ExportPrivilegeEventsOutcome
                 */
                ExportPrivilegeEventsOutcome ExportPrivilegeEvents(const Model::ExportPrivilegeEventsRequest &request);
                void ExportPrivilegeEventsAsync(const Model::ExportPrivilegeEventsRequest& request, const ExportPrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportPrivilegeEventsOutcomeCallable ExportPrivilegeEventsCallable(const Model::ExportPrivilegeEventsRequest& request);

                /**
                 *This API is used to export the list of host snapshot backups.
                 * @param req ExportRansomDefenseBackupListRequest
                 * @return ExportRansomDefenseBackupListOutcome
                 */
                ExportRansomDefenseBackupListOutcome ExportRansomDefenseBackupList(const Model::ExportRansomDefenseBackupListRequest &request);
                void ExportRansomDefenseBackupListAsync(const Model::ExportRansomDefenseBackupListRequest& request, const ExportRansomDefenseBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportRansomDefenseBackupListOutcomeCallable ExportRansomDefenseBackupListCallable(const Model::ExportRansomDefenseBackupListRequest& request);

                /**
                 *This API is used to export the list of anti-ransomware events.
                 * @param req ExportRansomDefenseEventsListRequest
                 * @return ExportRansomDefenseEventsListOutcome
                 */
                ExportRansomDefenseEventsListOutcome ExportRansomDefenseEventsList(const Model::ExportRansomDefenseEventsListRequest &request);
                void ExportRansomDefenseEventsListAsync(const Model::ExportRansomDefenseEventsListRequest& request, const ExportRansomDefenseEventsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportRansomDefenseEventsListOutcomeCallable ExportRansomDefenseEventsListCallable(const Model::ExportRansomDefenseEventsListRequest& request);

                /**
                 *This API is used to export the backup details list.
                 * @param req ExportRansomDefenseMachineListRequest
                 * @return ExportRansomDefenseMachineListOutcome
                 */
                ExportRansomDefenseMachineListOutcome ExportRansomDefenseMachineList(const Model::ExportRansomDefenseMachineListRequest &request);
                void ExportRansomDefenseMachineListAsync(const Model::ExportRansomDefenseMachineListRequest& request, const ExportRansomDefenseMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportRansomDefenseMachineListOutcomeCallable ExportRansomDefenseMachineListCallable(const Model::ExportRansomDefenseMachineListRequest& request);

                /**
                 *This API is used to export the anti-ransomware policy list.
                 * @param req ExportRansomDefenseStrategyListRequest
                 * @return ExportRansomDefenseStrategyListOutcome
                 */
                ExportRansomDefenseStrategyListOutcome ExportRansomDefenseStrategyList(const Model::ExportRansomDefenseStrategyListRequest &request);
                void ExportRansomDefenseStrategyListAsync(const Model::ExportRansomDefenseStrategyListRequest& request, const ExportRansomDefenseStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportRansomDefenseStrategyListOutcomeCallable ExportRansomDefenseStrategyListCallable(const Model::ExportRansomDefenseStrategyListRequest& request);

                /**
                 *This API is used to export the list of machines bound to ransomware defense policies.
                 * @param req ExportRansomDefenseStrategyMachinesRequest
                 * @return ExportRansomDefenseStrategyMachinesOutcome
                 */
                ExportRansomDefenseStrategyMachinesOutcome ExportRansomDefenseStrategyMachines(const Model::ExportRansomDefenseStrategyMachinesRequest &request);
                void ExportRansomDefenseStrategyMachinesAsync(const Model::ExportRansomDefenseStrategyMachinesRequest& request, const ExportRansomDefenseStrategyMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportRansomDefenseStrategyMachinesOutcomeCallable ExportRansomDefenseStrategyMachinesCallable(const Model::ExportRansomDefenseStrategyMachinesRequest& request);

                /**
                 *This API is used to export reverse shell events.
                 * @param req ExportReverseShellEventsRequest
                 * @return ExportReverseShellEventsOutcome
                 */
                ExportReverseShellEventsOutcome ExportReverseShellEvents(const Model::ExportReverseShellEventsRequest &request);
                void ExportReverseShellEventsAsync(const Model::ExportReverseShellEventsRequest& request, const ExportReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportReverseShellEventsOutcomeCallable ExportReverseShellEventsCallable(const Model::ExportReverseShellEventsRequest& request);

                /**
                 *This API is used to export the malicious request event list.
                 * @param req ExportRiskDnsEventListRequest
                 * @return ExportRiskDnsEventListOutcome
                 */
                ExportRiskDnsEventListOutcome ExportRiskDnsEventList(const Model::ExportRiskDnsEventListRequest &request);
                void ExportRiskDnsEventListAsync(const Model::ExportRiskDnsEventListRequest& request, const ExportRiskDnsEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportRiskDnsEventListOutcomeCallable ExportRiskDnsEventListCallable(const Model::ExportRiskDnsEventListRequest& request);

                /**
                 *This API is used to export the malicious request policy list.
                 * @param req ExportRiskDnsPolicyListRequest
                 * @return ExportRiskDnsPolicyListOutcome
                 */
                ExportRiskDnsPolicyListOutcome ExportRiskDnsPolicyList(const Model::ExportRiskDnsPolicyListRequest &request);
                void ExportRiskDnsPolicyListAsync(const Model::ExportRiskDnsPolicyListRequest& request, const ExportRiskDnsPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportRiskDnsPolicyListOutcomeCallable ExportRiskDnsPolicyListCallable(const Model::ExportRiskDnsPolicyListRequest& request);

                /**
                 *This API is used to export abnormal process events.
                 * @param req ExportRiskProcessEventsRequest
                 * @return ExportRiskProcessEventsOutcome
                 */
                ExportRiskProcessEventsOutcome ExportRiskProcessEvents(const Model::ExportRiskProcessEventsRequest &request);
                void ExportRiskProcessEventsAsync(const Model::ExportRiskProcessEventsRequest& request, const ExportRiskProcessEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportRiskProcessEventsOutcomeCallable ExportRiskProcessEventsCallable(const Model::ExportRiskProcessEventsRequest& request);

                /**
                 *This API is used to export the specified scan task details by task ID.
                 * @param req ExportScanTaskDetailsRequest
                 * @return ExportScanTaskDetailsOutcome
                 */
                ExportScanTaskDetailsOutcome ExportScanTaskDetails(const Model::ExportScanTaskDetailsRequest &request);
                void ExportScanTaskDetailsAsync(const Model::ExportScanTaskDetailsRequest& request, const ExportScanTaskDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportScanTaskDetailsOutcomeCallable ExportScanTaskDetailsCallable(const Model::ExportScanTaskDetailsRequest& request);

                /**
                 *This API is used to export risk trends.
                 * @param req ExportSecurityTrendsRequest
                 * @return ExportSecurityTrendsOutcome
                 */
                ExportSecurityTrendsOutcome ExportSecurityTrends(const Model::ExportSecurityTrendsRequest &request);
                void ExportSecurityTrendsAsync(const Model::ExportSecurityTrendsRequest& request, const ExportSecurityTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportSecurityTrendsOutcomeCallable ExportSecurityTrendsCallable(const Model::ExportSecurityTrendsRequest& request);

                /**
                 *This API is used to export log files with large data volumes asynchronously.
                 * @param req ExportTasksRequest
                 * @return ExportTasksOutcome
                 */
                ExportTasksOutcome ExportTasks(const Model::ExportTasksRequest &request);
                void ExportTasksAsync(const Model::ExportTasksRequest& request, const ExportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportTasksOutcomeCallable ExportTasksCallable(const Model::ExportTasksRequest& request);

                /**
                 *This API is used to export vulnerability defense events.
                 * @param req ExportVulDefenceEventRequest
                 * @return ExportVulDefenceEventOutcome
                 */
                ExportVulDefenceEventOutcome ExportVulDefenceEvent(const Model::ExportVulDefenceEventRequest &request);
                void ExportVulDefenceEventAsync(const Model::ExportVulDefenceEventRequest& request, const ExportVulDefenceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVulDefenceEventOutcomeCallable ExportVulDefenceEventCallable(const Model::ExportVulDefenceEventRequest& request);

                /**
                 *This API is used to export the list of vulnerability defenses.
                 * @param req ExportVulDefenceListRequest
                 * @return ExportVulDefenceListOutcome
                 */
                ExportVulDefenceListOutcome ExportVulDefenceList(const Model::ExportVulDefenceListRequest &request);
                void ExportVulDefenceListAsync(const Model::ExportVulDefenceListRequest& request, const ExportVulDefenceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVulDefenceListOutcomeCallable ExportVulDefenceListCallable(const Model::ExportVulDefenceListRequest& request);

                /**
                 *This API is used to export vulnerability defense plugin events.
                 * @param req ExportVulDefencePluginEventRequest
                 * @return ExportVulDefencePluginEventOutcome
                 */
                ExportVulDefencePluginEventOutcome ExportVulDefencePluginEvent(const Model::ExportVulDefencePluginEventRequest &request);
                void ExportVulDefencePluginEventAsync(const Model::ExportVulDefencePluginEventRequest& request, const ExportVulDefencePluginEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVulDefencePluginEventOutcomeCallable ExportVulDefencePluginEventCallable(const Model::ExportVulDefencePluginEventRequest& request);

                /**
                 *This API is used to export the vulnerability detection Excel document.
                 * @param req ExportVulDetectionExcelRequest
                 * @return ExportVulDetectionExcelOutcome
                 */
                ExportVulDetectionExcelOutcome ExportVulDetectionExcel(const Model::ExportVulDetectionExcelRequest &request);
                void ExportVulDetectionExcelAsync(const Model::ExportVulDetectionExcelRequest& request, const ExportVulDetectionExcelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVulDetectionExcelOutcomeCallable ExportVulDetectionExcelCallable(const Model::ExportVulDetectionExcelRequest& request);

                /**
                 *This API is used to export the vulnerability detection report.
                 * @param req ExportVulDetectionReportRequest
                 * @return ExportVulDetectionReportOutcome
                 */
                ExportVulDetectionReportOutcome ExportVulDetectionReport(const Model::ExportVulDetectionReportRequest &request);
                void ExportVulDetectionReportAsync(const Model::ExportVulDetectionReportRequest& request, const ExportVulDetectionReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVulDetectionReportOutcomeCallable ExportVulDetectionReportCallable(const Model::ExportVulDetectionReportRequest& request);

                /**
                 *This API is used to export the list of hosts affected by vulnerabilities.
                 * @param req ExportVulEffectHostListRequest
                 * @return ExportVulEffectHostListOutcome
                 */
                ExportVulEffectHostListOutcome ExportVulEffectHostList(const Model::ExportVulEffectHostListRequest &request);
                void ExportVulEffectHostListAsync(const Model::ExportVulEffectHostListRequest& request, const ExportVulEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVulEffectHostListOutcomeCallable ExportVulEffectHostListCallable(const Model::ExportVulEffectHostListRequest& request);

                /**
                 *This API is used to export the vulnerability information, including the list of affected hosts and component information.
                 * @param req ExportVulInfoRequest
                 * @return ExportVulInfoOutcome
                 */
                ExportVulInfoOutcome ExportVulInfo(const Model::ExportVulInfoRequest &request);
                void ExportVulInfoAsync(const Model::ExportVulInfoRequest& request, const ExportVulInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVulInfoOutcomeCallable ExportVulInfoCallable(const Model::ExportVulInfoRequest& request);

                /**
                 *This API is used to export the vulnerability list.
                 * @param req ExportVulListRequest
                 * @return ExportVulListOutcome
                 */
                ExportVulListOutcome ExportVulList(const Model::ExportVulListRequest &request);
                void ExportVulListAsync(const Model::ExportVulListRequest& request, const ExportVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportVulListOutcomeCallable ExportVulListCallable(const Model::ExportVulListRequest& request);

                /**
                 *This API is used to obtain the locally stored data.
                 * @param req GetLocalStorageItemRequest
                 * @return GetLocalStorageItemOutcome
                 */
                GetLocalStorageItemOutcome GetLocalStorageItem(const Model::GetLocalStorageItemRequest &request);
                void GetLocalStorageItemAsync(const Model::GetLocalStorageItemRequest& request, const GetLocalStorageItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLocalStorageItemOutcomeCallable GetLocalStorageItemCallable(const Model::GetLocalStorageItemRequest& request);

                /**
                 *This API is used to ignore vulnerabilities.
                 * @param req IgnoreImpactedHostsRequest
                 * @return IgnoreImpactedHostsOutcome
                 */
                IgnoreImpactedHostsOutcome IgnoreImpactedHosts(const Model::IgnoreImpactedHostsRequest &request);
                void IgnoreImpactedHostsAsync(const Model::IgnoreImpactedHostsRequest& request, const IgnoreImpactedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IgnoreImpactedHostsOutcomeCallable IgnoreImpactedHostsCallable(const Model::IgnoreImpactedHostsRequest& request);

                /**
                 *This API is used to obtain the list of locally stored key values.
                 * @param req KeysLocalStorageRequest
                 * @return KeysLocalStorageOutcome
                 */
                KeysLocalStorageOutcome KeysLocalStorage(const Model::KeysLocalStorageRequest &request);
                void KeysLocalStorageAsync(const Model::KeysLocalStorageRequest& request, const KeysLocalStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KeysLocalStorageOutcomeCallable KeysLocalStorageCallable(const Model::KeysLocalStorageRequest& request);

                /**
                 *This API is used to enable the configuration of automatically enabling the professional protection configuration for newly added hosts.
                 * @param req ModifyAutoOpenProVersionConfigRequest
                 * @return ModifyAutoOpenProVersionConfigOutcome
                 */
                ModifyAutoOpenProVersionConfigOutcome ModifyAutoOpenProVersionConfig(const Model::ModifyAutoOpenProVersionConfigRequest &request);
                void ModifyAutoOpenProVersionConfigAsync(const Model::ModifyAutoOpenProVersionConfigRequest& request, const ModifyAutoOpenProVersionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoOpenProVersionConfigOutcomeCallable ModifyAutoOpenProVersionConfigCallable(const Model::ModifyAutoOpenProVersionConfigRequest& request);

                /**
                 *This API is used to modify the brute-force blocking mode.
                 * @param req ModifyBanModeRequest
                 * @return ModifyBanModeOutcome
                 */
                ModifyBanModeOutcome ModifyBanMode(const Model::ModifyBanModeRequest &request);
                void ModifyBanModeAsync(const Model::ModifyBanModeRequest& request, const ModifyBanModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBanModeOutcomeCallable ModifyBanModeCallable(const Model::ModifyBanModeRequest& request);

                /**
                 *This API is used to set the block switch status.
                 * @param req ModifyBanStatusRequest
                 * @return ModifyBanStatusOutcome
                 */
                ModifyBanStatusOutcome ModifyBanStatus(const Model::ModifyBanStatusRequest &request);
                void ModifyBanStatusAsync(const Model::ModifyBanStatusRequest& request, const ModifyBanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBanStatusOutcomeCallable ModifyBanStatusCallable(const Model::ModifyBanStatusRequest& request);

                /**
                 *This API is used to modify the blocking allowlist.
                 * @param req ModifyBanWhiteListRequest
                 * @return ModifyBanWhiteListOutcome
                 */
                ModifyBanWhiteListOutcome ModifyBanWhiteList(const Model::ModifyBanWhiteListRequest &request);
                void ModifyBanWhiteListAsync(const Model::ModifyBanWhiteListRequest& request, const ModifyBanWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBanWhiteListOutcomeCallable ModifyBanWhiteListCallable(const Model::ModifyBanWhiteListRequest& request);

                /**
                 *This API is used to change the baseline policy settings.
                 * @param req ModifyBaselinePolicyRequest
                 * @return ModifyBaselinePolicyOutcome
                 */
                ModifyBaselinePolicyOutcome ModifyBaselinePolicy(const Model::ModifyBaselinePolicyRequest &request);
                void ModifyBaselinePolicyAsync(const Model::ModifyBaselinePolicyRequest& request, const ModifyBaselinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaselinePolicyOutcomeCallable ModifyBaselinePolicyCallable(const Model::ModifyBaselinePolicyRequest& request);

                /**
                 *This API is used to add or modify high-risk command policies.
                 * @param req ModifyBashPolicyRequest
                 * @return ModifyBashPolicyOutcome
                 */
                ModifyBashPolicyOutcome ModifyBashPolicy(const Model::ModifyBashPolicyRequest &request);
                void ModifyBashPolicyAsync(const Model::ModifyBashPolicyRequest& request, const ModifyBashPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBashPolicyOutcomeCallable ModifyBashPolicyCallable(const Model::ModifyBashPolicyRequest& request);

                /**
                 *This API is used to switch the statuses of high-risk command policies.
                 * @param req ModifyBashPolicyStatusRequest
                 * @return ModifyBashPolicyStatusOutcome
                 */
                ModifyBashPolicyStatusOutcome ModifyBashPolicyStatus(const Model::ModifyBashPolicyStatusRequest &request);
                void ModifyBashPolicyStatusAsync(const Model::ModifyBashPolicyStatusRequest& request, const ModifyBashPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBashPolicyStatusOutcomeCallable ModifyBashPolicyStatusCallable(const Model::ModifyBashPolicyStatusRequest& request);

                /**
                 *This API is used to modify brute force cracking rules.
                 * @param req ModifyBruteAttackRulesRequest
                 * @return ModifyBruteAttackRulesOutcome
                 */
                ModifyBruteAttackRulesOutcome ModifyBruteAttackRules(const Model::ModifyBruteAttackRulesRequest &request);
                void ModifyBruteAttackRulesAsync(const Model::ModifyBruteAttackRulesRequest& request, const ModifyBruteAttackRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBruteAttackRulesOutcomeCallable ModifyBruteAttackRulesCallable(const Model::ModifyBruteAttackRulesRequest& request);

                /**
                 *This API is used to modify the status of network attack events.
                 * @param req ModifyEventAttackStatusRequest
                 * @return ModifyEventAttackStatusOutcome
                 */
                ModifyEventAttackStatusOutcome ModifyEventAttackStatus(const Model::ModifyEventAttackStatusRequest &request);
                void ModifyEventAttackStatusAsync(const Model::ModifyEventAttackStatusRequest& request, const ModifyEventAttackStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEventAttackStatusOutcomeCallable ModifyEventAttackStatusCallable(const Model::ModifyEventAttackStatusRequest& request);

                /**
                 *This API is used to update the core file events.
                 * @param req ModifyFileTamperEventsRequest
                 * @return ModifyFileTamperEventsOutcome
                 */
                ModifyFileTamperEventsOutcome ModifyFileTamperEvents(const Model::ModifyFileTamperEventsRequest &request);
                void ModifyFileTamperEventsAsync(const Model::ModifyFileTamperEventsRequest& request, const ModifyFileTamperEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFileTamperEventsOutcomeCallable ModifyFileTamperEventsCallable(const Model::ModifyFileTamperEventsRequest& request);

                /**
                 *This API is used to edit and add core file monitoring rules.
                 * @param req ModifyFileTamperRuleRequest
                 * @return ModifyFileTamperRuleOutcome
                 */
                ModifyFileTamperRuleOutcome ModifyFileTamperRule(const Model::ModifyFileTamperRuleRequest &request);
                void ModifyFileTamperRuleAsync(const Model::ModifyFileTamperRuleRequest& request, const ModifyFileTamperRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFileTamperRuleOutcomeCallable ModifyFileTamperRuleCallable(const Model::ModifyFileTamperRuleRequest& request);

                /**
                 *This API is used to update the core file rule status (batch deletion and disabling supported).
                 * @param req ModifyFileTamperRuleStatusRequest
                 * @return ModifyFileTamperRuleStatusOutcome
                 */
                ModifyFileTamperRuleStatusOutcome ModifyFileTamperRuleStatus(const Model::ModifyFileTamperRuleStatusRequest &request);
                void ModifyFileTamperRuleStatusAsync(const Model::ModifyFileTamperRuleStatusRequest& request, const ModifyFileTamperRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFileTamperRuleStatusOutcomeCallable ModifyFileTamperRuleStatusCallable(const Model::ModifyFileTamperRuleStatusRequest& request);

                /**
                 *This API is used to enable and disable Java webshell plugins.
                 * @param req ModifyJavaMemShellPluginSwitchRequest
                 * @return ModifyJavaMemShellPluginSwitchOutcome
                 */
                ModifyJavaMemShellPluginSwitchOutcome ModifyJavaMemShellPluginSwitch(const Model::ModifyJavaMemShellPluginSwitchRequest &request);
                void ModifyJavaMemShellPluginSwitchAsync(const Model::ModifyJavaMemShellPluginSwitchRequest& request, const ModifyJavaMemShellPluginSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyJavaMemShellPluginSwitchOutcomeCallable ModifyJavaMemShellPluginSwitchCallable(const Model::ModifyJavaMemShellPluginSwitchRequest& request);

                /**
                 *This API is used to modify the Java webshell event status.
                 * @param req ModifyJavaMemShellsStatusRequest
                 * @return ModifyJavaMemShellsStatusOutcome
                 */
                ModifyJavaMemShellsStatusOutcome ModifyJavaMemShellsStatus(const Model::ModifyJavaMemShellsStatusRequest &request);
                void ModifyJavaMemShellsStatusAsync(const Model::ModifyJavaMemShellsStatusRequest& request, const ModifyJavaMemShellsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyJavaMemShellsStatusOutcomeCallable ModifyJavaMemShellsStatusCallable(const Model::ModifyJavaMemShellsStatusRequest& request);

                /**
                 *This API is used to bind machines to an authorization in batches.
                 * @param req ModifyLicenseBindsRequest
                 * @return ModifyLicenseBindsOutcome
                 */
                ModifyLicenseBindsOutcome ModifyLicenseBinds(const Model::ModifyLicenseBindsRequest &request);
                void ModifyLicenseBindsAsync(const Model::ModifyLicenseBindsRequest& request, const ModifyLicenseBindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLicenseBindsOutcomeCallable ModifyLicenseBindsCallable(const Model::ModifyLicenseBindsRequest& request);

                /**
                 *This API is used to edit CWPP - pay-as-you-go authorization orders.
                 * @param req ModifyLicenseOrderRequest
                 * @return ModifyLicenseOrderOutcome
                 */
                ModifyLicenseOrderOutcome ModifyLicenseOrder(const Model::ModifyLicenseOrderRequest &request);
                void ModifyLicenseOrderAsync(const Model::ModifyLicenseOrderRequest& request, const ModifyLicenseOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLicenseOrderOutcomeCallable ModifyLicenseOrderCallable(const Model::ModifyLicenseOrderRequest& request);

                /**
                 *This API is used to add or modify the access configuration of logs shipped to Kafka.
                 * @param req ModifyLogKafkaAccessRequest
                 * @return ModifyLogKafkaAccessOutcome
                 */
                ModifyLogKafkaAccessOutcome ModifyLogKafkaAccess(const Model::ModifyLogKafkaAccessRequest &request);
                void ModifyLogKafkaAccessAsync(const Model::ModifyLogKafkaAccessRequest& request, const ModifyLogKafkaAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLogKafkaAccessOutcomeCallable ModifyLogKafkaAccessCallable(const Model::ModifyLogKafkaAccessRequest& request);

                /**
                 *This API is used to modify the shipping configuration and switch of the specified log category.
                 * @param req ModifyLogKafkaDeliverTypeRequest
                 * @return ModifyLogKafkaDeliverTypeOutcome
                 */
                ModifyLogKafkaDeliverTypeOutcome ModifyLogKafkaDeliverType(const Model::ModifyLogKafkaDeliverTypeRequest &request);
                void ModifyLogKafkaDeliverTypeAsync(const Model::ModifyLogKafkaDeliverTypeRequest& request, const ModifyLogKafkaDeliverTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLogKafkaDeliverTypeOutcomeCallable ModifyLogKafkaDeliverTypeCallable(const Model::ModifyLogKafkaDeliverTypeRequest& request);

                /**
                 *This API is used to modify the information of log shipping statuses.
                 * @param req ModifyLogKafkaStateRequest
                 * @return ModifyLogKafkaStateOutcome
                 */
                ModifyLogKafkaStateOutcome ModifyLogKafkaState(const Model::ModifyLogKafkaStateRequest &request);
                void ModifyLogKafkaStateAsync(const Model::ModifyLogKafkaStateRequest& request, const ModifyLogKafkaStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLogKafkaStateOutcomeCallable ModifyLogKafkaStateCallable(const Model::ModifyLogKafkaStateRequest& request);

                /**
                 *This API is used to modify the log storage configuration.
                 * @param req ModifyLogStorageConfigRequest
                 * @return ModifyLogStorageConfigOutcome
                 */
                ModifyLogStorageConfigOutcome ModifyLogStorageConfig(const Model::ModifyLogStorageConfigRequest &request);
                void ModifyLogStorageConfigAsync(const Model::ModifyLogStorageConfigRequest& request, const ModifyLogStorageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLogStorageConfigOutcomeCallable ModifyLogStorageConfigCallable(const Model::ModifyLogStorageConfigRequest& request);

                /**
                 *This API is used to update the log-in audit allowlist information.
                 * @param req ModifyLoginWhiteInfoRequest
                 * @return ModifyLoginWhiteInfoOutcome
                 */
                ModifyLoginWhiteInfoOutcome ModifyLoginWhiteInfo(const Model::ModifyLoginWhiteInfoRequest &request);
                void ModifyLoginWhiteInfoAsync(const Model::ModifyLoginWhiteInfoRequest& request, const ModifyLoginWhiteInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoginWhiteInfoOutcomeCallable ModifyLoginWhiteInfoCallable(const Model::ModifyLoginWhiteInfoRequest& request);

                /**
                 *This API is used to update the log-in audit allowlist information. (The number of server lists needs to be less than 1,000.)
                 * @param req ModifyLoginWhiteRecordRequest
                 * @return ModifyLoginWhiteRecordOutcome
                 */
                ModifyLoginWhiteRecordOutcome ModifyLoginWhiteRecord(const Model::ModifyLoginWhiteRecordRequest &request);
                void ModifyLoginWhiteRecordAsync(const Model::ModifyLoginWhiteRecordRequest& request, const ModifyLoginWhiteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoginWhiteRecordOutcomeCallable ModifyLoginWhiteRecordCallable(const Model::ModifyLoginWhiteRecordRequest& request);

                /**
                 *This API is used to modify the cleanup configuration of the machine.
                 * @param req ModifyMachineAutoClearConfigRequest
                 * @return ModifyMachineAutoClearConfigOutcome
                 */
                ModifyMachineAutoClearConfigOutcome ModifyMachineAutoClearConfig(const Model::ModifyMachineAutoClearConfigRequest &request);
                void ModifyMachineAutoClearConfigAsync(const Model::ModifyMachineAutoClearConfigRequest& request, const ModifyMachineAutoClearConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMachineAutoClearConfigOutcomeCallable ModifyMachineAutoClearConfigCallable(const Model::ModifyMachineAutoClearConfigRequest& request);

                /**
                 *This API is used to update the malicious request allowlist.
                 * @param req ModifyMaliciousRequestWhiteListRequest
                 * @return ModifyMaliciousRequestWhiteListOutcome
                 */
                ModifyMaliciousRequestWhiteListOutcome ModifyMaliciousRequestWhiteList(const Model::ModifyMaliciousRequestWhiteListRequest &request);
                void ModifyMaliciousRequestWhiteListAsync(const Model::ModifyMaliciousRequestWhiteListRequest& request, const ModifyMaliciousRequestWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMaliciousRequestWhiteListOutcomeCallable ModifyMaliciousRequestWhiteListCallable(const Model::ModifyMaliciousRequestWhiteListRequest& request);

                /**
                 *This API is used to set scheduled scan.
                 * @param req ModifyMalwareTimingScanSettingsRequest
                 * @return ModifyMalwareTimingScanSettingsOutcome
                 */
                ModifyMalwareTimingScanSettingsOutcome ModifyMalwareTimingScanSettings(const Model::ModifyMalwareTimingScanSettingsRequest &request);
                void ModifyMalwareTimingScanSettingsAsync(const Model::ModifyMalwareTimingScanSettingsRequest& request, const ModifyMalwareTimingScanSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMalwareTimingScanSettingsOutcomeCallable ModifyMalwareTimingScanSettingsCallable(const Model::ModifyMalwareTimingScanSettingsRequest& request);

                /**
                 *This API is used to edit the Trojan allowlist.
                 * @param req ModifyMalwareWhiteListRequest
                 * @return ModifyMalwareWhiteListOutcome
                 */
                ModifyMalwareWhiteListOutcome ModifyMalwareWhiteList(const Model::ModifyMalwareWhiteListRequest &request);
                void ModifyMalwareWhiteListAsync(const Model::ModifyMalwareWhiteListRequest& request, const ModifyMalwareWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMalwareWhiteListOutcomeCallable ModifyMalwareWhiteListCallable(const Model::ModifyMalwareWhiteListRequest& request);

                /**
                 *This API is used to modify network attack settings.
                 * @param req ModifyNetAttackSettingRequest
                 * @return ModifyNetAttackSettingOutcome
                 */
                ModifyNetAttackSettingOutcome ModifyNetAttackSetting(const Model::ModifyNetAttackSettingRequest &request);
                void ModifyNetAttackSettingAsync(const Model::ModifyNetAttackSettingRequest& request, const ModifyNetAttackSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetAttackSettingOutcomeCallable ModifyNetAttackSettingCallable(const Model::ModifyNetAttackSettingRequest& request);

                /**
                 *This API is used to edit the network attack whitelist.
                 * @param req ModifyNetAttackWhiteListRequest
                 * @return ModifyNetAttackWhiteListOutcome
                 */
                ModifyNetAttackWhiteListOutcome ModifyNetAttackWhiteList(const Model::ModifyNetAttackWhiteListRequest &request);
                void ModifyNetAttackWhiteListAsync(const Model::ModifyNetAttackWhiteListRequest& request, const ModifyNetAttackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetAttackWhiteListOutcomeCallable ModifyNetAttackWhiteListCallable(const Model::ModifyNetAttackWhiteListRequest& request);

                /**
                 *This API is used to modify the status of anti-ransomware events.
                 * @param req ModifyRansomDefenseEventsStatusRequest
                 * @return ModifyRansomDefenseEventsStatusOutcome
                 */
                ModifyRansomDefenseEventsStatusOutcome ModifyRansomDefenseEventsStatus(const Model::ModifyRansomDefenseEventsStatusRequest &request);
                void ModifyRansomDefenseEventsStatusAsync(const Model::ModifyRansomDefenseEventsStatusRequest& request, const ModifyRansomDefenseEventsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRansomDefenseEventsStatusOutcomeCallable ModifyRansomDefenseEventsStatusCallable(const Model::ModifyRansomDefenseEventsStatusRequest& request);

                /**
                 *This API is used to modify the anti-ransomware policy status in batches.
                 * @param req ModifyRansomDefenseStrategyStatusRequest
                 * @return ModifyRansomDefenseStrategyStatusOutcome
                 */
                ModifyRansomDefenseStrategyStatusOutcome ModifyRansomDefenseStrategyStatus(const Model::ModifyRansomDefenseStrategyStatusRequest &request);
                void ModifyRansomDefenseStrategyStatusAsync(const Model::ModifyRansomDefenseStrategyStatusRequest& request, const ModifyRansomDefenseStrategyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRansomDefenseStrategyStatusOutcomeCallable ModifyRansomDefenseStrategyStatusCallable(const Model::ModifyRansomDefenseStrategyStatusRequest& request);

                /**
                 *This API is used to modify malicious request policies.
                 * @param req ModifyRiskDnsPolicyRequest
                 * @return ModifyRiskDnsPolicyOutcome
                 */
                ModifyRiskDnsPolicyOutcome ModifyRiskDnsPolicy(const Model::ModifyRiskDnsPolicyRequest &request);
                void ModifyRiskDnsPolicyAsync(const Model::ModifyRiskDnsPolicyRequest& request, const ModifyRiskDnsPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRiskDnsPolicyOutcomeCallable ModifyRiskDnsPolicyCallable(const Model::ModifyRiskDnsPolicyRequest& request);

                /**
                 *This API is used to modify the status of malicious request policies.
                 * @param req ModifyRiskDnsPolicyStatusRequest
                 * @return ModifyRiskDnsPolicyStatusOutcome
                 */
                ModifyRiskDnsPolicyStatusOutcome ModifyRiskDnsPolicyStatus(const Model::ModifyRiskDnsPolicyStatusRequest &request);
                void ModifyRiskDnsPolicyStatusAsync(const Model::ModifyRiskDnsPolicyStatusRequest& request, const ModifyRiskDnsPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRiskDnsPolicyStatusOutcomeCallable ModifyRiskDnsPolicyStatusCallable(const Model::ModifyRiskDnsPolicyStatusRequest& request);

                /**
                 *This API is used to change the status of intrusion detection events, including virus scanning, abnormal log-ins, password cracking, high-risk commands, reverse shells, and local privilege escalations.
                 * @param req ModifyRiskEventsStatusRequest
                 * @return ModifyRiskEventsStatusOutcome
                 */
                ModifyRiskEventsStatusOutcome ModifyRiskEventsStatus(const Model::ModifyRiskEventsStatusRequest &request);
                void ModifyRiskEventsStatusAsync(const Model::ModifyRiskEventsStatusRequest& request, const ModifyRiskEventsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRiskEventsStatusOutcomeCallable ModifyRiskEventsStatusCallable(const Model::ModifyRiskEventsStatusRequest& request);

                /**
                 *This API is used to create or modify user custom settings.
                 * @param req ModifyUsersConfigRequest
                 * @return ModifyUsersConfigOutcome
                 */
                ModifyUsersConfigOutcome ModifyUsersConfig(const Model::ModifyUsersConfigRequest &request);
                void ModifyUsersConfigAsync(const Model::ModifyUsersConfigRequest& request, const ModifyUsersConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUsersConfigOutcomeCallable ModifyUsersConfigCallable(const Model::ModifyUsersConfigRequest& request);

                /**
                 *This API is used to change the vulnerability defense event status. (Vulnerability fixing is carried out using another API.)
                 * @param req ModifyVulDefenceEventStatusRequest
                 * @return ModifyVulDefenceEventStatusOutcome
                 */
                ModifyVulDefenceEventStatusOutcome ModifyVulDefenceEventStatus(const Model::ModifyVulDefenceEventStatusRequest &request);
                void ModifyVulDefenceEventStatusAsync(const Model::ModifyVulDefenceEventStatusRequest& request, const ModifyVulDefenceEventStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVulDefenceEventStatusOutcomeCallable ModifyVulDefenceEventStatusCallable(const Model::ModifyVulDefenceEventStatusRequest& request);

                /**
                 *This API is used to modify vulnerability defense plugin settings.
1) The new settings apply to new hosts automatically. scope is set to 1, and quuids is left blank.
2) The new settings do not apply to Ultimate Edition hosts. scope is set to 0, and the current QUUID list is specified as the value of quuids.
3) For a given QUUID list, when scope is set to 0, QUUID selected by the user is specified as the value of quuids.
                 * @param req ModifyVulDefenceSettingRequest
                 * @return ModifyVulDefenceSettingOutcome
                 */
                ModifyVulDefenceSettingOutcome ModifyVulDefenceSetting(const Model::ModifyVulDefenceSettingRequest &request);
                void ModifyVulDefenceSettingAsync(const Model::ModifyVulDefenceSettingRequest& request, const ModifyVulDefenceSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVulDefenceSettingOutcomeCallable ModifyVulDefenceSettingCallable(const Model::ModifyVulDefenceSettingRequest& request);

                /**
                 *This API is used to modify the alarming machine scope settings.
                 * @param req ModifyWarningHostConfigRequest
                 * @return ModifyWarningHostConfigOutcome
                 */
                ModifyWarningHostConfigOutcome ModifyWarningHostConfig(const Model::ModifyWarningHostConfigRequest &request);
                void ModifyWarningHostConfigAsync(const Model::ModifyWarningHostConfigRequest& request, const ModifyWarningHostConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWarningHostConfigOutcomeCallable ModifyWarningHostConfigCallable(const Model::ModifyWarningHostConfigRequest& request);

                /**
                 *This API is used to modify alarm settings.
                 * @param req ModifyWarningSettingRequest
                 * @return ModifyWarningSettingOutcome
                 */
                ModifyWarningSettingOutcome ModifyWarningSetting(const Model::ModifyWarningSettingRequest &request);
                void ModifyWarningSettingAsync(const Model::ModifyWarningSettingRequest& request, const ModifyWarningSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWarningSettingOutcomeCallable ModifyWarningSettingCallable(const Model::ModifyWarningSettingRequest& request);

                /**
                 *This API is used to add or modify alarm policies.
                 * @param req ModifyWebHookPolicyRequest
                 * @return ModifyWebHookPolicyOutcome
                 */
                ModifyWebHookPolicyOutcome ModifyWebHookPolicy(const Model::ModifyWebHookPolicyRequest &request);
                void ModifyWebHookPolicyAsync(const Model::ModifyWebHookPolicyRequest& request, const ModifyWebHookPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebHookPolicyOutcomeCallable ModifyWebHookPolicyCallable(const Model::ModifyWebHookPolicyRequest& request);

                /**
                 *This API is used to modify the alarm policy switch.
                 * @param req ModifyWebHookPolicyStatusRequest
                 * @return ModifyWebHookPolicyStatusOutcome
                 */
                ModifyWebHookPolicyStatusOutcome ModifyWebHookPolicyStatus(const Model::ModifyWebHookPolicyStatusRequest &request);
                void ModifyWebHookPolicyStatusAsync(const Model::ModifyWebHookPolicyStatusRequest& request, const ModifyWebHookPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebHookPolicyStatusOutcomeCallable ModifyWebHookPolicyStatusCallable(const Model::ModifyWebHookPolicyStatusRequest& request);

                /**
                 *This API is used to add or update the alarm recipient.
                 * @param req ModifyWebHookReceiverRequest
                 * @return ModifyWebHookReceiverOutcome
                 */
                ModifyWebHookReceiverOutcome ModifyWebHookReceiver(const Model::ModifyWebHookReceiverRequest &request);
                void ModifyWebHookReceiverAsync(const Model::ModifyWebHookReceiverRequest& request, const ModifyWebHookReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebHookReceiverOutcomeCallable ModifyWebHookReceiverCallable(const Model::ModifyWebHookReceiverRequest& request);

                /**
                 *This API is used to add or modify the rules of WeCom chatbots.
                 * @param req ModifyWebHookRuleRequest
                 * @return ModifyWebHookRuleOutcome
                 */
                ModifyWebHookRuleOutcome ModifyWebHookRule(const Model::ModifyWebHookRuleRequest &request);
                void ModifyWebHookRuleAsync(const Model::ModifyWebHookRuleRequest& request, const ModifyWebHookRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebHookRuleOutcomeCallable ModifyWebHookRuleCallable(const Model::ModifyWebHookRuleRequest& request);

                /**
                 *This API is used to modify the rules of WeCom chatbots.
                 * @param req ModifyWebHookRuleStatusRequest
                 * @return ModifyWebHookRuleStatusOutcome
                 */
                ModifyWebHookRuleStatusOutcome ModifyWebHookRuleStatus(const Model::ModifyWebHookRuleStatusRequest &request);
                void ModifyWebHookRuleStatusAsync(const Model::ModifyWebHookRuleStatusRequest& request, const ModifyWebHookRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebHookRuleStatusOutcomeCallable ModifyWebHookRuleStatusCallable(const Model::ModifyWebHookRuleStatusRequest& request);

                /**
                 *This API is used to enable or disable website anti-tampering protection.
                 * @param req ModifyWebPageProtectSwitchRequest
                 * @return ModifyWebPageProtectSwitchOutcome
                 */
                ModifyWebPageProtectSwitchOutcome ModifyWebPageProtectSwitch(const Model::ModifyWebPageProtectSwitchRequest &request);
                void ModifyWebPageProtectSwitchAsync(const Model::ModifyWebPageProtectSwitchRequest& request, const ModifyWebPageProtectSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebPageProtectSwitchOutcomeCallable ModifyWebPageProtectSwitchCallable(const Model::ModifyWebPageProtectSwitchRequest& request);

                /**
                 *This API is used to roll back anti-ransomware snapshots.
                 * @param req RansomDefenseRollbackRequest
                 * @return RansomDefenseRollbackOutcome
                 */
                RansomDefenseRollbackOutcome RansomDefenseRollback(const Model::RansomDefenseRollbackRequest &request);
                void RansomDefenseRollbackAsync(const Model::RansomDefenseRollbackRequest& request, const RansomDefenseRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RansomDefenseRollbackOutcomeCallable RansomDefenseRollbackCallable(const Model::RansomDefenseRollbackRequest& request);

                /**
                 *This API is used to batch recover quarantined Trojan files.
                 * @param req RecoverMalwaresRequest
                 * @return RecoverMalwaresOutcome
                 */
                RecoverMalwaresOutcome RecoverMalwares(const Model::RecoverMalwaresRequest &request);
                void RecoverMalwaresAsync(const Model::RecoverMalwaresRequest& request, const RecoverMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverMalwaresOutcomeCallable RecoverMalwaresCallable(const Model::RecoverMalwaresRequest& request);

                /**
                 *This API is used to delete the locally stored data.
                 * @param req RemoveLocalStorageItemRequest
                 * @return RemoveLocalStorageItemOutcome
                 */
                RemoveLocalStorageItemOutcome RemoveLocalStorageItem(const Model::RemoveLocalStorageItemRequest &request);
                void RemoveLocalStorageItemAsync(const Model::RemoveLocalStorageItemRequest& request, const RemoveLocalStorageItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveLocalStorageItemOutcomeCallable RemoveLocalStorageItemCallable(const Model::RemoveLocalStorageItemRequest& request);

                /**
                 *This API is used to delete all records of the host. Currently, it only supports non-Tencent Cloud hosts, and the host needs to be offline.
                 * @param req RemoveMachineRequest
                 * @return RemoveMachineOutcome
                 */
                RemoveMachineOutcome RemoveMachine(const Model::RemoveMachineRequest &request);
                void RemoveMachineAsync(const Model::RemoveMachineRequest& request, const RemoveMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveMachineOutcomeCallable RemoveMachineCallable(const Model::RemoveMachineRequest& request);

                /**
                 *This API is used to retry to create snapshots and automatically fix vulnerabilities when the creation fails.
                 * @param req RetryCreateSnapshotRequest
                 * @return RetryCreateSnapshotOutcome
                 */
                RetryCreateSnapshotOutcome RetryCreateSnapshot(const Model::RetryCreateSnapshotRequest &request);
                void RetryCreateSnapshotAsync(const Model::RetryCreateSnapshotRequest& request, const RetryCreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryCreateSnapshotOutcomeCallable RetryCreateSnapshotCallable(const Model::RetryCreateSnapshotRequest& request);

                /**
                 *This API is used to fix vulnerabilities on a single host when the fix fails.
                 * @param req RetryVulFixRequest
                 * @return RetryVulFixOutcome
                 */
                RetryVulFixOutcome RetryVulFix(const Model::RetryVulFixRequest &request);
                void RetryVulFixAsync(const Model::RetryVulFixRequest& request, const RetryVulFixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryVulFixOutcomeCallable RetryVulFixCallable(const Model::RetryVulFixRequest& request);

                /**
                 *This API is used to obtain baseline detection and re-detection APIs.
                 * @param req ScanBaselineRequest
                 * @return ScanBaselineOutcome
                 */
                ScanBaselineOutcome ScanBaseline(const Model::ScanBaselineRequest &request);
                void ScanBaselineAsync(const Model::ScanBaselineRequest& request, const ScanBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanBaselineOutcomeCallable ScanBaselineCallable(const Model::ScanBaselineRequest& request);

                /**
                 *This API is used to restart the scan task. Specifying the machine is supported.
                 * @param req ScanTaskAgainRequest
                 * @return ScanTaskAgainOutcome
                 */
                ScanTaskAgainOutcome ScanTaskAgain(const Model::ScanTaskAgainRequest &request);
                void ScanTaskAgainAsync(const Model::ScanTaskAgainRequest& request, const ScanTaskAgainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanTaskAgainOutcomeCallable ScanTaskAgainCallable(const Model::ScanTaskAgainRequest& request);

                /**
                 *This API is used to perform one-click vulnerability scans.
                 * @param req ScanVulRequest
                 * @return ScanVulOutcome
                 */
                ScanVulOutcome ScanVul(const Model::ScanVulRequest &request);
                void ScanVulAsync(const Model::ScanVulRequest& request, const ScanVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanVulOutcomeCallable ScanVulCallable(const Model::ScanVulRequest& request);

                /**
                 *This API is used to redetect the API.
                 * @param req ScanVulAgainRequest
                 * @return ScanVulAgainOutcome
                 */
                ScanVulAgainOutcome ScanVulAgain(const Model::ScanVulAgainRequest &request);
                void ScanVulAgainAsync(const Model::ScanVulAgainRequest& request, const ScanVulAgainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanVulAgainOutcomeCallable ScanVulAgainCallable(const Model::ScanVulAgainRequest& request);

                /**
                 *This API is used to complete regular vulnerability scan settings.
                 * @param req ScanVulSettingRequest
                 * @return ScanVulSettingOutcome
                 */
                ScanVulSettingOutcome ScanVulSetting(const Model::ScanVulSettingRequest &request);
                void ScanVulSettingAsync(const Model::ScanVulSettingRequest& request, const ScanVulSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanVulSettingOutcomeCallable ScanVulSettingCallable(const Model::ScanVulSettingRequest& request);

                /**
                 *This API is used to query logs.
                 * @param req SearchLogRequest
                 * @return SearchLogOutcome
                 */
                SearchLogOutcome SearchLog(const Model::SearchLogRequest &request);
                void SearchLogAsync(const Model::SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchLogOutcomeCallable SearchLogCallable(const Model::SearchLogRequest& request);

                /**
                 *This API is used to isolate Trojans.
                 * @param req SeparateMalwaresRequest
                 * @return SeparateMalwaresOutcome
                 */
                SeparateMalwaresOutcome SeparateMalwares(const Model::SeparateMalwaresRequest &request);
                void SeparateMalwaresAsync(const Model::SeparateMalwaresRequest& request, const SeparateMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SeparateMalwaresOutcomeCallable SeparateMalwaresCallable(const Model::SeparateMalwaresRequest& request);

                /**
                 *This API is used to set the high-risk command event status.
                 * @param req SetBashEventsStatusRequest
                 * @return SetBashEventsStatusOutcome
                 */
                SetBashEventsStatusOutcome SetBashEventsStatus(const Model::SetBashEventsStatusRequest &request);
                void SetBashEventsStatusAsync(const Model::SetBashEventsStatusRequest& request, const SetBashEventsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetBashEventsStatusOutcomeCallable SetBashEventsStatusCallable(const Model::SetBashEventsStatusRequest& request);

                /**
                 *This API is used to set the expiration time of the locally stored data.
                 * @param req SetLocalStorageExpireRequest
                 * @return SetLocalStorageExpireOutcome
                 */
                SetLocalStorageExpireOutcome SetLocalStorageExpire(const Model::SetLocalStorageExpireRequest &request);
                void SetLocalStorageExpireAsync(const Model::SetLocalStorageExpireRequest& request, const SetLocalStorageExpireAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetLocalStorageExpireOutcomeCallable SetLocalStorageExpireCallable(const Model::SetLocalStorageExpireRequest& request);

                /**
                 *This API is used to set the locally stored data.
                 * @param req SetLocalStorageItemRequest
                 * @return SetLocalStorageItemOutcome
                 */
                SetLocalStorageItemOutcome SetLocalStorageItem(const Model::SetLocalStorageItemRequest &request);
                void SetLocalStorageItemAsync(const Model::SetLocalStorageItemRequest& request, const SetLocalStorageItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetLocalStorageItemOutcomeCallable SetLocalStorageItemCallable(const Model::SetLocalStorageItemRequest& request);

                /**
                 *This API is used to perform baseline checks.
                 * @param req StartBaselineDetectRequest
                 * @return StartBaselineDetectOutcome
                 */
                StartBaselineDetectOutcome StartBaselineDetect(const Model::StartBaselineDetectRequest &request);
                void StartBaselineDetectAsync(const Model::StartBaselineDetectRequest& request, const StartBaselineDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartBaselineDetectOutcomeCallable StartBaselineDetectCallable(const Model::StartBaselineDetectRequest& request);

                /**
                 *This API is used to stop the asset scan task.
                 * @param req StopAssetScanRequest
                 * @return StopAssetScanOutcome
                 */
                StopAssetScanOutcome StopAssetScan(const Model::StopAssetScanRequest &request);
                void StopAssetScanAsync(const Model::StopAssetScanRequest& request, const StopAssetScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopAssetScanOutcomeCallable StopAssetScanCallable(const Model::StopAssetScanRequest& request);

                /**
                 *This API is used to stop baseline check.
                 * @param req StopBaselineDetectRequest
                 * @return StopBaselineDetectOutcome
                 */
                StopBaselineDetectOutcome StopBaselineDetect(const Model::StopBaselineDetectRequest &request);
                void StopBaselineDetectAsync(const Model::StopBaselineDetectRequest& request, const StopBaselineDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopBaselineDetectOutcomeCallable StopBaselineDetectCallable(const Model::StopBaselineDetectRequest& request);

                /**
                 *This API is used to stop displaying pop-up prompts about brute force cracking blocking.
                 * @param req StopNoticeBanTipsRequest
                 * @return StopNoticeBanTipsOutcome
                 */
                StopNoticeBanTipsOutcome StopNoticeBanTips(const Model::StopNoticeBanTipsRequest &request);
                void StopNoticeBanTipsAsync(const Model::StopNoticeBanTipsRequest& request, const StopNoticeBanTipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopNoticeBanTipsOutcomeCallable StopNoticeBanTipsCallable(const Model::StopNoticeBanTipsRequest& request);

                /**
                 *This API is used to switch the statuses of high-risk command rules.
                 * @param req SwitchBashRulesRequest
                 * @return SwitchBashRulesOutcome
                 */
                SwitchBashRulesOutcome SwitchBashRules(const Model::SwitchBashRulesRequest &request);
                void SwitchBashRulesAsync(const Model::SwitchBashRulesRequest& request, const SwitchBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchBashRulesOutcomeCallable SwitchBashRulesCallable(const Model::SwitchBashRulesRequest& request);

                /**
                 *This API is used to synchronize the asset scan information.
                 * @param req SyncAssetScanRequest
                 * @return SyncAssetScanOutcome
                 */
                SyncAssetScanOutcome SyncAssetScan(const Model::SyncAssetScanRequest &request);
                void SyncAssetScanAsync(const Model::SyncAssetScanRequest& request, const SyncAssetScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncAssetScanOutcomeCallable SyncAssetScanCallable(const Model::SyncAssetScanRequest& request);

                /**
                 *This API is used to sync the summary of baseline detection progress.
                 * @param req SyncBaselineDetectSummaryRequest
                 * @return SyncBaselineDetectSummaryOutcome
                 */
                SyncBaselineDetectSummaryOutcome SyncBaselineDetectSummary(const Model::SyncBaselineDetectSummaryRequest &request);
                void SyncBaselineDetectSummaryAsync(const Model::SyncBaselineDetectSummaryRequest& request, const SyncBaselineDetectSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncBaselineDetectSummaryOutcomeCallable SyncBaselineDetectSummaryCallable(const Model::SyncBaselineDetectSummaryRequest& request);

                /**
                 *This API is used to sync the machine information.
                 * @param req SyncMachinesRequest
                 * @return SyncMachinesOutcome
                 */
                SyncMachinesOutcome SyncMachines(const Model::SyncMachinesRequest &request);
                void SyncMachinesAsync(const Model::SyncMachinesRequest& request, const SyncMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncMachinesOutcomeCallable SyncMachinesCallable(const Model::SyncMachinesRequest& request);

                /**
                 *This API is used to test the rules of WeCom chatbots.
                 * @param req TestWebHookRuleRequest
                 * @return TestWebHookRuleOutcome
                 */
                TestWebHookRuleOutcome TestWebHookRule(const Model::TestWebHookRuleRequest &request);
                void TestWebHookRuleAsync(const Model::TestWebHookRuleRequest& request, const TestWebHookRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TestWebHookRuleOutcomeCallable TestWebHookRuleCallable(const Model::TestWebHookRuleRequest& request);

                /**
                 *This API is used to mark identified Trojan files as Trusted.
                 * @param req TrustMalwaresRequest
                 * @return TrustMalwaresOutcome
                 */
                TrustMalwaresOutcome TrustMalwares(const Model::TrustMalwaresRequest &request);
                void TrustMalwaresAsync(const Model::TrustMalwaresRequest& request, const TrustMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TrustMalwaresOutcomeCallable TrustMalwaresCallable(const Model::TrustMalwaresRequest& request);

                /**
                 *This API is used to untrust Trojan files.
                 * @param req UntrustMalwaresRequest
                 * @return UntrustMalwaresOutcome
                 */
                UntrustMalwaresOutcome UntrustMalwares(const Model::UntrustMalwaresRequest &request);
                void UntrustMalwaresAsync(const Model::UntrustMalwaresRequest& request, const UntrustMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UntrustMalwaresOutcomeCallable UntrustMalwaresCallable(const Model::UntrustMalwaresRequest& request);

                /**
                 *This API is used to update the policy information based on baseline policy IDs.
                 * @param req UpdateBaselineStrategyRequest
                 * @return UpdateBaselineStrategyOutcome
                 */
                UpdateBaselineStrategyOutcome UpdateBaselineStrategy(const Model::UpdateBaselineStrategyRequest &request);
                void UpdateBaselineStrategyAsync(const Model::UpdateBaselineStrategyRequest& request, const UpdateBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateBaselineStrategyOutcomeCallable UpdateBaselineStrategyCallable(const Model::UpdateBaselineStrategyRequest& request);

                /**
                 *This API is used to obtain the list of tags associated with machines.
                 * @param req UpdateMachineTagsRequest
                 * @return UpdateMachineTagsOutcome
                 */
                UpdateMachineTagsOutcome UpdateMachineTags(const Model::UpdateMachineTagsRequest &request);
                void UpdateMachineTagsAsync(const Model::UpdateMachineTagsRequest& request, const UpdateMachineTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateMachineTagsOutcomeCallable UpdateMachineTagsCallable(const Model::UpdateMachineTagsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_CWPCLIENT_H_
