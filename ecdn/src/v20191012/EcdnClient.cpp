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

#include <tencentcloud/ecdn/v20191012/EcdnClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ecdn::V20191012;
using namespace TencentCloud::Ecdn::V20191012::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-10-12";
    const string ENDPOINT = "ecdn.intl.tencentcloudapi.com";
}

EcdnClient::EcdnClient(const Credential &credential, const string &region) :
    EcdnClient(credential, region, ClientProfile())
{
}

EcdnClient::EcdnClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EcdnClient::AddEcdnDomainOutcome EcdnClient::AddEcdnDomain(const AddEcdnDomainRequest &request)
{
    auto outcome = MakeRequest(request, "AddEcdnDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddEcdnDomainResponse rsp = AddEcdnDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddEcdnDomainOutcome(rsp);
        else
            return AddEcdnDomainOutcome(o.GetError());
    }
    else
    {
        return AddEcdnDomainOutcome(outcome.GetError());
    }
}

void EcdnClient::AddEcdnDomainAsync(const AddEcdnDomainRequest& request, const AddEcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddEcdnDomainRequest&;
    using Resp = AddEcdnDomainResponse;

    DoRequestAsync<Req, Resp>(
        "AddEcdnDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::AddEcdnDomainOutcomeCallable EcdnClient::AddEcdnDomainCallable(const AddEcdnDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddEcdnDomainOutcome>>();
    AddEcdnDomainAsync(
    request,
    [prom](
        const EcdnClient*,
        const AddEcdnDomainRequest&,
        AddEcdnDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcdnClient::DeleteEcdnDomainOutcome EcdnClient::DeleteEcdnDomain(const DeleteEcdnDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEcdnDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEcdnDomainResponse rsp = DeleteEcdnDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEcdnDomainOutcome(rsp);
        else
            return DeleteEcdnDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteEcdnDomainOutcome(outcome.GetError());
    }
}

void EcdnClient::DeleteEcdnDomainAsync(const DeleteEcdnDomainRequest& request, const DeleteEcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEcdnDomainRequest&;
    using Resp = DeleteEcdnDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEcdnDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::DeleteEcdnDomainOutcomeCallable EcdnClient::DeleteEcdnDomainCallable(const DeleteEcdnDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEcdnDomainOutcome>>();
    DeleteEcdnDomainAsync(
    request,
    [prom](
        const EcdnClient*,
        const DeleteEcdnDomainRequest&,
        DeleteEcdnDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcdnClient::DescribeDomainsOutcome EcdnClient::DescribeDomains(const DescribeDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainsResponse rsp = DescribeDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainsOutcome(rsp);
        else
            return DescribeDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainsOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainsRequest&;
    using Resp = DescribeDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::DescribeDomainsOutcomeCallable EcdnClient::DescribeDomainsCallable(const DescribeDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainsOutcome>>();
    DescribeDomainsAsync(
    request,
    [prom](
        const EcdnClient*,
        const DescribeDomainsRequest&,
        DescribeDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcdnClient::DescribeDomainsConfigOutcome EcdnClient::DescribeDomainsConfig(const DescribeDomainsConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainsConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainsConfigResponse rsp = DescribeDomainsConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainsConfigOutcome(rsp);
        else
            return DescribeDomainsConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainsConfigOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribeDomainsConfigAsync(const DescribeDomainsConfigRequest& request, const DescribeDomainsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainsConfigRequest&;
    using Resp = DescribeDomainsConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainsConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::DescribeDomainsConfigOutcomeCallable EcdnClient::DescribeDomainsConfigCallable(const DescribeDomainsConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainsConfigOutcome>>();
    DescribeDomainsConfigAsync(
    request,
    [prom](
        const EcdnClient*,
        const DescribeDomainsConfigRequest&,
        DescribeDomainsConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcdnClient::DescribeEcdnDomainLogsOutcome EcdnClient::DescribeEcdnDomainLogs(const DescribeEcdnDomainLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEcdnDomainLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEcdnDomainLogsResponse rsp = DescribeEcdnDomainLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEcdnDomainLogsOutcome(rsp);
        else
            return DescribeEcdnDomainLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeEcdnDomainLogsOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribeEcdnDomainLogsAsync(const DescribeEcdnDomainLogsRequest& request, const DescribeEcdnDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEcdnDomainLogsRequest&;
    using Resp = DescribeEcdnDomainLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEcdnDomainLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::DescribeEcdnDomainLogsOutcomeCallable EcdnClient::DescribeEcdnDomainLogsCallable(const DescribeEcdnDomainLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEcdnDomainLogsOutcome>>();
    DescribeEcdnDomainLogsAsync(
    request,
    [prom](
        const EcdnClient*,
        const DescribeEcdnDomainLogsRequest&,
        DescribeEcdnDomainLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcdnClient::DescribeEcdnDomainStatisticsOutcome EcdnClient::DescribeEcdnDomainStatistics(const DescribeEcdnDomainStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEcdnDomainStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEcdnDomainStatisticsResponse rsp = DescribeEcdnDomainStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEcdnDomainStatisticsOutcome(rsp);
        else
            return DescribeEcdnDomainStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeEcdnDomainStatisticsOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribeEcdnDomainStatisticsAsync(const DescribeEcdnDomainStatisticsRequest& request, const DescribeEcdnDomainStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEcdnDomainStatisticsRequest&;
    using Resp = DescribeEcdnDomainStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEcdnDomainStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::DescribeEcdnDomainStatisticsOutcomeCallable EcdnClient::DescribeEcdnDomainStatisticsCallable(const DescribeEcdnDomainStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEcdnDomainStatisticsOutcome>>();
    DescribeEcdnDomainStatisticsAsync(
    request,
    [prom](
        const EcdnClient*,
        const DescribeEcdnDomainStatisticsRequest&,
        DescribeEcdnDomainStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcdnClient::DescribeEcdnStatisticsOutcome EcdnClient::DescribeEcdnStatistics(const DescribeEcdnStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEcdnStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEcdnStatisticsResponse rsp = DescribeEcdnStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEcdnStatisticsOutcome(rsp);
        else
            return DescribeEcdnStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeEcdnStatisticsOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribeEcdnStatisticsAsync(const DescribeEcdnStatisticsRequest& request, const DescribeEcdnStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEcdnStatisticsRequest&;
    using Resp = DescribeEcdnStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEcdnStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::DescribeEcdnStatisticsOutcomeCallable EcdnClient::DescribeEcdnStatisticsCallable(const DescribeEcdnStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEcdnStatisticsOutcome>>();
    DescribeEcdnStatisticsAsync(
    request,
    [prom](
        const EcdnClient*,
        const DescribeEcdnStatisticsRequest&,
        DescribeEcdnStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcdnClient::DescribeIpStatusOutcome EcdnClient::DescribeIpStatus(const DescribeIpStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpStatusResponse rsp = DescribeIpStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpStatusOutcome(rsp);
        else
            return DescribeIpStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeIpStatusOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribeIpStatusAsync(const DescribeIpStatusRequest& request, const DescribeIpStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIpStatusRequest&;
    using Resp = DescribeIpStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIpStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::DescribeIpStatusOutcomeCallable EcdnClient::DescribeIpStatusCallable(const DescribeIpStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIpStatusOutcome>>();
    DescribeIpStatusAsync(
    request,
    [prom](
        const EcdnClient*,
        const DescribeIpStatusRequest&,
        DescribeIpStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcdnClient::DescribePurgeQuotaOutcome EcdnClient::DescribePurgeQuota(const DescribePurgeQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePurgeQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePurgeQuotaResponse rsp = DescribePurgeQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePurgeQuotaOutcome(rsp);
        else
            return DescribePurgeQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribePurgeQuotaOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribePurgeQuotaAsync(const DescribePurgeQuotaRequest& request, const DescribePurgeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePurgeQuotaRequest&;
    using Resp = DescribePurgeQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePurgeQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::DescribePurgeQuotaOutcomeCallable EcdnClient::DescribePurgeQuotaCallable(const DescribePurgeQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePurgeQuotaOutcome>>();
    DescribePurgeQuotaAsync(
    request,
    [prom](
        const EcdnClient*,
        const DescribePurgeQuotaRequest&,
        DescribePurgeQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcdnClient::DescribePurgeTasksOutcome EcdnClient::DescribePurgeTasks(const DescribePurgeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePurgeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePurgeTasksResponse rsp = DescribePurgeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePurgeTasksOutcome(rsp);
        else
            return DescribePurgeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribePurgeTasksOutcome(outcome.GetError());
    }
}

void EcdnClient::DescribePurgeTasksAsync(const DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePurgeTasksRequest&;
    using Resp = DescribePurgeTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePurgeTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::DescribePurgeTasksOutcomeCallable EcdnClient::DescribePurgeTasksCallable(const DescribePurgeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePurgeTasksOutcome>>();
    DescribePurgeTasksAsync(
    request,
    [prom](
        const EcdnClient*,
        const DescribePurgeTasksRequest&,
        DescribePurgeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcdnClient::PurgePathCacheOutcome EcdnClient::PurgePathCache(const PurgePathCacheRequest &request)
{
    auto outcome = MakeRequest(request, "PurgePathCache");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PurgePathCacheResponse rsp = PurgePathCacheResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PurgePathCacheOutcome(rsp);
        else
            return PurgePathCacheOutcome(o.GetError());
    }
    else
    {
        return PurgePathCacheOutcome(outcome.GetError());
    }
}

void EcdnClient::PurgePathCacheAsync(const PurgePathCacheRequest& request, const PurgePathCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PurgePathCacheRequest&;
    using Resp = PurgePathCacheResponse;

    DoRequestAsync<Req, Resp>(
        "PurgePathCache", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::PurgePathCacheOutcomeCallable EcdnClient::PurgePathCacheCallable(const PurgePathCacheRequest &request)
{
    const auto prom = std::make_shared<std::promise<PurgePathCacheOutcome>>();
    PurgePathCacheAsync(
    request,
    [prom](
        const EcdnClient*,
        const PurgePathCacheRequest&,
        PurgePathCacheOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcdnClient::PurgeUrlsCacheOutcome EcdnClient::PurgeUrlsCache(const PurgeUrlsCacheRequest &request)
{
    auto outcome = MakeRequest(request, "PurgeUrlsCache");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PurgeUrlsCacheResponse rsp = PurgeUrlsCacheResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PurgeUrlsCacheOutcome(rsp);
        else
            return PurgeUrlsCacheOutcome(o.GetError());
    }
    else
    {
        return PurgeUrlsCacheOutcome(outcome.GetError());
    }
}

void EcdnClient::PurgeUrlsCacheAsync(const PurgeUrlsCacheRequest& request, const PurgeUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PurgeUrlsCacheRequest&;
    using Resp = PurgeUrlsCacheResponse;

    DoRequestAsync<Req, Resp>(
        "PurgeUrlsCache", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::PurgeUrlsCacheOutcomeCallable EcdnClient::PurgeUrlsCacheCallable(const PurgeUrlsCacheRequest &request)
{
    const auto prom = std::make_shared<std::promise<PurgeUrlsCacheOutcome>>();
    PurgeUrlsCacheAsync(
    request,
    [prom](
        const EcdnClient*,
        const PurgeUrlsCacheRequest&,
        PurgeUrlsCacheOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcdnClient::StartEcdnDomainOutcome EcdnClient::StartEcdnDomain(const StartEcdnDomainRequest &request)
{
    auto outcome = MakeRequest(request, "StartEcdnDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartEcdnDomainResponse rsp = StartEcdnDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartEcdnDomainOutcome(rsp);
        else
            return StartEcdnDomainOutcome(o.GetError());
    }
    else
    {
        return StartEcdnDomainOutcome(outcome.GetError());
    }
}

void EcdnClient::StartEcdnDomainAsync(const StartEcdnDomainRequest& request, const StartEcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartEcdnDomainRequest&;
    using Resp = StartEcdnDomainResponse;

    DoRequestAsync<Req, Resp>(
        "StartEcdnDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::StartEcdnDomainOutcomeCallable EcdnClient::StartEcdnDomainCallable(const StartEcdnDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartEcdnDomainOutcome>>();
    StartEcdnDomainAsync(
    request,
    [prom](
        const EcdnClient*,
        const StartEcdnDomainRequest&,
        StartEcdnDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcdnClient::StopEcdnDomainOutcome EcdnClient::StopEcdnDomain(const StopEcdnDomainRequest &request)
{
    auto outcome = MakeRequest(request, "StopEcdnDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopEcdnDomainResponse rsp = StopEcdnDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopEcdnDomainOutcome(rsp);
        else
            return StopEcdnDomainOutcome(o.GetError());
    }
    else
    {
        return StopEcdnDomainOutcome(outcome.GetError());
    }
}

void EcdnClient::StopEcdnDomainAsync(const StopEcdnDomainRequest& request, const StopEcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopEcdnDomainRequest&;
    using Resp = StopEcdnDomainResponse;

    DoRequestAsync<Req, Resp>(
        "StopEcdnDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::StopEcdnDomainOutcomeCallable EcdnClient::StopEcdnDomainCallable(const StopEcdnDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopEcdnDomainOutcome>>();
    StopEcdnDomainAsync(
    request,
    [prom](
        const EcdnClient*,
        const StopEcdnDomainRequest&,
        StopEcdnDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EcdnClient::UpdateDomainConfigOutcome EcdnClient::UpdateDomainConfig(const UpdateDomainConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDomainConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDomainConfigResponse rsp = UpdateDomainConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDomainConfigOutcome(rsp);
        else
            return UpdateDomainConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateDomainConfigOutcome(outcome.GetError());
    }
}

void EcdnClient::UpdateDomainConfigAsync(const UpdateDomainConfigRequest& request, const UpdateDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDomainConfigRequest&;
    using Resp = UpdateDomainConfigResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDomainConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EcdnClient::UpdateDomainConfigOutcomeCallable EcdnClient::UpdateDomainConfigCallable(const UpdateDomainConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDomainConfigOutcome>>();
    UpdateDomainConfigAsync(
    request,
    [prom](
        const EcdnClient*,
        const UpdateDomainConfigRequest&,
        UpdateDomainConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

