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

#include <tencentcloud/ip/v20210409/IpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ip::V20210409;
using namespace TencentCloud::Ip::V20210409::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-04-09";
    const string ENDPOINT = "ip.intl.tencentcloudapi.com";
}

IpClient::IpClient(const Credential &credential, const string &region) :
    IpClient(credential, region, ClientProfile())
{
}

IpClient::IpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IpClient::AllocateCustomerCreditOutcome IpClient::AllocateCustomerCredit(const AllocateCustomerCreditRequest &request)
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

void IpClient::AllocateCustomerCreditAsync(const AllocateCustomerCreditRequest& request, const AllocateCustomerCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IpClient::AllocateCustomerCreditOutcomeCallable IpClient::AllocateCustomerCreditCallable(const AllocateCustomerCreditRequest &request)
{
    const auto prom = std::make_shared<std::promise<AllocateCustomerCreditOutcome>>();
    AllocateCustomerCreditAsync(
    request,
    [prom](
        const IpClient*,
        const AllocateCustomerCreditRequest&,
        AllocateCustomerCreditOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IpClient::CreateAccountOutcome IpClient::CreateAccount(const CreateAccountRequest &request)
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

void IpClient::CreateAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IpClient::CreateAccountOutcomeCallable IpClient::CreateAccountCallable(const CreateAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAccountOutcome>>();
    CreateAccountAsync(
    request,
    [prom](
        const IpClient*,
        const CreateAccountRequest&,
        CreateAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IpClient::GetCountryCodesOutcome IpClient::GetCountryCodes(const GetCountryCodesRequest &request)
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

void IpClient::GetCountryCodesAsync(const GetCountryCodesRequest& request, const GetCountryCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IpClient::GetCountryCodesOutcomeCallable IpClient::GetCountryCodesCallable(const GetCountryCodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCountryCodesOutcome>>();
    GetCountryCodesAsync(
    request,
    [prom](
        const IpClient*,
        const GetCountryCodesRequest&,
        GetCountryCodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IpClient::QueryCreditAllocationHistoryOutcome IpClient::QueryCreditAllocationHistory(const QueryCreditAllocationHistoryRequest &request)
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

void IpClient::QueryCreditAllocationHistoryAsync(const QueryCreditAllocationHistoryRequest& request, const QueryCreditAllocationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IpClient::QueryCreditAllocationHistoryOutcomeCallable IpClient::QueryCreditAllocationHistoryCallable(const QueryCreditAllocationHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryCreditAllocationHistoryOutcome>>();
    QueryCreditAllocationHistoryAsync(
    request,
    [prom](
        const IpClient*,
        const QueryCreditAllocationHistoryRequest&,
        QueryCreditAllocationHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IpClient::QueryCustomersCreditOutcome IpClient::QueryCustomersCredit(const QueryCustomersCreditRequest &request)
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

void IpClient::QueryCustomersCreditAsync(const QueryCustomersCreditRequest& request, const QueryCustomersCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IpClient::QueryCustomersCreditOutcomeCallable IpClient::QueryCustomersCreditCallable(const QueryCustomersCreditRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryCustomersCreditOutcome>>();
    QueryCustomersCreditAsync(
    request,
    [prom](
        const IpClient*,
        const QueryCustomersCreditRequest&,
        QueryCustomersCreditOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IpClient::QueryPartnerCreditOutcome IpClient::QueryPartnerCredit(const QueryPartnerCreditRequest &request)
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

void IpClient::QueryPartnerCreditAsync(const QueryPartnerCreditRequest& request, const QueryPartnerCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

IpClient::QueryPartnerCreditOutcomeCallable IpClient::QueryPartnerCreditCallable(const QueryPartnerCreditRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryPartnerCreditOutcome>>();
    QueryPartnerCreditAsync(
    request,
    [prom](
        const IpClient*,
        const QueryPartnerCreditRequest&,
        QueryPartnerCreditOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

