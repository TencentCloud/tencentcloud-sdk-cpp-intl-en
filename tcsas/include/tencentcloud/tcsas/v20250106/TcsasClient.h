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

#ifndef TENCENTCLOUD_TCSAS_V20250106_TCSASCLIENT_H_
#define TENCENTCLOUD_TCSAS_V20250106_TCSASCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tcsas/v20250106/model/AddTeamMemberRequest.h>
#include <tencentcloud/tcsas/v20250106/model/AddTeamMemberResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ConfigureMNPPreviewRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ConfigureMNPPreviewResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateApplicationRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateApplicationResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateApplicationConfigRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateApplicationConfigResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateApplicationSensitiveAPIRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateApplicationSensitiveAPIResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateGlobalDomainACLRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateGlobalDomainACLResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPApprovalRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPApprovalResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPDomainACLRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPDomainACLResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPSensitiveAPIPermissionApprovalRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPSensitiveAPIPermissionApprovalResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPVersionRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateMNPVersionResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreatePresetKeyRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreatePresetKeyResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateTeamRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateTeamResponse.h>
#include <tencentcloud/tcsas/v20250106/model/CreateUserRequest.h>
#include <tencentcloud/tcsas/v20250106/model/CreateUserResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteApplicationRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteApplicationResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteApplicationSensitiveAPIRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteApplicationSensitiveAPIResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteGlobalDomainRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteGlobalDomainResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteMNPRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteMNPResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteTeamRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteTeamResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteTeamMemberRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteTeamMemberResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteUserRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DeleteUserResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeAPPDataDetailLineChartRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeAPPDataDetailLineChartResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeAPPDataOverviewRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeAPPDataOverviewResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeAdvertisingLineChartRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeAdvertisingLineChartResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeAdvertisingOverviewRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeAdvertisingOverviewResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationConfigFileRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationConfigFileResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationConfigInfosRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationConfigInfosResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationSensitiveAPIListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationSensitiveAPIListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeGlobalDomainACLRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeGlobalDomainACLResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeGlobalOverviewDataSummaryRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeGlobalOverviewDataSummaryResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeGlobalOverviewReportDetailRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeGlobalOverviewReportDetailResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGAccessAnalysisDetailRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGAccessAnalysisDetailResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGAccessAnalysisLineChartRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGAccessAnalysisLineChartResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGAccessAnalysisOverviewRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGAccessAnalysisOverviewResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGActiveUserRealTimeStatisticsRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGActiveUserRealTimeStatisticsResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGAdvertisingDetailRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGAdvertisingDetailResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGAdvertisingLineChartRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGAdvertisingLineChartResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGAdvertisingOverviewRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGAdvertisingOverviewResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGMAUDataDetailRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGMAUDataDetailResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGMAULineChartRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGMAULineChartResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGMAUMonthlyComparisonMetricCardRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGMAUMonthlyComparisonMetricCardResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGPaymentLineChartRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGPaymentLineChartResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGPaymentOverviewRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGPaymentOverviewResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGPaymentReportDetailRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGPaymentReportDetailResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGPaymentRetentionAnalysisRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGPaymentRetentionAnalysisResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGRetentionDataRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGRetentionDataResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPAccessAnalysisOverviewRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPAccessAnalysisOverviewResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPActiveUserRealTimeStatisticsRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPActiveUserRealTimeStatisticsResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPAdvertisingDetailRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPAdvertisingDetailResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPAllStageVersionsRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPAllStageVersionsResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPApprovalListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPApprovalListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPCategoryRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPCategoryResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPDomainACLRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPDomainACLResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPMAUDataDetailRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPMAUDataDetailResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPMAULineChartRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPMAULineChartResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPMAUMetricCardRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPMAUMetricCardResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPOfflinePackageURLRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPOfflinePackageURLResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPPageAnalysisDetailRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPPageAnalysisDetailResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPPreviewRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPPreviewResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPReleasedVersionHistoryRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPReleasedVersionHistoryResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPReportDataLineChartRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPReportDataLineChartResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPReportDetailRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPReportDetailResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPRetentionDataRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPRetentionDataResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPSensitiveAPIPermissionApprovalRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPSensitiveAPIPermissionApprovalResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPSensitiveAPIPermissionApprovalListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPSensitiveAPIPermissionApprovalListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPSensitiveAPIPermissionListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPSensitiveAPIPermissionListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPVersionRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPVersionResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribePaymentDataDetailRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribePaymentDataDetailResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribePaymentDataLineChartRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribePaymentDataLineChartResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribePaymentDataOverviewRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribePaymentDataOverviewResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeRoleListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeRoleListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeTeamRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeTeamResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeTeamListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeTeamListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeTeamMemberListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeTeamMemberListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeTempSecret4UploadFile2CosRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeTempSecret4UploadFile2CosResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeUserRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeUserResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeUserListRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeUserListResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DisableApplicationSensitiveAPIRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DisableApplicationSensitiveAPIResponse.h>
#include <tencentcloud/tcsas/v20250106/model/EnableApplicationSensitiveAPIRequest.h>
#include <tencentcloud/tcsas/v20250106/model/EnableApplicationSensitiveAPIResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyApplicationRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyApplicationResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyApplicationConfigRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyApplicationConfigResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyGlobalDomainRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyGlobalDomainResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyMNPRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyMNPResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyMNPDomainRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyMNPDomainResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyTeamRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyTeamResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyTeamMemberRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyTeamMemberResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyUserRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ModifyUserResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ProcessMNPApprovalRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ProcessMNPApprovalResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ProcessMNPSensitiveAPIPermissionApprovalRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ProcessMNPSensitiveAPIPermissionApprovalResponse.h>
#include <tencentcloud/tcsas/v20250106/model/ReleaseMNPVersionRequest.h>
#include <tencentcloud/tcsas/v20250106/model/ReleaseMNPVersionResponse.h>
#include <tencentcloud/tcsas/v20250106/model/RemoveMNPRequest.h>
#include <tencentcloud/tcsas/v20250106/model/RemoveMNPResponse.h>
#include <tencentcloud/tcsas/v20250106/model/RollbackMNPVersionRequest.h>
#include <tencentcloud/tcsas/v20250106/model/RollbackMNPVersionResponse.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            class TcsasClient : public AbstractClient
            {
            public:
                TcsasClient(const Credential &credential, const std::string &region);
                TcsasClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddTeamMemberResponse> AddTeamMemberOutcome;
                typedef std::future<AddTeamMemberOutcome> AddTeamMemberOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::AddTeamMemberRequest&, AddTeamMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddTeamMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::ConfigureMNPPreviewResponse> ConfigureMNPPreviewOutcome;
                typedef std::future<ConfigureMNPPreviewOutcome> ConfigureMNPPreviewOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ConfigureMNPPreviewRequest&, ConfigureMNPPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureMNPPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationResponse> CreateApplicationOutcome;
                typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateApplicationRequest&, CreateApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationConfigResponse> CreateApplicationConfigOutcome;
                typedef std::future<CreateApplicationConfigOutcome> CreateApplicationConfigOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateApplicationConfigRequest&, CreateApplicationConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationSensitiveAPIResponse> CreateApplicationSensitiveAPIOutcome;
                typedef std::future<CreateApplicationSensitiveAPIOutcome> CreateApplicationSensitiveAPIOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateApplicationSensitiveAPIRequest&, CreateApplicationSensitiveAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationSensitiveAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGlobalDomainACLResponse> CreateGlobalDomainACLOutcome;
                typedef std::future<CreateGlobalDomainACLOutcome> CreateGlobalDomainACLOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateGlobalDomainACLRequest&, CreateGlobalDomainACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlobalDomainACLAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMNPResponse> CreateMNPOutcome;
                typedef std::future<CreateMNPOutcome> CreateMNPOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateMNPRequest&, CreateMNPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMNPAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMNPApprovalResponse> CreateMNPApprovalOutcome;
                typedef std::future<CreateMNPApprovalOutcome> CreateMNPApprovalOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateMNPApprovalRequest&, CreateMNPApprovalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMNPApprovalAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMNPDomainACLResponse> CreateMNPDomainACLOutcome;
                typedef std::future<CreateMNPDomainACLOutcome> CreateMNPDomainACLOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateMNPDomainACLRequest&, CreateMNPDomainACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMNPDomainACLAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMNPSensitiveAPIPermissionApprovalResponse> CreateMNPSensitiveAPIPermissionApprovalOutcome;
                typedef std::future<CreateMNPSensitiveAPIPermissionApprovalOutcome> CreateMNPSensitiveAPIPermissionApprovalOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateMNPSensitiveAPIPermissionApprovalRequest&, CreateMNPSensitiveAPIPermissionApprovalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMNPSensitiveAPIPermissionApprovalAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMNPVersionResponse> CreateMNPVersionOutcome;
                typedef std::future<CreateMNPVersionOutcome> CreateMNPVersionOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateMNPVersionRequest&, CreateMNPVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMNPVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePresetKeyResponse> CreatePresetKeyOutcome;
                typedef std::future<CreatePresetKeyOutcome> CreatePresetKeyOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreatePresetKeyRequest&, CreatePresetKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePresetKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTeamResponse> CreateTeamOutcome;
                typedef std::future<CreateTeamOutcome> CreateTeamOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateTeamRequest&, CreateTeamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTeamAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationResponse> DeleteApplicationOutcome;
                typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DeleteApplicationRequest&, DeleteApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationSensitiveAPIResponse> DeleteApplicationSensitiveAPIOutcome;
                typedef std::future<DeleteApplicationSensitiveAPIOutcome> DeleteApplicationSensitiveAPIOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DeleteApplicationSensitiveAPIRequest&, DeleteApplicationSensitiveAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationSensitiveAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGlobalDomainResponse> DeleteGlobalDomainOutcome;
                typedef std::future<DeleteGlobalDomainOutcome> DeleteGlobalDomainOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DeleteGlobalDomainRequest&, DeleteGlobalDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlobalDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMNPResponse> DeleteMNPOutcome;
                typedef std::future<DeleteMNPOutcome> DeleteMNPOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DeleteMNPRequest&, DeleteMNPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMNPAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTeamResponse> DeleteTeamOutcome;
                typedef std::future<DeleteTeamOutcome> DeleteTeamOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DeleteTeamRequest&, DeleteTeamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTeamAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTeamMemberResponse> DeleteTeamMemberOutcome;
                typedef std::future<DeleteTeamMemberOutcome> DeleteTeamMemberOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DeleteTeamMemberRequest&, DeleteTeamMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTeamMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserResponse> DeleteUserOutcome;
                typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DeleteUserRequest&, DeleteUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAPPDataDetailLineChartResponse> DescribeAPPDataDetailLineChartOutcome;
                typedef std::future<DescribeAPPDataDetailLineChartOutcome> DescribeAPPDataDetailLineChartOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeAPPDataDetailLineChartRequest&, DescribeAPPDataDetailLineChartOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAPPDataDetailLineChartAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAPPDataOverviewResponse> DescribeAPPDataOverviewOutcome;
                typedef std::future<DescribeAPPDataOverviewOutcome> DescribeAPPDataOverviewOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeAPPDataOverviewRequest&, DescribeAPPDataOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAPPDataOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAdvertisingLineChartResponse> DescribeAdvertisingLineChartOutcome;
                typedef std::future<DescribeAdvertisingLineChartOutcome> DescribeAdvertisingLineChartOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeAdvertisingLineChartRequest&, DescribeAdvertisingLineChartOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAdvertisingLineChartAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAdvertisingOverviewResponse> DescribeAdvertisingOverviewOutcome;
                typedef std::future<DescribeAdvertisingOverviewOutcome> DescribeAdvertisingOverviewOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeAdvertisingOverviewRequest&, DescribeAdvertisingOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAdvertisingOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationResponse> DescribeApplicationOutcome;
                typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeApplicationRequest&, DescribeApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationConfigFileResponse> DescribeApplicationConfigFileOutcome;
                typedef std::future<DescribeApplicationConfigFileOutcome> DescribeApplicationConfigFileOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeApplicationConfigFileRequest&, DescribeApplicationConfigFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationConfigFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationConfigInfosResponse> DescribeApplicationConfigInfosOutcome;
                typedef std::future<DescribeApplicationConfigInfosOutcome> DescribeApplicationConfigInfosOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeApplicationConfigInfosRequest&, DescribeApplicationConfigInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationConfigInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationListResponse> DescribeApplicationListOutcome;
                typedef std::future<DescribeApplicationListOutcome> DescribeApplicationListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeApplicationListRequest&, DescribeApplicationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationSensitiveAPIListResponse> DescribeApplicationSensitiveAPIListOutcome;
                typedef std::future<DescribeApplicationSensitiveAPIListOutcome> DescribeApplicationSensitiveAPIListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeApplicationSensitiveAPIListRequest&, DescribeApplicationSensitiveAPIListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationSensitiveAPIListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlobalDomainACLResponse> DescribeGlobalDomainACLOutcome;
                typedef std::future<DescribeGlobalDomainACLOutcome> DescribeGlobalDomainACLOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeGlobalDomainACLRequest&, DescribeGlobalDomainACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalDomainACLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlobalOverviewDataSummaryResponse> DescribeGlobalOverviewDataSummaryOutcome;
                typedef std::future<DescribeGlobalOverviewDataSummaryOutcome> DescribeGlobalOverviewDataSummaryOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeGlobalOverviewDataSummaryRequest&, DescribeGlobalOverviewDataSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalOverviewDataSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlobalOverviewReportDetailResponse> DescribeGlobalOverviewReportDetailOutcome;
                typedef std::future<DescribeGlobalOverviewReportDetailOutcome> DescribeGlobalOverviewReportDetailOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeGlobalOverviewReportDetailRequest&, DescribeGlobalOverviewReportDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlobalOverviewReportDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNGAccessAnalysisDetailResponse> DescribeMNGAccessAnalysisDetailOutcome;
                typedef std::future<DescribeMNGAccessAnalysisDetailOutcome> DescribeMNGAccessAnalysisDetailOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNGAccessAnalysisDetailRequest&, DescribeMNGAccessAnalysisDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNGAccessAnalysisDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNGAccessAnalysisLineChartResponse> DescribeMNGAccessAnalysisLineChartOutcome;
                typedef std::future<DescribeMNGAccessAnalysisLineChartOutcome> DescribeMNGAccessAnalysisLineChartOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNGAccessAnalysisLineChartRequest&, DescribeMNGAccessAnalysisLineChartOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNGAccessAnalysisLineChartAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNGAccessAnalysisOverviewResponse> DescribeMNGAccessAnalysisOverviewOutcome;
                typedef std::future<DescribeMNGAccessAnalysisOverviewOutcome> DescribeMNGAccessAnalysisOverviewOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNGAccessAnalysisOverviewRequest&, DescribeMNGAccessAnalysisOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNGAccessAnalysisOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNGActiveUserRealTimeStatisticsResponse> DescribeMNGActiveUserRealTimeStatisticsOutcome;
                typedef std::future<DescribeMNGActiveUserRealTimeStatisticsOutcome> DescribeMNGActiveUserRealTimeStatisticsOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNGActiveUserRealTimeStatisticsRequest&, DescribeMNGActiveUserRealTimeStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNGActiveUserRealTimeStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNGAdvertisingDetailResponse> DescribeMNGAdvertisingDetailOutcome;
                typedef std::future<DescribeMNGAdvertisingDetailOutcome> DescribeMNGAdvertisingDetailOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNGAdvertisingDetailRequest&, DescribeMNGAdvertisingDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNGAdvertisingDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNGAdvertisingLineChartResponse> DescribeMNGAdvertisingLineChartOutcome;
                typedef std::future<DescribeMNGAdvertisingLineChartOutcome> DescribeMNGAdvertisingLineChartOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNGAdvertisingLineChartRequest&, DescribeMNGAdvertisingLineChartOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNGAdvertisingLineChartAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNGAdvertisingOverviewResponse> DescribeMNGAdvertisingOverviewOutcome;
                typedef std::future<DescribeMNGAdvertisingOverviewOutcome> DescribeMNGAdvertisingOverviewOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNGAdvertisingOverviewRequest&, DescribeMNGAdvertisingOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNGAdvertisingOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNGMAUDataDetailResponse> DescribeMNGMAUDataDetailOutcome;
                typedef std::future<DescribeMNGMAUDataDetailOutcome> DescribeMNGMAUDataDetailOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNGMAUDataDetailRequest&, DescribeMNGMAUDataDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNGMAUDataDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNGMAULineChartResponse> DescribeMNGMAULineChartOutcome;
                typedef std::future<DescribeMNGMAULineChartOutcome> DescribeMNGMAULineChartOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNGMAULineChartRequest&, DescribeMNGMAULineChartOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNGMAULineChartAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNGMAUMonthlyComparisonMetricCardResponse> DescribeMNGMAUMonthlyComparisonMetricCardOutcome;
                typedef std::future<DescribeMNGMAUMonthlyComparisonMetricCardOutcome> DescribeMNGMAUMonthlyComparisonMetricCardOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNGMAUMonthlyComparisonMetricCardRequest&, DescribeMNGMAUMonthlyComparisonMetricCardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNGMAUMonthlyComparisonMetricCardAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNGPaymentLineChartResponse> DescribeMNGPaymentLineChartOutcome;
                typedef std::future<DescribeMNGPaymentLineChartOutcome> DescribeMNGPaymentLineChartOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNGPaymentLineChartRequest&, DescribeMNGPaymentLineChartOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNGPaymentLineChartAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNGPaymentOverviewResponse> DescribeMNGPaymentOverviewOutcome;
                typedef std::future<DescribeMNGPaymentOverviewOutcome> DescribeMNGPaymentOverviewOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNGPaymentOverviewRequest&, DescribeMNGPaymentOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNGPaymentOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNGPaymentReportDetailResponse> DescribeMNGPaymentReportDetailOutcome;
                typedef std::future<DescribeMNGPaymentReportDetailOutcome> DescribeMNGPaymentReportDetailOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNGPaymentReportDetailRequest&, DescribeMNGPaymentReportDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNGPaymentReportDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNGPaymentRetentionAnalysisResponse> DescribeMNGPaymentRetentionAnalysisOutcome;
                typedef std::future<DescribeMNGPaymentRetentionAnalysisOutcome> DescribeMNGPaymentRetentionAnalysisOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNGPaymentRetentionAnalysisRequest&, DescribeMNGPaymentRetentionAnalysisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNGPaymentRetentionAnalysisAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNGRetentionDataResponse> DescribeMNGRetentionDataOutcome;
                typedef std::future<DescribeMNGRetentionDataOutcome> DescribeMNGRetentionDataOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNGRetentionDataRequest&, DescribeMNGRetentionDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNGRetentionDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPResponse> DescribeMNPOutcome;
                typedef std::future<DescribeMNPOutcome> DescribeMNPOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPRequest&, DescribeMNPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPAccessAnalysisOverviewResponse> DescribeMNPAccessAnalysisOverviewOutcome;
                typedef std::future<DescribeMNPAccessAnalysisOverviewOutcome> DescribeMNPAccessAnalysisOverviewOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPAccessAnalysisOverviewRequest&, DescribeMNPAccessAnalysisOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPAccessAnalysisOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPActiveUserRealTimeStatisticsResponse> DescribeMNPActiveUserRealTimeStatisticsOutcome;
                typedef std::future<DescribeMNPActiveUserRealTimeStatisticsOutcome> DescribeMNPActiveUserRealTimeStatisticsOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPActiveUserRealTimeStatisticsRequest&, DescribeMNPActiveUserRealTimeStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPActiveUserRealTimeStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPAdvertisingDetailResponse> DescribeMNPAdvertisingDetailOutcome;
                typedef std::future<DescribeMNPAdvertisingDetailOutcome> DescribeMNPAdvertisingDetailOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPAdvertisingDetailRequest&, DescribeMNPAdvertisingDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPAdvertisingDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPAllStageVersionsResponse> DescribeMNPAllStageVersionsOutcome;
                typedef std::future<DescribeMNPAllStageVersionsOutcome> DescribeMNPAllStageVersionsOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPAllStageVersionsRequest&, DescribeMNPAllStageVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPAllStageVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPApprovalListResponse> DescribeMNPApprovalListOutcome;
                typedef std::future<DescribeMNPApprovalListOutcome> DescribeMNPApprovalListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPApprovalListRequest&, DescribeMNPApprovalListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPApprovalListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPCategoryResponse> DescribeMNPCategoryOutcome;
                typedef std::future<DescribeMNPCategoryOutcome> DescribeMNPCategoryOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPCategoryRequest&, DescribeMNPCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPDomainACLResponse> DescribeMNPDomainACLOutcome;
                typedef std::future<DescribeMNPDomainACLOutcome> DescribeMNPDomainACLOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPDomainACLRequest&, DescribeMNPDomainACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPDomainACLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPListResponse> DescribeMNPListOutcome;
                typedef std::future<DescribeMNPListOutcome> DescribeMNPListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPListRequest&, DescribeMNPListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPMAUDataDetailResponse> DescribeMNPMAUDataDetailOutcome;
                typedef std::future<DescribeMNPMAUDataDetailOutcome> DescribeMNPMAUDataDetailOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPMAUDataDetailRequest&, DescribeMNPMAUDataDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPMAUDataDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPMAULineChartResponse> DescribeMNPMAULineChartOutcome;
                typedef std::future<DescribeMNPMAULineChartOutcome> DescribeMNPMAULineChartOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPMAULineChartRequest&, DescribeMNPMAULineChartOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPMAULineChartAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPMAUMetricCardResponse> DescribeMNPMAUMetricCardOutcome;
                typedef std::future<DescribeMNPMAUMetricCardOutcome> DescribeMNPMAUMetricCardOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPMAUMetricCardRequest&, DescribeMNPMAUMetricCardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPMAUMetricCardAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPOfflinePackageURLResponse> DescribeMNPOfflinePackageURLOutcome;
                typedef std::future<DescribeMNPOfflinePackageURLOutcome> DescribeMNPOfflinePackageURLOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPOfflinePackageURLRequest&, DescribeMNPOfflinePackageURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPOfflinePackageURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPPageAnalysisDetailResponse> DescribeMNPPageAnalysisDetailOutcome;
                typedef std::future<DescribeMNPPageAnalysisDetailOutcome> DescribeMNPPageAnalysisDetailOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPPageAnalysisDetailRequest&, DescribeMNPPageAnalysisDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPPageAnalysisDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPPreviewResponse> DescribeMNPPreviewOutcome;
                typedef std::future<DescribeMNPPreviewOutcome> DescribeMNPPreviewOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPPreviewRequest&, DescribeMNPPreviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPPreviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPReleasedVersionHistoryResponse> DescribeMNPReleasedVersionHistoryOutcome;
                typedef std::future<DescribeMNPReleasedVersionHistoryOutcome> DescribeMNPReleasedVersionHistoryOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPReleasedVersionHistoryRequest&, DescribeMNPReleasedVersionHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPReleasedVersionHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPReportDataLineChartResponse> DescribeMNPReportDataLineChartOutcome;
                typedef std::future<DescribeMNPReportDataLineChartOutcome> DescribeMNPReportDataLineChartOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPReportDataLineChartRequest&, DescribeMNPReportDataLineChartOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPReportDataLineChartAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPReportDetailResponse> DescribeMNPReportDetailOutcome;
                typedef std::future<DescribeMNPReportDetailOutcome> DescribeMNPReportDetailOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPReportDetailRequest&, DescribeMNPReportDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPReportDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPRetentionDataResponse> DescribeMNPRetentionDataOutcome;
                typedef std::future<DescribeMNPRetentionDataOutcome> DescribeMNPRetentionDataOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPRetentionDataRequest&, DescribeMNPRetentionDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPRetentionDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPSensitiveAPIPermissionApprovalResponse> DescribeMNPSensitiveAPIPermissionApprovalOutcome;
                typedef std::future<DescribeMNPSensitiveAPIPermissionApprovalOutcome> DescribeMNPSensitiveAPIPermissionApprovalOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPSensitiveAPIPermissionApprovalRequest&, DescribeMNPSensitiveAPIPermissionApprovalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPSensitiveAPIPermissionApprovalAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPSensitiveAPIPermissionApprovalListResponse> DescribeMNPSensitiveAPIPermissionApprovalListOutcome;
                typedef std::future<DescribeMNPSensitiveAPIPermissionApprovalListOutcome> DescribeMNPSensitiveAPIPermissionApprovalListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPSensitiveAPIPermissionApprovalListRequest&, DescribeMNPSensitiveAPIPermissionApprovalListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPSensitiveAPIPermissionApprovalListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPSensitiveAPIPermissionListResponse> DescribeMNPSensitiveAPIPermissionListOutcome;
                typedef std::future<DescribeMNPSensitiveAPIPermissionListOutcome> DescribeMNPSensitiveAPIPermissionListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPSensitiveAPIPermissionListRequest&, DescribeMNPSensitiveAPIPermissionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPSensitiveAPIPermissionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPVersionResponse> DescribeMNPVersionOutcome;
                typedef std::future<DescribeMNPVersionOutcome> DescribeMNPVersionOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPVersionRequest&, DescribeMNPVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePaymentDataDetailResponse> DescribePaymentDataDetailOutcome;
                typedef std::future<DescribePaymentDataDetailOutcome> DescribePaymentDataDetailOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribePaymentDataDetailRequest&, DescribePaymentDataDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePaymentDataDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePaymentDataLineChartResponse> DescribePaymentDataLineChartOutcome;
                typedef std::future<DescribePaymentDataLineChartOutcome> DescribePaymentDataLineChartOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribePaymentDataLineChartRequest&, DescribePaymentDataLineChartOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePaymentDataLineChartAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePaymentDataOverviewResponse> DescribePaymentDataOverviewOutcome;
                typedef std::future<DescribePaymentDataOverviewOutcome> DescribePaymentDataOverviewOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribePaymentDataOverviewRequest&, DescribePaymentDataOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePaymentDataOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoleListResponse> DescribeRoleListOutcome;
                typedef std::future<DescribeRoleListOutcome> DescribeRoleListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeRoleListRequest&, DescribeRoleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTeamResponse> DescribeTeamOutcome;
                typedef std::future<DescribeTeamOutcome> DescribeTeamOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeTeamRequest&, DescribeTeamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTeamAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTeamListResponse> DescribeTeamListOutcome;
                typedef std::future<DescribeTeamListOutcome> DescribeTeamListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeTeamListRequest&, DescribeTeamListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTeamListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTeamMemberListResponse> DescribeTeamMemberListOutcome;
                typedef std::future<DescribeTeamMemberListOutcome> DescribeTeamMemberListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeTeamMemberListRequest&, DescribeTeamMemberListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTeamMemberListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTempSecret4UploadFile2CosResponse> DescribeTempSecret4UploadFile2CosOutcome;
                typedef std::future<DescribeTempSecret4UploadFile2CosOutcome> DescribeTempSecret4UploadFile2CosOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeTempSecret4UploadFile2CosRequest&, DescribeTempSecret4UploadFile2CosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTempSecret4UploadFile2CosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserResponse> DescribeUserOutcome;
                typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeUserRequest&, DescribeUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserListResponse> DescribeUserListOutcome;
                typedef std::future<DescribeUserListOutcome> DescribeUserListOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeUserListRequest&, DescribeUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableApplicationSensitiveAPIResponse> DisableApplicationSensitiveAPIOutcome;
                typedef std::future<DisableApplicationSensitiveAPIOutcome> DisableApplicationSensitiveAPIOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DisableApplicationSensitiveAPIRequest&, DisableApplicationSensitiveAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableApplicationSensitiveAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableApplicationSensitiveAPIResponse> EnableApplicationSensitiveAPIOutcome;
                typedef std::future<EnableApplicationSensitiveAPIOutcome> EnableApplicationSensitiveAPIOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::EnableApplicationSensitiveAPIRequest&, EnableApplicationSensitiveAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableApplicationSensitiveAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationResponse> ModifyApplicationOutcome;
                typedef std::future<ModifyApplicationOutcome> ModifyApplicationOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ModifyApplicationRequest&, ModifyApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationConfigResponse> ModifyApplicationConfigOutcome;
                typedef std::future<ModifyApplicationConfigOutcome> ModifyApplicationConfigOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ModifyApplicationConfigRequest&, ModifyApplicationConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGlobalDomainResponse> ModifyGlobalDomainOutcome;
                typedef std::future<ModifyGlobalDomainOutcome> ModifyGlobalDomainOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ModifyGlobalDomainRequest&, ModifyGlobalDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlobalDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMNPResponse> ModifyMNPOutcome;
                typedef std::future<ModifyMNPOutcome> ModifyMNPOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ModifyMNPRequest&, ModifyMNPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMNPAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMNPDomainResponse> ModifyMNPDomainOutcome;
                typedef std::future<ModifyMNPDomainOutcome> ModifyMNPDomainOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ModifyMNPDomainRequest&, ModifyMNPDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMNPDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTeamResponse> ModifyTeamOutcome;
                typedef std::future<ModifyTeamOutcome> ModifyTeamOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ModifyTeamRequest&, ModifyTeamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTeamAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTeamMemberResponse> ModifyTeamMemberOutcome;
                typedef std::future<ModifyTeamMemberOutcome> ModifyTeamMemberOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ModifyTeamMemberRequest&, ModifyTeamMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTeamMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserResponse> ModifyUserOutcome;
                typedef std::future<ModifyUserOutcome> ModifyUserOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ModifyUserRequest&, ModifyUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessMNPApprovalResponse> ProcessMNPApprovalOutcome;
                typedef std::future<ProcessMNPApprovalOutcome> ProcessMNPApprovalOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ProcessMNPApprovalRequest&, ProcessMNPApprovalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMNPApprovalAsyncHandler;
                typedef Outcome<Core::Error, Model::ProcessMNPSensitiveAPIPermissionApprovalResponse> ProcessMNPSensitiveAPIPermissionApprovalOutcome;
                typedef std::future<ProcessMNPSensitiveAPIPermissionApprovalOutcome> ProcessMNPSensitiveAPIPermissionApprovalOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ProcessMNPSensitiveAPIPermissionApprovalRequest&, ProcessMNPSensitiveAPIPermissionApprovalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ProcessMNPSensitiveAPIPermissionApprovalAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseMNPVersionResponse> ReleaseMNPVersionOutcome;
                typedef std::future<ReleaseMNPVersionOutcome> ReleaseMNPVersionOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::ReleaseMNPVersionRequest&, ReleaseMNPVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseMNPVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveMNPResponse> RemoveMNPOutcome;
                typedef std::future<RemoveMNPOutcome> RemoveMNPOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::RemoveMNPRequest&, RemoveMNPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveMNPAsyncHandler;
                typedef Outcome<Core::Error, Model::RollbackMNPVersionResponse> RollbackMNPVersionOutcome;
                typedef std::future<RollbackMNPVersionOutcome> RollbackMNPVersionOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::RollbackMNPVersionRequest&, RollbackMNPVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackMNPVersionAsyncHandler;



                /**
                 *This API is used to add a team member.
                 * @param req AddTeamMemberRequest
                 * @return AddTeamMemberOutcome
                 */
                AddTeamMemberOutcome AddTeamMember(const Model::AddTeamMemberRequest &request);
                void AddTeamMemberAsync(const Model::AddTeamMemberRequest& request, const AddTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddTeamMemberOutcomeCallable AddTeamMemberCallable(const Model::AddTeamMemberRequest& request);

                /**
                 *This API is used to configure the preview of a mini program.
                 * @param req ConfigureMNPPreviewRequest
                 * @return ConfigureMNPPreviewOutcome
                 */
                ConfigureMNPPreviewOutcome ConfigureMNPPreview(const Model::ConfigureMNPPreviewRequest &request);
                void ConfigureMNPPreviewAsync(const Model::ConfigureMNPPreviewRequest& request, const ConfigureMNPPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConfigureMNPPreviewOutcomeCallable ConfigureMNPPreviewCallable(const Model::ConfigureMNPPreviewRequest& request);

                /**
                 *This API is used to create an application.
                 * @param req CreateApplicationRequest
                 * @return CreateApplicationOutcome
                 */
                CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest &request);
                void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request);

                /**
                 *This API is used to create the configuration for a specified superapp.
                 * @param req CreateApplicationConfigRequest
                 * @return CreateApplicationConfigOutcome
                 */
                CreateApplicationConfigOutcome CreateApplicationConfig(const Model::CreateApplicationConfigRequest &request);
                void CreateApplicationConfigAsync(const Model::CreateApplicationConfigRequest& request, const CreateApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationConfigOutcomeCallable CreateApplicationConfigCallable(const Model::CreateApplicationConfigRequest& request);

                /**
                 *This API is used to create a sensitive API of an application.
                 * @param req CreateApplicationSensitiveAPIRequest
                 * @return CreateApplicationSensitiveAPIOutcome
                 */
                CreateApplicationSensitiveAPIOutcome CreateApplicationSensitiveAPI(const Model::CreateApplicationSensitiveAPIRequest &request);
                void CreateApplicationSensitiveAPIAsync(const Model::CreateApplicationSensitiveAPIRequest& request, const CreateApplicationSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationSensitiveAPIOutcomeCallable CreateApplicationSensitiveAPICallable(const Model::CreateApplicationSensitiveAPIRequest& request);

                /**
                 *This API is used to create a global domain allowlist or blocklist.
                 * @param req CreateGlobalDomainACLRequest
                 * @return CreateGlobalDomainACLOutcome
                 */
                CreateGlobalDomainACLOutcome CreateGlobalDomainACL(const Model::CreateGlobalDomainACLRequest &request);
                void CreateGlobalDomainACLAsync(const Model::CreateGlobalDomainACLRequest& request, const CreateGlobalDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGlobalDomainACLOutcomeCallable CreateGlobalDomainACLCallable(const Model::CreateGlobalDomainACLRequest& request);

                /**
                 *This API is used to create a mini program.
                 * @param req CreateMNPRequest
                 * @return CreateMNPOutcome
                 */
                CreateMNPOutcome CreateMNP(const Model::CreateMNPRequest &request);
                void CreateMNPAsync(const Model::CreateMNPRequest& request, const CreateMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMNPOutcomeCallable CreateMNPCallable(const Model::CreateMNPRequest& request);

                /**
                 *This API is used to create a mini program approval request.
                 * @param req CreateMNPApprovalRequest
                 * @return CreateMNPApprovalOutcome
                 */
                CreateMNPApprovalOutcome CreateMNPApproval(const Model::CreateMNPApprovalRequest &request);
                void CreateMNPApprovalAsync(const Model::CreateMNPApprovalRequest& request, const CreateMNPApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMNPApprovalOutcomeCallable CreateMNPApprovalCallable(const Model::CreateMNPApprovalRequest& request);

                /**
                 *This API is used to add a domain name to the allowlist / blocklist of a mini program.
                 * @param req CreateMNPDomainACLRequest
                 * @return CreateMNPDomainACLOutcome
                 */
                CreateMNPDomainACLOutcome CreateMNPDomainACL(const Model::CreateMNPDomainACLRequest &request);
                void CreateMNPDomainACLAsync(const Model::CreateMNPDomainACLRequest& request, const CreateMNPDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMNPDomainACLOutcomeCallable CreateMNPDomainACLCallable(const Model::CreateMNPDomainACLRequest& request);

                /**
                 *This API is used to create a permission request to allow a mini program to call sensitive APIs.
                 * @param req CreateMNPSensitiveAPIPermissionApprovalRequest
                 * @return CreateMNPSensitiveAPIPermissionApprovalOutcome
                 */
                CreateMNPSensitiveAPIPermissionApprovalOutcome CreateMNPSensitiveAPIPermissionApproval(const Model::CreateMNPSensitiveAPIPermissionApprovalRequest &request);
                void CreateMNPSensitiveAPIPermissionApprovalAsync(const Model::CreateMNPSensitiveAPIPermissionApprovalRequest& request, const CreateMNPSensitiveAPIPermissionApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMNPSensitiveAPIPermissionApprovalOutcomeCallable CreateMNPSensitiveAPIPermissionApprovalCallable(const Model::CreateMNPSensitiveAPIPermissionApprovalRequest& request);

                /**
                 *This API is used to create a mini program version.
                 * @param req CreateMNPVersionRequest
                 * @return CreateMNPVersionOutcome
                 */
                CreateMNPVersionOutcome CreateMNPVersion(const Model::CreateMNPVersionRequest &request);
                void CreateMNPVersionAsync(const Model::CreateMNPVersionRequest& request, const CreateMNPVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMNPVersionOutcomeCallable CreateMNPVersionCallable(const Model::CreateMNPVersionRequest& request);

                /**
                 *This API is used to obtain the encryption key.
                 * @param req CreatePresetKeyRequest
                 * @return CreatePresetKeyOutcome
                 */
                CreatePresetKeyOutcome CreatePresetKey(const Model::CreatePresetKeyRequest &request);
                void CreatePresetKeyAsync(const Model::CreatePresetKeyRequest& request, const CreatePresetKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePresetKeyOutcomeCallable CreatePresetKeyCallable(const Model::CreatePresetKeyRequest& request);

                /**
                 *This API is used to create a team.
                 * @param req CreateTeamRequest
                 * @return CreateTeamOutcome
                 */
                CreateTeamOutcome CreateTeam(const Model::CreateTeamRequest &request);
                void CreateTeamAsync(const Model::CreateTeamRequest& request, const CreateTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTeamOutcomeCallable CreateTeamCallable(const Model::CreateTeamRequest& request);

                /**
                 *This API is used to create a user.
                 * @param req CreateUserRequest
                 * @return CreateUserOutcome
                 */
                CreateUserOutcome CreateUser(const Model::CreateUserRequest &request);
                void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request);

                /**
                 *This API is used to delete the applications.
                 * @param req DeleteApplicationRequest
                 * @return DeleteApplicationOutcome
                 */
                DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest &request);
                void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request);

                /**
                 *This API is used to delete a sensitive API.
                 * @param req DeleteApplicationSensitiveAPIRequest
                 * @return DeleteApplicationSensitiveAPIOutcome
                 */
                DeleteApplicationSensitiveAPIOutcome DeleteApplicationSensitiveAPI(const Model::DeleteApplicationSensitiveAPIRequest &request);
                void DeleteApplicationSensitiveAPIAsync(const Model::DeleteApplicationSensitiveAPIRequest& request, const DeleteApplicationSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationSensitiveAPIOutcomeCallable DeleteApplicationSensitiveAPICallable(const Model::DeleteApplicationSensitiveAPIRequest& request);

                /**
                 *This API is used to delete domains from the allowlist or blocklist.
                 * @param req DeleteGlobalDomainRequest
                 * @return DeleteGlobalDomainOutcome
                 */
                DeleteGlobalDomainOutcome DeleteGlobalDomain(const Model::DeleteGlobalDomainRequest &request);
                void DeleteGlobalDomainAsync(const Model::DeleteGlobalDomainRequest& request, const DeleteGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGlobalDomainOutcomeCallable DeleteGlobalDomainCallable(const Model::DeleteGlobalDomainRequest& request);

                /**
                 *This API is used to delete a mini program.
                 * @param req DeleteMNPRequest
                 * @return DeleteMNPOutcome
                 */
                DeleteMNPOutcome DeleteMNP(const Model::DeleteMNPRequest &request);
                void DeleteMNPAsync(const Model::DeleteMNPRequest& request, const DeleteMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMNPOutcomeCallable DeleteMNPCallable(const Model::DeleteMNPRequest& request);

                /**
                 *This API is used to deletes a team.
                 * @param req DeleteTeamRequest
                 * @return DeleteTeamOutcome
                 */
                DeleteTeamOutcome DeleteTeam(const Model::DeleteTeamRequest &request);
                void DeleteTeamAsync(const Model::DeleteTeamRequest& request, const DeleteTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTeamOutcomeCallable DeleteTeamCallable(const Model::DeleteTeamRequest& request);

                /**
                 *This API is used to delete a team member.
                 * @param req DeleteTeamMemberRequest
                 * @return DeleteTeamMemberOutcome
                 */
                DeleteTeamMemberOutcome DeleteTeamMember(const Model::DeleteTeamMemberRequest &request);
                void DeleteTeamMemberAsync(const Model::DeleteTeamMemberRequest& request, const DeleteTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTeamMemberOutcomeCallable DeleteTeamMemberCallable(const Model::DeleteTeamMemberRequest& request);

                /**
                 *This API is used to delete a user.
                 * @param req DeleteUserRequest
                 * @return DeleteUserOutcome
                 */
                DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest &request);
                void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request);

                /**
                 *This API is used to retrieve the line chart data for selected superapp metrics.
                 * @param req DescribeAPPDataDetailLineChartRequest
                 * @return DescribeAPPDataDetailLineChartOutcome
                 */
                DescribeAPPDataDetailLineChartOutcome DescribeAPPDataDetailLineChart(const Model::DescribeAPPDataDetailLineChartRequest &request);
                void DescribeAPPDataDetailLineChartAsync(const Model::DescribeAPPDataDetailLineChartRequest& request, const DescribeAPPDataDetailLineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAPPDataDetailLineChartOutcomeCallable DescribeAPPDataDetailLineChartCallable(const Model::DescribeAPPDataDetailLineChartRequest& request);

                /**
                 *This API is used to retrieve an overview of the superapp data.
                 * @param req DescribeAPPDataOverviewRequest
                 * @return DescribeAPPDataOverviewOutcome
                 */
                DescribeAPPDataOverviewOutcome DescribeAPPDataOverview(const Model::DescribeAPPDataOverviewRequest &request);
                void DescribeAPPDataOverviewAsync(const Model::DescribeAPPDataOverviewRequest& request, const DescribeAPPDataOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAPPDataOverviewOutcomeCallable DescribeAPPDataOverviewCallable(const Model::DescribeAPPDataOverviewRequest& request);

                /**
                 *This API is used to retrieve the advertising line chart data for a mini program within a specified date range.
                 * @param req DescribeAdvertisingLineChartRequest
                 * @return DescribeAdvertisingLineChartOutcome
                 */
                DescribeAdvertisingLineChartOutcome DescribeAdvertisingLineChart(const Model::DescribeAdvertisingLineChartRequest &request);
                void DescribeAdvertisingLineChartAsync(const Model::DescribeAdvertisingLineChartRequest& request, const DescribeAdvertisingLineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAdvertisingLineChartOutcomeCallable DescribeAdvertisingLineChartCallable(const Model::DescribeAdvertisingLineChartRequest& request);

                /**
                 *This API is used to retrieve an overview of mini program ad metrics within a specified date range.
                 * @param req DescribeAdvertisingOverviewRequest
                 * @return DescribeAdvertisingOverviewOutcome
                 */
                DescribeAdvertisingOverviewOutcome DescribeAdvertisingOverview(const Model::DescribeAdvertisingOverviewRequest &request);
                void DescribeAdvertisingOverviewAsync(const Model::DescribeAdvertisingOverviewRequest& request, const DescribeAdvertisingOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAdvertisingOverviewOutcomeCallable DescribeAdvertisingOverviewCallable(const Model::DescribeAdvertisingOverviewRequest& request);

                /**
                 *This API is used to query the application details.
                 * @param req DescribeApplicationRequest
                 * @return DescribeApplicationOutcome
                 */
                DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest &request);
                void DescribeApplicationAsync(const Model::DescribeApplicationRequest& request, const DescribeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationOutcomeCallable DescribeApplicationCallable(const Model::DescribeApplicationRequest& request);

                /**
                 *This API is used to query the configuration files of an application.
                 * @param req DescribeApplicationConfigFileRequest
                 * @return DescribeApplicationConfigFileOutcome
                 */
                DescribeApplicationConfigFileOutcome DescribeApplicationConfigFile(const Model::DescribeApplicationConfigFileRequest &request);
                void DescribeApplicationConfigFileAsync(const Model::DescribeApplicationConfigFileRequest& request, const DescribeApplicationConfigFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationConfigFileOutcomeCallable DescribeApplicationConfigFileCallable(const Model::DescribeApplicationConfigFileRequest& request);

                /**
                 *This API is used to retrieve the configuration details for an superapp.
                 * @param req DescribeApplicationConfigInfosRequest
                 * @return DescribeApplicationConfigInfosOutcome
                 */
                DescribeApplicationConfigInfosOutcome DescribeApplicationConfigInfos(const Model::DescribeApplicationConfigInfosRequest &request);
                void DescribeApplicationConfigInfosAsync(const Model::DescribeApplicationConfigInfosRequest& request, const DescribeApplicationConfigInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationConfigInfosOutcomeCallable DescribeApplicationConfigInfosCallable(const Model::DescribeApplicationConfigInfosRequest& request);

                /**
                 *This API is used to query the applications.
                 * @param req DescribeApplicationListRequest
                 * @return DescribeApplicationListOutcome
                 */
                DescribeApplicationListOutcome DescribeApplicationList(const Model::DescribeApplicationListRequest &request);
                void DescribeApplicationListAsync(const Model::DescribeApplicationListRequest& request, const DescribeApplicationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationListOutcomeCallable DescribeApplicationListCallable(const Model::DescribeApplicationListRequest& request);

                /**
                 *This API is used to list sensitive APIs of an application.
                 * @param req DescribeApplicationSensitiveAPIListRequest
                 * @return DescribeApplicationSensitiveAPIListOutcome
                 */
                DescribeApplicationSensitiveAPIListOutcome DescribeApplicationSensitiveAPIList(const Model::DescribeApplicationSensitiveAPIListRequest &request);
                void DescribeApplicationSensitiveAPIListAsync(const Model::DescribeApplicationSensitiveAPIListRequest& request, const DescribeApplicationSensitiveAPIListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationSensitiveAPIListOutcomeCallable DescribeApplicationSensitiveAPIListCallable(const Model::DescribeApplicationSensitiveAPIListRequest& request);

                /**
                 *This API is used to query the global domain allowlist and blocklist.
                 * @param req DescribeGlobalDomainACLRequest
                 * @return DescribeGlobalDomainACLOutcome
                 */
                DescribeGlobalDomainACLOutcome DescribeGlobalDomainACL(const Model::DescribeGlobalDomainACLRequest &request);
                void DescribeGlobalDomainACLAsync(const Model::DescribeGlobalDomainACLRequest& request, const DescribeGlobalDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGlobalDomainACLOutcomeCallable DescribeGlobalDomainACLCallable(const Model::DescribeGlobalDomainACLRequest& request);

                /**
                 *This API is used to retrieve a global overview summary of usage statistics.
                 * @param req DescribeGlobalOverviewDataSummaryRequest
                 * @return DescribeGlobalOverviewDataSummaryOutcome
                 */
                DescribeGlobalOverviewDataSummaryOutcome DescribeGlobalOverviewDataSummary(const Model::DescribeGlobalOverviewDataSummaryRequest &request);
                void DescribeGlobalOverviewDataSummaryAsync(const Model::DescribeGlobalOverviewDataSummaryRequest& request, const DescribeGlobalOverviewDataSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGlobalOverviewDataSummaryOutcomeCallable DescribeGlobalOverviewDataSummaryCallable(const Model::DescribeGlobalOverviewDataSummaryRequest& request);

                /**
                 *This API is used to retrieve the detailed report data for global overview within a specified date range.
                 * @param req DescribeGlobalOverviewReportDetailRequest
                 * @return DescribeGlobalOverviewReportDetailOutcome
                 */
                DescribeGlobalOverviewReportDetailOutcome DescribeGlobalOverviewReportDetail(const Model::DescribeGlobalOverviewReportDetailRequest &request);
                void DescribeGlobalOverviewReportDetailAsync(const Model::DescribeGlobalOverviewReportDetailRequest& request, const DescribeGlobalOverviewReportDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGlobalOverviewReportDetailOutcomeCallable DescribeGlobalOverviewReportDetailCallable(const Model::DescribeGlobalOverviewReportDetailRequest& request);

                /**
                 *This API is used to retrieve the detailed visit analysis data for a mini game within a specified date range.
                 * @param req DescribeMNGAccessAnalysisDetailRequest
                 * @return DescribeMNGAccessAnalysisDetailOutcome
                 */
                DescribeMNGAccessAnalysisDetailOutcome DescribeMNGAccessAnalysisDetail(const Model::DescribeMNGAccessAnalysisDetailRequest &request);
                void DescribeMNGAccessAnalysisDetailAsync(const Model::DescribeMNGAccessAnalysisDetailRequest& request, const DescribeMNGAccessAnalysisDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNGAccessAnalysisDetailOutcomeCallable DescribeMNGAccessAnalysisDetailCallable(const Model::DescribeMNGAccessAnalysisDetailRequest& request);

                /**
                 *This API is used to retrieve line chart analysis data for mini game visits.
                 * @param req DescribeMNGAccessAnalysisLineChartRequest
                 * @return DescribeMNGAccessAnalysisLineChartOutcome
                 */
                DescribeMNGAccessAnalysisLineChartOutcome DescribeMNGAccessAnalysisLineChart(const Model::DescribeMNGAccessAnalysisLineChartRequest &request);
                void DescribeMNGAccessAnalysisLineChartAsync(const Model::DescribeMNGAccessAnalysisLineChartRequest& request, const DescribeMNGAccessAnalysisLineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNGAccessAnalysisLineChartOutcomeCallable DescribeMNGAccessAnalysisLineChartCallable(const Model::DescribeMNGAccessAnalysisLineChartRequest& request);

                /**
                 *This API is used to retrieve an overview of visit analysis data for a mini game within a specified date range.
                 * @param req DescribeMNGAccessAnalysisOverviewRequest
                 * @return DescribeMNGAccessAnalysisOverviewOutcome
                 */
                DescribeMNGAccessAnalysisOverviewOutcome DescribeMNGAccessAnalysisOverview(const Model::DescribeMNGAccessAnalysisOverviewRequest &request);
                void DescribeMNGAccessAnalysisOverviewAsync(const Model::DescribeMNGAccessAnalysisOverviewRequest& request, const DescribeMNGAccessAnalysisOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNGAccessAnalysisOverviewOutcomeCallable DescribeMNGAccessAnalysisOverviewCallable(const Model::DescribeMNGAccessAnalysisOverviewRequest& request);

                /**
                 *This API is used to retrieve the real-time active user statistics for a mini game.
                 * @param req DescribeMNGActiveUserRealTimeStatisticsRequest
                 * @return DescribeMNGActiveUserRealTimeStatisticsOutcome
                 */
                DescribeMNGActiveUserRealTimeStatisticsOutcome DescribeMNGActiveUserRealTimeStatistics(const Model::DescribeMNGActiveUserRealTimeStatisticsRequest &request);
                void DescribeMNGActiveUserRealTimeStatisticsAsync(const Model::DescribeMNGActiveUserRealTimeStatisticsRequest& request, const DescribeMNGActiveUserRealTimeStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNGActiveUserRealTimeStatisticsOutcomeCallable DescribeMNGActiveUserRealTimeStatisticsCallable(const Model::DescribeMNGActiveUserRealTimeStatisticsRequest& request);

                /**
                 *This API is used to retrieve the advertising detailed data for a mini game over a specified period.
                 * @param req DescribeMNGAdvertisingDetailRequest
                 * @return DescribeMNGAdvertisingDetailOutcome
                 */
                DescribeMNGAdvertisingDetailOutcome DescribeMNGAdvertisingDetail(const Model::DescribeMNGAdvertisingDetailRequest &request);
                void DescribeMNGAdvertisingDetailAsync(const Model::DescribeMNGAdvertisingDetailRequest& request, const DescribeMNGAdvertisingDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNGAdvertisingDetailOutcomeCallable DescribeMNGAdvertisingDetailCallable(const Model::DescribeMNGAdvertisingDetailRequest& request);

                /**
                 *This API is used to retrieve mini game advertising data in a line chart format.
                 * @param req DescribeMNGAdvertisingLineChartRequest
                 * @return DescribeMNGAdvertisingLineChartOutcome
                 */
                DescribeMNGAdvertisingLineChartOutcome DescribeMNGAdvertisingLineChart(const Model::DescribeMNGAdvertisingLineChartRequest &request);
                void DescribeMNGAdvertisingLineChartAsync(const Model::DescribeMNGAdvertisingLineChartRequest& request, const DescribeMNGAdvertisingLineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNGAdvertisingLineChartOutcomeCallable DescribeMNGAdvertisingLineChartCallable(const Model::DescribeMNGAdvertisingLineChartRequest& request);

                /**
                 *This API is used to retrieve an overview of mini game ad metrics within a specified date range.
                 * @param req DescribeMNGAdvertisingOverviewRequest
                 * @return DescribeMNGAdvertisingOverviewOutcome
                 */
                DescribeMNGAdvertisingOverviewOutcome DescribeMNGAdvertisingOverview(const Model::DescribeMNGAdvertisingOverviewRequest &request);
                void DescribeMNGAdvertisingOverviewAsync(const Model::DescribeMNGAdvertisingOverviewRequest& request, const DescribeMNGAdvertisingOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNGAdvertisingOverviewOutcomeCallable DescribeMNGAdvertisingOverviewCallable(const Model::DescribeMNGAdvertisingOverviewRequest& request);

                /**
                 *This API is used to retrieve the detailed mini game monthly active user data.
                 * @param req DescribeMNGMAUDataDetailRequest
                 * @return DescribeMNGMAUDataDetailOutcome
                 */
                DescribeMNGMAUDataDetailOutcome DescribeMNGMAUDataDetail(const Model::DescribeMNGMAUDataDetailRequest &request);
                void DescribeMNGMAUDataDetailAsync(const Model::DescribeMNGMAUDataDetailRequest& request, const DescribeMNGMAUDataDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNGMAUDataDetailOutcomeCallable DescribeMNGMAUDataDetailCallable(const Model::DescribeMNGMAUDataDetailRequest& request);

                /**
                 *This API is used to retrieve mini game monthly active user data in a line chart format.
                 * @param req DescribeMNGMAULineChartRequest
                 * @return DescribeMNGMAULineChartOutcome
                 */
                DescribeMNGMAULineChartOutcome DescribeMNGMAULineChart(const Model::DescribeMNGMAULineChartRequest &request);
                void DescribeMNGMAULineChartAsync(const Model::DescribeMNGMAULineChartRequest& request, const DescribeMNGMAULineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNGMAULineChartOutcomeCallable DescribeMNGMAULineChartCallable(const Model::DescribeMNGMAULineChartRequest& request);

                /**
                 *This API is used to retrieve MAU comparison data for a mini game between two months.
                 * @param req DescribeMNGMAUMonthlyComparisonMetricCardRequest
                 * @return DescribeMNGMAUMonthlyComparisonMetricCardOutcome
                 */
                DescribeMNGMAUMonthlyComparisonMetricCardOutcome DescribeMNGMAUMonthlyComparisonMetricCard(const Model::DescribeMNGMAUMonthlyComparisonMetricCardRequest &request);
                void DescribeMNGMAUMonthlyComparisonMetricCardAsync(const Model::DescribeMNGMAUMonthlyComparisonMetricCardRequest& request, const DescribeMNGMAUMonthlyComparisonMetricCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNGMAUMonthlyComparisonMetricCardOutcomeCallable DescribeMNGMAUMonthlyComparisonMetricCardCallable(const Model::DescribeMNGMAUMonthlyComparisonMetricCardRequest& request);

                /**
                 *This API is used to retrieve the line chart data for mini game payment.
                 * @param req DescribeMNGPaymentLineChartRequest
                 * @return DescribeMNGPaymentLineChartOutcome
                 */
                DescribeMNGPaymentLineChartOutcome DescribeMNGPaymentLineChart(const Model::DescribeMNGPaymentLineChartRequest &request);
                void DescribeMNGPaymentLineChartAsync(const Model::DescribeMNGPaymentLineChartRequest& request, const DescribeMNGPaymentLineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNGPaymentLineChartOutcomeCallable DescribeMNGPaymentLineChartCallable(const Model::DescribeMNGPaymentLineChartRequest& request);

                /**
                 *This API is used to retrieve an overview of mini game payment data within a specified period.
                 * @param req DescribeMNGPaymentOverviewRequest
                 * @return DescribeMNGPaymentOverviewOutcome
                 */
                DescribeMNGPaymentOverviewOutcome DescribeMNGPaymentOverview(const Model::DescribeMNGPaymentOverviewRequest &request);
                void DescribeMNGPaymentOverviewAsync(const Model::DescribeMNGPaymentOverviewRequest& request, const DescribeMNGPaymentOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNGPaymentOverviewOutcomeCallable DescribeMNGPaymentOverviewCallable(const Model::DescribeMNGPaymentOverviewRequest& request);

                /**
                 *This API is used to retrieve a detailed payment report data for a mini game.
                 * @param req DescribeMNGPaymentReportDetailRequest
                 * @return DescribeMNGPaymentReportDetailOutcome
                 */
                DescribeMNGPaymentReportDetailOutcome DescribeMNGPaymentReportDetail(const Model::DescribeMNGPaymentReportDetailRequest &request);
                void DescribeMNGPaymentReportDetailAsync(const Model::DescribeMNGPaymentReportDetailRequest& request, const DescribeMNGPaymentReportDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNGPaymentReportDetailOutcomeCallable DescribeMNGPaymentReportDetailCallable(const Model::DescribeMNGPaymentReportDetailRequest& request);

                /**
                 *This API is used to retrieve the mini game payment retention data.
                 * @param req DescribeMNGPaymentRetentionAnalysisRequest
                 * @return DescribeMNGPaymentRetentionAnalysisOutcome
                 */
                DescribeMNGPaymentRetentionAnalysisOutcome DescribeMNGPaymentRetentionAnalysis(const Model::DescribeMNGPaymentRetentionAnalysisRequest &request);
                void DescribeMNGPaymentRetentionAnalysisAsync(const Model::DescribeMNGPaymentRetentionAnalysisRequest& request, const DescribeMNGPaymentRetentionAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNGPaymentRetentionAnalysisOutcomeCallable DescribeMNGPaymentRetentionAnalysisCallable(const Model::DescribeMNGPaymentRetentionAnalysisRequest& request);

                /**
                 *This API is used to retrieve user retention data for a mini game within a specified date range.
                 * @param req DescribeMNGRetentionDataRequest
                 * @return DescribeMNGRetentionDataOutcome
                 */
                DescribeMNGRetentionDataOutcome DescribeMNGRetentionData(const Model::DescribeMNGRetentionDataRequest &request);
                void DescribeMNGRetentionDataAsync(const Model::DescribeMNGRetentionDataRequest& request, const DescribeMNGRetentionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNGRetentionDataOutcomeCallable DescribeMNGRetentionDataCallable(const Model::DescribeMNGRetentionDataRequest& request);

                /**
                 *This API is used to query the mini program details.
                 * @param req DescribeMNPRequest
                 * @return DescribeMNPOutcome
                 */
                DescribeMNPOutcome DescribeMNP(const Model::DescribeMNPRequest &request);
                void DescribeMNPAsync(const Model::DescribeMNPRequest& request, const DescribeMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPOutcomeCallable DescribeMNPCallable(const Model::DescribeMNPRequest& request);

                /**
                 *This API is used to retrieve an overview of visit analysis data for a mini program within a specified date range.
                 * @param req DescribeMNPAccessAnalysisOverviewRequest
                 * @return DescribeMNPAccessAnalysisOverviewOutcome
                 */
                DescribeMNPAccessAnalysisOverviewOutcome DescribeMNPAccessAnalysisOverview(const Model::DescribeMNPAccessAnalysisOverviewRequest &request);
                void DescribeMNPAccessAnalysisOverviewAsync(const Model::DescribeMNPAccessAnalysisOverviewRequest& request, const DescribeMNPAccessAnalysisOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPAccessAnalysisOverviewOutcomeCallable DescribeMNPAccessAnalysisOverviewCallable(const Model::DescribeMNPAccessAnalysisOverviewRequest& request);

                /**
                 *This API is used to retrieve the real-time active user statistics for a mini program.
                 * @param req DescribeMNPActiveUserRealTimeStatisticsRequest
                 * @return DescribeMNPActiveUserRealTimeStatisticsOutcome
                 */
                DescribeMNPActiveUserRealTimeStatisticsOutcome DescribeMNPActiveUserRealTimeStatistics(const Model::DescribeMNPActiveUserRealTimeStatisticsRequest &request);
                void DescribeMNPActiveUserRealTimeStatisticsAsync(const Model::DescribeMNPActiveUserRealTimeStatisticsRequest& request, const DescribeMNPActiveUserRealTimeStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPActiveUserRealTimeStatisticsOutcomeCallable DescribeMNPActiveUserRealTimeStatisticsCallable(const Model::DescribeMNPActiveUserRealTimeStatisticsRequest& request);

                /**
                 *This API is used to retrieve the detailed advertising data for a mini program within a specified date range.
                 * @param req DescribeMNPAdvertisingDetailRequest
                 * @return DescribeMNPAdvertisingDetailOutcome
                 */
                DescribeMNPAdvertisingDetailOutcome DescribeMNPAdvertisingDetail(const Model::DescribeMNPAdvertisingDetailRequest &request);
                void DescribeMNPAdvertisingDetailAsync(const Model::DescribeMNPAdvertisingDetailRequest& request, const DescribeMNPAdvertisingDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPAdvertisingDetailOutcomeCallable DescribeMNPAdvertisingDetailCallable(const Model::DescribeMNPAdvertisingDetailRequest& request);

                /**
                 *This API is used to query the mini program version management information.
                 * @param req DescribeMNPAllStageVersionsRequest
                 * @return DescribeMNPAllStageVersionsOutcome
                 */
                DescribeMNPAllStageVersionsOutcome DescribeMNPAllStageVersions(const Model::DescribeMNPAllStageVersionsRequest &request);
                void DescribeMNPAllStageVersionsAsync(const Model::DescribeMNPAllStageVersionsRequest& request, const DescribeMNPAllStageVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPAllStageVersionsOutcomeCallable DescribeMNPAllStageVersionsCallable(const Model::DescribeMNPAllStageVersionsRequest& request);

                /**
                 *This API is used to list the approval requests related with a mini program version.
                 * @param req DescribeMNPApprovalListRequest
                 * @return DescribeMNPApprovalListOutcome
                 */
                DescribeMNPApprovalListOutcome DescribeMNPApprovalList(const Model::DescribeMNPApprovalListRequest &request);
                void DescribeMNPApprovalListAsync(const Model::DescribeMNPApprovalListRequest& request, const DescribeMNPApprovalListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPApprovalListOutcomeCallable DescribeMNPApprovalListCallable(const Model::DescribeMNPApprovalListRequest& request);

                /**
                 *This API is used to query the mini program types.
                 * @param req DescribeMNPCategoryRequest
                 * @return DescribeMNPCategoryOutcome
                 */
                DescribeMNPCategoryOutcome DescribeMNPCategory(const Model::DescribeMNPCategoryRequest &request);
                void DescribeMNPCategoryAsync(const Model::DescribeMNPCategoryRequest& request, const DescribeMNPCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPCategoryOutcomeCallable DescribeMNPCategoryCallable(const Model::DescribeMNPCategoryRequest& request);

                /**
                 *This API is used to query the domain allowlist / blocklist of a mini program.
                 * @param req DescribeMNPDomainACLRequest
                 * @return DescribeMNPDomainACLOutcome
                 */
                DescribeMNPDomainACLOutcome DescribeMNPDomainACL(const Model::DescribeMNPDomainACLRequest &request);
                void DescribeMNPDomainACLAsync(const Model::DescribeMNPDomainACLRequest& request, const DescribeMNPDomainACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPDomainACLOutcomeCallable DescribeMNPDomainACLCallable(const Model::DescribeMNPDomainACLRequest& request);

                /**
                 *This API is used to query the mini programs.
                 * @param req DescribeMNPListRequest
                 * @return DescribeMNPListOutcome
                 */
                DescribeMNPListOutcome DescribeMNPList(const Model::DescribeMNPListRequest &request);
                void DescribeMNPListAsync(const Model::DescribeMNPListRequest& request, const DescribeMNPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPListOutcomeCallable DescribeMNPListCallable(const Model::DescribeMNPListRequest& request);

                /**
                 *This API is used to retrieve the detailed mini program monthly active user data.
                 * @param req DescribeMNPMAUDataDetailRequest
                 * @return DescribeMNPMAUDataDetailOutcome
                 */
                DescribeMNPMAUDataDetailOutcome DescribeMNPMAUDataDetail(const Model::DescribeMNPMAUDataDetailRequest &request);
                void DescribeMNPMAUDataDetailAsync(const Model::DescribeMNPMAUDataDetailRequest& request, const DescribeMNPMAUDataDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPMAUDataDetailOutcomeCallable DescribeMNPMAUDataDetailCallable(const Model::DescribeMNPMAUDataDetailRequest& request);

                /**
                 *This API is used to retrieve mini program monthly active user data in a line chart format.
                 * @param req DescribeMNPMAULineChartRequest
                 * @return DescribeMNPMAULineChartOutcome
                 */
                DescribeMNPMAULineChartOutcome DescribeMNPMAULineChart(const Model::DescribeMNPMAULineChartRequest &request);
                void DescribeMNPMAULineChartAsync(const Model::DescribeMNPMAULineChartRequest& request, const DescribeMNPMAULineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPMAULineChartOutcomeCallable DescribeMNPMAULineChartCallable(const Model::DescribeMNPMAULineChartRequest& request);

                /**
                 *This API is used to retrieve MAU comparison data for a mini program between two months.
                 * @param req DescribeMNPMAUMetricCardRequest
                 * @return DescribeMNPMAUMetricCardOutcome
                 */
                DescribeMNPMAUMetricCardOutcome DescribeMNPMAUMetricCard(const Model::DescribeMNPMAUMetricCardRequest &request);
                void DescribeMNPMAUMetricCardAsync(const Model::DescribeMNPMAUMetricCardRequest& request, const DescribeMNPMAUMetricCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPMAUMetricCardOutcomeCallable DescribeMNPMAUMetricCardCallable(const Model::DescribeMNPMAUMetricCardRequest& request);

                /**
                 *DescribeMNPOfflinePackageURL
                 * @param req DescribeMNPOfflinePackageURLRequest
                 * @return DescribeMNPOfflinePackageURLOutcome
                 */
                DescribeMNPOfflinePackageURLOutcome DescribeMNPOfflinePackageURL(const Model::DescribeMNPOfflinePackageURLRequest &request);
                void DescribeMNPOfflinePackageURLAsync(const Model::DescribeMNPOfflinePackageURLRequest& request, const DescribeMNPOfflinePackageURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPOfflinePackageURLOutcomeCallable DescribeMNPOfflinePackageURLCallable(const Model::DescribeMNPOfflinePackageURLRequest& request);

                /**
                 *This API is used to retrieve the detailed page visit data for a mini program over a specified period.
                 * @param req DescribeMNPPageAnalysisDetailRequest
                 * @return DescribeMNPPageAnalysisDetailOutcome
                 */
                DescribeMNPPageAnalysisDetailOutcome DescribeMNPPageAnalysisDetail(const Model::DescribeMNPPageAnalysisDetailRequest &request);
                void DescribeMNPPageAnalysisDetailAsync(const Model::DescribeMNPPageAnalysisDetailRequest& request, const DescribeMNPPageAnalysisDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPPageAnalysisDetailOutcomeCallable DescribeMNPPageAnalysisDetailCallable(const Model::DescribeMNPPageAnalysisDetailRequest& request);

                /**
                 *This API is used to query the mini program preview details.
                 * @param req DescribeMNPPreviewRequest
                 * @return DescribeMNPPreviewOutcome
                 */
                DescribeMNPPreviewOutcome DescribeMNPPreview(const Model::DescribeMNPPreviewRequest &request);
                void DescribeMNPPreviewAsync(const Model::DescribeMNPPreviewRequest& request, const DescribeMNPPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPPreviewOutcomeCallable DescribeMNPPreviewCallable(const Model::DescribeMNPPreviewRequest& request);

                /**
                 *This API is used to list all released versions of a mini program.
                 * @param req DescribeMNPReleasedVersionHistoryRequest
                 * @return DescribeMNPReleasedVersionHistoryOutcome
                 */
                DescribeMNPReleasedVersionHistoryOutcome DescribeMNPReleasedVersionHistory(const Model::DescribeMNPReleasedVersionHistoryRequest &request);
                void DescribeMNPReleasedVersionHistoryAsync(const Model::DescribeMNPReleasedVersionHistoryRequest& request, const DescribeMNPReleasedVersionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPReleasedVersionHistoryOutcomeCallable DescribeMNPReleasedVersionHistoryCallable(const Model::DescribeMNPReleasedVersionHistoryRequest& request);

                /**
                 *This API is used to retrieve the line chart data for mini program visit analysis within a given date range.
                 * @param req DescribeMNPReportDataLineChartRequest
                 * @return DescribeMNPReportDataLineChartOutcome
                 */
                DescribeMNPReportDataLineChartOutcome DescribeMNPReportDataLineChart(const Model::DescribeMNPReportDataLineChartRequest &request);
                void DescribeMNPReportDataLineChartAsync(const Model::DescribeMNPReportDataLineChartRequest& request, const DescribeMNPReportDataLineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPReportDataLineChartOutcomeCallable DescribeMNPReportDataLineChartCallable(const Model::DescribeMNPReportDataLineChartRequest& request);

                /**
                 *This API is used to retrieve the detailed mini program visit analysis data.
                 * @param req DescribeMNPReportDetailRequest
                 * @return DescribeMNPReportDetailOutcome
                 */
                DescribeMNPReportDetailOutcome DescribeMNPReportDetail(const Model::DescribeMNPReportDetailRequest &request);
                void DescribeMNPReportDetailAsync(const Model::DescribeMNPReportDetailRequest& request, const DescribeMNPReportDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPReportDetailOutcomeCallable DescribeMNPReportDetailCallable(const Model::DescribeMNPReportDetailRequest& request);

                /**
                 *This API is used to retrieve user retention data for a mini program within a specified date range.
                 * @param req DescribeMNPRetentionDataRequest
                 * @return DescribeMNPRetentionDataOutcome
                 */
                DescribeMNPRetentionDataOutcome DescribeMNPRetentionData(const Model::DescribeMNPRetentionDataRequest &request);
                void DescribeMNPRetentionDataAsync(const Model::DescribeMNPRetentionDataRequest& request, const DescribeMNPRetentionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPRetentionDataOutcomeCallable DescribeMNPRetentionDataCallable(const Model::DescribeMNPRetentionDataRequest& request);

                /**
                 *This API is used to query details of a specific permission request to call sensitive APIs.
                 * @param req DescribeMNPSensitiveAPIPermissionApprovalRequest
                 * @return DescribeMNPSensitiveAPIPermissionApprovalOutcome
                 */
                DescribeMNPSensitiveAPIPermissionApprovalOutcome DescribeMNPSensitiveAPIPermissionApproval(const Model::DescribeMNPSensitiveAPIPermissionApprovalRequest &request);
                void DescribeMNPSensitiveAPIPermissionApprovalAsync(const Model::DescribeMNPSensitiveAPIPermissionApprovalRequest& request, const DescribeMNPSensitiveAPIPermissionApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPSensitiveAPIPermissionApprovalOutcomeCallable DescribeMNPSensitiveAPIPermissionApprovalCallable(const Model::DescribeMNPSensitiveAPIPermissionApprovalRequest& request);

                /**
                 *This API is used to query permission requests to allow a mini program calling sensitive APIs.
                 * @param req DescribeMNPSensitiveAPIPermissionApprovalListRequest
                 * @return DescribeMNPSensitiveAPIPermissionApprovalListOutcome
                 */
                DescribeMNPSensitiveAPIPermissionApprovalListOutcome DescribeMNPSensitiveAPIPermissionApprovalList(const Model::DescribeMNPSensitiveAPIPermissionApprovalListRequest &request);
                void DescribeMNPSensitiveAPIPermissionApprovalListAsync(const Model::DescribeMNPSensitiveAPIPermissionApprovalListRequest& request, const DescribeMNPSensitiveAPIPermissionApprovalListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPSensitiveAPIPermissionApprovalListOutcomeCallable DescribeMNPSensitiveAPIPermissionApprovalListCallable(const Model::DescribeMNPSensitiveAPIPermissionApprovalListRequest& request);

                /**
                 *This API is used to query the list of sensitive APIs that available to a mini program.
                 * @param req DescribeMNPSensitiveAPIPermissionListRequest
                 * @return DescribeMNPSensitiveAPIPermissionListOutcome
                 */
                DescribeMNPSensitiveAPIPermissionListOutcome DescribeMNPSensitiveAPIPermissionList(const Model::DescribeMNPSensitiveAPIPermissionListRequest &request);
                void DescribeMNPSensitiveAPIPermissionListAsync(const Model::DescribeMNPSensitiveAPIPermissionListRequest& request, const DescribeMNPSensitiveAPIPermissionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPSensitiveAPIPermissionListOutcomeCallable DescribeMNPSensitiveAPIPermissionListCallable(const Model::DescribeMNPSensitiveAPIPermissionListRequest& request);

                /**
                 *This API is used to query the mini program version creation results.
                 * @param req DescribeMNPVersionRequest
                 * @return DescribeMNPVersionOutcome
                 */
                DescribeMNPVersionOutcome DescribeMNPVersion(const Model::DescribeMNPVersionRequest &request);
                void DescribeMNPVersionAsync(const Model::DescribeMNPVersionRequest& request, const DescribeMNPVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMNPVersionOutcomeCallable DescribeMNPVersionCallable(const Model::DescribeMNPVersionRequest& request);

                /**
                 *This API is used to retrieve the detailed standard payment data for specified  mini programs within a specified date range.
                 * @param req DescribePaymentDataDetailRequest
                 * @return DescribePaymentDataDetailOutcome
                 */
                DescribePaymentDataDetailOutcome DescribePaymentDataDetail(const Model::DescribePaymentDataDetailRequest &request);
                void DescribePaymentDataDetailAsync(const Model::DescribePaymentDataDetailRequest& request, const DescribePaymentDataDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePaymentDataDetailOutcomeCallable DescribePaymentDataDetailCallable(const Model::DescribePaymentDataDetailRequest& request);

                /**
                 *This API is used to retrieve the line chart data related to standard payment for a mini program within a specified date range.
                 * @param req DescribePaymentDataLineChartRequest
                 * @return DescribePaymentDataLineChartOutcome
                 */
                DescribePaymentDataLineChartOutcome DescribePaymentDataLineChart(const Model::DescribePaymentDataLineChartRequest &request);
                void DescribePaymentDataLineChartAsync(const Model::DescribePaymentDataLineChartRequest& request, const DescribePaymentDataLineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePaymentDataLineChartOutcomeCallable DescribePaymentDataLineChartCallable(const Model::DescribePaymentDataLineChartRequest& request);

                /**
                 *This API is used to retrieve an overview of mini program payment data within a specified date range.
                 * @param req DescribePaymentDataOverviewRequest
                 * @return DescribePaymentDataOverviewOutcome
                 */
                DescribePaymentDataOverviewOutcome DescribePaymentDataOverview(const Model::DescribePaymentDataOverviewRequest &request);
                void DescribePaymentDataOverviewAsync(const Model::DescribePaymentDataOverviewRequest& request, const DescribePaymentDataOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePaymentDataOverviewOutcomeCallable DescribePaymentDataOverviewCallable(const Model::DescribePaymentDataOverviewRequest& request);

                /**
                 *This API is used to query the roles.
                 * @param req DescribeRoleListRequest
                 * @return DescribeRoleListOutcome
                 */
                DescribeRoleListOutcome DescribeRoleList(const Model::DescribeRoleListRequest &request);
                void DescribeRoleListAsync(const Model::DescribeRoleListRequest& request, const DescribeRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoleListOutcomeCallable DescribeRoleListCallable(const Model::DescribeRoleListRequest& request);

                /**
                 *This API is used to query the team details.
                 * @param req DescribeTeamRequest
                 * @return DescribeTeamOutcome
                 */
                DescribeTeamOutcome DescribeTeam(const Model::DescribeTeamRequest &request);
                void DescribeTeamAsync(const Model::DescribeTeamRequest& request, const DescribeTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTeamOutcomeCallable DescribeTeamCallable(const Model::DescribeTeamRequest& request);

                /**
                 *This API is used to query the teams.
                 * @param req DescribeTeamListRequest
                 * @return DescribeTeamListOutcome
                 */
                DescribeTeamListOutcome DescribeTeamList(const Model::DescribeTeamListRequest &request);
                void DescribeTeamListAsync(const Model::DescribeTeamListRequest& request, const DescribeTeamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTeamListOutcomeCallable DescribeTeamListCallable(const Model::DescribeTeamListRequest& request);

                /**
                 *This API is used to query the team members.
                 * @param req DescribeTeamMemberListRequest
                 * @return DescribeTeamMemberListOutcome
                 */
                DescribeTeamMemberListOutcome DescribeTeamMemberList(const Model::DescribeTeamMemberListRequest &request);
                void DescribeTeamMemberListAsync(const Model::DescribeTeamMemberListRequest& request, const DescribeTeamMemberListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTeamMemberListOutcomeCallable DescribeTeamMemberListCallable(const Model::DescribeTeamMemberListRequest& request);

                /**
                 *This API is used to obtain a temporary key for file uploads.
                 * @param req DescribeTempSecret4UploadFile2CosRequest
                 * @return DescribeTempSecret4UploadFile2CosOutcome
                 */
                DescribeTempSecret4UploadFile2CosOutcome DescribeTempSecret4UploadFile2Cos(const Model::DescribeTempSecret4UploadFile2CosRequest &request);
                void DescribeTempSecret4UploadFile2CosAsync(const Model::DescribeTempSecret4UploadFile2CosRequest& request, const DescribeTempSecret4UploadFile2CosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTempSecret4UploadFile2CosOutcomeCallable DescribeTempSecret4UploadFile2CosCallable(const Model::DescribeTempSecret4UploadFile2CosRequest& request);

                /**
                 *This API is used to query the user details.
                 * @param req DescribeUserRequest
                 * @return DescribeUserOutcome
                 */
                DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest &request);
                void DescribeUserAsync(const Model::DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request);

                /**
                 *This API is used to query the users.
                 * @param req DescribeUserListRequest
                 * @return DescribeUserListOutcome
                 */
                DescribeUserListOutcome DescribeUserList(const Model::DescribeUserListRequest &request);
                void DescribeUserListAsync(const Model::DescribeUserListRequest& request, const DescribeUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserListOutcomeCallable DescribeUserListCallable(const Model::DescribeUserListRequest& request);

                /**
                 *This API is used to set a sensitive API to restricted.
                 * @param req DisableApplicationSensitiveAPIRequest
                 * @return DisableApplicationSensitiveAPIOutcome
                 */
                DisableApplicationSensitiveAPIOutcome DisableApplicationSensitiveAPI(const Model::DisableApplicationSensitiveAPIRequest &request);
                void DisableApplicationSensitiveAPIAsync(const Model::DisableApplicationSensitiveAPIRequest& request, const DisableApplicationSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableApplicationSensitiveAPIOutcomeCallable DisableApplicationSensitiveAPICallable(const Model::DisableApplicationSensitiveAPIRequest& request);

                /**
                 *This API is used to set an application sensitive API to public.
                 * @param req EnableApplicationSensitiveAPIRequest
                 * @return EnableApplicationSensitiveAPIOutcome
                 */
                EnableApplicationSensitiveAPIOutcome EnableApplicationSensitiveAPI(const Model::EnableApplicationSensitiveAPIRequest &request);
                void EnableApplicationSensitiveAPIAsync(const Model::EnableApplicationSensitiveAPIRequest& request, const EnableApplicationSensitiveAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableApplicationSensitiveAPIOutcomeCallable EnableApplicationSensitiveAPICallable(const Model::EnableApplicationSensitiveAPIRequest& request);

                /**
                 *This API is used to change the application information.
                 * @param req ModifyApplicationRequest
                 * @return ModifyApplicationOutcome
                 */
                ModifyApplicationOutcome ModifyApplication(const Model::ModifyApplicationRequest &request);
                void ModifyApplicationAsync(const Model::ModifyApplicationRequest& request, const ModifyApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationOutcomeCallable ModifyApplicationCallable(const Model::ModifyApplicationRequest& request);

                /**
                 *This API is used to edit the configuration of a superapp.
                 * @param req ModifyApplicationConfigRequest
                 * @return ModifyApplicationConfigOutcome
                 */
                ModifyApplicationConfigOutcome ModifyApplicationConfig(const Model::ModifyApplicationConfigRequest &request);
                void ModifyApplicationConfigAsync(const Model::ModifyApplicationConfigRequest& request, const ModifyApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationConfigOutcomeCallable ModifyApplicationConfigCallable(const Model::ModifyApplicationConfigRequest& request);

                /**
                 *This API is used to modify the domain allowlist or blocklist.
                 * @param req ModifyGlobalDomainRequest
                 * @return ModifyGlobalDomainOutcome
                 */
                ModifyGlobalDomainOutcome ModifyGlobalDomain(const Model::ModifyGlobalDomainRequest &request);
                void ModifyGlobalDomainAsync(const Model::ModifyGlobalDomainRequest& request, const ModifyGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGlobalDomainOutcomeCallable ModifyGlobalDomainCallable(const Model::ModifyGlobalDomainRequest& request);

                /**
                 *This API is used to modify the mini program information.
                 * @param req ModifyMNPRequest
                 * @return ModifyMNPOutcome
                 */
                ModifyMNPOutcome ModifyMNP(const Model::ModifyMNPRequest &request);
                void ModifyMNPAsync(const Model::ModifyMNPRequest& request, const ModifyMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMNPOutcomeCallable ModifyMNPCallable(const Model::ModifyMNPRequest& request);

                /**
                 *This API is used to edit the mini program domain information.
                 * @param req ModifyMNPDomainRequest
                 * @return ModifyMNPDomainOutcome
                 */
                ModifyMNPDomainOutcome ModifyMNPDomain(const Model::ModifyMNPDomainRequest &request);
                void ModifyMNPDomainAsync(const Model::ModifyMNPDomainRequest& request, const ModifyMNPDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMNPDomainOutcomeCallable ModifyMNPDomainCallable(const Model::ModifyMNPDomainRequest& request);

                /**
                 *This API is used to change the team information.
                 * @param req ModifyTeamRequest
                 * @return ModifyTeamOutcome
                 */
                ModifyTeamOutcome ModifyTeam(const Model::ModifyTeamRequest &request);
                void ModifyTeamAsync(const Model::ModifyTeamRequest& request, const ModifyTeamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTeamOutcomeCallable ModifyTeamCallable(const Model::ModifyTeamRequest& request);

                /**
                 *This API is used to modify the team member information.
                 * @param req ModifyTeamMemberRequest
                 * @return ModifyTeamMemberOutcome
                 */
                ModifyTeamMemberOutcome ModifyTeamMember(const Model::ModifyTeamMemberRequest &request);
                void ModifyTeamMemberAsync(const Model::ModifyTeamMemberRequest& request, const ModifyTeamMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTeamMemberOutcomeCallable ModifyTeamMemberCallable(const Model::ModifyTeamMemberRequest& request);

                /**
                 *This API is used to modify the user information.
                 * @param req ModifyUserRequest
                 * @return ModifyUserOutcome
                 */
                ModifyUserOutcome ModifyUser(const Model::ModifyUserRequest &request);
                void ModifyUserAsync(const Model::ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserOutcomeCallable ModifyUserCallable(const Model::ModifyUserRequest& request);

                /**
                 *This API is used to approve or reject the release of a mini program version.
                 * @param req ProcessMNPApprovalRequest
                 * @return ProcessMNPApprovalOutcome
                 */
                ProcessMNPApprovalOutcome ProcessMNPApproval(const Model::ProcessMNPApprovalRequest &request);
                void ProcessMNPApprovalAsync(const Model::ProcessMNPApprovalRequest& request, const ProcessMNPApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMNPApprovalOutcomeCallable ProcessMNPApprovalCallable(const Model::ProcessMNPApprovalRequest& request);

                /**
                 *This API is used to approve or reject the sensitive API permission requests.
                 * @param req ProcessMNPSensitiveAPIPermissionApprovalRequest
                 * @return ProcessMNPSensitiveAPIPermissionApprovalOutcome
                 */
                ProcessMNPSensitiveAPIPermissionApprovalOutcome ProcessMNPSensitiveAPIPermissionApproval(const Model::ProcessMNPSensitiveAPIPermissionApprovalRequest &request);
                void ProcessMNPSensitiveAPIPermissionApprovalAsync(const Model::ProcessMNPSensitiveAPIPermissionApprovalRequest& request, const ProcessMNPSensitiveAPIPermissionApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ProcessMNPSensitiveAPIPermissionApprovalOutcomeCallable ProcessMNPSensitiveAPIPermissionApprovalCallable(const Model::ProcessMNPSensitiveAPIPermissionApprovalRequest& request);

                /**
                 *This API is used to release a mini program version.
                 * @param req ReleaseMNPVersionRequest
                 * @return ReleaseMNPVersionOutcome
                 */
                ReleaseMNPVersionOutcome ReleaseMNPVersion(const Model::ReleaseMNPVersionRequest &request);
                void ReleaseMNPVersionAsync(const Model::ReleaseMNPVersionRequest& request, const ReleaseMNPVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseMNPVersionOutcomeCallable ReleaseMNPVersionCallable(const Model::ReleaseMNPVersionRequest& request);

                /**
                 *This API is used to remove a mini program.
                 * @param req RemoveMNPRequest
                 * @return RemoveMNPOutcome
                 */
                RemoveMNPOutcome RemoveMNP(const Model::RemoveMNPRequest &request);
                void RemoveMNPAsync(const Model::RemoveMNPRequest& request, const RemoveMNPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveMNPOutcomeCallable RemoveMNPCallable(const Model::RemoveMNPRequest& request);

                /**
                 *This API is used to rollback a mini program online version.
                 * @param req RollbackMNPVersionRequest
                 * @return RollbackMNPVersionOutcome
                 */
                RollbackMNPVersionOutcome RollbackMNPVersion(const Model::RollbackMNPVersionRequest &request);
                void RollbackMNPVersionAsync(const Model::RollbackMNPVersionRequest& request, const RollbackMNPVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackMNPVersionOutcomeCallable RollbackMNPVersionCallable(const Model::RollbackMNPVersionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_TCSASCLIENT_H_
