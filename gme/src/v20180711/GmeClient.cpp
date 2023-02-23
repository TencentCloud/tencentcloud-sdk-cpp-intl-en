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

#include <tencentcloud/gme/v20180711/GmeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Gme::V20180711;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-07-11";
    const string ENDPOINT = "gme.tencentcloudapi.com";
}

GmeClient::GmeClient(const Credential &credential, const string &region) :
    GmeClient(credential, region, ClientProfile())
{
}

GmeClient::GmeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


GmeClient::CreateAppOutcome GmeClient::CreateApp(const CreateAppRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAppResponse rsp = CreateAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAppOutcome(rsp);
        else
            return CreateAppOutcome(o.GetError());
    }
    else
    {
        return CreateAppOutcome(outcome.GetError());
    }
}

void GmeClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::CreateAppOutcomeCallable GmeClient::CreateAppCallable(const CreateAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAppOutcome()>>(
        [this, request]()
        {
            return this->CreateApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::DeleteRoomMemberOutcome GmeClient::DeleteRoomMember(const DeleteRoomMemberRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoomMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoomMemberResponse rsp = DeleteRoomMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoomMemberOutcome(rsp);
        else
            return DeleteRoomMemberOutcome(o.GetError());
    }
    else
    {
        return DeleteRoomMemberOutcome(outcome.GetError());
    }
}

void GmeClient::DeleteRoomMemberAsync(const DeleteRoomMemberRequest& request, const DeleteRoomMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRoomMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DeleteRoomMemberOutcomeCallable GmeClient::DeleteRoomMemberCallable(const DeleteRoomMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRoomMemberOutcome()>>(
        [this, request]()
        {
            return this->DeleteRoomMember(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::DescribeAppStatisticsOutcome GmeClient::DescribeAppStatistics(const DescribeAppStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppStatisticsResponse rsp = DescribeAppStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppStatisticsOutcome(rsp);
        else
            return DescribeAppStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeAppStatisticsOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeAppStatisticsAsync(const DescribeAppStatisticsRequest& request, const DescribeAppStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAppStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DescribeAppStatisticsOutcomeCallable GmeClient::DescribeAppStatisticsCallable(const DescribeAppStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAppStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAppStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::DescribeApplicationDataOutcome GmeClient::DescribeApplicationData(const DescribeApplicationDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationDataResponse rsp = DescribeApplicationDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationDataOutcome(rsp);
        else
            return DescribeApplicationDataOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationDataOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeApplicationDataAsync(const DescribeApplicationDataRequest& request, const DescribeApplicationDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DescribeApplicationDataOutcomeCallable GmeClient::DescribeApplicationDataCallable(const DescribeApplicationDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::DescribeRecordInfoOutcome GmeClient::DescribeRecordInfo(const DescribeRecordInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordInfoResponse rsp = DescribeRecordInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordInfoOutcome(rsp);
        else
            return DescribeRecordInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordInfoOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeRecordInfoAsync(const DescribeRecordInfoRequest& request, const DescribeRecordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DescribeRecordInfoOutcomeCallable GmeClient::DescribeRecordInfoCallable(const DescribeRecordInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::DescribeTaskInfoOutcome GmeClient::DescribeTaskInfo(const DescribeTaskInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskInfoResponse rsp = DescribeTaskInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskInfoOutcome(rsp);
        else
            return DescribeTaskInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskInfoOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeTaskInfoAsync(const DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DescribeTaskInfoOutcomeCallable GmeClient::DescribeTaskInfoCallable(const DescribeTaskInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::ModifyAppStatusOutcome GmeClient::ModifyAppStatus(const ModifyAppStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAppStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAppStatusResponse rsp = ModifyAppStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAppStatusOutcome(rsp);
        else
            return ModifyAppStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAppStatusOutcome(outcome.GetError());
    }
}

void GmeClient::ModifyAppStatusAsync(const ModifyAppStatusRequest& request, const ModifyAppStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAppStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::ModifyAppStatusOutcomeCallable GmeClient::ModifyAppStatusCallable(const ModifyAppStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAppStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyAppStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::ModifyRecordInfoOutcome GmeClient::ModifyRecordInfo(const ModifyRecordInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordInfoResponse rsp = ModifyRecordInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordInfoOutcome(rsp);
        else
            return ModifyRecordInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordInfoOutcome(outcome.GetError());
    }
}

void GmeClient::ModifyRecordInfoAsync(const ModifyRecordInfoRequest& request, const ModifyRecordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRecordInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::ModifyRecordInfoOutcomeCallable GmeClient::ModifyRecordInfoCallable(const ModifyRecordInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRecordInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyRecordInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::StartRecordOutcome GmeClient::StartRecord(const StartRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StartRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartRecordResponse rsp = StartRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartRecordOutcome(rsp);
        else
            return StartRecordOutcome(o.GetError());
    }
    else
    {
        return StartRecordOutcome(outcome.GetError());
    }
}

void GmeClient::StartRecordAsync(const StartRecordRequest& request, const StartRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::StartRecordOutcomeCallable GmeClient::StartRecordCallable(const StartRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartRecordOutcome()>>(
        [this, request]()
        {
            return this->StartRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::StopRecordOutcome GmeClient::StopRecord(const StopRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StopRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopRecordResponse rsp = StopRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopRecordOutcome(rsp);
        else
            return StopRecordOutcome(o.GetError());
    }
    else
    {
        return StopRecordOutcome(outcome.GetError());
    }
}

void GmeClient::StopRecordAsync(const StopRecordRequest& request, const StopRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::StopRecordOutcomeCallable GmeClient::StopRecordCallable(const StopRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopRecordOutcome()>>(
        [this, request]()
        {
            return this->StopRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

