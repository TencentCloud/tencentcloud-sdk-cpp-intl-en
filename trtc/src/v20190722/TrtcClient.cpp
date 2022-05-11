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

#include <tencentcloud/trtc/v20190722/TrtcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Trtc::V20190722;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-07-22";
    const string ENDPOINT = "trtc.tencentcloudapi.com";
}

TrtcClient::TrtcClient(const Credential &credential, const string &region) :
    TrtcClient(credential, region, ClientProfile())
{
}

TrtcClient::TrtcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TrtcClient::CreateCloudRecordingOutcome TrtcClient::CreateCloudRecording(const CreateCloudRecordingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudRecording");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudRecordingResponse rsp = CreateCloudRecordingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudRecordingOutcome(rsp);
        else
            return CreateCloudRecordingOutcome(o.GetError());
    }
    else
    {
        return CreateCloudRecordingOutcome(outcome.GetError());
    }
}

void TrtcClient::CreateCloudRecordingAsync(const CreateCloudRecordingRequest& request, const CreateCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudRecording(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::CreateCloudRecordingOutcomeCallable TrtcClient::CreateCloudRecordingCallable(const CreateCloudRecordingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudRecordingOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudRecording(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DeleteCloudRecordingOutcome TrtcClient::DeleteCloudRecording(const DeleteCloudRecordingRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudRecording");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudRecordingResponse rsp = DeleteCloudRecordingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudRecordingOutcome(rsp);
        else
            return DeleteCloudRecordingOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudRecordingOutcome(outcome.GetError());
    }
}

void TrtcClient::DeleteCloudRecordingAsync(const DeleteCloudRecordingRequest& request, const DeleteCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudRecording(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DeleteCloudRecordingOutcomeCallable TrtcClient::DeleteCloudRecordingCallable(const DeleteCloudRecordingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudRecordingOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudRecording(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeCloudRecordingOutcome TrtcClient::DescribeCloudRecording(const DescribeCloudRecordingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudRecording");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudRecordingResponse rsp = DescribeCloudRecordingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudRecordingOutcome(rsp);
        else
            return DescribeCloudRecordingOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudRecordingOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeCloudRecordingAsync(const DescribeCloudRecordingRequest& request, const DescribeCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudRecording(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeCloudRecordingOutcomeCallable TrtcClient::DescribeCloudRecordingCallable(const DescribeCloudRecordingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudRecordingOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudRecording(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DismissRoomOutcome TrtcClient::DismissRoom(const DismissRoomRequest &request)
{
    auto outcome = MakeRequest(request, "DismissRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DismissRoomResponse rsp = DismissRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DismissRoomOutcome(rsp);
        else
            return DismissRoomOutcome(o.GetError());
    }
    else
    {
        return DismissRoomOutcome(outcome.GetError());
    }
}

void TrtcClient::DismissRoomAsync(const DismissRoomRequest& request, const DismissRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DismissRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DismissRoomOutcomeCallable TrtcClient::DismissRoomCallable(const DismissRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DismissRoomOutcome()>>(
        [this, request]()
        {
            return this->DismissRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DismissRoomByStrRoomIdOutcome TrtcClient::DismissRoomByStrRoomId(const DismissRoomByStrRoomIdRequest &request)
{
    auto outcome = MakeRequest(request, "DismissRoomByStrRoomId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DismissRoomByStrRoomIdResponse rsp = DismissRoomByStrRoomIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DismissRoomByStrRoomIdOutcome(rsp);
        else
            return DismissRoomByStrRoomIdOutcome(o.GetError());
    }
    else
    {
        return DismissRoomByStrRoomIdOutcome(outcome.GetError());
    }
}

void TrtcClient::DismissRoomByStrRoomIdAsync(const DismissRoomByStrRoomIdRequest& request, const DismissRoomByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DismissRoomByStrRoomId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DismissRoomByStrRoomIdOutcomeCallable TrtcClient::DismissRoomByStrRoomIdCallable(const DismissRoomByStrRoomIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DismissRoomByStrRoomIdOutcome()>>(
        [this, request]()
        {
            return this->DismissRoomByStrRoomId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::ModifyCloudRecordingOutcome TrtcClient::ModifyCloudRecording(const ModifyCloudRecordingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudRecording");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudRecordingResponse rsp = ModifyCloudRecordingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudRecordingOutcome(rsp);
        else
            return ModifyCloudRecordingOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudRecordingOutcome(outcome.GetError());
    }
}

void TrtcClient::ModifyCloudRecordingAsync(const ModifyCloudRecordingRequest& request, const ModifyCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloudRecording(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::ModifyCloudRecordingOutcomeCallable TrtcClient::ModifyCloudRecordingCallable(const ModifyCloudRecordingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloudRecordingOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloudRecording(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::RemoveUserOutcome TrtcClient::RemoveUser(const RemoveUserRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveUserResponse rsp = RemoveUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveUserOutcome(rsp);
        else
            return RemoveUserOutcome(o.GetError());
    }
    else
    {
        return RemoveUserOutcome(outcome.GetError());
    }
}

void TrtcClient::RemoveUserAsync(const RemoveUserRequest& request, const RemoveUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::RemoveUserOutcomeCallable TrtcClient::RemoveUserCallable(const RemoveUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveUserOutcome()>>(
        [this, request]()
        {
            return this->RemoveUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::RemoveUserByStrRoomIdOutcome TrtcClient::RemoveUserByStrRoomId(const RemoveUserByStrRoomIdRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveUserByStrRoomId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveUserByStrRoomIdResponse rsp = RemoveUserByStrRoomIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveUserByStrRoomIdOutcome(rsp);
        else
            return RemoveUserByStrRoomIdOutcome(o.GetError());
    }
    else
    {
        return RemoveUserByStrRoomIdOutcome(outcome.GetError());
    }
}

void TrtcClient::RemoveUserByStrRoomIdAsync(const RemoveUserByStrRoomIdRequest& request, const RemoveUserByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveUserByStrRoomId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::RemoveUserByStrRoomIdOutcomeCallable TrtcClient::RemoveUserByStrRoomIdCallable(const RemoveUserByStrRoomIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveUserByStrRoomIdOutcome()>>(
        [this, request]()
        {
            return this->RemoveUserByStrRoomId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

