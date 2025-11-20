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

#include <tencentcloud/controlcenter/v20230110/ControlcenterClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Controlcenter::V20230110;
using namespace TencentCloud::Controlcenter::V20230110::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-01-10";
    const string ENDPOINT = "controlcenter.intl.tencentcloudapi.com";
}

ControlcenterClient::ControlcenterClient(const Credential &credential, const string &region) :
    ControlcenterClient(credential, region, ClientProfile())
{
}

ControlcenterClient::ControlcenterClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ControlcenterClient::BatchApplyAccountBaselinesOutcome ControlcenterClient::BatchApplyAccountBaselines(const BatchApplyAccountBaselinesRequest &request)
{
    auto outcome = MakeRequest(request, "BatchApplyAccountBaselines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchApplyAccountBaselinesResponse rsp = BatchApplyAccountBaselinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchApplyAccountBaselinesOutcome(rsp);
        else
            return BatchApplyAccountBaselinesOutcome(o.GetError());
    }
    else
    {
        return BatchApplyAccountBaselinesOutcome(outcome.GetError());
    }
}

void ControlcenterClient::BatchApplyAccountBaselinesAsync(const BatchApplyAccountBaselinesRequest& request, const BatchApplyAccountBaselinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchApplyAccountBaselinesRequest&;
    using Resp = BatchApplyAccountBaselinesResponse;

    DoRequestAsync<Req, Resp>(
        "BatchApplyAccountBaselines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ControlcenterClient::BatchApplyAccountBaselinesOutcomeCallable ControlcenterClient::BatchApplyAccountBaselinesCallable(const BatchApplyAccountBaselinesRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchApplyAccountBaselinesOutcome>>();
    BatchApplyAccountBaselinesAsync(
    request,
    [prom](
        const ControlcenterClient*,
        const BatchApplyAccountBaselinesRequest&,
        BatchApplyAccountBaselinesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

