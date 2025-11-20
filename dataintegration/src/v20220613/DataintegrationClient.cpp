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

#include <tencentcloud/dataintegration/v20220613/DataintegrationClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dataintegration::V20220613;
using namespace TencentCloud::Dataintegration::V20220613::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-06-13";
    const string ENDPOINT = "dataintegration.intl.tencentcloudapi.com";
}

DataintegrationClient::DataintegrationClient(const Credential &credential, const string &region) :
    DataintegrationClient(credential, region, ClientProfile())
{
}

DataintegrationClient::DataintegrationClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DataintegrationClient::SendMessageOutcome DataintegrationClient::SendMessage(const SendMessageRequest &request)
{
    auto outcome = MakeRequest(request, "SendMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendMessageResponse rsp = SendMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendMessageOutcome(rsp);
        else
            return SendMessageOutcome(o.GetError());
    }
    else
    {
        return SendMessageOutcome(outcome.GetError());
    }
}

void DataintegrationClient::SendMessageAsync(const SendMessageRequest& request, const SendMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendMessageRequest&;
    using Resp = SendMessageResponse;

    DoRequestAsync<Req, Resp>(
        "SendMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DataintegrationClient::SendMessageOutcomeCallable DataintegrationClient::SendMessageCallable(const SendMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendMessageOutcome>>();
    SendMessageAsync(
    request,
    [prom](
        const DataintegrationClient*,
        const SendMessageRequest&,
        SendMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

