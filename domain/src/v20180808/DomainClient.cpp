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

#include <tencentcloud/domain/v20180808/DomainClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Domain::V20180808;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-08-08";
    const string ENDPOINT = "domain.intl.tencentcloudapi.com";
}

DomainClient::DomainClient(const Credential &credential, const string &region) :
    DomainClient(credential, region, ClientProfile())
{
}

DomainClient::DomainClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DomainClient::BatchModifyIntlDomainDNSOutcome DomainClient::BatchModifyIntlDomainDNS(const BatchModifyIntlDomainDNSRequest &request)
{
    auto outcome = MakeRequest(request, "BatchModifyIntlDomainDNS");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchModifyIntlDomainDNSResponse rsp = BatchModifyIntlDomainDNSResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchModifyIntlDomainDNSOutcome(rsp);
        else
            return BatchModifyIntlDomainDNSOutcome(o.GetError());
    }
    else
    {
        return BatchModifyIntlDomainDNSOutcome(outcome.GetError());
    }
}

void DomainClient::BatchModifyIntlDomainDNSAsync(const BatchModifyIntlDomainDNSRequest& request, const BatchModifyIntlDomainDNSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchModifyIntlDomainDNSRequest&;
    using Resp = BatchModifyIntlDomainDNSResponse;

    DoRequestAsync<Req, Resp>(
        "BatchModifyIntlDomainDNS", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::BatchModifyIntlDomainDNSOutcomeCallable DomainClient::BatchModifyIntlDomainDNSCallable(const BatchModifyIntlDomainDNSRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchModifyIntlDomainDNSOutcome>>();
    BatchModifyIntlDomainDNSAsync(
    request,
    [prom](
        const DomainClient*,
        const BatchModifyIntlDomainDNSRequest&,
        BatchModifyIntlDomainDNSOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::BatchModifyIntlDomainInfoOutcome DomainClient::BatchModifyIntlDomainInfo(const BatchModifyIntlDomainInfoRequest &request)
{
    auto outcome = MakeRequest(request, "BatchModifyIntlDomainInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchModifyIntlDomainInfoResponse rsp = BatchModifyIntlDomainInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchModifyIntlDomainInfoOutcome(rsp);
        else
            return BatchModifyIntlDomainInfoOutcome(o.GetError());
    }
    else
    {
        return BatchModifyIntlDomainInfoOutcome(outcome.GetError());
    }
}

void DomainClient::BatchModifyIntlDomainInfoAsync(const BatchModifyIntlDomainInfoRequest& request, const BatchModifyIntlDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchModifyIntlDomainInfoRequest&;
    using Resp = BatchModifyIntlDomainInfoResponse;

    DoRequestAsync<Req, Resp>(
        "BatchModifyIntlDomainInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::BatchModifyIntlDomainInfoOutcomeCallable DomainClient::BatchModifyIntlDomainInfoCallable(const BatchModifyIntlDomainInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchModifyIntlDomainInfoOutcome>>();
    BatchModifyIntlDomainInfoAsync(
    request,
    [prom](
        const DomainClient*,
        const BatchModifyIntlDomainInfoRequest&,
        BatchModifyIntlDomainInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::CheckIntlDomainNewOutcome DomainClient::CheckIntlDomainNew(const CheckIntlDomainNewRequest &request)
{
    auto outcome = MakeRequest(request, "CheckIntlDomainNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckIntlDomainNewResponse rsp = CheckIntlDomainNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckIntlDomainNewOutcome(rsp);
        else
            return CheckIntlDomainNewOutcome(o.GetError());
    }
    else
    {
        return CheckIntlDomainNewOutcome(outcome.GetError());
    }
}

void DomainClient::CheckIntlDomainNewAsync(const CheckIntlDomainNewRequest& request, const CheckIntlDomainNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckIntlDomainNewRequest&;
    using Resp = CheckIntlDomainNewResponse;

    DoRequestAsync<Req, Resp>(
        "CheckIntlDomainNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::CheckIntlDomainNewOutcomeCallable DomainClient::CheckIntlDomainNewCallable(const CheckIntlDomainNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckIntlDomainNewOutcome>>();
    CheckIntlDomainNewAsync(
    request,
    [prom](
        const DomainClient*,
        const CheckIntlDomainNewRequest&,
        CheckIntlDomainNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::CreateIntlDomainBatchOutcome DomainClient::CreateIntlDomainBatch(const CreateIntlDomainBatchRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIntlDomainBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIntlDomainBatchResponse rsp = CreateIntlDomainBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIntlDomainBatchOutcome(rsp);
        else
            return CreateIntlDomainBatchOutcome(o.GetError());
    }
    else
    {
        return CreateIntlDomainBatchOutcome(outcome.GetError());
    }
}

void DomainClient::CreateIntlDomainBatchAsync(const CreateIntlDomainBatchRequest& request, const CreateIntlDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIntlDomainBatchRequest&;
    using Resp = CreateIntlDomainBatchResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIntlDomainBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::CreateIntlDomainBatchOutcomeCallable DomainClient::CreateIntlDomainBatchCallable(const CreateIntlDomainBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIntlDomainBatchOutcome>>();
    CreateIntlDomainBatchAsync(
    request,
    [prom](
        const DomainClient*,
        const CreateIntlDomainBatchRequest&,
        CreateIntlDomainBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::CreateIntlPhoneEmailOutcome DomainClient::CreateIntlPhoneEmail(const CreateIntlPhoneEmailRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIntlPhoneEmail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIntlPhoneEmailResponse rsp = CreateIntlPhoneEmailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIntlPhoneEmailOutcome(rsp);
        else
            return CreateIntlPhoneEmailOutcome(o.GetError());
    }
    else
    {
        return CreateIntlPhoneEmailOutcome(outcome.GetError());
    }
}

void DomainClient::CreateIntlPhoneEmailAsync(const CreateIntlPhoneEmailRequest& request, const CreateIntlPhoneEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIntlPhoneEmailRequest&;
    using Resp = CreateIntlPhoneEmailResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIntlPhoneEmail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::CreateIntlPhoneEmailOutcomeCallable DomainClient::CreateIntlPhoneEmailCallable(const CreateIntlPhoneEmailRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIntlPhoneEmailOutcome>>();
    CreateIntlPhoneEmailAsync(
    request,
    [prom](
        const DomainClient*,
        const CreateIntlPhoneEmailRequest&,
        CreateIntlPhoneEmailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::CreateIntlTemplateOutcome DomainClient::CreateIntlTemplate(const CreateIntlTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIntlTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIntlTemplateResponse rsp = CreateIntlTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIntlTemplateOutcome(rsp);
        else
            return CreateIntlTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateIntlTemplateOutcome(outcome.GetError());
    }
}

void DomainClient::CreateIntlTemplateAsync(const CreateIntlTemplateRequest& request, const CreateIntlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIntlTemplateRequest&;
    using Resp = CreateIntlTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIntlTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::CreateIntlTemplateOutcomeCallable DomainClient::CreateIntlTemplateCallable(const CreateIntlTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIntlTemplateOutcome>>();
    CreateIntlTemplateAsync(
    request,
    [prom](
        const DomainClient*,
        const CreateIntlTemplateRequest&,
        CreateIntlTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DeleteIntlPhoneEmailOutcome DomainClient::DeleteIntlPhoneEmail(const DeleteIntlPhoneEmailRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIntlPhoneEmail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIntlPhoneEmailResponse rsp = DeleteIntlPhoneEmailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIntlPhoneEmailOutcome(rsp);
        else
            return DeleteIntlPhoneEmailOutcome(o.GetError());
    }
    else
    {
        return DeleteIntlPhoneEmailOutcome(outcome.GetError());
    }
}

void DomainClient::DeleteIntlPhoneEmailAsync(const DeleteIntlPhoneEmailRequest& request, const DeleteIntlPhoneEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIntlPhoneEmailRequest&;
    using Resp = DeleteIntlPhoneEmailResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIntlPhoneEmail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DeleteIntlPhoneEmailOutcomeCallable DomainClient::DeleteIntlPhoneEmailCallable(const DeleteIntlPhoneEmailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIntlPhoneEmailOutcome>>();
    DeleteIntlPhoneEmailAsync(
    request,
    [prom](
        const DomainClient*,
        const DeleteIntlPhoneEmailRequest&,
        DeleteIntlPhoneEmailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DeleteIntlTemplateOutcome DomainClient::DeleteIntlTemplate(const DeleteIntlTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIntlTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIntlTemplateResponse rsp = DeleteIntlTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIntlTemplateOutcome(rsp);
        else
            return DeleteIntlTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteIntlTemplateOutcome(outcome.GetError());
    }
}

void DomainClient::DeleteIntlTemplateAsync(const DeleteIntlTemplateRequest& request, const DeleteIntlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIntlTemplateRequest&;
    using Resp = DeleteIntlTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIntlTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DeleteIntlTemplateOutcomeCallable DomainClient::DeleteIntlTemplateCallable(const DeleteIntlTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIntlTemplateOutcome>>();
    DeleteIntlTemplateAsync(
    request,
    [prom](
        const DomainClient*,
        const DeleteIntlTemplateRequest&,
        DeleteIntlTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeIntlBatchDetailStatusOutcome DomainClient::DescribeIntlBatchDetailStatus(const DescribeIntlBatchDetailStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntlBatchDetailStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntlBatchDetailStatusResponse rsp = DescribeIntlBatchDetailStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntlBatchDetailStatusOutcome(rsp);
        else
            return DescribeIntlBatchDetailStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeIntlBatchDetailStatusOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeIntlBatchDetailStatusAsync(const DescribeIntlBatchDetailStatusRequest& request, const DescribeIntlBatchDetailStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntlBatchDetailStatusRequest&;
    using Resp = DescribeIntlBatchDetailStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntlBatchDetailStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeIntlBatchDetailStatusOutcomeCallable DomainClient::DescribeIntlBatchDetailStatusCallable(const DescribeIntlBatchDetailStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntlBatchDetailStatusOutcome>>();
    DescribeIntlBatchDetailStatusAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeIntlBatchDetailStatusRequest&,
        DescribeIntlBatchDetailStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeIntlBatchOperationLogsOutcome DomainClient::DescribeIntlBatchOperationLogs(const DescribeIntlBatchOperationLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntlBatchOperationLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntlBatchOperationLogsResponse rsp = DescribeIntlBatchOperationLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntlBatchOperationLogsOutcome(rsp);
        else
            return DescribeIntlBatchOperationLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeIntlBatchOperationLogsOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeIntlBatchOperationLogsAsync(const DescribeIntlBatchOperationLogsRequest& request, const DescribeIntlBatchOperationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntlBatchOperationLogsRequest&;
    using Resp = DescribeIntlBatchOperationLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntlBatchOperationLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeIntlBatchOperationLogsOutcomeCallable DomainClient::DescribeIntlBatchOperationLogsCallable(const DescribeIntlBatchOperationLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntlBatchOperationLogsOutcome>>();
    DescribeIntlBatchOperationLogsAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeIntlBatchOperationLogsRequest&,
        DescribeIntlBatchOperationLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeIntlDomainOutcome DomainClient::DescribeIntlDomain(const DescribeIntlDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntlDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntlDomainResponse rsp = DescribeIntlDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntlDomainOutcome(rsp);
        else
            return DescribeIntlDomainOutcome(o.GetError());
    }
    else
    {
        return DescribeIntlDomainOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeIntlDomainAsync(const DescribeIntlDomainRequest& request, const DescribeIntlDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntlDomainRequest&;
    using Resp = DescribeIntlDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntlDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeIntlDomainOutcomeCallable DomainClient::DescribeIntlDomainCallable(const DescribeIntlDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntlDomainOutcome>>();
    DescribeIntlDomainAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeIntlDomainRequest&,
        DescribeIntlDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeIntlDomainBatchDetailsOutcome DomainClient::DescribeIntlDomainBatchDetails(const DescribeIntlDomainBatchDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntlDomainBatchDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntlDomainBatchDetailsResponse rsp = DescribeIntlDomainBatchDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntlDomainBatchDetailsOutcome(rsp);
        else
            return DescribeIntlDomainBatchDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeIntlDomainBatchDetailsOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeIntlDomainBatchDetailsAsync(const DescribeIntlDomainBatchDetailsRequest& request, const DescribeIntlDomainBatchDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntlDomainBatchDetailsRequest&;
    using Resp = DescribeIntlDomainBatchDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntlDomainBatchDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeIntlDomainBatchDetailsOutcomeCallable DomainClient::DescribeIntlDomainBatchDetailsCallable(const DescribeIntlDomainBatchDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntlDomainBatchDetailsOutcome>>();
    DescribeIntlDomainBatchDetailsAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeIntlDomainBatchDetailsRequest&,
        DescribeIntlDomainBatchDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeIntlDomainListOutcome DomainClient::DescribeIntlDomainList(const DescribeIntlDomainListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntlDomainList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntlDomainListResponse rsp = DescribeIntlDomainListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntlDomainListOutcome(rsp);
        else
            return DescribeIntlDomainListOutcome(o.GetError());
    }
    else
    {
        return DescribeIntlDomainListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeIntlDomainListAsync(const DescribeIntlDomainListRequest& request, const DescribeIntlDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntlDomainListRequest&;
    using Resp = DescribeIntlDomainListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntlDomainList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeIntlDomainListOutcomeCallable DomainClient::DescribeIntlDomainListCallable(const DescribeIntlDomainListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntlDomainListOutcome>>();
    DescribeIntlDomainListAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeIntlDomainListRequest&,
        DescribeIntlDomainListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeIntlDomainPriceNewListOutcome DomainClient::DescribeIntlDomainPriceNewList(const DescribeIntlDomainPriceNewListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntlDomainPriceNewList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntlDomainPriceNewListResponse rsp = DescribeIntlDomainPriceNewListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntlDomainPriceNewListOutcome(rsp);
        else
            return DescribeIntlDomainPriceNewListOutcome(o.GetError());
    }
    else
    {
        return DescribeIntlDomainPriceNewListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeIntlDomainPriceNewListAsync(const DescribeIntlDomainPriceNewListRequest& request, const DescribeIntlDomainPriceNewListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntlDomainPriceNewListRequest&;
    using Resp = DescribeIntlDomainPriceNewListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntlDomainPriceNewList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeIntlDomainPriceNewListOutcomeCallable DomainClient::DescribeIntlDomainPriceNewListCallable(const DescribeIntlDomainPriceNewListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntlDomainPriceNewListOutcome>>();
    DescribeIntlDomainPriceNewListAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeIntlDomainPriceNewListRequest&,
        DescribeIntlDomainPriceNewListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeIntlPhoneEmailListOutcome DomainClient::DescribeIntlPhoneEmailList(const DescribeIntlPhoneEmailListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntlPhoneEmailList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntlPhoneEmailListResponse rsp = DescribeIntlPhoneEmailListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntlPhoneEmailListOutcome(rsp);
        else
            return DescribeIntlPhoneEmailListOutcome(o.GetError());
    }
    else
    {
        return DescribeIntlPhoneEmailListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeIntlPhoneEmailListAsync(const DescribeIntlPhoneEmailListRequest& request, const DescribeIntlPhoneEmailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntlPhoneEmailListRequest&;
    using Resp = DescribeIntlPhoneEmailListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntlPhoneEmailList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeIntlPhoneEmailListOutcomeCallable DomainClient::DescribeIntlPhoneEmailListCallable(const DescribeIntlPhoneEmailListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntlPhoneEmailListOutcome>>();
    DescribeIntlPhoneEmailListAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeIntlPhoneEmailListRequest&,
        DescribeIntlPhoneEmailListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeIntlTemplateOutcome DomainClient::DescribeIntlTemplate(const DescribeIntlTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntlTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntlTemplateResponse rsp = DescribeIntlTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntlTemplateOutcome(rsp);
        else
            return DescribeIntlTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeIntlTemplateOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeIntlTemplateAsync(const DescribeIntlTemplateRequest& request, const DescribeIntlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntlTemplateRequest&;
    using Resp = DescribeIntlTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntlTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeIntlTemplateOutcomeCallable DomainClient::DescribeIntlTemplateCallable(const DescribeIntlTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntlTemplateOutcome>>();
    DescribeIntlTemplateAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeIntlTemplateRequest&,
        DescribeIntlTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeIntlTemplateListOutcome DomainClient::DescribeIntlTemplateList(const DescribeIntlTemplateListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIntlTemplateList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIntlTemplateListResponse rsp = DescribeIntlTemplateListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIntlTemplateListOutcome(rsp);
        else
            return DescribeIntlTemplateListOutcome(o.GetError());
    }
    else
    {
        return DescribeIntlTemplateListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeIntlTemplateListAsync(const DescribeIntlTemplateListRequest& request, const DescribeIntlTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIntlTemplateListRequest&;
    using Resp = DescribeIntlTemplateListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIntlTemplateList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeIntlTemplateListOutcomeCallable DomainClient::DescribeIntlTemplateListCallable(const DescribeIntlTemplateListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIntlTemplateListOutcome>>();
    DescribeIntlTemplateListAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeIntlTemplateListRequest&,
        DescribeIntlTemplateListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::ModifyOwnerIntlBatchOutcome DomainClient::ModifyOwnerIntlBatch(const ModifyOwnerIntlBatchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOwnerIntlBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOwnerIntlBatchResponse rsp = ModifyOwnerIntlBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOwnerIntlBatchOutcome(rsp);
        else
            return ModifyOwnerIntlBatchOutcome(o.GetError());
    }
    else
    {
        return ModifyOwnerIntlBatchOutcome(outcome.GetError());
    }
}

void DomainClient::ModifyOwnerIntlBatchAsync(const ModifyOwnerIntlBatchRequest& request, const ModifyOwnerIntlBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyOwnerIntlBatchRequest&;
    using Resp = ModifyOwnerIntlBatchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyOwnerIntlBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::ModifyOwnerIntlBatchOutcomeCallable DomainClient::ModifyOwnerIntlBatchCallable(const ModifyOwnerIntlBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyOwnerIntlBatchOutcome>>();
    ModifyOwnerIntlBatchAsync(
    request,
    [prom](
        const DomainClient*,
        const ModifyOwnerIntlBatchRequest&,
        ModifyOwnerIntlBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::RenewIntlDomainBatchOutcome DomainClient::RenewIntlDomainBatch(const RenewIntlDomainBatchRequest &request)
{
    auto outcome = MakeRequest(request, "RenewIntlDomainBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewIntlDomainBatchResponse rsp = RenewIntlDomainBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewIntlDomainBatchOutcome(rsp);
        else
            return RenewIntlDomainBatchOutcome(o.GetError());
    }
    else
    {
        return RenewIntlDomainBatchOutcome(outcome.GetError());
    }
}

void DomainClient::RenewIntlDomainBatchAsync(const RenewIntlDomainBatchRequest& request, const RenewIntlDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewIntlDomainBatchRequest&;
    using Resp = RenewIntlDomainBatchResponse;

    DoRequestAsync<Req, Resp>(
        "RenewIntlDomainBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::RenewIntlDomainBatchOutcomeCallable DomainClient::RenewIntlDomainBatchCallable(const RenewIntlDomainBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewIntlDomainBatchOutcome>>();
    RenewIntlDomainBatchAsync(
    request,
    [prom](
        const DomainClient*,
        const RenewIntlDomainBatchRequest&,
        RenewIntlDomainBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::SendIntlPhoneEmailCodeOutcome DomainClient::SendIntlPhoneEmailCode(const SendIntlPhoneEmailCodeRequest &request)
{
    auto outcome = MakeRequest(request, "SendIntlPhoneEmailCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendIntlPhoneEmailCodeResponse rsp = SendIntlPhoneEmailCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendIntlPhoneEmailCodeOutcome(rsp);
        else
            return SendIntlPhoneEmailCodeOutcome(o.GetError());
    }
    else
    {
        return SendIntlPhoneEmailCodeOutcome(outcome.GetError());
    }
}

void DomainClient::SendIntlPhoneEmailCodeAsync(const SendIntlPhoneEmailCodeRequest& request, const SendIntlPhoneEmailCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendIntlPhoneEmailCodeRequest&;
    using Resp = SendIntlPhoneEmailCodeResponse;

    DoRequestAsync<Req, Resp>(
        "SendIntlPhoneEmailCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::SendIntlPhoneEmailCodeOutcomeCallable DomainClient::SendIntlPhoneEmailCodeCallable(const SendIntlPhoneEmailCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendIntlPhoneEmailCodeOutcome>>();
    SendIntlPhoneEmailCodeAsync(
    request,
    [prom](
        const DomainClient*,
        const SendIntlPhoneEmailCodeRequest&,
        SendIntlPhoneEmailCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::SetIntlDomainAutoRenewOutcome DomainClient::SetIntlDomainAutoRenew(const SetIntlDomainAutoRenewRequest &request)
{
    auto outcome = MakeRequest(request, "SetIntlDomainAutoRenew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetIntlDomainAutoRenewResponse rsp = SetIntlDomainAutoRenewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetIntlDomainAutoRenewOutcome(rsp);
        else
            return SetIntlDomainAutoRenewOutcome(o.GetError());
    }
    else
    {
        return SetIntlDomainAutoRenewOutcome(outcome.GetError());
    }
}

void DomainClient::SetIntlDomainAutoRenewAsync(const SetIntlDomainAutoRenewRequest& request, const SetIntlDomainAutoRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetIntlDomainAutoRenewRequest&;
    using Resp = SetIntlDomainAutoRenewResponse;

    DoRequestAsync<Req, Resp>(
        "SetIntlDomainAutoRenew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::SetIntlDomainAutoRenewOutcomeCallable DomainClient::SetIntlDomainAutoRenewCallable(const SetIntlDomainAutoRenewRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetIntlDomainAutoRenewOutcome>>();
    SetIntlDomainAutoRenewAsync(
    request,
    [prom](
        const DomainClient*,
        const SetIntlDomainAutoRenewRequest&,
        SetIntlDomainAutoRenewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::TransferInIntlDomainBatchOutcome DomainClient::TransferInIntlDomainBatch(const TransferInIntlDomainBatchRequest &request)
{
    auto outcome = MakeRequest(request, "TransferInIntlDomainBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TransferInIntlDomainBatchResponse rsp = TransferInIntlDomainBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TransferInIntlDomainBatchOutcome(rsp);
        else
            return TransferInIntlDomainBatchOutcome(o.GetError());
    }
    else
    {
        return TransferInIntlDomainBatchOutcome(outcome.GetError());
    }
}

void DomainClient::TransferInIntlDomainBatchAsync(const TransferInIntlDomainBatchRequest& request, const TransferInIntlDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TransferInIntlDomainBatchRequest&;
    using Resp = TransferInIntlDomainBatchResponse;

    DoRequestAsync<Req, Resp>(
        "TransferInIntlDomainBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::TransferInIntlDomainBatchOutcomeCallable DomainClient::TransferInIntlDomainBatchCallable(const TransferInIntlDomainBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<TransferInIntlDomainBatchOutcome>>();
    TransferInIntlDomainBatchAsync(
    request,
    [prom](
        const DomainClient*,
        const TransferInIntlDomainBatchRequest&,
        TransferInIntlDomainBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::TransferProhibitionIntlBatchOutcome DomainClient::TransferProhibitionIntlBatch(const TransferProhibitionIntlBatchRequest &request)
{
    auto outcome = MakeRequest(request, "TransferProhibitionIntlBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TransferProhibitionIntlBatchResponse rsp = TransferProhibitionIntlBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TransferProhibitionIntlBatchOutcome(rsp);
        else
            return TransferProhibitionIntlBatchOutcome(o.GetError());
    }
    else
    {
        return TransferProhibitionIntlBatchOutcome(outcome.GetError());
    }
}

void DomainClient::TransferProhibitionIntlBatchAsync(const TransferProhibitionIntlBatchRequest& request, const TransferProhibitionIntlBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TransferProhibitionIntlBatchRequest&;
    using Resp = TransferProhibitionIntlBatchResponse;

    DoRequestAsync<Req, Resp>(
        "TransferProhibitionIntlBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::TransferProhibitionIntlBatchOutcomeCallable DomainClient::TransferProhibitionIntlBatchCallable(const TransferProhibitionIntlBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<TransferProhibitionIntlBatchOutcome>>();
    TransferProhibitionIntlBatchAsync(
    request,
    [prom](
        const DomainClient*,
        const TransferProhibitionIntlBatchRequest&,
        TransferProhibitionIntlBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::UpdateProhibitionIntlBatchOutcome DomainClient::UpdateProhibitionIntlBatch(const UpdateProhibitionIntlBatchRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateProhibitionIntlBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateProhibitionIntlBatchResponse rsp = UpdateProhibitionIntlBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateProhibitionIntlBatchOutcome(rsp);
        else
            return UpdateProhibitionIntlBatchOutcome(o.GetError());
    }
    else
    {
        return UpdateProhibitionIntlBatchOutcome(outcome.GetError());
    }
}

void DomainClient::UpdateProhibitionIntlBatchAsync(const UpdateProhibitionIntlBatchRequest& request, const UpdateProhibitionIntlBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateProhibitionIntlBatchRequest&;
    using Resp = UpdateProhibitionIntlBatchResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateProhibitionIntlBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::UpdateProhibitionIntlBatchOutcomeCallable DomainClient::UpdateProhibitionIntlBatchCallable(const UpdateProhibitionIntlBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateProhibitionIntlBatchOutcome>>();
    UpdateProhibitionIntlBatchAsync(
    request,
    [prom](
        const DomainClient*,
        const UpdateProhibitionIntlBatchRequest&,
        UpdateProhibitionIntlBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

