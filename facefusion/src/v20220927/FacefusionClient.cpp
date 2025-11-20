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

#include <tencentcloud/facefusion/v20220927/FacefusionClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Facefusion::V20220927;
using namespace TencentCloud::Facefusion::V20220927::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-09-27";
    const string ENDPOINT = "facefusion.intl.tencentcloudapi.com";
}

FacefusionClient::FacefusionClient(const Credential &credential, const string &region) :
    FacefusionClient(credential, region, ClientProfile())
{
}

FacefusionClient::FacefusionClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


FacefusionClient::FuseFaceOutcome FacefusionClient::FuseFace(const FuseFaceRequest &request)
{
    auto outcome = MakeRequest(request, "FuseFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FuseFaceResponse rsp = FuseFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FuseFaceOutcome(rsp);
        else
            return FuseFaceOutcome(o.GetError());
    }
    else
    {
        return FuseFaceOutcome(outcome.GetError());
    }
}

void FacefusionClient::FuseFaceAsync(const FuseFaceRequest& request, const FuseFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FuseFaceRequest&;
    using Resp = FuseFaceResponse;

    DoRequestAsync<Req, Resp>(
        "FuseFace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FacefusionClient::FuseFaceOutcomeCallable FacefusionClient::FuseFaceCallable(const FuseFaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<FuseFaceOutcome>>();
    FuseFaceAsync(
    request,
    [prom](
        const FacefusionClient*,
        const FuseFaceRequest&,
        FuseFaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FacefusionClient::QueryVideoFaceFusionJobOutcome FacefusionClient::QueryVideoFaceFusionJob(const QueryVideoFaceFusionJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryVideoFaceFusionJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryVideoFaceFusionJobResponse rsp = QueryVideoFaceFusionJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryVideoFaceFusionJobOutcome(rsp);
        else
            return QueryVideoFaceFusionJobOutcome(o.GetError());
    }
    else
    {
        return QueryVideoFaceFusionJobOutcome(outcome.GetError());
    }
}

void FacefusionClient::QueryVideoFaceFusionJobAsync(const QueryVideoFaceFusionJobRequest& request, const QueryVideoFaceFusionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryVideoFaceFusionJobRequest&;
    using Resp = QueryVideoFaceFusionJobResponse;

    DoRequestAsync<Req, Resp>(
        "QueryVideoFaceFusionJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FacefusionClient::QueryVideoFaceFusionJobOutcomeCallable FacefusionClient::QueryVideoFaceFusionJobCallable(const QueryVideoFaceFusionJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryVideoFaceFusionJobOutcome>>();
    QueryVideoFaceFusionJobAsync(
    request,
    [prom](
        const FacefusionClient*,
        const QueryVideoFaceFusionJobRequest&,
        QueryVideoFaceFusionJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FacefusionClient::SubmitVideoFaceFusionJobOutcome FacefusionClient::SubmitVideoFaceFusionJob(const SubmitVideoFaceFusionJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitVideoFaceFusionJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitVideoFaceFusionJobResponse rsp = SubmitVideoFaceFusionJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitVideoFaceFusionJobOutcome(rsp);
        else
            return SubmitVideoFaceFusionJobOutcome(o.GetError());
    }
    else
    {
        return SubmitVideoFaceFusionJobOutcome(outcome.GetError());
    }
}

void FacefusionClient::SubmitVideoFaceFusionJobAsync(const SubmitVideoFaceFusionJobRequest& request, const SubmitVideoFaceFusionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitVideoFaceFusionJobRequest&;
    using Resp = SubmitVideoFaceFusionJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitVideoFaceFusionJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FacefusionClient::SubmitVideoFaceFusionJobOutcomeCallable FacefusionClient::SubmitVideoFaceFusionJobCallable(const SubmitVideoFaceFusionJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitVideoFaceFusionJobOutcome>>();
    SubmitVideoFaceFusionJobAsync(
    request,
    [prom](
        const FacefusionClient*,
        const SubmitVideoFaceFusionJobRequest&,
        SubmitVideoFaceFusionJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

