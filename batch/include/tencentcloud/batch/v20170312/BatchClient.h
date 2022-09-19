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

#ifndef TENCENTCLOUD_BATCH_V20170312_BATCHCLIENT_H_
#define TENCENTCLOUD_BATCH_V20170312_BATCHCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/batch/v20170312/model/DescribeAvailableCvmInstanceTypesRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeAvailableCvmInstanceTypesResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeCvmZoneInstanceConfigInfosRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeCvmZoneInstanceConfigInfosResponse.h>
#include <tencentcloud/batch/v20170312/model/DescribeInstanceCategoriesRequest.h>
#include <tencentcloud/batch/v20170312/model/DescribeInstanceCategoriesResponse.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            class BatchClient : public AbstractClient
            {
            public:
                BatchClient(const Credential &credential, const std::string &region);
                BatchClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeAvailableCvmInstanceTypesResponse> DescribeAvailableCvmInstanceTypesOutcome;
                typedef std::future<DescribeAvailableCvmInstanceTypesOutcome> DescribeAvailableCvmInstanceTypesOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeAvailableCvmInstanceTypesRequest&, DescribeAvailableCvmInstanceTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableCvmInstanceTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCvmZoneInstanceConfigInfosResponse> DescribeCvmZoneInstanceConfigInfosOutcome;
                typedef std::future<DescribeCvmZoneInstanceConfigInfosOutcome> DescribeCvmZoneInstanceConfigInfosOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeCvmZoneInstanceConfigInfosRequest&, DescribeCvmZoneInstanceConfigInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCvmZoneInstanceConfigInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceCategoriesResponse> DescribeInstanceCategoriesOutcome;
                typedef std::future<DescribeInstanceCategoriesOutcome> DescribeInstanceCategoriesOutcomeCallable;
                typedef std::function<void(const BatchClient*, const Model::DescribeInstanceCategoriesRequest&, DescribeInstanceCategoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceCategoriesAsyncHandler;



                /**
                 *This API is used to view the information of available CVM model configurations.
                 * @param req DescribeAvailableCvmInstanceTypesRequest
                 * @return DescribeAvailableCvmInstanceTypesOutcome
                 */
                DescribeAvailableCvmInstanceTypesOutcome DescribeAvailableCvmInstanceTypes(const Model::DescribeAvailableCvmInstanceTypesRequest &request);
                void DescribeAvailableCvmInstanceTypesAsync(const Model::DescribeAvailableCvmInstanceTypesRequest& request, const DescribeAvailableCvmInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailableCvmInstanceTypesOutcomeCallable DescribeAvailableCvmInstanceTypesCallable(const Model::DescribeAvailableCvmInstanceTypesRequest& request);

                /**
                 *This API is used to get the model configuration information of the availability zone of BatchCompute.
                 * @param req DescribeCvmZoneInstanceConfigInfosRequest
                 * @return DescribeCvmZoneInstanceConfigInfosOutcome
                 */
                DescribeCvmZoneInstanceConfigInfosOutcome DescribeCvmZoneInstanceConfigInfos(const Model::DescribeCvmZoneInstanceConfigInfosRequest &request);
                void DescribeCvmZoneInstanceConfigInfosAsync(const Model::DescribeCvmZoneInstanceConfigInfosRequest& request, const DescribeCvmZoneInstanceConfigInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCvmZoneInstanceConfigInfosOutcomeCallable DescribeCvmZoneInstanceConfigInfosCallable(const Model::DescribeCvmZoneInstanceConfigInfosRequest& request);

                /**
                 *Currently, CVM instance families are classified into different category, and each category contains several instance families. This API is used to query the instance category information.
                 * @param req DescribeInstanceCategoriesRequest
                 * @return DescribeInstanceCategoriesOutcome
                 */
                DescribeInstanceCategoriesOutcome DescribeInstanceCategories(const Model::DescribeInstanceCategoriesRequest &request);
                void DescribeInstanceCategoriesAsync(const Model::DescribeInstanceCategoriesRequest& request, const DescribeInstanceCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceCategoriesOutcomeCallable DescribeInstanceCategoriesCallable(const Model::DescribeInstanceCategoriesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_BATCHCLIENT_H_
