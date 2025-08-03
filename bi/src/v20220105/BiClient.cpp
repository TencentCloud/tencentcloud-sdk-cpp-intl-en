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

#include <tencentcloud/bi/v20220105/BiClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bi::V20220105;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-01-05";
    const string ENDPOINT = "bi.intl.tencentcloudapi.com";
}

BiClient::BiClient(const Credential &credential, const string &region) :
    BiClient(credential, region, ClientProfile())
{
}

BiClient::BiClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BiClient::ApplyEmbedIntervalOutcome BiClient::ApplyEmbedInterval(const ApplyEmbedIntervalRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyEmbedInterval");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyEmbedIntervalResponse rsp = ApplyEmbedIntervalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyEmbedIntervalOutcome(rsp);
        else
            return ApplyEmbedIntervalOutcome(o.GetError());
    }
    else
    {
        return ApplyEmbedIntervalOutcome(outcome.GetError());
    }
}

void BiClient::ApplyEmbedIntervalAsync(const ApplyEmbedIntervalRequest& request, const ApplyEmbedIntervalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyEmbedInterval(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::ApplyEmbedIntervalOutcomeCallable BiClient::ApplyEmbedIntervalCallable(const ApplyEmbedIntervalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyEmbedIntervalOutcome()>>(
        [this, request]()
        {
            return this->ApplyEmbedInterval(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::CreateDatasourceOutcome BiClient::CreateDatasource(const CreateDatasourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDatasource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDatasourceResponse rsp = CreateDatasourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDatasourceOutcome(rsp);
        else
            return CreateDatasourceOutcome(o.GetError());
    }
    else
    {
        return CreateDatasourceOutcome(outcome.GetError());
    }
}

void BiClient::CreateDatasourceAsync(const CreateDatasourceRequest& request, const CreateDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDatasource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::CreateDatasourceOutcomeCallable BiClient::CreateDatasourceCallable(const CreateDatasourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDatasourceOutcome()>>(
        [this, request]()
        {
            return this->CreateDatasource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

