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

#include <tencentcloud/batch/v20170312/BatchClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Batch::V20170312;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

namespace
{
    const string VERSION = "2017-03-12";
    const string ENDPOINT = "batch.tencentcloudapi.com";
}

BatchClient::BatchClient(const Credential &credential, const string &region) :
    BatchClient(credential, region, ClientProfile())
{
}

BatchClient::BatchClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BatchClient::DescribeAvailableCvmInstanceTypesOutcome BatchClient::DescribeAvailableCvmInstanceTypes(const DescribeAvailableCvmInstanceTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAvailableCvmInstanceTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAvailableCvmInstanceTypesResponse rsp = DescribeAvailableCvmInstanceTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAvailableCvmInstanceTypesOutcome(rsp);
        else
            return DescribeAvailableCvmInstanceTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeAvailableCvmInstanceTypesOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeAvailableCvmInstanceTypesAsync(const DescribeAvailableCvmInstanceTypesRequest& request, const DescribeAvailableCvmInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAvailableCvmInstanceTypes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DescribeAvailableCvmInstanceTypesOutcomeCallable BatchClient::DescribeAvailableCvmInstanceTypesCallable(const DescribeAvailableCvmInstanceTypesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAvailableCvmInstanceTypesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAvailableCvmInstanceTypes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::DescribeCvmZoneInstanceConfigInfosOutcome BatchClient::DescribeCvmZoneInstanceConfigInfos(const DescribeCvmZoneInstanceConfigInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCvmZoneInstanceConfigInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCvmZoneInstanceConfigInfosResponse rsp = DescribeCvmZoneInstanceConfigInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCvmZoneInstanceConfigInfosOutcome(rsp);
        else
            return DescribeCvmZoneInstanceConfigInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeCvmZoneInstanceConfigInfosOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeCvmZoneInstanceConfigInfosAsync(const DescribeCvmZoneInstanceConfigInfosRequest& request, const DescribeCvmZoneInstanceConfigInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCvmZoneInstanceConfigInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DescribeCvmZoneInstanceConfigInfosOutcomeCallable BatchClient::DescribeCvmZoneInstanceConfigInfosCallable(const DescribeCvmZoneInstanceConfigInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCvmZoneInstanceConfigInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeCvmZoneInstanceConfigInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BatchClient::DescribeInstanceCategoriesOutcome BatchClient::DescribeInstanceCategories(const DescribeInstanceCategoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceCategories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceCategoriesResponse rsp = DescribeInstanceCategoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceCategoriesOutcome(rsp);
        else
            return DescribeInstanceCategoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceCategoriesOutcome(outcome.GetError());
    }
}

void BatchClient::DescribeInstanceCategoriesAsync(const DescribeInstanceCategoriesRequest& request, const DescribeInstanceCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceCategories(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BatchClient::DescribeInstanceCategoriesOutcomeCallable BatchClient::DescribeInstanceCategoriesCallable(const DescribeInstanceCategoriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceCategoriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceCategories(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

