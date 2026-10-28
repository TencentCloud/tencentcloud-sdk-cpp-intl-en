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

#include <tencentcloud/adp/v20260520/AdpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Adp::V20260520;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

namespace
{
    const string VERSION = "2026-05-20";
    const string ENDPOINT = "adp.intl.tencentcloudapi.com";
}

AdpClient::AdpClient(const Credential &credential, const string &region) :
    AdpClient(credential, region, ClientProfile())
{
}

AdpClient::AdpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AdpClient::SearchKnowledgeOutcome AdpClient::SearchKnowledge(const SearchKnowledgeRequest &request)
{
    auto outcome = MakeRequest(request, "SearchKnowledge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchKnowledgeResponse rsp = SearchKnowledgeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchKnowledgeOutcome(rsp);
        else
            return SearchKnowledgeOutcome(o.GetError());
    }
    else
    {
        return SearchKnowledgeOutcome(outcome.GetError());
    }
}

void AdpClient::SearchKnowledgeAsync(const SearchKnowledgeRequest& request, const SearchKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchKnowledgeRequest&;
    using Resp = SearchKnowledgeResponse;

    DoRequestAsync<Req, Resp>(
        "SearchKnowledge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AdpClient::SearchKnowledgeOutcomeCallable AdpClient::SearchKnowledgeCallable(const SearchKnowledgeRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchKnowledgeOutcome>>();
    SearchKnowledgeAsync(
    request,
    [prom](
        const AdpClient*,
        const SearchKnowledgeRequest&,
        SearchKnowledgeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

