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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindLinearAssemblyCDNDomainWithChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::BindLinearAssemblyCDNDomainWithChannelOutcomeCallable MdpClient::BindLinearAssemblyCDNDomainWithChannelCallable(const BindLinearAssemblyCDNDomainWithChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindLinearAssemblyCDNDomainWithChannelOutcome()>>(
        [this, request]()
        {
            return this->BindLinearAssemblyCDNDomainWithChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindNewLVBDomainWithChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::BindNewLVBDomainWithChannelOutcomeCallable MdpClient::BindNewLVBDomainWithChannelCallable(const BindNewLVBDomainWithChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindNewLVBDomainWithChannelOutcome()>>(
        [this, request]()
        {
            return this->BindNewLVBDomainWithChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamPackageChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::CreateStreamPackageChannelOutcomeCallable MdpClient::CreateStreamPackageChannelCallable(const CreateStreamPackageChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamPackageChannelOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamPackageChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamPackageChannelEndpoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::CreateStreamPackageChannelEndpointOutcomeCallable MdpClient::CreateStreamPackageChannelEndpointCallable(const CreateStreamPackageChannelEndpointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamPackageChannelEndpointOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamPackageChannelEndpoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamPackageHarvestJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::CreateStreamPackageHarvestJobOutcomeCallable MdpClient::CreateStreamPackageHarvestJobCallable(const CreateStreamPackageHarvestJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamPackageHarvestJobOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamPackageHarvestJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamPackageLinearAssemblyChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::CreateStreamPackageLinearAssemblyChannelOutcomeCallable MdpClient::CreateStreamPackageLinearAssemblyChannelCallable(const CreateStreamPackageLinearAssemblyChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamPackageLinearAssemblyChannelOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamPackageLinearAssemblyChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamPackageLinearAssemblyProgram(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::CreateStreamPackageLinearAssemblyProgramOutcomeCallable MdpClient::CreateStreamPackageLinearAssemblyProgramCallable(const CreateStreamPackageLinearAssemblyProgramRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamPackageLinearAssemblyProgramOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamPackageLinearAssemblyProgram(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamPackageSSAIChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::CreateStreamPackageSSAIChannelOutcomeCallable MdpClient::CreateStreamPackageSSAIChannelCallable(const CreateStreamPackageSSAIChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamPackageSSAIChannelOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamPackageSSAIChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamPackageSource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::CreateStreamPackageSourceOutcomeCallable MdpClient::CreateStreamPackageSourceCallable(const CreateStreamPackageSourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamPackageSourceOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamPackageSource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamPackageSourceLocation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::CreateStreamPackageSourceLocationOutcomeCallable MdpClient::CreateStreamPackageSourceLocationCallable(const CreateStreamPackageSourceLocationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamPackageSourceLocationOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamPackageSourceLocation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamPackageChannelEndpoints(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DeleteStreamPackageChannelEndpointsOutcomeCallable MdpClient::DeleteStreamPackageChannelEndpointsCallable(const DeleteStreamPackageChannelEndpointsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamPackageChannelEndpointsOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamPackageChannelEndpoints(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamPackageChannels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DeleteStreamPackageChannelsOutcomeCallable MdpClient::DeleteStreamPackageChannelsCallable(const DeleteStreamPackageChannelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamPackageChannelsOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamPackageChannels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamPackageHarvestJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DeleteStreamPackageHarvestJobOutcomeCallable MdpClient::DeleteStreamPackageHarvestJobCallable(const DeleteStreamPackageHarvestJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamPackageHarvestJobOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamPackageHarvestJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamPackageHarvestJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DeleteStreamPackageHarvestJobsOutcomeCallable MdpClient::DeleteStreamPackageHarvestJobsCallable(const DeleteStreamPackageHarvestJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamPackageHarvestJobsOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamPackageHarvestJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamPackageLinearAssemblyChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DeleteStreamPackageLinearAssemblyChannelOutcomeCallable MdpClient::DeleteStreamPackageLinearAssemblyChannelCallable(const DeleteStreamPackageLinearAssemblyChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamPackageLinearAssemblyChannelOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamPackageLinearAssemblyChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamPackageLinearAssemblyChannels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DeleteStreamPackageLinearAssemblyChannelsOutcomeCallable MdpClient::DeleteStreamPackageLinearAssemblyChannelsCallable(const DeleteStreamPackageLinearAssemblyChannelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamPackageLinearAssemblyChannelsOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamPackageLinearAssemblyChannels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamPackageLinearAssemblyProgram(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DeleteStreamPackageLinearAssemblyProgramOutcomeCallable MdpClient::DeleteStreamPackageLinearAssemblyProgramCallable(const DeleteStreamPackageLinearAssemblyProgramRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamPackageLinearAssemblyProgramOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamPackageLinearAssemblyProgram(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamPackageLinearAssemblyPrograms(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DeleteStreamPackageLinearAssemblyProgramsOutcomeCallable MdpClient::DeleteStreamPackageLinearAssemblyProgramsCallable(const DeleteStreamPackageLinearAssemblyProgramsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamPackageLinearAssemblyProgramsOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamPackageLinearAssemblyPrograms(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamPackageSSAIChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DeleteStreamPackageSSAIChannelOutcomeCallable MdpClient::DeleteStreamPackageSSAIChannelCallable(const DeleteStreamPackageSSAIChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamPackageSSAIChannelOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamPackageSSAIChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamPackageSource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DeleteStreamPackageSourceOutcomeCallable MdpClient::DeleteStreamPackageSourceCallable(const DeleteStreamPackageSourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamPackageSourceOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamPackageSource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamPackageSourceLocation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DeleteStreamPackageSourceLocationOutcomeCallable MdpClient::DeleteStreamPackageSourceLocationCallable(const DeleteStreamPackageSourceLocationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamPackageSourceLocationOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamPackageSourceLocation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLinearAssemblyCDNDomainWithChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeLinearAssemblyCDNDomainWithChannelOutcomeCallable MdpClient::DescribeLinearAssemblyCDNDomainWithChannelCallable(const DescribeLinearAssemblyCDNDomainWithChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLinearAssemblyCDNDomainWithChannelOutcome()>>(
        [this, request]()
        {
            return this->DescribeLinearAssemblyCDNDomainWithChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLinearAssemblyCDNDomainWithChannels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeLinearAssemblyCDNDomainWithChannelsOutcomeCallable MdpClient::DescribeLinearAssemblyCDNDomainWithChannelsCallable(const DescribeLinearAssemblyCDNDomainWithChannelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLinearAssemblyCDNDomainWithChannelsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLinearAssemblyCDNDomainWithChannels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPackageChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeStreamPackageChannelOutcomeCallable MdpClient::DescribeStreamPackageChannelCallable(const DescribeStreamPackageChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPackageChannelOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPackageChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPackageChannels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeStreamPackageChannelsOutcomeCallable MdpClient::DescribeStreamPackageChannelsCallable(const DescribeStreamPackageChannelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPackageChannelsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPackageChannels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPackageHarvestJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeStreamPackageHarvestJobOutcomeCallable MdpClient::DescribeStreamPackageHarvestJobCallable(const DescribeStreamPackageHarvestJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPackageHarvestJobOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPackageHarvestJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPackageHarvestJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeStreamPackageHarvestJobsOutcomeCallable MdpClient::DescribeStreamPackageHarvestJobsCallable(const DescribeStreamPackageHarvestJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPackageHarvestJobsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPackageHarvestJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPackageLinearAssemblyChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeStreamPackageLinearAssemblyChannelOutcomeCallable MdpClient::DescribeStreamPackageLinearAssemblyChannelCallable(const DescribeStreamPackageLinearAssemblyChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPackageLinearAssemblyChannelOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPackageLinearAssemblyChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPackageLinearAssemblyChannelAlerts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeStreamPackageLinearAssemblyChannelAlertsOutcomeCallable MdpClient::DescribeStreamPackageLinearAssemblyChannelAlertsCallable(const DescribeStreamPackageLinearAssemblyChannelAlertsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPackageLinearAssemblyChannelAlertsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPackageLinearAssemblyChannelAlerts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPackageLinearAssemblyChannels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeStreamPackageLinearAssemblyChannelsOutcomeCallable MdpClient::DescribeStreamPackageLinearAssemblyChannelsCallable(const DescribeStreamPackageLinearAssemblyChannelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPackageLinearAssemblyChannelsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPackageLinearAssemblyChannels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPackageLinearAssemblyProgram(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeStreamPackageLinearAssemblyProgramOutcomeCallable MdpClient::DescribeStreamPackageLinearAssemblyProgramCallable(const DescribeStreamPackageLinearAssemblyProgramRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPackageLinearAssemblyProgramOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPackageLinearAssemblyProgram(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPackageLinearAssemblyProgramSchedules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeStreamPackageLinearAssemblyProgramSchedulesOutcomeCallable MdpClient::DescribeStreamPackageLinearAssemblyProgramSchedulesCallable(const DescribeStreamPackageLinearAssemblyProgramSchedulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPackageLinearAssemblyProgramSchedulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPackageLinearAssemblyProgramSchedules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPackageLinearAssemblyPrograms(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeStreamPackageLinearAssemblyProgramsOutcomeCallable MdpClient::DescribeStreamPackageLinearAssemblyProgramsCallable(const DescribeStreamPackageLinearAssemblyProgramsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPackageLinearAssemblyProgramsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPackageLinearAssemblyPrograms(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPackageSSAIChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeStreamPackageSSAIChannelOutcomeCallable MdpClient::DescribeStreamPackageSSAIChannelCallable(const DescribeStreamPackageSSAIChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPackageSSAIChannelOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPackageSSAIChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPackageSSAIChannels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeStreamPackageSSAIChannelsOutcomeCallable MdpClient::DescribeStreamPackageSSAIChannelsCallable(const DescribeStreamPackageSSAIChannelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPackageSSAIChannelsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPackageSSAIChannels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPackageSSAIUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeStreamPackageSSAIUsageOutcomeCallable MdpClient::DescribeStreamPackageSSAIUsageCallable(const DescribeStreamPackageSSAIUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPackageSSAIUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPackageSSAIUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPackageSource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeStreamPackageSourceOutcomeCallable MdpClient::DescribeStreamPackageSourceCallable(const DescribeStreamPackageSourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPackageSourceOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPackageSource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPackageSourceAlerts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeStreamPackageSourceAlertsOutcomeCallable MdpClient::DescribeStreamPackageSourceAlertsCallable(const DescribeStreamPackageSourceAlertsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPackageSourceAlertsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPackageSourceAlerts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPackageSourceLocation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeStreamPackageSourceLocationOutcomeCallable MdpClient::DescribeStreamPackageSourceLocationCallable(const DescribeStreamPackageSourceLocationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPackageSourceLocationOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPackageSourceLocation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPackageSourceLocationAlerts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeStreamPackageSourceLocationAlertsOutcomeCallable MdpClient::DescribeStreamPackageSourceLocationAlertsCallable(const DescribeStreamPackageSourceLocationAlertsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPackageSourceLocationAlertsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPackageSourceLocationAlerts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPackageSourceLocations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeStreamPackageSourceLocationsOutcomeCallable MdpClient::DescribeStreamPackageSourceLocationsCallable(const DescribeStreamPackageSourceLocationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPackageSourceLocationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPackageSourceLocations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPackageSources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeStreamPackageSourcesOutcomeCallable MdpClient::DescribeStreamPackageSourcesCallable(const DescribeStreamPackageSourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPackageSourcesOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPackageSources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamPackageChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::ModifyStreamPackageChannelOutcomeCallable MdpClient::ModifyStreamPackageChannelCallable(const ModifyStreamPackageChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamPackageChannelOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamPackageChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamPackageChannelEndpoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::ModifyStreamPackageChannelEndpointOutcomeCallable MdpClient::ModifyStreamPackageChannelEndpointCallable(const ModifyStreamPackageChannelEndpointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamPackageChannelEndpointOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamPackageChannelEndpoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamPackageChannelInputAuthInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::ModifyStreamPackageChannelInputAuthInfoOutcomeCallable MdpClient::ModifyStreamPackageChannelInputAuthInfoCallable(const ModifyStreamPackageChannelInputAuthInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamPackageChannelInputAuthInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamPackageChannelInputAuthInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamPackageLinearAssemblyChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::ModifyStreamPackageLinearAssemblyChannelOutcomeCallable MdpClient::ModifyStreamPackageLinearAssemblyChannelCallable(const ModifyStreamPackageLinearAssemblyChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamPackageLinearAssemblyChannelOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamPackageLinearAssemblyChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamPackageLinearAssemblyProgram(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::ModifyStreamPackageLinearAssemblyProgramOutcomeCallable MdpClient::ModifyStreamPackageLinearAssemblyProgramCallable(const ModifyStreamPackageLinearAssemblyProgramRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamPackageLinearAssemblyProgramOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamPackageLinearAssemblyProgram(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamPackageSSAIChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::ModifyStreamPackageSSAIChannelOutcomeCallable MdpClient::ModifyStreamPackageSSAIChannelCallable(const ModifyStreamPackageSSAIChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamPackageSSAIChannelOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamPackageSSAIChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamPackageSource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::ModifyStreamPackageSourceOutcomeCallable MdpClient::ModifyStreamPackageSourceCallable(const ModifyStreamPackageSourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamPackageSourceOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamPackageSource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamPackageSourceLocation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::ModifyStreamPackageSourceLocationOutcomeCallable MdpClient::ModifyStreamPackageSourceLocationCallable(const ModifyStreamPackageSourceLocationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamPackageSourceLocationOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamPackageSourceLocation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartStreamPackageLinearAssemblyChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::StartStreamPackageLinearAssemblyChannelOutcomeCallable MdpClient::StartStreamPackageLinearAssemblyChannelCallable(const StartStreamPackageLinearAssemblyChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartStreamPackageLinearAssemblyChannelOutcome()>>(
        [this, request]()
        {
            return this->StartStreamPackageLinearAssemblyChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopStreamPackageLinearAssemblyChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::StopStreamPackageLinearAssemblyChannelOutcomeCallable MdpClient::StopStreamPackageLinearAssemblyChannelCallable(const StopStreamPackageLinearAssemblyChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopStreamPackageLinearAssemblyChannelOutcome()>>(
        [this, request]()
        {
            return this->StopStreamPackageLinearAssemblyChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindCdnDomainWithChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::UnbindCdnDomainWithChannelOutcomeCallable MdpClient::UnbindCdnDomainWithChannelCallable(const UnbindCdnDomainWithChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindCdnDomainWithChannelOutcome()>>(
        [this, request]()
        {
            return this->UnbindCdnDomainWithChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindLinearAssemblyCDNDomainWithChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::UnbindLinearAssemblyCDNDomainWithChannelOutcomeCallable MdpClient::UnbindLinearAssemblyCDNDomainWithChannelCallable(const UnbindLinearAssemblyCDNDomainWithChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindLinearAssemblyCDNDomainWithChannelOutcome()>>(
        [this, request]()
        {
            return this->UnbindLinearAssemblyCDNDomainWithChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

