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

#include <tencentcloud/message/v20181225/MessageClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Message::V20181225;
using namespace TencentCloud::Message::V20181225::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-12-25";
    const string ENDPOINT = "message.intl.tencentcloudapi.com";
}

MessageClient::MessageClient(const Credential &credential, const string &region) :
    MessageClient(credential, region, ClientProfile())
{
}

MessageClient::MessageClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MessageClient::ModifySendChannelOnMsgTypesOutcome MessageClient::ModifySendChannelOnMsgTypes(const ModifySendChannelOnMsgTypesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySendChannelOnMsgTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySendChannelOnMsgTypesResponse rsp = ModifySendChannelOnMsgTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySendChannelOnMsgTypesOutcome(rsp);
        else
            return ModifySendChannelOnMsgTypesOutcome(o.GetError());
    }
    else
    {
        return ModifySendChannelOnMsgTypesOutcome(outcome.GetError());
    }
}

void MessageClient::ModifySendChannelOnMsgTypesAsync(const ModifySendChannelOnMsgTypesRequest& request, const ModifySendChannelOnMsgTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySendChannelOnMsgTypesRequest&;
    using Resp = ModifySendChannelOnMsgTypesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySendChannelOnMsgTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MessageClient::ModifySendChannelOnMsgTypesOutcomeCallable MessageClient::ModifySendChannelOnMsgTypesCallable(const ModifySendChannelOnMsgTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySendChannelOnMsgTypesOutcome>>();
    ModifySendChannelOnMsgTypesAsync(
    request,
    [prom](
        const MessageClient*,
        const ModifySendChannelOnMsgTypesRequest&,
        ModifySendChannelOnMsgTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

