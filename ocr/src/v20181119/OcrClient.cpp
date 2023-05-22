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

#include <tencentcloud/ocr/v20181119/OcrClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ocr::V20181119;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-11-19";
    const string ENDPOINT = "ocr.tencentcloudapi.com";
}

OcrClient::OcrClient(const Credential &credential, const string &region) :
    OcrClient(credential, region, ClientProfile())
{
}

OcrClient::OcrClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


OcrClient::BankCardOCROutcome OcrClient::BankCardOCR(const BankCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "BankCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BankCardOCRResponse rsp = BankCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BankCardOCROutcome(rsp);
        else
            return BankCardOCROutcome(o.GetError());
    }
    else
    {
        return BankCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::BankCardOCRAsync(const BankCardOCRRequest& request, const BankCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BankCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::BankCardOCROutcomeCallable OcrClient::BankCardOCRCallable(const BankCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BankCardOCROutcome()>>(
        [this, request]()
        {
            return this->BankCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::GeneralAccurateOCROutcome OcrClient::GeneralAccurateOCR(const GeneralAccurateOCRRequest &request)
{
    auto outcome = MakeRequest(request, "GeneralAccurateOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GeneralAccurateOCRResponse rsp = GeneralAccurateOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GeneralAccurateOCROutcome(rsp);
        else
            return GeneralAccurateOCROutcome(o.GetError());
    }
    else
    {
        return GeneralAccurateOCROutcome(outcome.GetError());
    }
}

void OcrClient::GeneralAccurateOCRAsync(const GeneralAccurateOCRRequest& request, const GeneralAccurateOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GeneralAccurateOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::GeneralAccurateOCROutcomeCallable OcrClient::GeneralAccurateOCRCallable(const GeneralAccurateOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GeneralAccurateOCROutcome()>>(
        [this, request]()
        {
            return this->GeneralAccurateOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::GeneralBasicOCROutcome OcrClient::GeneralBasicOCR(const GeneralBasicOCRRequest &request)
{
    auto outcome = MakeRequest(request, "GeneralBasicOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GeneralBasicOCRResponse rsp = GeneralBasicOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GeneralBasicOCROutcome(rsp);
        else
            return GeneralBasicOCROutcome(o.GetError());
    }
    else
    {
        return GeneralBasicOCROutcome(outcome.GetError());
    }
}

void OcrClient::GeneralBasicOCRAsync(const GeneralBasicOCRRequest& request, const GeneralBasicOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GeneralBasicOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::GeneralBasicOCROutcomeCallable OcrClient::GeneralBasicOCRCallable(const GeneralBasicOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GeneralBasicOCROutcome()>>(
        [this, request]()
        {
            return this->GeneralBasicOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::HKIDCardOCROutcome OcrClient::HKIDCardOCR(const HKIDCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "HKIDCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        HKIDCardOCRResponse rsp = HKIDCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return HKIDCardOCROutcome(rsp);
        else
            return HKIDCardOCROutcome(o.GetError());
    }
    else
    {
        return HKIDCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::HKIDCardOCRAsync(const HKIDCardOCRRequest& request, const HKIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->HKIDCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::HKIDCardOCROutcomeCallable OcrClient::HKIDCardOCRCallable(const HKIDCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<HKIDCardOCROutcome()>>(
        [this, request]()
        {
            return this->HKIDCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::MLIDCardOCROutcome OcrClient::MLIDCardOCR(const MLIDCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "MLIDCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MLIDCardOCRResponse rsp = MLIDCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MLIDCardOCROutcome(rsp);
        else
            return MLIDCardOCROutcome(o.GetError());
    }
    else
    {
        return MLIDCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::MLIDCardOCRAsync(const MLIDCardOCRRequest& request, const MLIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MLIDCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::MLIDCardOCROutcomeCallable OcrClient::MLIDCardOCRCallable(const MLIDCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MLIDCardOCROutcome()>>(
        [this, request]()
        {
            return this->MLIDCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::MLIDPassportOCROutcome OcrClient::MLIDPassportOCR(const MLIDPassportOCRRequest &request)
{
    auto outcome = MakeRequest(request, "MLIDPassportOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MLIDPassportOCRResponse rsp = MLIDPassportOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MLIDPassportOCROutcome(rsp);
        else
            return MLIDPassportOCROutcome(o.GetError());
    }
    else
    {
        return MLIDPassportOCROutcome(outcome.GetError());
    }
}

void OcrClient::MLIDPassportOCRAsync(const MLIDPassportOCRRequest& request, const MLIDPassportOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MLIDPassportOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::MLIDPassportOCROutcomeCallable OcrClient::MLIDPassportOCRCallable(const MLIDPassportOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MLIDPassportOCROutcome()>>(
        [this, request]()
        {
            return this->MLIDPassportOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::RecognizeIndonesiaIDCardOCROutcome OcrClient::RecognizeIndonesiaIDCardOCR(const RecognizeIndonesiaIDCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeIndonesiaIDCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeIndonesiaIDCardOCRResponse rsp = RecognizeIndonesiaIDCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeIndonesiaIDCardOCROutcome(rsp);
        else
            return RecognizeIndonesiaIDCardOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeIndonesiaIDCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeIndonesiaIDCardOCRAsync(const RecognizeIndonesiaIDCardOCRRequest& request, const RecognizeIndonesiaIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeIndonesiaIDCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizeIndonesiaIDCardOCROutcomeCallable OcrClient::RecognizeIndonesiaIDCardOCRCallable(const RecognizeIndonesiaIDCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeIndonesiaIDCardOCROutcome()>>(
        [this, request]()
        {
            return this->RecognizeIndonesiaIDCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::RecognizePhilippinesDrivingLicenseOCROutcome OcrClient::RecognizePhilippinesDrivingLicenseOCR(const RecognizePhilippinesDrivingLicenseOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizePhilippinesDrivingLicenseOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizePhilippinesDrivingLicenseOCRResponse rsp = RecognizePhilippinesDrivingLicenseOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizePhilippinesDrivingLicenseOCROutcome(rsp);
        else
            return RecognizePhilippinesDrivingLicenseOCROutcome(o.GetError());
    }
    else
    {
        return RecognizePhilippinesDrivingLicenseOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizePhilippinesDrivingLicenseOCRAsync(const RecognizePhilippinesDrivingLicenseOCRRequest& request, const RecognizePhilippinesDrivingLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizePhilippinesDrivingLicenseOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizePhilippinesDrivingLicenseOCROutcomeCallable OcrClient::RecognizePhilippinesDrivingLicenseOCRCallable(const RecognizePhilippinesDrivingLicenseOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizePhilippinesDrivingLicenseOCROutcome()>>(
        [this, request]()
        {
            return this->RecognizePhilippinesDrivingLicenseOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::RecognizePhilippinesSssIDOCROutcome OcrClient::RecognizePhilippinesSssIDOCR(const RecognizePhilippinesSssIDOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizePhilippinesSssIDOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizePhilippinesSssIDOCRResponse rsp = RecognizePhilippinesSssIDOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizePhilippinesSssIDOCROutcome(rsp);
        else
            return RecognizePhilippinesSssIDOCROutcome(o.GetError());
    }
    else
    {
        return RecognizePhilippinesSssIDOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizePhilippinesSssIDOCRAsync(const RecognizePhilippinesSssIDOCRRequest& request, const RecognizePhilippinesSssIDOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizePhilippinesSssIDOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizePhilippinesSssIDOCROutcomeCallable OcrClient::RecognizePhilippinesSssIDOCRCallable(const RecognizePhilippinesSssIDOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizePhilippinesSssIDOCROutcome()>>(
        [this, request]()
        {
            return this->RecognizePhilippinesSssIDOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::RecognizePhilippinesTinIDOCROutcome OcrClient::RecognizePhilippinesTinIDOCR(const RecognizePhilippinesTinIDOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizePhilippinesTinIDOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizePhilippinesTinIDOCRResponse rsp = RecognizePhilippinesTinIDOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizePhilippinesTinIDOCROutcome(rsp);
        else
            return RecognizePhilippinesTinIDOCROutcome(o.GetError());
    }
    else
    {
        return RecognizePhilippinesTinIDOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizePhilippinesTinIDOCRAsync(const RecognizePhilippinesTinIDOCRRequest& request, const RecognizePhilippinesTinIDOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizePhilippinesTinIDOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizePhilippinesTinIDOCROutcomeCallable OcrClient::RecognizePhilippinesTinIDOCRCallable(const RecognizePhilippinesTinIDOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizePhilippinesTinIDOCROutcome()>>(
        [this, request]()
        {
            return this->RecognizePhilippinesTinIDOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::RecognizePhilippinesVoteIDOCROutcome OcrClient::RecognizePhilippinesVoteIDOCR(const RecognizePhilippinesVoteIDOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizePhilippinesVoteIDOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizePhilippinesVoteIDOCRResponse rsp = RecognizePhilippinesVoteIDOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizePhilippinesVoteIDOCROutcome(rsp);
        else
            return RecognizePhilippinesVoteIDOCROutcome(o.GetError());
    }
    else
    {
        return RecognizePhilippinesVoteIDOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizePhilippinesVoteIDOCRAsync(const RecognizePhilippinesVoteIDOCRRequest& request, const RecognizePhilippinesVoteIDOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizePhilippinesVoteIDOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizePhilippinesVoteIDOCROutcomeCallable OcrClient::RecognizePhilippinesVoteIDOCRCallable(const RecognizePhilippinesVoteIDOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizePhilippinesVoteIDOCROutcome()>>(
        [this, request]()
        {
            return this->RecognizePhilippinesVoteIDOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::SmartStructuralOCRV2Outcome OcrClient::SmartStructuralOCRV2(const SmartStructuralOCRV2Request &request)
{
    auto outcome = MakeRequest(request, "SmartStructuralOCRV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SmartStructuralOCRV2Response rsp = SmartStructuralOCRV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SmartStructuralOCRV2Outcome(rsp);
        else
            return SmartStructuralOCRV2Outcome(o.GetError());
    }
    else
    {
        return SmartStructuralOCRV2Outcome(outcome.GetError());
    }
}

void OcrClient::SmartStructuralOCRV2Async(const SmartStructuralOCRV2Request& request, const SmartStructuralOCRV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SmartStructuralOCRV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::SmartStructuralOCRV2OutcomeCallable OcrClient::SmartStructuralOCRV2Callable(const SmartStructuralOCRV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<SmartStructuralOCRV2Outcome()>>(
        [this, request]()
        {
            return this->SmartStructuralOCRV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::TableOCROutcome OcrClient::TableOCR(const TableOCRRequest &request)
{
    auto outcome = MakeRequest(request, "TableOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TableOCRResponse rsp = TableOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TableOCROutcome(rsp);
        else
            return TableOCROutcome(o.GetError());
    }
    else
    {
        return TableOCROutcome(outcome.GetError());
    }
}

void OcrClient::TableOCRAsync(const TableOCRRequest& request, const TableOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TableOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::TableOCROutcomeCallable OcrClient::TableOCRCallable(const TableOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TableOCROutcome()>>(
        [this, request]()
        {
            return this->TableOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

