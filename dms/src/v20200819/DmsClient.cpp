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
    using Req = const SendEmailRequest&;
    using Resp = SendEmailResponse;

    DoRequestAsync<Req, Resp>(
        "SendEmail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DmsClient::SendEmailOutcomeCallable DmsClient::SendEmailCallable(const SendEmailRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendEmailOutcome>>();
    SendEmailAsync(
    request,
    [prom](
        const DmsClient*,
        const SendEmailRequest&,
        SendEmailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SendTemplatedEmailRequest&;
    using Resp = SendTemplatedEmailResponse;

    DoRequestAsync<Req, Resp>(
        "SendTemplatedEmail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DmsClient::SendTemplatedEmailOutcomeCallable DmsClient::SendTemplatedEmailCallable(const SendTemplatedEmailRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendTemplatedEmailOutcome>>();
    SendTemplatedEmailAsync(
    request,
    [prom](
        const DmsClient*,
        const SendTemplatedEmailRequest&,
        SendTemplatedEmailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

