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

#include <tencentcloud/tokenhub/v20260322/TokenhubClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tokenhub::V20260322;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

namespace
{
    const string VERSION = "2026-03-22";
    const string ENDPOINT = "tokenhub.intl.tencentcloudapi.com";
}

TokenhubClient::TokenhubClient(const Credential &credential, const string &region) :
    TokenhubClient(credential, region, ClientProfile())
{
}

TokenhubClient::TokenhubClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TokenhubClient::CreateApiKeyOutcome TokenhubClient::CreateApiKey(const CreateApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApiKeyResponse rsp = CreateApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApiKeyOutcome(rsp);
        else
            return CreateApiKeyOutcome(o.GetError());
    }
    else
    {
        return CreateApiKeyOutcome(outcome.GetError());
    }
}

void TokenhubClient::CreateApiKeyAsync(const CreateApiKeyRequest& request, const CreateApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApiKeyRequest&;
    using Resp = CreateApiKeyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApiKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::CreateApiKeyOutcomeCallable TokenhubClient::CreateApiKeyCallable(const CreateApiKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApiKeyOutcome>>();
    CreateApiKeyAsync(
    request,
    [prom](
        const TokenhubClient*,
        const CreateApiKeyRequest&,
        CreateApiKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::CreateGlossaryOutcome TokenhubClient::CreateGlossary(const CreateGlossaryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGlossary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGlossaryResponse rsp = CreateGlossaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGlossaryOutcome(rsp);
        else
            return CreateGlossaryOutcome(o.GetError());
    }
    else
    {
        return CreateGlossaryOutcome(outcome.GetError());
    }
}

void TokenhubClient::CreateGlossaryAsync(const CreateGlossaryRequest& request, const CreateGlossaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGlossaryRequest&;
    using Resp = CreateGlossaryResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGlossary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::CreateGlossaryOutcomeCallable TokenhubClient::CreateGlossaryCallable(const CreateGlossaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGlossaryOutcome>>();
    CreateGlossaryAsync(
    request,
    [prom](
        const TokenhubClient*,
        const CreateGlossaryRequest&,
        CreateGlossaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::CreateGlossaryEntriesOutcome TokenhubClient::CreateGlossaryEntries(const CreateGlossaryEntriesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGlossaryEntries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGlossaryEntriesResponse rsp = CreateGlossaryEntriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGlossaryEntriesOutcome(rsp);
        else
            return CreateGlossaryEntriesOutcome(o.GetError());
    }
    else
    {
        return CreateGlossaryEntriesOutcome(outcome.GetError());
    }
}

void TokenhubClient::CreateGlossaryEntriesAsync(const CreateGlossaryEntriesRequest& request, const CreateGlossaryEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGlossaryEntriesRequest&;
    using Resp = CreateGlossaryEntriesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGlossaryEntries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::CreateGlossaryEntriesOutcomeCallable TokenhubClient::CreateGlossaryEntriesCallable(const CreateGlossaryEntriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGlossaryEntriesOutcome>>();
    CreateGlossaryEntriesAsync(
    request,
    [prom](
        const TokenhubClient*,
        const CreateGlossaryEntriesRequest&,
        CreateGlossaryEntriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::DeleteApiKeyOutcome TokenhubClient::DeleteApiKey(const DeleteApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApiKeyResponse rsp = DeleteApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApiKeyOutcome(rsp);
        else
            return DeleteApiKeyOutcome(o.GetError());
    }
    else
    {
        return DeleteApiKeyOutcome(outcome.GetError());
    }
}

void TokenhubClient::DeleteApiKeyAsync(const DeleteApiKeyRequest& request, const DeleteApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteApiKeyRequest&;
    using Resp = DeleteApiKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApiKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::DeleteApiKeyOutcomeCallable TokenhubClient::DeleteApiKeyCallable(const DeleteApiKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApiKeyOutcome>>();
    DeleteApiKeyAsync(
    request,
    [prom](
        const TokenhubClient*,
        const DeleteApiKeyRequest&,
        DeleteApiKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::DeleteGlossaryOutcome TokenhubClient::DeleteGlossary(const DeleteGlossaryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGlossary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGlossaryResponse rsp = DeleteGlossaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGlossaryOutcome(rsp);
        else
            return DeleteGlossaryOutcome(o.GetError());
    }
    else
    {
        return DeleteGlossaryOutcome(outcome.GetError());
    }
}

void TokenhubClient::DeleteGlossaryAsync(const DeleteGlossaryRequest& request, const DeleteGlossaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGlossaryRequest&;
    using Resp = DeleteGlossaryResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGlossary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::DeleteGlossaryOutcomeCallable TokenhubClient::DeleteGlossaryCallable(const DeleteGlossaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGlossaryOutcome>>();
    DeleteGlossaryAsync(
    request,
    [prom](
        const TokenhubClient*,
        const DeleteGlossaryRequest&,
        DeleteGlossaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::DeleteGlossaryEntriesOutcome TokenhubClient::DeleteGlossaryEntries(const DeleteGlossaryEntriesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGlossaryEntries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGlossaryEntriesResponse rsp = DeleteGlossaryEntriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGlossaryEntriesOutcome(rsp);
        else
            return DeleteGlossaryEntriesOutcome(o.GetError());
    }
    else
    {
        return DeleteGlossaryEntriesOutcome(outcome.GetError());
    }
}

void TokenhubClient::DeleteGlossaryEntriesAsync(const DeleteGlossaryEntriesRequest& request, const DeleteGlossaryEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGlossaryEntriesRequest&;
    using Resp = DeleteGlossaryEntriesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGlossaryEntries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::DeleteGlossaryEntriesOutcomeCallable TokenhubClient::DeleteGlossaryEntriesCallable(const DeleteGlossaryEntriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGlossaryEntriesOutcome>>();
    DeleteGlossaryEntriesAsync(
    request,
    [prom](
        const TokenhubClient*,
        const DeleteGlossaryEntriesRequest&,
        DeleteGlossaryEntriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::DescribeGlossariesOutcome TokenhubClient::DescribeGlossaries(const DescribeGlossariesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGlossaries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGlossariesResponse rsp = DescribeGlossariesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGlossariesOutcome(rsp);
        else
            return DescribeGlossariesOutcome(o.GetError());
    }
    else
    {
        return DescribeGlossariesOutcome(outcome.GetError());
    }
}

void TokenhubClient::DescribeGlossariesAsync(const DescribeGlossariesRequest& request, const DescribeGlossariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGlossariesRequest&;
    using Resp = DescribeGlossariesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGlossaries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::DescribeGlossariesOutcomeCallable TokenhubClient::DescribeGlossariesCallable(const DescribeGlossariesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGlossariesOutcome>>();
    DescribeGlossariesAsync(
    request,
    [prom](
        const TokenhubClient*,
        const DescribeGlossariesRequest&,
        DescribeGlossariesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::DescribeGlossaryEntriesOutcome TokenhubClient::DescribeGlossaryEntries(const DescribeGlossaryEntriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGlossaryEntries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGlossaryEntriesResponse rsp = DescribeGlossaryEntriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGlossaryEntriesOutcome(rsp);
        else
            return DescribeGlossaryEntriesOutcome(o.GetError());
    }
    else
    {
        return DescribeGlossaryEntriesOutcome(outcome.GetError());
    }
}

void TokenhubClient::DescribeGlossaryEntriesAsync(const DescribeGlossaryEntriesRequest& request, const DescribeGlossaryEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGlossaryEntriesRequest&;
    using Resp = DescribeGlossaryEntriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGlossaryEntries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::DescribeGlossaryEntriesOutcomeCallable TokenhubClient::DescribeGlossaryEntriesCallable(const DescribeGlossaryEntriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGlossaryEntriesOutcome>>();
    DescribeGlossaryEntriesAsync(
    request,
    [prom](
        const TokenhubClient*,
        const DescribeGlossaryEntriesRequest&,
        DescribeGlossaryEntriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::ModifyApiKeyInfoOutcome TokenhubClient::ModifyApiKeyInfo(const ModifyApiKeyInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApiKeyInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApiKeyInfoResponse rsp = ModifyApiKeyInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApiKeyInfoOutcome(rsp);
        else
            return ModifyApiKeyInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyApiKeyInfoOutcome(outcome.GetError());
    }
}

void TokenhubClient::ModifyApiKeyInfoAsync(const ModifyApiKeyInfoRequest& request, const ModifyApiKeyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApiKeyInfoRequest&;
    using Resp = ModifyApiKeyInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApiKeyInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::ModifyApiKeyInfoOutcomeCallable TokenhubClient::ModifyApiKeyInfoCallable(const ModifyApiKeyInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApiKeyInfoOutcome>>();
    ModifyApiKeyInfoAsync(
    request,
    [prom](
        const TokenhubClient*,
        const ModifyApiKeyInfoRequest&,
        ModifyApiKeyInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::ModifyApiKeyStatusOutcome TokenhubClient::ModifyApiKeyStatus(const ModifyApiKeyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApiKeyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApiKeyStatusResponse rsp = ModifyApiKeyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApiKeyStatusOutcome(rsp);
        else
            return ModifyApiKeyStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyApiKeyStatusOutcome(outcome.GetError());
    }
}

void TokenhubClient::ModifyApiKeyStatusAsync(const ModifyApiKeyStatusRequest& request, const ModifyApiKeyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApiKeyStatusRequest&;
    using Resp = ModifyApiKeyStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApiKeyStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::ModifyApiKeyStatusOutcomeCallable TokenhubClient::ModifyApiKeyStatusCallable(const ModifyApiKeyStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApiKeyStatusOutcome>>();
    ModifyApiKeyStatusAsync(
    request,
    [prom](
        const TokenhubClient*,
        const ModifyApiKeyStatusRequest&,
        ModifyApiKeyStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TokenhubClient::ModifyGlossaryEntriesOutcome TokenhubClient::ModifyGlossaryEntries(const ModifyGlossaryEntriesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGlossaryEntries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGlossaryEntriesResponse rsp = ModifyGlossaryEntriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGlossaryEntriesOutcome(rsp);
        else
            return ModifyGlossaryEntriesOutcome(o.GetError());
    }
    else
    {
        return ModifyGlossaryEntriesOutcome(outcome.GetError());
    }
}

void TokenhubClient::ModifyGlossaryEntriesAsync(const ModifyGlossaryEntriesRequest& request, const ModifyGlossaryEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGlossaryEntriesRequest&;
    using Resp = ModifyGlossaryEntriesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGlossaryEntries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TokenhubClient::ModifyGlossaryEntriesOutcomeCallable TokenhubClient::ModifyGlossaryEntriesCallable(const ModifyGlossaryEntriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGlossaryEntriesOutcome>>();
    ModifyGlossaryEntriesAsync(
    request,
    [prom](
        const TokenhubClient*,
        const ModifyGlossaryEntriesRequest&,
        ModifyGlossaryEntriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

