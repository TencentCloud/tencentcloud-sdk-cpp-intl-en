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

#include <tencentcloud/dms/v20200819/DmsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dms::V20200819;
using namespace TencentCloud::Dms::V20200819::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-08-19";
    const string ENDPOINT = "dms.intl.tencentcloudapi.com";
}

DmsClient::DmsClient(const Credential &credential, const string &region) :
    DmsClient(credential, region, ClientProfile())
{
}

DmsClient::DmsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DmsClient::SendEmailOutcome DmsClient::SendEmail(const SendEmailRequest &request)
{
    auto outcome = MakeRequest(request, "SendEmail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendEmailResponse rsp = SendEmailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendEmailOutcome(rsp);
        else
            return SendEmailOutcome(o.GetError());
    }
    else
    {
        return SendEmailOutcome(outcome.GetError());
    }
}

void DmsClient::SendEmailAsync(const SendEmailRequest& request, const SendEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendEmail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DmsClient::SendEmailOutcomeCallable DmsClient::SendEmailCallable(const SendEmailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendEmailOutcome()>>(
        [this, request]()
        {
            return this->SendEmail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DmsClient::SendTemplatedEmailOutcome DmsClient::SendTemplatedEmail(const SendTemplatedEmailRequest &request)
{
    auto outcome = MakeRequest(request, "SendTemplatedEmail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendTemplatedEmailResponse rsp = SendTemplatedEmailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendTemplatedEmailOutcome(rsp);
        else
            return SendTemplatedEmailOutcome(o.GetError());
    }
    else
    {
        return SendTemplatedEmailOutcome(outcome.GetError());
    }
}

void DmsClient::SendTemplatedEmailAsync(const SendTemplatedEmailRequest& request, const SendTemplatedEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendTemplatedEmail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DmsClient::SendTemplatedEmailOutcomeCallable DmsClient::SendTemplatedEmailCallable(const SendTemplatedEmailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendTemplatedEmailOutcome()>>(
        [this, request]()
        {
            return this->SendTemplatedEmail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

