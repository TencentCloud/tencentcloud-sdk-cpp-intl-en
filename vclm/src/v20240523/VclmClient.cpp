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

#include <tencentcloud/vclm/v20240523/VclmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vclm::V20240523;
using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-05-23";
    const string ENDPOINT = "vclm.tencentcloudapi.com";
}

VclmClient::VclmClient(const Credential &credential, const string &region) :
    VclmClient(credential, region, ClientProfile())
{
}

VclmClient::VclmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VclmClient::DescribeImageAnimateJobOutcome VclmClient::DescribeImageAnimateJob(const DescribeImageAnimateJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageAnimateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageAnimateJobResponse rsp = DescribeImageAnimateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageAnimateJobOutcome(rsp);
        else
            return DescribeImageAnimateJobOutcome(o.GetError());
    }
    else
    {
        return DescribeImageAnimateJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeImageAnimateJobAsync(const DescribeImageAnimateJobRequest& request, const DescribeImageAnimateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageAnimateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VclmClient::DescribeImageAnimateJobOutcomeCallable VclmClient::DescribeImageAnimateJobCallable(const DescribeImageAnimateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageAnimateJobOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageAnimateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VclmClient::SubmitImageAnimateJobOutcome VclmClient::SubmitImageAnimateJob(const SubmitImageAnimateJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitImageAnimateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitImageAnimateJobResponse rsp = SubmitImageAnimateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitImageAnimateJobOutcome(rsp);
        else
            return SubmitImageAnimateJobOutcome(o.GetError());
    }
    else
    {
        return SubmitImageAnimateJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitImageAnimateJobAsync(const SubmitImageAnimateJobRequest& request, const SubmitImageAnimateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitImageAnimateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VclmClient::SubmitImageAnimateJobOutcomeCallable VclmClient::SubmitImageAnimateJobCallable(const SubmitImageAnimateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitImageAnimateJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitImageAnimateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

