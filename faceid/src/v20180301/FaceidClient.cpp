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

#include <tencentcloud/faceid/v20180301/FaceidClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Faceid::V20180301;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-03-01";
    const string ENDPOINT = "faceid.tencentcloudapi.com";
}

FaceidClient::FaceidClient(const Credential &credential, const string &region) :
    FaceidClient(credential, region, ClientProfile())
{
}

FaceidClient::FaceidClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


FaceidClient::ApplyLivenessTokenOutcome FaceidClient::ApplyLivenessToken(const ApplyLivenessTokenRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyLivenessToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyLivenessTokenResponse rsp = ApplyLivenessTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyLivenessTokenOutcome(rsp);
        else
            return ApplyLivenessTokenOutcome(o.GetError());
    }
    else
    {
        return ApplyLivenessTokenOutcome(outcome.GetError());
    }
}

void FaceidClient::ApplyLivenessTokenAsync(const ApplyLivenessTokenRequest& request, const ApplyLivenessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyLivenessToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::ApplyLivenessTokenOutcomeCallable FaceidClient::ApplyLivenessTokenCallable(const ApplyLivenessTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyLivenessTokenOutcome()>>(
        [this, request]()
        {
            return this->ApplyLivenessToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FaceidClient::ApplySdkVerificationTokenOutcome FaceidClient::ApplySdkVerificationToken(const ApplySdkVerificationTokenRequest &request)
{
    auto outcome = MakeRequest(request, "ApplySdkVerificationToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplySdkVerificationTokenResponse rsp = ApplySdkVerificationTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplySdkVerificationTokenOutcome(rsp);
        else
            return ApplySdkVerificationTokenOutcome(o.GetError());
    }
    else
    {
        return ApplySdkVerificationTokenOutcome(outcome.GetError());
    }
}

void FaceidClient::ApplySdkVerificationTokenAsync(const ApplySdkVerificationTokenRequest& request, const ApplySdkVerificationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplySdkVerificationToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::ApplySdkVerificationTokenOutcomeCallable FaceidClient::ApplySdkVerificationTokenCallable(const ApplySdkVerificationTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplySdkVerificationTokenOutcome()>>(
        [this, request]()
        {
            return this->ApplySdkVerificationToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FaceidClient::ApplyWebVerificationTokenOutcome FaceidClient::ApplyWebVerificationToken(const ApplyWebVerificationTokenRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyWebVerificationToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyWebVerificationTokenResponse rsp = ApplyWebVerificationTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyWebVerificationTokenOutcome(rsp);
        else
            return ApplyWebVerificationTokenOutcome(o.GetError());
    }
    else
    {
        return ApplyWebVerificationTokenOutcome(outcome.GetError());
    }
}

void FaceidClient::ApplyWebVerificationTokenAsync(const ApplyWebVerificationTokenRequest& request, const ApplyWebVerificationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyWebVerificationToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::ApplyWebVerificationTokenOutcomeCallable FaceidClient::ApplyWebVerificationTokenCallable(const ApplyWebVerificationTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyWebVerificationTokenOutcome()>>(
        [this, request]()
        {
            return this->ApplyWebVerificationToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FaceidClient::CreateUploadUrlOutcome FaceidClient::CreateUploadUrl(const CreateUploadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUploadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUploadUrlResponse rsp = CreateUploadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUploadUrlOutcome(rsp);
        else
            return CreateUploadUrlOutcome(o.GetError());
    }
    else
    {
        return CreateUploadUrlOutcome(outcome.GetError());
    }
}

void FaceidClient::CreateUploadUrlAsync(const CreateUploadUrlRequest& request, const CreateUploadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUploadUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::CreateUploadUrlOutcomeCallable FaceidClient::CreateUploadUrlCallable(const CreateUploadUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUploadUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateUploadUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FaceidClient::DetectReflectLivenessAndCompareOutcome FaceidClient::DetectReflectLivenessAndCompare(const DetectReflectLivenessAndCompareRequest &request)
{
    auto outcome = MakeRequest(request, "DetectReflectLivenessAndCompare");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectReflectLivenessAndCompareResponse rsp = DetectReflectLivenessAndCompareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectReflectLivenessAndCompareOutcome(rsp);
        else
            return DetectReflectLivenessAndCompareOutcome(o.GetError());
    }
    else
    {
        return DetectReflectLivenessAndCompareOutcome(outcome.GetError());
    }
}

void FaceidClient::DetectReflectLivenessAndCompareAsync(const DetectReflectLivenessAndCompareRequest& request, const DetectReflectLivenessAndCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetectReflectLivenessAndCompare(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::DetectReflectLivenessAndCompareOutcomeCallable FaceidClient::DetectReflectLivenessAndCompareCallable(const DetectReflectLivenessAndCompareRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetectReflectLivenessAndCompareOutcome()>>(
        [this, request]()
        {
            return this->DetectReflectLivenessAndCompare(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FaceidClient::GenerateReflectSequenceOutcome FaceidClient::GenerateReflectSequence(const GenerateReflectSequenceRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateReflectSequence");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateReflectSequenceResponse rsp = GenerateReflectSequenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateReflectSequenceOutcome(rsp);
        else
            return GenerateReflectSequenceOutcome(o.GetError());
    }
    else
    {
        return GenerateReflectSequenceOutcome(outcome.GetError());
    }
}

void FaceidClient::GenerateReflectSequenceAsync(const GenerateReflectSequenceRequest& request, const GenerateReflectSequenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenerateReflectSequence(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::GenerateReflectSequenceOutcomeCallable FaceidClient::GenerateReflectSequenceCallable(const GenerateReflectSequenceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenerateReflectSequenceOutcome()>>(
        [this, request]()
        {
            return this->GenerateReflectSequence(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FaceidClient::GetLivenessResultOutcome FaceidClient::GetLivenessResult(const GetLivenessResultRequest &request)
{
    auto outcome = MakeRequest(request, "GetLivenessResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLivenessResultResponse rsp = GetLivenessResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLivenessResultOutcome(rsp);
        else
            return GetLivenessResultOutcome(o.GetError());
    }
    else
    {
        return GetLivenessResultOutcome(outcome.GetError());
    }
}

void FaceidClient::GetLivenessResultAsync(const GetLivenessResultRequest& request, const GetLivenessResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetLivenessResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::GetLivenessResultOutcomeCallable FaceidClient::GetLivenessResultCallable(const GetLivenessResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetLivenessResultOutcome()>>(
        [this, request]()
        {
            return this->GetLivenessResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FaceidClient::GetSdkVerificationResultOutcome FaceidClient::GetSdkVerificationResult(const GetSdkVerificationResultRequest &request)
{
    auto outcome = MakeRequest(request, "GetSdkVerificationResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSdkVerificationResultResponse rsp = GetSdkVerificationResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSdkVerificationResultOutcome(rsp);
        else
            return GetSdkVerificationResultOutcome(o.GetError());
    }
    else
    {
        return GetSdkVerificationResultOutcome(outcome.GetError());
    }
}

void FaceidClient::GetSdkVerificationResultAsync(const GetSdkVerificationResultRequest& request, const GetSdkVerificationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetSdkVerificationResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::GetSdkVerificationResultOutcomeCallable FaceidClient::GetSdkVerificationResultCallable(const GetSdkVerificationResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetSdkVerificationResultOutcome()>>(
        [this, request]()
        {
            return this->GetSdkVerificationResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FaceidClient::GetWebVerificationResultOutcome FaceidClient::GetWebVerificationResult(const GetWebVerificationResultRequest &request)
{
    auto outcome = MakeRequest(request, "GetWebVerificationResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetWebVerificationResultResponse rsp = GetWebVerificationResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetWebVerificationResultOutcome(rsp);
        else
            return GetWebVerificationResultOutcome(o.GetError());
    }
    else
    {
        return GetWebVerificationResultOutcome(outcome.GetError());
    }
}

void FaceidClient::GetWebVerificationResultAsync(const GetWebVerificationResultRequest& request, const GetWebVerificationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetWebVerificationResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::GetWebVerificationResultOutcomeCallable FaceidClient::GetWebVerificationResultCallable(const GetWebVerificationResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetWebVerificationResultOutcome()>>(
        [this, request]()
        {
            return this->GetWebVerificationResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FaceidClient::LivenessCompareOutcome FaceidClient::LivenessCompare(const LivenessCompareRequest &request)
{
    auto outcome = MakeRequest(request, "LivenessCompare");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LivenessCompareResponse rsp = LivenessCompareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LivenessCompareOutcome(rsp);
        else
            return LivenessCompareOutcome(o.GetError());
    }
    else
    {
        return LivenessCompareOutcome(outcome.GetError());
    }
}

void FaceidClient::LivenessCompareAsync(const LivenessCompareRequest& request, const LivenessCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LivenessCompare(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::LivenessCompareOutcomeCallable FaceidClient::LivenessCompareCallable(const LivenessCompareRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LivenessCompareOutcome()>>(
        [this, request]()
        {
            return this->LivenessCompare(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FaceidClient::VideoLivenessCompareOutcome FaceidClient::VideoLivenessCompare(const VideoLivenessCompareRequest &request)
{
    auto outcome = MakeRequest(request, "VideoLivenessCompare");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VideoLivenessCompareResponse rsp = VideoLivenessCompareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VideoLivenessCompareOutcome(rsp);
        else
            return VideoLivenessCompareOutcome(o.GetError());
    }
    else
    {
        return VideoLivenessCompareOutcome(outcome.GetError());
    }
}

void FaceidClient::VideoLivenessCompareAsync(const VideoLivenessCompareRequest& request, const VideoLivenessCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VideoLivenessCompare(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::VideoLivenessCompareOutcomeCallable FaceidClient::VideoLivenessCompareCallable(const VideoLivenessCompareRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VideoLivenessCompareOutcome()>>(
        [this, request]()
        {
            return this->VideoLivenessCompare(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

