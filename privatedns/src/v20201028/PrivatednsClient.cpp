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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEndPoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::CreateEndPointOutcomeCallable PrivatednsClient::CreateEndPointCallable(const CreateEndPointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEndPointOutcome()>>(
        [this, request]()
        {
            return this->CreateEndPoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEndPointAndEndPointService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::CreateEndPointAndEndPointServiceOutcomeCallable PrivatednsClient::CreateEndPointAndEndPointServiceCallable(const CreateEndPointAndEndPointServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEndPointAndEndPointServiceOutcome()>>(
        [this, request]()
        {
            return this->CreateEndPointAndEndPointService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateExtendEndpoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::CreateExtendEndpointOutcomeCallable PrivatednsClient::CreateExtendEndpointCallable(const CreateExtendEndpointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateExtendEndpointOutcome()>>(
        [this, request]()
        {
            return this->CreateExtendEndpoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateForwardRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::CreateForwardRuleOutcomeCallable PrivatednsClient::CreateForwardRuleCallable(const CreateForwardRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateForwardRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateForwardRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrivateDNSAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::CreatePrivateDNSAccountOutcomeCallable PrivatednsClient::CreatePrivateDNSAccountCallable(const CreatePrivateDNSAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrivateDNSAccountOutcome()>>(
        [this, request]()
        {
            return this->CreatePrivateDNSAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrivateZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::CreatePrivateZoneOutcomeCallable PrivatednsClient::CreatePrivateZoneCallable(const CreatePrivateZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrivateZoneOutcome()>>(
        [this, request]()
        {
            return this->CreatePrivateZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrivateZoneRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::CreatePrivateZoneRecordOutcomeCallable PrivatednsClient::CreatePrivateZoneRecordCallable(const CreatePrivateZoneRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrivateZoneRecordOutcome()>>(
        [this, request]()
        {
            return this->CreatePrivateZoneRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEndPoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::DeleteEndPointOutcomeCallable PrivatednsClient::DeleteEndPointCallable(const DeleteEndPointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEndPointOutcome()>>(
        [this, request]()
        {
            return this->DeleteEndPoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteForwardRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::DeleteForwardRuleOutcomeCallable PrivatednsClient::DeleteForwardRuleCallable(const DeleteForwardRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteForwardRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteForwardRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrivateZoneRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::DeletePrivateZoneRecordOutcomeCallable PrivatednsClient::DeletePrivateZoneRecordCallable(const DeletePrivateZoneRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePrivateZoneRecordOutcome()>>(
        [this, request]()
        {
            return this->DeletePrivateZoneRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccountVpcList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::DescribeAccountVpcListOutcomeCallable PrivatednsClient::DescribeAccountVpcListCallable(const DescribeAccountVpcListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountVpcListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccountVpcList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::DescribeAuditLogOutcomeCallable PrivatednsClient::DescribeAuditLogCallable(const DescribeAuditLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuditLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuditLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDashboard(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::DescribeDashboardOutcomeCallable PrivatednsClient::DescribeDashboardCallable(const DescribeDashboardRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDashboardOutcome()>>(
        [this, request]()
        {
            return this->DescribeDashboard(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEndPointList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::DescribeEndPointListOutcomeCallable PrivatednsClient::DescribeEndPointListCallable(const DescribeEndPointListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEndPointListOutcome()>>(
        [this, request]()
        {
            return this->DescribeEndPointList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEndPointRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::DescribeEndPointRegionOutcomeCallable PrivatednsClient::DescribeEndPointRegionCallable(const DescribeEndPointRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEndPointRegionOutcome()>>(
        [this, request]()
        {
            return this->DescribeEndPointRegion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExtendEndpointList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::DescribeExtendEndpointListOutcomeCallable PrivatednsClient::DescribeExtendEndpointListCallable(const DescribeExtendEndpointListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExtendEndpointListOutcome()>>(
        [this, request]()
        {
            return this->DescribeExtendEndpointList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeForwardRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::DescribeForwardRuleOutcomeCallable PrivatednsClient::DescribeForwardRuleCallable(const DescribeForwardRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeForwardRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeForwardRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeForwardRuleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::DescribeForwardRuleListOutcomeCallable PrivatednsClient::DescribeForwardRuleListCallable(const DescribeForwardRuleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeForwardRuleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeForwardRuleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrivateDNSAccountList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::DescribePrivateDNSAccountListOutcomeCallable PrivatednsClient::DescribePrivateDNSAccountListCallable(const DescribePrivateDNSAccountListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrivateDNSAccountListOutcome()>>(
        [this, request]()
        {
            return this->DescribePrivateDNSAccountList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrivateZoneList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::DescribePrivateZoneListOutcomeCallable PrivatednsClient::DescribePrivateZoneListCallable(const DescribePrivateZoneListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrivateZoneListOutcome()>>(
        [this, request]()
        {
            return this->DescribePrivateZoneList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrivateZoneRecordList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::DescribePrivateZoneRecordListOutcomeCallable PrivatednsClient::DescribePrivateZoneRecordListCallable(const DescribePrivateZoneRecordListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrivateZoneRecordListOutcome()>>(
        [this, request]()
        {
            return this->DescribePrivateZoneRecordList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrivateZoneService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::DescribePrivateZoneServiceOutcomeCallable PrivatednsClient::DescribePrivateZoneServiceCallable(const DescribePrivateZoneServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrivateZoneServiceOutcome()>>(
        [this, request]()
        {
            return this->DescribePrivateZoneService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQuotaUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::DescribeQuotaUsageOutcomeCallable PrivatednsClient::DescribeQuotaUsageCallable(const DescribeQuotaUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQuotaUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeQuotaUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::DescribeRecordOutcomeCallable PrivatednsClient::DescribeRecordCallable(const DescribeRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRequestData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::DescribeRequestDataOutcomeCallable PrivatednsClient::DescribeRequestDataCallable(const DescribeRequestDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRequestDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeRequestData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyForwardRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::ModifyForwardRuleOutcomeCallable PrivatednsClient::ModifyForwardRuleCallable(const ModifyForwardRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyForwardRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyForwardRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPrivateZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::ModifyPrivateZoneOutcomeCallable PrivatednsClient::ModifyPrivateZoneCallable(const ModifyPrivateZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPrivateZoneOutcome()>>(
        [this, request]()
        {
            return this->ModifyPrivateZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPrivateZoneRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::ModifyPrivateZoneRecordOutcomeCallable PrivatednsClient::ModifyPrivateZoneRecordCallable(const ModifyPrivateZoneRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPrivateZoneRecordOutcome()>>(
        [this, request]()
        {
            return this->ModifyPrivateZoneRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPrivateZoneVpc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::ModifyPrivateZoneVpcOutcomeCallable PrivatednsClient::ModifyPrivateZoneVpcCallable(const ModifyPrivateZoneVpcRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPrivateZoneVpcOutcome()>>(
        [this, request]()
        {
            return this->ModifyPrivateZoneVpc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRecordsStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::ModifyRecordsStatusOutcomeCallable PrivatednsClient::ModifyRecordsStatusCallable(const ModifyRecordsStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRecordsStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyRecordsStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubscribePrivateZoneService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PrivatednsClient::SubscribePrivateZoneServiceOutcomeCallable PrivatednsClient::SubscribePrivateZoneServiceCallable(const SubscribePrivateZoneServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubscribePrivateZoneServiceOutcome()>>(
        [this, request]()
        {
            return this->SubscribePrivateZoneService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

