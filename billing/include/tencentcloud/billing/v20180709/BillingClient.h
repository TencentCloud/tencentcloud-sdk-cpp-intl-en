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

#ifndef TENCENTCLOUD_BILLING_V20180709_BILLINGCLIENT_H_
#define TENCENTCLOUD_BILLING_V20180709_BILLINGCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/billing/v20180709/model/DescribeAccountBalanceRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeAccountBalanceResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillDetailRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillDetailResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryResponse.h>
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
#include <tencentcloud/billing/v20180709/model/DescribeDosageCosDetailByDateRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeDosageCosDetailByDateResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeVoucherInfoRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeVoucherInfoResponse.h>
#include <tencentcloud/billing/v20180709/model/DescribeVoucherUsageDetailsRequest.h>
#include <tencentcloud/billing/v20180709/model/DescribeVoucherUsageDetailsResponse.h>


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

                typedef Outcome<Core::Error, Model::DescribeAccountBalanceResponse> DescribeAccountBalanceOutcome;
                typedef std::future<DescribeAccountBalanceOutcome> DescribeAccountBalanceOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeAccountBalanceRequest&, DescribeAccountBalanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountBalanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillDetailResponse> DescribeBillDetailOutcome;
                typedef std::future<DescribeBillDetailOutcome> DescribeBillDetailOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillDetailRequest&, DescribeBillDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillResourceSummaryResponse> DescribeBillResourceSummaryOutcome;
                typedef std::future<DescribeBillResourceSummaryOutcome> DescribeBillResourceSummaryOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeBillResourceSummaryRequest&, DescribeBillResourceSummaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillResourceSummaryAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeDosageCosDetailByDateResponse> DescribeDosageCosDetailByDateOutcome;
                typedef std::future<DescribeDosageCosDetailByDateOutcome> DescribeDosageCosDetailByDateOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeDosageCosDetailByDateRequest&, DescribeDosageCosDetailByDateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDosageCosDetailByDateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVoucherInfoResponse> DescribeVoucherInfoOutcome;
                typedef std::future<DescribeVoucherInfoOutcome> DescribeVoucherInfoOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeVoucherInfoRequest&, DescribeVoucherInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVoucherInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVoucherUsageDetailsResponse> DescribeVoucherUsageDetailsOutcome;
                typedef std::future<DescribeVoucherUsageDetailsOutcome> DescribeVoucherUsageDetailsOutcomeCallable;
                typedef std::function<void(const BillingClient*, const Model::DescribeVoucherUsageDetailsRequest&, DescribeVoucherUsageDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVoucherUsageDetailsAsyncHandler;



                /**
                 *This API is used to check the Tencent Cloud account balance.
                 * @param req DescribeAccountBalanceRequest
                 * @return DescribeAccountBalanceOutcome
                 */
                DescribeAccountBalanceOutcome DescribeAccountBalance(const Model::DescribeAccountBalanceRequest &request);
                void DescribeAccountBalanceAsync(const Model::DescribeAccountBalanceRequest& request, const DescribeAccountBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountBalanceOutcomeCallable DescribeAccountBalanceCallable(const Model::DescribeAccountBalanceRequest& request);

                /**
                 *This API is used to get bill details. 
Notes: 1. The API request may fail due to network instability or other exceptions. In this case, we recommend you manually retry the request when the API request fails. 2. If the volume of your bill data is high (for example, if over 200 thousand bill entries are generated for a month), bill data query via APIs may be slow. We recommend you enable bill storage so that you can obtain bill files from COS buckets for analysis. For details, see [Saving Bills to COS](https://intl.cloud.tencent.com/document/product/555/61275?from_cn_redirect=1).
                 * @param req DescribeBillDetailRequest
                 * @return DescribeBillDetailOutcome
                 */
                DescribeBillDetailOutcome DescribeBillDetail(const Model::DescribeBillDetailRequest &request);
                void DescribeBillDetailAsync(const Model::DescribeBillDetailRequest& request, const DescribeBillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillDetailOutcomeCallable DescribeBillDetailCallable(const Model::DescribeBillDetailRequest& request);

                /**
                 *This API is used to query bill resources summary.
                 * @param req DescribeBillResourceSummaryRequest
                 * @return DescribeBillResourceSummaryOutcome
                 */
                DescribeBillResourceSummaryOutcome DescribeBillResourceSummary(const Model::DescribeBillResourceSummaryRequest &request);
                void DescribeBillResourceSummaryAsync(const Model::DescribeBillResourceSummaryRequest& request, const DescribeBillResourceSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillResourceSummaryOutcomeCallable DescribeBillResourceSummaryCallable(const Model::DescribeBillResourceSummaryRequest& request);

                /**
                 *This API is used to get bill details by product, project, region, billing mode, and tag through passing in parameters.
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
                 *This API is used to query COS usage details.
                 * @param req DescribeDosageCosDetailByDateRequest
                 * @return DescribeDosageCosDetailByDateOutcome
                 */
                DescribeDosageCosDetailByDateOutcome DescribeDosageCosDetailByDate(const Model::DescribeDosageCosDetailByDateRequest &request);
                void DescribeDosageCosDetailByDateAsync(const Model::DescribeDosageCosDetailByDateRequest& request, const DescribeDosageCosDetailByDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDosageCosDetailByDateOutcomeCallable DescribeDosageCosDetailByDateCallable(const Model::DescribeDosageCosDetailByDateRequest& request);

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

            };
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_BILLINGCLIENT_H_
