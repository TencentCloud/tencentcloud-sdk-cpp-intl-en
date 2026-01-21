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


HunyuanClient::Convert3DFormatOutcome HunyuanClient::Convert3DFormat(const Convert3DFormatRequest &request)
{
    auto outcome = MakeRequest(request, "Convert3DFormat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        Convert3DFormatResponse rsp = Convert3DFormatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return Convert3DFormatOutcome(rsp);
        else
            return Convert3DFormatOutcome(o.GetError());
    }
    else
    {
        return Convert3DFormatOutcome(outcome.GetError());
    }
}

void HunyuanClient::Convert3DFormatAsync(const Convert3DFormatRequest& request, const Convert3DFormatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const Convert3DFormatRequest&;
    using Resp = Convert3DFormatResponse;

    DoRequestAsync<Req, Resp>(
        "Convert3DFormat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::Convert3DFormatOutcomeCallable HunyuanClient::Convert3DFormatCallable(const Convert3DFormatRequest &request)
{
    const auto prom = std::make_shared<std::promise<Convert3DFormatOutcome>>();
    Convert3DFormatAsync(
    request,
    [prom](
        const HunyuanClient*,
        const Convert3DFormatRequest&,
        Convert3DFormatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::Describe3DSmartTopologyJobOutcome HunyuanClient::Describe3DSmartTopologyJob(const Describe3DSmartTopologyJobRequest &request)
{
    auto outcome = MakeRequest(request, "Describe3DSmartTopologyJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        Describe3DSmartTopologyJobResponse rsp = Describe3DSmartTopologyJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return Describe3DSmartTopologyJobOutcome(rsp);
        else
            return Describe3DSmartTopologyJobOutcome(o.GetError());
    }
    else
    {
        return Describe3DSmartTopologyJobOutcome(outcome.GetError());
    }
}

void HunyuanClient::Describe3DSmartTopologyJobAsync(const Describe3DSmartTopologyJobRequest& request, const Describe3DSmartTopologyJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const Describe3DSmartTopologyJobRequest&;
    using Resp = Describe3DSmartTopologyJobResponse;

    DoRequestAsync<Req, Resp>(
        "Describe3DSmartTopologyJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::Describe3DSmartTopologyJobOutcomeCallable HunyuanClient::Describe3DSmartTopologyJobCallable(const Describe3DSmartTopologyJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<Describe3DSmartTopologyJobOutcome>>();
    Describe3DSmartTopologyJobAsync(
    request,
    [prom](
        const HunyuanClient*,
        const Describe3DSmartTopologyJobRequest&,
        Describe3DSmartTopologyJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::QueryHunyuan3DPartJobOutcome HunyuanClient::QueryHunyuan3DPartJob(const QueryHunyuan3DPartJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryHunyuan3DPartJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryHunyuan3DPartJobResponse rsp = QueryHunyuan3DPartJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryHunyuan3DPartJobOutcome(rsp);
        else
            return QueryHunyuan3DPartJobOutcome(o.GetError());
    }
    else
    {
        return QueryHunyuan3DPartJobOutcome(outcome.GetError());
    }
}

void HunyuanClient::QueryHunyuan3DPartJobAsync(const QueryHunyuan3DPartJobRequest& request, const QueryHunyuan3DPartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryHunyuan3DPartJobRequest&;
    using Resp = QueryHunyuan3DPartJobResponse;

    DoRequestAsync<Req, Resp>(
        "QueryHunyuan3DPartJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::QueryHunyuan3DPartJobOutcomeCallable HunyuanClient::QueryHunyuan3DPartJobCallable(const QueryHunyuan3DPartJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryHunyuan3DPartJobOutcome>>();
    QueryHunyuan3DPartJobAsync(
    request,
    [prom](
        const HunyuanClient*,
        const QueryHunyuan3DPartJobRequest&,
        QueryHunyuan3DPartJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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

HunyuanClient::QueryHunyuanTo3DRapidJobOutcome HunyuanClient::QueryHunyuanTo3DRapidJob(const QueryHunyuanTo3DRapidJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryHunyuanTo3DRapidJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryHunyuanTo3DRapidJobResponse rsp = QueryHunyuanTo3DRapidJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryHunyuanTo3DRapidJobOutcome(rsp);
        else
            return QueryHunyuanTo3DRapidJobOutcome(o.GetError());
    }
    else
    {
        return QueryHunyuanTo3DRapidJobOutcome(outcome.GetError());
    }
}

void HunyuanClient::QueryHunyuanTo3DRapidJobAsync(const QueryHunyuanTo3DRapidJobRequest& request, const QueryHunyuanTo3DRapidJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryHunyuanTo3DRapidJobRequest&;
    using Resp = QueryHunyuanTo3DRapidJobResponse;

    DoRequestAsync<Req, Resp>(
        "QueryHunyuanTo3DRapidJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::QueryHunyuanTo3DRapidJobOutcomeCallable HunyuanClient::QueryHunyuanTo3DRapidJobCallable(const QueryHunyuanTo3DRapidJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryHunyuanTo3DRapidJobOutcome>>();
    QueryHunyuanTo3DRapidJobAsync(
    request,
    [prom](
        const HunyuanClient*,
        const QueryHunyuanTo3DRapidJobRequest&,
        QueryHunyuanTo3DRapidJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::Submit3DSmartTopologyJobOutcome HunyuanClient::Submit3DSmartTopologyJob(const Submit3DSmartTopologyJobRequest &request)
{
    auto outcome = MakeRequest(request, "Submit3DSmartTopologyJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        Submit3DSmartTopologyJobResponse rsp = Submit3DSmartTopologyJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return Submit3DSmartTopologyJobOutcome(rsp);
        else
            return Submit3DSmartTopologyJobOutcome(o.GetError());
    }
    else
    {
        return Submit3DSmartTopologyJobOutcome(outcome.GetError());
    }
}

void HunyuanClient::Submit3DSmartTopologyJobAsync(const Submit3DSmartTopologyJobRequest& request, const Submit3DSmartTopologyJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const Submit3DSmartTopologyJobRequest&;
    using Resp = Submit3DSmartTopologyJobResponse;

    DoRequestAsync<Req, Resp>(
        "Submit3DSmartTopologyJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::Submit3DSmartTopologyJobOutcomeCallable HunyuanClient::Submit3DSmartTopologyJobCallable(const Submit3DSmartTopologyJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<Submit3DSmartTopologyJobOutcome>>();
    Submit3DSmartTopologyJobAsync(
    request,
    [prom](
        const HunyuanClient*,
        const Submit3DSmartTopologyJobRequest&,
        Submit3DSmartTopologyJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HunyuanClient::SubmitHunyuan3DPartJobOutcome HunyuanClient::SubmitHunyuan3DPartJob(const SubmitHunyuan3DPartJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitHunyuan3DPartJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitHunyuan3DPartJobResponse rsp = SubmitHunyuan3DPartJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitHunyuan3DPartJobOutcome(rsp);
        else
            return SubmitHunyuan3DPartJobOutcome(o.GetError());
    }
    else
    {
        return SubmitHunyuan3DPartJobOutcome(outcome.GetError());
    }
}

void HunyuanClient::SubmitHunyuan3DPartJobAsync(const SubmitHunyuan3DPartJobRequest& request, const SubmitHunyuan3DPartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitHunyuan3DPartJobRequest&;
    using Resp = SubmitHunyuan3DPartJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitHunyuan3DPartJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::SubmitHunyuan3DPartJobOutcomeCallable HunyuanClient::SubmitHunyuan3DPartJobCallable(const SubmitHunyuan3DPartJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitHunyuan3DPartJobOutcome>>();
    SubmitHunyuan3DPartJobAsync(
    request,
    [prom](
        const HunyuanClient*,
        const SubmitHunyuan3DPartJobRequest&,
        SubmitHunyuan3DPartJobOutcome resp,
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

HunyuanClient::SubmitHunyuanTo3DRapidJobOutcome HunyuanClient::SubmitHunyuanTo3DRapidJob(const SubmitHunyuanTo3DRapidJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitHunyuanTo3DRapidJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitHunyuanTo3DRapidJobResponse rsp = SubmitHunyuanTo3DRapidJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitHunyuanTo3DRapidJobOutcome(rsp);
        else
            return SubmitHunyuanTo3DRapidJobOutcome(o.GetError());
    }
    else
    {
        return SubmitHunyuanTo3DRapidJobOutcome(outcome.GetError());
    }
}

void HunyuanClient::SubmitHunyuanTo3DRapidJobAsync(const SubmitHunyuanTo3DRapidJobRequest& request, const SubmitHunyuanTo3DRapidJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitHunyuanTo3DRapidJobRequest&;
    using Resp = SubmitHunyuanTo3DRapidJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitHunyuanTo3DRapidJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HunyuanClient::SubmitHunyuanTo3DRapidJobOutcomeCallable HunyuanClient::SubmitHunyuanTo3DRapidJobCallable(const SubmitHunyuanTo3DRapidJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitHunyuanTo3DRapidJobOutcome>>();
    SubmitHunyuanTo3DRapidJobAsync(
    request,
    [prom](
        const HunyuanClient*,
        const SubmitHunyuanTo3DRapidJobRequest&,
        SubmitHunyuanTo3DRapidJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

