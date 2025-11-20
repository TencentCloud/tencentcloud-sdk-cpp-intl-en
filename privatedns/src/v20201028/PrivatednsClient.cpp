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

#include <tencentcloud/privatedns/v20201028/PrivatednsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Privatedns::V20201028;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-10-28";
    const string ENDPOINT = "privatedns.intl.tencentcloudapi.com";
}

PrivatednsClient::PrivatednsClient(const Credential &credential, const string &region) :
    PrivatednsClient(credential, region, ClientProfile())
{
}

PrivatednsClient::PrivatednsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


PrivatednsClient::CreateEndPointOutcome PrivatednsClient::CreateEndPoint(const CreateEndPointRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEndPoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEndPointResponse rsp = CreateEndPointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEndPointOutcome(rsp);
        else
            return CreateEndPointOutcome(o.GetError());
    }
    else
    {
        return CreateEndPointOutcome(outcome.GetError());
    }
}

void PrivatednsClient::CreateEndPointAsync(const CreateEndPointRequest& request, const CreateEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEndPointRequest&;
    using Resp = CreateEndPointResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEndPoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::CreateEndPointOutcomeCallable PrivatednsClient::CreateEndPointCallable(const CreateEndPointRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEndPointOutcome>>();
    CreateEndPointAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const CreateEndPointRequest&,
        CreateEndPointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::CreateEndPointAndEndPointServiceOutcome PrivatednsClient::CreateEndPointAndEndPointService(const CreateEndPointAndEndPointServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEndPointAndEndPointService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEndPointAndEndPointServiceResponse rsp = CreateEndPointAndEndPointServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEndPointAndEndPointServiceOutcome(rsp);
        else
            return CreateEndPointAndEndPointServiceOutcome(o.GetError());
    }
    else
    {
        return CreateEndPointAndEndPointServiceOutcome(outcome.GetError());
    }
}

void PrivatednsClient::CreateEndPointAndEndPointServiceAsync(const CreateEndPointAndEndPointServiceRequest& request, const CreateEndPointAndEndPointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEndPointAndEndPointServiceRequest&;
    using Resp = CreateEndPointAndEndPointServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEndPointAndEndPointService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::CreateEndPointAndEndPointServiceOutcomeCallable PrivatednsClient::CreateEndPointAndEndPointServiceCallable(const CreateEndPointAndEndPointServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEndPointAndEndPointServiceOutcome>>();
    CreateEndPointAndEndPointServiceAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const CreateEndPointAndEndPointServiceRequest&,
        CreateEndPointAndEndPointServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::CreateExtendEndpointOutcome PrivatednsClient::CreateExtendEndpoint(const CreateExtendEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "CreateExtendEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateExtendEndpointResponse rsp = CreateExtendEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateExtendEndpointOutcome(rsp);
        else
            return CreateExtendEndpointOutcome(o.GetError());
    }
    else
    {
        return CreateExtendEndpointOutcome(outcome.GetError());
    }
}

void PrivatednsClient::CreateExtendEndpointAsync(const CreateExtendEndpointRequest& request, const CreateExtendEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateExtendEndpointRequest&;
    using Resp = CreateExtendEndpointResponse;

    DoRequestAsync<Req, Resp>(
        "CreateExtendEndpoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::CreateExtendEndpointOutcomeCallable PrivatednsClient::CreateExtendEndpointCallable(const CreateExtendEndpointRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateExtendEndpointOutcome>>();
    CreateExtendEndpointAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const CreateExtendEndpointRequest&,
        CreateExtendEndpointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::CreateForwardRuleOutcome PrivatednsClient::CreateForwardRule(const CreateForwardRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateForwardRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateForwardRuleResponse rsp = CreateForwardRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateForwardRuleOutcome(rsp);
        else
            return CreateForwardRuleOutcome(o.GetError());
    }
    else
    {
        return CreateForwardRuleOutcome(outcome.GetError());
    }
}

void PrivatednsClient::CreateForwardRuleAsync(const CreateForwardRuleRequest& request, const CreateForwardRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateForwardRuleRequest&;
    using Resp = CreateForwardRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateForwardRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::CreateForwardRuleOutcomeCallable PrivatednsClient::CreateForwardRuleCallable(const CreateForwardRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateForwardRuleOutcome>>();
    CreateForwardRuleAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const CreateForwardRuleRequest&,
        CreateForwardRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::CreatePrivateDNSAccountOutcome PrivatednsClient::CreatePrivateDNSAccount(const CreatePrivateDNSAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrivateDNSAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrivateDNSAccountResponse rsp = CreatePrivateDNSAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrivateDNSAccountOutcome(rsp);
        else
            return CreatePrivateDNSAccountOutcome(o.GetError());
    }
    else
    {
        return CreatePrivateDNSAccountOutcome(outcome.GetError());
    }
}

void PrivatednsClient::CreatePrivateDNSAccountAsync(const CreatePrivateDNSAccountRequest& request, const CreatePrivateDNSAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrivateDNSAccountRequest&;
    using Resp = CreatePrivateDNSAccountResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrivateDNSAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::CreatePrivateDNSAccountOutcomeCallable PrivatednsClient::CreatePrivateDNSAccountCallable(const CreatePrivateDNSAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrivateDNSAccountOutcome>>();
    CreatePrivateDNSAccountAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const CreatePrivateDNSAccountRequest&,
        CreatePrivateDNSAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::CreatePrivateZoneOutcome PrivatednsClient::CreatePrivateZone(const CreatePrivateZoneRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrivateZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrivateZoneResponse rsp = CreatePrivateZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrivateZoneOutcome(rsp);
        else
            return CreatePrivateZoneOutcome(o.GetError());
    }
    else
    {
        return CreatePrivateZoneOutcome(outcome.GetError());
    }
}

void PrivatednsClient::CreatePrivateZoneAsync(const CreatePrivateZoneRequest& request, const CreatePrivateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrivateZoneRequest&;
    using Resp = CreatePrivateZoneResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrivateZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::CreatePrivateZoneOutcomeCallable PrivatednsClient::CreatePrivateZoneCallable(const CreatePrivateZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrivateZoneOutcome>>();
    CreatePrivateZoneAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const CreatePrivateZoneRequest&,
        CreatePrivateZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::CreatePrivateZoneRecordOutcome PrivatednsClient::CreatePrivateZoneRecord(const CreatePrivateZoneRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrivateZoneRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrivateZoneRecordResponse rsp = CreatePrivateZoneRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrivateZoneRecordOutcome(rsp);
        else
            return CreatePrivateZoneRecordOutcome(o.GetError());
    }
    else
    {
        return CreatePrivateZoneRecordOutcome(outcome.GetError());
    }
}

void PrivatednsClient::CreatePrivateZoneRecordAsync(const CreatePrivateZoneRecordRequest& request, const CreatePrivateZoneRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrivateZoneRecordRequest&;
    using Resp = CreatePrivateZoneRecordResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrivateZoneRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::CreatePrivateZoneRecordOutcomeCallable PrivatednsClient::CreatePrivateZoneRecordCallable(const CreatePrivateZoneRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrivateZoneRecordOutcome>>();
    CreatePrivateZoneRecordAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const CreatePrivateZoneRecordRequest&,
        CreatePrivateZoneRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DeleteEndPointOutcome PrivatednsClient::DeleteEndPoint(const DeleteEndPointRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEndPoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEndPointResponse rsp = DeleteEndPointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEndPointOutcome(rsp);
        else
            return DeleteEndPointOutcome(o.GetError());
    }
    else
    {
        return DeleteEndPointOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DeleteEndPointAsync(const DeleteEndPointRequest& request, const DeleteEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEndPointRequest&;
    using Resp = DeleteEndPointResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEndPoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DeleteEndPointOutcomeCallable PrivatednsClient::DeleteEndPointCallable(const DeleteEndPointRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEndPointOutcome>>();
    DeleteEndPointAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DeleteEndPointRequest&,
        DeleteEndPointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DeleteForwardRuleOutcome PrivatednsClient::DeleteForwardRule(const DeleteForwardRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteForwardRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteForwardRuleResponse rsp = DeleteForwardRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteForwardRuleOutcome(rsp);
        else
            return DeleteForwardRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteForwardRuleOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DeleteForwardRuleAsync(const DeleteForwardRuleRequest& request, const DeleteForwardRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteForwardRuleRequest&;
    using Resp = DeleteForwardRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteForwardRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DeleteForwardRuleOutcomeCallable PrivatednsClient::DeleteForwardRuleCallable(const DeleteForwardRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteForwardRuleOutcome>>();
    DeleteForwardRuleAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DeleteForwardRuleRequest&,
        DeleteForwardRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DeletePrivateZoneRecordOutcome PrivatednsClient::DeletePrivateZoneRecord(const DeletePrivateZoneRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrivateZoneRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrivateZoneRecordResponse rsp = DeletePrivateZoneRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrivateZoneRecordOutcome(rsp);
        else
            return DeletePrivateZoneRecordOutcome(o.GetError());
    }
    else
    {
        return DeletePrivateZoneRecordOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DeletePrivateZoneRecordAsync(const DeletePrivateZoneRecordRequest& request, const DeletePrivateZoneRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePrivateZoneRecordRequest&;
    using Resp = DeletePrivateZoneRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePrivateZoneRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DeletePrivateZoneRecordOutcomeCallable PrivatednsClient::DeletePrivateZoneRecordCallable(const DeletePrivateZoneRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePrivateZoneRecordOutcome>>();
    DeletePrivateZoneRecordAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DeletePrivateZoneRecordRequest&,
        DeletePrivateZoneRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeAccountVpcListOutcome PrivatednsClient::DescribeAccountVpcList(const DescribeAccountVpcListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountVpcList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountVpcListResponse rsp = DescribeAccountVpcListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountVpcListOutcome(rsp);
        else
            return DescribeAccountVpcListOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountVpcListOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeAccountVpcListAsync(const DescribeAccountVpcListRequest& request, const DescribeAccountVpcListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountVpcListRequest&;
    using Resp = DescribeAccountVpcListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccountVpcList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeAccountVpcListOutcomeCallable PrivatednsClient::DescribeAccountVpcListCallable(const DescribeAccountVpcListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountVpcListOutcome>>();
    DescribeAccountVpcListAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeAccountVpcListRequest&,
        DescribeAccountVpcListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeAuditLogOutcome PrivatednsClient::DescribeAuditLog(const DescribeAuditLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditLogResponse rsp = DescribeAuditLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditLogOutcome(rsp);
        else
            return DescribeAuditLogOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditLogOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeAuditLogAsync(const DescribeAuditLogRequest& request, const DescribeAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuditLogRequest&;
    using Resp = DescribeAuditLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuditLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeAuditLogOutcomeCallable PrivatednsClient::DescribeAuditLogCallable(const DescribeAuditLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditLogOutcome>>();
    DescribeAuditLogAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeAuditLogRequest&,
        DescribeAuditLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeDashboardOutcome PrivatednsClient::DescribeDashboard(const DescribeDashboardRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDashboard");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDashboardResponse rsp = DescribeDashboardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDashboardOutcome(rsp);
        else
            return DescribeDashboardOutcome(o.GetError());
    }
    else
    {
        return DescribeDashboardOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeDashboardAsync(const DescribeDashboardRequest& request, const DescribeDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDashboardRequest&;
    using Resp = DescribeDashboardResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDashboard", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeDashboardOutcomeCallable PrivatednsClient::DescribeDashboardCallable(const DescribeDashboardRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDashboardOutcome>>();
    DescribeDashboardAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeDashboardRequest&,
        DescribeDashboardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeEndPointListOutcome PrivatednsClient::DescribeEndPointList(const DescribeEndPointListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEndPointList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEndPointListResponse rsp = DescribeEndPointListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEndPointListOutcome(rsp);
        else
            return DescribeEndPointListOutcome(o.GetError());
    }
    else
    {
        return DescribeEndPointListOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeEndPointListAsync(const DescribeEndPointListRequest& request, const DescribeEndPointListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEndPointListRequest&;
    using Resp = DescribeEndPointListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEndPointList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeEndPointListOutcomeCallable PrivatednsClient::DescribeEndPointListCallable(const DescribeEndPointListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEndPointListOutcome>>();
    DescribeEndPointListAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeEndPointListRequest&,
        DescribeEndPointListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeEndPointRegionOutcome PrivatednsClient::DescribeEndPointRegion(const DescribeEndPointRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEndPointRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEndPointRegionResponse rsp = DescribeEndPointRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEndPointRegionOutcome(rsp);
        else
            return DescribeEndPointRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeEndPointRegionOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeEndPointRegionAsync(const DescribeEndPointRegionRequest& request, const DescribeEndPointRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEndPointRegionRequest&;
    using Resp = DescribeEndPointRegionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEndPointRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeEndPointRegionOutcomeCallable PrivatednsClient::DescribeEndPointRegionCallable(const DescribeEndPointRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEndPointRegionOutcome>>();
    DescribeEndPointRegionAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeEndPointRegionRequest&,
        DescribeEndPointRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeExtendEndpointListOutcome PrivatednsClient::DescribeExtendEndpointList(const DescribeExtendEndpointListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtendEndpointList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtendEndpointListResponse rsp = DescribeExtendEndpointListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtendEndpointListOutcome(rsp);
        else
            return DescribeExtendEndpointListOutcome(o.GetError());
    }
    else
    {
        return DescribeExtendEndpointListOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeExtendEndpointListAsync(const DescribeExtendEndpointListRequest& request, const DescribeExtendEndpointListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExtendEndpointListRequest&;
    using Resp = DescribeExtendEndpointListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExtendEndpointList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeExtendEndpointListOutcomeCallable PrivatednsClient::DescribeExtendEndpointListCallable(const DescribeExtendEndpointListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExtendEndpointListOutcome>>();
    DescribeExtendEndpointListAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeExtendEndpointListRequest&,
        DescribeExtendEndpointListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeForwardRuleOutcome PrivatednsClient::DescribeForwardRule(const DescribeForwardRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeForwardRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeForwardRuleResponse rsp = DescribeForwardRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeForwardRuleOutcome(rsp);
        else
            return DescribeForwardRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeForwardRuleOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeForwardRuleAsync(const DescribeForwardRuleRequest& request, const DescribeForwardRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeForwardRuleRequest&;
    using Resp = DescribeForwardRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeForwardRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeForwardRuleOutcomeCallable PrivatednsClient::DescribeForwardRuleCallable(const DescribeForwardRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeForwardRuleOutcome>>();
    DescribeForwardRuleAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeForwardRuleRequest&,
        DescribeForwardRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeForwardRuleListOutcome PrivatednsClient::DescribeForwardRuleList(const DescribeForwardRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeForwardRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeForwardRuleListResponse rsp = DescribeForwardRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeForwardRuleListOutcome(rsp);
        else
            return DescribeForwardRuleListOutcome(o.GetError());
    }
    else
    {
        return DescribeForwardRuleListOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeForwardRuleListAsync(const DescribeForwardRuleListRequest& request, const DescribeForwardRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeForwardRuleListRequest&;
    using Resp = DescribeForwardRuleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeForwardRuleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeForwardRuleListOutcomeCallable PrivatednsClient::DescribeForwardRuleListCallable(const DescribeForwardRuleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeForwardRuleListOutcome>>();
    DescribeForwardRuleListAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeForwardRuleListRequest&,
        DescribeForwardRuleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribePrivateDNSAccountListOutcome PrivatednsClient::DescribePrivateDNSAccountList(const DescribePrivateDNSAccountListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivateDNSAccountList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivateDNSAccountListResponse rsp = DescribePrivateDNSAccountListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivateDNSAccountListOutcome(rsp);
        else
            return DescribePrivateDNSAccountListOutcome(o.GetError());
    }
    else
    {
        return DescribePrivateDNSAccountListOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribePrivateDNSAccountListAsync(const DescribePrivateDNSAccountListRequest& request, const DescribePrivateDNSAccountListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrivateDNSAccountListRequest&;
    using Resp = DescribePrivateDNSAccountListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrivateDNSAccountList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribePrivateDNSAccountListOutcomeCallable PrivatednsClient::DescribePrivateDNSAccountListCallable(const DescribePrivateDNSAccountListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrivateDNSAccountListOutcome>>();
    DescribePrivateDNSAccountListAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribePrivateDNSAccountListRequest&,
        DescribePrivateDNSAccountListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribePrivateZoneListOutcome PrivatednsClient::DescribePrivateZoneList(const DescribePrivateZoneListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivateZoneList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivateZoneListResponse rsp = DescribePrivateZoneListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivateZoneListOutcome(rsp);
        else
            return DescribePrivateZoneListOutcome(o.GetError());
    }
    else
    {
        return DescribePrivateZoneListOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribePrivateZoneListAsync(const DescribePrivateZoneListRequest& request, const DescribePrivateZoneListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrivateZoneListRequest&;
    using Resp = DescribePrivateZoneListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrivateZoneList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribePrivateZoneListOutcomeCallable PrivatednsClient::DescribePrivateZoneListCallable(const DescribePrivateZoneListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrivateZoneListOutcome>>();
    DescribePrivateZoneListAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribePrivateZoneListRequest&,
        DescribePrivateZoneListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribePrivateZoneRecordListOutcome PrivatednsClient::DescribePrivateZoneRecordList(const DescribePrivateZoneRecordListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivateZoneRecordList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivateZoneRecordListResponse rsp = DescribePrivateZoneRecordListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivateZoneRecordListOutcome(rsp);
        else
            return DescribePrivateZoneRecordListOutcome(o.GetError());
    }
    else
    {
        return DescribePrivateZoneRecordListOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribePrivateZoneRecordListAsync(const DescribePrivateZoneRecordListRequest& request, const DescribePrivateZoneRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrivateZoneRecordListRequest&;
    using Resp = DescribePrivateZoneRecordListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrivateZoneRecordList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribePrivateZoneRecordListOutcomeCallable PrivatednsClient::DescribePrivateZoneRecordListCallable(const DescribePrivateZoneRecordListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrivateZoneRecordListOutcome>>();
    DescribePrivateZoneRecordListAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribePrivateZoneRecordListRequest&,
        DescribePrivateZoneRecordListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribePrivateZoneServiceOutcome PrivatednsClient::DescribePrivateZoneService(const DescribePrivateZoneServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivateZoneService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivateZoneServiceResponse rsp = DescribePrivateZoneServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivateZoneServiceOutcome(rsp);
        else
            return DescribePrivateZoneServiceOutcome(o.GetError());
    }
    else
    {
        return DescribePrivateZoneServiceOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribePrivateZoneServiceAsync(const DescribePrivateZoneServiceRequest& request, const DescribePrivateZoneServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrivateZoneServiceRequest&;
    using Resp = DescribePrivateZoneServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrivateZoneService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribePrivateZoneServiceOutcomeCallable PrivatednsClient::DescribePrivateZoneServiceCallable(const DescribePrivateZoneServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrivateZoneServiceOutcome>>();
    DescribePrivateZoneServiceAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribePrivateZoneServiceRequest&,
        DescribePrivateZoneServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeQuotaUsageOutcome PrivatednsClient::DescribeQuotaUsage(const DescribeQuotaUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQuotaUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQuotaUsageResponse rsp = DescribeQuotaUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQuotaUsageOutcome(rsp);
        else
            return DescribeQuotaUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeQuotaUsageOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeQuotaUsageAsync(const DescribeQuotaUsageRequest& request, const DescribeQuotaUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeQuotaUsageRequest&;
    using Resp = DescribeQuotaUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQuotaUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeQuotaUsageOutcomeCallable PrivatednsClient::DescribeQuotaUsageCallable(const DescribeQuotaUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQuotaUsageOutcome>>();
    DescribeQuotaUsageAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeQuotaUsageRequest&,
        DescribeQuotaUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeRecordOutcome PrivatednsClient::DescribeRecord(const DescribeRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordResponse rsp = DescribeRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordOutcome(rsp);
        else
            return DescribeRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeRecordAsync(const DescribeRecordRequest& request, const DescribeRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordRequest&;
    using Resp = DescribeRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeRecordOutcomeCallable PrivatednsClient::DescribeRecordCallable(const DescribeRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordOutcome>>();
    DescribeRecordAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeRecordRequest&,
        DescribeRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::DescribeRequestDataOutcome PrivatednsClient::DescribeRequestData(const DescribeRequestDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRequestData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRequestDataResponse rsp = DescribeRequestDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRequestDataOutcome(rsp);
        else
            return DescribeRequestDataOutcome(o.GetError());
    }
    else
    {
        return DescribeRequestDataOutcome(outcome.GetError());
    }
}

void PrivatednsClient::DescribeRequestDataAsync(const DescribeRequestDataRequest& request, const DescribeRequestDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRequestDataRequest&;
    using Resp = DescribeRequestDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRequestData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::DescribeRequestDataOutcomeCallable PrivatednsClient::DescribeRequestDataCallable(const DescribeRequestDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRequestDataOutcome>>();
    DescribeRequestDataAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const DescribeRequestDataRequest&,
        DescribeRequestDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::ModifyForwardRuleOutcome PrivatednsClient::ModifyForwardRule(const ModifyForwardRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyForwardRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyForwardRuleResponse rsp = ModifyForwardRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyForwardRuleOutcome(rsp);
        else
            return ModifyForwardRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyForwardRuleOutcome(outcome.GetError());
    }
}

void PrivatednsClient::ModifyForwardRuleAsync(const ModifyForwardRuleRequest& request, const ModifyForwardRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyForwardRuleRequest&;
    using Resp = ModifyForwardRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyForwardRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::ModifyForwardRuleOutcomeCallable PrivatednsClient::ModifyForwardRuleCallable(const ModifyForwardRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyForwardRuleOutcome>>();
    ModifyForwardRuleAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const ModifyForwardRuleRequest&,
        ModifyForwardRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::ModifyPrivateZoneOutcome PrivatednsClient::ModifyPrivateZone(const ModifyPrivateZoneRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrivateZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrivateZoneResponse rsp = ModifyPrivateZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrivateZoneOutcome(rsp);
        else
            return ModifyPrivateZoneOutcome(o.GetError());
    }
    else
    {
        return ModifyPrivateZoneOutcome(outcome.GetError());
    }
}

void PrivatednsClient::ModifyPrivateZoneAsync(const ModifyPrivateZoneRequest& request, const ModifyPrivateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPrivateZoneRequest&;
    using Resp = ModifyPrivateZoneResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPrivateZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::ModifyPrivateZoneOutcomeCallable PrivatednsClient::ModifyPrivateZoneCallable(const ModifyPrivateZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPrivateZoneOutcome>>();
    ModifyPrivateZoneAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const ModifyPrivateZoneRequest&,
        ModifyPrivateZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::ModifyPrivateZoneRecordOutcome PrivatednsClient::ModifyPrivateZoneRecord(const ModifyPrivateZoneRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrivateZoneRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrivateZoneRecordResponse rsp = ModifyPrivateZoneRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrivateZoneRecordOutcome(rsp);
        else
            return ModifyPrivateZoneRecordOutcome(o.GetError());
    }
    else
    {
        return ModifyPrivateZoneRecordOutcome(outcome.GetError());
    }
}

void PrivatednsClient::ModifyPrivateZoneRecordAsync(const ModifyPrivateZoneRecordRequest& request, const ModifyPrivateZoneRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPrivateZoneRecordRequest&;
    using Resp = ModifyPrivateZoneRecordResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPrivateZoneRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::ModifyPrivateZoneRecordOutcomeCallable PrivatednsClient::ModifyPrivateZoneRecordCallable(const ModifyPrivateZoneRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPrivateZoneRecordOutcome>>();
    ModifyPrivateZoneRecordAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const ModifyPrivateZoneRecordRequest&,
        ModifyPrivateZoneRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::ModifyPrivateZoneVpcOutcome PrivatednsClient::ModifyPrivateZoneVpc(const ModifyPrivateZoneVpcRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrivateZoneVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrivateZoneVpcResponse rsp = ModifyPrivateZoneVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrivateZoneVpcOutcome(rsp);
        else
            return ModifyPrivateZoneVpcOutcome(o.GetError());
    }
    else
    {
        return ModifyPrivateZoneVpcOutcome(outcome.GetError());
    }
}

void PrivatednsClient::ModifyPrivateZoneVpcAsync(const ModifyPrivateZoneVpcRequest& request, const ModifyPrivateZoneVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPrivateZoneVpcRequest&;
    using Resp = ModifyPrivateZoneVpcResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPrivateZoneVpc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::ModifyPrivateZoneVpcOutcomeCallable PrivatednsClient::ModifyPrivateZoneVpcCallable(const ModifyPrivateZoneVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPrivateZoneVpcOutcome>>();
    ModifyPrivateZoneVpcAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const ModifyPrivateZoneVpcRequest&,
        ModifyPrivateZoneVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::ModifyRecordsStatusOutcome PrivatednsClient::ModifyRecordsStatus(const ModifyRecordsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordsStatusResponse rsp = ModifyRecordsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordsStatusOutcome(rsp);
        else
            return ModifyRecordsStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordsStatusOutcome(outcome.GetError());
    }
}

void PrivatednsClient::ModifyRecordsStatusAsync(const ModifyRecordsStatusRequest& request, const ModifyRecordsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRecordsStatusRequest&;
    using Resp = ModifyRecordsStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRecordsStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::ModifyRecordsStatusOutcomeCallable PrivatednsClient::ModifyRecordsStatusCallable(const ModifyRecordsStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRecordsStatusOutcome>>();
    ModifyRecordsStatusAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const ModifyRecordsStatusRequest&,
        ModifyRecordsStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

PrivatednsClient::SubscribePrivateZoneServiceOutcome PrivatednsClient::SubscribePrivateZoneService(const SubscribePrivateZoneServiceRequest &request)
{
    auto outcome = MakeRequest(request, "SubscribePrivateZoneService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubscribePrivateZoneServiceResponse rsp = SubscribePrivateZoneServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubscribePrivateZoneServiceOutcome(rsp);
        else
            return SubscribePrivateZoneServiceOutcome(o.GetError());
    }
    else
    {
        return SubscribePrivateZoneServiceOutcome(outcome.GetError());
    }
}

void PrivatednsClient::SubscribePrivateZoneServiceAsync(const SubscribePrivateZoneServiceRequest& request, const SubscribePrivateZoneServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubscribePrivateZoneServiceRequest&;
    using Resp = SubscribePrivateZoneServiceResponse;

    DoRequestAsync<Req, Resp>(
        "SubscribePrivateZoneService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

PrivatednsClient::SubscribePrivateZoneServiceOutcomeCallable PrivatednsClient::SubscribePrivateZoneServiceCallable(const SubscribePrivateZoneServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubscribePrivateZoneServiceOutcome>>();
    SubscribePrivateZoneServiceAsync(
    request,
    [prom](
        const PrivatednsClient*,
        const SubscribePrivateZoneServiceRequest&,
        SubscribePrivateZoneServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

