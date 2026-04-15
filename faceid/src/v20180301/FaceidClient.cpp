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
    const string ENDPOINT = "faceid.intl.tencentcloudapi.com";
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
    using Req = const ApplyLivenessTokenRequest&;
    using Resp = ApplyLivenessTokenResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyLivenessToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::ApplyLivenessTokenOutcomeCallable FaceidClient::ApplyLivenessTokenCallable(const ApplyLivenessTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyLivenessTokenOutcome>>();
    ApplyLivenessTokenAsync(
    request,
    [prom](
        const FaceidClient*,
        const ApplyLivenessTokenRequest&,
        ApplyLivenessTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ApplySdkVerificationTokenRequest&;
    using Resp = ApplySdkVerificationTokenResponse;

    DoRequestAsync<Req, Resp>(
        "ApplySdkVerificationToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::ApplySdkVerificationTokenOutcomeCallable FaceidClient::ApplySdkVerificationTokenCallable(const ApplySdkVerificationTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplySdkVerificationTokenOutcome>>();
    ApplySdkVerificationTokenAsync(
    request,
    [prom](
        const FaceidClient*,
        const ApplySdkVerificationTokenRequest&,
        ApplySdkVerificationTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::ApplyWebVerificationBizTokenIntlOutcome FaceidClient::ApplyWebVerificationBizTokenIntl(const ApplyWebVerificationBizTokenIntlRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyWebVerificationBizTokenIntl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyWebVerificationBizTokenIntlResponse rsp = ApplyWebVerificationBizTokenIntlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyWebVerificationBizTokenIntlOutcome(rsp);
        else
            return ApplyWebVerificationBizTokenIntlOutcome(o.GetError());
    }
    else
    {
        return ApplyWebVerificationBizTokenIntlOutcome(outcome.GetError());
    }
}

void FaceidClient::ApplyWebVerificationBizTokenIntlAsync(const ApplyWebVerificationBizTokenIntlRequest& request, const ApplyWebVerificationBizTokenIntlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyWebVerificationBizTokenIntlRequest&;
    using Resp = ApplyWebVerificationBizTokenIntlResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyWebVerificationBizTokenIntl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::ApplyWebVerificationBizTokenIntlOutcomeCallable FaceidClient::ApplyWebVerificationBizTokenIntlCallable(const ApplyWebVerificationBizTokenIntlRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyWebVerificationBizTokenIntlOutcome>>();
    ApplyWebVerificationBizTokenIntlAsync(
    request,
    [prom](
        const FaceidClient*,
        const ApplyWebVerificationBizTokenIntlRequest&,
        ApplyWebVerificationBizTokenIntlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::BankCard2EVerificationOutcome FaceidClient::BankCard2EVerification(const BankCard2EVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "BankCard2EVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BankCard2EVerificationResponse rsp = BankCard2EVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BankCard2EVerificationOutcome(rsp);
        else
            return BankCard2EVerificationOutcome(o.GetError());
    }
    else
    {
        return BankCard2EVerificationOutcome(outcome.GetError());
    }
}

void FaceidClient::BankCard2EVerificationAsync(const BankCard2EVerificationRequest& request, const BankCard2EVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BankCard2EVerificationRequest&;
    using Resp = BankCard2EVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "BankCard2EVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::BankCard2EVerificationOutcomeCallable FaceidClient::BankCard2EVerificationCallable(const BankCard2EVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<BankCard2EVerificationOutcome>>();
    BankCard2EVerificationAsync(
    request,
    [prom](
        const FaceidClient*,
        const BankCard2EVerificationRequest&,
        BankCard2EVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::BankCard4EVerificationOutcome FaceidClient::BankCard4EVerification(const BankCard4EVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "BankCard4EVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BankCard4EVerificationResponse rsp = BankCard4EVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BankCard4EVerificationOutcome(rsp);
        else
            return BankCard4EVerificationOutcome(o.GetError());
    }
    else
    {
        return BankCard4EVerificationOutcome(outcome.GetError());
    }
}

void FaceidClient::BankCard4EVerificationAsync(const BankCard4EVerificationRequest& request, const BankCard4EVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BankCard4EVerificationRequest&;
    using Resp = BankCard4EVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "BankCard4EVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::BankCard4EVerificationOutcomeCallable FaceidClient::BankCard4EVerificationCallable(const BankCard4EVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<BankCard4EVerificationOutcome>>();
    BankCard4EVerificationAsync(
    request,
    [prom](
        const FaceidClient*,
        const BankCard4EVerificationRequest&,
        BankCard4EVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::BankCardVerificationOutcome FaceidClient::BankCardVerification(const BankCardVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "BankCardVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BankCardVerificationResponse rsp = BankCardVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BankCardVerificationOutcome(rsp);
        else
            return BankCardVerificationOutcome(o.GetError());
    }
    else
    {
        return BankCardVerificationOutcome(outcome.GetError());
    }
}

void FaceidClient::BankCardVerificationAsync(const BankCardVerificationRequest& request, const BankCardVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BankCardVerificationRequest&;
    using Resp = BankCardVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "BankCardVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::BankCardVerificationOutcomeCallable FaceidClient::BankCardVerificationCallable(const BankCardVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<BankCardVerificationOutcome>>();
    BankCardVerificationAsync(
    request,
    [prom](
        const FaceidClient*,
        const BankCardVerificationRequest&,
        BankCardVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::CheckBankCardInformationOutcome FaceidClient::CheckBankCardInformation(const CheckBankCardInformationRequest &request)
{
    auto outcome = MakeRequest(request, "CheckBankCardInformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckBankCardInformationResponse rsp = CheckBankCardInformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckBankCardInformationOutcome(rsp);
        else
            return CheckBankCardInformationOutcome(o.GetError());
    }
    else
    {
        return CheckBankCardInformationOutcome(outcome.GetError());
    }
}

void FaceidClient::CheckBankCardInformationAsync(const CheckBankCardInformationRequest& request, const CheckBankCardInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckBankCardInformationRequest&;
    using Resp = CheckBankCardInformationResponse;

    DoRequestAsync<Req, Resp>(
        "CheckBankCardInformation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::CheckBankCardInformationOutcomeCallable FaceidClient::CheckBankCardInformationCallable(const CheckBankCardInformationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckBankCardInformationOutcome>>();
    CheckBankCardInformationAsync(
    request,
    [prom](
        const FaceidClient*,
        const CheckBankCardInformationRequest&,
        CheckBankCardInformationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::CompareFaceLivenessOutcome FaceidClient::CompareFaceLiveness(const CompareFaceLivenessRequest &request)
{
    auto outcome = MakeRequest(request, "CompareFaceLiveness");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CompareFaceLivenessResponse rsp = CompareFaceLivenessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CompareFaceLivenessOutcome(rsp);
        else
            return CompareFaceLivenessOutcome(o.GetError());
    }
    else
    {
        return CompareFaceLivenessOutcome(outcome.GetError());
    }
}

void FaceidClient::CompareFaceLivenessAsync(const CompareFaceLivenessRequest& request, const CompareFaceLivenessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CompareFaceLivenessRequest&;
    using Resp = CompareFaceLivenessResponse;

    DoRequestAsync<Req, Resp>(
        "CompareFaceLiveness", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::CompareFaceLivenessOutcomeCallable FaceidClient::CompareFaceLivenessCallable(const CompareFaceLivenessRequest &request)
{
    const auto prom = std::make_shared<std::promise<CompareFaceLivenessOutcome>>();
    CompareFaceLivenessAsync(
    request,
    [prom](
        const FaceidClient*,
        const CompareFaceLivenessRequest&,
        CompareFaceLivenessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateUploadUrlRequest&;
    using Resp = CreateUploadUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUploadUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::CreateUploadUrlOutcomeCallable FaceidClient::CreateUploadUrlCallable(const CreateUploadUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUploadUrlOutcome>>();
    CreateUploadUrlAsync(
    request,
    [prom](
        const FaceidClient*,
        const CreateUploadUrlRequest&,
        CreateUploadUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::DetectAIFakeFacesOutcome FaceidClient::DetectAIFakeFaces(const DetectAIFakeFacesRequest &request)
{
    auto outcome = MakeRequest(request, "DetectAIFakeFaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectAIFakeFacesResponse rsp = DetectAIFakeFacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectAIFakeFacesOutcome(rsp);
        else
            return DetectAIFakeFacesOutcome(o.GetError());
    }
    else
    {
        return DetectAIFakeFacesOutcome(outcome.GetError());
    }
}

void FaceidClient::DetectAIFakeFacesAsync(const DetectAIFakeFacesRequest& request, const DetectAIFakeFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetectAIFakeFacesRequest&;
    using Resp = DetectAIFakeFacesResponse;

    DoRequestAsync<Req, Resp>(
        "DetectAIFakeFaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::DetectAIFakeFacesOutcomeCallable FaceidClient::DetectAIFakeFacesCallable(const DetectAIFakeFacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetectAIFakeFacesOutcome>>();
    DetectAIFakeFacesAsync(
    request,
    [prom](
        const FaceidClient*,
        const DetectAIFakeFacesRequest&,
        DetectAIFakeFacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DetectReflectLivenessAndCompareRequest&;
    using Resp = DetectReflectLivenessAndCompareResponse;

    DoRequestAsync<Req, Resp>(
        "DetectReflectLivenessAndCompare", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::DetectReflectLivenessAndCompareOutcomeCallable FaceidClient::DetectReflectLivenessAndCompareCallable(const DetectReflectLivenessAndCompareRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetectReflectLivenessAndCompareOutcome>>();
    DetectReflectLivenessAndCompareAsync(
    request,
    [prom](
        const FaceidClient*,
        const DetectReflectLivenessAndCompareRequest&,
        DetectReflectLivenessAndCompareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GenerateReflectSequenceRequest&;
    using Resp = GenerateReflectSequenceResponse;

    DoRequestAsync<Req, Resp>(
        "GenerateReflectSequence", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::GenerateReflectSequenceOutcomeCallable FaceidClient::GenerateReflectSequenceCallable(const GenerateReflectSequenceRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenerateReflectSequenceOutcome>>();
    GenerateReflectSequenceAsync(
    request,
    [prom](
        const FaceidClient*,
        const GenerateReflectSequenceRequest&,
        GenerateReflectSequenceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::GetFaceIdResultIntlOutcome FaceidClient::GetFaceIdResultIntl(const GetFaceIdResultIntlRequest &request)
{
    auto outcome = MakeRequest(request, "GetFaceIdResultIntl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFaceIdResultIntlResponse rsp = GetFaceIdResultIntlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFaceIdResultIntlOutcome(rsp);
        else
            return GetFaceIdResultIntlOutcome(o.GetError());
    }
    else
    {
        return GetFaceIdResultIntlOutcome(outcome.GetError());
    }
}

void FaceidClient::GetFaceIdResultIntlAsync(const GetFaceIdResultIntlRequest& request, const GetFaceIdResultIntlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetFaceIdResultIntlRequest&;
    using Resp = GetFaceIdResultIntlResponse;

    DoRequestAsync<Req, Resp>(
        "GetFaceIdResultIntl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::GetFaceIdResultIntlOutcomeCallable FaceidClient::GetFaceIdResultIntlCallable(const GetFaceIdResultIntlRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFaceIdResultIntlOutcome>>();
    GetFaceIdResultIntlAsync(
    request,
    [prom](
        const FaceidClient*,
        const GetFaceIdResultIntlRequest&,
        GetFaceIdResultIntlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::GetFaceIdTokenIntlOutcome FaceidClient::GetFaceIdTokenIntl(const GetFaceIdTokenIntlRequest &request)
{
    auto outcome = MakeRequest(request, "GetFaceIdTokenIntl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFaceIdTokenIntlResponse rsp = GetFaceIdTokenIntlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFaceIdTokenIntlOutcome(rsp);
        else
            return GetFaceIdTokenIntlOutcome(o.GetError());
    }
    else
    {
        return GetFaceIdTokenIntlOutcome(outcome.GetError());
    }
}

void FaceidClient::GetFaceIdTokenIntlAsync(const GetFaceIdTokenIntlRequest& request, const GetFaceIdTokenIntlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetFaceIdTokenIntlRequest&;
    using Resp = GetFaceIdTokenIntlResponse;

    DoRequestAsync<Req, Resp>(
        "GetFaceIdTokenIntl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::GetFaceIdTokenIntlOutcomeCallable FaceidClient::GetFaceIdTokenIntlCallable(const GetFaceIdTokenIntlRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFaceIdTokenIntlOutcome>>();
    GetFaceIdTokenIntlAsync(
    request,
    [prom](
        const FaceidClient*,
        const GetFaceIdTokenIntlRequest&,
        GetFaceIdTokenIntlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetLivenessResultRequest&;
    using Resp = GetLivenessResultResponse;

    DoRequestAsync<Req, Resp>(
        "GetLivenessResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::GetLivenessResultOutcomeCallable FaceidClient::GetLivenessResultCallable(const GetLivenessResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLivenessResultOutcome>>();
    GetLivenessResultAsync(
    request,
    [prom](
        const FaceidClient*,
        const GetLivenessResultRequest&,
        GetLivenessResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetSdkVerificationResultRequest&;
    using Resp = GetSdkVerificationResultResponse;

    DoRequestAsync<Req, Resp>(
        "GetSdkVerificationResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::GetSdkVerificationResultOutcomeCallable FaceidClient::GetSdkVerificationResultCallable(const GetSdkVerificationResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetSdkVerificationResultOutcome>>();
    GetSdkVerificationResultAsync(
    request,
    [prom](
        const FaceidClient*,
        const GetSdkVerificationResultRequest&,
        GetSdkVerificationResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::GetWebVerificationResultIntlOutcome FaceidClient::GetWebVerificationResultIntl(const GetWebVerificationResultIntlRequest &request)
{
    auto outcome = MakeRequest(request, "GetWebVerificationResultIntl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetWebVerificationResultIntlResponse rsp = GetWebVerificationResultIntlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetWebVerificationResultIntlOutcome(rsp);
        else
            return GetWebVerificationResultIntlOutcome(o.GetError());
    }
    else
    {
        return GetWebVerificationResultIntlOutcome(outcome.GetError());
    }
}

void FaceidClient::GetWebVerificationResultIntlAsync(const GetWebVerificationResultIntlRequest& request, const GetWebVerificationResultIntlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetWebVerificationResultIntlRequest&;
    using Resp = GetWebVerificationResultIntlResponse;

    DoRequestAsync<Req, Resp>(
        "GetWebVerificationResultIntl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::GetWebVerificationResultIntlOutcomeCallable FaceidClient::GetWebVerificationResultIntlCallable(const GetWebVerificationResultIntlRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetWebVerificationResultIntlOutcome>>();
    GetWebVerificationResultIntlAsync(
    request,
    [prom](
        const FaceidClient*,
        const GetWebVerificationResultIntlRequest&,
        GetWebVerificationResultIntlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const LivenessCompareRequest&;
    using Resp = LivenessCompareResponse;

    DoRequestAsync<Req, Resp>(
        "LivenessCompare", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::LivenessCompareOutcomeCallable FaceidClient::LivenessCompareCallable(const LivenessCompareRequest &request)
{
    const auto prom = std::make_shared<std::promise<LivenessCompareOutcome>>();
    LivenessCompareAsync(
    request,
    [prom](
        const FaceidClient*,
        const LivenessCompareRequest&,
        LivenessCompareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const VideoLivenessCompareRequest&;
    using Resp = VideoLivenessCompareResponse;

    DoRequestAsync<Req, Resp>(
        "VideoLivenessCompare", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::VideoLivenessCompareOutcomeCallable FaceidClient::VideoLivenessCompareCallable(const VideoLivenessCompareRequest &request)
{
    const auto prom = std::make_shared<std::promise<VideoLivenessCompareOutcome>>();
    VideoLivenessCompareAsync(
    request,
    [prom](
        const FaceidClient*,
        const VideoLivenessCompareRequest&,
        VideoLivenessCompareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

