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

#include <tencentcloud/sts/v20180813/StsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Sts::V20180813;
using namespace TencentCloud::Sts::V20180813::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-08-13";
    const string ENDPOINT = "sts.intl.tencentcloudapi.com";
}

StsClient::StsClient(const Credential &credential, const string &region) :
    StsClient(credential, region, ClientProfile())
{
}

StsClient::StsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


StsClient::AssumeRoleOutcome StsClient::AssumeRole(const AssumeRoleRequest &request)
{
    auto outcome = MakeRequest(request, "AssumeRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssumeRoleResponse rsp = AssumeRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssumeRoleOutcome(rsp);
        else
            return AssumeRoleOutcome(o.GetError());
    }
    else
    {
        return AssumeRoleOutcome(outcome.GetError());
    }
}

void StsClient::AssumeRoleAsync(const AssumeRoleRequest& request, const AssumeRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssumeRoleRequest&;
    using Resp = AssumeRoleResponse;

    DoRequestAsync<Req, Resp>(
        "AssumeRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

StsClient::AssumeRoleOutcomeCallable StsClient::AssumeRoleCallable(const AssumeRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssumeRoleOutcome>>();
    AssumeRoleAsync(
    request,
    [prom](
        const StsClient*,
        const AssumeRoleRequest&,
        AssumeRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

StsClient::AssumeRoleWithSAMLOutcome StsClient::AssumeRoleWithSAML(const AssumeRoleWithSAMLRequest &request)
{
    auto outcome = MakeRequest(request, "AssumeRoleWithSAML");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssumeRoleWithSAMLResponse rsp = AssumeRoleWithSAMLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssumeRoleWithSAMLOutcome(rsp);
        else
            return AssumeRoleWithSAMLOutcome(o.GetError());
    }
    else
    {
        return AssumeRoleWithSAMLOutcome(outcome.GetError());
    }
}

void StsClient::AssumeRoleWithSAMLAsync(const AssumeRoleWithSAMLRequest& request, const AssumeRoleWithSAMLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssumeRoleWithSAMLRequest&;
    using Resp = AssumeRoleWithSAMLResponse;

    DoRequestAsync<Req, Resp>(
        "AssumeRoleWithSAML", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

StsClient::AssumeRoleWithSAMLOutcomeCallable StsClient::AssumeRoleWithSAMLCallable(const AssumeRoleWithSAMLRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssumeRoleWithSAMLOutcome>>();
    AssumeRoleWithSAMLAsync(
    request,
    [prom](
        const StsClient*,
        const AssumeRoleWithSAMLRequest&,
        AssumeRoleWithSAMLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

StsClient::AssumeRoleWithWebIdentityOutcome StsClient::AssumeRoleWithWebIdentity(const AssumeRoleWithWebIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "AssumeRoleWithWebIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssumeRoleWithWebIdentityResponse rsp = AssumeRoleWithWebIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssumeRoleWithWebIdentityOutcome(rsp);
        else
            return AssumeRoleWithWebIdentityOutcome(o.GetError());
    }
    else
    {
        return AssumeRoleWithWebIdentityOutcome(outcome.GetError());
    }
}

void StsClient::AssumeRoleWithWebIdentityAsync(const AssumeRoleWithWebIdentityRequest& request, const AssumeRoleWithWebIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssumeRoleWithWebIdentityRequest&;
    using Resp = AssumeRoleWithWebIdentityResponse;

    DoRequestAsync<Req, Resp>(
        "AssumeRoleWithWebIdentity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

StsClient::AssumeRoleWithWebIdentityOutcomeCallable StsClient::AssumeRoleWithWebIdentityCallable(const AssumeRoleWithWebIdentityRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssumeRoleWithWebIdentityOutcome>>();
    AssumeRoleWithWebIdentityAsync(
    request,
    [prom](
        const StsClient*,
        const AssumeRoleWithWebIdentityRequest&,
        AssumeRoleWithWebIdentityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

StsClient::GetCallerIdentityOutcome StsClient::GetCallerIdentity(const GetCallerIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "GetCallerIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCallerIdentityResponse rsp = GetCallerIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCallerIdentityOutcome(rsp);
        else
            return GetCallerIdentityOutcome(o.GetError());
    }
    else
    {
        return GetCallerIdentityOutcome(outcome.GetError());
    }
}

void StsClient::GetCallerIdentityAsync(const GetCallerIdentityRequest& request, const GetCallerIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCallerIdentityRequest&;
    using Resp = GetCallerIdentityResponse;

    DoRequestAsync<Req, Resp>(
        "GetCallerIdentity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

StsClient::GetCallerIdentityOutcomeCallable StsClient::GetCallerIdentityCallable(const GetCallerIdentityRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCallerIdentityOutcome>>();
    GetCallerIdentityAsync(
    request,
    [prom](
        const StsClient*,
        const GetCallerIdentityRequest&,
        GetCallerIdentityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

StsClient::GetFederationTokenOutcome StsClient::GetFederationToken(const GetFederationTokenRequest &request)
{
    auto outcome = MakeRequest(request, "GetFederationToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFederationTokenResponse rsp = GetFederationTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFederationTokenOutcome(rsp);
        else
            return GetFederationTokenOutcome(o.GetError());
    }
    else
    {
        return GetFederationTokenOutcome(outcome.GetError());
    }
}

void StsClient::GetFederationTokenAsync(const GetFederationTokenRequest& request, const GetFederationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetFederationTokenRequest&;
    using Resp = GetFederationTokenResponse;

    DoRequestAsync<Req, Resp>(
        "GetFederationToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

StsClient::GetFederationTokenOutcomeCallable StsClient::GetFederationTokenCallable(const GetFederationTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFederationTokenOutcome>>();
    GetFederationTokenAsync(
    request,
    [prom](
        const StsClient*,
        const GetFederationTokenRequest&,
        GetFederationTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

