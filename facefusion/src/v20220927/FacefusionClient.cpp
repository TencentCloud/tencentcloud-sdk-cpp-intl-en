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

#include <tencentcloud/facefusion/v20220927/FacefusionClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Facefusion::V20220927;
using namespace TencentCloud::Facefusion::V20220927::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-09-27";
    const string ENDPOINT = "facefusion.intl.tencentcloudapi.com";
}

FacefusionClient::FacefusionClient(const Credential &credential, const string &region) :
    FacefusionClient(credential, region, ClientProfile())
{
}

FacefusionClient::FacefusionClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


FacefusionClient::FuseFaceOutcome FacefusionClient::FuseFace(const FuseFaceRequest &request)
{
    auto outcome = MakeRequest(request, "FuseFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FuseFaceResponse rsp = FuseFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FuseFaceOutcome(rsp);
        else
            return FuseFaceOutcome(o.GetError());
    }
    else
    {
        return FuseFaceOutcome(outcome.GetError());
    }
}

void FacefusionClient::FuseFaceAsync(const FuseFaceRequest& request, const FuseFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FuseFace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FacefusionClient::FuseFaceOutcomeCallable FacefusionClient::FuseFaceCallable(const FuseFaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FuseFaceOutcome()>>(
        [this, request]()
        {
            return this->FuseFace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FacefusionClient::QueryVideoFaceFusionJobOutcome FacefusionClient::QueryVideoFaceFusionJob(const QueryVideoFaceFusionJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryVideoFaceFusionJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryVideoFaceFusionJobResponse rsp = QueryVideoFaceFusionJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryVideoFaceFusionJobOutcome(rsp);
        else
            return QueryVideoFaceFusionJobOutcome(o.GetError());
    }
    else
    {
        return QueryVideoFaceFusionJobOutcome(outcome.GetError());
    }
}

void FacefusionClient::QueryVideoFaceFusionJobAsync(const QueryVideoFaceFusionJobRequest& request, const QueryVideoFaceFusionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryVideoFaceFusionJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FacefusionClient::QueryVideoFaceFusionJobOutcomeCallable FacefusionClient::QueryVideoFaceFusionJobCallable(const QueryVideoFaceFusionJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryVideoFaceFusionJobOutcome()>>(
        [this, request]()
        {
            return this->QueryVideoFaceFusionJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FacefusionClient::SubmitVideoFaceFusionJobOutcome FacefusionClient::SubmitVideoFaceFusionJob(const SubmitVideoFaceFusionJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitVideoFaceFusionJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitVideoFaceFusionJobResponse rsp = SubmitVideoFaceFusionJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitVideoFaceFusionJobOutcome(rsp);
        else
            return SubmitVideoFaceFusionJobOutcome(o.GetError());
    }
    else
    {
        return SubmitVideoFaceFusionJobOutcome(outcome.GetError());
    }
}

void FacefusionClient::SubmitVideoFaceFusionJobAsync(const SubmitVideoFaceFusionJobRequest& request, const SubmitVideoFaceFusionJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitVideoFaceFusionJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FacefusionClient::SubmitVideoFaceFusionJobOutcomeCallable FacefusionClient::SubmitVideoFaceFusionJobCallable(const SubmitVideoFaceFusionJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitVideoFaceFusionJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitVideoFaceFusionJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

