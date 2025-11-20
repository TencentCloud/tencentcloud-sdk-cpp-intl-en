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

#include <tencentcloud/tione/v20211111/TioneClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tione::V20211111;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-11-11";
    const string ENDPOINT = "tione.intl.tencentcloudapi.com";
}

TioneClient::TioneClient(const Credential &credential, const string &region) :
    TioneClient(credential, region, ClientProfile())
{
}

TioneClient::TioneClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TioneClient::DescribeModelServiceGroupsOutcome TioneClient::DescribeModelServiceGroups(const DescribeModelServiceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelServiceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelServiceGroupsResponse rsp = DescribeModelServiceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelServiceGroupsOutcome(rsp);
        else
            return DescribeModelServiceGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeModelServiceGroupsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeModelServiceGroupsAsync(const DescribeModelServiceGroupsRequest& request, const DescribeModelServiceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelServiceGroupsRequest&;
    using Resp = DescribeModelServiceGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModelServiceGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeModelServiceGroupsOutcomeCallable TioneClient::DescribeModelServiceGroupsCallable(const DescribeModelServiceGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelServiceGroupsOutcome>>();
    DescribeModelServiceGroupsAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeModelServiceGroupsRequest&,
        DescribeModelServiceGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

