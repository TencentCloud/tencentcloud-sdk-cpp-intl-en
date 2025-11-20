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

#include <tencentcloud/dnspod/v20210323/DnspodClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dnspod::V20210323;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-03-23";
    const string ENDPOINT = "dnspod.intl.tencentcloudapi.com";
}

DnspodClient::DnspodClient(const Credential &credential, const string &region) :
    DnspodClient(credential, region, ClientProfile())
{
}

DnspodClient::DnspodClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DnspodClient::CreateDomainOutcome DnspodClient::CreateDomain(const CreateDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainResponse rsp = CreateDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainOutcome(rsp);
        else
            return CreateDomainOutcome(o.GetError());
    }
    else
    {
        return CreateDomainOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDomainRequest&;
    using Resp = CreateDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateDomainOutcomeCallable DnspodClient::CreateDomainCallable(const CreateDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainOutcome>>();
    CreateDomainAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateDomainRequest&,
        CreateDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateDomainAliasOutcome DnspodClient::CreateDomainAlias(const CreateDomainAliasRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainAliasResponse rsp = CreateDomainAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainAliasOutcome(rsp);
        else
            return CreateDomainAliasOutcome(o.GetError());
    }
    else
    {
        return CreateDomainAliasOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDomainAliasAsync(const CreateDomainAliasRequest& request, const CreateDomainAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDomainAliasRequest&;
    using Resp = CreateDomainAliasResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomainAlias", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateDomainAliasOutcomeCallable DnspodClient::CreateDomainAliasCallable(const CreateDomainAliasRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainAliasOutcome>>();
    CreateDomainAliasAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateDomainAliasRequest&,
        CreateDomainAliasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateDomainBatchOutcome DnspodClient::CreateDomainBatch(const CreateDomainBatchRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainBatchResponse rsp = CreateDomainBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainBatchOutcome(rsp);
        else
            return CreateDomainBatchOutcome(o.GetError());
    }
    else
    {
        return CreateDomainBatchOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDomainBatchAsync(const CreateDomainBatchRequest& request, const CreateDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDomainBatchRequest&;
    using Resp = CreateDomainBatchResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomainBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateDomainBatchOutcomeCallable DnspodClient::CreateDomainBatchCallable(const CreateDomainBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainBatchOutcome>>();
    CreateDomainBatchAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateDomainBatchRequest&,
        CreateDomainBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateDomainGroupOutcome DnspodClient::CreateDomainGroup(const CreateDomainGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainGroupResponse rsp = CreateDomainGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainGroupOutcome(rsp);
        else
            return CreateDomainGroupOutcome(o.GetError());
    }
    else
    {
        return CreateDomainGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDomainGroupAsync(const CreateDomainGroupRequest& request, const CreateDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDomainGroupRequest&;
    using Resp = CreateDomainGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomainGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateDomainGroupOutcomeCallable DnspodClient::CreateDomainGroupCallable(const CreateDomainGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainGroupOutcome>>();
    CreateDomainGroupAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateDomainGroupRequest&,
        CreateDomainGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreatePackageOrderOutcome DnspodClient::CreatePackageOrder(const CreatePackageOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePackageOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePackageOrderResponse rsp = CreatePackageOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePackageOrderOutcome(rsp);
        else
            return CreatePackageOrderOutcome(o.GetError());
    }
    else
    {
        return CreatePackageOrderOutcome(outcome.GetError());
    }
}

void DnspodClient::CreatePackageOrderAsync(const CreatePackageOrderRequest& request, const CreatePackageOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePackageOrderRequest&;
    using Resp = CreatePackageOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePackageOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreatePackageOrderOutcomeCallable DnspodClient::CreatePackageOrderCallable(const CreatePackageOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePackageOrderOutcome>>();
    CreatePackageOrderAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreatePackageOrderRequest&,
        CreatePackageOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateRecordOutcome DnspodClient::CreateRecord(const CreateRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecordResponse rsp = CreateRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecordOutcome(rsp);
        else
            return CreateRecordOutcome(o.GetError());
    }
    else
    {
        return CreateRecordOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateRecordAsync(const CreateRecordRequest& request, const CreateRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRecordRequest&;
    using Resp = CreateRecordResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateRecordOutcomeCallable DnspodClient::CreateRecordCallable(const CreateRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRecordOutcome>>();
    CreateRecordAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateRecordRequest&,
        CreateRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateRecordBatchOutcome DnspodClient::CreateRecordBatch(const CreateRecordBatchRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecordBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecordBatchResponse rsp = CreateRecordBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecordBatchOutcome(rsp);
        else
            return CreateRecordBatchOutcome(o.GetError());
    }
    else
    {
        return CreateRecordBatchOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateRecordBatchAsync(const CreateRecordBatchRequest& request, const CreateRecordBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRecordBatchRequest&;
    using Resp = CreateRecordBatchResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRecordBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateRecordBatchOutcomeCallable DnspodClient::CreateRecordBatchCallable(const CreateRecordBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRecordBatchOutcome>>();
    CreateRecordBatchAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateRecordBatchRequest&,
        CreateRecordBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::CreateRecordGroupOutcome DnspodClient::CreateRecordGroup(const CreateRecordGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecordGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecordGroupResponse rsp = CreateRecordGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecordGroupOutcome(rsp);
        else
            return CreateRecordGroupOutcome(o.GetError());
    }
    else
    {
        return CreateRecordGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateRecordGroupAsync(const CreateRecordGroupRequest& request, const CreateRecordGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRecordGroupRequest&;
    using Resp = CreateRecordGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRecordGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::CreateRecordGroupOutcomeCallable DnspodClient::CreateRecordGroupCallable(const CreateRecordGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRecordGroupOutcome>>();
    CreateRecordGroupAsync(
    request,
    [prom](
        const DnspodClient*,
        const CreateRecordGroupRequest&,
        CreateRecordGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DeleteDomainOutcome DnspodClient::DeleteDomain(const DeleteDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainResponse rsp = DeleteDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainOutcome(rsp);
        else
            return DeleteDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDomainRequest&;
    using Resp = DeleteDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DeleteDomainOutcomeCallable DnspodClient::DeleteDomainCallable(const DeleteDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDomainOutcome>>();
    DeleteDomainAsync(
    request,
    [prom](
        const DnspodClient*,
        const DeleteDomainRequest&,
        DeleteDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DeleteDomainAliasOutcome DnspodClient::DeleteDomainAlias(const DeleteDomainAliasRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomainAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainAliasResponse rsp = DeleteDomainAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainAliasOutcome(rsp);
        else
            return DeleteDomainAliasOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainAliasOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteDomainAliasAsync(const DeleteDomainAliasRequest& request, const DeleteDomainAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDomainAliasRequest&;
    using Resp = DeleteDomainAliasResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDomainAlias", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DeleteDomainAliasOutcomeCallable DnspodClient::DeleteDomainAliasCallable(const DeleteDomainAliasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDomainAliasOutcome>>();
    DeleteDomainAliasAsync(
    request,
    [prom](
        const DnspodClient*,
        const DeleteDomainAliasRequest&,
        DeleteDomainAliasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DeleteDomainBatchOutcome DnspodClient::DeleteDomainBatch(const DeleteDomainBatchRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomainBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainBatchResponse rsp = DeleteDomainBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainBatchOutcome(rsp);
        else
            return DeleteDomainBatchOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainBatchOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteDomainBatchAsync(const DeleteDomainBatchRequest& request, const DeleteDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDomainBatchRequest&;
    using Resp = DeleteDomainBatchResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDomainBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DeleteDomainBatchOutcomeCallable DnspodClient::DeleteDomainBatchCallable(const DeleteDomainBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDomainBatchOutcome>>();
    DeleteDomainBatchAsync(
    request,
    [prom](
        const DnspodClient*,
        const DeleteDomainBatchRequest&,
        DeleteDomainBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DeletePackageOrderOutcome DnspodClient::DeletePackageOrder(const DeletePackageOrderRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePackageOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePackageOrderResponse rsp = DeletePackageOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePackageOrderOutcome(rsp);
        else
            return DeletePackageOrderOutcome(o.GetError());
    }
    else
    {
        return DeletePackageOrderOutcome(outcome.GetError());
    }
}

void DnspodClient::DeletePackageOrderAsync(const DeletePackageOrderRequest& request, const DeletePackageOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePackageOrderRequest&;
    using Resp = DeletePackageOrderResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePackageOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DeletePackageOrderOutcomeCallable DnspodClient::DeletePackageOrderCallable(const DeletePackageOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePackageOrderOutcome>>();
    DeletePackageOrderAsync(
    request,
    [prom](
        const DnspodClient*,
        const DeletePackageOrderRequest&,
        DeletePackageOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DeleteRecordOutcome DnspodClient::DeleteRecord(const DeleteRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordResponse rsp = DeleteRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordOutcome(rsp);
        else
            return DeleteRecordOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteRecordAsync(const DeleteRecordRequest& request, const DeleteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRecordRequest&;
    using Resp = DeleteRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DeleteRecordOutcomeCallable DnspodClient::DeleteRecordCallable(const DeleteRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRecordOutcome>>();
    DeleteRecordAsync(
    request,
    [prom](
        const DnspodClient*,
        const DeleteRecordRequest&,
        DeleteRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DeleteRecordGroupOutcome DnspodClient::DeleteRecordGroup(const DeleteRecordGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecordGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordGroupResponse rsp = DeleteRecordGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordGroupOutcome(rsp);
        else
            return DeleteRecordGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteRecordGroupAsync(const DeleteRecordGroupRequest& request, const DeleteRecordGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRecordGroupRequest&;
    using Resp = DeleteRecordGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRecordGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DeleteRecordGroupOutcomeCallable DnspodClient::DeleteRecordGroupCallable(const DeleteRecordGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRecordGroupOutcome>>();
    DeleteRecordGroupAsync(
    request,
    [prom](
        const DnspodClient*,
        const DeleteRecordGroupRequest&,
        DeleteRecordGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DeleteShareDomainOutcome DnspodClient::DeleteShareDomain(const DeleteShareDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteShareDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteShareDomainResponse rsp = DeleteShareDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteShareDomainOutcome(rsp);
        else
            return DeleteShareDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteShareDomainOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteShareDomainAsync(const DeleteShareDomainRequest& request, const DeleteShareDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteShareDomainRequest&;
    using Resp = DeleteShareDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteShareDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DeleteShareDomainOutcomeCallable DnspodClient::DeleteShareDomainCallable(const DeleteShareDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteShareDomainOutcome>>();
    DeleteShareDomainAsync(
    request,
    [prom](
        const DnspodClient*,
        const DeleteShareDomainRequest&,
        DeleteShareDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainOutcome DnspodClient::DescribeDomain(const DescribeDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainResponse rsp = DescribeDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainOutcome(rsp);
        else
            return DescribeDomainOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainAsync(const DescribeDomainRequest& request, const DescribeDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainRequest&;
    using Resp = DescribeDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainOutcomeCallable DnspodClient::DescribeDomainCallable(const DescribeDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainOutcome>>();
    DescribeDomainAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainRequest&,
        DescribeDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainAliasListOutcome DnspodClient::DescribeDomainAliasList(const DescribeDomainAliasListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainAliasList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainAliasListResponse rsp = DescribeDomainAliasListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainAliasListOutcome(rsp);
        else
            return DescribeDomainAliasListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainAliasListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainAliasListAsync(const DescribeDomainAliasListRequest& request, const DescribeDomainAliasListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainAliasListRequest&;
    using Resp = DescribeDomainAliasListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainAliasList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainAliasListOutcomeCallable DnspodClient::DescribeDomainAliasListCallable(const DescribeDomainAliasListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainAliasListOutcome>>();
    DescribeDomainAliasListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainAliasListRequest&,
        DescribeDomainAliasListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainGroupListOutcome DnspodClient::DescribeDomainGroupList(const DescribeDomainGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainGroupListResponse rsp = DescribeDomainGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainGroupListOutcome(rsp);
        else
            return DescribeDomainGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainGroupListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainGroupListAsync(const DescribeDomainGroupListRequest& request, const DescribeDomainGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainGroupListRequest&;
    using Resp = DescribeDomainGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainGroupListOutcomeCallable DnspodClient::DescribeDomainGroupListCallable(const DescribeDomainGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainGroupListOutcome>>();
    DescribeDomainGroupListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainGroupListRequest&,
        DescribeDomainGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainListOutcome DnspodClient::DescribeDomainList(const DescribeDomainListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainListResponse rsp = DescribeDomainListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainListOutcome(rsp);
        else
            return DescribeDomainListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainListAsync(const DescribeDomainListRequest& request, const DescribeDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainListRequest&;
    using Resp = DescribeDomainListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainListOutcomeCallable DnspodClient::DescribeDomainListCallable(const DescribeDomainListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainListOutcome>>();
    DescribeDomainListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainListRequest&,
        DescribeDomainListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainLogListOutcome DnspodClient::DescribeDomainLogList(const DescribeDomainLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainLogListResponse rsp = DescribeDomainLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainLogListOutcome(rsp);
        else
            return DescribeDomainLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainLogListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainLogListAsync(const DescribeDomainLogListRequest& request, const DescribeDomainLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainLogListRequest&;
    using Resp = DescribeDomainLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainLogListOutcomeCallable DnspodClient::DescribeDomainLogListCallable(const DescribeDomainLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainLogListOutcome>>();
    DescribeDomainLogListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainLogListRequest&,
        DescribeDomainLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainPurviewOutcome DnspodClient::DescribeDomainPurview(const DescribeDomainPurviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainPurview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainPurviewResponse rsp = DescribeDomainPurviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainPurviewOutcome(rsp);
        else
            return DescribeDomainPurviewOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainPurviewOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainPurviewAsync(const DescribeDomainPurviewRequest& request, const DescribeDomainPurviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainPurviewRequest&;
    using Resp = DescribeDomainPurviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainPurview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainPurviewOutcomeCallable DnspodClient::DescribeDomainPurviewCallable(const DescribeDomainPurviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainPurviewOutcome>>();
    DescribeDomainPurviewAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainPurviewRequest&,
        DescribeDomainPurviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeDomainShareInfoOutcome DnspodClient::DescribeDomainShareInfo(const DescribeDomainShareInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainShareInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainShareInfoResponse rsp = DescribeDomainShareInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainShareInfoOutcome(rsp);
        else
            return DescribeDomainShareInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainShareInfoOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainShareInfoAsync(const DescribeDomainShareInfoRequest& request, const DescribeDomainShareInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainShareInfoRequest&;
    using Resp = DescribeDomainShareInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainShareInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeDomainShareInfoOutcomeCallable DnspodClient::DescribeDomainShareInfoCallable(const DescribeDomainShareInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainShareInfoOutcome>>();
    DescribeDomainShareInfoAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeDomainShareInfoRequest&,
        DescribeDomainShareInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeRecordOutcome DnspodClient::DescribeRecord(const DescribeRecordRequest &request)
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

void DnspodClient::DescribeRecordAsync(const DescribeRecordRequest& request, const DescribeRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DnspodClient::DescribeRecordOutcomeCallable DnspodClient::DescribeRecordCallable(const DescribeRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordOutcome>>();
    DescribeRecordAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeRecordRequest&,
        DescribeRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeRecordGroupListOutcome DnspodClient::DescribeRecordGroupList(const DescribeRecordGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordGroupListResponse rsp = DescribeRecordGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordGroupListOutcome(rsp);
        else
            return DescribeRecordGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordGroupListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordGroupListAsync(const DescribeRecordGroupListRequest& request, const DescribeRecordGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordGroupListRequest&;
    using Resp = DescribeRecordGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeRecordGroupListOutcomeCallable DnspodClient::DescribeRecordGroupListCallable(const DescribeRecordGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordGroupListOutcome>>();
    DescribeRecordGroupListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeRecordGroupListRequest&,
        DescribeRecordGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeRecordLineCategoryListOutcome DnspodClient::DescribeRecordLineCategoryList(const DescribeRecordLineCategoryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordLineCategoryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordLineCategoryListResponse rsp = DescribeRecordLineCategoryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordLineCategoryListOutcome(rsp);
        else
            return DescribeRecordLineCategoryListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordLineCategoryListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordLineCategoryListAsync(const DescribeRecordLineCategoryListRequest& request, const DescribeRecordLineCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordLineCategoryListRequest&;
    using Resp = DescribeRecordLineCategoryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordLineCategoryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeRecordLineCategoryListOutcomeCallable DnspodClient::DescribeRecordLineCategoryListCallable(const DescribeRecordLineCategoryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordLineCategoryListOutcome>>();
    DescribeRecordLineCategoryListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeRecordLineCategoryListRequest&,
        DescribeRecordLineCategoryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeRecordLineListOutcome DnspodClient::DescribeRecordLineList(const DescribeRecordLineListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordLineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordLineListResponse rsp = DescribeRecordLineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordLineListOutcome(rsp);
        else
            return DescribeRecordLineListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordLineListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordLineListAsync(const DescribeRecordLineListRequest& request, const DescribeRecordLineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordLineListRequest&;
    using Resp = DescribeRecordLineListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordLineList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeRecordLineListOutcomeCallable DnspodClient::DescribeRecordLineListCallable(const DescribeRecordLineListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordLineListOutcome>>();
    DescribeRecordLineListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeRecordLineListRequest&,
        DescribeRecordLineListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeRecordListOutcome DnspodClient::DescribeRecordList(const DescribeRecordListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordListResponse rsp = DescribeRecordListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordListOutcome(rsp);
        else
            return DescribeRecordListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordListAsync(const DescribeRecordListRequest& request, const DescribeRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordListRequest&;
    using Resp = DescribeRecordListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeRecordListOutcomeCallable DnspodClient::DescribeRecordListCallable(const DescribeRecordListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordListOutcome>>();
    DescribeRecordListAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeRecordListRequest&,
        DescribeRecordListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeRecordTypeOutcome DnspodClient::DescribeRecordType(const DescribeRecordTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordTypeResponse rsp = DescribeRecordTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordTypeOutcome(rsp);
        else
            return DescribeRecordTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordTypeOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordTypeAsync(const DescribeRecordTypeRequest& request, const DescribeRecordTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordTypeRequest&;
    using Resp = DescribeRecordTypeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeRecordTypeOutcomeCallable DnspodClient::DescribeRecordTypeCallable(const DescribeRecordTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordTypeOutcome>>();
    DescribeRecordTypeAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeRecordTypeRequest&,
        DescribeRecordTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::DescribeSubdomainAnalyticsOutcome DnspodClient::DescribeSubdomainAnalytics(const DescribeSubdomainAnalyticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubdomainAnalytics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubdomainAnalyticsResponse rsp = DescribeSubdomainAnalyticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubdomainAnalyticsOutcome(rsp);
        else
            return DescribeSubdomainAnalyticsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubdomainAnalyticsOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeSubdomainAnalyticsAsync(const DescribeSubdomainAnalyticsRequest& request, const DescribeSubdomainAnalyticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubdomainAnalyticsRequest&;
    using Resp = DescribeSubdomainAnalyticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubdomainAnalytics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::DescribeSubdomainAnalyticsOutcomeCallable DnspodClient::DescribeSubdomainAnalyticsCallable(const DescribeSubdomainAnalyticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubdomainAnalyticsOutcome>>();
    DescribeSubdomainAnalyticsAsync(
    request,
    [prom](
        const DnspodClient*,
        const DescribeSubdomainAnalyticsRequest&,
        DescribeSubdomainAnalyticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyDomainLockOutcome DnspodClient::ModifyDomainLock(const ModifyDomainLockRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainLock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainLockResponse rsp = ModifyDomainLockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainLockOutcome(rsp);
        else
            return ModifyDomainLockOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainLockOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainLockAsync(const ModifyDomainLockRequest& request, const ModifyDomainLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainLockRequest&;
    using Resp = ModifyDomainLockResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainLock", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyDomainLockOutcomeCallable DnspodClient::ModifyDomainLockCallable(const ModifyDomainLockRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainLockOutcome>>();
    ModifyDomainLockAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyDomainLockRequest&,
        ModifyDomainLockOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyDomainOwnerOutcome DnspodClient::ModifyDomainOwner(const ModifyDomainOwnerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainOwner");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainOwnerResponse rsp = ModifyDomainOwnerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainOwnerOutcome(rsp);
        else
            return ModifyDomainOwnerOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainOwnerOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainOwnerAsync(const ModifyDomainOwnerRequest& request, const ModifyDomainOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainOwnerRequest&;
    using Resp = ModifyDomainOwnerResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainOwner", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyDomainOwnerOutcomeCallable DnspodClient::ModifyDomainOwnerCallable(const ModifyDomainOwnerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainOwnerOutcome>>();
    ModifyDomainOwnerAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyDomainOwnerRequest&,
        ModifyDomainOwnerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyDomainRemarkOutcome DnspodClient::ModifyDomainRemark(const ModifyDomainRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainRemarkResponse rsp = ModifyDomainRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainRemarkOutcome(rsp);
        else
            return ModifyDomainRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainRemarkOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainRemarkAsync(const ModifyDomainRemarkRequest& request, const ModifyDomainRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainRemarkRequest&;
    using Resp = ModifyDomainRemarkResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainRemark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyDomainRemarkOutcomeCallable DnspodClient::ModifyDomainRemarkCallable(const ModifyDomainRemarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainRemarkOutcome>>();
    ModifyDomainRemarkAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyDomainRemarkRequest&,
        ModifyDomainRemarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyDomainStatusOutcome DnspodClient::ModifyDomainStatus(const ModifyDomainStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainStatusResponse rsp = ModifyDomainStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainStatusOutcome(rsp);
        else
            return ModifyDomainStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainStatusOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainStatusAsync(const ModifyDomainStatusRequest& request, const ModifyDomainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainStatusRequest&;
    using Resp = ModifyDomainStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyDomainStatusOutcomeCallable DnspodClient::ModifyDomainStatusCallable(const ModifyDomainStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainStatusOutcome>>();
    ModifyDomainStatusAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyDomainStatusRequest&,
        ModifyDomainStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyDomainUnlockOutcome DnspodClient::ModifyDomainUnlock(const ModifyDomainUnlockRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainUnlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainUnlockResponse rsp = ModifyDomainUnlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainUnlockOutcome(rsp);
        else
            return ModifyDomainUnlockOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainUnlockOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainUnlockAsync(const ModifyDomainUnlockRequest& request, const ModifyDomainUnlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainUnlockRequest&;
    using Resp = ModifyDomainUnlockResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainUnlock", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyDomainUnlockOutcomeCallable DnspodClient::ModifyDomainUnlockCallable(const ModifyDomainUnlockRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainUnlockOutcome>>();
    ModifyDomainUnlockAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyDomainUnlockRequest&,
        ModifyDomainUnlockOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyRecordOutcome DnspodClient::ModifyRecord(const ModifyRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordResponse rsp = ModifyRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordOutcome(rsp);
        else
            return ModifyRecordOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordAsync(const ModifyRecordRequest& request, const ModifyRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRecordRequest&;
    using Resp = ModifyRecordResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyRecordOutcomeCallable DnspodClient::ModifyRecordCallable(const ModifyRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRecordOutcome>>();
    ModifyRecordAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyRecordRequest&,
        ModifyRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyRecordBatchOutcome DnspodClient::ModifyRecordBatch(const ModifyRecordBatchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordBatchResponse rsp = ModifyRecordBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordBatchOutcome(rsp);
        else
            return ModifyRecordBatchOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordBatchOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordBatchAsync(const ModifyRecordBatchRequest& request, const ModifyRecordBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRecordBatchRequest&;
    using Resp = ModifyRecordBatchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRecordBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyRecordBatchOutcomeCallable DnspodClient::ModifyRecordBatchCallable(const ModifyRecordBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRecordBatchOutcome>>();
    ModifyRecordBatchAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyRecordBatchRequest&,
        ModifyRecordBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyRecordGroupOutcome DnspodClient::ModifyRecordGroup(const ModifyRecordGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordGroupResponse rsp = ModifyRecordGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordGroupOutcome(rsp);
        else
            return ModifyRecordGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordGroupAsync(const ModifyRecordGroupRequest& request, const ModifyRecordGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRecordGroupRequest&;
    using Resp = ModifyRecordGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRecordGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyRecordGroupOutcomeCallable DnspodClient::ModifyRecordGroupCallable(const ModifyRecordGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRecordGroupOutcome>>();
    ModifyRecordGroupAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyRecordGroupRequest&,
        ModifyRecordGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyRecordRemarkOutcome DnspodClient::ModifyRecordRemark(const ModifyRecordRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordRemarkResponse rsp = ModifyRecordRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordRemarkOutcome(rsp);
        else
            return ModifyRecordRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordRemarkOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordRemarkAsync(const ModifyRecordRemarkRequest& request, const ModifyRecordRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRecordRemarkRequest&;
    using Resp = ModifyRecordRemarkResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRecordRemark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyRecordRemarkOutcomeCallable DnspodClient::ModifyRecordRemarkCallable(const ModifyRecordRemarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRecordRemarkOutcome>>();
    ModifyRecordRemarkAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyRecordRemarkRequest&,
        ModifyRecordRemarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyRecordStatusOutcome DnspodClient::ModifyRecordStatus(const ModifyRecordStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordStatusResponse rsp = ModifyRecordStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordStatusOutcome(rsp);
        else
            return ModifyRecordStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordStatusOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordStatusAsync(const ModifyRecordStatusRequest& request, const ModifyRecordStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRecordStatusRequest&;
    using Resp = ModifyRecordStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRecordStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyRecordStatusOutcomeCallable DnspodClient::ModifyRecordStatusCallable(const ModifyRecordStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRecordStatusOutcome>>();
    ModifyRecordStatusAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyRecordStatusRequest&,
        ModifyRecordStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DnspodClient::ModifyRecordToGroupOutcome DnspodClient::ModifyRecordToGroup(const ModifyRecordToGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordToGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordToGroupResponse rsp = ModifyRecordToGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordToGroupOutcome(rsp);
        else
            return ModifyRecordToGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordToGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordToGroupAsync(const ModifyRecordToGroupRequest& request, const ModifyRecordToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRecordToGroupRequest&;
    using Resp = ModifyRecordToGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRecordToGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DnspodClient::ModifyRecordToGroupOutcomeCallable DnspodClient::ModifyRecordToGroupCallable(const ModifyRecordToGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRecordToGroupOutcome>>();
    ModifyRecordToGroupAsync(
    request,
    [prom](
        const DnspodClient*,
        const ModifyRecordToGroupRequest&,
        ModifyRecordToGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

