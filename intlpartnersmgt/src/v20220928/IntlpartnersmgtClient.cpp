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

#include <tencentcloud/intlpartnersmgt/v20220928/IntlpartnersmgtClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Intlpartnersmgt::V20220928;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-09-28";
    const string ENDPOINT = "intlpartnersmgt.intl.tencentcloudapi.com";
}

IntlpartnersmgtClient::IntlpartnersmgtClient(const Credential &credential, const string &region) :
    IntlpartnersmgtClient(credential, region, ClientProfile())
{
}

IntlpartnersmgtClient::IntlpartnersmgtClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IntlpartnersmgtClient::AllocateCreditPoolOutcome IntlpartnersmgtClient::AllocateCreditPool(const AllocateCreditPoolRequest &request)
{
    auto outcome = MakeRequest(request, "AllocateCreditPool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AllocateCreditPoolResponse rsp = AllocateCreditPoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AllocateCreditPoolOutcome(rsp);
        else
            return AllocateCreditPoolOutcome(o.GetError());
    }
    else
    {
        return AllocateCreditPoolOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::AllocateCreditPoolAsync(const AllocateCreditPoolRequest& request, const AllocateCreditPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AllocateCreditPoolRequest&;
    using Resp = AllocateCreditPoolResponse;

    DoRequestAsync<Req, Resp>(
        "AllocateCreditPool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::AllocateCreditPoolOutcomeCallable IntlpartnersmgtClient::AllocateCreditPoolCallable(const AllocateCreditPoolRequest &request)
{
    const auto prom = std::make_shared<std::promise<AllocateCreditPoolOutcome>>();
    AllocateCreditPoolAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const AllocateCreditPoolRequest&,
        AllocateCreditPoolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::AllocateCustomerCreditOutcome IntlpartnersmgtClient::AllocateCustomerCredit(const AllocateCustomerCreditRequest &request)
{
    auto outcome = MakeRequest(request, "AllocateCustomerCredit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AllocateCustomerCreditResponse rsp = AllocateCustomerCreditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AllocateCustomerCreditOutcome(rsp);
        else
            return AllocateCustomerCreditOutcome(o.GetError());
    }
    else
    {
        return AllocateCustomerCreditOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::AllocateCustomerCreditAsync(const AllocateCustomerCreditRequest& request, const AllocateCustomerCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AllocateCustomerCreditRequest&;
    using Resp = AllocateCustomerCreditResponse;

    DoRequestAsync<Req, Resp>(
        "AllocateCustomerCredit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::AllocateCustomerCreditOutcomeCallable IntlpartnersmgtClient::AllocateCustomerCreditCallable(const AllocateCustomerCreditRequest &request)
{
    const auto prom = std::make_shared<std::promise<AllocateCustomerCreditOutcome>>();
    AllocateCustomerCreditAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const AllocateCustomerCreditRequest&,
        AllocateCustomerCreditOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::ApproveClientApplyOutcome IntlpartnersmgtClient::ApproveClientApply(const ApproveClientApplyRequest &request)
{
    auto outcome = MakeRequest(request, "ApproveClientApply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApproveClientApplyResponse rsp = ApproveClientApplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApproveClientApplyOutcome(rsp);
        else
            return ApproveClientApplyOutcome(o.GetError());
    }
    else
    {
        return ApproveClientApplyOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::ApproveClientApplyAsync(const ApproveClientApplyRequest& request, const ApproveClientApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApproveClientApplyRequest&;
    using Resp = ApproveClientApplyResponse;

    DoRequestAsync<Req, Resp>(
        "ApproveClientApply", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::ApproveClientApplyOutcomeCallable IntlpartnersmgtClient::ApproveClientApplyCallable(const ApproveClientApplyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApproveClientApplyOutcome>>();
    ApproveClientApplyAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const ApproveClientApplyRequest&,
        ApproveClientApplyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::ApproveSubAgentApplyOutcome IntlpartnersmgtClient::ApproveSubAgentApply(const ApproveSubAgentApplyRequest &request)
{
    auto outcome = MakeRequest(request, "ApproveSubAgentApply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApproveSubAgentApplyResponse rsp = ApproveSubAgentApplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApproveSubAgentApplyOutcome(rsp);
        else
            return ApproveSubAgentApplyOutcome(o.GetError());
    }
    else
    {
        return ApproveSubAgentApplyOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::ApproveSubAgentApplyAsync(const ApproveSubAgentApplyRequest& request, const ApproveSubAgentApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApproveSubAgentApplyRequest&;
    using Resp = ApproveSubAgentApplyResponse;

    DoRequestAsync<Req, Resp>(
        "ApproveSubAgentApply", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::ApproveSubAgentApplyOutcomeCallable IntlpartnersmgtClient::ApproveSubAgentApplyCallable(const ApproveSubAgentApplyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApproveSubAgentApplyOutcome>>();
    ApproveSubAgentApplyAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const ApproveSubAgentApplyRequest&,
        ApproveSubAgentApplyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::CreateAccountOutcome IntlpartnersmgtClient::CreateAccount(const CreateAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccountResponse rsp = CreateAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccountOutcome(rsp);
        else
            return CreateAccountOutcome(o.GetError());
    }
    else
    {
        return CreateAccountOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::CreateAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAccountRequest&;
    using Resp = CreateAccountResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::CreateAccountOutcomeCallable IntlpartnersmgtClient::CreateAccountCallable(const CreateAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAccountOutcome>>();
    CreateAccountAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const CreateAccountRequest&,
        CreateAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::CreateAndSendClientInvitationMailOutcome IntlpartnersmgtClient::CreateAndSendClientInvitationMail(const CreateAndSendClientInvitationMailRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndSendClientInvitationMail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndSendClientInvitationMailResponse rsp = CreateAndSendClientInvitationMailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndSendClientInvitationMailOutcome(rsp);
        else
            return CreateAndSendClientInvitationMailOutcome(o.GetError());
    }
    else
    {
        return CreateAndSendClientInvitationMailOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::CreateAndSendClientInvitationMailAsync(const CreateAndSendClientInvitationMailRequest& request, const CreateAndSendClientInvitationMailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAndSendClientInvitationMailRequest&;
    using Resp = CreateAndSendClientInvitationMailResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAndSendClientInvitationMail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::CreateAndSendClientInvitationMailOutcomeCallable IntlpartnersmgtClient::CreateAndSendClientInvitationMailCallable(const CreateAndSendClientInvitationMailRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAndSendClientInvitationMailOutcome>>();
    CreateAndSendClientInvitationMailAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const CreateAndSendClientInvitationMailRequest&,
        CreateAndSendClientInvitationMailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::DescribeBillDetailOutcome IntlpartnersmgtClient::DescribeBillDetail(const DescribeBillDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillDetailResponse rsp = DescribeBillDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillDetailOutcome(rsp);
        else
            return DescribeBillDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBillDetailOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeBillDetailAsync(const DescribeBillDetailRequest& request, const DescribeBillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillDetailRequest&;
    using Resp = DescribeBillDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::DescribeBillDetailOutcomeCallable IntlpartnersmgtClient::DescribeBillDetailCallable(const DescribeBillDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillDetailOutcome>>();
    DescribeBillDetailAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const DescribeBillDetailRequest&,
        DescribeBillDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::DescribeBillDownloadUrlOutcome IntlpartnersmgtClient::DescribeBillDownloadUrl(const DescribeBillDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillDownloadUrlResponse rsp = DescribeBillDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillDownloadUrlOutcome(rsp);
        else
            return DescribeBillDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeBillDownloadUrlOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeBillDownloadUrlAsync(const DescribeBillDownloadUrlRequest& request, const DescribeBillDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillDownloadUrlRequest&;
    using Resp = DescribeBillDownloadUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillDownloadUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::DescribeBillDownloadUrlOutcomeCallable IntlpartnersmgtClient::DescribeBillDownloadUrlCallable(const DescribeBillDownloadUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillDownloadUrlOutcome>>();
    DescribeBillDownloadUrlAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const DescribeBillDownloadUrlRequest&,
        DescribeBillDownloadUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::DescribeBillSummaryOutcome IntlpartnersmgtClient::DescribeBillSummary(const DescribeBillSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryResponse rsp = DescribeBillSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryOutcome(rsp);
        else
            return DescribeBillSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeBillSummaryAsync(const DescribeBillSummaryRequest& request, const DescribeBillSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillSummaryRequest&;
    using Resp = DescribeBillSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::DescribeBillSummaryOutcomeCallable IntlpartnersmgtClient::DescribeBillSummaryCallable(const DescribeBillSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillSummaryOutcome>>();
    DescribeBillSummaryAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const DescribeBillSummaryRequest&,
        DescribeBillSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::DescribeBillSummaryByPayModeOutcome IntlpartnersmgtClient::DescribeBillSummaryByPayMode(const DescribeBillSummaryByPayModeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryByPayMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryByPayModeResponse rsp = DescribeBillSummaryByPayModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryByPayModeOutcome(rsp);
        else
            return DescribeBillSummaryByPayModeOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryByPayModeOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeBillSummaryByPayModeAsync(const DescribeBillSummaryByPayModeRequest& request, const DescribeBillSummaryByPayModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillSummaryByPayModeRequest&;
    using Resp = DescribeBillSummaryByPayModeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillSummaryByPayMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::DescribeBillSummaryByPayModeOutcomeCallable IntlpartnersmgtClient::DescribeBillSummaryByPayModeCallable(const DescribeBillSummaryByPayModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillSummaryByPayModeOutcome>>();
    DescribeBillSummaryByPayModeAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const DescribeBillSummaryByPayModeRequest&,
        DescribeBillSummaryByPayModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::DescribeBillSummaryByProductOutcome IntlpartnersmgtClient::DescribeBillSummaryByProduct(const DescribeBillSummaryByProductRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryByProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryByProductResponse rsp = DescribeBillSummaryByProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryByProductOutcome(rsp);
        else
            return DescribeBillSummaryByProductOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryByProductOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeBillSummaryByProductAsync(const DescribeBillSummaryByProductRequest& request, const DescribeBillSummaryByProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillSummaryByProductRequest&;
    using Resp = DescribeBillSummaryByProductResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillSummaryByProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::DescribeBillSummaryByProductOutcomeCallable IntlpartnersmgtClient::DescribeBillSummaryByProductCallable(const DescribeBillSummaryByProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillSummaryByProductOutcome>>();
    DescribeBillSummaryByProductAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const DescribeBillSummaryByProductRequest&,
        DescribeBillSummaryByProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::DescribeBillSummaryByRegionOutcome IntlpartnersmgtClient::DescribeBillSummaryByRegion(const DescribeBillSummaryByRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillSummaryByRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillSummaryByRegionResponse rsp = DescribeBillSummaryByRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillSummaryByRegionOutcome(rsp);
        else
            return DescribeBillSummaryByRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeBillSummaryByRegionOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeBillSummaryByRegionAsync(const DescribeBillSummaryByRegionRequest& request, const DescribeBillSummaryByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillSummaryByRegionRequest&;
    using Resp = DescribeBillSummaryByRegionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillSummaryByRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::DescribeBillSummaryByRegionOutcomeCallable IntlpartnersmgtClient::DescribeBillSummaryByRegionCallable(const DescribeBillSummaryByRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillSummaryByRegionOutcome>>();
    DescribeBillSummaryByRegionAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const DescribeBillSummaryByRegionRequest&,
        DescribeBillSummaryByRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::DescribeCustomerBillDetailOutcome IntlpartnersmgtClient::DescribeCustomerBillDetail(const DescribeCustomerBillDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerBillDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerBillDetailResponse rsp = DescribeCustomerBillDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerBillDetailOutcome(rsp);
        else
            return DescribeCustomerBillDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerBillDetailOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeCustomerBillDetailAsync(const DescribeCustomerBillDetailRequest& request, const DescribeCustomerBillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomerBillDetailRequest&;
    using Resp = DescribeCustomerBillDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomerBillDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::DescribeCustomerBillDetailOutcomeCallable IntlpartnersmgtClient::DescribeCustomerBillDetailCallable(const DescribeCustomerBillDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomerBillDetailOutcome>>();
    DescribeCustomerBillDetailAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const DescribeCustomerBillDetailRequest&,
        DescribeCustomerBillDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::DescribeCustomerBillDetailByDayOutcome IntlpartnersmgtClient::DescribeCustomerBillDetailByDay(const DescribeCustomerBillDetailByDayRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerBillDetailByDay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerBillDetailByDayResponse rsp = DescribeCustomerBillDetailByDayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerBillDetailByDayOutcome(rsp);
        else
            return DescribeCustomerBillDetailByDayOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerBillDetailByDayOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeCustomerBillDetailByDayAsync(const DescribeCustomerBillDetailByDayRequest& request, const DescribeCustomerBillDetailByDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomerBillDetailByDayRequest&;
    using Resp = DescribeCustomerBillDetailByDayResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomerBillDetailByDay", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::DescribeCustomerBillDetailByDayOutcomeCallable IntlpartnersmgtClient::DescribeCustomerBillDetailByDayCallable(const DescribeCustomerBillDetailByDayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomerBillDetailByDayOutcome>>();
    DescribeCustomerBillDetailByDayAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const DescribeCustomerBillDetailByDayRequest&,
        DescribeCustomerBillDetailByDayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::DescribeCustomerBillDownloadUrlOutcome IntlpartnersmgtClient::DescribeCustomerBillDownloadUrl(const DescribeCustomerBillDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerBillDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerBillDownloadUrlResponse rsp = DescribeCustomerBillDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerBillDownloadUrlOutcome(rsp);
        else
            return DescribeCustomerBillDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerBillDownloadUrlOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeCustomerBillDownloadUrlAsync(const DescribeCustomerBillDownloadUrlRequest& request, const DescribeCustomerBillDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomerBillDownloadUrlRequest&;
    using Resp = DescribeCustomerBillDownloadUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomerBillDownloadUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::DescribeCustomerBillDownloadUrlOutcomeCallable IntlpartnersmgtClient::DescribeCustomerBillDownloadUrlCallable(const DescribeCustomerBillDownloadUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomerBillDownloadUrlOutcome>>();
    DescribeCustomerBillDownloadUrlAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const DescribeCustomerBillDownloadUrlRequest&,
        DescribeCustomerBillDownloadUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::DescribeCustomerBillSummaryOutcome IntlpartnersmgtClient::DescribeCustomerBillSummary(const DescribeCustomerBillSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerBillSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerBillSummaryResponse rsp = DescribeCustomerBillSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerBillSummaryOutcome(rsp);
        else
            return DescribeCustomerBillSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerBillSummaryOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeCustomerBillSummaryAsync(const DescribeCustomerBillSummaryRequest& request, const DescribeCustomerBillSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomerBillSummaryRequest&;
    using Resp = DescribeCustomerBillSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomerBillSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::DescribeCustomerBillSummaryOutcomeCallable IntlpartnersmgtClient::DescribeCustomerBillSummaryCallable(const DescribeCustomerBillSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomerBillSummaryOutcome>>();
    DescribeCustomerBillSummaryAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const DescribeCustomerBillSummaryRequest&,
        DescribeCustomerBillSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::DescribeCustomerInfoOutcome IntlpartnersmgtClient::DescribeCustomerInfo(const DescribeCustomerInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerInfoResponse rsp = DescribeCustomerInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerInfoOutcome(rsp);
        else
            return DescribeCustomerInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerInfoOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeCustomerInfoAsync(const DescribeCustomerInfoRequest& request, const DescribeCustomerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomerInfoRequest&;
    using Resp = DescribeCustomerInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomerInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::DescribeCustomerInfoOutcomeCallable IntlpartnersmgtClient::DescribeCustomerInfoCallable(const DescribeCustomerInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomerInfoOutcome>>();
    DescribeCustomerInfoAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const DescribeCustomerInfoRequest&,
        DescribeCustomerInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::DescribeCustomerOwnVoucherListOutcome IntlpartnersmgtClient::DescribeCustomerOwnVoucherList(const DescribeCustomerOwnVoucherListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerOwnVoucherList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerOwnVoucherListResponse rsp = DescribeCustomerOwnVoucherListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerOwnVoucherListOutcome(rsp);
        else
            return DescribeCustomerOwnVoucherListOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerOwnVoucherListOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeCustomerOwnVoucherListAsync(const DescribeCustomerOwnVoucherListRequest& request, const DescribeCustomerOwnVoucherListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomerOwnVoucherListRequest&;
    using Resp = DescribeCustomerOwnVoucherListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomerOwnVoucherList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::DescribeCustomerOwnVoucherListOutcomeCallable IntlpartnersmgtClient::DescribeCustomerOwnVoucherListCallable(const DescribeCustomerOwnVoucherListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomerOwnVoucherListOutcome>>();
    DescribeCustomerOwnVoucherListAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const DescribeCustomerOwnVoucherListRequest&,
        DescribeCustomerOwnVoucherListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::DescribeCustomerUinOutcome IntlpartnersmgtClient::DescribeCustomerUin(const DescribeCustomerUinRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerUin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerUinResponse rsp = DescribeCustomerUinResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerUinOutcome(rsp);
        else
            return DescribeCustomerUinOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerUinOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeCustomerUinAsync(const DescribeCustomerUinRequest& request, const DescribeCustomerUinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomerUinRequest&;
    using Resp = DescribeCustomerUinResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomerUin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::DescribeCustomerUinOutcomeCallable IntlpartnersmgtClient::DescribeCustomerUinCallable(const DescribeCustomerUinRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomerUinOutcome>>();
    DescribeCustomerUinAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const DescribeCustomerUinRequest&,
        DescribeCustomerUinOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::DescribeCustomerVoucherListOutcome IntlpartnersmgtClient::DescribeCustomerVoucherList(const DescribeCustomerVoucherListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerVoucherList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerVoucherListResponse rsp = DescribeCustomerVoucherListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerVoucherListOutcome(rsp);
        else
            return DescribeCustomerVoucherListOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerVoucherListOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeCustomerVoucherListAsync(const DescribeCustomerVoucherListRequest& request, const DescribeCustomerVoucherListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomerVoucherListRequest&;
    using Resp = DescribeCustomerVoucherListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomerVoucherList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::DescribeCustomerVoucherListOutcomeCallable IntlpartnersmgtClient::DescribeCustomerVoucherListCallable(const DescribeCustomerVoucherListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomerVoucherListOutcome>>();
    DescribeCustomerVoucherListAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const DescribeCustomerVoucherListRequest&,
        DescribeCustomerVoucherListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::DescribeRebateDownloadUrlOutcome IntlpartnersmgtClient::DescribeRebateDownloadUrl(const DescribeRebateDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRebateDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRebateDownloadUrlResponse rsp = DescribeRebateDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRebateDownloadUrlOutcome(rsp);
        else
            return DescribeRebateDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeRebateDownloadUrlOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::DescribeRebateDownloadUrlAsync(const DescribeRebateDownloadUrlRequest& request, const DescribeRebateDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRebateDownloadUrlRequest&;
    using Resp = DescribeRebateDownloadUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRebateDownloadUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::DescribeRebateDownloadUrlOutcomeCallable IntlpartnersmgtClient::DescribeRebateDownloadUrlCallable(const DescribeRebateDownloadUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRebateDownloadUrlOutcome>>();
    DescribeRebateDownloadUrlAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const DescribeRebateDownloadUrlRequest&,
        DescribeRebateDownloadUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::ForceQNOutcome IntlpartnersmgtClient::ForceQN(const ForceQNRequest &request)
{
    auto outcome = MakeRequest(request, "ForceQN");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ForceQNResponse rsp = ForceQNResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ForceQNOutcome(rsp);
        else
            return ForceQNOutcome(o.GetError());
    }
    else
    {
        return ForceQNOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::ForceQNAsync(const ForceQNRequest& request, const ForceQNAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ForceQNRequest&;
    using Resp = ForceQNResponse;

    DoRequestAsync<Req, Resp>(
        "ForceQN", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::ForceQNOutcomeCallable IntlpartnersmgtClient::ForceQNCallable(const ForceQNRequest &request)
{
    const auto prom = std::make_shared<std::promise<ForceQNOutcome>>();
    ForceQNAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const ForceQNRequest&,
        ForceQNOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::GetCountryCodesOutcome IntlpartnersmgtClient::GetCountryCodes(const GetCountryCodesRequest &request)
{
    auto outcome = MakeRequest(request, "GetCountryCodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCountryCodesResponse rsp = GetCountryCodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCountryCodesOutcome(rsp);
        else
            return GetCountryCodesOutcome(o.GetError());
    }
    else
    {
        return GetCountryCodesOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::GetCountryCodesAsync(const GetCountryCodesRequest& request, const GetCountryCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCountryCodesRequest&;
    using Resp = GetCountryCodesResponse;

    DoRequestAsync<Req, Resp>(
        "GetCountryCodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::GetCountryCodesOutcomeCallable IntlpartnersmgtClient::GetCountryCodesCallable(const GetCountryCodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCountryCodesOutcome>>();
    GetCountryCodesAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const GetCountryCodesRequest&,
        GetCountryCodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::GetTradeConfigListOutcome IntlpartnersmgtClient::GetTradeConfigList(const GetTradeConfigListRequest &request)
{
    auto outcome = MakeRequest(request, "GetTradeConfigList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTradeConfigListResponse rsp = GetTradeConfigListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTradeConfigListOutcome(rsp);
        else
            return GetTradeConfigListOutcome(o.GetError());
    }
    else
    {
        return GetTradeConfigListOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::GetTradeConfigListAsync(const GetTradeConfigListRequest& request, const GetTradeConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTradeConfigListRequest&;
    using Resp = GetTradeConfigListResponse;

    DoRequestAsync<Req, Resp>(
        "GetTradeConfigList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::GetTradeConfigListOutcomeCallable IntlpartnersmgtClient::GetTradeConfigListCallable(const GetTradeConfigListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTradeConfigListOutcome>>();
    GetTradeConfigListAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const GetTradeConfigListRequest&,
        GetTradeConfigListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::ModifyClientRemarkOutcome IntlpartnersmgtClient::ModifyClientRemark(const ModifyClientRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClientRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClientRemarkResponse rsp = ModifyClientRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClientRemarkOutcome(rsp);
        else
            return ModifyClientRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyClientRemarkOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::ModifyClientRemarkAsync(const ModifyClientRemarkRequest& request, const ModifyClientRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClientRemarkRequest&;
    using Resp = ModifyClientRemarkResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClientRemark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::ModifyClientRemarkOutcomeCallable IntlpartnersmgtClient::ModifyClientRemarkCallable(const ModifyClientRemarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClientRemarkOutcome>>();
    ModifyClientRemarkAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const ModifyClientRemarkRequest&,
        ModifyClientRemarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::QueryAccountVerificationStatusOutcome IntlpartnersmgtClient::QueryAccountVerificationStatus(const QueryAccountVerificationStatusRequest &request)
{
    auto outcome = MakeRequest(request, "QueryAccountVerificationStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryAccountVerificationStatusResponse rsp = QueryAccountVerificationStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryAccountVerificationStatusOutcome(rsp);
        else
            return QueryAccountVerificationStatusOutcome(o.GetError());
    }
    else
    {
        return QueryAccountVerificationStatusOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryAccountVerificationStatusAsync(const QueryAccountVerificationStatusRequest& request, const QueryAccountVerificationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryAccountVerificationStatusRequest&;
    using Resp = QueryAccountVerificationStatusResponse;

    DoRequestAsync<Req, Resp>(
        "QueryAccountVerificationStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::QueryAccountVerificationStatusOutcomeCallable IntlpartnersmgtClient::QueryAccountVerificationStatusCallable(const QueryAccountVerificationStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryAccountVerificationStatusOutcome>>();
    QueryAccountVerificationStatusAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const QueryAccountVerificationStatusRequest&,
        QueryAccountVerificationStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::QueryCreditAllocationHistoryOutcome IntlpartnersmgtClient::QueryCreditAllocationHistory(const QueryCreditAllocationHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCreditAllocationHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCreditAllocationHistoryResponse rsp = QueryCreditAllocationHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCreditAllocationHistoryOutcome(rsp);
        else
            return QueryCreditAllocationHistoryOutcome(o.GetError());
    }
    else
    {
        return QueryCreditAllocationHistoryOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryCreditAllocationHistoryAsync(const QueryCreditAllocationHistoryRequest& request, const QueryCreditAllocationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryCreditAllocationHistoryRequest&;
    using Resp = QueryCreditAllocationHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "QueryCreditAllocationHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::QueryCreditAllocationHistoryOutcomeCallable IntlpartnersmgtClient::QueryCreditAllocationHistoryCallable(const QueryCreditAllocationHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryCreditAllocationHistoryOutcome>>();
    QueryCreditAllocationHistoryAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const QueryCreditAllocationHistoryRequest&,
        QueryCreditAllocationHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::QueryCreditByUinListOutcome IntlpartnersmgtClient::QueryCreditByUinList(const QueryCreditByUinListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCreditByUinList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCreditByUinListResponse rsp = QueryCreditByUinListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCreditByUinListOutcome(rsp);
        else
            return QueryCreditByUinListOutcome(o.GetError());
    }
    else
    {
        return QueryCreditByUinListOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryCreditByUinListAsync(const QueryCreditByUinListRequest& request, const QueryCreditByUinListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryCreditByUinListRequest&;
    using Resp = QueryCreditByUinListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryCreditByUinList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::QueryCreditByUinListOutcomeCallable IntlpartnersmgtClient::QueryCreditByUinListCallable(const QueryCreditByUinListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryCreditByUinListOutcome>>();
    QueryCreditByUinListAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const QueryCreditByUinListRequest&,
        QueryCreditByUinListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::QueryCustomerBillingQuotaOutcome IntlpartnersmgtClient::QueryCustomerBillingQuota(const QueryCustomerBillingQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCustomerBillingQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCustomerBillingQuotaResponse rsp = QueryCustomerBillingQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCustomerBillingQuotaOutcome(rsp);
        else
            return QueryCustomerBillingQuotaOutcome(o.GetError());
    }
    else
    {
        return QueryCustomerBillingQuotaOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryCustomerBillingQuotaAsync(const QueryCustomerBillingQuotaRequest& request, const QueryCustomerBillingQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryCustomerBillingQuotaRequest&;
    using Resp = QueryCustomerBillingQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "QueryCustomerBillingQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::QueryCustomerBillingQuotaOutcomeCallable IntlpartnersmgtClient::QueryCustomerBillingQuotaCallable(const QueryCustomerBillingQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryCustomerBillingQuotaOutcome>>();
    QueryCustomerBillingQuotaAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const QueryCustomerBillingQuotaRequest&,
        QueryCustomerBillingQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::QueryCustomersCreditOutcome IntlpartnersmgtClient::QueryCustomersCredit(const QueryCustomersCreditRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCustomersCredit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCustomersCreditResponse rsp = QueryCustomersCreditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCustomersCreditOutcome(rsp);
        else
            return QueryCustomersCreditOutcome(o.GetError());
    }
    else
    {
        return QueryCustomersCreditOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryCustomersCreditAsync(const QueryCustomersCreditRequest& request, const QueryCustomersCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryCustomersCreditRequest&;
    using Resp = QueryCustomersCreditResponse;

    DoRequestAsync<Req, Resp>(
        "QueryCustomersCredit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::QueryCustomersCreditOutcomeCallable IntlpartnersmgtClient::QueryCustomersCreditCallable(const QueryCustomersCreditRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryCustomersCreditOutcome>>();
    QueryCustomersCreditAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const QueryCustomersCreditRequest&,
        QueryCustomersCreditOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::QueryDirectCustomersCreditOutcome IntlpartnersmgtClient::QueryDirectCustomersCredit(const QueryDirectCustomersCreditRequest &request)
{
    auto outcome = MakeRequest(request, "QueryDirectCustomersCredit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryDirectCustomersCreditResponse rsp = QueryDirectCustomersCreditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryDirectCustomersCreditOutcome(rsp);
        else
            return QueryDirectCustomersCreditOutcome(o.GetError());
    }
    else
    {
        return QueryDirectCustomersCreditOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryDirectCustomersCreditAsync(const QueryDirectCustomersCreditRequest& request, const QueryDirectCustomersCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryDirectCustomersCreditRequest&;
    using Resp = QueryDirectCustomersCreditResponse;

    DoRequestAsync<Req, Resp>(
        "QueryDirectCustomersCredit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::QueryDirectCustomersCreditOutcomeCallable IntlpartnersmgtClient::QueryDirectCustomersCreditCallable(const QueryDirectCustomersCreditRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryDirectCustomersCreditOutcome>>();
    QueryDirectCustomersCreditAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const QueryDirectCustomersCreditRequest&,
        QueryDirectCustomersCreditOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::QueryInvitationInfoOutcome IntlpartnersmgtClient::QueryInvitationInfo(const QueryInvitationInfoRequest &request)
{
    auto outcome = MakeRequest(request, "QueryInvitationInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryInvitationInfoResponse rsp = QueryInvitationInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryInvitationInfoOutcome(rsp);
        else
            return QueryInvitationInfoOutcome(o.GetError());
    }
    else
    {
        return QueryInvitationInfoOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryInvitationInfoAsync(const QueryInvitationInfoRequest& request, const QueryInvitationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryInvitationInfoRequest&;
    using Resp = QueryInvitationInfoResponse;

    DoRequestAsync<Req, Resp>(
        "QueryInvitationInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::QueryInvitationInfoOutcomeCallable IntlpartnersmgtClient::QueryInvitationInfoCallable(const QueryInvitationInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryInvitationInfoOutcome>>();
    QueryInvitationInfoAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const QueryInvitationInfoRequest&,
        QueryInvitationInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::QueryPartnerCreditOutcome IntlpartnersmgtClient::QueryPartnerCredit(const QueryPartnerCreditRequest &request)
{
    auto outcome = MakeRequest(request, "QueryPartnerCredit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryPartnerCreditResponse rsp = QueryPartnerCreditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryPartnerCreditOutcome(rsp);
        else
            return QueryPartnerCreditOutcome(o.GetError());
    }
    else
    {
        return QueryPartnerCreditOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryPartnerCreditAsync(const QueryPartnerCreditRequest& request, const QueryPartnerCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryPartnerCreditRequest&;
    using Resp = QueryPartnerCreditResponse;

    DoRequestAsync<Req, Resp>(
        "QueryPartnerCredit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::QueryPartnerCreditOutcomeCallable IntlpartnersmgtClient::QueryPartnerCreditCallable(const QueryPartnerCreditRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryPartnerCreditOutcome>>();
    QueryPartnerCreditAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const QueryPartnerCreditRequest&,
        QueryPartnerCreditOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::QueryPendingClientsV2Outcome IntlpartnersmgtClient::QueryPendingClientsV2(const QueryPendingClientsV2Request &request)
{
    auto outcome = MakeRequest(request, "QueryPendingClientsV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryPendingClientsV2Response rsp = QueryPendingClientsV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryPendingClientsV2Outcome(rsp);
        else
            return QueryPendingClientsV2Outcome(o.GetError());
    }
    else
    {
        return QueryPendingClientsV2Outcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryPendingClientsV2Async(const QueryPendingClientsV2Request& request, const QueryPendingClientsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryPendingClientsV2Request&;
    using Resp = QueryPendingClientsV2Response;

    DoRequestAsync<Req, Resp>(
        "QueryPendingClientsV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::QueryPendingClientsV2OutcomeCallable IntlpartnersmgtClient::QueryPendingClientsV2Callable(const QueryPendingClientsV2Request &request)
{
    const auto prom = std::make_shared<std::promise<QueryPendingClientsV2Outcome>>();
    QueryPendingClientsV2Async(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const QueryPendingClientsV2Request&,
        QueryPendingClientsV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::QueryPendingSubAgentsV2Outcome IntlpartnersmgtClient::QueryPendingSubAgentsV2(const QueryPendingSubAgentsV2Request &request)
{
    auto outcome = MakeRequest(request, "QueryPendingSubAgentsV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryPendingSubAgentsV2Response rsp = QueryPendingSubAgentsV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryPendingSubAgentsV2Outcome(rsp);
        else
            return QueryPendingSubAgentsV2Outcome(o.GetError());
    }
    else
    {
        return QueryPendingSubAgentsV2Outcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryPendingSubAgentsV2Async(const QueryPendingSubAgentsV2Request& request, const QueryPendingSubAgentsV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryPendingSubAgentsV2Request&;
    using Resp = QueryPendingSubAgentsV2Response;

    DoRequestAsync<Req, Resp>(
        "QueryPendingSubAgentsV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::QueryPendingSubAgentsV2OutcomeCallable IntlpartnersmgtClient::QueryPendingSubAgentsV2Callable(const QueryPendingSubAgentsV2Request &request)
{
    const auto prom = std::make_shared<std::promise<QueryPendingSubAgentsV2Outcome>>();
    QueryPendingSubAgentsV2Async(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const QueryPendingSubAgentsV2Request&,
        QueryPendingSubAgentsV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::QueryPolicyProductListByCodeOutcome IntlpartnersmgtClient::QueryPolicyProductListByCode(const QueryPolicyProductListByCodeRequest &request)
{
    auto outcome = MakeRequest(request, "QueryPolicyProductListByCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryPolicyProductListByCodeResponse rsp = QueryPolicyProductListByCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryPolicyProductListByCodeOutcome(rsp);
        else
            return QueryPolicyProductListByCodeOutcome(o.GetError());
    }
    else
    {
        return QueryPolicyProductListByCodeOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryPolicyProductListByCodeAsync(const QueryPolicyProductListByCodeRequest& request, const QueryPolicyProductListByCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryPolicyProductListByCodeRequest&;
    using Resp = QueryPolicyProductListByCodeResponse;

    DoRequestAsync<Req, Resp>(
        "QueryPolicyProductListByCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::QueryPolicyProductListByCodeOutcomeCallable IntlpartnersmgtClient::QueryPolicyProductListByCodeCallable(const QueryPolicyProductListByCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryPolicyProductListByCodeOutcome>>();
    QueryPolicyProductListByCodeAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const QueryPolicyProductListByCodeRequest&,
        QueryPolicyProductListByCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::QuerySubAgentsDetailV2Outcome IntlpartnersmgtClient::QuerySubAgentsDetailV2(const QuerySubAgentsDetailV2Request &request)
{
    auto outcome = MakeRequest(request, "QuerySubAgentsDetailV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QuerySubAgentsDetailV2Response rsp = QuerySubAgentsDetailV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QuerySubAgentsDetailV2Outcome(rsp);
        else
            return QuerySubAgentsDetailV2Outcome(o.GetError());
    }
    else
    {
        return QuerySubAgentsDetailV2Outcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QuerySubAgentsDetailV2Async(const QuerySubAgentsDetailV2Request& request, const QuerySubAgentsDetailV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QuerySubAgentsDetailV2Request&;
    using Resp = QuerySubAgentsDetailV2Response;

    DoRequestAsync<Req, Resp>(
        "QuerySubAgentsDetailV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::QuerySubAgentsDetailV2OutcomeCallable IntlpartnersmgtClient::QuerySubAgentsDetailV2Callable(const QuerySubAgentsDetailV2Request &request)
{
    const auto prom = std::make_shared<std::promise<QuerySubAgentsDetailV2Outcome>>();
    QuerySubAgentsDetailV2Async(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const QuerySubAgentsDetailV2Request&,
        QuerySubAgentsDetailV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::QueryT1IndirectCustomersDetailOutcome IntlpartnersmgtClient::QueryT1IndirectCustomersDetail(const QueryT1IndirectCustomersDetailRequest &request)
{
    auto outcome = MakeRequest(request, "QueryT1IndirectCustomersDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryT1IndirectCustomersDetailResponse rsp = QueryT1IndirectCustomersDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryT1IndirectCustomersDetailOutcome(rsp);
        else
            return QueryT1IndirectCustomersDetailOutcome(o.GetError());
    }
    else
    {
        return QueryT1IndirectCustomersDetailOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryT1IndirectCustomersDetailAsync(const QueryT1IndirectCustomersDetailRequest& request, const QueryT1IndirectCustomersDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryT1IndirectCustomersDetailRequest&;
    using Resp = QueryT1IndirectCustomersDetailResponse;

    DoRequestAsync<Req, Resp>(
        "QueryT1IndirectCustomersDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::QueryT1IndirectCustomersDetailOutcomeCallable IntlpartnersmgtClient::QueryT1IndirectCustomersDetailCallable(const QueryT1IndirectCustomersDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryT1IndirectCustomersDetailOutcome>>();
    QueryT1IndirectCustomersDetailAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const QueryT1IndirectCustomersDetailRequest&,
        QueryT1IndirectCustomersDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::QueryVoucherAmountByUinOutcome IntlpartnersmgtClient::QueryVoucherAmountByUin(const QueryVoucherAmountByUinRequest &request)
{
    auto outcome = MakeRequest(request, "QueryVoucherAmountByUin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryVoucherAmountByUinResponse rsp = QueryVoucherAmountByUinResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryVoucherAmountByUinOutcome(rsp);
        else
            return QueryVoucherAmountByUinOutcome(o.GetError());
    }
    else
    {
        return QueryVoucherAmountByUinOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryVoucherAmountByUinAsync(const QueryVoucherAmountByUinRequest& request, const QueryVoucherAmountByUinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryVoucherAmountByUinRequest&;
    using Resp = QueryVoucherAmountByUinResponse;

    DoRequestAsync<Req, Resp>(
        "QueryVoucherAmountByUin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::QueryVoucherAmountByUinOutcomeCallable IntlpartnersmgtClient::QueryVoucherAmountByUinCallable(const QueryVoucherAmountByUinRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryVoucherAmountByUinOutcome>>();
    QueryVoucherAmountByUinAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const QueryVoucherAmountByUinRequest&,
        QueryVoucherAmountByUinOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::QueryVoucherListByUinOutcome IntlpartnersmgtClient::QueryVoucherListByUin(const QueryVoucherListByUinRequest &request)
{
    auto outcome = MakeRequest(request, "QueryVoucherListByUin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryVoucherListByUinResponse rsp = QueryVoucherListByUinResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryVoucherListByUinOutcome(rsp);
        else
            return QueryVoucherListByUinOutcome(o.GetError());
    }
    else
    {
        return QueryVoucherListByUinOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryVoucherListByUinAsync(const QueryVoucherListByUinRequest& request, const QueryVoucherListByUinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryVoucherListByUinRequest&;
    using Resp = QueryVoucherListByUinResponse;

    DoRequestAsync<Req, Resp>(
        "QueryVoucherListByUin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::QueryVoucherListByUinOutcomeCallable IntlpartnersmgtClient::QueryVoucherListByUinCallable(const QueryVoucherListByUinRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryVoucherListByUinOutcome>>();
    QueryVoucherListByUinAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const QueryVoucherListByUinRequest&,
        QueryVoucherListByUinOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::QueryVoucherPoolOutcome IntlpartnersmgtClient::QueryVoucherPool(const QueryVoucherPoolRequest &request)
{
    auto outcome = MakeRequest(request, "QueryVoucherPool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryVoucherPoolResponse rsp = QueryVoucherPoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryVoucherPoolOutcome(rsp);
        else
            return QueryVoucherPoolOutcome(o.GetError());
    }
    else
    {
        return QueryVoucherPoolOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryVoucherPoolAsync(const QueryVoucherPoolRequest& request, const QueryVoucherPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryVoucherPoolRequest&;
    using Resp = QueryVoucherPoolResponse;

    DoRequestAsync<Req, Resp>(
        "QueryVoucherPool", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::QueryVoucherPoolOutcomeCallable IntlpartnersmgtClient::QueryVoucherPoolCallable(const QueryVoucherPoolRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryVoucherPoolOutcome>>();
    QueryVoucherPoolAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const QueryVoucherPoolRequest&,
        QueryVoucherPoolOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IntlpartnersmgtClient::SendVerifyCodeOutcome IntlpartnersmgtClient::SendVerifyCode(const SendVerifyCodeRequest &request)
{
    auto outcome = MakeRequest(request, "SendVerifyCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendVerifyCodeResponse rsp = SendVerifyCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendVerifyCodeOutcome(rsp);
        else
            return SendVerifyCodeOutcome(o.GetError());
    }
    else
    {
        return SendVerifyCodeOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::SendVerifyCodeAsync(const SendVerifyCodeRequest& request, const SendVerifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendVerifyCodeRequest&;
    using Resp = SendVerifyCodeResponse;

    DoRequestAsync<Req, Resp>(
        "SendVerifyCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IntlpartnersmgtClient::SendVerifyCodeOutcomeCallable IntlpartnersmgtClient::SendVerifyCodeCallable(const SendVerifyCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendVerifyCodeOutcome>>();
    SendVerifyCodeAsync(
    request,
    [prom](
        const IntlpartnersmgtClient*,
        const SendVerifyCodeRequest&,
        SendVerifyCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

