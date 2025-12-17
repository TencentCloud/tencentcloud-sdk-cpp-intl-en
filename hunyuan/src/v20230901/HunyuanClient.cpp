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

#include <tencentcloud/hunyuan/v20230901/HunyuanClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Hunyuan::V20230901;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-09-01";
    const string ENDPOINT = "hunyuan.intl.tencentcloudapi.com";
}

HunyuanClient::HunyuanClient(const Credential &credential, const string &region) :
    HunyuanClient(credential, region, ClientProfile())
{
}

HunyuanClient::HunyuanClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


HunyuanClient::QueryHunyuanTo3DProJobOutcome HunyuanClient::QueryHunyuanTo3DProJob(const QueryHunyuanTo3DProJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryHunyuanTo3DProJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryHunyuanTo3DProJobResponse rsp = QueryHunyuanTo3DProJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryHunyuanTo3DProJobOutcome(rsp);
        else
            return QueryHunyuanTo3DProJobOutcome(o.GetError());
    }
    else
    {
        return QueryHunyuanTo3DProJobOutcome(outcome.GetError());
    }
}

void HunyuanClient::QueryHunyuanTo3DProJobAsync(const QueryHunyuanTo3DProJobRequest& request, const QueryHunyuanTo3DProJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryHunyuanTo3DProJobRequest&;
    using Resp = QueryHunyuanTo3DProJobResponse;

    DoRequestAsync<Req, Resp>(
        "QueryHunyuanTo3DProJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::QueryHunyuanTo3DProJobOutcomeCallable HunyuanClient::QueryHunyuanTo3DProJobCallable(const QueryHunyuanTo3DProJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryHunyuanTo3DProJobOutcome>>();
    QueryHunyuanTo3DProJobAsync(
    request,
    [prom](
        const HunyuanClient*,
        const QueryHunyuanTo3DProJobRequest&,
        QueryHunyuanTo3DProJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::SubmitHunyuanTo3DProJobOutcome HunyuanClient::SubmitHunyuanTo3DProJob(const SubmitHunyuanTo3DProJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitHunyuanTo3DProJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitHunyuanTo3DProJobResponse rsp = SubmitHunyuanTo3DProJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitHunyuanTo3DProJobOutcome(rsp);
        else
            return SubmitHunyuanTo3DProJobOutcome(o.GetError());
    }
    else
    {
        return SubmitHunyuanTo3DProJobOutcome(outcome.GetError());
    }
}

void HunyuanClient::SubmitHunyuanTo3DProJobAsync(const SubmitHunyuanTo3DProJobRequest& request, const SubmitHunyuanTo3DProJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitHunyuanTo3DProJobRequest&;
    using Resp = SubmitHunyuanTo3DProJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitHunyuanTo3DProJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::SubmitHunyuanTo3DProJobOutcomeCallable HunyuanClient::SubmitHunyuanTo3DProJobCallable(const SubmitHunyuanTo3DProJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitHunyuanTo3DProJobOutcome>>();
    SubmitHunyuanTo3DProJobAsync(
    request,
    [prom](
        const HunyuanClient*,
        const SubmitHunyuanTo3DProJobRequest&,
        SubmitHunyuanTo3DProJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

