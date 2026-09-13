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

#include <tencentcloud/ga2/v20250115/Ga2Client.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ga2::V20250115;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-01-15";
    const string ENDPOINT = "ga2.intl.tencentcloudapi.com";
}

Ga2Client::Ga2Client(const Credential &credential, const string &region) :
    Ga2Client(credential, region, ClientProfile())
{
}

Ga2Client::Ga2Client(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


Ga2Client::DescribeTaskResultOutcome Ga2Client::DescribeTaskResult(const DescribeTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskResultResponse rsp = DescribeTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskResultOutcome(rsp);
        else
            return DescribeTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskResultOutcome(outcome.GetError());
    }
}

void Ga2Client::DescribeTaskResultAsync(const DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskResultRequest&;
    using Resp = DescribeTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DescribeTaskResultOutcomeCallable Ga2Client::DescribeTaskResultCallable(const DescribeTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskResultOutcome>>();
    DescribeTaskResultAsync(
    request,
    [prom](
        const Ga2Client*,
        const DescribeTaskResultRequest&,
        DescribeTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

