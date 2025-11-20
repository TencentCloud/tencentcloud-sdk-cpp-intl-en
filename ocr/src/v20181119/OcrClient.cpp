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
    using Req = const BankCardOCRRequest&;
    using Resp = BankCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "BankCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::BankCardOCROutcomeCallable OcrClient::BankCardOCRCallable(const BankCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<BankCardOCROutcome>>();
    BankCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const BankCardOCRRequest&,
        BankCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::ExtractDocMultiOutcome OcrClient::ExtractDocMulti(const ExtractDocMultiRequest &request)
{
    auto outcome = MakeRequest(request, "ExtractDocMulti");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExtractDocMultiResponse rsp = ExtractDocMultiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExtractDocMultiOutcome(rsp);
        else
            return ExtractDocMultiOutcome(o.GetError());
    }
    else
    {
        return ExtractDocMultiOutcome(outcome.GetError());
    }
}

void OcrClient::ExtractDocMultiAsync(const ExtractDocMultiRequest& request, const ExtractDocMultiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExtractDocMultiRequest&;
    using Resp = ExtractDocMultiResponse;

    DoRequestAsync<Req, Resp>(
        "ExtractDocMulti", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::ExtractDocMultiOutcomeCallable OcrClient::ExtractDocMultiCallable(const ExtractDocMultiRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExtractDocMultiOutcome>>();
    ExtractDocMultiAsync(
    request,
    [prom](
        const OcrClient*,
        const ExtractDocMultiRequest&,
        ExtractDocMultiOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GeneralAccurateOCRRequest&;
    using Resp = GeneralAccurateOCRResponse;

    DoRequestAsync<Req, Resp>(
        "GeneralAccurateOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::GeneralAccurateOCROutcomeCallable OcrClient::GeneralAccurateOCRCallable(const GeneralAccurateOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<GeneralAccurateOCROutcome>>();
    GeneralAccurateOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const GeneralAccurateOCRRequest&,
        GeneralAccurateOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GeneralBasicOCRRequest&;
    using Resp = GeneralBasicOCRResponse;

    DoRequestAsync<Req, Resp>(
        "GeneralBasicOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::GeneralBasicOCROutcomeCallable OcrClient::GeneralBasicOCRCallable(const GeneralBasicOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<GeneralBasicOCROutcome>>();
    GeneralBasicOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const GeneralBasicOCRRequest&,
        GeneralBasicOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const HKIDCardOCRRequest&;
    using Resp = HKIDCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "HKIDCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::HKIDCardOCROutcomeCallable OcrClient::HKIDCardOCRCallable(const HKIDCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<HKIDCardOCROutcome>>();
    HKIDCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const HKIDCardOCRRequest&,
        HKIDCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const HmtResidentPermitOCRRequest&;
    using Resp = HmtResidentPermitOCRResponse;

    DoRequestAsync<Req, Resp>(
        "HmtResidentPermitOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::HmtResidentPermitOCROutcomeCallable OcrClient::HmtResidentPermitOCRCallable(const HmtResidentPermitOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<HmtResidentPermitOCROutcome>>();
    HmtResidentPermitOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const HmtResidentPermitOCRRequest&,
        HmtResidentPermitOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const IDCardOCRRequest&;
    using Resp = IDCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "IDCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::IDCardOCROutcomeCallable OcrClient::IDCardOCRCallable(const IDCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<IDCardOCROutcome>>();
    IDCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const IDCardOCRRequest&,
        IDCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const LicensePlateOCRRequest&;
    using Resp = LicensePlateOCRResponse;

    DoRequestAsync<Req, Resp>(
        "LicensePlateOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::LicensePlateOCROutcomeCallable OcrClient::LicensePlateOCRCallable(const LicensePlateOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<LicensePlateOCROutcome>>();
    LicensePlateOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const LicensePlateOCRRequest&,
        LicensePlateOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const MLIDCardOCRRequest&;
    using Resp = MLIDCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "MLIDCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::MLIDCardOCROutcomeCallable OcrClient::MLIDCardOCRCallable(const MLIDCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<MLIDCardOCROutcome>>();
    MLIDCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const MLIDCardOCRRequest&,
        MLIDCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const MLIDPassportOCRRequest&;
    using Resp = MLIDPassportOCRResponse;

    DoRequestAsync<Req, Resp>(
        "MLIDPassportOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::MLIDPassportOCROutcomeCallable OcrClient::MLIDPassportOCRCallable(const MLIDPassportOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<MLIDPassportOCROutcome>>();
    MLIDPassportOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const MLIDPassportOCRRequest&,
        MLIDPassportOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const MainlandPermitOCRRequest&;
    using Resp = MainlandPermitOCRResponse;

    DoRequestAsync<Req, Resp>(
        "MainlandPermitOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::MainlandPermitOCROutcomeCallable OcrClient::MainlandPermitOCRCallable(const MainlandPermitOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<MainlandPermitOCROutcome>>();
    MainlandPermitOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const MainlandPermitOCRRequest&,
        MainlandPermitOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const PermitOCRRequest&;
    using Resp = PermitOCRResponse;

    DoRequestAsync<Req, Resp>(
        "PermitOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::PermitOCROutcomeCallable OcrClient::PermitOCRCallable(const PermitOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<PermitOCROutcome>>();
    PermitOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const PermitOCRRequest&,
        PermitOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RecognizeBrazilCommonOCROutcome OcrClient::RecognizeBrazilCommonOCR(const RecognizeBrazilCommonOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeBrazilCommonOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeBrazilCommonOCRResponse rsp = RecognizeBrazilCommonOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeBrazilCommonOCROutcome(rsp);
        else
            return RecognizeBrazilCommonOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeBrazilCommonOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeBrazilCommonOCRAsync(const RecognizeBrazilCommonOCRRequest& request, const RecognizeBrazilCommonOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeBrazilCommonOCRRequest&;
    using Resp = RecognizeBrazilCommonOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeBrazilCommonOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeBrazilCommonOCROutcomeCallable OcrClient::RecognizeBrazilCommonOCRCallable(const RecognizeBrazilCommonOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeBrazilCommonOCROutcome>>();
    RecognizeBrazilCommonOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeBrazilCommonOCRRequest&,
        RecognizeBrazilCommonOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecognizeBrazilDriverLicenseOCRRequest&;
    using Resp = RecognizeBrazilDriverLicenseOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeBrazilDriverLicenseOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeBrazilDriverLicenseOCROutcomeCallable OcrClient::RecognizeBrazilDriverLicenseOCRCallable(const RecognizeBrazilDriverLicenseOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeBrazilDriverLicenseOCROutcome>>();
    RecognizeBrazilDriverLicenseOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeBrazilDriverLicenseOCRRequest&,
        RecognizeBrazilDriverLicenseOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecognizeBrazilIDCardOCRRequest&;
    using Resp = RecognizeBrazilIDCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeBrazilIDCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeBrazilIDCardOCROutcomeCallable OcrClient::RecognizeBrazilIDCardOCRCallable(const RecognizeBrazilIDCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeBrazilIDCardOCROutcome>>();
    RecognizeBrazilIDCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeBrazilIDCardOCRRequest&,
        RecognizeBrazilIDCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecognizeBrazilRNEOCRRequest&;
    using Resp = RecognizeBrazilRNEOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeBrazilRNEOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeBrazilRNEOCROutcomeCallable OcrClient::RecognizeBrazilRNEOCRCallable(const RecognizeBrazilRNEOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeBrazilRNEOCROutcome>>();
    RecognizeBrazilRNEOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeBrazilRNEOCRRequest&,
        RecognizeBrazilRNEOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RecognizeBrazilRNMOCROutcome OcrClient::RecognizeBrazilRNMOCR(const RecognizeBrazilRNMOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeBrazilRNMOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeBrazilRNMOCRResponse rsp = RecognizeBrazilRNMOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeBrazilRNMOCROutcome(rsp);
        else
            return RecognizeBrazilRNMOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeBrazilRNMOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeBrazilRNMOCRAsync(const RecognizeBrazilRNMOCRRequest& request, const RecognizeBrazilRNMOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeBrazilRNMOCRRequest&;
    using Resp = RecognizeBrazilRNMOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeBrazilRNMOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeBrazilRNMOCROutcomeCallable OcrClient::RecognizeBrazilRNMOCRCallable(const RecognizeBrazilRNMOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeBrazilRNMOCROutcome>>();
    RecognizeBrazilRNMOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeBrazilRNMOCRRequest&,
        RecognizeBrazilRNMOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RecognizeDetectCardCoordsOutcome OcrClient::RecognizeDetectCardCoords(const RecognizeDetectCardCoordsRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeDetectCardCoords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeDetectCardCoordsResponse rsp = RecognizeDetectCardCoordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeDetectCardCoordsOutcome(rsp);
        else
            return RecognizeDetectCardCoordsOutcome(o.GetError());
    }
    else
    {
        return RecognizeDetectCardCoordsOutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeDetectCardCoordsAsync(const RecognizeDetectCardCoordsRequest& request, const RecognizeDetectCardCoordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeDetectCardCoordsRequest&;
    using Resp = RecognizeDetectCardCoordsResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeDetectCardCoords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeDetectCardCoordsOutcomeCallable OcrClient::RecognizeDetectCardCoordsCallable(const RecognizeDetectCardCoordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeDetectCardCoordsOutcome>>();
    RecognizeDetectCardCoordsAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeDetectCardCoordsRequest&,
        RecognizeDetectCardCoordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecognizeGeneralInvoiceRequest&;
    using Resp = RecognizeGeneralInvoiceResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeGeneralInvoice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeGeneralInvoiceOutcomeCallable OcrClient::RecognizeGeneralInvoiceCallable(const RecognizeGeneralInvoiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeGeneralInvoiceOutcome>>();
    RecognizeGeneralInvoiceAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeGeneralInvoiceRequest&,
        RecognizeGeneralInvoiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecognizeIndonesiaIDCardOCRRequest&;
    using Resp = RecognizeIndonesiaIDCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeIndonesiaIDCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeIndonesiaIDCardOCROutcomeCallable OcrClient::RecognizeIndonesiaIDCardOCRCallable(const RecognizeIndonesiaIDCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeIndonesiaIDCardOCROutcome>>();
    RecognizeIndonesiaIDCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeIndonesiaIDCardOCRRequest&,
        RecognizeIndonesiaIDCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecognizeKoreanDrivingLicenseOCRRequest&;
    using Resp = RecognizeKoreanDrivingLicenseOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeKoreanDrivingLicenseOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeKoreanDrivingLicenseOCROutcomeCallable OcrClient::RecognizeKoreanDrivingLicenseOCRCallable(const RecognizeKoreanDrivingLicenseOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeKoreanDrivingLicenseOCROutcome>>();
    RecognizeKoreanDrivingLicenseOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeKoreanDrivingLicenseOCRRequest&,
        RecognizeKoreanDrivingLicenseOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecognizeKoreanIDCardOCRRequest&;
    using Resp = RecognizeKoreanIDCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeKoreanIDCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeKoreanIDCardOCROutcomeCallable OcrClient::RecognizeKoreanIDCardOCRCallable(const RecognizeKoreanIDCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeKoreanIDCardOCROutcome>>();
    RecognizeKoreanIDCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeKoreanIDCardOCRRequest&,
        RecognizeKoreanIDCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecognizeMacaoIDCardOCRRequest&;
    using Resp = RecognizeMacaoIDCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeMacaoIDCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeMacaoIDCardOCROutcomeCallable OcrClient::RecognizeMacaoIDCardOCRCallable(const RecognizeMacaoIDCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeMacaoIDCardOCROutcome>>();
    RecognizeMacaoIDCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeMacaoIDCardOCRRequest&,
        RecognizeMacaoIDCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecognizeMainlandIDCardOCRRequest&;
    using Resp = RecognizeMainlandIDCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeMainlandIDCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeMainlandIDCardOCROutcomeCallable OcrClient::RecognizeMainlandIDCardOCRCallable(const RecognizeMainlandIDCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeMainlandIDCardOCROutcome>>();
    RecognizeMainlandIDCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeMainlandIDCardOCRRequest&,
        RecognizeMainlandIDCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RecognizeMexicoVTIDOutcome OcrClient::RecognizeMexicoVTID(const RecognizeMexicoVTIDRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeMexicoVTID");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeMexicoVTIDResponse rsp = RecognizeMexicoVTIDResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeMexicoVTIDOutcome(rsp);
        else
            return RecognizeMexicoVTIDOutcome(o.GetError());
    }
    else
    {
        return RecognizeMexicoVTIDOutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeMexicoVTIDAsync(const RecognizeMexicoVTIDRequest& request, const RecognizeMexicoVTIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeMexicoVTIDRequest&;
    using Resp = RecognizeMexicoVTIDResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeMexicoVTID", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeMexicoVTIDOutcomeCallable OcrClient::RecognizeMexicoVTIDCallable(const RecognizeMexicoVTIDRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeMexicoVTIDOutcome>>();
    RecognizeMexicoVTIDAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeMexicoVTIDRequest&,
        RecognizeMexicoVTIDOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecognizePhilippinesDrivingLicenseOCRRequest&;
    using Resp = RecognizePhilippinesDrivingLicenseOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizePhilippinesDrivingLicenseOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizePhilippinesDrivingLicenseOCROutcomeCallable OcrClient::RecognizePhilippinesDrivingLicenseOCRCallable(const RecognizePhilippinesDrivingLicenseOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizePhilippinesDrivingLicenseOCROutcome>>();
    RecognizePhilippinesDrivingLicenseOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizePhilippinesDrivingLicenseOCRRequest&,
        RecognizePhilippinesDrivingLicenseOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecognizePhilippinesSssIDOCRRequest&;
    using Resp = RecognizePhilippinesSssIDOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizePhilippinesSssIDOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizePhilippinesSssIDOCROutcomeCallable OcrClient::RecognizePhilippinesSssIDOCRCallable(const RecognizePhilippinesSssIDOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizePhilippinesSssIDOCROutcome>>();
    RecognizePhilippinesSssIDOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizePhilippinesSssIDOCRRequest&,
        RecognizePhilippinesSssIDOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecognizePhilippinesTinIDOCRRequest&;
    using Resp = RecognizePhilippinesTinIDOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizePhilippinesTinIDOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizePhilippinesTinIDOCROutcomeCallable OcrClient::RecognizePhilippinesTinIDOCRCallable(const RecognizePhilippinesTinIDOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizePhilippinesTinIDOCROutcome>>();
    RecognizePhilippinesTinIDOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizePhilippinesTinIDOCRRequest&,
        RecognizePhilippinesTinIDOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecognizePhilippinesUMIDOCRRequest&;
    using Resp = RecognizePhilippinesUMIDOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizePhilippinesUMIDOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizePhilippinesUMIDOCROutcomeCallable OcrClient::RecognizePhilippinesUMIDOCRCallable(const RecognizePhilippinesUMIDOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizePhilippinesUMIDOCROutcome>>();
    RecognizePhilippinesUMIDOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizePhilippinesUMIDOCRRequest&,
        RecognizePhilippinesUMIDOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecognizePhilippinesVoteIDOCRRequest&;
    using Resp = RecognizePhilippinesVoteIDOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizePhilippinesVoteIDOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizePhilippinesVoteIDOCROutcomeCallable OcrClient::RecognizePhilippinesVoteIDOCRCallable(const RecognizePhilippinesVoteIDOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizePhilippinesVoteIDOCROutcome>>();
    RecognizePhilippinesVoteIDOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizePhilippinesVoteIDOCRRequest&,
        RecognizePhilippinesVoteIDOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecognizeSingaporeIDCardOCRRequest&;
    using Resp = RecognizeSingaporeIDCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeSingaporeIDCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeSingaporeIDCardOCROutcomeCallable OcrClient::RecognizeSingaporeIDCardOCRCallable(const RecognizeSingaporeIDCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeSingaporeIDCardOCROutcome>>();
    RecognizeSingaporeIDCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeSingaporeIDCardOCRRequest&,
        RecognizeSingaporeIDCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecognizeTableAccurateOCRRequest&;
    using Resp = RecognizeTableAccurateOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeTableAccurateOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeTableAccurateOCROutcomeCallable OcrClient::RecognizeTableAccurateOCRCallable(const RecognizeTableAccurateOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeTableAccurateOCROutcome>>();
    RecognizeTableAccurateOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeTableAccurateOCRRequest&,
        RecognizeTableAccurateOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecognizeThaiIDCardOCRRequest&;
    using Resp = RecognizeThaiIDCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeThaiIDCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeThaiIDCardOCROutcomeCallable OcrClient::RecognizeThaiIDCardOCRCallable(const RecognizeThaiIDCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeThaiIDCardOCROutcome>>();
    RecognizeThaiIDCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeThaiIDCardOCRRequest&,
        RecognizeThaiIDCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecognizeThaiPinkCardRequest&;
    using Resp = RecognizeThaiPinkCardResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeThaiPinkCard", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeThaiPinkCardOutcomeCallable OcrClient::RecognizeThaiPinkCardCallable(const RecognizeThaiPinkCardRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeThaiPinkCardOutcome>>();
    RecognizeThaiPinkCardAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeThaiPinkCardRequest&,
        RecognizeThaiPinkCardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SealOCRRequest&;
    using Resp = SealOCRResponse;

    DoRequestAsync<Req, Resp>(
        "SealOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::SealOCROutcomeCallable OcrClient::SealOCRCallable(const SealOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<SealOCROutcome>>();
    SealOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const SealOCRRequest&,
        SealOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SmartStructuralOCRV2Request&;
    using Resp = SmartStructuralOCRV2Response;

    DoRequestAsync<Req, Resp>(
        "SmartStructuralOCRV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::SmartStructuralOCRV2OutcomeCallable OcrClient::SmartStructuralOCRV2Callable(const SmartStructuralOCRV2Request &request)
{
    const auto prom = std::make_shared<std::promise<SmartStructuralOCRV2Outcome>>();
    SmartStructuralOCRV2Async(
    request,
    [prom](
        const OcrClient*,
        const SmartStructuralOCRV2Request&,
        SmartStructuralOCRV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SmartStructuralProRequest&;
    using Resp = SmartStructuralProResponse;

    DoRequestAsync<Req, Resp>(
        "SmartStructuralPro", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::SmartStructuralProOutcomeCallable OcrClient::SmartStructuralProCallable(const SmartStructuralProRequest &request)
{
    const auto prom = std::make_shared<std::promise<SmartStructuralProOutcome>>();
    SmartStructuralProAsync(
    request,
    [prom](
        const OcrClient*,
        const SmartStructuralProRequest&,
        SmartStructuralProOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const TableOCRRequest&;
    using Resp = TableOCRResponse;

    DoRequestAsync<Req, Resp>(
        "TableOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::TableOCROutcomeCallable OcrClient::TableOCRCallable(const TableOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<TableOCROutcome>>();
    TableOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const TableOCRRequest&,
        TableOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const VinOCRRequest&;
    using Resp = VinOCRResponse;

    DoRequestAsync<Req, Resp>(
        "VinOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::VinOCROutcomeCallable OcrClient::VinOCRCallable(const VinOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<VinOCROutcome>>();
    VinOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const VinOCRRequest&,
        VinOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

