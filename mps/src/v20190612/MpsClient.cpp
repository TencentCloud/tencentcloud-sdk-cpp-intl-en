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

#include <tencentcloud/mps/v20190612/MpsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mps::V20190612;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-06-12";
    const string ENDPOINT = "mps.intl.tencentcloudapi.com";
}

MpsClient::MpsClient(const Credential &credential, const string &region) :
    MpsClient(credential, region, ClientProfile())
{
}

MpsClient::MpsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MpsClient::BatchProcessMediaOutcome MpsClient::BatchProcessMedia(const BatchProcessMediaRequest &request)
{
    auto outcome = MakeRequest(request, "BatchProcessMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchProcessMediaResponse rsp = BatchProcessMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchProcessMediaOutcome(rsp);
        else
            return BatchProcessMediaOutcome(o.GetError());
    }
    else
    {
        return BatchProcessMediaOutcome(outcome.GetError());
    }
}

void MpsClient::BatchProcessMediaAsync(const BatchProcessMediaRequest& request, const BatchProcessMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchProcessMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::BatchProcessMediaOutcomeCallable MpsClient::BatchProcessMediaCallable(const BatchProcessMediaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchProcessMediaOutcome()>>(
        [this, request]()
        {
            return this->BatchProcessMedia(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateAIAnalysisTemplateOutcome MpsClient::CreateAIAnalysisTemplate(const CreateAIAnalysisTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAIAnalysisTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAIAnalysisTemplateResponse rsp = CreateAIAnalysisTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAIAnalysisTemplateOutcome(rsp);
        else
            return CreateAIAnalysisTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateAIAnalysisTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::CreateAIAnalysisTemplateAsync(const CreateAIAnalysisTemplateRequest& request, const CreateAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAIAnalysisTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateAIAnalysisTemplateOutcomeCallable MpsClient::CreateAIAnalysisTemplateCallable(const CreateAIAnalysisTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAIAnalysisTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateAIAnalysisTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateAIRecognitionTemplateOutcome MpsClient::CreateAIRecognitionTemplate(const CreateAIRecognitionTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAIRecognitionTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAIRecognitionTemplateResponse rsp = CreateAIRecognitionTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAIRecognitionTemplateOutcome(rsp);
        else
            return CreateAIRecognitionTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateAIRecognitionTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::CreateAIRecognitionTemplateAsync(const CreateAIRecognitionTemplateRequest& request, const CreateAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAIRecognitionTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateAIRecognitionTemplateOutcomeCallable MpsClient::CreateAIRecognitionTemplateCallable(const CreateAIRecognitionTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAIRecognitionTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateAIRecognitionTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateAdaptiveDynamicStreamingTemplateOutcome MpsClient::CreateAdaptiveDynamicStreamingTemplate(const CreateAdaptiveDynamicStreamingTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAdaptiveDynamicStreamingTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAdaptiveDynamicStreamingTemplateResponse rsp = CreateAdaptiveDynamicStreamingTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAdaptiveDynamicStreamingTemplateOutcome(rsp);
        else
            return CreateAdaptiveDynamicStreamingTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateAdaptiveDynamicStreamingTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::CreateAdaptiveDynamicStreamingTemplateAsync(const CreateAdaptiveDynamicStreamingTemplateRequest& request, const CreateAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAdaptiveDynamicStreamingTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateAdaptiveDynamicStreamingTemplateOutcomeCallable MpsClient::CreateAdaptiveDynamicStreamingTemplateCallable(const CreateAdaptiveDynamicStreamingTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAdaptiveDynamicStreamingTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateAdaptiveDynamicStreamingTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateAnimatedGraphicsTemplateOutcome MpsClient::CreateAnimatedGraphicsTemplate(const CreateAnimatedGraphicsTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAnimatedGraphicsTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAnimatedGraphicsTemplateResponse rsp = CreateAnimatedGraphicsTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAnimatedGraphicsTemplateOutcome(rsp);
        else
            return CreateAnimatedGraphicsTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateAnimatedGraphicsTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::CreateAnimatedGraphicsTemplateAsync(const CreateAnimatedGraphicsTemplateRequest& request, const CreateAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAnimatedGraphicsTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateAnimatedGraphicsTemplateOutcomeCallable MpsClient::CreateAnimatedGraphicsTemplateCallable(const CreateAnimatedGraphicsTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAnimatedGraphicsTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateAnimatedGraphicsTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateAsrHotwordsOutcome MpsClient::CreateAsrHotwords(const CreateAsrHotwordsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAsrHotwords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAsrHotwordsResponse rsp = CreateAsrHotwordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAsrHotwordsOutcome(rsp);
        else
            return CreateAsrHotwordsOutcome(o.GetError());
    }
    else
    {
        return CreateAsrHotwordsOutcome(outcome.GetError());
    }
}

void MpsClient::CreateAsrHotwordsAsync(const CreateAsrHotwordsRequest& request, const CreateAsrHotwordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAsrHotwords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateAsrHotwordsOutcomeCallable MpsClient::CreateAsrHotwordsCallable(const CreateAsrHotwordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAsrHotwordsOutcome()>>(
        [this, request]()
        {
            return this->CreateAsrHotwords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateContentReviewTemplateOutcome MpsClient::CreateContentReviewTemplate(const CreateContentReviewTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateContentReviewTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateContentReviewTemplateResponse rsp = CreateContentReviewTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateContentReviewTemplateOutcome(rsp);
        else
            return CreateContentReviewTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateContentReviewTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::CreateContentReviewTemplateAsync(const CreateContentReviewTemplateRequest& request, const CreateContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateContentReviewTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateContentReviewTemplateOutcomeCallable MpsClient::CreateContentReviewTemplateCallable(const CreateContentReviewTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateContentReviewTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateContentReviewTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateImageSpriteTemplateOutcome MpsClient::CreateImageSpriteTemplate(const CreateImageSpriteTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateImageSpriteTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateImageSpriteTemplateResponse rsp = CreateImageSpriteTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateImageSpriteTemplateOutcome(rsp);
        else
            return CreateImageSpriteTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateImageSpriteTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::CreateImageSpriteTemplateAsync(const CreateImageSpriteTemplateRequest& request, const CreateImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateImageSpriteTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateImageSpriteTemplateOutcomeCallable MpsClient::CreateImageSpriteTemplateCallable(const CreateImageSpriteTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateImageSpriteTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateImageSpriteTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateLiveRecordTemplateOutcome MpsClient::CreateLiveRecordTemplate(const CreateLiveRecordTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveRecordTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveRecordTemplateResponse rsp = CreateLiveRecordTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveRecordTemplateOutcome(rsp);
        else
            return CreateLiveRecordTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateLiveRecordTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::CreateLiveRecordTemplateAsync(const CreateLiveRecordTemplateRequest& request, const CreateLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveRecordTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateLiveRecordTemplateOutcomeCallable MpsClient::CreateLiveRecordTemplateCallable(const CreateLiveRecordTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveRecordTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveRecordTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreatePersonSampleOutcome MpsClient::CreatePersonSample(const CreatePersonSampleRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePersonSample");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePersonSampleResponse rsp = CreatePersonSampleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePersonSampleOutcome(rsp);
        else
            return CreatePersonSampleOutcome(o.GetError());
    }
    else
    {
        return CreatePersonSampleOutcome(outcome.GetError());
    }
}

void MpsClient::CreatePersonSampleAsync(const CreatePersonSampleRequest& request, const CreatePersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePersonSample(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreatePersonSampleOutcomeCallable MpsClient::CreatePersonSampleCallable(const CreatePersonSampleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePersonSampleOutcome()>>(
        [this, request]()
        {
            return this->CreatePersonSample(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateQualityControlTemplateOutcome MpsClient::CreateQualityControlTemplate(const CreateQualityControlTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateQualityControlTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateQualityControlTemplateResponse rsp = CreateQualityControlTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateQualityControlTemplateOutcome(rsp);
        else
            return CreateQualityControlTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateQualityControlTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::CreateQualityControlTemplateAsync(const CreateQualityControlTemplateRequest& request, const CreateQualityControlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateQualityControlTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateQualityControlTemplateOutcomeCallable MpsClient::CreateQualityControlTemplateCallable(const CreateQualityControlTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateQualityControlTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateQualityControlTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateSampleSnapshotTemplateOutcome MpsClient::CreateSampleSnapshotTemplate(const CreateSampleSnapshotTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSampleSnapshotTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSampleSnapshotTemplateResponse rsp = CreateSampleSnapshotTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSampleSnapshotTemplateOutcome(rsp);
        else
            return CreateSampleSnapshotTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateSampleSnapshotTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::CreateSampleSnapshotTemplateAsync(const CreateSampleSnapshotTemplateRequest& request, const CreateSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSampleSnapshotTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateSampleSnapshotTemplateOutcomeCallable MpsClient::CreateSampleSnapshotTemplateCallable(const CreateSampleSnapshotTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSampleSnapshotTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateSampleSnapshotTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateScheduleOutcome MpsClient::CreateSchedule(const CreateScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScheduleResponse rsp = CreateScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScheduleOutcome(rsp);
        else
            return CreateScheduleOutcome(o.GetError());
    }
    else
    {
        return CreateScheduleOutcome(outcome.GetError());
    }
}

void MpsClient::CreateScheduleAsync(const CreateScheduleRequest& request, const CreateScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateScheduleOutcomeCallable MpsClient::CreateScheduleCallable(const CreateScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateScheduleOutcome()>>(
        [this, request]()
        {
            return this->CreateSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateSmartEraseTemplateOutcome MpsClient::CreateSmartEraseTemplate(const CreateSmartEraseTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSmartEraseTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSmartEraseTemplateResponse rsp = CreateSmartEraseTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSmartEraseTemplateOutcome(rsp);
        else
            return CreateSmartEraseTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateSmartEraseTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::CreateSmartEraseTemplateAsync(const CreateSmartEraseTemplateRequest& request, const CreateSmartEraseTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSmartEraseTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateSmartEraseTemplateOutcomeCallable MpsClient::CreateSmartEraseTemplateCallable(const CreateSmartEraseTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSmartEraseTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateSmartEraseTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateSmartSubtitleTemplateOutcome MpsClient::CreateSmartSubtitleTemplate(const CreateSmartSubtitleTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSmartSubtitleTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSmartSubtitleTemplateResponse rsp = CreateSmartSubtitleTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSmartSubtitleTemplateOutcome(rsp);
        else
            return CreateSmartSubtitleTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateSmartSubtitleTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::CreateSmartSubtitleTemplateAsync(const CreateSmartSubtitleTemplateRequest& request, const CreateSmartSubtitleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSmartSubtitleTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateSmartSubtitleTemplateOutcomeCallable MpsClient::CreateSmartSubtitleTemplateCallable(const CreateSmartSubtitleTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSmartSubtitleTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateSmartSubtitleTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateSnapshotByTimeOffsetTemplateOutcome MpsClient::CreateSnapshotByTimeOffsetTemplate(const CreateSnapshotByTimeOffsetTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSnapshotByTimeOffsetTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSnapshotByTimeOffsetTemplateResponse rsp = CreateSnapshotByTimeOffsetTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSnapshotByTimeOffsetTemplateOutcome(rsp);
        else
            return CreateSnapshotByTimeOffsetTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateSnapshotByTimeOffsetTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::CreateSnapshotByTimeOffsetTemplateAsync(const CreateSnapshotByTimeOffsetTemplateRequest& request, const CreateSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSnapshotByTimeOffsetTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateSnapshotByTimeOffsetTemplateOutcomeCallable MpsClient::CreateSnapshotByTimeOffsetTemplateCallable(const CreateSnapshotByTimeOffsetTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSnapshotByTimeOffsetTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateSnapshotByTimeOffsetTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateTranscodeTemplateOutcome MpsClient::CreateTranscodeTemplate(const CreateTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTranscodeTemplateResponse rsp = CreateTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTranscodeTemplateOutcome(rsp);
        else
            return CreateTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateTranscodeTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::CreateTranscodeTemplateAsync(const CreateTranscodeTemplateRequest& request, const CreateTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateTranscodeTemplateOutcomeCallable MpsClient::CreateTranscodeTemplateCallable(const CreateTranscodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTranscodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateTranscodeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateWatermarkTemplateOutcome MpsClient::CreateWatermarkTemplate(const CreateWatermarkTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWatermarkTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWatermarkTemplateResponse rsp = CreateWatermarkTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWatermarkTemplateOutcome(rsp);
        else
            return CreateWatermarkTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateWatermarkTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::CreateWatermarkTemplateAsync(const CreateWatermarkTemplateRequest& request, const CreateWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWatermarkTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateWatermarkTemplateOutcomeCallable MpsClient::CreateWatermarkTemplateCallable(const CreateWatermarkTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWatermarkTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateWatermarkTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateWordSamplesOutcome MpsClient::CreateWordSamples(const CreateWordSamplesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWordSamples");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWordSamplesResponse rsp = CreateWordSamplesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWordSamplesOutcome(rsp);
        else
            return CreateWordSamplesOutcome(o.GetError());
    }
    else
    {
        return CreateWordSamplesOutcome(outcome.GetError());
    }
}

void MpsClient::CreateWordSamplesAsync(const CreateWordSamplesRequest& request, const CreateWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWordSamples(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateWordSamplesOutcomeCallable MpsClient::CreateWordSamplesCallable(const CreateWordSamplesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWordSamplesOutcome()>>(
        [this, request]()
        {
            return this->CreateWordSamples(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateWorkflowOutcome MpsClient::CreateWorkflow(const CreateWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkflowResponse rsp = CreateWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkflowOutcome(rsp);
        else
            return CreateWorkflowOutcome(o.GetError());
    }
    else
    {
        return CreateWorkflowOutcome(outcome.GetError());
    }
}

void MpsClient::CreateWorkflowAsync(const CreateWorkflowRequest& request, const CreateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateWorkflowOutcomeCallable MpsClient::CreateWorkflowCallable(const CreateWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWorkflowOutcome()>>(
        [this, request]()
        {
            return this->CreateWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteAIAnalysisTemplateOutcome MpsClient::DeleteAIAnalysisTemplate(const DeleteAIAnalysisTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAIAnalysisTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAIAnalysisTemplateResponse rsp = DeleteAIAnalysisTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAIAnalysisTemplateOutcome(rsp);
        else
            return DeleteAIAnalysisTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteAIAnalysisTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteAIAnalysisTemplateAsync(const DeleteAIAnalysisTemplateRequest& request, const DeleteAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAIAnalysisTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteAIAnalysisTemplateOutcomeCallable MpsClient::DeleteAIAnalysisTemplateCallable(const DeleteAIAnalysisTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAIAnalysisTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteAIAnalysisTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteAIRecognitionTemplateOutcome MpsClient::DeleteAIRecognitionTemplate(const DeleteAIRecognitionTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAIRecognitionTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAIRecognitionTemplateResponse rsp = DeleteAIRecognitionTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAIRecognitionTemplateOutcome(rsp);
        else
            return DeleteAIRecognitionTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteAIRecognitionTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteAIRecognitionTemplateAsync(const DeleteAIRecognitionTemplateRequest& request, const DeleteAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAIRecognitionTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteAIRecognitionTemplateOutcomeCallable MpsClient::DeleteAIRecognitionTemplateCallable(const DeleteAIRecognitionTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAIRecognitionTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteAIRecognitionTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteAdaptiveDynamicStreamingTemplateOutcome MpsClient::DeleteAdaptiveDynamicStreamingTemplate(const DeleteAdaptiveDynamicStreamingTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAdaptiveDynamicStreamingTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAdaptiveDynamicStreamingTemplateResponse rsp = DeleteAdaptiveDynamicStreamingTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAdaptiveDynamicStreamingTemplateOutcome(rsp);
        else
            return DeleteAdaptiveDynamicStreamingTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteAdaptiveDynamicStreamingTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteAdaptiveDynamicStreamingTemplateAsync(const DeleteAdaptiveDynamicStreamingTemplateRequest& request, const DeleteAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAdaptiveDynamicStreamingTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteAdaptiveDynamicStreamingTemplateOutcomeCallable MpsClient::DeleteAdaptiveDynamicStreamingTemplateCallable(const DeleteAdaptiveDynamicStreamingTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAdaptiveDynamicStreamingTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteAdaptiveDynamicStreamingTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteAnimatedGraphicsTemplateOutcome MpsClient::DeleteAnimatedGraphicsTemplate(const DeleteAnimatedGraphicsTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAnimatedGraphicsTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAnimatedGraphicsTemplateResponse rsp = DeleteAnimatedGraphicsTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAnimatedGraphicsTemplateOutcome(rsp);
        else
            return DeleteAnimatedGraphicsTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteAnimatedGraphicsTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteAnimatedGraphicsTemplateAsync(const DeleteAnimatedGraphicsTemplateRequest& request, const DeleteAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAnimatedGraphicsTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteAnimatedGraphicsTemplateOutcomeCallable MpsClient::DeleteAnimatedGraphicsTemplateCallable(const DeleteAnimatedGraphicsTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAnimatedGraphicsTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteAnimatedGraphicsTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteAsrHotwordsOutcome MpsClient::DeleteAsrHotwords(const DeleteAsrHotwordsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAsrHotwords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAsrHotwordsResponse rsp = DeleteAsrHotwordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAsrHotwordsOutcome(rsp);
        else
            return DeleteAsrHotwordsOutcome(o.GetError());
    }
    else
    {
        return DeleteAsrHotwordsOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteAsrHotwordsAsync(const DeleteAsrHotwordsRequest& request, const DeleteAsrHotwordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAsrHotwords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteAsrHotwordsOutcomeCallable MpsClient::DeleteAsrHotwordsCallable(const DeleteAsrHotwordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAsrHotwordsOutcome()>>(
        [this, request]()
        {
            return this->DeleteAsrHotwords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteContentReviewTemplateOutcome MpsClient::DeleteContentReviewTemplate(const DeleteContentReviewTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteContentReviewTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteContentReviewTemplateResponse rsp = DeleteContentReviewTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteContentReviewTemplateOutcome(rsp);
        else
            return DeleteContentReviewTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteContentReviewTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteContentReviewTemplateAsync(const DeleteContentReviewTemplateRequest& request, const DeleteContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteContentReviewTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteContentReviewTemplateOutcomeCallable MpsClient::DeleteContentReviewTemplateCallable(const DeleteContentReviewTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteContentReviewTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteContentReviewTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteImageSpriteTemplateOutcome MpsClient::DeleteImageSpriteTemplate(const DeleteImageSpriteTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImageSpriteTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImageSpriteTemplateResponse rsp = DeleteImageSpriteTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImageSpriteTemplateOutcome(rsp);
        else
            return DeleteImageSpriteTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteImageSpriteTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteImageSpriteTemplateAsync(const DeleteImageSpriteTemplateRequest& request, const DeleteImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteImageSpriteTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteImageSpriteTemplateOutcomeCallable MpsClient::DeleteImageSpriteTemplateCallable(const DeleteImageSpriteTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteImageSpriteTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteImageSpriteTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteLiveRecordTemplateOutcome MpsClient::DeleteLiveRecordTemplate(const DeleteLiveRecordTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveRecordTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveRecordTemplateResponse rsp = DeleteLiveRecordTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveRecordTemplateOutcome(rsp);
        else
            return DeleteLiveRecordTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveRecordTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteLiveRecordTemplateAsync(const DeleteLiveRecordTemplateRequest& request, const DeleteLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveRecordTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteLiveRecordTemplateOutcomeCallable MpsClient::DeleteLiveRecordTemplateCallable(const DeleteLiveRecordTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveRecordTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveRecordTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeletePersonSampleOutcome MpsClient::DeletePersonSample(const DeletePersonSampleRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePersonSample");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePersonSampleResponse rsp = DeletePersonSampleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePersonSampleOutcome(rsp);
        else
            return DeletePersonSampleOutcome(o.GetError());
    }
    else
    {
        return DeletePersonSampleOutcome(outcome.GetError());
    }
}

void MpsClient::DeletePersonSampleAsync(const DeletePersonSampleRequest& request, const DeletePersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePersonSample(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeletePersonSampleOutcomeCallable MpsClient::DeletePersonSampleCallable(const DeletePersonSampleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePersonSampleOutcome()>>(
        [this, request]()
        {
            return this->DeletePersonSample(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteQualityControlTemplateOutcome MpsClient::DeleteQualityControlTemplate(const DeleteQualityControlTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteQualityControlTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteQualityControlTemplateResponse rsp = DeleteQualityControlTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteQualityControlTemplateOutcome(rsp);
        else
            return DeleteQualityControlTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteQualityControlTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteQualityControlTemplateAsync(const DeleteQualityControlTemplateRequest& request, const DeleteQualityControlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteQualityControlTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteQualityControlTemplateOutcomeCallable MpsClient::DeleteQualityControlTemplateCallable(const DeleteQualityControlTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteQualityControlTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteQualityControlTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteSampleSnapshotTemplateOutcome MpsClient::DeleteSampleSnapshotTemplate(const DeleteSampleSnapshotTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSampleSnapshotTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSampleSnapshotTemplateResponse rsp = DeleteSampleSnapshotTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSampleSnapshotTemplateOutcome(rsp);
        else
            return DeleteSampleSnapshotTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteSampleSnapshotTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteSampleSnapshotTemplateAsync(const DeleteSampleSnapshotTemplateRequest& request, const DeleteSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSampleSnapshotTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteSampleSnapshotTemplateOutcomeCallable MpsClient::DeleteSampleSnapshotTemplateCallable(const DeleteSampleSnapshotTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSampleSnapshotTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteSampleSnapshotTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteScheduleOutcome MpsClient::DeleteSchedule(const DeleteScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScheduleResponse rsp = DeleteScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScheduleOutcome(rsp);
        else
            return DeleteScheduleOutcome(o.GetError());
    }
    else
    {
        return DeleteScheduleOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteScheduleAsync(const DeleteScheduleRequest& request, const DeleteScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteScheduleOutcomeCallable MpsClient::DeleteScheduleCallable(const DeleteScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteScheduleOutcome()>>(
        [this, request]()
        {
            return this->DeleteSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteSmartEraseTemplateOutcome MpsClient::DeleteSmartEraseTemplate(const DeleteSmartEraseTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSmartEraseTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSmartEraseTemplateResponse rsp = DeleteSmartEraseTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSmartEraseTemplateOutcome(rsp);
        else
            return DeleteSmartEraseTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteSmartEraseTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteSmartEraseTemplateAsync(const DeleteSmartEraseTemplateRequest& request, const DeleteSmartEraseTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSmartEraseTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteSmartEraseTemplateOutcomeCallable MpsClient::DeleteSmartEraseTemplateCallable(const DeleteSmartEraseTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSmartEraseTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteSmartEraseTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteSmartSubtitleTemplateOutcome MpsClient::DeleteSmartSubtitleTemplate(const DeleteSmartSubtitleTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSmartSubtitleTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSmartSubtitleTemplateResponse rsp = DeleteSmartSubtitleTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSmartSubtitleTemplateOutcome(rsp);
        else
            return DeleteSmartSubtitleTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteSmartSubtitleTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteSmartSubtitleTemplateAsync(const DeleteSmartSubtitleTemplateRequest& request, const DeleteSmartSubtitleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSmartSubtitleTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteSmartSubtitleTemplateOutcomeCallable MpsClient::DeleteSmartSubtitleTemplateCallable(const DeleteSmartSubtitleTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSmartSubtitleTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteSmartSubtitleTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteSnapshotByTimeOffsetTemplateOutcome MpsClient::DeleteSnapshotByTimeOffsetTemplate(const DeleteSnapshotByTimeOffsetTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSnapshotByTimeOffsetTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSnapshotByTimeOffsetTemplateResponse rsp = DeleteSnapshotByTimeOffsetTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSnapshotByTimeOffsetTemplateOutcome(rsp);
        else
            return DeleteSnapshotByTimeOffsetTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteSnapshotByTimeOffsetTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteSnapshotByTimeOffsetTemplateAsync(const DeleteSnapshotByTimeOffsetTemplateRequest& request, const DeleteSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSnapshotByTimeOffsetTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteSnapshotByTimeOffsetTemplateOutcomeCallable MpsClient::DeleteSnapshotByTimeOffsetTemplateCallable(const DeleteSnapshotByTimeOffsetTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSnapshotByTimeOffsetTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteSnapshotByTimeOffsetTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteTranscodeTemplateOutcome MpsClient::DeleteTranscodeTemplate(const DeleteTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTranscodeTemplateResponse rsp = DeleteTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTranscodeTemplateOutcome(rsp);
        else
            return DeleteTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteTranscodeTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteTranscodeTemplateAsync(const DeleteTranscodeTemplateRequest& request, const DeleteTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteTranscodeTemplateOutcomeCallable MpsClient::DeleteTranscodeTemplateCallable(const DeleteTranscodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTranscodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteTranscodeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteWatermarkTemplateOutcome MpsClient::DeleteWatermarkTemplate(const DeleteWatermarkTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWatermarkTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWatermarkTemplateResponse rsp = DeleteWatermarkTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWatermarkTemplateOutcome(rsp);
        else
            return DeleteWatermarkTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteWatermarkTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteWatermarkTemplateAsync(const DeleteWatermarkTemplateRequest& request, const DeleteWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWatermarkTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteWatermarkTemplateOutcomeCallable MpsClient::DeleteWatermarkTemplateCallable(const DeleteWatermarkTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWatermarkTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteWatermarkTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteWordSamplesOutcome MpsClient::DeleteWordSamples(const DeleteWordSamplesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWordSamples");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWordSamplesResponse rsp = DeleteWordSamplesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWordSamplesOutcome(rsp);
        else
            return DeleteWordSamplesOutcome(o.GetError());
    }
    else
    {
        return DeleteWordSamplesOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteWordSamplesAsync(const DeleteWordSamplesRequest& request, const DeleteWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWordSamples(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteWordSamplesOutcomeCallable MpsClient::DeleteWordSamplesCallable(const DeleteWordSamplesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWordSamplesOutcome()>>(
        [this, request]()
        {
            return this->DeleteWordSamples(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteWorkflowOutcome MpsClient::DeleteWorkflow(const DeleteWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkflowResponse rsp = DeleteWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkflowOutcome(rsp);
        else
            return DeleteWorkflowOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkflowOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteWorkflowAsync(const DeleteWorkflowRequest& request, const DeleteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteWorkflowOutcomeCallable MpsClient::DeleteWorkflowCallable(const DeleteWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWorkflowOutcome()>>(
        [this, request]()
        {
            return this->DeleteWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeAIAnalysisTemplatesOutcome MpsClient::DescribeAIAnalysisTemplates(const DescribeAIAnalysisTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIAnalysisTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIAnalysisTemplatesResponse rsp = DescribeAIAnalysisTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIAnalysisTemplatesOutcome(rsp);
        else
            return DescribeAIAnalysisTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeAIAnalysisTemplatesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeAIAnalysisTemplatesAsync(const DescribeAIAnalysisTemplatesRequest& request, const DescribeAIAnalysisTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAIAnalysisTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeAIAnalysisTemplatesOutcomeCallable MpsClient::DescribeAIAnalysisTemplatesCallable(const DescribeAIAnalysisTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAIAnalysisTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAIAnalysisTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeAIRecognitionTemplatesOutcome MpsClient::DescribeAIRecognitionTemplates(const DescribeAIRecognitionTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIRecognitionTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIRecognitionTemplatesResponse rsp = DescribeAIRecognitionTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIRecognitionTemplatesOutcome(rsp);
        else
            return DescribeAIRecognitionTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeAIRecognitionTemplatesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeAIRecognitionTemplatesAsync(const DescribeAIRecognitionTemplatesRequest& request, const DescribeAIRecognitionTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAIRecognitionTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeAIRecognitionTemplatesOutcomeCallable MpsClient::DescribeAIRecognitionTemplatesCallable(const DescribeAIRecognitionTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAIRecognitionTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAIRecognitionTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeAdaptiveDynamicStreamingTemplatesOutcome MpsClient::DescribeAdaptiveDynamicStreamingTemplates(const DescribeAdaptiveDynamicStreamingTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAdaptiveDynamicStreamingTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAdaptiveDynamicStreamingTemplatesResponse rsp = DescribeAdaptiveDynamicStreamingTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAdaptiveDynamicStreamingTemplatesOutcome(rsp);
        else
            return DescribeAdaptiveDynamicStreamingTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeAdaptiveDynamicStreamingTemplatesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeAdaptiveDynamicStreamingTemplatesAsync(const DescribeAdaptiveDynamicStreamingTemplatesRequest& request, const DescribeAdaptiveDynamicStreamingTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAdaptiveDynamicStreamingTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeAdaptiveDynamicStreamingTemplatesOutcomeCallable MpsClient::DescribeAdaptiveDynamicStreamingTemplatesCallable(const DescribeAdaptiveDynamicStreamingTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAdaptiveDynamicStreamingTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAdaptiveDynamicStreamingTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeAnimatedGraphicsTemplatesOutcome MpsClient::DescribeAnimatedGraphicsTemplates(const DescribeAnimatedGraphicsTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAnimatedGraphicsTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAnimatedGraphicsTemplatesResponse rsp = DescribeAnimatedGraphicsTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAnimatedGraphicsTemplatesOutcome(rsp);
        else
            return DescribeAnimatedGraphicsTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeAnimatedGraphicsTemplatesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeAnimatedGraphicsTemplatesAsync(const DescribeAnimatedGraphicsTemplatesRequest& request, const DescribeAnimatedGraphicsTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAnimatedGraphicsTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeAnimatedGraphicsTemplatesOutcomeCallable MpsClient::DescribeAnimatedGraphicsTemplatesCallable(const DescribeAnimatedGraphicsTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAnimatedGraphicsTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAnimatedGraphicsTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeAsrHotwordsOutcome MpsClient::DescribeAsrHotwords(const DescribeAsrHotwordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAsrHotwords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAsrHotwordsResponse rsp = DescribeAsrHotwordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAsrHotwordsOutcome(rsp);
        else
            return DescribeAsrHotwordsOutcome(o.GetError());
    }
    else
    {
        return DescribeAsrHotwordsOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeAsrHotwordsAsync(const DescribeAsrHotwordsRequest& request, const DescribeAsrHotwordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAsrHotwords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeAsrHotwordsOutcomeCallable MpsClient::DescribeAsrHotwordsCallable(const DescribeAsrHotwordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAsrHotwordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAsrHotwords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeAsrHotwordsListOutcome MpsClient::DescribeAsrHotwordsList(const DescribeAsrHotwordsListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAsrHotwordsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAsrHotwordsListResponse rsp = DescribeAsrHotwordsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAsrHotwordsListOutcome(rsp);
        else
            return DescribeAsrHotwordsListOutcome(o.GetError());
    }
    else
    {
        return DescribeAsrHotwordsListOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeAsrHotwordsListAsync(const DescribeAsrHotwordsListRequest& request, const DescribeAsrHotwordsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAsrHotwordsList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeAsrHotwordsListOutcomeCallable MpsClient::DescribeAsrHotwordsListCallable(const DescribeAsrHotwordsListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAsrHotwordsListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAsrHotwordsList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeBatchTaskDetailOutcome MpsClient::DescribeBatchTaskDetail(const DescribeBatchTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchTaskDetailResponse rsp = DescribeBatchTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchTaskDetailOutcome(rsp);
        else
            return DescribeBatchTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchTaskDetailOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeBatchTaskDetailAsync(const DescribeBatchTaskDetailRequest& request, const DescribeBatchTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBatchTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeBatchTaskDetailOutcomeCallable MpsClient::DescribeBatchTaskDetailCallable(const DescribeBatchTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBatchTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeBatchTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeContentReviewTemplatesOutcome MpsClient::DescribeContentReviewTemplates(const DescribeContentReviewTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContentReviewTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContentReviewTemplatesResponse rsp = DescribeContentReviewTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContentReviewTemplatesOutcome(rsp);
        else
            return DescribeContentReviewTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeContentReviewTemplatesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeContentReviewTemplatesAsync(const DescribeContentReviewTemplatesRequest& request, const DescribeContentReviewTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeContentReviewTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeContentReviewTemplatesOutcomeCallable MpsClient::DescribeContentReviewTemplatesCallable(const DescribeContentReviewTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeContentReviewTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeContentReviewTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeImageSpriteTemplatesOutcome MpsClient::DescribeImageSpriteTemplates(const DescribeImageSpriteTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageSpriteTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageSpriteTemplatesResponse rsp = DescribeImageSpriteTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageSpriteTemplatesOutcome(rsp);
        else
            return DescribeImageSpriteTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeImageSpriteTemplatesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeImageSpriteTemplatesAsync(const DescribeImageSpriteTemplatesRequest& request, const DescribeImageSpriteTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageSpriteTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeImageSpriteTemplatesOutcomeCallable MpsClient::DescribeImageSpriteTemplatesCallable(const DescribeImageSpriteTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageSpriteTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageSpriteTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeImageTaskDetailOutcome MpsClient::DescribeImageTaskDetail(const DescribeImageTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageTaskDetailResponse rsp = DescribeImageTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageTaskDetailOutcome(rsp);
        else
            return DescribeImageTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeImageTaskDetailOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeImageTaskDetailAsync(const DescribeImageTaskDetailRequest& request, const DescribeImageTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeImageTaskDetailOutcomeCallable MpsClient::DescribeImageTaskDetailCallable(const DescribeImageTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeLiveRecordTemplatesOutcome MpsClient::DescribeLiveRecordTemplates(const DescribeLiveRecordTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveRecordTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveRecordTemplatesResponse rsp = DescribeLiveRecordTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveRecordTemplatesOutcome(rsp);
        else
            return DescribeLiveRecordTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveRecordTemplatesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeLiveRecordTemplatesAsync(const DescribeLiveRecordTemplatesRequest& request, const DescribeLiveRecordTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveRecordTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeLiveRecordTemplatesOutcomeCallable MpsClient::DescribeLiveRecordTemplatesCallable(const DescribeLiveRecordTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveRecordTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveRecordTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeMediaMetaDataOutcome MpsClient::DescribeMediaMetaData(const DescribeMediaMetaDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMediaMetaData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaMetaDataResponse rsp = DescribeMediaMetaDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaMetaDataOutcome(rsp);
        else
            return DescribeMediaMetaDataOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaMetaDataOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeMediaMetaDataAsync(const DescribeMediaMetaDataRequest& request, const DescribeMediaMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMediaMetaData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeMediaMetaDataOutcomeCallable MpsClient::DescribeMediaMetaDataCallable(const DescribeMediaMetaDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMediaMetaDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeMediaMetaData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribePersonSamplesOutcome MpsClient::DescribePersonSamples(const DescribePersonSamplesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePersonSamples");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePersonSamplesResponse rsp = DescribePersonSamplesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePersonSamplesOutcome(rsp);
        else
            return DescribePersonSamplesOutcome(o.GetError());
    }
    else
    {
        return DescribePersonSamplesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribePersonSamplesAsync(const DescribePersonSamplesRequest& request, const DescribePersonSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePersonSamples(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribePersonSamplesOutcomeCallable MpsClient::DescribePersonSamplesCallable(const DescribePersonSamplesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePersonSamplesOutcome()>>(
        [this, request]()
        {
            return this->DescribePersonSamples(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeQualityControlTemplatesOutcome MpsClient::DescribeQualityControlTemplates(const DescribeQualityControlTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQualityControlTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQualityControlTemplatesResponse rsp = DescribeQualityControlTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQualityControlTemplatesOutcome(rsp);
        else
            return DescribeQualityControlTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeQualityControlTemplatesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeQualityControlTemplatesAsync(const DescribeQualityControlTemplatesRequest& request, const DescribeQualityControlTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQualityControlTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeQualityControlTemplatesOutcomeCallable MpsClient::DescribeQualityControlTemplatesCallable(const DescribeQualityControlTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQualityControlTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeQualityControlTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeSampleSnapshotTemplatesOutcome MpsClient::DescribeSampleSnapshotTemplates(const DescribeSampleSnapshotTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSampleSnapshotTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSampleSnapshotTemplatesResponse rsp = DescribeSampleSnapshotTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSampleSnapshotTemplatesOutcome(rsp);
        else
            return DescribeSampleSnapshotTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeSampleSnapshotTemplatesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeSampleSnapshotTemplatesAsync(const DescribeSampleSnapshotTemplatesRequest& request, const DescribeSampleSnapshotTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSampleSnapshotTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeSampleSnapshotTemplatesOutcomeCallable MpsClient::DescribeSampleSnapshotTemplatesCallable(const DescribeSampleSnapshotTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSampleSnapshotTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSampleSnapshotTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeSchedulesOutcome MpsClient::DescribeSchedules(const DescribeSchedulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSchedules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSchedulesResponse rsp = DescribeSchedulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSchedulesOutcome(rsp);
        else
            return DescribeSchedulesOutcome(o.GetError());
    }
    else
    {
        return DescribeSchedulesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeSchedulesAsync(const DescribeSchedulesRequest& request, const DescribeSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSchedules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeSchedulesOutcomeCallable MpsClient::DescribeSchedulesCallable(const DescribeSchedulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSchedulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSchedules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeSmartEraseTemplatesOutcome MpsClient::DescribeSmartEraseTemplates(const DescribeSmartEraseTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSmartEraseTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSmartEraseTemplatesResponse rsp = DescribeSmartEraseTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSmartEraseTemplatesOutcome(rsp);
        else
            return DescribeSmartEraseTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeSmartEraseTemplatesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeSmartEraseTemplatesAsync(const DescribeSmartEraseTemplatesRequest& request, const DescribeSmartEraseTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSmartEraseTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeSmartEraseTemplatesOutcomeCallable MpsClient::DescribeSmartEraseTemplatesCallable(const DescribeSmartEraseTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSmartEraseTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSmartEraseTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeSmartSubtitleTemplatesOutcome MpsClient::DescribeSmartSubtitleTemplates(const DescribeSmartSubtitleTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSmartSubtitleTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSmartSubtitleTemplatesResponse rsp = DescribeSmartSubtitleTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSmartSubtitleTemplatesOutcome(rsp);
        else
            return DescribeSmartSubtitleTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeSmartSubtitleTemplatesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeSmartSubtitleTemplatesAsync(const DescribeSmartSubtitleTemplatesRequest& request, const DescribeSmartSubtitleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSmartSubtitleTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeSmartSubtitleTemplatesOutcomeCallable MpsClient::DescribeSmartSubtitleTemplatesCallable(const DescribeSmartSubtitleTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSmartSubtitleTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSmartSubtitleTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeSnapshotByTimeOffsetTemplatesOutcome MpsClient::DescribeSnapshotByTimeOffsetTemplates(const DescribeSnapshotByTimeOffsetTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotByTimeOffsetTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotByTimeOffsetTemplatesResponse rsp = DescribeSnapshotByTimeOffsetTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotByTimeOffsetTemplatesOutcome(rsp);
        else
            return DescribeSnapshotByTimeOffsetTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotByTimeOffsetTemplatesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeSnapshotByTimeOffsetTemplatesAsync(const DescribeSnapshotByTimeOffsetTemplatesRequest& request, const DescribeSnapshotByTimeOffsetTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSnapshotByTimeOffsetTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeSnapshotByTimeOffsetTemplatesOutcomeCallable MpsClient::DescribeSnapshotByTimeOffsetTemplatesCallable(const DescribeSnapshotByTimeOffsetTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSnapshotByTimeOffsetTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSnapshotByTimeOffsetTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeStreamLinkSecurityGroupOutcome MpsClient::DescribeStreamLinkSecurityGroup(const DescribeStreamLinkSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkSecurityGroupResponse rsp = DescribeStreamLinkSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkSecurityGroupOutcome(rsp);
        else
            return DescribeStreamLinkSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkSecurityGroupOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeStreamLinkSecurityGroupAsync(const DescribeStreamLinkSecurityGroupRequest& request, const DescribeStreamLinkSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeStreamLinkSecurityGroupOutcomeCallable MpsClient::DescribeStreamLinkSecurityGroupCallable(const DescribeStreamLinkSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeTaskDetailOutcome MpsClient::DescribeTaskDetail(const DescribeTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskDetailResponse rsp = DescribeTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskDetailOutcome(rsp);
        else
            return DescribeTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskDetailOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeTaskDetailAsync(const DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeTaskDetailOutcomeCallable MpsClient::DescribeTaskDetailCallable(const DescribeTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeTasksOutcome MpsClient::DescribeTasks(const DescribeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksResponse rsp = DescribeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksOutcome(rsp);
        else
            return DescribeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeTasksOutcomeCallable MpsClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeTranscodeTemplatesOutcome MpsClient::DescribeTranscodeTemplates(const DescribeTranscodeTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTranscodeTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTranscodeTemplatesResponse rsp = DescribeTranscodeTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTranscodeTemplatesOutcome(rsp);
        else
            return DescribeTranscodeTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeTranscodeTemplatesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeTranscodeTemplatesAsync(const DescribeTranscodeTemplatesRequest& request, const DescribeTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTranscodeTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeTranscodeTemplatesOutcomeCallable MpsClient::DescribeTranscodeTemplatesCallable(const DescribeTranscodeTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTranscodeTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTranscodeTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeWatermarkTemplatesOutcome MpsClient::DescribeWatermarkTemplates(const DescribeWatermarkTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWatermarkTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWatermarkTemplatesResponse rsp = DescribeWatermarkTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWatermarkTemplatesOutcome(rsp);
        else
            return DescribeWatermarkTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeWatermarkTemplatesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeWatermarkTemplatesAsync(const DescribeWatermarkTemplatesRequest& request, const DescribeWatermarkTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWatermarkTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeWatermarkTemplatesOutcomeCallable MpsClient::DescribeWatermarkTemplatesCallable(const DescribeWatermarkTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWatermarkTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeWatermarkTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeWordSamplesOutcome MpsClient::DescribeWordSamples(const DescribeWordSamplesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWordSamples");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWordSamplesResponse rsp = DescribeWordSamplesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWordSamplesOutcome(rsp);
        else
            return DescribeWordSamplesOutcome(o.GetError());
    }
    else
    {
        return DescribeWordSamplesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeWordSamplesAsync(const DescribeWordSamplesRequest& request, const DescribeWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWordSamples(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeWordSamplesOutcomeCallable MpsClient::DescribeWordSamplesCallable(const DescribeWordSamplesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWordSamplesOutcome()>>(
        [this, request]()
        {
            return this->DescribeWordSamples(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeWorkflowsOutcome MpsClient::DescribeWorkflows(const DescribeWorkflowsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowsResponse rsp = DescribeWorkflowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowsOutcome(rsp);
        else
            return DescribeWorkflowsOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowsOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeWorkflowsAsync(const DescribeWorkflowsRequest& request, const DescribeWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkflows(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeWorkflowsOutcomeCallable MpsClient::DescribeWorkflowsCallable(const DescribeWorkflowsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkflowsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkflows(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DisableScheduleOutcome MpsClient::DisableSchedule(const DisableScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "DisableSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableScheduleResponse rsp = DisableScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableScheduleOutcome(rsp);
        else
            return DisableScheduleOutcome(o.GetError());
    }
    else
    {
        return DisableScheduleOutcome(outcome.GetError());
    }
}

void MpsClient::DisableScheduleAsync(const DisableScheduleRequest& request, const DisableScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DisableScheduleOutcomeCallable MpsClient::DisableScheduleCallable(const DisableScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableScheduleOutcome()>>(
        [this, request]()
        {
            return this->DisableSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DisableWorkflowOutcome MpsClient::DisableWorkflow(const DisableWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "DisableWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableWorkflowResponse rsp = DisableWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableWorkflowOutcome(rsp);
        else
            return DisableWorkflowOutcome(o.GetError());
    }
    else
    {
        return DisableWorkflowOutcome(outcome.GetError());
    }
}

void MpsClient::DisableWorkflowAsync(const DisableWorkflowRequest& request, const DisableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DisableWorkflowOutcomeCallable MpsClient::DisableWorkflowCallable(const DisableWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableWorkflowOutcome()>>(
        [this, request]()
        {
            return this->DisableWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::EditMediaOutcome MpsClient::EditMedia(const EditMediaRequest &request)
{
    auto outcome = MakeRequest(request, "EditMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditMediaResponse rsp = EditMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditMediaOutcome(rsp);
        else
            return EditMediaOutcome(o.GetError());
    }
    else
    {
        return EditMediaOutcome(outcome.GetError());
    }
}

void MpsClient::EditMediaAsync(const EditMediaRequest& request, const EditMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EditMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::EditMediaOutcomeCallable MpsClient::EditMediaCallable(const EditMediaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EditMediaOutcome()>>(
        [this, request]()
        {
            return this->EditMedia(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::EnableScheduleOutcome MpsClient::EnableSchedule(const EnableScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "EnableSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableScheduleResponse rsp = EnableScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableScheduleOutcome(rsp);
        else
            return EnableScheduleOutcome(o.GetError());
    }
    else
    {
        return EnableScheduleOutcome(outcome.GetError());
    }
}

void MpsClient::EnableScheduleAsync(const EnableScheduleRequest& request, const EnableScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::EnableScheduleOutcomeCallable MpsClient::EnableScheduleCallable(const EnableScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableScheduleOutcome()>>(
        [this, request]()
        {
            return this->EnableSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::EnableWorkflowOutcome MpsClient::EnableWorkflow(const EnableWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "EnableWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableWorkflowResponse rsp = EnableWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableWorkflowOutcome(rsp);
        else
            return EnableWorkflowOutcome(o.GetError());
    }
    else
    {
        return EnableWorkflowOutcome(outcome.GetError());
    }
}

void MpsClient::EnableWorkflowAsync(const EnableWorkflowRequest& request, const EnableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::EnableWorkflowOutcomeCallable MpsClient::EnableWorkflowCallable(const EnableWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableWorkflowOutcome()>>(
        [this, request]()
        {
            return this->EnableWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ExecuteFunctionOutcome MpsClient::ExecuteFunction(const ExecuteFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "ExecuteFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExecuteFunctionResponse rsp = ExecuteFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExecuteFunctionOutcome(rsp);
        else
            return ExecuteFunctionOutcome(o.GetError());
    }
    else
    {
        return ExecuteFunctionOutcome(outcome.GetError());
    }
}

void MpsClient::ExecuteFunctionAsync(const ExecuteFunctionRequest& request, const ExecuteFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExecuteFunction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ExecuteFunctionOutcomeCallable MpsClient::ExecuteFunctionCallable(const ExecuteFunctionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExecuteFunctionOutcome()>>(
        [this, request]()
        {
            return this->ExecuteFunction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ManageTaskOutcome MpsClient::ManageTask(const ManageTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ManageTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManageTaskResponse rsp = ManageTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManageTaskOutcome(rsp);
        else
            return ManageTaskOutcome(o.GetError());
    }
    else
    {
        return ManageTaskOutcome(outcome.GetError());
    }
}

void MpsClient::ManageTaskAsync(const ManageTaskRequest& request, const ManageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ManageTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ManageTaskOutcomeCallable MpsClient::ManageTaskCallable(const ManageTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ManageTaskOutcome()>>(
        [this, request]()
        {
            return this->ManageTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyAIAnalysisTemplateOutcome MpsClient::ModifyAIAnalysisTemplate(const ModifyAIAnalysisTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAIAnalysisTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAIAnalysisTemplateResponse rsp = ModifyAIAnalysisTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAIAnalysisTemplateOutcome(rsp);
        else
            return ModifyAIAnalysisTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyAIAnalysisTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyAIAnalysisTemplateAsync(const ModifyAIAnalysisTemplateRequest& request, const ModifyAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAIAnalysisTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyAIAnalysisTemplateOutcomeCallable MpsClient::ModifyAIAnalysisTemplateCallable(const ModifyAIAnalysisTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAIAnalysisTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyAIAnalysisTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyAIRecognitionTemplateOutcome MpsClient::ModifyAIRecognitionTemplate(const ModifyAIRecognitionTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAIRecognitionTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAIRecognitionTemplateResponse rsp = ModifyAIRecognitionTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAIRecognitionTemplateOutcome(rsp);
        else
            return ModifyAIRecognitionTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyAIRecognitionTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyAIRecognitionTemplateAsync(const ModifyAIRecognitionTemplateRequest& request, const ModifyAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAIRecognitionTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyAIRecognitionTemplateOutcomeCallable MpsClient::ModifyAIRecognitionTemplateCallable(const ModifyAIRecognitionTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAIRecognitionTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyAIRecognitionTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyAdaptiveDynamicStreamingTemplateOutcome MpsClient::ModifyAdaptiveDynamicStreamingTemplate(const ModifyAdaptiveDynamicStreamingTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAdaptiveDynamicStreamingTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAdaptiveDynamicStreamingTemplateResponse rsp = ModifyAdaptiveDynamicStreamingTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAdaptiveDynamicStreamingTemplateOutcome(rsp);
        else
            return ModifyAdaptiveDynamicStreamingTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyAdaptiveDynamicStreamingTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyAdaptiveDynamicStreamingTemplateAsync(const ModifyAdaptiveDynamicStreamingTemplateRequest& request, const ModifyAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAdaptiveDynamicStreamingTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyAdaptiveDynamicStreamingTemplateOutcomeCallable MpsClient::ModifyAdaptiveDynamicStreamingTemplateCallable(const ModifyAdaptiveDynamicStreamingTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAdaptiveDynamicStreamingTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyAdaptiveDynamicStreamingTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyAnimatedGraphicsTemplateOutcome MpsClient::ModifyAnimatedGraphicsTemplate(const ModifyAnimatedGraphicsTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAnimatedGraphicsTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAnimatedGraphicsTemplateResponse rsp = ModifyAnimatedGraphicsTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAnimatedGraphicsTemplateOutcome(rsp);
        else
            return ModifyAnimatedGraphicsTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyAnimatedGraphicsTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyAnimatedGraphicsTemplateAsync(const ModifyAnimatedGraphicsTemplateRequest& request, const ModifyAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAnimatedGraphicsTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyAnimatedGraphicsTemplateOutcomeCallable MpsClient::ModifyAnimatedGraphicsTemplateCallable(const ModifyAnimatedGraphicsTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAnimatedGraphicsTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyAnimatedGraphicsTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyAsrHotwordsOutcome MpsClient::ModifyAsrHotwords(const ModifyAsrHotwordsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAsrHotwords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAsrHotwordsResponse rsp = ModifyAsrHotwordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAsrHotwordsOutcome(rsp);
        else
            return ModifyAsrHotwordsOutcome(o.GetError());
    }
    else
    {
        return ModifyAsrHotwordsOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyAsrHotwordsAsync(const ModifyAsrHotwordsRequest& request, const ModifyAsrHotwordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAsrHotwords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyAsrHotwordsOutcomeCallable MpsClient::ModifyAsrHotwordsCallable(const ModifyAsrHotwordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAsrHotwordsOutcome()>>(
        [this, request]()
        {
            return this->ModifyAsrHotwords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyContentReviewTemplateOutcome MpsClient::ModifyContentReviewTemplate(const ModifyContentReviewTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyContentReviewTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyContentReviewTemplateResponse rsp = ModifyContentReviewTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyContentReviewTemplateOutcome(rsp);
        else
            return ModifyContentReviewTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyContentReviewTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyContentReviewTemplateAsync(const ModifyContentReviewTemplateRequest& request, const ModifyContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyContentReviewTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyContentReviewTemplateOutcomeCallable MpsClient::ModifyContentReviewTemplateCallable(const ModifyContentReviewTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyContentReviewTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyContentReviewTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyImageSpriteTemplateOutcome MpsClient::ModifyImageSpriteTemplate(const ModifyImageSpriteTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyImageSpriteTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyImageSpriteTemplateResponse rsp = ModifyImageSpriteTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyImageSpriteTemplateOutcome(rsp);
        else
            return ModifyImageSpriteTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyImageSpriteTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyImageSpriteTemplateAsync(const ModifyImageSpriteTemplateRequest& request, const ModifyImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyImageSpriteTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyImageSpriteTemplateOutcomeCallable MpsClient::ModifyImageSpriteTemplateCallable(const ModifyImageSpriteTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyImageSpriteTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyImageSpriteTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyLiveRecordTemplateOutcome MpsClient::ModifyLiveRecordTemplate(const ModifyLiveRecordTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveRecordTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveRecordTemplateResponse rsp = ModifyLiveRecordTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveRecordTemplateOutcome(rsp);
        else
            return ModifyLiveRecordTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveRecordTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyLiveRecordTemplateAsync(const ModifyLiveRecordTemplateRequest& request, const ModifyLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveRecordTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyLiveRecordTemplateOutcomeCallable MpsClient::ModifyLiveRecordTemplateCallable(const ModifyLiveRecordTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLiveRecordTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyLiveRecordTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyPersonSampleOutcome MpsClient::ModifyPersonSample(const ModifyPersonSampleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPersonSample");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPersonSampleResponse rsp = ModifyPersonSampleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPersonSampleOutcome(rsp);
        else
            return ModifyPersonSampleOutcome(o.GetError());
    }
    else
    {
        return ModifyPersonSampleOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyPersonSampleAsync(const ModifyPersonSampleRequest& request, const ModifyPersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPersonSample(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyPersonSampleOutcomeCallable MpsClient::ModifyPersonSampleCallable(const ModifyPersonSampleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPersonSampleOutcome()>>(
        [this, request]()
        {
            return this->ModifyPersonSample(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyQualityControlTemplateOutcome MpsClient::ModifyQualityControlTemplate(const ModifyQualityControlTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyQualityControlTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyQualityControlTemplateResponse rsp = ModifyQualityControlTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyQualityControlTemplateOutcome(rsp);
        else
            return ModifyQualityControlTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyQualityControlTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyQualityControlTemplateAsync(const ModifyQualityControlTemplateRequest& request, const ModifyQualityControlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyQualityControlTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyQualityControlTemplateOutcomeCallable MpsClient::ModifyQualityControlTemplateCallable(const ModifyQualityControlTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyQualityControlTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyQualityControlTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifySampleSnapshotTemplateOutcome MpsClient::ModifySampleSnapshotTemplate(const ModifySampleSnapshotTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySampleSnapshotTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySampleSnapshotTemplateResponse rsp = ModifySampleSnapshotTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySampleSnapshotTemplateOutcome(rsp);
        else
            return ModifySampleSnapshotTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifySampleSnapshotTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::ModifySampleSnapshotTemplateAsync(const ModifySampleSnapshotTemplateRequest& request, const ModifySampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySampleSnapshotTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifySampleSnapshotTemplateOutcomeCallable MpsClient::ModifySampleSnapshotTemplateCallable(const ModifySampleSnapshotTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySampleSnapshotTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifySampleSnapshotTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyScheduleOutcome MpsClient::ModifySchedule(const ModifyScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyScheduleResponse rsp = ModifyScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyScheduleOutcome(rsp);
        else
            return ModifyScheduleOutcome(o.GetError());
    }
    else
    {
        return ModifyScheduleOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyScheduleAsync(const ModifyScheduleRequest& request, const ModifyScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyScheduleOutcomeCallable MpsClient::ModifyScheduleCallable(const ModifyScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyScheduleOutcome()>>(
        [this, request]()
        {
            return this->ModifySchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifySmartEraseTemplateOutcome MpsClient::ModifySmartEraseTemplate(const ModifySmartEraseTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySmartEraseTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySmartEraseTemplateResponse rsp = ModifySmartEraseTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySmartEraseTemplateOutcome(rsp);
        else
            return ModifySmartEraseTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifySmartEraseTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::ModifySmartEraseTemplateAsync(const ModifySmartEraseTemplateRequest& request, const ModifySmartEraseTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySmartEraseTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifySmartEraseTemplateOutcomeCallable MpsClient::ModifySmartEraseTemplateCallable(const ModifySmartEraseTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySmartEraseTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifySmartEraseTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifySmartSubtitleTemplateOutcome MpsClient::ModifySmartSubtitleTemplate(const ModifySmartSubtitleTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySmartSubtitleTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySmartSubtitleTemplateResponse rsp = ModifySmartSubtitleTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySmartSubtitleTemplateOutcome(rsp);
        else
            return ModifySmartSubtitleTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifySmartSubtitleTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::ModifySmartSubtitleTemplateAsync(const ModifySmartSubtitleTemplateRequest& request, const ModifySmartSubtitleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySmartSubtitleTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifySmartSubtitleTemplateOutcomeCallable MpsClient::ModifySmartSubtitleTemplateCallable(const ModifySmartSubtitleTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySmartSubtitleTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifySmartSubtitleTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifySnapshotByTimeOffsetTemplateOutcome MpsClient::ModifySnapshotByTimeOffsetTemplate(const ModifySnapshotByTimeOffsetTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySnapshotByTimeOffsetTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySnapshotByTimeOffsetTemplateResponse rsp = ModifySnapshotByTimeOffsetTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySnapshotByTimeOffsetTemplateOutcome(rsp);
        else
            return ModifySnapshotByTimeOffsetTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifySnapshotByTimeOffsetTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::ModifySnapshotByTimeOffsetTemplateAsync(const ModifySnapshotByTimeOffsetTemplateRequest& request, const ModifySnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySnapshotByTimeOffsetTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifySnapshotByTimeOffsetTemplateOutcomeCallable MpsClient::ModifySnapshotByTimeOffsetTemplateCallable(const ModifySnapshotByTimeOffsetTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySnapshotByTimeOffsetTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifySnapshotByTimeOffsetTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyTranscodeTemplateOutcome MpsClient::ModifyTranscodeTemplate(const ModifyTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTranscodeTemplateResponse rsp = ModifyTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTranscodeTemplateOutcome(rsp);
        else
            return ModifyTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyTranscodeTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyTranscodeTemplateAsync(const ModifyTranscodeTemplateRequest& request, const ModifyTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyTranscodeTemplateOutcomeCallable MpsClient::ModifyTranscodeTemplateCallable(const ModifyTranscodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTranscodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyTranscodeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyWatermarkTemplateOutcome MpsClient::ModifyWatermarkTemplate(const ModifyWatermarkTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWatermarkTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWatermarkTemplateResponse rsp = ModifyWatermarkTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWatermarkTemplateOutcome(rsp);
        else
            return ModifyWatermarkTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyWatermarkTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyWatermarkTemplateAsync(const ModifyWatermarkTemplateRequest& request, const ModifyWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWatermarkTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyWatermarkTemplateOutcomeCallable MpsClient::ModifyWatermarkTemplateCallable(const ModifyWatermarkTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWatermarkTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyWatermarkTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyWordSampleOutcome MpsClient::ModifyWordSample(const ModifyWordSampleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWordSample");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWordSampleResponse rsp = ModifyWordSampleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWordSampleOutcome(rsp);
        else
            return ModifyWordSampleOutcome(o.GetError());
    }
    else
    {
        return ModifyWordSampleOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyWordSampleAsync(const ModifyWordSampleRequest& request, const ModifyWordSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWordSample(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyWordSampleOutcomeCallable MpsClient::ModifyWordSampleCallable(const ModifyWordSampleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWordSampleOutcome()>>(
        [this, request]()
        {
            return this->ModifyWordSample(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ParseLiveStreamProcessNotificationOutcome MpsClient::ParseLiveStreamProcessNotification(const ParseLiveStreamProcessNotificationRequest &request)
{
    auto outcome = MakeRequest(request, "ParseLiveStreamProcessNotification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ParseLiveStreamProcessNotificationResponse rsp = ParseLiveStreamProcessNotificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ParseLiveStreamProcessNotificationOutcome(rsp);
        else
            return ParseLiveStreamProcessNotificationOutcome(o.GetError());
    }
    else
    {
        return ParseLiveStreamProcessNotificationOutcome(outcome.GetError());
    }
}

void MpsClient::ParseLiveStreamProcessNotificationAsync(const ParseLiveStreamProcessNotificationRequest& request, const ParseLiveStreamProcessNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ParseLiveStreamProcessNotification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ParseLiveStreamProcessNotificationOutcomeCallable MpsClient::ParseLiveStreamProcessNotificationCallable(const ParseLiveStreamProcessNotificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ParseLiveStreamProcessNotificationOutcome()>>(
        [this, request]()
        {
            return this->ParseLiveStreamProcessNotification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ParseNotificationOutcome MpsClient::ParseNotification(const ParseNotificationRequest &request)
{
    auto outcome = MakeRequest(request, "ParseNotification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ParseNotificationResponse rsp = ParseNotificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ParseNotificationOutcome(rsp);
        else
            return ParseNotificationOutcome(o.GetError());
    }
    else
    {
        return ParseNotificationOutcome(outcome.GetError());
    }
}

void MpsClient::ParseNotificationAsync(const ParseNotificationRequest& request, const ParseNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ParseNotification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ParseNotificationOutcomeCallable MpsClient::ParseNotificationCallable(const ParseNotificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ParseNotificationOutcome()>>(
        [this, request]()
        {
            return this->ParseNotification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ProcessImageOutcome MpsClient::ProcessImage(const ProcessImageRequest &request)
{
    auto outcome = MakeRequest(request, "ProcessImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ProcessImageResponse rsp = ProcessImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ProcessImageOutcome(rsp);
        else
            return ProcessImageOutcome(o.GetError());
    }
    else
    {
        return ProcessImageOutcome(outcome.GetError());
    }
}

void MpsClient::ProcessImageAsync(const ProcessImageRequest& request, const ProcessImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ProcessImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ProcessImageOutcomeCallable MpsClient::ProcessImageCallable(const ProcessImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ProcessImageOutcome()>>(
        [this, request]()
        {
            return this->ProcessImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ProcessLiveStreamOutcome MpsClient::ProcessLiveStream(const ProcessLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "ProcessLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ProcessLiveStreamResponse rsp = ProcessLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ProcessLiveStreamOutcome(rsp);
        else
            return ProcessLiveStreamOutcome(o.GetError());
    }
    else
    {
        return ProcessLiveStreamOutcome(outcome.GetError());
    }
}

void MpsClient::ProcessLiveStreamAsync(const ProcessLiveStreamRequest& request, const ProcessLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ProcessLiveStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ProcessLiveStreamOutcomeCallable MpsClient::ProcessLiveStreamCallable(const ProcessLiveStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ProcessLiveStreamOutcome()>>(
        [this, request]()
        {
            return this->ProcessLiveStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ProcessMediaOutcome MpsClient::ProcessMedia(const ProcessMediaRequest &request)
{
    auto outcome = MakeRequest(request, "ProcessMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ProcessMediaResponse rsp = ProcessMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ProcessMediaOutcome(rsp);
        else
            return ProcessMediaOutcome(o.GetError());
    }
    else
    {
        return ProcessMediaOutcome(outcome.GetError());
    }
}

void MpsClient::ProcessMediaAsync(const ProcessMediaRequest& request, const ProcessMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ProcessMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ProcessMediaOutcomeCallable MpsClient::ProcessMediaCallable(const ProcessMediaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ProcessMediaOutcome()>>(
        [this, request]()
        {
            return this->ProcessMedia(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ResetWorkflowOutcome MpsClient::ResetWorkflow(const ResetWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "ResetWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetWorkflowResponse rsp = ResetWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetWorkflowOutcome(rsp);
        else
            return ResetWorkflowOutcome(o.GetError());
    }
    else
    {
        return ResetWorkflowOutcome(outcome.GetError());
    }
}

void MpsClient::ResetWorkflowAsync(const ResetWorkflowRequest& request, const ResetWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ResetWorkflowOutcomeCallable MpsClient::ResetWorkflowCallable(const ResetWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetWorkflowOutcome()>>(
        [this, request]()
        {
            return this->ResetWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

