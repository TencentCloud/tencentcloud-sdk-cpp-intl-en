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

#include <tencentcloud/mdp/v20200527/MdpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mdp::V20200527;
using namespace TencentCloud::Mdp::V20200527::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-05-27";
    const string ENDPOINT = "mdp.intl.tencentcloudapi.com";
}

MdpClient::MdpClient(const Credential &credential, const string &region) :
    MdpClient(credential, region, ClientProfile())
{
}

MdpClient::MdpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MdpClient::BindLinearAssemblyCDNDomainWithChannelOutcome MdpClient::BindLinearAssemblyCDNDomainWithChannel(const BindLinearAssemblyCDNDomainWithChannelRequest &request)
{
    auto outcome = MakeRequest(request, "BindLinearAssemblyCDNDomainWithChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindLinearAssemblyCDNDomainWithChannelResponse rsp = BindLinearAssemblyCDNDomainWithChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindLinearAssemblyCDNDomainWithChannelOutcome(rsp);
        else
            return BindLinearAssemblyCDNDomainWithChannelOutcome(o.GetError());
    }
    else
    {
        return BindLinearAssemblyCDNDomainWithChannelOutcome(outcome.GetError());
    }
}

void MdpClient::BindLinearAssemblyCDNDomainWithChannelAsync(const BindLinearAssemblyCDNDomainWithChannelRequest& request, const BindLinearAssemblyCDNDomainWithChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindLinearAssemblyCDNDomainWithChannelRequest&;
    using Resp = BindLinearAssemblyCDNDomainWithChannelResponse;

    DoRequestAsync<Req, Resp>(
        "BindLinearAssemblyCDNDomainWithChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::BindLinearAssemblyCDNDomainWithChannelOutcomeCallable MdpClient::BindLinearAssemblyCDNDomainWithChannelCallable(const BindLinearAssemblyCDNDomainWithChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindLinearAssemblyCDNDomainWithChannelOutcome>>();
    BindLinearAssemblyCDNDomainWithChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const BindLinearAssemblyCDNDomainWithChannelRequest&,
        BindLinearAssemblyCDNDomainWithChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::BindNewLVBDomainWithChannelOutcome MdpClient::BindNewLVBDomainWithChannel(const BindNewLVBDomainWithChannelRequest &request)
{
    auto outcome = MakeRequest(request, "BindNewLVBDomainWithChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindNewLVBDomainWithChannelResponse rsp = BindNewLVBDomainWithChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindNewLVBDomainWithChannelOutcome(rsp);
        else
            return BindNewLVBDomainWithChannelOutcome(o.GetError());
    }
    else
    {
        return BindNewLVBDomainWithChannelOutcome(outcome.GetError());
    }
}

void MdpClient::BindNewLVBDomainWithChannelAsync(const BindNewLVBDomainWithChannelRequest& request, const BindNewLVBDomainWithChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindNewLVBDomainWithChannelRequest&;
    using Resp = BindNewLVBDomainWithChannelResponse;

    DoRequestAsync<Req, Resp>(
        "BindNewLVBDomainWithChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::BindNewLVBDomainWithChannelOutcomeCallable MdpClient::BindNewLVBDomainWithChannelCallable(const BindNewLVBDomainWithChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindNewLVBDomainWithChannelOutcome>>();
    BindNewLVBDomainWithChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const BindNewLVBDomainWithChannelRequest&,
        BindNewLVBDomainWithChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::BindSSAICDNDomainWithChannelOutcome MdpClient::BindSSAICDNDomainWithChannel(const BindSSAICDNDomainWithChannelRequest &request)
{
    auto outcome = MakeRequest(request, "BindSSAICDNDomainWithChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindSSAICDNDomainWithChannelResponse rsp = BindSSAICDNDomainWithChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindSSAICDNDomainWithChannelOutcome(rsp);
        else
            return BindSSAICDNDomainWithChannelOutcome(o.GetError());
    }
    else
    {
        return BindSSAICDNDomainWithChannelOutcome(outcome.GetError());
    }
}

void MdpClient::BindSSAICDNDomainWithChannelAsync(const BindSSAICDNDomainWithChannelRequest& request, const BindSSAICDNDomainWithChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindSSAICDNDomainWithChannelRequest&;
    using Resp = BindSSAICDNDomainWithChannelResponse;

    DoRequestAsync<Req, Resp>(
        "BindSSAICDNDomainWithChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::BindSSAICDNDomainWithChannelOutcomeCallable MdpClient::BindSSAICDNDomainWithChannelCallable(const BindSSAICDNDomainWithChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindSSAICDNDomainWithChannelOutcome>>();
    BindSSAICDNDomainWithChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const BindSSAICDNDomainWithChannelRequest&,
        BindSSAICDNDomainWithChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::CreateStreamPackageChannelOutcome MdpClient::CreateStreamPackageChannel(const CreateStreamPackageChannelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamPackageChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamPackageChannelResponse rsp = CreateStreamPackageChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamPackageChannelOutcome(rsp);
        else
            return CreateStreamPackageChannelOutcome(o.GetError());
    }
    else
    {
        return CreateStreamPackageChannelOutcome(outcome.GetError());
    }
}

void MdpClient::CreateStreamPackageChannelAsync(const CreateStreamPackageChannelRequest& request, const CreateStreamPackageChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStreamPackageChannelRequest&;
    using Resp = CreateStreamPackageChannelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamPackageChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::CreateStreamPackageChannelOutcomeCallable MdpClient::CreateStreamPackageChannelCallable(const CreateStreamPackageChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamPackageChannelOutcome>>();
    CreateStreamPackageChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const CreateStreamPackageChannelRequest&,
        CreateStreamPackageChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::CreateStreamPackageChannelEndpointOutcome MdpClient::CreateStreamPackageChannelEndpoint(const CreateStreamPackageChannelEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamPackageChannelEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamPackageChannelEndpointResponse rsp = CreateStreamPackageChannelEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamPackageChannelEndpointOutcome(rsp);
        else
            return CreateStreamPackageChannelEndpointOutcome(o.GetError());
    }
    else
    {
        return CreateStreamPackageChannelEndpointOutcome(outcome.GetError());
    }
}

void MdpClient::CreateStreamPackageChannelEndpointAsync(const CreateStreamPackageChannelEndpointRequest& request, const CreateStreamPackageChannelEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStreamPackageChannelEndpointRequest&;
    using Resp = CreateStreamPackageChannelEndpointResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamPackageChannelEndpoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::CreateStreamPackageChannelEndpointOutcomeCallable MdpClient::CreateStreamPackageChannelEndpointCallable(const CreateStreamPackageChannelEndpointRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamPackageChannelEndpointOutcome>>();
    CreateStreamPackageChannelEndpointAsync(
    request,
    [prom](
        const MdpClient*,
        const CreateStreamPackageChannelEndpointRequest&,
        CreateStreamPackageChannelEndpointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::CreateStreamPackageHarvestJobOutcome MdpClient::CreateStreamPackageHarvestJob(const CreateStreamPackageHarvestJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamPackageHarvestJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamPackageHarvestJobResponse rsp = CreateStreamPackageHarvestJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamPackageHarvestJobOutcome(rsp);
        else
            return CreateStreamPackageHarvestJobOutcome(o.GetError());
    }
    else
    {
        return CreateStreamPackageHarvestJobOutcome(outcome.GetError());
    }
}

void MdpClient::CreateStreamPackageHarvestJobAsync(const CreateStreamPackageHarvestJobRequest& request, const CreateStreamPackageHarvestJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStreamPackageHarvestJobRequest&;
    using Resp = CreateStreamPackageHarvestJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamPackageHarvestJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::CreateStreamPackageHarvestJobOutcomeCallable MdpClient::CreateStreamPackageHarvestJobCallable(const CreateStreamPackageHarvestJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamPackageHarvestJobOutcome>>();
    CreateStreamPackageHarvestJobAsync(
    request,
    [prom](
        const MdpClient*,
        const CreateStreamPackageHarvestJobRequest&,
        CreateStreamPackageHarvestJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::CreateStreamPackageLinearAssemblyChannelOutcome MdpClient::CreateStreamPackageLinearAssemblyChannel(const CreateStreamPackageLinearAssemblyChannelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamPackageLinearAssemblyChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamPackageLinearAssemblyChannelResponse rsp = CreateStreamPackageLinearAssemblyChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamPackageLinearAssemblyChannelOutcome(rsp);
        else
            return CreateStreamPackageLinearAssemblyChannelOutcome(o.GetError());
    }
    else
    {
        return CreateStreamPackageLinearAssemblyChannelOutcome(outcome.GetError());
    }
}

void MdpClient::CreateStreamPackageLinearAssemblyChannelAsync(const CreateStreamPackageLinearAssemblyChannelRequest& request, const CreateStreamPackageLinearAssemblyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStreamPackageLinearAssemblyChannelRequest&;
    using Resp = CreateStreamPackageLinearAssemblyChannelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamPackageLinearAssemblyChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::CreateStreamPackageLinearAssemblyChannelOutcomeCallable MdpClient::CreateStreamPackageLinearAssemblyChannelCallable(const CreateStreamPackageLinearAssemblyChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamPackageLinearAssemblyChannelOutcome>>();
    CreateStreamPackageLinearAssemblyChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const CreateStreamPackageLinearAssemblyChannelRequest&,
        CreateStreamPackageLinearAssemblyChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::CreateStreamPackageLinearAssemblyProgramOutcome MdpClient::CreateStreamPackageLinearAssemblyProgram(const CreateStreamPackageLinearAssemblyProgramRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamPackageLinearAssemblyProgram");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamPackageLinearAssemblyProgramResponse rsp = CreateStreamPackageLinearAssemblyProgramResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamPackageLinearAssemblyProgramOutcome(rsp);
        else
            return CreateStreamPackageLinearAssemblyProgramOutcome(o.GetError());
    }
    else
    {
        return CreateStreamPackageLinearAssemblyProgramOutcome(outcome.GetError());
    }
}

void MdpClient::CreateStreamPackageLinearAssemblyProgramAsync(const CreateStreamPackageLinearAssemblyProgramRequest& request, const CreateStreamPackageLinearAssemblyProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStreamPackageLinearAssemblyProgramRequest&;
    using Resp = CreateStreamPackageLinearAssemblyProgramResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamPackageLinearAssemblyProgram", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::CreateStreamPackageLinearAssemblyProgramOutcomeCallable MdpClient::CreateStreamPackageLinearAssemblyProgramCallable(const CreateStreamPackageLinearAssemblyProgramRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamPackageLinearAssemblyProgramOutcome>>();
    CreateStreamPackageLinearAssemblyProgramAsync(
    request,
    [prom](
        const MdpClient*,
        const CreateStreamPackageLinearAssemblyProgramRequest&,
        CreateStreamPackageLinearAssemblyProgramOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::CreateStreamPackageSSAIChannelOutcome MdpClient::CreateStreamPackageSSAIChannel(const CreateStreamPackageSSAIChannelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamPackageSSAIChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamPackageSSAIChannelResponse rsp = CreateStreamPackageSSAIChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamPackageSSAIChannelOutcome(rsp);
        else
            return CreateStreamPackageSSAIChannelOutcome(o.GetError());
    }
    else
    {
        return CreateStreamPackageSSAIChannelOutcome(outcome.GetError());
    }
}

void MdpClient::CreateStreamPackageSSAIChannelAsync(const CreateStreamPackageSSAIChannelRequest& request, const CreateStreamPackageSSAIChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStreamPackageSSAIChannelRequest&;
    using Resp = CreateStreamPackageSSAIChannelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamPackageSSAIChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::CreateStreamPackageSSAIChannelOutcomeCallable MdpClient::CreateStreamPackageSSAIChannelCallable(const CreateStreamPackageSSAIChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamPackageSSAIChannelOutcome>>();
    CreateStreamPackageSSAIChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const CreateStreamPackageSSAIChannelRequest&,
        CreateStreamPackageSSAIChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::CreateStreamPackageSourceOutcome MdpClient::CreateStreamPackageSource(const CreateStreamPackageSourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamPackageSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamPackageSourceResponse rsp = CreateStreamPackageSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamPackageSourceOutcome(rsp);
        else
            return CreateStreamPackageSourceOutcome(o.GetError());
    }
    else
    {
        return CreateStreamPackageSourceOutcome(outcome.GetError());
    }
}

void MdpClient::CreateStreamPackageSourceAsync(const CreateStreamPackageSourceRequest& request, const CreateStreamPackageSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStreamPackageSourceRequest&;
    using Resp = CreateStreamPackageSourceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamPackageSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::CreateStreamPackageSourceOutcomeCallable MdpClient::CreateStreamPackageSourceCallable(const CreateStreamPackageSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamPackageSourceOutcome>>();
    CreateStreamPackageSourceAsync(
    request,
    [prom](
        const MdpClient*,
        const CreateStreamPackageSourceRequest&,
        CreateStreamPackageSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::CreateStreamPackageSourceLocationOutcome MdpClient::CreateStreamPackageSourceLocation(const CreateStreamPackageSourceLocationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamPackageSourceLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamPackageSourceLocationResponse rsp = CreateStreamPackageSourceLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamPackageSourceLocationOutcome(rsp);
        else
            return CreateStreamPackageSourceLocationOutcome(o.GetError());
    }
    else
    {
        return CreateStreamPackageSourceLocationOutcome(outcome.GetError());
    }
}

void MdpClient::CreateStreamPackageSourceLocationAsync(const CreateStreamPackageSourceLocationRequest& request, const CreateStreamPackageSourceLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStreamPackageSourceLocationRequest&;
    using Resp = CreateStreamPackageSourceLocationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamPackageSourceLocation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::CreateStreamPackageSourceLocationOutcomeCallable MdpClient::CreateStreamPackageSourceLocationCallable(const CreateStreamPackageSourceLocationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamPackageSourceLocationOutcome>>();
    CreateStreamPackageSourceLocationAsync(
    request,
    [prom](
        const MdpClient*,
        const CreateStreamPackageSourceLocationRequest&,
        CreateStreamPackageSourceLocationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::CreateStreamPackageVodRemuxTaskOutcome MdpClient::CreateStreamPackageVodRemuxTask(const CreateStreamPackageVodRemuxTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamPackageVodRemuxTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamPackageVodRemuxTaskResponse rsp = CreateStreamPackageVodRemuxTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamPackageVodRemuxTaskOutcome(rsp);
        else
            return CreateStreamPackageVodRemuxTaskOutcome(o.GetError());
    }
    else
    {
        return CreateStreamPackageVodRemuxTaskOutcome(outcome.GetError());
    }
}

void MdpClient::CreateStreamPackageVodRemuxTaskAsync(const CreateStreamPackageVodRemuxTaskRequest& request, const CreateStreamPackageVodRemuxTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStreamPackageVodRemuxTaskRequest&;
    using Resp = CreateStreamPackageVodRemuxTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamPackageVodRemuxTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::CreateStreamPackageVodRemuxTaskOutcomeCallable MdpClient::CreateStreamPackageVodRemuxTaskCallable(const CreateStreamPackageVodRemuxTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamPackageVodRemuxTaskOutcome>>();
    CreateStreamPackageVodRemuxTaskAsync(
    request,
    [prom](
        const MdpClient*,
        const CreateStreamPackageVodRemuxTaskRequest&,
        CreateStreamPackageVodRemuxTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DeleteStreamPackageChannelEndpointsOutcome MdpClient::DeleteStreamPackageChannelEndpoints(const DeleteStreamPackageChannelEndpointsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamPackageChannelEndpoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamPackageChannelEndpointsResponse rsp = DeleteStreamPackageChannelEndpointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamPackageChannelEndpointsOutcome(rsp);
        else
            return DeleteStreamPackageChannelEndpointsOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamPackageChannelEndpointsOutcome(outcome.GetError());
    }
}

void MdpClient::DeleteStreamPackageChannelEndpointsAsync(const DeleteStreamPackageChannelEndpointsRequest& request, const DeleteStreamPackageChannelEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamPackageChannelEndpointsRequest&;
    using Resp = DeleteStreamPackageChannelEndpointsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamPackageChannelEndpoints", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DeleteStreamPackageChannelEndpointsOutcomeCallable MdpClient::DeleteStreamPackageChannelEndpointsCallable(const DeleteStreamPackageChannelEndpointsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamPackageChannelEndpointsOutcome>>();
    DeleteStreamPackageChannelEndpointsAsync(
    request,
    [prom](
        const MdpClient*,
        const DeleteStreamPackageChannelEndpointsRequest&,
        DeleteStreamPackageChannelEndpointsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DeleteStreamPackageChannelsOutcome MdpClient::DeleteStreamPackageChannels(const DeleteStreamPackageChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamPackageChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamPackageChannelsResponse rsp = DeleteStreamPackageChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamPackageChannelsOutcome(rsp);
        else
            return DeleteStreamPackageChannelsOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamPackageChannelsOutcome(outcome.GetError());
    }
}

void MdpClient::DeleteStreamPackageChannelsAsync(const DeleteStreamPackageChannelsRequest& request, const DeleteStreamPackageChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamPackageChannelsRequest&;
    using Resp = DeleteStreamPackageChannelsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamPackageChannels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DeleteStreamPackageChannelsOutcomeCallable MdpClient::DeleteStreamPackageChannelsCallable(const DeleteStreamPackageChannelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamPackageChannelsOutcome>>();
    DeleteStreamPackageChannelsAsync(
    request,
    [prom](
        const MdpClient*,
        const DeleteStreamPackageChannelsRequest&,
        DeleteStreamPackageChannelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DeleteStreamPackageHarvestJobOutcome MdpClient::DeleteStreamPackageHarvestJob(const DeleteStreamPackageHarvestJobRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamPackageHarvestJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamPackageHarvestJobResponse rsp = DeleteStreamPackageHarvestJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamPackageHarvestJobOutcome(rsp);
        else
            return DeleteStreamPackageHarvestJobOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamPackageHarvestJobOutcome(outcome.GetError());
    }
}

void MdpClient::DeleteStreamPackageHarvestJobAsync(const DeleteStreamPackageHarvestJobRequest& request, const DeleteStreamPackageHarvestJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamPackageHarvestJobRequest&;
    using Resp = DeleteStreamPackageHarvestJobResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamPackageHarvestJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DeleteStreamPackageHarvestJobOutcomeCallable MdpClient::DeleteStreamPackageHarvestJobCallable(const DeleteStreamPackageHarvestJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamPackageHarvestJobOutcome>>();
    DeleteStreamPackageHarvestJobAsync(
    request,
    [prom](
        const MdpClient*,
        const DeleteStreamPackageHarvestJobRequest&,
        DeleteStreamPackageHarvestJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DeleteStreamPackageHarvestJobsOutcome MdpClient::DeleteStreamPackageHarvestJobs(const DeleteStreamPackageHarvestJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamPackageHarvestJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamPackageHarvestJobsResponse rsp = DeleteStreamPackageHarvestJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamPackageHarvestJobsOutcome(rsp);
        else
            return DeleteStreamPackageHarvestJobsOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamPackageHarvestJobsOutcome(outcome.GetError());
    }
}

void MdpClient::DeleteStreamPackageHarvestJobsAsync(const DeleteStreamPackageHarvestJobsRequest& request, const DeleteStreamPackageHarvestJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamPackageHarvestJobsRequest&;
    using Resp = DeleteStreamPackageHarvestJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamPackageHarvestJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DeleteStreamPackageHarvestJobsOutcomeCallable MdpClient::DeleteStreamPackageHarvestJobsCallable(const DeleteStreamPackageHarvestJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamPackageHarvestJobsOutcome>>();
    DeleteStreamPackageHarvestJobsAsync(
    request,
    [prom](
        const MdpClient*,
        const DeleteStreamPackageHarvestJobsRequest&,
        DeleteStreamPackageHarvestJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DeleteStreamPackageLinearAssemblyChannelOutcome MdpClient::DeleteStreamPackageLinearAssemblyChannel(const DeleteStreamPackageLinearAssemblyChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamPackageLinearAssemblyChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamPackageLinearAssemblyChannelResponse rsp = DeleteStreamPackageLinearAssemblyChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamPackageLinearAssemblyChannelOutcome(rsp);
        else
            return DeleteStreamPackageLinearAssemblyChannelOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamPackageLinearAssemblyChannelOutcome(outcome.GetError());
    }
}

void MdpClient::DeleteStreamPackageLinearAssemblyChannelAsync(const DeleteStreamPackageLinearAssemblyChannelRequest& request, const DeleteStreamPackageLinearAssemblyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamPackageLinearAssemblyChannelRequest&;
    using Resp = DeleteStreamPackageLinearAssemblyChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamPackageLinearAssemblyChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DeleteStreamPackageLinearAssemblyChannelOutcomeCallable MdpClient::DeleteStreamPackageLinearAssemblyChannelCallable(const DeleteStreamPackageLinearAssemblyChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamPackageLinearAssemblyChannelOutcome>>();
    DeleteStreamPackageLinearAssemblyChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const DeleteStreamPackageLinearAssemblyChannelRequest&,
        DeleteStreamPackageLinearAssemblyChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DeleteStreamPackageLinearAssemblyChannelsOutcome MdpClient::DeleteStreamPackageLinearAssemblyChannels(const DeleteStreamPackageLinearAssemblyChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamPackageLinearAssemblyChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamPackageLinearAssemblyChannelsResponse rsp = DeleteStreamPackageLinearAssemblyChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamPackageLinearAssemblyChannelsOutcome(rsp);
        else
            return DeleteStreamPackageLinearAssemblyChannelsOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamPackageLinearAssemblyChannelsOutcome(outcome.GetError());
    }
}

void MdpClient::DeleteStreamPackageLinearAssemblyChannelsAsync(const DeleteStreamPackageLinearAssemblyChannelsRequest& request, const DeleteStreamPackageLinearAssemblyChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamPackageLinearAssemblyChannelsRequest&;
    using Resp = DeleteStreamPackageLinearAssemblyChannelsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamPackageLinearAssemblyChannels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DeleteStreamPackageLinearAssemblyChannelsOutcomeCallable MdpClient::DeleteStreamPackageLinearAssemblyChannelsCallable(const DeleteStreamPackageLinearAssemblyChannelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamPackageLinearAssemblyChannelsOutcome>>();
    DeleteStreamPackageLinearAssemblyChannelsAsync(
    request,
    [prom](
        const MdpClient*,
        const DeleteStreamPackageLinearAssemblyChannelsRequest&,
        DeleteStreamPackageLinearAssemblyChannelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DeleteStreamPackageLinearAssemblyProgramOutcome MdpClient::DeleteStreamPackageLinearAssemblyProgram(const DeleteStreamPackageLinearAssemblyProgramRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamPackageLinearAssemblyProgram");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamPackageLinearAssemblyProgramResponse rsp = DeleteStreamPackageLinearAssemblyProgramResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamPackageLinearAssemblyProgramOutcome(rsp);
        else
            return DeleteStreamPackageLinearAssemblyProgramOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamPackageLinearAssemblyProgramOutcome(outcome.GetError());
    }
}

void MdpClient::DeleteStreamPackageLinearAssemblyProgramAsync(const DeleteStreamPackageLinearAssemblyProgramRequest& request, const DeleteStreamPackageLinearAssemblyProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamPackageLinearAssemblyProgramRequest&;
    using Resp = DeleteStreamPackageLinearAssemblyProgramResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamPackageLinearAssemblyProgram", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DeleteStreamPackageLinearAssemblyProgramOutcomeCallable MdpClient::DeleteStreamPackageLinearAssemblyProgramCallable(const DeleteStreamPackageLinearAssemblyProgramRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamPackageLinearAssemblyProgramOutcome>>();
    DeleteStreamPackageLinearAssemblyProgramAsync(
    request,
    [prom](
        const MdpClient*,
        const DeleteStreamPackageLinearAssemblyProgramRequest&,
        DeleteStreamPackageLinearAssemblyProgramOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DeleteStreamPackageLinearAssemblyProgramsOutcome MdpClient::DeleteStreamPackageLinearAssemblyPrograms(const DeleteStreamPackageLinearAssemblyProgramsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamPackageLinearAssemblyPrograms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamPackageLinearAssemblyProgramsResponse rsp = DeleteStreamPackageLinearAssemblyProgramsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamPackageLinearAssemblyProgramsOutcome(rsp);
        else
            return DeleteStreamPackageLinearAssemblyProgramsOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamPackageLinearAssemblyProgramsOutcome(outcome.GetError());
    }
}

void MdpClient::DeleteStreamPackageLinearAssemblyProgramsAsync(const DeleteStreamPackageLinearAssemblyProgramsRequest& request, const DeleteStreamPackageLinearAssemblyProgramsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamPackageLinearAssemblyProgramsRequest&;
    using Resp = DeleteStreamPackageLinearAssemblyProgramsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamPackageLinearAssemblyPrograms", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DeleteStreamPackageLinearAssemblyProgramsOutcomeCallable MdpClient::DeleteStreamPackageLinearAssemblyProgramsCallable(const DeleteStreamPackageLinearAssemblyProgramsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamPackageLinearAssemblyProgramsOutcome>>();
    DeleteStreamPackageLinearAssemblyProgramsAsync(
    request,
    [prom](
        const MdpClient*,
        const DeleteStreamPackageLinearAssemblyProgramsRequest&,
        DeleteStreamPackageLinearAssemblyProgramsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DeleteStreamPackageSSAIChannelOutcome MdpClient::DeleteStreamPackageSSAIChannel(const DeleteStreamPackageSSAIChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamPackageSSAIChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamPackageSSAIChannelResponse rsp = DeleteStreamPackageSSAIChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamPackageSSAIChannelOutcome(rsp);
        else
            return DeleteStreamPackageSSAIChannelOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamPackageSSAIChannelOutcome(outcome.GetError());
    }
}

void MdpClient::DeleteStreamPackageSSAIChannelAsync(const DeleteStreamPackageSSAIChannelRequest& request, const DeleteStreamPackageSSAIChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamPackageSSAIChannelRequest&;
    using Resp = DeleteStreamPackageSSAIChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamPackageSSAIChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DeleteStreamPackageSSAIChannelOutcomeCallable MdpClient::DeleteStreamPackageSSAIChannelCallable(const DeleteStreamPackageSSAIChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamPackageSSAIChannelOutcome>>();
    DeleteStreamPackageSSAIChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const DeleteStreamPackageSSAIChannelRequest&,
        DeleteStreamPackageSSAIChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DeleteStreamPackageSourceOutcome MdpClient::DeleteStreamPackageSource(const DeleteStreamPackageSourceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamPackageSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamPackageSourceResponse rsp = DeleteStreamPackageSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamPackageSourceOutcome(rsp);
        else
            return DeleteStreamPackageSourceOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamPackageSourceOutcome(outcome.GetError());
    }
}

void MdpClient::DeleteStreamPackageSourceAsync(const DeleteStreamPackageSourceRequest& request, const DeleteStreamPackageSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamPackageSourceRequest&;
    using Resp = DeleteStreamPackageSourceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamPackageSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DeleteStreamPackageSourceOutcomeCallable MdpClient::DeleteStreamPackageSourceCallable(const DeleteStreamPackageSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamPackageSourceOutcome>>();
    DeleteStreamPackageSourceAsync(
    request,
    [prom](
        const MdpClient*,
        const DeleteStreamPackageSourceRequest&,
        DeleteStreamPackageSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DeleteStreamPackageSourceLocationOutcome MdpClient::DeleteStreamPackageSourceLocation(const DeleteStreamPackageSourceLocationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamPackageSourceLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamPackageSourceLocationResponse rsp = DeleteStreamPackageSourceLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamPackageSourceLocationOutcome(rsp);
        else
            return DeleteStreamPackageSourceLocationOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamPackageSourceLocationOutcome(outcome.GetError());
    }
}

void MdpClient::DeleteStreamPackageSourceLocationAsync(const DeleteStreamPackageSourceLocationRequest& request, const DeleteStreamPackageSourceLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamPackageSourceLocationRequest&;
    using Resp = DeleteStreamPackageSourceLocationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamPackageSourceLocation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DeleteStreamPackageSourceLocationOutcomeCallable MdpClient::DeleteStreamPackageSourceLocationCallable(const DeleteStreamPackageSourceLocationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamPackageSourceLocationOutcome>>();
    DeleteStreamPackageSourceLocationAsync(
    request,
    [prom](
        const MdpClient*,
        const DeleteStreamPackageSourceLocationRequest&,
        DeleteStreamPackageSourceLocationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DeleteStreamPackageVodRemuxTaskOutcome MdpClient::DeleteStreamPackageVodRemuxTask(const DeleteStreamPackageVodRemuxTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamPackageVodRemuxTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamPackageVodRemuxTaskResponse rsp = DeleteStreamPackageVodRemuxTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamPackageVodRemuxTaskOutcome(rsp);
        else
            return DeleteStreamPackageVodRemuxTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamPackageVodRemuxTaskOutcome(outcome.GetError());
    }
}

void MdpClient::DeleteStreamPackageVodRemuxTaskAsync(const DeleteStreamPackageVodRemuxTaskRequest& request, const DeleteStreamPackageVodRemuxTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamPackageVodRemuxTaskRequest&;
    using Resp = DeleteStreamPackageVodRemuxTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamPackageVodRemuxTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DeleteStreamPackageVodRemuxTaskOutcomeCallable MdpClient::DeleteStreamPackageVodRemuxTaskCallable(const DeleteStreamPackageVodRemuxTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamPackageVodRemuxTaskOutcome>>();
    DeleteStreamPackageVodRemuxTaskAsync(
    request,
    [prom](
        const MdpClient*,
        const DeleteStreamPackageVodRemuxTaskRequest&,
        DeleteStreamPackageVodRemuxTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DeleteStreamPackageVodRemuxTasksOutcome MdpClient::DeleteStreamPackageVodRemuxTasks(const DeleteStreamPackageVodRemuxTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamPackageVodRemuxTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamPackageVodRemuxTasksResponse rsp = DeleteStreamPackageVodRemuxTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamPackageVodRemuxTasksOutcome(rsp);
        else
            return DeleteStreamPackageVodRemuxTasksOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamPackageVodRemuxTasksOutcome(outcome.GetError());
    }
}

void MdpClient::DeleteStreamPackageVodRemuxTasksAsync(const DeleteStreamPackageVodRemuxTasksRequest& request, const DeleteStreamPackageVodRemuxTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStreamPackageVodRemuxTasksRequest&;
    using Resp = DeleteStreamPackageVodRemuxTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamPackageVodRemuxTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DeleteStreamPackageVodRemuxTasksOutcomeCallable MdpClient::DeleteStreamPackageVodRemuxTasksCallable(const DeleteStreamPackageVodRemuxTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamPackageVodRemuxTasksOutcome>>();
    DeleteStreamPackageVodRemuxTasksAsync(
    request,
    [prom](
        const MdpClient*,
        const DeleteStreamPackageVodRemuxTasksRequest&,
        DeleteStreamPackageVodRemuxTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeLinearAssemblyCDNDomainWithChannelOutcome MdpClient::DescribeLinearAssemblyCDNDomainWithChannel(const DescribeLinearAssemblyCDNDomainWithChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLinearAssemblyCDNDomainWithChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLinearAssemblyCDNDomainWithChannelResponse rsp = DescribeLinearAssemblyCDNDomainWithChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLinearAssemblyCDNDomainWithChannelOutcome(rsp);
        else
            return DescribeLinearAssemblyCDNDomainWithChannelOutcome(o.GetError());
    }
    else
    {
        return DescribeLinearAssemblyCDNDomainWithChannelOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeLinearAssemblyCDNDomainWithChannelAsync(const DescribeLinearAssemblyCDNDomainWithChannelRequest& request, const DescribeLinearAssemblyCDNDomainWithChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLinearAssemblyCDNDomainWithChannelRequest&;
    using Resp = DescribeLinearAssemblyCDNDomainWithChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLinearAssemblyCDNDomainWithChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeLinearAssemblyCDNDomainWithChannelOutcomeCallable MdpClient::DescribeLinearAssemblyCDNDomainWithChannelCallable(const DescribeLinearAssemblyCDNDomainWithChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLinearAssemblyCDNDomainWithChannelOutcome>>();
    DescribeLinearAssemblyCDNDomainWithChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeLinearAssemblyCDNDomainWithChannelRequest&,
        DescribeLinearAssemblyCDNDomainWithChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeLinearAssemblyCDNDomainWithChannelsOutcome MdpClient::DescribeLinearAssemblyCDNDomainWithChannels(const DescribeLinearAssemblyCDNDomainWithChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLinearAssemblyCDNDomainWithChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLinearAssemblyCDNDomainWithChannelsResponse rsp = DescribeLinearAssemblyCDNDomainWithChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLinearAssemblyCDNDomainWithChannelsOutcome(rsp);
        else
            return DescribeLinearAssemblyCDNDomainWithChannelsOutcome(o.GetError());
    }
    else
    {
        return DescribeLinearAssemblyCDNDomainWithChannelsOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeLinearAssemblyCDNDomainWithChannelsAsync(const DescribeLinearAssemblyCDNDomainWithChannelsRequest& request, const DescribeLinearAssemblyCDNDomainWithChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLinearAssemblyCDNDomainWithChannelsRequest&;
    using Resp = DescribeLinearAssemblyCDNDomainWithChannelsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLinearAssemblyCDNDomainWithChannels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeLinearAssemblyCDNDomainWithChannelsOutcomeCallable MdpClient::DescribeLinearAssemblyCDNDomainWithChannelsCallable(const DescribeLinearAssemblyCDNDomainWithChannelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLinearAssemblyCDNDomainWithChannelsOutcome>>();
    DescribeLinearAssemblyCDNDomainWithChannelsAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeLinearAssemblyCDNDomainWithChannelsRequest&,
        DescribeLinearAssemblyCDNDomainWithChannelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageChannelOutcome MdpClient::DescribeStreamPackageChannel(const DescribeStreamPackageChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageChannelResponse rsp = DescribeStreamPackageChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageChannelOutcome(rsp);
        else
            return DescribeStreamPackageChannelOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageChannelOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageChannelAsync(const DescribeStreamPackageChannelRequest& request, const DescribeStreamPackageChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageChannelRequest&;
    using Resp = DescribeStreamPackageChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageChannelOutcomeCallable MdpClient::DescribeStreamPackageChannelCallable(const DescribeStreamPackageChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageChannelOutcome>>();
    DescribeStreamPackageChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageChannelRequest&,
        DescribeStreamPackageChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageChannelsOutcome MdpClient::DescribeStreamPackageChannels(const DescribeStreamPackageChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageChannelsResponse rsp = DescribeStreamPackageChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageChannelsOutcome(rsp);
        else
            return DescribeStreamPackageChannelsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageChannelsOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageChannelsAsync(const DescribeStreamPackageChannelsRequest& request, const DescribeStreamPackageChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageChannelsRequest&;
    using Resp = DescribeStreamPackageChannelsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageChannels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageChannelsOutcomeCallable MdpClient::DescribeStreamPackageChannelsCallable(const DescribeStreamPackageChannelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageChannelsOutcome>>();
    DescribeStreamPackageChannelsAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageChannelsRequest&,
        DescribeStreamPackageChannelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageHarvestJobOutcome MdpClient::DescribeStreamPackageHarvestJob(const DescribeStreamPackageHarvestJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageHarvestJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageHarvestJobResponse rsp = DescribeStreamPackageHarvestJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageHarvestJobOutcome(rsp);
        else
            return DescribeStreamPackageHarvestJobOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageHarvestJobOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageHarvestJobAsync(const DescribeStreamPackageHarvestJobRequest& request, const DescribeStreamPackageHarvestJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageHarvestJobRequest&;
    using Resp = DescribeStreamPackageHarvestJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageHarvestJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageHarvestJobOutcomeCallable MdpClient::DescribeStreamPackageHarvestJobCallable(const DescribeStreamPackageHarvestJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageHarvestJobOutcome>>();
    DescribeStreamPackageHarvestJobAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageHarvestJobRequest&,
        DescribeStreamPackageHarvestJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageHarvestJobsOutcome MdpClient::DescribeStreamPackageHarvestJobs(const DescribeStreamPackageHarvestJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageHarvestJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageHarvestJobsResponse rsp = DescribeStreamPackageHarvestJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageHarvestJobsOutcome(rsp);
        else
            return DescribeStreamPackageHarvestJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageHarvestJobsOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageHarvestJobsAsync(const DescribeStreamPackageHarvestJobsRequest& request, const DescribeStreamPackageHarvestJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageHarvestJobsRequest&;
    using Resp = DescribeStreamPackageHarvestJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageHarvestJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageHarvestJobsOutcomeCallable MdpClient::DescribeStreamPackageHarvestJobsCallable(const DescribeStreamPackageHarvestJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageHarvestJobsOutcome>>();
    DescribeStreamPackageHarvestJobsAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageHarvestJobsRequest&,
        DescribeStreamPackageHarvestJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageLinearAssemblyChannelOutcome MdpClient::DescribeStreamPackageLinearAssemblyChannel(const DescribeStreamPackageLinearAssemblyChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageLinearAssemblyChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageLinearAssemblyChannelResponse rsp = DescribeStreamPackageLinearAssemblyChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageLinearAssemblyChannelOutcome(rsp);
        else
            return DescribeStreamPackageLinearAssemblyChannelOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageLinearAssemblyChannelOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageLinearAssemblyChannelAsync(const DescribeStreamPackageLinearAssemblyChannelRequest& request, const DescribeStreamPackageLinearAssemblyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageLinearAssemblyChannelRequest&;
    using Resp = DescribeStreamPackageLinearAssemblyChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageLinearAssemblyChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageLinearAssemblyChannelOutcomeCallable MdpClient::DescribeStreamPackageLinearAssemblyChannelCallable(const DescribeStreamPackageLinearAssemblyChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageLinearAssemblyChannelOutcome>>();
    DescribeStreamPackageLinearAssemblyChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageLinearAssemblyChannelRequest&,
        DescribeStreamPackageLinearAssemblyChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageLinearAssemblyChannelAlertsOutcome MdpClient::DescribeStreamPackageLinearAssemblyChannelAlerts(const DescribeStreamPackageLinearAssemblyChannelAlertsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageLinearAssemblyChannelAlerts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageLinearAssemblyChannelAlertsResponse rsp = DescribeStreamPackageLinearAssemblyChannelAlertsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageLinearAssemblyChannelAlertsOutcome(rsp);
        else
            return DescribeStreamPackageLinearAssemblyChannelAlertsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageLinearAssemblyChannelAlertsOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageLinearAssemblyChannelAlertsAsync(const DescribeStreamPackageLinearAssemblyChannelAlertsRequest& request, const DescribeStreamPackageLinearAssemblyChannelAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageLinearAssemblyChannelAlertsRequest&;
    using Resp = DescribeStreamPackageLinearAssemblyChannelAlertsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageLinearAssemblyChannelAlerts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageLinearAssemblyChannelAlertsOutcomeCallable MdpClient::DescribeStreamPackageLinearAssemblyChannelAlertsCallable(const DescribeStreamPackageLinearAssemblyChannelAlertsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageLinearAssemblyChannelAlertsOutcome>>();
    DescribeStreamPackageLinearAssemblyChannelAlertsAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageLinearAssemblyChannelAlertsRequest&,
        DescribeStreamPackageLinearAssemblyChannelAlertsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageLinearAssemblyChannelsOutcome MdpClient::DescribeStreamPackageLinearAssemblyChannels(const DescribeStreamPackageLinearAssemblyChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageLinearAssemblyChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageLinearAssemblyChannelsResponse rsp = DescribeStreamPackageLinearAssemblyChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageLinearAssemblyChannelsOutcome(rsp);
        else
            return DescribeStreamPackageLinearAssemblyChannelsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageLinearAssemblyChannelsOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageLinearAssemblyChannelsAsync(const DescribeStreamPackageLinearAssemblyChannelsRequest& request, const DescribeStreamPackageLinearAssemblyChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageLinearAssemblyChannelsRequest&;
    using Resp = DescribeStreamPackageLinearAssemblyChannelsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageLinearAssemblyChannels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageLinearAssemblyChannelsOutcomeCallable MdpClient::DescribeStreamPackageLinearAssemblyChannelsCallable(const DescribeStreamPackageLinearAssemblyChannelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageLinearAssemblyChannelsOutcome>>();
    DescribeStreamPackageLinearAssemblyChannelsAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageLinearAssemblyChannelsRequest&,
        DescribeStreamPackageLinearAssemblyChannelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageLinearAssemblyProgramOutcome MdpClient::DescribeStreamPackageLinearAssemblyProgram(const DescribeStreamPackageLinearAssemblyProgramRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageLinearAssemblyProgram");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageLinearAssemblyProgramResponse rsp = DescribeStreamPackageLinearAssemblyProgramResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageLinearAssemblyProgramOutcome(rsp);
        else
            return DescribeStreamPackageLinearAssemblyProgramOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageLinearAssemblyProgramOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageLinearAssemblyProgramAsync(const DescribeStreamPackageLinearAssemblyProgramRequest& request, const DescribeStreamPackageLinearAssemblyProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageLinearAssemblyProgramRequest&;
    using Resp = DescribeStreamPackageLinearAssemblyProgramResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageLinearAssemblyProgram", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageLinearAssemblyProgramOutcomeCallable MdpClient::DescribeStreamPackageLinearAssemblyProgramCallable(const DescribeStreamPackageLinearAssemblyProgramRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageLinearAssemblyProgramOutcome>>();
    DescribeStreamPackageLinearAssemblyProgramAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageLinearAssemblyProgramRequest&,
        DescribeStreamPackageLinearAssemblyProgramOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageLinearAssemblyProgramSchedulesOutcome MdpClient::DescribeStreamPackageLinearAssemblyProgramSchedules(const DescribeStreamPackageLinearAssemblyProgramSchedulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageLinearAssemblyProgramSchedules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageLinearAssemblyProgramSchedulesResponse rsp = DescribeStreamPackageLinearAssemblyProgramSchedulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageLinearAssemblyProgramSchedulesOutcome(rsp);
        else
            return DescribeStreamPackageLinearAssemblyProgramSchedulesOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageLinearAssemblyProgramSchedulesOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageLinearAssemblyProgramSchedulesAsync(const DescribeStreamPackageLinearAssemblyProgramSchedulesRequest& request, const DescribeStreamPackageLinearAssemblyProgramSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageLinearAssemblyProgramSchedulesRequest&;
    using Resp = DescribeStreamPackageLinearAssemblyProgramSchedulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageLinearAssemblyProgramSchedules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageLinearAssemblyProgramSchedulesOutcomeCallable MdpClient::DescribeStreamPackageLinearAssemblyProgramSchedulesCallable(const DescribeStreamPackageLinearAssemblyProgramSchedulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageLinearAssemblyProgramSchedulesOutcome>>();
    DescribeStreamPackageLinearAssemblyProgramSchedulesAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageLinearAssemblyProgramSchedulesRequest&,
        DescribeStreamPackageLinearAssemblyProgramSchedulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageLinearAssemblyProgramsOutcome MdpClient::DescribeStreamPackageLinearAssemblyPrograms(const DescribeStreamPackageLinearAssemblyProgramsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageLinearAssemblyPrograms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageLinearAssemblyProgramsResponse rsp = DescribeStreamPackageLinearAssemblyProgramsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageLinearAssemblyProgramsOutcome(rsp);
        else
            return DescribeStreamPackageLinearAssemblyProgramsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageLinearAssemblyProgramsOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageLinearAssemblyProgramsAsync(const DescribeStreamPackageLinearAssemblyProgramsRequest& request, const DescribeStreamPackageLinearAssemblyProgramsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageLinearAssemblyProgramsRequest&;
    using Resp = DescribeStreamPackageLinearAssemblyProgramsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageLinearAssemblyPrograms", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageLinearAssemblyProgramsOutcomeCallable MdpClient::DescribeStreamPackageLinearAssemblyProgramsCallable(const DescribeStreamPackageLinearAssemblyProgramsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageLinearAssemblyProgramsOutcome>>();
    DescribeStreamPackageLinearAssemblyProgramsAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageLinearAssemblyProgramsRequest&,
        DescribeStreamPackageLinearAssemblyProgramsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageSSAIChannelOutcome MdpClient::DescribeStreamPackageSSAIChannel(const DescribeStreamPackageSSAIChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageSSAIChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageSSAIChannelResponse rsp = DescribeStreamPackageSSAIChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageSSAIChannelOutcome(rsp);
        else
            return DescribeStreamPackageSSAIChannelOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageSSAIChannelOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageSSAIChannelAsync(const DescribeStreamPackageSSAIChannelRequest& request, const DescribeStreamPackageSSAIChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageSSAIChannelRequest&;
    using Resp = DescribeStreamPackageSSAIChannelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageSSAIChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageSSAIChannelOutcomeCallable MdpClient::DescribeStreamPackageSSAIChannelCallable(const DescribeStreamPackageSSAIChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageSSAIChannelOutcome>>();
    DescribeStreamPackageSSAIChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageSSAIChannelRequest&,
        DescribeStreamPackageSSAIChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageSSAIChannelsOutcome MdpClient::DescribeStreamPackageSSAIChannels(const DescribeStreamPackageSSAIChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageSSAIChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageSSAIChannelsResponse rsp = DescribeStreamPackageSSAIChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageSSAIChannelsOutcome(rsp);
        else
            return DescribeStreamPackageSSAIChannelsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageSSAIChannelsOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageSSAIChannelsAsync(const DescribeStreamPackageSSAIChannelsRequest& request, const DescribeStreamPackageSSAIChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageSSAIChannelsRequest&;
    using Resp = DescribeStreamPackageSSAIChannelsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageSSAIChannels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageSSAIChannelsOutcomeCallable MdpClient::DescribeStreamPackageSSAIChannelsCallable(const DescribeStreamPackageSSAIChannelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageSSAIChannelsOutcome>>();
    DescribeStreamPackageSSAIChannelsAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageSSAIChannelsRequest&,
        DescribeStreamPackageSSAIChannelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageSSAIUsageOutcome MdpClient::DescribeStreamPackageSSAIUsage(const DescribeStreamPackageSSAIUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageSSAIUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageSSAIUsageResponse rsp = DescribeStreamPackageSSAIUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageSSAIUsageOutcome(rsp);
        else
            return DescribeStreamPackageSSAIUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageSSAIUsageOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageSSAIUsageAsync(const DescribeStreamPackageSSAIUsageRequest& request, const DescribeStreamPackageSSAIUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageSSAIUsageRequest&;
    using Resp = DescribeStreamPackageSSAIUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageSSAIUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageSSAIUsageOutcomeCallable MdpClient::DescribeStreamPackageSSAIUsageCallable(const DescribeStreamPackageSSAIUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageSSAIUsageOutcome>>();
    DescribeStreamPackageSSAIUsageAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageSSAIUsageRequest&,
        DescribeStreamPackageSSAIUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageSourceOutcome MdpClient::DescribeStreamPackageSource(const DescribeStreamPackageSourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageSourceResponse rsp = DescribeStreamPackageSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageSourceOutcome(rsp);
        else
            return DescribeStreamPackageSourceOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageSourceOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageSourceAsync(const DescribeStreamPackageSourceRequest& request, const DescribeStreamPackageSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageSourceRequest&;
    using Resp = DescribeStreamPackageSourceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageSourceOutcomeCallable MdpClient::DescribeStreamPackageSourceCallable(const DescribeStreamPackageSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageSourceOutcome>>();
    DescribeStreamPackageSourceAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageSourceRequest&,
        DescribeStreamPackageSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageSourceAlertsOutcome MdpClient::DescribeStreamPackageSourceAlerts(const DescribeStreamPackageSourceAlertsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageSourceAlerts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageSourceAlertsResponse rsp = DescribeStreamPackageSourceAlertsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageSourceAlertsOutcome(rsp);
        else
            return DescribeStreamPackageSourceAlertsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageSourceAlertsOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageSourceAlertsAsync(const DescribeStreamPackageSourceAlertsRequest& request, const DescribeStreamPackageSourceAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageSourceAlertsRequest&;
    using Resp = DescribeStreamPackageSourceAlertsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageSourceAlerts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageSourceAlertsOutcomeCallable MdpClient::DescribeStreamPackageSourceAlertsCallable(const DescribeStreamPackageSourceAlertsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageSourceAlertsOutcome>>();
    DescribeStreamPackageSourceAlertsAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageSourceAlertsRequest&,
        DescribeStreamPackageSourceAlertsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageSourceLocationOutcome MdpClient::DescribeStreamPackageSourceLocation(const DescribeStreamPackageSourceLocationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageSourceLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageSourceLocationResponse rsp = DescribeStreamPackageSourceLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageSourceLocationOutcome(rsp);
        else
            return DescribeStreamPackageSourceLocationOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageSourceLocationOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageSourceLocationAsync(const DescribeStreamPackageSourceLocationRequest& request, const DescribeStreamPackageSourceLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageSourceLocationRequest&;
    using Resp = DescribeStreamPackageSourceLocationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageSourceLocation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageSourceLocationOutcomeCallable MdpClient::DescribeStreamPackageSourceLocationCallable(const DescribeStreamPackageSourceLocationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageSourceLocationOutcome>>();
    DescribeStreamPackageSourceLocationAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageSourceLocationRequest&,
        DescribeStreamPackageSourceLocationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageSourceLocationAlertsOutcome MdpClient::DescribeStreamPackageSourceLocationAlerts(const DescribeStreamPackageSourceLocationAlertsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageSourceLocationAlerts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageSourceLocationAlertsResponse rsp = DescribeStreamPackageSourceLocationAlertsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageSourceLocationAlertsOutcome(rsp);
        else
            return DescribeStreamPackageSourceLocationAlertsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageSourceLocationAlertsOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageSourceLocationAlertsAsync(const DescribeStreamPackageSourceLocationAlertsRequest& request, const DescribeStreamPackageSourceLocationAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageSourceLocationAlertsRequest&;
    using Resp = DescribeStreamPackageSourceLocationAlertsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageSourceLocationAlerts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageSourceLocationAlertsOutcomeCallable MdpClient::DescribeStreamPackageSourceLocationAlertsCallable(const DescribeStreamPackageSourceLocationAlertsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageSourceLocationAlertsOutcome>>();
    DescribeStreamPackageSourceLocationAlertsAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageSourceLocationAlertsRequest&,
        DescribeStreamPackageSourceLocationAlertsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageSourceLocationsOutcome MdpClient::DescribeStreamPackageSourceLocations(const DescribeStreamPackageSourceLocationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageSourceLocations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageSourceLocationsResponse rsp = DescribeStreamPackageSourceLocationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageSourceLocationsOutcome(rsp);
        else
            return DescribeStreamPackageSourceLocationsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageSourceLocationsOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageSourceLocationsAsync(const DescribeStreamPackageSourceLocationsRequest& request, const DescribeStreamPackageSourceLocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageSourceLocationsRequest&;
    using Resp = DescribeStreamPackageSourceLocationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageSourceLocations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageSourceLocationsOutcomeCallable MdpClient::DescribeStreamPackageSourceLocationsCallable(const DescribeStreamPackageSourceLocationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageSourceLocationsOutcome>>();
    DescribeStreamPackageSourceLocationsAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageSourceLocationsRequest&,
        DescribeStreamPackageSourceLocationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageSourcesOutcome MdpClient::DescribeStreamPackageSources(const DescribeStreamPackageSourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageSources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageSourcesResponse rsp = DescribeStreamPackageSourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageSourcesOutcome(rsp);
        else
            return DescribeStreamPackageSourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageSourcesOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageSourcesAsync(const DescribeStreamPackageSourcesRequest& request, const DescribeStreamPackageSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageSourcesRequest&;
    using Resp = DescribeStreamPackageSourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageSources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageSourcesOutcomeCallable MdpClient::DescribeStreamPackageSourcesCallable(const DescribeStreamPackageSourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageSourcesOutcome>>();
    DescribeStreamPackageSourcesAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageSourcesRequest&,
        DescribeStreamPackageSourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageVodRemuxTaskOutcome MdpClient::DescribeStreamPackageVodRemuxTask(const DescribeStreamPackageVodRemuxTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageVodRemuxTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageVodRemuxTaskResponse rsp = DescribeStreamPackageVodRemuxTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageVodRemuxTaskOutcome(rsp);
        else
            return DescribeStreamPackageVodRemuxTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageVodRemuxTaskOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageVodRemuxTaskAsync(const DescribeStreamPackageVodRemuxTaskRequest& request, const DescribeStreamPackageVodRemuxTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageVodRemuxTaskRequest&;
    using Resp = DescribeStreamPackageVodRemuxTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageVodRemuxTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageVodRemuxTaskOutcomeCallable MdpClient::DescribeStreamPackageVodRemuxTaskCallable(const DescribeStreamPackageVodRemuxTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageVodRemuxTaskOutcome>>();
    DescribeStreamPackageVodRemuxTaskAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageVodRemuxTaskRequest&,
        DescribeStreamPackageVodRemuxTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::DescribeStreamPackageVodRemuxTasksOutcome MdpClient::DescribeStreamPackageVodRemuxTasks(const DescribeStreamPackageVodRemuxTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPackageVodRemuxTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPackageVodRemuxTasksResponse rsp = DescribeStreamPackageVodRemuxTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPackageVodRemuxTasksOutcome(rsp);
        else
            return DescribeStreamPackageVodRemuxTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPackageVodRemuxTasksOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeStreamPackageVodRemuxTasksAsync(const DescribeStreamPackageVodRemuxTasksRequest& request, const DescribeStreamPackageVodRemuxTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPackageVodRemuxTasksRequest&;
    using Resp = DescribeStreamPackageVodRemuxTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPackageVodRemuxTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::DescribeStreamPackageVodRemuxTasksOutcomeCallable MdpClient::DescribeStreamPackageVodRemuxTasksCallable(const DescribeStreamPackageVodRemuxTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPackageVodRemuxTasksOutcome>>();
    DescribeStreamPackageVodRemuxTasksAsync(
    request,
    [prom](
        const MdpClient*,
        const DescribeStreamPackageVodRemuxTasksRequest&,
        DescribeStreamPackageVodRemuxTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::ModifyStreamPackageChannelOutcome MdpClient::ModifyStreamPackageChannel(const ModifyStreamPackageChannelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamPackageChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamPackageChannelResponse rsp = ModifyStreamPackageChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamPackageChannelOutcome(rsp);
        else
            return ModifyStreamPackageChannelOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamPackageChannelOutcome(outcome.GetError());
    }
}

void MdpClient::ModifyStreamPackageChannelAsync(const ModifyStreamPackageChannelRequest& request, const ModifyStreamPackageChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStreamPackageChannelRequest&;
    using Resp = ModifyStreamPackageChannelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamPackageChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::ModifyStreamPackageChannelOutcomeCallable MdpClient::ModifyStreamPackageChannelCallable(const ModifyStreamPackageChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamPackageChannelOutcome>>();
    ModifyStreamPackageChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const ModifyStreamPackageChannelRequest&,
        ModifyStreamPackageChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::ModifyStreamPackageChannelEndpointOutcome MdpClient::ModifyStreamPackageChannelEndpoint(const ModifyStreamPackageChannelEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamPackageChannelEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamPackageChannelEndpointResponse rsp = ModifyStreamPackageChannelEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamPackageChannelEndpointOutcome(rsp);
        else
            return ModifyStreamPackageChannelEndpointOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamPackageChannelEndpointOutcome(outcome.GetError());
    }
}

void MdpClient::ModifyStreamPackageChannelEndpointAsync(const ModifyStreamPackageChannelEndpointRequest& request, const ModifyStreamPackageChannelEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStreamPackageChannelEndpointRequest&;
    using Resp = ModifyStreamPackageChannelEndpointResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamPackageChannelEndpoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::ModifyStreamPackageChannelEndpointOutcomeCallable MdpClient::ModifyStreamPackageChannelEndpointCallable(const ModifyStreamPackageChannelEndpointRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamPackageChannelEndpointOutcome>>();
    ModifyStreamPackageChannelEndpointAsync(
    request,
    [prom](
        const MdpClient*,
        const ModifyStreamPackageChannelEndpointRequest&,
        ModifyStreamPackageChannelEndpointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::ModifyStreamPackageChannelInputAuthInfoOutcome MdpClient::ModifyStreamPackageChannelInputAuthInfo(const ModifyStreamPackageChannelInputAuthInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamPackageChannelInputAuthInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamPackageChannelInputAuthInfoResponse rsp = ModifyStreamPackageChannelInputAuthInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamPackageChannelInputAuthInfoOutcome(rsp);
        else
            return ModifyStreamPackageChannelInputAuthInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamPackageChannelInputAuthInfoOutcome(outcome.GetError());
    }
}

void MdpClient::ModifyStreamPackageChannelInputAuthInfoAsync(const ModifyStreamPackageChannelInputAuthInfoRequest& request, const ModifyStreamPackageChannelInputAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStreamPackageChannelInputAuthInfoRequest&;
    using Resp = ModifyStreamPackageChannelInputAuthInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamPackageChannelInputAuthInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::ModifyStreamPackageChannelInputAuthInfoOutcomeCallable MdpClient::ModifyStreamPackageChannelInputAuthInfoCallable(const ModifyStreamPackageChannelInputAuthInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamPackageChannelInputAuthInfoOutcome>>();
    ModifyStreamPackageChannelInputAuthInfoAsync(
    request,
    [prom](
        const MdpClient*,
        const ModifyStreamPackageChannelInputAuthInfoRequest&,
        ModifyStreamPackageChannelInputAuthInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::ModifyStreamPackageLinearAssemblyChannelOutcome MdpClient::ModifyStreamPackageLinearAssemblyChannel(const ModifyStreamPackageLinearAssemblyChannelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamPackageLinearAssemblyChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamPackageLinearAssemblyChannelResponse rsp = ModifyStreamPackageLinearAssemblyChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamPackageLinearAssemblyChannelOutcome(rsp);
        else
            return ModifyStreamPackageLinearAssemblyChannelOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamPackageLinearAssemblyChannelOutcome(outcome.GetError());
    }
}

void MdpClient::ModifyStreamPackageLinearAssemblyChannelAsync(const ModifyStreamPackageLinearAssemblyChannelRequest& request, const ModifyStreamPackageLinearAssemblyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStreamPackageLinearAssemblyChannelRequest&;
    using Resp = ModifyStreamPackageLinearAssemblyChannelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamPackageLinearAssemblyChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::ModifyStreamPackageLinearAssemblyChannelOutcomeCallable MdpClient::ModifyStreamPackageLinearAssemblyChannelCallable(const ModifyStreamPackageLinearAssemblyChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamPackageLinearAssemblyChannelOutcome>>();
    ModifyStreamPackageLinearAssemblyChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const ModifyStreamPackageLinearAssemblyChannelRequest&,
        ModifyStreamPackageLinearAssemblyChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::ModifyStreamPackageLinearAssemblyProgramOutcome MdpClient::ModifyStreamPackageLinearAssemblyProgram(const ModifyStreamPackageLinearAssemblyProgramRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamPackageLinearAssemblyProgram");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamPackageLinearAssemblyProgramResponse rsp = ModifyStreamPackageLinearAssemblyProgramResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamPackageLinearAssemblyProgramOutcome(rsp);
        else
            return ModifyStreamPackageLinearAssemblyProgramOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamPackageLinearAssemblyProgramOutcome(outcome.GetError());
    }
}

void MdpClient::ModifyStreamPackageLinearAssemblyProgramAsync(const ModifyStreamPackageLinearAssemblyProgramRequest& request, const ModifyStreamPackageLinearAssemblyProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStreamPackageLinearAssemblyProgramRequest&;
    using Resp = ModifyStreamPackageLinearAssemblyProgramResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamPackageLinearAssemblyProgram", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::ModifyStreamPackageLinearAssemblyProgramOutcomeCallable MdpClient::ModifyStreamPackageLinearAssemblyProgramCallable(const ModifyStreamPackageLinearAssemblyProgramRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamPackageLinearAssemblyProgramOutcome>>();
    ModifyStreamPackageLinearAssemblyProgramAsync(
    request,
    [prom](
        const MdpClient*,
        const ModifyStreamPackageLinearAssemblyProgramRequest&,
        ModifyStreamPackageLinearAssemblyProgramOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::ModifyStreamPackageSSAIChannelOutcome MdpClient::ModifyStreamPackageSSAIChannel(const ModifyStreamPackageSSAIChannelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamPackageSSAIChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamPackageSSAIChannelResponse rsp = ModifyStreamPackageSSAIChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamPackageSSAIChannelOutcome(rsp);
        else
            return ModifyStreamPackageSSAIChannelOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamPackageSSAIChannelOutcome(outcome.GetError());
    }
}

void MdpClient::ModifyStreamPackageSSAIChannelAsync(const ModifyStreamPackageSSAIChannelRequest& request, const ModifyStreamPackageSSAIChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStreamPackageSSAIChannelRequest&;
    using Resp = ModifyStreamPackageSSAIChannelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamPackageSSAIChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::ModifyStreamPackageSSAIChannelOutcomeCallable MdpClient::ModifyStreamPackageSSAIChannelCallable(const ModifyStreamPackageSSAIChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamPackageSSAIChannelOutcome>>();
    ModifyStreamPackageSSAIChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const ModifyStreamPackageSSAIChannelRequest&,
        ModifyStreamPackageSSAIChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::ModifyStreamPackageSourceOutcome MdpClient::ModifyStreamPackageSource(const ModifyStreamPackageSourceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamPackageSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamPackageSourceResponse rsp = ModifyStreamPackageSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamPackageSourceOutcome(rsp);
        else
            return ModifyStreamPackageSourceOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamPackageSourceOutcome(outcome.GetError());
    }
}

void MdpClient::ModifyStreamPackageSourceAsync(const ModifyStreamPackageSourceRequest& request, const ModifyStreamPackageSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStreamPackageSourceRequest&;
    using Resp = ModifyStreamPackageSourceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamPackageSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::ModifyStreamPackageSourceOutcomeCallable MdpClient::ModifyStreamPackageSourceCallable(const ModifyStreamPackageSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamPackageSourceOutcome>>();
    ModifyStreamPackageSourceAsync(
    request,
    [prom](
        const MdpClient*,
        const ModifyStreamPackageSourceRequest&,
        ModifyStreamPackageSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::ModifyStreamPackageSourceLocationOutcome MdpClient::ModifyStreamPackageSourceLocation(const ModifyStreamPackageSourceLocationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamPackageSourceLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamPackageSourceLocationResponse rsp = ModifyStreamPackageSourceLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamPackageSourceLocationOutcome(rsp);
        else
            return ModifyStreamPackageSourceLocationOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamPackageSourceLocationOutcome(outcome.GetError());
    }
}

void MdpClient::ModifyStreamPackageSourceLocationAsync(const ModifyStreamPackageSourceLocationRequest& request, const ModifyStreamPackageSourceLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStreamPackageSourceLocationRequest&;
    using Resp = ModifyStreamPackageSourceLocationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamPackageSourceLocation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::ModifyStreamPackageSourceLocationOutcomeCallable MdpClient::ModifyStreamPackageSourceLocationCallable(const ModifyStreamPackageSourceLocationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamPackageSourceLocationOutcome>>();
    ModifyStreamPackageSourceLocationAsync(
    request,
    [prom](
        const MdpClient*,
        const ModifyStreamPackageSourceLocationRequest&,
        ModifyStreamPackageSourceLocationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::StartStreamPackageLinearAssemblyChannelOutcome MdpClient::StartStreamPackageLinearAssemblyChannel(const StartStreamPackageLinearAssemblyChannelRequest &request)
{
    auto outcome = MakeRequest(request, "StartStreamPackageLinearAssemblyChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartStreamPackageLinearAssemblyChannelResponse rsp = StartStreamPackageLinearAssemblyChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartStreamPackageLinearAssemblyChannelOutcome(rsp);
        else
            return StartStreamPackageLinearAssemblyChannelOutcome(o.GetError());
    }
    else
    {
        return StartStreamPackageLinearAssemblyChannelOutcome(outcome.GetError());
    }
}

void MdpClient::StartStreamPackageLinearAssemblyChannelAsync(const StartStreamPackageLinearAssemblyChannelRequest& request, const StartStreamPackageLinearAssemblyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartStreamPackageLinearAssemblyChannelRequest&;
    using Resp = StartStreamPackageLinearAssemblyChannelResponse;

    DoRequestAsync<Req, Resp>(
        "StartStreamPackageLinearAssemblyChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::StartStreamPackageLinearAssemblyChannelOutcomeCallable MdpClient::StartStreamPackageLinearAssemblyChannelCallable(const StartStreamPackageLinearAssemblyChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartStreamPackageLinearAssemblyChannelOutcome>>();
    StartStreamPackageLinearAssemblyChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const StartStreamPackageLinearAssemblyChannelRequest&,
        StartStreamPackageLinearAssemblyChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::StartStreamPackageVodRemuxTaskOutcome MdpClient::StartStreamPackageVodRemuxTask(const StartStreamPackageVodRemuxTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StartStreamPackageVodRemuxTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartStreamPackageVodRemuxTaskResponse rsp = StartStreamPackageVodRemuxTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartStreamPackageVodRemuxTaskOutcome(rsp);
        else
            return StartStreamPackageVodRemuxTaskOutcome(o.GetError());
    }
    else
    {
        return StartStreamPackageVodRemuxTaskOutcome(outcome.GetError());
    }
}

void MdpClient::StartStreamPackageVodRemuxTaskAsync(const StartStreamPackageVodRemuxTaskRequest& request, const StartStreamPackageVodRemuxTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartStreamPackageVodRemuxTaskRequest&;
    using Resp = StartStreamPackageVodRemuxTaskResponse;

    DoRequestAsync<Req, Resp>(
        "StartStreamPackageVodRemuxTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::StartStreamPackageVodRemuxTaskOutcomeCallable MdpClient::StartStreamPackageVodRemuxTaskCallable(const StartStreamPackageVodRemuxTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartStreamPackageVodRemuxTaskOutcome>>();
    StartStreamPackageVodRemuxTaskAsync(
    request,
    [prom](
        const MdpClient*,
        const StartStreamPackageVodRemuxTaskRequest&,
        StartStreamPackageVodRemuxTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::StopStreamPackageLinearAssemblyChannelOutcome MdpClient::StopStreamPackageLinearAssemblyChannel(const StopStreamPackageLinearAssemblyChannelRequest &request)
{
    auto outcome = MakeRequest(request, "StopStreamPackageLinearAssemblyChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopStreamPackageLinearAssemblyChannelResponse rsp = StopStreamPackageLinearAssemblyChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopStreamPackageLinearAssemblyChannelOutcome(rsp);
        else
            return StopStreamPackageLinearAssemblyChannelOutcome(o.GetError());
    }
    else
    {
        return StopStreamPackageLinearAssemblyChannelOutcome(outcome.GetError());
    }
}

void MdpClient::StopStreamPackageLinearAssemblyChannelAsync(const StopStreamPackageLinearAssemblyChannelRequest& request, const StopStreamPackageLinearAssemblyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopStreamPackageLinearAssemblyChannelRequest&;
    using Resp = StopStreamPackageLinearAssemblyChannelResponse;

    DoRequestAsync<Req, Resp>(
        "StopStreamPackageLinearAssemblyChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::StopStreamPackageLinearAssemblyChannelOutcomeCallable MdpClient::StopStreamPackageLinearAssemblyChannelCallable(const StopStreamPackageLinearAssemblyChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopStreamPackageLinearAssemblyChannelOutcome>>();
    StopStreamPackageLinearAssemblyChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const StopStreamPackageLinearAssemblyChannelRequest&,
        StopStreamPackageLinearAssemblyChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::UnbindCdnDomainWithChannelOutcome MdpClient::UnbindCdnDomainWithChannel(const UnbindCdnDomainWithChannelRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindCdnDomainWithChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindCdnDomainWithChannelResponse rsp = UnbindCdnDomainWithChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindCdnDomainWithChannelOutcome(rsp);
        else
            return UnbindCdnDomainWithChannelOutcome(o.GetError());
    }
    else
    {
        return UnbindCdnDomainWithChannelOutcome(outcome.GetError());
    }
}

void MdpClient::UnbindCdnDomainWithChannelAsync(const UnbindCdnDomainWithChannelRequest& request, const UnbindCdnDomainWithChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindCdnDomainWithChannelRequest&;
    using Resp = UnbindCdnDomainWithChannelResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindCdnDomainWithChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::UnbindCdnDomainWithChannelOutcomeCallable MdpClient::UnbindCdnDomainWithChannelCallable(const UnbindCdnDomainWithChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindCdnDomainWithChannelOutcome>>();
    UnbindCdnDomainWithChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const UnbindCdnDomainWithChannelRequest&,
        UnbindCdnDomainWithChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::UnbindLinearAssemblyCDNDomainWithChannelOutcome MdpClient::UnbindLinearAssemblyCDNDomainWithChannel(const UnbindLinearAssemblyCDNDomainWithChannelRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindLinearAssemblyCDNDomainWithChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindLinearAssemblyCDNDomainWithChannelResponse rsp = UnbindLinearAssemblyCDNDomainWithChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindLinearAssemblyCDNDomainWithChannelOutcome(rsp);
        else
            return UnbindLinearAssemblyCDNDomainWithChannelOutcome(o.GetError());
    }
    else
    {
        return UnbindLinearAssemblyCDNDomainWithChannelOutcome(outcome.GetError());
    }
}

void MdpClient::UnbindLinearAssemblyCDNDomainWithChannelAsync(const UnbindLinearAssemblyCDNDomainWithChannelRequest& request, const UnbindLinearAssemblyCDNDomainWithChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindLinearAssemblyCDNDomainWithChannelRequest&;
    using Resp = UnbindLinearAssemblyCDNDomainWithChannelResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindLinearAssemblyCDNDomainWithChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::UnbindLinearAssemblyCDNDomainWithChannelOutcomeCallable MdpClient::UnbindLinearAssemblyCDNDomainWithChannelCallable(const UnbindLinearAssemblyCDNDomainWithChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindLinearAssemblyCDNDomainWithChannelOutcome>>();
    UnbindLinearAssemblyCDNDomainWithChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const UnbindLinearAssemblyCDNDomainWithChannelRequest&,
        UnbindLinearAssemblyCDNDomainWithChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MdpClient::UnbindSSAICDNDomainWithChannelOutcome MdpClient::UnbindSSAICDNDomainWithChannel(const UnbindSSAICDNDomainWithChannelRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindSSAICDNDomainWithChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindSSAICDNDomainWithChannelResponse rsp = UnbindSSAICDNDomainWithChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindSSAICDNDomainWithChannelOutcome(rsp);
        else
            return UnbindSSAICDNDomainWithChannelOutcome(o.GetError());
    }
    else
    {
        return UnbindSSAICDNDomainWithChannelOutcome(outcome.GetError());
    }
}

void MdpClient::UnbindSSAICDNDomainWithChannelAsync(const UnbindSSAICDNDomainWithChannelRequest& request, const UnbindSSAICDNDomainWithChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindSSAICDNDomainWithChannelRequest&;
    using Resp = UnbindSSAICDNDomainWithChannelResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindSSAICDNDomainWithChannel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MdpClient::UnbindSSAICDNDomainWithChannelOutcomeCallable MdpClient::UnbindSSAICDNDomainWithChannelCallable(const UnbindSSAICDNDomainWithChannelRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindSSAICDNDomainWithChannelOutcome>>();
    UnbindSSAICDNDomainWithChannelAsync(
    request,
    [prom](
        const MdpClient*,
        const UnbindSSAICDNDomainWithChannelRequest&,
        UnbindSSAICDNDomainWithChannelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

