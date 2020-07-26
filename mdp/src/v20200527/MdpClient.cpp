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


MdpClient::CreateMediaPackageChannelOutcome MdpClient::CreateMediaPackageChannel(const CreateMediaPackageChannelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMediaPackageChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMediaPackageChannelResponse rsp = CreateMediaPackageChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMediaPackageChannelOutcome(rsp);
        else
            return CreateMediaPackageChannelOutcome(o.GetError());
    }
    else
    {
        return CreateMediaPackageChannelOutcome(outcome.GetError());
    }
}

void MdpClient::CreateMediaPackageChannelAsync(const CreateMediaPackageChannelRequest& request, const CreateMediaPackageChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMediaPackageChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::CreateMediaPackageChannelOutcomeCallable MdpClient::CreateMediaPackageChannelCallable(const CreateMediaPackageChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMediaPackageChannelOutcome()>>(
        [this, request]()
        {
            return this->CreateMediaPackageChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdpClient::CreateMediaPackageChannelEndpointOutcome MdpClient::CreateMediaPackageChannelEndpoint(const CreateMediaPackageChannelEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMediaPackageChannelEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMediaPackageChannelEndpointResponse rsp = CreateMediaPackageChannelEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMediaPackageChannelEndpointOutcome(rsp);
        else
            return CreateMediaPackageChannelEndpointOutcome(o.GetError());
    }
    else
    {
        return CreateMediaPackageChannelEndpointOutcome(outcome.GetError());
    }
}

void MdpClient::CreateMediaPackageChannelEndpointAsync(const CreateMediaPackageChannelEndpointRequest& request, const CreateMediaPackageChannelEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMediaPackageChannelEndpoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::CreateMediaPackageChannelEndpointOutcomeCallable MdpClient::CreateMediaPackageChannelEndpointCallable(const CreateMediaPackageChannelEndpointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMediaPackageChannelEndpointOutcome()>>(
        [this, request]()
        {
            return this->CreateMediaPackageChannelEndpoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdpClient::DeleteMediaPackageChannelEndpointsOutcome MdpClient::DeleteMediaPackageChannelEndpoints(const DeleteMediaPackageChannelEndpointsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMediaPackageChannelEndpoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMediaPackageChannelEndpointsResponse rsp = DeleteMediaPackageChannelEndpointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMediaPackageChannelEndpointsOutcome(rsp);
        else
            return DeleteMediaPackageChannelEndpointsOutcome(o.GetError());
    }
    else
    {
        return DeleteMediaPackageChannelEndpointsOutcome(outcome.GetError());
    }
}

void MdpClient::DeleteMediaPackageChannelEndpointsAsync(const DeleteMediaPackageChannelEndpointsRequest& request, const DeleteMediaPackageChannelEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMediaPackageChannelEndpoints(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DeleteMediaPackageChannelEndpointsOutcomeCallable MdpClient::DeleteMediaPackageChannelEndpointsCallable(const DeleteMediaPackageChannelEndpointsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMediaPackageChannelEndpointsOutcome()>>(
        [this, request]()
        {
            return this->DeleteMediaPackageChannelEndpoints(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdpClient::DeleteMediaPackageChannelsOutcome MdpClient::DeleteMediaPackageChannels(const DeleteMediaPackageChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMediaPackageChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMediaPackageChannelsResponse rsp = DeleteMediaPackageChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMediaPackageChannelsOutcome(rsp);
        else
            return DeleteMediaPackageChannelsOutcome(o.GetError());
    }
    else
    {
        return DeleteMediaPackageChannelsOutcome(outcome.GetError());
    }
}

void MdpClient::DeleteMediaPackageChannelsAsync(const DeleteMediaPackageChannelsRequest& request, const DeleteMediaPackageChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMediaPackageChannels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DeleteMediaPackageChannelsOutcomeCallable MdpClient::DeleteMediaPackageChannelsCallable(const DeleteMediaPackageChannelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMediaPackageChannelsOutcome()>>(
        [this, request]()
        {
            return this->DeleteMediaPackageChannels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdpClient::DescribeMediaPackageChannelOutcome MdpClient::DescribeMediaPackageChannel(const DescribeMediaPackageChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMediaPackageChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaPackageChannelResponse rsp = DescribeMediaPackageChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaPackageChannelOutcome(rsp);
        else
            return DescribeMediaPackageChannelOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaPackageChannelOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeMediaPackageChannelAsync(const DescribeMediaPackageChannelRequest& request, const DescribeMediaPackageChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMediaPackageChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeMediaPackageChannelOutcomeCallable MdpClient::DescribeMediaPackageChannelCallable(const DescribeMediaPackageChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMediaPackageChannelOutcome()>>(
        [this, request]()
        {
            return this->DescribeMediaPackageChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdpClient::DescribeMediaPackageChannelsOutcome MdpClient::DescribeMediaPackageChannels(const DescribeMediaPackageChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMediaPackageChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaPackageChannelsResponse rsp = DescribeMediaPackageChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaPackageChannelsOutcome(rsp);
        else
            return DescribeMediaPackageChannelsOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaPackageChannelsOutcome(outcome.GetError());
    }
}

void MdpClient::DescribeMediaPackageChannelsAsync(const DescribeMediaPackageChannelsRequest& request, const DescribeMediaPackageChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMediaPackageChannels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::DescribeMediaPackageChannelsOutcomeCallable MdpClient::DescribeMediaPackageChannelsCallable(const DescribeMediaPackageChannelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMediaPackageChannelsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMediaPackageChannels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdpClient::ModifyMediaPackageChannelOutcome MdpClient::ModifyMediaPackageChannel(const ModifyMediaPackageChannelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMediaPackageChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMediaPackageChannelResponse rsp = ModifyMediaPackageChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMediaPackageChannelOutcome(rsp);
        else
            return ModifyMediaPackageChannelOutcome(o.GetError());
    }
    else
    {
        return ModifyMediaPackageChannelOutcome(outcome.GetError());
    }
}

void MdpClient::ModifyMediaPackageChannelAsync(const ModifyMediaPackageChannelRequest& request, const ModifyMediaPackageChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMediaPackageChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::ModifyMediaPackageChannelOutcomeCallable MdpClient::ModifyMediaPackageChannelCallable(const ModifyMediaPackageChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMediaPackageChannelOutcome()>>(
        [this, request]()
        {
            return this->ModifyMediaPackageChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdpClient::ModifyMediaPackageChannelEndpointOutcome MdpClient::ModifyMediaPackageChannelEndpoint(const ModifyMediaPackageChannelEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMediaPackageChannelEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMediaPackageChannelEndpointResponse rsp = ModifyMediaPackageChannelEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMediaPackageChannelEndpointOutcome(rsp);
        else
            return ModifyMediaPackageChannelEndpointOutcome(o.GetError());
    }
    else
    {
        return ModifyMediaPackageChannelEndpointOutcome(outcome.GetError());
    }
}

void MdpClient::ModifyMediaPackageChannelEndpointAsync(const ModifyMediaPackageChannelEndpointRequest& request, const ModifyMediaPackageChannelEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMediaPackageChannelEndpoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::ModifyMediaPackageChannelEndpointOutcomeCallable MdpClient::ModifyMediaPackageChannelEndpointCallable(const ModifyMediaPackageChannelEndpointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMediaPackageChannelEndpointOutcome()>>(
        [this, request]()
        {
            return this->ModifyMediaPackageChannelEndpoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MdpClient::ModifyMediaPackageChannelInputAuthInfoOutcome MdpClient::ModifyMediaPackageChannelInputAuthInfo(const ModifyMediaPackageChannelInputAuthInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMediaPackageChannelInputAuthInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMediaPackageChannelInputAuthInfoResponse rsp = ModifyMediaPackageChannelInputAuthInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMediaPackageChannelInputAuthInfoOutcome(rsp);
        else
            return ModifyMediaPackageChannelInputAuthInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyMediaPackageChannelInputAuthInfoOutcome(outcome.GetError());
    }
}

void MdpClient::ModifyMediaPackageChannelInputAuthInfoAsync(const ModifyMediaPackageChannelInputAuthInfoRequest& request, const ModifyMediaPackageChannelInputAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMediaPackageChannelInputAuthInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MdpClient::ModifyMediaPackageChannelInputAuthInfoOutcomeCallable MdpClient::ModifyMediaPackageChannelInputAuthInfoCallable(const ModifyMediaPackageChannelInputAuthInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMediaPackageChannelInputAuthInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyMediaPackageChannelInputAuthInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

