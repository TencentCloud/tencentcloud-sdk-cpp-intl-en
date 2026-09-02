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

#ifndef TENCENTCLOUD_CSIP_V20221121_CSIPCLIENT_H_
#define TENCENTCLOUD_CSIP_V20221121_CSIPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/csip/v20221121/model/AccessAIAnalysisSMTPRequest.h>
#include <tencentcloud/csip/v20221121/model/AccessAIAnalysisSMTPResponse.h>
#include <tencentcloud/csip/v20221121/model/AddDspmAssetManagerRequest.h>
#include <tencentcloud/csip/v20221121/model/AddDspmAssetManagerResponse.h>
#include <tencentcloud/csip/v20221121/model/AddImageRegistryRequest.h>
#include <tencentcloud/csip/v20221121/model/AddImageRegistryResponse.h>
#include <tencentcloud/csip/v20221121/model/AddLoginWhiteListsRequest.h>
#include <tencentcloud/csip/v20221121/model/AddLoginWhiteListsResponse.h>
#include <tencentcloud/csip/v20221121/model/AddNewBindRoleUserRequest.h>
#include <tencentcloud/csip/v20221121/model/AddNewBindRoleUserResponse.h>
#include <tencentcloud/csip/v20221121/model/AddVulWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/AddVulWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyBaselinePolicyRequest.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyBaselinePolicyResponse.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyImageRegistryTimedScanTaskConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyImageRegistryTimedScanTaskConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyImageSensitiveWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyImageSensitiveWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyImageVirusWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyImageVirusWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyImageVulWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/BatchModifyImageVulWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/CancelEdrAlertIgnoreRequest.h>
#include <tencentcloud/csip/v20221121/model/CancelEdrAlertIgnoreResponse.h>
#include <tencentcloud/csip/v20221121/model/CheckCWPExposePathPermissionRequest.h>
#include <tencentcloud/csip/v20221121/model/CheckCWPExposePathPermissionResponse.h>
#include <tencentcloud/csip/v20221121/model/CheckImageRegistryInstanceNameDuplicateRequest.h>
#include <tencentcloud/csip/v20221121/model/CheckImageRegistryInstanceNameDuplicateResponse.h>
#include <tencentcloud/csip/v20221121/model/CheckIsUltimateVersionRequest.h>
#include <tencentcloud/csip/v20221121/model/CheckIsUltimateVersionResponse.h>
#include <tencentcloud/csip/v20221121/model/CheckRiskRequest.h>
#include <tencentcloud/csip/v20221121/model/CheckRiskResponse.h>
#include <tencentcloud/csip/v20221121/model/CopyBaselinePolicyRequest.h>
#include <tencentcloud/csip/v20221121/model/CopyBaselinePolicyResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAIScheduleRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAIScheduleResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAccessKeyCheckTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAccessKeyCheckTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAccessKeySyncTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAccessKeySyncTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAllAssetsExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAllAssetsExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetComponentListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetComponentListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetComponentRelatedImageListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetComponentRelatedImageListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetFilterViewRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetFilterViewResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetProcessExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetProcessExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetSyncTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetSyncTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetTagRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetTagResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetViewRisksExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateAssetViewRisksExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateBaselineAggregatedItemExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateBaselineAggregatedItemExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateBaselineFixRecordExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateBaselineFixRecordExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateBaselineMainTaskExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateBaselineMainTaskExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateCFGRiskPDFReportExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateCFGRiskPDFReportExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateCFGRisksExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateCFGRisksExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateCSIPManualMalwareScanRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateCSIPManualMalwareScanResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateCheckViewRisksExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateCheckViewRisksExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateCloudFunctionExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateCloudFunctionExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterAssetSyncTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterAssetSyncTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterContainerListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterContainerListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterNamespaceListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterNamespaceListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterNodeListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateClusterNodeListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateComplianceRiskExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateComplianceRiskExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDomainAndIpRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDomainAndIpResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmAccessExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmAccessExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmApplyOrderRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmApplyOrderResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmApproveHistoryExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmApproveHistoryExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmAssetAccessTopologyExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmAssetAccessTopologyExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmAssetIdentifyInfoExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmAssetIdentifyInfoExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmAssetsExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmAssetsExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmAuditFilterStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmAuditFilterStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmExportTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmExportTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyCategoryRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyCategoryResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyComplianceCategoryRelationRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyComplianceCategoryRelationResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyComplianceGroupRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyComplianceGroupResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyComplianceGroupCopyRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyComplianceGroupCopyResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyComplianceRuleRelationRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyComplianceRuleRelationResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyInfoListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyInfoListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyLevelGroupRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyLevelGroupResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmIdentifyRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmPersonalIdentifyRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmPersonalIdentifyResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmResourceRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmResourceResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmRiskExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmRiskExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmRiskStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmRiskStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmWhitelistStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDspmWhitelistStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDynamicAssetsExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDynamicAssetsExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateEDRManualScanRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateEDRManualScanResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateEdrAlertExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateEdrAlertExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateEdrLessAlertExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateEdrLessAlertExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateExposureAutoTagRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateExposureAutoTagRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateExposuresExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateExposuresExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateHighBaseLineRisksExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateHighBaseLineRisksExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateHostImageListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateHostImageListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateHostVulExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateHostVulExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateIaCAccessTokenRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateIaCAccessTokenResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateIaCFileExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateIaCFileExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateIaCFileReScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateIaCFileReScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageAssetListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageAssetListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageAssociatedContainerListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageAssociatedContainerListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageAssociatedHostListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageAssociatedHostListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageComponentListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageComponentListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageLayerVulListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageLayerVulListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageRegistryConnectivityTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageRegistryConnectivityTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageRegistryListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageRegistryListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageRegistryScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageRegistryScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageRegistryTimedScanTaskConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageRegistryTimedScanTaskConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageSensitiveInfoListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageSensitiveInfoListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageSensitiveWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageSensitiveWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVirusListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVirusListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVirusWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVirusWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVulListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVulListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVulSummaryListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVulSummaryListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVulWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateImageVulWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/CreatePodContainerListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreatePodContainerListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreatePodServiceListExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreatePodServiceListExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreatePublicAssetsExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreatePublicAssetsExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateRiskCenterScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateRiskCenterScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateRiskDetailExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateRiskDetailExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateSandboxACLRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateSandboxACLRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateSandboxDLPRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateSandboxDLPRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateSandboxFileRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateSandboxFileRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateSandboxLLMAuditRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateSandboxLLMAuditRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateScanStatisticExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateScanStatisticExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateSkillScanRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateSkillScanResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateVulFixRetryTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateVulFixRetryTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateVulFixTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateVulFixTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateVulFixedExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateVulFixedExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateVulReScanRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateVulReScanResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateVulRisksExportJobRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateVulRisksExportJobResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateVulScanManualRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateVulScanManualResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteAIAnalysisSMTPAccessRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteAIAnalysisSMTPAccessResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteAIScheduleRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteAIScheduleResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteAssetFilterViewRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteAssetFilterViewResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteAssetTagRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteAssetTagResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteBaselineSelfDefinedPolicyListRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteBaselineSelfDefinedPolicyListResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteCSIPMalwareScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteCSIPMalwareScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteClusterRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteClusterResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDomainAndIpRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDomainAndIpResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmApplyOrderRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmApplyOrderResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmAssetAccountRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmAssetAccountResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmAuditFilterStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmAuditFilterStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmBackupLogListRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmBackupLogListResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmCkafkaConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmCkafkaConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmExportTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmExportTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyCategoryRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyCategoryResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyComplianceCategoryRelationRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyComplianceCategoryRelationResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyComplianceGroupRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyComplianceGroupResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyComplianceRuleRelationRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyComplianceRuleRelationResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyLevelGroupRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyLevelGroupResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmIdentifyRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmPersonalIdentifyRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmPersonalIdentifyResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmRestoreLogListRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmRestoreLogListResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmRiskStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmRiskStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmShareUserDataRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmShareUserDataResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmWhitelistStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDspmWhitelistStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteEDRRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteEDRRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteEDRScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteEDRScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteEdrLogCollectPathsRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteEdrLogCollectPathsResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteExposureAutoTagRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteExposureAutoTagRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteIaCAccessTokenRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteIaCAccessTokenResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteIaCFileRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteIaCFileResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageRegistryRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageRegistryResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageRegistryScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageRegistryScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageRegistryTimedScanTaskConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageRegistryTimedScanTaskConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageSensitiveWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageSensitiveWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageVirusWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageVirusWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageVulWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteImageVulWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteLoginWhiteListRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteLoginWhiteListResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteMachineClearHistoryRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteMachineClearHistoryResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteRiskScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteRiskScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteSandboxACLRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteSandboxACLRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteSandboxDLPRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteSandboxDLPRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteSandboxFileRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteSandboxFileRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteSandboxLLMAuditRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteSandboxLLMAuditRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteVulWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteVulWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteWebhookPoliciesRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteWebhookPoliciesResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteWebhookReceiversRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteWebhookReceiversResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAgentAssetListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAgentAssetListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAgentCredentialListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAgentCredentialListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAgentCredentialLocationListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAgentCredentialLocationListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAgentSkillListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAgentSkillListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisFileDownloadURLRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisFileDownloadURLResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisHistoryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisHistoryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisRecommendQuestionsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisRecommendQuestionsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisRobotInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisRobotInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisSMTPRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisSMTPResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAILinkSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAILinkSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIScheduleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIScheduleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAISchedulePlanListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAISchedulePlanListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIScheduleStatsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIScheduleStatsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIScheduleTaskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIScheduleTaskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIScheduleTaskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAIScheduleTaskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAKAnalysisDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAKAnalysisDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAbTestUserRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAbTestUserResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAbnormalCallRecordRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAbnormalCallRecordResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyAlarmRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyAlarmResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyAlarmDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyAlarmDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyAssetRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyAssetResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyRiskRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyRiskResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyRiskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyRiskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyUserDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyUserDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyUserListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyUserListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyWhiteListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAccessKeyWhiteListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAgentConfigSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAgentConfigSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAgentRunModeRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAgentRunModeResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAgentRunPolicyRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAgentRunPolicyResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAlertListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAlertListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetComponentListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetComponentListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetComponentRelatedImageListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetComponentRelatedImageListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetFilterViewsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetFilterViewsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetLastSyncTimeRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetLastSyncTimeResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetOverviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetOverviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetProcessListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetProcessListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetRiskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetRiskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetSyncTaskStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetSyncTaskStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetTagAttributesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetTagAttributesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetTagTreeRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetTagTreeResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetTagsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetTagsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetTreeRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetTreeResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetViewVulRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetViewVulRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBackendScanEngineRegionListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBackendScanEngineRegionListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBanModeRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBanModeResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBanStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBanStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineAggregatedItemListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineAggregatedItemListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineAggregatedPolicyListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineAggregatedPolicyListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineCalculatingStatisticsPolicyIDListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineCalculatingStatisticsPolicyIDListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineCategoryItemListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineCategoryItemListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineFixRecordListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineFixRecordListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineItemRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineItemRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineMainTaskItemListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineMainTaskItemListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineMainTaskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineMainTaskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineOverviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineOverviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselinePolicyCategoryListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselinePolicyCategoryListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselinePolicyItemListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselinePolicyItemListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselinePolicyListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselinePolicyListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselinePolicyNameExistAppidListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselinePolicyNameExistAppidListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineSubTaskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineSubTaskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineSyncConfRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineSyncConfResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineSystemCategoryListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineSystemCategoryListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineUserOtherConfRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineUserOtherConfResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineUserWeakPasswordConfRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBaselineUserWeakPasswordConfResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeBruteAttackRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeBruteAttackRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCFGRiskReportStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCFGRiskReportStatisticsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCFGRiskStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCFGRiskStatisticsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCFWAssetStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCFWAssetStatisticsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCLSLogIndexV3Request.h>
#include <tencentcloud/csip/v20221121/model/DescribeCLSLogIndexV3Response.h>
#include <tencentcloud/csip/v20221121/model/DescribeCLSLogListV3Request.h>
#include <tencentcloud/csip/v20221121/model/DescribeCLSLogListV3Response.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSCPayInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSCPayInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPLicenseBindScheduleRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPLicenseBindScheduleResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPMalwareScanTaskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPMalwareScanTaskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPMalwareScanTaskProgressRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPMalwareScanTaskProgressResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPRiskStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPRiskStatisticsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSPMPayInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSPMPayInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPExposePathRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPExposePathResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPExposuresRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPExposuresResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPLicenseBindScheduleRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPLicenseBindScheduleResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPMachineDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPMachineDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPMachineOsListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPMachineOsListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPMachinesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPMachinesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPOrderListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPOrderListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPScanIpInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPScanIpInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPTaskDurationRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCWPTaskDurationResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCallRecordRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCallRecordResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCheckConnectivityHostListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCheckConnectivityHostListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCheckViewRisksRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCheckViewRisksResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClbListenerListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClbListenerListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClbListenerRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClbListenerRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClbTargetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClbTargetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCloudAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCloudAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCloudFunctionListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCloudFunctionListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterAssetListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterAssetListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterAssetSyncTaskStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterAssetSyncTaskStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerAppListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerAppListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerComponentListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerComponentListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerPortListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerPortListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerProcessListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerProcessListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerWebServiceListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerWebServiceListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterInstallCommandRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterInstallCommandResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterNamespaceListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterNamespaceListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterNodeListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterNodeListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterPodAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterPodAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterPodDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterPodDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterPodListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterPodListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterServiceListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterServiceListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterSummaryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterSummaryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterSuperNodeInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterSuperNodeInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeComplianceOverviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeComplianceOverviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeComplianceRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeComplianceRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeComplianceStandardTermTreeRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeComplianceStandardTermTreeResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeComplianceStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeComplianceStatisticsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeConfigCheckRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeConfigCheckRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCspmShardConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCspmShardConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCustomAssetTagCountRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCustomAssetTagCountResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCustomRiskRuleDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCustomRiskRuleDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCustomRiskRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCustomRiskRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDefaultSecurityScoreRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDefaultSecurityScoreRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDomainAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDomainAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAccessRecordRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAccessRecordResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAccessTopologyAccountsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAccessTopologyAccountsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAccessTopologyAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAccessTopologyAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAccessTopologyIpsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAccessTopologyIpsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmApplyHistoryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmApplyHistoryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmApplyOrderListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmApplyOrderListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmApproveHistoryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmApproveHistoryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmApproveOrderListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmApproveOrderListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccessTopologyRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccessTopologyResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccountIdentifyRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccountIdentifyResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccountPresetPrivilegesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccountPresetPrivilegesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccountRecycledPrivilegesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccountRecycledPrivilegesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccountsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccountsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetDatabaseListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetDatabaseListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetDatabasesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetDatabasesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetFieldListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetFieldListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetFieldSamplesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetFieldSamplesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetIdentifyInfoListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetIdentifyInfoListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetIdsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetIdsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetLoginCredentialRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetLoginCredentialResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetSecurityAnalyseStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetSecurityAnalyseStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetSupportedPrivilegesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetSupportedPrivilegesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetTableListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetTableListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAuditFilterStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmAuditFilterStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmBackupLogListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmBackupLogListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmBackupSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmBackupSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmCkafkaRouteListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmCkafkaRouteListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmCkafkaTopicListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmCkafkaTopicListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmDictionaryListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmDictionaryListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmExportTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmExportTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyCategoryListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyCategoryListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyComplianceCategoryRuleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyComplianceCategoryRuleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyComplianceGroupDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyComplianceGroupDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyComplianceGroupListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyComplianceGroupListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyDistributionStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyDistributionStatisticsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyIdListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyIdListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyInfoListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyInfoListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyLevelGroupListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyLevelGroupListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyRuleDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyRuleDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyRuleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyRuleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyRuleTestResultRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyRuleTestResultResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmLogDeliveryTypeRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmLogDeliveryTypeResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmLogListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmLogListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmLogTypeConfigListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmLogTypeConfigListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmPayInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmPayInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmPersonApplyHistoryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmPersonApplyHistoryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmPersonalIdentifyListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmPersonalIdentifyListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmResourceRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmResourceResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskStrategyGroupRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskStrategyGroupResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskTendencyRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskTendencyResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmSessionListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmSessionListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmStatisticsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmSupportedAssetTypeRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmSupportedAssetTypeResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmSyncAssetsStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmSyncAssetsStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmSyncUsersStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmSyncUsersStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmUserCkafkaInstanceListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmUserCkafkaInstanceListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmWhitelistStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDspmWhitelistStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDynamicAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDynamicAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEDRRuleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEDRRuleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEDRScanRecordListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEDRScanRecordListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEDRScanTaskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEDRScanTaskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertCountForAssetRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertCountForAssetResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertCountForContainerRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertCountForContainerResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertMultiAttackStagesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertMultiAttackStagesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertSummaryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertSummaryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertThreatTagsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrAlertThreatTagsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrExcludeNetworkSegmentsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrExcludeNetworkSegmentsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrExportJobDownloadURLRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrExportJobDownloadURLResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrExportJobListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrExportJobListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrLogCollectPathsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeEdrLogCollectPathsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExportJobDownloadURLRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExportJobDownloadURLResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExportJobManageListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExportJobManageListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeAssetCategoryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeAssetCategoryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposePathRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposePathResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeRiskStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeRiskStatisticsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeRisksRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeRisksResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposureAutoTagAttributeRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposureAutoTagAttributeResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposureAutoTagRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposureAutoTagRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposureTrendRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposureTrendResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposuresRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposuresResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeGatewayAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeGatewayAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeHighBaseLineRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeHighBaseLineRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeHostKBRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeHostKBRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeHostVulItemVPRInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeHostVulItemVPRInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeHostVulOverviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeHostVulOverviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeHostVulRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeHostVulRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCFileListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCFileListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCFileOverviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCFileOverviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCFileReportRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCFileReportResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCTokenListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeIaCTokenListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssetDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssetDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssetListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssetListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssociatedAssetCountRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssociatedAssetCountResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssociatedContainerListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssociatedContainerListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssociatedHostListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageAssociatedHostListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageComponentListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageComponentListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageExportJobListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageExportJobListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageLayerListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageLayerListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageLayerVulListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageLayerVulListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryAssetOverviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryAssetOverviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryConnectivityTaskResultRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryConnectivityTaskResultResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryNamespaceListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryNamespaceListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryScanSubTaskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryScanSubTaskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryScanTaskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryScanTaskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryTimedScanTaskConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryTimedScanTaskConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryTimedScanTaskPreviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageRegistryTimedScanTaskPreviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageSensitiveInfoListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageSensitiveInfoListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageSensitiveWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageSensitiveWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVirusListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVirusListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVirusWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVirusWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVirusWhitelistDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVirusWhitelistDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVulListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVulListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVulSummaryListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVulSummaryListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVulWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeImageVulWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeKBDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeKBDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeKBUpdatableMachineListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeKBUpdatableMachineListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeKeySandboxCredentialRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeKeySandboxCredentialResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeKeySandboxCredentialListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeKeySandboxCredentialListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeLastScanTaskInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeLastScanTaskInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeLicenseStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeLicenseStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeLighthouseFirewallRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeLighthouseFirewallRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeListenerListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeListenerListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeLoginTypeGlobalConfRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeLoginTypeGlobalConfResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeLoginTypeHostRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeLoginTypeHostResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeLoginWhiteCombinedListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeLoginWhiteCombinedListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeLoginWhiteHostListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeLoginWhiteHostListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeMachineClearHistoryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeMachineClearHistoryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeMachineGeneralRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeMachineGeneralResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeMachineLoginTypeRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeMachineLoginTypeResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeMalwareTimingScanSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeMalwareTimingScanSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeMandatoryVulSetRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeMandatoryVulSetResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeModifyMachinesLoginTypeTasksRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeModifyMachinesLoginTypeTasksResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeMultiCloudAssetCountRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeMultiCloudAssetCountResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNFSScanConfRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNFSScanConfResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNFSScanHostRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNFSScanHostResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNICAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNICAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNatRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNatRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNetAttackSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNetAttackSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifyAgentOfflineDurationRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifyAgentOfflineDurationResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifyAssetConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifyAssetConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifySettingRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifySettingResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifySettingAkRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifySettingAkResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifySettingAlertRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNotifySettingAlertResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeOrganizationInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeOrganizationInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeOrganizationUserInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeOrganizationUserInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeOtherCloudAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeOtherCloudAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribePodContainerListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribePodContainerListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribePortDetectListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribePortDetectListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribePortScanTaskCountRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribePortScanTaskCountResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribePreventUninstallGlobalConfRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribePreventUninstallGlobalConfResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribePreventUninstallHostRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribePreventUninstallHostResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeProcessDaemonGlobalConfRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeProcessDaemonGlobalConfResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeProcessDaemonHostRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeProcessDaemonHostResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribePublicCloudAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribePublicCloudAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribePublicIpAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribePublicIpAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRaspLicenseListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRaspLicenseListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRegistryOverviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRegistryOverviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRegistryRegionListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRegistryRegionListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRepositoryImageAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRepositoryImageAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeReverseShellSystemPolicyConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeReverseShellSystemPolicyConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCallRecordRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCallRecordResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewCFGRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewCFGRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewPortRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewPortRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewVULRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewVULRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewWeakPasswordRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewWeakPasswordRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterCFGViewCFGRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterCFGViewCFGRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterPortViewPortRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterPortViewPortRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterRiskTrendAnalysisRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterRiskTrendAnalysisResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterServerRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterServerRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterVULViewVULRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterVULViewVULRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterWebsiteRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterWebsiteRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskDetailListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskDetailListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskRuleDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskRuleDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskScanCronConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskScanCronConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSCFAliasListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSCFAliasListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSCFFunctionListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSCFFunctionListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSCFFunctionVersionListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSCFFunctionVersionListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSCFNamespaceListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSCFNamespaceListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxACLAlertListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxACLAlertListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxACLRuleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxACLRuleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxACLSystemRuleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxACLSystemRuleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxDLPAlertListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxDLPAlertListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxDLPRuleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxDLPRuleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxDLPSystemRuleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxDLPSystemRuleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxFileRuleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxFileRuleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxLLMAuditAlertListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxLLMAuditAlertListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxLLMAuditRuleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxLLMAuditRuleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxLLMAuditSystemRuleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSandboxLLMAuditSystemRuleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanReportListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanReportListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanStatisticRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanStatisticResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanTaskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanTaskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanTaskRecordListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanTaskRecordListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeScfCustomDomainEndpointsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeScfCustomDomainEndpointsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSearchBugInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSearchBugInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSecurityGroupPolicyRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSecurityGroupPolicyResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSecurityRiskTrendRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSecurityRiskTrendResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSecurityScoreOverviewRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSecurityScoreOverviewResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSecurityScoreRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSecurityScoreRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSkillScanAlertDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSkillScanAlertDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSkillScanAlertListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSkillScanAlertListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSkillScanPayInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSkillScanPayInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSkillScanResultRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSkillScanResultResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSourceIPAssetRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSourceIPAssetResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSourceIPDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSourceIPDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSubUserInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSubUserInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSubnetAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSubnetAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeTCRInstanceListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeTCRInstanceListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeTagRuleAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeTagRuleAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskLogListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskLogListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskLogURLRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskLogURLResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskPredictCostQuotaRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskPredictCostQuotaResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeTopAttackInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeTopAttackInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeUebaBehaviorSummaryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeUebaBehaviorSummaryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeUebaRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeUebaRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeUebaUserSummaryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeUebaUserSummaryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserAKInfoListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserAKInfoListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserCSPMInfoListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserCSPMInfoListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserCallRecordRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserCallRecordResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserDspmInfoListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserDspmInfoListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeUserInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULRiskAdvanceCFGListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULRiskAdvanceCFGListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULRiskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULRiskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVdbAndPocInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVdbAndPocInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVoucherEligibilityRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVoucherEligibilityResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVpcAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVpcAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulComponentRelateHostRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulComponentRelateHostResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixTaskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixTaskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixTaskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixTaskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixableMachineListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixableMachineListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixedHostDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixedHostDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixedListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulFixedListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulHostRelateComponentRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulHostRelateComponentResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulIgnoreRuleListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulIgnoreRuleListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulItemListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulItemListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulLabelListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulLabelListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulRiskRelateComponentRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulRiskRelateComponentResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulRiskRelateHostRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulRiskRelateHostResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulScanPeriodicRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulScanPeriodicResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulScanTaskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulScanTaskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulScanTaskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulScanTaskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulViewVulRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulViewVulRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeWebhookPolicyListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeWebhookPolicyListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeWebhookReceiverListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeWebhookReceiverListResponse.h>
#include <tencentcloud/csip/v20221121/model/DisableAIScheduleRequest.h>
#include <tencentcloud/csip/v20221121/model/DisableAIScheduleResponse.h>
#include <tencentcloud/csip/v20221121/model/DownloadDspmExportLogRequest.h>
#include <tencentcloud/csip/v20221121/model/DownloadDspmExportLogResponse.h>
#include <tencentcloud/csip/v20221121/model/EnableAIScheduleRequest.h>
#include <tencentcloud/csip/v20221121/model/EnableAIScheduleResponse.h>
#include <tencentcloud/csip/v20221121/model/ExportCSIPMalwareScanTaskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/ExportCSIPMalwareScanTaskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/ExportClientSettingHostListRequest.h>
#include <tencentcloud/csip/v20221121/model/ExportClientSettingHostListResponse.h>
#include <tencentcloud/csip/v20221121/model/ExportEDRRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/ExportEDRRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/ExportTasksRequest.h>
#include <tencentcloud/csip/v20221121/model/ExportTasksResponse.h>
#include <tencentcloud/csip/v20221121/model/InstallClusterAgentRequest.h>
#include <tencentcloud/csip/v20221121/model/InstallClusterAgentResponse.h>
#include <tencentcloud/csip/v20221121/model/InstallKeySandboxSkillRequest.h>
#include <tencentcloud/csip/v20221121/model/InstallKeySandboxSkillResponse.h>
#include <tencentcloud/csip/v20221121/model/InstallSandboxPluginRequest.h>
#include <tencentcloud/csip/v20221121/model/InstallSandboxPluginResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAILinkSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAILinkSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAIScheduleRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAIScheduleResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAgentConfigSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAgentConfigSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAgentRunModeRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAgentRunModeResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAgentRunPolicyRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAgentRunPolicyResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetCoreAttributeRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetCoreAttributeResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetFilterViewRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetFilterViewResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetTagRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetTagResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetTagsRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetTagsResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetTagsByAssetInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyAssetTagsByAssetInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyBanModeRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyBanModeResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselinePolicyRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselinePolicyResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselinePolicyEnableRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselinePolicyEnableResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselineSyncConfRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselineSyncConfResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselineUserOtherConfRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselineUserOtherConfResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselineUserWeakPasswordConfRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyBaselineUserWeakPasswordConfResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyBruteAttackBanStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyBruteAttackBanStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyBruteAttackRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyBruteAttackRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyCSIPLicenseBindsRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyCSIPLicenseBindsResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyCSIPLicenseUnBindsRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyCSIPLicenseUnBindsResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyCSIPRaspLicenseBindsRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyCSIPRaspLicenseBindsResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyCSIPRaspLicenseUnBindsRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyCSIPRaspLicenseUnBindsResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyClusterDefendStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyClusterDefendStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyCosAuditBucketMonitorStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyCosAuditBucketMonitorStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyCspmShardConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyCspmShardConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAccessRecordRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAccessRecordResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmApplyingIdentifyComplianceGroupRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmApplyingIdentifyComplianceGroupResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmApproveStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmApproveStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetAccountRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetAccountResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetAccountPrivilegesRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetAccountPrivilegesResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetDataScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetDataScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetDataScanTaskStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetDataScanTaskStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetLogDeliverySwitchRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetLogDeliverySwitchResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetSecurityAnalysisSwitchRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAssetSecurityAnalysisSwitchResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAuditFilterStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmAuditFilterStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmBackupSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmBackupSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmCkafkaSaveRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmCkafkaSaveResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmCkafkaStartRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmCkafkaStartResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmCkafkaStopRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmCkafkaStopResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyCategoryRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyCategoryResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyComplianceGroupRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyComplianceGroupResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyComplianceGroupStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyComplianceGroupStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyComplianceRuleLevelInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyComplianceRuleLevelInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyLevelGroupRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyLevelGroupResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyLevelItemRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyLevelItemResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyRuleStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIdentifyRuleStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIpInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmIpInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmLogDeliveryTypeRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmLogDeliveryTypeResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmPersonalIdentifyRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmPersonalIdentifyResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmRestoreLogTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmRestoreLogTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmRiskInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmRiskInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmRiskStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmRiskStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmWhitelistStrategyRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyDspmWhitelistStrategyResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyEDRRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyEDRRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyEDRRuleStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyEDRRuleStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyEDRRulesActionRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyEDRRulesActionResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrAlertIsolationRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrAlertIsolationResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrAlertPermanentIgnoreRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrAlertPermanentIgnoreResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrAlertStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrAlertStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrExcludeNetworkSegmentsRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrExcludeNetworkSegmentsResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrLogCollectPathRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyEdrLogCollectPathResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyExposureAutoTagRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyExposureAutoTagRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyExposureAutoTagRuleStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyExposureAutoTagRuleStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyExposureTagRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyExposureTagResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyIaCTokenPeriodRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyIaCTokenPeriodResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageRegistryRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageRegistryResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageRegistryTimedScanTaskConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageRegistryTimedScanTaskConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageSensitiveWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageSensitiveWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageVirusWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageVirusWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageVulWhitelistRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyImageVulWhitelistResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyLoginWhiteRecordRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyLoginWhiteRecordResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyMachineAutoClearConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyMachineAutoClearConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyMachineRemarkRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyMachineRemarkResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyMachinesLoginTypeRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyMachinesLoginTypeResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyMalwareTimingScanSettingsRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyMalwareTimingScanSettingsResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNFSScanConfRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNFSScanConfResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNFSScanHostRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNFSScanHostResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNetAttackSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNetAttackSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifyAgentOfflineDurationRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifyAgentOfflineDurationResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifyAssetConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifyAssetConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifyMemberRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifyMemberResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifySettingRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifySettingResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifySettingAkRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifySettingAkResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifySettingAlertRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyNotifySettingAlertResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyOrganizationAccountStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyOrganizationAccountStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyPayConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyPayConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyProtectionSettingRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyProtectionSettingResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyRaspLicenseBindsRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyRaspLicenseBindsResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyReverseShellSystemPolicyConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyReverseShellSystemPolicyConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskCenterRiskStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskCenterRiskStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskCenterScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskCenterScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskScanCronConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskScanCronConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxACLRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxACLRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxACLRuleStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxACLRuleStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxAlertStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxAlertStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxDLPRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxDLPRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxDLPRuleStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxDLPRuleStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxFileRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxFileRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxFileRuleStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxFileRuleStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxLLMAuditRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxLLMAuditRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxLLMAuditRuleStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifySandboxLLMAuditRuleStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifySecurityScoreRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifySecurityScoreRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyShareUserAKRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyShareUserAKResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyShareUserCSPMRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyShareUserCSPMResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyShareUserDspmRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyShareUserDspmResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifySkillScanAlertStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifySkillScanAlertStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyUebaRuleSwitchRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyUebaRuleSwitchResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyVulScanPeriodicRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyVulScanPeriodicResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyVulWhitelistConfigRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyVulWhitelistConfigResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyVulWhitelistSwitchRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyVulWhitelistSwitchResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyWebhookPolicyRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyWebhookPolicyResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyWebhookPolicyStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyWebhookPolicyStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyWebhookReceiverRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyWebhookReceiverResponse.h>
#include <tencentcloud/csip/v20221121/model/OperateRiskRequest.h>
#include <tencentcloud/csip/v20221121/model/OperateRiskResponse.h>
#include <tencentcloud/csip/v20221121/model/OperateRiskRulePolicyRequest.h>
#include <tencentcloud/csip/v20221121/model/OperateRiskRulePolicyResponse.h>
#include <tencentcloud/csip/v20221121/model/ResetDspmAssetAccountPasswordRequest.h>
#include <tencentcloud/csip/v20221121/model/ResetDspmAssetAccountPasswordResponse.h>
#include <tencentcloud/csip/v20221121/model/RetryDspmExportLogRequest.h>
#include <tencentcloud/csip/v20221121/model/RetryDspmExportLogResponse.h>
#include <tencentcloud/csip/v20221121/model/RevertDspmAssetAccountRequest.h>
#include <tencentcloud/csip/v20221121/model/RevertDspmAssetAccountResponse.h>
#include <tencentcloud/csip/v20221121/model/ScanBaselineAssetItemListRequest.h>
#include <tencentcloud/csip/v20221121/model/ScanBaselineAssetItemListResponse.h>
#include <tencentcloud/csip/v20221121/model/ScanBaselineItemListRequest.h>
#include <tencentcloud/csip/v20221121/model/ScanBaselineItemListResponse.h>
#include <tencentcloud/csip/v20221121/model/ScanBaselinePolicyListRequest.h>
#include <tencentcloud/csip/v20221121/model/ScanBaselinePolicyListResponse.h>
#include <tencentcloud/csip/v20221121/model/ScanBaselineRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/ScanBaselineRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/ScanCSIPTaskAgainRequest.h>
#include <tencentcloud/csip/v20221121/model/ScanCSIPTaskAgainResponse.h>
#include <tencentcloud/csip/v20221121/model/ScanEDRTaskAgainRequest.h>
#include <tencentcloud/csip/v20221121/model/ScanEDRTaskAgainResponse.h>
#include <tencentcloud/csip/v20221121/model/SendDspmAssetLoginSmsCodeRequest.h>
#include <tencentcloud/csip/v20221121/model/SendDspmAssetLoginSmsCodeResponse.h>
#include <tencentcloud/csip/v20221121/model/SendDspmCkafkaTestRequest.h>
#include <tencentcloud/csip/v20221121/model/SendDspmCkafkaTestResponse.h>
#include <tencentcloud/csip/v20221121/model/StartOrModifyPreventUninstallRequest.h>
#include <tencentcloud/csip/v20221121/model/StartOrModifyPreventUninstallResponse.h>
#include <tencentcloud/csip/v20221121/model/StartOrModifyProcessDaemonRequest.h>
#include <tencentcloud/csip/v20221121/model/StartOrModifyProcessDaemonResponse.h>
#include <tencentcloud/csip/v20221121/model/StopBaselineScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/StopBaselineScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/StopCSIPManualMalwareScanRequest.h>
#include <tencentcloud/csip/v20221121/model/StopCSIPManualMalwareScanResponse.h>
#include <tencentcloud/csip/v20221121/model/StopEDRScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/StopEDRScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/StopImageRegistryScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/StopImageRegistryScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/StopPreventUninstallRequest.h>
#include <tencentcloud/csip/v20221121/model/StopPreventUninstallResponse.h>
#include <tencentcloud/csip/v20221121/model/StopProcessDaemonRequest.h>
#include <tencentcloud/csip/v20221121/model/StopProcessDaemonResponse.h>
#include <tencentcloud/csip/v20221121/model/StopRiskCenterTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/StopRiskCenterTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/StopVulScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/StopVulScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/SyncDspmAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/SyncDspmAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/SyncDspmUsersRequest.h>
#include <tencentcloud/csip/v20221121/model/SyncDspmUsersResponse.h>
#include <tencentcloud/csip/v20221121/model/SyncImageRegistryRequest.h>
#include <tencentcloud/csip/v20221121/model/SyncImageRegistryResponse.h>
#include <tencentcloud/csip/v20221121/model/TestWebhookReceiverRequest.h>
#include <tencentcloud/csip/v20221121/model/TestWebhookReceiverResponse.h>
#include <tencentcloud/csip/v20221121/model/UninstallClusterAgentRequest.h>
#include <tencentcloud/csip/v20221121/model/UninstallClusterAgentResponse.h>
#include <tencentcloud/csip/v20221121/model/UninstallKeySandboxSkillRequest.h>
#include <tencentcloud/csip/v20221121/model/UninstallKeySandboxSkillResponse.h>
#include <tencentcloud/csip/v20221121/model/UpdateAccessKeyAlarmStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/UpdateAccessKeyAlarmStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/UpdateAccessKeyRemarkRequest.h>
#include <tencentcloud/csip/v20221121/model/UpdateAccessKeyRemarkResponse.h>
#include <tencentcloud/csip/v20221121/model/UpdateAlertStatusListRequest.h>
#include <tencentcloud/csip/v20221121/model/UpdateAlertStatusListResponse.h>
#include <tencentcloud/csip/v20221121/model/UpdateClusterOwnerRequest.h>
#include <tencentcloud/csip/v20221121/model/UpdateClusterOwnerResponse.h>
#include <tencentcloud/csip/v20221121/model/VerifyDspmAssetLoginCodeRequest.h>
#include <tencentcloud/csip/v20221121/model/VerifyDspmAssetLoginCodeResponse.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            class CsipClient : public AbstractClient
            {
            public:
                CsipClient(const Credential &credential, const std::string &region);
                CsipClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AccessAIAnalysisSMTPResponse> AccessAIAnalysisSMTPOutcome;
                typedef std::future<AccessAIAnalysisSMTPOutcome> AccessAIAnalysisSMTPOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::AccessAIAnalysisSMTPRequest&, AccessAIAnalysisSMTPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AccessAIAnalysisSMTPAsyncHandler;
                typedef Outcome<Core::Error, Model::AddDspmAssetManagerResponse> AddDspmAssetManagerOutcome;
                typedef std::future<AddDspmAssetManagerOutcome> AddDspmAssetManagerOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::AddDspmAssetManagerRequest&, AddDspmAssetManagerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddDspmAssetManagerAsyncHandler;
                typedef Outcome<Core::Error, Model::AddImageRegistryResponse> AddImageRegistryOutcome;
                typedef std::future<AddImageRegistryOutcome> AddImageRegistryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::AddImageRegistryRequest&, AddImageRegistryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddImageRegistryAsyncHandler;
                typedef Outcome<Core::Error, Model::AddLoginWhiteListsResponse> AddLoginWhiteListsOutcome;
                typedef std::future<AddLoginWhiteListsOutcome> AddLoginWhiteListsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::AddLoginWhiteListsRequest&, AddLoginWhiteListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddLoginWhiteListsAsyncHandler;
                typedef Outcome<Core::Error, Model::AddNewBindRoleUserResponse> AddNewBindRoleUserOutcome;
                typedef std::future<AddNewBindRoleUserOutcome> AddNewBindRoleUserOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::AddNewBindRoleUserRequest&, AddNewBindRoleUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddNewBindRoleUserAsyncHandler;
                typedef Outcome<Core::Error, Model::AddVulWhitelistResponse> AddVulWhitelistOutcome;
                typedef std::future<AddVulWhitelistOutcome> AddVulWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::AddVulWhitelistRequest&, AddVulWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddVulWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyBaselinePolicyResponse> BatchModifyBaselinePolicyOutcome;
                typedef std::future<BatchModifyBaselinePolicyOutcome> BatchModifyBaselinePolicyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::BatchModifyBaselinePolicyRequest&, BatchModifyBaselinePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyBaselinePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyImageRegistryTimedScanTaskConfigResponse> BatchModifyImageRegistryTimedScanTaskConfigOutcome;
                typedef std::future<BatchModifyImageRegistryTimedScanTaskConfigOutcome> BatchModifyImageRegistryTimedScanTaskConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::BatchModifyImageRegistryTimedScanTaskConfigRequest&, BatchModifyImageRegistryTimedScanTaskConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyImageRegistryTimedScanTaskConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyImageSensitiveWhitelistResponse> BatchModifyImageSensitiveWhitelistOutcome;
                typedef std::future<BatchModifyImageSensitiveWhitelistOutcome> BatchModifyImageSensitiveWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::BatchModifyImageSensitiveWhitelistRequest&, BatchModifyImageSensitiveWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyImageSensitiveWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyImageVirusWhitelistResponse> BatchModifyImageVirusWhitelistOutcome;
                typedef std::future<BatchModifyImageVirusWhitelistOutcome> BatchModifyImageVirusWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::BatchModifyImageVirusWhitelistRequest&, BatchModifyImageVirusWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyImageVirusWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyImageVulWhitelistResponse> BatchModifyImageVulWhitelistOutcome;
                typedef std::future<BatchModifyImageVulWhitelistOutcome> BatchModifyImageVulWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::BatchModifyImageVulWhitelistRequest&, BatchModifyImageVulWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyImageVulWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelEdrAlertIgnoreResponse> CancelEdrAlertIgnoreOutcome;
                typedef std::future<CancelEdrAlertIgnoreOutcome> CancelEdrAlertIgnoreOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CancelEdrAlertIgnoreRequest&, CancelEdrAlertIgnoreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelEdrAlertIgnoreAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckCWPExposePathPermissionResponse> CheckCWPExposePathPermissionOutcome;
                typedef std::future<CheckCWPExposePathPermissionOutcome> CheckCWPExposePathPermissionOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CheckCWPExposePathPermissionRequest&, CheckCWPExposePathPermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckCWPExposePathPermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckImageRegistryInstanceNameDuplicateResponse> CheckImageRegistryInstanceNameDuplicateOutcome;
                typedef std::future<CheckImageRegistryInstanceNameDuplicateOutcome> CheckImageRegistryInstanceNameDuplicateOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CheckImageRegistryInstanceNameDuplicateRequest&, CheckImageRegistryInstanceNameDuplicateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckImageRegistryInstanceNameDuplicateAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckIsUltimateVersionResponse> CheckIsUltimateVersionOutcome;
                typedef std::future<CheckIsUltimateVersionOutcome> CheckIsUltimateVersionOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CheckIsUltimateVersionRequest&, CheckIsUltimateVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckIsUltimateVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckRiskResponse> CheckRiskOutcome;
                typedef std::future<CheckRiskOutcome> CheckRiskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CheckRiskRequest&, CheckRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckRiskAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyBaselinePolicyResponse> CopyBaselinePolicyOutcome;
                typedef std::future<CopyBaselinePolicyOutcome> CopyBaselinePolicyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CopyBaselinePolicyRequest&, CopyBaselinePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyBaselinePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAIScheduleResponse> CreateAIScheduleOutcome;
                typedef std::future<CreateAIScheduleOutcome> CreateAIScheduleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAIScheduleRequest&, CreateAIScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccessKeyCheckTaskResponse> CreateAccessKeyCheckTaskOutcome;
                typedef std::future<CreateAccessKeyCheckTaskOutcome> CreateAccessKeyCheckTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAccessKeyCheckTaskRequest&, CreateAccessKeyCheckTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessKeyCheckTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccessKeySyncTaskResponse> CreateAccessKeySyncTaskOutcome;
                typedef std::future<CreateAccessKeySyncTaskOutcome> CreateAccessKeySyncTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAccessKeySyncTaskRequest&, CreateAccessKeySyncTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessKeySyncTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAllAssetsExportJobResponse> CreateAllAssetsExportJobOutcome;
                typedef std::future<CreateAllAssetsExportJobOutcome> CreateAllAssetsExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAllAssetsExportJobRequest&, CreateAllAssetsExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAllAssetsExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetComponentListExportJobResponse> CreateAssetComponentListExportJobOutcome;
                typedef std::future<CreateAssetComponentListExportJobOutcome> CreateAssetComponentListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAssetComponentListExportJobRequest&, CreateAssetComponentListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetComponentListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetComponentRelatedImageListExportJobResponse> CreateAssetComponentRelatedImageListExportJobOutcome;
                typedef std::future<CreateAssetComponentRelatedImageListExportJobOutcome> CreateAssetComponentRelatedImageListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAssetComponentRelatedImageListExportJobRequest&, CreateAssetComponentRelatedImageListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetComponentRelatedImageListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetFilterViewResponse> CreateAssetFilterViewOutcome;
                typedef std::future<CreateAssetFilterViewOutcome> CreateAssetFilterViewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAssetFilterViewRequest&, CreateAssetFilterViewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetFilterViewAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetProcessExportJobResponse> CreateAssetProcessExportJobOutcome;
                typedef std::future<CreateAssetProcessExportJobOutcome> CreateAssetProcessExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAssetProcessExportJobRequest&, CreateAssetProcessExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetProcessExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetSyncTaskResponse> CreateAssetSyncTaskOutcome;
                typedef std::future<CreateAssetSyncTaskOutcome> CreateAssetSyncTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAssetSyncTaskRequest&, CreateAssetSyncTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetSyncTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetTagResponse> CreateAssetTagOutcome;
                typedef std::future<CreateAssetTagOutcome> CreateAssetTagOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAssetTagRequest&, CreateAssetTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetTagAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetViewRisksExportJobResponse> CreateAssetViewRisksExportJobOutcome;
                typedef std::future<CreateAssetViewRisksExportJobOutcome> CreateAssetViewRisksExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateAssetViewRisksExportJobRequest&, CreateAssetViewRisksExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetViewRisksExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBaselineAggregatedItemExportJobResponse> CreateBaselineAggregatedItemExportJobOutcome;
                typedef std::future<CreateBaselineAggregatedItemExportJobOutcome> CreateBaselineAggregatedItemExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateBaselineAggregatedItemExportJobRequest&, CreateBaselineAggregatedItemExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBaselineAggregatedItemExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBaselineFixRecordExportJobResponse> CreateBaselineFixRecordExportJobOutcome;
                typedef std::future<CreateBaselineFixRecordExportJobOutcome> CreateBaselineFixRecordExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateBaselineFixRecordExportJobRequest&, CreateBaselineFixRecordExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBaselineFixRecordExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBaselineMainTaskExportJobResponse> CreateBaselineMainTaskExportJobOutcome;
                typedef std::future<CreateBaselineMainTaskExportJobOutcome> CreateBaselineMainTaskExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateBaselineMainTaskExportJobRequest&, CreateBaselineMainTaskExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBaselineMainTaskExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCFGRiskPDFReportExportJobResponse> CreateCFGRiskPDFReportExportJobOutcome;
                typedef std::future<CreateCFGRiskPDFReportExportJobOutcome> CreateCFGRiskPDFReportExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateCFGRiskPDFReportExportJobRequest&, CreateCFGRiskPDFReportExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCFGRiskPDFReportExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCFGRisksExportJobResponse> CreateCFGRisksExportJobOutcome;
                typedef std::future<CreateCFGRisksExportJobOutcome> CreateCFGRisksExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateCFGRisksExportJobRequest&, CreateCFGRisksExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCFGRisksExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCSIPManualMalwareScanResponse> CreateCSIPManualMalwareScanOutcome;
                typedef std::future<CreateCSIPManualMalwareScanOutcome> CreateCSIPManualMalwareScanOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateCSIPManualMalwareScanRequest&, CreateCSIPManualMalwareScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCSIPManualMalwareScanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCheckViewRisksExportJobResponse> CreateCheckViewRisksExportJobOutcome;
                typedef std::future<CreateCheckViewRisksExportJobOutcome> CreateCheckViewRisksExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateCheckViewRisksExportJobRequest&, CreateCheckViewRisksExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCheckViewRisksExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudFunctionExportJobResponse> CreateCloudFunctionExportJobOutcome;
                typedef std::future<CreateCloudFunctionExportJobOutcome> CreateCloudFunctionExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateCloudFunctionExportJobRequest&, CreateCloudFunctionExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudFunctionExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterAssetSyncTaskResponse> CreateClusterAssetSyncTaskOutcome;
                typedef std::future<CreateClusterAssetSyncTaskOutcome> CreateClusterAssetSyncTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateClusterAssetSyncTaskRequest&, CreateClusterAssetSyncTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAssetSyncTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterContainerListExportJobResponse> CreateClusterContainerListExportJobOutcome;
                typedef std::future<CreateClusterContainerListExportJobOutcome> CreateClusterContainerListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateClusterContainerListExportJobRequest&, CreateClusterContainerListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterContainerListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterListExportJobResponse> CreateClusterListExportJobOutcome;
                typedef std::future<CreateClusterListExportJobOutcome> CreateClusterListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateClusterListExportJobRequest&, CreateClusterListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterNamespaceListExportJobResponse> CreateClusterNamespaceListExportJobOutcome;
                typedef std::future<CreateClusterNamespaceListExportJobOutcome> CreateClusterNamespaceListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateClusterNamespaceListExportJobRequest&, CreateClusterNamespaceListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterNamespaceListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterNodeListExportJobResponse> CreateClusterNodeListExportJobOutcome;
                typedef std::future<CreateClusterNodeListExportJobOutcome> CreateClusterNodeListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateClusterNodeListExportJobRequest&, CreateClusterNodeListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterNodeListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateComplianceRiskExportJobResponse> CreateComplianceRiskExportJobOutcome;
                typedef std::future<CreateComplianceRiskExportJobOutcome> CreateComplianceRiskExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateComplianceRiskExportJobRequest&, CreateComplianceRiskExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateComplianceRiskExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDomainAndIpResponse> CreateDomainAndIpOutcome;
                typedef std::future<CreateDomainAndIpOutcome> CreateDomainAndIpOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDomainAndIpRequest&, CreateDomainAndIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainAndIpAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmAccessExportJobResponse> CreateDspmAccessExportJobOutcome;
                typedef std::future<CreateDspmAccessExportJobOutcome> CreateDspmAccessExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmAccessExportJobRequest&, CreateDspmAccessExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmAccessExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmApplyOrderResponse> CreateDspmApplyOrderOutcome;
                typedef std::future<CreateDspmApplyOrderOutcome> CreateDspmApplyOrderOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmApplyOrderRequest&, CreateDspmApplyOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmApplyOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmApproveHistoryExportJobResponse> CreateDspmApproveHistoryExportJobOutcome;
                typedef std::future<CreateDspmApproveHistoryExportJobOutcome> CreateDspmApproveHistoryExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmApproveHistoryExportJobRequest&, CreateDspmApproveHistoryExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmApproveHistoryExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmAssetAccessTopologyExportJobResponse> CreateDspmAssetAccessTopologyExportJobOutcome;
                typedef std::future<CreateDspmAssetAccessTopologyExportJobOutcome> CreateDspmAssetAccessTopologyExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmAssetAccessTopologyExportJobRequest&, CreateDspmAssetAccessTopologyExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmAssetAccessTopologyExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmAssetIdentifyInfoExportJobResponse> CreateDspmAssetIdentifyInfoExportJobOutcome;
                typedef std::future<CreateDspmAssetIdentifyInfoExportJobOutcome> CreateDspmAssetIdentifyInfoExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmAssetIdentifyInfoExportJobRequest&, CreateDspmAssetIdentifyInfoExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmAssetIdentifyInfoExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmAssetsExportJobResponse> CreateDspmAssetsExportJobOutcome;
                typedef std::future<CreateDspmAssetsExportJobOutcome> CreateDspmAssetsExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmAssetsExportJobRequest&, CreateDspmAssetsExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmAssetsExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmAuditFilterStrategyResponse> CreateDspmAuditFilterStrategyOutcome;
                typedef std::future<CreateDspmAuditFilterStrategyOutcome> CreateDspmAuditFilterStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmAuditFilterStrategyRequest&, CreateDspmAuditFilterStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmAuditFilterStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmExportTaskResponse> CreateDspmExportTaskOutcome;
                typedef std::future<CreateDspmExportTaskOutcome> CreateDspmExportTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmExportTaskRequest&, CreateDspmExportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmExportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmIdentifyCategoryResponse> CreateDspmIdentifyCategoryOutcome;
                typedef std::future<CreateDspmIdentifyCategoryOutcome> CreateDspmIdentifyCategoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmIdentifyCategoryRequest&, CreateDspmIdentifyCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmIdentifyCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmIdentifyComplianceCategoryRelationResponse> CreateDspmIdentifyComplianceCategoryRelationOutcome;
                typedef std::future<CreateDspmIdentifyComplianceCategoryRelationOutcome> CreateDspmIdentifyComplianceCategoryRelationOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmIdentifyComplianceCategoryRelationRequest&, CreateDspmIdentifyComplianceCategoryRelationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmIdentifyComplianceCategoryRelationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmIdentifyComplianceGroupResponse> CreateDspmIdentifyComplianceGroupOutcome;
                typedef std::future<CreateDspmIdentifyComplianceGroupOutcome> CreateDspmIdentifyComplianceGroupOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmIdentifyComplianceGroupRequest&, CreateDspmIdentifyComplianceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmIdentifyComplianceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmIdentifyComplianceGroupCopyResponse> CreateDspmIdentifyComplianceGroupCopyOutcome;
                typedef std::future<CreateDspmIdentifyComplianceGroupCopyOutcome> CreateDspmIdentifyComplianceGroupCopyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmIdentifyComplianceGroupCopyRequest&, CreateDspmIdentifyComplianceGroupCopyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmIdentifyComplianceGroupCopyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmIdentifyComplianceRuleRelationResponse> CreateDspmIdentifyComplianceRuleRelationOutcome;
                typedef std::future<CreateDspmIdentifyComplianceRuleRelationOutcome> CreateDspmIdentifyComplianceRuleRelationOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmIdentifyComplianceRuleRelationRequest&, CreateDspmIdentifyComplianceRuleRelationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmIdentifyComplianceRuleRelationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmIdentifyInfoListExportJobResponse> CreateDspmIdentifyInfoListExportJobOutcome;
                typedef std::future<CreateDspmIdentifyInfoListExportJobOutcome> CreateDspmIdentifyInfoListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmIdentifyInfoListExportJobRequest&, CreateDspmIdentifyInfoListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmIdentifyInfoListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmIdentifyLevelGroupResponse> CreateDspmIdentifyLevelGroupOutcome;
                typedef std::future<CreateDspmIdentifyLevelGroupOutcome> CreateDspmIdentifyLevelGroupOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmIdentifyLevelGroupRequest&, CreateDspmIdentifyLevelGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmIdentifyLevelGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmIdentifyRuleResponse> CreateDspmIdentifyRuleOutcome;
                typedef std::future<CreateDspmIdentifyRuleOutcome> CreateDspmIdentifyRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmIdentifyRuleRequest&, CreateDspmIdentifyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmIdentifyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmPersonalIdentifyResponse> CreateDspmPersonalIdentifyOutcome;
                typedef std::future<CreateDspmPersonalIdentifyOutcome> CreateDspmPersonalIdentifyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmPersonalIdentifyRequest&, CreateDspmPersonalIdentifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmPersonalIdentifyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmResourceResponse> CreateDspmResourceOutcome;
                typedef std::future<CreateDspmResourceOutcome> CreateDspmResourceOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmResourceRequest&, CreateDspmResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmRiskExportJobResponse> CreateDspmRiskExportJobOutcome;
                typedef std::future<CreateDspmRiskExportJobOutcome> CreateDspmRiskExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmRiskExportJobRequest&, CreateDspmRiskExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmRiskExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmRiskStrategyResponse> CreateDspmRiskStrategyOutcome;
                typedef std::future<CreateDspmRiskStrategyOutcome> CreateDspmRiskStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmRiskStrategyRequest&, CreateDspmRiskStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmRiskStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDspmWhitelistStrategyResponse> CreateDspmWhitelistStrategyOutcome;
                typedef std::future<CreateDspmWhitelistStrategyOutcome> CreateDspmWhitelistStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDspmWhitelistStrategyRequest&, CreateDspmWhitelistStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDspmWhitelistStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDynamicAssetsExportJobResponse> CreateDynamicAssetsExportJobOutcome;
                typedef std::future<CreateDynamicAssetsExportJobOutcome> CreateDynamicAssetsExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDynamicAssetsExportJobRequest&, CreateDynamicAssetsExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDynamicAssetsExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEDRManualScanResponse> CreateEDRManualScanOutcome;
                typedef std::future<CreateEDRManualScanOutcome> CreateEDRManualScanOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateEDRManualScanRequest&, CreateEDRManualScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEDRManualScanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEdrAlertExportJobResponse> CreateEdrAlertExportJobOutcome;
                typedef std::future<CreateEdrAlertExportJobOutcome> CreateEdrAlertExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateEdrAlertExportJobRequest&, CreateEdrAlertExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdrAlertExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEdrLessAlertExportJobResponse> CreateEdrLessAlertExportJobOutcome;
                typedef std::future<CreateEdrLessAlertExportJobOutcome> CreateEdrLessAlertExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateEdrLessAlertExportJobRequest&, CreateEdrLessAlertExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdrLessAlertExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExposureAutoTagRuleResponse> CreateExposureAutoTagRuleOutcome;
                typedef std::future<CreateExposureAutoTagRuleOutcome> CreateExposureAutoTagRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateExposureAutoTagRuleRequest&, CreateExposureAutoTagRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExposureAutoTagRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExposuresExportJobResponse> CreateExposuresExportJobOutcome;
                typedef std::future<CreateExposuresExportJobOutcome> CreateExposuresExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateExposuresExportJobRequest&, CreateExposuresExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExposuresExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHighBaseLineRisksExportJobResponse> CreateHighBaseLineRisksExportJobOutcome;
                typedef std::future<CreateHighBaseLineRisksExportJobOutcome> CreateHighBaseLineRisksExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateHighBaseLineRisksExportJobRequest&, CreateHighBaseLineRisksExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHighBaseLineRisksExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHostImageListExportJobResponse> CreateHostImageListExportJobOutcome;
                typedef std::future<CreateHostImageListExportJobOutcome> CreateHostImageListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateHostImageListExportJobRequest&, CreateHostImageListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHostImageListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHostVulExportJobResponse> CreateHostVulExportJobOutcome;
                typedef std::future<CreateHostVulExportJobOutcome> CreateHostVulExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateHostVulExportJobRequest&, CreateHostVulExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHostVulExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIaCAccessTokenResponse> CreateIaCAccessTokenOutcome;
                typedef std::future<CreateIaCAccessTokenOutcome> CreateIaCAccessTokenOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateIaCAccessTokenRequest&, CreateIaCAccessTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIaCAccessTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIaCFileExportJobResponse> CreateIaCFileExportJobOutcome;
                typedef std::future<CreateIaCFileExportJobOutcome> CreateIaCFileExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateIaCFileExportJobRequest&, CreateIaCFileExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIaCFileExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIaCFileReScanTaskResponse> CreateIaCFileReScanTaskOutcome;
                typedef std::future<CreateIaCFileReScanTaskOutcome> CreateIaCFileReScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateIaCFileReScanTaskRequest&, CreateIaCFileReScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIaCFileReScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageAssetListExportJobResponse> CreateImageAssetListExportJobOutcome;
                typedef std::future<CreateImageAssetListExportJobOutcome> CreateImageAssetListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageAssetListExportJobRequest&, CreateImageAssetListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageAssetListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageAssociatedContainerListExportJobResponse> CreateImageAssociatedContainerListExportJobOutcome;
                typedef std::future<CreateImageAssociatedContainerListExportJobOutcome> CreateImageAssociatedContainerListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageAssociatedContainerListExportJobRequest&, CreateImageAssociatedContainerListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageAssociatedContainerListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageAssociatedHostListExportJobResponse> CreateImageAssociatedHostListExportJobOutcome;
                typedef std::future<CreateImageAssociatedHostListExportJobOutcome> CreateImageAssociatedHostListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageAssociatedHostListExportJobRequest&, CreateImageAssociatedHostListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageAssociatedHostListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageComponentListExportJobResponse> CreateImageComponentListExportJobOutcome;
                typedef std::future<CreateImageComponentListExportJobOutcome> CreateImageComponentListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageComponentListExportJobRequest&, CreateImageComponentListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageComponentListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageLayerVulListExportJobResponse> CreateImageLayerVulListExportJobOutcome;
                typedef std::future<CreateImageLayerVulListExportJobOutcome> CreateImageLayerVulListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageLayerVulListExportJobRequest&, CreateImageLayerVulListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageLayerVulListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageRegistryConnectivityTaskResponse> CreateImageRegistryConnectivityTaskOutcome;
                typedef std::future<CreateImageRegistryConnectivityTaskOutcome> CreateImageRegistryConnectivityTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageRegistryConnectivityTaskRequest&, CreateImageRegistryConnectivityTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageRegistryConnectivityTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageRegistryListExportJobResponse> CreateImageRegistryListExportJobOutcome;
                typedef std::future<CreateImageRegistryListExportJobOutcome> CreateImageRegistryListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageRegistryListExportJobRequest&, CreateImageRegistryListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageRegistryListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageRegistryScanTaskResponse> CreateImageRegistryScanTaskOutcome;
                typedef std::future<CreateImageRegistryScanTaskOutcome> CreateImageRegistryScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageRegistryScanTaskRequest&, CreateImageRegistryScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageRegistryScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageRegistryTimedScanTaskConfigResponse> CreateImageRegistryTimedScanTaskConfigOutcome;
                typedef std::future<CreateImageRegistryTimedScanTaskConfigOutcome> CreateImageRegistryTimedScanTaskConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageRegistryTimedScanTaskConfigRequest&, CreateImageRegistryTimedScanTaskConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageRegistryTimedScanTaskConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageSensitiveInfoListExportJobResponse> CreateImageSensitiveInfoListExportJobOutcome;
                typedef std::future<CreateImageSensitiveInfoListExportJobOutcome> CreateImageSensitiveInfoListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageSensitiveInfoListExportJobRequest&, CreateImageSensitiveInfoListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageSensitiveInfoListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageSensitiveWhitelistResponse> CreateImageSensitiveWhitelistOutcome;
                typedef std::future<CreateImageSensitiveWhitelistOutcome> CreateImageSensitiveWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageSensitiveWhitelistRequest&, CreateImageSensitiveWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageSensitiveWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageVirusListExportJobResponse> CreateImageVirusListExportJobOutcome;
                typedef std::future<CreateImageVirusListExportJobOutcome> CreateImageVirusListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageVirusListExportJobRequest&, CreateImageVirusListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageVirusListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageVirusWhitelistResponse> CreateImageVirusWhitelistOutcome;
                typedef std::future<CreateImageVirusWhitelistOutcome> CreateImageVirusWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageVirusWhitelistRequest&, CreateImageVirusWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageVirusWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageVulListExportJobResponse> CreateImageVulListExportJobOutcome;
                typedef std::future<CreateImageVulListExportJobOutcome> CreateImageVulListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageVulListExportJobRequest&, CreateImageVulListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageVulListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageVulSummaryListExportJobResponse> CreateImageVulSummaryListExportJobOutcome;
                typedef std::future<CreateImageVulSummaryListExportJobOutcome> CreateImageVulSummaryListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageVulSummaryListExportJobRequest&, CreateImageVulSummaryListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageVulSummaryListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageVulWhitelistResponse> CreateImageVulWhitelistOutcome;
                typedef std::future<CreateImageVulWhitelistOutcome> CreateImageVulWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateImageVulWhitelistRequest&, CreateImageVulWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageVulWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePodContainerListExportJobResponse> CreatePodContainerListExportJobOutcome;
                typedef std::future<CreatePodContainerListExportJobOutcome> CreatePodContainerListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreatePodContainerListExportJobRequest&, CreatePodContainerListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePodContainerListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePodServiceListExportJobResponse> CreatePodServiceListExportJobOutcome;
                typedef std::future<CreatePodServiceListExportJobOutcome> CreatePodServiceListExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreatePodServiceListExportJobRequest&, CreatePodServiceListExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePodServiceListExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePublicAssetsExportJobResponse> CreatePublicAssetsExportJobOutcome;
                typedef std::future<CreatePublicAssetsExportJobOutcome> CreatePublicAssetsExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreatePublicAssetsExportJobRequest&, CreatePublicAssetsExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePublicAssetsExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRiskCenterScanTaskResponse> CreateRiskCenterScanTaskOutcome;
                typedef std::future<CreateRiskCenterScanTaskOutcome> CreateRiskCenterScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateRiskCenterScanTaskRequest&, CreateRiskCenterScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRiskCenterScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRiskDetailExportJobResponse> CreateRiskDetailExportJobOutcome;
                typedef std::future<CreateRiskDetailExportJobOutcome> CreateRiskDetailExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateRiskDetailExportJobRequest&, CreateRiskDetailExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRiskDetailExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSandboxACLRuleResponse> CreateSandboxACLRuleOutcome;
                typedef std::future<CreateSandboxACLRuleOutcome> CreateSandboxACLRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateSandboxACLRuleRequest&, CreateSandboxACLRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSandboxACLRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSandboxDLPRuleResponse> CreateSandboxDLPRuleOutcome;
                typedef std::future<CreateSandboxDLPRuleOutcome> CreateSandboxDLPRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateSandboxDLPRuleRequest&, CreateSandboxDLPRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSandboxDLPRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSandboxFileRuleResponse> CreateSandboxFileRuleOutcome;
                typedef std::future<CreateSandboxFileRuleOutcome> CreateSandboxFileRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateSandboxFileRuleRequest&, CreateSandboxFileRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSandboxFileRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSandboxLLMAuditRuleResponse> CreateSandboxLLMAuditRuleOutcome;
                typedef std::future<CreateSandboxLLMAuditRuleOutcome> CreateSandboxLLMAuditRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateSandboxLLMAuditRuleRequest&, CreateSandboxLLMAuditRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSandboxLLMAuditRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScanStatisticExportJobResponse> CreateScanStatisticExportJobOutcome;
                typedef std::future<CreateScanStatisticExportJobOutcome> CreateScanStatisticExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateScanStatisticExportJobRequest&, CreateScanStatisticExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScanStatisticExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScanTaskResponse> CreateScanTaskOutcome;
                typedef std::future<CreateScanTaskOutcome> CreateScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateScanTaskRequest&, CreateScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSkillScanResponse> CreateSkillScanOutcome;
                typedef std::future<CreateSkillScanOutcome> CreateSkillScanOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateSkillScanRequest&, CreateSkillScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSkillScanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulFixRetryTaskResponse> CreateVulFixRetryTaskOutcome;
                typedef std::future<CreateVulFixRetryTaskOutcome> CreateVulFixRetryTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateVulFixRetryTaskRequest&, CreateVulFixRetryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulFixRetryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulFixTaskResponse> CreateVulFixTaskOutcome;
                typedef std::future<CreateVulFixTaskOutcome> CreateVulFixTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateVulFixTaskRequest&, CreateVulFixTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulFixTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulFixedExportJobResponse> CreateVulFixedExportJobOutcome;
                typedef std::future<CreateVulFixedExportJobOutcome> CreateVulFixedExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateVulFixedExportJobRequest&, CreateVulFixedExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulFixedExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulReScanResponse> CreateVulReScanOutcome;
                typedef std::future<CreateVulReScanOutcome> CreateVulReScanOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateVulReScanRequest&, CreateVulReScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulReScanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulRisksExportJobResponse> CreateVulRisksExportJobOutcome;
                typedef std::future<CreateVulRisksExportJobOutcome> CreateVulRisksExportJobOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateVulRisksExportJobRequest&, CreateVulRisksExportJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulRisksExportJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVulScanManualResponse> CreateVulScanManualOutcome;
                typedef std::future<CreateVulScanManualOutcome> CreateVulScanManualOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateVulScanManualRequest&, CreateVulScanManualOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVulScanManualAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAIAnalysisSMTPAccessResponse> DeleteAIAnalysisSMTPAccessOutcome;
                typedef std::future<DeleteAIAnalysisSMTPAccessOutcome> DeleteAIAnalysisSMTPAccessOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteAIAnalysisSMTPAccessRequest&, DeleteAIAnalysisSMTPAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIAnalysisSMTPAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAIScheduleResponse> DeleteAIScheduleOutcome;
                typedef std::future<DeleteAIScheduleOutcome> DeleteAIScheduleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteAIScheduleRequest&, DeleteAIScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAssetFilterViewResponse> DeleteAssetFilterViewOutcome;
                typedef std::future<DeleteAssetFilterViewOutcome> DeleteAssetFilterViewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteAssetFilterViewRequest&, DeleteAssetFilterViewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAssetFilterViewAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAssetTagResponse> DeleteAssetTagOutcome;
                typedef std::future<DeleteAssetTagOutcome> DeleteAssetTagOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteAssetTagRequest&, DeleteAssetTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAssetTagAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBaselineSelfDefinedPolicyListResponse> DeleteBaselineSelfDefinedPolicyListOutcome;
                typedef std::future<DeleteBaselineSelfDefinedPolicyListOutcome> DeleteBaselineSelfDefinedPolicyListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteBaselineSelfDefinedPolicyListRequest&, DeleteBaselineSelfDefinedPolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBaselineSelfDefinedPolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCSIPMalwareScanTaskResponse> DeleteCSIPMalwareScanTaskOutcome;
                typedef std::future<DeleteCSIPMalwareScanTaskOutcome> DeleteCSIPMalwareScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteCSIPMalwareScanTaskRequest&, DeleteCSIPMalwareScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCSIPMalwareScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterResponse> DeleteClusterOutcome;
                typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteClusterRequest&, DeleteClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDomainAndIpResponse> DeleteDomainAndIpOutcome;
                typedef std::future<DeleteDomainAndIpOutcome> DeleteDomainAndIpOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDomainAndIpRequest&, DeleteDomainAndIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainAndIpAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmApplyOrderResponse> DeleteDspmApplyOrderOutcome;
                typedef std::future<DeleteDspmApplyOrderOutcome> DeleteDspmApplyOrderOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmApplyOrderRequest&, DeleteDspmApplyOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmApplyOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmAssetAccountResponse> DeleteDspmAssetAccountOutcome;
                typedef std::future<DeleteDspmAssetAccountOutcome> DeleteDspmAssetAccountOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmAssetAccountRequest&, DeleteDspmAssetAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmAssetAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmAuditFilterStrategyResponse> DeleteDspmAuditFilterStrategyOutcome;
                typedef std::future<DeleteDspmAuditFilterStrategyOutcome> DeleteDspmAuditFilterStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmAuditFilterStrategyRequest&, DeleteDspmAuditFilterStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmAuditFilterStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmBackupLogListResponse> DeleteDspmBackupLogListOutcome;
                typedef std::future<DeleteDspmBackupLogListOutcome> DeleteDspmBackupLogListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmBackupLogListRequest&, DeleteDspmBackupLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmBackupLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmCkafkaConfigResponse> DeleteDspmCkafkaConfigOutcome;
                typedef std::future<DeleteDspmCkafkaConfigOutcome> DeleteDspmCkafkaConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmCkafkaConfigRequest&, DeleteDspmCkafkaConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmCkafkaConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmExportTaskResponse> DeleteDspmExportTaskOutcome;
                typedef std::future<DeleteDspmExportTaskOutcome> DeleteDspmExportTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmExportTaskRequest&, DeleteDspmExportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmExportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmIdentifyCategoryResponse> DeleteDspmIdentifyCategoryOutcome;
                typedef std::future<DeleteDspmIdentifyCategoryOutcome> DeleteDspmIdentifyCategoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmIdentifyCategoryRequest&, DeleteDspmIdentifyCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmIdentifyCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmIdentifyComplianceCategoryRelationResponse> DeleteDspmIdentifyComplianceCategoryRelationOutcome;
                typedef std::future<DeleteDspmIdentifyComplianceCategoryRelationOutcome> DeleteDspmIdentifyComplianceCategoryRelationOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmIdentifyComplianceCategoryRelationRequest&, DeleteDspmIdentifyComplianceCategoryRelationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmIdentifyComplianceCategoryRelationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmIdentifyComplianceGroupResponse> DeleteDspmIdentifyComplianceGroupOutcome;
                typedef std::future<DeleteDspmIdentifyComplianceGroupOutcome> DeleteDspmIdentifyComplianceGroupOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmIdentifyComplianceGroupRequest&, DeleteDspmIdentifyComplianceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmIdentifyComplianceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmIdentifyComplianceRuleRelationResponse> DeleteDspmIdentifyComplianceRuleRelationOutcome;
                typedef std::future<DeleteDspmIdentifyComplianceRuleRelationOutcome> DeleteDspmIdentifyComplianceRuleRelationOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmIdentifyComplianceRuleRelationRequest&, DeleteDspmIdentifyComplianceRuleRelationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmIdentifyComplianceRuleRelationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmIdentifyLevelGroupResponse> DeleteDspmIdentifyLevelGroupOutcome;
                typedef std::future<DeleteDspmIdentifyLevelGroupOutcome> DeleteDspmIdentifyLevelGroupOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmIdentifyLevelGroupRequest&, DeleteDspmIdentifyLevelGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmIdentifyLevelGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmIdentifyRuleResponse> DeleteDspmIdentifyRuleOutcome;
                typedef std::future<DeleteDspmIdentifyRuleOutcome> DeleteDspmIdentifyRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmIdentifyRuleRequest&, DeleteDspmIdentifyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmIdentifyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmPersonalIdentifyResponse> DeleteDspmPersonalIdentifyOutcome;
                typedef std::future<DeleteDspmPersonalIdentifyOutcome> DeleteDspmPersonalIdentifyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmPersonalIdentifyRequest&, DeleteDspmPersonalIdentifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmPersonalIdentifyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmRestoreLogListResponse> DeleteDspmRestoreLogListOutcome;
                typedef std::future<DeleteDspmRestoreLogListOutcome> DeleteDspmRestoreLogListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmRestoreLogListRequest&, DeleteDspmRestoreLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmRestoreLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmRiskStrategyResponse> DeleteDspmRiskStrategyOutcome;
                typedef std::future<DeleteDspmRiskStrategyOutcome> DeleteDspmRiskStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmRiskStrategyRequest&, DeleteDspmRiskStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmRiskStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmShareUserDataResponse> DeleteDspmShareUserDataOutcome;
                typedef std::future<DeleteDspmShareUserDataOutcome> DeleteDspmShareUserDataOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmShareUserDataRequest&, DeleteDspmShareUserDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmShareUserDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDspmWhitelistStrategyResponse> DeleteDspmWhitelistStrategyOutcome;
                typedef std::future<DeleteDspmWhitelistStrategyOutcome> DeleteDspmWhitelistStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDspmWhitelistStrategyRequest&, DeleteDspmWhitelistStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDspmWhitelistStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEDRRulesResponse> DeleteEDRRulesOutcome;
                typedef std::future<DeleteEDRRulesOutcome> DeleteEDRRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteEDRRulesRequest&, DeleteEDRRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEDRRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEDRScanTaskResponse> DeleteEDRScanTaskOutcome;
                typedef std::future<DeleteEDRScanTaskOutcome> DeleteEDRScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteEDRScanTaskRequest&, DeleteEDRScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEDRScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEdrLogCollectPathsResponse> DeleteEdrLogCollectPathsOutcome;
                typedef std::future<DeleteEdrLogCollectPathsOutcome> DeleteEdrLogCollectPathsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteEdrLogCollectPathsRequest&, DeleteEdrLogCollectPathsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEdrLogCollectPathsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteExposureAutoTagRuleResponse> DeleteExposureAutoTagRuleOutcome;
                typedef std::future<DeleteExposureAutoTagRuleOutcome> DeleteExposureAutoTagRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteExposureAutoTagRuleRequest&, DeleteExposureAutoTagRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExposureAutoTagRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIaCAccessTokenResponse> DeleteIaCAccessTokenOutcome;
                typedef std::future<DeleteIaCAccessTokenOutcome> DeleteIaCAccessTokenOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteIaCAccessTokenRequest&, DeleteIaCAccessTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIaCAccessTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIaCFileResponse> DeleteIaCFileOutcome;
                typedef std::future<DeleteIaCFileOutcome> DeleteIaCFileOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteIaCFileRequest&, DeleteIaCFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIaCFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageRegistryResponse> DeleteImageRegistryOutcome;
                typedef std::future<DeleteImageRegistryOutcome> DeleteImageRegistryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteImageRegistryRequest&, DeleteImageRegistryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageRegistryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageRegistryScanTaskResponse> DeleteImageRegistryScanTaskOutcome;
                typedef std::future<DeleteImageRegistryScanTaskOutcome> DeleteImageRegistryScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteImageRegistryScanTaskRequest&, DeleteImageRegistryScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageRegistryScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageRegistryTimedScanTaskConfigResponse> DeleteImageRegistryTimedScanTaskConfigOutcome;
                typedef std::future<DeleteImageRegistryTimedScanTaskConfigOutcome> DeleteImageRegistryTimedScanTaskConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteImageRegistryTimedScanTaskConfigRequest&, DeleteImageRegistryTimedScanTaskConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageRegistryTimedScanTaskConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageSensitiveWhitelistResponse> DeleteImageSensitiveWhitelistOutcome;
                typedef std::future<DeleteImageSensitiveWhitelistOutcome> DeleteImageSensitiveWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteImageSensitiveWhitelistRequest&, DeleteImageSensitiveWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageSensitiveWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageVirusWhitelistResponse> DeleteImageVirusWhitelistOutcome;
                typedef std::future<DeleteImageVirusWhitelistOutcome> DeleteImageVirusWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteImageVirusWhitelistRequest&, DeleteImageVirusWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageVirusWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageVulWhitelistResponse> DeleteImageVulWhitelistOutcome;
                typedef std::future<DeleteImageVulWhitelistOutcome> DeleteImageVulWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteImageVulWhitelistRequest&, DeleteImageVulWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageVulWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoginWhiteListResponse> DeleteLoginWhiteListOutcome;
                typedef std::future<DeleteLoginWhiteListOutcome> DeleteLoginWhiteListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteLoginWhiteListRequest&, DeleteLoginWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoginWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMachineClearHistoryResponse> DeleteMachineClearHistoryOutcome;
                typedef std::future<DeleteMachineClearHistoryOutcome> DeleteMachineClearHistoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteMachineClearHistoryRequest&, DeleteMachineClearHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineClearHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRiskScanTaskResponse> DeleteRiskScanTaskOutcome;
                typedef std::future<DeleteRiskScanTaskOutcome> DeleteRiskScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteRiskScanTaskRequest&, DeleteRiskScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRiskScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSandboxACLRuleResponse> DeleteSandboxACLRuleOutcome;
                typedef std::future<DeleteSandboxACLRuleOutcome> DeleteSandboxACLRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteSandboxACLRuleRequest&, DeleteSandboxACLRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSandboxACLRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSandboxDLPRuleResponse> DeleteSandboxDLPRuleOutcome;
                typedef std::future<DeleteSandboxDLPRuleOutcome> DeleteSandboxDLPRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteSandboxDLPRuleRequest&, DeleteSandboxDLPRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSandboxDLPRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSandboxFileRuleResponse> DeleteSandboxFileRuleOutcome;
                typedef std::future<DeleteSandboxFileRuleOutcome> DeleteSandboxFileRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteSandboxFileRuleRequest&, DeleteSandboxFileRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSandboxFileRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSandboxLLMAuditRuleResponse> DeleteSandboxLLMAuditRuleOutcome;
                typedef std::future<DeleteSandboxLLMAuditRuleOutcome> DeleteSandboxLLMAuditRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteSandboxLLMAuditRuleRequest&, DeleteSandboxLLMAuditRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSandboxLLMAuditRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVulWhitelistResponse> DeleteVulWhitelistOutcome;
                typedef std::future<DeleteVulWhitelistOutcome> DeleteVulWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteVulWhitelistRequest&, DeleteVulWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVulWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWebhookPoliciesResponse> DeleteWebhookPoliciesOutcome;
                typedef std::future<DeleteWebhookPoliciesOutcome> DeleteWebhookPoliciesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteWebhookPoliciesRequest&, DeleteWebhookPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebhookPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWebhookReceiversResponse> DeleteWebhookReceiversOutcome;
                typedef std::future<DeleteWebhookReceiversOutcome> DeleteWebhookReceiversOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteWebhookReceiversRequest&, DeleteWebhookReceiversOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebhookReceiversAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAgentAssetListResponse> DescribeAIAgentAssetListOutcome;
                typedef std::future<DescribeAIAgentAssetListOutcome> DescribeAIAgentAssetListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIAgentAssetListRequest&, DescribeAIAgentAssetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAgentAssetListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAgentCredentialListResponse> DescribeAIAgentCredentialListOutcome;
                typedef std::future<DescribeAIAgentCredentialListOutcome> DescribeAIAgentCredentialListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIAgentCredentialListRequest&, DescribeAIAgentCredentialListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAgentCredentialListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAgentCredentialLocationListResponse> DescribeAIAgentCredentialLocationListOutcome;
                typedef std::future<DescribeAIAgentCredentialLocationListOutcome> DescribeAIAgentCredentialLocationListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIAgentCredentialLocationListRequest&, DescribeAIAgentCredentialLocationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAgentCredentialLocationListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAgentSkillListResponse> DescribeAIAgentSkillListOutcome;
                typedef std::future<DescribeAIAgentSkillListOutcome> DescribeAIAgentSkillListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIAgentSkillListRequest&, DescribeAIAgentSkillListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAgentSkillListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAnalysisFileDownloadURLResponse> DescribeAIAnalysisFileDownloadURLOutcome;
                typedef std::future<DescribeAIAnalysisFileDownloadURLOutcome> DescribeAIAnalysisFileDownloadURLOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIAnalysisFileDownloadURLRequest&, DescribeAIAnalysisFileDownloadURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAnalysisFileDownloadURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAnalysisHistoryResponse> DescribeAIAnalysisHistoryOutcome;
                typedef std::future<DescribeAIAnalysisHistoryOutcome> DescribeAIAnalysisHistoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIAnalysisHistoryRequest&, DescribeAIAnalysisHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAnalysisHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAnalysisRecommendQuestionsResponse> DescribeAIAnalysisRecommendQuestionsOutcome;
                typedef std::future<DescribeAIAnalysisRecommendQuestionsOutcome> DescribeAIAnalysisRecommendQuestionsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIAnalysisRecommendQuestionsRequest&, DescribeAIAnalysisRecommendQuestionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAnalysisRecommendQuestionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAnalysisRobotInfoResponse> DescribeAIAnalysisRobotInfoOutcome;
                typedef std::future<DescribeAIAnalysisRobotInfoOutcome> DescribeAIAnalysisRobotInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIAnalysisRobotInfoRequest&, DescribeAIAnalysisRobotInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAnalysisRobotInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIAnalysisSMTPResponse> DescribeAIAnalysisSMTPOutcome;
                typedef std::future<DescribeAIAnalysisSMTPOutcome> DescribeAIAnalysisSMTPOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIAnalysisSMTPRequest&, DescribeAIAnalysisSMTPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIAnalysisSMTPAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAILinkSettingResponse> DescribeAILinkSettingOutcome;
                typedef std::future<DescribeAILinkSettingOutcome> DescribeAILinkSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAILinkSettingRequest&, DescribeAILinkSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAILinkSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIScheduleListResponse> DescribeAIScheduleListOutcome;
                typedef std::future<DescribeAIScheduleListOutcome> DescribeAIScheduleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIScheduleListRequest&, DescribeAIScheduleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIScheduleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAISchedulePlanListResponse> DescribeAISchedulePlanListOutcome;
                typedef std::future<DescribeAISchedulePlanListOutcome> DescribeAISchedulePlanListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAISchedulePlanListRequest&, DescribeAISchedulePlanListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAISchedulePlanListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIScheduleStatsResponse> DescribeAIScheduleStatsOutcome;
                typedef std::future<DescribeAIScheduleStatsOutcome> DescribeAIScheduleStatsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIScheduleStatsRequest&, DescribeAIScheduleStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIScheduleStatsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIScheduleTaskDetailResponse> DescribeAIScheduleTaskDetailOutcome;
                typedef std::future<DescribeAIScheduleTaskDetailOutcome> DescribeAIScheduleTaskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIScheduleTaskDetailRequest&, DescribeAIScheduleTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIScheduleTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIScheduleTaskListResponse> DescribeAIScheduleTaskListOutcome;
                typedef std::future<DescribeAIScheduleTaskListOutcome> DescribeAIScheduleTaskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAIScheduleTaskListRequest&, DescribeAIScheduleTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIScheduleTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAKAnalysisDetailResponse> DescribeAKAnalysisDetailOutcome;
                typedef std::future<DescribeAKAnalysisDetailOutcome> DescribeAKAnalysisDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAKAnalysisDetailRequest&, DescribeAKAnalysisDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAKAnalysisDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAbTestUserResponse> DescribeAbTestUserOutcome;
                typedef std::future<DescribeAbTestUserOutcome> DescribeAbTestUserOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAbTestUserRequest&, DescribeAbTestUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbTestUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAbnormalCallRecordResponse> DescribeAbnormalCallRecordOutcome;
                typedef std::future<DescribeAbnormalCallRecordOutcome> DescribeAbnormalCallRecordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAbnormalCallRecordRequest&, DescribeAbnormalCallRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbnormalCallRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessKeyAlarmResponse> DescribeAccessKeyAlarmOutcome;
                typedef std::future<DescribeAccessKeyAlarmOutcome> DescribeAccessKeyAlarmOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAccessKeyAlarmRequest&, DescribeAccessKeyAlarmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessKeyAlarmAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessKeyAlarmDetailResponse> DescribeAccessKeyAlarmDetailOutcome;
                typedef std::future<DescribeAccessKeyAlarmDetailOutcome> DescribeAccessKeyAlarmDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAccessKeyAlarmDetailRequest&, DescribeAccessKeyAlarmDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessKeyAlarmDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessKeyAssetResponse> DescribeAccessKeyAssetOutcome;
                typedef std::future<DescribeAccessKeyAssetOutcome> DescribeAccessKeyAssetOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAccessKeyAssetRequest&, DescribeAccessKeyAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessKeyAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessKeyRiskResponse> DescribeAccessKeyRiskOutcome;
                typedef std::future<DescribeAccessKeyRiskOutcome> DescribeAccessKeyRiskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAccessKeyRiskRequest&, DescribeAccessKeyRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessKeyRiskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessKeyRiskDetailResponse> DescribeAccessKeyRiskDetailOutcome;
                typedef std::future<DescribeAccessKeyRiskDetailOutcome> DescribeAccessKeyRiskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAccessKeyRiskDetailRequest&, DescribeAccessKeyRiskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessKeyRiskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessKeyUserDetailResponse> DescribeAccessKeyUserDetailOutcome;
                typedef std::future<DescribeAccessKeyUserDetailOutcome> DescribeAccessKeyUserDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAccessKeyUserDetailRequest&, DescribeAccessKeyUserDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessKeyUserDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessKeyUserListResponse> DescribeAccessKeyUserListOutcome;
                typedef std::future<DescribeAccessKeyUserListOutcome> DescribeAccessKeyUserListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAccessKeyUserListRequest&, DescribeAccessKeyUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessKeyUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessKeyWhiteListResponse> DescribeAccessKeyWhiteListOutcome;
                typedef std::future<DescribeAccessKeyWhiteListOutcome> DescribeAccessKeyWhiteListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAccessKeyWhiteListRequest&, DescribeAccessKeyWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessKeyWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentConfigSettingResponse> DescribeAgentConfigSettingOutcome;
                typedef std::future<DescribeAgentConfigSettingOutcome> DescribeAgentConfigSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAgentConfigSettingRequest&, DescribeAgentConfigSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentConfigSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentRunModeResponse> DescribeAgentRunModeOutcome;
                typedef std::future<DescribeAgentRunModeOutcome> DescribeAgentRunModeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAgentRunModeRequest&, DescribeAgentRunModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentRunModeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentRunPolicyResponse> DescribeAgentRunPolicyOutcome;
                typedef std::future<DescribeAgentRunPolicyOutcome> DescribeAgentRunPolicyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAgentRunPolicyRequest&, DescribeAgentRunPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentRunPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlertListResponse> DescribeAlertListOutcome;
                typedef std::future<DescribeAlertListOutcome> DescribeAlertListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAlertListRequest&, DescribeAlertListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetComponentListResponse> DescribeAssetComponentListOutcome;
                typedef std::future<DescribeAssetComponentListOutcome> DescribeAssetComponentListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetComponentListRequest&, DescribeAssetComponentListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetComponentListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetComponentRelatedImageListResponse> DescribeAssetComponentRelatedImageListOutcome;
                typedef std::future<DescribeAssetComponentRelatedImageListOutcome> DescribeAssetComponentRelatedImageListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetComponentRelatedImageListRequest&, DescribeAssetComponentRelatedImageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetComponentRelatedImageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetDetailResponse> DescribeAssetDetailOutcome;
                typedef std::future<DescribeAssetDetailOutcome> DescribeAssetDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetDetailRequest&, DescribeAssetDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetFilterViewsResponse> DescribeAssetFilterViewsOutcome;
                typedef std::future<DescribeAssetFilterViewsOutcome> DescribeAssetFilterViewsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetFilterViewsRequest&, DescribeAssetFilterViewsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetFilterViewsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetInfoResponse> DescribeAssetInfoOutcome;
                typedef std::future<DescribeAssetInfoOutcome> DescribeAssetInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetInfoRequest&, DescribeAssetInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetLastSyncTimeResponse> DescribeAssetLastSyncTimeOutcome;
                typedef std::future<DescribeAssetLastSyncTimeOutcome> DescribeAssetLastSyncTimeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetLastSyncTimeRequest&, DescribeAssetLastSyncTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetLastSyncTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetOverviewResponse> DescribeAssetOverviewOutcome;
                typedef std::future<DescribeAssetOverviewOutcome> DescribeAssetOverviewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetOverviewRequest&, DescribeAssetOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetProcessListResponse> DescribeAssetProcessListOutcome;
                typedef std::future<DescribeAssetProcessListOutcome> DescribeAssetProcessListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetProcessListRequest&, DescribeAssetProcessListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetProcessListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetRiskDetailResponse> DescribeAssetRiskDetailOutcome;
                typedef std::future<DescribeAssetRiskDetailOutcome> DescribeAssetRiskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetRiskDetailRequest&, DescribeAssetRiskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetRiskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetRiskListResponse> DescribeAssetRiskListOutcome;
                typedef std::future<DescribeAssetRiskListOutcome> DescribeAssetRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetRiskListRequest&, DescribeAssetRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetSyncTaskStatusResponse> DescribeAssetSyncTaskStatusOutcome;
                typedef std::future<DescribeAssetSyncTaskStatusOutcome> DescribeAssetSyncTaskStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetSyncTaskStatusRequest&, DescribeAssetSyncTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetSyncTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetTagAttributesResponse> DescribeAssetTagAttributesOutcome;
                typedef std::future<DescribeAssetTagAttributesOutcome> DescribeAssetTagAttributesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetTagAttributesRequest&, DescribeAssetTagAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetTagAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetTagTreeResponse> DescribeAssetTagTreeOutcome;
                typedef std::future<DescribeAssetTagTreeOutcome> DescribeAssetTagTreeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetTagTreeRequest&, DescribeAssetTagTreeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetTagTreeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetTagsResponse> DescribeAssetTagsOutcome;
                typedef std::future<DescribeAssetTagsOutcome> DescribeAssetTagsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetTagsRequest&, DescribeAssetTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetTreeResponse> DescribeAssetTreeOutcome;
                typedef std::future<DescribeAssetTreeOutcome> DescribeAssetTreeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetTreeRequest&, DescribeAssetTreeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetTreeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetViewVulRiskListResponse> DescribeAssetViewVulRiskListOutcome;
                typedef std::future<DescribeAssetViewVulRiskListOutcome> DescribeAssetViewVulRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetViewVulRiskListRequest&, DescribeAssetViewVulRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetViewVulRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackendScanEngineRegionListResponse> DescribeBackendScanEngineRegionListOutcome;
                typedef std::future<DescribeBackendScanEngineRegionListOutcome> DescribeBackendScanEngineRegionListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBackendScanEngineRegionListRequest&, DescribeBackendScanEngineRegionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackendScanEngineRegionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBanModeResponse> DescribeBanModeOutcome;
                typedef std::future<DescribeBanModeOutcome> DescribeBanModeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBanModeRequest&, DescribeBanModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBanModeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBanStatusResponse> DescribeBanStatusOutcome;
                typedef std::future<DescribeBanStatusOutcome> DescribeBanStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBanStatusRequest&, DescribeBanStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBanStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineAggregatedItemListResponse> DescribeBaselineAggregatedItemListOutcome;
                typedef std::future<DescribeBaselineAggregatedItemListOutcome> DescribeBaselineAggregatedItemListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineAggregatedItemListRequest&, DescribeBaselineAggregatedItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineAggregatedItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineAggregatedPolicyListResponse> DescribeBaselineAggregatedPolicyListOutcome;
                typedef std::future<DescribeBaselineAggregatedPolicyListOutcome> DescribeBaselineAggregatedPolicyListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineAggregatedPolicyListRequest&, DescribeBaselineAggregatedPolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineAggregatedPolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineCalculatingStatisticsPolicyIDListResponse> DescribeBaselineCalculatingStatisticsPolicyIDListOutcome;
                typedef std::future<DescribeBaselineCalculatingStatisticsPolicyIDListOutcome> DescribeBaselineCalculatingStatisticsPolicyIDListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineCalculatingStatisticsPolicyIDListRequest&, DescribeBaselineCalculatingStatisticsPolicyIDListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineCalculatingStatisticsPolicyIDListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineCategoryItemListResponse> DescribeBaselineCategoryItemListOutcome;
                typedef std::future<DescribeBaselineCategoryItemListOutcome> DescribeBaselineCategoryItemListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineCategoryItemListRequest&, DescribeBaselineCategoryItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineCategoryItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineFixRecordListResponse> DescribeBaselineFixRecordListOutcome;
                typedef std::future<DescribeBaselineFixRecordListOutcome> DescribeBaselineFixRecordListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineFixRecordListRequest&, DescribeBaselineFixRecordListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineFixRecordListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineItemRiskListResponse> DescribeBaselineItemRiskListOutcome;
                typedef std::future<DescribeBaselineItemRiskListOutcome> DescribeBaselineItemRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineItemRiskListRequest&, DescribeBaselineItemRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineItemRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineMainTaskItemListResponse> DescribeBaselineMainTaskItemListOutcome;
                typedef std::future<DescribeBaselineMainTaskItemListOutcome> DescribeBaselineMainTaskItemListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineMainTaskItemListRequest&, DescribeBaselineMainTaskItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineMainTaskItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineMainTaskListResponse> DescribeBaselineMainTaskListOutcome;
                typedef std::future<DescribeBaselineMainTaskListOutcome> DescribeBaselineMainTaskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineMainTaskListRequest&, DescribeBaselineMainTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineMainTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineOverviewResponse> DescribeBaselineOverviewOutcome;
                typedef std::future<DescribeBaselineOverviewOutcome> DescribeBaselineOverviewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineOverviewRequest&, DescribeBaselineOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselinePolicyCategoryListResponse> DescribeBaselinePolicyCategoryListOutcome;
                typedef std::future<DescribeBaselinePolicyCategoryListOutcome> DescribeBaselinePolicyCategoryListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselinePolicyCategoryListRequest&, DescribeBaselinePolicyCategoryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselinePolicyCategoryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselinePolicyItemListResponse> DescribeBaselinePolicyItemListOutcome;
                typedef std::future<DescribeBaselinePolicyItemListOutcome> DescribeBaselinePolicyItemListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselinePolicyItemListRequest&, DescribeBaselinePolicyItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselinePolicyItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselinePolicyListResponse> DescribeBaselinePolicyListOutcome;
                typedef std::future<DescribeBaselinePolicyListOutcome> DescribeBaselinePolicyListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselinePolicyListRequest&, DescribeBaselinePolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselinePolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselinePolicyNameExistAppidListResponse> DescribeBaselinePolicyNameExistAppidListOutcome;
                typedef std::future<DescribeBaselinePolicyNameExistAppidListOutcome> DescribeBaselinePolicyNameExistAppidListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselinePolicyNameExistAppidListRequest&, DescribeBaselinePolicyNameExistAppidListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselinePolicyNameExistAppidListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineSubTaskListResponse> DescribeBaselineSubTaskListOutcome;
                typedef std::future<DescribeBaselineSubTaskListOutcome> DescribeBaselineSubTaskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineSubTaskListRequest&, DescribeBaselineSubTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineSubTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineSyncConfResponse> DescribeBaselineSyncConfOutcome;
                typedef std::future<DescribeBaselineSyncConfOutcome> DescribeBaselineSyncConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineSyncConfRequest&, DescribeBaselineSyncConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineSyncConfAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineSystemCategoryListResponse> DescribeBaselineSystemCategoryListOutcome;
                typedef std::future<DescribeBaselineSystemCategoryListOutcome> DescribeBaselineSystemCategoryListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineSystemCategoryListRequest&, DescribeBaselineSystemCategoryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineSystemCategoryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineUserOtherConfResponse> DescribeBaselineUserOtherConfOutcome;
                typedef std::future<DescribeBaselineUserOtherConfOutcome> DescribeBaselineUserOtherConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineUserOtherConfRequest&, DescribeBaselineUserOtherConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineUserOtherConfAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaselineUserWeakPasswordConfResponse> DescribeBaselineUserWeakPasswordConfOutcome;
                typedef std::future<DescribeBaselineUserWeakPasswordConfOutcome> DescribeBaselineUserWeakPasswordConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBaselineUserWeakPasswordConfRequest&, DescribeBaselineUserWeakPasswordConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaselineUserWeakPasswordConfAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBruteAttackRulesResponse> DescribeBruteAttackRulesOutcome;
                typedef std::future<DescribeBruteAttackRulesOutcome> DescribeBruteAttackRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeBruteAttackRulesRequest&, DescribeBruteAttackRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBruteAttackRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCFGRiskReportStatisticsResponse> DescribeCFGRiskReportStatisticsOutcome;
                typedef std::future<DescribeCFGRiskReportStatisticsOutcome> DescribeCFGRiskReportStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCFGRiskReportStatisticsRequest&, DescribeCFGRiskReportStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCFGRiskReportStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCFGRiskStatisticsResponse> DescribeCFGRiskStatisticsOutcome;
                typedef std::future<DescribeCFGRiskStatisticsOutcome> DescribeCFGRiskStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCFGRiskStatisticsRequest&, DescribeCFGRiskStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCFGRiskStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCFWAssetStatisticsResponse> DescribeCFWAssetStatisticsOutcome;
                typedef std::future<DescribeCFWAssetStatisticsOutcome> DescribeCFWAssetStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCFWAssetStatisticsRequest&, DescribeCFWAssetStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCFWAssetStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCLSLogIndexV3Response> DescribeCLSLogIndexV3Outcome;
                typedef std::future<DescribeCLSLogIndexV3Outcome> DescribeCLSLogIndexV3OutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCLSLogIndexV3Request&, DescribeCLSLogIndexV3Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCLSLogIndexV3AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCLSLogListV3Response> DescribeCLSLogListV3Outcome;
                typedef std::future<DescribeCLSLogListV3Outcome> DescribeCLSLogListV3OutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCLSLogListV3Request&, DescribeCLSLogListV3Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCLSLogListV3AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCSCPayInfoResponse> DescribeCSCPayInfoOutcome;
                typedef std::future<DescribeCSCPayInfoOutcome> DescribeCSCPayInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCSCPayInfoRequest&, DescribeCSCPayInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCSCPayInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCSIPLicenseBindScheduleResponse> DescribeCSIPLicenseBindScheduleOutcome;
                typedef std::future<DescribeCSIPLicenseBindScheduleOutcome> DescribeCSIPLicenseBindScheduleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCSIPLicenseBindScheduleRequest&, DescribeCSIPLicenseBindScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCSIPLicenseBindScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCSIPMalwareScanTaskDetailResponse> DescribeCSIPMalwareScanTaskDetailOutcome;
                typedef std::future<DescribeCSIPMalwareScanTaskDetailOutcome> DescribeCSIPMalwareScanTaskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCSIPMalwareScanTaskDetailRequest&, DescribeCSIPMalwareScanTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCSIPMalwareScanTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCSIPMalwareScanTaskProgressResponse> DescribeCSIPMalwareScanTaskProgressOutcome;
                typedef std::future<DescribeCSIPMalwareScanTaskProgressOutcome> DescribeCSIPMalwareScanTaskProgressOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCSIPMalwareScanTaskProgressRequest&, DescribeCSIPMalwareScanTaskProgressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCSIPMalwareScanTaskProgressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCSIPRiskStatisticsResponse> DescribeCSIPRiskStatisticsOutcome;
                typedef std::future<DescribeCSIPRiskStatisticsOutcome> DescribeCSIPRiskStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCSIPRiskStatisticsRequest&, DescribeCSIPRiskStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCSIPRiskStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCSPMPayInfoResponse> DescribeCSPMPayInfoOutcome;
                typedef std::future<DescribeCSPMPayInfoOutcome> DescribeCSPMPayInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCSPMPayInfoRequest&, DescribeCSPMPayInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCSPMPayInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCVMAssetInfoResponse> DescribeCVMAssetInfoOutcome;
                typedef std::future<DescribeCVMAssetInfoOutcome> DescribeCVMAssetInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCVMAssetInfoRequest&, DescribeCVMAssetInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCVMAssetInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCVMAssetsResponse> DescribeCVMAssetsOutcome;
                typedef std::future<DescribeCVMAssetsOutcome> DescribeCVMAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCVMAssetsRequest&, DescribeCVMAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCVMAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPExposePathResponse> DescribeCWPExposePathOutcome;
                typedef std::future<DescribeCWPExposePathOutcome> DescribeCWPExposePathOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPExposePathRequest&, DescribeCWPExposePathOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPExposePathAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPExposuresResponse> DescribeCWPExposuresOutcome;
                typedef std::future<DescribeCWPExposuresOutcome> DescribeCWPExposuresOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPExposuresRequest&, DescribeCWPExposuresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPExposuresAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPLicenseBindScheduleResponse> DescribeCWPLicenseBindScheduleOutcome;
                typedef std::future<DescribeCWPLicenseBindScheduleOutcome> DescribeCWPLicenseBindScheduleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPLicenseBindScheduleRequest&, DescribeCWPLicenseBindScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPLicenseBindScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPMachineDetailResponse> DescribeCWPMachineDetailOutcome;
                typedef std::future<DescribeCWPMachineDetailOutcome> DescribeCWPMachineDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPMachineDetailRequest&, DescribeCWPMachineDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPMachineDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPMachineOsListResponse> DescribeCWPMachineOsListOutcome;
                typedef std::future<DescribeCWPMachineOsListOutcome> DescribeCWPMachineOsListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPMachineOsListRequest&, DescribeCWPMachineOsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPMachineOsListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPMachinesResponse> DescribeCWPMachinesOutcome;
                typedef std::future<DescribeCWPMachinesOutcome> DescribeCWPMachinesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPMachinesRequest&, DescribeCWPMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPOrderListResponse> DescribeCWPOrderListOutcome;
                typedef std::future<DescribeCWPOrderListOutcome> DescribeCWPOrderListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPOrderListRequest&, DescribeCWPOrderListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPOrderListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPScanIpInfoResponse> DescribeCWPScanIpInfoOutcome;
                typedef std::future<DescribeCWPScanIpInfoOutcome> DescribeCWPScanIpInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPScanIpInfoRequest&, DescribeCWPScanIpInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPScanIpInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCWPTaskDurationResponse> DescribeCWPTaskDurationOutcome;
                typedef std::future<DescribeCWPTaskDurationOutcome> DescribeCWPTaskDurationOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCWPTaskDurationRequest&, DescribeCWPTaskDurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCWPTaskDurationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCallRecordResponse> DescribeCallRecordOutcome;
                typedef std::future<DescribeCallRecordOutcome> DescribeCallRecordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCallRecordRequest&, DescribeCallRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCallRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCheckConnectivityHostListResponse> DescribeCheckConnectivityHostListOutcome;
                typedef std::future<DescribeCheckConnectivityHostListOutcome> DescribeCheckConnectivityHostListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCheckConnectivityHostListRequest&, DescribeCheckConnectivityHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckConnectivityHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCheckViewRisksResponse> DescribeCheckViewRisksOutcome;
                typedef std::future<DescribeCheckViewRisksOutcome> DescribeCheckViewRisksOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCheckViewRisksRequest&, DescribeCheckViewRisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckViewRisksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClbListenerListResponse> DescribeClbListenerListOutcome;
                typedef std::future<DescribeClbListenerListOutcome> DescribeClbListenerListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClbListenerListRequest&, DescribeClbListenerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClbListenerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClbListenerRulesResponse> DescribeClbListenerRulesOutcome;
                typedef std::future<DescribeClbListenerRulesOutcome> DescribeClbListenerRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClbListenerRulesRequest&, DescribeClbListenerRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClbListenerRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClbTargetsResponse> DescribeClbTargetsOutcome;
                typedef std::future<DescribeClbTargetsOutcome> DescribeClbTargetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClbTargetsRequest&, DescribeClbTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClbTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudAssetsResponse> DescribeCloudAssetsOutcome;
                typedef std::future<DescribeCloudAssetsOutcome> DescribeCloudAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCloudAssetsRequest&, DescribeCloudAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudFunctionListResponse> DescribeCloudFunctionListOutcome;
                typedef std::future<DescribeCloudFunctionListOutcome> DescribeCloudFunctionListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCloudFunctionListRequest&, DescribeCloudFunctionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudFunctionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAssetListResponse> DescribeClusterAssetListOutcome;
                typedef std::future<DescribeClusterAssetListOutcome> DescribeClusterAssetListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterAssetListRequest&, DescribeClusterAssetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAssetListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAssetSyncTaskStatusResponse> DescribeClusterAssetSyncTaskStatusOutcome;
                typedef std::future<DescribeClusterAssetSyncTaskStatusOutcome> DescribeClusterAssetSyncTaskStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterAssetSyncTaskStatusRequest&, DescribeClusterAssetSyncTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAssetSyncTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAssetsResponse> DescribeClusterAssetsOutcome;
                typedef std::future<DescribeClusterAssetsOutcome> DescribeClusterAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterAssetsRequest&, DescribeClusterAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterContainerAppListResponse> DescribeClusterContainerAppListOutcome;
                typedef std::future<DescribeClusterContainerAppListOutcome> DescribeClusterContainerAppListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterContainerAppListRequest&, DescribeClusterContainerAppListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterContainerAppListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterContainerComponentListResponse> DescribeClusterContainerComponentListOutcome;
                typedef std::future<DescribeClusterContainerComponentListOutcome> DescribeClusterContainerComponentListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterContainerComponentListRequest&, DescribeClusterContainerComponentListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterContainerComponentListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterContainerDetailResponse> DescribeClusterContainerDetailOutcome;
                typedef std::future<DescribeClusterContainerDetailOutcome> DescribeClusterContainerDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterContainerDetailRequest&, DescribeClusterContainerDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterContainerDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterContainerListResponse> DescribeClusterContainerListOutcome;
                typedef std::future<DescribeClusterContainerListOutcome> DescribeClusterContainerListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterContainerListRequest&, DescribeClusterContainerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterContainerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterContainerPortListResponse> DescribeClusterContainerPortListOutcome;
                typedef std::future<DescribeClusterContainerPortListOutcome> DescribeClusterContainerPortListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterContainerPortListRequest&, DescribeClusterContainerPortListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterContainerPortListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterContainerProcessListResponse> DescribeClusterContainerProcessListOutcome;
                typedef std::future<DescribeClusterContainerProcessListOutcome> DescribeClusterContainerProcessListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterContainerProcessListRequest&, DescribeClusterContainerProcessListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterContainerProcessListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterContainerWebServiceListResponse> DescribeClusterContainerWebServiceListOutcome;
                typedef std::future<DescribeClusterContainerWebServiceListOutcome> DescribeClusterContainerWebServiceListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterContainerWebServiceListRequest&, DescribeClusterContainerWebServiceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterContainerWebServiceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterDetailResponse> DescribeClusterDetailOutcome;
                typedef std::future<DescribeClusterDetailOutcome> DescribeClusterDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterDetailRequest&, DescribeClusterDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterInstallCommandResponse> DescribeClusterInstallCommandOutcome;
                typedef std::future<DescribeClusterInstallCommandOutcome> DescribeClusterInstallCommandOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterInstallCommandRequest&, DescribeClusterInstallCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterInstallCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterNamespaceListResponse> DescribeClusterNamespaceListOutcome;
                typedef std::future<DescribeClusterNamespaceListOutcome> DescribeClusterNamespaceListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterNamespaceListRequest&, DescribeClusterNamespaceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNamespaceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterNodeListResponse> DescribeClusterNodeListOutcome;
                typedef std::future<DescribeClusterNodeListOutcome> DescribeClusterNodeListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterNodeListRequest&, DescribeClusterNodeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodeListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterPodAssetsResponse> DescribeClusterPodAssetsOutcome;
                typedef std::future<DescribeClusterPodAssetsOutcome> DescribeClusterPodAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterPodAssetsRequest&, DescribeClusterPodAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterPodAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterPodDetailResponse> DescribeClusterPodDetailOutcome;
                typedef std::future<DescribeClusterPodDetailOutcome> DescribeClusterPodDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterPodDetailRequest&, DescribeClusterPodDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterPodDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterPodListResponse> DescribeClusterPodListOutcome;
                typedef std::future<DescribeClusterPodListOutcome> DescribeClusterPodListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterPodListRequest&, DescribeClusterPodListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterPodListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterServiceListResponse> DescribeClusterServiceListOutcome;
                typedef std::future<DescribeClusterServiceListOutcome> DescribeClusterServiceListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterServiceListRequest&, DescribeClusterServiceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterServiceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterSummaryResponse> DescribeClusterSummaryOutcome;
                typedef std::future<DescribeClusterSummaryOutcome> DescribeClusterSummaryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterSummaryRequest&, DescribeClusterSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterSuperNodeInfoResponse> DescribeClusterSuperNodeInfoOutcome;
                typedef std::future<DescribeClusterSuperNodeInfoOutcome> DescribeClusterSuperNodeInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterSuperNodeInfoRequest&, DescribeClusterSuperNodeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterSuperNodeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComplianceOverviewResponse> DescribeComplianceOverviewOutcome;
                typedef std::future<DescribeComplianceOverviewOutcome> DescribeComplianceOverviewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeComplianceOverviewRequest&, DescribeComplianceOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComplianceOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComplianceRiskListResponse> DescribeComplianceRiskListOutcome;
                typedef std::future<DescribeComplianceRiskListOutcome> DescribeComplianceRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeComplianceRiskListRequest&, DescribeComplianceRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComplianceRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComplianceStandardTermTreeResponse> DescribeComplianceStandardTermTreeOutcome;
                typedef std::future<DescribeComplianceStandardTermTreeOutcome> DescribeComplianceStandardTermTreeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeComplianceStandardTermTreeRequest&, DescribeComplianceStandardTermTreeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComplianceStandardTermTreeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComplianceStatisticsResponse> DescribeComplianceStatisticsOutcome;
                typedef std::future<DescribeComplianceStatisticsOutcome> DescribeComplianceStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeComplianceStatisticsRequest&, DescribeComplianceStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComplianceStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigCheckRulesResponse> DescribeConfigCheckRulesOutcome;
                typedef std::future<DescribeConfigCheckRulesOutcome> DescribeConfigCheckRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeConfigCheckRulesRequest&, DescribeConfigCheckRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigCheckRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCspmShardConfigResponse> DescribeCspmShardConfigOutcome;
                typedef std::future<DescribeCspmShardConfigOutcome> DescribeCspmShardConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCspmShardConfigRequest&, DescribeCspmShardConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCspmShardConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomAssetTagCountResponse> DescribeCustomAssetTagCountOutcome;
                typedef std::future<DescribeCustomAssetTagCountOutcome> DescribeCustomAssetTagCountOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCustomAssetTagCountRequest&, DescribeCustomAssetTagCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomAssetTagCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomRiskRuleDetailResponse> DescribeCustomRiskRuleDetailOutcome;
                typedef std::future<DescribeCustomRiskRuleDetailOutcome> DescribeCustomRiskRuleDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCustomRiskRuleDetailRequest&, DescribeCustomRiskRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomRiskRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomRiskRulesResponse> DescribeCustomRiskRulesOutcome;
                typedef std::future<DescribeCustomRiskRulesOutcome> DescribeCustomRiskRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCustomRiskRulesRequest&, DescribeCustomRiskRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomRiskRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDbAssetInfoResponse> DescribeDbAssetInfoOutcome;
                typedef std::future<DescribeDbAssetInfoOutcome> DescribeDbAssetInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDbAssetInfoRequest&, DescribeDbAssetInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbAssetInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDbAssetsResponse> DescribeDbAssetsOutcome;
                typedef std::future<DescribeDbAssetsOutcome> DescribeDbAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDbAssetsRequest&, DescribeDbAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDefaultSecurityScoreRuleResponse> DescribeDefaultSecurityScoreRuleOutcome;
                typedef std::future<DescribeDefaultSecurityScoreRuleOutcome> DescribeDefaultSecurityScoreRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDefaultSecurityScoreRuleRequest&, DescribeDefaultSecurityScoreRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultSecurityScoreRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainAssetsResponse> DescribeDomainAssetsOutcome;
                typedef std::future<DescribeDomainAssetsOutcome> DescribeDomainAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDomainAssetsRequest&, DescribeDomainAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAccessRecordResponse> DescribeDspmAccessRecordOutcome;
                typedef std::future<DescribeDspmAccessRecordOutcome> DescribeDspmAccessRecordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAccessRecordRequest&, DescribeDspmAccessRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAccessRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAccessTopologyAccountsResponse> DescribeDspmAccessTopologyAccountsOutcome;
                typedef std::future<DescribeDspmAccessTopologyAccountsOutcome> DescribeDspmAccessTopologyAccountsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAccessTopologyAccountsRequest&, DescribeDspmAccessTopologyAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAccessTopologyAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAccessTopologyAssetsResponse> DescribeDspmAccessTopologyAssetsOutcome;
                typedef std::future<DescribeDspmAccessTopologyAssetsOutcome> DescribeDspmAccessTopologyAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAccessTopologyAssetsRequest&, DescribeDspmAccessTopologyAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAccessTopologyAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAccessTopologyIpsResponse> DescribeDspmAccessTopologyIpsOutcome;
                typedef std::future<DescribeDspmAccessTopologyIpsOutcome> DescribeDspmAccessTopologyIpsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAccessTopologyIpsRequest&, DescribeDspmAccessTopologyIpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAccessTopologyIpsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmApplyHistoryResponse> DescribeDspmApplyHistoryOutcome;
                typedef std::future<DescribeDspmApplyHistoryOutcome> DescribeDspmApplyHistoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmApplyHistoryRequest&, DescribeDspmApplyHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmApplyHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmApplyOrderListResponse> DescribeDspmApplyOrderListOutcome;
                typedef std::future<DescribeDspmApplyOrderListOutcome> DescribeDspmApplyOrderListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmApplyOrderListRequest&, DescribeDspmApplyOrderListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmApplyOrderListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmApproveHistoryResponse> DescribeDspmApproveHistoryOutcome;
                typedef std::future<DescribeDspmApproveHistoryOutcome> DescribeDspmApproveHistoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmApproveHistoryRequest&, DescribeDspmApproveHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmApproveHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmApproveOrderListResponse> DescribeDspmApproveOrderListOutcome;
                typedef std::future<DescribeDspmApproveOrderListOutcome> DescribeDspmApproveOrderListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmApproveOrderListRequest&, DescribeDspmApproveOrderListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmApproveOrderListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetAccessTopologyResponse> DescribeDspmAssetAccessTopologyOutcome;
                typedef std::future<DescribeDspmAssetAccessTopologyOutcome> DescribeDspmAssetAccessTopologyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetAccessTopologyRequest&, DescribeDspmAssetAccessTopologyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetAccessTopologyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetAccountIdentifyResponse> DescribeDspmAssetAccountIdentifyOutcome;
                typedef std::future<DescribeDspmAssetAccountIdentifyOutcome> DescribeDspmAssetAccountIdentifyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetAccountIdentifyRequest&, DescribeDspmAssetAccountIdentifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetAccountIdentifyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetAccountPresetPrivilegesResponse> DescribeDspmAssetAccountPresetPrivilegesOutcome;
                typedef std::future<DescribeDspmAssetAccountPresetPrivilegesOutcome> DescribeDspmAssetAccountPresetPrivilegesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetAccountPresetPrivilegesRequest&, DescribeDspmAssetAccountPresetPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetAccountPresetPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetAccountRecycledPrivilegesResponse> DescribeDspmAssetAccountRecycledPrivilegesOutcome;
                typedef std::future<DescribeDspmAssetAccountRecycledPrivilegesOutcome> DescribeDspmAssetAccountRecycledPrivilegesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetAccountRecycledPrivilegesRequest&, DescribeDspmAssetAccountRecycledPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetAccountRecycledPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetAccountsResponse> DescribeDspmAssetAccountsOutcome;
                typedef std::future<DescribeDspmAssetAccountsOutcome> DescribeDspmAssetAccountsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetAccountsRequest&, DescribeDspmAssetAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetDatabaseListResponse> DescribeDspmAssetDatabaseListOutcome;
                typedef std::future<DescribeDspmAssetDatabaseListOutcome> DescribeDspmAssetDatabaseListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetDatabaseListRequest&, DescribeDspmAssetDatabaseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetDatabaseListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetDatabasesResponse> DescribeDspmAssetDatabasesOutcome;
                typedef std::future<DescribeDspmAssetDatabasesOutcome> DescribeDspmAssetDatabasesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetDatabasesRequest&, DescribeDspmAssetDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetDatabasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetFieldListResponse> DescribeDspmAssetFieldListOutcome;
                typedef std::future<DescribeDspmAssetFieldListOutcome> DescribeDspmAssetFieldListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetFieldListRequest&, DescribeDspmAssetFieldListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetFieldListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetFieldSamplesResponse> DescribeDspmAssetFieldSamplesOutcome;
                typedef std::future<DescribeDspmAssetFieldSamplesOutcome> DescribeDspmAssetFieldSamplesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetFieldSamplesRequest&, DescribeDspmAssetFieldSamplesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetFieldSamplesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetIdentifyInfoListResponse> DescribeDspmAssetIdentifyInfoListOutcome;
                typedef std::future<DescribeDspmAssetIdentifyInfoListOutcome> DescribeDspmAssetIdentifyInfoListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetIdentifyInfoListRequest&, DescribeDspmAssetIdentifyInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetIdentifyInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetIdsResponse> DescribeDspmAssetIdsOutcome;
                typedef std::future<DescribeDspmAssetIdsOutcome> DescribeDspmAssetIdsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetIdsRequest&, DescribeDspmAssetIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetLoginCredentialResponse> DescribeDspmAssetLoginCredentialOutcome;
                typedef std::future<DescribeDspmAssetLoginCredentialOutcome> DescribeDspmAssetLoginCredentialOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetLoginCredentialRequest&, DescribeDspmAssetLoginCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetLoginCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetSecurityAnalyseStatusResponse> DescribeDspmAssetSecurityAnalyseStatusOutcome;
                typedef std::future<DescribeDspmAssetSecurityAnalyseStatusOutcome> DescribeDspmAssetSecurityAnalyseStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetSecurityAnalyseStatusRequest&, DescribeDspmAssetSecurityAnalyseStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetSecurityAnalyseStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetSupportedPrivilegesResponse> DescribeDspmAssetSupportedPrivilegesOutcome;
                typedef std::future<DescribeDspmAssetSupportedPrivilegesOutcome> DescribeDspmAssetSupportedPrivilegesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetSupportedPrivilegesRequest&, DescribeDspmAssetSupportedPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetSupportedPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetTableListResponse> DescribeDspmAssetTableListOutcome;
                typedef std::future<DescribeDspmAssetTableListOutcome> DescribeDspmAssetTableListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetTableListRequest&, DescribeDspmAssetTableListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetTableListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAssetsResponse> DescribeDspmAssetsOutcome;
                typedef std::future<DescribeDspmAssetsOutcome> DescribeDspmAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAssetsRequest&, DescribeDspmAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmAuditFilterStrategyResponse> DescribeDspmAuditFilterStrategyOutcome;
                typedef std::future<DescribeDspmAuditFilterStrategyOutcome> DescribeDspmAuditFilterStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmAuditFilterStrategyRequest&, DescribeDspmAuditFilterStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmAuditFilterStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmBackupLogListResponse> DescribeDspmBackupLogListOutcome;
                typedef std::future<DescribeDspmBackupLogListOutcome> DescribeDspmBackupLogListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmBackupLogListRequest&, DescribeDspmBackupLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmBackupLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmBackupSettingResponse> DescribeDspmBackupSettingOutcome;
                typedef std::future<DescribeDspmBackupSettingOutcome> DescribeDspmBackupSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmBackupSettingRequest&, DescribeDspmBackupSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmBackupSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmCkafkaRouteListResponse> DescribeDspmCkafkaRouteListOutcome;
                typedef std::future<DescribeDspmCkafkaRouteListOutcome> DescribeDspmCkafkaRouteListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmCkafkaRouteListRequest&, DescribeDspmCkafkaRouteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmCkafkaRouteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmCkafkaTopicListResponse> DescribeDspmCkafkaTopicListOutcome;
                typedef std::future<DescribeDspmCkafkaTopicListOutcome> DescribeDspmCkafkaTopicListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmCkafkaTopicListRequest&, DescribeDspmCkafkaTopicListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmCkafkaTopicListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmDictionaryListResponse> DescribeDspmDictionaryListOutcome;
                typedef std::future<DescribeDspmDictionaryListOutcome> DescribeDspmDictionaryListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmDictionaryListRequest&, DescribeDspmDictionaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmDictionaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmExportTaskResponse> DescribeDspmExportTaskOutcome;
                typedef std::future<DescribeDspmExportTaskOutcome> DescribeDspmExportTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmExportTaskRequest&, DescribeDspmExportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmExportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyCategoryListResponse> DescribeDspmIdentifyCategoryListOutcome;
                typedef std::future<DescribeDspmIdentifyCategoryListOutcome> DescribeDspmIdentifyCategoryListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyCategoryListRequest&, DescribeDspmIdentifyCategoryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyCategoryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyComplianceCategoryRuleListResponse> DescribeDspmIdentifyComplianceCategoryRuleListOutcome;
                typedef std::future<DescribeDspmIdentifyComplianceCategoryRuleListOutcome> DescribeDspmIdentifyComplianceCategoryRuleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyComplianceCategoryRuleListRequest&, DescribeDspmIdentifyComplianceCategoryRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyComplianceCategoryRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyComplianceGroupDetailResponse> DescribeDspmIdentifyComplianceGroupDetailOutcome;
                typedef std::future<DescribeDspmIdentifyComplianceGroupDetailOutcome> DescribeDspmIdentifyComplianceGroupDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyComplianceGroupDetailRequest&, DescribeDspmIdentifyComplianceGroupDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyComplianceGroupDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyComplianceGroupListResponse> DescribeDspmIdentifyComplianceGroupListOutcome;
                typedef std::future<DescribeDspmIdentifyComplianceGroupListOutcome> DescribeDspmIdentifyComplianceGroupListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyComplianceGroupListRequest&, DescribeDspmIdentifyComplianceGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyComplianceGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyDistributionStatisticsResponse> DescribeDspmIdentifyDistributionStatisticsOutcome;
                typedef std::future<DescribeDspmIdentifyDistributionStatisticsOutcome> DescribeDspmIdentifyDistributionStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyDistributionStatisticsRequest&, DescribeDspmIdentifyDistributionStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyDistributionStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyIdListResponse> DescribeDspmIdentifyIdListOutcome;
                typedef std::future<DescribeDspmIdentifyIdListOutcome> DescribeDspmIdentifyIdListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyIdListRequest&, DescribeDspmIdentifyIdListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyIdListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyInfoResponse> DescribeDspmIdentifyInfoOutcome;
                typedef std::future<DescribeDspmIdentifyInfoOutcome> DescribeDspmIdentifyInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyInfoRequest&, DescribeDspmIdentifyInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyInfoListResponse> DescribeDspmIdentifyInfoListOutcome;
                typedef std::future<DescribeDspmIdentifyInfoListOutcome> DescribeDspmIdentifyInfoListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyInfoListRequest&, DescribeDspmIdentifyInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyLevelGroupListResponse> DescribeDspmIdentifyLevelGroupListOutcome;
                typedef std::future<DescribeDspmIdentifyLevelGroupListOutcome> DescribeDspmIdentifyLevelGroupListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyLevelGroupListRequest&, DescribeDspmIdentifyLevelGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyLevelGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyRuleDetailResponse> DescribeDspmIdentifyRuleDetailOutcome;
                typedef std::future<DescribeDspmIdentifyRuleDetailOutcome> DescribeDspmIdentifyRuleDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyRuleDetailRequest&, DescribeDspmIdentifyRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyRuleListResponse> DescribeDspmIdentifyRuleListOutcome;
                typedef std::future<DescribeDspmIdentifyRuleListOutcome> DescribeDspmIdentifyRuleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyRuleListRequest&, DescribeDspmIdentifyRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmIdentifyRuleTestResultResponse> DescribeDspmIdentifyRuleTestResultOutcome;
                typedef std::future<DescribeDspmIdentifyRuleTestResultOutcome> DescribeDspmIdentifyRuleTestResultOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmIdentifyRuleTestResultRequest&, DescribeDspmIdentifyRuleTestResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmIdentifyRuleTestResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmLogDeliveryTypeResponse> DescribeDspmLogDeliveryTypeOutcome;
                typedef std::future<DescribeDspmLogDeliveryTypeOutcome> DescribeDspmLogDeliveryTypeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmLogDeliveryTypeRequest&, DescribeDspmLogDeliveryTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmLogDeliveryTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmLogListResponse> DescribeDspmLogListOutcome;
                typedef std::future<DescribeDspmLogListOutcome> DescribeDspmLogListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmLogListRequest&, DescribeDspmLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmLogTypeConfigListResponse> DescribeDspmLogTypeConfigListOutcome;
                typedef std::future<DescribeDspmLogTypeConfigListOutcome> DescribeDspmLogTypeConfigListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmLogTypeConfigListRequest&, DescribeDspmLogTypeConfigListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmLogTypeConfigListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmPayInfoResponse> DescribeDspmPayInfoOutcome;
                typedef std::future<DescribeDspmPayInfoOutcome> DescribeDspmPayInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmPayInfoRequest&, DescribeDspmPayInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmPayInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmPersonApplyHistoryResponse> DescribeDspmPersonApplyHistoryOutcome;
                typedef std::future<DescribeDspmPersonApplyHistoryOutcome> DescribeDspmPersonApplyHistoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmPersonApplyHistoryRequest&, DescribeDspmPersonApplyHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmPersonApplyHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmPersonalIdentifyListResponse> DescribeDspmPersonalIdentifyListOutcome;
                typedef std::future<DescribeDspmPersonalIdentifyListOutcome> DescribeDspmPersonalIdentifyListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmPersonalIdentifyListRequest&, DescribeDspmPersonalIdentifyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmPersonalIdentifyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmResourceResponse> DescribeDspmResourceOutcome;
                typedef std::future<DescribeDspmResourceOutcome> DescribeDspmResourceOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmResourceRequest&, DescribeDspmResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmRiskResponse> DescribeDspmRiskOutcome;
                typedef std::future<DescribeDspmRiskOutcome> DescribeDspmRiskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmRiskRequest&, DescribeDspmRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmRiskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmRiskDetailResponse> DescribeDspmRiskDetailOutcome;
                typedef std::future<DescribeDspmRiskDetailOutcome> DescribeDspmRiskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmRiskDetailRequest&, DescribeDspmRiskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmRiskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmRiskStrategyResponse> DescribeDspmRiskStrategyOutcome;
                typedef std::future<DescribeDspmRiskStrategyOutcome> DescribeDspmRiskStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmRiskStrategyRequest&, DescribeDspmRiskStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmRiskStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmRiskStrategyGroupResponse> DescribeDspmRiskStrategyGroupOutcome;
                typedef std::future<DescribeDspmRiskStrategyGroupOutcome> DescribeDspmRiskStrategyGroupOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmRiskStrategyGroupRequest&, DescribeDspmRiskStrategyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmRiskStrategyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmRiskTendencyResponse> DescribeDspmRiskTendencyOutcome;
                typedef std::future<DescribeDspmRiskTendencyOutcome> DescribeDspmRiskTendencyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmRiskTendencyRequest&, DescribeDspmRiskTendencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmRiskTendencyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmSessionListResponse> DescribeDspmSessionListOutcome;
                typedef std::future<DescribeDspmSessionListOutcome> DescribeDspmSessionListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmSessionListRequest&, DescribeDspmSessionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmSessionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmStatisticsResponse> DescribeDspmStatisticsOutcome;
                typedef std::future<DescribeDspmStatisticsOutcome> DescribeDspmStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmStatisticsRequest&, DescribeDspmStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmSupportedAssetTypeResponse> DescribeDspmSupportedAssetTypeOutcome;
                typedef std::future<DescribeDspmSupportedAssetTypeOutcome> DescribeDspmSupportedAssetTypeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmSupportedAssetTypeRequest&, DescribeDspmSupportedAssetTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmSupportedAssetTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmSyncAssetsStatusResponse> DescribeDspmSyncAssetsStatusOutcome;
                typedef std::future<DescribeDspmSyncAssetsStatusOutcome> DescribeDspmSyncAssetsStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmSyncAssetsStatusRequest&, DescribeDspmSyncAssetsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmSyncAssetsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmSyncUsersStatusResponse> DescribeDspmSyncUsersStatusOutcome;
                typedef std::future<DescribeDspmSyncUsersStatusOutcome> DescribeDspmSyncUsersStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmSyncUsersStatusRequest&, DescribeDspmSyncUsersStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmSyncUsersStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmUserCkafkaInstanceListResponse> DescribeDspmUserCkafkaInstanceListOutcome;
                typedef std::future<DescribeDspmUserCkafkaInstanceListOutcome> DescribeDspmUserCkafkaInstanceListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmUserCkafkaInstanceListRequest&, DescribeDspmUserCkafkaInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmUserCkafkaInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDspmWhitelistStrategyResponse> DescribeDspmWhitelistStrategyOutcome;
                typedef std::future<DescribeDspmWhitelistStrategyOutcome> DescribeDspmWhitelistStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDspmWhitelistStrategyRequest&, DescribeDspmWhitelistStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDspmWhitelistStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDynamicAssetsResponse> DescribeDynamicAssetsOutcome;
                typedef std::future<DescribeDynamicAssetsOutcome> DescribeDynamicAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDynamicAssetsRequest&, DescribeDynamicAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDynamicAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEDRRuleListResponse> DescribeEDRRuleListOutcome;
                typedef std::future<DescribeEDRRuleListOutcome> DescribeEDRRuleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEDRRuleListRequest&, DescribeEDRRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEDRRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEDRScanRecordListResponse> DescribeEDRScanRecordListOutcome;
                typedef std::future<DescribeEDRScanRecordListOutcome> DescribeEDRScanRecordListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEDRScanRecordListRequest&, DescribeEDRScanRecordListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEDRScanRecordListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEDRScanTaskDetailResponse> DescribeEDRScanTaskDetailOutcome;
                typedef std::future<DescribeEDRScanTaskDetailOutcome> DescribeEDRScanTaskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEDRScanTaskDetailRequest&, DescribeEDRScanTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEDRScanTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrAlertCountForAssetResponse> DescribeEdrAlertCountForAssetOutcome;
                typedef std::future<DescribeEdrAlertCountForAssetOutcome> DescribeEdrAlertCountForAssetOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrAlertCountForAssetRequest&, DescribeEdrAlertCountForAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrAlertCountForAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrAlertCountForContainerResponse> DescribeEdrAlertCountForContainerOutcome;
                typedef std::future<DescribeEdrAlertCountForContainerOutcome> DescribeEdrAlertCountForContainerOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrAlertCountForContainerRequest&, DescribeEdrAlertCountForContainerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrAlertCountForContainerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrAlertInfoResponse> DescribeEdrAlertInfoOutcome;
                typedef std::future<DescribeEdrAlertInfoOutcome> DescribeEdrAlertInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrAlertInfoRequest&, DescribeEdrAlertInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrAlertInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrAlertListResponse> DescribeEdrAlertListOutcome;
                typedef std::future<DescribeEdrAlertListOutcome> DescribeEdrAlertListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrAlertListRequest&, DescribeEdrAlertListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrAlertListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrAlertMultiAttackStagesResponse> DescribeEdrAlertMultiAttackStagesOutcome;
                typedef std::future<DescribeEdrAlertMultiAttackStagesOutcome> DescribeEdrAlertMultiAttackStagesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrAlertMultiAttackStagesRequest&, DescribeEdrAlertMultiAttackStagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrAlertMultiAttackStagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrAlertSummaryResponse> DescribeEdrAlertSummaryOutcome;
                typedef std::future<DescribeEdrAlertSummaryOutcome> DescribeEdrAlertSummaryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrAlertSummaryRequest&, DescribeEdrAlertSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrAlertSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrAlertThreatTagsResponse> DescribeEdrAlertThreatTagsOutcome;
                typedef std::future<DescribeEdrAlertThreatTagsOutcome> DescribeEdrAlertThreatTagsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrAlertThreatTagsRequest&, DescribeEdrAlertThreatTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrAlertThreatTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrExcludeNetworkSegmentsResponse> DescribeEdrExcludeNetworkSegmentsOutcome;
                typedef std::future<DescribeEdrExcludeNetworkSegmentsOutcome> DescribeEdrExcludeNetworkSegmentsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrExcludeNetworkSegmentsRequest&, DescribeEdrExcludeNetworkSegmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrExcludeNetworkSegmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrExportJobDownloadURLResponse> DescribeEdrExportJobDownloadURLOutcome;
                typedef std::future<DescribeEdrExportJobDownloadURLOutcome> DescribeEdrExportJobDownloadURLOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrExportJobDownloadURLRequest&, DescribeEdrExportJobDownloadURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrExportJobDownloadURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrExportJobListResponse> DescribeEdrExportJobListOutcome;
                typedef std::future<DescribeEdrExportJobListOutcome> DescribeEdrExportJobListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrExportJobListRequest&, DescribeEdrExportJobListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrExportJobListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdrLogCollectPathsResponse> DescribeEdrLogCollectPathsOutcome;
                typedef std::future<DescribeEdrLogCollectPathsOutcome> DescribeEdrLogCollectPathsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeEdrLogCollectPathsRequest&, DescribeEdrLogCollectPathsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdrLogCollectPathsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExportJobDownloadURLResponse> DescribeExportJobDownloadURLOutcome;
                typedef std::future<DescribeExportJobDownloadURLOutcome> DescribeExportJobDownloadURLOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExportJobDownloadURLRequest&, DescribeExportJobDownloadURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportJobDownloadURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExportJobManageListResponse> DescribeExportJobManageListOutcome;
                typedef std::future<DescribeExportJobManageListOutcome> DescribeExportJobManageListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExportJobManageListRequest&, DescribeExportJobManageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExportJobManageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposeAssetCategoryResponse> DescribeExposeAssetCategoryOutcome;
                typedef std::future<DescribeExposeAssetCategoryOutcome> DescribeExposeAssetCategoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposeAssetCategoryRequest&, DescribeExposeAssetCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposeAssetCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposePathResponse> DescribeExposePathOutcome;
                typedef std::future<DescribeExposePathOutcome> DescribeExposePathOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposePathRequest&, DescribeExposePathOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposePathAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposeRiskStatisticsResponse> DescribeExposeRiskStatisticsOutcome;
                typedef std::future<DescribeExposeRiskStatisticsOutcome> DescribeExposeRiskStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposeRiskStatisticsRequest&, DescribeExposeRiskStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposeRiskStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposeRisksResponse> DescribeExposeRisksOutcome;
                typedef std::future<DescribeExposeRisksOutcome> DescribeExposeRisksOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposeRisksRequest&, DescribeExposeRisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposeRisksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposeRulesResponse> DescribeExposeRulesOutcome;
                typedef std::future<DescribeExposeRulesOutcome> DescribeExposeRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposeRulesRequest&, DescribeExposeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposureAutoTagAttributeResponse> DescribeExposureAutoTagAttributeOutcome;
                typedef std::future<DescribeExposureAutoTagAttributeOutcome> DescribeExposureAutoTagAttributeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposureAutoTagAttributeRequest&, DescribeExposureAutoTagAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposureAutoTagAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposureAutoTagRulesResponse> DescribeExposureAutoTagRulesOutcome;
                typedef std::future<DescribeExposureAutoTagRulesOutcome> DescribeExposureAutoTagRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposureAutoTagRulesRequest&, DescribeExposureAutoTagRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposureAutoTagRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposureTrendResponse> DescribeExposureTrendOutcome;
                typedef std::future<DescribeExposureTrendOutcome> DescribeExposureTrendOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposureTrendRequest&, DescribeExposureTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposureTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposuresResponse> DescribeExposuresOutcome;
                typedef std::future<DescribeExposuresOutcome> DescribeExposuresOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposuresRequest&, DescribeExposuresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposuresAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewayAssetsResponse> DescribeGatewayAssetsOutcome;
                typedef std::future<DescribeGatewayAssetsOutcome> DescribeGatewayAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeGatewayAssetsRequest&, DescribeGatewayAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHighBaseLineRiskListResponse> DescribeHighBaseLineRiskListOutcome;
                typedef std::future<DescribeHighBaseLineRiskListOutcome> DescribeHighBaseLineRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeHighBaseLineRiskListRequest&, DescribeHighBaseLineRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHighBaseLineRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostKBRiskListResponse> DescribeHostKBRiskListOutcome;
                typedef std::future<DescribeHostKBRiskListOutcome> DescribeHostKBRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeHostKBRiskListRequest&, DescribeHostKBRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostKBRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostVulItemVPRInfoResponse> DescribeHostVulItemVPRInfoOutcome;
                typedef std::future<DescribeHostVulItemVPRInfoOutcome> DescribeHostVulItemVPRInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeHostVulItemVPRInfoRequest&, DescribeHostVulItemVPRInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostVulItemVPRInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostVulOverviewResponse> DescribeHostVulOverviewOutcome;
                typedef std::future<DescribeHostVulOverviewOutcome> DescribeHostVulOverviewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeHostVulOverviewRequest&, DescribeHostVulOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostVulOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostVulRiskListResponse> DescribeHostVulRiskListOutcome;
                typedef std::future<DescribeHostVulRiskListOutcome> DescribeHostVulRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeHostVulRiskListRequest&, DescribeHostVulRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostVulRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIaCFileListResponse> DescribeIaCFileListOutcome;
                typedef std::future<DescribeIaCFileListOutcome> DescribeIaCFileListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeIaCFileListRequest&, DescribeIaCFileListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIaCFileListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIaCFileOverviewResponse> DescribeIaCFileOverviewOutcome;
                typedef std::future<DescribeIaCFileOverviewOutcome> DescribeIaCFileOverviewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeIaCFileOverviewRequest&, DescribeIaCFileOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIaCFileOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIaCFileReportResponse> DescribeIaCFileReportOutcome;
                typedef std::future<DescribeIaCFileReportOutcome> DescribeIaCFileReportOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeIaCFileReportRequest&, DescribeIaCFileReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIaCFileReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIaCTokenListResponse> DescribeIaCTokenListOutcome;
                typedef std::future<DescribeIaCTokenListOutcome> DescribeIaCTokenListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeIaCTokenListRequest&, DescribeIaCTokenListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIaCTokenListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageAssetDetailResponse> DescribeImageAssetDetailOutcome;
                typedef std::future<DescribeImageAssetDetailOutcome> DescribeImageAssetDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageAssetDetailRequest&, DescribeImageAssetDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAssetDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageAssetListResponse> DescribeImageAssetListOutcome;
                typedef std::future<DescribeImageAssetListOutcome> DescribeImageAssetListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageAssetListRequest&, DescribeImageAssetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAssetListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageAssociatedAssetCountResponse> DescribeImageAssociatedAssetCountOutcome;
                typedef std::future<DescribeImageAssociatedAssetCountOutcome> DescribeImageAssociatedAssetCountOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageAssociatedAssetCountRequest&, DescribeImageAssociatedAssetCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAssociatedAssetCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageAssociatedContainerListResponse> DescribeImageAssociatedContainerListOutcome;
                typedef std::future<DescribeImageAssociatedContainerListOutcome> DescribeImageAssociatedContainerListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageAssociatedContainerListRequest&, DescribeImageAssociatedContainerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAssociatedContainerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageAssociatedHostListResponse> DescribeImageAssociatedHostListOutcome;
                typedef std::future<DescribeImageAssociatedHostListOutcome> DescribeImageAssociatedHostListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageAssociatedHostListRequest&, DescribeImageAssociatedHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAssociatedHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageComponentListResponse> DescribeImageComponentListOutcome;
                typedef std::future<DescribeImageComponentListOutcome> DescribeImageComponentListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageComponentListRequest&, DescribeImageComponentListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageComponentListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageExportJobListResponse> DescribeImageExportJobListOutcome;
                typedef std::future<DescribeImageExportJobListOutcome> DescribeImageExportJobListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageExportJobListRequest&, DescribeImageExportJobListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageExportJobListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageLayerListResponse> DescribeImageLayerListOutcome;
                typedef std::future<DescribeImageLayerListOutcome> DescribeImageLayerListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageLayerListRequest&, DescribeImageLayerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageLayerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageLayerVulListResponse> DescribeImageLayerVulListOutcome;
                typedef std::future<DescribeImageLayerVulListOutcome> DescribeImageLayerVulListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageLayerVulListRequest&, DescribeImageLayerVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageLayerVulListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRegistryAssetOverviewResponse> DescribeImageRegistryAssetOverviewOutcome;
                typedef std::future<DescribeImageRegistryAssetOverviewOutcome> DescribeImageRegistryAssetOverviewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageRegistryAssetOverviewRequest&, DescribeImageRegistryAssetOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRegistryAssetOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRegistryConnectivityTaskResultResponse> DescribeImageRegistryConnectivityTaskResultOutcome;
                typedef std::future<DescribeImageRegistryConnectivityTaskResultOutcome> DescribeImageRegistryConnectivityTaskResultOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageRegistryConnectivityTaskResultRequest&, DescribeImageRegistryConnectivityTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRegistryConnectivityTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRegistryListResponse> DescribeImageRegistryListOutcome;
                typedef std::future<DescribeImageRegistryListOutcome> DescribeImageRegistryListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageRegistryListRequest&, DescribeImageRegistryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRegistryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRegistryNamespaceListResponse> DescribeImageRegistryNamespaceListOutcome;
                typedef std::future<DescribeImageRegistryNamespaceListOutcome> DescribeImageRegistryNamespaceListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageRegistryNamespaceListRequest&, DescribeImageRegistryNamespaceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRegistryNamespaceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRegistryScanSubTaskListResponse> DescribeImageRegistryScanSubTaskListOutcome;
                typedef std::future<DescribeImageRegistryScanSubTaskListOutcome> DescribeImageRegistryScanSubTaskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageRegistryScanSubTaskListRequest&, DescribeImageRegistryScanSubTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRegistryScanSubTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRegistryScanTaskListResponse> DescribeImageRegistryScanTaskListOutcome;
                typedef std::future<DescribeImageRegistryScanTaskListOutcome> DescribeImageRegistryScanTaskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageRegistryScanTaskListRequest&, DescribeImageRegistryScanTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRegistryScanTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRegistryTimedScanTaskConfigResponse> DescribeImageRegistryTimedScanTaskConfigOutcome;
                typedef std::future<DescribeImageRegistryTimedScanTaskConfigOutcome> DescribeImageRegistryTimedScanTaskConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageRegistryTimedScanTaskConfigRequest&, DescribeImageRegistryTimedScanTaskConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRegistryTimedScanTaskConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageRegistryTimedScanTaskPreviewResponse> DescribeImageRegistryTimedScanTaskPreviewOutcome;
                typedef std::future<DescribeImageRegistryTimedScanTaskPreviewOutcome> DescribeImageRegistryTimedScanTaskPreviewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageRegistryTimedScanTaskPreviewRequest&, DescribeImageRegistryTimedScanTaskPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageRegistryTimedScanTaskPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageSensitiveInfoListResponse> DescribeImageSensitiveInfoListOutcome;
                typedef std::future<DescribeImageSensitiveInfoListOutcome> DescribeImageSensitiveInfoListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageSensitiveInfoListRequest&, DescribeImageSensitiveInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageSensitiveInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageSensitiveWhitelistResponse> DescribeImageSensitiveWhitelistOutcome;
                typedef std::future<DescribeImageSensitiveWhitelistOutcome> DescribeImageSensitiveWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageSensitiveWhitelistRequest&, DescribeImageSensitiveWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageSensitiveWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageVirusListResponse> DescribeImageVirusListOutcome;
                typedef std::future<DescribeImageVirusListOutcome> DescribeImageVirusListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageVirusListRequest&, DescribeImageVirusListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageVirusListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageVirusWhitelistResponse> DescribeImageVirusWhitelistOutcome;
                typedef std::future<DescribeImageVirusWhitelistOutcome> DescribeImageVirusWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageVirusWhitelistRequest&, DescribeImageVirusWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageVirusWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageVirusWhitelistDetailResponse> DescribeImageVirusWhitelistDetailOutcome;
                typedef std::future<DescribeImageVirusWhitelistDetailOutcome> DescribeImageVirusWhitelistDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageVirusWhitelistDetailRequest&, DescribeImageVirusWhitelistDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageVirusWhitelistDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageVulListResponse> DescribeImageVulListOutcome;
                typedef std::future<DescribeImageVulListOutcome> DescribeImageVulListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageVulListRequest&, DescribeImageVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageVulListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageVulSummaryListResponse> DescribeImageVulSummaryListOutcome;
                typedef std::future<DescribeImageVulSummaryListOutcome> DescribeImageVulSummaryListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageVulSummaryListRequest&, DescribeImageVulSummaryListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageVulSummaryListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageVulWhitelistResponse> DescribeImageVulWhitelistOutcome;
                typedef std::future<DescribeImageVulWhitelistOutcome> DescribeImageVulWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeImageVulWhitelistRequest&, DescribeImageVulWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageVulWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKBDetailResponse> DescribeKBDetailOutcome;
                typedef std::future<DescribeKBDetailOutcome> DescribeKBDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeKBDetailRequest&, DescribeKBDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKBDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKBUpdatableMachineListResponse> DescribeKBUpdatableMachineListOutcome;
                typedef std::future<DescribeKBUpdatableMachineListOutcome> DescribeKBUpdatableMachineListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeKBUpdatableMachineListRequest&, DescribeKBUpdatableMachineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKBUpdatableMachineListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKeySandboxCredentialResponse> DescribeKeySandboxCredentialOutcome;
                typedef std::future<DescribeKeySandboxCredentialOutcome> DescribeKeySandboxCredentialOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeKeySandboxCredentialRequest&, DescribeKeySandboxCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeySandboxCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKeySandboxCredentialListResponse> DescribeKeySandboxCredentialListOutcome;
                typedef std::future<DescribeKeySandboxCredentialListOutcome> DescribeKeySandboxCredentialListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeKeySandboxCredentialListRequest&, DescribeKeySandboxCredentialListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeySandboxCredentialListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLastScanTaskInfoResponse> DescribeLastScanTaskInfoOutcome;
                typedef std::future<DescribeLastScanTaskInfoOutcome> DescribeLastScanTaskInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeLastScanTaskInfoRequest&, DescribeLastScanTaskInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLastScanTaskInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLicenseStatusResponse> DescribeLicenseStatusOutcome;
                typedef std::future<DescribeLicenseStatusOutcome> DescribeLicenseStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeLicenseStatusRequest&, DescribeLicenseStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLicenseStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLighthouseFirewallRulesResponse> DescribeLighthouseFirewallRulesOutcome;
                typedef std::future<DescribeLighthouseFirewallRulesOutcome> DescribeLighthouseFirewallRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeLighthouseFirewallRulesRequest&, DescribeLighthouseFirewallRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLighthouseFirewallRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenerListResponse> DescribeListenerListOutcome;
                typedef std::future<DescribeListenerListOutcome> DescribeListenerListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeListenerListRequest&, DescribeListenerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoginTypeGlobalConfResponse> DescribeLoginTypeGlobalConfOutcome;
                typedef std::future<DescribeLoginTypeGlobalConfOutcome> DescribeLoginTypeGlobalConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeLoginTypeGlobalConfRequest&, DescribeLoginTypeGlobalConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginTypeGlobalConfAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoginTypeHostResponse> DescribeLoginTypeHostOutcome;
                typedef std::future<DescribeLoginTypeHostOutcome> DescribeLoginTypeHostOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeLoginTypeHostRequest&, DescribeLoginTypeHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginTypeHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoginWhiteCombinedListResponse> DescribeLoginWhiteCombinedListOutcome;
                typedef std::future<DescribeLoginWhiteCombinedListOutcome> DescribeLoginWhiteCombinedListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeLoginWhiteCombinedListRequest&, DescribeLoginWhiteCombinedListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginWhiteCombinedListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoginWhiteHostListResponse> DescribeLoginWhiteHostListOutcome;
                typedef std::future<DescribeLoginWhiteHostListOutcome> DescribeLoginWhiteHostListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeLoginWhiteHostListRequest&, DescribeLoginWhiteHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginWhiteHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineClearHistoryResponse> DescribeMachineClearHistoryOutcome;
                typedef std::future<DescribeMachineClearHistoryOutcome> DescribeMachineClearHistoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeMachineClearHistoryRequest&, DescribeMachineClearHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineClearHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineGeneralResponse> DescribeMachineGeneralOutcome;
                typedef std::future<DescribeMachineGeneralOutcome> DescribeMachineGeneralOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeMachineGeneralRequest&, DescribeMachineGeneralOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineGeneralAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineLoginTypeResponse> DescribeMachineLoginTypeOutcome;
                typedef std::future<DescribeMachineLoginTypeOutcome> DescribeMachineLoginTypeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeMachineLoginTypeRequest&, DescribeMachineLoginTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineLoginTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalwareTimingScanSettingResponse> DescribeMalwareTimingScanSettingOutcome;
                typedef std::future<DescribeMalwareTimingScanSettingOutcome> DescribeMalwareTimingScanSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeMalwareTimingScanSettingRequest&, DescribeMalwareTimingScanSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwareTimingScanSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMandatoryVulSetResponse> DescribeMandatoryVulSetOutcome;
                typedef std::future<DescribeMandatoryVulSetOutcome> DescribeMandatoryVulSetOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeMandatoryVulSetRequest&, DescribeMandatoryVulSetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMandatoryVulSetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModifyMachinesLoginTypeTasksResponse> DescribeModifyMachinesLoginTypeTasksOutcome;
                typedef std::future<DescribeModifyMachinesLoginTypeTasksOutcome> DescribeModifyMachinesLoginTypeTasksOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeModifyMachinesLoginTypeTasksRequest&, DescribeModifyMachinesLoginTypeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModifyMachinesLoginTypeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMultiCloudAssetCountResponse> DescribeMultiCloudAssetCountOutcome;
                typedef std::future<DescribeMultiCloudAssetCountOutcome> DescribeMultiCloudAssetCountOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeMultiCloudAssetCountRequest&, DescribeMultiCloudAssetCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMultiCloudAssetCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNFSScanConfResponse> DescribeNFSScanConfOutcome;
                typedef std::future<DescribeNFSScanConfOutcome> DescribeNFSScanConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNFSScanConfRequest&, DescribeNFSScanConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNFSScanConfAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNFSScanHostResponse> DescribeNFSScanHostOutcome;
                typedef std::future<DescribeNFSScanHostOutcome> DescribeNFSScanHostOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNFSScanHostRequest&, DescribeNFSScanHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNFSScanHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNICAssetsResponse> DescribeNICAssetsOutcome;
                typedef std::future<DescribeNICAssetsOutcome> DescribeNICAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNICAssetsRequest&, DescribeNICAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNICAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatRulesResponse> DescribeNatRulesOutcome;
                typedef std::future<DescribeNatRulesOutcome> DescribeNatRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNatRulesRequest&, DescribeNatRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetAttackSettingResponse> DescribeNetAttackSettingOutcome;
                typedef std::future<DescribeNetAttackSettingOutcome> DescribeNetAttackSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNetAttackSettingRequest&, DescribeNetAttackSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetAttackSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotifyAgentOfflineDurationResponse> DescribeNotifyAgentOfflineDurationOutcome;
                typedef std::future<DescribeNotifyAgentOfflineDurationOutcome> DescribeNotifyAgentOfflineDurationOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNotifyAgentOfflineDurationRequest&, DescribeNotifyAgentOfflineDurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotifyAgentOfflineDurationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotifyAssetConfigResponse> DescribeNotifyAssetConfigOutcome;
                typedef std::future<DescribeNotifyAssetConfigOutcome> DescribeNotifyAssetConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNotifyAssetConfigRequest&, DescribeNotifyAssetConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotifyAssetConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotifySettingResponse> DescribeNotifySettingOutcome;
                typedef std::future<DescribeNotifySettingOutcome> DescribeNotifySettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNotifySettingRequest&, DescribeNotifySettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotifySettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotifySettingAkResponse> DescribeNotifySettingAkOutcome;
                typedef std::future<DescribeNotifySettingAkOutcome> DescribeNotifySettingAkOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNotifySettingAkRequest&, DescribeNotifySettingAkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotifySettingAkAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNotifySettingAlertResponse> DescribeNotifySettingAlertOutcome;
                typedef std::future<DescribeNotifySettingAlertOutcome> DescribeNotifySettingAlertOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNotifySettingAlertRequest&, DescribeNotifySettingAlertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNotifySettingAlertAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationInfoResponse> DescribeOrganizationInfoOutcome;
                typedef std::future<DescribeOrganizationInfoOutcome> DescribeOrganizationInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeOrganizationInfoRequest&, DescribeOrganizationInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationUserInfoResponse> DescribeOrganizationUserInfoOutcome;
                typedef std::future<DescribeOrganizationUserInfoOutcome> DescribeOrganizationUserInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeOrganizationUserInfoRequest&, DescribeOrganizationUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationUserInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOtherCloudAssetsResponse> DescribeOtherCloudAssetsOutcome;
                typedef std::future<DescribeOtherCloudAssetsOutcome> DescribeOtherCloudAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeOtherCloudAssetsRequest&, DescribeOtherCloudAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOtherCloudAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePodContainerListResponse> DescribePodContainerListOutcome;
                typedef std::future<DescribePodContainerListOutcome> DescribePodContainerListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribePodContainerListRequest&, DescribePodContainerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePodContainerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePortDetectListResponse> DescribePortDetectListOutcome;
                typedef std::future<DescribePortDetectListOutcome> DescribePortDetectListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribePortDetectListRequest&, DescribePortDetectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortDetectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePortScanTaskCountResponse> DescribePortScanTaskCountOutcome;
                typedef std::future<DescribePortScanTaskCountOutcome> DescribePortScanTaskCountOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribePortScanTaskCountRequest&, DescribePortScanTaskCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortScanTaskCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePreventUninstallGlobalConfResponse> DescribePreventUninstallGlobalConfOutcome;
                typedef std::future<DescribePreventUninstallGlobalConfOutcome> DescribePreventUninstallGlobalConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribePreventUninstallGlobalConfRequest&, DescribePreventUninstallGlobalConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePreventUninstallGlobalConfAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePreventUninstallHostResponse> DescribePreventUninstallHostOutcome;
                typedef std::future<DescribePreventUninstallHostOutcome> DescribePreventUninstallHostOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribePreventUninstallHostRequest&, DescribePreventUninstallHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePreventUninstallHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProcessDaemonGlobalConfResponse> DescribeProcessDaemonGlobalConfOutcome;
                typedef std::future<DescribeProcessDaemonGlobalConfOutcome> DescribeProcessDaemonGlobalConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeProcessDaemonGlobalConfRequest&, DescribeProcessDaemonGlobalConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessDaemonGlobalConfAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProcessDaemonHostResponse> DescribeProcessDaemonHostOutcome;
                typedef std::future<DescribeProcessDaemonHostOutcome> DescribeProcessDaemonHostOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeProcessDaemonHostRequest&, DescribeProcessDaemonHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessDaemonHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicCloudAssetsResponse> DescribePublicCloudAssetsOutcome;
                typedef std::future<DescribePublicCloudAssetsOutcome> DescribePublicCloudAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribePublicCloudAssetsRequest&, DescribePublicCloudAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicCloudAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicIpAssetsResponse> DescribePublicIpAssetsOutcome;
                typedef std::future<DescribePublicIpAssetsOutcome> DescribePublicIpAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribePublicIpAssetsRequest&, DescribePublicIpAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicIpAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRaspLicenseListResponse> DescribeRaspLicenseListOutcome;
                typedef std::future<DescribeRaspLicenseListOutcome> DescribeRaspLicenseListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRaspLicenseListRequest&, DescribeRaspLicenseListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRaspLicenseListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegistryOverviewResponse> DescribeRegistryOverviewOutcome;
                typedef std::future<DescribeRegistryOverviewOutcome> DescribeRegistryOverviewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRegistryOverviewRequest&, DescribeRegistryOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegistryOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegistryRegionListResponse> DescribeRegistryRegionListOutcome;
                typedef std::future<DescribeRegistryRegionListOutcome> DescribeRegistryRegionListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRegistryRegionListRequest&, DescribeRegistryRegionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegistryRegionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRepositoryImageAssetsResponse> DescribeRepositoryImageAssetsOutcome;
                typedef std::future<DescribeRepositoryImageAssetsOutcome> DescribeRepositoryImageAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRepositoryImageAssetsRequest&, DescribeRepositoryImageAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRepositoryImageAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReverseShellSystemPolicyConfigResponse> DescribeReverseShellSystemPolicyConfigOutcome;
                typedef std::future<DescribeReverseShellSystemPolicyConfigOutcome> DescribeReverseShellSystemPolicyConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeReverseShellSystemPolicyConfigRequest&, DescribeReverseShellSystemPolicyConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReverseShellSystemPolicyConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCallRecordResponse> DescribeRiskCallRecordOutcome;
                typedef std::future<DescribeRiskCallRecordOutcome> DescribeRiskCallRecordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCallRecordRequest&, DescribeRiskCallRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCallRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterAssetViewCFGRiskListResponse> DescribeRiskCenterAssetViewCFGRiskListOutcome;
                typedef std::future<DescribeRiskCenterAssetViewCFGRiskListOutcome> DescribeRiskCenterAssetViewCFGRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterAssetViewCFGRiskListRequest&, DescribeRiskCenterAssetViewCFGRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterAssetViewCFGRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterAssetViewPortRiskListResponse> DescribeRiskCenterAssetViewPortRiskListOutcome;
                typedef std::future<DescribeRiskCenterAssetViewPortRiskListOutcome> DescribeRiskCenterAssetViewPortRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterAssetViewPortRiskListRequest&, DescribeRiskCenterAssetViewPortRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterAssetViewPortRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterAssetViewVULRiskListResponse> DescribeRiskCenterAssetViewVULRiskListOutcome;
                typedef std::future<DescribeRiskCenterAssetViewVULRiskListOutcome> DescribeRiskCenterAssetViewVULRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterAssetViewVULRiskListRequest&, DescribeRiskCenterAssetViewVULRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterAssetViewVULRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterAssetViewWeakPasswordRiskListResponse> DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome;
                typedef std::future<DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome> DescribeRiskCenterAssetViewWeakPasswordRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterAssetViewWeakPasswordRiskListRequest&, DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterAssetViewWeakPasswordRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterCFGViewCFGRiskListResponse> DescribeRiskCenterCFGViewCFGRiskListOutcome;
                typedef std::future<DescribeRiskCenterCFGViewCFGRiskListOutcome> DescribeRiskCenterCFGViewCFGRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterCFGViewCFGRiskListRequest&, DescribeRiskCenterCFGViewCFGRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterCFGViewCFGRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterPortViewPortRiskListResponse> DescribeRiskCenterPortViewPortRiskListOutcome;
                typedef std::future<DescribeRiskCenterPortViewPortRiskListOutcome> DescribeRiskCenterPortViewPortRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterPortViewPortRiskListRequest&, DescribeRiskCenterPortViewPortRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterPortViewPortRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterRiskTrendAnalysisResponse> DescribeRiskCenterRiskTrendAnalysisOutcome;
                typedef std::future<DescribeRiskCenterRiskTrendAnalysisOutcome> DescribeRiskCenterRiskTrendAnalysisOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterRiskTrendAnalysisRequest&, DescribeRiskCenterRiskTrendAnalysisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterRiskTrendAnalysisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterServerRiskListResponse> DescribeRiskCenterServerRiskListOutcome;
                typedef std::future<DescribeRiskCenterServerRiskListOutcome> DescribeRiskCenterServerRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterServerRiskListRequest&, DescribeRiskCenterServerRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterServerRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterVULViewVULRiskListResponse> DescribeRiskCenterVULViewVULRiskListOutcome;
                typedef std::future<DescribeRiskCenterVULViewVULRiskListOutcome> DescribeRiskCenterVULViewVULRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterVULViewVULRiskListRequest&, DescribeRiskCenterVULViewVULRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterVULViewVULRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterWebsiteRiskListResponse> DescribeRiskCenterWebsiteRiskListOutcome;
                typedef std::future<DescribeRiskCenterWebsiteRiskListOutcome> DescribeRiskCenterWebsiteRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterWebsiteRiskListRequest&, DescribeRiskCenterWebsiteRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterWebsiteRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskDetailListResponse> DescribeRiskDetailListOutcome;
                typedef std::future<DescribeRiskDetailListOutcome> DescribeRiskDetailListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskDetailListRequest&, DescribeRiskDetailListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskDetailListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskRuleDetailResponse> DescribeRiskRuleDetailOutcome;
                typedef std::future<DescribeRiskRuleDetailOutcome> DescribeRiskRuleDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskRuleDetailRequest&, DescribeRiskRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskRulesResponse> DescribeRiskRulesOutcome;
                typedef std::future<DescribeRiskRulesOutcome> DescribeRiskRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskRulesRequest&, DescribeRiskRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskScanCronConfigResponse> DescribeRiskScanCronConfigOutcome;
                typedef std::future<DescribeRiskScanCronConfigOutcome> DescribeRiskScanCronConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskScanCronConfigRequest&, DescribeRiskScanCronConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskScanCronConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSCFAliasListResponse> DescribeSCFAliasListOutcome;
                typedef std::future<DescribeSCFAliasListOutcome> DescribeSCFAliasListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSCFAliasListRequest&, DescribeSCFAliasListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSCFAliasListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSCFFunctionListResponse> DescribeSCFFunctionListOutcome;
                typedef std::future<DescribeSCFFunctionListOutcome> DescribeSCFFunctionListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSCFFunctionListRequest&, DescribeSCFFunctionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSCFFunctionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSCFFunctionVersionListResponse> DescribeSCFFunctionVersionListOutcome;
                typedef std::future<DescribeSCFFunctionVersionListOutcome> DescribeSCFFunctionVersionListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSCFFunctionVersionListRequest&, DescribeSCFFunctionVersionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSCFFunctionVersionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSCFNamespaceListResponse> DescribeSCFNamespaceListOutcome;
                typedef std::future<DescribeSCFNamespaceListOutcome> DescribeSCFNamespaceListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSCFNamespaceListRequest&, DescribeSCFNamespaceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSCFNamespaceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSandboxACLAlertListResponse> DescribeSandboxACLAlertListOutcome;
                typedef std::future<DescribeSandboxACLAlertListOutcome> DescribeSandboxACLAlertListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSandboxACLAlertListRequest&, DescribeSandboxACLAlertListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSandboxACLAlertListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSandboxACLRuleListResponse> DescribeSandboxACLRuleListOutcome;
                typedef std::future<DescribeSandboxACLRuleListOutcome> DescribeSandboxACLRuleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSandboxACLRuleListRequest&, DescribeSandboxACLRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSandboxACLRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSandboxACLSystemRuleListResponse> DescribeSandboxACLSystemRuleListOutcome;
                typedef std::future<DescribeSandboxACLSystemRuleListOutcome> DescribeSandboxACLSystemRuleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSandboxACLSystemRuleListRequest&, DescribeSandboxACLSystemRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSandboxACLSystemRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSandboxDLPAlertListResponse> DescribeSandboxDLPAlertListOutcome;
                typedef std::future<DescribeSandboxDLPAlertListOutcome> DescribeSandboxDLPAlertListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSandboxDLPAlertListRequest&, DescribeSandboxDLPAlertListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSandboxDLPAlertListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSandboxDLPRuleListResponse> DescribeSandboxDLPRuleListOutcome;
                typedef std::future<DescribeSandboxDLPRuleListOutcome> DescribeSandboxDLPRuleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSandboxDLPRuleListRequest&, DescribeSandboxDLPRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSandboxDLPRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSandboxDLPSystemRuleListResponse> DescribeSandboxDLPSystemRuleListOutcome;
                typedef std::future<DescribeSandboxDLPSystemRuleListOutcome> DescribeSandboxDLPSystemRuleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSandboxDLPSystemRuleListRequest&, DescribeSandboxDLPSystemRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSandboxDLPSystemRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSandboxFileRuleListResponse> DescribeSandboxFileRuleListOutcome;
                typedef std::future<DescribeSandboxFileRuleListOutcome> DescribeSandboxFileRuleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSandboxFileRuleListRequest&, DescribeSandboxFileRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSandboxFileRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSandboxLLMAuditAlertListResponse> DescribeSandboxLLMAuditAlertListOutcome;
                typedef std::future<DescribeSandboxLLMAuditAlertListOutcome> DescribeSandboxLLMAuditAlertListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSandboxLLMAuditAlertListRequest&, DescribeSandboxLLMAuditAlertListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSandboxLLMAuditAlertListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSandboxLLMAuditRuleListResponse> DescribeSandboxLLMAuditRuleListOutcome;
                typedef std::future<DescribeSandboxLLMAuditRuleListOutcome> DescribeSandboxLLMAuditRuleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSandboxLLMAuditRuleListRequest&, DescribeSandboxLLMAuditRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSandboxLLMAuditRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSandboxLLMAuditSystemRuleListResponse> DescribeSandboxLLMAuditSystemRuleListOutcome;
                typedef std::future<DescribeSandboxLLMAuditSystemRuleListOutcome> DescribeSandboxLLMAuditSystemRuleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSandboxLLMAuditSystemRuleListRequest&, DescribeSandboxLLMAuditSystemRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSandboxLLMAuditSystemRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanReportListResponse> DescribeScanReportListOutcome;
                typedef std::future<DescribeScanReportListOutcome> DescribeScanReportListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeScanReportListRequest&, DescribeScanReportListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanReportListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanStatisticResponse> DescribeScanStatisticOutcome;
                typedef std::future<DescribeScanStatisticOutcome> DescribeScanStatisticOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeScanStatisticRequest&, DescribeScanStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanStatisticAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanTaskListResponse> DescribeScanTaskListOutcome;
                typedef std::future<DescribeScanTaskListOutcome> DescribeScanTaskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeScanTaskListRequest&, DescribeScanTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanTaskRecordListResponse> DescribeScanTaskRecordListOutcome;
                typedef std::future<DescribeScanTaskRecordListOutcome> DescribeScanTaskRecordListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeScanTaskRecordListRequest&, DescribeScanTaskRecordListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskRecordListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScfCustomDomainEndpointsResponse> DescribeScfCustomDomainEndpointsOutcome;
                typedef std::future<DescribeScfCustomDomainEndpointsOutcome> DescribeScfCustomDomainEndpointsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeScfCustomDomainEndpointsRequest&, DescribeScfCustomDomainEndpointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScfCustomDomainEndpointsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSearchBugInfoResponse> DescribeSearchBugInfoOutcome;
                typedef std::future<DescribeSearchBugInfoOutcome> DescribeSearchBugInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSearchBugInfoRequest&, DescribeSearchBugInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchBugInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupPolicyResponse> DescribeSecurityGroupPolicyOutcome;
                typedef std::future<DescribeSecurityGroupPolicyOutcome> DescribeSecurityGroupPolicyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSecurityGroupPolicyRequest&, DescribeSecurityGroupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityRiskTrendResponse> DescribeSecurityRiskTrendOutcome;
                typedef std::future<DescribeSecurityRiskTrendOutcome> DescribeSecurityRiskTrendOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSecurityRiskTrendRequest&, DescribeSecurityRiskTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityRiskTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityScoreOverviewResponse> DescribeSecurityScoreOverviewOutcome;
                typedef std::future<DescribeSecurityScoreOverviewOutcome> DescribeSecurityScoreOverviewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSecurityScoreOverviewRequest&, DescribeSecurityScoreOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityScoreOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityScoreRuleResponse> DescribeSecurityScoreRuleOutcome;
                typedef std::future<DescribeSecurityScoreRuleOutcome> DescribeSecurityScoreRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSecurityScoreRuleRequest&, DescribeSecurityScoreRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityScoreRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSkillScanAlertDetailResponse> DescribeSkillScanAlertDetailOutcome;
                typedef std::future<DescribeSkillScanAlertDetailOutcome> DescribeSkillScanAlertDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSkillScanAlertDetailRequest&, DescribeSkillScanAlertDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSkillScanAlertDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSkillScanAlertListResponse> DescribeSkillScanAlertListOutcome;
                typedef std::future<DescribeSkillScanAlertListOutcome> DescribeSkillScanAlertListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSkillScanAlertListRequest&, DescribeSkillScanAlertListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSkillScanAlertListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSkillScanPayInfoResponse> DescribeSkillScanPayInfoOutcome;
                typedef std::future<DescribeSkillScanPayInfoOutcome> DescribeSkillScanPayInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSkillScanPayInfoRequest&, DescribeSkillScanPayInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSkillScanPayInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSkillScanResultResponse> DescribeSkillScanResultOutcome;
                typedef std::future<DescribeSkillScanResultOutcome> DescribeSkillScanResultOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSkillScanResultRequest&, DescribeSkillScanResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSkillScanResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSourceIPAssetResponse> DescribeSourceIPAssetOutcome;
                typedef std::future<DescribeSourceIPAssetOutcome> DescribeSourceIPAssetOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSourceIPAssetRequest&, DescribeSourceIPAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSourceIPAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSourceIPDetailResponse> DescribeSourceIPDetailOutcome;
                typedef std::future<DescribeSourceIPDetailOutcome> DescribeSourceIPDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSourceIPDetailRequest&, DescribeSourceIPDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSourceIPDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubUserInfoResponse> DescribeSubUserInfoOutcome;
                typedef std::future<DescribeSubUserInfoOutcome> DescribeSubUserInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSubUserInfoRequest&, DescribeSubUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubUserInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubnetAssetsResponse> DescribeSubnetAssetsOutcome;
                typedef std::future<DescribeSubnetAssetsOutcome> DescribeSubnetAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSubnetAssetsRequest&, DescribeSubnetAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubnetAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTCRInstanceListResponse> DescribeTCRInstanceListOutcome;
                typedef std::future<DescribeTCRInstanceListOutcome> DescribeTCRInstanceListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeTCRInstanceListRequest&, DescribeTCRInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTCRInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagRuleAssetsResponse> DescribeTagRuleAssetsOutcome;
                typedef std::future<DescribeTagRuleAssetsOutcome> DescribeTagRuleAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeTagRuleAssetsRequest&, DescribeTagRuleAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagRuleAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskLogListResponse> DescribeTaskLogListOutcome;
                typedef std::future<DescribeTaskLogListOutcome> DescribeTaskLogListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeTaskLogListRequest&, DescribeTaskLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskLogURLResponse> DescribeTaskLogURLOutcome;
                typedef std::future<DescribeTaskLogURLOutcome> DescribeTaskLogURLOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeTaskLogURLRequest&, DescribeTaskLogURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskLogURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskPredictCostQuotaResponse> DescribeTaskPredictCostQuotaOutcome;
                typedef std::future<DescribeTaskPredictCostQuotaOutcome> DescribeTaskPredictCostQuotaOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeTaskPredictCostQuotaRequest&, DescribeTaskPredictCostQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskPredictCostQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopAttackInfoResponse> DescribeTopAttackInfoOutcome;
                typedef std::future<DescribeTopAttackInfoOutcome> DescribeTopAttackInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeTopAttackInfoRequest&, DescribeTopAttackInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopAttackInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUebaBehaviorSummaryResponse> DescribeUebaBehaviorSummaryOutcome;
                typedef std::future<DescribeUebaBehaviorSummaryOutcome> DescribeUebaBehaviorSummaryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeUebaBehaviorSummaryRequest&, DescribeUebaBehaviorSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUebaBehaviorSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUebaRuleResponse> DescribeUebaRuleOutcome;
                typedef std::future<DescribeUebaRuleOutcome> DescribeUebaRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeUebaRuleRequest&, DescribeUebaRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUebaRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUebaUserSummaryResponse> DescribeUebaUserSummaryOutcome;
                typedef std::future<DescribeUebaUserSummaryOutcome> DescribeUebaUserSummaryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeUebaUserSummaryRequest&, DescribeUebaUserSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUebaUserSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserAKInfoListResponse> DescribeUserAKInfoListOutcome;
                typedef std::future<DescribeUserAKInfoListOutcome> DescribeUserAKInfoListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeUserAKInfoListRequest&, DescribeUserAKInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserAKInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserCSPMInfoListResponse> DescribeUserCSPMInfoListOutcome;
                typedef std::future<DescribeUserCSPMInfoListOutcome> DescribeUserCSPMInfoListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeUserCSPMInfoListRequest&, DescribeUserCSPMInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserCSPMInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserCallRecordResponse> DescribeUserCallRecordOutcome;
                typedef std::future<DescribeUserCallRecordOutcome> DescribeUserCallRecordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeUserCallRecordRequest&, DescribeUserCallRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserCallRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserDspmInfoListResponse> DescribeUserDspmInfoListOutcome;
                typedef std::future<DescribeUserDspmInfoListOutcome> DescribeUserDspmInfoListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeUserDspmInfoListRequest&, DescribeUserDspmInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserDspmInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserInfoResponse> DescribeUserInfoOutcome;
                typedef std::future<DescribeUserInfoOutcome> DescribeUserInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeUserInfoRequest&, DescribeUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVULListResponse> DescribeVULListOutcome;
                typedef std::future<DescribeVULListOutcome> DescribeVULListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVULListRequest&, DescribeVULListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVULListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVULRiskAdvanceCFGListResponse> DescribeVULRiskAdvanceCFGListOutcome;
                typedef std::future<DescribeVULRiskAdvanceCFGListOutcome> DescribeVULRiskAdvanceCFGListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVULRiskAdvanceCFGListRequest&, DescribeVULRiskAdvanceCFGListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVULRiskAdvanceCFGListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVULRiskDetailResponse> DescribeVULRiskDetailOutcome;
                typedef std::future<DescribeVULRiskDetailOutcome> DescribeVULRiskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVULRiskDetailRequest&, DescribeVULRiskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVULRiskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVdbAndPocInfoResponse> DescribeVdbAndPocInfoOutcome;
                typedef std::future<DescribeVdbAndPocInfoOutcome> DescribeVdbAndPocInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVdbAndPocInfoRequest&, DescribeVdbAndPocInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVdbAndPocInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVoucherEligibilityResponse> DescribeVoucherEligibilityOutcome;
                typedef std::future<DescribeVoucherEligibilityOutcome> DescribeVoucherEligibilityOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVoucherEligibilityRequest&, DescribeVoucherEligibilityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVoucherEligibilityAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcAssetsResponse> DescribeVpcAssetsOutcome;
                typedef std::future<DescribeVpcAssetsOutcome> DescribeVpcAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVpcAssetsRequest&, DescribeVpcAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulComponentRelateHostResponse> DescribeVulComponentRelateHostOutcome;
                typedef std::future<DescribeVulComponentRelateHostOutcome> DescribeVulComponentRelateHostOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulComponentRelateHostRequest&, DescribeVulComponentRelateHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulComponentRelateHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulFixTaskDetailResponse> DescribeVulFixTaskDetailOutcome;
                typedef std::future<DescribeVulFixTaskDetailOutcome> DescribeVulFixTaskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulFixTaskDetailRequest&, DescribeVulFixTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulFixTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulFixTaskListResponse> DescribeVulFixTaskListOutcome;
                typedef std::future<DescribeVulFixTaskListOutcome> DescribeVulFixTaskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulFixTaskListRequest&, DescribeVulFixTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulFixTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulFixableMachineListResponse> DescribeVulFixableMachineListOutcome;
                typedef std::future<DescribeVulFixableMachineListOutcome> DescribeVulFixableMachineListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulFixableMachineListRequest&, DescribeVulFixableMachineListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulFixableMachineListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulFixedHostDetailResponse> DescribeVulFixedHostDetailOutcome;
                typedef std::future<DescribeVulFixedHostDetailOutcome> DescribeVulFixedHostDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulFixedHostDetailRequest&, DescribeVulFixedHostDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulFixedHostDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulFixedListResponse> DescribeVulFixedListOutcome;
                typedef std::future<DescribeVulFixedListOutcome> DescribeVulFixedListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulFixedListRequest&, DescribeVulFixedListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulFixedListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulHostRelateComponentResponse> DescribeVulHostRelateComponentOutcome;
                typedef std::future<DescribeVulHostRelateComponentOutcome> DescribeVulHostRelateComponentOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulHostRelateComponentRequest&, DescribeVulHostRelateComponentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulHostRelateComponentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulIgnoreRuleListResponse> DescribeVulIgnoreRuleListOutcome;
                typedef std::future<DescribeVulIgnoreRuleListOutcome> DescribeVulIgnoreRuleListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulIgnoreRuleListRequest&, DescribeVulIgnoreRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulIgnoreRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulItemListResponse> DescribeVulItemListOutcome;
                typedef std::future<DescribeVulItemListOutcome> DescribeVulItemListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulItemListRequest&, DescribeVulItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulLabelListResponse> DescribeVulLabelListOutcome;
                typedef std::future<DescribeVulLabelListOutcome> DescribeVulLabelListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulLabelListRequest&, DescribeVulLabelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulLabelListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulRiskListResponse> DescribeVulRiskListOutcome;
                typedef std::future<DescribeVulRiskListOutcome> DescribeVulRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulRiskListRequest&, DescribeVulRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulRiskRelateComponentResponse> DescribeVulRiskRelateComponentOutcome;
                typedef std::future<DescribeVulRiskRelateComponentOutcome> DescribeVulRiskRelateComponentOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulRiskRelateComponentRequest&, DescribeVulRiskRelateComponentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulRiskRelateComponentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulRiskRelateHostResponse> DescribeVulRiskRelateHostOutcome;
                typedef std::future<DescribeVulRiskRelateHostOutcome> DescribeVulRiskRelateHostOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulRiskRelateHostRequest&, DescribeVulRiskRelateHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulRiskRelateHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulScanPeriodicResponse> DescribeVulScanPeriodicOutcome;
                typedef std::future<DescribeVulScanPeriodicOutcome> DescribeVulScanPeriodicOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulScanPeriodicRequest&, DescribeVulScanPeriodicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulScanPeriodicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulScanTaskDetailResponse> DescribeVulScanTaskDetailOutcome;
                typedef std::future<DescribeVulScanTaskDetailOutcome> DescribeVulScanTaskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulScanTaskDetailRequest&, DescribeVulScanTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulScanTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulScanTaskListResponse> DescribeVulScanTaskListOutcome;
                typedef std::future<DescribeVulScanTaskListOutcome> DescribeVulScanTaskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulScanTaskListRequest&, DescribeVulScanTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulScanTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulViewVulRiskListResponse> DescribeVulViewVulRiskListOutcome;
                typedef std::future<DescribeVulViewVulRiskListOutcome> DescribeVulViewVulRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulViewVulRiskListRequest&, DescribeVulViewVulRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulViewVulRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebhookPolicyListResponse> DescribeWebhookPolicyListOutcome;
                typedef std::future<DescribeWebhookPolicyListOutcome> DescribeWebhookPolicyListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeWebhookPolicyListRequest&, DescribeWebhookPolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebhookPolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebhookReceiverListResponse> DescribeWebhookReceiverListOutcome;
                typedef std::future<DescribeWebhookReceiverListOutcome> DescribeWebhookReceiverListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeWebhookReceiverListRequest&, DescribeWebhookReceiverListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebhookReceiverListAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableAIScheduleResponse> DisableAIScheduleOutcome;
                typedef std::future<DisableAIScheduleOutcome> DisableAIScheduleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DisableAIScheduleRequest&, DisableAIScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableAIScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadDspmExportLogResponse> DownloadDspmExportLogOutcome;
                typedef std::future<DownloadDspmExportLogOutcome> DownloadDspmExportLogOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DownloadDspmExportLogRequest&, DownloadDspmExportLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadDspmExportLogAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableAIScheduleResponse> EnableAIScheduleOutcome;
                typedef std::future<EnableAIScheduleOutcome> EnableAIScheduleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::EnableAIScheduleRequest&, EnableAIScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableAIScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportCSIPMalwareScanTaskDetailResponse> ExportCSIPMalwareScanTaskDetailOutcome;
                typedef std::future<ExportCSIPMalwareScanTaskDetailOutcome> ExportCSIPMalwareScanTaskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ExportCSIPMalwareScanTaskDetailRequest&, ExportCSIPMalwareScanTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportCSIPMalwareScanTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportClientSettingHostListResponse> ExportClientSettingHostListOutcome;
                typedef std::future<ExportClientSettingHostListOutcome> ExportClientSettingHostListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ExportClientSettingHostListRequest&, ExportClientSettingHostListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportClientSettingHostListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportEDRRulesResponse> ExportEDRRulesOutcome;
                typedef std::future<ExportEDRRulesOutcome> ExportEDRRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ExportEDRRulesRequest&, ExportEDRRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportEDRRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportTasksResponse> ExportTasksOutcome;
                typedef std::future<ExportTasksOutcome> ExportTasksOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ExportTasksRequest&, ExportTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::InstallClusterAgentResponse> InstallClusterAgentOutcome;
                typedef std::future<InstallClusterAgentOutcome> InstallClusterAgentOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::InstallClusterAgentRequest&, InstallClusterAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstallClusterAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::InstallKeySandboxSkillResponse> InstallKeySandboxSkillOutcome;
                typedef std::future<InstallKeySandboxSkillOutcome> InstallKeySandboxSkillOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::InstallKeySandboxSkillRequest&, InstallKeySandboxSkillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstallKeySandboxSkillAsyncHandler;
                typedef Outcome<Core::Error, Model::InstallSandboxPluginResponse> InstallSandboxPluginOutcome;
                typedef std::future<InstallSandboxPluginOutcome> InstallSandboxPluginOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::InstallSandboxPluginRequest&, InstallSandboxPluginOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstallSandboxPluginAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAILinkSettingResponse> ModifyAILinkSettingOutcome;
                typedef std::future<ModifyAILinkSettingOutcome> ModifyAILinkSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAILinkSettingRequest&, ModifyAILinkSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAILinkSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAIScheduleResponse> ModifyAIScheduleOutcome;
                typedef std::future<ModifyAIScheduleOutcome> ModifyAIScheduleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAIScheduleRequest&, ModifyAIScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAIScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAgentConfigSettingResponse> ModifyAgentConfigSettingOutcome;
                typedef std::future<ModifyAgentConfigSettingOutcome> ModifyAgentConfigSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAgentConfigSettingRequest&, ModifyAgentConfigSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAgentConfigSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAgentRunModeResponse> ModifyAgentRunModeOutcome;
                typedef std::future<ModifyAgentRunModeOutcome> ModifyAgentRunModeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAgentRunModeRequest&, ModifyAgentRunModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAgentRunModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAgentRunPolicyResponse> ModifyAgentRunPolicyOutcome;
                typedef std::future<ModifyAgentRunPolicyOutcome> ModifyAgentRunPolicyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAgentRunPolicyRequest&, ModifyAgentRunPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAgentRunPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssetCoreAttributeResponse> ModifyAssetCoreAttributeOutcome;
                typedef std::future<ModifyAssetCoreAttributeOutcome> ModifyAssetCoreAttributeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAssetCoreAttributeRequest&, ModifyAssetCoreAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetCoreAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssetFilterViewResponse> ModifyAssetFilterViewOutcome;
                typedef std::future<ModifyAssetFilterViewOutcome> ModifyAssetFilterViewOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAssetFilterViewRequest&, ModifyAssetFilterViewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetFilterViewAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssetTagResponse> ModifyAssetTagOutcome;
                typedef std::future<ModifyAssetTagOutcome> ModifyAssetTagOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAssetTagRequest&, ModifyAssetTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetTagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssetTagsResponse> ModifyAssetTagsOutcome;
                typedef std::future<ModifyAssetTagsOutcome> ModifyAssetTagsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAssetTagsRequest&, ModifyAssetTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssetTagsByAssetInfoResponse> ModifyAssetTagsByAssetInfoOutcome;
                typedef std::future<ModifyAssetTagsByAssetInfoOutcome> ModifyAssetTagsByAssetInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyAssetTagsByAssetInfoRequest&, ModifyAssetTagsByAssetInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetTagsByAssetInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBanModeResponse> ModifyBanModeOutcome;
                typedef std::future<ModifyBanModeOutcome> ModifyBanModeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyBanModeRequest&, ModifyBanModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBanModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaselinePolicyResponse> ModifyBaselinePolicyOutcome;
                typedef std::future<ModifyBaselinePolicyOutcome> ModifyBaselinePolicyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyBaselinePolicyRequest&, ModifyBaselinePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaselinePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaselinePolicyEnableResponse> ModifyBaselinePolicyEnableOutcome;
                typedef std::future<ModifyBaselinePolicyEnableOutcome> ModifyBaselinePolicyEnableOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyBaselinePolicyEnableRequest&, ModifyBaselinePolicyEnableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaselinePolicyEnableAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaselineSyncConfResponse> ModifyBaselineSyncConfOutcome;
                typedef std::future<ModifyBaselineSyncConfOutcome> ModifyBaselineSyncConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyBaselineSyncConfRequest&, ModifyBaselineSyncConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaselineSyncConfAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaselineUserOtherConfResponse> ModifyBaselineUserOtherConfOutcome;
                typedef std::future<ModifyBaselineUserOtherConfOutcome> ModifyBaselineUserOtherConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyBaselineUserOtherConfRequest&, ModifyBaselineUserOtherConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaselineUserOtherConfAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBaselineUserWeakPasswordConfResponse> ModifyBaselineUserWeakPasswordConfOutcome;
                typedef std::future<ModifyBaselineUserWeakPasswordConfOutcome> ModifyBaselineUserWeakPasswordConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyBaselineUserWeakPasswordConfRequest&, ModifyBaselineUserWeakPasswordConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBaselineUserWeakPasswordConfAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBruteAttackBanStatusResponse> ModifyBruteAttackBanStatusOutcome;
                typedef std::future<ModifyBruteAttackBanStatusOutcome> ModifyBruteAttackBanStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyBruteAttackBanStatusRequest&, ModifyBruteAttackBanStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBruteAttackBanStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBruteAttackRulesResponse> ModifyBruteAttackRulesOutcome;
                typedef std::future<ModifyBruteAttackRulesOutcome> ModifyBruteAttackRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyBruteAttackRulesRequest&, ModifyBruteAttackRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBruteAttackRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCSIPLicenseBindsResponse> ModifyCSIPLicenseBindsOutcome;
                typedef std::future<ModifyCSIPLicenseBindsOutcome> ModifyCSIPLicenseBindsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyCSIPLicenseBindsRequest&, ModifyCSIPLicenseBindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCSIPLicenseBindsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCSIPLicenseUnBindsResponse> ModifyCSIPLicenseUnBindsOutcome;
                typedef std::future<ModifyCSIPLicenseUnBindsOutcome> ModifyCSIPLicenseUnBindsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyCSIPLicenseUnBindsRequest&, ModifyCSIPLicenseUnBindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCSIPLicenseUnBindsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCSIPRaspLicenseBindsResponse> ModifyCSIPRaspLicenseBindsOutcome;
                typedef std::future<ModifyCSIPRaspLicenseBindsOutcome> ModifyCSIPRaspLicenseBindsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyCSIPRaspLicenseBindsRequest&, ModifyCSIPRaspLicenseBindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCSIPRaspLicenseBindsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCSIPRaspLicenseUnBindsResponse> ModifyCSIPRaspLicenseUnBindsOutcome;
                typedef std::future<ModifyCSIPRaspLicenseUnBindsOutcome> ModifyCSIPRaspLicenseUnBindsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyCSIPRaspLicenseUnBindsRequest&, ModifyCSIPRaspLicenseUnBindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCSIPRaspLicenseUnBindsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterDefendStatusResponse> ModifyClusterDefendStatusOutcome;
                typedef std::future<ModifyClusterDefendStatusOutcome> ModifyClusterDefendStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyClusterDefendStatusRequest&, ModifyClusterDefendStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterDefendStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCosAuditBucketMonitorStatusResponse> ModifyCosAuditBucketMonitorStatusOutcome;
                typedef std::future<ModifyCosAuditBucketMonitorStatusOutcome> ModifyCosAuditBucketMonitorStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyCosAuditBucketMonitorStatusRequest&, ModifyCosAuditBucketMonitorStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCosAuditBucketMonitorStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCspmShardConfigResponse> ModifyCspmShardConfigOutcome;
                typedef std::future<ModifyCspmShardConfigOutcome> ModifyCspmShardConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyCspmShardConfigRequest&, ModifyCspmShardConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCspmShardConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmAccessRecordResponse> ModifyDspmAccessRecordOutcome;
                typedef std::future<ModifyDspmAccessRecordOutcome> ModifyDspmAccessRecordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmAccessRecordRequest&, ModifyDspmAccessRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmAccessRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmApplyingIdentifyComplianceGroupResponse> ModifyDspmApplyingIdentifyComplianceGroupOutcome;
                typedef std::future<ModifyDspmApplyingIdentifyComplianceGroupOutcome> ModifyDspmApplyingIdentifyComplianceGroupOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmApplyingIdentifyComplianceGroupRequest&, ModifyDspmApplyingIdentifyComplianceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmApplyingIdentifyComplianceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmApproveStatusResponse> ModifyDspmApproveStatusOutcome;
                typedef std::future<ModifyDspmApproveStatusOutcome> ModifyDspmApproveStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmApproveStatusRequest&, ModifyDspmApproveStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmApproveStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmAssetAccountResponse> ModifyDspmAssetAccountOutcome;
                typedef std::future<ModifyDspmAssetAccountOutcome> ModifyDspmAssetAccountOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmAssetAccountRequest&, ModifyDspmAssetAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmAssetAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmAssetAccountPrivilegesResponse> ModifyDspmAssetAccountPrivilegesOutcome;
                typedef std::future<ModifyDspmAssetAccountPrivilegesOutcome> ModifyDspmAssetAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmAssetAccountPrivilegesRequest&, ModifyDspmAssetAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmAssetAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmAssetDataScanTaskResponse> ModifyDspmAssetDataScanTaskOutcome;
                typedef std::future<ModifyDspmAssetDataScanTaskOutcome> ModifyDspmAssetDataScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmAssetDataScanTaskRequest&, ModifyDspmAssetDataScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmAssetDataScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmAssetDataScanTaskStatusResponse> ModifyDspmAssetDataScanTaskStatusOutcome;
                typedef std::future<ModifyDspmAssetDataScanTaskStatusOutcome> ModifyDspmAssetDataScanTaskStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmAssetDataScanTaskStatusRequest&, ModifyDspmAssetDataScanTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmAssetDataScanTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmAssetLogDeliverySwitchResponse> ModifyDspmAssetLogDeliverySwitchOutcome;
                typedef std::future<ModifyDspmAssetLogDeliverySwitchOutcome> ModifyDspmAssetLogDeliverySwitchOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmAssetLogDeliverySwitchRequest&, ModifyDspmAssetLogDeliverySwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmAssetLogDeliverySwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmAssetSecurityAnalysisSwitchResponse> ModifyDspmAssetSecurityAnalysisSwitchOutcome;
                typedef std::future<ModifyDspmAssetSecurityAnalysisSwitchOutcome> ModifyDspmAssetSecurityAnalysisSwitchOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmAssetSecurityAnalysisSwitchRequest&, ModifyDspmAssetSecurityAnalysisSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmAssetSecurityAnalysisSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmAuditFilterStrategyResponse> ModifyDspmAuditFilterStrategyOutcome;
                typedef std::future<ModifyDspmAuditFilterStrategyOutcome> ModifyDspmAuditFilterStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmAuditFilterStrategyRequest&, ModifyDspmAuditFilterStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmAuditFilterStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmBackupSettingResponse> ModifyDspmBackupSettingOutcome;
                typedef std::future<ModifyDspmBackupSettingOutcome> ModifyDspmBackupSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmBackupSettingRequest&, ModifyDspmBackupSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmBackupSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmCkafkaSaveResponse> ModifyDspmCkafkaSaveOutcome;
                typedef std::future<ModifyDspmCkafkaSaveOutcome> ModifyDspmCkafkaSaveOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmCkafkaSaveRequest&, ModifyDspmCkafkaSaveOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmCkafkaSaveAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmCkafkaStartResponse> ModifyDspmCkafkaStartOutcome;
                typedef std::future<ModifyDspmCkafkaStartOutcome> ModifyDspmCkafkaStartOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmCkafkaStartRequest&, ModifyDspmCkafkaStartOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmCkafkaStartAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmCkafkaStopResponse> ModifyDspmCkafkaStopOutcome;
                typedef std::future<ModifyDspmCkafkaStopOutcome> ModifyDspmCkafkaStopOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmCkafkaStopRequest&, ModifyDspmCkafkaStopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmCkafkaStopAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIdentifyCategoryResponse> ModifyDspmIdentifyCategoryOutcome;
                typedef std::future<ModifyDspmIdentifyCategoryOutcome> ModifyDspmIdentifyCategoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIdentifyCategoryRequest&, ModifyDspmIdentifyCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIdentifyCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIdentifyComplianceGroupResponse> ModifyDspmIdentifyComplianceGroupOutcome;
                typedef std::future<ModifyDspmIdentifyComplianceGroupOutcome> ModifyDspmIdentifyComplianceGroupOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIdentifyComplianceGroupRequest&, ModifyDspmIdentifyComplianceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIdentifyComplianceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIdentifyComplianceGroupStatusResponse> ModifyDspmIdentifyComplianceGroupStatusOutcome;
                typedef std::future<ModifyDspmIdentifyComplianceGroupStatusOutcome> ModifyDspmIdentifyComplianceGroupStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIdentifyComplianceGroupStatusRequest&, ModifyDspmIdentifyComplianceGroupStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIdentifyComplianceGroupStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIdentifyComplianceRuleLevelInfoResponse> ModifyDspmIdentifyComplianceRuleLevelInfoOutcome;
                typedef std::future<ModifyDspmIdentifyComplianceRuleLevelInfoOutcome> ModifyDspmIdentifyComplianceRuleLevelInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIdentifyComplianceRuleLevelInfoRequest&, ModifyDspmIdentifyComplianceRuleLevelInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIdentifyComplianceRuleLevelInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIdentifyInfoResponse> ModifyDspmIdentifyInfoOutcome;
                typedef std::future<ModifyDspmIdentifyInfoOutcome> ModifyDspmIdentifyInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIdentifyInfoRequest&, ModifyDspmIdentifyInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIdentifyInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIdentifyLevelGroupResponse> ModifyDspmIdentifyLevelGroupOutcome;
                typedef std::future<ModifyDspmIdentifyLevelGroupOutcome> ModifyDspmIdentifyLevelGroupOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIdentifyLevelGroupRequest&, ModifyDspmIdentifyLevelGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIdentifyLevelGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIdentifyLevelItemResponse> ModifyDspmIdentifyLevelItemOutcome;
                typedef std::future<ModifyDspmIdentifyLevelItemOutcome> ModifyDspmIdentifyLevelItemOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIdentifyLevelItemRequest&, ModifyDspmIdentifyLevelItemOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIdentifyLevelItemAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIdentifyRuleResponse> ModifyDspmIdentifyRuleOutcome;
                typedef std::future<ModifyDspmIdentifyRuleOutcome> ModifyDspmIdentifyRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIdentifyRuleRequest&, ModifyDspmIdentifyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIdentifyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIdentifyRuleStatusResponse> ModifyDspmIdentifyRuleStatusOutcome;
                typedef std::future<ModifyDspmIdentifyRuleStatusOutcome> ModifyDspmIdentifyRuleStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIdentifyRuleStatusRequest&, ModifyDspmIdentifyRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIdentifyRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmIpInfoResponse> ModifyDspmIpInfoOutcome;
                typedef std::future<ModifyDspmIpInfoOutcome> ModifyDspmIpInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmIpInfoRequest&, ModifyDspmIpInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmIpInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmLogDeliveryTypeResponse> ModifyDspmLogDeliveryTypeOutcome;
                typedef std::future<ModifyDspmLogDeliveryTypeOutcome> ModifyDspmLogDeliveryTypeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmLogDeliveryTypeRequest&, ModifyDspmLogDeliveryTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmLogDeliveryTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmPersonalIdentifyResponse> ModifyDspmPersonalIdentifyOutcome;
                typedef std::future<ModifyDspmPersonalIdentifyOutcome> ModifyDspmPersonalIdentifyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmPersonalIdentifyRequest&, ModifyDspmPersonalIdentifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmPersonalIdentifyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmRestoreLogTaskResponse> ModifyDspmRestoreLogTaskOutcome;
                typedef std::future<ModifyDspmRestoreLogTaskOutcome> ModifyDspmRestoreLogTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmRestoreLogTaskRequest&, ModifyDspmRestoreLogTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmRestoreLogTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmRiskInfoResponse> ModifyDspmRiskInfoOutcome;
                typedef std::future<ModifyDspmRiskInfoOutcome> ModifyDspmRiskInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmRiskInfoRequest&, ModifyDspmRiskInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmRiskInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmRiskStrategyResponse> ModifyDspmRiskStrategyOutcome;
                typedef std::future<ModifyDspmRiskStrategyOutcome> ModifyDspmRiskStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmRiskStrategyRequest&, ModifyDspmRiskStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmRiskStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDspmWhitelistStrategyResponse> ModifyDspmWhitelistStrategyOutcome;
                typedef std::future<ModifyDspmWhitelistStrategyOutcome> ModifyDspmWhitelistStrategyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyDspmWhitelistStrategyRequest&, ModifyDspmWhitelistStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDspmWhitelistStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEDRRuleResponse> ModifyEDRRuleOutcome;
                typedef std::future<ModifyEDRRuleOutcome> ModifyEDRRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyEDRRuleRequest&, ModifyEDRRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEDRRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEDRRuleStatusResponse> ModifyEDRRuleStatusOutcome;
                typedef std::future<ModifyEDRRuleStatusOutcome> ModifyEDRRuleStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyEDRRuleStatusRequest&, ModifyEDRRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEDRRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEDRRulesActionResponse> ModifyEDRRulesActionOutcome;
                typedef std::future<ModifyEDRRulesActionOutcome> ModifyEDRRulesActionOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyEDRRulesActionRequest&, ModifyEDRRulesActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEDRRulesActionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdrAlertIsolationResponse> ModifyEdrAlertIsolationOutcome;
                typedef std::future<ModifyEdrAlertIsolationOutcome> ModifyEdrAlertIsolationOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyEdrAlertIsolationRequest&, ModifyEdrAlertIsolationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdrAlertIsolationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdrAlertPermanentIgnoreResponse> ModifyEdrAlertPermanentIgnoreOutcome;
                typedef std::future<ModifyEdrAlertPermanentIgnoreOutcome> ModifyEdrAlertPermanentIgnoreOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyEdrAlertPermanentIgnoreRequest&, ModifyEdrAlertPermanentIgnoreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdrAlertPermanentIgnoreAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdrAlertStatusResponse> ModifyEdrAlertStatusOutcome;
                typedef std::future<ModifyEdrAlertStatusOutcome> ModifyEdrAlertStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyEdrAlertStatusRequest&, ModifyEdrAlertStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdrAlertStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdrExcludeNetworkSegmentsResponse> ModifyEdrExcludeNetworkSegmentsOutcome;
                typedef std::future<ModifyEdrExcludeNetworkSegmentsOutcome> ModifyEdrExcludeNetworkSegmentsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyEdrExcludeNetworkSegmentsRequest&, ModifyEdrExcludeNetworkSegmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdrExcludeNetworkSegmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdrLogCollectPathResponse> ModifyEdrLogCollectPathOutcome;
                typedef std::future<ModifyEdrLogCollectPathOutcome> ModifyEdrLogCollectPathOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyEdrLogCollectPathRequest&, ModifyEdrLogCollectPathOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdrLogCollectPathAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyExposureAutoTagRuleResponse> ModifyExposureAutoTagRuleOutcome;
                typedef std::future<ModifyExposureAutoTagRuleOutcome> ModifyExposureAutoTagRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyExposureAutoTagRuleRequest&, ModifyExposureAutoTagRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExposureAutoTagRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyExposureAutoTagRuleStatusResponse> ModifyExposureAutoTagRuleStatusOutcome;
                typedef std::future<ModifyExposureAutoTagRuleStatusOutcome> ModifyExposureAutoTagRuleStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyExposureAutoTagRuleStatusRequest&, ModifyExposureAutoTagRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExposureAutoTagRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyExposureTagResponse> ModifyExposureTagOutcome;
                typedef std::future<ModifyExposureTagOutcome> ModifyExposureTagOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyExposureTagRequest&, ModifyExposureTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExposureTagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIaCTokenPeriodResponse> ModifyIaCTokenPeriodOutcome;
                typedef std::future<ModifyIaCTokenPeriodOutcome> ModifyIaCTokenPeriodOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyIaCTokenPeriodRequest&, ModifyIaCTokenPeriodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIaCTokenPeriodAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageRegistryResponse> ModifyImageRegistryOutcome;
                typedef std::future<ModifyImageRegistryOutcome> ModifyImageRegistryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyImageRegistryRequest&, ModifyImageRegistryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageRegistryAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageRegistryTimedScanTaskConfigResponse> ModifyImageRegistryTimedScanTaskConfigOutcome;
                typedef std::future<ModifyImageRegistryTimedScanTaskConfigOutcome> ModifyImageRegistryTimedScanTaskConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyImageRegistryTimedScanTaskConfigRequest&, ModifyImageRegistryTimedScanTaskConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageRegistryTimedScanTaskConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageSensitiveWhitelistResponse> ModifyImageSensitiveWhitelistOutcome;
                typedef std::future<ModifyImageSensitiveWhitelistOutcome> ModifyImageSensitiveWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyImageSensitiveWhitelistRequest&, ModifyImageSensitiveWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageSensitiveWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageVirusWhitelistResponse> ModifyImageVirusWhitelistOutcome;
                typedef std::future<ModifyImageVirusWhitelistOutcome> ModifyImageVirusWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyImageVirusWhitelistRequest&, ModifyImageVirusWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageVirusWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageVulWhitelistResponse> ModifyImageVulWhitelistOutcome;
                typedef std::future<ModifyImageVulWhitelistOutcome> ModifyImageVulWhitelistOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyImageVulWhitelistRequest&, ModifyImageVulWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageVulWhitelistAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoginWhiteRecordResponse> ModifyLoginWhiteRecordOutcome;
                typedef std::future<ModifyLoginWhiteRecordOutcome> ModifyLoginWhiteRecordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyLoginWhiteRecordRequest&, ModifyLoginWhiteRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoginWhiteRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMachineAutoClearConfigResponse> ModifyMachineAutoClearConfigOutcome;
                typedef std::future<ModifyMachineAutoClearConfigOutcome> ModifyMachineAutoClearConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyMachineAutoClearConfigRequest&, ModifyMachineAutoClearConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMachineAutoClearConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMachineRemarkResponse> ModifyMachineRemarkOutcome;
                typedef std::future<ModifyMachineRemarkOutcome> ModifyMachineRemarkOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyMachineRemarkRequest&, ModifyMachineRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMachineRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMachinesLoginTypeResponse> ModifyMachinesLoginTypeOutcome;
                typedef std::future<ModifyMachinesLoginTypeOutcome> ModifyMachinesLoginTypeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyMachinesLoginTypeRequest&, ModifyMachinesLoginTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMachinesLoginTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMalwareTimingScanSettingsResponse> ModifyMalwareTimingScanSettingsOutcome;
                typedef std::future<ModifyMalwareTimingScanSettingsOutcome> ModifyMalwareTimingScanSettingsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyMalwareTimingScanSettingsRequest&, ModifyMalwareTimingScanSettingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMalwareTimingScanSettingsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNFSScanConfResponse> ModifyNFSScanConfOutcome;
                typedef std::future<ModifyNFSScanConfOutcome> ModifyNFSScanConfOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNFSScanConfRequest&, ModifyNFSScanConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNFSScanConfAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNFSScanHostResponse> ModifyNFSScanHostOutcome;
                typedef std::future<ModifyNFSScanHostOutcome> ModifyNFSScanHostOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNFSScanHostRequest&, ModifyNFSScanHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNFSScanHostAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetAttackSettingResponse> ModifyNetAttackSettingOutcome;
                typedef std::future<ModifyNetAttackSettingOutcome> ModifyNetAttackSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNetAttackSettingRequest&, ModifyNetAttackSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetAttackSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotifyAgentOfflineDurationResponse> ModifyNotifyAgentOfflineDurationOutcome;
                typedef std::future<ModifyNotifyAgentOfflineDurationOutcome> ModifyNotifyAgentOfflineDurationOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNotifyAgentOfflineDurationRequest&, ModifyNotifyAgentOfflineDurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotifyAgentOfflineDurationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotifyAssetConfigResponse> ModifyNotifyAssetConfigOutcome;
                typedef std::future<ModifyNotifyAssetConfigOutcome> ModifyNotifyAssetConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNotifyAssetConfigRequest&, ModifyNotifyAssetConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotifyAssetConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotifyMemberResponse> ModifyNotifyMemberOutcome;
                typedef std::future<ModifyNotifyMemberOutcome> ModifyNotifyMemberOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNotifyMemberRequest&, ModifyNotifyMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotifyMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotifySettingResponse> ModifyNotifySettingOutcome;
                typedef std::future<ModifyNotifySettingOutcome> ModifyNotifySettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNotifySettingRequest&, ModifyNotifySettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotifySettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotifySettingAkResponse> ModifyNotifySettingAkOutcome;
                typedef std::future<ModifyNotifySettingAkOutcome> ModifyNotifySettingAkOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNotifySettingAkRequest&, ModifyNotifySettingAkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotifySettingAkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNotifySettingAlertResponse> ModifyNotifySettingAlertOutcome;
                typedef std::future<ModifyNotifySettingAlertOutcome> ModifyNotifySettingAlertOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyNotifySettingAlertRequest&, ModifyNotifySettingAlertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNotifySettingAlertAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOrganizationAccountStatusResponse> ModifyOrganizationAccountStatusOutcome;
                typedef std::future<ModifyOrganizationAccountStatusOutcome> ModifyOrganizationAccountStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyOrganizationAccountStatusRequest&, ModifyOrganizationAccountStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOrganizationAccountStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPayConfigResponse> ModifyPayConfigOutcome;
                typedef std::future<ModifyPayConfigOutcome> ModifyPayConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyPayConfigRequest&, ModifyPayConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPayConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProtectionSettingResponse> ModifyProtectionSettingOutcome;
                typedef std::future<ModifyProtectionSettingOutcome> ModifyProtectionSettingOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyProtectionSettingRequest&, ModifyProtectionSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProtectionSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRaspLicenseBindsResponse> ModifyRaspLicenseBindsOutcome;
                typedef std::future<ModifyRaspLicenseBindsOutcome> ModifyRaspLicenseBindsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyRaspLicenseBindsRequest&, ModifyRaspLicenseBindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRaspLicenseBindsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyReverseShellSystemPolicyConfigResponse> ModifyReverseShellSystemPolicyConfigOutcome;
                typedef std::future<ModifyReverseShellSystemPolicyConfigOutcome> ModifyReverseShellSystemPolicyConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyReverseShellSystemPolicyConfigRequest&, ModifyReverseShellSystemPolicyConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyReverseShellSystemPolicyConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRiskCenterRiskStatusResponse> ModifyRiskCenterRiskStatusOutcome;
                typedef std::future<ModifyRiskCenterRiskStatusOutcome> ModifyRiskCenterRiskStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyRiskCenterRiskStatusRequest&, ModifyRiskCenterRiskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskCenterRiskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRiskCenterScanTaskResponse> ModifyRiskCenterScanTaskOutcome;
                typedef std::future<ModifyRiskCenterScanTaskOutcome> ModifyRiskCenterScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyRiskCenterScanTaskRequest&, ModifyRiskCenterScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskCenterScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRiskScanCronConfigResponse> ModifyRiskScanCronConfigOutcome;
                typedef std::future<ModifyRiskScanCronConfigOutcome> ModifyRiskScanCronConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyRiskScanCronConfigRequest&, ModifyRiskScanCronConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskScanCronConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySandboxACLRuleResponse> ModifySandboxACLRuleOutcome;
                typedef std::future<ModifySandboxACLRuleOutcome> ModifySandboxACLRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifySandboxACLRuleRequest&, ModifySandboxACLRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySandboxACLRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySandboxACLRuleStatusResponse> ModifySandboxACLRuleStatusOutcome;
                typedef std::future<ModifySandboxACLRuleStatusOutcome> ModifySandboxACLRuleStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifySandboxACLRuleStatusRequest&, ModifySandboxACLRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySandboxACLRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySandboxAlertStatusResponse> ModifySandboxAlertStatusOutcome;
                typedef std::future<ModifySandboxAlertStatusOutcome> ModifySandboxAlertStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifySandboxAlertStatusRequest&, ModifySandboxAlertStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySandboxAlertStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySandboxDLPRuleResponse> ModifySandboxDLPRuleOutcome;
                typedef std::future<ModifySandboxDLPRuleOutcome> ModifySandboxDLPRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifySandboxDLPRuleRequest&, ModifySandboxDLPRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySandboxDLPRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySandboxDLPRuleStatusResponse> ModifySandboxDLPRuleStatusOutcome;
                typedef std::future<ModifySandboxDLPRuleStatusOutcome> ModifySandboxDLPRuleStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifySandboxDLPRuleStatusRequest&, ModifySandboxDLPRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySandboxDLPRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySandboxFileRuleResponse> ModifySandboxFileRuleOutcome;
                typedef std::future<ModifySandboxFileRuleOutcome> ModifySandboxFileRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifySandboxFileRuleRequest&, ModifySandboxFileRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySandboxFileRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySandboxFileRuleStatusResponse> ModifySandboxFileRuleStatusOutcome;
                typedef std::future<ModifySandboxFileRuleStatusOutcome> ModifySandboxFileRuleStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifySandboxFileRuleStatusRequest&, ModifySandboxFileRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySandboxFileRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySandboxLLMAuditRuleResponse> ModifySandboxLLMAuditRuleOutcome;
                typedef std::future<ModifySandboxLLMAuditRuleOutcome> ModifySandboxLLMAuditRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifySandboxLLMAuditRuleRequest&, ModifySandboxLLMAuditRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySandboxLLMAuditRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySandboxLLMAuditRuleStatusResponse> ModifySandboxLLMAuditRuleStatusOutcome;
                typedef std::future<ModifySandboxLLMAuditRuleStatusOutcome> ModifySandboxLLMAuditRuleStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifySandboxLLMAuditRuleStatusRequest&, ModifySandboxLLMAuditRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySandboxLLMAuditRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityScoreRuleResponse> ModifySecurityScoreRuleOutcome;
                typedef std::future<ModifySecurityScoreRuleOutcome> ModifySecurityScoreRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifySecurityScoreRuleRequest&, ModifySecurityScoreRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityScoreRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyShareUserAKResponse> ModifyShareUserAKOutcome;
                typedef std::future<ModifyShareUserAKOutcome> ModifyShareUserAKOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyShareUserAKRequest&, ModifyShareUserAKOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyShareUserAKAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyShareUserCSPMResponse> ModifyShareUserCSPMOutcome;
                typedef std::future<ModifyShareUserCSPMOutcome> ModifyShareUserCSPMOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyShareUserCSPMRequest&, ModifyShareUserCSPMOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyShareUserCSPMAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyShareUserDspmResponse> ModifyShareUserDspmOutcome;
                typedef std::future<ModifyShareUserDspmOutcome> ModifyShareUserDspmOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyShareUserDspmRequest&, ModifyShareUserDspmOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyShareUserDspmAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySkillScanAlertStatusResponse> ModifySkillScanAlertStatusOutcome;
                typedef std::future<ModifySkillScanAlertStatusOutcome> ModifySkillScanAlertStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifySkillScanAlertStatusRequest&, ModifySkillScanAlertStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySkillScanAlertStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUebaRuleSwitchResponse> ModifyUebaRuleSwitchOutcome;
                typedef std::future<ModifyUebaRuleSwitchOutcome> ModifyUebaRuleSwitchOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyUebaRuleSwitchRequest&, ModifyUebaRuleSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUebaRuleSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVulScanPeriodicResponse> ModifyVulScanPeriodicOutcome;
                typedef std::future<ModifyVulScanPeriodicOutcome> ModifyVulScanPeriodicOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyVulScanPeriodicRequest&, ModifyVulScanPeriodicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulScanPeriodicAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVulWhitelistConfigResponse> ModifyVulWhitelistConfigOutcome;
                typedef std::future<ModifyVulWhitelistConfigOutcome> ModifyVulWhitelistConfigOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyVulWhitelistConfigRequest&, ModifyVulWhitelistConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulWhitelistConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVulWhitelistSwitchResponse> ModifyVulWhitelistSwitchOutcome;
                typedef std::future<ModifyVulWhitelistSwitchOutcome> ModifyVulWhitelistSwitchOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyVulWhitelistSwitchRequest&, ModifyVulWhitelistSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVulWhitelistSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebhookPolicyResponse> ModifyWebhookPolicyOutcome;
                typedef std::future<ModifyWebhookPolicyOutcome> ModifyWebhookPolicyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyWebhookPolicyRequest&, ModifyWebhookPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebhookPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebhookPolicyStatusResponse> ModifyWebhookPolicyStatusOutcome;
                typedef std::future<ModifyWebhookPolicyStatusOutcome> ModifyWebhookPolicyStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyWebhookPolicyStatusRequest&, ModifyWebhookPolicyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebhookPolicyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebhookReceiverResponse> ModifyWebhookReceiverOutcome;
                typedef std::future<ModifyWebhookReceiverOutcome> ModifyWebhookReceiverOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyWebhookReceiverRequest&, ModifyWebhookReceiverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebhookReceiverAsyncHandler;
                typedef Outcome<Core::Error, Model::OperateRiskResponse> OperateRiskOutcome;
                typedef std::future<OperateRiskOutcome> OperateRiskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::OperateRiskRequest&, OperateRiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OperateRiskAsyncHandler;
                typedef Outcome<Core::Error, Model::OperateRiskRulePolicyResponse> OperateRiskRulePolicyOutcome;
                typedef std::future<OperateRiskRulePolicyOutcome> OperateRiskRulePolicyOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::OperateRiskRulePolicyRequest&, OperateRiskRulePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OperateRiskRulePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetDspmAssetAccountPasswordResponse> ResetDspmAssetAccountPasswordOutcome;
                typedef std::future<ResetDspmAssetAccountPasswordOutcome> ResetDspmAssetAccountPasswordOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ResetDspmAssetAccountPasswordRequest&, ResetDspmAssetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetDspmAssetAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::RetryDspmExportLogResponse> RetryDspmExportLogOutcome;
                typedef std::future<RetryDspmExportLogOutcome> RetryDspmExportLogOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::RetryDspmExportLogRequest&, RetryDspmExportLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryDspmExportLogAsyncHandler;
                typedef Outcome<Core::Error, Model::RevertDspmAssetAccountResponse> RevertDspmAssetAccountOutcome;
                typedef std::future<RevertDspmAssetAccountOutcome> RevertDspmAssetAccountOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::RevertDspmAssetAccountRequest&, RevertDspmAssetAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevertDspmAssetAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanBaselineAssetItemListResponse> ScanBaselineAssetItemListOutcome;
                typedef std::future<ScanBaselineAssetItemListOutcome> ScanBaselineAssetItemListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ScanBaselineAssetItemListRequest&, ScanBaselineAssetItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanBaselineAssetItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanBaselineItemListResponse> ScanBaselineItemListOutcome;
                typedef std::future<ScanBaselineItemListOutcome> ScanBaselineItemListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ScanBaselineItemListRequest&, ScanBaselineItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanBaselineItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanBaselinePolicyListResponse> ScanBaselinePolicyListOutcome;
                typedef std::future<ScanBaselinePolicyListOutcome> ScanBaselinePolicyListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ScanBaselinePolicyListRequest&, ScanBaselinePolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanBaselinePolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanBaselineRiskListResponse> ScanBaselineRiskListOutcome;
                typedef std::future<ScanBaselineRiskListOutcome> ScanBaselineRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ScanBaselineRiskListRequest&, ScanBaselineRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanBaselineRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanCSIPTaskAgainResponse> ScanCSIPTaskAgainOutcome;
                typedef std::future<ScanCSIPTaskAgainOutcome> ScanCSIPTaskAgainOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ScanCSIPTaskAgainRequest&, ScanCSIPTaskAgainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanCSIPTaskAgainAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanEDRTaskAgainResponse> ScanEDRTaskAgainOutcome;
                typedef std::future<ScanEDRTaskAgainOutcome> ScanEDRTaskAgainOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ScanEDRTaskAgainRequest&, ScanEDRTaskAgainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanEDRTaskAgainAsyncHandler;
                typedef Outcome<Core::Error, Model::SendDspmAssetLoginSmsCodeResponse> SendDspmAssetLoginSmsCodeOutcome;
                typedef std::future<SendDspmAssetLoginSmsCodeOutcome> SendDspmAssetLoginSmsCodeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::SendDspmAssetLoginSmsCodeRequest&, SendDspmAssetLoginSmsCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendDspmAssetLoginSmsCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::SendDspmCkafkaTestResponse> SendDspmCkafkaTestOutcome;
                typedef std::future<SendDspmCkafkaTestOutcome> SendDspmCkafkaTestOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::SendDspmCkafkaTestRequest&, SendDspmCkafkaTestOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendDspmCkafkaTestAsyncHandler;
                typedef Outcome<Core::Error, Model::StartOrModifyPreventUninstallResponse> StartOrModifyPreventUninstallOutcome;
                typedef std::future<StartOrModifyPreventUninstallOutcome> StartOrModifyPreventUninstallOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StartOrModifyPreventUninstallRequest&, StartOrModifyPreventUninstallOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartOrModifyPreventUninstallAsyncHandler;
                typedef Outcome<Core::Error, Model::StartOrModifyProcessDaemonResponse> StartOrModifyProcessDaemonOutcome;
                typedef std::future<StartOrModifyProcessDaemonOutcome> StartOrModifyProcessDaemonOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StartOrModifyProcessDaemonRequest&, StartOrModifyProcessDaemonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartOrModifyProcessDaemonAsyncHandler;
                typedef Outcome<Core::Error, Model::StopBaselineScanTaskResponse> StopBaselineScanTaskOutcome;
                typedef std::future<StopBaselineScanTaskOutcome> StopBaselineScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StopBaselineScanTaskRequest&, StopBaselineScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopBaselineScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopCSIPManualMalwareScanResponse> StopCSIPManualMalwareScanOutcome;
                typedef std::future<StopCSIPManualMalwareScanOutcome> StopCSIPManualMalwareScanOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StopCSIPManualMalwareScanRequest&, StopCSIPManualMalwareScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopCSIPManualMalwareScanAsyncHandler;
                typedef Outcome<Core::Error, Model::StopEDRScanTaskResponse> StopEDRScanTaskOutcome;
                typedef std::future<StopEDRScanTaskOutcome> StopEDRScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StopEDRScanTaskRequest&, StopEDRScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopEDRScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopImageRegistryScanTaskResponse> StopImageRegistryScanTaskOutcome;
                typedef std::future<StopImageRegistryScanTaskOutcome> StopImageRegistryScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StopImageRegistryScanTaskRequest&, StopImageRegistryScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopImageRegistryScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopPreventUninstallResponse> StopPreventUninstallOutcome;
                typedef std::future<StopPreventUninstallOutcome> StopPreventUninstallOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StopPreventUninstallRequest&, StopPreventUninstallOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopPreventUninstallAsyncHandler;
                typedef Outcome<Core::Error, Model::StopProcessDaemonResponse> StopProcessDaemonOutcome;
                typedef std::future<StopProcessDaemonOutcome> StopProcessDaemonOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StopProcessDaemonRequest&, StopProcessDaemonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopProcessDaemonAsyncHandler;
                typedef Outcome<Core::Error, Model::StopRiskCenterTaskResponse> StopRiskCenterTaskOutcome;
                typedef std::future<StopRiskCenterTaskOutcome> StopRiskCenterTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StopRiskCenterTaskRequest&, StopRiskCenterTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopRiskCenterTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::StopVulScanTaskResponse> StopVulScanTaskOutcome;
                typedef std::future<StopVulScanTaskOutcome> StopVulScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StopVulScanTaskRequest&, StopVulScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopVulScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncDspmAssetsResponse> SyncDspmAssetsOutcome;
                typedef std::future<SyncDspmAssetsOutcome> SyncDspmAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::SyncDspmAssetsRequest&, SyncDspmAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncDspmAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncDspmUsersResponse> SyncDspmUsersOutcome;
                typedef std::future<SyncDspmUsersOutcome> SyncDspmUsersOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::SyncDspmUsersRequest&, SyncDspmUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncDspmUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncImageRegistryResponse> SyncImageRegistryOutcome;
                typedef std::future<SyncImageRegistryOutcome> SyncImageRegistryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::SyncImageRegistryRequest&, SyncImageRegistryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncImageRegistryAsyncHandler;
                typedef Outcome<Core::Error, Model::TestWebhookReceiverResponse> TestWebhookReceiverOutcome;
                typedef std::future<TestWebhookReceiverOutcome> TestWebhookReceiverOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::TestWebhookReceiverRequest&, TestWebhookReceiverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TestWebhookReceiverAsyncHandler;
                typedef Outcome<Core::Error, Model::UninstallClusterAgentResponse> UninstallClusterAgentOutcome;
                typedef std::future<UninstallClusterAgentOutcome> UninstallClusterAgentOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::UninstallClusterAgentRequest&, UninstallClusterAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UninstallClusterAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::UninstallKeySandboxSkillResponse> UninstallKeySandboxSkillOutcome;
                typedef std::future<UninstallKeySandboxSkillOutcome> UninstallKeySandboxSkillOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::UninstallKeySandboxSkillRequest&, UninstallKeySandboxSkillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UninstallKeySandboxSkillAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAccessKeyAlarmStatusResponse> UpdateAccessKeyAlarmStatusOutcome;
                typedef std::future<UpdateAccessKeyAlarmStatusOutcome> UpdateAccessKeyAlarmStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::UpdateAccessKeyAlarmStatusRequest&, UpdateAccessKeyAlarmStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAccessKeyAlarmStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAccessKeyRemarkResponse> UpdateAccessKeyRemarkOutcome;
                typedef std::future<UpdateAccessKeyRemarkOutcome> UpdateAccessKeyRemarkOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::UpdateAccessKeyRemarkRequest&, UpdateAccessKeyRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAccessKeyRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAlertStatusListResponse> UpdateAlertStatusListOutcome;
                typedef std::future<UpdateAlertStatusListOutcome> UpdateAlertStatusListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::UpdateAlertStatusListRequest&, UpdateAlertStatusListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAlertStatusListAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateClusterOwnerResponse> UpdateClusterOwnerOutcome;
                typedef std::future<UpdateClusterOwnerOutcome> UpdateClusterOwnerOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::UpdateClusterOwnerRequest&, UpdateClusterOwnerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClusterOwnerAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyDspmAssetLoginCodeResponse> VerifyDspmAssetLoginCodeOutcome;
                typedef std::future<VerifyDspmAssetLoginCodeOutcome> VerifyDspmAssetLoginCodeOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::VerifyDspmAssetLoginCodeRequest&, VerifyDspmAssetLoginCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyDspmAssetLoginCodeAsyncHandler;



                /**
                 *This API is used to create or modify SMTP mailbox access requests.
                 * @param req AccessAIAnalysisSMTPRequest
                 * @return AccessAIAnalysisSMTPOutcome
                 */
                AccessAIAnalysisSMTPOutcome AccessAIAnalysisSMTP(const Model::AccessAIAnalysisSMTPRequest &request);
                void AccessAIAnalysisSMTPAsync(const Model::AccessAIAnalysisSMTPRequest& request, const AccessAIAnalysisSMTPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AccessAIAnalysisSMTPOutcomeCallable AccessAIAnalysisSMTPCallable(const Model::AccessAIAnalysisSMTPRequest& request);

                /**
                 *Add asset administrator
                 * @param req AddDspmAssetManagerRequest
                 * @return AddDspmAssetManagerOutcome
                 */
                AddDspmAssetManagerOutcome AddDspmAssetManager(const Model::AddDspmAssetManagerRequest &request);
                void AddDspmAssetManagerAsync(const Model::AddDspmAssetManagerRequest& request, const AddDspmAssetManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddDspmAssetManagerOutcomeCallable AddDspmAssetManagerCallable(const Model::AddDspmAssetManagerRequest& request);

                /**
                 *Add mirror repository information.
                 * @param req AddImageRegistryRequest
                 * @return AddImageRegistryOutcome
                 */
                AddImageRegistryOutcome AddImageRegistry(const Model::AddImageRegistryRequest &request);
                void AddImageRegistryAsync(const Model::AddImageRegistryRequest& request, const AddImageRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddImageRegistryOutcomeCallable AddImageRegistryCallable(const Model::AddImageRegistryRequest& request);

                /**
                 *This API is used to add cross-region log-in allowlists in batches.
                 * @param req AddLoginWhiteListsRequest
                 * @return AddLoginWhiteListsOutcome
                 */
                AddLoginWhiteListsOutcome AddLoginWhiteLists(const Model::AddLoginWhiteListsRequest &request);
                void AddLoginWhiteListsAsync(const Model::AddLoginWhiteListsRequest& request, const AddLoginWhiteListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddLoginWhiteListsOutcomeCallable AddLoginWhiteListsCallable(const Model::AddLoginWhiteListsRequest& request);

                /**
                 *CSIP Role Authorization Binding API
                 * @param req AddNewBindRoleUserRequest
                 * @return AddNewBindRoleUserOutcome
                 */
                AddNewBindRoleUserOutcome AddNewBindRoleUser(const Model::AddNewBindRoleUserRequest &request);
                void AddNewBindRoleUserAsync(const Model::AddNewBindRoleUserRequest& request, const AddNewBindRoleUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddNewBindRoleUserOutcomeCallable AddNewBindRoleUserCallable(const Model::AddNewBindRoleUserRequest& request);

                /**
                 *Add a vulnerability allowlist
                 * @param req AddVulWhitelistRequest
                 * @return AddVulWhitelistOutcome
                 */
                AddVulWhitelistOutcome AddVulWhitelist(const Model::AddVulWhitelistRequest &request);
                void AddVulWhitelistAsync(const Model::AddVulWhitelistRequest& request, const AddVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddVulWhitelistOutcomeCallable AddVulWhitelistCallable(const Model::AddVulWhitelistRequest& request);

                /**
                 *Batch modify the "periodic scan configuration / automatic synchronization of newly-added detection items / detection item hit configuration / customized detection items" settings in the baseline policy. Only fields passed in the request are modified.
                 * @param req BatchModifyBaselinePolicyRequest
                 * @return BatchModifyBaselinePolicyOutcome
                 */
                BatchModifyBaselinePolicyOutcome BatchModifyBaselinePolicy(const Model::BatchModifyBaselinePolicyRequest &request);
                void BatchModifyBaselinePolicyAsync(const Model::BatchModifyBaselinePolicyRequest& request, const BatchModifyBaselinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyBaselinePolicyOutcomeCallable BatchModifyBaselinePolicyCallable(const Model::BatchModifyBaselinePolicyRequest& request);

                /**
                 *Batch modify the scheduled scan task configurations of image repositories.
                 * @param req BatchModifyImageRegistryTimedScanTaskConfigRequest
                 * @return BatchModifyImageRegistryTimedScanTaskConfigOutcome
                 */
                BatchModifyImageRegistryTimedScanTaskConfigOutcome BatchModifyImageRegistryTimedScanTaskConfig(const Model::BatchModifyImageRegistryTimedScanTaskConfigRequest &request);
                void BatchModifyImageRegistryTimedScanTaskConfigAsync(const Model::BatchModifyImageRegistryTimedScanTaskConfigRequest& request, const BatchModifyImageRegistryTimedScanTaskConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyImageRegistryTimedScanTaskConfigOutcomeCallable BatchModifyImageRegistryTimedScanTaskConfigCallable(const Model::BatchModifyImageRegistryTimedScanTaskConfigRequest& request);

                /**
                 *Batch Modify Sensitive Information Allowlist for Container Images
                 * @param req BatchModifyImageSensitiveWhitelistRequest
                 * @return BatchModifyImageSensitiveWhitelistOutcome
                 */
                BatchModifyImageSensitiveWhitelistOutcome BatchModifyImageSensitiveWhitelist(const Model::BatchModifyImageSensitiveWhitelistRequest &request);
                void BatchModifyImageSensitiveWhitelistAsync(const Model::BatchModifyImageSensitiveWhitelistRequest& request, const BatchModifyImageSensitiveWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyImageSensitiveWhitelistOutcomeCallable BatchModifyImageSensitiveWhitelistCallable(const Model::BatchModifyImageSensitiveWhitelistRequest& request);

                /**
                 *Batch modify the Trojan allowlist for images.
                 * @param req BatchModifyImageVirusWhitelistRequest
                 * @return BatchModifyImageVirusWhitelistOutcome
                 */
                BatchModifyImageVirusWhitelistOutcome BatchModifyImageVirusWhitelist(const Model::BatchModifyImageVirusWhitelistRequest &request);
                void BatchModifyImageVirusWhitelistAsync(const Model::BatchModifyImageVirusWhitelistRequest& request, const BatchModifyImageVirusWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyImageVirusWhitelistOutcomeCallable BatchModifyImageVirusWhitelistCallable(const Model::BatchModifyImageVirusWhitelistRequest& request);

                /**
                 *Batch Modify Vulnerability Allowlist for Container Images
                 * @param req BatchModifyImageVulWhitelistRequest
                 * @return BatchModifyImageVulWhitelistOutcome
                 */
                BatchModifyImageVulWhitelistOutcome BatchModifyImageVulWhitelist(const Model::BatchModifyImageVulWhitelistRequest &request);
                void BatchModifyImageVulWhitelistAsync(const Model::BatchModifyImageVulWhitelistRequest& request, const BatchModifyImageVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyImageVulWhitelistOutcomeCallable BatchModifyImageVulWhitelistCallable(const Model::BatchModifyImageVulWhitelistRequest& request);

                /**
                 *Cancel a permanently ignored EDR multi-behavior alarm. Remove the corresponding host and rule record from the AI-Link permanent ignore allowlist and restore the alarm status to PENDING.
                 * @param req CancelEdrAlertIgnoreRequest
                 * @return CancelEdrAlertIgnoreOutcome
                 */
                CancelEdrAlertIgnoreOutcome CancelEdrAlertIgnore(const Model::CancelEdrAlertIgnoreRequest &request);
                void CancelEdrAlertIgnoreAsync(const Model::CancelEdrAlertIgnoreRequest& request, const CancelEdrAlertIgnoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelEdrAlertIgnoreOutcomeCallable CancelEdrAlertIgnoreCallable(const Model::CancelEdrAlertIgnoreRequest& request);

                /**
                 *Determine whether the current user is on the flagship edition for hosts.
                 * @param req CheckCWPExposePathPermissionRequest
                 * @return CheckCWPExposePathPermissionOutcome
                 */
                CheckCWPExposePathPermissionOutcome CheckCWPExposePathPermission(const Model::CheckCWPExposePathPermissionRequest &request);
                void CheckCWPExposePathPermissionAsync(const Model::CheckCWPExposePathPermissionRequest& request, const CheckCWPExposePathPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckCWPExposePathPermissionOutcomeCallable CheckCWPExposePathPermissionCallable(const Model::CheckCWPExposePathPermissionRequest& request);

                /**
                 *Check whether the image repository instance name is duplicate.
                 * @param req CheckImageRegistryInstanceNameDuplicateRequest
                 * @return CheckImageRegistryInstanceNameDuplicateOutcome
                 */
                CheckImageRegistryInstanceNameDuplicateOutcome CheckImageRegistryInstanceNameDuplicate(const Model::CheckImageRegistryInstanceNameDuplicateRequest &request);
                void CheckImageRegistryInstanceNameDuplicateAsync(const Model::CheckImageRegistryInstanceNameDuplicateRequest& request, const CheckImageRegistryInstanceNameDuplicateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckImageRegistryInstanceNameDuplicateOutcomeCallable CheckImageRegistryInstanceNameDuplicateCallable(const Model::CheckImageRegistryInstanceNameDuplicateRequest& request);

                /**
                 *Determine whether the current user is on the flagship edition.
                 * @param req CheckIsUltimateVersionRequest
                 * @return CheckIsUltimateVersionOutcome
                 */
                CheckIsUltimateVersionOutcome CheckIsUltimateVersion(const Model::CheckIsUltimateVersionRequest &request);
                void CheckIsUltimateVersionAsync(const Model::CheckIsUltimateVersionRequest& request, const CheckIsUltimateVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckIsUltimateVersionOutcomeCallable CheckIsUltimateVersionCallable(const Model::CheckIsUltimateVersionRequest& request);

                /**
                 *Risk verification example
                 * @param req CheckRiskRequest
                 * @return CheckRiskOutcome
                 */
                CheckRiskOutcome CheckRisk(const Model::CheckRiskRequest &request);
                void CheckRiskAsync(const Model::CheckRiskRequest& request, const CheckRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckRiskOutcomeCallable CheckRiskCallable(const Model::CheckRiskRequest& request);

                /**
                 *Replicate a custom baseline policy.
                 * @param req CopyBaselinePolicyRequest
                 * @return CopyBaselinePolicyOutcome
                 */
                CopyBaselinePolicyOutcome CopyBaselinePolicy(const Model::CopyBaselinePolicyRequest &request);
                void CopyBaselinePolicyAsync(const Model::CopyBaselinePolicyRequest& request, const CopyBaselinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyBaselinePolicyOutcomeCallable CopyBaselinePolicyCallable(const Model::CopyBaselinePolicyRequest& request);

                /**
                 *Create an AI scheduled task.

Create an AI scheduled task by entering the task name, prompt content, and trigger configuration. The AI scheduled task ID will be returned after successful creation.
                 * @param req CreateAIScheduleRequest
                 * @return CreateAIScheduleOutcome
                 */
                CreateAIScheduleOutcome CreateAISchedule(const Model::CreateAIScheduleRequest &request);
                void CreateAIScheduleAsync(const Model::CreateAIScheduleRequest& request, const CreateAIScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIScheduleOutcomeCallable CreateAIScheduleCallable(const Model::CreateAIScheduleRequest& request);

                /**
                 *Detect async tasks of AK
                 * @param req CreateAccessKeyCheckTaskRequest
                 * @return CreateAccessKeyCheckTaskOutcome
                 */
                CreateAccessKeyCheckTaskOutcome CreateAccessKeyCheckTask(const Model::CreateAccessKeyCheckTaskRequest &request);
                void CreateAccessKeyCheckTaskAsync(const Model::CreateAccessKeyCheckTaskRequest& request, const CreateAccessKeyCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccessKeyCheckTaskOutcomeCallable CreateAccessKeyCheckTaskCallable(const Model::CreateAccessKeyCheckTaskRequest& request);

                /**
                 *Trigger an AK asset sync task.
                 * @param req CreateAccessKeySyncTaskRequest
                 * @return CreateAccessKeySyncTaskOutcome
                 */
                CreateAccessKeySyncTaskOutcome CreateAccessKeySyncTask(const Model::CreateAccessKeySyncTaskRequest &request);
                void CreateAccessKeySyncTaskAsync(const Model::CreateAccessKeySyncTaskRequest& request, const CreateAccessKeySyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccessKeySyncTaskOutcomeCallable CreateAccessKeySyncTaskCallable(const Model::CreateAccessKeySyncTaskRequest& request);

                /**
                 *Creates a task to export all assets.
                 * @param req CreateAllAssetsExportJobRequest
                 * @return CreateAllAssetsExportJobOutcome
                 */
                CreateAllAssetsExportJobOutcome CreateAllAssetsExportJob(const Model::CreateAllAssetsExportJobRequest &request);
                void CreateAllAssetsExportJobAsync(const Model::CreateAllAssetsExportJobRequest& request, const CreateAllAssetsExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAllAssetsExportJobOutcomeCallable CreateAllAssetsExportJobCallable(const Model::CreateAllAssetsExportJobRequest& request);

                /**
                 *Creates a component list export task for image assets.
                 * @param req CreateAssetComponentListExportJobRequest
                 * @return CreateAssetComponentListExportJobOutcome
                 */
                CreateAssetComponentListExportJobOutcome CreateAssetComponentListExportJob(const Model::CreateAssetComponentListExportJobRequest &request);
                void CreateAssetComponentListExportJobAsync(const Model::CreateAssetComponentListExportJobRequest& request, const CreateAssetComponentListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetComponentListExportJobOutcomeCallable CreateAssetComponentListExportJobCallable(const Model::CreateAssetComponentListExportJobRequest& request);

                /**
                 *Create a mirror repository component associated image list export task.
                 * @param req CreateAssetComponentRelatedImageListExportJobRequest
                 * @return CreateAssetComponentRelatedImageListExportJobOutcome
                 */
                CreateAssetComponentRelatedImageListExportJobOutcome CreateAssetComponentRelatedImageListExportJob(const Model::CreateAssetComponentRelatedImageListExportJobRequest &request);
                void CreateAssetComponentRelatedImageListExportJobAsync(const Model::CreateAssetComponentRelatedImageListExportJobRequest& request, const CreateAssetComponentRelatedImageListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetComponentRelatedImageListExportJobOutcomeCallable CreateAssetComponentRelatedImageListExportJobCallable(const Model::CreateAssetComponentRelatedImageListExportJobRequest& request);

                /**
                 *Create an asset search view.
                 * @param req CreateAssetFilterViewRequest
                 * @return CreateAssetFilterViewOutcome
                 */
                CreateAssetFilterViewOutcome CreateAssetFilterView(const Model::CreateAssetFilterViewRequest &request);
                void CreateAssetFilterViewAsync(const Model::CreateAssetFilterViewRequest& request, const CreateAssetFilterViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetFilterViewOutcomeCallable CreateAssetFilterViewCallable(const Model::CreateAssetFilterViewRequest& request);

                /**
                 *Create a host process list export task
                 * @param req CreateAssetProcessExportJobRequest
                 * @return CreateAssetProcessExportJobOutcome
                 */
                CreateAssetProcessExportJobOutcome CreateAssetProcessExportJob(const Model::CreateAssetProcessExportJobRequest &request);
                void CreateAssetProcessExportJobAsync(const Model::CreateAssetProcessExportJobRequest& request, const CreateAssetProcessExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetProcessExportJobOutcomeCallable CreateAssetProcessExportJobCallable(const Model::CreateAssetProcessExportJobRequest& request);

                /**
                 *This API is used to create an asset sync task.
                 * @param req CreateAssetSyncTaskRequest
                 * @return CreateAssetSyncTaskOutcome
                 */
                CreateAssetSyncTaskOutcome CreateAssetSyncTask(const Model::CreateAssetSyncTaskRequest &request);
                void CreateAssetSyncTaskAsync(const Model::CreateAssetSyncTaskRequest& request, const CreateAssetSyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetSyncTaskOutcomeCallable CreateAssetSyncTaskCallable(const Model::CreateAssetSyncTaskRequest& request);

                /**
                 *Create an asset tag.
                 * @param req CreateAssetTagRequest
                 * @return CreateAssetTagOutcome
                 */
                CreateAssetTagOutcome CreateAssetTag(const Model::CreateAssetTagRequest &request);
                void CreateAssetTagAsync(const Model::CreateAssetTagRequest& request, const CreateAssetTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetTagOutcomeCallable CreateAssetTagCallable(const Model::CreateAssetTagRequest& request);

                /**
                 *Create a sample risk list export task from the asset perspective
                 * @param req CreateAssetViewRisksExportJobRequest
                 * @return CreateAssetViewRisksExportJobOutcome
                 */
                CreateAssetViewRisksExportJobOutcome CreateAssetViewRisksExportJob(const Model::CreateAssetViewRisksExportJobRequest &request);
                void CreateAssetViewRisksExportJobAsync(const Model::CreateAssetViewRisksExportJobRequest& request, const CreateAssetViewRisksExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetViewRisksExportJobOutcomeCallable CreateAssetViewRisksExportJobCallable(const Model::CreateAssetViewRisksExportJobRequest& request);

                /**
                 *Create a baseline aggregation detection item export task. Use ExportType to select exporting statistics or risk details. You can limit the range by conditions such as policy and category. The task executes asynchronously in the backend. Once completed, you can download the result file from the export task list.
                 * @param req CreateBaselineAggregatedItemExportJobRequest
                 * @return CreateBaselineAggregatedItemExportJobOutcome
                 */
                CreateBaselineAggregatedItemExportJobOutcome CreateBaselineAggregatedItemExportJob(const Model::CreateBaselineAggregatedItemExportJobRequest &request);
                void CreateBaselineAggregatedItemExportJobAsync(const Model::CreateBaselineAggregatedItemExportJobRequest& request, const CreateBaselineAggregatedItemExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBaselineAggregatedItemExportJobOutcomeCallable CreateBaselineAggregatedItemExportJobCallable(const Model::CreateBaselineAggregatedItemExportJobRequest& request);

                /**
                 *This API is used to create a baseline fix record export task to export the records of fixed detection items, including detection item information, asset information, and repair time. The task executes asynchronously in the backend. Once completed, the result file can be downloaded from the export task list.
                 * @param req CreateBaselineFixRecordExportJobRequest
                 * @return CreateBaselineFixRecordExportJobOutcome
                 */
                CreateBaselineFixRecordExportJobOutcome CreateBaselineFixRecordExportJob(const Model::CreateBaselineFixRecordExportJobRequest &request);
                void CreateBaselineFixRecordExportJobAsync(const Model::CreateBaselineFixRecordExportJobRequest& request, const CreateBaselineFixRecordExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBaselineFixRecordExportJobOutcomeCallable CreateBaselineFixRecordExportJobCallable(const Model::CreateBaselineFixRecordExportJobRequest& request);

                /**
                 *Create a baseline main task export task to export detection items and subtask data under the specified main task. The task executes asynchronously in the backend. Once completed, the result file can be downloaded in the export task list.
                 * @param req CreateBaselineMainTaskExportJobRequest
                 * @return CreateBaselineMainTaskExportJobOutcome
                 */
                CreateBaselineMainTaskExportJobOutcome CreateBaselineMainTaskExportJob(const Model::CreateBaselineMainTaskExportJobRequest &request);
                void CreateBaselineMainTaskExportJobAsync(const Model::CreateBaselineMainTaskExportJobRequest& request, const CreateBaselineMainTaskExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBaselineMainTaskExportJobOutcomeCallable CreateBaselineMainTaskExportJobCallable(const Model::CreateBaselineMainTaskExportJobRequest& request);

                /**
                 *Example of creating an export task for a cloud resource configuration detection PDF report.
                 * @param req CreateCFGRiskPDFReportExportJobRequest
                 * @return CreateCFGRiskPDFReportExportJobOutcome
                 */
                CreateCFGRiskPDFReportExportJobOutcome CreateCFGRiskPDFReportExportJob(const Model::CreateCFGRiskPDFReportExportJobRequest &request);
                void CreateCFGRiskPDFReportExportJobAsync(const Model::CreateCFGRiskPDFReportExportJobRequest& request, const CreateCFGRiskPDFReportExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCFGRiskPDFReportExportJobOutcomeCallable CreateCFGRiskPDFReportExportJobCallable(const Model::CreateCFGRiskPDFReportExportJobRequest& request);

                /**
                 *Example of creating an asset perspective risk list export task
                 * @param req CreateCFGRisksExportJobRequest
                 * @return CreateCFGRisksExportJobOutcome
                 */
                CreateCFGRisksExportJobOutcome CreateCFGRisksExportJob(const Model::CreateCFGRisksExportJobRequest &request);
                void CreateCFGRisksExportJobAsync(const Model::CreateCFGRisksExportJobRequest& request, const CreateCFGRisksExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCFGRisksExportJobOutcomeCallable CreateCFGRisksExportJobCallable(const Model::CreateCFGRisksExportJobRequest& request);

                /**
                 *This API is used to create a CSIP manual scan.
                 * @param req CreateCSIPManualMalwareScanRequest
                 * @return CreateCSIPManualMalwareScanOutcome
                 */
                CreateCSIPManualMalwareScanOutcome CreateCSIPManualMalwareScan(const Model::CreateCSIPManualMalwareScanRequest &request);
                void CreateCSIPManualMalwareScanAsync(const Model::CreateCSIPManualMalwareScanRequest& request, const CreateCSIPManualMalwareScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCSIPManualMalwareScanOutcomeCallable CreateCSIPManualMalwareScanCallable(const Model::CreateCSIPManualMalwareScanRequest& request);

                /**
                 *Create a sample risk list export task from the asset perspective
                 * @param req CreateCheckViewRisksExportJobRequest
                 * @return CreateCheckViewRisksExportJobOutcome
                 */
                CreateCheckViewRisksExportJobOutcome CreateCheckViewRisksExportJob(const Model::CreateCheckViewRisksExportJobRequest &request);
                void CreateCheckViewRisksExportJobAsync(const Model::CreateCheckViewRisksExportJobRequest& request, const CreateCheckViewRisksExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCheckViewRisksExportJobOutcomeCallable CreateCheckViewRisksExportJobCallable(const Model::CreateCheckViewRisksExportJobRequest& request);

                /**
                 *This API is used to create an SCF export task.
                 * @param req CreateCloudFunctionExportJobRequest
                 * @return CreateCloudFunctionExportJobOutcome
                 */
                CreateCloudFunctionExportJobOutcome CreateCloudFunctionExportJob(const Model::CreateCloudFunctionExportJobRequest &request);
                void CreateCloudFunctionExportJobAsync(const Model::CreateCloudFunctionExportJobRequest& request, const CreateCloudFunctionExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudFunctionExportJobOutcomeCallable CreateCloudFunctionExportJobCallable(const Model::CreateCloudFunctionExportJobRequest& request);

                /**
                 *This API is used to create a cluster asset sync task.
                 * @param req CreateClusterAssetSyncTaskRequest
                 * @return CreateClusterAssetSyncTaskOutcome
                 */
                CreateClusterAssetSyncTaskOutcome CreateClusterAssetSyncTask(const Model::CreateClusterAssetSyncTaskRequest &request);
                void CreateClusterAssetSyncTaskAsync(const Model::CreateClusterAssetSyncTaskRequest& request, const CreateClusterAssetSyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterAssetSyncTaskOutcomeCallable CreateClusterAssetSyncTaskCallable(const Model::CreateClusterAssetSyncTaskRequest& request);

                /**
                 *Creates a cluster container list export task
                 * @param req CreateClusterContainerListExportJobRequest
                 * @return CreateClusterContainerListExportJobOutcome
                 */
                CreateClusterContainerListExportJobOutcome CreateClusterContainerListExportJob(const Model::CreateClusterContainerListExportJobRequest &request);
                void CreateClusterContainerListExportJobAsync(const Model::CreateClusterContainerListExportJobRequest& request, const CreateClusterContainerListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterContainerListExportJobOutcomeCallable CreateClusterContainerListExportJobCallable(const Model::CreateClusterContainerListExportJobRequest& request);

                /**
                 *Create a cluster list export task
                 * @param req CreateClusterListExportJobRequest
                 * @return CreateClusterListExportJobOutcome
                 */
                CreateClusterListExportJobOutcome CreateClusterListExportJob(const Model::CreateClusterListExportJobRequest &request);
                void CreateClusterListExportJobAsync(const Model::CreateClusterListExportJobRequest& request, const CreateClusterListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterListExportJobOutcomeCallable CreateClusterListExportJobCallable(const Model::CreateClusterListExportJobRequest& request);

                /**
                 *Creates a cluster namespace list export task. The export fields include namespace name, Labels, and creation time. Filter filtering is supported. Export is implemented through an async task. After JobId is returned, the frontend polls to query the export task status.
                 * @param req CreateClusterNamespaceListExportJobRequest
                 * @return CreateClusterNamespaceListExportJobOutcome
                 */
                CreateClusterNamespaceListExportJobOutcome CreateClusterNamespaceListExportJob(const Model::CreateClusterNamespaceListExportJobRequest &request);
                void CreateClusterNamespaceListExportJobAsync(const Model::CreateClusterNamespaceListExportJobRequest& request, const CreateClusterNamespaceListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterNamespaceListExportJobOutcomeCallable CreateClusterNamespaceListExportJobCallable(const Model::CreateClusterNamespaceListExportJobRequest& request);

                /**
                 *This API is used to create a cluster node list export task. The export fields include node ID, node name, public IP address, private IP address, node type, cores, client status, and running state. NodeType, ClientStatus, and RunStatus are internationalized. Filter filtering is supported, including ClientStatus memory filtering. Export is implemented through an async task. After JobId is returned, the frontend polls to query the export task status.
                 * @param req CreateClusterNodeListExportJobRequest
                 * @return CreateClusterNodeListExportJobOutcome
                 */
                CreateClusterNodeListExportJobOutcome CreateClusterNodeListExportJob(const Model::CreateClusterNodeListExportJobRequest &request);
                void CreateClusterNodeListExportJobAsync(const Model::CreateClusterNodeListExportJobRequest& request, const CreateClusterNodeListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterNodeListExportJobOutcomeCallable CreateClusterNodeListExportJobCallable(const Model::CreateClusterNodeListExportJobRequest& request);

                /**
                 *Example of creating a risk list export task from a compliance standard aggregation perspective
                 * @param req CreateComplianceRiskExportJobRequest
                 * @return CreateComplianceRiskExportJobOutcome
                 */
                CreateComplianceRiskExportJobOutcome CreateComplianceRiskExportJob(const Model::CreateComplianceRiskExportJobRequest &request);
                void CreateComplianceRiskExportJobAsync(const Model::CreateComplianceRiskExportJobRequest& request, const CreateComplianceRiskExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateComplianceRiskExportJobOutcomeCallable CreateComplianceRiskExportJobCallable(const Model::CreateComplianceRiskExportJobRequest& request);

                /**
                 *Create Domain and IP Information
                 * @param req CreateDomainAndIpRequest
                 * @return CreateDomainAndIpOutcome
                 */
                CreateDomainAndIpOutcome CreateDomainAndIp(const Model::CreateDomainAndIpRequest &request);
                void CreateDomainAndIpAsync(const Model::CreateDomainAndIpRequest& request, const CreateDomainAndIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainAndIpOutcomeCallable CreateDomainAndIpCallable(const Model::CreateDomainAndIpRequest& request);

                /**
                 *Creates a Dspm access record export task
                 * @param req CreateDspmAccessExportJobRequest
                 * @return CreateDspmAccessExportJobOutcome
                 */
                CreateDspmAccessExportJobOutcome CreateDspmAccessExportJob(const Model::CreateDspmAccessExportJobRequest &request);
                void CreateDspmAccessExportJobAsync(const Model::CreateDspmAccessExportJobRequest& request, const CreateDspmAccessExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmAccessExportJobOutcomeCallable CreateDspmAccessExportJobCallable(const Model::CreateDspmAccessExportJobRequest& request);

                /**
                 *This API is used to create a Dspm application.
                 * @param req CreateDspmApplyOrderRequest
                 * @return CreateDspmApplyOrderOutcome
                 */
                CreateDspmApplyOrderOutcome CreateDspmApplyOrder(const Model::CreateDspmApplyOrderRequest &request);
                void CreateDspmApplyOrderAsync(const Model::CreateDspmApplyOrderRequest& request, const CreateDspmApplyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmApplyOrderOutcomeCallable CreateDspmApplyOrderCallable(const Model::CreateDspmApplyOrderRequest& request);

                /**
                 *Creates a Dspm approval history export task
                 * @param req CreateDspmApproveHistoryExportJobRequest
                 * @return CreateDspmApproveHistoryExportJobOutcome
                 */
                CreateDspmApproveHistoryExportJobOutcome CreateDspmApproveHistoryExportJob(const Model::CreateDspmApproveHistoryExportJobRequest &request);
                void CreateDspmApproveHistoryExportJobAsync(const Model::CreateDspmApproveHistoryExportJobRequest& request, const CreateDspmApproveHistoryExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmApproveHistoryExportJobOutcomeCallable CreateDspmApproveHistoryExportJobCallable(const Model::CreateDspmApproveHistoryExportJobRequest& request);

                /**
                 *This API is used to create a Dspm asset access topology export task.
                 * @param req CreateDspmAssetAccessTopologyExportJobRequest
                 * @return CreateDspmAssetAccessTopologyExportJobOutcome
                 */
                CreateDspmAssetAccessTopologyExportJobOutcome CreateDspmAssetAccessTopologyExportJob(const Model::CreateDspmAssetAccessTopologyExportJobRequest &request);
                void CreateDspmAssetAccessTopologyExportJobAsync(const Model::CreateDspmAssetAccessTopologyExportJobRequest& request, const CreateDspmAssetAccessTopologyExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmAssetAccessTopologyExportJobOutcomeCallable CreateDspmAssetAccessTopologyExportJobCallable(const Model::CreateDspmAssetAccessTopologyExportJobRequest& request);

                /**
                 *Create an asset list export task for Dspm.
                 * @param req CreateDspmAssetIdentifyInfoExportJobRequest
                 * @return CreateDspmAssetIdentifyInfoExportJobOutcome
                 */
                CreateDspmAssetIdentifyInfoExportJobOutcome CreateDspmAssetIdentifyInfoExportJob(const Model::CreateDspmAssetIdentifyInfoExportJobRequest &request);
                void CreateDspmAssetIdentifyInfoExportJobAsync(const Model::CreateDspmAssetIdentifyInfoExportJobRequest& request, const CreateDspmAssetIdentifyInfoExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmAssetIdentifyInfoExportJobOutcomeCallable CreateDspmAssetIdentifyInfoExportJobCallable(const Model::CreateDspmAssetIdentifyInfoExportJobRequest& request);

                /**
                 *Creates a Dspm asset list export task
                 * @param req CreateDspmAssetsExportJobRequest
                 * @return CreateDspmAssetsExportJobOutcome
                 */
                CreateDspmAssetsExportJobOutcome CreateDspmAssetsExportJob(const Model::CreateDspmAssetsExportJobRequest &request);
                void CreateDspmAssetsExportJobAsync(const Model::CreateDspmAssetsExportJobRequest& request, const CreateDspmAssetsExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmAssetsExportJobOutcomeCallable CreateDspmAssetsExportJobCallable(const Model::CreateDspmAssetsExportJobRequest& request);

                /**
                 *This API is used to create a Dspm audit filter policy.
                 * @param req CreateDspmAuditFilterStrategyRequest
                 * @return CreateDspmAuditFilterStrategyOutcome
                 */
                CreateDspmAuditFilterStrategyOutcome CreateDspmAuditFilterStrategy(const Model::CreateDspmAuditFilterStrategyRequest &request);
                void CreateDspmAuditFilterStrategyAsync(const Model::CreateDspmAuditFilterStrategyRequest& request, const CreateDspmAuditFilterStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmAuditFilterStrategyOutcomeCallable CreateDspmAuditFilterStrategyCallable(const Model::CreateDspmAuditFilterStrategyRequest& request);

                /**
                 *This API is used to create log export tasks.
                 * @param req CreateDspmExportTaskRequest
                 * @return CreateDspmExportTaskOutcome
                 */
                CreateDspmExportTaskOutcome CreateDspmExportTask(const Model::CreateDspmExportTaskRequest &request);
                void CreateDspmExportTaskAsync(const Model::CreateDspmExportTaskRequest& request, const CreateDspmExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmExportTaskOutcomeCallable CreateDspmExportTaskCallable(const Model::CreateDspmExportTaskRequest& request);

                /**
                 *This API is used to create a dspm data identification category.
                 * @param req CreateDspmIdentifyCategoryRequest
                 * @return CreateDspmIdentifyCategoryOutcome
                 */
                CreateDspmIdentifyCategoryOutcome CreateDspmIdentifyCategory(const Model::CreateDspmIdentifyCategoryRequest &request);
                void CreateDspmIdentifyCategoryAsync(const Model::CreateDspmIdentifyCategoryRequest& request, const CreateDspmIdentifyCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmIdentifyCategoryOutcomeCallable CreateDspmIdentifyCategoryCallable(const Model::CreateDspmIdentifyCategoryRequest& request);

                /**
                 *This API is used to create a dspm data identification template category association.
                 * @param req CreateDspmIdentifyComplianceCategoryRelationRequest
                 * @return CreateDspmIdentifyComplianceCategoryRelationOutcome
                 */
                CreateDspmIdentifyComplianceCategoryRelationOutcome CreateDspmIdentifyComplianceCategoryRelation(const Model::CreateDspmIdentifyComplianceCategoryRelationRequest &request);
                void CreateDspmIdentifyComplianceCategoryRelationAsync(const Model::CreateDspmIdentifyComplianceCategoryRelationRequest& request, const CreateDspmIdentifyComplianceCategoryRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmIdentifyComplianceCategoryRelationOutcomeCallable CreateDspmIdentifyComplianceCategoryRelationCallable(const Model::CreateDspmIdentifyComplianceCategoryRelationRequest& request);

                /**
                 *This API is used to create a dspm data identification template.
                 * @param req CreateDspmIdentifyComplianceGroupRequest
                 * @return CreateDspmIdentifyComplianceGroupOutcome
                 */
                CreateDspmIdentifyComplianceGroupOutcome CreateDspmIdentifyComplianceGroup(const Model::CreateDspmIdentifyComplianceGroupRequest &request);
                void CreateDspmIdentifyComplianceGroupAsync(const Model::CreateDspmIdentifyComplianceGroupRequest& request, const CreateDspmIdentifyComplianceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmIdentifyComplianceGroupOutcomeCallable CreateDspmIdentifyComplianceGroupCallable(const Model::CreateDspmIdentifyComplianceGroupRequest& request);

                /**
                 *Replicate a dspm data identification template.
                 * @param req CreateDspmIdentifyComplianceGroupCopyRequest
                 * @return CreateDspmIdentifyComplianceGroupCopyOutcome
                 */
                CreateDspmIdentifyComplianceGroupCopyOutcome CreateDspmIdentifyComplianceGroupCopy(const Model::CreateDspmIdentifyComplianceGroupCopyRequest &request);
                void CreateDspmIdentifyComplianceGroupCopyAsync(const Model::CreateDspmIdentifyComplianceGroupCopyRequest& request, const CreateDspmIdentifyComplianceGroupCopyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmIdentifyComplianceGroupCopyOutcomeCallable CreateDspmIdentifyComplianceGroupCopyCallable(const Model::CreateDspmIdentifyComplianceGroupCopyRequest& request);

                /**
                 *Creates a dspm data identification template data item association
                 * @param req CreateDspmIdentifyComplianceRuleRelationRequest
                 * @return CreateDspmIdentifyComplianceRuleRelationOutcome
                 */
                CreateDspmIdentifyComplianceRuleRelationOutcome CreateDspmIdentifyComplianceRuleRelation(const Model::CreateDspmIdentifyComplianceRuleRelationRequest &request);
                void CreateDspmIdentifyComplianceRuleRelationAsync(const Model::CreateDspmIdentifyComplianceRuleRelationRequest& request, const CreateDspmIdentifyComplianceRuleRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmIdentifyComplianceRuleRelationOutcomeCallable CreateDspmIdentifyComplianceRuleRelationCallable(const Model::CreateDspmIdentifyComplianceRuleRelationRequest& request);

                /**
                 *This API is used to create a Dspm identity list export task.
                 * @param req CreateDspmIdentifyInfoListExportJobRequest
                 * @return CreateDspmIdentifyInfoListExportJobOutcome
                 */
                CreateDspmIdentifyInfoListExportJobOutcome CreateDspmIdentifyInfoListExportJob(const Model::CreateDspmIdentifyInfoListExportJobRequest &request);
                void CreateDspmIdentifyInfoListExportJobAsync(const Model::CreateDspmIdentifyInfoListExportJobRequest& request, const CreateDspmIdentifyInfoListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmIdentifyInfoListExportJobOutcomeCallable CreateDspmIdentifyInfoListExportJobCallable(const Model::CreateDspmIdentifyInfoListExportJobRequest& request);

                /**
                 *Creating a dspm Data Identification and Classification Group
                 * @param req CreateDspmIdentifyLevelGroupRequest
                 * @return CreateDspmIdentifyLevelGroupOutcome
                 */
                CreateDspmIdentifyLevelGroupOutcome CreateDspmIdentifyLevelGroup(const Model::CreateDspmIdentifyLevelGroupRequest &request);
                void CreateDspmIdentifyLevelGroupAsync(const Model::CreateDspmIdentifyLevelGroupRequest& request, const CreateDspmIdentifyLevelGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmIdentifyLevelGroupOutcomeCallable CreateDspmIdentifyLevelGroupCallable(const Model::CreateDspmIdentifyLevelGroupRequest& request);

                /**
                 *This API is used to create a dspm identification data item.
                 * @param req CreateDspmIdentifyRuleRequest
                 * @return CreateDspmIdentifyRuleOutcome
                 */
                CreateDspmIdentifyRuleOutcome CreateDspmIdentifyRule(const Model::CreateDspmIdentifyRuleRequest &request);
                void CreateDspmIdentifyRuleAsync(const Model::CreateDspmIdentifyRuleRequest& request, const CreateDspmIdentifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmIdentifyRuleOutcomeCallable CreateDspmIdentifyRuleCallable(const Model::CreateDspmIdentifyRuleRequest& request);

                /**
                 *Create a Dspm personal identity id.
                 * @param req CreateDspmPersonalIdentifyRequest
                 * @return CreateDspmPersonalIdentifyOutcome
                 */
                CreateDspmPersonalIdentifyOutcome CreateDspmPersonalIdentify(const Model::CreateDspmPersonalIdentifyRequest &request);
                void CreateDspmPersonalIdentifyAsync(const Model::CreateDspmPersonalIdentifyRequest& request, const CreateDspmPersonalIdentifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmPersonalIdentifyOutcomeCallable CreateDspmPersonalIdentifyCallable(const Model::CreateDspmPersonalIdentifyRequest& request);

                /**
                 *Create a Dspm instance
                 * @param req CreateDspmResourceRequest
                 * @return CreateDspmResourceOutcome
                 */
                CreateDspmResourceOutcome CreateDspmResource(const Model::CreateDspmResourceRequest &request);
                void CreateDspmResourceAsync(const Model::CreateDspmResourceRequest& request, const CreateDspmResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmResourceOutcomeCallable CreateDspmResourceCallable(const Model::CreateDspmResourceRequest& request);

                /**
                 *Create a Dspm risk export task
                 * @param req CreateDspmRiskExportJobRequest
                 * @return CreateDspmRiskExportJobOutcome
                 */
                CreateDspmRiskExportJobOutcome CreateDspmRiskExportJob(const Model::CreateDspmRiskExportJobRequest &request);
                void CreateDspmRiskExportJobAsync(const Model::CreateDspmRiskExportJobRequest& request, const CreateDspmRiskExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmRiskExportJobOutcomeCallable CreateDspmRiskExportJobCallable(const Model::CreateDspmRiskExportJobRequest& request);

                /**
                 *This API is used to create a Dspm custom risk policy.
                 * @param req CreateDspmRiskStrategyRequest
                 * @return CreateDspmRiskStrategyOutcome
                 */
                CreateDspmRiskStrategyOutcome CreateDspmRiskStrategy(const Model::CreateDspmRiskStrategyRequest &request);
                void CreateDspmRiskStrategyAsync(const Model::CreateDspmRiskStrategyRequest& request, const CreateDspmRiskStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmRiskStrategyOutcomeCallable CreateDspmRiskStrategyCallable(const Model::CreateDspmRiskStrategyRequest& request);

                /**
                 *Create a Dspm allowlist policy.
                 * @param req CreateDspmWhitelistStrategyRequest
                 * @return CreateDspmWhitelistStrategyOutcome
                 */
                CreateDspmWhitelistStrategyOutcome CreateDspmWhitelistStrategy(const Model::CreateDspmWhitelistStrategyRequest &request);
                void CreateDspmWhitelistStrategyAsync(const Model::CreateDspmWhitelistStrategyRequest& request, const CreateDspmWhitelistStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDspmWhitelistStrategyOutcomeCallable CreateDspmWhitelistStrategyCallable(const Model::CreateDspmWhitelistStrategyRequest& request);

                /**
                 *Creates a public network asset export task
                 * @param req CreateDynamicAssetsExportJobRequest
                 * @return CreateDynamicAssetsExportJobOutcome
                 */
                CreateDynamicAssetsExportJobOutcome CreateDynamicAssetsExportJob(const Model::CreateDynamicAssetsExportJobRequest &request);
                void CreateDynamicAssetsExportJobAsync(const Model::CreateDynamicAssetsExportJobRequest& request, const CreateDynamicAssetsExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDynamicAssetsExportJobOutcomeCallable CreateDynamicAssetsExportJobCallable(const Model::CreateDynamicAssetsExportJobRequest& request);

                /**
                 *Triggered after you click start scanning. It supports multi-account and multiple asset types. When both hosts and container clusters are selected, it splits into two independent tasks (host + container).
                 * @param req CreateEDRManualScanRequest
                 * @return CreateEDRManualScanOutcome
                 */
                CreateEDRManualScanOutcome CreateEDRManualScan(const Model::CreateEDRManualScanRequest &request);
                void CreateEDRManualScanAsync(const Model::CreateEDRManualScanRequest& request, const CreateEDRManualScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEDRManualScanOutcomeCallable CreateEDRManualScanCallable(const Model::CreateEDRManualScanRequest& request);

                /**
                 *This API is used to create an EDR alert export task.
                 * @param req CreateEdrAlertExportJobRequest
                 * @return CreateEdrAlertExportJobOutcome
                 */
                CreateEdrAlertExportJobOutcome CreateEdrAlertExportJob(const Model::CreateEdrAlertExportJobRequest &request);
                void CreateEdrAlertExportJobAsync(const Model::CreateEdrAlertExportJobRequest& request, const CreateEdrAlertExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEdrAlertExportJobOutcomeCallable CreateEdrAlertExportJobCallable(const Model::CreateEdrAlertExportJobRequest& request);

                /**
                 *This API is used to create an EDR alert ordinary export task.
                 * @param req CreateEdrLessAlertExportJobRequest
                 * @return CreateEdrLessAlertExportJobOutcome
                 */
                CreateEdrLessAlertExportJobOutcome CreateEdrLessAlertExportJob(const Model::CreateEdrLessAlertExportJobRequest &request);
                void CreateEdrLessAlertExportJobAsync(const Model::CreateEdrLessAlertExportJobRequest& request, const CreateEdrLessAlertExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEdrLessAlertExportJobOutcomeCallable CreateEdrLessAlertExportJobCallable(const Model::CreateEdrLessAlertExportJobRequest& request);

                /**
                 *Create rules for automatic cloud boundary tagging.
                 * @param req CreateExposureAutoTagRuleRequest
                 * @return CreateExposureAutoTagRuleOutcome
                 */
                CreateExposureAutoTagRuleOutcome CreateExposureAutoTagRule(const Model::CreateExposureAutoTagRuleRequest &request);
                void CreateExposureAutoTagRuleAsync(const Model::CreateExposureAutoTagRuleRequest& request, const CreateExposureAutoTagRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExposureAutoTagRuleOutcomeCallable CreateExposureAutoTagRuleCallable(const Model::CreateExposureAutoTagRuleRequest& request);

                /**
                 *Export Task for Exposed Assets
                 * @param req CreateExposuresExportJobRequest
                 * @return CreateExposuresExportJobOutcome
                 */
                CreateExposuresExportJobOutcome CreateExposuresExportJob(const Model::CreateExposuresExportJobRequest &request);
                void CreateExposuresExportJobAsync(const Model::CreateExposuresExportJobRequest& request, const CreateExposuresExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExposuresExportJobOutcomeCallable CreateExposuresExportJobCallable(const Model::CreateExposuresExportJobRequest& request);

                /**
                 *This API is used to create a high-risk baseline risk export task.
                 * @param req CreateHighBaseLineRisksExportJobRequest
                 * @return CreateHighBaseLineRisksExportJobOutcome
                 */
                CreateHighBaseLineRisksExportJobOutcome CreateHighBaseLineRisksExportJob(const Model::CreateHighBaseLineRisksExportJobRequest &request);
                void CreateHighBaseLineRisksExportJobAsync(const Model::CreateHighBaseLineRisksExportJobRequest& request, const CreateHighBaseLineRisksExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHighBaseLineRisksExportJobOutcomeCallable CreateHighBaseLineRisksExportJobCallable(const Model::CreateHighBaseLineRisksExportJobRequest& request);

                /**
                 *Create a local image list export task. The export fields include image ID, image name, mirror version, number of associated containers, number of associated hosts, creation time, account nickname, and risk fields such as scan status, vulnerability, Trojan, and sensitive information. Filtering is supported. Export is implemented through an async task. After JobId is returned, the frontend polls to query the export task status. In single account mode, the NickName field is automatically excluded.
                 * @param req CreateHostImageListExportJobRequest
                 * @return CreateHostImageListExportJobOutcome
                 */
                CreateHostImageListExportJobOutcome CreateHostImageListExportJob(const Model::CreateHostImageListExportJobRequest &request);
                void CreateHostImageListExportJobAsync(const Model::CreateHostImageListExportJobRequest& request, const CreateHostImageListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHostImageListExportJobOutcomeCallable CreateHostImageListExportJobCallable(const Model::CreateHostImageListExportJobRequest& request);

                /**
                 *This API is used to create a host vulnerability table export task.
                 * @param req CreateHostVulExportJobRequest
                 * @return CreateHostVulExportJobOutcome
                 */
                CreateHostVulExportJobOutcome CreateHostVulExportJob(const Model::CreateHostVulExportJobRequest &request);
                void CreateHostVulExportJobAsync(const Model::CreateHostVulExportJobRequest& request, const CreateHostVulExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHostVulExportJobOutcomeCallable CreateHostVulExportJobCallable(const Model::CreateHostVulExportJobRequest& request);

                /**
                 *Create an IaC detection integration Token.
                 * @param req CreateIaCAccessTokenRequest
                 * @return CreateIaCAccessTokenOutcome
                 */
                CreateIaCAccessTokenOutcome CreateIaCAccessToken(const Model::CreateIaCAccessTokenRequest &request);
                void CreateIaCAccessTokenAsync(const Model::CreateIaCAccessTokenRequest& request, const CreateIaCAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIaCAccessTokenOutcomeCallable CreateIaCAccessTokenCallable(const Model::CreateIaCAccessTokenRequest& request);

                /**
                 *Creates an IaC detection file export task
                 * @param req CreateIaCFileExportJobRequest
                 * @return CreateIaCFileExportJobOutcome
                 */
                CreateIaCFileExportJobOutcome CreateIaCFileExportJob(const Model::CreateIaCFileExportJobRequest &request);
                void CreateIaCFileExportJobAsync(const Model::CreateIaCFileExportJobRequest& request, const CreateIaCFileExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIaCFileExportJobOutcomeCallable CreateIaCFileExportJobCallable(const Model::CreateIaCFileExportJobRequest& request);

                /**
                 *This API is used to create an IaC detection file rescan task.
                 * @param req CreateIaCFileReScanTaskRequest
                 * @return CreateIaCFileReScanTaskOutcome
                 */
                CreateIaCFileReScanTaskOutcome CreateIaCFileReScanTask(const Model::CreateIaCFileReScanTaskRequest &request);
                void CreateIaCFileReScanTaskAsync(const Model::CreateIaCFileReScanTaskRequest& request, const CreateIaCFileReScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIaCFileReScanTaskOutcomeCallable CreateIaCFileReScanTaskCallable(const Model::CreateIaCFileReScanTaskRequest& request);

                /**
                 *Create an image asset list export task
                 * @param req CreateImageAssetListExportJobRequest
                 * @return CreateImageAssetListExportJobOutcome
                 */
                CreateImageAssetListExportJobOutcome CreateImageAssetListExportJob(const Model::CreateImageAssetListExportJobRequest &request);
                void CreateImageAssetListExportJobAsync(const Model::CreateImageAssetListExportJobRequest& request, const CreateImageAssetListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageAssetListExportJobOutcomeCallable CreateImageAssetListExportJobCallable(const Model::CreateImageAssetListExportJobRequest& request);

                /**
                 *Create an image associated container asset export task
                 * @param req CreateImageAssociatedContainerListExportJobRequest
                 * @return CreateImageAssociatedContainerListExportJobOutcome
                 */
                CreateImageAssociatedContainerListExportJobOutcome CreateImageAssociatedContainerListExportJob(const Model::CreateImageAssociatedContainerListExportJobRequest &request);
                void CreateImageAssociatedContainerListExportJobAsync(const Model::CreateImageAssociatedContainerListExportJobRequest& request, const CreateImageAssociatedContainerListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageAssociatedContainerListExportJobOutcomeCallable CreateImageAssociatedContainerListExportJobCallable(const Model::CreateImageAssociatedContainerListExportJobRequest& request);

                /**
                 *Create image associated host asset list export task
                 * @param req CreateImageAssociatedHostListExportJobRequest
                 * @return CreateImageAssociatedHostListExportJobOutcome
                 */
                CreateImageAssociatedHostListExportJobOutcome CreateImageAssociatedHostListExportJob(const Model::CreateImageAssociatedHostListExportJobRequest &request);
                void CreateImageAssociatedHostListExportJobAsync(const Model::CreateImageAssociatedHostListExportJobRequest& request, const CreateImageAssociatedHostListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageAssociatedHostListExportJobOutcomeCallable CreateImageAssociatedHostListExportJobCallable(const Model::CreateImageAssociatedHostListExportJobRequest& request);

                /**
                 *Create an image component list export task.
                 * @param req CreateImageComponentListExportJobRequest
                 * @return CreateImageComponentListExportJobOutcome
                 */
                CreateImageComponentListExportJobOutcome CreateImageComponentListExportJob(const Model::CreateImageComponentListExportJobRequest &request);
                void CreateImageComponentListExportJobAsync(const Model::CreateImageComponentListExportJobRequest& request, const CreateImageComponentListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageComponentListExportJobOutcomeCallable CreateImageComponentListExportJobCallable(const Model::CreateImageComponentListExportJobRequest& request);

                /**
                 *Create Image Layer Vulnerability List Export Task
                 * @param req CreateImageLayerVulListExportJobRequest
                 * @return CreateImageLayerVulListExportJobOutcome
                 */
                CreateImageLayerVulListExportJobOutcome CreateImageLayerVulListExportJob(const Model::CreateImageLayerVulListExportJobRequest &request);
                void CreateImageLayerVulListExportJobAsync(const Model::CreateImageLayerVulListExportJobRequest& request, const CreateImageLayerVulListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageLayerVulListExportJobOutcomeCallable CreateImageLayerVulListExportJobCallable(const Model::CreateImageLayerVulListExportJobRequest& request);

                /**
                 *This API is used to create a mirror repository connectivity check task.
                 * @param req CreateImageRegistryConnectivityTaskRequest
                 * @return CreateImageRegistryConnectivityTaskOutcome
                 */
                CreateImageRegistryConnectivityTaskOutcome CreateImageRegistryConnectivityTask(const Model::CreateImageRegistryConnectivityTaskRequest &request);
                void CreateImageRegistryConnectivityTaskAsync(const Model::CreateImageRegistryConnectivityTaskRequest& request, const CreateImageRegistryConnectivityTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageRegistryConnectivityTaskOutcomeCallable CreateImageRegistryConnectivityTaskCallable(const Model::CreateImageRegistryConnectivityTaskRequest& request);

                /**
                 *This API is used to create an image repository list export task.
                 * @param req CreateImageRegistryListExportJobRequest
                 * @return CreateImageRegistryListExportJobOutcome
                 */
                CreateImageRegistryListExportJobOutcome CreateImageRegistryListExportJob(const Model::CreateImageRegistryListExportJobRequest &request);
                void CreateImageRegistryListExportJobAsync(const Model::CreateImageRegistryListExportJobRequest& request, const CreateImageRegistryListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageRegistryListExportJobOutcomeCallable CreateImageRegistryListExportJobCallable(const Model::CreateImageRegistryListExportJobRequest& request);

                /**
                 *Creating an Image Scanning Task
                 * @param req CreateImageRegistryScanTaskRequest
                 * @return CreateImageRegistryScanTaskOutcome
                 */
                CreateImageRegistryScanTaskOutcome CreateImageRegistryScanTask(const Model::CreateImageRegistryScanTaskRequest &request);
                void CreateImageRegistryScanTaskAsync(const Model::CreateImageRegistryScanTaskRequest& request, const CreateImageRegistryScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageRegistryScanTaskOutcomeCallable CreateImageRegistryScanTaskCallable(const Model::CreateImageRegistryScanTaskRequest& request);

                /**
                 *Create an image scanning task configuration for an image repository
                 * @param req CreateImageRegistryTimedScanTaskConfigRequest
                 * @return CreateImageRegistryTimedScanTaskConfigOutcome
                 */
                CreateImageRegistryTimedScanTaskConfigOutcome CreateImageRegistryTimedScanTaskConfig(const Model::CreateImageRegistryTimedScanTaskConfigRequest &request);
                void CreateImageRegistryTimedScanTaskConfigAsync(const Model::CreateImageRegistryTimedScanTaskConfigRequest& request, const CreateImageRegistryTimedScanTaskConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageRegistryTimedScanTaskConfigOutcomeCallable CreateImageRegistryTimedScanTaskConfigCallable(const Model::CreateImageRegistryTimedScanTaskConfigRequest& request);

                /**
                 *Create Image Sensitive Information List Export Task
                 * @param req CreateImageSensitiveInfoListExportJobRequest
                 * @return CreateImageSensitiveInfoListExportJobOutcome
                 */
                CreateImageSensitiveInfoListExportJobOutcome CreateImageSensitiveInfoListExportJob(const Model::CreateImageSensitiveInfoListExportJobRequest &request);
                void CreateImageSensitiveInfoListExportJobAsync(const Model::CreateImageSensitiveInfoListExportJobRequest& request, const CreateImageSensitiveInfoListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageSensitiveInfoListExportJobOutcomeCallable CreateImageSensitiveInfoListExportJobCallable(const Model::CreateImageSensitiveInfoListExportJobRequest& request);

                /**
                 *This API is used to create an allowlist for sensitive information in container images.
                 * @param req CreateImageSensitiveWhitelistRequest
                 * @return CreateImageSensitiveWhitelistOutcome
                 */
                CreateImageSensitiveWhitelistOutcome CreateImageSensitiveWhitelist(const Model::CreateImageSensitiveWhitelistRequest &request);
                void CreateImageSensitiveWhitelistAsync(const Model::CreateImageSensitiveWhitelistRequest& request, const CreateImageSensitiveWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageSensitiveWhitelistOutcomeCallable CreateImageSensitiveWhitelistCallable(const Model::CreateImageSensitiveWhitelistRequest& request);

                /**
                 *Create an image Trojan virus list export task
                 * @param req CreateImageVirusListExportJobRequest
                 * @return CreateImageVirusListExportJobOutcome
                 */
                CreateImageVirusListExportJobOutcome CreateImageVirusListExportJob(const Model::CreateImageVirusListExportJobRequest &request);
                void CreateImageVirusListExportJobAsync(const Model::CreateImageVirusListExportJobRequest& request, const CreateImageVirusListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageVirusListExportJobOutcomeCallable CreateImageVirusListExportJobCallable(const Model::CreateImageVirusListExportJobRequest& request);

                /**
                 *This API is used to create an image Trojan allowlist.
                 * @param req CreateImageVirusWhitelistRequest
                 * @return CreateImageVirusWhitelistOutcome
                 */
                CreateImageVirusWhitelistOutcome CreateImageVirusWhitelist(const Model::CreateImageVirusWhitelistRequest &request);
                void CreateImageVirusWhitelistAsync(const Model::CreateImageVirusWhitelistRequest& request, const CreateImageVirusWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageVirusWhitelistOutcomeCallable CreateImageVirusWhitelistCallable(const Model::CreateImageVirusWhitelistRequest& request);

                /**
                 *This API is used to create a task of exporting the image vulnerability list.
                 * @param req CreateImageVulListExportJobRequest
                 * @return CreateImageVulListExportJobOutcome
                 */
                CreateImageVulListExportJobOutcome CreateImageVulListExportJob(const Model::CreateImageVulListExportJobRequest &request);
                void CreateImageVulListExportJobAsync(const Model::CreateImageVulListExportJobRequest& request, const CreateImageVulListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageVulListExportJobOutcomeCallable CreateImageVulListExportJobCallable(const Model::CreateImageVulListExportJobRequest& request);

                /**
                 *Creates an export task for the vulnerability overview list of an image.
                 * @param req CreateImageVulSummaryListExportJobRequest
                 * @return CreateImageVulSummaryListExportJobOutcome
                 */
                CreateImageVulSummaryListExportJobOutcome CreateImageVulSummaryListExportJob(const Model::CreateImageVulSummaryListExportJobRequest &request);
                void CreateImageVulSummaryListExportJobAsync(const Model::CreateImageVulSummaryListExportJobRequest& request, const CreateImageVulSummaryListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageVulSummaryListExportJobOutcomeCallable CreateImageVulSummaryListExportJobCallable(const Model::CreateImageVulSummaryListExportJobRequest& request);

                /**
                 *This API is used to create a vulnerability allowlist for container images.
                 * @param req CreateImageVulWhitelistRequest
                 * @return CreateImageVulWhitelistOutcome
                 */
                CreateImageVulWhitelistOutcome CreateImageVulWhitelist(const Model::CreateImageVulWhitelistRequest &request);
                void CreateImageVulWhitelistAsync(const Model::CreateImageVulWhitelistRequest& request, const CreateImageVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageVulWhitelistOutcomeCallable CreateImageVulWhitelistCallable(const Model::CreateImageVulWhitelistRequest& request);

                /**
                 *This API is used to create a Pod associated container list export task. Export fields include container ID, container name, running state, node ID, node type, image ID, image name, and isolation status. Filtering is supported. Export is implemented through an async task. After JobId is returned, front-end polling is used to query the export task status.
                 * @param req CreatePodContainerListExportJobRequest
                 * @return CreatePodContainerListExportJobOutcome
                 */
                CreatePodContainerListExportJobOutcome CreatePodContainerListExportJob(const Model::CreatePodContainerListExportJobRequest &request);
                void CreatePodContainerListExportJobAsync(const Model::CreatePodContainerListExportJobRequest& request, const CreatePodContainerListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePodContainerListExportJobOutcomeCallable CreatePodContainerListExportJobCallable(const Model::CreatePodContainerListExportJobRequest& request);

                /**
                 *Creates a Pod Association service list export task. The export fields include service name, type, Selector, namespace, and creation time. Filtering is supported. When PodUniqueID is input, the Pod Association matching logic of DescribeClusterServiceList is reused. Export is implemented through an async task, and after JobId is returned, the frontend polls to query the export task status.
                 * @param req CreatePodServiceListExportJobRequest
                 * @return CreatePodServiceListExportJobOutcome
                 */
                CreatePodServiceListExportJobOutcome CreatePodServiceListExportJob(const Model::CreatePodServiceListExportJobRequest &request);
                void CreatePodServiceListExportJobAsync(const Model::CreatePodServiceListExportJobRequest& request, const CreatePodServiceListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePodServiceListExportJobOutcomeCallable CreatePodServiceListExportJobCallable(const Model::CreatePodServiceListExportJobRequest& request);

                /**
                 *This API is used to create a public network asset export task.
                 * @param req CreatePublicAssetsExportJobRequest
                 * @return CreatePublicAssetsExportJobOutcome
                 */
                CreatePublicAssetsExportJobOutcome CreatePublicAssetsExportJob(const Model::CreatePublicAssetsExportJobRequest &request);
                void CreatePublicAssetsExportJobAsync(const Model::CreatePublicAssetsExportJobRequest& request, const CreatePublicAssetsExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePublicAssetsExportJobOutcomeCallable CreatePublicAssetsExportJobCallable(const Model::CreatePublicAssetsExportJobRequest& request);

                /**
                 *Create Risk Center Scan Task
                 * @param req CreateRiskCenterScanTaskRequest
                 * @return CreateRiskCenterScanTaskOutcome
                 */
                CreateRiskCenterScanTaskOutcome CreateRiskCenterScanTask(const Model::CreateRiskCenterScanTaskRequest &request);
                void CreateRiskCenterScanTaskAsync(const Model::CreateRiskCenterScanTaskRequest& request, const CreateRiskCenterScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRiskCenterScanTaskOutcomeCallable CreateRiskCenterScanTaskCallable(const Model::CreateRiskCenterScanTaskRequest& request);

                /**
                 *Sample code for creating a cloud resource configuration check risk details export task
                 * @param req CreateRiskDetailExportJobRequest
                 * @return CreateRiskDetailExportJobOutcome
                 */
                CreateRiskDetailExportJobOutcome CreateRiskDetailExportJob(const Model::CreateRiskDetailExportJobRequest &request);
                void CreateRiskDetailExportJobAsync(const Model::CreateRiskDetailExportJobRequest& request, const CreateRiskDetailExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRiskDetailExportJobOutcomeCallable CreateRiskDetailExportJobCallable(const Model::CreateRiskDetailExportJobRequest& request);

                /**
                 *This API is used to create an ACL user access control rule. You can refer to several system rules or define a custom rule. At least one of them must be provided.
                 * @param req CreateSandboxACLRuleRequest
                 * @return CreateSandboxACLRuleOutcome
                 */
                CreateSandboxACLRuleOutcome CreateSandboxACLRule(const Model::CreateSandboxACLRuleRequest &request);
                void CreateSandboxACLRuleAsync(const Model::CreateSandboxACLRuleRequest& request, const CreateSandboxACLRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSandboxACLRuleOutcomeCallable CreateSandboxACLRuleCallable(const Model::CreateSandboxACLRuleRequest& request);

                /**
                 *Create a DLP user rule. You can reference several system rules (SystemRuleIDList) or define a custom rule (UserRuleContent, name + regular). At least one of both is required. UserRuleInfo is a newly-added optional structured input parameter. When it is passed together with UserRuleContent, UserRuleInfo takes precedence.
                 * @param req CreateSandboxDLPRuleRequest
                 * @return CreateSandboxDLPRuleOutcome
                 */
                CreateSandboxDLPRuleOutcome CreateSandboxDLPRule(const Model::CreateSandboxDLPRuleRequest &request);
                void CreateSandboxDLPRuleAsync(const Model::CreateSandboxDLPRuleRequest& request, const CreateSandboxDLPRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSandboxDLPRuleOutcomeCallable CreateSandboxDLPRuleCallable(const Model::CreateSandboxDLPRuleRequest& request);

                /**
                 *Create command sandbox file access policy
                 * @param req CreateSandboxFileRuleRequest
                 * @return CreateSandboxFileRuleOutcome
                 */
                CreateSandboxFileRuleOutcome CreateSandboxFileRule(const Model::CreateSandboxFileRuleRequest &request);
                void CreateSandboxFileRuleAsync(const Model::CreateSandboxFileRuleRequest& request, const CreateSandboxFileRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSandboxFileRuleOutcomeCallable CreateSandboxFileRuleCallable(const Model::CreateSandboxFileRuleRequest& request);

                /**
                 *This API is used to create an LLM audit user rule. It must refer to at least one system rule and does not support user customization of rule content.
                 * @param req CreateSandboxLLMAuditRuleRequest
                 * @return CreateSandboxLLMAuditRuleOutcome
                 */
                CreateSandboxLLMAuditRuleOutcome CreateSandboxLLMAuditRule(const Model::CreateSandboxLLMAuditRuleRequest &request);
                void CreateSandboxLLMAuditRuleAsync(const Model::CreateSandboxLLMAuditRuleRequest& request, const CreateSandboxLLMAuditRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSandboxLLMAuditRuleOutcomeCallable CreateSandboxLLMAuditRuleCallable(const Model::CreateSandboxLLMAuditRuleRequest& request);

                /**
                 *Exported task for exposed surface scanning results
                 * @param req CreateScanStatisticExportJobRequest
                 * @return CreateScanStatisticExportJobOutcome
                 */
                CreateScanStatisticExportJobOutcome CreateScanStatisticExportJob(const Model::CreateScanStatisticExportJobRequest &request);
                void CreateScanStatisticExportJobAsync(const Model::CreateScanStatisticExportJobRequest& request, const CreateScanStatisticExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScanStatisticExportJobOutcomeCallable CreateScanStatisticExportJobCallable(const Model::CreateScanStatisticExportJobRequest& request);

                /**
                 *This API is used to create an immediate detection task.
                 * @param req CreateScanTaskRequest
                 * @return CreateScanTaskOutcome
                 */
                CreateScanTaskOutcome CreateScanTask(const Model::CreateScanTaskRequest &request);
                void CreateScanTaskAsync(const Model::CreateScanTaskRequest& request, const CreateScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScanTaskOutcomeCallable CreateScanTaskCallable(const Model::CreateScanTaskRequest& request);

                /**
                 *Upload a Skill ZIP file to trigger asynchronous security detection. After a successful upload, poll the DescribeSkillScanResult API using the returned ContentHash and EngineVersion to obtain the result. The upload API is idempotent. Re-uploading a file with the same Hash does not create a repetition task. Detection results are retained for 90 days. Re-upload for detection after the retention period expires.
                 * @param req CreateSkillScanRequest
                 * @return CreateSkillScanOutcome
                 */
                CreateSkillScanOutcome CreateSkillScan(const Model::CreateSkillScanRequest &request);
                void CreateSkillScanAsync(const Model::CreateSkillScanRequest& request, const CreateSkillScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSkillScanOutcomeCallable CreateSkillScanCallable(const Model::CreateSkillScanRequest& request);

                /**
                 *Retry the vulnerability repair task that failed to fix, and redispatch the repair instruction only for the hosts of the original task that failed to fix. Retry is allowed only when the task status is partially or totally failed to fix.
                 * @param req CreateVulFixRetryTaskRequest
                 * @return CreateVulFixRetryTaskOutcome
                 */
                CreateVulFixRetryTaskOutcome CreateVulFixRetryTask(const Model::CreateVulFixRetryTaskRequest &request);
                void CreateVulFixRetryTaskAsync(const Model::CreateVulFixRetryTaskRequest& request, const CreateVulFixRetryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulFixRetryTaskOutcomeCallable CreateVulFixRetryTaskCallable(const Model::CreateVulFixRetryTaskRequest& request);

                /**
                 *Users manually submit vulnerability repair tasks, specify the vulnerabilities and target hosts that need to be repaired, and the system creates fixing tasks and dispatches execution. It supports options such as specifying the repair timeout period and whether to create a snapshot. The FixItems array is used to precisely control which hosts each vulnerability or KB patch repairs.
                 * @param req CreateVulFixTaskRequest
                 * @return CreateVulFixTaskOutcome
                 */
                CreateVulFixTaskOutcome CreateVulFixTask(const Model::CreateVulFixTaskRequest &request);
                void CreateVulFixTaskAsync(const Model::CreateVulFixTaskRequest& request, const CreateVulFixTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulFixTaskOutcomeCallable CreateVulFixTaskCallable(const Model::CreateVulFixTaskRequest& request);

                /**
                 *Create an export task for the list of fixed vulnerabilities. It supports the same filter criteria as DescribeVulFixedList. The export is implemented via an asynchronous task. After a JobID is returned, the frontend polls to query the export task status. The export fields include vulnerability ID, vulnerability name, vulnerability level, VPR rating, vulnerability type, CVE ID, host name, instance ID, associated component & path, and repair time.
                 * @param req CreateVulFixedExportJobRequest
                 * @return CreateVulFixedExportJobOutcome
                 */
                CreateVulFixedExportJobOutcome CreateVulFixedExportJob(const Model::CreateVulFixedExportJobRequest &request);
                void CreateVulFixedExportJobAsync(const Model::CreateVulFixedExportJobRequest& request, const CreateVulFixedExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulFixedExportJobOutcomeCallable CreateVulFixedExportJobCallable(const Model::CreateVulFixedExportJobRequest& request);

                /**
                 *This API is used to create a vulnerability rescan
                 * @param req CreateVulReScanRequest
                 * @return CreateVulReScanOutcome
                 */
                CreateVulReScanOutcome CreateVulReScan(const Model::CreateVulReScanRequest &request);
                void CreateVulReScanAsync(const Model::CreateVulReScanRequest& request, const CreateVulReScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulReScanOutcomeCallable CreateVulReScanCallable(const Model::CreateVulReScanRequest& request);

                /**
                 *This API is used to create a vulnerability risk export task.
                 * @param req CreateVulRisksExportJobRequest
                 * @return CreateVulRisksExportJobOutcome
                 */
                CreateVulRisksExportJobOutcome CreateVulRisksExportJob(const Model::CreateVulRisksExportJobRequest &request);
                void CreateVulRisksExportJobAsync(const Model::CreateVulRisksExportJobRequest& request, const CreateVulRisksExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulRisksExportJobOutcomeCallable CreateVulRisksExportJobCallable(const Model::CreateVulRisksExportJobRequest& request);

                /**
                 *This API is used to create a vulnerability scanning (one-click scan).
                 * @param req CreateVulScanManualRequest
                 * @return CreateVulScanManualOutcome
                 */
                CreateVulScanManualOutcome CreateVulScanManual(const Model::CreateVulScanManualRequest &request);
                void CreateVulScanManualAsync(const Model::CreateVulScanManualRequest& request, const CreateVulScanManualAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVulScanManualOutcomeCallable CreateVulScanManualCallable(const Model::CreateVulScanManualRequest& request);

                /**
                 *Delete the SMTP mailbox access information of the AI assistant.
                 * @param req DeleteAIAnalysisSMTPAccessRequest
                 * @return DeleteAIAnalysisSMTPAccessOutcome
                 */
                DeleteAIAnalysisSMTPAccessOutcome DeleteAIAnalysisSMTPAccess(const Model::DeleteAIAnalysisSMTPAccessRequest &request);
                void DeleteAIAnalysisSMTPAccessAsync(const Model::DeleteAIAnalysisSMTPAccessRequest& request, const DeleteAIAnalysisSMTPAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAIAnalysisSMTPAccessOutcomeCallable DeleteAIAnalysisSMTPAccessCallable(const Model::DeleteAIAnalysisSMTPAccessRequest& request);

                /**
                 *This API is used to delete AI scheduled tasks.

This API is used to delete a scheduled task based on the specified AI scheduled task ID. Deletion is irreversible.
                 * @param req DeleteAIScheduleRequest
                 * @return DeleteAIScheduleOutcome
                 */
                DeleteAIScheduleOutcome DeleteAISchedule(const Model::DeleteAIScheduleRequest &request);
                void DeleteAIScheduleAsync(const Model::DeleteAIScheduleRequest& request, const DeleteAIScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAIScheduleOutcomeCallable DeleteAIScheduleCallable(const Model::DeleteAIScheduleRequest& request);

                /**
                 *Delete the search view of a user-created specified asset
                 * @param req DeleteAssetFilterViewRequest
                 * @return DeleteAssetFilterViewOutcome
                 */
                DeleteAssetFilterViewOutcome DeleteAssetFilterView(const Model::DeleteAssetFilterViewRequest &request);
                void DeleteAssetFilterViewAsync(const Model::DeleteAssetFilterViewRequest& request, const DeleteAssetFilterViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAssetFilterViewOutcomeCallable DeleteAssetFilterViewCallable(const Model::DeleteAssetFilterViewRequest& request);

                /**
                 *Delete asset tag
                 * @param req DeleteAssetTagRequest
                 * @return DeleteAssetTagOutcome
                 */
                DeleteAssetTagOutcome DeleteAssetTag(const Model::DeleteAssetTagRequest &request);
                void DeleteAssetTagAsync(const Model::DeleteAssetTagRequest& request, const DeleteAssetTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAssetTagOutcomeCallable DeleteAssetTagCallable(const Model::DeleteAssetTagRequest& request);

                /**
                 *Delete custom baseline policies in batches. Only support deletion of policies with PolicyType=SELF. After deletion, historical risk records are retained, but no new results are generated.
                 * @param req DeleteBaselineSelfDefinedPolicyListRequest
                 * @return DeleteBaselineSelfDefinedPolicyListOutcome
                 */
                DeleteBaselineSelfDefinedPolicyListOutcome DeleteBaselineSelfDefinedPolicyList(const Model::DeleteBaselineSelfDefinedPolicyListRequest &request);
                void DeleteBaselineSelfDefinedPolicyListAsync(const Model::DeleteBaselineSelfDefinedPolicyListRequest& request, const DeleteBaselineSelfDefinedPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBaselineSelfDefinedPolicyListOutcomeCallable DeleteBaselineSelfDefinedPolicyListCallable(const Model::DeleteBaselineSelfDefinedPolicyListRequest& request);

                /**
                 *CSIP manual scan task delete API
                 * @param req DeleteCSIPMalwareScanTaskRequest
                 * @return DeleteCSIPMalwareScanTaskOutcome
                 */
                DeleteCSIPMalwareScanTaskOutcome DeleteCSIPMalwareScanTask(const Model::DeleteCSIPMalwareScanTaskRequest &request);
                void DeleteCSIPMalwareScanTaskAsync(const Model::DeleteCSIPMalwareScanTaskRequest& request, const DeleteCSIPMalwareScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCSIPMalwareScanTaskOutcomeCallable DeleteCSIPMalwareScanTaskCallable(const Model::DeleteCSIPMalwareScanTaskRequest& request);

                /**
                 *Deleting a cluster
                 * @param req DeleteClusterRequest
                 * @return DeleteClusterOutcome
                 */
                DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest &request);
                void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request);

                /**
                 *Delete Domain and IP Request
                 * @param req DeleteDomainAndIpRequest
                 * @return DeleteDomainAndIpOutcome
                 */
                DeleteDomainAndIpOutcome DeleteDomainAndIp(const Model::DeleteDomainAndIpRequest &request);
                void DeleteDomainAndIpAsync(const Model::DeleteDomainAndIpRequest& request, const DeleteDomainAndIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDomainAndIpOutcomeCallable DeleteDomainAndIpCallable(const Model::DeleteDomainAndIpRequest& request);

                /**
                 *Deletes a Dspm application form.
                 * @param req DeleteDspmApplyOrderRequest
                 * @return DeleteDspmApplyOrderOutcome
                 */
                DeleteDspmApplyOrderOutcome DeleteDspmApplyOrder(const Model::DeleteDspmApplyOrderRequest &request);
                void DeleteDspmApplyOrderAsync(const Model::DeleteDspmApplyOrderRequest& request, const DeleteDspmApplyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmApplyOrderOutcomeCallable DeleteDspmApplyOrderCallable(const Model::DeleteDspmApplyOrderRequest& request);

                /**
                 *Delete a Dspm asset account
                 * @param req DeleteDspmAssetAccountRequest
                 * @return DeleteDspmAssetAccountOutcome
                 */
                DeleteDspmAssetAccountOutcome DeleteDspmAssetAccount(const Model::DeleteDspmAssetAccountRequest &request);
                void DeleteDspmAssetAccountAsync(const Model::DeleteDspmAssetAccountRequest& request, const DeleteDspmAssetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmAssetAccountOutcomeCallable DeleteDspmAssetAccountCallable(const Model::DeleteDspmAssetAccountRequest& request);

                /**
                 *Delete a Dspm audit filter policy
                 * @param req DeleteDspmAuditFilterStrategyRequest
                 * @return DeleteDspmAuditFilterStrategyOutcome
                 */
                DeleteDspmAuditFilterStrategyOutcome DeleteDspmAuditFilterStrategy(const Model::DeleteDspmAuditFilterStrategyRequest &request);
                void DeleteDspmAuditFilterStrategyAsync(const Model::DeleteDspmAuditFilterStrategyRequest& request, const DeleteDspmAuditFilterStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmAuditFilterStrategyOutcomeCallable DeleteDspmAuditFilterStrategyCallable(const Model::DeleteDspmAuditFilterStrategyRequest& request);

                /**
                 *This API is used to delete the backup logs.
                 * @param req DeleteDspmBackupLogListRequest
                 * @return DeleteDspmBackupLogListOutcome
                 */
                DeleteDspmBackupLogListOutcome DeleteDspmBackupLogList(const Model::DeleteDspmBackupLogListRequest &request);
                void DeleteDspmBackupLogListAsync(const Model::DeleteDspmBackupLogListRequest& request, const DeleteDspmBackupLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmBackupLogListOutcomeCallable DeleteDspmBackupLogListCallable(const Model::DeleteDspmBackupLogListRequest& request);

                /**
                 *This API is used to cancel the log shipping configuration.
                 * @param req DeleteDspmCkafkaConfigRequest
                 * @return DeleteDspmCkafkaConfigOutcome
                 */
                DeleteDspmCkafkaConfigOutcome DeleteDspmCkafkaConfig(const Model::DeleteDspmCkafkaConfigRequest &request);
                void DeleteDspmCkafkaConfigAsync(const Model::DeleteDspmCkafkaConfigRequest& request, const DeleteDspmCkafkaConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmCkafkaConfigOutcomeCallable DeleteDspmCkafkaConfigCallable(const Model::DeleteDspmCkafkaConfigRequest& request);

                /**
                 *This API is used to delete export tasks.
                 * @param req DeleteDspmExportTaskRequest
                 * @return DeleteDspmExportTaskOutcome
                 */
                DeleteDspmExportTaskOutcome DeleteDspmExportTask(const Model::DeleteDspmExportTaskRequest &request);
                void DeleteDspmExportTaskAsync(const Model::DeleteDspmExportTaskRequest& request, const DeleteDspmExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmExportTaskOutcomeCallable DeleteDspmExportTaskCallable(const Model::DeleteDspmExportTaskRequest& request);

                /**
                 *Delete dspm data identification category
                 * @param req DeleteDspmIdentifyCategoryRequest
                 * @return DeleteDspmIdentifyCategoryOutcome
                 */
                DeleteDspmIdentifyCategoryOutcome DeleteDspmIdentifyCategory(const Model::DeleteDspmIdentifyCategoryRequest &request);
                void DeleteDspmIdentifyCategoryAsync(const Model::DeleteDspmIdentifyCategoryRequest& request, const DeleteDspmIdentifyCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmIdentifyCategoryOutcomeCallable DeleteDspmIdentifyCategoryCallable(const Model::DeleteDspmIdentifyCategoryRequest& request);

                /**
                 *Deletes classification association from a dspm identification template
                 * @param req DeleteDspmIdentifyComplianceCategoryRelationRequest
                 * @return DeleteDspmIdentifyComplianceCategoryRelationOutcome
                 */
                DeleteDspmIdentifyComplianceCategoryRelationOutcome DeleteDspmIdentifyComplianceCategoryRelation(const Model::DeleteDspmIdentifyComplianceCategoryRelationRequest &request);
                void DeleteDspmIdentifyComplianceCategoryRelationAsync(const Model::DeleteDspmIdentifyComplianceCategoryRelationRequest& request, const DeleteDspmIdentifyComplianceCategoryRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmIdentifyComplianceCategoryRelationOutcomeCallable DeleteDspmIdentifyComplianceCategoryRelationCallable(const Model::DeleteDspmIdentifyComplianceCategoryRelationRequest& request);

                /**
                 *Delete dspm data identification template
                 * @param req DeleteDspmIdentifyComplianceGroupRequest
                 * @return DeleteDspmIdentifyComplianceGroupOutcome
                 */
                DeleteDspmIdentifyComplianceGroupOutcome DeleteDspmIdentifyComplianceGroup(const Model::DeleteDspmIdentifyComplianceGroupRequest &request);
                void DeleteDspmIdentifyComplianceGroupAsync(const Model::DeleteDspmIdentifyComplianceGroupRequest& request, const DeleteDspmIdentifyComplianceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmIdentifyComplianceGroupOutcomeCallable DeleteDspmIdentifyComplianceGroupCallable(const Model::DeleteDspmIdentifyComplianceGroupRequest& request);

                /**
                 *Delete dspm data identification template data item association
                 * @param req DeleteDspmIdentifyComplianceRuleRelationRequest
                 * @return DeleteDspmIdentifyComplianceRuleRelationOutcome
                 */
                DeleteDspmIdentifyComplianceRuleRelationOutcome DeleteDspmIdentifyComplianceRuleRelation(const Model::DeleteDspmIdentifyComplianceRuleRelationRequest &request);
                void DeleteDspmIdentifyComplianceRuleRelationAsync(const Model::DeleteDspmIdentifyComplianceRuleRelationRequest& request, const DeleteDspmIdentifyComplianceRuleRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmIdentifyComplianceRuleRelationOutcomeCallable DeleteDspmIdentifyComplianceRuleRelationCallable(const Model::DeleteDspmIdentifyComplianceRuleRelationRequest& request);

                /**
                 *Delete a dspm data identification classification group
                 * @param req DeleteDspmIdentifyLevelGroupRequest
                 * @return DeleteDspmIdentifyLevelGroupOutcome
                 */
                DeleteDspmIdentifyLevelGroupOutcome DeleteDspmIdentifyLevelGroup(const Model::DeleteDspmIdentifyLevelGroupRequest &request);
                void DeleteDspmIdentifyLevelGroupAsync(const Model::DeleteDspmIdentifyLevelGroupRequest& request, const DeleteDspmIdentifyLevelGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmIdentifyLevelGroupOutcomeCallable DeleteDspmIdentifyLevelGroupCallable(const Model::DeleteDspmIdentifyLevelGroupRequest& request);

                /**
                 *Delete dspm data identification data item
                 * @param req DeleteDspmIdentifyRuleRequest
                 * @return DeleteDspmIdentifyRuleOutcome
                 */
                DeleteDspmIdentifyRuleOutcome DeleteDspmIdentifyRule(const Model::DeleteDspmIdentifyRuleRequest &request);
                void DeleteDspmIdentifyRuleAsync(const Model::DeleteDspmIdentifyRuleRequest& request, const DeleteDspmIdentifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmIdentifyRuleOutcomeCallable DeleteDspmIdentifyRuleCallable(const Model::DeleteDspmIdentifyRuleRequest& request);

                /**
                 *Delete a Dspm personal identity id.
                 * @param req DeleteDspmPersonalIdentifyRequest
                 * @return DeleteDspmPersonalIdentifyOutcome
                 */
                DeleteDspmPersonalIdentifyOutcome DeleteDspmPersonalIdentify(const Model::DeleteDspmPersonalIdentifyRequest &request);
                void DeleteDspmPersonalIdentifyAsync(const Model::DeleteDspmPersonalIdentifyRequest& request, const DeleteDspmPersonalIdentifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmPersonalIdentifyOutcomeCallable DeleteDspmPersonalIdentifyCallable(const Model::DeleteDspmPersonalIdentifyRequest& request);

                /**
                 *Delete restore logs
                 * @param req DeleteDspmRestoreLogListRequest
                 * @return DeleteDspmRestoreLogListOutcome
                 */
                DeleteDspmRestoreLogListOutcome DeleteDspmRestoreLogList(const Model::DeleteDspmRestoreLogListRequest &request);
                void DeleteDspmRestoreLogListAsync(const Model::DeleteDspmRestoreLogListRequest& request, const DeleteDspmRestoreLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmRestoreLogListOutcomeCallable DeleteDspmRestoreLogListCallable(const Model::DeleteDspmRestoreLogListRequest& request);

                /**
                 *This API is used to delete a DSPM custom risk policy. It only supports deletion of custom policies with rule_source=custom. Built-in policies are non-deletable. Disable them by setting IsEnabled in ModifyDspmRiskStrategy.
                 * @param req DeleteDspmRiskStrategyRequest
                 * @return DeleteDspmRiskStrategyOutcome
                 */
                DeleteDspmRiskStrategyOutcome DeleteDspmRiskStrategy(const Model::DeleteDspmRiskStrategyRequest &request);
                void DeleteDspmRiskStrategyAsync(const Model::DeleteDspmRiskStrategyRequest& request, const DeleteDspmRiskStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmRiskStrategyOutcomeCallable DeleteDspmRiskStrategyCallable(const Model::DeleteDspmRiskStrategyRequest& request);

                /**
                 *Delete dspmg shared account data
                 * @param req DeleteDspmShareUserDataRequest
                 * @return DeleteDspmShareUserDataOutcome
                 */
                DeleteDspmShareUserDataOutcome DeleteDspmShareUserData(const Model::DeleteDspmShareUserDataRequest &request);
                void DeleteDspmShareUserDataAsync(const Model::DeleteDspmShareUserDataRequest& request, const DeleteDspmShareUserDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmShareUserDataOutcomeCallable DeleteDspmShareUserDataCallable(const Model::DeleteDspmShareUserDataRequest& request);

                /**
                 *Delete a Dspm allowlist policy.
                 * @param req DeleteDspmWhitelistStrategyRequest
                 * @return DeleteDspmWhitelistStrategyOutcome
                 */
                DeleteDspmWhitelistStrategyOutcome DeleteDspmWhitelistStrategy(const Model::DeleteDspmWhitelistStrategyRequest &request);
                void DeleteDspmWhitelistStrategyAsync(const Model::DeleteDspmWhitelistStrategyRequest& request, const DeleteDspmWhitelistStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDspmWhitelistStrategyOutcomeCallable DeleteDspmWhitelistStrategyCallable(const Model::DeleteDspmWhitelistStrategyRequest& request);

                /**
                 *This API is used to delete EDR policies.
                 * @param req DeleteEDRRulesRequest
                 * @return DeleteEDRRulesOutcome
                 */
                DeleteEDRRulesOutcome DeleteEDRRules(const Model::DeleteEDRRulesRequest &request);
                void DeleteEDRRulesAsync(const Model::DeleteEDRRulesRequest& request, const DeleteEDRRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEDRRulesOutcomeCallable DeleteEDRRulesCallable(const Model::DeleteEDRRulesRequest& request);

                /**
                 *This API is used to delete terminated scan tasks by physically deleting the primary and detailed tables. Only tasks in the final state can be deleted, and only the creator can perform the deletion.
                 * @param req DeleteEDRScanTaskRequest
                 * @return DeleteEDRScanTaskOutcome
                 */
                DeleteEDRScanTaskOutcome DeleteEDRScanTask(const Model::DeleteEDRScanTaskRequest &request);
                void DeleteEDRScanTaskAsync(const Model::DeleteEDRScanTaskRequest& request, const DeleteEDRScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEDRScanTaskOutcomeCallable DeleteEDRScanTaskCallable(const Model::DeleteEDRScanTaskRequest& request);

                /**
                 *Delete EDR log collection path configurations in batches.
                 * @param req DeleteEdrLogCollectPathsRequest
                 * @return DeleteEdrLogCollectPathsOutcome
                 */
                DeleteEdrLogCollectPathsOutcome DeleteEdrLogCollectPaths(const Model::DeleteEdrLogCollectPathsRequest &request);
                void DeleteEdrLogCollectPathsAsync(const Model::DeleteEdrLogCollectPathsRequest& request, const DeleteEdrLogCollectPathsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEdrLogCollectPathsOutcomeCallable DeleteEdrLogCollectPathsCallable(const Model::DeleteEdrLogCollectPathsRequest& request);

                /**
                 *Delete rules for automatic cloud boundary tagging.
                 * @param req DeleteExposureAutoTagRuleRequest
                 * @return DeleteExposureAutoTagRuleOutcome
                 */
                DeleteExposureAutoTagRuleOutcome DeleteExposureAutoTagRule(const Model::DeleteExposureAutoTagRuleRequest &request);
                void DeleteExposureAutoTagRuleAsync(const Model::DeleteExposureAutoTagRuleRequest& request, const DeleteExposureAutoTagRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteExposureAutoTagRuleOutcomeCallable DeleteExposureAutoTagRuleCallable(const Model::DeleteExposureAutoTagRuleRequest& request);

                /**
                 *Delete an IaC detection integration Token
                 * @param req DeleteIaCAccessTokenRequest
                 * @return DeleteIaCAccessTokenOutcome
                 */
                DeleteIaCAccessTokenOutcome DeleteIaCAccessToken(const Model::DeleteIaCAccessTokenRequest &request);
                void DeleteIaCAccessTokenAsync(const Model::DeleteIaCAccessTokenRequest& request, const DeleteIaCAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIaCAccessTokenOutcomeCallable DeleteIaCAccessTokenCallable(const Model::DeleteIaCAccessTokenRequest& request);

                /**
                 *Delete an IaC detection file
                 * @param req DeleteIaCFileRequest
                 * @return DeleteIaCFileOutcome
                 */
                DeleteIaCFileOutcome DeleteIaCFile(const Model::DeleteIaCFileRequest &request);
                void DeleteIaCFileAsync(const Model::DeleteIaCFileRequest& request, const DeleteIaCFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIaCFileOutcomeCallable DeleteIaCFileCallable(const Model::DeleteIaCFileRequest& request);

                /**
                 *Delete image repository information.
                 * @param req DeleteImageRegistryRequest
                 * @return DeleteImageRegistryOutcome
                 */
                DeleteImageRegistryOutcome DeleteImageRegistry(const Model::DeleteImageRegistryRequest &request);
                void DeleteImageRegistryAsync(const Model::DeleteImageRegistryRequest& request, const DeleteImageRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageRegistryOutcomeCallable DeleteImageRegistryCallable(const Model::DeleteImageRegistryRequest& request);

                /**
                 *Deletes an image repository scanning task.
                 * @param req DeleteImageRegistryScanTaskRequest
                 * @return DeleteImageRegistryScanTaskOutcome
                 */
                DeleteImageRegistryScanTaskOutcome DeleteImageRegistryScanTask(const Model::DeleteImageRegistryScanTaskRequest &request);
                void DeleteImageRegistryScanTaskAsync(const Model::DeleteImageRegistryScanTaskRequest& request, const DeleteImageRegistryScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageRegistryScanTaskOutcomeCallable DeleteImageRegistryScanTaskCallable(const Model::DeleteImageRegistryScanTaskRequest& request);

                /**
                 *Delete the scheduled scan task configuration of an image repository.
                 * @param req DeleteImageRegistryTimedScanTaskConfigRequest
                 * @return DeleteImageRegistryTimedScanTaskConfigOutcome
                 */
                DeleteImageRegistryTimedScanTaskConfigOutcome DeleteImageRegistryTimedScanTaskConfig(const Model::DeleteImageRegistryTimedScanTaskConfigRequest &request);
                void DeleteImageRegistryTimedScanTaskConfigAsync(const Model::DeleteImageRegistryTimedScanTaskConfigRequest& request, const DeleteImageRegistryTimedScanTaskConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageRegistryTimedScanTaskConfigOutcomeCallable DeleteImageRegistryTimedScanTaskConfigCallable(const Model::DeleteImageRegistryTimedScanTaskConfigRequest& request);

                /**
                 *This API is used to delete an allowlist for sensitive information from a container image.
                 * @param req DeleteImageSensitiveWhitelistRequest
                 * @return DeleteImageSensitiveWhitelistOutcome
                 */
                DeleteImageSensitiveWhitelistOutcome DeleteImageSensitiveWhitelist(const Model::DeleteImageSensitiveWhitelistRequest &request);
                void DeleteImageSensitiveWhitelistAsync(const Model::DeleteImageSensitiveWhitelistRequest& request, const DeleteImageSensitiveWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageSensitiveWhitelistOutcomeCallable DeleteImageSensitiveWhitelistCallable(const Model::DeleteImageSensitiveWhitelistRequest& request);

                /**
                 *This API is used to delete the image Trojan allowlist.
                 * @param req DeleteImageVirusWhitelistRequest
                 * @return DeleteImageVirusWhitelistOutcome
                 */
                DeleteImageVirusWhitelistOutcome DeleteImageVirusWhitelist(const Model::DeleteImageVirusWhitelistRequest &request);
                void DeleteImageVirusWhitelistAsync(const Model::DeleteImageVirusWhitelistRequest& request, const DeleteImageVirusWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageVirusWhitelistOutcomeCallable DeleteImageVirusWhitelistCallable(const Model::DeleteImageVirusWhitelistRequest& request);

                /**
                 *Deletes the vulnerability allowlist of a container image
                 * @param req DeleteImageVulWhitelistRequest
                 * @return DeleteImageVulWhitelistOutcome
                 */
                DeleteImageVulWhitelistOutcome DeleteImageVulWhitelist(const Model::DeleteImageVulWhitelistRequest &request);
                void DeleteImageVulWhitelistAsync(const Model::DeleteImageVulWhitelistRequest& request, const DeleteImageVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageVulWhitelistOutcomeCallable DeleteImageVulWhitelistCallable(const Model::DeleteImageVulWhitelistRequest& request);

                /**
                 *This API is used to delete the cross-region log-in allowlist rules.
                 * @param req DeleteLoginWhiteListRequest
                 * @return DeleteLoginWhiteListOutcome
                 */
                DeleteLoginWhiteListOutcome DeleteLoginWhiteList(const Model::DeleteLoginWhiteListRequest &request);
                void DeleteLoginWhiteListAsync(const Model::DeleteLoginWhiteListRequest& request, const DeleteLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoginWhiteListOutcomeCallable DeleteLoginWhiteListCallable(const Model::DeleteLoginWhiteListRequest& request);

                /**
                 *This API is used to delete clearing records of a machine.
                 * @param req DeleteMachineClearHistoryRequest
                 * @return DeleteMachineClearHistoryOutcome
                 */
                DeleteMachineClearHistoryOutcome DeleteMachineClearHistory(const Model::DeleteMachineClearHistoryRequest &request);
                void DeleteMachineClearHistoryAsync(const Model::DeleteMachineClearHistoryRequest& request, const DeleteMachineClearHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMachineClearHistoryOutcomeCallable DeleteMachineClearHistoryCallable(const Model::DeleteMachineClearHistoryRequest& request);

                /**
                 *Delete Risk Center Scan Task
                 * @param req DeleteRiskScanTaskRequest
                 * @return DeleteRiskScanTaskOutcome
                 */
                DeleteRiskScanTaskOutcome DeleteRiskScanTask(const Model::DeleteRiskScanTaskRequest &request);
                void DeleteRiskScanTaskAsync(const Model::DeleteRiskScanTaskRequest& request, const DeleteRiskScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRiskScanTaskOutcomeCallable DeleteRiskScanTaskCallable(const Model::DeleteRiskScanTaskRequest& request);

                /**
                 *Delete ACL user rules in batches. After deletion, rules are no longer returned in list queries and no longer take effect on traffic. If any ID does not exist or belongs to another tenant, an error is returned overall.
                 * @param req DeleteSandboxACLRuleRequest
                 * @return DeleteSandboxACLRuleOutcome
                 */
                DeleteSandboxACLRuleOutcome DeleteSandboxACLRule(const Model::DeleteSandboxACLRuleRequest &request);
                void DeleteSandboxACLRuleAsync(const Model::DeleteSandboxACLRuleRequest& request, const DeleteSandboxACLRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSandboxACLRuleOutcomeCallable DeleteSandboxACLRuleCallable(const Model::DeleteSandboxACLRuleRequest& request);

                /**
                 *Batch delete DLP user rules. If any ID does not exist or belongs to another tenant, an error is returned for the entire request.
                 * @param req DeleteSandboxDLPRuleRequest
                 * @return DeleteSandboxDLPRuleOutcome
                 */
                DeleteSandboxDLPRuleOutcome DeleteSandboxDLPRule(const Model::DeleteSandboxDLPRuleRequest &request);
                void DeleteSandboxDLPRuleAsync(const Model::DeleteSandboxDLPRuleRequest& request, const DeleteSandboxDLPRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSandboxDLPRuleOutcomeCallable DeleteSandboxDLPRuleCallable(const Model::DeleteSandboxDLPRuleRequest& request);

                /**
                 *Create command sandbox file access policy
                 * @param req DeleteSandboxFileRuleRequest
                 * @return DeleteSandboxFileRuleOutcome
                 */
                DeleteSandboxFileRuleOutcome DeleteSandboxFileRule(const Model::DeleteSandboxFileRuleRequest &request);
                void DeleteSandboxFileRuleAsync(const Model::DeleteSandboxFileRuleRequest& request, const DeleteSandboxFileRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSandboxFileRuleOutcomeCallable DeleteSandboxFileRuleCallable(const Model::DeleteSandboxFileRuleRequest& request);

                /**
                 *Batch delete LLM audit user rules. If any ID does not exist or belongs to another tenant, an error is returned overall.
                 * @param req DeleteSandboxLLMAuditRuleRequest
                 * @return DeleteSandboxLLMAuditRuleOutcome
                 */
                DeleteSandboxLLMAuditRuleOutcome DeleteSandboxLLMAuditRule(const Model::DeleteSandboxLLMAuditRuleRequest &request);
                void DeleteSandboxLLMAuditRuleAsync(const Model::DeleteSandboxLLMAuditRuleRequest& request, const DeleteSandboxLLMAuditRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSandboxLLMAuditRuleOutcomeCallable DeleteSandboxLLMAuditRuleCallable(const Model::DeleteSandboxLLMAuditRuleRequest& request);

                /**
                 *This API is used to delete a vulnerability allowlist.
                 * @param req DeleteVulWhitelistRequest
                 * @return DeleteVulWhitelistOutcome
                 */
                DeleteVulWhitelistOutcome DeleteVulWhitelist(const Model::DeleteVulWhitelistRequest &request);
                void DeleteVulWhitelistAsync(const Model::DeleteVulWhitelistRequest& request, const DeleteVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVulWhitelistOutcomeCallable DeleteVulWhitelistCallable(const Model::DeleteVulWhitelistRequest& request);

                /**
                 *Delete notification policies in batches.
                 * @param req DeleteWebhookPoliciesRequest
                 * @return DeleteWebhookPoliciesOutcome
                 */
                DeleteWebhookPoliciesOutcome DeleteWebhookPolicies(const Model::DeleteWebhookPoliciesRequest &request);
                void DeleteWebhookPoliciesAsync(const Model::DeleteWebhookPoliciesRequest& request, const DeleteWebhookPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWebhookPoliciesOutcomeCallable DeleteWebhookPoliciesCallable(const Model::DeleteWebhookPoliciesRequest& request);

                /**
                 *Delete receiving robots in batches. Before deletion, the reference relationships are automatically removed from all policies that refer to these robots.
                 * @param req DeleteWebhookReceiversRequest
                 * @return DeleteWebhookReceiversOutcome
                 */
                DeleteWebhookReceiversOutcome DeleteWebhookReceivers(const Model::DeleteWebhookReceiversRequest &request);
                void DeleteWebhookReceiversAsync(const Model::DeleteWebhookReceiversRequest& request, const DeleteWebhookReceiversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWebhookReceiversOutcomeCallable DeleteWebhookReceiversCallable(const Model::DeleteWebhookReceiversRequest& request);

                /**
                 *Search for AI agent asset list.
                 * @param req DescribeAIAgentAssetListRequest
                 * @return DescribeAIAgentAssetListOutcome
                 */
                DescribeAIAgentAssetListOutcome DescribeAIAgentAssetList(const Model::DescribeAIAgentAssetListRequest &request);
                void DescribeAIAgentAssetListAsync(const Model::DescribeAIAgentAssetListRequest& request, const DescribeAIAgentAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAgentAssetListOutcomeCallable DescribeAIAgentAssetListCallable(const Model::DescribeAIAgentAssetListRequest& request);

                /**
                 *Retrieves the scan list of AIAgent asset credentials
                 * @param req DescribeAIAgentCredentialListRequest
                 * @return DescribeAIAgentCredentialListOutcome
                 */
                DescribeAIAgentCredentialListOutcome DescribeAIAgentCredentialList(const Model::DescribeAIAgentCredentialListRequest &request);
                void DescribeAIAgentCredentialListAsync(const Model::DescribeAIAgentCredentialListRequest& request, const DescribeAIAgentCredentialListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAgentCredentialListOutcomeCallable DescribeAIAgentCredentialListCallable(const Model::DescribeAIAgentCredentialListRequest& request);

                /**
                 *This API is used to query the leaked location list of one credential by credential group row ID in pages. It is used with the DescribeAIAgentCredentialList interface in the split and unfold scenario to avoid performance issues caused by pulling hundreds of thousands of locations at once in data skew scenarios.
                 * @param req DescribeAIAgentCredentialLocationListRequest
                 * @return DescribeAIAgentCredentialLocationListOutcome
                 */
                DescribeAIAgentCredentialLocationListOutcome DescribeAIAgentCredentialLocationList(const Model::DescribeAIAgentCredentialLocationListRequest &request);
                void DescribeAIAgentCredentialLocationListAsync(const Model::DescribeAIAgentCredentialLocationListRequest& request, const DescribeAIAgentCredentialLocationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAgentCredentialLocationListOutcomeCallable DescribeAIAgentCredentialLocationListCallable(const Model::DescribeAIAgentCredentialLocationListRequest& request);

                /**
                 *Search the skill list of an AI Agent
                 * @param req DescribeAIAgentSkillListRequest
                 * @return DescribeAIAgentSkillListOutcome
                 */
                DescribeAIAgentSkillListOutcome DescribeAIAgentSkillList(const Model::DescribeAIAgentSkillListRequest &request);
                void DescribeAIAgentSkillListAsync(const Model::DescribeAIAgentSkillListRequest& request, const DescribeAIAgentSkillListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAgentSkillListOutcomeCallable DescribeAIAgentSkillListCallable(const Model::DescribeAIAgentSkillListRequest& request);

                /**
                 *Get the temporary download link of an AI analysis file.

The original address of the input file. Returns a signed temporary download link with a validity period of 2 hours.
                 * @param req DescribeAIAnalysisFileDownloadURLRequest
                 * @return DescribeAIAnalysisFileDownloadURLOutcome
                 */
                DescribeAIAnalysisFileDownloadURLOutcome DescribeAIAnalysisFileDownloadURL(const Model::DescribeAIAnalysisFileDownloadURLRequest &request);
                void DescribeAIAnalysisFileDownloadURLAsync(const Model::DescribeAIAnalysisFileDownloadURLRequest& request, const DescribeAIAnalysisFileDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAnalysisFileDownloadURLOutcomeCallable DescribeAIAnalysisFileDownloadURLCallable(const Model::DescribeAIAnalysisFileDownloadURLRequest& request);

                /**
                 *Retrieve historical analysis records of the cloud security AI assistant.
                 * @param req DescribeAIAnalysisHistoryRequest
                 * @return DescribeAIAnalysisHistoryOutcome
                 */
                DescribeAIAnalysisHistoryOutcome DescribeAIAnalysisHistory(const Model::DescribeAIAnalysisHistoryRequest &request);
                void DescribeAIAnalysisHistoryAsync(const Model::DescribeAIAnalysisHistoryRequest& request, const DescribeAIAnalysisHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAnalysisHistoryOutcomeCallable DescribeAIAnalysisHistoryCallable(const Model::DescribeAIAnalysisHistoryRequest& request);

                /**
                 *Retrieve recommended questions for AI QA.
                 * @param req DescribeAIAnalysisRecommendQuestionsRequest
                 * @return DescribeAIAnalysisRecommendQuestionsOutcome
                 */
                DescribeAIAnalysisRecommendQuestionsOutcome DescribeAIAnalysisRecommendQuestions(const Model::DescribeAIAnalysisRecommendQuestionsRequest &request);
                void DescribeAIAnalysisRecommendQuestionsAsync(const Model::DescribeAIAnalysisRecommendQuestionsRequest& request, const DescribeAIAnalysisRecommendQuestionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAnalysisRecommendQuestionsOutcomeCallable DescribeAIAnalysisRecommendQuestionsCallable(const Model::DescribeAIAnalysisRecommendQuestionsRequest& request);

                /**
                 *This API is used to obtain basic information of the Cloud Security AI Assistant.
                 * @param req DescribeAIAnalysisRobotInfoRequest
                 * @return DescribeAIAnalysisRobotInfoOutcome
                 */
                DescribeAIAnalysisRobotInfoOutcome DescribeAIAnalysisRobotInfo(const Model::DescribeAIAnalysisRobotInfoRequest &request);
                void DescribeAIAnalysisRobotInfoAsync(const Model::DescribeAIAnalysisRobotInfoRequest& request, const DescribeAIAnalysisRobotInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAnalysisRobotInfoOutcomeCallable DescribeAIAnalysisRobotInfoCallable(const Model::DescribeAIAnalysisRobotInfoRequest& request);

                /**
                 *Query SMTP mailbox access information of the AI assistant
                 * @param req DescribeAIAnalysisSMTPRequest
                 * @return DescribeAIAnalysisSMTPOutcome
                 */
                DescribeAIAnalysisSMTPOutcome DescribeAIAnalysisSMTP(const Model::DescribeAIAnalysisSMTPRequest &request);
                void DescribeAIAnalysisSMTPAsync(const Model::DescribeAIAnalysisSMTPRequest& request, const DescribeAIAnalysisSMTPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIAnalysisSMTPOutcomeCallable DescribeAIAnalysisSMTPCallable(const Model::DescribeAIAnalysisSMTPRequest& request);

                /**
                 *Query the AI-Link engine configuration
                 * @param req DescribeAILinkSettingRequest
                 * @return DescribeAILinkSettingOutcome
                 */
                DescribeAILinkSettingOutcome DescribeAILinkSetting(const Model::DescribeAILinkSettingRequest &request);
                void DescribeAILinkSettingAsync(const Model::DescribeAILinkSettingRequest& request, const DescribeAILinkSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAILinkSettingOutcomeCallable DescribeAILinkSettingCallable(const Model::DescribeAILinkSettingRequest& request);

                /**
                 *Query the list of AI scheduled tasks.

Supports paging query and status filtering, and returns the scheduled task list and total number of entries.
                 * @param req DescribeAIScheduleListRequest
                 * @return DescribeAIScheduleListOutcome
                 */
                DescribeAIScheduleListOutcome DescribeAIScheduleList(const Model::DescribeAIScheduleListRequest &request);
                void DescribeAIScheduleListAsync(const Model::DescribeAIScheduleListRequest& request, const DescribeAIScheduleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIScheduleListOutcomeCallable DescribeAIScheduleListCallable(const Model::DescribeAIScheduleListRequest& request);

                /**
                 *Queries AI scheduled task trigger plans.

This API is used to query the future trigger plan list of a specified AI scheduled task within a given time window.
                 * @param req DescribeAISchedulePlanListRequest
                 * @return DescribeAISchedulePlanListOutcome
                 */
                DescribeAISchedulePlanListOutcome DescribeAISchedulePlanList(const Model::DescribeAISchedulePlanListRequest &request);
                void DescribeAISchedulePlanListAsync(const Model::DescribeAISchedulePlanListRequest& request, const DescribeAISchedulePlanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAISchedulePlanListOutcomeCallable DescribeAISchedulePlanListCallable(const Model::DescribeAISchedulePlanListRequest& request);

                /**
                 *Queries AI scheduled task statistics information.

Returns the total number of scheduled tasks and the number of running tasks for the current user.
                 * @param req DescribeAIScheduleStatsRequest
                 * @return DescribeAIScheduleStatsOutcome
                 */
                DescribeAIScheduleStatsOutcome DescribeAIScheduleStats(const Model::DescribeAIScheduleStatsRequest &request);
                void DescribeAIScheduleStatsAsync(const Model::DescribeAIScheduleStatsRequest& request, const DescribeAIScheduleStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIScheduleStatsOutcomeCallable DescribeAIScheduleStatsCallable(const Model::DescribeAIScheduleStatsRequest& request);

                /**
                 *Queries the details of AI scheduled task executions.

This API is used to query the detailed information of a specified task execution by task ID, including the execution status and results.
                 * @param req DescribeAIScheduleTaskDetailRequest
                 * @return DescribeAIScheduleTaskDetailOutcome
                 */
                DescribeAIScheduleTaskDetailOutcome DescribeAIScheduleTaskDetail(const Model::DescribeAIScheduleTaskDetailRequest &request);
                void DescribeAIScheduleTaskDetailAsync(const Model::DescribeAIScheduleTaskDetailRequest& request, const DescribeAIScheduleTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIScheduleTaskDetailOutcomeCallable DescribeAIScheduleTaskDetailCallable(const Model::DescribeAIScheduleTaskDetailRequest& request);

                /**
                 *This API is used to query the scheduled AI task execution list.

Queries the historical execution records of AI scheduled tasks. Supports pagination and filtering by scheduled task ID.
                 * @param req DescribeAIScheduleTaskListRequest
                 * @return DescribeAIScheduleTaskListOutcome
                 */
                DescribeAIScheduleTaskListOutcome DescribeAIScheduleTaskList(const Model::DescribeAIScheduleTaskListRequest &request);
                void DescribeAIScheduleTaskListAsync(const Model::DescribeAIScheduleTaskListRequest& request, const DescribeAIScheduleTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIScheduleTaskListOutcomeCallable DescribeAIScheduleTaskListCallable(const Model::DescribeAIScheduleTaskListRequest& request);

                /**
                 *Access key alarm record AI analysis result details
                 * @param req DescribeAKAnalysisDetailRequest
                 * @return DescribeAKAnalysisDetailOutcome
                 */
                DescribeAKAnalysisDetailOutcome DescribeAKAnalysisDetail(const Model::DescribeAKAnalysisDetailRequest &request);
                void DescribeAKAnalysisDetailAsync(const Model::DescribeAKAnalysisDetailRequest& request, const DescribeAKAnalysisDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAKAnalysisDetailOutcomeCallable DescribeAKAnalysisDetailCallable(const Model::DescribeAKAnalysisDetailRequest& request);

                /**
                 *Determine whether the user is a grayscale user
                 * @param req DescribeAbTestUserRequest
                 * @return DescribeAbTestUserOutcome
                 */
                DescribeAbTestUserOutcome DescribeAbTestUser(const Model::DescribeAbTestUserRequest &request);
                void DescribeAbTestUserAsync(const Model::DescribeAbTestUserRequest& request, const DescribeAbTestUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAbTestUserOutcomeCallable DescribeAbTestUserCallable(const Model::DescribeAbTestUserRequest& request);

                /**
                 *Get the call record list
                 * @param req DescribeAbnormalCallRecordRequest
                 * @return DescribeAbnormalCallRecordOutcome
                 */
                DescribeAbnormalCallRecordOutcome DescribeAbnormalCallRecord(const Model::DescribeAbnormalCallRecordRequest &request);
                void DescribeAbnormalCallRecordAsync(const Model::DescribeAbnormalCallRecordRequest& request, const DescribeAbnormalCallRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAbnormalCallRecordOutcomeCallable DescribeAbnormalCallRecordCallable(const Model::DescribeAbnormalCallRecordRequest& request);

                /**
                 *List of access key alarm records
                 * @param req DescribeAccessKeyAlarmRequest
                 * @return DescribeAccessKeyAlarmOutcome
                 */
                DescribeAccessKeyAlarmOutcome DescribeAccessKeyAlarm(const Model::DescribeAccessKeyAlarmRequest &request);
                void DescribeAccessKeyAlarmAsync(const Model::DescribeAccessKeyAlarmRequest& request, const DescribeAccessKeyAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessKeyAlarmOutcomeCallable DescribeAccessKeyAlarmCallable(const Model::DescribeAccessKeyAlarmRequest& request);

                /**
                 *Access key alarm record details
                 * @param req DescribeAccessKeyAlarmDetailRequest
                 * @return DescribeAccessKeyAlarmDetailOutcome
                 */
                DescribeAccessKeyAlarmDetailOutcome DescribeAccessKeyAlarmDetail(const Model::DescribeAccessKeyAlarmDetailRequest &request);
                void DescribeAccessKeyAlarmDetailAsync(const Model::DescribeAccessKeyAlarmDetailRequest& request, const DescribeAccessKeyAlarmDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessKeyAlarmDetailOutcomeCallable DescribeAccessKeyAlarmDetailCallable(const Model::DescribeAccessKeyAlarmDetailRequest& request);

                /**
                 *Retrieve the user access key asset list
                 * @param req DescribeAccessKeyAssetRequest
                 * @return DescribeAccessKeyAssetOutcome
                 */
                DescribeAccessKeyAssetOutcome DescribeAccessKeyAsset(const Model::DescribeAccessKeyAssetRequest &request);
                void DescribeAccessKeyAssetAsync(const Model::DescribeAccessKeyAssetRequest& request, const DescribeAccessKeyAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessKeyAssetOutcomeCallable DescribeAccessKeyAssetCallable(const Model::DescribeAccessKeyAssetRequest& request);

                /**
                 *List of access key risk records
                 * @param req DescribeAccessKeyRiskRequest
                 * @return DescribeAccessKeyRiskOutcome
                 */
                DescribeAccessKeyRiskOutcome DescribeAccessKeyRisk(const Model::DescribeAccessKeyRiskRequest &request);
                void DescribeAccessKeyRiskAsync(const Model::DescribeAccessKeyRiskRequest& request, const DescribeAccessKeyRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessKeyRiskOutcomeCallable DescribeAccessKeyRiskCallable(const Model::DescribeAccessKeyRiskRequest& request);

                /**
                 *Access key risk record details
                 * @param req DescribeAccessKeyRiskDetailRequest
                 * @return DescribeAccessKeyRiskDetailOutcome
                 */
                DescribeAccessKeyRiskDetailOutcome DescribeAccessKeyRiskDetail(const Model::DescribeAccessKeyRiskDetailRequest &request);
                void DescribeAccessKeyRiskDetailAsync(const Model::DescribeAccessKeyRiskDetailRequest& request, const DescribeAccessKeyRiskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessKeyRiskDetailOutcomeCallable DescribeAccessKeyRiskDetailCallable(const Model::DescribeAccessKeyRiskDetailRequest& request);

                /**
                 *This API is used to query account details of a user.
                 * @param req DescribeAccessKeyUserDetailRequest
                 * @return DescribeAccessKeyUserDetailOutcome
                 */
                DescribeAccessKeyUserDetailOutcome DescribeAccessKeyUserDetail(const Model::DescribeAccessKeyUserDetailRequest &request);
                void DescribeAccessKeyUserDetailAsync(const Model::DescribeAccessKeyUserDetailRequest& request, const DescribeAccessKeyUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessKeyUserDetailOutcomeCallable DescribeAccessKeyUserDetailCallable(const Model::DescribeAccessKeyUserDetailRequest& request);

                /**
                 *Query user account list
                 * @param req DescribeAccessKeyUserListRequest
                 * @return DescribeAccessKeyUserListOutcome
                 */
                DescribeAccessKeyUserListOutcome DescribeAccessKeyUserList(const Model::DescribeAccessKeyUserListRequest &request);
                void DescribeAccessKeyUserListAsync(const Model::DescribeAccessKeyUserListRequest& request, const DescribeAccessKeyUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessKeyUserListOutcomeCallable DescribeAccessKeyUserListCallable(const Model::DescribeAccessKeyUserListRequest& request);

                /**
                 *Access key alarm record list
                 * @param req DescribeAccessKeyWhiteListRequest
                 * @return DescribeAccessKeyWhiteListOutcome
                 */
                DescribeAccessKeyWhiteListOutcome DescribeAccessKeyWhiteList(const Model::DescribeAccessKeyWhiteListRequest &request);
                void DescribeAccessKeyWhiteListAsync(const Model::DescribeAccessKeyWhiteListRequest& request, const DescribeAccessKeyWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessKeyWhiteListOutcomeCallable DescribeAccessKeyWhiteListCallable(const Model::DescribeAccessKeyWhiteListRequest& request);

                /**
                 *Query client configuration settings (configuration group). This is a standalone API split from DescribeAgentRunMode.
                 * @param req DescribeAgentConfigSettingRequest
                 * @return DescribeAgentConfigSettingOutcome
                 */
                DescribeAgentConfigSettingOutcome DescribeAgentConfigSetting(const Model::DescribeAgentConfigSettingRequest &request);
                void DescribeAgentConfigSettingAsync(const Model::DescribeAgentConfigSettingRequest& request, const DescribeAgentConfigSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentConfigSettingOutcomeCallable DescribeAgentConfigSettingCallable(const Model::DescribeAgentConfigSettingRequest& request);

                /**
                 *Get the client running mode and runtime configuration information
                 * @param req DescribeAgentRunModeRequest
                 * @return DescribeAgentRunModeOutcome
                 */
                DescribeAgentRunModeOutcome DescribeAgentRunMode(const Model::DescribeAgentRunModeRequest &request);
                void DescribeAgentRunModeAsync(const Model::DescribeAgentRunModeRequest& request, const DescribeAgentRunModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentRunModeOutcomeCallable DescribeAgentRunModeCallable(const Model::DescribeAgentRunModeRequest& request);

                /**
                 *Query client running policies (policy groups). This is a standalone API split from DescribeAgentRunMode.
                 * @param req DescribeAgentRunPolicyRequest
                 * @return DescribeAgentRunPolicyOutcome
                 */
                DescribeAgentRunPolicyOutcome DescribeAgentRunPolicy(const Model::DescribeAgentRunPolicyRequest &request);
                void DescribeAgentRunPolicyAsync(const Model::DescribeAgentRunPolicyRequest& request, const DescribeAgentRunPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentRunPolicyOutcomeCallable DescribeAgentRunPolicyCallable(const Model::DescribeAgentRunPolicyRequest& request);

                /**
                 *Alarm Center full alarm list API
                 * @param req DescribeAlertListRequest
                 * @return DescribeAlertListOutcome
                 */
                DescribeAlertListOutcome DescribeAlertList(const Model::DescribeAlertListRequest &request);
                void DescribeAlertListAsync(const Model::DescribeAlertListRequest& request, const DescribeAlertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlertListOutcomeCallable DescribeAlertListCallable(const Model::DescribeAlertListRequest& request);

                /**
                 *Query the component list in an asset.
                 * @param req DescribeAssetComponentListRequest
                 * @return DescribeAssetComponentListOutcome
                 */
                DescribeAssetComponentListOutcome DescribeAssetComponentList(const Model::DescribeAssetComponentListRequest &request);
                void DescribeAssetComponentListAsync(const Model::DescribeAssetComponentListRequest& request, const DescribeAssetComponentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetComponentListOutcomeCallable DescribeAssetComponentListCallable(const Model::DescribeAssetComponentListRequest& request);

                /**
                 *Queries the list of associated images of image repository components.
                 * @param req DescribeAssetComponentRelatedImageListRequest
                 * @return DescribeAssetComponentRelatedImageListOutcome
                 */
                DescribeAssetComponentRelatedImageListOutcome DescribeAssetComponentRelatedImageList(const Model::DescribeAssetComponentRelatedImageListRequest &request);
                void DescribeAssetComponentRelatedImageListAsync(const Model::DescribeAssetComponentRelatedImageListRequest& request, const DescribeAssetComponentRelatedImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetComponentRelatedImageListOutcomeCallable DescribeAssetComponentRelatedImageListCallable(const Model::DescribeAssetComponentRelatedImageListRequest& request);

                /**
                 *Asset detail information
                 * @param req DescribeAssetDetailRequest
                 * @return DescribeAssetDetailOutcome
                 */
                DescribeAssetDetailOutcome DescribeAssetDetail(const Model::DescribeAssetDetailRequest &request);
                void DescribeAssetDetailAsync(const Model::DescribeAssetDetailRequest& request, const DescribeAssetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetDetailOutcomeCallable DescribeAssetDetailCallable(const Model::DescribeAssetDetailRequest& request);

                /**
                 *Asset search view
                 * @param req DescribeAssetFilterViewsRequest
                 * @return DescribeAssetFilterViewsOutcome
                 */
                DescribeAssetFilterViewsOutcome DescribeAssetFilterViews(const Model::DescribeAssetFilterViewsRequest &request);
                void DescribeAssetFilterViewsAsync(const Model::DescribeAssetFilterViewsRequest& request, const DescribeAssetFilterViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetFilterViewsOutcomeCallable DescribeAssetFilterViewsCallable(const Model::DescribeAssetFilterViewsRequest& request);

                /**
                 *Asset information
                 * @param req DescribeAssetInfoRequest
                 * @return DescribeAssetInfoOutcome
                 */
                DescribeAssetInfoOutcome DescribeAssetInfo(const Model::DescribeAssetInfoRequest &request);
                void DescribeAssetInfoAsync(const Model::DescribeAssetInfoRequest& request, const DescribeAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetInfoOutcomeCallable DescribeAssetInfoCallable(const Model::DescribeAssetInfoRequest& request);

                /**
                 *Last Synchronization Time of Assets
                 * @param req DescribeAssetLastSyncTimeRequest
                 * @return DescribeAssetLastSyncTimeOutcome
                 */
                DescribeAssetLastSyncTimeOutcome DescribeAssetLastSyncTime(const Model::DescribeAssetLastSyncTimeRequest &request);
                void DescribeAssetLastSyncTimeAsync(const Model::DescribeAssetLastSyncTimeRequest& request, const DescribeAssetLastSyncTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetLastSyncTimeOutcomeCallable DescribeAssetLastSyncTimeCallable(const Model::DescribeAssetLastSyncTimeRequest& request);

                /**
                 *Asset Overview statistics
                 * @param req DescribeAssetOverviewRequest
                 * @return DescribeAssetOverviewOutcome
                 */
                DescribeAssetOverviewOutcome DescribeAssetOverview(const Model::DescribeAssetOverviewRequest &request);
                void DescribeAssetOverviewAsync(const Model::DescribeAssetOverviewRequest& request, const DescribeAssetOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetOverviewOutcomeCallable DescribeAssetOverviewCallable(const Model::DescribeAssetOverviewRequest& request);

                /**
                 *This API is used to query the process list of host nodes on exposed paths in cloud boundary analysis.
                 * @param req DescribeAssetProcessListRequest
                 * @return DescribeAssetProcessListOutcome
                 */
                DescribeAssetProcessListOutcome DescribeAssetProcessList(const Model::DescribeAssetProcessListRequest &request);
                void DescribeAssetProcessListAsync(const Model::DescribeAssetProcessListRequest& request, const DescribeAssetProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetProcessListOutcomeCallable DescribeAssetProcessListCallable(const Model::DescribeAssetProcessListRequest& request);

                /**
                 *Asset risk details
                 * @param req DescribeAssetRiskDetailRequest
                 * @return DescribeAssetRiskDetailOutcome
                 */
                DescribeAssetRiskDetailOutcome DescribeAssetRiskDetail(const Model::DescribeAssetRiskDetailRequest &request);
                void DescribeAssetRiskDetailAsync(const Model::DescribeAssetRiskDetailRequest& request, const DescribeAssetRiskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetRiskDetailOutcomeCallable DescribeAssetRiskDetailCallable(const Model::DescribeAssetRiskDetailRequest& request);

                /**
                 *Cloud resource configuration risk list from the asset perspective
                 * @param req DescribeAssetRiskListRequest
                 * @return DescribeAssetRiskListOutcome
                 */
                DescribeAssetRiskListOutcome DescribeAssetRiskList(const Model::DescribeAssetRiskListRequest &request);
                void DescribeAssetRiskListAsync(const Model::DescribeAssetRiskListRequest& request, const DescribeAssetRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetRiskListOutcomeCallable DescribeAssetRiskListCallable(const Model::DescribeAssetRiskListRequest& request);

                /**
                 *Asset sync task status
                 * @param req DescribeAssetSyncTaskStatusRequest
                 * @return DescribeAssetSyncTaskStatusOutcome
                 */
                DescribeAssetSyncTaskStatusOutcome DescribeAssetSyncTaskStatus(const Model::DescribeAssetSyncTaskStatusRequest &request);
                void DescribeAssetSyncTaskStatusAsync(const Model::DescribeAssetSyncTaskStatusRequest& request, const DescribeAssetSyncTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetSyncTaskStatusOutcomeCallable DescribeAssetSyncTaskStatusCallable(const Model::DescribeAssetSyncTaskStatusRequest& request);

                /**
                 *Retrieves asset tag attributes
                 * @param req DescribeAssetTagAttributesRequest
                 * @return DescribeAssetTagAttributesOutcome
                 */
                DescribeAssetTagAttributesOutcome DescribeAssetTagAttributes(const Model::DescribeAssetTagAttributesRequest &request);
                void DescribeAssetTagAttributesAsync(const Model::DescribeAssetTagAttributesRequest& request, const DescribeAssetTagAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetTagAttributesOutcomeCallable DescribeAssetTagAttributesCallable(const Model::DescribeAssetTagAttributesRequest& request);

                /**
                 *Asset tag tree structured data
                 * @param req DescribeAssetTagTreeRequest
                 * @return DescribeAssetTagTreeOutcome
                 */
                DescribeAssetTagTreeOutcome DescribeAssetTagTree(const Model::DescribeAssetTagTreeRequest &request);
                void DescribeAssetTagTreeAsync(const Model::DescribeAssetTagTreeRequest& request, const DescribeAssetTagTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetTagTreeOutcomeCallable DescribeAssetTagTreeCallable(const Model::DescribeAssetTagTreeRequest& request);

                /**
                 *All assets
                 * @param req DescribeAssetTagsRequest
                 * @return DescribeAssetTagsOutcome
                 */
                DescribeAssetTagsOutcome DescribeAssetTags(const Model::DescribeAssetTagsRequest &request);
                void DescribeAssetTagsAsync(const Model::DescribeAssetTagsRequest& request, const DescribeAssetTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetTagsOutcomeCallable DescribeAssetTagsCallable(const Model::DescribeAssetTagsRequest& request);

                /**
                 *Asset tree structure
                 * @param req DescribeAssetTreeRequest
                 * @return DescribeAssetTreeOutcome
                 */
                DescribeAssetTreeOutcome DescribeAssetTree(const Model::DescribeAssetTreeRequest &request);
                void DescribeAssetTreeAsync(const Model::DescribeAssetTreeRequest& request, const DescribeAssetTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetTreeOutcomeCallable DescribeAssetTreeCallable(const Model::DescribeAssetTreeRequest& request);

                /**
                 *Obtain Vulnerability Risk List from Asset's Perspective
                 * @param req DescribeAssetViewVulRiskListRequest
                 * @return DescribeAssetViewVulRiskListOutcome
                 */
                DescribeAssetViewVulRiskListOutcome DescribeAssetViewVulRiskList(const Model::DescribeAssetViewVulRiskListRequest &request);
                void DescribeAssetViewVulRiskListAsync(const Model::DescribeAssetViewVulRiskListRequest& request, const DescribeAssetViewVulRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetViewVulRiskListOutcomeCallable DescribeAssetViewVulRiskListCallable(const Model::DescribeAssetViewVulRiskListRequest& request);

                /**
                 *This API is used to query the region list of the backend scanning engine.
                 * @param req DescribeBackendScanEngineRegionListRequest
                 * @return DescribeBackendScanEngineRegionListOutcome
                 */
                DescribeBackendScanEngineRegionListOutcome DescribeBackendScanEngineRegionList(const Model::DescribeBackendScanEngineRegionListRequest &request);
                void DescribeBackendScanEngineRegionListAsync(const Model::DescribeBackendScanEngineRegionListRequest& request, const DescribeBackendScanEngineRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackendScanEngineRegionListOutcomeCallable DescribeBackendScanEngineRegionListCallable(const Model::DescribeBackendScanEngineRegionListRequest& request);

                /**
                 *This API is used to obtain the brute-force blocking mode.
                 * @param req DescribeBanModeRequest
                 * @return DescribeBanModeOutcome
                 */
                DescribeBanModeOutcome DescribeBanMode(const Model::DescribeBanModeRequest &request);
                void DescribeBanModeAsync(const Model::DescribeBanModeRequest& request, const DescribeBanModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBanModeOutcomeCallable DescribeBanModeCallable(const Model::DescribeBanModeRequest& request);

                /**
                 *This API is used to obtain the block button status.
                 * @param req DescribeBanStatusRequest
                 * @return DescribeBanStatusOutcome
                 */
                DescribeBanStatusOutcome DescribeBanStatus(const Model::DescribeBanStatusRequest &request);
                void DescribeBanStatusAsync(const Model::DescribeBanStatusRequest& request, const DescribeBanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBanStatusOutcomeCallable DescribeBanStatusCallable(const Model::DescribeBanStatusRequest& request);

                /**
                 *This API is used to obtain the aggregated scan result list by detection item, for showing the number of passed and failed assets by detection item on the "Detection Item" Tab of the policy details page.
                 * @param req DescribeBaselineAggregatedItemListRequest
                 * @return DescribeBaselineAggregatedItemListOutcome
                 */
                DescribeBaselineAggregatedItemListOutcome DescribeBaselineAggregatedItemList(const Model::DescribeBaselineAggregatedItemListRequest &request);
                void DescribeBaselineAggregatedItemListAsync(const Model::DescribeBaselineAggregatedItemListRequest& request, const DescribeBaselineAggregatedItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineAggregatedItemListOutcomeCallable DescribeBaselineAggregatedItemListCallable(const Model::DescribeBaselineAggregatedItemListRequest& request);

                /**
                 *This API is used to get the aggregation scan result list by baseline policy dimension, for the "Baseline Scan Policy" module on the overview page to display pass/fail status by policy.
                 * @param req DescribeBaselineAggregatedPolicyListRequest
                 * @return DescribeBaselineAggregatedPolicyListOutcome
                 */
                DescribeBaselineAggregatedPolicyListOutcome DescribeBaselineAggregatedPolicyList(const Model::DescribeBaselineAggregatedPolicyListRequest &request);
                void DescribeBaselineAggregatedPolicyListAsync(const Model::DescribeBaselineAggregatedPolicyListRequest& request, const DescribeBaselineAggregatedPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineAggregatedPolicyListOutcomeCallable DescribeBaselineAggregatedPolicyListCallable(const Model::DescribeBaselineAggregatedPolicyListRequest& request);

                /**
                 *Queries the list of Policy IDs currently at the "statistical calculation" status, used for frontend polling to judge whether the scan results statistics are ready.
                 * @param req DescribeBaselineCalculatingStatisticsPolicyIDListRequest
                 * @return DescribeBaselineCalculatingStatisticsPolicyIDListOutcome
                 */
                DescribeBaselineCalculatingStatisticsPolicyIDListOutcome DescribeBaselineCalculatingStatisticsPolicyIDList(const Model::DescribeBaselineCalculatingStatisticsPolicyIDListRequest &request);
                void DescribeBaselineCalculatingStatisticsPolicyIDListAsync(const Model::DescribeBaselineCalculatingStatisticsPolicyIDListRequest& request, const DescribeBaselineCalculatingStatisticsPolicyIDListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineCalculatingStatisticsPolicyIDListOutcomeCallable DescribeBaselineCalculatingStatisticsPolicyIDListCallable(const Model::DescribeBaselineCalculatingStatisticsPolicyIDListRequest& request);

                /**
                 *This API is used to query the detection item list of a category.
                 * @param req DescribeBaselineCategoryItemListRequest
                 * @return DescribeBaselineCategoryItemListOutcome
                 */
                DescribeBaselineCategoryItemListOutcome DescribeBaselineCategoryItemList(const Model::DescribeBaselineCategoryItemListRequest &request);
                void DescribeBaselineCategoryItemListAsync(const Model::DescribeBaselineCategoryItemListRequest& request, const DescribeBaselineCategoryItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineCategoryItemListOutcomeCallable DescribeBaselineCategoryItemListCallable(const Model::DescribeBaselineCategoryItemListRequest& request);

                /**
                 *Get the historical record list of baseline risk corrections, used to show fixed detection items and corresponding assets on the "Correction Record" page.
                 * @param req DescribeBaselineFixRecordListRequest
                 * @return DescribeBaselineFixRecordListOutcome
                 */
                DescribeBaselineFixRecordListOutcome DescribeBaselineFixRecordList(const Model::DescribeBaselineFixRecordListRequest &request);
                void DescribeBaselineFixRecordListAsync(const Model::DescribeBaselineFixRecordListRequest& request, const DescribeBaselineFixRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineFixRecordListOutcomeCallable DescribeBaselineFixRecordListCallable(const Model::DescribeBaselineFixRecordListRequest& request);

                /**
                 *This API is used to retrieve the risk record list of detection item dimensions.
                 * @param req DescribeBaselineItemRiskListRequest
                 * @return DescribeBaselineItemRiskListOutcome
                 */
                DescribeBaselineItemRiskListOutcome DescribeBaselineItemRiskList(const Model::DescribeBaselineItemRiskListRequest &request);
                void DescribeBaselineItemRiskListAsync(const Model::DescribeBaselineItemRiskListRequest& request, const DescribeBaselineItemRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineItemRiskListOutcomeCallable DescribeBaselineItemRiskListCallable(const Model::DescribeBaselineItemRiskListRequest& request);

                /**
                 *Get the detection item list of built-in baseline classifications (parent category -> subcategory -> built-in detection item ID list) for selecting baseline detection items on the policy editing page.
                 * @param req DescribeBaselineMainTaskItemListRequest
                 * @return DescribeBaselineMainTaskItemListOutcome
                 */
                DescribeBaselineMainTaskItemListOutcome DescribeBaselineMainTaskItemList(const Model::DescribeBaselineMainTaskItemListRequest &request);
                void DescribeBaselineMainTaskItemListAsync(const Model::DescribeBaselineMainTaskItemListRequest& request, const DescribeBaselineMainTaskItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineMainTaskItemListOutcomeCallable DescribeBaselineMainTaskItemListCallable(const Model::DescribeBaselineMainTaskItemListRequest& request);

                /**
                 *Get the scan main task list for the Task Record page to show the history and results of one-click scan, period scanning, and disperse scan.
                 * @param req DescribeBaselineMainTaskListRequest
                 * @return DescribeBaselineMainTaskListOutcome
                 */
                DescribeBaselineMainTaskListOutcome DescribeBaselineMainTaskList(const Model::DescribeBaselineMainTaskListRequest &request);
                void DescribeBaselineMainTaskListAsync(const Model::DescribeBaselineMainTaskListRequest& request, const DescribeBaselineMainTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineMainTaskListOutcomeCallable DescribeBaselineMainTaskListCallable(const Model::DescribeBaselineMainTaskListRequest& request);

                /**
                 *Retrieve header data of the baseline overview page, including the total count of failed detection items, the number of fixes in the past one year, the last scan time, and whether period scanning is currently enabled.
                 * @param req DescribeBaselineOverviewRequest
                 * @return DescribeBaselineOverviewOutcome
                 */
                DescribeBaselineOverviewOutcome DescribeBaselineOverview(const Model::DescribeBaselineOverviewRequest &request);
                void DescribeBaselineOverviewAsync(const Model::DescribeBaselineOverviewRequest& request, const DescribeBaselineOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineOverviewOutcomeCallable DescribeBaselineOverviewCallable(const Model::DescribeBaselineOverviewRequest& request);

                /**
                 *This API is used to retrieve the built-in baseline classification tree (parent category → subcategory → built-in detection item ID list) for policy details display.
                 * @param req DescribeBaselinePolicyCategoryListRequest
                 * @return DescribeBaselinePolicyCategoryListOutcome
                 */
                DescribeBaselinePolicyCategoryListOutcome DescribeBaselinePolicyCategoryList(const Model::DescribeBaselinePolicyCategoryListRequest &request);
                void DescribeBaselinePolicyCategoryListAsync(const Model::DescribeBaselinePolicyCategoryListRequest& request, const DescribeBaselinePolicyCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselinePolicyCategoryListOutcomeCallable DescribeBaselinePolicyCategoryListCallable(const Model::DescribeBaselinePolicyCategoryListRequest& request);

                /**
                 *Get the Detection Item List configured in a policy.
                 * @param req DescribeBaselinePolicyItemListRequest
                 * @return DescribeBaselinePolicyItemListOutcome
                 */
                DescribeBaselinePolicyItemListOutcome DescribeBaselinePolicyItemList(const Model::DescribeBaselinePolicyItemListRequest &request);
                void DescribeBaselinePolicyItemListAsync(const Model::DescribeBaselinePolicyItemListRequest& request, const DescribeBaselinePolicyItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselinePolicyItemListOutcomeCallable DescribeBaselinePolicyItemListCallable(const Model::DescribeBaselinePolicyItemListRequest& request);

                /**
                 *This API is used to obtain the list of baseline policies for list page display of system and custom policies and their configuration status in scenarios such as cycle plan management.
                 * @param req DescribeBaselinePolicyListRequest
                 * @return DescribeBaselinePolicyListOutcome
                 */
                DescribeBaselinePolicyListOutcome DescribeBaselinePolicyList(const Model::DescribeBaselinePolicyListRequest &request);
                void DescribeBaselinePolicyListAsync(const Model::DescribeBaselinePolicyListRequest& request, const DescribeBaselinePolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselinePolicyListOutcomeCallable DescribeBaselinePolicyListCallable(const Model::DescribeBaselinePolicyListRequest& request);

                /**
                 *This API is used to obtain the list of existing users for a baseline policy name.
                 * @param req DescribeBaselinePolicyNameExistAppidListRequest
                 * @return DescribeBaselinePolicyNameExistAppidListOutcome
                 */
                DescribeBaselinePolicyNameExistAppidListOutcome DescribeBaselinePolicyNameExistAppidList(const Model::DescribeBaselinePolicyNameExistAppidListRequest &request);
                void DescribeBaselinePolicyNameExistAppidListAsync(const Model::DescribeBaselinePolicyNameExistAppidListRequest& request, const DescribeBaselinePolicyNameExistAppidListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselinePolicyNameExistAppidListOutcomeCallable DescribeBaselinePolicyNameExistAppidListCallable(const Model::DescribeBaselinePolicyNameExistAppidListRequest& request);

                /**
                 *Get the scan subtask list to show the scan status and failure reason of each host or cluster in the "Asset dimension" section of the task details page.
                 * @param req DescribeBaselineSubTaskListRequest
                 * @return DescribeBaselineSubTaskListOutcome
                 */
                DescribeBaselineSubTaskListOutcome DescribeBaselineSubTaskList(const Model::DescribeBaselineSubTaskListRequest &request);
                void DescribeBaselineSubTaskListAsync(const Model::DescribeBaselineSubTaskListRequest& request, const DescribeBaselineSubTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineSubTaskListOutcomeCallable DescribeBaselineSubTaskListCallable(const Model::DescribeBaselineSubTaskListRequest& request);

                /**
                 *This API is used to get the baseline synchronization configuration of the current admin account. Only the Group Administrator can call this API. For ordinary member accounts, please use DescribeBaselineUserOtherConf.
                 * @param req DescribeBaselineSyncConfRequest
                 * @return DescribeBaselineSyncConfOutcome
                 */
                DescribeBaselineSyncConfOutcome DescribeBaselineSyncConf(const Model::DescribeBaselineSyncConfRequest &request);
                void DescribeBaselineSyncConfAsync(const Model::DescribeBaselineSyncConfRequest& request, const DescribeBaselineSyncConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineSyncConfOutcomeCallable DescribeBaselineSyncConfCallable(const Model::DescribeBaselineSyncConfRequest& request);

                /**
                 *Obtain the system built-in baseline classification tree (parent category → subcategory → built-in detection item ID list), used for selecting baseline detection items on the policy editing page.
                 * @param req DescribeBaselineSystemCategoryListRequest
                 * @return DescribeBaselineSystemCategoryListOutcome
                 */
                DescribeBaselineSystemCategoryListOutcome DescribeBaselineSystemCategoryList(const Model::DescribeBaselineSystemCategoryListRequest &request);
                void DescribeBaselineSystemCategoryListAsync(const Model::DescribeBaselineSystemCategoryListRequest& request, const DescribeBaselineSystemCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineSystemCategoryListOutcomeCallable DescribeBaselineSystemCategoryListCallable(const Model::DescribeBaselineSystemCategoryListRequest& request);

                /**
                 *Retrieve user-level baseline configuration for the current account.
                 * @param req DescribeBaselineUserOtherConfRequest
                 * @return DescribeBaselineUserOtherConfOutcome
                 */
                DescribeBaselineUserOtherConfOutcome DescribeBaselineUserOtherConf(const Model::DescribeBaselineUserOtherConfRequest &request);
                void DescribeBaselineUserOtherConfAsync(const Model::DescribeBaselineUserOtherConfRequest& request, const DescribeBaselineUserOtherConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineUserOtherConfOutcomeCallable DescribeBaselineUserOtherConfCallable(const Model::DescribeBaselineUserOtherConfRequest& request);

                /**
                 *This API is used to search for the custom dictionary of weak passwords for users under the current account.
                 * @param req DescribeBaselineUserWeakPasswordConfRequest
                 * @return DescribeBaselineUserWeakPasswordConfOutcome
                 */
                DescribeBaselineUserWeakPasswordConfOutcome DescribeBaselineUserWeakPasswordConf(const Model::DescribeBaselineUserWeakPasswordConfRequest &request);
                void DescribeBaselineUserWeakPasswordConfAsync(const Model::DescribeBaselineUserWeakPasswordConfRequest& request, const DescribeBaselineUserWeakPasswordConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaselineUserWeakPasswordConfOutcomeCallable DescribeBaselineUserWeakPasswordConfCallable(const Model::DescribeBaselineUserWeakPasswordConfRequest& request);

                /**
                 *This API is used to obtain brute force cracking rules.
                 * @param req DescribeBruteAttackRulesRequest
                 * @return DescribeBruteAttackRulesOutcome
                 */
                DescribeBruteAttackRulesOutcome DescribeBruteAttackRules(const Model::DescribeBruteAttackRulesRequest &request);
                void DescribeBruteAttackRulesAsync(const Model::DescribeBruteAttackRulesRequest& request, const DescribeBruteAttackRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBruteAttackRulesOutcomeCallable DescribeBruteAttackRulesCallable(const Model::DescribeBruteAttackRulesRequest& request);

                /**
                 *Risk statistics for cloud resource configuration check reports
                 * @param req DescribeCFGRiskReportStatisticsRequest
                 * @return DescribeCFGRiskReportStatisticsOutcome
                 */
                DescribeCFGRiskReportStatisticsOutcome DescribeCFGRiskReportStatistics(const Model::DescribeCFGRiskReportStatisticsRequest &request);
                void DescribeCFGRiskReportStatisticsAsync(const Model::DescribeCFGRiskReportStatisticsRequest& request, const DescribeCFGRiskReportStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCFGRiskReportStatisticsOutcomeCallable DescribeCFGRiskReportStatisticsCallable(const Model::DescribeCFGRiskReportStatisticsRequest& request);

                /**
                 *Query the statistical information of scanning results.
                 * @param req DescribeCFGRiskStatisticsRequest
                 * @return DescribeCFGRiskStatisticsOutcome
                 */
                DescribeCFGRiskStatisticsOutcome DescribeCFGRiskStatistics(const Model::DescribeCFGRiskStatisticsRequest &request);
                void DescribeCFGRiskStatisticsAsync(const Model::DescribeCFGRiskStatisticsRequest& request, const DescribeCFGRiskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCFGRiskStatisticsOutcomeCallable DescribeCFGRiskStatisticsCallable(const Model::DescribeCFGRiskStatisticsRequest& request);

                /**
                 *Cloud Defense Asset Center Statistics
                 * @param req DescribeCFWAssetStatisticsRequest
                 * @return DescribeCFWAssetStatisticsOutcome
                 */
                DescribeCFWAssetStatisticsOutcome DescribeCFWAssetStatistics(const Model::DescribeCFWAssetStatisticsRequest &request);
                void DescribeCFWAssetStatisticsAsync(const Model::DescribeCFWAssetStatisticsRequest& request, const DescribeCFWAssetStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCFWAssetStatisticsOutcomeCallable DescribeCFWAssetStatisticsCallable(const Model::DescribeCFWAssetStatisticsRequest& request);

                /**
                 *Get log index information
                 * @param req DescribeCLSLogIndexV3Request
                 * @return DescribeCLSLogIndexV3Outcome
                 */
                DescribeCLSLogIndexV3Outcome DescribeCLSLogIndexV3(const Model::DescribeCLSLogIndexV3Request &request);
                void DescribeCLSLogIndexV3Async(const Model::DescribeCLSLogIndexV3Request& request, const DescribeCLSLogIndexV3AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCLSLogIndexV3OutcomeCallable DescribeCLSLogIndexV3Callable(const Model::DescribeCLSLogIndexV3Request& request);

                /**
                 *Log analytics retrieval interface v3
                 * @param req DescribeCLSLogListV3Request
                 * @return DescribeCLSLogListV3Outcome
                 */
                DescribeCLSLogListV3Outcome DescribeCLSLogListV3(const Model::DescribeCLSLogListV3Request &request);
                void DescribeCLSLogListV3Async(const Model::DescribeCLSLogListV3Request& request, const DescribeCLSLogListV3AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCLSLogListV3OutcomeCallable DescribeCLSLogListV3Callable(const Model::DescribeCLSLogListV3Request& request);

                /**
                 *Query the consolidated billing information of the current account, including order status, payment mode, quotas, and other detailed information.
                 * @param req DescribeCSCPayInfoRequest
                 * @return DescribeCSCPayInfoOutcome
                 */
                DescribeCSCPayInfoOutcome DescribeCSCPayInfo(const Model::DescribeCSCPayInfoRequest &request);
                void DescribeCSCPayInfoAsync(const Model::DescribeCSCPayInfoRequest& request, const DescribeCSCPayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCSCPayInfoOutcomeCallable DescribeCSCPayInfoCallable(const Model::DescribeCSCPayInfoRequest& request);

                /**
                 *Query the progress of the async binding task returned by ModifyCSIPLicenseBinds.
                 * @param req DescribeCSIPLicenseBindScheduleRequest
                 * @return DescribeCSIPLicenseBindScheduleOutcome
                 */
                DescribeCSIPLicenseBindScheduleOutcome DescribeCSIPLicenseBindSchedule(const Model::DescribeCSIPLicenseBindScheduleRequest &request);
                void DescribeCSIPLicenseBindScheduleAsync(const Model::DescribeCSIPLicenseBindScheduleRequest& request, const DescribeCSIPLicenseBindScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCSIPLicenseBindScheduleOutcomeCallable DescribeCSIPLicenseBindScheduleCallable(const Model::DescribeCSIPLicenseBindScheduleRequest& request);

                /**
                 *This API is used to get host details of a CSIP scan task.
                 * @param req DescribeCSIPMalwareScanTaskDetailRequest
                 * @return DescribeCSIPMalwareScanTaskDetailOutcome
                 */
                DescribeCSIPMalwareScanTaskDetailOutcome DescribeCSIPMalwareScanTaskDetail(const Model::DescribeCSIPMalwareScanTaskDetailRequest &request);
                void DescribeCSIPMalwareScanTaskDetailAsync(const Model::DescribeCSIPMalwareScanTaskDetailRequest& request, const DescribeCSIPMalwareScanTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCSIPMalwareScanTaskDetailOutcomeCallable DescribeCSIPMalwareScanTaskDetailCallable(const Model::DescribeCSIPMalwareScanTaskDetailRequest& request);

                /**
                 *This API is used to query the progress of CSIP manual scan.
                 * @param req DescribeCSIPMalwareScanTaskProgressRequest
                 * @return DescribeCSIPMalwareScanTaskProgressOutcome
                 */
                DescribeCSIPMalwareScanTaskProgressOutcome DescribeCSIPMalwareScanTaskProgress(const Model::DescribeCSIPMalwareScanTaskProgressRequest &request);
                void DescribeCSIPMalwareScanTaskProgressAsync(const Model::DescribeCSIPMalwareScanTaskProgressRequest& request, const DescribeCSIPMalwareScanTaskProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCSIPMalwareScanTaskProgressOutcomeCallable DescribeCSIPMalwareScanTaskProgressCallable(const Model::DescribeCSIPMalwareScanTaskProgressRequest& request);

                /**
                 *Obtain risk center risk overview sample code
                 * @param req DescribeCSIPRiskStatisticsRequest
                 * @return DescribeCSIPRiskStatisticsOutcome
                 */
                DescribeCSIPRiskStatisticsOutcome DescribeCSIPRiskStatistics(const Model::DescribeCSIPRiskStatisticsRequest &request);
                void DescribeCSIPRiskStatisticsAsync(const Model::DescribeCSIPRiskStatisticsRequest& request, const DescribeCSIPRiskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCSIPRiskStatisticsOutcomeCallable DescribeCSIPRiskStatisticsCallable(const Model::DescribeCSIPRiskStatisticsRequest& request);

                /**
                 *This API is used to obtain purchased CSPM order information.
                 * @param req DescribeCSPMPayInfoRequest
                 * @return DescribeCSPMPayInfoOutcome
                 */
                DescribeCSPMPayInfoOutcome DescribeCSPMPayInfo(const Model::DescribeCSPMPayInfoRequest &request);
                void DescribeCSPMPayInfoAsync(const Model::DescribeCSPMPayInfoRequest& request, const DescribeCSPMPayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCSPMPayInfoOutcomeCallable DescribeCSPMPayInfoCallable(const Model::DescribeCSPMPayInfoRequest& request);

                /**
                 *CVM Details
                 * @param req DescribeCVMAssetInfoRequest
                 * @return DescribeCVMAssetInfoOutcome
                 */
                DescribeCVMAssetInfoOutcome DescribeCVMAssetInfo(const Model::DescribeCVMAssetInfoRequest &request);
                void DescribeCVMAssetInfoAsync(const Model::DescribeCVMAssetInfoRequest& request, const DescribeCVMAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCVMAssetInfoOutcomeCallable DescribeCVMAssetInfoCallable(const Model::DescribeCVMAssetInfoRequest& request);

                /**
                 *Get cvm list
                 * @param req DescribeCVMAssetsRequest
                 * @return DescribeCVMAssetsOutcome
                 */
                DescribeCVMAssetsOutcome DescribeCVMAssets(const Model::DescribeCVMAssetsRequest &request);
                void DescribeCVMAssetsAsync(const Model::DescribeCVMAssetsRequest& request, const DescribeCVMAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCVMAssetsOutcomeCallable DescribeCVMAssetsCallable(const Model::DescribeCVMAssetsRequest& request);

                /**
                 *Queries cloud boundary analysis path nodes (dedicated for hosts)
                 * @param req DescribeCWPExposePathRequest
                 * @return DescribeCWPExposePathOutcome
                 */
                DescribeCWPExposePathOutcome DescribeCWPExposePath(const Model::DescribeCWPExposePathRequest &request);
                void DescribeCWPExposePathAsync(const Model::DescribeCWPExposePathRequest& request, const DescribeCWPExposePathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPExposePathOutcomeCallable DescribeCWPExposePathCallable(const Model::DescribeCWPExposePathRequest& request);

                /**
                 *Cloud boundary analysis asset list (suitable for host assets)
                 * @param req DescribeCWPExposuresRequest
                 * @return DescribeCWPExposuresOutcome
                 */
                DescribeCWPExposuresOutcome DescribeCWPExposures(const Model::DescribeCWPExposuresRequest &request);
                void DescribeCWPExposuresAsync(const Model::DescribeCWPExposuresRequest& request, const DescribeCWPExposuresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPExposuresOutcomeCallable DescribeCWPExposuresCallable(const Model::DescribeCWPExposuresRequest& request);

                /**
                 *This API is used to query the binding task progress of the authorization.
                 * @param req DescribeCWPLicenseBindScheduleRequest
                 * @return DescribeCWPLicenseBindScheduleOutcome
                 */
                DescribeCWPLicenseBindScheduleOutcome DescribeCWPLicenseBindSchedule(const Model::DescribeCWPLicenseBindScheduleRequest &request);
                void DescribeCWPLicenseBindScheduleAsync(const Model::DescribeCWPLicenseBindScheduleRequest& request, const DescribeCWPLicenseBindScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPLicenseBindScheduleOutcomeCallable DescribeCWPLicenseBindScheduleCallable(const Model::DescribeCWPLicenseBindScheduleRequest& request);

                /**
                 *Host details
                 * @param req DescribeCWPMachineDetailRequest
                 * @return DescribeCWPMachineDetailOutcome
                 */
                DescribeCWPMachineDetailOutcome DescribeCWPMachineDetail(const Model::DescribeCWPMachineDetailRequest &request);
                void DescribeCWPMachineDetailAsync(const Model::DescribeCWPMachineDetailRequest& request, const DescribeCWPMachineDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPMachineDetailOutcomeCallable DescribeCWPMachineDetailCallable(const Model::DescribeCWPMachineDetailRequest& request);

                /**
                 *This API is used to query the machine operating system list.
                 * @param req DescribeCWPMachineOsListRequest
                 * @return DescribeCWPMachineOsListOutcome
                 */
                DescribeCWPMachineOsListOutcome DescribeCWPMachineOsList(const Model::DescribeCWPMachineOsListRequest &request);
                void DescribeCWPMachineOsListAsync(const Model::DescribeCWPMachineOsListRequest& request, const DescribeCWPMachineOsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPMachineOsListOutcomeCallable DescribeCWPMachineOsListCallable(const Model::DescribeCWPMachineOsListRequest& request);

                /**
                 *Host list
                 * @param req DescribeCWPMachinesRequest
                 * @return DescribeCWPMachinesOutcome
                 */
                DescribeCWPMachinesOutcome DescribeCWPMachines(const Model::DescribeCWPMachinesRequest &request);
                void DescribeCWPMachinesAsync(const Model::DescribeCWPMachinesRequest& request, const DescribeCWPMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPMachinesOutcomeCallable DescribeCWPMachinesCallable(const Model::DescribeCWPMachinesRequest& request);

                /**
                 *Query the resource order list.
                 * @param req DescribeCWPOrderListRequest
                 * @return DescribeCWPOrderListOutcome
                 */
                DescribeCWPOrderListOutcome DescribeCWPOrderList(const Model::DescribeCWPOrderListRequest &request);
                void DescribeCWPOrderListAsync(const Model::DescribeCWPOrderListRequest& request, const DescribeCWPOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPOrderListOutcomeCallable DescribeCWPOrderListCallable(const Model::DescribeCWPOrderListRequest& request);

                /**
                 *Query Tencent Cloud scan IP information
                 * @param req DescribeCWPScanIpInfoRequest
                 * @return DescribeCWPScanIpInfoOutcome
                 */
                DescribeCWPScanIpInfoOutcome DescribeCWPScanIpInfo(const Model::DescribeCWPScanIpInfoRequest &request);
                void DescribeCWPScanIpInfoAsync(const Model::DescribeCWPScanIpInfoRequest& request, const DescribeCWPScanIpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPScanIpInfoOutcomeCallable DescribeCWPScanIpInfoCallable(const Model::DescribeCWPScanIpInfoRequest& request);

                /**
                 *Obtain Task Distribution Duration
                 * @param req DescribeCWPTaskDurationRequest
                 * @return DescribeCWPTaskDurationOutcome
                 */
                DescribeCWPTaskDurationOutcome DescribeCWPTaskDuration(const Model::DescribeCWPTaskDurationRequest &request);
                void DescribeCWPTaskDurationAsync(const Model::DescribeCWPTaskDurationRequest& request, const DescribeCWPTaskDurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCWPTaskDurationOutcomeCallable DescribeCWPTaskDurationCallable(const Model::DescribeCWPTaskDurationRequest& request);

                /**
                 *Query the call record list
                 * @param req DescribeCallRecordRequest
                 * @return DescribeCallRecordOutcome
                 */
                DescribeCallRecordOutcome DescribeCallRecord(const Model::DescribeCallRecordRequest &request);
                void DescribeCallRecordAsync(const Model::DescribeCallRecordRequest& request, const DescribeCallRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCallRecordOutcomeCallable DescribeCallRecordCallable(const Model::DescribeCallRecordRequest& request);

                /**
                 *Query the list of connectivity detection hosts
                 * @param req DescribeCheckConnectivityHostListRequest
                 * @return DescribeCheckConnectivityHostListOutcome
                 */
                DescribeCheckConnectivityHostListOutcome DescribeCheckConnectivityHostList(const Model::DescribeCheckConnectivityHostListRequest &request);
                void DescribeCheckConnectivityHostListAsync(const Model::DescribeCheckConnectivityHostListRequest& request, const DescribeCheckConnectivityHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCheckConnectivityHostListOutcomeCallable DescribeCheckConnectivityHostListCallable(const Model::DescribeCheckConnectivityHostListRequest& request);

                /**
                 *Cloud resource configuration risk list from the check perspective
                 * @param req DescribeCheckViewRisksRequest
                 * @return DescribeCheckViewRisksOutcome
                 */
                DescribeCheckViewRisksOutcome DescribeCheckViewRisks(const Model::DescribeCheckViewRisksRequest &request);
                void DescribeCheckViewRisksAsync(const Model::DescribeCheckViewRisksRequest& request, const DescribeCheckViewRisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCheckViewRisksOutcomeCallable DescribeCheckViewRisksCallable(const Model::DescribeCheckViewRisksRequest& request);

                /**
                 *Queries the listener list corresponding to a specified Tencent Cloud CLB instance.
                 * @param req DescribeClbListenerListRequest
                 * @return DescribeClbListenerListOutcome
                 */
                DescribeClbListenerListOutcome DescribeClbListenerList(const Model::DescribeClbListenerListRequest &request);
                void DescribeClbListenerListAsync(const Model::DescribeClbListenerListRequest& request, const DescribeClbListenerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClbListenerListOutcomeCallable DescribeClbListenerListCallable(const Model::DescribeClbListenerListRequest& request);

                /**
                 *Queries the list of Layer 7 forwarding rules corresponding to a specified CLB instance.
                 * @param req DescribeClbListenerRulesRequest
                 * @return DescribeClbListenerRulesOutcome
                 */
                DescribeClbListenerRulesOutcome DescribeClbListenerRules(const Model::DescribeClbListenerRulesRequest &request);
                void DescribeClbListenerRulesAsync(const Model::DescribeClbListenerRulesRequest& request, const DescribeClbListenerRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClbListenerRulesOutcomeCallable DescribeClbListenerRulesCallable(const Model::DescribeClbListenerRulesRequest& request);

                /**
                 *Query the CLB backend service list
                 * @param req DescribeClbTargetsRequest
                 * @return DescribeClbTargetsOutcome
                 */
                DescribeClbTargetsOutcome DescribeClbTargets(const Model::DescribeClbTargetsRequest &request);
                void DescribeClbTargetsAsync(const Model::DescribeClbTargetsRequest& request, const DescribeClbTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClbTargetsOutcomeCallable DescribeClbTargetsCallable(const Model::DescribeClbTargetsRequest& request);

                /**
                 *All assets
                 * @param req DescribeCloudAssetsRequest
                 * @return DescribeCloudAssetsOutcome
                 */
                DescribeCloudAssetsOutcome DescribeCloudAssets(const Model::DescribeCloudAssetsRequest &request);
                void DescribeCloudAssetsAsync(const Model::DescribeCloudAssetsRequest& request, const DescribeCloudAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudAssetsOutcomeCallable DescribeCloudAssetsCallable(const Model::DescribeCloudAssetsRequest& request);

                /**
                 *Function list
                 * @param req DescribeCloudFunctionListRequest
                 * @return DescribeCloudFunctionListOutcome
                 */
                DescribeCloudFunctionListOutcome DescribeCloudFunctionList(const Model::DescribeCloudFunctionListRequest &request);
                void DescribeCloudFunctionListAsync(const Model::DescribeCloudFunctionListRequest& request, const DescribeCloudFunctionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudFunctionListOutcomeCallable DescribeCloudFunctionListCallable(const Model::DescribeCloudFunctionListRequest& request);

                /**
                 *Queries the asset list of a container cluster
                 * @param req DescribeClusterAssetListRequest
                 * @return DescribeClusterAssetListOutcome
                 */
                DescribeClusterAssetListOutcome DescribeClusterAssetList(const Model::DescribeClusterAssetListRequest &request);
                void DescribeClusterAssetListAsync(const Model::DescribeClusterAssetListRequest& request, const DescribeClusterAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterAssetListOutcomeCallable DescribeClusterAssetListCallable(const Model::DescribeClusterAssetListRequest& request);

                /**
                 *This API is used to query the synchronization task status of cluster assets.
                 * @param req DescribeClusterAssetSyncTaskStatusRequest
                 * @return DescribeClusterAssetSyncTaskStatusOutcome
                 */
                DescribeClusterAssetSyncTaskStatusOutcome DescribeClusterAssetSyncTaskStatus(const Model::DescribeClusterAssetSyncTaskStatusRequest &request);
                void DescribeClusterAssetSyncTaskStatusAsync(const Model::DescribeClusterAssetSyncTaskStatusRequest& request, const DescribeClusterAssetSyncTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterAssetSyncTaskStatusOutcomeCallable DescribeClusterAssetSyncTaskStatusCallable(const Model::DescribeClusterAssetSyncTaskStatusRequest& request);

                /**
                 *This example shows you how to obtain the cluster list.
                 * @param req DescribeClusterAssetsRequest
                 * @return DescribeClusterAssetsOutcome
                 */
                DescribeClusterAssetsOutcome DescribeClusterAssets(const Model::DescribeClusterAssetsRequest &request);
                void DescribeClusterAssetsAsync(const Model::DescribeClusterAssetsRequest& request, const DescribeClusterAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterAssetsOutcomeCallable DescribeClusterAssetsCallable(const Model::DescribeClusterAssetsRequest& request);

                /**
                 *This API is used to query the associated application list of a container. It retrieves associated application service information by container ID and supports pagination.
                 * @param req DescribeClusterContainerAppListRequest
                 * @return DescribeClusterContainerAppListOutcome
                 */
                DescribeClusterContainerAppListOutcome DescribeClusterContainerAppList(const Model::DescribeClusterContainerAppListRequest &request);
                void DescribeClusterContainerAppListAsync(const Model::DescribeClusterContainerAppListRequest& request, const DescribeClusterContainerAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterContainerAppListOutcomeCallable DescribeClusterContainerAppListCallable(const Model::DescribeClusterContainerAppListRequest& request);

                /**
                 *Query the list of components associated with a container. Get associated component information by container ID. Pagination is supported.
                 * @param req DescribeClusterContainerComponentListRequest
                 * @return DescribeClusterContainerComponentListOutcome
                 */
                DescribeClusterContainerComponentListOutcome DescribeClusterContainerComponentList(const Model::DescribeClusterContainerComponentListRequest &request);
                void DescribeClusterContainerComponentListAsync(const Model::DescribeClusterContainerComponentListRequest& request, const DescribeClusterContainerComponentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterContainerComponentListOutcomeCallable DescribeClusterContainerComponentListCallable(const Model::DescribeClusterContainerComponentListRequest& request);

                /**
                 *This API is used to query cluster container details. It retrieves basic container info, mirror information, mount information, network info, and associated node information by container ID.
                 * @param req DescribeClusterContainerDetailRequest
                 * @return DescribeClusterContainerDetailOutcome
                 */
                DescribeClusterContainerDetailOutcome DescribeClusterContainerDetail(const Model::DescribeClusterContainerDetailRequest &request);
                void DescribeClusterContainerDetailAsync(const Model::DescribeClusterContainerDetailRequest& request, const DescribeClusterContainerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterContainerDetailOutcomeCallable DescribeClusterContainerDetailCallable(const Model::DescribeClusterContainerDetailRequest& request);

                /**
                 *Query the container list of a cluster.
                 * @param req DescribeClusterContainerListRequest
                 * @return DescribeClusterContainerListOutcome
                 */
                DescribeClusterContainerListOutcome DescribeClusterContainerList(const Model::DescribeClusterContainerListRequest &request);
                void DescribeClusterContainerListAsync(const Model::DescribeClusterContainerListRequest& request, const DescribeClusterContainerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterContainerListOutcomeCallable DescribeClusterContainerListCallable(const Model::DescribeClusterContainerListRequest& request);

                /**
                 *Query the list of ports associated with a container. This API is used to obtain associated port information by container ID and supports pagination.
                 * @param req DescribeClusterContainerPortListRequest
                 * @return DescribeClusterContainerPortListOutcome
                 */
                DescribeClusterContainerPortListOutcome DescribeClusterContainerPortList(const Model::DescribeClusterContainerPortListRequest &request);
                void DescribeClusterContainerPortListAsync(const Model::DescribeClusterContainerPortListRequest& request, const DescribeClusterContainerPortListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterContainerPortListOutcomeCallable DescribeClusterContainerPortListCallable(const Model::DescribeClusterContainerPortListRequest& request);

                /**
                 *This API is used to query the associated process list of a container. It obtains associated process information by container ID, supports time sorting and pagination. Filter.By supports StartTime; Filter.Order supports ASC/DESC.
                 * @param req DescribeClusterContainerProcessListRequest
                 * @return DescribeClusterContainerProcessListOutcome
                 */
                DescribeClusterContainerProcessListOutcome DescribeClusterContainerProcessList(const Model::DescribeClusterContainerProcessListRequest &request);
                void DescribeClusterContainerProcessListAsync(const Model::DescribeClusterContainerProcessListRequest& request, const DescribeClusterContainerProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterContainerProcessListOutcomeCallable DescribeClusterContainerProcessListCallable(const Model::DescribeClusterContainerProcessListRequest& request);

                /**
                 *This API is used to query the associated Web Service List of a container. It retrieves associated web service information by container ID and supports pagination.
                 * @param req DescribeClusterContainerWebServiceListRequest
                 * @return DescribeClusterContainerWebServiceListOutcome
                 */
                DescribeClusterContainerWebServiceListOutcome DescribeClusterContainerWebServiceList(const Model::DescribeClusterContainerWebServiceListRequest &request);
                void DescribeClusterContainerWebServiceListAsync(const Model::DescribeClusterContainerWebServiceListRequest& request, const DescribeClusterContainerWebServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterContainerWebServiceListOutcomeCallable DescribeClusterContainerWebServiceListCallable(const Model::DescribeClusterContainerWebServiceListRequest& request);

                /**
                 *Querying Cluster Details
                 * @param req DescribeClusterDetailRequest
                 * @return DescribeClusterDetailOutcome
                 */
                DescribeClusterDetailOutcome DescribeClusterDetail(const Model::DescribeClusterDetailRequest &request);
                void DescribeClusterDetailAsync(const Model::DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterDetailOutcomeCallable DescribeClusterDetailCallable(const Model::DescribeClusterDetailRequest& request);

                /**
                 *Query the cluster installation command
                 * @param req DescribeClusterInstallCommandRequest
                 * @return DescribeClusterInstallCommandOutcome
                 */
                DescribeClusterInstallCommandOutcome DescribeClusterInstallCommand(const Model::DescribeClusterInstallCommandRequest &request);
                void DescribeClusterInstallCommandAsync(const Model::DescribeClusterInstallCommandRequest& request, const DescribeClusterInstallCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterInstallCommandOutcomeCallable DescribeClusterInstallCommandCallable(const Model::DescribeClusterInstallCommandRequest& request);

                /**
                 *Query the cluster namespace list.
                 * @param req DescribeClusterNamespaceListRequest
                 * @return DescribeClusterNamespaceListOutcome
                 */
                DescribeClusterNamespaceListOutcome DescribeClusterNamespaceList(const Model::DescribeClusterNamespaceListRequest &request);
                void DescribeClusterNamespaceListAsync(const Model::DescribeClusterNamespaceListRequest& request, const DescribeClusterNamespaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterNamespaceListOutcomeCallable DescribeClusterNamespaceListCallable(const Model::DescribeClusterNamespaceListRequest& request);

                /**
                 *Query the cluster node list.
                 * @param req DescribeClusterNodeListRequest
                 * @return DescribeClusterNodeListOutcome
                 */
                DescribeClusterNodeListOutcome DescribeClusterNodeList(const Model::DescribeClusterNodeListRequest &request);
                void DescribeClusterNodeListAsync(const Model::DescribeClusterNodeListRequest& request, const DescribeClusterNodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterNodeListOutcomeCallable DescribeClusterNodeListCallable(const Model::DescribeClusterNodeListRequest& request);

                /**
                 *Cluster Pod List
                 * @param req DescribeClusterPodAssetsRequest
                 * @return DescribeClusterPodAssetsOutcome
                 */
                DescribeClusterPodAssetsOutcome DescribeClusterPodAssets(const Model::DescribeClusterPodAssetsRequest &request);
                void DescribeClusterPodAssetsAsync(const Model::DescribeClusterPodAssetsRequest& request, const DescribeClusterPodAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterPodAssetsOutcomeCallable DescribeClusterPodAssetsCallable(const Model::DescribeClusterPodAssetsRequest& request);

                /**
                 *This API is used to query Pod details in A cluster. It is A new Type A API for the container asset revision and serves as the main entrance to the Pod Asset Details Page. The input parameter is only UniqueID. The output parameters cover asset information, cluster, namespace, node, Workload, as well as the number of risk events and alarm events grouped by four risk levels.
                 * @param req DescribeClusterPodDetailRequest
                 * @return DescribeClusterPodDetailOutcome
                 */
                DescribeClusterPodDetailOutcome DescribeClusterPodDetail(const Model::DescribeClusterPodDetailRequest &request);
                void DescribeClusterPodDetailAsync(const Model::DescribeClusterPodDetailRequest& request, const DescribeClusterPodDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterPodDetailOutcomeCallable DescribeClusterPodDetailCallable(const Model::DescribeClusterPodDetailRequest& request);

                /**
                 *Inquires the cluster pod list
                 * @param req DescribeClusterPodListRequest
                 * @return DescribeClusterPodListOutcome
                 */
                DescribeClusterPodListOutcome DescribeClusterPodList(const Model::DescribeClusterPodListRequest &request);
                void DescribeClusterPodListAsync(const Model::DescribeClusterPodListRequest& request, const DescribeClusterPodListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterPodListOutcomeCallable DescribeClusterPodListCallable(const Model::DescribeClusterPodListRequest& request);

                /**
                 *Query the cluster service list.
                 * @param req DescribeClusterServiceListRequest
                 * @return DescribeClusterServiceListOutcome
                 */
                DescribeClusterServiceListOutcome DescribeClusterServiceList(const Model::DescribeClusterServiceListRequest &request);
                void DescribeClusterServiceListAsync(const Model::DescribeClusterServiceListRequest& request, const DescribeClusterServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterServiceListOutcomeCallable DescribeClusterServiceListCallable(const Model::DescribeClusterServiceListRequest& request);

                /**
                 *Query cluster overview data
                 * @param req DescribeClusterSummaryRequest
                 * @return DescribeClusterSummaryOutcome
                 */
                DescribeClusterSummaryOutcome DescribeClusterSummary(const Model::DescribeClusterSummaryRequest &request);
                void DescribeClusterSummaryAsync(const Model::DescribeClusterSummaryRequest& request, const DescribeClusterSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterSummaryOutcomeCallable DescribeClusterSummaryCallable(const Model::DescribeClusterSummaryRequest& request);

                /**
                 *This API is used to query super node details in a cluster and return basic info (region, availability zone, last asset update time, node origin, subnet, and core count) and cluster information (cluster name, Cluster ID, cluster status, Kubernetes version, and Kubelet version).
                 * @param req DescribeClusterSuperNodeInfoRequest
                 * @return DescribeClusterSuperNodeInfoOutcome
                 */
                DescribeClusterSuperNodeInfoOutcome DescribeClusterSuperNodeInfo(const Model::DescribeClusterSuperNodeInfoRequest &request);
                void DescribeClusterSuperNodeInfoAsync(const Model::DescribeClusterSuperNodeInfoRequest& request, const DescribeClusterSuperNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterSuperNodeInfoOutcomeCallable DescribeClusterSuperNodeInfoCallable(const Model::DescribeClusterSuperNodeInfoRequest& request);

                /**
                 *Cloud resource configuration detection compliance overview
                 * @param req DescribeComplianceOverviewRequest
                 * @return DescribeComplianceOverviewOutcome
                 */
                DescribeComplianceOverviewOutcome DescribeComplianceOverview(const Model::DescribeComplianceOverviewRequest &request);
                void DescribeComplianceOverviewAsync(const Model::DescribeComplianceOverviewRequest& request, const DescribeComplianceOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComplianceOverviewOutcomeCallable DescribeComplianceOverviewCallable(const Model::DescribeComplianceOverviewRequest& request);

                /**
                 *Cloud resource configuration risk list from the compliance standard aggregation perspective
                 * @param req DescribeComplianceRiskListRequest
                 * @return DescribeComplianceRiskListOutcome
                 */
                DescribeComplianceRiskListOutcome DescribeComplianceRiskList(const Model::DescribeComplianceRiskListRequest &request);
                void DescribeComplianceRiskListAsync(const Model::DescribeComplianceRiskListRequest& request, const DescribeComplianceRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComplianceRiskListOutcomeCallable DescribeComplianceRiskListCallable(const Model::DescribeComplianceRiskListRequest& request);

                /**
                 *Cloud resource configuration inspection standard chapter clause tree
                 * @param req DescribeComplianceStandardTermTreeRequest
                 * @return DescribeComplianceStandardTermTreeOutcome
                 */
                DescribeComplianceStandardTermTreeOutcome DescribeComplianceStandardTermTree(const Model::DescribeComplianceStandardTermTreeRequest &request);
                void DescribeComplianceStandardTermTreeAsync(const Model::DescribeComplianceStandardTermTreeRequest& request, const DescribeComplianceStandardTermTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComplianceStandardTermTreeOutcomeCallable DescribeComplianceStandardTermTreeCallable(const Model::DescribeComplianceStandardTermTreeRequest& request);

                /**
                 *Category statistics for cloud resource configuration detection specifications
                 * @param req DescribeComplianceStatisticsRequest
                 * @return DescribeComplianceStatisticsOutcome
                 */
                DescribeComplianceStatisticsOutcome DescribeComplianceStatistics(const Model::DescribeComplianceStatisticsRequest &request);
                void DescribeComplianceStatisticsAsync(const Model::DescribeComplianceStatisticsRequest& request, const DescribeComplianceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComplianceStatisticsOutcomeCallable DescribeComplianceStatisticsCallable(const Model::DescribeComplianceStatisticsRequest& request);

                /**
                 *Example of cloud resource configuration risk rule list
                 * @param req DescribeConfigCheckRulesRequest
                 * @return DescribeConfigCheckRulesOutcome
                 */
                DescribeConfigCheckRulesOutcome DescribeConfigCheckRules(const Model::DescribeConfigCheckRulesRequest &request);
                void DescribeConfigCheckRulesAsync(const Model::DescribeConfigCheckRulesRequest& request, const DescribeConfigCheckRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigCheckRulesOutcomeCallable DescribeConfigCheckRulesCallable(const Model::DescribeConfigCheckRulesRequest& request);

                /**
                 *This API is used to query the CSPM auto quota shared configuration.
                 * @param req DescribeCspmShardConfigRequest
                 * @return DescribeCspmShardConfigOutcome
                 */
                DescribeCspmShardConfigOutcome DescribeCspmShardConfig(const Model::DescribeCspmShardConfigRequest &request);
                void DescribeCspmShardConfigAsync(const Model::DescribeCspmShardConfigRequest& request, const DescribeCspmShardConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCspmShardConfigOutcomeCallable DescribeCspmShardConfigCallable(const Model::DescribeCspmShardConfigRequest& request);

                /**
                 *number of user-customized tags
                 * @param req DescribeCustomAssetTagCountRequest
                 * @return DescribeCustomAssetTagCountOutcome
                 */
                DescribeCustomAssetTagCountOutcome DescribeCustomAssetTagCount(const Model::DescribeCustomAssetTagCountRequest &request);
                void DescribeCustomAssetTagCountAsync(const Model::DescribeCustomAssetTagCountRequest& request, const DescribeCustomAssetTagCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomAssetTagCountOutcomeCallable DescribeCustomAssetTagCountCallable(const Model::DescribeCustomAssetTagCountRequest& request);

                /**
                 *Example of a custom risk rule configuration detail list
                 * @param req DescribeCustomRiskRuleDetailRequest
                 * @return DescribeCustomRiskRuleDetailOutcome
                 */
                DescribeCustomRiskRuleDetailOutcome DescribeCustomRiskRuleDetail(const Model::DescribeCustomRiskRuleDetailRequest &request);
                void DescribeCustomRiskRuleDetailAsync(const Model::DescribeCustomRiskRuleDetailRequest& request, const DescribeCustomRiskRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomRiskRuleDetailOutcomeCallable DescribeCustomRiskRuleDetailCallable(const Model::DescribeCustomRiskRuleDetailRequest& request);

                /**
                 *Lists the configuration of custom risk rules
                 * @param req DescribeCustomRiskRulesRequest
                 * @return DescribeCustomRiskRulesOutcome
                 */
                DescribeCustomRiskRulesOutcome DescribeCustomRiskRules(const Model::DescribeCustomRiskRulesRequest &request);
                void DescribeCustomRiskRulesAsync(const Model::DescribeCustomRiskRulesRequest& request, const DescribeCustomRiskRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomRiskRulesOutcomeCallable DescribeCustomRiskRulesCallable(const Model::DescribeCustomRiskRulesRequest& request);

                /**
                 *DB Asset Details
                 * @param req DescribeDbAssetInfoRequest
                 * @return DescribeDbAssetInfoOutcome
                 */
                DescribeDbAssetInfoOutcome DescribeDbAssetInfo(const Model::DescribeDbAssetInfoRequest &request);
                void DescribeDbAssetInfoAsync(const Model::DescribeDbAssetInfoRequest& request, const DescribeDbAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDbAssetInfoOutcomeCallable DescribeDbAssetInfoCallable(const Model::DescribeDbAssetInfoRequest& request);

                /**
                 *Database Asset List
                 * @param req DescribeDbAssetsRequest
                 * @return DescribeDbAssetsOutcome
                 */
                DescribeDbAssetsOutcome DescribeDbAssets(const Model::DescribeDbAssetsRequest &request);
                void DescribeDbAssetsAsync(const Model::DescribeDbAssetsRequest& request, const DescribeDbAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDbAssetsOutcomeCallable DescribeDbAssetsCallable(const Model::DescribeDbAssetsRequest& request);

                /**
                 *Retrieve the built-in default security scoring rules for resetting custom rules.
                 * @param req DescribeDefaultSecurityScoreRuleRequest
                 * @return DescribeDefaultSecurityScoreRuleOutcome
                 */
                DescribeDefaultSecurityScoreRuleOutcome DescribeDefaultSecurityScoreRule(const Model::DescribeDefaultSecurityScoreRuleRequest &request);
                void DescribeDefaultSecurityScoreRuleAsync(const Model::DescribeDefaultSecurityScoreRuleRequest& request, const DescribeDefaultSecurityScoreRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefaultSecurityScoreRuleOutcomeCallable DescribeDefaultSecurityScoreRuleCallable(const Model::DescribeDefaultSecurityScoreRuleRequest& request);

                /**
                 *Domain name list
                 * @param req DescribeDomainAssetsRequest
                 * @return DescribeDomainAssetsOutcome
                 */
                DescribeDomainAssetsOutcome DescribeDomainAssets(const Model::DescribeDomainAssetsRequest &request);
                void DescribeDomainAssetsAsync(const Model::DescribeDomainAssetsRequest& request, const DescribeDomainAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainAssetsOutcomeCallable DescribeDomainAssetsCallable(const Model::DescribeDomainAssetsRequest& request);

                /**
                 *Query Dspm access records
                 * @param req DescribeDspmAccessRecordRequest
                 * @return DescribeDspmAccessRecordOutcome
                 */
                DescribeDspmAccessRecordOutcome DescribeDspmAccessRecord(const Model::DescribeDspmAccessRecordRequest &request);
                void DescribeDspmAccessRecordAsync(const Model::DescribeDspmAccessRecordRequest& request, const DescribeDspmAccessRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAccessRecordOutcomeCallable DescribeDspmAccessRecordCallable(const Model::DescribeDspmAccessRecordRequest& request);

                /**
                 *Queries the Dspm access topology account list
                 * @param req DescribeDspmAccessTopologyAccountsRequest
                 * @return DescribeDspmAccessTopologyAccountsOutcome
                 */
                DescribeDspmAccessTopologyAccountsOutcome DescribeDspmAccessTopologyAccounts(const Model::DescribeDspmAccessTopologyAccountsRequest &request);
                void DescribeDspmAccessTopologyAccountsAsync(const Model::DescribeDspmAccessTopologyAccountsRequest& request, const DescribeDspmAccessTopologyAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAccessTopologyAccountsOutcomeCallable DescribeDspmAccessTopologyAccountsCallable(const Model::DescribeDspmAccessTopologyAccountsRequest& request);

                /**
                 *Query the Dspm access topology asset list
                 * @param req DescribeDspmAccessTopologyAssetsRequest
                 * @return DescribeDspmAccessTopologyAssetsOutcome
                 */
                DescribeDspmAccessTopologyAssetsOutcome DescribeDspmAccessTopologyAssets(const Model::DescribeDspmAccessTopologyAssetsRequest &request);
                void DescribeDspmAccessTopologyAssetsAsync(const Model::DescribeDspmAccessTopologyAssetsRequest& request, const DescribeDspmAccessTopologyAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAccessTopologyAssetsOutcomeCallable DescribeDspmAccessTopologyAssetsCallable(const Model::DescribeDspmAccessTopologyAssetsRequest& request);

                /**
                 *Query the Dspm access topology ip list
                 * @param req DescribeDspmAccessTopologyIpsRequest
                 * @return DescribeDspmAccessTopologyIpsOutcome
                 */
                DescribeDspmAccessTopologyIpsOutcome DescribeDspmAccessTopologyIps(const Model::DescribeDspmAccessTopologyIpsRequest &request);
                void DescribeDspmAccessTopologyIpsAsync(const Model::DescribeDspmAccessTopologyIpsRequest& request, const DescribeDspmAccessTopologyIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAccessTopologyIpsOutcomeCallable DescribeDspmAccessTopologyIpsCallable(const Model::DescribeDspmAccessTopologyIpsRequest& request);

                /**
                 *Queries Dspm application history
                 * @param req DescribeDspmApplyHistoryRequest
                 * @return DescribeDspmApplyHistoryOutcome
                 */
                DescribeDspmApplyHistoryOutcome DescribeDspmApplyHistory(const Model::DescribeDspmApplyHistoryRequest &request);
                void DescribeDspmApplyHistoryAsync(const Model::DescribeDspmApplyHistoryRequest& request, const DescribeDspmApplyHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmApplyHistoryOutcomeCallable DescribeDspmApplyHistoryCallable(const Model::DescribeDspmApplyHistoryRequest& request);

                /**
                 *Queries the Dspm application form list
                 * @param req DescribeDspmApplyOrderListRequest
                 * @return DescribeDspmApplyOrderListOutcome
                 */
                DescribeDspmApplyOrderListOutcome DescribeDspmApplyOrderList(const Model::DescribeDspmApplyOrderListRequest &request);
                void DescribeDspmApplyOrderListAsync(const Model::DescribeDspmApplyOrderListRequest& request, const DescribeDspmApplyOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmApplyOrderListOutcomeCallable DescribeDspmApplyOrderListCallable(const Model::DescribeDspmApplyOrderListRequest& request);

                /**
                 *Query Dspm approval history
                 * @param req DescribeDspmApproveHistoryRequest
                 * @return DescribeDspmApproveHistoryOutcome
                 */
                DescribeDspmApproveHistoryOutcome DescribeDspmApproveHistory(const Model::DescribeDspmApproveHistoryRequest &request);
                void DescribeDspmApproveHistoryAsync(const Model::DescribeDspmApproveHistoryRequest& request, const DescribeDspmApproveHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmApproveHistoryOutcomeCallable DescribeDspmApproveHistoryCallable(const Model::DescribeDspmApproveHistoryRequest& request);

                /**
                 *Queries Dspm approval form list
                 * @param req DescribeDspmApproveOrderListRequest
                 * @return DescribeDspmApproveOrderListOutcome
                 */
                DescribeDspmApproveOrderListOutcome DescribeDspmApproveOrderList(const Model::DescribeDspmApproveOrderListRequest &request);
                void DescribeDspmApproveOrderListAsync(const Model::DescribeDspmApproveOrderListRequest& request, const DescribeDspmApproveOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmApproveOrderListOutcomeCallable DescribeDspmApproveOrderListCallable(const Model::DescribeDspmApproveOrderListRequest& request);

                /**
                 *Query the Dspm asset access topology
                 * @param req DescribeDspmAssetAccessTopologyRequest
                 * @return DescribeDspmAssetAccessTopologyOutcome
                 */
                DescribeDspmAssetAccessTopologyOutcome DescribeDspmAssetAccessTopology(const Model::DescribeDspmAssetAccessTopologyRequest &request);
                void DescribeDspmAssetAccessTopologyAsync(const Model::DescribeDspmAssetAccessTopologyRequest& request, const DescribeDspmAssetAccessTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetAccessTopologyOutcomeCallable DescribeDspmAssetAccessTopologyCallable(const Model::DescribeDspmAssetAccessTopologyRequest& request);

                /**
                 *Query Dspm asset account identity information
                 * @param req DescribeDspmAssetAccountIdentifyRequest
                 * @return DescribeDspmAssetAccountIdentifyOutcome
                 */
                DescribeDspmAssetAccountIdentifyOutcome DescribeDspmAssetAccountIdentify(const Model::DescribeDspmAssetAccountIdentifyRequest &request);
                void DescribeDspmAssetAccountIdentifyAsync(const Model::DescribeDspmAssetAccountIdentifyRequest& request, const DescribeDspmAssetAccountIdentifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetAccountIdentifyOutcomeCallable DescribeDspmAssetAccountIdentifyCallable(const Model::DescribeDspmAssetAccountIdentifyRequest& request);

                /**
                 *Querying preset privileged information of Dspm asset accounts
                 * @param req DescribeDspmAssetAccountPresetPrivilegesRequest
                 * @return DescribeDspmAssetAccountPresetPrivilegesOutcome
                 */
                DescribeDspmAssetAccountPresetPrivilegesOutcome DescribeDspmAssetAccountPresetPrivileges(const Model::DescribeDspmAssetAccountPresetPrivilegesRequest &request);
                void DescribeDspmAssetAccountPresetPrivilegesAsync(const Model::DescribeDspmAssetAccountPresetPrivilegesRequest& request, const DescribeDspmAssetAccountPresetPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetAccountPresetPrivilegesOutcomeCallable DescribeDspmAssetAccountPresetPrivilegesCallable(const Model::DescribeDspmAssetAccountPresetPrivilegesRequest& request);

                /**
                 *Querying privileged information of Dspm asset accounts after recycling
                 * @param req DescribeDspmAssetAccountRecycledPrivilegesRequest
                 * @return DescribeDspmAssetAccountRecycledPrivilegesOutcome
                 */
                DescribeDspmAssetAccountRecycledPrivilegesOutcome DescribeDspmAssetAccountRecycledPrivileges(const Model::DescribeDspmAssetAccountRecycledPrivilegesRequest &request);
                void DescribeDspmAssetAccountRecycledPrivilegesAsync(const Model::DescribeDspmAssetAccountRecycledPrivilegesRequest& request, const DescribeDspmAssetAccountRecycledPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetAccountRecycledPrivilegesOutcomeCallable DescribeDspmAssetAccountRecycledPrivilegesCallable(const Model::DescribeDspmAssetAccountRecycledPrivilegesRequest& request);

                /**
                 *Query the Dspm asset account list.
                 * @param req DescribeDspmAssetAccountsRequest
                 * @return DescribeDspmAssetAccountsOutcome
                 */
                DescribeDspmAssetAccountsOutcome DescribeDspmAssetAccounts(const Model::DescribeDspmAssetAccountsRequest &request);
                void DescribeDspmAssetAccountsAsync(const Model::DescribeDspmAssetAccountsRequest& request, const DescribeDspmAssetAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetAccountsOutcomeCallable DescribeDspmAssetAccountsCallable(const Model::DescribeDspmAssetAccountsRequest& request);

                /**
                 *This API is used to query asset database information.
                 * @param req DescribeDspmAssetDatabaseListRequest
                 * @return DescribeDspmAssetDatabaseListOutcome
                 */
                DescribeDspmAssetDatabaseListOutcome DescribeDspmAssetDatabaseList(const Model::DescribeDspmAssetDatabaseListRequest &request);
                void DescribeDspmAssetDatabaseListAsync(const Model::DescribeDspmAssetDatabaseListRequest& request, const DescribeDspmAssetDatabaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetDatabaseListOutcomeCallable DescribeDspmAssetDatabaseListCallable(const Model::DescribeDspmAssetDatabaseListRequest& request);

                /**
                 *This API is used to query the list of Dspm asset databases.
                 * @param req DescribeDspmAssetDatabasesRequest
                 * @return DescribeDspmAssetDatabasesOutcome
                 */
                DescribeDspmAssetDatabasesOutcome DescribeDspmAssetDatabases(const Model::DescribeDspmAssetDatabasesRequest &request);
                void DescribeDspmAssetDatabasesAsync(const Model::DescribeDspmAssetDatabasesRequest& request, const DescribeDspmAssetDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetDatabasesOutcomeCallable DescribeDspmAssetDatabasesCallable(const Model::DescribeDspmAssetDatabasesRequest& request);

                /**
                 *Queries the dspm asset field information
                 * @param req DescribeDspmAssetFieldListRequest
                 * @return DescribeDspmAssetFieldListOutcome
                 */
                DescribeDspmAssetFieldListOutcome DescribeDspmAssetFieldList(const Model::DescribeDspmAssetFieldListRequest &request);
                void DescribeDspmAssetFieldListAsync(const Model::DescribeDspmAssetFieldListRequest& request, const DescribeDspmAssetFieldListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetFieldListOutcomeCallable DescribeDspmAssetFieldListCallable(const Model::DescribeDspmAssetFieldListRequest& request);

                /**
                 *Query sample values of dspm asset fields
                 * @param req DescribeDspmAssetFieldSamplesRequest
                 * @return DescribeDspmAssetFieldSamplesOutcome
                 */
                DescribeDspmAssetFieldSamplesOutcome DescribeDspmAssetFieldSamples(const Model::DescribeDspmAssetFieldSamplesRequest &request);
                void DescribeDspmAssetFieldSamplesAsync(const Model::DescribeDspmAssetFieldSamplesRequest& request, const DescribeDspmAssetFieldSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetFieldSamplesOutcomeCallable DescribeDspmAssetFieldSamplesCallable(const Model::DescribeDspmAssetFieldSamplesRequest& request);

                /**
                 *Queries the dspm asset data recognition information list
                 * @param req DescribeDspmAssetIdentifyInfoListRequest
                 * @return DescribeDspmAssetIdentifyInfoListOutcome
                 */
                DescribeDspmAssetIdentifyInfoListOutcome DescribeDspmAssetIdentifyInfoList(const Model::DescribeDspmAssetIdentifyInfoListRequest &request);
                void DescribeDspmAssetIdentifyInfoListAsync(const Model::DescribeDspmAssetIdentifyInfoListRequest& request, const DescribeDspmAssetIdentifyInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetIdentifyInfoListOutcomeCallable DescribeDspmAssetIdentifyInfoListCallable(const Model::DescribeDspmAssetIdentifyInfoListRequest& request);

                /**
                 *Queries the list of Dspm asset IDs
                 * @param req DescribeDspmAssetIdsRequest
                 * @return DescribeDspmAssetIdsOutcome
                 */
                DescribeDspmAssetIdsOutcome DescribeDspmAssetIds(const Model::DescribeDspmAssetIdsRequest &request);
                void DescribeDspmAssetIdsAsync(const Model::DescribeDspmAssetIdsRequest& request, const DescribeDspmAssetIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetIdsOutcomeCallable DescribeDspmAssetIdsCallable(const Model::DescribeDspmAssetIdsRequest& request);

                /**
                 *Query Dspm asset login credentials
                 * @param req DescribeDspmAssetLoginCredentialRequest
                 * @return DescribeDspmAssetLoginCredentialOutcome
                 */
                DescribeDspmAssetLoginCredentialOutcome DescribeDspmAssetLoginCredential(const Model::DescribeDspmAssetLoginCredentialRequest &request);
                void DescribeDspmAssetLoginCredentialAsync(const Model::DescribeDspmAssetLoginCredentialRequest& request, const DescribeDspmAssetLoginCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetLoginCredentialOutcomeCallable DescribeDspmAssetLoginCredentialCallable(const Model::DescribeDspmAssetLoginCredentialRequest& request);

                /**
                 *Query the security analysis status of Dspm assets.
                 * @param req DescribeDspmAssetSecurityAnalyseStatusRequest
                 * @return DescribeDspmAssetSecurityAnalyseStatusOutcome
                 */
                DescribeDspmAssetSecurityAnalyseStatusOutcome DescribeDspmAssetSecurityAnalyseStatus(const Model::DescribeDspmAssetSecurityAnalyseStatusRequest &request);
                void DescribeDspmAssetSecurityAnalyseStatusAsync(const Model::DescribeDspmAssetSecurityAnalyseStatusRequest& request, const DescribeDspmAssetSecurityAnalyseStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetSecurityAnalyseStatusOutcomeCallable DescribeDspmAssetSecurityAnalyseStatusCallable(const Model::DescribeDspmAssetSecurityAnalyseStatusRequest& request);

                /**
                 *Queries supported permissions for Dspm assets
                 * @param req DescribeDspmAssetSupportedPrivilegesRequest
                 * @return DescribeDspmAssetSupportedPrivilegesOutcome
                 */
                DescribeDspmAssetSupportedPrivilegesOutcome DescribeDspmAssetSupportedPrivileges(const Model::DescribeDspmAssetSupportedPrivilegesRequest &request);
                void DescribeDspmAssetSupportedPrivilegesAsync(const Model::DescribeDspmAssetSupportedPrivilegesRequest& request, const DescribeDspmAssetSupportedPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetSupportedPrivilegesOutcomeCallable DescribeDspmAssetSupportedPrivilegesCallable(const Model::DescribeDspmAssetSupportedPrivilegesRequest& request);

                /**
                 *This API is used to query asset table information.
                 * @param req DescribeDspmAssetTableListRequest
                 * @return DescribeDspmAssetTableListOutcome
                 */
                DescribeDspmAssetTableListOutcome DescribeDspmAssetTableList(const Model::DescribeDspmAssetTableListRequest &request);
                void DescribeDspmAssetTableListAsync(const Model::DescribeDspmAssetTableListRequest& request, const DescribeDspmAssetTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetTableListOutcomeCallable DescribeDspmAssetTableListCallable(const Model::DescribeDspmAssetTableListRequest& request);

                /**
                 *Queries the Dspm asset list.
                 * @param req DescribeDspmAssetsRequest
                 * @return DescribeDspmAssetsOutcome
                 */
                DescribeDspmAssetsOutcome DescribeDspmAssets(const Model::DescribeDspmAssetsRequest &request);
                void DescribeDspmAssetsAsync(const Model::DescribeDspmAssetsRequest& request, const DescribeDspmAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAssetsOutcomeCallable DescribeDspmAssetsCallable(const Model::DescribeDspmAssetsRequest& request);

                /**
                 *Query dspm audit filter policies
                 * @param req DescribeDspmAuditFilterStrategyRequest
                 * @return DescribeDspmAuditFilterStrategyOutcome
                 */
                DescribeDspmAuditFilterStrategyOutcome DescribeDspmAuditFilterStrategy(const Model::DescribeDspmAuditFilterStrategyRequest &request);
                void DescribeDspmAuditFilterStrategyAsync(const Model::DescribeDspmAuditFilterStrategyRequest& request, const DescribeDspmAuditFilterStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmAuditFilterStrategyOutcomeCallable DescribeDspmAuditFilterStrategyCallable(const Model::DescribeDspmAuditFilterStrategyRequest& request);

                /**
                 *This API is used to query the backup log list.
                 * @param req DescribeDspmBackupLogListRequest
                 * @return DescribeDspmBackupLogListOutcome
                 */
                DescribeDspmBackupLogListOutcome DescribeDspmBackupLogList(const Model::DescribeDspmBackupLogListRequest &request);
                void DescribeDspmBackupLogListAsync(const Model::DescribeDspmBackupLogListRequest& request, const DescribeDspmBackupLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmBackupLogListOutcomeCallable DescribeDspmBackupLogListCallable(const Model::DescribeDspmBackupLogListRequest& request);

                /**
                 *This API is used to query the log backup configuration.
                 * @param req DescribeDspmBackupSettingRequest
                 * @return DescribeDspmBackupSettingOutcome
                 */
                DescribeDspmBackupSettingOutcome DescribeDspmBackupSetting(const Model::DescribeDspmBackupSettingRequest &request);
                void DescribeDspmBackupSettingAsync(const Model::DescribeDspmBackupSettingRequest& request, const DescribeDspmBackupSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmBackupSettingOutcomeCallable DescribeDspmBackupSettingCallable(const Model::DescribeDspmBackupSettingRequest& request);

                /**
                 *This API is used to query the routing information of the CKafka instance.
                 * @param req DescribeDspmCkafkaRouteListRequest
                 * @return DescribeDspmCkafkaRouteListOutcome
                 */
                DescribeDspmCkafkaRouteListOutcome DescribeDspmCkafkaRouteList(const Model::DescribeDspmCkafkaRouteListRequest &request);
                void DescribeDspmCkafkaRouteListAsync(const Model::DescribeDspmCkafkaRouteListRequest& request, const DescribeDspmCkafkaRouteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmCkafkaRouteListOutcomeCallable DescribeDspmCkafkaRouteListCallable(const Model::DescribeDspmCkafkaRouteListRequest& request);

                /**
                 *This API is used to query the topic list of the instance.
                 * @param req DescribeDspmCkafkaTopicListRequest
                 * @return DescribeDspmCkafkaTopicListOutcome
                 */
                DescribeDspmCkafkaTopicListOutcome DescribeDspmCkafkaTopicList(const Model::DescribeDspmCkafkaTopicListRequest &request);
                void DescribeDspmCkafkaTopicListAsync(const Model::DescribeDspmCkafkaTopicListRequest& request, const DescribeDspmCkafkaTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmCkafkaTopicListOutcomeCallable DescribeDspmCkafkaTopicListCallable(const Model::DescribeDspmCkafkaTopicListRequest& request);

                /**
                 *Query the list of dspm dictionary information
                 * @param req DescribeDspmDictionaryListRequest
                 * @return DescribeDspmDictionaryListOutcome
                 */
                DescribeDspmDictionaryListOutcome DescribeDspmDictionaryList(const Model::DescribeDspmDictionaryListRequest &request);
                void DescribeDspmDictionaryListAsync(const Model::DescribeDspmDictionaryListRequest& request, const DescribeDspmDictionaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmDictionaryListOutcomeCallable DescribeDspmDictionaryListCallable(const Model::DescribeDspmDictionaryListRequest& request);

                /**
                 *This API is used to query export tasks.
                 * @param req DescribeDspmExportTaskRequest
                 * @return DescribeDspmExportTaskOutcome
                 */
                DescribeDspmExportTaskOutcome DescribeDspmExportTask(const Model::DescribeDspmExportTaskRequest &request);
                void DescribeDspmExportTaskAsync(const Model::DescribeDspmExportTaskRequest& request, const DescribeDspmExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmExportTaskOutcomeCallable DescribeDspmExportTaskCallable(const Model::DescribeDspmExportTaskRequest& request);

                /**
                 *Querying the dspm data identification classification list
                 * @param req DescribeDspmIdentifyCategoryListRequest
                 * @return DescribeDspmIdentifyCategoryListOutcome
                 */
                DescribeDspmIdentifyCategoryListOutcome DescribeDspmIdentifyCategoryList(const Model::DescribeDspmIdentifyCategoryListRequest &request);
                void DescribeDspmIdentifyCategoryListAsync(const Model::DescribeDspmIdentifyCategoryListRequest& request, const DescribeDspmIdentifyCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyCategoryListOutcomeCallable DescribeDspmIdentifyCategoryListCallable(const Model::DescribeDspmIdentifyCategoryListRequest& request);

                /**
                 *This API is used to query the list of data items associated with dspm data recognition template classifications.
                 * @param req DescribeDspmIdentifyComplianceCategoryRuleListRequest
                 * @return DescribeDspmIdentifyComplianceCategoryRuleListOutcome
                 */
                DescribeDspmIdentifyComplianceCategoryRuleListOutcome DescribeDspmIdentifyComplianceCategoryRuleList(const Model::DescribeDspmIdentifyComplianceCategoryRuleListRequest &request);
                void DescribeDspmIdentifyComplianceCategoryRuleListAsync(const Model::DescribeDspmIdentifyComplianceCategoryRuleListRequest& request, const DescribeDspmIdentifyComplianceCategoryRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyComplianceCategoryRuleListOutcomeCallable DescribeDspmIdentifyComplianceCategoryRuleListCallable(const Model::DescribeDspmIdentifyComplianceCategoryRuleListRequest& request);

                /**
                 *Query dspm identification template details
                 * @param req DescribeDspmIdentifyComplianceGroupDetailRequest
                 * @return DescribeDspmIdentifyComplianceGroupDetailOutcome
                 */
                DescribeDspmIdentifyComplianceGroupDetailOutcome DescribeDspmIdentifyComplianceGroupDetail(const Model::DescribeDspmIdentifyComplianceGroupDetailRequest &request);
                void DescribeDspmIdentifyComplianceGroupDetailAsync(const Model::DescribeDspmIdentifyComplianceGroupDetailRequest& request, const DescribeDspmIdentifyComplianceGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyComplianceGroupDetailOutcomeCallable DescribeDspmIdentifyComplianceGroupDetailCallable(const Model::DescribeDspmIdentifyComplianceGroupDetailRequest& request);

                /**
                 *Queries the dspm data identification template list
                 * @param req DescribeDspmIdentifyComplianceGroupListRequest
                 * @return DescribeDspmIdentifyComplianceGroupListOutcome
                 */
                DescribeDspmIdentifyComplianceGroupListOutcome DescribeDspmIdentifyComplianceGroupList(const Model::DescribeDspmIdentifyComplianceGroupListRequest &request);
                void DescribeDspmIdentifyComplianceGroupListAsync(const Model::DescribeDspmIdentifyComplianceGroupListRequest& request, const DescribeDspmIdentifyComplianceGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyComplianceGroupListOutcomeCallable DescribeDspmIdentifyComplianceGroupListCallable(const Model::DescribeDspmIdentifyComplianceGroupListRequest& request);

                /**
                 *Querying dspm data identification distribution statistics
                 * @param req DescribeDspmIdentifyDistributionStatisticsRequest
                 * @return DescribeDspmIdentifyDistributionStatisticsOutcome
                 */
                DescribeDspmIdentifyDistributionStatisticsOutcome DescribeDspmIdentifyDistributionStatistics(const Model::DescribeDspmIdentifyDistributionStatisticsRequest &request);
                void DescribeDspmIdentifyDistributionStatisticsAsync(const Model::DescribeDspmIdentifyDistributionStatisticsRequest& request, const DescribeDspmIdentifyDistributionStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyDistributionStatisticsOutcomeCallable DescribeDspmIdentifyDistributionStatisticsCallable(const Model::DescribeDspmIdentifyDistributionStatisticsRequest& request);

                /**
                 *Query the Dspm identity ID list.
                 * @param req DescribeDspmIdentifyIdListRequest
                 * @return DescribeDspmIdentifyIdListOutcome
                 */
                DescribeDspmIdentifyIdListOutcome DescribeDspmIdentifyIdList(const Model::DescribeDspmIdentifyIdListRequest &request);
                void DescribeDspmIdentifyIdListAsync(const Model::DescribeDspmIdentifyIdListRequest& request, const DescribeDspmIdentifyIdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyIdListOutcomeCallable DescribeDspmIdentifyIdListCallable(const Model::DescribeDspmIdentifyIdListRequest& request);

                /**
                 *Queries the Dspm identity information.
                 * @param req DescribeDspmIdentifyInfoRequest
                 * @return DescribeDspmIdentifyInfoOutcome
                 */
                DescribeDspmIdentifyInfoOutcome DescribeDspmIdentifyInfo(const Model::DescribeDspmIdentifyInfoRequest &request);
                void DescribeDspmIdentifyInfoAsync(const Model::DescribeDspmIdentifyInfoRequest& request, const DescribeDspmIdentifyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyInfoOutcomeCallable DescribeDspmIdentifyInfoCallable(const Model::DescribeDspmIdentifyInfoRequest& request);

                /**
                 *Query the Dspm identity information list
                 * @param req DescribeDspmIdentifyInfoListRequest
                 * @return DescribeDspmIdentifyInfoListOutcome
                 */
                DescribeDspmIdentifyInfoListOutcome DescribeDspmIdentifyInfoList(const Model::DescribeDspmIdentifyInfoListRequest &request);
                void DescribeDspmIdentifyInfoListAsync(const Model::DescribeDspmIdentifyInfoListRequest& request, const DescribeDspmIdentifyInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyInfoListOutcomeCallable DescribeDspmIdentifyInfoListCallable(const Model::DescribeDspmIdentifyInfoListRequest& request);

                /**
                 *Query the dspm data identification classification group list
                 * @param req DescribeDspmIdentifyLevelGroupListRequest
                 * @return DescribeDspmIdentifyLevelGroupListOutcome
                 */
                DescribeDspmIdentifyLevelGroupListOutcome DescribeDspmIdentifyLevelGroupList(const Model::DescribeDspmIdentifyLevelGroupListRequest &request);
                void DescribeDspmIdentifyLevelGroupListAsync(const Model::DescribeDspmIdentifyLevelGroupListRequest& request, const DescribeDspmIdentifyLevelGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyLevelGroupListOutcomeCallable DescribeDspmIdentifyLevelGroupListCallable(const Model::DescribeDspmIdentifyLevelGroupListRequest& request);

                /**
                 *Queries the dspm data identification data item details
                 * @param req DescribeDspmIdentifyRuleDetailRequest
                 * @return DescribeDspmIdentifyRuleDetailOutcome
                 */
                DescribeDspmIdentifyRuleDetailOutcome DescribeDspmIdentifyRuleDetail(const Model::DescribeDspmIdentifyRuleDetailRequest &request);
                void DescribeDspmIdentifyRuleDetailAsync(const Model::DescribeDspmIdentifyRuleDetailRequest& request, const DescribeDspmIdentifyRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyRuleDetailOutcomeCallable DescribeDspmIdentifyRuleDetailCallable(const Model::DescribeDspmIdentifyRuleDetailRequest& request);

                /**
                 *Query the list of dspm identification data items.
                 * @param req DescribeDspmIdentifyRuleListRequest
                 * @return DescribeDspmIdentifyRuleListOutcome
                 */
                DescribeDspmIdentifyRuleListOutcome DescribeDspmIdentifyRuleList(const Model::DescribeDspmIdentifyRuleListRequest &request);
                void DescribeDspmIdentifyRuleListAsync(const Model::DescribeDspmIdentifyRuleListRequest& request, const DescribeDspmIdentifyRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyRuleListOutcomeCallable DescribeDspmIdentifyRuleListCallable(const Model::DescribeDspmIdentifyRuleListRequest& request);

                /**
                 *This API is used to query verification results of dspm data identification data items.
                 * @param req DescribeDspmIdentifyRuleTestResultRequest
                 * @return DescribeDspmIdentifyRuleTestResultOutcome
                 */
                DescribeDspmIdentifyRuleTestResultOutcome DescribeDspmIdentifyRuleTestResult(const Model::DescribeDspmIdentifyRuleTestResultRequest &request);
                void DescribeDspmIdentifyRuleTestResultAsync(const Model::DescribeDspmIdentifyRuleTestResultRequest& request, const DescribeDspmIdentifyRuleTestResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmIdentifyRuleTestResultOutcomeCallable DescribeDspmIdentifyRuleTestResultCallable(const Model::DescribeDspmIdentifyRuleTestResultRequest& request);

                /**
                 *This API is used to query the log type for log shipping.
                 * @param req DescribeDspmLogDeliveryTypeRequest
                 * @return DescribeDspmLogDeliveryTypeOutcome
                 */
                DescribeDspmLogDeliveryTypeOutcome DescribeDspmLogDeliveryType(const Model::DescribeDspmLogDeliveryTypeRequest &request);
                void DescribeDspmLogDeliveryTypeAsync(const Model::DescribeDspmLogDeliveryTypeRequest& request, const DescribeDspmLogDeliveryTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmLogDeliveryTypeOutcomeCallable DescribeDspmLogDeliveryTypeCallable(const Model::DescribeDspmLogDeliveryTypeRequest& request);

                /**
                 *This API is used to query the log list information.
                 * @param req DescribeDspmLogListRequest
                 * @return DescribeDspmLogListOutcome
                 */
                DescribeDspmLogListOutcome DescribeDspmLogList(const Model::DescribeDspmLogListRequest &request);
                void DescribeDspmLogListAsync(const Model::DescribeDspmLogListRequest& request, const DescribeDspmLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmLogListOutcomeCallable DescribeDspmLogListCallable(const Model::DescribeDspmLogListRequest& request);

                /**
                 *This API is used to query the log shipping configuration of a tenant.
                 * @param req DescribeDspmLogTypeConfigListRequest
                 * @return DescribeDspmLogTypeConfigListOutcome
                 */
                DescribeDspmLogTypeConfigListOutcome DescribeDspmLogTypeConfigList(const Model::DescribeDspmLogTypeConfigListRequest &request);
                void DescribeDspmLogTypeConfigListAsync(const Model::DescribeDspmLogTypeConfigListRequest& request, const DescribeDspmLogTypeConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmLogTypeConfigListOutcomeCallable DescribeDspmLogTypeConfigListCallable(const Model::DescribeDspmLogTypeConfigListRequest& request);

                /**
                 *Get purchased Dspm order information
                 * @param req DescribeDspmPayInfoRequest
                 * @return DescribeDspmPayInfoOutcome
                 */
                DescribeDspmPayInfoOutcome DescribeDspmPayInfo(const Model::DescribeDspmPayInfoRequest &request);
                void DescribeDspmPayInfoAsync(const Model::DescribeDspmPayInfoRequest& request, const DescribeDspmPayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmPayInfoOutcomeCallable DescribeDspmPayInfoCallable(const Model::DescribeDspmPayInfoRequest& request);

                /**
                 *Queries Dspm visitor application records.
                 * @param req DescribeDspmPersonApplyHistoryRequest
                 * @return DescribeDspmPersonApplyHistoryOutcome
                 */
                DescribeDspmPersonApplyHistoryOutcome DescribeDspmPersonApplyHistory(const Model::DescribeDspmPersonApplyHistoryRequest &request);
                void DescribeDspmPersonApplyHistoryAsync(const Model::DescribeDspmPersonApplyHistoryRequest& request, const DescribeDspmPersonApplyHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmPersonApplyHistoryOutcomeCallable DescribeDspmPersonApplyHistoryCallable(const Model::DescribeDspmPersonApplyHistoryRequest& request);

                /**
                 *Query the list of Dspm personal identification information.
                 * @param req DescribeDspmPersonalIdentifyListRequest
                 * @return DescribeDspmPersonalIdentifyListOutcome
                 */
                DescribeDspmPersonalIdentifyListOutcome DescribeDspmPersonalIdentifyList(const Model::DescribeDspmPersonalIdentifyListRequest &request);
                void DescribeDspmPersonalIdentifyListAsync(const Model::DescribeDspmPersonalIdentifyListRequest& request, const DescribeDspmPersonalIdentifyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmPersonalIdentifyListOutcomeCallable DescribeDspmPersonalIdentifyListCallable(const Model::DescribeDspmPersonalIdentifyListRequest& request);

                /**
                 *Queries Dspm instances
                 * @param req DescribeDspmResourceRequest
                 * @return DescribeDspmResourceOutcome
                 */
                DescribeDspmResourceOutcome DescribeDspmResource(const Model::DescribeDspmResourceRequest &request);
                void DescribeDspmResourceAsync(const Model::DescribeDspmResourceRequest& request, const DescribeDspmResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmResourceOutcomeCallable DescribeDspmResourceCallable(const Model::DescribeDspmResourceRequest& request);

                /**
                 *Queries Dspm risk records
                 * @param req DescribeDspmRiskRequest
                 * @return DescribeDspmRiskOutcome
                 */
                DescribeDspmRiskOutcome DescribeDspmRisk(const Model::DescribeDspmRiskRequest &request);
                void DescribeDspmRiskAsync(const Model::DescribeDspmRiskRequest& request, const DescribeDspmRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmRiskOutcomeCallable DescribeDspmRiskCallable(const Model::DescribeDspmRiskRequest& request);

                /**
                 *Queries Dspm risk details
                 * @param req DescribeDspmRiskDetailRequest
                 * @return DescribeDspmRiskDetailOutcome
                 */
                DescribeDspmRiskDetailOutcome DescribeDspmRiskDetail(const Model::DescribeDspmRiskDetailRequest &request);
                void DescribeDspmRiskDetailAsync(const Model::DescribeDspmRiskDetailRequest& request, const DescribeDspmRiskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmRiskDetailOutcomeCallable DescribeDspmRiskDetailCallable(const Model::DescribeDspmRiskDetailRequest& request);

                /**
                 *Queries Dspm risk policies
                 * @param req DescribeDspmRiskStrategyRequest
                 * @return DescribeDspmRiskStrategyOutcome
                 */
                DescribeDspmRiskStrategyOutcome DescribeDspmRiskStrategy(const Model::DescribeDspmRiskStrategyRequest &request);
                void DescribeDspmRiskStrategyAsync(const Model::DescribeDspmRiskStrategyRequest& request, const DescribeDspmRiskStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmRiskStrategyOutcomeCallable DescribeDspmRiskStrategyCallable(const Model::DescribeDspmRiskStrategyRequest& request);

                /**
                 *Query Dspm risk group policies
                 * @param req DescribeDspmRiskStrategyGroupRequest
                 * @return DescribeDspmRiskStrategyGroupOutcome
                 */
                DescribeDspmRiskStrategyGroupOutcome DescribeDspmRiskStrategyGroup(const Model::DescribeDspmRiskStrategyGroupRequest &request);
                void DescribeDspmRiskStrategyGroupAsync(const Model::DescribeDspmRiskStrategyGroupRequest& request, const DescribeDspmRiskStrategyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmRiskStrategyGroupOutcomeCallable DescribeDspmRiskStrategyGroupCallable(const Model::DescribeDspmRiskStrategyGroupRequest& request);

                /**
                 *Query Dspm risk trends.
                 * @param req DescribeDspmRiskTendencyRequest
                 * @return DescribeDspmRiskTendencyOutcome
                 */
                DescribeDspmRiskTendencyOutcome DescribeDspmRiskTendency(const Model::DescribeDspmRiskTendencyRequest &request);
                void DescribeDspmRiskTendencyAsync(const Model::DescribeDspmRiskTendencyRequest& request, const DescribeDspmRiskTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmRiskTendencyOutcomeCallable DescribeDspmRiskTendencyCallable(const Model::DescribeDspmRiskTendencyRequest& request);

                /**
                 *This API is used to query the audit session list information.
                 * @param req DescribeDspmSessionListRequest
                 * @return DescribeDspmSessionListOutcome
                 */
                DescribeDspmSessionListOutcome DescribeDspmSessionList(const Model::DescribeDspmSessionListRequest &request);
                void DescribeDspmSessionListAsync(const Model::DescribeDspmSessionListRequest& request, const DescribeDspmSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmSessionListOutcomeCallable DescribeDspmSessionListCallable(const Model::DescribeDspmSessionListRequest& request);

                /**
                 *Query Dspm statistical information
                 * @param req DescribeDspmStatisticsRequest
                 * @return DescribeDspmStatisticsOutcome
                 */
                DescribeDspmStatisticsOutcome DescribeDspmStatistics(const Model::DescribeDspmStatisticsRequest &request);
                void DescribeDspmStatisticsAsync(const Model::DescribeDspmStatisticsRequest& request, const DescribeDspmStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmStatisticsOutcomeCallable DescribeDspmStatisticsCallable(const Model::DescribeDspmStatisticsRequest& request);

                /**
                 *Queries information on asset types supported by Dspm.
                 * @param req DescribeDspmSupportedAssetTypeRequest
                 * @return DescribeDspmSupportedAssetTypeOutcome
                 */
                DescribeDspmSupportedAssetTypeOutcome DescribeDspmSupportedAssetType(const Model::DescribeDspmSupportedAssetTypeRequest &request);
                void DescribeDspmSupportedAssetTypeAsync(const Model::DescribeDspmSupportedAssetTypeRequest& request, const DescribeDspmSupportedAssetTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmSupportedAssetTypeOutcomeCallable DescribeDspmSupportedAssetTypeCallable(const Model::DescribeDspmSupportedAssetTypeRequest& request);

                /**
                 *Query the Dspm asset status synchronization.
                 * @param req DescribeDspmSyncAssetsStatusRequest
                 * @return DescribeDspmSyncAssetsStatusOutcome
                 */
                DescribeDspmSyncAssetsStatusOutcome DescribeDspmSyncAssetsStatus(const Model::DescribeDspmSyncAssetsStatusRequest &request);
                void DescribeDspmSyncAssetsStatusAsync(const Model::DescribeDspmSyncAssetsStatusRequest& request, const DescribeDspmSyncAssetsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmSyncAssetsStatusOutcomeCallable DescribeDspmSyncAssetsStatusCallable(const Model::DescribeDspmSyncAssetsStatusRequest& request);

                /**
                 *Query the Dspm user synchronization status.
                 * @param req DescribeDspmSyncUsersStatusRequest
                 * @return DescribeDspmSyncUsersStatusOutcome
                 */
                DescribeDspmSyncUsersStatusOutcome DescribeDspmSyncUsersStatus(const Model::DescribeDspmSyncUsersStatusRequest &request);
                void DescribeDspmSyncUsersStatusAsync(const Model::DescribeDspmSyncUsersStatusRequest& request, const DescribeDspmSyncUsersStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmSyncUsersStatusOutcomeCallable DescribeDspmSyncUsersStatusCallable(const Model::DescribeDspmSyncUsersStatusRequest& request);

                /**
                 *This API is used to query the tenant CKafka instance list.
                 * @param req DescribeDspmUserCkafkaInstanceListRequest
                 * @return DescribeDspmUserCkafkaInstanceListOutcome
                 */
                DescribeDspmUserCkafkaInstanceListOutcome DescribeDspmUserCkafkaInstanceList(const Model::DescribeDspmUserCkafkaInstanceListRequest &request);
                void DescribeDspmUserCkafkaInstanceListAsync(const Model::DescribeDspmUserCkafkaInstanceListRequest& request, const DescribeDspmUserCkafkaInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmUserCkafkaInstanceListOutcomeCallable DescribeDspmUserCkafkaInstanceListCallable(const Model::DescribeDspmUserCkafkaInstanceListRequest& request);

                /**
                 *Query the Dspm allowlist policy.
                 * @param req DescribeDspmWhitelistStrategyRequest
                 * @return DescribeDspmWhitelistStrategyOutcome
                 */
                DescribeDspmWhitelistStrategyOutcome DescribeDspmWhitelistStrategy(const Model::DescribeDspmWhitelistStrategyRequest &request);
                void DescribeDspmWhitelistStrategyAsync(const Model::DescribeDspmWhitelistStrategyRequest& request, const DescribeDspmWhitelistStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDspmWhitelistStrategyOutcomeCallable DescribeDspmWhitelistStrategyCallable(const Model::DescribeDspmWhitelistStrategyRequest& request);

                /**
                 *List of specified asset types
                 * @param req DescribeDynamicAssetsRequest
                 * @return DescribeDynamicAssetsOutcome
                 */
                DescribeDynamicAssetsOutcome DescribeDynamicAssets(const Model::DescribeDynamicAssetsRequest &request);
                void DescribeDynamicAssetsAsync(const Model::DescribeDynamicAssetsRequest& request, const DescribeDynamicAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDynamicAssetsOutcomeCallable DescribeDynamicAssetsCallable(const Model::DescribeDynamicAssetsRequest& request);

                /**
                 *This API is used to obtain the list of EDR policies.
                 * @param req DescribeEDRRuleListRequest
                 * @return DescribeEDRRuleListOutcome
                 */
                DescribeEDRRuleListOutcome DescribeEDRRuleList(const Model::DescribeEDRRuleListRequest &request);
                void DescribeEDRRuleListAsync(const Model::DescribeEDRRuleListRequest& request, const DescribeEDRRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEDRRuleListOutcomeCallable DescribeEDRRuleListCallable(const Model::DescribeEDRRuleListRequest& request);

                /**
                 *This API is used to query the scan task list. Filter.Filters supports Name: Keyword (blurry, OperatorType=9), ScanType (MANUAL/CYCLE), TaskType (HOST/CONTAINER), Status (WAIT/SCANNING/FINISHED/FAILED/CANCELED), AppId (account).
                 * @param req DescribeEDRScanRecordListRequest
                 * @return DescribeEDRScanRecordListOutcome
                 */
                DescribeEDRScanRecordListOutcome DescribeEDRScanRecordList(const Model::DescribeEDRScanRecordListRequest &request);
                void DescribeEDRScanRecordListAsync(const Model::DescribeEDRScanRecordListRequest& request, const DescribeEDRScanRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEDRScanRecordListOutcomeCallable DescribeEDRScanRecordListCallable(const Model::DescribeEDRScanRecordListRequest& request);

                /**
                 *Query scan task details. Filter.Filters supports Name: Status (asset scan status, OperatorType=7 IN match, Value: WAIT/SCANNING/FINISHED/FAILED).
                 * @param req DescribeEDRScanTaskDetailRequest
                 * @return DescribeEDRScanTaskDetailOutcome
                 */
                DescribeEDRScanTaskDetailOutcome DescribeEDRScanTaskDetail(const Model::DescribeEDRScanTaskDetailRequest &request);
                void DescribeEDRScanTaskDetailAsync(const Model::DescribeEDRScanTaskDetailRequest& request, const DescribeEDRScanTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEDRScanTaskDetailOutcomeCallable DescribeEDRScanTaskDetailCallable(const Model::DescribeEDRScanTaskDetailRequest& request);

                /**
                 *This API is used to obtain EDR alarm quantity statistics for the asset module. It queries the EDR alarm table based on the passed-in MemberId and InstanceIDs and returns the number of alarm records. If InstanceIDs is empty, summarized statistics are returned. Otherwise, statistics are returned by InstanceID granularity.
                 * @param req DescribeEdrAlertCountForAssetRequest
                 * @return DescribeEdrAlertCountForAssetOutcome
                 */
                DescribeEdrAlertCountForAssetOutcome DescribeEdrAlertCountForAsset(const Model::DescribeEdrAlertCountForAssetRequest &request);
                void DescribeEdrAlertCountForAssetAsync(const Model::DescribeEdrAlertCountForAssetRequest& request, const DescribeEdrAlertCountForAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrAlertCountForAssetOutcomeCallable DescribeEdrAlertCountForAssetCallable(const Model::DescribeEdrAlertCountForAssetRequest& request);

                /**
                 *Alarm quantity statistics in the container scenario.
                 * @param req DescribeEdrAlertCountForContainerRequest
                 * @return DescribeEdrAlertCountForContainerOutcome
                 */
                DescribeEdrAlertCountForContainerOutcome DescribeEdrAlertCountForContainer(const Model::DescribeEdrAlertCountForContainerRequest &request);
                void DescribeEdrAlertCountForContainerAsync(const Model::DescribeEdrAlertCountForContainerRequest& request, const DescribeEdrAlertCountForContainerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrAlertCountForContainerOutcomeCallable DescribeEdrAlertCountForContainerCallable(const Model::DescribeEdrAlertCountForContainerRequest& request);

                /**
                 *This API is used to obtain EDR alert details, including complete information such as alert content JSON, asset enrichment, and intelligence enrichment.
                 * @param req DescribeEdrAlertInfoRequest
                 * @return DescribeEdrAlertInfoOutcome
                 */
                DescribeEdrAlertInfoOutcome DescribeEdrAlertInfo(const Model::DescribeEdrAlertInfoRequest &request);
                void DescribeEdrAlertInfoAsync(const Model::DescribeEdrAlertInfoRequest& request, const DescribeEdrAlertInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrAlertInfoOutcomeCallable DescribeEdrAlertInfoCallable(const Model::DescribeEdrAlertInfoRequest& request);

                /**
                 *Query the EDR alarm list.
                 * @param req DescribeEdrAlertListRequest
                 * @return DescribeEdrAlertListOutcome
                 */
                DescribeEdrAlertListOutcome DescribeEdrAlertList(const Model::DescribeEdrAlertListRequest &request);
                void DescribeEdrAlertListAsync(const Model::DescribeEdrAlertListRequest& request, const DescribeEdrAlertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrAlertListOutcomeCallable DescribeEdrAlertListCallable(const Model::DescribeEdrAlertListRequest& request);

                /**
                 *EDR alert multi-attack stage queries
                 * @param req DescribeEdrAlertMultiAttackStagesRequest
                 * @return DescribeEdrAlertMultiAttackStagesOutcome
                 */
                DescribeEdrAlertMultiAttackStagesOutcome DescribeEdrAlertMultiAttackStages(const Model::DescribeEdrAlertMultiAttackStagesRequest &request);
                void DescribeEdrAlertMultiAttackStagesAsync(const Model::DescribeEdrAlertMultiAttackStagesRequest& request, const DescribeEdrAlertMultiAttackStagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrAlertMultiAttackStagesOutcomeCallable DescribeEdrAlertMultiAttackStagesCallable(const Model::DescribeEdrAlertMultiAttackStagesRequest& request);

                /**
                 *Retrieves EDR alarm statistics
                 * @param req DescribeEdrAlertSummaryRequest
                 * @return DescribeEdrAlertSummaryOutcome
                 */
                DescribeEdrAlertSummaryOutcome DescribeEdrAlertSummary(const Model::DescribeEdrAlertSummaryRequest &request);
                void DescribeEdrAlertSummaryAsync(const Model::DescribeEdrAlertSummaryRequest& request, const DescribeEdrAlertSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrAlertSummaryOutcomeCallable DescribeEdrAlertSummaryCallable(const Model::DescribeEdrAlertSummaryRequest& request);

                /**
                 *This API is used to query EDR alarm tags in batches.
                 * @param req DescribeEdrAlertThreatTagsRequest
                 * @return DescribeEdrAlertThreatTagsOutcome
                 */
                DescribeEdrAlertThreatTagsOutcome DescribeEdrAlertThreatTags(const Model::DescribeEdrAlertThreatTagsRequest &request);
                void DescribeEdrAlertThreatTagsAsync(const Model::DescribeEdrAlertThreatTagsRequest& request, const DescribeEdrAlertThreatTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrAlertThreatTagsOutcomeCallable DescribeEdrAlertThreatTagsCallable(const Model::DescribeEdrAlertThreatTagsRequest& request);

                /**
                 *This API is used to query the exclusion network segment configurations for EDR log collection. TCP logs from network segments in the exclusion list will not be collected. If no user configuration exists, the system-recommended default network segments will be returned.
                 * @param req DescribeEdrExcludeNetworkSegmentsRequest
                 * @return DescribeEdrExcludeNetworkSegmentsOutcome
                 */
                DescribeEdrExcludeNetworkSegmentsOutcome DescribeEdrExcludeNetworkSegments(const Model::DescribeEdrExcludeNetworkSegmentsRequest &request);
                void DescribeEdrExcludeNetworkSegmentsAsync(const Model::DescribeEdrExcludeNetworkSegmentsRequest& request, const DescribeEdrExcludeNetworkSegmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrExcludeNetworkSegmentsOutcomeCallable DescribeEdrExcludeNetworkSegmentsCallable(const Model::DescribeEdrExcludeNetworkSegmentsRequest& request);

                /**
                 *Query the EDR export download link
                 * @param req DescribeEdrExportJobDownloadURLRequest
                 * @return DescribeEdrExportJobDownloadURLOutcome
                 */
                DescribeEdrExportJobDownloadURLOutcome DescribeEdrExportJobDownloadURL(const Model::DescribeEdrExportJobDownloadURLRequest &request);
                void DescribeEdrExportJobDownloadURLAsync(const Model::DescribeEdrExportJobDownloadURLRequest& request, const DescribeEdrExportJobDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrExportJobDownloadURLOutcomeCallable DescribeEdrExportJobDownloadURLCallable(const Model::DescribeEdrExportJobDownloadURLRequest& request);

                /**
                 *Export the EDR task list.
                 * @param req DescribeEdrExportJobListRequest
                 * @return DescribeEdrExportJobListOutcome
                 */
                DescribeEdrExportJobListOutcome DescribeEdrExportJobList(const Model::DescribeEdrExportJobListRequest &request);
                void DescribeEdrExportJobListAsync(const Model::DescribeEdrExportJobListRequest& request, const DescribeEdrExportJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrExportJobListOutcomeCallable DescribeEdrExportJobListCallable(const Model::DescribeEdrExportJobListRequest& request);

                /**
                 *This API is used to query the collection path configuration.
                 * @param req DescribeEdrLogCollectPathsRequest
                 * @return DescribeEdrLogCollectPathsOutcome
                 */
                DescribeEdrLogCollectPathsOutcome DescribeEdrLogCollectPaths(const Model::DescribeEdrLogCollectPathsRequest &request);
                void DescribeEdrLogCollectPathsAsync(const Model::DescribeEdrLogCollectPathsRequest& request, const DescribeEdrLogCollectPathsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdrLogCollectPathsOutcomeCallable DescribeEdrLogCollectPathsCallable(const Model::DescribeEdrLogCollectPathsRequest& request);

                /**
                 *Result download URL of an export task
                 * @param req DescribeExportJobDownloadURLRequest
                 * @return DescribeExportJobDownloadURLOutcome
                 */
                DescribeExportJobDownloadURLOutcome DescribeExportJobDownloadURL(const Model::DescribeExportJobDownloadURLRequest &request);
                void DescribeExportJobDownloadURLAsync(const Model::DescribeExportJobDownloadURLRequest& request, const DescribeExportJobDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExportJobDownloadURLOutcomeCallable DescribeExportJobDownloadURLCallable(const Model::DescribeExportJobDownloadURLRequest& request);

                /**
                 *Exports the task list
                 * @param req DescribeExportJobManageListRequest
                 * @return DescribeExportJobManageListOutcome
                 */
                DescribeExportJobManageListOutcome DescribeExportJobManageList(const Model::DescribeExportJobManageListRequest &request);
                void DescribeExportJobManageListAsync(const Model::DescribeExportJobManageListRequest& request, const DescribeExportJobManageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExportJobManageListOutcomeCallable DescribeExportJobManageListCallable(const Model::DescribeExportJobManageListRequest& request);

                /**
                 *Cloud boundary analysis asset category
                 * @param req DescribeExposeAssetCategoryRequest
                 * @return DescribeExposeAssetCategoryOutcome
                 */
                DescribeExposeAssetCategoryOutcome DescribeExposeAssetCategory(const Model::DescribeExposeAssetCategoryRequest &request);
                void DescribeExposeAssetCategoryAsync(const Model::DescribeExposeAssetCategoryRequest& request, const DescribeExposeAssetCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposeAssetCategoryOutcomeCallable DescribeExposeAssetCategoryCallable(const Model::DescribeExposeAssetCategoryRequest& request);

                /**
                 *Query the cloud boundary analysis path node
                 * @param req DescribeExposePathRequest
                 * @return DescribeExposePathOutcome
                 */
                DescribeExposePathOutcome DescribeExposePath(const Model::DescribeExposePathRequest &request);
                void DescribeExposePathAsync(const Model::DescribeExposePathRequest& request, const DescribeExposePathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposePathOutcomeCallable DescribeExposePathCallable(const Model::DescribeExposePathRequest& request);

                /**
                 *Pending risks to be governed for cloud boundaries
                 * @param req DescribeExposeRiskStatisticsRequest
                 * @return DescribeExposeRiskStatisticsOutcome
                 */
                DescribeExposeRiskStatisticsOutcome DescribeExposeRiskStatistics(const Model::DescribeExposeRiskStatisticsRequest &request);
                void DescribeExposeRiskStatisticsAsync(const Model::DescribeExposeRiskStatisticsRequest& request, const DescribeExposeRiskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposeRiskStatisticsOutcomeCallable DescribeExposeRiskStatisticsCallable(const Model::DescribeExposeRiskStatisticsRequest& request);

                /**
                 *List of pending risks in cloud boundaries
                 * @param req DescribeExposeRisksRequest
                 * @return DescribeExposeRisksOutcome
                 */
                DescribeExposeRisksOutcome DescribeExposeRisks(const Model::DescribeExposeRisksRequest &request);
                void DescribeExposeRisksAsync(const Model::DescribeExposeRisksRequest& request, const DescribeExposeRisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposeRisksOutcomeCallable DescribeExposeRisksCallable(const Model::DescribeExposeRisksRequest& request);

                /**
                 *List of boundary rules
                 * @param req DescribeExposeRulesRequest
                 * @return DescribeExposeRulesOutcome
                 */
                DescribeExposeRulesOutcome DescribeExposeRules(const Model::DescribeExposeRulesRequest &request);
                void DescribeExposeRulesAsync(const Model::DescribeExposeRulesRequest& request, const DescribeExposeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposeRulesOutcomeCallable DescribeExposeRulesCallable(const Model::DescribeExposeRulesRequest& request);

                /**
                 *Rule attributes for automatic tagging at cloud boundaries
                 * @param req DescribeExposureAutoTagAttributeRequest
                 * @return DescribeExposureAutoTagAttributeOutcome
                 */
                DescribeExposureAutoTagAttributeOutcome DescribeExposureAutoTagAttribute(const Model::DescribeExposureAutoTagAttributeRequest &request);
                void DescribeExposureAutoTagAttributeAsync(const Model::DescribeExposureAutoTagAttributeRequest& request, const DescribeExposureAutoTagAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposureAutoTagAttributeOutcomeCallable DescribeExposureAutoTagAttributeCallable(const Model::DescribeExposureAutoTagAttributeRequest& request);

                /**
                 *Automatic tagging of cloud boundaries - rule list
                 * @param req DescribeExposureAutoTagRulesRequest
                 * @return DescribeExposureAutoTagRulesOutcome
                 */
                DescribeExposureAutoTagRulesOutcome DescribeExposureAutoTagRules(const Model::DescribeExposureAutoTagRulesRequest &request);
                void DescribeExposureAutoTagRulesAsync(const Model::DescribeExposureAutoTagRulesRequest& request, const DescribeExposureAutoTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposureAutoTagRulesOutcomeCallable DescribeExposureAutoTagRulesCallable(const Model::DescribeExposureAutoTagRulesRequest& request);

                /**
                 *Query Internet exposure cycle count trend statistics.
                 * @param req DescribeExposureTrendRequest
                 * @return DescribeExposureTrendOutcome
                 */
                DescribeExposureTrendOutcome DescribeExposureTrend(const Model::DescribeExposureTrendRequest &request);
                void DescribeExposureTrendAsync(const Model::DescribeExposureTrendRequest& request, const DescribeExposureTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposureTrendOutcomeCallable DescribeExposureTrendCallable(const Model::DescribeExposureTrendRequest& request);

                /**
                 *Cloud boundary analysis asset list
                 * @param req DescribeExposuresRequest
                 * @return DescribeExposuresOutcome
                 */
                DescribeExposuresOutcome DescribeExposures(const Model::DescribeExposuresRequest &request);
                void DescribeExposuresAsync(const Model::DescribeExposuresRequest& request, const DescribeExposuresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposuresOutcomeCallable DescribeExposuresCallable(const Model::DescribeExposuresRequest& request);

                /**
                 *Obtain Gateway List
                 * @param req DescribeGatewayAssetsRequest
                 * @return DescribeGatewayAssetsOutcome
                 */
                DescribeGatewayAssetsOutcome DescribeGatewayAssets(const Model::DescribeGatewayAssetsRequest &request);
                void DescribeGatewayAssetsAsync(const Model::DescribeGatewayAssetsRequest& request, const DescribeGatewayAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewayAssetsOutcomeCallable DescribeGatewayAssetsCallable(const Model::DescribeGatewayAssetsRequest& request);

                /**
                 *Query the high-risk baseline risk list of host nodes under the cloud boundary analysis exposed path.
                 * @param req DescribeHighBaseLineRiskListRequest
                 * @return DescribeHighBaseLineRiskListOutcome
                 */
                DescribeHighBaseLineRiskListOutcome DescribeHighBaseLineRiskList(const Model::DescribeHighBaseLineRiskListRequest &request);
                void DescribeHighBaseLineRiskListAsync(const Model::DescribeHighBaseLineRiskListRequest& request, const DescribeHighBaseLineRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHighBaseLineRiskListOutcomeCallable DescribeHighBaseLineRiskListCallable(const Model::DescribeHighBaseLineRiskListRequest& request);

                /**
                 *Search the host kb risk list.
                 * @param req DescribeHostKBRiskListRequest
                 * @return DescribeHostKBRiskListOutcome
                 */
                DescribeHostKBRiskListOutcome DescribeHostKBRiskList(const Model::DescribeHostKBRiskListRequest &request);
                void DescribeHostKBRiskListAsync(const Model::DescribeHostKBRiskListRequest& request, const DescribeHostKBRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostKBRiskListOutcomeCallable DescribeHostKBRiskListCallable(const Model::DescribeHostKBRiskListRequest& request);

                /**
                 *This API is used to obtain host vulnerability VPR information.
                 * @param req DescribeHostVulItemVPRInfoRequest
                 * @return DescribeHostVulItemVPRInfoOutcome
                 */
                DescribeHostVulItemVPRInfoOutcome DescribeHostVulItemVPRInfo(const Model::DescribeHostVulItemVPRInfoRequest &request);
                void DescribeHostVulItemVPRInfoAsync(const Model::DescribeHostVulItemVPRInfoRequest& request, const DescribeHostVulItemVPRInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostVulItemVPRInfoOutcomeCallable DescribeHostVulItemVPRInfoCallable(const Model::DescribeHostVulItemVPRInfoRequest& request);

                /**
                 *This API is used to obtain the host vulnerability overview.
                 * @param req DescribeHostVulOverviewRequest
                 * @return DescribeHostVulOverviewOutcome
                 */
                DescribeHostVulOverviewOutcome DescribeHostVulOverview(const Model::DescribeHostVulOverviewRequest &request);
                void DescribeHostVulOverviewAsync(const Model::DescribeHostVulOverviewRequest& request, const DescribeHostVulOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostVulOverviewOutcomeCallable DescribeHostVulOverviewCallable(const Model::DescribeHostVulOverviewRequest& request);

                /**
                 *This API is used to retrieve the host vulnerability risk list.
                 * @param req DescribeHostVulRiskListRequest
                 * @return DescribeHostVulRiskListOutcome
                 */
                DescribeHostVulRiskListOutcome DescribeHostVulRiskList(const Model::DescribeHostVulRiskListRequest &request);
                void DescribeHostVulRiskListAsync(const Model::DescribeHostVulRiskListRequest& request, const DescribeHostVulRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostVulRiskListOutcomeCallable DescribeHostVulRiskListCallable(const Model::DescribeHostVulRiskListRequest& request);

                /**
                 *Retrieve the IaC detection file list.
                 * @param req DescribeIaCFileListRequest
                 * @return DescribeIaCFileListOutcome
                 */
                DescribeIaCFileListOutcome DescribeIaCFileList(const Model::DescribeIaCFileListRequest &request);
                void DescribeIaCFileListAsync(const Model::DescribeIaCFileListRequest& request, const DescribeIaCFileListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIaCFileListOutcomeCallable DescribeIaCFileListCallable(const Model::DescribeIaCFileListRequest& request);

                /**
                 *Obtain the IaC detection file overview.
                 * @param req DescribeIaCFileOverviewRequest
                 * @return DescribeIaCFileOverviewOutcome
                 */
                DescribeIaCFileOverviewOutcome DescribeIaCFileOverview(const Model::DescribeIaCFileOverviewRequest &request);
                void DescribeIaCFileOverviewAsync(const Model::DescribeIaCFileOverviewRequest& request, const DescribeIaCFileOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIaCFileOverviewOutcomeCallable DescribeIaCFileOverviewCallable(const Model::DescribeIaCFileOverviewRequest& request);

                /**
                 *Obtain the IaC detection file report.
                 * @param req DescribeIaCFileReportRequest
                 * @return DescribeIaCFileReportOutcome
                 */
                DescribeIaCFileReportOutcome DescribeIaCFileReport(const Model::DescribeIaCFileReportRequest &request);
                void DescribeIaCFileReportAsync(const Model::DescribeIaCFileReportRequest& request, const DescribeIaCFileReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIaCFileReportOutcomeCallable DescribeIaCFileReportCallable(const Model::DescribeIaCFileReportRequest& request);

                /**
                 *This API is used to search the IaC detection integration Token list.
                 * @param req DescribeIaCTokenListRequest
                 * @return DescribeIaCTokenListOutcome
                 */
                DescribeIaCTokenListOutcome DescribeIaCTokenList(const Model::DescribeIaCTokenListRequest &request);
                void DescribeIaCTokenListAsync(const Model::DescribeIaCTokenListRequest& request, const DescribeIaCTokenListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIaCTokenListOutcomeCallable DescribeIaCTokenListCallable(const Model::DescribeIaCTokenListRequest& request);

                /**
                 *Queries image asset details.
                 * @param req DescribeImageAssetDetailRequest
                 * @return DescribeImageAssetDetailOutcome
                 */
                DescribeImageAssetDetailOutcome DescribeImageAssetDetail(const Model::DescribeImageAssetDetailRequest &request);
                void DescribeImageAssetDetailAsync(const Model::DescribeImageAssetDetailRequest& request, const DescribeImageAssetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageAssetDetailOutcomeCallable DescribeImageAssetDetailCallable(const Model::DescribeImageAssetDetailRequest& request);

                /**
                 *Query the image asset list
                 * @param req DescribeImageAssetListRequest
                 * @return DescribeImageAssetListOutcome
                 */
                DescribeImageAssetListOutcome DescribeImageAssetList(const Model::DescribeImageAssetListRequest &request);
                void DescribeImageAssetListAsync(const Model::DescribeImageAssetListRequest& request, const DescribeImageAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageAssetListOutcomeCallable DescribeImageAssetListCallable(const Model::DescribeImageAssetListRequest& request);

                /**
                 *Query the number of related assets of an image.
                 * @param req DescribeImageAssociatedAssetCountRequest
                 * @return DescribeImageAssociatedAssetCountOutcome
                 */
                DescribeImageAssociatedAssetCountOutcome DescribeImageAssociatedAssetCount(const Model::DescribeImageAssociatedAssetCountRequest &request);
                void DescribeImageAssociatedAssetCountAsync(const Model::DescribeImageAssociatedAssetCountRequest& request, const DescribeImageAssociatedAssetCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageAssociatedAssetCountOutcomeCallable DescribeImageAssociatedAssetCountCallable(const Model::DescribeImageAssociatedAssetCountRequest& request);

                /**
                 *Queries the container assets associated with an image.
                 * @param req DescribeImageAssociatedContainerListRequest
                 * @return DescribeImageAssociatedContainerListOutcome
                 */
                DescribeImageAssociatedContainerListOutcome DescribeImageAssociatedContainerList(const Model::DescribeImageAssociatedContainerListRequest &request);
                void DescribeImageAssociatedContainerListAsync(const Model::DescribeImageAssociatedContainerListRequest& request, const DescribeImageAssociatedContainerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageAssociatedContainerListOutcomeCallable DescribeImageAssociatedContainerListCallable(const Model::DescribeImageAssociatedContainerListRequest& request);

                /**
                 *Query the asset list of hosts associated with the image.
                 * @param req DescribeImageAssociatedHostListRequest
                 * @return DescribeImageAssociatedHostListOutcome
                 */
                DescribeImageAssociatedHostListOutcome DescribeImageAssociatedHostList(const Model::DescribeImageAssociatedHostListRequest &request);
                void DescribeImageAssociatedHostListAsync(const Model::DescribeImageAssociatedHostListRequest& request, const DescribeImageAssociatedHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageAssociatedHostListOutcomeCallable DescribeImageAssociatedHostListCallable(const Model::DescribeImageAssociatedHostListRequest& request);

                /**
                 *Queries the image component list.
                 * @param req DescribeImageComponentListRequest
                 * @return DescribeImageComponentListOutcome
                 */
                DescribeImageComponentListOutcome DescribeImageComponentList(const Model::DescribeImageComponentListRequest &request);
                void DescribeImageComponentListAsync(const Model::DescribeImageComponentListRequest& request, const DescribeImageComponentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageComponentListOutcomeCallable DescribeImageComponentListCallable(const Model::DescribeImageComponentListRequest& request);

                /**
                 *Queries the image repository export task list
                 * @param req DescribeImageExportJobListRequest
                 * @return DescribeImageExportJobListOutcome
                 */
                DescribeImageExportJobListOutcome DescribeImageExportJobList(const Model::DescribeImageExportJobListRequest &request);
                void DescribeImageExportJobListAsync(const Model::DescribeImageExportJobListRequest& request, const DescribeImageExportJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageExportJobListOutcomeCallable DescribeImageExportJobListCallable(const Model::DescribeImageExportJobListRequest& request);

                /**
                 *Query the image layer information list
                 * @param req DescribeImageLayerListRequest
                 * @return DescribeImageLayerListOutcome
                 */
                DescribeImageLayerListOutcome DescribeImageLayerList(const Model::DescribeImageLayerListRequest &request);
                void DescribeImageLayerListAsync(const Model::DescribeImageLayerListRequest& request, const DescribeImageLayerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageLayerListOutcomeCallable DescribeImageLayerListCallable(const Model::DescribeImageLayerListRequest& request);

                /**
                 *Queries the list of vulnerabilities in an image layer
                 * @param req DescribeImageLayerVulListRequest
                 * @return DescribeImageLayerVulListOutcome
                 */
                DescribeImageLayerVulListOutcome DescribeImageLayerVulList(const Model::DescribeImageLayerVulListRequest &request);
                void DescribeImageLayerVulListAsync(const Model::DescribeImageLayerVulListRequest& request, const DescribeImageLayerVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageLayerVulListOutcomeCallable DescribeImageLayerVulListCallable(const Model::DescribeImageLayerVulListRequest& request);

                /**
                 *Query the repository asset overview of images
                 * @param req DescribeImageRegistryAssetOverviewRequest
                 * @return DescribeImageRegistryAssetOverviewOutcome
                 */
                DescribeImageRegistryAssetOverviewOutcome DescribeImageRegistryAssetOverview(const Model::DescribeImageRegistryAssetOverviewRequest &request);
                void DescribeImageRegistryAssetOverviewAsync(const Model::DescribeImageRegistryAssetOverviewRequest& request, const DescribeImageRegistryAssetOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRegistryAssetOverviewOutcomeCallable DescribeImageRegistryAssetOverviewCallable(const Model::DescribeImageRegistryAssetOverviewRequest& request);

                /**
                 *Query the connectivity check task result of an image repository.
                 * @param req DescribeImageRegistryConnectivityTaskResultRequest
                 * @return DescribeImageRegistryConnectivityTaskResultOutcome
                 */
                DescribeImageRegistryConnectivityTaskResultOutcome DescribeImageRegistryConnectivityTaskResult(const Model::DescribeImageRegistryConnectivityTaskResultRequest &request);
                void DescribeImageRegistryConnectivityTaskResultAsync(const Model::DescribeImageRegistryConnectivityTaskResultRequest& request, const DescribeImageRegistryConnectivityTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRegistryConnectivityTaskResultOutcomeCallable DescribeImageRegistryConnectivityTaskResultCallable(const Model::DescribeImageRegistryConnectivityTaskResultRequest& request);

                /**
                 *This API is used to query the image repository list.
                 * @param req DescribeImageRegistryListRequest
                 * @return DescribeImageRegistryListOutcome
                 */
                DescribeImageRegistryListOutcome DescribeImageRegistryList(const Model::DescribeImageRegistryListRequest &request);
                void DescribeImageRegistryListAsync(const Model::DescribeImageRegistryListRequest& request, const DescribeImageRegistryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRegistryListOutcomeCallable DescribeImageRegistryListCallable(const Model::DescribeImageRegistryListRequest& request);

                /**
                 *This API is used to query the mirror repository namespace list.
                 * @param req DescribeImageRegistryNamespaceListRequest
                 * @return DescribeImageRegistryNamespaceListOutcome
                 */
                DescribeImageRegistryNamespaceListOutcome DescribeImageRegistryNamespaceList(const Model::DescribeImageRegistryNamespaceListRequest &request);
                void DescribeImageRegistryNamespaceListAsync(const Model::DescribeImageRegistryNamespaceListRequest& request, const DescribeImageRegistryNamespaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRegistryNamespaceListOutcomeCallable DescribeImageRegistryNamespaceListCallable(const Model::DescribeImageRegistryNamespaceListRequest& request);

                /**
                 *Query subtask information of image repository scanning
                 * @param req DescribeImageRegistryScanSubTaskListRequest
                 * @return DescribeImageRegistryScanSubTaskListOutcome
                 */
                DescribeImageRegistryScanSubTaskListOutcome DescribeImageRegistryScanSubTaskList(const Model::DescribeImageRegistryScanSubTaskListRequest &request);
                void DescribeImageRegistryScanSubTaskListAsync(const Model::DescribeImageRegistryScanSubTaskListRequest& request, const DescribeImageRegistryScanSubTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRegistryScanSubTaskListOutcomeCallable DescribeImageRegistryScanSubTaskListCallable(const Model::DescribeImageRegistryScanSubTaskListRequest& request);

                /**
                 *Query the image repository scan task list
                 * @param req DescribeImageRegistryScanTaskListRequest
                 * @return DescribeImageRegistryScanTaskListOutcome
                 */
                DescribeImageRegistryScanTaskListOutcome DescribeImageRegistryScanTaskList(const Model::DescribeImageRegistryScanTaskListRequest &request);
                void DescribeImageRegistryScanTaskListAsync(const Model::DescribeImageRegistryScanTaskListRequest& request, const DescribeImageRegistryScanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRegistryScanTaskListOutcomeCallable DescribeImageRegistryScanTaskListCallable(const Model::DescribeImageRegistryScanTaskListRequest& request);

                /**
                 *View the scheduled scan task configuration of a mirror repository
                 * @param req DescribeImageRegistryTimedScanTaskConfigRequest
                 * @return DescribeImageRegistryTimedScanTaskConfigOutcome
                 */
                DescribeImageRegistryTimedScanTaskConfigOutcome DescribeImageRegistryTimedScanTaskConfig(const Model::DescribeImageRegistryTimedScanTaskConfigRequest &request);
                void DescribeImageRegistryTimedScanTaskConfigAsync(const Model::DescribeImageRegistryTimedScanTaskConfigRequest& request, const DescribeImageRegistryTimedScanTaskConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRegistryTimedScanTaskConfigOutcomeCallable DescribeImageRegistryTimedScanTaskConfigCallable(const Model::DescribeImageRegistryTimedScanTaskConfigRequest& request);

                /**
                 *Query the preview of a scheduled scan task in the mirror repository
                 * @param req DescribeImageRegistryTimedScanTaskPreviewRequest
                 * @return DescribeImageRegistryTimedScanTaskPreviewOutcome
                 */
                DescribeImageRegistryTimedScanTaskPreviewOutcome DescribeImageRegistryTimedScanTaskPreview(const Model::DescribeImageRegistryTimedScanTaskPreviewRequest &request);
                void DescribeImageRegistryTimedScanTaskPreviewAsync(const Model::DescribeImageRegistryTimedScanTaskPreviewRequest& request, const DescribeImageRegistryTimedScanTaskPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageRegistryTimedScanTaskPreviewOutcomeCallable DescribeImageRegistryTimedScanTaskPreviewCallable(const Model::DescribeImageRegistryTimedScanTaskPreviewRequest& request);

                /**
                 *Query the sensitive information list of an image
                 * @param req DescribeImageSensitiveInfoListRequest
                 * @return DescribeImageSensitiveInfoListOutcome
                 */
                DescribeImageSensitiveInfoListOutcome DescribeImageSensitiveInfoList(const Model::DescribeImageSensitiveInfoListRequest &request);
                void DescribeImageSensitiveInfoListAsync(const Model::DescribeImageSensitiveInfoListRequest& request, const DescribeImageSensitiveInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageSensitiveInfoListOutcomeCallable DescribeImageSensitiveInfoListCallable(const Model::DescribeImageSensitiveInfoListRequest& request);

                /**
                 *Query the sensitive information allowlist for container images
                 * @param req DescribeImageSensitiveWhitelistRequest
                 * @return DescribeImageSensitiveWhitelistOutcome
                 */
                DescribeImageSensitiveWhitelistOutcome DescribeImageSensitiveWhitelist(const Model::DescribeImageSensitiveWhitelistRequest &request);
                void DescribeImageSensitiveWhitelistAsync(const Model::DescribeImageSensitiveWhitelistRequest& request, const DescribeImageSensitiveWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageSensitiveWhitelistOutcomeCallable DescribeImageSensitiveWhitelistCallable(const Model::DescribeImageSensitiveWhitelistRequest& request);

                /**
                 *Queries the Trojan virus list of an image
                 * @param req DescribeImageVirusListRequest
                 * @return DescribeImageVirusListOutcome
                 */
                DescribeImageVirusListOutcome DescribeImageVirusList(const Model::DescribeImageVirusListRequest &request);
                void DescribeImageVirusListAsync(const Model::DescribeImageVirusListRequest& request, const DescribeImageVirusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageVirusListOutcomeCallable DescribeImageVirusListCallable(const Model::DescribeImageVirusListRequest& request);

                /**
                 *This API is used to query the Trojan allowlist of an image.
                 * @param req DescribeImageVirusWhitelistRequest
                 * @return DescribeImageVirusWhitelistOutcome
                 */
                DescribeImageVirusWhitelistOutcome DescribeImageVirusWhitelist(const Model::DescribeImageVirusWhitelistRequest &request);
                void DescribeImageVirusWhitelistAsync(const Model::DescribeImageVirusWhitelistRequest& request, const DescribeImageVirusWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageVirusWhitelistOutcomeCallable DescribeImageVirusWhitelistCallable(const Model::DescribeImageVirusWhitelistRequest& request);

                /**
                 *Queries the detailed information of the Trojan allowlist of an image.
                 * @param req DescribeImageVirusWhitelistDetailRequest
                 * @return DescribeImageVirusWhitelistDetailOutcome
                 */
                DescribeImageVirusWhitelistDetailOutcome DescribeImageVirusWhitelistDetail(const Model::DescribeImageVirusWhitelistDetailRequest &request);
                void DescribeImageVirusWhitelistDetailAsync(const Model::DescribeImageVirusWhitelistDetailRequest& request, const DescribeImageVirusWhitelistDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageVirusWhitelistDetailOutcomeCallable DescribeImageVirusWhitelistDetailCallable(const Model::DescribeImageVirusWhitelistDetailRequest& request);

                /**
                 *This API is used to query the image vulnerability list.
                 * @param req DescribeImageVulListRequest
                 * @return DescribeImageVulListOutcome
                 */
                DescribeImageVulListOutcome DescribeImageVulList(const Model::DescribeImageVulListRequest &request);
                void DescribeImageVulListAsync(const Model::DescribeImageVulListRequest& request, const DescribeImageVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageVulListOutcomeCallable DescribeImageVulListCallable(const Model::DescribeImageVulListRequest& request);

                /**
                 *Queries the image vulnerability overview list
                 * @param req DescribeImageVulSummaryListRequest
                 * @return DescribeImageVulSummaryListOutcome
                 */
                DescribeImageVulSummaryListOutcome DescribeImageVulSummaryList(const Model::DescribeImageVulSummaryListRequest &request);
                void DescribeImageVulSummaryListAsync(const Model::DescribeImageVulSummaryListRequest& request, const DescribeImageVulSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageVulSummaryListOutcomeCallable DescribeImageVulSummaryListCallable(const Model::DescribeImageVulSummaryListRequest& request);

                /**
                 *This API is used to query the vulnerability allowlist of a container image.
                 * @param req DescribeImageVulWhitelistRequest
                 * @return DescribeImageVulWhitelistOutcome
                 */
                DescribeImageVulWhitelistOutcome DescribeImageVulWhitelist(const Model::DescribeImageVulWhitelistRequest &request);
                void DescribeImageVulWhitelistAsync(const Model::DescribeImageVulWhitelistRequest& request, const DescribeImageVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageVulWhitelistOutcomeCallable DescribeImageVulWhitelistCallable(const Model::DescribeImageVulWhitelistRequest& request);

                /**
                 *Query the details of a single Windows KB patch based on the user's input KB internal ID, and return the basic KB info, release time, whether restart is required, as well as the list of vulnerabilities associated with the KB.
                 * @param req DescribeKBDetailRequest
                 * @return DescribeKBDetailOutcome
                 */
                DescribeKBDetailOutcome DescribeKBDetail(const Model::DescribeKBDetailRequest &request);
                void DescribeKBDetailAsync(const Model::DescribeKBDetailRequest& request, const DescribeKBDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKBDetailOutcomeCallable DescribeKBDetailCallable(const Model::DescribeKBDetailRequest& request);

                /**
                 *Query the list of hosts that can update a specified KB patch. This API is used for Windows patch repair scenarios to query which hosts lack the patch and support auto-update before user-submitted KB patch update tasks.
                 * @param req DescribeKBUpdatableMachineListRequest
                 * @return DescribeKBUpdatableMachineListOutcome
                 */
                DescribeKBUpdatableMachineListOutcome DescribeKBUpdatableMachineList(const Model::DescribeKBUpdatableMachineListRequest &request);
                void DescribeKBUpdatableMachineListAsync(const Model::DescribeKBUpdatableMachineListRequest& request, const DescribeKBUpdatableMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKBUpdatableMachineListOutcomeCallable DescribeKBUpdatableMachineListCallable(const Model::DescribeKBUpdatableMachineListRequest& request);

                /**
                 *This API is used to query credential details and return credential metadata and masked credential data. The access type returns an Access array (original Key, masked Value), and the sts type returns an STS object (original System, masked SecretID and SecretKey).
                 * @param req DescribeKeySandboxCredentialRequest
                 * @return DescribeKeySandboxCredentialOutcome
                 */
                DescribeKeySandboxCredentialOutcome DescribeKeySandboxCredential(const Model::DescribeKeySandboxCredentialRequest &request);
                void DescribeKeySandboxCredentialAsync(const Model::DescribeKeySandboxCredentialRequest& request, const DescribeKeySandboxCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKeySandboxCredentialOutcomeCallable DescribeKeySandboxCredentialCallable(const Model::DescribeKeySandboxCredentialRequest& request);

                /**
                 *Query the voucher list.
                 * @param req DescribeKeySandboxCredentialListRequest
                 * @return DescribeKeySandboxCredentialListOutcome
                 */
                DescribeKeySandboxCredentialListOutcome DescribeKeySandboxCredentialList(const Model::DescribeKeySandboxCredentialListRequest &request);
                void DescribeKeySandboxCredentialListAsync(const Model::DescribeKeySandboxCredentialListRequest& request, const DescribeKeySandboxCredentialListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKeySandboxCredentialListOutcomeCallable DescribeKeySandboxCredentialListCallable(const Model::DescribeKeySandboxCredentialListRequest& request);

                /**
                 *Get last check-now task info
                 * @param req DescribeLastScanTaskInfoRequest
                 * @return DescribeLastScanTaskInfoOutcome
                 */
                DescribeLastScanTaskInfoOutcome DescribeLastScanTaskInfo(const Model::DescribeLastScanTaskInfoRequest &request);
                void DescribeLastScanTaskInfoAsync(const Model::DescribeLastScanTaskInfoRequest& request, const DescribeLastScanTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLastScanTaskInfoOutcomeCallable DescribeLastScanTaskInfoCallable(const Model::DescribeLastScanTaskInfoRequest& request);

                /**
                 *Queries the overall status of all valid authorizations under the current account, returns total count, used, remaining, and expiry time grouped by billing item, and also returns the auto-purchase switch status and merged remaining unbind count. The output sequence is fixed as: flagship edition → pro edition → RASP → other.
                 * @param req DescribeLicenseStatusRequest
                 * @return DescribeLicenseStatusOutcome
                 */
                DescribeLicenseStatusOutcome DescribeLicenseStatus(const Model::DescribeLicenseStatusRequest &request);
                void DescribeLicenseStatusAsync(const Model::DescribeLicenseStatusRequest& request, const DescribeLicenseStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLicenseStatusOutcomeCallable DescribeLicenseStatusCallable(const Model::DescribeLicenseStatusRequest& request);

                /**
                 *Query the firewall rules of a lightweight application server
                 * @param req DescribeLighthouseFirewallRulesRequest
                 * @return DescribeLighthouseFirewallRulesOutcome
                 */
                DescribeLighthouseFirewallRulesOutcome DescribeLighthouseFirewallRules(const Model::DescribeLighthouseFirewallRulesRequest &request);
                void DescribeLighthouseFirewallRulesAsync(const Model::DescribeLighthouseFirewallRulesRequest& request, const DescribeLighthouseFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLighthouseFirewallRulesOutcomeCallable DescribeLighthouseFirewallRulesCallable(const Model::DescribeLighthouseFirewallRulesRequest& request);

                /**
                 *Query CLB Listener List
                 * @param req DescribeListenerListRequest
                 * @return DescribeListenerListOutcome
                 */
                DescribeListenerListOutcome DescribeListenerList(const Model::DescribeListenerListRequest &request);
                void DescribeListenerListAsync(const Model::DescribeListenerListRequest& request, const DescribeListenerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenerListOutcomeCallable DescribeListenerListCallable(const Model::DescribeListenerListRequest& request);

                /**
                 *This API is used to obtain the global configuration for anti-uninstallation.
                 * @param req DescribeLoginTypeGlobalConfRequest
                 * @return DescribeLoginTypeGlobalConfOutcome
                 */
                DescribeLoginTypeGlobalConfOutcome DescribeLoginTypeGlobalConf(const Model::DescribeLoginTypeGlobalConfRequest &request);
                void DescribeLoginTypeGlobalConfAsync(const Model::DescribeLoginTypeGlobalConfRequest& request, const DescribeLoginTypeGlobalConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoginTypeGlobalConfOutcomeCallable DescribeLoginTypeGlobalConfCallable(const Model::DescribeLoginTypeGlobalConfRequest& request);

                /**
                 *Get the host list for QR code log-in
                 * @param req DescribeLoginTypeHostRequest
                 * @return DescribeLoginTypeHostOutcome
                 */
                DescribeLoginTypeHostOutcome DescribeLoginTypeHost(const Model::DescribeLoginTypeHostRequest &request);
                void DescribeLoginTypeHostAsync(const Model::DescribeLoginTypeHostRequest& request, const DescribeLoginTypeHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoginTypeHostOutcomeCallable DescribeLoginTypeHostCallable(const Model::DescribeLoginTypeHostRequest& request);

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
                 *This API is used to query the clearing history records of a machine.
                 * @param req DescribeMachineClearHistoryRequest
                 * @return DescribeMachineClearHistoryOutcome
                 */
                DescribeMachineClearHistoryOutcome DescribeMachineClearHistory(const Model::DescribeMachineClearHistoryRequest &request);
                void DescribeMachineClearHistoryAsync(const Model::DescribeMachineClearHistoryRequest& request, const DescribeMachineClearHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineClearHistoryOutcomeCallable DescribeMachineClearHistoryCallable(const Model::DescribeMachineClearHistoryRequest& request);

                /**
                 *This API is used to query the information of the host overview.
                 * @param req DescribeMachineGeneralRequest
                 * @return DescribeMachineGeneralOutcome
                 */
                DescribeMachineGeneralOutcome DescribeMachineGeneral(const Model::DescribeMachineGeneralRequest &request);
                void DescribeMachineGeneralAsync(const Model::DescribeMachineGeneralRequest& request, const DescribeMachineGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineGeneralOutcomeCallable DescribeMachineGeneralCallable(const Model::DescribeMachineGeneralRequest& request);

                /**
                 *This API is used to obtain the host login method.
                 * @param req DescribeMachineLoginTypeRequest
                 * @return DescribeMachineLoginTypeOutcome
                 */
                DescribeMachineLoginTypeOutcome DescribeMachineLoginType(const Model::DescribeMachineLoginTypeRequest &request);
                void DescribeMachineLoginTypeAsync(const Model::DescribeMachineLoginTypeRequest& request, const DescribeMachineLoginTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineLoginTypeOutcomeCallable DescribeMachineLoginTypeCallable(const Model::DescribeMachineLoginTypeRequest& request);

                /**
                 *This API is used to query the scheduled scan configuration for file scan and removal.
                 * @param req DescribeMalwareTimingScanSettingRequest
                 * @return DescribeMalwareTimingScanSettingOutcome
                 */
                DescribeMalwareTimingScanSettingOutcome DescribeMalwareTimingScanSetting(const Model::DescribeMalwareTimingScanSettingRequest &request);
                void DescribeMalwareTimingScanSettingAsync(const Model::DescribeMalwareTimingScanSettingRequest& request, const DescribeMalwareTimingScanSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalwareTimingScanSettingOutcomeCallable DescribeMalwareTimingScanSettingCallable(const Model::DescribeMalwareTimingScanSettingRequest& request);

                /**
                 *Show mandatory vulnerability intelligence for businesses.
                 * @param req DescribeMandatoryVulSetRequest
                 * @return DescribeMandatoryVulSetOutcome
                 */
                DescribeMandatoryVulSetOutcome DescribeMandatoryVulSet(const Model::DescribeMandatoryVulSetRequest &request);
                void DescribeMandatoryVulSetAsync(const Model::DescribeMandatoryVulSetRequest& request, const DescribeMandatoryVulSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMandatoryVulSetOutcomeCallable DescribeMandatoryVulSetCallable(const Model::DescribeMandatoryVulSetRequest& request);

                /**
                 *This API is used to obtain a list of batch tasks for modification of host login methods.
                 * @param req DescribeModifyMachinesLoginTypeTasksRequest
                 * @return DescribeModifyMachinesLoginTypeTasksOutcome
                 */
                DescribeModifyMachinesLoginTypeTasksOutcome DescribeModifyMachinesLoginTypeTasks(const Model::DescribeModifyMachinesLoginTypeTasksRequest &request);
                void DescribeModifyMachinesLoginTypeTasksAsync(const Model::DescribeModifyMachinesLoginTypeTasksRequest& request, const DescribeModifyMachinesLoginTypeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModifyMachinesLoginTypeTasksOutcomeCallable DescribeModifyMachinesLoginTypeTasksCallable(const Model::DescribeModifyMachinesLoginTypeTasksRequest& request);

                /**
                 *Retrieve the total number of assets integrated across multiple clouds (Tencent Cloud, Alibaba Cloud, AWS, Huawei Cloud, Azure, etc.) and the details of asset counts for each cloud service provider.
                 * @param req DescribeMultiCloudAssetCountRequest
                 * @return DescribeMultiCloudAssetCountOutcome
                 */
                DescribeMultiCloudAssetCountOutcome DescribeMultiCloudAssetCount(const Model::DescribeMultiCloudAssetCountRequest &request);
                void DescribeMultiCloudAssetCountAsync(const Model::DescribeMultiCloudAssetCountRequest& request, const DescribeMultiCloudAssetCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMultiCloudAssetCountOutcomeCallable DescribeMultiCloudAssetCountCallable(const Model::DescribeMultiCloudAssetCountRequest& request);

                /**
                 *This API is used to obtain the global configuration for NFS scanning.
                 * @param req DescribeNFSScanConfRequest
                 * @return DescribeNFSScanConfOutcome
                 */
                DescribeNFSScanConfOutcome DescribeNFSScanConf(const Model::DescribeNFSScanConfRequest &request);
                void DescribeNFSScanConfAsync(const Model::DescribeNFSScanConfRequest& request, const DescribeNFSScanConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNFSScanConfOutcomeCallable DescribeNFSScanConfCallable(const Model::DescribeNFSScanConfRequest& request);

                /**
                 *This API is used to query the host list for QR code log-in.
                 * @param req DescribeNFSScanHostRequest
                 * @return DescribeNFSScanHostOutcome
                 */
                DescribeNFSScanHostOutcome DescribeNFSScanHost(const Model::DescribeNFSScanHostRequest &request);
                void DescribeNFSScanHostAsync(const Model::DescribeNFSScanHostRequest& request, const DescribeNFSScanHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNFSScanHostOutcomeCallable DescribeNFSScanHostCallable(const Model::DescribeNFSScanHostRequest& request);

                /**
                 *Obtain Network Interface Card List
                 * @param req DescribeNICAssetsRequest
                 * @return DescribeNICAssetsOutcome
                 */
                DescribeNICAssetsOutcome DescribeNICAssets(const Model::DescribeNICAssetsRequest &request);
                void DescribeNICAssetsAsync(const Model::DescribeNICAssetsRequest& request, const DescribeNICAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNICAssetsOutcomeCallable DescribeNICAssetsCallable(const Model::DescribeNICAssetsRequest& request);

                /**
                 *Query the nat policy corresponding to a Tencent Cloud nat gateway instance
                 * @param req DescribeNatRulesRequest
                 * @return DescribeNatRulesOutcome
                 */
                DescribeNatRulesOutcome DescribeNatRules(const Model::DescribeNatRulesRequest &request);
                void DescribeNatRulesAsync(const Model::DescribeNatRulesRequest& request, const DescribeNatRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatRulesOutcomeCallable DescribeNatRulesCallable(const Model::DescribeNatRulesRequest& request);

                /**
                 *Query the cyber attack detection switch and asset scope configuration
                 * @param req DescribeNetAttackSettingRequest
                 * @return DescribeNetAttackSettingOutcome
                 */
                DescribeNetAttackSettingOutcome DescribeNetAttackSetting(const Model::DescribeNetAttackSettingRequest &request);
                void DescribeNetAttackSettingAsync(const Model::DescribeNetAttackSettingRequest& request, const DescribeNetAttackSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetAttackSettingOutcomeCallable DescribeNetAttackSettingCallable(const Model::DescribeNetAttackSettingRequest& request);

                /**
                 *Query client offline duration
                 * @param req DescribeNotifyAgentOfflineDurationRequest
                 * @return DescribeNotifyAgentOfflineDurationOutcome
                 */
                DescribeNotifyAgentOfflineDurationOutcome DescribeNotifyAgentOfflineDuration(const Model::DescribeNotifyAgentOfflineDurationRequest &request);
                void DescribeNotifyAgentOfflineDurationAsync(const Model::DescribeNotifyAgentOfflineDurationRequest& request, const DescribeNotifyAgentOfflineDurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotifyAgentOfflineDurationOutcomeCallable DescribeNotifyAgentOfflineDurationCallable(const Model::DescribeNotifyAgentOfflineDurationRequest& request);

                /**
                 *Get the notification asset scope configuration.
                 * @param req DescribeNotifyAssetConfigRequest
                 * @return DescribeNotifyAssetConfigOutcome
                 */
                DescribeNotifyAssetConfigOutcome DescribeNotifyAssetConfig(const Model::DescribeNotifyAssetConfigRequest &request);
                void DescribeNotifyAssetConfigAsync(const Model::DescribeNotifyAssetConfigRequest& request, const DescribeNotifyAssetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotifyAssetConfigOutcomeCallable DescribeNotifyAssetConfigCallable(const Model::DescribeNotifyAssetConfigRequest& request);

                /**
                 *Get notification settings
                 * @param req DescribeNotifySettingRequest
                 * @return DescribeNotifySettingOutcome
                 */
                DescribeNotifySettingOutcome DescribeNotifySetting(const Model::DescribeNotifySettingRequest &request);
                void DescribeNotifySettingAsync(const Model::DescribeNotifySettingRequest& request, const DescribeNotifySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotifySettingOutcomeCallable DescribeNotifySettingCallable(const Model::DescribeNotifySettingRequest& request);

                /**
                 *Gets notification settings for risk governance.
                 * @param req DescribeNotifySettingAkRequest
                 * @return DescribeNotifySettingAkOutcome
                 */
                DescribeNotifySettingAkOutcome DescribeNotifySettingAk(const Model::DescribeNotifySettingAkRequest &request);
                void DescribeNotifySettingAkAsync(const Model::DescribeNotifySettingAkRequest& request, const DescribeNotifySettingAkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotifySettingAkOutcomeCallable DescribeNotifySettingAkCallable(const Model::DescribeNotifySettingAkRequest& request);

                /**
                 *This API is used to obtain advanced configurations for alarm center notifications.
                 * @param req DescribeNotifySettingAlertRequest
                 * @return DescribeNotifySettingAlertOutcome
                 */
                DescribeNotifySettingAlertOutcome DescribeNotifySettingAlert(const Model::DescribeNotifySettingAlertRequest &request);
                void DescribeNotifySettingAlertAsync(const Model::DescribeNotifySettingAlertRequest& request, const DescribeNotifySettingAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNotifySettingAlertOutcomeCallable DescribeNotifySettingAlertCallable(const Model::DescribeNotifySettingAlertRequest& request);

                /**
                 *Query Group Account Details
                 * @param req DescribeOrganizationInfoRequest
                 * @return DescribeOrganizationInfoOutcome
                 */
                DescribeOrganizationInfoOutcome DescribeOrganizationInfo(const Model::DescribeOrganizationInfoRequest &request);
                void DescribeOrganizationInfoAsync(const Model::DescribeOrganizationInfoRequest& request, const DescribeOrganizationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationInfoOutcomeCallable DescribeOrganizationInfoCallable(const Model::DescribeOrganizationInfoRequest& request);

                /**
                 *Query Group Account User List
                 * @param req DescribeOrganizationUserInfoRequest
                 * @return DescribeOrganizationUserInfoOutcome
                 */
                DescribeOrganizationUserInfoOutcome DescribeOrganizationUserInfo(const Model::DescribeOrganizationUserInfoRequest &request);
                void DescribeOrganizationUserInfoAsync(const Model::DescribeOrganizationUserInfoRequest& request, const DescribeOrganizationUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationUserInfoOutcomeCallable DescribeOrganizationUserInfoCallable(const Model::DescribeOrganizationUserInfoRequest& request);

                /**
                 *Asset list
                 * @param req DescribeOtherCloudAssetsRequest
                 * @return DescribeOtherCloudAssetsOutcome
                 */
                DescribeOtherCloudAssetsOutcome DescribeOtherCloudAssets(const Model::DescribeOtherCloudAssetsRequest &request);
                void DescribeOtherCloudAssetsAsync(const Model::DescribeOtherCloudAssetsRequest& request, const DescribeOtherCloudAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOtherCloudAssetsOutcomeCallable DescribeOtherCloudAssetsCallable(const Model::DescribeOtherCloudAssetsRequest& request);

                /**
                 *Query the container list associated with a Pod
                 * @param req DescribePodContainerListRequest
                 * @return DescribePodContainerListOutcome
                 */
                DescribePodContainerListOutcome DescribePodContainerList(const Model::DescribePodContainerListRequest &request);
                void DescribePodContainerListAsync(const Model::DescribePodContainerListRequest& request, const DescribePodContainerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePodContainerListOutcomeCallable DescribePodContainerListCallable(const Model::DescribePodContainerListRequest& request);

                /**
                 *Port detection list
                 * @param req DescribePortDetectListRequest
                 * @return DescribePortDetectListOutcome
                 */
                DescribePortDetectListOutcome DescribePortDetectList(const Model::DescribePortDetectListRequest &request);
                void DescribePortDetectListAsync(const Model::DescribePortDetectListRequest& request, const DescribePortDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePortDetectListOutcomeCallable DescribePortDetectListCallable(const Model::DescribePortDetectListRequest& request);

                /**
                 *Query the number of port scanning tasks under the current account.
                 * @param req DescribePortScanTaskCountRequest
                 * @return DescribePortScanTaskCountOutcome
                 */
                DescribePortScanTaskCountOutcome DescribePortScanTaskCount(const Model::DescribePortScanTaskCountRequest &request);
                void DescribePortScanTaskCountAsync(const Model::DescribePortScanTaskCountRequest& request, const DescribePortScanTaskCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePortScanTaskCountOutcomeCallable DescribePortScanTaskCountCallable(const Model::DescribePortScanTaskCountRequest& request);

                /**
                 *This API is used to obtain the global configuration for anti-uninstallation.
                 * @param req DescribePreventUninstallGlobalConfRequest
                 * @return DescribePreventUninstallGlobalConfOutcome
                 */
                DescribePreventUninstallGlobalConfOutcome DescribePreventUninstallGlobalConf(const Model::DescribePreventUninstallGlobalConfRequest &request);
                void DescribePreventUninstallGlobalConfAsync(const Model::DescribePreventUninstallGlobalConfRequest& request, const DescribePreventUninstallGlobalConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePreventUninstallGlobalConfOutcomeCallable DescribePreventUninstallGlobalConfCallable(const Model::DescribePreventUninstallGlobalConfRequest& request);

                /**
                 *Retrieve the host list for uninstallation prevention.
                 * @param req DescribePreventUninstallHostRequest
                 * @return DescribePreventUninstallHostOutcome
                 */
                DescribePreventUninstallHostOutcome DescribePreventUninstallHost(const Model::DescribePreventUninstallHostRequest &request);
                void DescribePreventUninstallHostAsync(const Model::DescribePreventUninstallHostRequest& request, const DescribePreventUninstallHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePreventUninstallHostOutcomeCallable DescribePreventUninstallHostCallable(const Model::DescribePreventUninstallHostRequest& request);

                /**
                 *Obtain the global configuration for process protection.
                 * @param req DescribeProcessDaemonGlobalConfRequest
                 * @return DescribeProcessDaemonGlobalConfOutcome
                 */
                DescribeProcessDaemonGlobalConfOutcome DescribeProcessDaemonGlobalConf(const Model::DescribeProcessDaemonGlobalConfRequest &request);
                void DescribeProcessDaemonGlobalConfAsync(const Model::DescribeProcessDaemonGlobalConfRequest& request, const DescribeProcessDaemonGlobalConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProcessDaemonGlobalConfOutcomeCallable DescribeProcessDaemonGlobalConfCallable(const Model::DescribeProcessDaemonGlobalConfRequest& request);

                /**
                 *Get the process daemon host list.
                 * @param req DescribeProcessDaemonHostRequest
                 * @return DescribeProcessDaemonHostOutcome
                 */
                DescribeProcessDaemonHostOutcome DescribeProcessDaemonHost(const Model::DescribeProcessDaemonHostRequest &request);
                void DescribeProcessDaemonHostAsync(const Model::DescribeProcessDaemonHostRequest& request, const DescribeProcessDaemonHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProcessDaemonHostOutcomeCallable DescribeProcessDaemonHostCallable(const Model::DescribeProcessDaemonHostRequest& request);

                /**
                 *Public network asset
                 * @param req DescribePublicCloudAssetsRequest
                 * @return DescribePublicCloudAssetsOutcome
                 */
                DescribePublicCloudAssetsOutcome DescribePublicCloudAssets(const Model::DescribePublicCloudAssetsRequest &request);
                void DescribePublicCloudAssetsAsync(const Model::DescribePublicCloudAssetsRequest& request, const DescribePublicCloudAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicCloudAssetsOutcomeCallable DescribePublicCloudAssetsCallable(const Model::DescribePublicCloudAssetsRequest& request);

                /**
                 *IP Public Network List
                 * @param req DescribePublicIpAssetsRequest
                 * @return DescribePublicIpAssetsOutcome
                 */
                DescribePublicIpAssetsOutcome DescribePublicIpAssets(const Model::DescribePublicIpAssetsRequest &request);
                void DescribePublicIpAssetsAsync(const Model::DescribePublicIpAssetsRequest& request, const DescribePublicIpAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicIpAssetsOutcomeCallable DescribePublicIpAssetsCallable(const Model::DescribePublicIpAssetsRequest& request);

                /**
                 *This API is used to query the authorization list for application protection.
                 * @param req DescribeRaspLicenseListRequest
                 * @return DescribeRaspLicenseListOutcome
                 */
                DescribeRaspLicenseListOutcome DescribeRaspLicenseList(const Model::DescribeRaspLicenseListRequest &request);
                void DescribeRaspLicenseListAsync(const Model::DescribeRaspLicenseListRequest& request, const DescribeRaspLicenseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRaspLicenseListOutcomeCallable DescribeRaspLicenseListCallable(const Model::DescribeRaspLicenseListRequest& request);

                /**
                 *Query repository overview
                 * @param req DescribeRegistryOverviewRequest
                 * @return DescribeRegistryOverviewOutcome
                 */
                DescribeRegistryOverviewOutcome DescribeRegistryOverview(const Model::DescribeRegistryOverviewRequest &request);
                void DescribeRegistryOverviewAsync(const Model::DescribeRegistryOverviewRequest& request, const DescribeRegistryOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegistryOverviewOutcomeCallable DescribeRegistryOverviewCallable(const Model::DescribeRegistryOverviewRequest& request);

                /**
                 *Queries the region list of an image repository.
                 * @param req DescribeRegistryRegionListRequest
                 * @return DescribeRegistryRegionListOutcome
                 */
                DescribeRegistryRegionListOutcome DescribeRegistryRegionList(const Model::DescribeRegistryRegionListRequest &request);
                void DescribeRegistryRegionListAsync(const Model::DescribeRegistryRegionListRequest& request, const DescribeRegistryRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegistryRegionListOutcomeCallable DescribeRegistryRegionListCallable(const Model::DescribeRegistryRegionListRequest& request);

                /**
                 *Repository Image List
                 * @param req DescribeRepositoryImageAssetsRequest
                 * @return DescribeRepositoryImageAssetsOutcome
                 */
                DescribeRepositoryImageAssetsOutcome DescribeRepositoryImageAssets(const Model::DescribeRepositoryImageAssetsRequest &request);
                void DescribeRepositoryImageAssetsAsync(const Model::DescribeRepositoryImageAssetsRequest& request, const DescribeRepositoryImageAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRepositoryImageAssetsOutcomeCallable DescribeRepositoryImageAssetsCallable(const Model::DescribeRepositoryImageAssetsRequest& request);

                /**
                 *This API is used to query the intranet alert and asset scope configuration for rebound Shell.
                 * @param req DescribeReverseShellSystemPolicyConfigRequest
                 * @return DescribeReverseShellSystemPolicyConfigOutcome
                 */
                DescribeReverseShellSystemPolicyConfigOutcome DescribeReverseShellSystemPolicyConfig(const Model::DescribeReverseShellSystemPolicyConfigRequest &request);
                void DescribeReverseShellSystemPolicyConfigAsync(const Model::DescribeReverseShellSystemPolicyConfigRequest& request, const DescribeReverseShellSystemPolicyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReverseShellSystemPolicyConfigOutcomeCallable DescribeReverseShellSystemPolicyConfigCallable(const Model::DescribeReverseShellSystemPolicyConfigRequest& request);

                /**
                 *This API is used to obtain the risk call record list.
                 * @param req DescribeRiskCallRecordRequest
                 * @return DescribeRiskCallRecordOutcome
                 */
                DescribeRiskCallRecordOutcome DescribeRiskCallRecord(const Model::DescribeRiskCallRecordRequest &request);
                void DescribeRiskCallRecordAsync(const Model::DescribeRiskCallRecordRequest& request, const DescribeRiskCallRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCallRecordOutcomeCallable DescribeRiskCallRecordCallable(const Model::DescribeRiskCallRecordRequest& request);

                /**
                 *Obtain Configuration Risk List from Asset's Perspective
                 * @param req DescribeRiskCenterAssetViewCFGRiskListRequest
                 * @return DescribeRiskCenterAssetViewCFGRiskListOutcome
                 */
                DescribeRiskCenterAssetViewCFGRiskListOutcome DescribeRiskCenterAssetViewCFGRiskList(const Model::DescribeRiskCenterAssetViewCFGRiskListRequest &request);
                void DescribeRiskCenterAssetViewCFGRiskListAsync(const Model::DescribeRiskCenterAssetViewCFGRiskListRequest& request, const DescribeRiskCenterAssetViewCFGRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterAssetViewCFGRiskListOutcomeCallable DescribeRiskCenterAssetViewCFGRiskListCallable(const Model::DescribeRiskCenterAssetViewCFGRiskListRequest& request);

                /**
                 *Obtain Port Risk List from Asset's Perspective
                 * @param req DescribeRiskCenterAssetViewPortRiskListRequest
                 * @return DescribeRiskCenterAssetViewPortRiskListOutcome
                 */
                DescribeRiskCenterAssetViewPortRiskListOutcome DescribeRiskCenterAssetViewPortRiskList(const Model::DescribeRiskCenterAssetViewPortRiskListRequest &request);
                void DescribeRiskCenterAssetViewPortRiskListAsync(const Model::DescribeRiskCenterAssetViewPortRiskListRequest& request, const DescribeRiskCenterAssetViewPortRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterAssetViewPortRiskListOutcomeCallable DescribeRiskCenterAssetViewPortRiskListCallable(const Model::DescribeRiskCenterAssetViewPortRiskListRequest& request);

                /**
                 *Obtain Vulnerability Risk List from Asset's Perspective
                 * @param req DescribeRiskCenterAssetViewVULRiskListRequest
                 * @return DescribeRiskCenterAssetViewVULRiskListOutcome
                 */
                DescribeRiskCenterAssetViewVULRiskListOutcome DescribeRiskCenterAssetViewVULRiskList(const Model::DescribeRiskCenterAssetViewVULRiskListRequest &request);
                void DescribeRiskCenterAssetViewVULRiskListAsync(const Model::DescribeRiskCenterAssetViewVULRiskListRequest& request, const DescribeRiskCenterAssetViewVULRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterAssetViewVULRiskListOutcomeCallable DescribeRiskCenterAssetViewVULRiskListCallable(const Model::DescribeRiskCenterAssetViewVULRiskListRequest& request);

                /**
                 *Obtain Weak Password Risk List from Asset's Perspective
                 * @param req DescribeRiskCenterAssetViewWeakPasswordRiskListRequest
                 * @return DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome
                 */
                DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome DescribeRiskCenterAssetViewWeakPasswordRiskList(const Model::DescribeRiskCenterAssetViewWeakPasswordRiskListRequest &request);
                void DescribeRiskCenterAssetViewWeakPasswordRiskListAsync(const Model::DescribeRiskCenterAssetViewWeakPasswordRiskListRequest& request, const DescribeRiskCenterAssetViewWeakPasswordRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterAssetViewWeakPasswordRiskListOutcomeCallable DescribeRiskCenterAssetViewWeakPasswordRiskListCallable(const Model::DescribeRiskCenterAssetViewWeakPasswordRiskListRequest& request);

                /**
                 *Obtain Configuration Risk List from Configuration's Perspective
                 * @param req DescribeRiskCenterCFGViewCFGRiskListRequest
                 * @return DescribeRiskCenterCFGViewCFGRiskListOutcome
                 */
                DescribeRiskCenterCFGViewCFGRiskListOutcome DescribeRiskCenterCFGViewCFGRiskList(const Model::DescribeRiskCenterCFGViewCFGRiskListRequest &request);
                void DescribeRiskCenterCFGViewCFGRiskListAsync(const Model::DescribeRiskCenterCFGViewCFGRiskListRequest& request, const DescribeRiskCenterCFGViewCFGRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterCFGViewCFGRiskListOutcomeCallable DescribeRiskCenterCFGViewCFGRiskListCallable(const Model::DescribeRiskCenterCFGViewCFGRiskListRequest& request);

                /**
                 *Obtain Port Risk List from Port's Perspective
                 * @param req DescribeRiskCenterPortViewPortRiskListRequest
                 * @return DescribeRiskCenterPortViewPortRiskListOutcome
                 */
                DescribeRiskCenterPortViewPortRiskListOutcome DescribeRiskCenterPortViewPortRiskList(const Model::DescribeRiskCenterPortViewPortRiskListRequest &request);
                void DescribeRiskCenterPortViewPortRiskListAsync(const Model::DescribeRiskCenterPortViewPortRiskListRequest& request, const DescribeRiskCenterPortViewPortRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterPortViewPortRiskListOutcomeCallable DescribeRiskCenterPortViewPortRiskListCallable(const Model::DescribeRiskCenterPortViewPortRiskListRequest& request);

                /**
                 *Sample code for obtaining risk trend analysis
                 * @param req DescribeRiskCenterRiskTrendAnalysisRequest
                 * @return DescribeRiskCenterRiskTrendAnalysisOutcome
                 */
                DescribeRiskCenterRiskTrendAnalysisOutcome DescribeRiskCenterRiskTrendAnalysis(const Model::DescribeRiskCenterRiskTrendAnalysisRequest &request);
                void DescribeRiskCenterRiskTrendAnalysisAsync(const Model::DescribeRiskCenterRiskTrendAnalysisRequest& request, const DescribeRiskCenterRiskTrendAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterRiskTrendAnalysisOutcomeCallable DescribeRiskCenterRiskTrendAnalysisCallable(const Model::DescribeRiskCenterRiskTrendAnalysisRequest& request);

                /**
                 *Obtain Risk Service List
                 * @param req DescribeRiskCenterServerRiskListRequest
                 * @return DescribeRiskCenterServerRiskListOutcome
                 */
                DescribeRiskCenterServerRiskListOutcome DescribeRiskCenterServerRiskList(const Model::DescribeRiskCenterServerRiskListRequest &request);
                void DescribeRiskCenterServerRiskListAsync(const Model::DescribeRiskCenterServerRiskListRequest& request, const DescribeRiskCenterServerRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterServerRiskListOutcomeCallable DescribeRiskCenterServerRiskListCallable(const Model::DescribeRiskCenterServerRiskListRequest& request);

                /**
                 *Obtain Vulnerability Risk List from Vulnerability's Perspective
                 * @param req DescribeRiskCenterVULViewVULRiskListRequest
                 * @return DescribeRiskCenterVULViewVULRiskListOutcome
                 */
                DescribeRiskCenterVULViewVULRiskListOutcome DescribeRiskCenterVULViewVULRiskList(const Model::DescribeRiskCenterVULViewVULRiskListRequest &request);
                void DescribeRiskCenterVULViewVULRiskListAsync(const Model::DescribeRiskCenterVULViewVULRiskListRequest& request, const DescribeRiskCenterVULViewVULRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterVULViewVULRiskListOutcomeCallable DescribeRiskCenterVULViewVULRiskListCallable(const Model::DescribeRiskCenterVULViewVULRiskListRequest& request);

                /**
                 *Obtain Content Risk List
                 * @param req DescribeRiskCenterWebsiteRiskListRequest
                 * @return DescribeRiskCenterWebsiteRiskListOutcome
                 */
                DescribeRiskCenterWebsiteRiskListOutcome DescribeRiskCenterWebsiteRiskList(const Model::DescribeRiskCenterWebsiteRiskListRequest &request);
                void DescribeRiskCenterWebsiteRiskListAsync(const Model::DescribeRiskCenterWebsiteRiskListRequest& request, const DescribeRiskCenterWebsiteRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterWebsiteRiskListOutcomeCallable DescribeRiskCenterWebsiteRiskListCallable(const Model::DescribeRiskCenterWebsiteRiskListRequest& request);

                /**
                 *Sample risk detail list
                 * @param req DescribeRiskDetailListRequest
                 * @return DescribeRiskDetailListOutcome
                 */
                DescribeRiskDetailListOutcome DescribeRiskDetailList(const Model::DescribeRiskDetailListRequest &request);
                void DescribeRiskDetailListAsync(const Model::DescribeRiskDetailListRequest& request, const DescribeRiskDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskDetailListOutcomeCallable DescribeRiskDetailListCallable(const Model::DescribeRiskDetailListRequest& request);

                /**
                 *Sample code for querying risk rule details
                 * @param req DescribeRiskRuleDetailRequest
                 * @return DescribeRiskRuleDetailOutcome
                 */
                DescribeRiskRuleDetailOutcome DescribeRiskRuleDetail(const Model::DescribeRiskRuleDetailRequest &request);
                void DescribeRiskRuleDetailAsync(const Model::DescribeRiskRuleDetailRequest& request, const DescribeRiskRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskRuleDetailOutcomeCallable DescribeRiskRuleDetailCallable(const Model::DescribeRiskRuleDetailRequest& request);

                /**
                 *Illustrative example of the advanced configuration risk rule list
                 * @param req DescribeRiskRulesRequest
                 * @return DescribeRiskRulesOutcome
                 */
                DescribeRiskRulesOutcome DescribeRiskRules(const Model::DescribeRiskRulesRequest &request);
                void DescribeRiskRulesAsync(const Model::DescribeRiskRulesRequest& request, const DescribeRiskRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskRulesOutcomeCallable DescribeRiskRulesCallable(const Model::DescribeRiskRulesRequest& request);

                /**
                 *Get the periodic schedule for risk scans
                 * @param req DescribeRiskScanCronConfigRequest
                 * @return DescribeRiskScanCronConfigOutcome
                 */
                DescribeRiskScanCronConfigOutcome DescribeRiskScanCronConfig(const Model::DescribeRiskScanCronConfigRequest &request);
                void DescribeRiskScanCronConfigAsync(const Model::DescribeRiskScanCronConfigRequest& request, const DescribeRiskScanCronConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskScanCronConfigOutcomeCallable DescribeRiskScanCronConfigCallable(const Model::DescribeRiskScanCronConfigRequest& request);

                /**
                 *Queries the alias list of a specified SCF function.
                 * @param req DescribeSCFAliasListRequest
                 * @return DescribeSCFAliasListOutcome
                 */
                DescribeSCFAliasListOutcome DescribeSCFAliasList(const Model::DescribeSCFAliasListRequest &request);
                void DescribeSCFAliasListAsync(const Model::DescribeSCFAliasListRequest& request, const DescribeSCFAliasListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSCFAliasListOutcomeCallable DescribeSCFAliasListCallable(const Model::DescribeSCFAliasListRequest& request);

                /**
                 *Query the list of SCF functions in the specified namespace. Only functions of the Event trigger type are returned.
                 * @param req DescribeSCFFunctionListRequest
                 * @return DescribeSCFFunctionListOutcome
                 */
                DescribeSCFFunctionListOutcome DescribeSCFFunctionList(const Model::DescribeSCFFunctionListRequest &request);
                void DescribeSCFFunctionListAsync(const Model::DescribeSCFFunctionListRequest& request, const DescribeSCFFunctionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSCFFunctionListOutcomeCallable DescribeSCFFunctionListCallable(const Model::DescribeSCFFunctionListRequest& request);

                /**
                 *Queries the version list of a specified SCF function.
                 * @param req DescribeSCFFunctionVersionListRequest
                 * @return DescribeSCFFunctionVersionListOutcome
                 */
                DescribeSCFFunctionVersionListOutcome DescribeSCFFunctionVersionList(const Model::DescribeSCFFunctionVersionListRequest &request);
                void DescribeSCFFunctionVersionListAsync(const Model::DescribeSCFFunctionVersionListRequest& request, const DescribeSCFFunctionVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSCFFunctionVersionListOutcomeCallable DescribeSCFFunctionVersionListCallable(const Model::DescribeSCFFunctionVersionListRequest& request);

                /**
                 *Queries the namespace list of SCF in the designated region for the current user.
                 * @param req DescribeSCFNamespaceListRequest
                 * @return DescribeSCFNamespaceListOutcome
                 */
                DescribeSCFNamespaceListOutcome DescribeSCFNamespaceList(const Model::DescribeSCFNamespaceListRequest &request);
                void DescribeSCFNamespaceListAsync(const Model::DescribeSCFNamespaceListRequest& request, const DescribeSCFNamespaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSCFNamespaceListOutcomeCallable DescribeSCFNamespaceListCallable(const Model::DescribeSCFNamespaceListRequest& request);

                /**
                 *This API is used to query the ACL access control alarm log list by paging. It supports precise filtering of a single alarm by Filter.Name=ID for the details page scenario.
                 * @param req DescribeSandboxACLAlertListRequest
                 * @return DescribeSandboxACLAlertListOutcome
                 */
                DescribeSandboxACLAlertListOutcome DescribeSandboxACLAlertList(const Model::DescribeSandboxACLAlertListRequest &request);
                void DescribeSandboxACLAlertListAsync(const Model::DescribeSandboxACLAlertListRequest& request, const DescribeSandboxACLAlertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSandboxACLAlertListOutcomeCallable DescribeSandboxACLAlertListCallable(const Model::DescribeSandboxACLAlertListRequest& request);

                /**
                 *This API is used to query the access control rule list for ACL users under the current tenant. Import Filter.Name=RuleID to query an individual rule precisely.
                 * @param req DescribeSandboxACLRuleListRequest
                 * @return DescribeSandboxACLRuleListOutcome
                 */
                DescribeSandboxACLRuleListOutcome DescribeSandboxACLRuleList(const Model::DescribeSandboxACLRuleListRequest &request);
                void DescribeSandboxACLRuleListAsync(const Model::DescribeSandboxACLRuleListRequest& request, const DescribeSandboxACLRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSandboxACLRuleListOutcomeCallable DescribeSandboxACLRuleListCallable(const Model::DescribeSandboxACLRuleListRequest& request);

                /**
                 *Queries the traffic sandbox access control (ACL) system rule list. System rules are built into the CSIP platform and can be referenced by user rules.
                 * @param req DescribeSandboxACLSystemRuleListRequest
                 * @return DescribeSandboxACLSystemRuleListOutcome
                 */
                DescribeSandboxACLSystemRuleListOutcome DescribeSandboxACLSystemRuleList(const Model::DescribeSandboxACLSystemRuleListRequest &request);
                void DescribeSandboxACLSystemRuleListAsync(const Model::DescribeSandboxACLSystemRuleListRequest& request, const DescribeSandboxACLSystemRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSandboxACLSystemRuleListOutcomeCallable DescribeSandboxACLSystemRuleListCallable(const Model::DescribeSandboxACLSystemRuleListRequest& request);

                /**
                 *Paging query for the DLP data leakage alert log list. Supports precise filtering of a single alert by Filter.Name=ID for the details page scenario.
                 * @param req DescribeSandboxDLPAlertListRequest
                 * @return DescribeSandboxDLPAlertListOutcome
                 */
                DescribeSandboxDLPAlertListOutcome DescribeSandboxDLPAlertList(const Model::DescribeSandboxDLPAlertListRequest &request);
                void DescribeSandboxDLPAlertListAsync(const Model::DescribeSandboxDLPAlertListRequest& request, const DescribeSandboxDLPAlertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSandboxDLPAlertListOutcomeCallable DescribeSandboxDLPAlertListCallable(const Model::DescribeSandboxDLPAlertListRequest& request);

                /**
                 *Query the DLP user rule list of the current tenant. Input Filter.Name=RuleID to query an individual rule for the details page scenario.
                 * @param req DescribeSandboxDLPRuleListRequest
                 * @return DescribeSandboxDLPRuleListOutcome
                 */
                DescribeSandboxDLPRuleListOutcome DescribeSandboxDLPRuleList(const Model::DescribeSandboxDLPRuleListRequest &request);
                void DescribeSandboxDLPRuleListAsync(const Model::DescribeSandboxDLPRuleListRequest& request, const DescribeSandboxDLPRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSandboxDLPRuleListOutcomeCallable DescribeSandboxDLPRuleListCallable(const Model::DescribeSandboxDLPRuleListRequest& request);

                /**
                 *Queries the traffic sandbox data leakage protection (DLP) system rule list. System rules are built into the CSIP platform and can be referenced by user rules.
                 * @param req DescribeSandboxDLPSystemRuleListRequest
                 * @return DescribeSandboxDLPSystemRuleListOutcome
                 */
                DescribeSandboxDLPSystemRuleListOutcome DescribeSandboxDLPSystemRuleList(const Model::DescribeSandboxDLPSystemRuleListRequest &request);
                void DescribeSandboxDLPSystemRuleListAsync(const Model::DescribeSandboxDLPSystemRuleListRequest& request, const DescribeSandboxDLPSystemRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSandboxDLPSystemRuleListOutcomeCallable DescribeSandboxDLPSystemRuleListCallable(const Model::DescribeSandboxDLPSystemRuleListRequest& request);

                /**
                 *Query the command sandbox file rule list.
                 * @param req DescribeSandboxFileRuleListRequest
                 * @return DescribeSandboxFileRuleListOutcome
                 */
                DescribeSandboxFileRuleListOutcome DescribeSandboxFileRuleList(const Model::DescribeSandboxFileRuleListRequest &request);
                void DescribeSandboxFileRuleListAsync(const Model::DescribeSandboxFileRuleListRequest& request, const DescribeSandboxFileRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSandboxFileRuleListOutcomeCallable DescribeSandboxFileRuleListCallable(const Model::DescribeSandboxFileRuleListRequest& request);

                /**
                 *Paging query for the LLM audit alarm log list. Supports precise filtering of a single alarm by Filter.Name=ID for the details page scenario.
                 * @param req DescribeSandboxLLMAuditAlertListRequest
                 * @return DescribeSandboxLLMAuditAlertListOutcome
                 */
                DescribeSandboxLLMAuditAlertListOutcome DescribeSandboxLLMAuditAlertList(const Model::DescribeSandboxLLMAuditAlertListRequest &request);
                void DescribeSandboxLLMAuditAlertListAsync(const Model::DescribeSandboxLLMAuditAlertListRequest& request, const DescribeSandboxLLMAuditAlertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSandboxLLMAuditAlertListOutcomeCallable DescribeSandboxLLMAuditAlertListCallable(const Model::DescribeSandboxLLMAuditAlertListRequest& request);

                /**
                 *Queries the LLM audit user rule list for the current tenant. LLM audit rules do not support user-defined content and can only refer to system rule composites. Import Filter.Name=RuleID for exact querying of an individual rule (for details page scenarios).
                 * @param req DescribeSandboxLLMAuditRuleListRequest
                 * @return DescribeSandboxLLMAuditRuleListOutcome
                 */
                DescribeSandboxLLMAuditRuleListOutcome DescribeSandboxLLMAuditRuleList(const Model::DescribeSandboxLLMAuditRuleListRequest &request);
                void DescribeSandboxLLMAuditRuleListAsync(const Model::DescribeSandboxLLMAuditRuleListRequest& request, const DescribeSandboxLLMAuditRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSandboxLLMAuditRuleListOutcomeCallable DescribeSandboxLLMAuditRuleListCallable(const Model::DescribeSandboxLLMAuditRuleListRequest& request);

                /**
                 *This API is used to query the rule list of the LLM audit system. System rules are built into the CSIP platform and originate from the LLM audit system rule base. They are split into two flat rule arrays by LLM reasoning protection and ToolCall protection and can be referenced by user rules.
                 * @param req DescribeSandboxLLMAuditSystemRuleListRequest
                 * @return DescribeSandboxLLMAuditSystemRuleListOutcome
                 */
                DescribeSandboxLLMAuditSystemRuleListOutcome DescribeSandboxLLMAuditSystemRuleList(const Model::DescribeSandboxLLMAuditSystemRuleListRequest &request);
                void DescribeSandboxLLMAuditSystemRuleListAsync(const Model::DescribeSandboxLLMAuditSystemRuleListRequest& request, const DescribeSandboxLLMAuditSystemRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSandboxLLMAuditSystemRuleListOutcomeCallable DescribeSandboxLLMAuditSystemRuleListCallable(const Model::DescribeSandboxLLMAuditSystemRuleListRequest& request);

                /**
                 *Obtain Scan Report List
                 * @param req DescribeScanReportListRequest
                 * @return DescribeScanReportListOutcome
                 */
                DescribeScanReportListOutcome DescribeScanReportList(const Model::DescribeScanReportListRequest &request);
                void DescribeScanReportListAsync(const Model::DescribeScanReportListRequest& request, const DescribeScanReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanReportListOutcomeCallable DescribeScanReportListCallable(const Model::DescribeScanReportListRequest& request);

                /**
                 *This API is used to query result statistics of cloud boundary analysis scans.
                 * @param req DescribeScanStatisticRequest
                 * @return DescribeScanStatisticOutcome
                 */
                DescribeScanStatisticOutcome DescribeScanStatistic(const Model::DescribeScanStatisticRequest &request);
                void DescribeScanStatisticAsync(const Model::DescribeScanStatisticRequest& request, const DescribeScanStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanStatisticOutcomeCallable DescribeScanStatisticCallable(const Model::DescribeScanStatisticRequest& request);

                /**
                 *Obtain Scan Task List
                 * @param req DescribeScanTaskListRequest
                 * @return DescribeScanTaskListOutcome
                 */
                DescribeScanTaskListOutcome DescribeScanTaskList(const Model::DescribeScanTaskListRequest &request);
                void DescribeScanTaskListAsync(const Model::DescribeScanTaskListRequest& request, const DescribeScanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanTaskListOutcomeCallable DescribeScanTaskListCallable(const Model::DescribeScanTaskListRequest& request);

                /**
                 *This API is used to query the scan task record list.
                 * @param req DescribeScanTaskRecordListRequest
                 * @return DescribeScanTaskRecordListOutcome
                 */
                DescribeScanTaskRecordListOutcome DescribeScanTaskRecordList(const Model::DescribeScanTaskRecordListRequest &request);
                void DescribeScanTaskRecordListAsync(const Model::DescribeScanTaskRecordListRequest& request, const DescribeScanTaskRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanTaskRecordListOutcomeCallable DescribeScanTaskRecordListCallable(const Model::DescribeScanTaskRecordListRequest& request);

                /**
                 *Query the list of custom domain name endpoints for Tencent Cloud SCF
                 * @param req DescribeScfCustomDomainEndpointsRequest
                 * @return DescribeScfCustomDomainEndpointsOutcome
                 */
                DescribeScfCustomDomainEndpointsOutcome DescribeScfCustomDomainEndpoints(const Model::DescribeScfCustomDomainEndpointsRequest &request);
                void DescribeScfCustomDomainEndpointsAsync(const Model::DescribeScfCustomDomainEndpointsRequest& request, const DescribeScfCustomDomainEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScfCustomDomainEndpointsOutcomeCallable DescribeScfCustomDomainEndpointsCallable(const Model::DescribeScfCustomDomainEndpointsRequest& request);

                /**
                 *Query vulnerability information in the three-dimensional protection center.
                 * @param req DescribeSearchBugInfoRequest
                 * @return DescribeSearchBugInfoOutcome
                 */
                DescribeSearchBugInfoOutcome DescribeSearchBugInfo(const Model::DescribeSearchBugInfoRequest &request);
                void DescribeSearchBugInfoAsync(const Model::DescribeSearchBugInfoRequest& request, const DescribeSearchBugInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSearchBugInfoOutcomeCallable DescribeSearchBugInfoCallable(const Model::DescribeSearchBugInfoRequest& request);

                /**
                 *Query the security group rules correspond to the specified security group ID.
                 * @param req DescribeSecurityGroupPolicyRequest
                 * @return DescribeSecurityGroupPolicyOutcome
                 */
                DescribeSecurityGroupPolicyOutcome DescribeSecurityGroupPolicy(const Model::DescribeSecurityGroupPolicyRequest &request);
                void DescribeSecurityGroupPolicyAsync(const Model::DescribeSecurityGroupPolicyRequest& request, const DescribeSecurityGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupPolicyOutcomeCallable DescribeSecurityGroupPolicyCallable(const Model::DescribeSecurityGroupPolicyRequest& request);

                /**
                 *This API is used to obtain security risk trends and return the daily number of risks grouped by dimension.
                 * @param req DescribeSecurityRiskTrendRequest
                 * @return DescribeSecurityRiskTrendOutcome
                 */
                DescribeSecurityRiskTrendOutcome DescribeSecurityRiskTrend(const Model::DescribeSecurityRiskTrendRequest &request);
                void DescribeSecurityRiskTrendAsync(const Model::DescribeSecurityRiskTrendRequest& request, const DescribeSecurityRiskTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityRiskTrendOutcomeCallable DescribeSecurityRiskTrendCallable(const Model::DescribeSecurityRiskTrendRequest& request);

                /**
                 *This API is used to obtain the security score overview and real-time compute point deductions in each dimension and sub-item.
                 * @param req DescribeSecurityScoreOverviewRequest
                 * @return DescribeSecurityScoreOverviewOutcome
                 */
                DescribeSecurityScoreOverviewOutcome DescribeSecurityScoreOverview(const Model::DescribeSecurityScoreOverviewRequest &request);
                void DescribeSecurityScoreOverviewAsync(const Model::DescribeSecurityScoreOverviewRequest& request, const DescribeSecurityScoreOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityScoreOverviewOutcomeCallable DescribeSecurityScoreOverviewCallable(const Model::DescribeSecurityScoreOverviewRequest& request);

                /**
                 *Retrieve the security scoring rules for the current account. If no custom rules exist, return the built-in default.
                 * @param req DescribeSecurityScoreRuleRequest
                 * @return DescribeSecurityScoreRuleOutcome
                 */
                DescribeSecurityScoreRuleOutcome DescribeSecurityScoreRule(const Model::DescribeSecurityScoreRuleRequest &request);
                void DescribeSecurityScoreRuleAsync(const Model::DescribeSecurityScoreRuleRequest& request, const DescribeSecurityScoreRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityScoreRuleOutcomeCallable DescribeSecurityScoreRuleCallable(const Model::DescribeSecurityScoreRuleRequest& request);

                /**
                 *This API is used to query Skill security detection alarm details, including local alarm information and engine real-time detection data.
                 * @param req DescribeSkillScanAlertDetailRequest
                 * @return DescribeSkillScanAlertDetailOutcome
                 */
                DescribeSkillScanAlertDetailOutcome DescribeSkillScanAlertDetail(const Model::DescribeSkillScanAlertDetailRequest &request);
                void DescribeSkillScanAlertDetailAsync(const Model::DescribeSkillScanAlertDetailRequest& request, const DescribeSkillScanAlertDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSkillScanAlertDetailOutcomeCallable DescribeSkillScanAlertDetailCallable(const Model::DescribeSkillScanAlertDetailRequest& request);

                /**
                 *Queries the Skill security detection alarm list with pagination, filtering, and sorting supported.
                 * @param req DescribeSkillScanAlertListRequest
                 * @return DescribeSkillScanAlertListOutcome
                 */
                DescribeSkillScanAlertListOutcome DescribeSkillScanAlertList(const Model::DescribeSkillScanAlertListRequest &request);
                void DescribeSkillScanAlertListAsync(const Model::DescribeSkillScanAlertListRequest& request, const DescribeSkillScanAlertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSkillScanAlertListOutcomeCallable DescribeSkillScanAlertListCallable(const Model::DescribeSkillScanAlertListRequest& request);

                /**
                 *This API is used to query Skill security detection billing information, including order status, total quota, consumed quota, expiration time, and payment mode. If no order exists, zero values are returned (only TimeNow and BetaEndTime). Trial orders are claimed through ModifyTrialStatus(Module=9), and official orders are created through the billing system.
                 * @param req DescribeSkillScanPayInfoRequest
                 * @return DescribeSkillScanPayInfoOutcome
                 */
                DescribeSkillScanPayInfoOutcome DescribeSkillScanPayInfo(const Model::DescribeSkillScanPayInfoRequest &request);
                void DescribeSkillScanPayInfoAsync(const Model::DescribeSkillScanPayInfoRequest& request, const DescribeSkillScanPayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSkillScanPayInfoOutcomeCallable DescribeSkillScanPayInfoCallable(const Model::DescribeSkillScanPayInfoRequest& request);

                /**
                 *Queries the security detection result of a skill. After calling CreateSkillScan successfully, use the returned ContentHash + EngineVersion to poll this API to obtain the result. We recommend polling for the first time 5 minutes after a successful upload. If detection is not completed, poll once every 1 minute afterward. The response uses the Status field to distinguish four statuses: detection completed (SUCCESS), detecting (SCANNING), no record (NOT_FOUND), and detection failed (FAILED). Note: Detection results are retained for 90 days. NOT_FOUND will be returned after they expire.
                 * @param req DescribeSkillScanResultRequest
                 * @return DescribeSkillScanResultOutcome
                 */
                DescribeSkillScanResultOutcome DescribeSkillScanResult(const Model::DescribeSkillScanResultRequest &request);
                void DescribeSkillScanResultAsync(const Model::DescribeSkillScanResultRequest& request, const DescribeSkillScanResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSkillScanResultOutcomeCallable DescribeSkillScanResultCallable(const Model::DescribeSkillScanResultRequest& request);

                /**
                 *Retrieve the user access key asset list from an IP perspective.
                 * @param req DescribeSourceIPAssetRequest
                 * @return DescribeSourceIPAssetOutcome
                 */
                DescribeSourceIPAssetOutcome DescribeSourceIPAsset(const Model::DescribeSourceIPAssetRequest &request);
                void DescribeSourceIPAssetAsync(const Model::DescribeSourceIPAssetRequest& request, const DescribeSourceIPAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSourceIPAssetOutcomeCallable DescribeSourceIPAssetCallable(const Model::DescribeSourceIPAssetRequest& request);

                /**
                 *This API is used to query user access key asset list from source IP perspective.
                 * @param req DescribeSourceIPDetailRequest
                 * @return DescribeSourceIPDetailOutcome
                 */
                DescribeSourceIPDetailOutcome DescribeSourceIPDetail(const Model::DescribeSourceIPDetailRequest &request);
                void DescribeSourceIPDetailAsync(const Model::DescribeSourceIPDetailRequest& request, const DescribeSourceIPDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSourceIPDetailOutcomeCallable DescribeSourceIPDetailCallable(const Model::DescribeSourceIPDetailRequest& request);

                /**
                 *Query the sub-account list of a group
                 * @param req DescribeSubUserInfoRequest
                 * @return DescribeSubUserInfoOutcome
                 */
                DescribeSubUserInfoOutcome DescribeSubUserInfo(const Model::DescribeSubUserInfoRequest &request);
                void DescribeSubUserInfoAsync(const Model::DescribeSubUserInfoRequest& request, const DescribeSubUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubUserInfoOutcomeCallable DescribeSubUserInfoCallable(const Model::DescribeSubUserInfoRequest& request);

                /**
                 *Obtain Subnet List
                 * @param req DescribeSubnetAssetsRequest
                 * @return DescribeSubnetAssetsOutcome
                 */
                DescribeSubnetAssetsOutcome DescribeSubnetAssets(const Model::DescribeSubnetAssetsRequest &request);
                void DescribeSubnetAssetsAsync(const Model::DescribeSubnetAssetsRequest& request, const DescribeSubnetAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubnetAssetsOutcomeCallable DescribeSubnetAssetsCallable(const Model::DescribeSubnetAssetsRequest& request);

                /**
                 *This API is used to obtain the TCR instance list.
                 * @param req DescribeTCRInstanceListRequest
                 * @return DescribeTCRInstanceListOutcome
                 */
                DescribeTCRInstanceListOutcome DescribeTCRInstanceList(const Model::DescribeTCRInstanceListRequest &request);
                void DescribeTCRInstanceListAsync(const Model::DescribeTCRInstanceListRequest& request, const DescribeTCRInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTCRInstanceListOutcomeCallable DescribeTCRInstanceListCallable(const Model::DescribeTCRInstanceListRequest& request);

                /**
                 *Tagging policy enforcement asset list
                 * @param req DescribeTagRuleAssetsRequest
                 * @return DescribeTagRuleAssetsOutcome
                 */
                DescribeTagRuleAssetsOutcome DescribeTagRuleAssets(const Model::DescribeTagRuleAssetsRequest &request);
                void DescribeTagRuleAssetsAsync(const Model::DescribeTagRuleAssetsRequest& request, const DescribeTagRuleAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagRuleAssetsOutcomeCallable DescribeTagRuleAssetsCallable(const Model::DescribeTagRuleAssetsRequest& request);

                /**
                 *Obtain Task Scan Report List
                 * @param req DescribeTaskLogListRequest
                 * @return DescribeTaskLogListOutcome
                 */
                DescribeTaskLogListOutcome DescribeTaskLogList(const Model::DescribeTaskLogListRequest &request);
                void DescribeTaskLogListAsync(const Model::DescribeTaskLogListRequest& request, const DescribeTaskLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskLogListOutcomeCallable DescribeTaskLogListCallable(const Model::DescribeTaskLogListRequest& request);

                /**
                 *Obtain the Temporary Link for Report Download
                 * @param req DescribeTaskLogURLRequest
                 * @return DescribeTaskLogURLOutcome
                 */
                DescribeTaskLogURLOutcome DescribeTaskLogURL(const Model::DescribeTaskLogURLRequest &request);
                void DescribeTaskLogURLAsync(const Model::DescribeTaskLogURLRequest& request, const DescribeTaskLogURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskLogURLOutcomeCallable DescribeTaskLogURLCallable(const Model::DescribeTaskLogURLRequest& request);

                /**
                 *Obtain the pre-consumed quota for scans.
                 * @param req DescribeTaskPredictCostQuotaRequest
                 * @return DescribeTaskPredictCostQuotaOutcome
                 */
                DescribeTaskPredictCostQuotaOutcome DescribeTaskPredictCostQuota(const Model::DescribeTaskPredictCostQuotaRequest &request);
                void DescribeTaskPredictCostQuotaAsync(const Model::DescribeTaskPredictCostQuotaRequest& request, const DescribeTaskPredictCostQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskPredictCostQuotaOutcomeCallable DescribeTaskPredictCostQuotaCallable(const Model::DescribeTaskPredictCostQuotaRequest& request);

                /**
                 *Query TOP attack information
                 * @param req DescribeTopAttackInfoRequest
                 * @return DescribeTopAttackInfoOutcome
                 */
                DescribeTopAttackInfoOutcome DescribeTopAttackInfo(const Model::DescribeTopAttackInfoRequest &request);
                void DescribeTopAttackInfoAsync(const Model::DescribeTopAttackInfoRequest& request, const DescribeTopAttackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopAttackInfoOutcomeCallable DescribeTopAttackInfoCallable(const Model::DescribeTopAttackInfoRequest& request);

                /**
                 *Queries the behavior overview of user behavior analysis.
                 * @param req DescribeUebaBehaviorSummaryRequest
                 * @return DescribeUebaBehaviorSummaryOutcome
                 */
                DescribeUebaBehaviorSummaryOutcome DescribeUebaBehaviorSummary(const Model::DescribeUebaBehaviorSummaryRequest &request);
                void DescribeUebaBehaviorSummaryAsync(const Model::DescribeUebaBehaviorSummaryRequest& request, const DescribeUebaBehaviorSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUebaBehaviorSummaryOutcomeCallable DescribeUebaBehaviorSummaryCallable(const Model::DescribeUebaBehaviorSummaryRequest& request);

                /**
                 *Query the list of user behavior analysis policies
                 * @param req DescribeUebaRuleRequest
                 * @return DescribeUebaRuleOutcome
                 */
                DescribeUebaRuleOutcome DescribeUebaRule(const Model::DescribeUebaRuleRequest &request);
                void DescribeUebaRuleAsync(const Model::DescribeUebaRuleRequest& request, const DescribeUebaRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUebaRuleOutcomeCallable DescribeUebaRuleCallable(const Model::DescribeUebaRuleRequest& request);

                /**
                 *This API is used to get the user overview of the user behavior analysis module.
                 * @param req DescribeUebaUserSummaryRequest
                 * @return DescribeUebaUserSummaryOutcome
                 */
                DescribeUebaUserSummaryOutcome DescribeUebaUserSummary(const Model::DescribeUebaUserSummaryRequest &request);
                void DescribeUebaUserSummaryAsync(const Model::DescribeUebaUserSummaryRequest& request, const DescribeUebaUserSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUebaUserSummaryOutcomeCallable DescribeUebaUserSummaryCallable(const Model::DescribeUebaUserSummaryRequest& request);

                /**
                 *Obtain AK information of the account
                 * @param req DescribeUserAKInfoListRequest
                 * @return DescribeUserAKInfoListOutcome
                 */
                DescribeUserAKInfoListOutcome DescribeUserAKInfoList(const Model::DescribeUserAKInfoListRequest &request);
                void DescribeUserAKInfoListAsync(const Model::DescribeUserAKInfoListRequest& request, const DescribeUserAKInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserAKInfoListOutcomeCallable DescribeUserAKInfoListCallable(const Model::DescribeUserAKInfoListRequest& request);

                /**
                 *This API is used to obtain CSPM information of an account.
                 * @param req DescribeUserCSPMInfoListRequest
                 * @return DescribeUserCSPMInfoListOutcome
                 */
                DescribeUserCSPMInfoListOutcome DescribeUserCSPMInfoList(const Model::DescribeUserCSPMInfoListRequest &request);
                void DescribeUserCSPMInfoListAsync(const Model::DescribeUserCSPMInfoListRequest& request, const DescribeUserCSPMInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserCSPMInfoListOutcomeCallable DescribeUserCSPMInfoListCallable(const Model::DescribeUserCSPMInfoListRequest& request);

                /**
                 *This API is used to obtain the account call record list.
                 * @param req DescribeUserCallRecordRequest
                 * @return DescribeUserCallRecordOutcome
                 */
                DescribeUserCallRecordOutcome DescribeUserCallRecord(const Model::DescribeUserCallRecordRequest &request);
                void DescribeUserCallRecordAsync(const Model::DescribeUserCallRecordRequest& request, const DescribeUserCallRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserCallRecordOutcomeCallable DescribeUserCallRecordCallable(const Model::DescribeUserCallRecordRequest& request);

                /**
                 *Get the dspm information list of an account
                 * @param req DescribeUserDspmInfoListRequest
                 * @return DescribeUserDspmInfoListOutcome
                 */
                DescribeUserDspmInfoListOutcome DescribeUserDspmInfoList(const Model::DescribeUserDspmInfoListRequest &request);
                void DescribeUserDspmInfoListAsync(const Model::DescribeUserDspmInfoListRequest& request, const DescribeUserDspmInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserDspmInfoListOutcomeCallable DescribeUserDspmInfoListCallable(const Model::DescribeUserDspmInfoListRequest& request);

                /**
                 *CSPM quota information of a user
                 * @param req DescribeUserInfoRequest
                 * @return DescribeUserInfoOutcome
                 */
                DescribeUserInfoOutcome DescribeUserInfo(const Model::DescribeUserInfoRequest &request);
                void DescribeUserInfoAsync(const Model::DescribeUserInfoRequest& request, const DescribeUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserInfoOutcomeCallable DescribeUserInfoCallable(const Model::DescribeUserInfoRequest& request);

                /**
                 *Vulnerability list in the risk center of the new security center
                 * @param req DescribeVULListRequest
                 * @return DescribeVULListOutcome
                 */
                DescribeVULListOutcome DescribeVULList(const Model::DescribeVULListRequest &request);
                void DescribeVULListAsync(const Model::DescribeVULListRequest& request, const DescribeVULListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVULListOutcomeCallable DescribeVULListCallable(const Model::DescribeVULListRequest& request);

                /**
                 *Query Vulnerability Risk Advanced Configuration
                 * @param req DescribeVULRiskAdvanceCFGListRequest
                 * @return DescribeVULRiskAdvanceCFGListOutcome
                 */
                DescribeVULRiskAdvanceCFGListOutcome DescribeVULRiskAdvanceCFGList(const Model::DescribeVULRiskAdvanceCFGListRequest &request);
                void DescribeVULRiskAdvanceCFGListAsync(const Model::DescribeVULRiskAdvanceCFGListRequest& request, const DescribeVULRiskAdvanceCFGListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVULRiskAdvanceCFGListOutcomeCallable DescribeVULRiskAdvanceCFGListCallable(const Model::DescribeVULRiskAdvanceCFGListRequest& request);

                /**
                 *Retrieve vulnerability details
                 * @param req DescribeVULRiskDetailRequest
                 * @return DescribeVULRiskDetailOutcome
                 */
                DescribeVULRiskDetailOutcome DescribeVULRiskDetail(const Model::DescribeVULRiskDetailRequest &request);
                void DescribeVULRiskDetailAsync(const Model::DescribeVULRiskDetailRequest& request, const DescribeVULRiskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVULRiskDetailOutcomeCallable DescribeVULRiskDetailCallable(const Model::DescribeVULRiskDetailRequest& request);

                /**
                 *This API is used to obtain virus database and POC updates.
                 * @param req DescribeVdbAndPocInfoRequest
                 * @return DescribeVdbAndPocInfoOutcome
                 */
                DescribeVdbAndPocInfoOutcome DescribeVdbAndPocInfo(const Model::DescribeVdbAndPocInfoRequest &request);
                void DescribeVdbAndPocInfoAsync(const Model::DescribeVdbAndPocInfoRequest& request, const DescribeVdbAndPocInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVdbAndPocInfoOutcomeCallable DescribeVdbAndPocInfoCallable(const Model::DescribeVdbAndPocInfoRequest& request);

                /**
                 *Check whether the current user is eligible to claim vouchers for the designated promotion.
                 * @param req DescribeVoucherEligibilityRequest
                 * @return DescribeVoucherEligibilityOutcome
                 */
                DescribeVoucherEligibilityOutcome DescribeVoucherEligibility(const Model::DescribeVoucherEligibilityRequest &request);
                void DescribeVoucherEligibilityAsync(const Model::DescribeVoucherEligibilityRequest& request, const DescribeVoucherEligibilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVoucherEligibilityOutcomeCallable DescribeVoucherEligibilityCallable(const Model::DescribeVoucherEligibilityRequest& request);

                /**
                 *Obtain VPC List
                 * @param req DescribeVpcAssetsRequest
                 * @return DescribeVpcAssetsOutcome
                 */
                DescribeVpcAssetsOutcome DescribeVpcAssets(const Model::DescribeVpcAssetsRequest &request);
                void DescribeVpcAssetsAsync(const Model::DescribeVpcAssetsRequest& request, const DescribeVpcAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcAssetsOutcomeCallable DescribeVpcAssetsCallable(const Model::DescribeVpcAssetsRequest& request);

                /**
                 *This API is used to query the associated server of a vulnerable component.
                 * @param req DescribeVulComponentRelateHostRequest
                 * @return DescribeVulComponentRelateHostOutcome
                 */
                DescribeVulComponentRelateHostOutcome DescribeVulComponentRelateHost(const Model::DescribeVulComponentRelateHostRequest &request);
                void DescribeVulComponentRelateHostAsync(const Model::DescribeVulComponentRelateHostRequest& request, const DescribeVulComponentRelateHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulComponentRelateHostOutcomeCallable DescribeVulComponentRelateHostCallable(const Model::DescribeVulComponentRelateHostRequest& request);

                /**
                 *This API is used to query the details of a specified vulnerability repair task, including detailed data such as remediation status and snapshot status for each host, and supports pagination and filtering.
                 * @param req DescribeVulFixTaskDetailRequest
                 * @return DescribeVulFixTaskDetailOutcome
                 */
                DescribeVulFixTaskDetailOutcome DescribeVulFixTaskDetail(const Model::DescribeVulFixTaskDetailRequest &request);
                void DescribeVulFixTaskDetailAsync(const Model::DescribeVulFixTaskDetailRequest& request, const DescribeVulFixTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulFixTaskDetailOutcomeCallable DescribeVulFixTaskDetailCallable(const Model::DescribeVulFixTaskDetailRequest& request);

                /**
                 *This API is used to query the vulnerability repair task record list with paging, support by conditional filtering such as remediation status and time range, and show summary information for each repair task.
                 * @param req DescribeVulFixTaskListRequest
                 * @return DescribeVulFixTaskListOutcome
                 */
                DescribeVulFixTaskListOutcome DescribeVulFixTaskList(const Model::DescribeVulFixTaskListRequest &request);
                void DescribeVulFixTaskListAsync(const Model::DescribeVulFixTaskListRequest& request, const DescribeVulFixTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulFixTaskListOutcomeCallable DescribeVulFixTaskListCallable(const Model::DescribeVulFixTaskListRequest& request);

                /**
                 *This API is used to query the host list where specified vulnerabilities can be repaired. Before a user submits a repair task, it is necessary to query which hosts support automatic fix, providing data support for users to select repair targets.
                 * @param req DescribeVulFixableMachineListRequest
                 * @return DescribeVulFixableMachineListOutcome
                 */
                DescribeVulFixableMachineListOutcome DescribeVulFixableMachineList(const Model::DescribeVulFixableMachineListRequest &request);
                void DescribeVulFixableMachineListAsync(const Model::DescribeVulFixableMachineListRequest& request, const DescribeVulFixableMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulFixableMachineListOutcomeCallable DescribeVulFixableMachineListCallable(const Model::DescribeVulFixableMachineListRequest& request);

                /**
                 *This API is used to query the repair details of a certain fixed vulnerability on a specified host, including basic information about the vulnerability, repair host information, and a detailed list of associated components and paths (component name, version number hit, associated path, repair command).
                 * @param req DescribeVulFixedHostDetailRequest
                 * @return DescribeVulFixedHostDetailOutcome
                 */
                DescribeVulFixedHostDetailOutcome DescribeVulFixedHostDetail(const Model::DescribeVulFixedHostDetailRequest &request);
                void DescribeVulFixedHostDetailAsync(const Model::DescribeVulFixedHostDetailRequest& request, const DescribeVulFixedHostDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulFixedHostDetailOutcomeCallable DescribeVulFixedHostDetailCallable(const Model::DescribeVulFixedHostDetailRequest& request);

                /**
                 *This API is used to query the list of repaired vulnerabilities, show vulnerability information with successful fixes and statistics on repair conditions, helping users understand the repair results.
                 * @param req DescribeVulFixedListRequest
                 * @return DescribeVulFixedListOutcome
                 */
                DescribeVulFixedListOutcome DescribeVulFixedList(const Model::DescribeVulFixedListRequest &request);
                void DescribeVulFixedListAsync(const Model::DescribeVulFixedListRequest& request, const DescribeVulFixedListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulFixedListOutcomeCallable DescribeVulFixedListCallable(const Model::DescribeVulFixedListRequest& request);

                /**
                 *This API is used to query host-associated vulnerability components.
                 * @param req DescribeVulHostRelateComponentRequest
                 * @return DescribeVulHostRelateComponentOutcome
                 */
                DescribeVulHostRelateComponentOutcome DescribeVulHostRelateComponent(const Model::DescribeVulHostRelateComponentRequest &request);
                void DescribeVulHostRelateComponentAsync(const Model::DescribeVulHostRelateComponentRequest& request, const DescribeVulHostRelateComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulHostRelateComponentOutcomeCallable DescribeVulHostRelateComponentCallable(const Model::DescribeVulHostRelateComponentRequest& request);

                /**
                 *This API is used to retrieve the vulnerability ignore list.
                 * @param req DescribeVulIgnoreRuleListRequest
                 * @return DescribeVulIgnoreRuleListOutcome
                 */
                DescribeVulIgnoreRuleListOutcome DescribeVulIgnoreRuleList(const Model::DescribeVulIgnoreRuleListRequest &request);
                void DescribeVulIgnoreRuleListAsync(const Model::DescribeVulIgnoreRuleListRequest& request, const DescribeVulIgnoreRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulIgnoreRuleListOutcomeCallable DescribeVulIgnoreRuleListCallable(const Model::DescribeVulIgnoreRuleListRequest& request);

                /**
                 *This API is used to obtain vulnerability list
                 * @param req DescribeVulItemListRequest
                 * @return DescribeVulItemListOutcome
                 */
                DescribeVulItemListOutcome DescribeVulItemList(const Model::DescribeVulItemListRequest &request);
                void DescribeVulItemListAsync(const Model::DescribeVulItemListRequest& request, const DescribeVulItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulItemListOutcomeCallable DescribeVulItemListCallable(const Model::DescribeVulItemListRequest& request);

                /**
                 *Obtains the vulnerability tag list
                 * @param req DescribeVulLabelListRequest
                 * @return DescribeVulLabelListOutcome
                 */
                DescribeVulLabelListOutcome DescribeVulLabelList(const Model::DescribeVulLabelListRequest &request);
                void DescribeVulLabelListAsync(const Model::DescribeVulLabelListRequest& request, const DescribeVulLabelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulLabelListOutcomeCallable DescribeVulLabelListCallable(const Model::DescribeVulLabelListRequest& request);

                /**
                 *Query the list of vulnerabilities on host nodes under the exposed path in cloud boundary analysis.
                 * @param req DescribeVulRiskListRequest
                 * @return DescribeVulRiskListOutcome
                 */
                DescribeVulRiskListOutcome DescribeVulRiskList(const Model::DescribeVulRiskListRequest &request);
                void DescribeVulRiskListAsync(const Model::DescribeVulRiskListRequest& request, const DescribeVulRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulRiskListOutcomeCallable DescribeVulRiskListCallable(const Model::DescribeVulRiskListRequest& request);

                /**
                 *Retrieve the associated component of a vulnerability
                 * @param req DescribeVulRiskRelateComponentRequest
                 * @return DescribeVulRiskRelateComponentOutcome
                 */
                DescribeVulRiskRelateComponentOutcome DescribeVulRiskRelateComponent(const Model::DescribeVulRiskRelateComponentRequest &request);
                void DescribeVulRiskRelateComponentAsync(const Model::DescribeVulRiskRelateComponentRequest& request, const DescribeVulRiskRelateComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulRiskRelateComponentOutcomeCallable DescribeVulRiskRelateComponentCallable(const Model::DescribeVulRiskRelateComponentRequest& request);

                /**
                 *Search for hosts associated with vulnerabilities or KBs
                 * @param req DescribeVulRiskRelateHostRequest
                 * @return DescribeVulRiskRelateHostOutcome
                 */
                DescribeVulRiskRelateHostOutcome DescribeVulRiskRelateHost(const Model::DescribeVulRiskRelateHostRequest &request);
                void DescribeVulRiskRelateHostAsync(const Model::DescribeVulRiskRelateHostRequest& request, const DescribeVulRiskRelateHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulRiskRelateHostOutcomeCallable DescribeVulRiskRelateHostCallable(const Model::DescribeVulRiskRelateHostRequest& request);

                /**
                 *This API is used to obtain vulnerability scanning (period scanning).
                 * @param req DescribeVulScanPeriodicRequest
                 * @return DescribeVulScanPeriodicOutcome
                 */
                DescribeVulScanPeriodicOutcome DescribeVulScanPeriodic(const Model::DescribeVulScanPeriodicRequest &request);
                void DescribeVulScanPeriodicAsync(const Model::DescribeVulScanPeriodicRequest& request, const DescribeVulScanPeriodicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulScanPeriodicOutcomeCallable DescribeVulScanPeriodicCallable(const Model::DescribeVulScanPeriodicRequest& request);

                /**
                 *This API is used to retrieve vulnerability scanning task detail
                 * @param req DescribeVulScanTaskDetailRequest
                 * @return DescribeVulScanTaskDetailOutcome
                 */
                DescribeVulScanTaskDetailOutcome DescribeVulScanTaskDetail(const Model::DescribeVulScanTaskDetailRequest &request);
                void DescribeVulScanTaskDetailAsync(const Model::DescribeVulScanTaskDetailRequest& request, const DescribeVulScanTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulScanTaskDetailOutcomeCallable DescribeVulScanTaskDetailCallable(const Model::DescribeVulScanTaskDetailRequest& request);

                /**
                 *This API is used to search vulnerability scanning task history
                 * @param req DescribeVulScanTaskListRequest
                 * @return DescribeVulScanTaskListOutcome
                 */
                DescribeVulScanTaskListOutcome DescribeVulScanTaskList(const Model::DescribeVulScanTaskListRequest &request);
                void DescribeVulScanTaskListAsync(const Model::DescribeVulScanTaskListRequest& request, const DescribeVulScanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulScanTaskListOutcomeCallable DescribeVulScanTaskListCallable(const Model::DescribeVulScanTaskListRequest& request);

                /**
                 *Obtain Vulnerability Risk List from Vulnerability's Perspective
                 * @param req DescribeVulViewVulRiskListRequest
                 * @return DescribeVulViewVulRiskListOutcome
                 */
                DescribeVulViewVulRiskListOutcome DescribeVulViewVulRiskList(const Model::DescribeVulViewVulRiskListRequest &request);
                void DescribeVulViewVulRiskListAsync(const Model::DescribeVulViewVulRiskListRequest& request, const DescribeVulViewVulRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulViewVulRiskListOutcomeCallable DescribeVulViewVulRiskListCallable(const Model::DescribeVulViewVulRiskListRequest& request);

                /**
                 *This API is used to query the notification policy list for the current tenant by page, corresponding to the table on the Notification Policy Configuration Tab in Notification Center - Robot Notification. The returned fields are simplified info required for row display. Use DescribeWebhookPolicy for complete configuration in editing scenarios. Each tenant can have up to 100 notification policies.
                 * @param req DescribeWebhookPolicyListRequest
                 * @return DescribeWebhookPolicyListOutcome
                 */
                DescribeWebhookPolicyListOutcome DescribeWebhookPolicyList(const Model::DescribeWebhookPolicyListRequest &request);
                void DescribeWebhookPolicyListAsync(const Model::DescribeWebhookPolicyListRequest& request, const DescribeWebhookPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebhookPolicyListOutcomeCallable DescribeWebhookPolicyListCallable(const Model::DescribeWebhookPolicyListRequest& request);

                /**
                 *This API is used to query the list of receiving robots for the current tenant by page, corresponding to the table on the Receive Bot Management Tab in Notification Center - Robot Notification. Each tenant can have up to 50 robots.
                 * @param req DescribeWebhookReceiverListRequest
                 * @return DescribeWebhookReceiverListOutcome
                 */
                DescribeWebhookReceiverListOutcome DescribeWebhookReceiverList(const Model::DescribeWebhookReceiverListRequest &request);
                void DescribeWebhookReceiverListAsync(const Model::DescribeWebhookReceiverListRequest& request, const DescribeWebhookReceiverListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebhookReceiverListOutcomeCallable DescribeWebhookReceiverListCallable(const Model::DescribeWebhookReceiverListRequest& request);

                /**
                 *Disable scheduled AI tasks.

Set the status of the specified AI scheduled task to disabled. After it is disabled, the task will suspend automatic execution.
                 * @param req DisableAIScheduleRequest
                 * @return DisableAIScheduleOutcome
                 */
                DisableAIScheduleOutcome DisableAISchedule(const Model::DisableAIScheduleRequest &request);
                void DisableAIScheduleAsync(const Model::DisableAIScheduleRequest& request, const DisableAIScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableAIScheduleOutcomeCallable DisableAIScheduleCallable(const Model::DisableAIScheduleRequest& request);

                /**
                 *This API is used to download export logs.
                 * @param req DownloadDspmExportLogRequest
                 * @return DownloadDspmExportLogOutcome
                 */
                DownloadDspmExportLogOutcome DownloadDspmExportLog(const Model::DownloadDspmExportLogRequest &request);
                void DownloadDspmExportLogAsync(const Model::DownloadDspmExportLogRequest& request, const DownloadDspmExportLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadDspmExportLogOutcomeCallable DownloadDspmExportLogCallable(const Model::DownloadDspmExportLogRequest& request);

                /**
                 *Enable AI scheduled tasks.

Set the status of the specified AI scheduled task to enabled. After it is enabled, the task will automatically execute based on the trigger configuration.
                 * @param req EnableAIScheduleRequest
                 * @return EnableAIScheduleOutcome
                 */
                EnableAIScheduleOutcome EnableAISchedule(const Model::EnableAIScheduleRequest &request);
                void EnableAIScheduleAsync(const Model::EnableAIScheduleRequest& request, const EnableAIScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableAIScheduleOutcomeCallable EnableAIScheduleCallable(const Model::EnableAIScheduleRequest& request);

                /**
                 *Exports host details of a CSIP scan task to Excel files. This API is used to query the download link through DescribeExportMachines after asynchronous generation.
                 * @param req ExportCSIPMalwareScanTaskDetailRequest
                 * @return ExportCSIPMalwareScanTaskDetailOutcome
                 */
                ExportCSIPMalwareScanTaskDetailOutcome ExportCSIPMalwareScanTaskDetail(const Model::ExportCSIPMalwareScanTaskDetailRequest &request);
                void ExportCSIPMalwareScanTaskDetailAsync(const Model::ExportCSIPMalwareScanTaskDetailRequest& request, const ExportCSIPMalwareScanTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportCSIPMalwareScanTaskDetailOutcomeCallable ExportCSIPMalwareScanTaskDetailCallable(const Model::ExportCSIPMalwareScanTaskDetailRequest& request);

                /**
                 *Export the host list for client settings.
                 * @param req ExportClientSettingHostListRequest
                 * @return ExportClientSettingHostListOutcome
                 */
                ExportClientSettingHostListOutcome ExportClientSettingHostList(const Model::ExportClientSettingHostListRequest &request);
                void ExportClientSettingHostListAsync(const Model::ExportClientSettingHostListRequest& request, const ExportClientSettingHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportClientSettingHostListOutcomeCallable ExportClientSettingHostListCallable(const Model::ExportClientSettingHostListRequest& request);

                /**
                 *This API is used to export the EDR policy list.
                 * @param req ExportEDRRulesRequest
                 * @return ExportEDRRulesOutcome
                 */
                ExportEDRRulesOutcome ExportEDRRules(const Model::ExportEDRRulesRequest &request);
                void ExportEDRRulesAsync(const Model::ExportEDRRulesRequest& request, const ExportEDRRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportEDRRulesOutcomeCallable ExportEDRRulesCallable(const Model::ExportEDRRulesRequest& request);

                /**
                 *This API is used to export log files with large data volumes asynchronously.
                 * @param req ExportTasksRequest
                 * @return ExportTasksOutcome
                 */
                ExportTasksOutcome ExportTasks(const Model::ExportTasksRequest &request);
                void ExportTasksAsync(const Model::ExportTasksRequest& request, const ExportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportTasksOutcomeCallable ExportTasksCallable(const Model::ExportTasksRequest& request);

                /**
                 *Install Agent for cluster container security (parallel container installation method).

capi layer processing process:
1. Query the DB cluster list by ClusterCaMD5List (only used for resolving the appid ownership of each cluster, not for existence/type verification)
2. Group by appid and pass through to the access side ClusterInstall RPC

Description (container asset revision 2026 H1): This API is a passthrough API. The capi layer does not verify the existence, data type, or format of ClusterCaMD5. ClusterCaMD5 values that miss in the DB are silently skipped with no error reported.
                 * @param req InstallClusterAgentRequest
                 * @return InstallClusterAgentOutcome
                 */
                InstallClusterAgentOutcome InstallClusterAgent(const Model::InstallClusterAgentRequest &request);
                void InstallClusterAgentAsync(const Model::InstallClusterAgentRequest& request, const InstallClusterAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstallClusterAgentOutcomeCallable InstallClusterAgentCallable(const Model::InstallClusterAgentRequest& request);

                /**
                 *Install the key sandbox SKILL on specified machine instances. Batch operations are supported, allowing input of multiple instance IDs at once. After installation, the AI Agent on the target machine can access credentials through the key sandbox proxy without being exposed to plaintext keys. Duplicate invocations on installed instances will not trigger an error (idempotent) and are deemed successful.
                 * @param req InstallKeySandboxSkillRequest
                 * @return InstallKeySandboxSkillOutcome
                 */
                InstallKeySandboxSkillOutcome InstallKeySandboxSkill(const Model::InstallKeySandboxSkillRequest &request);
                void InstallKeySandboxSkillAsync(const Model::InstallKeySandboxSkillRequest& request, const InstallKeySandboxSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstallKeySandboxSkillOutcomeCallable InstallKeySandboxSkillCallable(const Model::InstallKeySandboxSkillRequest& request);

                /**
                 *Trigger installation of the traffic sandbox plugin to AI Agent assets in a specified range. Use BelongAssetType to distinguish host or container dimensions, and use EffectScope to specify the installation target (INCLUDE = install only to specified assets, EXCLUDE = all assets minus specified assets). This API only triggers the action and does not wait for completion.
                 * @param req InstallSandboxPluginRequest
                 * @return InstallSandboxPluginOutcome
                 */
                InstallSandboxPluginOutcome InstallSandboxPlugin(const Model::InstallSandboxPluginRequest &request);
                void InstallSandboxPluginAsync(const Model::InstallSandboxPluginRequest& request, const InstallSandboxPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstallSandboxPluginOutcomeCallable InstallSandboxPluginCallable(const Model::InstallSandboxPluginRequest& request);

                /**
                 *Modify the AI-Link engine configuration.
                 * @param req ModifyAILinkSettingRequest
                 * @return ModifyAILinkSettingOutcome
                 */
                ModifyAILinkSettingOutcome ModifyAILinkSetting(const Model::ModifyAILinkSettingRequest &request);
                void ModifyAILinkSettingAsync(const Model::ModifyAILinkSettingRequest& request, const ModifyAILinkSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAILinkSettingOutcomeCallable ModifyAILinkSettingCallable(const Model::ModifyAILinkSettingRequest& request);

                /**
                 *Modify a scheduled AI task.

Partial update is supported. Only the passed-in optional fields are updated. Whether the trigger list is fully replaced is controlled by the UpdateTriggers flag.
                 * @param req ModifyAIScheduleRequest
                 * @return ModifyAIScheduleOutcome
                 */
                ModifyAIScheduleOutcome ModifyAISchedule(const Model::ModifyAIScheduleRequest &request);
                void ModifyAIScheduleAsync(const Model::ModifyAIScheduleRequest& request, const ModifyAIScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAIScheduleOutcomeCallable ModifyAIScheduleCallable(const Model::ModifyAIScheduleRequest& request);

                /**
                 *This API is used to modify client log collection settings exclusive to CSIP. It allows you to set the log collection type and asset scope for which the settings take effect.
                 * @param req ModifyAgentConfigSettingRequest
                 * @return ModifyAgentConfigSettingOutcome
                 */
                ModifyAgentConfigSettingOutcome ModifyAgentConfigSetting(const Model::ModifyAgentConfigSettingRequest &request);
                void ModifyAgentConfigSettingAsync(const Model::ModifyAgentConfigSettingRequest& request, const ModifyAgentConfigSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAgentConfigSettingOutcomeCallable ModifyAgentConfigSettingCallable(const Model::ModifyAgentConfigSettingRequest& request);

                /**
                 *Set the client running mode and configuration
                 * @param req ModifyAgentRunModeRequest
                 * @return ModifyAgentRunModeOutcome
                 */
                ModifyAgentRunModeOutcome ModifyAgentRunMode(const Model::ModifyAgentRunModeRequest &request);
                void ModifyAgentRunModeAsync(const Model::ModifyAgentRunModeRequest& request, const ModifyAgentRunModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAgentRunModeOutcomeCallable ModifyAgentRunModeCallable(const Model::ModifyAgentRunModeRequest& request);

                /**
                 *Modify the client running policy group. This API is used to set custom policies and associate machine lists.
                 * @param req ModifyAgentRunPolicyRequest
                 * @return ModifyAgentRunPolicyOutcome
                 */
                ModifyAgentRunPolicyOutcome ModifyAgentRunPolicy(const Model::ModifyAgentRunPolicyRequest &request);
                void ModifyAgentRunPolicyAsync(const Model::ModifyAgentRunPolicyRequest& request, const ModifyAgentRunPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAgentRunPolicyOutcomeCallable ModifyAgentRunPolicyCallable(const Model::ModifyAgentRunPolicyRequest& request);

                /**
                 *Tag an asset as core or not.
                 * @param req ModifyAssetCoreAttributeRequest
                 * @return ModifyAssetCoreAttributeOutcome
                 */
                ModifyAssetCoreAttributeOutcome ModifyAssetCoreAttribute(const Model::ModifyAssetCoreAttributeRequest &request);
                void ModifyAssetCoreAttributeAsync(const Model::ModifyAssetCoreAttributeRequest& request, const ModifyAssetCoreAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssetCoreAttributeOutcomeCallable ModifyAssetCoreAttributeCallable(const Model::ModifyAssetCoreAttributeRequest& request);

                /**
                 *Update the asset search view.
                 * @param req ModifyAssetFilterViewRequest
                 * @return ModifyAssetFilterViewOutcome
                 */
                ModifyAssetFilterViewOutcome ModifyAssetFilterView(const Model::ModifyAssetFilterViewRequest &request);
                void ModifyAssetFilterViewAsync(const Model::ModifyAssetFilterViewRequest& request, const ModifyAssetFilterViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssetFilterViewOutcomeCallable ModifyAssetFilterViewCallable(const Model::ModifyAssetFilterViewRequest& request);

                /**
                 *This API is used to edit asset tags.
                 * @param req ModifyAssetTagRequest
                 * @return ModifyAssetTagOutcome
                 */
                ModifyAssetTagOutcome ModifyAssetTag(const Model::ModifyAssetTagRequest &request);
                void ModifyAssetTagAsync(const Model::ModifyAssetTagRequest& request, const ModifyAssetTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssetTagOutcomeCallable ModifyAssetTagCallable(const Model::ModifyAssetTagRequest& request);

                /**
                 *Operate assets to edit tags.
                 * @param req ModifyAssetTagsRequest
                 * @return ModifyAssetTagsOutcome
                 */
                ModifyAssetTagsOutcome ModifyAssetTags(const Model::ModifyAssetTagsRequest &request);
                void ModifyAssetTagsAsync(const Model::ModifyAssetTagsRequest& request, const ModifyAssetTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssetTagsOutcomeCallable ModifyAssetTagsCallable(const Model::ModifyAssetTagsRequest& request);

                /**
                 *Operate assets and edit tags.
                 * @param req ModifyAssetTagsByAssetInfoRequest
                 * @return ModifyAssetTagsByAssetInfoOutcome
                 */
                ModifyAssetTagsByAssetInfoOutcome ModifyAssetTagsByAssetInfo(const Model::ModifyAssetTagsByAssetInfoRequest &request);
                void ModifyAssetTagsByAssetInfoAsync(const Model::ModifyAssetTagsByAssetInfoRequest& request, const ModifyAssetTagsByAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssetTagsByAssetInfoOutcomeCallable ModifyAssetTagsByAssetInfoCallable(const Model::ModifyAssetTagsByAssetInfoRequest& request);

                /**
                 *This API is used to modify the brute-force blocking mode.
                 * @param req ModifyBanModeRequest
                 * @return ModifyBanModeOutcome
                 */
                ModifyBanModeOutcome ModifyBanMode(const Model::ModifyBanModeRequest &request);
                void ModifyBanModeAsync(const Model::ModifyBanModeRequest& request, const ModifyBanModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBanModeOutcomeCallable ModifyBanModeCallable(const Model::ModifyBanModeRequest& request);

                /**
                 *Create or edit a baseline policy. Policy.ID 0 means create, non-zero means edit. Name is required when creating or editing. CheckAssetType and Type must comply with the CheckAssetType and PolicyType enums.
                 * @param req ModifyBaselinePolicyRequest
                 * @return ModifyBaselinePolicyOutcome
                 */
                ModifyBaselinePolicyOutcome ModifyBaselinePolicy(const Model::ModifyBaselinePolicyRequest &request);
                void ModifyBaselinePolicyAsync(const Model::ModifyBaselinePolicyRequest& request, const ModifyBaselinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaselinePolicyOutcomeCallable ModifyBaselinePolicyCallable(const Model::ModifyBaselinePolicyRequest& request);

                /**
                 *Batch enable or disable baseline policies. Once disabled, a policy will no longer be included in scans and statistics.
                 * @param req ModifyBaselinePolicyEnableRequest
                 * @return ModifyBaselinePolicyEnableOutcome
                 */
                ModifyBaselinePolicyEnableOutcome ModifyBaselinePolicyEnable(const Model::ModifyBaselinePolicyEnableRequest &request);
                void ModifyBaselinePolicyEnableAsync(const Model::ModifyBaselinePolicyEnableRequest& request, const ModifyBaselinePolicyEnableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaselinePolicyEnableOutcomeCallable ModifyBaselinePolicyEnableCallable(const Model::ModifyBaselinePolicyEnableRequest& request);

                /**
                 *This API is used to update the baseline synchronization configuration of the current account (admin). When AutoSync is true, TargetAppidList cannot be empty and its elements cannot be 0.
                 * @param req ModifyBaselineSyncConfRequest
                 * @return ModifyBaselineSyncConfOutcome
                 */
                ModifyBaselineSyncConfOutcome ModifyBaselineSyncConf(const Model::ModifyBaselineSyncConfRequest &request);
                void ModifyBaselineSyncConfAsync(const Model::ModifyBaselineSyncConfRequest& request, const ModifyBaselineSyncConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaselineSyncConfOutcomeCallable ModifyBaselineSyncConfCallable(const Model::ModifyBaselineSyncConfRequest& request);

                /**
                 *This API is used to update user-level baseline configurations for the current account, including sync permission, offline risk clearing, and Agent scan timeout.
                 * @param req ModifyBaselineUserOtherConfRequest
                 * @return ModifyBaselineUserOtherConfOutcome
                 */
                ModifyBaselineUserOtherConfOutcome ModifyBaselineUserOtherConf(const Model::ModifyBaselineUserOtherConfRequest &request);
                void ModifyBaselineUserOtherConfAsync(const Model::ModifyBaselineUserOtherConfRequest& request, const ModifyBaselineUserOtherConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaselineUserOtherConfOutcomeCallable ModifyBaselineUserOtherConfCallable(const Model::ModifyBaselineUserOtherConfRequest& request);

                /**
                 *Update the custom "user weak password" dictionary for the current account. The dictionary content is stored after server encryption. Input an empty string to clear it.
                 * @param req ModifyBaselineUserWeakPasswordConfRequest
                 * @return ModifyBaselineUserWeakPasswordConfOutcome
                 */
                ModifyBaselineUserWeakPasswordConfOutcome ModifyBaselineUserWeakPasswordConf(const Model::ModifyBaselineUserWeakPasswordConfRequest &request);
                void ModifyBaselineUserWeakPasswordConfAsync(const Model::ModifyBaselineUserWeakPasswordConfRequest& request, const ModifyBaselineUserWeakPasswordConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBaselineUserWeakPasswordConfOutcomeCallable ModifyBaselineUserWeakPasswordConfCallable(const Model::ModifyBaselineUserWeakPasswordConfRequest& request);

                /**
                 *This API is used to set the status of brute force attack blocking.
                 * @param req ModifyBruteAttackBanStatusRequest
                 * @return ModifyBruteAttackBanStatusOutcome
                 */
                ModifyBruteAttackBanStatusOutcome ModifyBruteAttackBanStatus(const Model::ModifyBruteAttackBanStatusRequest &request);
                void ModifyBruteAttackBanStatusAsync(const Model::ModifyBruteAttackBanStatusRequest& request, const ModifyBruteAttackBanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBruteAttackBanStatusOutcomeCallable ModifyBruteAttackBanStatusCallable(const Model::ModifyBruteAttackBanStatusRequest& request);

                /**
                 *This API is used to modify brute force cracking rules.
                 * @param req ModifyBruteAttackRulesRequest
                 * @return ModifyBruteAttackRulesOutcome
                 */
                ModifyBruteAttackRulesOutcome ModifyBruteAttackRules(const Model::ModifyBruteAttackRulesRequest &request);
                void ModifyBruteAttackRulesAsync(const Model::ModifyBruteAttackRulesRequest& request, const ModifyBruteAttackRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBruteAttackRulesOutcomeCallable ModifyBruteAttackRulesCallable(const Model::ModifyBruteAttackRulesRequest& request);

                /**
                 *Bind host authorization or RASP authorization to a specified order. Execute asynchronously and return TaskId to query progress. Specify the authorized version by LicenseType.
                 * @param req ModifyCSIPLicenseBindsRequest
                 * @return ModifyCSIPLicenseBindsOutcome
                 */
                ModifyCSIPLicenseBindsOutcome ModifyCSIPLicenseBinds(const Model::ModifyCSIPLicenseBindsRequest &request);
                void ModifyCSIPLicenseBindsAsync(const Model::ModifyCSIPLicenseBindsRequest& request, const ModifyCSIPLicenseBindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCSIPLicenseBindsOutcomeCallable ModifyCSIPLicenseBindsCallable(const Model::ModifyCSIPLicenseBindsRequest& request);

                /**
                 *Manually unbind host authorization. Execute synchronously and return results directly. Only unbind host authorization (category=0, including Pro and Ultimate editions). In single order mode, appid can locate the order without the need to pass ResourceId. For RASP unbinding, use ModifyCSIPRaspLicenseUnBinds.
                 * @param req ModifyCSIPLicenseUnBindsRequest
                 * @return ModifyCSIPLicenseUnBindsOutcome
                 */
                ModifyCSIPLicenseUnBindsOutcome ModifyCSIPLicenseUnBinds(const Model::ModifyCSIPLicenseUnBindsRequest &request);
                void ModifyCSIPLicenseUnBindsAsync(const Model::ModifyCSIPLicenseUnBindsRequest& request, const ModifyCSIPLicenseUnBindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCSIPLicenseUnBindsOutcomeCallable ModifyCSIPLicenseUnBindsCallable(const Model::ModifyCSIPLicenseUnBindsRequest& request);

                /**
                 *Bind RASP or Flagship Edition Authorization to a specified order. Execute asynchronously and return TaskId to query progress. LicenseType=rasp binds RASP, LicenseType=enterprise_hp binds flagship host authorization. AssetType is case-sensitive for host/container node/EKS.
                 * @param req ModifyCSIPRaspLicenseBindsRequest
                 * @return ModifyCSIPRaspLicenseBindsOutcome
                 */
                ModifyCSIPRaspLicenseBindsOutcome ModifyCSIPRaspLicenseBinds(const Model::ModifyCSIPRaspLicenseBindsRequest &request);
                void ModifyCSIPRaspLicenseBindsAsync(const Model::ModifyCSIPRaspLicenseBindsRequest& request, const ModifyCSIPRaspLicenseBindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCSIPRaspLicenseBindsOutcomeCallable ModifyCSIPRaspLicenseBindsCallable(const Model::ModifyCSIPRaspLicenseBindsRequest& request);

                /**
                 *Manually unbind RASP authorization. Execute synchronously and return results directly. Only unbind RASP authorization (category=1), with no unbinding frequency limit. In single order mode, appid can locate the order without the need to pass ResourceId.
                 * @param req ModifyCSIPRaspLicenseUnBindsRequest
                 * @return ModifyCSIPRaspLicenseUnBindsOutcome
                 */
                ModifyCSIPRaspLicenseUnBindsOutcome ModifyCSIPRaspLicenseUnBinds(const Model::ModifyCSIPRaspLicenseUnBindsRequest &request);
                void ModifyCSIPRaspLicenseUnBindsAsync(const Model::ModifyCSIPRaspLicenseUnBindsRequest& request, const ModifyCSIPRaspLicenseUnBindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCSIPRaspLicenseUnBindsOutcomeCallable ModifyCSIPRaspLicenseUnBindsCallable(const Model::ModifyCSIPRaspLicenseUnBindsRequest& request);

                /**
                 *Modify the cluster protection status.
                 * @param req ModifyClusterDefendStatusRequest
                 * @return ModifyClusterDefendStatusOutcome
                 */
                ModifyClusterDefendStatusOutcome ModifyClusterDefendStatus(const Model::ModifyClusterDefendStatusRequest &request);
                void ModifyClusterDefendStatusAsync(const Model::ModifyClusterDefendStatusRequest& request, const ModifyClusterDefendStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterDefendStatusOutcomeCallable ModifyClusterDefendStatusCallable(const Model::ModifyClusterDefendStatusRequest& request);

                /**
                 *Modify the bucket monitoring status.
                 * @param req ModifyCosAuditBucketMonitorStatusRequest
                 * @return ModifyCosAuditBucketMonitorStatusOutcome
                 */
                ModifyCosAuditBucketMonitorStatusOutcome ModifyCosAuditBucketMonitorStatus(const Model::ModifyCosAuditBucketMonitorStatusRequest &request);
                void ModifyCosAuditBucketMonitorStatusAsync(const Model::ModifyCosAuditBucketMonitorStatusRequest& request, const ModifyCosAuditBucketMonitorStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCosAuditBucketMonitorStatusOutcomeCallable ModifyCosAuditBucketMonitorStatusCallable(const Model::ModifyCosAuditBucketMonitorStatusRequest& request);

                /**
                 *Updates the CSPM automated quota manager shared switch.
                 * @param req ModifyCspmShardConfigRequest
                 * @return ModifyCspmShardConfigOutcome
                 */
                ModifyCspmShardConfigOutcome ModifyCspmShardConfig(const Model::ModifyCspmShardConfigRequest &request);
                void ModifyCspmShardConfigAsync(const Model::ModifyCspmShardConfigRequest& request, const ModifyCspmShardConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCspmShardConfigOutcomeCallable ModifyCspmShardConfigCallable(const Model::ModifyCspmShardConfigRequest& request);

                /**
                 *Modify Dspm access management information
                 * @param req ModifyDspmAccessRecordRequest
                 * @return ModifyDspmAccessRecordOutcome
                 */
                ModifyDspmAccessRecordOutcome ModifyDspmAccessRecord(const Model::ModifyDspmAccessRecordRequest &request);
                void ModifyDspmAccessRecordAsync(const Model::ModifyDspmAccessRecordRequest& request, const ModifyDspmAccessRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmAccessRecordOutcomeCallable ModifyDspmAccessRecordCallable(const Model::ModifyDspmAccessRecordRequest& request);

                /**
                 *Modifies the data identification template of the current dspm application
                 * @param req ModifyDspmApplyingIdentifyComplianceGroupRequest
                 * @return ModifyDspmApplyingIdentifyComplianceGroupOutcome
                 */
                ModifyDspmApplyingIdentifyComplianceGroupOutcome ModifyDspmApplyingIdentifyComplianceGroup(const Model::ModifyDspmApplyingIdentifyComplianceGroupRequest &request);
                void ModifyDspmApplyingIdentifyComplianceGroupAsync(const Model::ModifyDspmApplyingIdentifyComplianceGroupRequest& request, const ModifyDspmApplyingIdentifyComplianceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmApplyingIdentifyComplianceGroupOutcomeCallable ModifyDspmApplyingIdentifyComplianceGroupCallable(const Model::ModifyDspmApplyingIdentifyComplianceGroupRequest& request);

                /**
                 *Modifies the Dspm approval form status.
                 * @param req ModifyDspmApproveStatusRequest
                 * @return ModifyDspmApproveStatusOutcome
                 */
                ModifyDspmApproveStatusOutcome ModifyDspmApproveStatus(const Model::ModifyDspmApproveStatusRequest &request);
                void ModifyDspmApproveStatusAsync(const Model::ModifyDspmApproveStatusRequest& request, const ModifyDspmApproveStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmApproveStatusOutcomeCallable ModifyDspmApproveStatusCallable(const Model::ModifyDspmApproveStatusRequest& request);

                /**
                 *Modify Dspm asset account information.
                 * @param req ModifyDspmAssetAccountRequest
                 * @return ModifyDspmAssetAccountOutcome
                 */
                ModifyDspmAssetAccountOutcome ModifyDspmAssetAccount(const Model::ModifyDspmAssetAccountRequest &request);
                void ModifyDspmAssetAccountAsync(const Model::ModifyDspmAssetAccountRequest& request, const ModifyDspmAssetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmAssetAccountOutcomeCallable ModifyDspmAssetAccountCallable(const Model::ModifyDspmAssetAccountRequest& request);

                /**
                 *Modify Dspm asset account permissions
                 * @param req ModifyDspmAssetAccountPrivilegesRequest
                 * @return ModifyDspmAssetAccountPrivilegesOutcome
                 */
                ModifyDspmAssetAccountPrivilegesOutcome ModifyDspmAssetAccountPrivileges(const Model::ModifyDspmAssetAccountPrivilegesRequest &request);
                void ModifyDspmAssetAccountPrivilegesAsync(const Model::ModifyDspmAssetAccountPrivilegesRequest& request, const ModifyDspmAssetAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmAssetAccountPrivilegesOutcomeCallable ModifyDspmAssetAccountPrivilegesCallable(const Model::ModifyDspmAssetAccountPrivilegesRequest& request);

                /**
                 *Modifies a Dspm Asset Data scan task
                 * @param req ModifyDspmAssetDataScanTaskRequest
                 * @return ModifyDspmAssetDataScanTaskOutcome
                 */
                ModifyDspmAssetDataScanTaskOutcome ModifyDspmAssetDataScanTask(const Model::ModifyDspmAssetDataScanTaskRequest &request);
                void ModifyDspmAssetDataScanTaskAsync(const Model::ModifyDspmAssetDataScanTaskRequest& request, const ModifyDspmAssetDataScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmAssetDataScanTaskOutcomeCallable ModifyDspmAssetDataScanTaskCallable(const Model::ModifyDspmAssetDataScanTaskRequest& request);

                /**
                 *Modify the status of a Dspm Asset Data scan task
                 * @param req ModifyDspmAssetDataScanTaskStatusRequest
                 * @return ModifyDspmAssetDataScanTaskStatusOutcome
                 */
                ModifyDspmAssetDataScanTaskStatusOutcome ModifyDspmAssetDataScanTaskStatus(const Model::ModifyDspmAssetDataScanTaskStatusRequest &request);
                void ModifyDspmAssetDataScanTaskStatusAsync(const Model::ModifyDspmAssetDataScanTaskStatusRequest& request, const ModifyDspmAssetDataScanTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmAssetDataScanTaskStatusOutcomeCallable ModifyDspmAssetDataScanTaskStatusCallable(const Model::ModifyDspmAssetDataScanTaskStatusRequest& request);

                /**
                 *Modify the Dspm asset log delivery switch.
                 * @param req ModifyDspmAssetLogDeliverySwitchRequest
                 * @return ModifyDspmAssetLogDeliverySwitchOutcome
                 */
                ModifyDspmAssetLogDeliverySwitchOutcome ModifyDspmAssetLogDeliverySwitch(const Model::ModifyDspmAssetLogDeliverySwitchRequest &request);
                void ModifyDspmAssetLogDeliverySwitchAsync(const Model::ModifyDspmAssetLogDeliverySwitchRequest& request, const ModifyDspmAssetLogDeliverySwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmAssetLogDeliverySwitchOutcomeCallable ModifyDspmAssetLogDeliverySwitchCallable(const Model::ModifyDspmAssetLogDeliverySwitchRequest& request);

                /**
                 *Modify the Dspm asset log delivery switch
                 * @param req ModifyDspmAssetSecurityAnalysisSwitchRequest
                 * @return ModifyDspmAssetSecurityAnalysisSwitchOutcome
                 */
                ModifyDspmAssetSecurityAnalysisSwitchOutcome ModifyDspmAssetSecurityAnalysisSwitch(const Model::ModifyDspmAssetSecurityAnalysisSwitchRequest &request);
                void ModifyDspmAssetSecurityAnalysisSwitchAsync(const Model::ModifyDspmAssetSecurityAnalysisSwitchRequest& request, const ModifyDspmAssetSecurityAnalysisSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmAssetSecurityAnalysisSwitchOutcomeCallable ModifyDspmAssetSecurityAnalysisSwitchCallable(const Model::ModifyDspmAssetSecurityAnalysisSwitchRequest& request);

                /**
                 *Modify a Dspm audit filter policy
                 * @param req ModifyDspmAuditFilterStrategyRequest
                 * @return ModifyDspmAuditFilterStrategyOutcome
                 */
                ModifyDspmAuditFilterStrategyOutcome ModifyDspmAuditFilterStrategy(const Model::ModifyDspmAuditFilterStrategyRequest &request);
                void ModifyDspmAuditFilterStrategyAsync(const Model::ModifyDspmAuditFilterStrategyRequest& request, const ModifyDspmAuditFilterStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmAuditFilterStrategyOutcomeCallable ModifyDspmAuditFilterStrategyCallable(const Model::ModifyDspmAuditFilterStrategyRequest& request);

                /**
                 *This API is used to modify the log backup settings.
                 * @param req ModifyDspmBackupSettingRequest
                 * @return ModifyDspmBackupSettingOutcome
                 */
                ModifyDspmBackupSettingOutcome ModifyDspmBackupSetting(const Model::ModifyDspmBackupSettingRequest &request);
                void ModifyDspmBackupSettingAsync(const Model::ModifyDspmBackupSettingRequest& request, const ModifyDspmBackupSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmBackupSettingOutcomeCallable ModifyDspmBackupSettingCallable(const Model::ModifyDspmBackupSettingRequest& request);

                /**
                 *This API is used to save the tenant CKafka configuration.
                 * @param req ModifyDspmCkafkaSaveRequest
                 * @return ModifyDspmCkafkaSaveOutcome
                 */
                ModifyDspmCkafkaSaveOutcome ModifyDspmCkafkaSave(const Model::ModifyDspmCkafkaSaveRequest &request);
                void ModifyDspmCkafkaSaveAsync(const Model::ModifyDspmCkafkaSaveRequest& request, const ModifyDspmCkafkaSaveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmCkafkaSaveOutcomeCallable ModifyDspmCkafkaSaveCallable(const Model::ModifyDspmCkafkaSaveRequest& request);

                /**
                 *This API is used to enable the log shipping.
                 * @param req ModifyDspmCkafkaStartRequest
                 * @return ModifyDspmCkafkaStartOutcome
                 */
                ModifyDspmCkafkaStartOutcome ModifyDspmCkafkaStart(const Model::ModifyDspmCkafkaStartRequest &request);
                void ModifyDspmCkafkaStartAsync(const Model::ModifyDspmCkafkaStartRequest& request, const ModifyDspmCkafkaStartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmCkafkaStartOutcomeCallable ModifyDspmCkafkaStartCallable(const Model::ModifyDspmCkafkaStartRequest& request);

                /**
                 *This API is used to disable the log type shipping.
                 * @param req ModifyDspmCkafkaStopRequest
                 * @return ModifyDspmCkafkaStopOutcome
                 */
                ModifyDspmCkafkaStopOutcome ModifyDspmCkafkaStop(const Model::ModifyDspmCkafkaStopRequest &request);
                void ModifyDspmCkafkaStopAsync(const Model::ModifyDspmCkafkaStopRequest& request, const ModifyDspmCkafkaStopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmCkafkaStopOutcomeCallable ModifyDspmCkafkaStopCallable(const Model::ModifyDspmCkafkaStopRequest& request);

                /**
                 *Modifies dspm data identification categorization
                 * @param req ModifyDspmIdentifyCategoryRequest
                 * @return ModifyDspmIdentifyCategoryOutcome
                 */
                ModifyDspmIdentifyCategoryOutcome ModifyDspmIdentifyCategory(const Model::ModifyDspmIdentifyCategoryRequest &request);
                void ModifyDspmIdentifyCategoryAsync(const Model::ModifyDspmIdentifyCategoryRequest& request, const ModifyDspmIdentifyCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIdentifyCategoryOutcomeCallable ModifyDspmIdentifyCategoryCallable(const Model::ModifyDspmIdentifyCategoryRequest& request);

                /**
                 *Modifies a dspm data identification template
                 * @param req ModifyDspmIdentifyComplianceGroupRequest
                 * @return ModifyDspmIdentifyComplianceGroupOutcome
                 */
                ModifyDspmIdentifyComplianceGroupOutcome ModifyDspmIdentifyComplianceGroup(const Model::ModifyDspmIdentifyComplianceGroupRequest &request);
                void ModifyDspmIdentifyComplianceGroupAsync(const Model::ModifyDspmIdentifyComplianceGroupRequest& request, const ModifyDspmIdentifyComplianceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIdentifyComplianceGroupOutcomeCallable ModifyDspmIdentifyComplianceGroupCallable(const Model::ModifyDspmIdentifyComplianceGroupRequest& request);

                /**
                 *Modifies the status of a dspm data identification template
                 * @param req ModifyDspmIdentifyComplianceGroupStatusRequest
                 * @return ModifyDspmIdentifyComplianceGroupStatusOutcome
                 */
                ModifyDspmIdentifyComplianceGroupStatusOutcome ModifyDspmIdentifyComplianceGroupStatus(const Model::ModifyDspmIdentifyComplianceGroupStatusRequest &request);
                void ModifyDspmIdentifyComplianceGroupStatusAsync(const Model::ModifyDspmIdentifyComplianceGroupStatusRequest& request, const ModifyDspmIdentifyComplianceGroupStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIdentifyComplianceGroupStatusOutcomeCallable ModifyDspmIdentifyComplianceGroupStatusCallable(const Model::ModifyDspmIdentifyComplianceGroupStatusRequest& request);

                /**
                 *This API is used to modify association level information of dspm data identification template data items.
                 * @param req ModifyDspmIdentifyComplianceRuleLevelInfoRequest
                 * @return ModifyDspmIdentifyComplianceRuleLevelInfoOutcome
                 */
                ModifyDspmIdentifyComplianceRuleLevelInfoOutcome ModifyDspmIdentifyComplianceRuleLevelInfo(const Model::ModifyDspmIdentifyComplianceRuleLevelInfoRequest &request);
                void ModifyDspmIdentifyComplianceRuleLevelInfoAsync(const Model::ModifyDspmIdentifyComplianceRuleLevelInfoRequest& request, const ModifyDspmIdentifyComplianceRuleLevelInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIdentifyComplianceRuleLevelInfoOutcomeCallable ModifyDspmIdentifyComplianceRuleLevelInfoCallable(const Model::ModifyDspmIdentifyComplianceRuleLevelInfoRequest& request);

                /**
                 *Modify Dspm identity information.
                 * @param req ModifyDspmIdentifyInfoRequest
                 * @return ModifyDspmIdentifyInfoOutcome
                 */
                ModifyDspmIdentifyInfoOutcome ModifyDspmIdentifyInfo(const Model::ModifyDspmIdentifyInfoRequest &request);
                void ModifyDspmIdentifyInfoAsync(const Model::ModifyDspmIdentifyInfoRequest& request, const ModifyDspmIdentifyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIdentifyInfoOutcomeCallable ModifyDspmIdentifyInfoCallable(const Model::ModifyDspmIdentifyInfoRequest& request);

                /**
                 *Modifies dspm data identification classification groups
                 * @param req ModifyDspmIdentifyLevelGroupRequest
                 * @return ModifyDspmIdentifyLevelGroupOutcome
                 */
                ModifyDspmIdentifyLevelGroupOutcome ModifyDspmIdentifyLevelGroup(const Model::ModifyDspmIdentifyLevelGroupRequest &request);
                void ModifyDspmIdentifyLevelGroupAsync(const Model::ModifyDspmIdentifyLevelGroupRequest& request, const ModifyDspmIdentifyLevelGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIdentifyLevelGroupOutcomeCallable ModifyDspmIdentifyLevelGroupCallable(const Model::ModifyDspmIdentifyLevelGroupRequest& request);

                /**
                 *Modify dspm data identification grading information.
                 * @param req ModifyDspmIdentifyLevelItemRequest
                 * @return ModifyDspmIdentifyLevelItemOutcome
                 */
                ModifyDspmIdentifyLevelItemOutcome ModifyDspmIdentifyLevelItem(const Model::ModifyDspmIdentifyLevelItemRequest &request);
                void ModifyDspmIdentifyLevelItemAsync(const Model::ModifyDspmIdentifyLevelItemRequest& request, const ModifyDspmIdentifyLevelItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIdentifyLevelItemOutcomeCallable ModifyDspmIdentifyLevelItemCallable(const Model::ModifyDspmIdentifyLevelItemRequest& request);

                /**
                 *Modify a dspm identification data item
                 * @param req ModifyDspmIdentifyRuleRequest
                 * @return ModifyDspmIdentifyRuleOutcome
                 */
                ModifyDspmIdentifyRuleOutcome ModifyDspmIdentifyRule(const Model::ModifyDspmIdentifyRuleRequest &request);
                void ModifyDspmIdentifyRuleAsync(const Model::ModifyDspmIdentifyRuleRequest& request, const ModifyDspmIdentifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIdentifyRuleOutcomeCallable ModifyDspmIdentifyRuleCallable(const Model::ModifyDspmIdentifyRuleRequest& request);

                /**
                 *Modifies the status of a dspm identification data item
                 * @param req ModifyDspmIdentifyRuleStatusRequest
                 * @return ModifyDspmIdentifyRuleStatusOutcome
                 */
                ModifyDspmIdentifyRuleStatusOutcome ModifyDspmIdentifyRuleStatus(const Model::ModifyDspmIdentifyRuleStatusRequest &request);
                void ModifyDspmIdentifyRuleStatusAsync(const Model::ModifyDspmIdentifyRuleStatusRequest& request, const ModifyDspmIdentifyRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIdentifyRuleStatusOutcomeCallable ModifyDspmIdentifyRuleStatusCallable(const Model::ModifyDspmIdentifyRuleStatusRequest& request);

                /**
                 *Modify DspmIp information.
                 * @param req ModifyDspmIpInfoRequest
                 * @return ModifyDspmIpInfoOutcome
                 */
                ModifyDspmIpInfoOutcome ModifyDspmIpInfo(const Model::ModifyDspmIpInfoRequest &request);
                void ModifyDspmIpInfoAsync(const Model::ModifyDspmIpInfoRequest& request, const ModifyDspmIpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmIpInfoOutcomeCallable ModifyDspmIpInfoCallable(const Model::ModifyDspmIpInfoRequest& request);

                /**
                 *This API is used to modify the log shipping configuration information.
                 * @param req ModifyDspmLogDeliveryTypeRequest
                 * @return ModifyDspmLogDeliveryTypeOutcome
                 */
                ModifyDspmLogDeliveryTypeOutcome ModifyDspmLogDeliveryType(const Model::ModifyDspmLogDeliveryTypeRequest &request);
                void ModifyDspmLogDeliveryTypeAsync(const Model::ModifyDspmLogDeliveryTypeRequest& request, const ModifyDspmLogDeliveryTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmLogDeliveryTypeOutcomeCallable ModifyDspmLogDeliveryTypeCallable(const Model::ModifyDspmLogDeliveryTypeRequest& request);

                /**
                 *Modifies the Dspm personal identity ID.
                 * @param req ModifyDspmPersonalIdentifyRequest
                 * @return ModifyDspmPersonalIdentifyOutcome
                 */
                ModifyDspmPersonalIdentifyOutcome ModifyDspmPersonalIdentify(const Model::ModifyDspmPersonalIdentifyRequest &request);
                void ModifyDspmPersonalIdentifyAsync(const Model::ModifyDspmPersonalIdentifyRequest& request, const ModifyDspmPersonalIdentifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmPersonalIdentifyOutcomeCallable ModifyDspmPersonalIdentifyCallable(const Model::ModifyDspmPersonalIdentifyRequest& request);

                /**
                 *This API is used to restore the backup logs.
                 * @param req ModifyDspmRestoreLogTaskRequest
                 * @return ModifyDspmRestoreLogTaskOutcome
                 */
                ModifyDspmRestoreLogTaskOutcome ModifyDspmRestoreLogTask(const Model::ModifyDspmRestoreLogTaskRequest &request);
                void ModifyDspmRestoreLogTaskAsync(const Model::ModifyDspmRestoreLogTaskRequest& request, const ModifyDspmRestoreLogTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmRestoreLogTaskOutcomeCallable ModifyDspmRestoreLogTaskCallable(const Model::ModifyDspmRestoreLogTaskRequest& request);

                /**
                 *Modifies Dspm risk information
                 * @param req ModifyDspmRiskInfoRequest
                 * @return ModifyDspmRiskInfoOutcome
                 */
                ModifyDspmRiskInfoOutcome ModifyDspmRiskInfo(const Model::ModifyDspmRiskInfoRequest &request);
                void ModifyDspmRiskInfoAsync(const Model::ModifyDspmRiskInfoRequest& request, const ModifyDspmRiskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmRiskInfoOutcomeCallable ModifyDspmRiskInfoCallable(const Model::ModifyDspmRiskInfoRequest& request);

                /**
                 *Modifies Dspm risk policies
                 * @param req ModifyDspmRiskStrategyRequest
                 * @return ModifyDspmRiskStrategyOutcome
                 */
                ModifyDspmRiskStrategyOutcome ModifyDspmRiskStrategy(const Model::ModifyDspmRiskStrategyRequest &request);
                void ModifyDspmRiskStrategyAsync(const Model::ModifyDspmRiskStrategyRequest& request, const ModifyDspmRiskStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmRiskStrategyOutcomeCallable ModifyDspmRiskStrategyCallable(const Model::ModifyDspmRiskStrategyRequest& request);

                /**
                 *Modify the Dspm allowlist policy
                 * @param req ModifyDspmWhitelistStrategyRequest
                 * @return ModifyDspmWhitelistStrategyOutcome
                 */
                ModifyDspmWhitelistStrategyOutcome ModifyDspmWhitelistStrategy(const Model::ModifyDspmWhitelistStrategyRequest &request);
                void ModifyDspmWhitelistStrategyAsync(const Model::ModifyDspmWhitelistStrategyRequest& request, const ModifyDspmWhitelistStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDspmWhitelistStrategyOutcomeCallable ModifyDspmWhitelistStrategyCallable(const Model::ModifyDspmWhitelistStrategyRequest& request);

                /**
                 *This API is used to edit or create an EDR policy.
                 * @param req ModifyEDRRuleRequest
                 * @return ModifyEDRRuleOutcome
                 */
                ModifyEDRRuleOutcome ModifyEDRRule(const Model::ModifyEDRRuleRequest &request);
                void ModifyEDRRuleAsync(const Model::ModifyEDRRuleRequest& request, const ModifyEDRRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEDRRuleOutcomeCallable ModifyEDRRuleCallable(const Model::ModifyEDRRuleRequest& request);

                /**
                 *This API is used to modify the switch status of EDR policies.
                 * @param req ModifyEDRRuleStatusRequest
                 * @return ModifyEDRRuleStatusOutcome
                 */
                ModifyEDRRuleStatusOutcome ModifyEDRRuleStatus(const Model::ModifyEDRRuleStatusRequest &request);
                void ModifyEDRRuleStatusAsync(const Model::ModifyEDRRuleStatusRequest& request, const ModifyEDRRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEDRRuleStatusOutcomeCallable ModifyEDRRuleStatusCallable(const Model::ModifyEDRRuleStatusRequest& request);

                /**
                 *Batch modify EDR policy actions.
                 * @param req ModifyEDRRulesActionRequest
                 * @return ModifyEDRRulesActionOutcome
                 */
                ModifyEDRRulesActionOutcome ModifyEDRRulesAction(const Model::ModifyEDRRulesActionRequest &request);
                void ModifyEDRRulesActionAsync(const Model::ModifyEDRRulesActionRequest& request, const ModifyEDRRulesActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEDRRulesActionOutcomeCallable ModifyEDRRulesActionCallable(const Model::ModifyEDRRulesActionRequest& request);

                /**
                 *EDR alert quarantine and recovery
                 * @param req ModifyEdrAlertIsolationRequest
                 * @return ModifyEdrAlertIsolationOutcome
                 */
                ModifyEdrAlertIsolationOutcome ModifyEdrAlertIsolation(const Model::ModifyEdrAlertIsolationRequest &request);
                void ModifyEdrAlertIsolationAsync(const Model::ModifyEdrAlertIsolationRequest& request, const ModifyEdrAlertIsolationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdrAlertIsolationOutcomeCallable ModifyEdrAlertIsolationCallable(const Model::ModifyEdrAlertIsolationRequest& request);

                /**
                 *Permanently ignore EDR multi-behavior alarms. Add the host and rule corresponding to the alarm to the AI-Link permanent ignore allowlist. Subsequently, alarms of the same type will be automatically discarded.
                 * @param req ModifyEdrAlertPermanentIgnoreRequest
                 * @return ModifyEdrAlertPermanentIgnoreOutcome
                 */
                ModifyEdrAlertPermanentIgnoreOutcome ModifyEdrAlertPermanentIgnore(const Model::ModifyEdrAlertPermanentIgnoreRequest &request);
                void ModifyEdrAlertPermanentIgnoreAsync(const Model::ModifyEdrAlertPermanentIgnoreRequest& request, const ModifyEdrAlertPermanentIgnoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdrAlertPermanentIgnoreOutcomeCallable ModifyEdrAlertPermanentIgnoreCallable(const Model::ModifyEdrAlertPermanentIgnoreRequest& request);

                /**
                 *Handle the status of an EDR alert
                 * @param req ModifyEdrAlertStatusRequest
                 * @return ModifyEdrAlertStatusOutcome
                 */
                ModifyEdrAlertStatusOutcome ModifyEdrAlertStatus(const Model::ModifyEdrAlertStatusRequest &request);
                void ModifyEdrAlertStatusAsync(const Model::ModifyEdrAlertStatusRequest& request, const ModifyEdrAlertStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdrAlertStatusOutcomeCallable ModifyEdrAlertStatusCallable(const Model::ModifyEdrAlertStatusRequest& request);

                /**
                 *This API is used to modify the CIDR block exclusion settings for log collection. IPs, IP ranges, and CIDR formats are supported, with up to 100 entries.
                 * @param req ModifyEdrExcludeNetworkSegmentsRequest
                 * @return ModifyEdrExcludeNetworkSegmentsOutcome
                 */
                ModifyEdrExcludeNetworkSegmentsOutcome ModifyEdrExcludeNetworkSegments(const Model::ModifyEdrExcludeNetworkSegmentsRequest &request);
                void ModifyEdrExcludeNetworkSegmentsAsync(const Model::ModifyEdrExcludeNetworkSegmentsRequest& request, const ModifyEdrExcludeNetworkSegmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdrExcludeNetworkSegmentsOutcomeCallable ModifyEdrExcludeNetworkSegmentsCallable(const Model::ModifyEdrExcludeNetworkSegmentsRequest& request);

                /**
                 *This API is used to modify path configurations for application log collection.
                 * @param req ModifyEdrLogCollectPathRequest
                 * @return ModifyEdrLogCollectPathOutcome
                 */
                ModifyEdrLogCollectPathOutcome ModifyEdrLogCollectPath(const Model::ModifyEdrLogCollectPathRequest &request);
                void ModifyEdrLogCollectPathAsync(const Model::ModifyEdrLogCollectPathRequest& request, const ModifyEdrLogCollectPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdrLogCollectPathOutcomeCallable ModifyEdrLogCollectPathCallable(const Model::ModifyEdrLogCollectPathRequest& request);

                /**
                 *Update automatic cloud boundary tagging rules
                 * @param req ModifyExposureAutoTagRuleRequest
                 * @return ModifyExposureAutoTagRuleOutcome
                 */
                ModifyExposureAutoTagRuleOutcome ModifyExposureAutoTagRule(const Model::ModifyExposureAutoTagRuleRequest &request);
                void ModifyExposureAutoTagRuleAsync(const Model::ModifyExposureAutoTagRuleRequest& request, const ModifyExposureAutoTagRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyExposureAutoTagRuleOutcomeCallable ModifyExposureAutoTagRuleCallable(const Model::ModifyExposureAutoTagRuleRequest& request);

                /**
                 *Enable or disable automatic cloud boundary tagging rules.
                 * @param req ModifyExposureAutoTagRuleStatusRequest
                 * @return ModifyExposureAutoTagRuleStatusOutcome
                 */
                ModifyExposureAutoTagRuleStatusOutcome ModifyExposureAutoTagRuleStatus(const Model::ModifyExposureAutoTagRuleStatusRequest &request);
                void ModifyExposureAutoTagRuleStatusAsync(const Model::ModifyExposureAutoTagRuleStatusRequest& request, const ModifyExposureAutoTagRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyExposureAutoTagRuleStatusOutcomeCallable ModifyExposureAutoTagRuleStatusCallable(const Model::ModifyExposureAutoTagRuleStatusRequest& request);

                /**
                 *Update custom tags for cloud boundaries
                 * @param req ModifyExposureTagRequest
                 * @return ModifyExposureTagOutcome
                 */
                ModifyExposureTagOutcome ModifyExposureTag(const Model::ModifyExposureTagRequest &request);
                void ModifyExposureTagAsync(const Model::ModifyExposureTagRequest& request, const ModifyExposureTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyExposureTagOutcomeCallable ModifyExposureTagCallable(const Model::ModifyExposureTagRequest& request);

                /**
                 *Modify the storage cycle of IaC detection integration tokens.
                 * @param req ModifyIaCTokenPeriodRequest
                 * @return ModifyIaCTokenPeriodOutcome
                 */
                ModifyIaCTokenPeriodOutcome ModifyIaCTokenPeriod(const Model::ModifyIaCTokenPeriodRequest &request);
                void ModifyIaCTokenPeriodAsync(const Model::ModifyIaCTokenPeriodRequest& request, const ModifyIaCTokenPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIaCTokenPeriodOutcomeCallable ModifyIaCTokenPeriodCallable(const Model::ModifyIaCTokenPeriodRequest& request);

                /**
                 *Modify image repository information.
                 * @param req ModifyImageRegistryRequest
                 * @return ModifyImageRegistryOutcome
                 */
                ModifyImageRegistryOutcome ModifyImageRegistry(const Model::ModifyImageRegistryRequest &request);
                void ModifyImageRegistryAsync(const Model::ModifyImageRegistryRequest& request, const ModifyImageRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageRegistryOutcomeCallable ModifyImageRegistryCallable(const Model::ModifyImageRegistryRequest& request);

                /**
                 *Modify the scheduled scan task configuration of an image repository
                 * @param req ModifyImageRegistryTimedScanTaskConfigRequest
                 * @return ModifyImageRegistryTimedScanTaskConfigOutcome
                 */
                ModifyImageRegistryTimedScanTaskConfigOutcome ModifyImageRegistryTimedScanTaskConfig(const Model::ModifyImageRegistryTimedScanTaskConfigRequest &request);
                void ModifyImageRegistryTimedScanTaskConfigAsync(const Model::ModifyImageRegistryTimedScanTaskConfigRequest& request, const ModifyImageRegistryTimedScanTaskConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageRegistryTimedScanTaskConfigOutcomeCallable ModifyImageRegistryTimedScanTaskConfigCallable(const Model::ModifyImageRegistryTimedScanTaskConfigRequest& request);

                /**
                 *Modifies the Sensitive Information Allowlist of a Container Image
                 * @param req ModifyImageSensitiveWhitelistRequest
                 * @return ModifyImageSensitiveWhitelistOutcome
                 */
                ModifyImageSensitiveWhitelistOutcome ModifyImageSensitiveWhitelist(const Model::ModifyImageSensitiveWhitelistRequest &request);
                void ModifyImageSensitiveWhitelistAsync(const Model::ModifyImageSensitiveWhitelistRequest& request, const ModifyImageSensitiveWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageSensitiveWhitelistOutcomeCallable ModifyImageSensitiveWhitelistCallable(const Model::ModifyImageSensitiveWhitelistRequest& request);

                /**
                 *This API is used to query asset database information.
                 * @param req ModifyImageVirusWhitelistRequest
                 * @return ModifyImageVirusWhitelistOutcome
                 */
                ModifyImageVirusWhitelistOutcome ModifyImageVirusWhitelist(const Model::ModifyImageVirusWhitelistRequest &request);
                void ModifyImageVirusWhitelistAsync(const Model::ModifyImageVirusWhitelistRequest& request, const ModifyImageVirusWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageVirusWhitelistOutcomeCallable ModifyImageVirusWhitelistCallable(const Model::ModifyImageVirusWhitelistRequest& request);

                /**
                 *Modifies the vulnerability allowlist of a container image.
                 * @param req ModifyImageVulWhitelistRequest
                 * @return ModifyImageVulWhitelistOutcome
                 */
                ModifyImageVulWhitelistOutcome ModifyImageVulWhitelist(const Model::ModifyImageVulWhitelistRequest &request);
                void ModifyImageVulWhitelistAsync(const Model::ModifyImageVulWhitelistRequest& request, const ModifyImageVulWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageVulWhitelistOutcomeCallable ModifyImageVulWhitelistCallable(const Model::ModifyImageVulWhitelistRequest& request);

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
                 *Modify the remark information of a host asset
                 * @param req ModifyMachineRemarkRequest
                 * @return ModifyMachineRemarkOutcome
                 */
                ModifyMachineRemarkOutcome ModifyMachineRemark(const Model::ModifyMachineRemarkRequest &request);
                void ModifyMachineRemarkAsync(const Model::ModifyMachineRemarkRequest& request, const ModifyMachineRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMachineRemarkOutcomeCallable ModifyMachineRemarkCallable(const Model::ModifyMachineRemarkRequest& request);

                /**
                 *This API is used to modify host login methods in batches.
                 * @param req ModifyMachinesLoginTypeRequest
                 * @return ModifyMachinesLoginTypeOutcome
                 */
                ModifyMachinesLoginTypeOutcome ModifyMachinesLoginType(const Model::ModifyMachinesLoginTypeRequest &request);
                void ModifyMachinesLoginTypeAsync(const Model::ModifyMachinesLoginTypeRequest& request, const ModifyMachinesLoginTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMachinesLoginTypeOutcomeCallable ModifyMachinesLoginTypeCallable(const Model::ModifyMachinesLoginTypeRequest& request);

                /**
                 *Modify the scheduled scan configuration for malicious file scan, including scan cycle, detection mode, asset scope, engine selection, and quarantine configuration.
                 * @param req ModifyMalwareTimingScanSettingsRequest
                 * @return ModifyMalwareTimingScanSettingsOutcome
                 */
                ModifyMalwareTimingScanSettingsOutcome ModifyMalwareTimingScanSettings(const Model::ModifyMalwareTimingScanSettingsRequest &request);
                void ModifyMalwareTimingScanSettingsAsync(const Model::ModifyMalwareTimingScanSettingsRequest& request, const ModifyMalwareTimingScanSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMalwareTimingScanSettingsOutcomeCallable ModifyMalwareTimingScanSettingsCallable(const Model::ModifyMalwareTimingScanSettingsRequest& request);

                /**
                 *This API is used to add or update the global configuration for NFS scanning.
                 * @param req ModifyNFSScanConfRequest
                 * @return ModifyNFSScanConfOutcome
                 */
                ModifyNFSScanConfOutcome ModifyNFSScanConf(const Model::ModifyNFSScanConfRequest &request);
                void ModifyNFSScanConfAsync(const Model::ModifyNFSScanConfRequest& request, const ModifyNFSScanConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNFSScanConfOutcomeCallable ModifyNFSScanConfCallable(const Model::ModifyNFSScanConfRequest& request);

                /**
                 *This API is used to disable process guard.
                 * @param req ModifyNFSScanHostRequest
                 * @return ModifyNFSScanHostOutcome
                 */
                ModifyNFSScanHostOutcome ModifyNFSScanHost(const Model::ModifyNFSScanHostRequest &request);
                void ModifyNFSScanHostAsync(const Model::ModifyNFSScanHostRequest& request, const ModifyNFSScanHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNFSScanHostOutcomeCallable ModifyNFSScanHostCallable(const Model::ModifyNFSScanHostRequest& request);

                /**
                 *Modify the network attack detection switch and asset scope configuration.
                 * @param req ModifyNetAttackSettingRequest
                 * @return ModifyNetAttackSettingOutcome
                 */
                ModifyNetAttackSettingOutcome ModifyNetAttackSetting(const Model::ModifyNetAttackSettingRequest &request);
                void ModifyNetAttackSettingAsync(const Model::ModifyNetAttackSettingRequest& request, const ModifyNetAttackSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetAttackSettingOutcomeCallable ModifyNetAttackSettingCallable(const Model::ModifyNetAttackSettingRequest& request);

                /**
                 *This API is used to modify client offline duration.
                 * @param req ModifyNotifyAgentOfflineDurationRequest
                 * @return ModifyNotifyAgentOfflineDurationOutcome
                 */
                ModifyNotifyAgentOfflineDurationOutcome ModifyNotifyAgentOfflineDuration(const Model::ModifyNotifyAgentOfflineDurationRequest &request);
                void ModifyNotifyAgentOfflineDurationAsync(const Model::ModifyNotifyAgentOfflineDurationRequest& request, const ModifyNotifyAgentOfflineDurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNotifyAgentOfflineDurationOutcomeCallable ModifyNotifyAgentOfflineDurationCallable(const Model::ModifyNotifyAgentOfflineDurationRequest& request);

                /**
                 *Modify the asset scope configuration for notifications
                 * @param req ModifyNotifyAssetConfigRequest
                 * @return ModifyNotifyAssetConfigOutcome
                 */
                ModifyNotifyAssetConfigOutcome ModifyNotifyAssetConfig(const Model::ModifyNotifyAssetConfigRequest &request);
                void ModifyNotifyAssetConfigAsync(const Model::ModifyNotifyAssetConfigRequest& request, const ModifyNotifyAssetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNotifyAssetConfigOutcomeCallable ModifyNotifyAssetConfigCallable(const Model::ModifyNotifyAssetConfigRequest& request);

                /**
                 *Modify the member account for notification.
                 * @param req ModifyNotifyMemberRequest
                 * @return ModifyNotifyMemberOutcome
                 */
                ModifyNotifyMemberOutcome ModifyNotifyMember(const Model::ModifyNotifyMemberRequest &request);
                void ModifyNotifyMemberAsync(const Model::ModifyNotifyMemberRequest& request, const ModifyNotifyMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNotifyMemberOutcomeCallable ModifyNotifyMemberCallable(const Model::ModifyNotifyMemberRequest& request);

                /**
                 *Modifies notification settings
                 * @param req ModifyNotifySettingRequest
                 * @return ModifyNotifySettingOutcome
                 */
                ModifyNotifySettingOutcome ModifyNotifySetting(const Model::ModifyNotifySettingRequest &request);
                void ModifyNotifySettingAsync(const Model::ModifyNotifySettingRequest& request, const ModifyNotifySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNotifySettingOutcomeCallable ModifyNotifySettingCallable(const Model::ModifyNotifySettingRequest& request);

                /**
                 *Modify notification settings
                 * @param req ModifyNotifySettingAkRequest
                 * @return ModifyNotifySettingAkOutcome
                 */
                ModifyNotifySettingAkOutcome ModifyNotifySettingAk(const Model::ModifyNotifySettingAkRequest &request);
                void ModifyNotifySettingAkAsync(const Model::ModifyNotifySettingAkRequest& request, const ModifyNotifySettingAkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNotifySettingAkOutcomeCallable ModifyNotifySettingAkCallable(const Model::ModifyNotifySettingAkRequest& request);

                /**
                 *Modify alarm center notification advanced configuration
                 * @param req ModifyNotifySettingAlertRequest
                 * @return ModifyNotifySettingAlertOutcome
                 */
                ModifyNotifySettingAlertOutcome ModifyNotifySettingAlert(const Model::ModifyNotifySettingAlertRequest &request);
                void ModifyNotifySettingAlertAsync(const Model::ModifyNotifySettingAlertRequest& request, const ModifyNotifySettingAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNotifySettingAlertOutcomeCallable ModifyNotifySettingAlertCallable(const Model::ModifyNotifySettingAlertRequest& request);

                /**
                 *Modify Group Account Status
                 * @param req ModifyOrganizationAccountStatusRequest
                 * @return ModifyOrganizationAccountStatusOutcome
                 */
                ModifyOrganizationAccountStatusOutcome ModifyOrganizationAccountStatus(const Model::ModifyOrganizationAccountStatusRequest &request);
                void ModifyOrganizationAccountStatusAsync(const Model::ModifyOrganizationAccountStatusRequest& request, const ModifyOrganizationAccountStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOrganizationAccountStatusOutcomeCallable ModifyOrganizationAccountStatusCallable(const Model::ModifyOrganizationAccountStatusRequest& request);

                /**
                 *Modify the auto-scaling configuration (multi-module and expandable; only the CWP module is available in the current period).

Auto-scaling is an external user-oriented concept equivalent to automatic purchase (auto_repurchase) at the underlying layer: when an account has new assets, the desired authorization is automatically purchased.

Supplemental description:
1. In the current period, only the HostConfig module is implemented for host security. Subsequent scalability allows named module fields for container security and AI-Agent security. Configuration fields of each module can be heterogeneous.
2. Partial update semantics: An empty module object indicates that the module is not modified, and an empty field in the module indicates that this field is not modified;
3. HostConfig.Switch linkage map: auto_repurchase_switch; auto_bind_switch is always on and not modified by this API.
4. Auto renewal (renew_flag) is not modified by this API; to query the limit/amount, call DescribeLicenseStatus.
5. The top auto scaling global switch state is aggregated by the frontend based on each module switch. The backend does not store or return the global switch.
                 * @param req ModifyPayConfigRequest
                 * @return ModifyPayConfigOutcome
                 */
                ModifyPayConfigOutcome ModifyPayConfig(const Model::ModifyPayConfigRequest &request);
                void ModifyPayConfigAsync(const Model::ModifyPayConfigRequest& request, const ModifyPayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPayConfigOutcomeCallable ModifyPayConfigCallable(const Model::ModifyPayConfigRequest& request);

                /**
                 *This API is used to configure protection settings for the major event protection package.
                 * @param req ModifyProtectionSettingRequest
                 * @return ModifyProtectionSettingOutcome
                 */
                ModifyProtectionSettingOutcome ModifyProtectionSetting(const Model::ModifyProtectionSettingRequest &request);
                void ModifyProtectionSettingAsync(const Model::ModifyProtectionSettingRequest& request, const ModifyProtectionSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProtectionSettingOutcomeCallable ModifyProtectionSettingCallable(const Model::ModifyProtectionSettingRequest& request);

                /**
                 *Bind an important period guarantee protection authorization package.
                 * @param req ModifyRaspLicenseBindsRequest
                 * @return ModifyRaspLicenseBindsOutcome
                 */
                ModifyRaspLicenseBindsOutcome ModifyRaspLicenseBinds(const Model::ModifyRaspLicenseBindsRequest &request);
                void ModifyRaspLicenseBindsAsync(const Model::ModifyRaspLicenseBindsRequest& request, const ModifyRaspLicenseBindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRaspLicenseBindsOutcomeCallable ModifyRaspLicenseBindsCallable(const Model::ModifyRaspLicenseBindsRequest& request);

                /**
                 *This API is used to modify the intranet alert and asset scope configuration for rebound Shell.
                 * @param req ModifyReverseShellSystemPolicyConfigRequest
                 * @return ModifyReverseShellSystemPolicyConfigOutcome
                 */
                ModifyReverseShellSystemPolicyConfigOutcome ModifyReverseShellSystemPolicyConfig(const Model::ModifyReverseShellSystemPolicyConfigRequest &request);
                void ModifyReverseShellSystemPolicyConfigAsync(const Model::ModifyReverseShellSystemPolicyConfigRequest& request, const ModifyReverseShellSystemPolicyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyReverseShellSystemPolicyConfigOutcomeCallable ModifyReverseShellSystemPolicyConfigCallable(const Model::ModifyReverseShellSystemPolicyConfigRequest& request);

                /**
                 *Modify Risk Center Risk Status
                 * @param req ModifyRiskCenterRiskStatusRequest
                 * @return ModifyRiskCenterRiskStatusOutcome
                 */
                ModifyRiskCenterRiskStatusOutcome ModifyRiskCenterRiskStatus(const Model::ModifyRiskCenterRiskStatusRequest &request);
                void ModifyRiskCenterRiskStatusAsync(const Model::ModifyRiskCenterRiskStatusRequest& request, const ModifyRiskCenterRiskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRiskCenterRiskStatusOutcomeCallable ModifyRiskCenterRiskStatusCallable(const Model::ModifyRiskCenterRiskStatusRequest& request);

                /**
                 *Modify Risk Center Scan Task
                 * @param req ModifyRiskCenterScanTaskRequest
                 * @return ModifyRiskCenterScanTaskOutcome
                 */
                ModifyRiskCenterScanTaskOutcome ModifyRiskCenterScanTask(const Model::ModifyRiskCenterScanTaskRequest &request);
                void ModifyRiskCenterScanTaskAsync(const Model::ModifyRiskCenterScanTaskRequest& request, const ModifyRiskCenterScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRiskCenterScanTaskOutcomeCallable ModifyRiskCenterScanTaskCallable(const Model::ModifyRiskCenterScanTaskRequest& request);

                /**
                 *Update the periodic scanning plan
                 * @param req ModifyRiskScanCronConfigRequest
                 * @return ModifyRiskScanCronConfigOutcome
                 */
                ModifyRiskScanCronConfigOutcome ModifyRiskScanCronConfig(const Model::ModifyRiskScanCronConfigRequest &request);
                void ModifyRiskScanCronConfigAsync(const Model::ModifyRiskScanCronConfigRequest& request, const ModifyRiskScanCronConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRiskScanCronConfigOutcomeCallable ModifyRiskScanCronConfigCallable(const Model::ModifyRiskScanCronConfigRequest& request);

                /**
                 *Modify an existing ACL user rule. Fields not passed retain their original values, and partial field update is supported.
                 * @param req ModifySandboxACLRuleRequest
                 * @return ModifySandboxACLRuleOutcome
                 */
                ModifySandboxACLRuleOutcome ModifySandboxACLRule(const Model::ModifySandboxACLRuleRequest &request);
                void ModifySandboxACLRuleAsync(const Model::ModifySandboxACLRuleRequest& request, const ModifySandboxACLRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySandboxACLRuleOutcomeCallable ModifySandboxACLRuleCallable(const Model::ModifySandboxACLRuleRequest& request);

                /**
                 *Batch switch the enable/disable status of ACL user rules. If any rule does not exist, belongs to another tenant, or has been deleted, an error is returned for the entirety.
                 * @param req ModifySandboxACLRuleStatusRequest
                 * @return ModifySandboxACLRuleStatusOutcome
                 */
                ModifySandboxACLRuleStatusOutcome ModifySandboxACLRuleStatus(const Model::ModifySandboxACLRuleStatusRequest &request);
                void ModifySandboxACLRuleStatusAsync(const Model::ModifySandboxACLRuleStatusRequest& request, const ModifySandboxACLRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySandboxACLRuleStatusOutcomeCallable ModifySandboxACLRuleStatusCallable(const Model::ModifySandboxACLRuleStatusRequest& request);

                /**
                 *Batch update traffic sandbox alarms (overwrite ACL, DLP, and LLM audit). Locate the alarm source by AlertType + BelongAssetType. Status supports HANDLED / IGNORE to modify status, as well as DELETE to delete. If any alarm ID does not exist or belongs to another tenant, an error is returned overall. Note: Whitelisting (PASS) is not handled by this interface. It is triggered by Create/Modify***Rule writing back through AlertID.
                 * @param req ModifySandboxAlertStatusRequest
                 * @return ModifySandboxAlertStatusOutcome
                 */
                ModifySandboxAlertStatusOutcome ModifySandboxAlertStatus(const Model::ModifySandboxAlertStatusRequest &request);
                void ModifySandboxAlertStatusAsync(const Model::ModifySandboxAlertStatusRequest& request, const ModifySandboxAlertStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySandboxAlertStatusOutcomeCallable ModifySandboxAlertStatusCallable(const Model::ModifySandboxAlertStatusRequest& request);

                /**
                 *Modify an existing DLP user rule. Fields not passed retain their original values, and partial field update is supported. BelongAssetType cannot be modified.
                 * @param req ModifySandboxDLPRuleRequest
                 * @return ModifySandboxDLPRuleOutcome
                 */
                ModifySandboxDLPRuleOutcome ModifySandboxDLPRule(const Model::ModifySandboxDLPRuleRequest &request);
                void ModifySandboxDLPRuleAsync(const Model::ModifySandboxDLPRuleRequest& request, const ModifySandboxDLPRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySandboxDLPRuleOutcomeCallable ModifySandboxDLPRuleCallable(const Model::ModifySandboxDLPRuleRequest& request);

                /**
                 *Batch switch the enable/disable status of DLP user rules. If any rule does not exist, belongs to another tenant, or has been deleted, an error is returned for the entirety.
                 * @param req ModifySandboxDLPRuleStatusRequest
                 * @return ModifySandboxDLPRuleStatusOutcome
                 */
                ModifySandboxDLPRuleStatusOutcome ModifySandboxDLPRuleStatus(const Model::ModifySandboxDLPRuleStatusRequest &request);
                void ModifySandboxDLPRuleStatusAsync(const Model::ModifySandboxDLPRuleStatusRequest& request, const ModifySandboxDLPRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySandboxDLPRuleStatusOutcomeCallable ModifySandboxDLPRuleStatusCallable(const Model::ModifySandboxDLPRuleStatusRequest& request);

                /**
                 *Modify command sandbox file access rule
                 * @param req ModifySandboxFileRuleRequest
                 * @return ModifySandboxFileRuleOutcome
                 */
                ModifySandboxFileRuleOutcome ModifySandboxFileRule(const Model::ModifySandboxFileRuleRequest &request);
                void ModifySandboxFileRuleAsync(const Model::ModifySandboxFileRuleRequest& request, const ModifySandboxFileRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySandboxFileRuleOutcomeCallable ModifySandboxFileRuleCallable(const Model::ModifySandboxFileRuleRequest& request);

                /**
                 *Batch enable or disable command sandbox file access rules.
                 * @param req ModifySandboxFileRuleStatusRequest
                 * @return ModifySandboxFileRuleStatusOutcome
                 */
                ModifySandboxFileRuleStatusOutcome ModifySandboxFileRuleStatus(const Model::ModifySandboxFileRuleStatusRequest &request);
                void ModifySandboxFileRuleStatusAsync(const Model::ModifySandboxFileRuleStatusRequest& request, const ModifySandboxFileRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySandboxFileRuleStatusOutcomeCallable ModifySandboxFileRuleStatusCallable(const Model::ModifySandboxFileRuleStatusRequest& request);

                /**
                 *Modify an existing LLM audit user rule. Fields not passed retain their original values, and partial field update is supported.
                 * @param req ModifySandboxLLMAuditRuleRequest
                 * @return ModifySandboxLLMAuditRuleOutcome
                 */
                ModifySandboxLLMAuditRuleOutcome ModifySandboxLLMAuditRule(const Model::ModifySandboxLLMAuditRuleRequest &request);
                void ModifySandboxLLMAuditRuleAsync(const Model::ModifySandboxLLMAuditRuleRequest& request, const ModifySandboxLLMAuditRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySandboxLLMAuditRuleOutcomeCallable ModifySandboxLLMAuditRuleCallable(const Model::ModifySandboxLLMAuditRuleRequest& request);

                /**
                 *Batch switch the enable or disable status of LLM audit user rules. If any rule does not exist, belongs to another tenant, or has been deleted, an error is returned overall.
                 * @param req ModifySandboxLLMAuditRuleStatusRequest
                 * @return ModifySandboxLLMAuditRuleStatusOutcome
                 */
                ModifySandboxLLMAuditRuleStatusOutcome ModifySandboxLLMAuditRuleStatus(const Model::ModifySandboxLLMAuditRuleStatusRequest &request);
                void ModifySandboxLLMAuditRuleStatusAsync(const Model::ModifySandboxLLMAuditRuleStatusRequest& request, const ModifySandboxLLMAuditRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySandboxLLMAuditRuleStatusOutcomeCallable ModifySandboxLLMAuditRuleStatusCallable(const Model::ModifySandboxLLMAuditRuleStatusRequest& request);

                /**
                 *Modify a security scoring rule. You need to pass in a complete rule set.
                 * @param req ModifySecurityScoreRuleRequest
                 * @return ModifySecurityScoreRuleOutcome
                 */
                ModifySecurityScoreRuleOutcome ModifySecurityScoreRule(const Model::ModifySecurityScoreRuleRequest &request);
                void ModifySecurityScoreRuleAsync(const Model::ModifySecurityScoreRuleRequest& request, const ModifySecurityScoreRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityScoreRuleOutcomeCallable ModifySecurityScoreRuleCallable(const Model::ModifySecurityScoreRuleRequest& request);

                /**
                 *Edit the ak monitoring account.
                 * @param req ModifyShareUserAKRequest
                 * @return ModifyShareUserAKOutcome
                 */
                ModifyShareUserAKOutcome ModifyShareUserAK(const Model::ModifyShareUserAKRequest &request);
                void ModifyShareUserAKAsync(const Model::ModifyShareUserAKRequest& request, const ModifyShareUserAKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyShareUserAKOutcomeCallable ModifyShareUserAKCallable(const Model::ModifyShareUserAKRequest& request);

                /**
                 *Edit a CSPM shared account
                 * @param req ModifyShareUserCSPMRequest
                 * @return ModifyShareUserCSPMOutcome
                 */
                ModifyShareUserCSPMOutcome ModifyShareUserCSPM(const Model::ModifyShareUserCSPMRequest &request);
                void ModifyShareUserCSPMAsync(const Model::ModifyShareUserCSPMRequest& request, const ModifyShareUserCSPMAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyShareUserCSPMOutcomeCallable ModifyShareUserCSPMCallable(const Model::ModifyShareUserCSPMRequest& request);

                /**
                 *Edit dspm monitored account
                 * @param req ModifyShareUserDspmRequest
                 * @return ModifyShareUserDspmOutcome
                 */
                ModifyShareUserDspmOutcome ModifyShareUserDspm(const Model::ModifyShareUserDspmRequest &request);
                void ModifyShareUserDspmAsync(const Model::ModifyShareUserDspmRequest& request, const ModifyShareUserDspmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyShareUserDspmOutcomeCallable ModifyShareUserDspmCallable(const Model::ModifyShareUserDspmRequest& request);

                /**
                 *Batch modify the processing status of Skill security detection alarms.
                 * @param req ModifySkillScanAlertStatusRequest
                 * @return ModifySkillScanAlertStatusOutcome
                 */
                ModifySkillScanAlertStatusOutcome ModifySkillScanAlertStatus(const Model::ModifySkillScanAlertStatusRequest &request);
                void ModifySkillScanAlertStatusAsync(const Model::ModifySkillScanAlertStatusRequest& request, const ModifySkillScanAlertStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySkillScanAlertStatusOutcomeCallable ModifySkillScanAlertStatusCallable(const Model::ModifySkillScanAlertStatusRequest& request);

                /**
                 *Update the switch of a custom policy
                 * @param req ModifyUebaRuleSwitchRequest
                 * @return ModifyUebaRuleSwitchOutcome
                 */
                ModifyUebaRuleSwitchOutcome ModifyUebaRuleSwitch(const Model::ModifyUebaRuleSwitchRequest &request);
                void ModifyUebaRuleSwitchAsync(const Model::ModifyUebaRuleSwitchRequest& request, const ModifyUebaRuleSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUebaRuleSwitchOutcomeCallable ModifyUebaRuleSwitchCallable(const Model::ModifyUebaRuleSwitchRequest& request);

                /**
                 *This API is used to modify vulnerability scanning (period scanning).
                 * @param req ModifyVulScanPeriodicRequest
                 * @return ModifyVulScanPeriodicOutcome
                 */
                ModifyVulScanPeriodicOutcome ModifyVulScanPeriodic(const Model::ModifyVulScanPeriodicRequest &request);
                void ModifyVulScanPeriodicAsync(const Model::ModifyVulScanPeriodicRequest& request, const ModifyVulScanPeriodicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVulScanPeriodicOutcomeCallable ModifyVulScanPeriodicCallable(const Model::ModifyVulScanPeriodicRequest& request);

                /**
                 *This API is used to modify the vulnerability allowlist configuration.
                 * @param req ModifyVulWhitelistConfigRequest
                 * @return ModifyVulWhitelistConfigOutcome
                 */
                ModifyVulWhitelistConfigOutcome ModifyVulWhitelistConfig(const Model::ModifyVulWhitelistConfigRequest &request);
                void ModifyVulWhitelistConfigAsync(const Model::ModifyVulWhitelistConfigRequest& request, const ModifyVulWhitelistConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVulWhitelistConfigOutcomeCallable ModifyVulWhitelistConfigCallable(const Model::ModifyVulWhitelistConfigRequest& request);

                /**
                 *This API is used to modify the vulnerability allowlist switch.
                 * @param req ModifyVulWhitelistSwitchRequest
                 * @return ModifyVulWhitelistSwitchOutcome
                 */
                ModifyVulWhitelistSwitchOutcome ModifyVulWhitelistSwitch(const Model::ModifyVulWhitelistSwitchRequest &request);
                void ModifyVulWhitelistSwitchAsync(const Model::ModifyVulWhitelistSwitchRequest& request, const ModifyVulWhitelistSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVulWhitelistSwitchOutcomeCallable ModifyVulWhitelistSwitchCallable(const Model::ModifyVulWhitelistSwitchRequest& request);

                /**
                 *Add or modify a notification policy. ID > 0 means modification; ID = 0 or not passed means adding new. When MemberAppIds is configured as empty, the policy only acts on current root account events; when not empty, it acts on the self account + listed member accounts at the same time.
                 * @param req ModifyWebhookPolicyRequest
                 * @return ModifyWebhookPolicyOutcome
                 */
                ModifyWebhookPolicyOutcome ModifyWebhookPolicy(const Model::ModifyWebhookPolicyRequest &request);
                void ModifyWebhookPolicyAsync(const Model::ModifyWebhookPolicyRequest& request, const ModifyWebhookPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebhookPolicyOutcomeCallable ModifyWebhookPolicyCallable(const Model::ModifyWebhookPolicyRequest& request);

                /**
                 *Switch the enable status of the notification policy.
                 * @param req ModifyWebhookPolicyStatusRequest
                 * @return ModifyWebhookPolicyStatusOutcome
                 */
                ModifyWebhookPolicyStatusOutcome ModifyWebhookPolicyStatus(const Model::ModifyWebhookPolicyStatusRequest &request);
                void ModifyWebhookPolicyStatusAsync(const Model::ModifyWebhookPolicyStatusRequest& request, const ModifyWebhookPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebhookPolicyStatusOutcomeCallable ModifyWebhookPolicyStatusCallable(const Model::ModifyWebhookPolicyStatusRequest& request);

                /**
                 *Add or modify a receiving robot. ID > 0 means modifying an existing record; ID = 0 or not passed means adding new. The robot type is determined by the Type field. When Type=WEBHOOK, WebhookAddr is required. When Type=SCF, SCFRegion/Namespace/FunctionName/FunctionVersion/Alias/MaxWaitSeconds are all required. Type is not allowed to be changed during modification.
                 * @param req ModifyWebhookReceiverRequest
                 * @return ModifyWebhookReceiverOutcome
                 */
                ModifyWebhookReceiverOutcome ModifyWebhookReceiver(const Model::ModifyWebhookReceiverRequest &request);
                void ModifyWebhookReceiverAsync(const Model::ModifyWebhookReceiverRequest& request, const ModifyWebhookReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebhookReceiverOutcomeCallable ModifyWebhookReceiverCallable(const Model::ModifyWebhookReceiverRequest& request);

                /**
                 *Risk operation example
                 * @param req OperateRiskRequest
                 * @return OperateRiskOutcome
                 */
                OperateRiskOutcome OperateRisk(const Model::OperateRiskRequest &request);
                void OperateRiskAsync(const Model::OperateRiskRequest& request, const OperateRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OperateRiskOutcomeCallable OperateRiskCallable(const Model::OperateRiskRequest& request);

                /**
                 *Custom risk rule
                 * @param req OperateRiskRulePolicyRequest
                 * @return OperateRiskRulePolicyOutcome
                 */
                OperateRiskRulePolicyOutcome OperateRiskRulePolicy(const Model::OperateRiskRulePolicyRequest &request);
                void OperateRiskRulePolicyAsync(const Model::OperateRiskRulePolicyRequest& request, const OperateRiskRulePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OperateRiskRulePolicyOutcomeCallable OperateRiskRulePolicyCallable(const Model::OperateRiskRulePolicyRequest& request);

                /**
                 *Reset the Dspm asset account password.
                 * @param req ResetDspmAssetAccountPasswordRequest
                 * @return ResetDspmAssetAccountPasswordOutcome
                 */
                ResetDspmAssetAccountPasswordOutcome ResetDspmAssetAccountPassword(const Model::ResetDspmAssetAccountPasswordRequest &request);
                void ResetDspmAssetAccountPasswordAsync(const Model::ResetDspmAssetAccountPasswordRequest& request, const ResetDspmAssetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetDspmAssetAccountPasswordOutcomeCallable ResetDspmAssetAccountPasswordCallable(const Model::ResetDspmAssetAccountPasswordRequest& request);

                /**
                 *RetryExportLog
                 * @param req RetryDspmExportLogRequest
                 * @return RetryDspmExportLogOutcome
                 */
                RetryDspmExportLogOutcome RetryDspmExportLog(const Model::RetryDspmExportLogRequest &request);
                void RetryDspmExportLogAsync(const Model::RetryDspmExportLogRequest& request, const RetryDspmExportLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryDspmExportLogOutcomeCallable RetryDspmExportLogCallable(const Model::RetryDspmExportLogRequest& request);

                /**
                 *Restore a Dspm asset account.
                 * @param req RevertDspmAssetAccountRequest
                 * @return RevertDspmAssetAccountOutcome
                 */
                RevertDspmAssetAccountOutcome RevertDspmAssetAccount(const Model::RevertDspmAssetAccountRequest &request);
                void RevertDspmAssetAccountAsync(const Model::RevertDspmAssetAccountRequest& request, const RevertDspmAssetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevertDspmAssetAccountOutcomeCallable RevertDspmAssetAccountCallable(const Model::RevertDspmAssetAccountRequest& request);

                /**
                 *This API is used to trigger a rescan of some detection items for a single asset.
                 * @param req ScanBaselineAssetItemListRequest
                 * @return ScanBaselineAssetItemListOutcome
                 */
                ScanBaselineAssetItemListOutcome ScanBaselineAssetItemList(const Model::ScanBaselineAssetItemListRequest &request);
                void ScanBaselineAssetItemListAsync(const Model::ScanBaselineAssetItemListRequest& request, const ScanBaselineAssetItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanBaselineAssetItemListOutcomeCallable ScanBaselineAssetItemListCallable(const Model::ScanBaselineAssetItemListRequest& request);

                /**
                 *This API is used to rescan detection items under a specified policy.
                 * @param req ScanBaselineItemListRequest
                 * @return ScanBaselineItemListOutcome
                 */
                ScanBaselineItemListOutcome ScanBaselineItemList(const Model::ScanBaselineItemListRequest &request);
                void ScanBaselineItemListAsync(const Model::ScanBaselineItemListRequest& request, const ScanBaselineItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanBaselineItemListOutcomeCallable ScanBaselineItemListCallable(const Model::ScanBaselineItemListRequest& request);

                /**
                 *Trigger a holistic rescan for a batch of baseline policies via the one-click scan entry on the strategy list page. All assets within the policy hit scope will be rescanned.
                 * @param req ScanBaselinePolicyListRequest
                 * @return ScanBaselinePolicyListOutcome
                 */
                ScanBaselinePolicyListOutcome ScanBaselinePolicyList(const Model::ScanBaselinePolicyListRequest &request);
                void ScanBaselinePolicyListAsync(const Model::ScanBaselinePolicyListRequest& request, const ScanBaselinePolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanBaselinePolicyListOutcomeCallable ScanBaselinePolicyListCallable(const Model::ScanBaselinePolicyListRequest& request);

                /**
                 *Triggers a rescan for a batch of risk records. It is commonly used for rescanning after selecting multiple risks on the Risk List page.
                 * @param req ScanBaselineRiskListRequest
                 * @return ScanBaselineRiskListOutcome
                 */
                ScanBaselineRiskListOutcome ScanBaselineRiskList(const Model::ScanBaselineRiskListRequest &request);
                void ScanBaselineRiskListAsync(const Model::ScanBaselineRiskListRequest& request, const ScanBaselineRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanBaselineRiskListOutcomeCallable ScanBaselineRiskListCallable(const Model::ScanBaselineRiskListRequest& request);

                /**
                 *This API is used to delete CSIP manual scan tasks.
                 * @param req ScanCSIPTaskAgainRequest
                 * @return ScanCSIPTaskAgainOutcome
                 */
                ScanCSIPTaskAgainOutcome ScanCSIPTaskAgain(const Model::ScanCSIPTaskAgainRequest &request);
                void ScanCSIPTaskAgainAsync(const Model::ScanCSIPTaskAgainRequest& request, const ScanCSIPTaskAgainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanCSIPTaskAgainOutcomeCallable ScanCSIPTaskAgainCallable(const Model::ScanCSIPTaskAgainRequest& request);

                /**
                 *Create a scan task based on the original task configuration. If AssetId is empty, get all asset info from TaskId. If AssetId is not empty, only the single asset is included.
                 * @param req ScanEDRTaskAgainRequest
                 * @return ScanEDRTaskAgainOutcome
                 */
                ScanEDRTaskAgainOutcome ScanEDRTaskAgain(const Model::ScanEDRTaskAgainRequest &request);
                void ScanEDRTaskAgainAsync(const Model::ScanEDRTaskAgainRequest& request, const ScanEDRTaskAgainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanEDRTaskAgainOutcomeCallable ScanEDRTaskAgainCallable(const Model::ScanEDRTaskAgainRequest& request);

                /**
                 *Sends the access verification code for a Dspm asset
                 * @param req SendDspmAssetLoginSmsCodeRequest
                 * @return SendDspmAssetLoginSmsCodeOutcome
                 */
                SendDspmAssetLoginSmsCodeOutcome SendDspmAssetLoginSmsCode(const Model::SendDspmAssetLoginSmsCodeRequest &request);
                void SendDspmAssetLoginSmsCodeAsync(const Model::SendDspmAssetLoginSmsCodeRequest& request, const SendDspmAssetLoginSmsCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendDspmAssetLoginSmsCodeOutcomeCallable SendDspmAssetLoginSmsCodeCallable(const Model::SendDspmAssetLoginSmsCodeRequest& request);

                /**
                 *This API is used to test the tenant CKafka connectivity.
                 * @param req SendDspmCkafkaTestRequest
                 * @return SendDspmCkafkaTestOutcome
                 */
                SendDspmCkafkaTestOutcome SendDspmCkafkaTest(const Model::SendDspmCkafkaTestRequest &request);
                void SendDspmCkafkaTestAsync(const Model::SendDspmCkafkaTestRequest& request, const SendDspmCkafkaTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendDspmCkafkaTestOutcomeCallable SendDspmCkafkaTestCallable(const Model::SendDspmCkafkaTestRequest& request);

                /**
                 *Enable or modify the anti-uninstall feature configuration.
                 * @param req StartOrModifyPreventUninstallRequest
                 * @return StartOrModifyPreventUninstallOutcome
                 */
                StartOrModifyPreventUninstallOutcome StartOrModifyPreventUninstall(const Model::StartOrModifyPreventUninstallRequest &request);
                void StartOrModifyPreventUninstallAsync(const Model::StartOrModifyPreventUninstallRequest& request, const StartOrModifyPreventUninstallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartOrModifyPreventUninstallOutcomeCallable StartOrModifyPreventUninstallCallable(const Model::StartOrModifyPreventUninstallRequest& request);

                /**
                 *This API is used to enable or modify process guard feature configurations.
                 * @param req StartOrModifyProcessDaemonRequest
                 * @return StartOrModifyProcessDaemonOutcome
                 */
                StartOrModifyProcessDaemonOutcome StartOrModifyProcessDaemon(const Model::StartOrModifyProcessDaemonRequest &request);
                void StartOrModifyProcessDaemonAsync(const Model::StartOrModifyProcessDaemonRequest& request, const StartOrModifyProcessDaemonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartOrModifyProcessDaemonOutcomeCallable StartOrModifyProcessDaemonCallable(const Model::StartOrModifyProcessDaemonRequest& request);

                /**
                 *This API is used to stop a specified baseline scan main task. It only takes effect for tasks in the INIT, SUBTASK_CREATING, or SCANNING status.
                 * @param req StopBaselineScanTaskRequest
                 * @return StopBaselineScanTaskOutcome
                 */
                StopBaselineScanTaskOutcome StopBaselineScanTask(const Model::StopBaselineScanTaskRequest &request);
                void StopBaselineScanTaskAsync(const Model::StopBaselineScanTaskRequest& request, const StopBaselineScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopBaselineScanTaskOutcomeCallable StopBaselineScanTaskCallable(const Model::StopBaselineScanTaskRequest& request);

                /**
                 *CSIP manual scan stop API
                 * @param req StopCSIPManualMalwareScanRequest
                 * @return StopCSIPManualMalwareScanOutcome
                 */
                StopCSIPManualMalwareScanOutcome StopCSIPManualMalwareScan(const Model::StopCSIPManualMalwareScanRequest &request);
                void StopCSIPManualMalwareScanAsync(const Model::StopCSIPManualMalwareScanRequest& request, const StopCSIPManualMalwareScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopCSIPManualMalwareScanOutcomeCallable StopCSIPManualMalwareScanCallable(const Model::StopCSIPManualMalwareScanRequest& request);

                /**
                 *Stop or cancel a scan task. For tasks in SCANNING status, call RPC to stop them. For tasks in WAIT status, update the database directly to cancel them. Only the task creator can perform these operations.
                 * @param req StopEDRScanTaskRequest
                 * @return StopEDRScanTaskOutcome
                 */
                StopEDRScanTaskOutcome StopEDRScanTask(const Model::StopEDRScanTaskRequest &request);
                void StopEDRScanTaskAsync(const Model::StopEDRScanTaskRequest& request, const StopEDRScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopEDRScanTaskOutcomeCallable StopEDRScanTaskCallable(const Model::StopEDRScanTaskRequest& request);

                /**
                 *Terminate an image scanning task in a mirror repository
                 * @param req StopImageRegistryScanTaskRequest
                 * @return StopImageRegistryScanTaskOutcome
                 */
                StopImageRegistryScanTaskOutcome StopImageRegistryScanTask(const Model::StopImageRegistryScanTaskRequest &request);
                void StopImageRegistryScanTaskAsync(const Model::StopImageRegistryScanTaskRequest& request, const StopImageRegistryScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopImageRegistryScanTaskOutcomeCallable StopImageRegistryScanTaskCallable(const Model::StopImageRegistryScanTaskRequest& request);

                /**
                 *This API is used to disable the anti-uninstallation feature.
                 * @param req StopPreventUninstallRequest
                 * @return StopPreventUninstallOutcome
                 */
                StopPreventUninstallOutcome StopPreventUninstall(const Model::StopPreventUninstallRequest &request);
                void StopPreventUninstallAsync(const Model::StopPreventUninstallRequest& request, const StopPreventUninstallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopPreventUninstallOutcomeCallable StopPreventUninstallCallable(const Model::StopPreventUninstallRequest& request);

                /**
                 *This API is used to disable process guard.
                 * @param req StopProcessDaemonRequest
                 * @return StopProcessDaemonOutcome
                 */
                StopProcessDaemonOutcome StopProcessDaemon(const Model::StopProcessDaemonRequest &request);
                void StopProcessDaemonAsync(const Model::StopProcessDaemonRequest& request, const StopProcessDaemonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopProcessDaemonOutcomeCallable StopProcessDaemonCallable(const Model::StopProcessDaemonRequest& request);

                /**
                 *Stop Scanning Tasks of Risk Center
                 * @param req StopRiskCenterTaskRequest
                 * @return StopRiskCenterTaskOutcome
                 */
                StopRiskCenterTaskOutcome StopRiskCenterTask(const Model::StopRiskCenterTaskRequest &request);
                void StopRiskCenterTaskAsync(const Model::StopRiskCenterTaskRequest& request, const StopRiskCenterTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopRiskCenterTaskOutcomeCallable StopRiskCenterTaskCallable(const Model::StopRiskCenterTaskRequest& request);

                /**
                 *Stop vulnerability scanning (task scan).
                 * @param req StopVulScanTaskRequest
                 * @return StopVulScanTaskOutcome
                 */
                StopVulScanTaskOutcome StopVulScanTask(const Model::StopVulScanTaskRequest &request);
                void StopVulScanTaskAsync(const Model::StopVulScanTaskRequest& request, const StopVulScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopVulScanTaskOutcomeCallable StopVulScanTaskCallable(const Model::StopVulScanTaskRequest& request);

                /**
                 *Synchronize assets supported by dspm
                 * @param req SyncDspmAssetsRequest
                 * @return SyncDspmAssetsOutcome
                 */
                SyncDspmAssetsOutcome SyncDspmAssets(const Model::SyncDspmAssetsRequest &request);
                void SyncDspmAssetsAsync(const Model::SyncDspmAssetsRequest& request, const SyncDspmAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncDspmAssetsOutcomeCallable SyncDspmAssetsCallable(const Model::SyncDspmAssetsRequest& request);

                /**
                 *Synchronize the list of dspm users.
                 * @param req SyncDspmUsersRequest
                 * @return SyncDspmUsersOutcome
                 */
                SyncDspmUsersOutcome SyncDspmUsers(const Model::SyncDspmUsersRequest &request);
                void SyncDspmUsersAsync(const Model::SyncDspmUsersRequest& request, const SyncDspmUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncDspmUsersOutcomeCallable SyncDspmUsersCallable(const Model::SyncDspmUsersRequest& request);

                /**
                 *Synchronize the mirror repository
                 * @param req SyncImageRegistryRequest
                 * @return SyncImageRegistryOutcome
                 */
                SyncImageRegistryOutcome SyncImageRegistry(const Model::SyncImageRegistryRequest &request);
                void SyncImageRegistryAsync(const Model::SyncImageRegistryRequest& request, const SyncImageRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncImageRegistryOutcomeCallable SyncImageRegistryCallable(const Model::SyncImageRegistryRequest& request);

                /**
                 *Send a test message to the designated receiving robot to verify reachability and configuration. Use the "Test" button in the corresponding table row.
                 * @param req TestWebhookReceiverRequest
                 * @return TestWebhookReceiverOutcome
                 */
                TestWebhookReceiverOutcome TestWebhookReceiver(const Model::TestWebhookReceiverRequest &request);
                void TestWebhookReceiverAsync(const Model::TestWebhookReceiverRequest& request, const TestWebhookReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TestWebhookReceiverOutcomeCallable TestWebhookReceiverCallable(const Model::TestWebhookReceiverRequest& request);

                /**
                 *Uninstall the cluster container security Agent.
                 * @param req UninstallClusterAgentRequest
                 * @return UninstallClusterAgentOutcome
                 */
                UninstallClusterAgentOutcome UninstallClusterAgent(const Model::UninstallClusterAgentRequest &request);
                void UninstallClusterAgentAsync(const Model::UninstallClusterAgentRequest& request, const UninstallClusterAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UninstallClusterAgentOutcomeCallable UninstallClusterAgentCallable(const Model::UninstallClusterAgentRequest& request);

                /**
                 *Uninstall the key sandbox SKILL from designated machine instances. Support batch operations, allowing multiple instance IDs at once. After uninstallation, the AI Agent on the target machine will not be able to access credentials via the key sandbox proxy. Repeated calls on instances not installed will not trigger an error (idempotent), and are directly deemed successful.
                 * @param req UninstallKeySandboxSkillRequest
                 * @return UninstallKeySandboxSkillOutcome
                 */
                UninstallKeySandboxSkillOutcome UninstallKeySandboxSkill(const Model::UninstallKeySandboxSkillRequest &request);
                void UninstallKeySandboxSkillAsync(const Model::UninstallKeySandboxSkillRequest& request, const UninstallKeySandboxSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UninstallKeySandboxSkillOutcomeCallable UninstallKeySandboxSkillCallable(const Model::UninstallKeySandboxSkillRequest& request);

                /**
                 *Tag risks or alarms as processed or ignored.
                 * @param req UpdateAccessKeyAlarmStatusRequest
                 * @return UpdateAccessKeyAlarmStatusOutcome
                 */
                UpdateAccessKeyAlarmStatusOutcome UpdateAccessKeyAlarmStatus(const Model::UpdateAccessKeyAlarmStatusRequest &request);
                void UpdateAccessKeyAlarmStatusAsync(const Model::UpdateAccessKeyAlarmStatusRequest& request, const UpdateAccessKeyAlarmStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAccessKeyAlarmStatusOutcomeCallable UpdateAccessKeyAlarmStatusCallable(const Model::UpdateAccessKeyAlarmStatusRequest& request);

                /**
                 *Edit the remark of an access key/source IP.
                 * @param req UpdateAccessKeyRemarkRequest
                 * @return UpdateAccessKeyRemarkOutcome
                 */
                UpdateAccessKeyRemarkOutcome UpdateAccessKeyRemark(const Model::UpdateAccessKeyRemarkRequest &request);
                void UpdateAccessKeyRemarkAsync(const Model::UpdateAccessKeyRemarkRequest& request, const UpdateAccessKeyRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAccessKeyRemarkOutcomeCallable UpdateAccessKeyRemarkCallable(const Model::UpdateAccessKeyRemarkRequest& request);

                /**
                 *This API is used to handle alarm status in batches.
                 * @param req UpdateAlertStatusListRequest
                 * @return UpdateAlertStatusListOutcome
                 */
                UpdateAlertStatusListOutcome UpdateAlertStatusList(const Model::UpdateAlertStatusListRequest &request);
                void UpdateAlertStatusListAsync(const Model::UpdateAlertStatusListRequest& request, const UpdateAlertStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAlertStatusListOutcomeCallable UpdateAlertStatusListCallable(const Model::UpdateAlertStatusListRequest& request);

                /**
                 *Bind and update a cluster owner
                 * @param req UpdateClusterOwnerRequest
                 * @return UpdateClusterOwnerOutcome
                 */
                UpdateClusterOwnerOutcome UpdateClusterOwner(const Model::UpdateClusterOwnerRequest &request);
                void UpdateClusterOwnerAsync(const Model::UpdateClusterOwnerRequest& request, const UpdateClusterOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateClusterOwnerOutcomeCallable UpdateClusterOwnerCallable(const Model::UpdateClusterOwnerRequest& request);

                /**
                 *Verify the login verification code for a Dspm asset.
                 * @param req VerifyDspmAssetLoginCodeRequest
                 * @return VerifyDspmAssetLoginCodeOutcome
                 */
                VerifyDspmAssetLoginCodeOutcome VerifyDspmAssetLoginCode(const Model::VerifyDspmAssetLoginCodeRequest &request);
                void VerifyDspmAssetLoginCodeAsync(const Model::VerifyDspmAssetLoginCodeRequest& request, const VerifyDspmAssetLoginCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyDspmAssetLoginCodeOutcomeCallable VerifyDspmAssetLoginCodeCallable(const Model::VerifyDspmAssetLoginCodeRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_CSIPCLIENT_H_
