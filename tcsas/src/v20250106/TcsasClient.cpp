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

#include <tencentcloud/tcsas/v20250106/TcsasClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tcsas::V20250106;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-01-06";
    const string ENDPOINT = "tcsas.intl.tencentcloudapi.com";
}

TcsasClient::TcsasClient(const Credential &credential, const string &region) :
    TcsasClient(credential, region, ClientProfile())
{
}

TcsasClient::TcsasClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TcsasClient::DescribeMNGMAUDataDetailOutcome TcsasClient::DescribeMNGMAUDataDetail(const DescribeMNGMAUDataDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNGMAUDataDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNGMAUDataDetailResponse rsp = DescribeMNGMAUDataDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNGMAUDataDetailOutcome(rsp);
        else
            return DescribeMNGMAUDataDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMNGMAUDataDetailOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNGMAUDataDetailAsync(const DescribeMNGMAUDataDetailRequest& request, const DescribeMNGMAUDataDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNGMAUDataDetailRequest&;
    using Resp = DescribeMNGMAUDataDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNGMAUDataDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNGMAUDataDetailOutcomeCallable TcsasClient::DescribeMNGMAUDataDetailCallable(const DescribeMNGMAUDataDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNGMAUDataDetailOutcome>>();
    DescribeMNGMAUDataDetailAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNGMAUDataDetailRequest&,
        DescribeMNGMAUDataDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNGMAULineChartOutcome TcsasClient::DescribeMNGMAULineChart(const DescribeMNGMAULineChartRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNGMAULineChart");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNGMAULineChartResponse rsp = DescribeMNGMAULineChartResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNGMAULineChartOutcome(rsp);
        else
            return DescribeMNGMAULineChartOutcome(o.GetError());
    }
    else
    {
        return DescribeMNGMAULineChartOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNGMAULineChartAsync(const DescribeMNGMAULineChartRequest& request, const DescribeMNGMAULineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNGMAULineChartRequest&;
    using Resp = DescribeMNGMAULineChartResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNGMAULineChart", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNGMAULineChartOutcomeCallable TcsasClient::DescribeMNGMAULineChartCallable(const DescribeMNGMAULineChartRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNGMAULineChartOutcome>>();
    DescribeMNGMAULineChartAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNGMAULineChartRequest&,
        DescribeMNGMAULineChartOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNGMAUMonthlyComparisonMetricCardOutcome TcsasClient::DescribeMNGMAUMonthlyComparisonMetricCard(const DescribeMNGMAUMonthlyComparisonMetricCardRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNGMAUMonthlyComparisonMetricCard");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNGMAUMonthlyComparisonMetricCardResponse rsp = DescribeMNGMAUMonthlyComparisonMetricCardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNGMAUMonthlyComparisonMetricCardOutcome(rsp);
        else
            return DescribeMNGMAUMonthlyComparisonMetricCardOutcome(o.GetError());
    }
    else
    {
        return DescribeMNGMAUMonthlyComparisonMetricCardOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNGMAUMonthlyComparisonMetricCardAsync(const DescribeMNGMAUMonthlyComparisonMetricCardRequest& request, const DescribeMNGMAUMonthlyComparisonMetricCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNGMAUMonthlyComparisonMetricCardRequest&;
    using Resp = DescribeMNGMAUMonthlyComparisonMetricCardResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNGMAUMonthlyComparisonMetricCard", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNGMAUMonthlyComparisonMetricCardOutcomeCallable TcsasClient::DescribeMNGMAUMonthlyComparisonMetricCardCallable(const DescribeMNGMAUMonthlyComparisonMetricCardRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNGMAUMonthlyComparisonMetricCardOutcome>>();
    DescribeMNGMAUMonthlyComparisonMetricCardAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNGMAUMonthlyComparisonMetricCardRequest&,
        DescribeMNGMAUMonthlyComparisonMetricCardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNPMAUDataDetailOutcome TcsasClient::DescribeMNPMAUDataDetail(const DescribeMNPMAUDataDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPMAUDataDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPMAUDataDetailResponse rsp = DescribeMNPMAUDataDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPMAUDataDetailOutcome(rsp);
        else
            return DescribeMNPMAUDataDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPMAUDataDetailOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPMAUDataDetailAsync(const DescribeMNPMAUDataDetailRequest& request, const DescribeMNPMAUDataDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNPMAUDataDetailRequest&;
    using Resp = DescribeMNPMAUDataDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPMAUDataDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPMAUDataDetailOutcomeCallable TcsasClient::DescribeMNPMAUDataDetailCallable(const DescribeMNPMAUDataDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPMAUDataDetailOutcome>>();
    DescribeMNPMAUDataDetailAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPMAUDataDetailRequest&,
        DescribeMNPMAUDataDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNPMAULineChartOutcome TcsasClient::DescribeMNPMAULineChart(const DescribeMNPMAULineChartRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPMAULineChart");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPMAULineChartResponse rsp = DescribeMNPMAULineChartResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPMAULineChartOutcome(rsp);
        else
            return DescribeMNPMAULineChartOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPMAULineChartOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPMAULineChartAsync(const DescribeMNPMAULineChartRequest& request, const DescribeMNPMAULineChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNPMAULineChartRequest&;
    using Resp = DescribeMNPMAULineChartResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPMAULineChart", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPMAULineChartOutcomeCallable TcsasClient::DescribeMNPMAULineChartCallable(const DescribeMNPMAULineChartRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPMAULineChartOutcome>>();
    DescribeMNPMAULineChartAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPMAULineChartRequest&,
        DescribeMNPMAULineChartOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcsasClient::DescribeMNPMAUMetricCardOutcome TcsasClient::DescribeMNPMAUMetricCard(const DescribeMNPMAUMetricCardRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMNPMAUMetricCard");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMNPMAUMetricCardResponse rsp = DescribeMNPMAUMetricCardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMNPMAUMetricCardOutcome(rsp);
        else
            return DescribeMNPMAUMetricCardOutcome(o.GetError());
    }
    else
    {
        return DescribeMNPMAUMetricCardOutcome(outcome.GetError());
    }
}

void TcsasClient::DescribeMNPMAUMetricCardAsync(const DescribeMNPMAUMetricCardRequest& request, const DescribeMNPMAUMetricCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMNPMAUMetricCardRequest&;
    using Resp = DescribeMNPMAUMetricCardResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMNPMAUMetricCard", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcsasClient::DescribeMNPMAUMetricCardOutcomeCallable TcsasClient::DescribeMNPMAUMetricCardCallable(const DescribeMNPMAUMetricCardRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMNPMAUMetricCardOutcome>>();
    DescribeMNPMAUMetricCardAsync(
    request,
    [prom](
        const TcsasClient*,
        const DescribeMNPMAUMetricCardRequest&,
        DescribeMNPMAUMetricCardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

