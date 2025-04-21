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
    const string ENDPOINT = "ocr.intl.tencentcloudapi.com";
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

OcrClient::HmtResidentPermitOCROutcome OcrClient::HmtResidentPermitOCR(const HmtResidentPermitOCRRequest &request)
{
    auto outcome = MakeRequest(request, "HmtResidentPermitOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        HmtResidentPermitOCRResponse rsp = HmtResidentPermitOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return HmtResidentPermitOCROutcome(rsp);
        else
            return HmtResidentPermitOCROutcome(o.GetError());
    }
    else
    {
        return HmtResidentPermitOCROutcome(outcome.GetError());
    }
}

void OcrClient::HmtResidentPermitOCRAsync(const HmtResidentPermitOCRRequest& request, const HmtResidentPermitOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->HmtResidentPermitOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::HmtResidentPermitOCROutcomeCallable OcrClient::HmtResidentPermitOCRCallable(const HmtResidentPermitOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<HmtResidentPermitOCROutcome()>>(
        [this, request]()
        {
            return this->HmtResidentPermitOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::IDCardOCROutcome OcrClient::IDCardOCR(const IDCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "IDCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IDCardOCRResponse rsp = IDCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IDCardOCROutcome(rsp);
        else
            return IDCardOCROutcome(o.GetError());
    }
    else
    {
        return IDCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::IDCardOCRAsync(const IDCardOCRRequest& request, const IDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IDCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::IDCardOCROutcomeCallable OcrClient::IDCardOCRCallable(const IDCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IDCardOCROutcome()>>(
        [this, request]()
        {
            return this->IDCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::LicensePlateOCROutcome OcrClient::LicensePlateOCR(const LicensePlateOCRRequest &request)
{
    auto outcome = MakeRequest(request, "LicensePlateOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LicensePlateOCRResponse rsp = LicensePlateOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LicensePlateOCROutcome(rsp);
        else
            return LicensePlateOCROutcome(o.GetError());
    }
    else
    {
        return LicensePlateOCROutcome(outcome.GetError());
    }
}

void OcrClient::LicensePlateOCRAsync(const LicensePlateOCRRequest& request, const LicensePlateOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LicensePlateOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::LicensePlateOCROutcomeCallable OcrClient::LicensePlateOCRCallable(const LicensePlateOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LicensePlateOCROutcome()>>(
        [this, request]()
        {
            return this->LicensePlateOCR(request);
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

OcrClient::MainlandPermitOCROutcome OcrClient::MainlandPermitOCR(const MainlandPermitOCRRequest &request)
{
    auto outcome = MakeRequest(request, "MainlandPermitOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MainlandPermitOCRResponse rsp = MainlandPermitOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MainlandPermitOCROutcome(rsp);
        else
            return MainlandPermitOCROutcome(o.GetError());
    }
    else
    {
        return MainlandPermitOCROutcome(outcome.GetError());
    }
}

void OcrClient::MainlandPermitOCRAsync(const MainlandPermitOCRRequest& request, const MainlandPermitOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MainlandPermitOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::MainlandPermitOCROutcomeCallable OcrClient::MainlandPermitOCRCallable(const MainlandPermitOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MainlandPermitOCROutcome()>>(
        [this, request]()
        {
            return this->MainlandPermitOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::PermitOCROutcome OcrClient::PermitOCR(const PermitOCRRequest &request)
{
    auto outcome = MakeRequest(request, "PermitOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PermitOCRResponse rsp = PermitOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PermitOCROutcome(rsp);
        else
            return PermitOCROutcome(o.GetError());
    }
    else
    {
        return PermitOCROutcome(outcome.GetError());
    }
}

void OcrClient::PermitOCRAsync(const PermitOCRRequest& request, const PermitOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PermitOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::PermitOCROutcomeCallable OcrClient::PermitOCRCallable(const PermitOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PermitOCROutcome()>>(
        [this, request]()
        {
            return this->PermitOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::RecognizeBrazilDriverLicenseOCROutcome OcrClient::RecognizeBrazilDriverLicenseOCR(const RecognizeBrazilDriverLicenseOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeBrazilDriverLicenseOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeBrazilDriverLicenseOCRResponse rsp = RecognizeBrazilDriverLicenseOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeBrazilDriverLicenseOCROutcome(rsp);
        else
            return RecognizeBrazilDriverLicenseOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeBrazilDriverLicenseOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeBrazilDriverLicenseOCRAsync(const RecognizeBrazilDriverLicenseOCRRequest& request, const RecognizeBrazilDriverLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeBrazilDriverLicenseOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizeBrazilDriverLicenseOCROutcomeCallable OcrClient::RecognizeBrazilDriverLicenseOCRCallable(const RecognizeBrazilDriverLicenseOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeBrazilDriverLicenseOCROutcome()>>(
        [this, request]()
        {
            return this->RecognizeBrazilDriverLicenseOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::RecognizeBrazilIDCardOCROutcome OcrClient::RecognizeBrazilIDCardOCR(const RecognizeBrazilIDCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeBrazilIDCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeBrazilIDCardOCRResponse rsp = RecognizeBrazilIDCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeBrazilIDCardOCROutcome(rsp);
        else
            return RecognizeBrazilIDCardOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeBrazilIDCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeBrazilIDCardOCRAsync(const RecognizeBrazilIDCardOCRRequest& request, const RecognizeBrazilIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeBrazilIDCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizeBrazilIDCardOCROutcomeCallable OcrClient::RecognizeBrazilIDCardOCRCallable(const RecognizeBrazilIDCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeBrazilIDCardOCROutcome()>>(
        [this, request]()
        {
            return this->RecognizeBrazilIDCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::RecognizeBrazilRNEOCROutcome OcrClient::RecognizeBrazilRNEOCR(const RecognizeBrazilRNEOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeBrazilRNEOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeBrazilRNEOCRResponse rsp = RecognizeBrazilRNEOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeBrazilRNEOCROutcome(rsp);
        else
            return RecognizeBrazilRNEOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeBrazilRNEOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeBrazilRNEOCRAsync(const RecognizeBrazilRNEOCRRequest& request, const RecognizeBrazilRNEOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeBrazilRNEOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizeBrazilRNEOCROutcomeCallable OcrClient::RecognizeBrazilRNEOCRCallable(const RecognizeBrazilRNEOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeBrazilRNEOCROutcome()>>(
        [this, request]()
        {
            return this->RecognizeBrazilRNEOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::RecognizeGeneralInvoiceOutcome OcrClient::RecognizeGeneralInvoice(const RecognizeGeneralInvoiceRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeGeneralInvoice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeGeneralInvoiceResponse rsp = RecognizeGeneralInvoiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeGeneralInvoiceOutcome(rsp);
        else
            return RecognizeGeneralInvoiceOutcome(o.GetError());
    }
    else
    {
        return RecognizeGeneralInvoiceOutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeGeneralInvoiceAsync(const RecognizeGeneralInvoiceRequest& request, const RecognizeGeneralInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeGeneralInvoice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizeGeneralInvoiceOutcomeCallable OcrClient::RecognizeGeneralInvoiceCallable(const RecognizeGeneralInvoiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeGeneralInvoiceOutcome()>>(
        [this, request]()
        {
            return this->RecognizeGeneralInvoice(request);
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

OcrClient::RecognizeKoreanDrivingLicenseOCROutcome OcrClient::RecognizeKoreanDrivingLicenseOCR(const RecognizeKoreanDrivingLicenseOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeKoreanDrivingLicenseOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeKoreanDrivingLicenseOCRResponse rsp = RecognizeKoreanDrivingLicenseOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeKoreanDrivingLicenseOCROutcome(rsp);
        else
            return RecognizeKoreanDrivingLicenseOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeKoreanDrivingLicenseOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeKoreanDrivingLicenseOCRAsync(const RecognizeKoreanDrivingLicenseOCRRequest& request, const RecognizeKoreanDrivingLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeKoreanDrivingLicenseOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizeKoreanDrivingLicenseOCROutcomeCallable OcrClient::RecognizeKoreanDrivingLicenseOCRCallable(const RecognizeKoreanDrivingLicenseOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeKoreanDrivingLicenseOCROutcome()>>(
        [this, request]()
        {
            return this->RecognizeKoreanDrivingLicenseOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::RecognizeKoreanIDCardOCROutcome OcrClient::RecognizeKoreanIDCardOCR(const RecognizeKoreanIDCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeKoreanIDCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeKoreanIDCardOCRResponse rsp = RecognizeKoreanIDCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeKoreanIDCardOCROutcome(rsp);
        else
            return RecognizeKoreanIDCardOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeKoreanIDCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeKoreanIDCardOCRAsync(const RecognizeKoreanIDCardOCRRequest& request, const RecognizeKoreanIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeKoreanIDCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizeKoreanIDCardOCROutcomeCallable OcrClient::RecognizeKoreanIDCardOCRCallable(const RecognizeKoreanIDCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeKoreanIDCardOCROutcome()>>(
        [this, request]()
        {
            return this->RecognizeKoreanIDCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::RecognizeMacaoIDCardOCROutcome OcrClient::RecognizeMacaoIDCardOCR(const RecognizeMacaoIDCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeMacaoIDCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeMacaoIDCardOCRResponse rsp = RecognizeMacaoIDCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeMacaoIDCardOCROutcome(rsp);
        else
            return RecognizeMacaoIDCardOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeMacaoIDCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeMacaoIDCardOCRAsync(const RecognizeMacaoIDCardOCRRequest& request, const RecognizeMacaoIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeMacaoIDCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizeMacaoIDCardOCROutcomeCallable OcrClient::RecognizeMacaoIDCardOCRCallable(const RecognizeMacaoIDCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeMacaoIDCardOCROutcome()>>(
        [this, request]()
        {
            return this->RecognizeMacaoIDCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::RecognizeMainlandIDCardOCROutcome OcrClient::RecognizeMainlandIDCardOCR(const RecognizeMainlandIDCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeMainlandIDCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeMainlandIDCardOCRResponse rsp = RecognizeMainlandIDCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeMainlandIDCardOCROutcome(rsp);
        else
            return RecognizeMainlandIDCardOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeMainlandIDCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeMainlandIDCardOCRAsync(const RecognizeMainlandIDCardOCRRequest& request, const RecognizeMainlandIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeMainlandIDCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizeMainlandIDCardOCROutcomeCallable OcrClient::RecognizeMainlandIDCardOCRCallable(const RecognizeMainlandIDCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeMainlandIDCardOCROutcome()>>(
        [this, request]()
        {
            return this->RecognizeMainlandIDCardOCR(request);
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

OcrClient::RecognizePhilippinesUMIDOCROutcome OcrClient::RecognizePhilippinesUMIDOCR(const RecognizePhilippinesUMIDOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizePhilippinesUMIDOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizePhilippinesUMIDOCRResponse rsp = RecognizePhilippinesUMIDOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizePhilippinesUMIDOCROutcome(rsp);
        else
            return RecognizePhilippinesUMIDOCROutcome(o.GetError());
    }
    else
    {
        return RecognizePhilippinesUMIDOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizePhilippinesUMIDOCRAsync(const RecognizePhilippinesUMIDOCRRequest& request, const RecognizePhilippinesUMIDOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizePhilippinesUMIDOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizePhilippinesUMIDOCROutcomeCallable OcrClient::RecognizePhilippinesUMIDOCRCallable(const RecognizePhilippinesUMIDOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizePhilippinesUMIDOCROutcome()>>(
        [this, request]()
        {
            return this->RecognizePhilippinesUMIDOCR(request);
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

OcrClient::RecognizeSingaporeIDCardOCROutcome OcrClient::RecognizeSingaporeIDCardOCR(const RecognizeSingaporeIDCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeSingaporeIDCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeSingaporeIDCardOCRResponse rsp = RecognizeSingaporeIDCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeSingaporeIDCardOCROutcome(rsp);
        else
            return RecognizeSingaporeIDCardOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeSingaporeIDCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeSingaporeIDCardOCRAsync(const RecognizeSingaporeIDCardOCRRequest& request, const RecognizeSingaporeIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeSingaporeIDCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizeSingaporeIDCardOCROutcomeCallable OcrClient::RecognizeSingaporeIDCardOCRCallable(const RecognizeSingaporeIDCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeSingaporeIDCardOCROutcome()>>(
        [this, request]()
        {
            return this->RecognizeSingaporeIDCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::RecognizeTableAccurateOCROutcome OcrClient::RecognizeTableAccurateOCR(const RecognizeTableAccurateOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeTableAccurateOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeTableAccurateOCRResponse rsp = RecognizeTableAccurateOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeTableAccurateOCROutcome(rsp);
        else
            return RecognizeTableAccurateOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeTableAccurateOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeTableAccurateOCRAsync(const RecognizeTableAccurateOCRRequest& request, const RecognizeTableAccurateOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeTableAccurateOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizeTableAccurateOCROutcomeCallable OcrClient::RecognizeTableAccurateOCRCallable(const RecognizeTableAccurateOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeTableAccurateOCROutcome()>>(
        [this, request]()
        {
            return this->RecognizeTableAccurateOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::RecognizeThaiIDCardOCROutcome OcrClient::RecognizeThaiIDCardOCR(const RecognizeThaiIDCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeThaiIDCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeThaiIDCardOCRResponse rsp = RecognizeThaiIDCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeThaiIDCardOCROutcome(rsp);
        else
            return RecognizeThaiIDCardOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeThaiIDCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeThaiIDCardOCRAsync(const RecognizeThaiIDCardOCRRequest& request, const RecognizeThaiIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeThaiIDCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizeThaiIDCardOCROutcomeCallable OcrClient::RecognizeThaiIDCardOCRCallable(const RecognizeThaiIDCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeThaiIDCardOCROutcome()>>(
        [this, request]()
        {
            return this->RecognizeThaiIDCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::RecognizeThaiPinkCardOutcome OcrClient::RecognizeThaiPinkCard(const RecognizeThaiPinkCardRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeThaiPinkCard");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeThaiPinkCardResponse rsp = RecognizeThaiPinkCardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeThaiPinkCardOutcome(rsp);
        else
            return RecognizeThaiPinkCardOutcome(o.GetError());
    }
    else
    {
        return RecognizeThaiPinkCardOutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeThaiPinkCardAsync(const RecognizeThaiPinkCardRequest& request, const RecognizeThaiPinkCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeThaiPinkCard(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizeThaiPinkCardOutcomeCallable OcrClient::RecognizeThaiPinkCardCallable(const RecognizeThaiPinkCardRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeThaiPinkCardOutcome()>>(
        [this, request]()
        {
            return this->RecognizeThaiPinkCard(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::SealOCROutcome OcrClient::SealOCR(const SealOCRRequest &request)
{
    auto outcome = MakeRequest(request, "SealOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SealOCRResponse rsp = SealOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SealOCROutcome(rsp);
        else
            return SealOCROutcome(o.GetError());
    }
    else
    {
        return SealOCROutcome(outcome.GetError());
    }
}

void OcrClient::SealOCRAsync(const SealOCRRequest& request, const SealOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SealOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::SealOCROutcomeCallable OcrClient::SealOCRCallable(const SealOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SealOCROutcome()>>(
        [this, request]()
        {
            return this->SealOCR(request);
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

OcrClient::SmartStructuralProOutcome OcrClient::SmartStructuralPro(const SmartStructuralProRequest &request)
{
    auto outcome = MakeRequest(request, "SmartStructuralPro");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SmartStructuralProResponse rsp = SmartStructuralProResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SmartStructuralProOutcome(rsp);
        else
            return SmartStructuralProOutcome(o.GetError());
    }
    else
    {
        return SmartStructuralProOutcome(outcome.GetError());
    }
}

void OcrClient::SmartStructuralProAsync(const SmartStructuralProRequest& request, const SmartStructuralProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SmartStructuralPro(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::SmartStructuralProOutcomeCallable OcrClient::SmartStructuralProCallable(const SmartStructuralProRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SmartStructuralProOutcome()>>(
        [this, request]()
        {
            return this->SmartStructuralPro(request);
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

OcrClient::VinOCROutcome OcrClient::VinOCR(const VinOCRRequest &request)
{
    auto outcome = MakeRequest(request, "VinOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VinOCRResponse rsp = VinOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VinOCROutcome(rsp);
        else
            return VinOCROutcome(o.GetError());
    }
    else
    {
        return VinOCROutcome(outcome.GetError());
    }
}

void OcrClient::VinOCRAsync(const VinOCRRequest& request, const VinOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VinOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::VinOCROutcomeCallable OcrClient::VinOCRCallable(const VinOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VinOCROutcome()>>(
        [this, request]()
        {
            return this->VinOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

