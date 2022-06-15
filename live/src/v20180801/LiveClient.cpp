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

#include <tencentcloud/live/v20180801/LiveClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Live::V20180801;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-08-01";
    const string ENDPOINT = "live.tencentcloudapi.com";
}

LiveClient::LiveClient(const Credential &credential, const string &region) :
    LiveClient(credential, region, ClientProfile())
{
}

LiveClient::LiveClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


LiveClient::AddDelayLiveStreamOutcome LiveClient::AddDelayLiveStream(const AddDelayLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "AddDelayLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddDelayLiveStreamResponse rsp = AddDelayLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddDelayLiveStreamOutcome(rsp);
        else
            return AddDelayLiveStreamOutcome(o.GetError());
    }
    else
    {
        return AddDelayLiveStreamOutcome(outcome.GetError());
    }
}

void LiveClient::AddDelayLiveStreamAsync(const AddDelayLiveStreamRequest& request, const AddDelayLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddDelayLiveStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::AddDelayLiveStreamOutcomeCallable LiveClient::AddDelayLiveStreamCallable(const AddDelayLiveStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddDelayLiveStreamOutcome()>>(
        [this, request]()
        {
            return this->AddDelayLiveStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::AddLiveDomainOutcome LiveClient::AddLiveDomain(const AddLiveDomainRequest &request)
{
    auto outcome = MakeRequest(request, "AddLiveDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddLiveDomainResponse rsp = AddLiveDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddLiveDomainOutcome(rsp);
        else
            return AddLiveDomainOutcome(o.GetError());
    }
    else
    {
        return AddLiveDomainOutcome(outcome.GetError());
    }
}

void LiveClient::AddLiveDomainAsync(const AddLiveDomainRequest& request, const AddLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddLiveDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::AddLiveDomainOutcomeCallable LiveClient::AddLiveDomainCallable(const AddLiveDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddLiveDomainOutcome()>>(
        [this, request]()
        {
            return this->AddLiveDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::AddLiveWatermarkOutcome LiveClient::AddLiveWatermark(const AddLiveWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "AddLiveWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddLiveWatermarkResponse rsp = AddLiveWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddLiveWatermarkOutcome(rsp);
        else
            return AddLiveWatermarkOutcome(o.GetError());
    }
    else
    {
        return AddLiveWatermarkOutcome(outcome.GetError());
    }
}

void LiveClient::AddLiveWatermarkAsync(const AddLiveWatermarkRequest& request, const AddLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddLiveWatermark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::AddLiveWatermarkOutcomeCallable LiveClient::AddLiveWatermarkCallable(const AddLiveWatermarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddLiveWatermarkOutcome()>>(
        [this, request]()
        {
            return this->AddLiveWatermark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::BindLiveDomainCertOutcome LiveClient::BindLiveDomainCert(const BindLiveDomainCertRequest &request)
{
    auto outcome = MakeRequest(request, "BindLiveDomainCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindLiveDomainCertResponse rsp = BindLiveDomainCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindLiveDomainCertOutcome(rsp);
        else
            return BindLiveDomainCertOutcome(o.GetError());
    }
    else
    {
        return BindLiveDomainCertOutcome(outcome.GetError());
    }
}

void LiveClient::BindLiveDomainCertAsync(const BindLiveDomainCertRequest& request, const BindLiveDomainCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindLiveDomainCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::BindLiveDomainCertOutcomeCallable LiveClient::BindLiveDomainCertCallable(const BindLiveDomainCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindLiveDomainCertOutcome()>>(
        [this, request]()
        {
            return this->BindLiveDomainCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CancelCommonMixStreamOutcome LiveClient::CancelCommonMixStream(const CancelCommonMixStreamRequest &request)
{
    auto outcome = MakeRequest(request, "CancelCommonMixStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelCommonMixStreamResponse rsp = CancelCommonMixStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelCommonMixStreamOutcome(rsp);
        else
            return CancelCommonMixStreamOutcome(o.GetError());
    }
    else
    {
        return CancelCommonMixStreamOutcome(outcome.GetError());
    }
}

void LiveClient::CancelCommonMixStreamAsync(const CancelCommonMixStreamRequest& request, const CancelCommonMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelCommonMixStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CancelCommonMixStreamOutcomeCallable LiveClient::CancelCommonMixStreamCallable(const CancelCommonMixStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelCommonMixStreamOutcome()>>(
        [this, request]()
        {
            return this->CancelCommonMixStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateCommonMixStreamOutcome LiveClient::CreateCommonMixStream(const CreateCommonMixStreamRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCommonMixStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCommonMixStreamResponse rsp = CreateCommonMixStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCommonMixStreamOutcome(rsp);
        else
            return CreateCommonMixStreamOutcome(o.GetError());
    }
    else
    {
        return CreateCommonMixStreamOutcome(outcome.GetError());
    }
}

void LiveClient::CreateCommonMixStreamAsync(const CreateCommonMixStreamRequest& request, const CreateCommonMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCommonMixStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateCommonMixStreamOutcomeCallable LiveClient::CreateCommonMixStreamCallable(const CreateCommonMixStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCommonMixStreamOutcome()>>(
        [this, request]()
        {
            return this->CreateCommonMixStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveCallbackRuleOutcome LiveClient::CreateLiveCallbackRule(const CreateLiveCallbackRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveCallbackRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveCallbackRuleResponse rsp = CreateLiveCallbackRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveCallbackRuleOutcome(rsp);
        else
            return CreateLiveCallbackRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLiveCallbackRuleOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveCallbackRuleAsync(const CreateLiveCallbackRuleRequest& request, const CreateLiveCallbackRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveCallbackRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveCallbackRuleOutcomeCallable LiveClient::CreateLiveCallbackRuleCallable(const CreateLiveCallbackRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveCallbackRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveCallbackRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveCallbackTemplateOutcome LiveClient::CreateLiveCallbackTemplate(const CreateLiveCallbackTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveCallbackTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveCallbackTemplateResponse rsp = CreateLiveCallbackTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveCallbackTemplateOutcome(rsp);
        else
            return CreateLiveCallbackTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateLiveCallbackTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveCallbackTemplateAsync(const CreateLiveCallbackTemplateRequest& request, const CreateLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveCallbackTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveCallbackTemplateOutcomeCallable LiveClient::CreateLiveCallbackTemplateCallable(const CreateLiveCallbackTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveCallbackTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveCallbackTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveCertOutcome LiveClient::CreateLiveCert(const CreateLiveCertRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveCertResponse rsp = CreateLiveCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveCertOutcome(rsp);
        else
            return CreateLiveCertOutcome(o.GetError());
    }
    else
    {
        return CreateLiveCertOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveCertAsync(const CreateLiveCertRequest& request, const CreateLiveCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveCertOutcomeCallable LiveClient::CreateLiveCertCallable(const CreateLiveCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveCertOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveRecordOutcome LiveClient::CreateLiveRecord(const CreateLiveRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveRecordResponse rsp = CreateLiveRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveRecordOutcome(rsp);
        else
            return CreateLiveRecordOutcome(o.GetError());
    }
    else
    {
        return CreateLiveRecordOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveRecordAsync(const CreateLiveRecordRequest& request, const CreateLiveRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveRecordOutcomeCallable LiveClient::CreateLiveRecordCallable(const CreateLiveRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveRecordOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveRecordRuleOutcome LiveClient::CreateLiveRecordRule(const CreateLiveRecordRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveRecordRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveRecordRuleResponse rsp = CreateLiveRecordRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveRecordRuleOutcome(rsp);
        else
            return CreateLiveRecordRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLiveRecordRuleOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveRecordRuleAsync(const CreateLiveRecordRuleRequest& request, const CreateLiveRecordRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveRecordRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveRecordRuleOutcomeCallable LiveClient::CreateLiveRecordRuleCallable(const CreateLiveRecordRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveRecordRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveRecordRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveRecordTemplateOutcome LiveClient::CreateLiveRecordTemplate(const CreateLiveRecordTemplateRequest &request)
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

void LiveClient::CreateLiveRecordTemplateAsync(const CreateLiveRecordTemplateRequest& request, const CreateLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveRecordTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveRecordTemplateOutcomeCallable LiveClient::CreateLiveRecordTemplateCallable(const CreateLiveRecordTemplateRequest &request)
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

LiveClient::CreateLiveSnapshotRuleOutcome LiveClient::CreateLiveSnapshotRule(const CreateLiveSnapshotRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveSnapshotRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveSnapshotRuleResponse rsp = CreateLiveSnapshotRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveSnapshotRuleOutcome(rsp);
        else
            return CreateLiveSnapshotRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLiveSnapshotRuleOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveSnapshotRuleAsync(const CreateLiveSnapshotRuleRequest& request, const CreateLiveSnapshotRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveSnapshotRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveSnapshotRuleOutcomeCallable LiveClient::CreateLiveSnapshotRuleCallable(const CreateLiveSnapshotRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveSnapshotRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveSnapshotRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveSnapshotTemplateOutcome LiveClient::CreateLiveSnapshotTemplate(const CreateLiveSnapshotTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveSnapshotTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveSnapshotTemplateResponse rsp = CreateLiveSnapshotTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveSnapshotTemplateOutcome(rsp);
        else
            return CreateLiveSnapshotTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateLiveSnapshotTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveSnapshotTemplateAsync(const CreateLiveSnapshotTemplateRequest& request, const CreateLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveSnapshotTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveSnapshotTemplateOutcomeCallable LiveClient::CreateLiveSnapshotTemplateCallable(const CreateLiveSnapshotTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveSnapshotTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveSnapshotTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveTranscodeRuleOutcome LiveClient::CreateLiveTranscodeRule(const CreateLiveTranscodeRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveTranscodeRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveTranscodeRuleResponse rsp = CreateLiveTranscodeRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveTranscodeRuleOutcome(rsp);
        else
            return CreateLiveTranscodeRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLiveTranscodeRuleOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveTranscodeRuleAsync(const CreateLiveTranscodeRuleRequest& request, const CreateLiveTranscodeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveTranscodeRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveTranscodeRuleOutcomeCallable LiveClient::CreateLiveTranscodeRuleCallable(const CreateLiveTranscodeRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveTranscodeRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveTranscodeRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveTranscodeTemplateOutcome LiveClient::CreateLiveTranscodeTemplate(const CreateLiveTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveTranscodeTemplateResponse rsp = CreateLiveTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveTranscodeTemplateOutcome(rsp);
        else
            return CreateLiveTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateLiveTranscodeTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveTranscodeTemplateAsync(const CreateLiveTranscodeTemplateRequest& request, const CreateLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveTranscodeTemplateOutcomeCallable LiveClient::CreateLiveTranscodeTemplateCallable(const CreateLiveTranscodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveTranscodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveTranscodeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateLiveWatermarkRuleOutcome LiveClient::CreateLiveWatermarkRule(const CreateLiveWatermarkRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveWatermarkRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveWatermarkRuleResponse rsp = CreateLiveWatermarkRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveWatermarkRuleOutcome(rsp);
        else
            return CreateLiveWatermarkRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLiveWatermarkRuleOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveWatermarkRuleAsync(const CreateLiveWatermarkRuleRequest& request, const CreateLiveWatermarkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveWatermarkRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateLiveWatermarkRuleOutcomeCallable LiveClient::CreateLiveWatermarkRuleCallable(const CreateLiveWatermarkRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveWatermarkRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveWatermarkRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::CreateRecordTaskOutcome LiveClient::CreateRecordTask(const CreateRecordTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecordTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecordTaskResponse rsp = CreateRecordTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecordTaskOutcome(rsp);
        else
            return CreateRecordTaskOutcome(o.GetError());
    }
    else
    {
        return CreateRecordTaskOutcome(outcome.GetError());
    }
}

void LiveClient::CreateRecordTaskAsync(const CreateRecordTaskRequest& request, const CreateRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRecordTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::CreateRecordTaskOutcomeCallable LiveClient::CreateRecordTaskCallable(const CreateRecordTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRecordTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateRecordTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveCallbackRuleOutcome LiveClient::DeleteLiveCallbackRule(const DeleteLiveCallbackRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveCallbackRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveCallbackRuleResponse rsp = DeleteLiveCallbackRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveCallbackRuleOutcome(rsp);
        else
            return DeleteLiveCallbackRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveCallbackRuleOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveCallbackRuleAsync(const DeleteLiveCallbackRuleRequest& request, const DeleteLiveCallbackRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveCallbackRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveCallbackRuleOutcomeCallable LiveClient::DeleteLiveCallbackRuleCallable(const DeleteLiveCallbackRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveCallbackRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveCallbackRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveCallbackTemplateOutcome LiveClient::DeleteLiveCallbackTemplate(const DeleteLiveCallbackTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveCallbackTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveCallbackTemplateResponse rsp = DeleteLiveCallbackTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveCallbackTemplateOutcome(rsp);
        else
            return DeleteLiveCallbackTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveCallbackTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveCallbackTemplateAsync(const DeleteLiveCallbackTemplateRequest& request, const DeleteLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveCallbackTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveCallbackTemplateOutcomeCallable LiveClient::DeleteLiveCallbackTemplateCallable(const DeleteLiveCallbackTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveCallbackTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveCallbackTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveCertOutcome LiveClient::DeleteLiveCert(const DeleteLiveCertRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveCertResponse rsp = DeleteLiveCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveCertOutcome(rsp);
        else
            return DeleteLiveCertOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveCertOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveCertAsync(const DeleteLiveCertRequest& request, const DeleteLiveCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveCertOutcomeCallable LiveClient::DeleteLiveCertCallable(const DeleteLiveCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveCertOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveDomainOutcome LiveClient::DeleteLiveDomain(const DeleteLiveDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveDomainResponse rsp = DeleteLiveDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveDomainOutcome(rsp);
        else
            return DeleteLiveDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveDomainOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveDomainAsync(const DeleteLiveDomainRequest& request, const DeleteLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveDomainOutcomeCallable LiveClient::DeleteLiveDomainCallable(const DeleteLiveDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveDomainOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveRecordOutcome LiveClient::DeleteLiveRecord(const DeleteLiveRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveRecordResponse rsp = DeleteLiveRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveRecordOutcome(rsp);
        else
            return DeleteLiveRecordOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveRecordOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveRecordAsync(const DeleteLiveRecordRequest& request, const DeleteLiveRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveRecordOutcomeCallable LiveClient::DeleteLiveRecordCallable(const DeleteLiveRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveRecordOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveRecordRuleOutcome LiveClient::DeleteLiveRecordRule(const DeleteLiveRecordRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveRecordRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveRecordRuleResponse rsp = DeleteLiveRecordRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveRecordRuleOutcome(rsp);
        else
            return DeleteLiveRecordRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveRecordRuleOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveRecordRuleAsync(const DeleteLiveRecordRuleRequest& request, const DeleteLiveRecordRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveRecordRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveRecordRuleOutcomeCallable LiveClient::DeleteLiveRecordRuleCallable(const DeleteLiveRecordRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveRecordRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveRecordRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveRecordTemplateOutcome LiveClient::DeleteLiveRecordTemplate(const DeleteLiveRecordTemplateRequest &request)
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

void LiveClient::DeleteLiveRecordTemplateAsync(const DeleteLiveRecordTemplateRequest& request, const DeleteLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveRecordTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveRecordTemplateOutcomeCallable LiveClient::DeleteLiveRecordTemplateCallable(const DeleteLiveRecordTemplateRequest &request)
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

LiveClient::DeleteLiveSnapshotRuleOutcome LiveClient::DeleteLiveSnapshotRule(const DeleteLiveSnapshotRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveSnapshotRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveSnapshotRuleResponse rsp = DeleteLiveSnapshotRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveSnapshotRuleOutcome(rsp);
        else
            return DeleteLiveSnapshotRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveSnapshotRuleOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveSnapshotRuleAsync(const DeleteLiveSnapshotRuleRequest& request, const DeleteLiveSnapshotRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveSnapshotRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveSnapshotRuleOutcomeCallable LiveClient::DeleteLiveSnapshotRuleCallable(const DeleteLiveSnapshotRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveSnapshotRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveSnapshotRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveSnapshotTemplateOutcome LiveClient::DeleteLiveSnapshotTemplate(const DeleteLiveSnapshotTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveSnapshotTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveSnapshotTemplateResponse rsp = DeleteLiveSnapshotTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveSnapshotTemplateOutcome(rsp);
        else
            return DeleteLiveSnapshotTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveSnapshotTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveSnapshotTemplateAsync(const DeleteLiveSnapshotTemplateRequest& request, const DeleteLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveSnapshotTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveSnapshotTemplateOutcomeCallable LiveClient::DeleteLiveSnapshotTemplateCallable(const DeleteLiveSnapshotTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveSnapshotTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveSnapshotTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveTranscodeRuleOutcome LiveClient::DeleteLiveTranscodeRule(const DeleteLiveTranscodeRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveTranscodeRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveTranscodeRuleResponse rsp = DeleteLiveTranscodeRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveTranscodeRuleOutcome(rsp);
        else
            return DeleteLiveTranscodeRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveTranscodeRuleOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveTranscodeRuleAsync(const DeleteLiveTranscodeRuleRequest& request, const DeleteLiveTranscodeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveTranscodeRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveTranscodeRuleOutcomeCallable LiveClient::DeleteLiveTranscodeRuleCallable(const DeleteLiveTranscodeRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveTranscodeRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveTranscodeRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveTranscodeTemplateOutcome LiveClient::DeleteLiveTranscodeTemplate(const DeleteLiveTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveTranscodeTemplateResponse rsp = DeleteLiveTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveTranscodeTemplateOutcome(rsp);
        else
            return DeleteLiveTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveTranscodeTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveTranscodeTemplateAsync(const DeleteLiveTranscodeTemplateRequest& request, const DeleteLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveTranscodeTemplateOutcomeCallable LiveClient::DeleteLiveTranscodeTemplateCallable(const DeleteLiveTranscodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveTranscodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveTranscodeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveWatermarkOutcome LiveClient::DeleteLiveWatermark(const DeleteLiveWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveWatermarkResponse rsp = DeleteLiveWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveWatermarkOutcome(rsp);
        else
            return DeleteLiveWatermarkOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveWatermarkOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveWatermarkAsync(const DeleteLiveWatermarkRequest& request, const DeleteLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveWatermark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveWatermarkOutcomeCallable LiveClient::DeleteLiveWatermarkCallable(const DeleteLiveWatermarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveWatermarkOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveWatermark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteLiveWatermarkRuleOutcome LiveClient::DeleteLiveWatermarkRule(const DeleteLiveWatermarkRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveWatermarkRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveWatermarkRuleResponse rsp = DeleteLiveWatermarkRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveWatermarkRuleOutcome(rsp);
        else
            return DeleteLiveWatermarkRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveWatermarkRuleOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveWatermarkRuleAsync(const DeleteLiveWatermarkRuleRequest& request, const DeleteLiveWatermarkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveWatermarkRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteLiveWatermarkRuleOutcomeCallable LiveClient::DeleteLiveWatermarkRuleCallable(const DeleteLiveWatermarkRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveWatermarkRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveWatermarkRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DeleteRecordTaskOutcome LiveClient::DeleteRecordTask(const DeleteRecordTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecordTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordTaskResponse rsp = DeleteRecordTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordTaskOutcome(rsp);
        else
            return DeleteRecordTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordTaskOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteRecordTaskAsync(const DeleteRecordTaskRequest& request, const DeleteRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRecordTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DeleteRecordTaskOutcomeCallable LiveClient::DeleteRecordTaskCallable(const DeleteRecordTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRecordTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteRecordTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeConcurrentRecordStreamNumOutcome LiveClient::DescribeConcurrentRecordStreamNum(const DescribeConcurrentRecordStreamNumRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConcurrentRecordStreamNum");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConcurrentRecordStreamNumResponse rsp = DescribeConcurrentRecordStreamNumResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConcurrentRecordStreamNumOutcome(rsp);
        else
            return DescribeConcurrentRecordStreamNumOutcome(o.GetError());
    }
    else
    {
        return DescribeConcurrentRecordStreamNumOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeConcurrentRecordStreamNumAsync(const DescribeConcurrentRecordStreamNumRequest& request, const DescribeConcurrentRecordStreamNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConcurrentRecordStreamNum(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeConcurrentRecordStreamNumOutcomeCallable LiveClient::DescribeConcurrentRecordStreamNumCallable(const DescribeConcurrentRecordStreamNumRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConcurrentRecordStreamNumOutcome()>>(
        [this, request]()
        {
            return this->DescribeConcurrentRecordStreamNum(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeDeliverBandwidthListOutcome LiveClient::DescribeDeliverBandwidthList(const DescribeDeliverBandwidthListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeliverBandwidthList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeliverBandwidthListResponse rsp = DescribeDeliverBandwidthListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeliverBandwidthListOutcome(rsp);
        else
            return DescribeDeliverBandwidthListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeliverBandwidthListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeDeliverBandwidthListAsync(const DescribeDeliverBandwidthListRequest& request, const DescribeDeliverBandwidthListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeliverBandwidthList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeDeliverBandwidthListOutcomeCallable LiveClient::DescribeDeliverBandwidthListCallable(const DescribeDeliverBandwidthListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeliverBandwidthListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeliverBandwidthList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeGroupProIspPlayInfoListOutcome LiveClient::DescribeGroupProIspPlayInfoList(const DescribeGroupProIspPlayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupProIspPlayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupProIspPlayInfoListResponse rsp = DescribeGroupProIspPlayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupProIspPlayInfoListOutcome(rsp);
        else
            return DescribeGroupProIspPlayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupProIspPlayInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeGroupProIspPlayInfoListAsync(const DescribeGroupProIspPlayInfoListRequest& request, const DescribeGroupProIspPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupProIspPlayInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeGroupProIspPlayInfoListOutcomeCallable LiveClient::DescribeGroupProIspPlayInfoListCallable(const DescribeGroupProIspPlayInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupProIspPlayInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupProIspPlayInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeHttpStatusInfoListOutcome LiveClient::DescribeHttpStatusInfoList(const DescribeHttpStatusInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHttpStatusInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHttpStatusInfoListResponse rsp = DescribeHttpStatusInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHttpStatusInfoListOutcome(rsp);
        else
            return DescribeHttpStatusInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeHttpStatusInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeHttpStatusInfoListAsync(const DescribeHttpStatusInfoListRequest& request, const DescribeHttpStatusInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHttpStatusInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeHttpStatusInfoListOutcomeCallable LiveClient::DescribeHttpStatusInfoListCallable(const DescribeHttpStatusInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHttpStatusInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeHttpStatusInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveCallbackRulesOutcome LiveClient::DescribeLiveCallbackRules(const DescribeLiveCallbackRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveCallbackRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveCallbackRulesResponse rsp = DescribeLiveCallbackRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveCallbackRulesOutcome(rsp);
        else
            return DescribeLiveCallbackRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveCallbackRulesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveCallbackRulesAsync(const DescribeLiveCallbackRulesRequest& request, const DescribeLiveCallbackRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveCallbackRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveCallbackRulesOutcomeCallable LiveClient::DescribeLiveCallbackRulesCallable(const DescribeLiveCallbackRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveCallbackRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveCallbackRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveCallbackTemplateOutcome LiveClient::DescribeLiveCallbackTemplate(const DescribeLiveCallbackTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveCallbackTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveCallbackTemplateResponse rsp = DescribeLiveCallbackTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveCallbackTemplateOutcome(rsp);
        else
            return DescribeLiveCallbackTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveCallbackTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveCallbackTemplateAsync(const DescribeLiveCallbackTemplateRequest& request, const DescribeLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveCallbackTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveCallbackTemplateOutcomeCallable LiveClient::DescribeLiveCallbackTemplateCallable(const DescribeLiveCallbackTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveCallbackTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveCallbackTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveCallbackTemplatesOutcome LiveClient::DescribeLiveCallbackTemplates(const DescribeLiveCallbackTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveCallbackTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveCallbackTemplatesResponse rsp = DescribeLiveCallbackTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveCallbackTemplatesOutcome(rsp);
        else
            return DescribeLiveCallbackTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveCallbackTemplatesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveCallbackTemplatesAsync(const DescribeLiveCallbackTemplatesRequest& request, const DescribeLiveCallbackTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveCallbackTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveCallbackTemplatesOutcomeCallable LiveClient::DescribeLiveCallbackTemplatesCallable(const DescribeLiveCallbackTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveCallbackTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveCallbackTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveCertOutcome LiveClient::DescribeLiveCert(const DescribeLiveCertRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveCertResponse rsp = DescribeLiveCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveCertOutcome(rsp);
        else
            return DescribeLiveCertOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveCertOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveCertAsync(const DescribeLiveCertRequest& request, const DescribeLiveCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveCertOutcomeCallable LiveClient::DescribeLiveCertCallable(const DescribeLiveCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveCertOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveCertsOutcome LiveClient::DescribeLiveCerts(const DescribeLiveCertsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveCerts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveCertsResponse rsp = DescribeLiveCertsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveCertsOutcome(rsp);
        else
            return DescribeLiveCertsOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveCertsOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveCertsAsync(const DescribeLiveCertsRequest& request, const DescribeLiveCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveCerts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveCertsOutcomeCallable LiveClient::DescribeLiveCertsCallable(const DescribeLiveCertsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveCertsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveCerts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveDelayInfoListOutcome LiveClient::DescribeLiveDelayInfoList(const DescribeLiveDelayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveDelayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveDelayInfoListResponse rsp = DescribeLiveDelayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveDelayInfoListOutcome(rsp);
        else
            return DescribeLiveDelayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveDelayInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveDelayInfoListAsync(const DescribeLiveDelayInfoListRequest& request, const DescribeLiveDelayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveDelayInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveDelayInfoListOutcomeCallable LiveClient::DescribeLiveDelayInfoListCallable(const DescribeLiveDelayInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveDelayInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveDelayInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveDomainOutcome LiveClient::DescribeLiveDomain(const DescribeLiveDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveDomainResponse rsp = DescribeLiveDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveDomainOutcome(rsp);
        else
            return DescribeLiveDomainOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveDomainOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveDomainAsync(const DescribeLiveDomainRequest& request, const DescribeLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveDomainOutcomeCallable LiveClient::DescribeLiveDomainCallable(const DescribeLiveDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveDomainOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveDomainCertOutcome LiveClient::DescribeLiveDomainCert(const DescribeLiveDomainCertRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveDomainCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveDomainCertResponse rsp = DescribeLiveDomainCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveDomainCertOutcome(rsp);
        else
            return DescribeLiveDomainCertOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveDomainCertOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveDomainCertAsync(const DescribeLiveDomainCertRequest& request, const DescribeLiveDomainCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveDomainCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveDomainCertOutcomeCallable LiveClient::DescribeLiveDomainCertCallable(const DescribeLiveDomainCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveDomainCertOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveDomainCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveDomainRefererOutcome LiveClient::DescribeLiveDomainReferer(const DescribeLiveDomainRefererRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveDomainReferer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveDomainRefererResponse rsp = DescribeLiveDomainRefererResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveDomainRefererOutcome(rsp);
        else
            return DescribeLiveDomainRefererOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveDomainRefererOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveDomainRefererAsync(const DescribeLiveDomainRefererRequest& request, const DescribeLiveDomainRefererAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveDomainReferer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveDomainRefererOutcomeCallable LiveClient::DescribeLiveDomainRefererCallable(const DescribeLiveDomainRefererRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveDomainRefererOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveDomainReferer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveDomainsOutcome LiveClient::DescribeLiveDomains(const DescribeLiveDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveDomainsResponse rsp = DescribeLiveDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveDomainsOutcome(rsp);
        else
            return DescribeLiveDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveDomainsOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveDomainsAsync(const DescribeLiveDomainsRequest& request, const DescribeLiveDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveDomainsOutcomeCallable LiveClient::DescribeLiveDomainsCallable(const DescribeLiveDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveDomainsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveForbidStreamListOutcome LiveClient::DescribeLiveForbidStreamList(const DescribeLiveForbidStreamListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveForbidStreamList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveForbidStreamListResponse rsp = DescribeLiveForbidStreamListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveForbidStreamListOutcome(rsp);
        else
            return DescribeLiveForbidStreamListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveForbidStreamListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveForbidStreamListAsync(const DescribeLiveForbidStreamListRequest& request, const DescribeLiveForbidStreamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveForbidStreamList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveForbidStreamListOutcomeCallable LiveClient::DescribeLiveForbidStreamListCallable(const DescribeLiveForbidStreamListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveForbidStreamListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveForbidStreamList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLivePlayAuthKeyOutcome LiveClient::DescribeLivePlayAuthKey(const DescribeLivePlayAuthKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePlayAuthKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePlayAuthKeyResponse rsp = DescribeLivePlayAuthKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePlayAuthKeyOutcome(rsp);
        else
            return DescribeLivePlayAuthKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePlayAuthKeyOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePlayAuthKeyAsync(const DescribeLivePlayAuthKeyRequest& request, const DescribeLivePlayAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLivePlayAuthKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLivePlayAuthKeyOutcomeCallable LiveClient::DescribeLivePlayAuthKeyCallable(const DescribeLivePlayAuthKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLivePlayAuthKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribeLivePlayAuthKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLivePushAuthKeyOutcome LiveClient::DescribeLivePushAuthKey(const DescribeLivePushAuthKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePushAuthKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePushAuthKeyResponse rsp = DescribeLivePushAuthKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePushAuthKeyOutcome(rsp);
        else
            return DescribeLivePushAuthKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePushAuthKeyOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePushAuthKeyAsync(const DescribeLivePushAuthKeyRequest& request, const DescribeLivePushAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLivePushAuthKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLivePushAuthKeyOutcomeCallable LiveClient::DescribeLivePushAuthKeyCallable(const DescribeLivePushAuthKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLivePushAuthKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribeLivePushAuthKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveRecordRulesOutcome LiveClient::DescribeLiveRecordRules(const DescribeLiveRecordRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveRecordRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveRecordRulesResponse rsp = DescribeLiveRecordRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveRecordRulesOutcome(rsp);
        else
            return DescribeLiveRecordRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveRecordRulesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveRecordRulesAsync(const DescribeLiveRecordRulesRequest& request, const DescribeLiveRecordRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveRecordRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveRecordRulesOutcomeCallable LiveClient::DescribeLiveRecordRulesCallable(const DescribeLiveRecordRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveRecordRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveRecordRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveRecordTemplateOutcome LiveClient::DescribeLiveRecordTemplate(const DescribeLiveRecordTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveRecordTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveRecordTemplateResponse rsp = DescribeLiveRecordTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveRecordTemplateOutcome(rsp);
        else
            return DescribeLiveRecordTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveRecordTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveRecordTemplateAsync(const DescribeLiveRecordTemplateRequest& request, const DescribeLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveRecordTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveRecordTemplateOutcomeCallable LiveClient::DescribeLiveRecordTemplateCallable(const DescribeLiveRecordTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveRecordTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveRecordTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveRecordTemplatesOutcome LiveClient::DescribeLiveRecordTemplates(const DescribeLiveRecordTemplatesRequest &request)
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

void LiveClient::DescribeLiveRecordTemplatesAsync(const DescribeLiveRecordTemplatesRequest& request, const DescribeLiveRecordTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveRecordTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveRecordTemplatesOutcomeCallable LiveClient::DescribeLiveRecordTemplatesCallable(const DescribeLiveRecordTemplatesRequest &request)
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

LiveClient::DescribeLiveSnapshotRulesOutcome LiveClient::DescribeLiveSnapshotRules(const DescribeLiveSnapshotRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveSnapshotRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveSnapshotRulesResponse rsp = DescribeLiveSnapshotRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveSnapshotRulesOutcome(rsp);
        else
            return DescribeLiveSnapshotRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveSnapshotRulesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveSnapshotRulesAsync(const DescribeLiveSnapshotRulesRequest& request, const DescribeLiveSnapshotRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveSnapshotRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveSnapshotRulesOutcomeCallable LiveClient::DescribeLiveSnapshotRulesCallable(const DescribeLiveSnapshotRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveSnapshotRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveSnapshotRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveSnapshotTemplateOutcome LiveClient::DescribeLiveSnapshotTemplate(const DescribeLiveSnapshotTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveSnapshotTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveSnapshotTemplateResponse rsp = DescribeLiveSnapshotTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveSnapshotTemplateOutcome(rsp);
        else
            return DescribeLiveSnapshotTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveSnapshotTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveSnapshotTemplateAsync(const DescribeLiveSnapshotTemplateRequest& request, const DescribeLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveSnapshotTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveSnapshotTemplateOutcomeCallable LiveClient::DescribeLiveSnapshotTemplateCallable(const DescribeLiveSnapshotTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveSnapshotTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveSnapshotTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveSnapshotTemplatesOutcome LiveClient::DescribeLiveSnapshotTemplates(const DescribeLiveSnapshotTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveSnapshotTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveSnapshotTemplatesResponse rsp = DescribeLiveSnapshotTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveSnapshotTemplatesOutcome(rsp);
        else
            return DescribeLiveSnapshotTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveSnapshotTemplatesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveSnapshotTemplatesAsync(const DescribeLiveSnapshotTemplatesRequest& request, const DescribeLiveSnapshotTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveSnapshotTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveSnapshotTemplatesOutcomeCallable LiveClient::DescribeLiveSnapshotTemplatesCallable(const DescribeLiveSnapshotTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveSnapshotTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveSnapshotTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveStreamEventListOutcome LiveClient::DescribeLiveStreamEventList(const DescribeLiveStreamEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStreamEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamEventListResponse rsp = DescribeLiveStreamEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamEventListOutcome(rsp);
        else
            return DescribeLiveStreamEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamEventListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveStreamEventListAsync(const DescribeLiveStreamEventListRequest& request, const DescribeLiveStreamEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveStreamEventList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveStreamEventListOutcomeCallable LiveClient::DescribeLiveStreamEventListCallable(const DescribeLiveStreamEventListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveStreamEventListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveStreamEventList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveStreamOnlineListOutcome LiveClient::DescribeLiveStreamOnlineList(const DescribeLiveStreamOnlineListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStreamOnlineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamOnlineListResponse rsp = DescribeLiveStreamOnlineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamOnlineListOutcome(rsp);
        else
            return DescribeLiveStreamOnlineListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamOnlineListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveStreamOnlineListAsync(const DescribeLiveStreamOnlineListRequest& request, const DescribeLiveStreamOnlineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveStreamOnlineList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveStreamOnlineListOutcomeCallable LiveClient::DescribeLiveStreamOnlineListCallable(const DescribeLiveStreamOnlineListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveStreamOnlineListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveStreamOnlineList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveStreamPublishedListOutcome LiveClient::DescribeLiveStreamPublishedList(const DescribeLiveStreamPublishedListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStreamPublishedList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamPublishedListResponse rsp = DescribeLiveStreamPublishedListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamPublishedListOutcome(rsp);
        else
            return DescribeLiveStreamPublishedListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamPublishedListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveStreamPublishedListAsync(const DescribeLiveStreamPublishedListRequest& request, const DescribeLiveStreamPublishedListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveStreamPublishedList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveStreamPublishedListOutcomeCallable LiveClient::DescribeLiveStreamPublishedListCallable(const DescribeLiveStreamPublishedListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveStreamPublishedListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveStreamPublishedList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveStreamPushInfoListOutcome LiveClient::DescribeLiveStreamPushInfoList(const DescribeLiveStreamPushInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStreamPushInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamPushInfoListResponse rsp = DescribeLiveStreamPushInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamPushInfoListOutcome(rsp);
        else
            return DescribeLiveStreamPushInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamPushInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveStreamPushInfoListAsync(const DescribeLiveStreamPushInfoListRequest& request, const DescribeLiveStreamPushInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveStreamPushInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveStreamPushInfoListOutcomeCallable LiveClient::DescribeLiveStreamPushInfoListCallable(const DescribeLiveStreamPushInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveStreamPushInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveStreamPushInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveStreamStateOutcome LiveClient::DescribeLiveStreamState(const DescribeLiveStreamStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStreamState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamStateResponse rsp = DescribeLiveStreamStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamStateOutcome(rsp);
        else
            return DescribeLiveStreamStateOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamStateOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveStreamStateAsync(const DescribeLiveStreamStateRequest& request, const DescribeLiveStreamStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveStreamState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveStreamStateOutcomeCallable LiveClient::DescribeLiveStreamStateCallable(const DescribeLiveStreamStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveStreamStateOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveStreamState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveTranscodeDetailInfoOutcome LiveClient::DescribeLiveTranscodeDetailInfo(const DescribeLiveTranscodeDetailInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTranscodeDetailInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTranscodeDetailInfoResponse rsp = DescribeLiveTranscodeDetailInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTranscodeDetailInfoOutcome(rsp);
        else
            return DescribeLiveTranscodeDetailInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTranscodeDetailInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTranscodeDetailInfoAsync(const DescribeLiveTranscodeDetailInfoRequest& request, const DescribeLiveTranscodeDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveTranscodeDetailInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveTranscodeDetailInfoOutcomeCallable LiveClient::DescribeLiveTranscodeDetailInfoCallable(const DescribeLiveTranscodeDetailInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveTranscodeDetailInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveTranscodeDetailInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveTranscodeRulesOutcome LiveClient::DescribeLiveTranscodeRules(const DescribeLiveTranscodeRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTranscodeRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTranscodeRulesResponse rsp = DescribeLiveTranscodeRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTranscodeRulesOutcome(rsp);
        else
            return DescribeLiveTranscodeRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTranscodeRulesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTranscodeRulesAsync(const DescribeLiveTranscodeRulesRequest& request, const DescribeLiveTranscodeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveTranscodeRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveTranscodeRulesOutcomeCallable LiveClient::DescribeLiveTranscodeRulesCallable(const DescribeLiveTranscodeRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveTranscodeRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveTranscodeRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveTranscodeTemplateOutcome LiveClient::DescribeLiveTranscodeTemplate(const DescribeLiveTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTranscodeTemplateResponse rsp = DescribeLiveTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTranscodeTemplateOutcome(rsp);
        else
            return DescribeLiveTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTranscodeTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTranscodeTemplateAsync(const DescribeLiveTranscodeTemplateRequest& request, const DescribeLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveTranscodeTemplateOutcomeCallable LiveClient::DescribeLiveTranscodeTemplateCallable(const DescribeLiveTranscodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveTranscodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveTranscodeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveTranscodeTemplatesOutcome LiveClient::DescribeLiveTranscodeTemplates(const DescribeLiveTranscodeTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTranscodeTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTranscodeTemplatesResponse rsp = DescribeLiveTranscodeTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTranscodeTemplatesOutcome(rsp);
        else
            return DescribeLiveTranscodeTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTranscodeTemplatesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTranscodeTemplatesAsync(const DescribeLiveTranscodeTemplatesRequest& request, const DescribeLiveTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveTranscodeTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveTranscodeTemplatesOutcomeCallable LiveClient::DescribeLiveTranscodeTemplatesCallable(const DescribeLiveTranscodeTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveTranscodeTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveTranscodeTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveTranscodeTotalInfoOutcome LiveClient::DescribeLiveTranscodeTotalInfo(const DescribeLiveTranscodeTotalInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTranscodeTotalInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTranscodeTotalInfoResponse rsp = DescribeLiveTranscodeTotalInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTranscodeTotalInfoOutcome(rsp);
        else
            return DescribeLiveTranscodeTotalInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTranscodeTotalInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTranscodeTotalInfoAsync(const DescribeLiveTranscodeTotalInfoRequest& request, const DescribeLiveTranscodeTotalInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveTranscodeTotalInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveTranscodeTotalInfoOutcomeCallable LiveClient::DescribeLiveTranscodeTotalInfoCallable(const DescribeLiveTranscodeTotalInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveTranscodeTotalInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveTranscodeTotalInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveWatermarkOutcome LiveClient::DescribeLiveWatermark(const DescribeLiveWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveWatermarkResponse rsp = DescribeLiveWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveWatermarkOutcome(rsp);
        else
            return DescribeLiveWatermarkOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveWatermarkOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveWatermarkAsync(const DescribeLiveWatermarkRequest& request, const DescribeLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveWatermark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveWatermarkOutcomeCallable LiveClient::DescribeLiveWatermarkCallable(const DescribeLiveWatermarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveWatermarkOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveWatermark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveWatermarkRulesOutcome LiveClient::DescribeLiveWatermarkRules(const DescribeLiveWatermarkRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveWatermarkRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveWatermarkRulesResponse rsp = DescribeLiveWatermarkRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveWatermarkRulesOutcome(rsp);
        else
            return DescribeLiveWatermarkRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveWatermarkRulesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveWatermarkRulesAsync(const DescribeLiveWatermarkRulesRequest& request, const DescribeLiveWatermarkRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveWatermarkRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveWatermarkRulesOutcomeCallable LiveClient::DescribeLiveWatermarkRulesCallable(const DescribeLiveWatermarkRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveWatermarkRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveWatermarkRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeLiveWatermarksOutcome LiveClient::DescribeLiveWatermarks(const DescribeLiveWatermarksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveWatermarks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveWatermarksResponse rsp = DescribeLiveWatermarksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveWatermarksOutcome(rsp);
        else
            return DescribeLiveWatermarksOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveWatermarksOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveWatermarksAsync(const DescribeLiveWatermarksRequest& request, const DescribeLiveWatermarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveWatermarks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeLiveWatermarksOutcomeCallable LiveClient::DescribeLiveWatermarksCallable(const DescribeLiveWatermarksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveWatermarksOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveWatermarks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribePlayErrorCodeDetailInfoListOutcome LiveClient::DescribePlayErrorCodeDetailInfoList(const DescribePlayErrorCodeDetailInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlayErrorCodeDetailInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePlayErrorCodeDetailInfoListResponse rsp = DescribePlayErrorCodeDetailInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePlayErrorCodeDetailInfoListOutcome(rsp);
        else
            return DescribePlayErrorCodeDetailInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribePlayErrorCodeDetailInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribePlayErrorCodeDetailInfoListAsync(const DescribePlayErrorCodeDetailInfoListRequest& request, const DescribePlayErrorCodeDetailInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePlayErrorCodeDetailInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribePlayErrorCodeDetailInfoListOutcomeCallable LiveClient::DescribePlayErrorCodeDetailInfoListCallable(const DescribePlayErrorCodeDetailInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePlayErrorCodeDetailInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribePlayErrorCodeDetailInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribePlayErrorCodeSumInfoListOutcome LiveClient::DescribePlayErrorCodeSumInfoList(const DescribePlayErrorCodeSumInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlayErrorCodeSumInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePlayErrorCodeSumInfoListResponse rsp = DescribePlayErrorCodeSumInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePlayErrorCodeSumInfoListOutcome(rsp);
        else
            return DescribePlayErrorCodeSumInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribePlayErrorCodeSumInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribePlayErrorCodeSumInfoListAsync(const DescribePlayErrorCodeSumInfoListRequest& request, const DescribePlayErrorCodeSumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePlayErrorCodeSumInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribePlayErrorCodeSumInfoListOutcomeCallable LiveClient::DescribePlayErrorCodeSumInfoListCallable(const DescribePlayErrorCodeSumInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePlayErrorCodeSumInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribePlayErrorCodeSumInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeProvinceIspPlayInfoListOutcome LiveClient::DescribeProvinceIspPlayInfoList(const DescribeProvinceIspPlayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProvinceIspPlayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProvinceIspPlayInfoListResponse rsp = DescribeProvinceIspPlayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProvinceIspPlayInfoListOutcome(rsp);
        else
            return DescribeProvinceIspPlayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeProvinceIspPlayInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeProvinceIspPlayInfoListAsync(const DescribeProvinceIspPlayInfoListRequest& request, const DescribeProvinceIspPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProvinceIspPlayInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeProvinceIspPlayInfoListOutcomeCallable LiveClient::DescribeProvinceIspPlayInfoListCallable(const DescribeProvinceIspPlayInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProvinceIspPlayInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeProvinceIspPlayInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeScreenShotSheetNumListOutcome LiveClient::DescribeScreenShotSheetNumList(const DescribeScreenShotSheetNumListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenShotSheetNumList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenShotSheetNumListResponse rsp = DescribeScreenShotSheetNumListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenShotSheetNumListOutcome(rsp);
        else
            return DescribeScreenShotSheetNumListOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenShotSheetNumListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeScreenShotSheetNumListAsync(const DescribeScreenShotSheetNumListRequest& request, const DescribeScreenShotSheetNumListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScreenShotSheetNumList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeScreenShotSheetNumListOutcomeCallable LiveClient::DescribeScreenShotSheetNumListCallable(const DescribeScreenShotSheetNumListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScreenShotSheetNumListOutcome()>>(
        [this, request]()
        {
            return this->DescribeScreenShotSheetNumList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeStreamDayPlayInfoListOutcome LiveClient::DescribeStreamDayPlayInfoList(const DescribeStreamDayPlayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamDayPlayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamDayPlayInfoListResponse rsp = DescribeStreamDayPlayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamDayPlayInfoListOutcome(rsp);
        else
            return DescribeStreamDayPlayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamDayPlayInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeStreamDayPlayInfoListAsync(const DescribeStreamDayPlayInfoListRequest& request, const DescribeStreamDayPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamDayPlayInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeStreamDayPlayInfoListOutcomeCallable LiveClient::DescribeStreamDayPlayInfoListCallable(const DescribeStreamDayPlayInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamDayPlayInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamDayPlayInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeStreamPlayInfoListOutcome LiveClient::DescribeStreamPlayInfoList(const DescribeStreamPlayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPlayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPlayInfoListResponse rsp = DescribeStreamPlayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPlayInfoListOutcome(rsp);
        else
            return DescribeStreamPlayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPlayInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeStreamPlayInfoListAsync(const DescribeStreamPlayInfoListRequest& request, const DescribeStreamPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamPlayInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeStreamPlayInfoListOutcomeCallable LiveClient::DescribeStreamPlayInfoListCallable(const DescribeStreamPlayInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamPlayInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamPlayInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeTopClientIpSumInfoListOutcome LiveClient::DescribeTopClientIpSumInfoList(const DescribeTopClientIpSumInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopClientIpSumInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopClientIpSumInfoListResponse rsp = DescribeTopClientIpSumInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopClientIpSumInfoListOutcome(rsp);
        else
            return DescribeTopClientIpSumInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeTopClientIpSumInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeTopClientIpSumInfoListAsync(const DescribeTopClientIpSumInfoListRequest& request, const DescribeTopClientIpSumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopClientIpSumInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeTopClientIpSumInfoListOutcomeCallable LiveClient::DescribeTopClientIpSumInfoListCallable(const DescribeTopClientIpSumInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopClientIpSumInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopClientIpSumInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeUploadStreamNumsOutcome LiveClient::DescribeUploadStreamNums(const DescribeUploadStreamNumsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUploadStreamNums");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUploadStreamNumsResponse rsp = DescribeUploadStreamNumsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUploadStreamNumsOutcome(rsp);
        else
            return DescribeUploadStreamNumsOutcome(o.GetError());
    }
    else
    {
        return DescribeUploadStreamNumsOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeUploadStreamNumsAsync(const DescribeUploadStreamNumsRequest& request, const DescribeUploadStreamNumsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUploadStreamNums(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeUploadStreamNumsOutcomeCallable LiveClient::DescribeUploadStreamNumsCallable(const DescribeUploadStreamNumsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUploadStreamNumsOutcome()>>(
        [this, request]()
        {
            return this->DescribeUploadStreamNums(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::DescribeVisitTopSumInfoListOutcome LiveClient::DescribeVisitTopSumInfoList(const DescribeVisitTopSumInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVisitTopSumInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVisitTopSumInfoListResponse rsp = DescribeVisitTopSumInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVisitTopSumInfoListOutcome(rsp);
        else
            return DescribeVisitTopSumInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeVisitTopSumInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeVisitTopSumInfoListAsync(const DescribeVisitTopSumInfoListRequest& request, const DescribeVisitTopSumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVisitTopSumInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::DescribeVisitTopSumInfoListOutcomeCallable LiveClient::DescribeVisitTopSumInfoListCallable(const DescribeVisitTopSumInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVisitTopSumInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVisitTopSumInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::EnableLiveDomainOutcome LiveClient::EnableLiveDomain(const EnableLiveDomainRequest &request)
{
    auto outcome = MakeRequest(request, "EnableLiveDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableLiveDomainResponse rsp = EnableLiveDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableLiveDomainOutcome(rsp);
        else
            return EnableLiveDomainOutcome(o.GetError());
    }
    else
    {
        return EnableLiveDomainOutcome(outcome.GetError());
    }
}

void LiveClient::EnableLiveDomainAsync(const EnableLiveDomainRequest& request, const EnableLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableLiveDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::EnableLiveDomainOutcomeCallable LiveClient::EnableLiveDomainCallable(const EnableLiveDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableLiveDomainOutcome()>>(
        [this, request]()
        {
            return this->EnableLiveDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ForbidLiveDomainOutcome LiveClient::ForbidLiveDomain(const ForbidLiveDomainRequest &request)
{
    auto outcome = MakeRequest(request, "ForbidLiveDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ForbidLiveDomainResponse rsp = ForbidLiveDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ForbidLiveDomainOutcome(rsp);
        else
            return ForbidLiveDomainOutcome(o.GetError());
    }
    else
    {
        return ForbidLiveDomainOutcome(outcome.GetError());
    }
}

void LiveClient::ForbidLiveDomainAsync(const ForbidLiveDomainRequest& request, const ForbidLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ForbidLiveDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ForbidLiveDomainOutcomeCallable LiveClient::ForbidLiveDomainCallable(const ForbidLiveDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ForbidLiveDomainOutcome()>>(
        [this, request]()
        {
            return this->ForbidLiveDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ForbidLiveStreamOutcome LiveClient::ForbidLiveStream(const ForbidLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "ForbidLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ForbidLiveStreamResponse rsp = ForbidLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ForbidLiveStreamOutcome(rsp);
        else
            return ForbidLiveStreamOutcome(o.GetError());
    }
    else
    {
        return ForbidLiveStreamOutcome(outcome.GetError());
    }
}

void LiveClient::ForbidLiveStreamAsync(const ForbidLiveStreamRequest& request, const ForbidLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ForbidLiveStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ForbidLiveStreamOutcomeCallable LiveClient::ForbidLiveStreamCallable(const ForbidLiveStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ForbidLiveStreamOutcome()>>(
        [this, request]()
        {
            return this->ForbidLiveStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLiveCallbackTemplateOutcome LiveClient::ModifyLiveCallbackTemplate(const ModifyLiveCallbackTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveCallbackTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveCallbackTemplateResponse rsp = ModifyLiveCallbackTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveCallbackTemplateOutcome(rsp);
        else
            return ModifyLiveCallbackTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveCallbackTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveCallbackTemplateAsync(const ModifyLiveCallbackTemplateRequest& request, const ModifyLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveCallbackTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLiveCallbackTemplateOutcomeCallable LiveClient::ModifyLiveCallbackTemplateCallable(const ModifyLiveCallbackTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLiveCallbackTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyLiveCallbackTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLiveCertOutcome LiveClient::ModifyLiveCert(const ModifyLiveCertRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveCertResponse rsp = ModifyLiveCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveCertOutcome(rsp);
        else
            return ModifyLiveCertOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveCertOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveCertAsync(const ModifyLiveCertRequest& request, const ModifyLiveCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLiveCertOutcomeCallable LiveClient::ModifyLiveCertCallable(const ModifyLiveCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLiveCertOutcome()>>(
        [this, request]()
        {
            return this->ModifyLiveCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLiveDomainCertOutcome LiveClient::ModifyLiveDomainCert(const ModifyLiveDomainCertRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveDomainCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveDomainCertResponse rsp = ModifyLiveDomainCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveDomainCertOutcome(rsp);
        else
            return ModifyLiveDomainCertOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveDomainCertOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveDomainCertAsync(const ModifyLiveDomainCertRequest& request, const ModifyLiveDomainCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveDomainCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLiveDomainCertOutcomeCallable LiveClient::ModifyLiveDomainCertCallable(const ModifyLiveDomainCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLiveDomainCertOutcome()>>(
        [this, request]()
        {
            return this->ModifyLiveDomainCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLiveDomainRefererOutcome LiveClient::ModifyLiveDomainReferer(const ModifyLiveDomainRefererRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveDomainReferer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveDomainRefererResponse rsp = ModifyLiveDomainRefererResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveDomainRefererOutcome(rsp);
        else
            return ModifyLiveDomainRefererOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveDomainRefererOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveDomainRefererAsync(const ModifyLiveDomainRefererRequest& request, const ModifyLiveDomainRefererAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveDomainReferer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLiveDomainRefererOutcomeCallable LiveClient::ModifyLiveDomainRefererCallable(const ModifyLiveDomainRefererRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLiveDomainRefererOutcome()>>(
        [this, request]()
        {
            return this->ModifyLiveDomainReferer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLivePlayAuthKeyOutcome LiveClient::ModifyLivePlayAuthKey(const ModifyLivePlayAuthKeyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLivePlayAuthKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLivePlayAuthKeyResponse rsp = ModifyLivePlayAuthKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLivePlayAuthKeyOutcome(rsp);
        else
            return ModifyLivePlayAuthKeyOutcome(o.GetError());
    }
    else
    {
        return ModifyLivePlayAuthKeyOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLivePlayAuthKeyAsync(const ModifyLivePlayAuthKeyRequest& request, const ModifyLivePlayAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLivePlayAuthKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLivePlayAuthKeyOutcomeCallable LiveClient::ModifyLivePlayAuthKeyCallable(const ModifyLivePlayAuthKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLivePlayAuthKeyOutcome()>>(
        [this, request]()
        {
            return this->ModifyLivePlayAuthKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLivePlayDomainOutcome LiveClient::ModifyLivePlayDomain(const ModifyLivePlayDomainRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLivePlayDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLivePlayDomainResponse rsp = ModifyLivePlayDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLivePlayDomainOutcome(rsp);
        else
            return ModifyLivePlayDomainOutcome(o.GetError());
    }
    else
    {
        return ModifyLivePlayDomainOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLivePlayDomainAsync(const ModifyLivePlayDomainRequest& request, const ModifyLivePlayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLivePlayDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLivePlayDomainOutcomeCallable LiveClient::ModifyLivePlayDomainCallable(const ModifyLivePlayDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLivePlayDomainOutcome()>>(
        [this, request]()
        {
            return this->ModifyLivePlayDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLivePushAuthKeyOutcome LiveClient::ModifyLivePushAuthKey(const ModifyLivePushAuthKeyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLivePushAuthKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLivePushAuthKeyResponse rsp = ModifyLivePushAuthKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLivePushAuthKeyOutcome(rsp);
        else
            return ModifyLivePushAuthKeyOutcome(o.GetError());
    }
    else
    {
        return ModifyLivePushAuthKeyOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLivePushAuthKeyAsync(const ModifyLivePushAuthKeyRequest& request, const ModifyLivePushAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLivePushAuthKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLivePushAuthKeyOutcomeCallable LiveClient::ModifyLivePushAuthKeyCallable(const ModifyLivePushAuthKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLivePushAuthKeyOutcome()>>(
        [this, request]()
        {
            return this->ModifyLivePushAuthKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLiveRecordTemplateOutcome LiveClient::ModifyLiveRecordTemplate(const ModifyLiveRecordTemplateRequest &request)
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

void LiveClient::ModifyLiveRecordTemplateAsync(const ModifyLiveRecordTemplateRequest& request, const ModifyLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveRecordTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLiveRecordTemplateOutcomeCallable LiveClient::ModifyLiveRecordTemplateCallable(const ModifyLiveRecordTemplateRequest &request)
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

LiveClient::ModifyLiveSnapshotTemplateOutcome LiveClient::ModifyLiveSnapshotTemplate(const ModifyLiveSnapshotTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveSnapshotTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveSnapshotTemplateResponse rsp = ModifyLiveSnapshotTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveSnapshotTemplateOutcome(rsp);
        else
            return ModifyLiveSnapshotTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveSnapshotTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveSnapshotTemplateAsync(const ModifyLiveSnapshotTemplateRequest& request, const ModifyLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveSnapshotTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLiveSnapshotTemplateOutcomeCallable LiveClient::ModifyLiveSnapshotTemplateCallable(const ModifyLiveSnapshotTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLiveSnapshotTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyLiveSnapshotTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ModifyLiveTranscodeTemplateOutcome LiveClient::ModifyLiveTranscodeTemplate(const ModifyLiveTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveTranscodeTemplateResponse rsp = ModifyLiveTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveTranscodeTemplateOutcome(rsp);
        else
            return ModifyLiveTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveTranscodeTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveTranscodeTemplateAsync(const ModifyLiveTranscodeTemplateRequest& request, const ModifyLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ModifyLiveTranscodeTemplateOutcomeCallable LiveClient::ModifyLiveTranscodeTemplateCallable(const ModifyLiveTranscodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLiveTranscodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyLiveTranscodeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ResumeDelayLiveStreamOutcome LiveClient::ResumeDelayLiveStream(const ResumeDelayLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeDelayLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeDelayLiveStreamResponse rsp = ResumeDelayLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeDelayLiveStreamOutcome(rsp);
        else
            return ResumeDelayLiveStreamOutcome(o.GetError());
    }
    else
    {
        return ResumeDelayLiveStreamOutcome(outcome.GetError());
    }
}

void LiveClient::ResumeDelayLiveStreamAsync(const ResumeDelayLiveStreamRequest& request, const ResumeDelayLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResumeDelayLiveStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ResumeDelayLiveStreamOutcomeCallable LiveClient::ResumeDelayLiveStreamCallable(const ResumeDelayLiveStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResumeDelayLiveStreamOutcome()>>(
        [this, request]()
        {
            return this->ResumeDelayLiveStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::ResumeLiveStreamOutcome LiveClient::ResumeLiveStream(const ResumeLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeLiveStreamResponse rsp = ResumeLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeLiveStreamOutcome(rsp);
        else
            return ResumeLiveStreamOutcome(o.GetError());
    }
    else
    {
        return ResumeLiveStreamOutcome(outcome.GetError());
    }
}

void LiveClient::ResumeLiveStreamAsync(const ResumeLiveStreamRequest& request, const ResumeLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResumeLiveStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::ResumeLiveStreamOutcomeCallable LiveClient::ResumeLiveStreamCallable(const ResumeLiveStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResumeLiveStreamOutcome()>>(
        [this, request]()
        {
            return this->ResumeLiveStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::StopLiveRecordOutcome LiveClient::StopLiveRecord(const StopLiveRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StopLiveRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopLiveRecordResponse rsp = StopLiveRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopLiveRecordOutcome(rsp);
        else
            return StopLiveRecordOutcome(o.GetError());
    }
    else
    {
        return StopLiveRecordOutcome(outcome.GetError());
    }
}

void LiveClient::StopLiveRecordAsync(const StopLiveRecordRequest& request, const StopLiveRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopLiveRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::StopLiveRecordOutcomeCallable LiveClient::StopLiveRecordCallable(const StopLiveRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopLiveRecordOutcome()>>(
        [this, request]()
        {
            return this->StopLiveRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::StopRecordTaskOutcome LiveClient::StopRecordTask(const StopRecordTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopRecordTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopRecordTaskResponse rsp = StopRecordTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopRecordTaskOutcome(rsp);
        else
            return StopRecordTaskOutcome(o.GetError());
    }
    else
    {
        return StopRecordTaskOutcome(outcome.GetError());
    }
}

void LiveClient::StopRecordTaskAsync(const StopRecordTaskRequest& request, const StopRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopRecordTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::StopRecordTaskOutcomeCallable LiveClient::StopRecordTaskCallable(const StopRecordTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopRecordTaskOutcome()>>(
        [this, request]()
        {
            return this->StopRecordTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::UnBindLiveDomainCertOutcome LiveClient::UnBindLiveDomainCert(const UnBindLiveDomainCertRequest &request)
{
    auto outcome = MakeRequest(request, "UnBindLiveDomainCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnBindLiveDomainCertResponse rsp = UnBindLiveDomainCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnBindLiveDomainCertOutcome(rsp);
        else
            return UnBindLiveDomainCertOutcome(o.GetError());
    }
    else
    {
        return UnBindLiveDomainCertOutcome(outcome.GetError());
    }
}

void LiveClient::UnBindLiveDomainCertAsync(const UnBindLiveDomainCertRequest& request, const UnBindLiveDomainCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnBindLiveDomainCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::UnBindLiveDomainCertOutcomeCallable LiveClient::UnBindLiveDomainCertCallable(const UnBindLiveDomainCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnBindLiveDomainCertOutcome()>>(
        [this, request]()
        {
            return this->UnBindLiveDomainCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LiveClient::UpdateLiveWatermarkOutcome LiveClient::UpdateLiveWatermark(const UpdateLiveWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateLiveWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateLiveWatermarkResponse rsp = UpdateLiveWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateLiveWatermarkOutcome(rsp);
        else
            return UpdateLiveWatermarkOutcome(o.GetError());
    }
    else
    {
        return UpdateLiveWatermarkOutcome(outcome.GetError());
    }
}

void LiveClient::UpdateLiveWatermarkAsync(const UpdateLiveWatermarkRequest& request, const UpdateLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateLiveWatermark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LiveClient::UpdateLiveWatermarkOutcomeCallable LiveClient::UpdateLiveWatermarkCallable(const UpdateLiveWatermarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateLiveWatermarkOutcome()>>(
        [this, request]()
        {
            return this->UpdateLiveWatermark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

