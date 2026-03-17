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
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGMAUDataDetailRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGMAUDataDetailResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGMAULineChartRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGMAULineChartResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGMAUMonthlyComparisonMetricCardRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNGMAUMonthlyComparisonMetricCardResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPMAUDataDetailRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPMAUDataDetailResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPMAULineChartRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPMAULineChartResponse.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPMAUMetricCardRequest.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeMNPMAUMetricCardResponse.h>


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

                typedef Outcome<Core::Error, Model::DescribeMNGMAUDataDetailResponse> DescribeMNGMAUDataDetailOutcome;
                typedef std::future<DescribeMNGMAUDataDetailOutcome> DescribeMNGMAUDataDetailOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNGMAUDataDetailRequest&, DescribeMNGMAUDataDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNGMAUDataDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNGMAULineChartResponse> DescribeMNGMAULineChartOutcome;
                typedef std::future<DescribeMNGMAULineChartOutcome> DescribeMNGMAULineChartOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNGMAULineChartRequest&, DescribeMNGMAULineChartOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNGMAULineChartAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNGMAUMonthlyComparisonMetricCardResponse> DescribeMNGMAUMonthlyComparisonMetricCardOutcome;
                typedef std::future<DescribeMNGMAUMonthlyComparisonMetricCardOutcome> DescribeMNGMAUMonthlyComparisonMetricCardOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNGMAUMonthlyComparisonMetricCardRequest&, DescribeMNGMAUMonthlyComparisonMetricCardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNGMAUMonthlyComparisonMetricCardAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPMAUDataDetailResponse> DescribeMNPMAUDataDetailOutcome;
                typedef std::future<DescribeMNPMAUDataDetailOutcome> DescribeMNPMAUDataDetailOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPMAUDataDetailRequest&, DescribeMNPMAUDataDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPMAUDataDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPMAULineChartResponse> DescribeMNPMAULineChartOutcome;
                typedef std::future<DescribeMNPMAULineChartOutcome> DescribeMNPMAULineChartOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPMAULineChartRequest&, DescribeMNPMAULineChartOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPMAULineChartAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMNPMAUMetricCardResponse> DescribeMNPMAUMetricCardOutcome;
                typedef std::future<DescribeMNPMAUMetricCardOutcome> DescribeMNPMAUMetricCardOutcomeCallable;
                typedef std::function<void(const TcsasClient*, const Model::DescribeMNPMAUMetricCardRequest&, DescribeMNPMAUMetricCardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMNPMAUMetricCardAsyncHandler;



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

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_TCSASCLIENT_H_
