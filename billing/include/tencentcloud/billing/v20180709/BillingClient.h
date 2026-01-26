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

#ifndef TENCENTCLOUD_BILLING_V20180709_BILLINGCLIENT_H_
#define TENCENTCLOUD_BILLING_V20180709_BILLINGCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/billing/v20180709/model/CreateAllocationRuleRequest.h>
#include <tencentcloud/billing/v20180709/model/CreateAllocationRuleResponse.h>
#include <tencentcloud/billing/v20180709/model/CreateAllocationTagRequest.h>
#include <tencentcloud/billing/v20180709/model/CreateAllocationTagResponse.h>
#include <tencentcloud/billing/v20180709/model/CreateAllocationUnitRequest.h>
#include <tencentcloud/billing/v20180709/model/CreateAllocationUnitResponse.h>
#include <tencentcloud/billing/v20180709/model/CreateGatherRuleRequest.h>
#include <tencentcloud/billing/v20180709/model/CreateGatherRuleResponse.h>
#include <tencentcloud/billing/v20180709/model/CreateInstanceRequest.h>
#include <tencentcloud/billing/v20180709/model/CreateInstanceResponse.h>
#include <tencentcloud/billing/v20180709/model/DeleteAllocationRuleRequest.h>
#include <tencentcloud/billing/v20180709/model/DeleteAllocationRuleResponse.h>
#include <tencentcloud/billing/v20180709/model/DeleteAllocationTagRequest.h>
#include <tencentcloud/billing/v20180709/model/DeleteAllocationTagResponse.h>
#include <tencentcloud/billing/v20180709/model/DeleteAllocationUnitRequest.h>
#include <tencentcloud/billing/v20180709/model/DeleteAllocationUnitResponse.h>
#include <tencentcloud/billing/v20180709/model/DeleteGatherRuleRequest.h>
#include <tencentcloud/billing/v20180709/model/DeleteGatherRuleResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeAccountBalanceRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAccountBalanceResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationRuleDetailRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationRuleDetailResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationRuleSummaryRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationRuleSummaryResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationTreeRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationTreeResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationUnitDetailRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAllocationUnitDetailResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillAdjustInfoRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillAdjustInfoResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillDetailRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillDetailResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillDetailForOrganizationRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillDetailForOrganizationResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillDownloadUrlRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillDownloadUrlResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryForOrganizationRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryForOrganizationResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByPayModeRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByPayModeResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByProductRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByProductResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByProjectRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByProjectResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByRegionRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByRegionResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByTagRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByTagResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryForOrganizationRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryForOrganizationResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostDetailRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostDetailResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostExplorerSummaryRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostExplorerSummaryResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostSummaryByProductRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostSummaryByProductResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostSummaryByProjectRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostSummaryByProjectResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostSummaryByRegionRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostSummaryByRegionResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostSummaryByResourceRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeCostSummaryByResourceResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeDealsByCondRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeDealsByCondResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeDosageCosDetailByDateRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeDosageCosDetailByDateResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeGatherRuleDetailRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeGatherRuleDetailResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeTagListRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeTagListResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeVoucherInfoRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeVoucherInfoResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeVoucherUsageDetailsRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeVoucherUsageDetailsResponse.h>
#include <tencentcloud/billing/v20180709/model/ModifyAllocationRuleRequest.h>
#include <tencentcloud/billing/v20180709/model/ModifyAllocationRuleResponse.h>
#include <tencentcloud/billing/v20180709/model/ModifyAllocationUnitRequest.h>
#include <tencentcloud/billing/v20180709/model/ModifyAllocationUnitResponse.h>
#include <tencentcloud/billing/v20180709/model/ModifyGatherRuleRequest.h>
#include <tencentcloud/billing/v20180709/model/ModifyGatherRuleResponse.h>
#include <tencentcloud/billing/v20180709/model/PayDealsRequest.h>
#include <tencentcloud/billing/v20180709/model/PayDealsResponse.h>
#include <tencentcloud/billing/v20180709/model/RefundInstanceRequest.h>
#include <tencentcloud/billing/v20180709/model/RefundInstanceResponse.h>
#include <tencentcloud/billing/v20180709/model/RenewInstanceRequest.h>
#include <tencentcloud/billing/v20180709/model/RenewInstanceResponse.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            class BillingClient : public AbstractClient
            {
            public:
                BillingClient(const Credential &credential, const std::string &region);
                BillingClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateAllocationRuleResponse> CreateAllocationRuleOutcome;
                typedef std::future<CreateAllocationRuleOutcome> CreateAllocationRuleOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::CreateAllocationRuleRequest&, CreateAllocationRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAllocationRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAllocationTagResponse> CreateAllocationTagOutcome;
                typedef std::future<CreateAllocationTagOutcome> CreateAllocationTagOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::CreateAllocationTagRequest&, CreateAllocationTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAllocationTagAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAllocationUnitResponse> CreateAllocationUnitOutcome;
                typedef std::future<CreateAllocationUnitOutcome> CreateAllocationUnitOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::CreateAllocationUnitRequest&, CreateAllocationUnitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAllocationUnitAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGatherRuleResponse> CreateGatherRuleOutcome;
                typedef std::future<CreateGatherRuleOutcome> CreateGatherRuleOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::CreateGatherRuleRequest&, CreateGatherRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGatherRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceResponse> CreateInstanceOutcome;
                typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::CreateInstanceRequest&, CreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAllocationRuleResponse> DeleteAllocationRuleOutcome;
                typedef std::future<DeleteAllocationRuleOutcome> DeleteAllocationRuleOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DeleteAllocationRuleRequest&, DeleteAllocationRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAllocationRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAllocationTagResponse> DeleteAllocationTagOutcome;
                typedef std::future<DeleteAllocationTagOutcome> DeleteAllocationTagOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DeleteAllocationTagRequest&, DeleteAllocationTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAllocationTagAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAllocationUnitResponse> DeleteAllocationUnitOutcome;
                typedef std::future<DeleteAllocationUnitOutcome> DeleteAllocationUnitOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DeleteAllocationUnitRequest&, DeleteAllocationUnitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAllocationUnitAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGatherRuleResponse> DeleteGatherRuleOutcome;
                typedef std::future<DeleteGatherRuleOutcome> DeleteGatherRuleOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DeleteGatherRuleRequest&, DeleteGatherRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatherRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountBalanceResponse> DescribeAccountBalanceOutcome;
                typedef std::future<DescribeAccountBalanceOutcome> DescribeAccountBalanceOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAccountBalanceRequest&, DescribeAccountBalanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountBalanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllocationRuleDetailResponse> DescribeAllocationRuleDetailOutcome;
                typedef std::future<DescribeAllocationRuleDetailOutcome> DescribeAllocationRuleDetailOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAllocationRuleDetailRequest&, DescribeAllocationRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllocationRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllocationRuleSummaryResponse> DescribeAllocationRuleSummaryOutcome;
                typedef std::future<DescribeAllocationRuleSummaryOutcome> DescribeAllocationRuleSummaryOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAllocationRuleSummaryRequest&, DescribeAllocationRuleSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllocationRuleSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllocationTreeResponse> DescribeAllocationTreeOutcome;
                typedef std::future<DescribeAllocationTreeOutcome> DescribeAllocationTreeOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAllocationTreeRequest&, DescribeAllocationTreeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllocationTreeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllocationUnitDetailResponse> DescribeAllocationUnitDetailOutcome;
                typedef std::future<DescribeAllocationUnitDetailOutcome> DescribeAllocationUnitDetailOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAllocationUnitDetailRequest&, DescribeAllocationUnitDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllocationUnitDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillAdjustInfoResponse> DescribeBillAdjustInfoOutcome;
                typedef std::future<DescribeBillAdjustInfoOutcome> DescribeBillAdjustInfoOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillAdjustInfoRequest&, DescribeBillAdjustInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillAdjustInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillDetailResponse> DescribeBillDetailOutcome;
                typedef std::future<DescribeBillDetailOutcome> DescribeBillDetailOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillDetailRequest&, DescribeBillDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillDetailForOrganizationResponse> DescribeBillDetailForOrganizationOutcome;
                typedef std::future<DescribeBillDetailForOrganizationOutcome> DescribeBillDetailForOrganizationOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillDetailForOrganizationRequest&, DescribeBillDetailForOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillDetailForOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillDownloadUrlResponse> DescribeBillDownloadUrlOutcome;
                typedef std::future<DescribeBillDownloadUrlOutcome> DescribeBillDownloadUrlOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillDownloadUrlRequest&, DescribeBillDownloadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillDownloadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillResourceSummaryResponse> DescribeBillResourceSummaryOutcome;
                typedef std::future<DescribeBillResourceSummaryOutcome> DescribeBillResourceSummaryOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillResourceSummaryRequest&, DescribeBillResourceSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillResourceSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillResourceSummaryForOrganizationResponse> DescribeBillResourceSummaryForOrganizationOutcome;
                typedef std::future<DescribeBillResourceSummaryForOrganizationOutcome> DescribeBillResourceSummaryForOrganizationOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillResourceSummaryForOrganizationRequest&, DescribeBillResourceSummaryForOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillResourceSummaryForOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillSummaryResponse> DescribeBillSummaryOutcome;
                typedef std::future<DescribeBillSummaryOutcome> DescribeBillSummaryOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillSummaryRequest&, DescribeBillSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillSummaryByPayModeResponse> DescribeBillSummaryByPayModeOutcome;
                typedef std::future<DescribeBillSummaryByPayModeOutcome> DescribeBillSummaryByPayModeOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillSummaryByPayModeRequest&, DescribeBillSummaryByPayModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillSummaryByPayModeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillSummaryByProductResponse> DescribeBillSummaryByProductOutcome;
                typedef std::future<DescribeBillSummaryByProductOutcome> DescribeBillSummaryByProductOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillSummaryByProductRequest&, DescribeBillSummaryByProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillSummaryByProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillSummaryByProjectResponse> DescribeBillSummaryByProjectOutcome;
                typedef std::future<DescribeBillSummaryByProjectOutcome> DescribeBillSummaryByProjectOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillSummaryByProjectRequest&, DescribeBillSummaryByProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillSummaryByProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillSummaryByRegionResponse> DescribeBillSummaryByRegionOutcome;
                typedef std::future<DescribeBillSummaryByRegionOutcome> DescribeBillSummaryByRegionOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillSummaryByRegionRequest&, DescribeBillSummaryByRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillSummaryByRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillSummaryByTagResponse> DescribeBillSummaryByTagOutcome;
                typedef std::future<DescribeBillSummaryByTagOutcome> DescribeBillSummaryByTagOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillSummaryByTagRequest&, DescribeBillSummaryByTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillSummaryByTagAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillSummaryForOrganizationResponse> DescribeBillSummaryForOrganizationOutcome;
                typedef std::future<DescribeBillSummaryForOrganizationOutcome> DescribeBillSummaryForOrganizationOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillSummaryForOrganizationRequest&, DescribeBillSummaryForOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillSummaryForOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCostDetailResponse> DescribeCostDetailOutcome;
                typedef std::future<DescribeCostDetailOutcome> DescribeCostDetailOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeCostDetailRequest&, DescribeCostDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCostDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCostExplorerSummaryResponse> DescribeCostExplorerSummaryOutcome;
                typedef std::future<DescribeCostExplorerSummaryOutcome> DescribeCostExplorerSummaryOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeCostExplorerSummaryRequest&, DescribeCostExplorerSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCostExplorerSummaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCostSummaryByProductResponse> DescribeCostSummaryByProductOutcome;
                typedef std::future<DescribeCostSummaryByProductOutcome> DescribeCostSummaryByProductOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeCostSummaryByProductRequest&, DescribeCostSummaryByProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCostSummaryByProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCostSummaryByProjectResponse> DescribeCostSummaryByProjectOutcome;
                typedef std::future<DescribeCostSummaryByProjectOutcome> DescribeCostSummaryByProjectOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeCostSummaryByProjectRequest&, DescribeCostSummaryByProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCostSummaryByProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCostSummaryByRegionResponse> DescribeCostSummaryByRegionOutcome;
                typedef std::future<DescribeCostSummaryByRegionOutcome> DescribeCostSummaryByRegionOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeCostSummaryByRegionRequest&, DescribeCostSummaryByRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCostSummaryByRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCostSummaryByResourceResponse> DescribeCostSummaryByResourceOutcome;
                typedef std::future<DescribeCostSummaryByResourceOutcome> DescribeCostSummaryByResourceOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeCostSummaryByResourceRequest&, DescribeCostSummaryByResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCostSummaryByResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDealsByCondResponse> DescribeDealsByCondOutcome;
                typedef std::future<DescribeDealsByCondOutcome> DescribeDealsByCondOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeDealsByCondRequest&, DescribeDealsByCondOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDealsByCondAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDosageCosDetailByDateResponse> DescribeDosageCosDetailByDateOutcome;
                typedef std::future<DescribeDosageCosDetailByDateOutcome> DescribeDosageCosDetailByDateOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeDosageCosDetailByDateRequest&, DescribeDosageCosDetailByDateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDosageCosDetailByDateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatherRuleDetailResponse> DescribeGatherRuleDetailOutcome;
                typedef std::future<DescribeGatherRuleDetailOutcome> DescribeGatherRuleDetailOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeGatherRuleDetailRequest&, DescribeGatherRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatherRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagListResponse> DescribeTagListOutcome;
                typedef std::future<DescribeTagListOutcome> DescribeTagListOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeTagListRequest&, DescribeTagListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVoucherInfoResponse> DescribeVoucherInfoOutcome;
                typedef std::future<DescribeVoucherInfoOutcome> DescribeVoucherInfoOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeVoucherInfoRequest&, DescribeVoucherInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVoucherInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVoucherUsageDetailsResponse> DescribeVoucherUsageDetailsOutcome;
                typedef std::future<DescribeVoucherUsageDetailsOutcome> DescribeVoucherUsageDetailsOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeVoucherUsageDetailsRequest&, DescribeVoucherUsageDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVoucherUsageDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAllocationRuleResponse> ModifyAllocationRuleOutcome;
                typedef std::future<ModifyAllocationRuleOutcome> ModifyAllocationRuleOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::ModifyAllocationRuleRequest&, ModifyAllocationRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAllocationRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAllocationUnitResponse> ModifyAllocationUnitOutcome;
                typedef std::future<ModifyAllocationUnitOutcome> ModifyAllocationUnitOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::ModifyAllocationUnitRequest&, ModifyAllocationUnitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAllocationUnitAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGatherRuleResponse> ModifyGatherRuleOutcome;
                typedef std::future<ModifyGatherRuleOutcome> ModifyGatherRuleOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::ModifyGatherRuleRequest&, ModifyGatherRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGatherRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::PayDealsResponse> PayDealsOutcome;
                typedef std::future<PayDealsOutcome> PayDealsOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::PayDealsRequest&, PayDealsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PayDealsAsyncHandler;
                typedef Outcome<Core::Error, Model::RefundInstanceResponse> RefundInstanceOutcome;
                typedef std::future<RefundInstanceOutcome> RefundInstanceOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::RefundInstanceRequest&, RefundInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RefundInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewInstanceResponse> RenewInstanceOutcome;
                typedef std::future<RenewInstanceOutcome> RenewInstanceOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::RenewInstanceRequest&, RenewInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstanceAsyncHandler;



                /**
                 *Create a sharing rule.
                 * @param req CreateAllocationRuleRequest
                 * @return CreateAllocationRuleOutcome
                 */
                CreateAllocationRuleOutcome CreateAllocationRule(const Model::CreateAllocationRuleRequest &request);
                void CreateAllocationRuleAsync(const Model::CreateAllocationRuleRequest& request, const CreateAllocationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAllocationRuleOutcomeCallable CreateAllocationRuleCallable(const Model::CreateAllocationRuleRequest& request);

                /**
                 *This API is used to batch set cost allocation tags.
                 * @param req CreateAllocationTagRequest
                 * @return CreateAllocationTagOutcome
                 */
                CreateAllocationTagOutcome CreateAllocationTag(const Model::CreateAllocationTagRequest &request);
                void CreateAllocationTagAsync(const Model::CreateAllocationTagRequest& request, const CreateAllocationTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAllocationTagOutcomeCallable CreateAllocationTagCallable(const Model::CreateAllocationTagRequest& request);

                /**
                 *This API is used to create allocation units.
                 * @param req CreateAllocationUnitRequest
                 * @return CreateAllocationUnitOutcome
                 */
                CreateAllocationUnitOutcome CreateAllocationUnit(const Model::CreateAllocationUnitRequest &request);
                void CreateAllocationUnitAsync(const Model::CreateAllocationUnitRequest& request, const CreateAllocationUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAllocationUnitOutcomeCallable CreateAllocationUnitCallable(const Model::CreateAllocationUnitRequest& request);

                /**
                 *Create a collection rule.
                 * @param req CreateGatherRuleRequest
                 * @return CreateGatherRuleOutcome
                 */
                CreateGatherRuleOutcome CreateGatherRule(const Model::CreateGatherRuleRequest &request);
                void CreateGatherRuleAsync(const Model::CreateGatherRuleRequest& request, const CreateGatherRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGatherRuleOutcomeCallable CreateGatherRuleCallable(const Model::CreateGatherRuleRequest& request);

                /**
                 *Creating an instance resource will generate an order for the newly purchased instance resource and automatically complete the payment using the balance of the Tencent Cloud account. The account calling this API must be granted the finace:trade permission; otherwise, the payment will fail.
Currently, the integrated and supported product for purchase includes: Cloud Firewall.
                 * @param req CreateInstanceRequest
                 * @return CreateInstanceOutcome
                 */
                CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest &request);
                void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request);

                /**
                 *Delete sharing rule interface.
                 * @param req DeleteAllocationRuleRequest
                 * @return DeleteAllocationRuleOutcome
                 */
                DeleteAllocationRuleOutcome DeleteAllocationRule(const Model::DeleteAllocationRuleRequest &request);
                void DeleteAllocationRuleAsync(const Model::DeleteAllocationRuleRequest& request, const DeleteAllocationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAllocationRuleOutcomeCallable DeleteAllocationRuleCallable(const Model::DeleteAllocationRuleRequest& request);

                /**
                 *u200cThis API is used to batch cancel cost allocation tags.
                 * @param req DeleteAllocationTagRequest
                 * @return DeleteAllocationTagOutcome
                 */
                DeleteAllocationTagOutcome DeleteAllocationTag(const Model::DeleteAllocationTagRequest &request);
                void DeleteAllocationTagAsync(const Model::DeleteAllocationTagRequest& request, const DeleteAllocationTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAllocationTagOutcomeCallable DeleteAllocationTagCallable(const Model::DeleteAllocationTagRequest& request);

                /**
                 *Delete a cost allocation unit.
                 * @param req DeleteAllocationUnitRequest
                 * @return DeleteAllocationUnitOutcome
                 */
                DeleteAllocationUnitOutcome DeleteAllocationUnit(const Model::DeleteAllocationUnitRequest &request);
                void DeleteAllocationUnitAsync(const Model::DeleteAllocationUnitRequest& request, const DeleteAllocationUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAllocationUnitOutcomeCallable DeleteAllocationUnitCallable(const Model::DeleteAllocationUnitRequest& request);

                /**
                 *Delete a collection rule.
                 * @param req DeleteGatherRuleRequest
                 * @return DeleteGatherRuleOutcome
                 */
                DeleteGatherRuleOutcome DeleteGatherRule(const Model::DeleteGatherRuleRequest &request);
                void DeleteGatherRuleAsync(const Model::DeleteGatherRuleRequest& request, const DeleteGatherRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGatherRuleOutcomeCallable DeleteGatherRuleCallable(const Model::DeleteGatherRuleRequest& request);

                /**
                 *This API is used to check the Tencent Cloud account balance.
                 * @param req DescribeAccountBalanceRequest
                 * @return DescribeAccountBalanceOutcome
                 */
                DescribeAccountBalanceOutcome DescribeAccountBalance(const Model::DescribeAccountBalanceRequest &request);
                void DescribeAccountBalanceAsync(const Model::DescribeAccountBalanceRequest& request, const DescribeAccountBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountBalanceOutcomeCallable DescribeAccountBalanceCallable(const Model::DescribeAccountBalanceRequest& request);

                /**
                 *This API is used to query sharing rule details.
                 * @param req DescribeAllocationRuleDetailRequest
                 * @return DescribeAllocationRuleDetailOutcome
                 */
                DescribeAllocationRuleDetailOutcome DescribeAllocationRuleDetail(const Model::DescribeAllocationRuleDetailRequest &request);
                void DescribeAllocationRuleDetailAsync(const Model::DescribeAllocationRuleDetailRequest& request, const DescribeAllocationRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllocationRuleDetailOutcomeCallable DescribeAllocationRuleDetailCallable(const Model::DescribeAllocationRuleDetailRequest& request);

                /**
                 *This API is used to query all sharing rule overviews.
                 * @param req DescribeAllocationRuleSummaryRequest
                 * @return DescribeAllocationRuleSummaryOutcome
                 */
                DescribeAllocationRuleSummaryOutcome DescribeAllocationRuleSummary(const Model::DescribeAllocationRuleSummaryRequest &request);
                void DescribeAllocationRuleSummaryAsync(const Model::DescribeAllocationRuleSummaryRequest& request, const DescribeAllocationRuleSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllocationRuleSummaryOutcomeCallable DescribeAllocationRuleSummaryCallable(const Model::DescribeAllocationRuleSummaryRequest& request);

                /**
                 *This API is used to query the cost tree.
                 * @param req DescribeAllocationTreeRequest
                 * @return DescribeAllocationTreeOutcome
                 */
                DescribeAllocationTreeOutcome DescribeAllocationTree(const Model::DescribeAllocationTreeRequest &request);
                void DescribeAllocationTreeAsync(const Model::DescribeAllocationTreeRequest& request, const DescribeAllocationTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllocationTreeOutcomeCallable DescribeAllocationTreeCallable(const Model::DescribeAllocationTreeRequest& request);

                /**
                 *Query the details of a cost allocation unit.
                 * @param req DescribeAllocationUnitDetailRequest
                 * @return DescribeAllocationUnitDetailOutcome
                 */
                DescribeAllocationUnitDetailOutcome DescribeAllocationUnitDetail(const Model::DescribeAllocationUnitDetailRequest &request);
                void DescribeAllocationUnitDetailAsync(const Model::DescribeAllocationUnitDetailRequest& request, const DescribeAllocationUnitDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllocationUnitDetailOutcomeCallable DescribeAllocationUnitDetailCallable(const Model::DescribeAllocationUnitDetailRequest& request);

                /**
                 *This API is used to check whether the current UIN has any adjustment, enabling customers to proactively obtain the adjustment status faster.
                 * @param req DescribeBillAdjustInfoRequest
                 * @return DescribeBillAdjustInfoOutcome
                 */
                DescribeBillAdjustInfoOutcome DescribeBillAdjustInfo(const Model::DescribeBillAdjustInfoRequest &request);
                void DescribeBillAdjustInfoAsync(const Model::DescribeBillAdjustInfoRequest& request, const DescribeBillAdjustInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillAdjustInfoOutcomeCallable DescribeBillAdjustInfoCallable(const Model::DescribeBillAdjustInfoRequest& request);

                /**
                 *u200cThis API is used to get bill details.
Note:
1. The API request may fail due to network instability or other exceptions. In this case, we recommend you manually retry the request when the API request fails.
2.If the volume of your bill data is high (for example, if over 200 thousand bill entries are generated for a month), bill data query via APIs may be slow. We recommend you enable bill storage so that you can obtain bill files from COS buckets for analysis. For details, see [Saving Bills to COS](https://intl.cloud.tencent.com/document/product/555/61275?from_cn_redirect=1).
                 * @param req DescribeBillDetailRequest
                 * @return DescribeBillDetailOutcome
                 */
                DescribeBillDetailOutcome DescribeBillDetail(const Model::DescribeBillDetailRequest &request);
                void DescribeBillDetailAsync(const Model::DescribeBillDetailRequest& request, const DescribeBillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillDetailOutcomeCallable DescribeBillDetailCallable(const Model::DescribeBillDetailRequest& request);

                /**
                 *This API is used to get pay-on-behalf bills of the admin account (bill details).
Note: The API request may fail due to network instability or other exceptions. In this case, we recommend you manually retry the request when the API request fails.
                 * @param req DescribeBillDetailForOrganizationRequest
                 * @return DescribeBillDetailForOrganizationOutcome
                 */
                DescribeBillDetailForOrganizationOutcome DescribeBillDetailForOrganization(const Model::DescribeBillDetailForOrganizationRequest &request);
                void DescribeBillDetailForOrganizationAsync(const Model::DescribeBillDetailForOrganizationRequest& request, const DescribeBillDetailForOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillDetailForOrganizationOutcomeCallable DescribeBillDetailForOrganizationCallable(const Model::DescribeBillDetailForOrganizationRequest& request);

                /**
                 *This API is used to get bill download URLs for L0, L1, L2, and L3 bills and bill packs.
                 * @param req DescribeBillDownloadUrlRequest
                 * @return DescribeBillDownloadUrlOutcome
                 */
                DescribeBillDownloadUrlOutcome DescribeBillDownloadUrl(const Model::DescribeBillDownloadUrlRequest &request);
                void DescribeBillDownloadUrlAsync(const Model::DescribeBillDownloadUrlRequest& request, const DescribeBillDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillDownloadUrlOutcomeCallable DescribeBillDownloadUrlCallable(const Model::DescribeBillDownloadUrlRequest& request);

                /**
                 *This API is used to get the bill summarized by instance.
                 * @param req DescribeBillResourceSummaryRequest
                 * @return DescribeBillResourceSummaryOutcome
                 */
                DescribeBillResourceSummaryOutcome DescribeBillResourceSummary(const Model::DescribeBillResourceSummaryRequest &request);
                void DescribeBillResourceSummaryAsync(const Model::DescribeBillResourceSummaryRequest& request, const DescribeBillResourceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillResourceSummaryOutcomeCallable DescribeBillResourceSummaryCallable(const Model::DescribeBillResourceSummaryRequest& request);

                /**
                 *This API is used to get pay-on-behalf bills of the admin account (bills by instance).
                 * @param req DescribeBillResourceSummaryForOrganizationRequest
                 * @return DescribeBillResourceSummaryForOrganizationOutcome
                 */
                DescribeBillResourceSummaryForOrganizationOutcome DescribeBillResourceSummaryForOrganization(const Model::DescribeBillResourceSummaryForOrganizationRequest &request);
                void DescribeBillResourceSummaryForOrganizationAsync(const Model::DescribeBillResourceSummaryForOrganizationRequest& request, const DescribeBillResourceSummaryForOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillResourceSummaryForOrganizationOutcomeCallable DescribeBillResourceSummaryForOrganizationCallable(const Model::DescribeBillResourceSummaryForOrganizationRequest& request);

                /**
                 *This API is used to get bill details by product, project, region, billing mode, and tag by passing in parameters.
                 * @param req DescribeBillSummaryRequest
                 * @return DescribeBillSummaryOutcome
                 */
                DescribeBillSummaryOutcome DescribeBillSummary(const Model::DescribeBillSummaryRequest &request);
                void DescribeBillSummaryAsync(const Model::DescribeBillSummaryRequest& request, const DescribeBillSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryOutcomeCallable DescribeBillSummaryCallable(const Model::DescribeBillSummaryRequest& request);

                /**
                 *This API is used to get the bill summarized by billing mode.
                 * @param req DescribeBillSummaryByPayModeRequest
                 * @return DescribeBillSummaryByPayModeOutcome
                 */
                DescribeBillSummaryByPayModeOutcome DescribeBillSummaryByPayMode(const Model::DescribeBillSummaryByPayModeRequest &request);
                void DescribeBillSummaryByPayModeAsync(const Model::DescribeBillSummaryByPayModeRequest& request, const DescribeBillSummaryByPayModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryByPayModeOutcomeCallable DescribeBillSummaryByPayModeCallable(const Model::DescribeBillSummaryByPayModeRequest& request);

                /**
                 *Gets the bill summarized according to product
                 * @param req DescribeBillSummaryByProductRequest
                 * @return DescribeBillSummaryByProductOutcome
                 */
                DescribeBillSummaryByProductOutcome DescribeBillSummaryByProduct(const Model::DescribeBillSummaryByProductRequest &request);
                void DescribeBillSummaryByProductAsync(const Model::DescribeBillSummaryByProductRequest& request, const DescribeBillSummaryByProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryByProductOutcomeCallable DescribeBillSummaryByProductCallable(const Model::DescribeBillSummaryByProductRequest& request);

                /**
                 *Gets the bill summarized according to project
                 * @param req DescribeBillSummaryByProjectRequest
                 * @return DescribeBillSummaryByProjectOutcome
                 */
                DescribeBillSummaryByProjectOutcome DescribeBillSummaryByProject(const Model::DescribeBillSummaryByProjectRequest &request);
                void DescribeBillSummaryByProjectAsync(const Model::DescribeBillSummaryByProjectRequest& request, const DescribeBillSummaryByProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryByProjectOutcomeCallable DescribeBillSummaryByProjectCallable(const Model::DescribeBillSummaryByProjectRequest& request);

                /**
                 *Gets the bill summarized according to region
                 * @param req DescribeBillSummaryByRegionRequest
                 * @return DescribeBillSummaryByRegionOutcome
                 */
                DescribeBillSummaryByRegionOutcome DescribeBillSummaryByRegion(const Model::DescribeBillSummaryByRegionRequest &request);
                void DescribeBillSummaryByRegionAsync(const Model::DescribeBillSummaryByRegionRequest& request, const DescribeBillSummaryByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryByRegionOutcomeCallable DescribeBillSummaryByRegionCallable(const Model::DescribeBillSummaryByRegionRequest& request);

                /**
                 *This API is used to get the cost distribution over different tags.
                 * @param req DescribeBillSummaryByTagRequest
                 * @return DescribeBillSummaryByTagOutcome
                 */
                DescribeBillSummaryByTagOutcome DescribeBillSummaryByTag(const Model::DescribeBillSummaryByTagRequest &request);
                void DescribeBillSummaryByTagAsync(const Model::DescribeBillSummaryByTagRequest& request, const DescribeBillSummaryByTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryByTagOutcomeCallable DescribeBillSummaryByTagCallable(const Model::DescribeBillSummaryByTagRequest& request);

                /**
                 *This API is used to get bills summarized by product, project, region, billing mode, and tag by passing in parameters.
                 * @param req DescribeBillSummaryForOrganizationRequest
                 * @return DescribeBillSummaryForOrganizationOutcome
                 */
                DescribeBillSummaryForOrganizationOutcome DescribeBillSummaryForOrganization(const Model::DescribeBillSummaryForOrganizationRequest &request);
                void DescribeBillSummaryForOrganizationAsync(const Model::DescribeBillSummaryForOrganizationRequest& request, const DescribeBillSummaryForOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillSummaryForOrganizationOutcomeCallable DescribeBillSummaryForOrganizationCallable(const Model::DescribeBillSummaryForOrganizationRequest& request);

                /**
                 *This API is used to query consumption details.
                 * @param req DescribeCostDetailRequest
                 * @return DescribeCostDetailOutcome
                 */
                DescribeCostDetailOutcome DescribeCostDetail(const Model::DescribeCostDetailRequest &request);
                void DescribeCostDetailAsync(const Model::DescribeCostDetailRequest& request, const DescribeCostDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCostDetailOutcomeCallable DescribeCostDetailCallable(const Model::DescribeCostDetailRequest& request);

                /**
                 *This API is used to view cost analysis details.
                 * @param req DescribeCostExplorerSummaryRequest
                 * @return DescribeCostExplorerSummaryOutcome
                 */
                DescribeCostExplorerSummaryOutcome DescribeCostExplorerSummary(const Model::DescribeCostExplorerSummaryRequest &request);
                void DescribeCostExplorerSummaryAsync(const Model::DescribeCostExplorerSummaryRequest& request, const DescribeCostExplorerSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCostExplorerSummaryOutcomeCallable DescribeCostExplorerSummaryCallable(const Model::DescribeCostExplorerSummaryRequest& request);

                /**
                 *This API is used to obtain consumption details summarized by product.
                 * @param req DescribeCostSummaryByProductRequest
                 * @return DescribeCostSummaryByProductOutcome
                 */
                DescribeCostSummaryByProductOutcome DescribeCostSummaryByProduct(const Model::DescribeCostSummaryByProductRequest &request);
                void DescribeCostSummaryByProductAsync(const Model::DescribeCostSummaryByProductRequest& request, const DescribeCostSummaryByProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCostSummaryByProductOutcomeCallable DescribeCostSummaryByProductCallable(const Model::DescribeCostSummaryByProductRequest& request);

                /**
                 *This API is used to obtain consumption details summarized by project.
                 * @param req DescribeCostSummaryByProjectRequest
                 * @return DescribeCostSummaryByProjectOutcome
                 */
                DescribeCostSummaryByProjectOutcome DescribeCostSummaryByProject(const Model::DescribeCostSummaryByProjectRequest &request);
                void DescribeCostSummaryByProjectAsync(const Model::DescribeCostSummaryByProjectRequest& request, const DescribeCostSummaryByProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCostSummaryByProjectOutcomeCallable DescribeCostSummaryByProjectCallable(const Model::DescribeCostSummaryByProjectRequest& request);

                /**
                 *This API is used to obtain consumption details summarized by region.
                 * @param req DescribeCostSummaryByRegionRequest
                 * @return DescribeCostSummaryByRegionOutcome
                 */
                DescribeCostSummaryByRegionOutcome DescribeCostSummaryByRegion(const Model::DescribeCostSummaryByRegionRequest &request);
                void DescribeCostSummaryByRegionAsync(const Model::DescribeCostSummaryByRegionRequest& request, const DescribeCostSummaryByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCostSummaryByRegionOutcomeCallable DescribeCostSummaryByRegionCallable(const Model::DescribeCostSummaryByRegionRequest& request);

                /**
                 *This API is used to obtain consumption details summarized by resource.
                 * @param req DescribeCostSummaryByResourceRequest
                 * @return DescribeCostSummaryByResourceOutcome
                 */
                DescribeCostSummaryByResourceOutcome DescribeCostSummaryByResource(const Model::DescribeCostSummaryByResourceRequest &request);
                void DescribeCostSummaryByResourceAsync(const Model::DescribeCostSummaryByResourceRequest& request, const DescribeCostSummaryByResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCostSummaryByResourceOutcomeCallable DescribeCostSummaryByResourceCallable(const Model::DescribeCostSummaryByResourceRequest& request);

                /**
                 *Querying orders
                 * @param req DescribeDealsByCondRequest
                 * @return DescribeDealsByCondOutcome
                 */
                DescribeDealsByCondOutcome DescribeDealsByCond(const Model::DescribeDealsByCondRequest &request);
                void DescribeDealsByCondAsync(const Model::DescribeDealsByCondRequest& request, const DescribeDealsByCondAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDealsByCondOutcomeCallable DescribeDealsByCondCallable(const Model::DescribeDealsByCondRequest& request);

                /**
                 *This API is used to query COS usage details.
                 * @param req DescribeDosageCosDetailByDateRequest
                 * @return DescribeDosageCosDetailByDateOutcome
                 */
                DescribeDosageCosDetailByDateOutcome DescribeDosageCosDetailByDate(const Model::DescribeDosageCosDetailByDateRequest &request);
                void DescribeDosageCosDetailByDateAsync(const Model::DescribeDosageCosDetailByDateRequest& request, const DescribeDosageCosDetailByDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDosageCosDetailByDateOutcomeCallable DescribeDosageCosDetailByDateCallable(const Model::DescribeDosageCosDetailByDateRequest& request);

                /**
                 *This API is used to query the collection rule details.
                 * @param req DescribeGatherRuleDetailRequest
                 * @return DescribeGatherRuleDetailOutcome
                 */
                DescribeGatherRuleDetailOutcome DescribeGatherRuleDetail(const Model::DescribeGatherRuleDetailRequest &request);
                void DescribeGatherRuleDetailAsync(const Model::DescribeGatherRuleDetailRequest& request, const DescribeGatherRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatherRuleDetailOutcomeCallable DescribeGatherRuleDetailCallable(const Model::DescribeGatherRuleDetailRequest& request);

                /**
                 *This API is used to get cost allocation tags.
                 * @param req DescribeTagListRequest
                 * @return DescribeTagListOutcome
                 */
                DescribeTagListOutcome DescribeTagList(const Model::DescribeTagListRequest &request);
                void DescribeTagListAsync(const Model::DescribeTagListRequest& request, const DescribeTagListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagListOutcomeCallable DescribeTagListCallable(const Model::DescribeTagListRequest& request);

                /**
                 *This API is used to query vouchers.
                 * @param req DescribeVoucherInfoRequest
                 * @return DescribeVoucherInfoOutcome
                 */
                DescribeVoucherInfoOutcome DescribeVoucherInfo(const Model::DescribeVoucherInfoRequest &request);
                void DescribeVoucherInfoAsync(const Model::DescribeVoucherInfoRequest& request, const DescribeVoucherInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVoucherInfoOutcomeCallable DescribeVoucherInfoCallable(const Model::DescribeVoucherInfoRequest& request);

                /**
                 *This API is used to query voucher usage details.
                 * @param req DescribeVoucherUsageDetailsRequest
                 * @return DescribeVoucherUsageDetailsOutcome
                 */
                DescribeVoucherUsageDetailsOutcome DescribeVoucherUsageDetails(const Model::DescribeVoucherUsageDetailsRequest &request);
                void DescribeVoucherUsageDetailsAsync(const Model::DescribeVoucherUsageDetailsRequest& request, const DescribeVoucherUsageDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVoucherUsageDetailsOutcomeCallable DescribeVoucherUsageDetailsCallable(const Model::DescribeVoucherUsageDetailsRequest& request);

                /**
                 *Edit sharing rules.
                 * @param req ModifyAllocationRuleRequest
                 * @return ModifyAllocationRuleOutcome
                 */
                ModifyAllocationRuleOutcome ModifyAllocationRule(const Model::ModifyAllocationRuleRequest &request);
                void ModifyAllocationRuleAsync(const Model::ModifyAllocationRuleRequest& request, const ModifyAllocationRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAllocationRuleOutcomeCallable ModifyAllocationRuleCallable(const Model::ModifyAllocationRuleRequest& request);

                /**
                 *This API is used to modify cost allocation unit information.
                 * @param req ModifyAllocationUnitRequest
                 * @return ModifyAllocationUnitOutcome
                 */
                ModifyAllocationUnitOutcome ModifyAllocationUnit(const Model::ModifyAllocationUnitRequest &request);
                void ModifyAllocationUnitAsync(const Model::ModifyAllocationUnitRequest& request, const ModifyAllocationUnitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAllocationUnitOutcomeCallable ModifyAllocationUnitCallable(const Model::ModifyAllocationUnitRequest& request);

                /**
                 *Edit a collection rule.
                 * @param req ModifyGatherRuleRequest
                 * @return ModifyGatherRuleOutcome
                 */
                ModifyGatherRuleOutcome ModifyGatherRule(const Model::ModifyGatherRuleRequest &request);
                void ModifyGatherRuleAsync(const Model::ModifyGatherRuleRequest& request, const ModifyGatherRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGatherRuleOutcomeCallable ModifyGatherRuleCallable(const Model::ModifyGatherRuleRequest& request);

                /**
                 *This API is used to pay for an order.
                 * @param req PayDealsRequest
                 * @return PayDealsOutcome
                 */
                PayDealsOutcome PayDeals(const Model::PayDealsRequest &request);
                void PayDealsAsync(const Model::PayDealsRequest& request, const PayDealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PayDealsOutcomeCallable PayDealsCallable(const Model::PayDealsRequest& request);

                /**
                 *To unsubscribe from an unneeded instance, only the actual payment amount will be refunded, any used vouchers will not be returned. The refunded amount will be credited to your Tencent Cloud account balance by default.The account calling this API must be granted the finace:RefundInstance permission; otherwise, the refund process will fail.
Currently, the integrated and supported product for this operation includes: Cloud Firewall.
                 * @param req RefundInstanceRequest
                 * @return RefundInstanceOutcome
                 */
                RefundInstanceOutcome RefundInstance(const Model::RefundInstanceRequest &request);
                void RefundInstanceAsync(const Model::RefundInstanceRequest& request, const RefundInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefundInstanceOutcomeCallable RefundInstanceCallable(const Model::RefundInstanceRequest& request);

                /**
                 *Renewing an instance: when calling this API to renew a server, ensure that your Tencent Cloud account has sufficient balance; otherwise, the renewal will fail. The account calling this API must be granted the finace:tradepermission; otherwise, the renewal will fail.
Currently, the integrated and supported product for renewal includes: Cloud Firewall.
                 * @param req RenewInstanceRequest
                 * @return RenewInstanceOutcome
                 */
                RenewInstanceOutcome RenewInstance(const Model::RenewInstanceRequest &request);
                void RenewInstanceAsync(const Model::RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewInstanceOutcomeCallable RenewInstanceCallable(const Model::RenewInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_BILLINGCLIENT_H_
