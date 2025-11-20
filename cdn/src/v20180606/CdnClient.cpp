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

#include <tencentcloud/cdn/v20180606/CdnClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cdn::V20180606;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-06-06";
    const string ENDPOINT = "cdn.intl.tencentcloudapi.com";
}

CdnClient::CdnClient(const Credential &credential, const string &region) :
    CdnClient(credential, region, ClientProfile())
{
}

CdnClient::CdnClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CdnClient::AddCLSTopicDomainsOutcome CdnClient::AddCLSTopicDomains(const AddCLSTopicDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "AddCLSTopicDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCLSTopicDomainsResponse rsp = AddCLSTopicDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCLSTopicDomainsOutcome(rsp);
        else
            return AddCLSTopicDomainsOutcome(o.GetError());
    }
    else
    {
        return AddCLSTopicDomainsOutcome(outcome.GetError());
    }
}

void CdnClient::AddCLSTopicDomainsAsync(const AddCLSTopicDomainsRequest& request, const AddCLSTopicDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddCLSTopicDomainsRequest&;
    using Resp = AddCLSTopicDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "AddCLSTopicDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::AddCLSTopicDomainsOutcomeCallable CdnClient::AddCLSTopicDomainsCallable(const AddCLSTopicDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddCLSTopicDomainsOutcome>>();
    AddCLSTopicDomainsAsync(
    request,
    [prom](
        const CdnClient*,
        const AddCLSTopicDomainsRequest&,
        AddCLSTopicDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::AddCdnDomainOutcome CdnClient::AddCdnDomain(const AddCdnDomainRequest &request)
{
    auto outcome = MakeRequest(request, "AddCdnDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCdnDomainResponse rsp = AddCdnDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCdnDomainOutcome(rsp);
        else
            return AddCdnDomainOutcome(o.GetError());
    }
    else
    {
        return AddCdnDomainOutcome(outcome.GetError());
    }
}

void CdnClient::AddCdnDomainAsync(const AddCdnDomainRequest& request, const AddCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddCdnDomainRequest&;
    using Resp = AddCdnDomainResponse;

    DoRequestAsync<Req, Resp>(
        "AddCdnDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::AddCdnDomainOutcomeCallable CdnClient::AddCdnDomainCallable(const AddCdnDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddCdnDomainOutcome>>();
    AddCdnDomainAsync(
    request,
    [prom](
        const CdnClient*,
        const AddCdnDomainRequest&,
        AddCdnDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::CreateClsLogTopicOutcome CdnClient::CreateClsLogTopic(const CreateClsLogTopicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClsLogTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClsLogTopicResponse rsp = CreateClsLogTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClsLogTopicOutcome(rsp);
        else
            return CreateClsLogTopicOutcome(o.GetError());
    }
    else
    {
        return CreateClsLogTopicOutcome(outcome.GetError());
    }
}

void CdnClient::CreateClsLogTopicAsync(const CreateClsLogTopicRequest& request, const CreateClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClsLogTopicRequest&;
    using Resp = CreateClsLogTopicResponse;

    DoRequestAsync<Req, Resp>(
        "CreateClsLogTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::CreateClsLogTopicOutcomeCallable CdnClient::CreateClsLogTopicCallable(const CreateClsLogTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClsLogTopicOutcome>>();
    CreateClsLogTopicAsync(
    request,
    [prom](
        const CdnClient*,
        const CreateClsLogTopicRequest&,
        CreateClsLogTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::CreateScdnFailedLogTaskOutcome CdnClient::CreateScdnFailedLogTask(const CreateScdnFailedLogTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScdnFailedLogTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScdnFailedLogTaskResponse rsp = CreateScdnFailedLogTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScdnFailedLogTaskOutcome(rsp);
        else
            return CreateScdnFailedLogTaskOutcome(o.GetError());
    }
    else
    {
        return CreateScdnFailedLogTaskOutcome(outcome.GetError());
    }
}

void CdnClient::CreateScdnFailedLogTaskAsync(const CreateScdnFailedLogTaskRequest& request, const CreateScdnFailedLogTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateScdnFailedLogTaskRequest&;
    using Resp = CreateScdnFailedLogTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateScdnFailedLogTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::CreateScdnFailedLogTaskOutcomeCallable CdnClient::CreateScdnFailedLogTaskCallable(const CreateScdnFailedLogTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateScdnFailedLogTaskOutcome>>();
    CreateScdnFailedLogTaskAsync(
    request,
    [prom](
        const CdnClient*,
        const CreateScdnFailedLogTaskRequest&,
        CreateScdnFailedLogTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DeleteCdnDomainOutcome CdnClient::DeleteCdnDomain(const DeleteCdnDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCdnDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCdnDomainResponse rsp = DeleteCdnDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCdnDomainOutcome(rsp);
        else
            return DeleteCdnDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteCdnDomainOutcome(outcome.GetError());
    }
}

void CdnClient::DeleteCdnDomainAsync(const DeleteCdnDomainRequest& request, const DeleteCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCdnDomainRequest&;
    using Resp = DeleteCdnDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCdnDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::DeleteCdnDomainOutcomeCallable CdnClient::DeleteCdnDomainCallable(const DeleteCdnDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCdnDomainOutcome>>();
    DeleteCdnDomainAsync(
    request,
    [prom](
        const CdnClient*,
        const DeleteCdnDomainRequest&,
        DeleteCdnDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DeleteClsLogTopicOutcome CdnClient::DeleteClsLogTopic(const DeleteClsLogTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClsLogTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClsLogTopicResponse rsp = DeleteClsLogTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClsLogTopicOutcome(rsp);
        else
            return DeleteClsLogTopicOutcome(o.GetError());
    }
    else
    {
        return DeleteClsLogTopicOutcome(outcome.GetError());
    }
}

void CdnClient::DeleteClsLogTopicAsync(const DeleteClsLogTopicRequest& request, const DeleteClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClsLogTopicRequest&;
    using Resp = DeleteClsLogTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteClsLogTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::DeleteClsLogTopicOutcomeCallable CdnClient::DeleteClsLogTopicCallable(const DeleteClsLogTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClsLogTopicOutcome>>();
    DeleteClsLogTopicAsync(
    request,
    [prom](
        const CdnClient*,
        const DeleteClsLogTopicRequest&,
        DeleteClsLogTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DescribeBillingDataOutcome CdnClient::DescribeBillingData(const DescribeBillingDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillingData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillingDataResponse rsp = DescribeBillingDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillingDataOutcome(rsp);
        else
            return DescribeBillingDataOutcome(o.GetError());
    }
    else
    {
        return DescribeBillingDataOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeBillingDataAsync(const DescribeBillingDataRequest& request, const DescribeBillingDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillingDataRequest&;
    using Resp = DescribeBillingDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillingData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::DescribeBillingDataOutcomeCallable CdnClient::DescribeBillingDataCallable(const DescribeBillingDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillingDataOutcome>>();
    DescribeBillingDataAsync(
    request,
    [prom](
        const CdnClient*,
        const DescribeBillingDataRequest&,
        DescribeBillingDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DescribeCdnDataOutcome CdnClient::DescribeCdnData(const DescribeCdnDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCdnData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCdnDataResponse rsp = DescribeCdnDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCdnDataOutcome(rsp);
        else
            return DescribeCdnDataOutcome(o.GetError());
    }
    else
    {
        return DescribeCdnDataOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeCdnDataAsync(const DescribeCdnDataRequest& request, const DescribeCdnDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCdnDataRequest&;
    using Resp = DescribeCdnDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCdnData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::DescribeCdnDataOutcomeCallable CdnClient::DescribeCdnDataCallable(const DescribeCdnDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCdnDataOutcome>>();
    DescribeCdnDataAsync(
    request,
    [prom](
        const CdnClient*,
        const DescribeCdnDataRequest&,
        DescribeCdnDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DescribeCdnDomainLogsOutcome CdnClient::DescribeCdnDomainLogs(const DescribeCdnDomainLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCdnDomainLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCdnDomainLogsResponse rsp = DescribeCdnDomainLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCdnDomainLogsOutcome(rsp);
        else
            return DescribeCdnDomainLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeCdnDomainLogsOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeCdnDomainLogsAsync(const DescribeCdnDomainLogsRequest& request, const DescribeCdnDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCdnDomainLogsRequest&;
    using Resp = DescribeCdnDomainLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCdnDomainLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::DescribeCdnDomainLogsOutcomeCallable CdnClient::DescribeCdnDomainLogsCallable(const DescribeCdnDomainLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCdnDomainLogsOutcome>>();
    DescribeCdnDomainLogsAsync(
    request,
    [prom](
        const CdnClient*,
        const DescribeCdnDomainLogsRequest&,
        DescribeCdnDomainLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DescribeCdnIpOutcome CdnClient::DescribeCdnIp(const DescribeCdnIpRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCdnIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCdnIpResponse rsp = DescribeCdnIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCdnIpOutcome(rsp);
        else
            return DescribeCdnIpOutcome(o.GetError());
    }
    else
    {
        return DescribeCdnIpOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeCdnIpAsync(const DescribeCdnIpRequest& request, const DescribeCdnIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCdnIpRequest&;
    using Resp = DescribeCdnIpResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCdnIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::DescribeCdnIpOutcomeCallable CdnClient::DescribeCdnIpCallable(const DescribeCdnIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCdnIpOutcome>>();
    DescribeCdnIpAsync(
    request,
    [prom](
        const CdnClient*,
        const DescribeCdnIpRequest&,
        DescribeCdnIpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DescribeCdnOriginIpOutcome CdnClient::DescribeCdnOriginIp(const DescribeCdnOriginIpRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCdnOriginIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCdnOriginIpResponse rsp = DescribeCdnOriginIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCdnOriginIpOutcome(rsp);
        else
            return DescribeCdnOriginIpOutcome(o.GetError());
    }
    else
    {
        return DescribeCdnOriginIpOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeCdnOriginIpAsync(const DescribeCdnOriginIpRequest& request, const DescribeCdnOriginIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCdnOriginIpRequest&;
    using Resp = DescribeCdnOriginIpResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCdnOriginIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::DescribeCdnOriginIpOutcomeCallable CdnClient::DescribeCdnOriginIpCallable(const DescribeCdnOriginIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCdnOriginIpOutcome>>();
    DescribeCdnOriginIpAsync(
    request,
    [prom](
        const CdnClient*,
        const DescribeCdnOriginIpRequest&,
        DescribeCdnOriginIpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DescribeCertDomainsOutcome CdnClient::DescribeCertDomains(const DescribeCertDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertDomainsResponse rsp = DescribeCertDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertDomainsOutcome(rsp);
        else
            return DescribeCertDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeCertDomainsOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeCertDomainsAsync(const DescribeCertDomainsRequest& request, const DescribeCertDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCertDomainsRequest&;
    using Resp = DescribeCertDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCertDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::DescribeCertDomainsOutcomeCallable CdnClient::DescribeCertDomainsCallable(const DescribeCertDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCertDomainsOutcome>>();
    DescribeCertDomainsAsync(
    request,
    [prom](
        const CdnClient*,
        const DescribeCertDomainsRequest&,
        DescribeCertDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DescribeDomainsOutcome CdnClient::DescribeDomains(const DescribeDomainsRequest &request)
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

void CdnClient::DescribeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdnClient::DescribeDomainsOutcomeCallable CdnClient::DescribeDomainsCallable(const DescribeDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainsOutcome>>();
    DescribeDomainsAsync(
    request,
    [prom](
        const CdnClient*,
        const DescribeDomainsRequest&,
        DescribeDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DescribeDomainsConfigOutcome CdnClient::DescribeDomainsConfig(const DescribeDomainsConfigRequest &request)
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

void CdnClient::DescribeDomainsConfigAsync(const DescribeDomainsConfigRequest& request, const DescribeDomainsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdnClient::DescribeDomainsConfigOutcomeCallable CdnClient::DescribeDomainsConfigCallable(const DescribeDomainsConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainsConfigOutcome>>();
    DescribeDomainsConfigAsync(
    request,
    [prom](
        const CdnClient*,
        const DescribeDomainsConfigRequest&,
        DescribeDomainsConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DescribeIpStatusOutcome CdnClient::DescribeIpStatus(const DescribeIpStatusRequest &request)
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

void CdnClient::DescribeIpStatusAsync(const DescribeIpStatusRequest& request, const DescribeIpStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdnClient::DescribeIpStatusOutcomeCallable CdnClient::DescribeIpStatusCallable(const DescribeIpStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIpStatusOutcome>>();
    DescribeIpStatusAsync(
    request,
    [prom](
        const CdnClient*,
        const DescribeIpStatusRequest&,
        DescribeIpStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DescribeIpVisitOutcome CdnClient::DescribeIpVisit(const DescribeIpVisitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpVisit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpVisitResponse rsp = DescribeIpVisitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpVisitOutcome(rsp);
        else
            return DescribeIpVisitOutcome(o.GetError());
    }
    else
    {
        return DescribeIpVisitOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeIpVisitAsync(const DescribeIpVisitRequest& request, const DescribeIpVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIpVisitRequest&;
    using Resp = DescribeIpVisitResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIpVisit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::DescribeIpVisitOutcomeCallable CdnClient::DescribeIpVisitCallable(const DescribeIpVisitRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIpVisitOutcome>>();
    DescribeIpVisitAsync(
    request,
    [prom](
        const CdnClient*,
        const DescribeIpVisitRequest&,
        DescribeIpVisitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DescribeMapInfoOutcome CdnClient::DescribeMapInfo(const DescribeMapInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMapInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMapInfoResponse rsp = DescribeMapInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMapInfoOutcome(rsp);
        else
            return DescribeMapInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeMapInfoOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeMapInfoAsync(const DescribeMapInfoRequest& request, const DescribeMapInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMapInfoRequest&;
    using Resp = DescribeMapInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMapInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::DescribeMapInfoOutcomeCallable CdnClient::DescribeMapInfoCallable(const DescribeMapInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMapInfoOutcome>>();
    DescribeMapInfoAsync(
    request,
    [prom](
        const CdnClient*,
        const DescribeMapInfoRequest&,
        DescribeMapInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DescribeOriginDataOutcome CdnClient::DescribeOriginData(const DescribeOriginDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOriginData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOriginDataResponse rsp = DescribeOriginDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOriginDataOutcome(rsp);
        else
            return DescribeOriginDataOutcome(o.GetError());
    }
    else
    {
        return DescribeOriginDataOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeOriginDataAsync(const DescribeOriginDataRequest& request, const DescribeOriginDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOriginDataRequest&;
    using Resp = DescribeOriginDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOriginData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::DescribeOriginDataOutcomeCallable CdnClient::DescribeOriginDataCallable(const DescribeOriginDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOriginDataOutcome>>();
    DescribeOriginDataAsync(
    request,
    [prom](
        const CdnClient*,
        const DescribeOriginDataRequest&,
        DescribeOriginDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DescribePayTypeOutcome CdnClient::DescribePayType(const DescribePayTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePayType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePayTypeResponse rsp = DescribePayTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePayTypeOutcome(rsp);
        else
            return DescribePayTypeOutcome(o.GetError());
    }
    else
    {
        return DescribePayTypeOutcome(outcome.GetError());
    }
}

void CdnClient::DescribePayTypeAsync(const DescribePayTypeRequest& request, const DescribePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePayTypeRequest&;
    using Resp = DescribePayTypeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePayType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::DescribePayTypeOutcomeCallable CdnClient::DescribePayTypeCallable(const DescribePayTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePayTypeOutcome>>();
    DescribePayTypeAsync(
    request,
    [prom](
        const CdnClient*,
        const DescribePayTypeRequest&,
        DescribePayTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DescribePurgeQuotaOutcome CdnClient::DescribePurgeQuota(const DescribePurgeQuotaRequest &request)
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

void CdnClient::DescribePurgeQuotaAsync(const DescribePurgeQuotaRequest& request, const DescribePurgeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdnClient::DescribePurgeQuotaOutcomeCallable CdnClient::DescribePurgeQuotaCallable(const DescribePurgeQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePurgeQuotaOutcome>>();
    DescribePurgeQuotaAsync(
    request,
    [prom](
        const CdnClient*,
        const DescribePurgeQuotaRequest&,
        DescribePurgeQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DescribePurgeTasksOutcome CdnClient::DescribePurgeTasks(const DescribePurgeTasksRequest &request)
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

void CdnClient::DescribePurgeTasksAsync(const DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdnClient::DescribePurgeTasksOutcomeCallable CdnClient::DescribePurgeTasksCallable(const DescribePurgeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePurgeTasksOutcome>>();
    DescribePurgeTasksAsync(
    request,
    [prom](
        const CdnClient*,
        const DescribePurgeTasksRequest&,
        DescribePurgeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DescribePushQuotaOutcome CdnClient::DescribePushQuota(const DescribePushQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePushQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePushQuotaResponse rsp = DescribePushQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePushQuotaOutcome(rsp);
        else
            return DescribePushQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribePushQuotaOutcome(outcome.GetError());
    }
}

void CdnClient::DescribePushQuotaAsync(const DescribePushQuotaRequest& request, const DescribePushQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePushQuotaRequest&;
    using Resp = DescribePushQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePushQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::DescribePushQuotaOutcomeCallable CdnClient::DescribePushQuotaCallable(const DescribePushQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePushQuotaOutcome>>();
    DescribePushQuotaAsync(
    request,
    [prom](
        const CdnClient*,
        const DescribePushQuotaRequest&,
        DescribePushQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DescribePushTasksOutcome CdnClient::DescribePushTasks(const DescribePushTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePushTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePushTasksResponse rsp = DescribePushTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePushTasksOutcome(rsp);
        else
            return DescribePushTasksOutcome(o.GetError());
    }
    else
    {
        return DescribePushTasksOutcome(outcome.GetError());
    }
}

void CdnClient::DescribePushTasksAsync(const DescribePushTasksRequest& request, const DescribePushTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePushTasksRequest&;
    using Resp = DescribePushTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePushTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::DescribePushTasksOutcomeCallable CdnClient::DescribePushTasksCallable(const DescribePushTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePushTasksOutcome>>();
    DescribePushTasksAsync(
    request,
    [prom](
        const CdnClient*,
        const DescribePushTasksRequest&,
        DescribePushTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DescribeReportDataOutcome CdnClient::DescribeReportData(const DescribeReportDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReportData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReportDataResponse rsp = DescribeReportDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReportDataOutcome(rsp);
        else
            return DescribeReportDataOutcome(o.GetError());
    }
    else
    {
        return DescribeReportDataOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeReportDataAsync(const DescribeReportDataRequest& request, const DescribeReportDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReportDataRequest&;
    using Resp = DescribeReportDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReportData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::DescribeReportDataOutcomeCallable CdnClient::DescribeReportDataCallable(const DescribeReportDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReportDataOutcome>>();
    DescribeReportDataAsync(
    request,
    [prom](
        const CdnClient*,
        const DescribeReportDataRequest&,
        DescribeReportDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DescribeUrlViolationsOutcome CdnClient::DescribeUrlViolations(const DescribeUrlViolationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUrlViolations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUrlViolationsResponse rsp = DescribeUrlViolationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUrlViolationsOutcome(rsp);
        else
            return DescribeUrlViolationsOutcome(o.GetError());
    }
    else
    {
        return DescribeUrlViolationsOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeUrlViolationsAsync(const DescribeUrlViolationsRequest& request, const DescribeUrlViolationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUrlViolationsRequest&;
    using Resp = DescribeUrlViolationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUrlViolations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::DescribeUrlViolationsOutcomeCallable CdnClient::DescribeUrlViolationsCallable(const DescribeUrlViolationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUrlViolationsOutcome>>();
    DescribeUrlViolationsAsync(
    request,
    [prom](
        const CdnClient*,
        const DescribeUrlViolationsRequest&,
        DescribeUrlViolationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DisableCachesOutcome CdnClient::DisableCaches(const DisableCachesRequest &request)
{
    auto outcome = MakeRequest(request, "DisableCaches");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableCachesResponse rsp = DisableCachesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableCachesOutcome(rsp);
        else
            return DisableCachesOutcome(o.GetError());
    }
    else
    {
        return DisableCachesOutcome(outcome.GetError());
    }
}

void CdnClient::DisableCachesAsync(const DisableCachesRequest& request, const DisableCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableCachesRequest&;
    using Resp = DisableCachesResponse;

    DoRequestAsync<Req, Resp>(
        "DisableCaches", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::DisableCachesOutcomeCallable CdnClient::DisableCachesCallable(const DisableCachesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableCachesOutcome>>();
    DisableCachesAsync(
    request,
    [prom](
        const CdnClient*,
        const DisableCachesRequest&,
        DisableCachesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::DisableClsLogTopicOutcome CdnClient::DisableClsLogTopic(const DisableClsLogTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DisableClsLogTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableClsLogTopicResponse rsp = DisableClsLogTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableClsLogTopicOutcome(rsp);
        else
            return DisableClsLogTopicOutcome(o.GetError());
    }
    else
    {
        return DisableClsLogTopicOutcome(outcome.GetError());
    }
}

void CdnClient::DisableClsLogTopicAsync(const DisableClsLogTopicRequest& request, const DisableClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableClsLogTopicRequest&;
    using Resp = DisableClsLogTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DisableClsLogTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::DisableClsLogTopicOutcomeCallable CdnClient::DisableClsLogTopicCallable(const DisableClsLogTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableClsLogTopicOutcome>>();
    DisableClsLogTopicAsync(
    request,
    [prom](
        const CdnClient*,
        const DisableClsLogTopicRequest&,
        DisableClsLogTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::EnableCachesOutcome CdnClient::EnableCaches(const EnableCachesRequest &request)
{
    auto outcome = MakeRequest(request, "EnableCaches");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableCachesResponse rsp = EnableCachesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableCachesOutcome(rsp);
        else
            return EnableCachesOutcome(o.GetError());
    }
    else
    {
        return EnableCachesOutcome(outcome.GetError());
    }
}

void CdnClient::EnableCachesAsync(const EnableCachesRequest& request, const EnableCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableCachesRequest&;
    using Resp = EnableCachesResponse;

    DoRequestAsync<Req, Resp>(
        "EnableCaches", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::EnableCachesOutcomeCallable CdnClient::EnableCachesCallable(const EnableCachesRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableCachesOutcome>>();
    EnableCachesAsync(
    request,
    [prom](
        const CdnClient*,
        const EnableCachesRequest&,
        EnableCachesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::EnableClsLogTopicOutcome CdnClient::EnableClsLogTopic(const EnableClsLogTopicRequest &request)
{
    auto outcome = MakeRequest(request, "EnableClsLogTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableClsLogTopicResponse rsp = EnableClsLogTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableClsLogTopicOutcome(rsp);
        else
            return EnableClsLogTopicOutcome(o.GetError());
    }
    else
    {
        return EnableClsLogTopicOutcome(outcome.GetError());
    }
}

void CdnClient::EnableClsLogTopicAsync(const EnableClsLogTopicRequest& request, const EnableClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableClsLogTopicRequest&;
    using Resp = EnableClsLogTopicResponse;

    DoRequestAsync<Req, Resp>(
        "EnableClsLogTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::EnableClsLogTopicOutcomeCallable CdnClient::EnableClsLogTopicCallable(const EnableClsLogTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableClsLogTopicOutcome>>();
    EnableClsLogTopicAsync(
    request,
    [prom](
        const CdnClient*,
        const EnableClsLogTopicRequest&,
        EnableClsLogTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::GetDisableRecordsOutcome CdnClient::GetDisableRecords(const GetDisableRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "GetDisableRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDisableRecordsResponse rsp = GetDisableRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDisableRecordsOutcome(rsp);
        else
            return GetDisableRecordsOutcome(o.GetError());
    }
    else
    {
        return GetDisableRecordsOutcome(outcome.GetError());
    }
}

void CdnClient::GetDisableRecordsAsync(const GetDisableRecordsRequest& request, const GetDisableRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDisableRecordsRequest&;
    using Resp = GetDisableRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "GetDisableRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::GetDisableRecordsOutcomeCallable CdnClient::GetDisableRecordsCallable(const GetDisableRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDisableRecordsOutcome>>();
    GetDisableRecordsAsync(
    request,
    [prom](
        const CdnClient*,
        const GetDisableRecordsRequest&,
        GetDisableRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::ListClsLogTopicsOutcome CdnClient::ListClsLogTopics(const ListClsLogTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "ListClsLogTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListClsLogTopicsResponse rsp = ListClsLogTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListClsLogTopicsOutcome(rsp);
        else
            return ListClsLogTopicsOutcome(o.GetError());
    }
    else
    {
        return ListClsLogTopicsOutcome(outcome.GetError());
    }
}

void CdnClient::ListClsLogTopicsAsync(const ListClsLogTopicsRequest& request, const ListClsLogTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListClsLogTopicsRequest&;
    using Resp = ListClsLogTopicsResponse;

    DoRequestAsync<Req, Resp>(
        "ListClsLogTopics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::ListClsLogTopicsOutcomeCallable CdnClient::ListClsLogTopicsCallable(const ListClsLogTopicsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListClsLogTopicsOutcome>>();
    ListClsLogTopicsAsync(
    request,
    [prom](
        const CdnClient*,
        const ListClsLogTopicsRequest&,
        ListClsLogTopicsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::ListClsTopicDomainsOutcome CdnClient::ListClsTopicDomains(const ListClsTopicDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "ListClsTopicDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListClsTopicDomainsResponse rsp = ListClsTopicDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListClsTopicDomainsOutcome(rsp);
        else
            return ListClsTopicDomainsOutcome(o.GetError());
    }
    else
    {
        return ListClsTopicDomainsOutcome(outcome.GetError());
    }
}

void CdnClient::ListClsTopicDomainsAsync(const ListClsTopicDomainsRequest& request, const ListClsTopicDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListClsTopicDomainsRequest&;
    using Resp = ListClsTopicDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "ListClsTopicDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::ListClsTopicDomainsOutcomeCallable CdnClient::ListClsTopicDomainsCallable(const ListClsTopicDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListClsTopicDomainsOutcome>>();
    ListClsTopicDomainsAsync(
    request,
    [prom](
        const CdnClient*,
        const ListClsTopicDomainsRequest&,
        ListClsTopicDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::ListTopDataOutcome CdnClient::ListTopData(const ListTopDataRequest &request)
{
    auto outcome = MakeRequest(request, "ListTopData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTopDataResponse rsp = ListTopDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTopDataOutcome(rsp);
        else
            return ListTopDataOutcome(o.GetError());
    }
    else
    {
        return ListTopDataOutcome(outcome.GetError());
    }
}

void CdnClient::ListTopDataAsync(const ListTopDataRequest& request, const ListTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListTopDataRequest&;
    using Resp = ListTopDataResponse;

    DoRequestAsync<Req, Resp>(
        "ListTopData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::ListTopDataOutcomeCallable CdnClient::ListTopDataCallable(const ListTopDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListTopDataOutcome>>();
    ListTopDataAsync(
    request,
    [prom](
        const CdnClient*,
        const ListTopDataRequest&,
        ListTopDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::ManageClsTopicDomainsOutcome CdnClient::ManageClsTopicDomains(const ManageClsTopicDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "ManageClsTopicDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManageClsTopicDomainsResponse rsp = ManageClsTopicDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManageClsTopicDomainsOutcome(rsp);
        else
            return ManageClsTopicDomainsOutcome(o.GetError());
    }
    else
    {
        return ManageClsTopicDomainsOutcome(outcome.GetError());
    }
}

void CdnClient::ManageClsTopicDomainsAsync(const ManageClsTopicDomainsRequest& request, const ManageClsTopicDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ManageClsTopicDomainsRequest&;
    using Resp = ManageClsTopicDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "ManageClsTopicDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::ManageClsTopicDomainsOutcomeCallable CdnClient::ManageClsTopicDomainsCallable(const ManageClsTopicDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ManageClsTopicDomainsOutcome>>();
    ManageClsTopicDomainsAsync(
    request,
    [prom](
        const CdnClient*,
        const ManageClsTopicDomainsRequest&,
        ManageClsTopicDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::ModifyDomainConfigOutcome CdnClient::ModifyDomainConfig(const ModifyDomainConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainConfigResponse rsp = ModifyDomainConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainConfigOutcome(rsp);
        else
            return ModifyDomainConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainConfigOutcome(outcome.GetError());
    }
}

void CdnClient::ModifyDomainConfigAsync(const ModifyDomainConfigRequest& request, const ModifyDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainConfigRequest&;
    using Resp = ModifyDomainConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::ModifyDomainConfigOutcomeCallable CdnClient::ModifyDomainConfigCallable(const ModifyDomainConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainConfigOutcome>>();
    ModifyDomainConfigAsync(
    request,
    [prom](
        const CdnClient*,
        const ModifyDomainConfigRequest&,
        ModifyDomainConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::PurgePathCacheOutcome CdnClient::PurgePathCache(const PurgePathCacheRequest &request)
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

void CdnClient::PurgePathCacheAsync(const PurgePathCacheRequest& request, const PurgePathCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdnClient::PurgePathCacheOutcomeCallable CdnClient::PurgePathCacheCallable(const PurgePathCacheRequest &request)
{
    const auto prom = std::make_shared<std::promise<PurgePathCacheOutcome>>();
    PurgePathCacheAsync(
    request,
    [prom](
        const CdnClient*,
        const PurgePathCacheRequest&,
        PurgePathCacheOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::PurgeUrlsCacheOutcome CdnClient::PurgeUrlsCache(const PurgeUrlsCacheRequest &request)
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

void CdnClient::PurgeUrlsCacheAsync(const PurgeUrlsCacheRequest& request, const PurgeUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdnClient::PurgeUrlsCacheOutcomeCallable CdnClient::PurgeUrlsCacheCallable(const PurgeUrlsCacheRequest &request)
{
    const auto prom = std::make_shared<std::promise<PurgeUrlsCacheOutcome>>();
    PurgeUrlsCacheAsync(
    request,
    [prom](
        const CdnClient*,
        const PurgeUrlsCacheRequest&,
        PurgeUrlsCacheOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::PushUrlsCacheOutcome CdnClient::PushUrlsCache(const PushUrlsCacheRequest &request)
{
    auto outcome = MakeRequest(request, "PushUrlsCache");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PushUrlsCacheResponse rsp = PushUrlsCacheResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PushUrlsCacheOutcome(rsp);
        else
            return PushUrlsCacheOutcome(o.GetError());
    }
    else
    {
        return PushUrlsCacheOutcome(outcome.GetError());
    }
}

void CdnClient::PushUrlsCacheAsync(const PushUrlsCacheRequest& request, const PushUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PushUrlsCacheRequest&;
    using Resp = PushUrlsCacheResponse;

    DoRequestAsync<Req, Resp>(
        "PushUrlsCache", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::PushUrlsCacheOutcomeCallable CdnClient::PushUrlsCacheCallable(const PushUrlsCacheRequest &request)
{
    const auto prom = std::make_shared<std::promise<PushUrlsCacheOutcome>>();
    PushUrlsCacheAsync(
    request,
    [prom](
        const CdnClient*,
        const PushUrlsCacheRequest&,
        PushUrlsCacheOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::SearchClsLogOutcome CdnClient::SearchClsLog(const SearchClsLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchClsLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchClsLogResponse rsp = SearchClsLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchClsLogOutcome(rsp);
        else
            return SearchClsLogOutcome(o.GetError());
    }
    else
    {
        return SearchClsLogOutcome(outcome.GetError());
    }
}

void CdnClient::SearchClsLogAsync(const SearchClsLogRequest& request, const SearchClsLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchClsLogRequest&;
    using Resp = SearchClsLogResponse;

    DoRequestAsync<Req, Resp>(
        "SearchClsLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::SearchClsLogOutcomeCallable CdnClient::SearchClsLogCallable(const SearchClsLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchClsLogOutcome>>();
    SearchClsLogAsync(
    request,
    [prom](
        const CdnClient*,
        const SearchClsLogRequest&,
        SearchClsLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::StartCdnDomainOutcome CdnClient::StartCdnDomain(const StartCdnDomainRequest &request)
{
    auto outcome = MakeRequest(request, "StartCdnDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartCdnDomainResponse rsp = StartCdnDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartCdnDomainOutcome(rsp);
        else
            return StartCdnDomainOutcome(o.GetError());
    }
    else
    {
        return StartCdnDomainOutcome(outcome.GetError());
    }
}

void CdnClient::StartCdnDomainAsync(const StartCdnDomainRequest& request, const StartCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartCdnDomainRequest&;
    using Resp = StartCdnDomainResponse;

    DoRequestAsync<Req, Resp>(
        "StartCdnDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::StartCdnDomainOutcomeCallable CdnClient::StartCdnDomainCallable(const StartCdnDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartCdnDomainOutcome>>();
    StartCdnDomainAsync(
    request,
    [prom](
        const CdnClient*,
        const StartCdnDomainRequest&,
        StartCdnDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::StopCdnDomainOutcome CdnClient::StopCdnDomain(const StopCdnDomainRequest &request)
{
    auto outcome = MakeRequest(request, "StopCdnDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopCdnDomainResponse rsp = StopCdnDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopCdnDomainOutcome(rsp);
        else
            return StopCdnDomainOutcome(o.GetError());
    }
    else
    {
        return StopCdnDomainOutcome(outcome.GetError());
    }
}

void CdnClient::StopCdnDomainAsync(const StopCdnDomainRequest& request, const StopCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopCdnDomainRequest&;
    using Resp = StopCdnDomainResponse;

    DoRequestAsync<Req, Resp>(
        "StopCdnDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::StopCdnDomainOutcomeCallable CdnClient::StopCdnDomainCallable(const StopCdnDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopCdnDomainOutcome>>();
    StopCdnDomainAsync(
    request,
    [prom](
        const CdnClient*,
        const StopCdnDomainRequest&,
        StopCdnDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::UpdateDomainConfigOutcome CdnClient::UpdateDomainConfig(const UpdateDomainConfigRequest &request)
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

void CdnClient::UpdateDomainConfigAsync(const UpdateDomainConfigRequest& request, const UpdateDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CdnClient::UpdateDomainConfigOutcomeCallable CdnClient::UpdateDomainConfigCallable(const UpdateDomainConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDomainConfigOutcome>>();
    UpdateDomainConfigAsync(
    request,
    [prom](
        const CdnClient*,
        const UpdateDomainConfigRequest&,
        UpdateDomainConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::UpdatePayTypeOutcome CdnClient::UpdatePayType(const UpdatePayTypeRequest &request)
{
    auto outcome = MakeRequest(request, "UpdatePayType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdatePayTypeResponse rsp = UpdatePayTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdatePayTypeOutcome(rsp);
        else
            return UpdatePayTypeOutcome(o.GetError());
    }
    else
    {
        return UpdatePayTypeOutcome(outcome.GetError());
    }
}

void CdnClient::UpdatePayTypeAsync(const UpdatePayTypeRequest& request, const UpdatePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdatePayTypeRequest&;
    using Resp = UpdatePayTypeResponse;

    DoRequestAsync<Req, Resp>(
        "UpdatePayType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::UpdatePayTypeOutcomeCallable CdnClient::UpdatePayTypeCallable(const UpdatePayTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdatePayTypeOutcome>>();
    UpdatePayTypeAsync(
    request,
    [prom](
        const CdnClient*,
        const UpdatePayTypeRequest&,
        UpdatePayTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdnClient::UpdateScdnDomainOutcome CdnClient::UpdateScdnDomain(const UpdateScdnDomainRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateScdnDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateScdnDomainResponse rsp = UpdateScdnDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateScdnDomainOutcome(rsp);
        else
            return UpdateScdnDomainOutcome(o.GetError());
    }
    else
    {
        return UpdateScdnDomainOutcome(outcome.GetError());
    }
}

void CdnClient::UpdateScdnDomainAsync(const UpdateScdnDomainRequest& request, const UpdateScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateScdnDomainRequest&;
    using Resp = UpdateScdnDomainResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateScdnDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdnClient::UpdateScdnDomainOutcomeCallable CdnClient::UpdateScdnDomainCallable(const UpdateScdnDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateScdnDomainOutcome>>();
    UpdateScdnDomainAsync(
    request,
    [prom](
        const CdnClient*,
        const UpdateScdnDomainRequest&,
        UpdateScdnDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

