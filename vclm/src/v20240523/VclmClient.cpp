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
    const string ENDPOINT = "vclm.intl.tencentcloudapi.com";
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
    using Req = const DescribeImageAnimateJobRequest&;
    using Resp = DescribeImageAnimateJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageAnimateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::DescribeImageAnimateJobOutcomeCallable VclmClient::DescribeImageAnimateJobCallable(const DescribeImageAnimateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageAnimateJobOutcome>>();
    DescribeImageAnimateJobAsync(
    request,
    [prom](
        const VclmClient*,
        const DescribeImageAnimateJobRequest&,
        DescribeImageAnimateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SubmitImageAnimateJobRequest&;
    using Resp = SubmitImageAnimateJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitImageAnimateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VclmClient::SubmitImageAnimateJobOutcomeCallable VclmClient::SubmitImageAnimateJobCallable(const SubmitImageAnimateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitImageAnimateJobOutcome>>();
    SubmitImageAnimateJobAsync(
    request,
    [prom](
        const VclmClient*,
        const SubmitImageAnimateJobRequest&,
        SubmitImageAnimateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

