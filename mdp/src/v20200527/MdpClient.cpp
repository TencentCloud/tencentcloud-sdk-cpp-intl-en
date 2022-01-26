/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
    const string ENDPOINT = "mdp.tencentcloudapi.com";
}

MdpClient::MdpClient(const Credential &credential, const string &region) :
    MdpClient(credential, region, ClientProfile())
{
}

MdpClient::MdpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
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

