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

#include <tencentcloud/asr/v20190614/AsrClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Asr::V20190614;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-06-14";
    const string ENDPOINT = "asr.intl.tencentcloudapi.com";
}

AsrClient::AsrClient(const Credential &credential, const string &region) :
    AsrClient(credential, region, ClientProfile())
{
}

AsrClient::AsrClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AsrClient::CreateRecTaskOutcome AsrClient::CreateRecTask(const CreateRecTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecTaskResponse rsp = CreateRecTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecTaskOutcome(rsp);
        else
            return CreateRecTaskOutcome(o.GetError());
    }
    else
    {
        return CreateRecTaskOutcome(outcome.GetError());
    }
}

void AsrClient::CreateRecTaskAsync(const CreateRecTaskRequest& request, const CreateRecTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRecTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::CreateRecTaskOutcomeCallable AsrClient::CreateRecTaskCallable(const CreateRecTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRecTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateRecTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AsrClient::DescribeTaskStatusOutcome AsrClient::DescribeTaskStatus(const DescribeTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskStatusResponse rsp = DescribeTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskStatusOutcome(rsp);
        else
            return DescribeTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskStatusOutcome(outcome.GetError());
    }
}

void AsrClient::DescribeTaskStatusAsync(const DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AsrClient::DescribeTaskStatusOutcomeCallable AsrClient::DescribeTaskStatusCallable(const DescribeTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

