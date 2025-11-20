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

#include <tencentcloud/ssl/v20191205/SslClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ssl::V20191205;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-12-05";
    const string ENDPOINT = "ssl.intl.tencentcloudapi.com";
}

SslClient::SslClient(const Credential &credential, const string &region) :
    SslClient(credential, region, ClientProfile())
{
}

SslClient::SslClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SslClient::ApplyCertificateOutcome SslClient::ApplyCertificate(const ApplyCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyCertificateResponse rsp = ApplyCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyCertificateOutcome(rsp);
        else
            return ApplyCertificateOutcome(o.GetError());
    }
    else
    {
        return ApplyCertificateOutcome(outcome.GetError());
    }
}

void SslClient::ApplyCertificateAsync(const ApplyCertificateRequest& request, const ApplyCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyCertificateRequest&;
    using Resp = ApplyCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::ApplyCertificateOutcomeCallable SslClient::ApplyCertificateCallable(const ApplyCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyCertificateOutcome>>();
    ApplyCertificateAsync(
    request,
    [prom](
        const SslClient*,
        const ApplyCertificateRequest&,
        ApplyCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::BatchDeleteCSROutcome SslClient::BatchDeleteCSR(const BatchDeleteCSRRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteCSR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteCSRResponse rsp = BatchDeleteCSRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteCSROutcome(rsp);
        else
            return BatchDeleteCSROutcome(o.GetError());
    }
    else
    {
        return BatchDeleteCSROutcome(outcome.GetError());
    }
}

void SslClient::BatchDeleteCSRAsync(const BatchDeleteCSRRequest& request, const BatchDeleteCSRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchDeleteCSRRequest&;
    using Resp = BatchDeleteCSRResponse;

    DoRequestAsync<Req, Resp>(
        "BatchDeleteCSR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::BatchDeleteCSROutcomeCallable SslClient::BatchDeleteCSRCallable(const BatchDeleteCSRRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchDeleteCSROutcome>>();
    BatchDeleteCSRAsync(
    request,
    [prom](
        const SslClient*,
        const BatchDeleteCSRRequest&,
        BatchDeleteCSROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::CancelAuditCertificateOutcome SslClient::CancelAuditCertificate(const CancelAuditCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "CancelAuditCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelAuditCertificateResponse rsp = CancelAuditCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelAuditCertificateOutcome(rsp);
        else
            return CancelAuditCertificateOutcome(o.GetError());
    }
    else
    {
        return CancelAuditCertificateOutcome(outcome.GetError());
    }
}

void SslClient::CancelAuditCertificateAsync(const CancelAuditCertificateRequest& request, const CancelAuditCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelAuditCertificateRequest&;
    using Resp = CancelAuditCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "CancelAuditCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::CancelAuditCertificateOutcomeCallable SslClient::CancelAuditCertificateCallable(const CancelAuditCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelAuditCertificateOutcome>>();
    CancelAuditCertificateAsync(
    request,
    [prom](
        const SslClient*,
        const CancelAuditCertificateRequest&,
        CancelAuditCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::CancelCertificateOrderOutcome SslClient::CancelCertificateOrder(const CancelCertificateOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CancelCertificateOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelCertificateOrderResponse rsp = CancelCertificateOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelCertificateOrderOutcome(rsp);
        else
            return CancelCertificateOrderOutcome(o.GetError());
    }
    else
    {
        return CancelCertificateOrderOutcome(outcome.GetError());
    }
}

void SslClient::CancelCertificateOrderAsync(const CancelCertificateOrderRequest& request, const CancelCertificateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelCertificateOrderRequest&;
    using Resp = CancelCertificateOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CancelCertificateOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::CancelCertificateOrderOutcomeCallable SslClient::CancelCertificateOrderCallable(const CancelCertificateOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelCertificateOrderOutcome>>();
    CancelCertificateOrderAsync(
    request,
    [prom](
        const SslClient*,
        const CancelCertificateOrderRequest&,
        CancelCertificateOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::CommitCertificateInformationOutcome SslClient::CommitCertificateInformation(const CommitCertificateInformationRequest &request)
{
    auto outcome = MakeRequest(request, "CommitCertificateInformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CommitCertificateInformationResponse rsp = CommitCertificateInformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CommitCertificateInformationOutcome(rsp);
        else
            return CommitCertificateInformationOutcome(o.GetError());
    }
    else
    {
        return CommitCertificateInformationOutcome(outcome.GetError());
    }
}

void SslClient::CommitCertificateInformationAsync(const CommitCertificateInformationRequest& request, const CommitCertificateInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CommitCertificateInformationRequest&;
    using Resp = CommitCertificateInformationResponse;

    DoRequestAsync<Req, Resp>(
        "CommitCertificateInformation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::CommitCertificateInformationOutcomeCallable SslClient::CommitCertificateInformationCallable(const CommitCertificateInformationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CommitCertificateInformationOutcome>>();
    CommitCertificateInformationAsync(
    request,
    [prom](
        const SslClient*,
        const CommitCertificateInformationRequest&,
        CommitCertificateInformationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::CreateCSROutcome SslClient::CreateCSR(const CreateCSRRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCSR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCSRResponse rsp = CreateCSRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCSROutcome(rsp);
        else
            return CreateCSROutcome(o.GetError());
    }
    else
    {
        return CreateCSROutcome(outcome.GetError());
    }
}

void SslClient::CreateCSRAsync(const CreateCSRRequest& request, const CreateCSRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCSRRequest&;
    using Resp = CreateCSRResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCSR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::CreateCSROutcomeCallable SslClient::CreateCSRCallable(const CreateCSRRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCSROutcome>>();
    CreateCSRAsync(
    request,
    [prom](
        const SslClient*,
        const CreateCSRRequest&,
        CreateCSROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::CreateCertificateOutcome SslClient::CreateCertificate(const CreateCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCertificateResponse rsp = CreateCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCertificateOutcome(rsp);
        else
            return CreateCertificateOutcome(o.GetError());
    }
    else
    {
        return CreateCertificateOutcome(outcome.GetError());
    }
}

void SslClient::CreateCertificateAsync(const CreateCertificateRequest& request, const CreateCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCertificateRequest&;
    using Resp = CreateCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::CreateCertificateOutcomeCallable SslClient::CreateCertificateCallable(const CreateCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCertificateOutcome>>();
    CreateCertificateAsync(
    request,
    [prom](
        const SslClient*,
        const CreateCertificateRequest&,
        CreateCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::CreateCertificateBindResourceSyncTaskOutcome SslClient::CreateCertificateBindResourceSyncTask(const CreateCertificateBindResourceSyncTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCertificateBindResourceSyncTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCertificateBindResourceSyncTaskResponse rsp = CreateCertificateBindResourceSyncTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCertificateBindResourceSyncTaskOutcome(rsp);
        else
            return CreateCertificateBindResourceSyncTaskOutcome(o.GetError());
    }
    else
    {
        return CreateCertificateBindResourceSyncTaskOutcome(outcome.GetError());
    }
}

void SslClient::CreateCertificateBindResourceSyncTaskAsync(const CreateCertificateBindResourceSyncTaskRequest& request, const CreateCertificateBindResourceSyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCertificateBindResourceSyncTaskRequest&;
    using Resp = CreateCertificateBindResourceSyncTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCertificateBindResourceSyncTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::CreateCertificateBindResourceSyncTaskOutcomeCallable SslClient::CreateCertificateBindResourceSyncTaskCallable(const CreateCertificateBindResourceSyncTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCertificateBindResourceSyncTaskOutcome>>();
    CreateCertificateBindResourceSyncTaskAsync(
    request,
    [prom](
        const SslClient*,
        const CreateCertificateBindResourceSyncTaskRequest&,
        CreateCertificateBindResourceSyncTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DeleteCertificateOutcome SslClient::DeleteCertificate(const DeleteCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCertificateResponse rsp = DeleteCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCertificateOutcome(rsp);
        else
            return DeleteCertificateOutcome(o.GetError());
    }
    else
    {
        return DeleteCertificateOutcome(outcome.GetError());
    }
}

void SslClient::DeleteCertificateAsync(const DeleteCertificateRequest& request, const DeleteCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCertificateRequest&;
    using Resp = DeleteCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DeleteCertificateOutcomeCallable SslClient::DeleteCertificateCallable(const DeleteCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCertificateOutcome>>();
    DeleteCertificateAsync(
    request,
    [prom](
        const SslClient*,
        const DeleteCertificateRequest&,
        DeleteCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeCSROutcome SslClient::DescribeCSR(const DescribeCSRRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCSR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCSRResponse rsp = DescribeCSRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCSROutcome(rsp);
        else
            return DescribeCSROutcome(o.GetError());
    }
    else
    {
        return DescribeCSROutcome(outcome.GetError());
    }
}

void SslClient::DescribeCSRAsync(const DescribeCSRRequest& request, const DescribeCSRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCSRRequest&;
    using Resp = DescribeCSRResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCSR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeCSROutcomeCallable SslClient::DescribeCSRCallable(const DescribeCSRRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCSROutcome>>();
    DescribeCSRAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeCSRRequest&,
        DescribeCSROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeCSRSetOutcome SslClient::DescribeCSRSet(const DescribeCSRSetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCSRSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCSRSetResponse rsp = DescribeCSRSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCSRSetOutcome(rsp);
        else
            return DescribeCSRSetOutcome(o.GetError());
    }
    else
    {
        return DescribeCSRSetOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCSRSetAsync(const DescribeCSRSetRequest& request, const DescribeCSRSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCSRSetRequest&;
    using Resp = DescribeCSRSetResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCSRSet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeCSRSetOutcomeCallable SslClient::DescribeCSRSetCallable(const DescribeCSRSetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCSRSetOutcome>>();
    DescribeCSRSetAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeCSRSetRequest&,
        DescribeCSRSetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeCertificateOutcome SslClient::DescribeCertificate(const DescribeCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificateResponse rsp = DescribeCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificateOutcome(rsp);
        else
            return DescribeCertificateOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificateOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCertificateAsync(const DescribeCertificateRequest& request, const DescribeCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCertificateRequest&;
    using Resp = DescribeCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeCertificateOutcomeCallable SslClient::DescribeCertificateCallable(const DescribeCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCertificateOutcome>>();
    DescribeCertificateAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeCertificateRequest&,
        DescribeCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeCertificateBindResourceTaskDetailOutcome SslClient::DescribeCertificateBindResourceTaskDetail(const DescribeCertificateBindResourceTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificateBindResourceTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificateBindResourceTaskDetailResponse rsp = DescribeCertificateBindResourceTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificateBindResourceTaskDetailOutcome(rsp);
        else
            return DescribeCertificateBindResourceTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificateBindResourceTaskDetailOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCertificateBindResourceTaskDetailAsync(const DescribeCertificateBindResourceTaskDetailRequest& request, const DescribeCertificateBindResourceTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCertificateBindResourceTaskDetailRequest&;
    using Resp = DescribeCertificateBindResourceTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCertificateBindResourceTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeCertificateBindResourceTaskDetailOutcomeCallable SslClient::DescribeCertificateBindResourceTaskDetailCallable(const DescribeCertificateBindResourceTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCertificateBindResourceTaskDetailOutcome>>();
    DescribeCertificateBindResourceTaskDetailAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeCertificateBindResourceTaskDetailRequest&,
        DescribeCertificateBindResourceTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeCertificateBindResourceTaskResultOutcome SslClient::DescribeCertificateBindResourceTaskResult(const DescribeCertificateBindResourceTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificateBindResourceTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificateBindResourceTaskResultResponse rsp = DescribeCertificateBindResourceTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificateBindResourceTaskResultOutcome(rsp);
        else
            return DescribeCertificateBindResourceTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificateBindResourceTaskResultOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCertificateBindResourceTaskResultAsync(const DescribeCertificateBindResourceTaskResultRequest& request, const DescribeCertificateBindResourceTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCertificateBindResourceTaskResultRequest&;
    using Resp = DescribeCertificateBindResourceTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCertificateBindResourceTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeCertificateBindResourceTaskResultOutcomeCallable SslClient::DescribeCertificateBindResourceTaskResultCallable(const DescribeCertificateBindResourceTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCertificateBindResourceTaskResultOutcome>>();
    DescribeCertificateBindResourceTaskResultAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeCertificateBindResourceTaskResultRequest&,
        DescribeCertificateBindResourceTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeCertificateDetailOutcome SslClient::DescribeCertificateDetail(const DescribeCertificateDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificateDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificateDetailResponse rsp = DescribeCertificateDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificateDetailOutcome(rsp);
        else
            return DescribeCertificateDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificateDetailOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCertificateDetailAsync(const DescribeCertificateDetailRequest& request, const DescribeCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCertificateDetailRequest&;
    using Resp = DescribeCertificateDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCertificateDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeCertificateDetailOutcomeCallable SslClient::DescribeCertificateDetailCallable(const DescribeCertificateDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCertificateDetailOutcome>>();
    DescribeCertificateDetailAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeCertificateDetailRequest&,
        DescribeCertificateDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeCertificateOperateLogsOutcome SslClient::DescribeCertificateOperateLogs(const DescribeCertificateOperateLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificateOperateLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificateOperateLogsResponse rsp = DescribeCertificateOperateLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificateOperateLogsOutcome(rsp);
        else
            return DescribeCertificateOperateLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificateOperateLogsOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCertificateOperateLogsAsync(const DescribeCertificateOperateLogsRequest& request, const DescribeCertificateOperateLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCertificateOperateLogsRequest&;
    using Resp = DescribeCertificateOperateLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCertificateOperateLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeCertificateOperateLogsOutcomeCallable SslClient::DescribeCertificateOperateLogsCallable(const DescribeCertificateOperateLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCertificateOperateLogsOutcome>>();
    DescribeCertificateOperateLogsAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeCertificateOperateLogsRequest&,
        DescribeCertificateOperateLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeCertificatesOutcome SslClient::DescribeCertificates(const DescribeCertificatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificatesResponse rsp = DescribeCertificatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificatesOutcome(rsp);
        else
            return DescribeCertificatesOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificatesOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCertificatesAsync(const DescribeCertificatesRequest& request, const DescribeCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCertificatesRequest&;
    using Resp = DescribeCertificatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCertificates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeCertificatesOutcomeCallable SslClient::DescribeCertificatesCallable(const DescribeCertificatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCertificatesOutcome>>();
    DescribeCertificatesAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeCertificatesRequest&,
        DescribeCertificatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostTeoInstanceListOutcome SslClient::DescribeHostTeoInstanceList(const DescribeHostTeoInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostTeoInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostTeoInstanceListResponse rsp = DescribeHostTeoInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostTeoInstanceListOutcome(rsp);
        else
            return DescribeHostTeoInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostTeoInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostTeoInstanceListAsync(const DescribeHostTeoInstanceListRequest& request, const DescribeHostTeoInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostTeoInstanceListRequest&;
    using Resp = DescribeHostTeoInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostTeoInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostTeoInstanceListOutcomeCallable SslClient::DescribeHostTeoInstanceListCallable(const DescribeHostTeoInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostTeoInstanceListOutcome>>();
    DescribeHostTeoInstanceListAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostTeoInstanceListRequest&,
        DescribeHostTeoInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostUpdateRecordOutcome SslClient::DescribeHostUpdateRecord(const DescribeHostUpdateRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostUpdateRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostUpdateRecordResponse rsp = DescribeHostUpdateRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostUpdateRecordOutcome(rsp);
        else
            return DescribeHostUpdateRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeHostUpdateRecordOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostUpdateRecordAsync(const DescribeHostUpdateRecordRequest& request, const DescribeHostUpdateRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostUpdateRecordRequest&;
    using Resp = DescribeHostUpdateRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostUpdateRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostUpdateRecordOutcomeCallable SslClient::DescribeHostUpdateRecordCallable(const DescribeHostUpdateRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostUpdateRecordOutcome>>();
    DescribeHostUpdateRecordAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostUpdateRecordRequest&,
        DescribeHostUpdateRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostUpdateRecordDetailOutcome SslClient::DescribeHostUpdateRecordDetail(const DescribeHostUpdateRecordDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostUpdateRecordDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostUpdateRecordDetailResponse rsp = DescribeHostUpdateRecordDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostUpdateRecordDetailOutcome(rsp);
        else
            return DescribeHostUpdateRecordDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeHostUpdateRecordDetailOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostUpdateRecordDetailAsync(const DescribeHostUpdateRecordDetailRequest& request, const DescribeHostUpdateRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostUpdateRecordDetailRequest&;
    using Resp = DescribeHostUpdateRecordDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostUpdateRecordDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostUpdateRecordDetailOutcomeCallable SslClient::DescribeHostUpdateRecordDetailCallable(const DescribeHostUpdateRecordDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostUpdateRecordDetailOutcome>>();
    DescribeHostUpdateRecordDetailAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostUpdateRecordDetailRequest&,
        DescribeHostUpdateRecordDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostUploadUpdateRecordOutcome SslClient::DescribeHostUploadUpdateRecord(const DescribeHostUploadUpdateRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostUploadUpdateRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostUploadUpdateRecordResponse rsp = DescribeHostUploadUpdateRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostUploadUpdateRecordOutcome(rsp);
        else
            return DescribeHostUploadUpdateRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeHostUploadUpdateRecordOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostUploadUpdateRecordAsync(const DescribeHostUploadUpdateRecordRequest& request, const DescribeHostUploadUpdateRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostUploadUpdateRecordRequest&;
    using Resp = DescribeHostUploadUpdateRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostUploadUpdateRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostUploadUpdateRecordOutcomeCallable SslClient::DescribeHostUploadUpdateRecordCallable(const DescribeHostUploadUpdateRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostUploadUpdateRecordOutcome>>();
    DescribeHostUploadUpdateRecordAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostUploadUpdateRecordRequest&,
        DescribeHostUploadUpdateRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostUploadUpdateRecordDetailOutcome SslClient::DescribeHostUploadUpdateRecordDetail(const DescribeHostUploadUpdateRecordDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostUploadUpdateRecordDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostUploadUpdateRecordDetailResponse rsp = DescribeHostUploadUpdateRecordDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostUploadUpdateRecordDetailOutcome(rsp);
        else
            return DescribeHostUploadUpdateRecordDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeHostUploadUpdateRecordDetailOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostUploadUpdateRecordDetailAsync(const DescribeHostUploadUpdateRecordDetailRequest& request, const DescribeHostUploadUpdateRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostUploadUpdateRecordDetailRequest&;
    using Resp = DescribeHostUploadUpdateRecordDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostUploadUpdateRecordDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostUploadUpdateRecordDetailOutcomeCallable SslClient::DescribeHostUploadUpdateRecordDetailCallable(const DescribeHostUploadUpdateRecordDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostUploadUpdateRecordDetailOutcome>>();
    DescribeHostUploadUpdateRecordDetailAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostUploadUpdateRecordDetailRequest&,
        DescribeHostUploadUpdateRecordDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DownloadCertificateOutcome SslClient::DownloadCertificate(const DownloadCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadCertificateResponse rsp = DownloadCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadCertificateOutcome(rsp);
        else
            return DownloadCertificateOutcome(o.GetError());
    }
    else
    {
        return DownloadCertificateOutcome(outcome.GetError());
    }
}

void SslClient::DownloadCertificateAsync(const DownloadCertificateRequest& request, const DownloadCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DownloadCertificateRequest&;
    using Resp = DownloadCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DownloadCertificateOutcomeCallable SslClient::DownloadCertificateCallable(const DownloadCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadCertificateOutcome>>();
    DownloadCertificateAsync(
    request,
    [prom](
        const SslClient*,
        const DownloadCertificateRequest&,
        DownloadCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::ModifyCSROutcome SslClient::ModifyCSR(const ModifyCSRRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCSR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCSRResponse rsp = ModifyCSRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCSROutcome(rsp);
        else
            return ModifyCSROutcome(o.GetError());
    }
    else
    {
        return ModifyCSROutcome(outcome.GetError());
    }
}

void SslClient::ModifyCSRAsync(const ModifyCSRRequest& request, const ModifyCSRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCSRRequest&;
    using Resp = ModifyCSRResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCSR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::ModifyCSROutcomeCallable SslClient::ModifyCSRCallable(const ModifyCSRRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCSROutcome>>();
    ModifyCSRAsync(
    request,
    [prom](
        const SslClient*,
        const ModifyCSRRequest&,
        ModifyCSROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::ModifyCertificateAliasOutcome SslClient::ModifyCertificateAlias(const ModifyCertificateAliasRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCertificateAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCertificateAliasResponse rsp = ModifyCertificateAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCertificateAliasOutcome(rsp);
        else
            return ModifyCertificateAliasOutcome(o.GetError());
    }
    else
    {
        return ModifyCertificateAliasOutcome(outcome.GetError());
    }
}

void SslClient::ModifyCertificateAliasAsync(const ModifyCertificateAliasRequest& request, const ModifyCertificateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCertificateAliasRequest&;
    using Resp = ModifyCertificateAliasResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCertificateAlias", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::ModifyCertificateAliasOutcomeCallable SslClient::ModifyCertificateAliasCallable(const ModifyCertificateAliasRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCertificateAliasOutcome>>();
    ModifyCertificateAliasAsync(
    request,
    [prom](
        const SslClient*,
        const ModifyCertificateAliasRequest&,
        ModifyCertificateAliasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::ModifyCertificateProjectOutcome SslClient::ModifyCertificateProject(const ModifyCertificateProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCertificateProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCertificateProjectResponse rsp = ModifyCertificateProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCertificateProjectOutcome(rsp);
        else
            return ModifyCertificateProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyCertificateProjectOutcome(outcome.GetError());
    }
}

void SslClient::ModifyCertificateProjectAsync(const ModifyCertificateProjectRequest& request, const ModifyCertificateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCertificateProjectRequest&;
    using Resp = ModifyCertificateProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCertificateProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::ModifyCertificateProjectOutcomeCallable SslClient::ModifyCertificateProjectCallable(const ModifyCertificateProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCertificateProjectOutcome>>();
    ModifyCertificateProjectAsync(
    request,
    [prom](
        const SslClient*,
        const ModifyCertificateProjectRequest&,
        ModifyCertificateProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::ModifyCertificateResubmitOutcome SslClient::ModifyCertificateResubmit(const ModifyCertificateResubmitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCertificateResubmit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCertificateResubmitResponse rsp = ModifyCertificateResubmitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCertificateResubmitOutcome(rsp);
        else
            return ModifyCertificateResubmitOutcome(o.GetError());
    }
    else
    {
        return ModifyCertificateResubmitOutcome(outcome.GetError());
    }
}

void SslClient::ModifyCertificateResubmitAsync(const ModifyCertificateResubmitRequest& request, const ModifyCertificateResubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCertificateResubmitRequest&;
    using Resp = ModifyCertificateResubmitResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCertificateResubmit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::ModifyCertificateResubmitOutcomeCallable SslClient::ModifyCertificateResubmitCallable(const ModifyCertificateResubmitRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCertificateResubmitOutcome>>();
    ModifyCertificateResubmitAsync(
    request,
    [prom](
        const SslClient*,
        const ModifyCertificateResubmitRequest&,
        ModifyCertificateResubmitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::ModifyCertificatesExpiringNotificationSwitchOutcome SslClient::ModifyCertificatesExpiringNotificationSwitch(const ModifyCertificatesExpiringNotificationSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCertificatesExpiringNotificationSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCertificatesExpiringNotificationSwitchResponse rsp = ModifyCertificatesExpiringNotificationSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCertificatesExpiringNotificationSwitchOutcome(rsp);
        else
            return ModifyCertificatesExpiringNotificationSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyCertificatesExpiringNotificationSwitchOutcome(outcome.GetError());
    }
}

void SslClient::ModifyCertificatesExpiringNotificationSwitchAsync(const ModifyCertificatesExpiringNotificationSwitchRequest& request, const ModifyCertificatesExpiringNotificationSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCertificatesExpiringNotificationSwitchRequest&;
    using Resp = ModifyCertificatesExpiringNotificationSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCertificatesExpiringNotificationSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::ModifyCertificatesExpiringNotificationSwitchOutcomeCallable SslClient::ModifyCertificatesExpiringNotificationSwitchCallable(const ModifyCertificatesExpiringNotificationSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCertificatesExpiringNotificationSwitchOutcome>>();
    ModifyCertificatesExpiringNotificationSwitchAsync(
    request,
    [prom](
        const SslClient*,
        const ModifyCertificatesExpiringNotificationSwitchRequest&,
        ModifyCertificatesExpiringNotificationSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::ReplaceCertificateOutcome SslClient::ReplaceCertificate(const ReplaceCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceCertificateResponse rsp = ReplaceCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceCertificateOutcome(rsp);
        else
            return ReplaceCertificateOutcome(o.GetError());
    }
    else
    {
        return ReplaceCertificateOutcome(outcome.GetError());
    }
}

void SslClient::ReplaceCertificateAsync(const ReplaceCertificateRequest& request, const ReplaceCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReplaceCertificateRequest&;
    using Resp = ReplaceCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "ReplaceCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::ReplaceCertificateOutcomeCallable SslClient::ReplaceCertificateCallable(const ReplaceCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplaceCertificateOutcome>>();
    ReplaceCertificateAsync(
    request,
    [prom](
        const SslClient*,
        const ReplaceCertificateRequest&,
        ReplaceCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::SubmitCertificateInformationOutcome SslClient::SubmitCertificateInformation(const SubmitCertificateInformationRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitCertificateInformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitCertificateInformationResponse rsp = SubmitCertificateInformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitCertificateInformationOutcome(rsp);
        else
            return SubmitCertificateInformationOutcome(o.GetError());
    }
    else
    {
        return SubmitCertificateInformationOutcome(outcome.GetError());
    }
}

void SslClient::SubmitCertificateInformationAsync(const SubmitCertificateInformationRequest& request, const SubmitCertificateInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitCertificateInformationRequest&;
    using Resp = SubmitCertificateInformationResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitCertificateInformation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::SubmitCertificateInformationOutcomeCallable SslClient::SubmitCertificateInformationCallable(const SubmitCertificateInformationRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitCertificateInformationOutcome>>();
    SubmitCertificateInformationAsync(
    request,
    [prom](
        const SslClient*,
        const SubmitCertificateInformationRequest&,
        SubmitCertificateInformationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::UpdateCertificateInstanceOutcome SslClient::UpdateCertificateInstance(const UpdateCertificateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCertificateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCertificateInstanceResponse rsp = UpdateCertificateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCertificateInstanceOutcome(rsp);
        else
            return UpdateCertificateInstanceOutcome(o.GetError());
    }
    else
    {
        return UpdateCertificateInstanceOutcome(outcome.GetError());
    }
}

void SslClient::UpdateCertificateInstanceAsync(const UpdateCertificateInstanceRequest& request, const UpdateCertificateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCertificateInstanceRequest&;
    using Resp = UpdateCertificateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCertificateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::UpdateCertificateInstanceOutcomeCallable SslClient::UpdateCertificateInstanceCallable(const UpdateCertificateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCertificateInstanceOutcome>>();
    UpdateCertificateInstanceAsync(
    request,
    [prom](
        const SslClient*,
        const UpdateCertificateInstanceRequest&,
        UpdateCertificateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::UpdateCertificateRecordRetryOutcome SslClient::UpdateCertificateRecordRetry(const UpdateCertificateRecordRetryRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCertificateRecordRetry");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCertificateRecordRetryResponse rsp = UpdateCertificateRecordRetryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCertificateRecordRetryOutcome(rsp);
        else
            return UpdateCertificateRecordRetryOutcome(o.GetError());
    }
    else
    {
        return UpdateCertificateRecordRetryOutcome(outcome.GetError());
    }
}

void SslClient::UpdateCertificateRecordRetryAsync(const UpdateCertificateRecordRetryRequest& request, const UpdateCertificateRecordRetryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCertificateRecordRetryRequest&;
    using Resp = UpdateCertificateRecordRetryResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCertificateRecordRetry", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::UpdateCertificateRecordRetryOutcomeCallable SslClient::UpdateCertificateRecordRetryCallable(const UpdateCertificateRecordRetryRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCertificateRecordRetryOutcome>>();
    UpdateCertificateRecordRetryAsync(
    request,
    [prom](
        const SslClient*,
        const UpdateCertificateRecordRetryRequest&,
        UpdateCertificateRecordRetryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::UpdateCertificateRecordRollbackOutcome SslClient::UpdateCertificateRecordRollback(const UpdateCertificateRecordRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCertificateRecordRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCertificateRecordRollbackResponse rsp = UpdateCertificateRecordRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCertificateRecordRollbackOutcome(rsp);
        else
            return UpdateCertificateRecordRollbackOutcome(o.GetError());
    }
    else
    {
        return UpdateCertificateRecordRollbackOutcome(outcome.GetError());
    }
}

void SslClient::UpdateCertificateRecordRollbackAsync(const UpdateCertificateRecordRollbackRequest& request, const UpdateCertificateRecordRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCertificateRecordRollbackRequest&;
    using Resp = UpdateCertificateRecordRollbackResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCertificateRecordRollback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::UpdateCertificateRecordRollbackOutcomeCallable SslClient::UpdateCertificateRecordRollbackCallable(const UpdateCertificateRecordRollbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCertificateRecordRollbackOutcome>>();
    UpdateCertificateRecordRollbackAsync(
    request,
    [prom](
        const SslClient*,
        const UpdateCertificateRecordRollbackRequest&,
        UpdateCertificateRecordRollbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::UploadCertificateOutcome SslClient::UploadCertificate(const UploadCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "UploadCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadCertificateResponse rsp = UploadCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadCertificateOutcome(rsp);
        else
            return UploadCertificateOutcome(o.GetError());
    }
    else
    {
        return UploadCertificateOutcome(outcome.GetError());
    }
}

void SslClient::UploadCertificateAsync(const UploadCertificateRequest& request, const UploadCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadCertificateRequest&;
    using Resp = UploadCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "UploadCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::UploadCertificateOutcomeCallable SslClient::UploadCertificateCallable(const UploadCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadCertificateOutcome>>();
    UploadCertificateAsync(
    request,
    [prom](
        const SslClient*,
        const UploadCertificateRequest&,
        UploadCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::UploadConfirmLetterOutcome SslClient::UploadConfirmLetter(const UploadConfirmLetterRequest &request)
{
    auto outcome = MakeRequest(request, "UploadConfirmLetter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadConfirmLetterResponse rsp = UploadConfirmLetterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadConfirmLetterOutcome(rsp);
        else
            return UploadConfirmLetterOutcome(o.GetError());
    }
    else
    {
        return UploadConfirmLetterOutcome(outcome.GetError());
    }
}

void SslClient::UploadConfirmLetterAsync(const UploadConfirmLetterRequest& request, const UploadConfirmLetterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadConfirmLetterRequest&;
    using Resp = UploadConfirmLetterResponse;

    DoRequestAsync<Req, Resp>(
        "UploadConfirmLetter", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::UploadConfirmLetterOutcomeCallable SslClient::UploadConfirmLetterCallable(const UploadConfirmLetterRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadConfirmLetterOutcome>>();
    UploadConfirmLetterAsync(
    request,
    [prom](
        const SslClient*,
        const UploadConfirmLetterRequest&,
        UploadConfirmLetterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::UploadUpdateCertificateInstanceOutcome SslClient::UploadUpdateCertificateInstance(const UploadUpdateCertificateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UploadUpdateCertificateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadUpdateCertificateInstanceResponse rsp = UploadUpdateCertificateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadUpdateCertificateInstanceOutcome(rsp);
        else
            return UploadUpdateCertificateInstanceOutcome(o.GetError());
    }
    else
    {
        return UploadUpdateCertificateInstanceOutcome(outcome.GetError());
    }
}

void SslClient::UploadUpdateCertificateInstanceAsync(const UploadUpdateCertificateInstanceRequest& request, const UploadUpdateCertificateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadUpdateCertificateInstanceRequest&;
    using Resp = UploadUpdateCertificateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UploadUpdateCertificateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::UploadUpdateCertificateInstanceOutcomeCallable SslClient::UploadUpdateCertificateInstanceCallable(const UploadUpdateCertificateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadUpdateCertificateInstanceOutcome>>();
    UploadUpdateCertificateInstanceAsync(
    request,
    [prom](
        const SslClient*,
        const UploadUpdateCertificateInstanceRequest&,
        UploadUpdateCertificateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::UploadUpdateCertificateRecordRetryOutcome SslClient::UploadUpdateCertificateRecordRetry(const UploadUpdateCertificateRecordRetryRequest &request)
{
    auto outcome = MakeRequest(request, "UploadUpdateCertificateRecordRetry");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadUpdateCertificateRecordRetryResponse rsp = UploadUpdateCertificateRecordRetryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadUpdateCertificateRecordRetryOutcome(rsp);
        else
            return UploadUpdateCertificateRecordRetryOutcome(o.GetError());
    }
    else
    {
        return UploadUpdateCertificateRecordRetryOutcome(outcome.GetError());
    }
}

void SslClient::UploadUpdateCertificateRecordRetryAsync(const UploadUpdateCertificateRecordRetryRequest& request, const UploadUpdateCertificateRecordRetryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadUpdateCertificateRecordRetryRequest&;
    using Resp = UploadUpdateCertificateRecordRetryResponse;

    DoRequestAsync<Req, Resp>(
        "UploadUpdateCertificateRecordRetry", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::UploadUpdateCertificateRecordRetryOutcomeCallable SslClient::UploadUpdateCertificateRecordRetryCallable(const UploadUpdateCertificateRecordRetryRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadUpdateCertificateRecordRetryOutcome>>();
    UploadUpdateCertificateRecordRetryAsync(
    request,
    [prom](
        const SslClient*,
        const UploadUpdateCertificateRecordRetryRequest&,
        UploadUpdateCertificateRecordRetryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::UploadUpdateCertificateRecordRollbackOutcome SslClient::UploadUpdateCertificateRecordRollback(const UploadUpdateCertificateRecordRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "UploadUpdateCertificateRecordRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadUpdateCertificateRecordRollbackResponse rsp = UploadUpdateCertificateRecordRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadUpdateCertificateRecordRollbackOutcome(rsp);
        else
            return UploadUpdateCertificateRecordRollbackOutcome(o.GetError());
    }
    else
    {
        return UploadUpdateCertificateRecordRollbackOutcome(outcome.GetError());
    }
}

void SslClient::UploadUpdateCertificateRecordRollbackAsync(const UploadUpdateCertificateRecordRollbackRequest& request, const UploadUpdateCertificateRecordRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadUpdateCertificateRecordRollbackRequest&;
    using Resp = UploadUpdateCertificateRecordRollbackResponse;

    DoRequestAsync<Req, Resp>(
        "UploadUpdateCertificateRecordRollback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::UploadUpdateCertificateRecordRollbackOutcomeCallable SslClient::UploadUpdateCertificateRecordRollbackCallable(const UploadUpdateCertificateRecordRollbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadUpdateCertificateRecordRollbackOutcome>>();
    UploadUpdateCertificateRecordRollbackAsync(
    request,
    [prom](
        const SslClient*,
        const UploadUpdateCertificateRecordRollbackRequest&,
        UploadUpdateCertificateRecordRollbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

