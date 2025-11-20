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

#include <tencentcloud/ciam/v20210420/CiamClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ciam::V20210420;
using namespace TencentCloud::Ciam::V20210420::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-04-20";
    const string ENDPOINT = "ciam.intl.tencentcloudapi.com";
}

CiamClient::CiamClient(const Credential &credential, const string &region) :
    CiamClient(credential, region, ClientProfile())
{
}

CiamClient::CiamClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CiamClient::ListUserGroupsOutcome CiamClient::ListUserGroups(const ListUserGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ListUserGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUserGroupsResponse rsp = ListUserGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUserGroupsOutcome(rsp);
        else
            return ListUserGroupsOutcome(o.GetError());
    }
    else
    {
        return ListUserGroupsOutcome(outcome.GetError());
    }
}

void CiamClient::ListUserGroupsAsync(const ListUserGroupsRequest& request, const ListUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListUserGroupsRequest&;
    using Resp = ListUserGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "ListUserGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CiamClient::ListUserGroupsOutcomeCallable CiamClient::ListUserGroupsCallable(const ListUserGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListUserGroupsOutcome>>();
    ListUserGroupsAsync(
    request,
    [prom](
        const CiamClient*,
        const ListUserGroupsRequest&,
        ListUserGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

