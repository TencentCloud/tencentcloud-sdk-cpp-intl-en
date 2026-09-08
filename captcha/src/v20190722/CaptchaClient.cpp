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

#include <tencentcloud/captcha/v20190722/CaptchaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Captcha::V20190722;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-07-22";
    const string ENDPOINT = "captcha.intl.tencentcloudapi.com";
}

CaptchaClient::CaptchaClient(const Credential &credential, const string &region) :
    CaptchaClient(credential, region, ClientProfile())
{
}

CaptchaClient::CaptchaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CaptchaClient::CreateCaptchaInfoInternationalOutcome CaptchaClient::CreateCaptchaInfoInternational(const CreateCaptchaInfoInternationalRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCaptchaInfoInternational");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCaptchaInfoInternationalResponse rsp = CreateCaptchaInfoInternationalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCaptchaInfoInternationalOutcome(rsp);
        else
            return CreateCaptchaInfoInternationalOutcome(o.GetError());
    }
    else
    {
        return CreateCaptchaInfoInternationalOutcome(outcome.GetError());
    }
}

void CaptchaClient::CreateCaptchaInfoInternationalAsync(const CreateCaptchaInfoInternationalRequest& request, const CreateCaptchaInfoInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCaptchaInfoInternationalRequest&;
    using Resp = CreateCaptchaInfoInternationalResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCaptchaInfoInternational", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::CreateCaptchaInfoInternationalOutcomeCallable CaptchaClient::CreateCaptchaInfoInternationalCallable(const CreateCaptchaInfoInternationalRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCaptchaInfoInternationalOutcome>>();
    CreateCaptchaInfoInternationalAsync(
    request,
    [prom](
        const CaptchaClient*,
        const CreateCaptchaInfoInternationalRequest&,
        CreateCaptchaInfoInternationalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::CreateIpWhiteListInternationalOutcome CaptchaClient::CreateIpWhiteListInternational(const CreateIpWhiteListInternationalRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIpWhiteListInternational");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIpWhiteListInternationalResponse rsp = CreateIpWhiteListInternationalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIpWhiteListInternationalOutcome(rsp);
        else
            return CreateIpWhiteListInternationalOutcome(o.GetError());
    }
    else
    {
        return CreateIpWhiteListInternationalOutcome(outcome.GetError());
    }
}

void CaptchaClient::CreateIpWhiteListInternationalAsync(const CreateIpWhiteListInternationalRequest& request, const CreateIpWhiteListInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIpWhiteListInternationalRequest&;
    using Resp = CreateIpWhiteListInternationalResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIpWhiteListInternational", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::CreateIpWhiteListInternationalOutcomeCallable CaptchaClient::CreateIpWhiteListInternationalCallable(const CreateIpWhiteListInternationalRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIpWhiteListInternationalOutcome>>();
    CreateIpWhiteListInternationalAsync(
    request,
    [prom](
        const CaptchaClient*,
        const CreateIpWhiteListInternationalRequest&,
        CreateIpWhiteListInternationalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::DeleteIpWhiteListInternationalOutcome CaptchaClient::DeleteIpWhiteListInternational(const DeleteIpWhiteListInternationalRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIpWhiteListInternational");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIpWhiteListInternationalResponse rsp = DeleteIpWhiteListInternationalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIpWhiteListInternationalOutcome(rsp);
        else
            return DeleteIpWhiteListInternationalOutcome(o.GetError());
    }
    else
    {
        return DeleteIpWhiteListInternationalOutcome(outcome.GetError());
    }
}

void CaptchaClient::DeleteIpWhiteListInternationalAsync(const DeleteIpWhiteListInternationalRequest& request, const DeleteIpWhiteListInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIpWhiteListInternationalRequest&;
    using Resp = DeleteIpWhiteListInternationalResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIpWhiteListInternational", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::DeleteIpWhiteListInternationalOutcomeCallable CaptchaClient::DeleteIpWhiteListInternationalCallable(const DeleteIpWhiteListInternationalRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIpWhiteListInternationalOutcome>>();
    DeleteIpWhiteListInternationalAsync(
    request,
    [prom](
        const CaptchaClient*,
        const DeleteIpWhiteListInternationalRequest&,
        DeleteIpWhiteListInternationalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::DescribeCaptchaInfoListInternationalOutcome CaptchaClient::DescribeCaptchaInfoListInternational(const DescribeCaptchaInfoListInternationalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaptchaInfoListInternational");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCaptchaInfoListInternationalResponse rsp = DescribeCaptchaInfoListInternationalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCaptchaInfoListInternationalOutcome(rsp);
        else
            return DescribeCaptchaInfoListInternationalOutcome(o.GetError());
    }
    else
    {
        return DescribeCaptchaInfoListInternationalOutcome(outcome.GetError());
    }
}

void CaptchaClient::DescribeCaptchaInfoListInternationalAsync(const DescribeCaptchaInfoListInternationalRequest& request, const DescribeCaptchaInfoListInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCaptchaInfoListInternationalRequest&;
    using Resp = DescribeCaptchaInfoListInternationalResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCaptchaInfoListInternational", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::DescribeCaptchaInfoListInternationalOutcomeCallable CaptchaClient::DescribeCaptchaInfoListInternationalCallable(const DescribeCaptchaInfoListInternationalRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCaptchaInfoListInternationalOutcome>>();
    DescribeCaptchaInfoListInternationalAsync(
    request,
    [prom](
        const CaptchaClient*,
        const DescribeCaptchaInfoListInternationalRequest&,
        DescribeCaptchaInfoListInternationalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::DescribeCaptchaResultOutcome CaptchaClient::DescribeCaptchaResult(const DescribeCaptchaResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaptchaResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCaptchaResultResponse rsp = DescribeCaptchaResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCaptchaResultOutcome(rsp);
        else
            return DescribeCaptchaResultOutcome(o.GetError());
    }
    else
    {
        return DescribeCaptchaResultOutcome(outcome.GetError());
    }
}

void CaptchaClient::DescribeCaptchaResultAsync(const DescribeCaptchaResultRequest& request, const DescribeCaptchaResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCaptchaResultRequest&;
    using Resp = DescribeCaptchaResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCaptchaResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::DescribeCaptchaResultOutcomeCallable CaptchaClient::DescribeCaptchaResultCallable(const DescribeCaptchaResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCaptchaResultOutcome>>();
    DescribeCaptchaResultAsync(
    request,
    [prom](
        const CaptchaClient*,
        const DescribeCaptchaResultRequest&,
        DescribeCaptchaResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::DescribeIpWhiteListInternationalOutcome CaptchaClient::DescribeIpWhiteListInternational(const DescribeIpWhiteListInternationalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpWhiteListInternational");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpWhiteListInternationalResponse rsp = DescribeIpWhiteListInternationalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpWhiteListInternationalOutcome(rsp);
        else
            return DescribeIpWhiteListInternationalOutcome(o.GetError());
    }
    else
    {
        return DescribeIpWhiteListInternationalOutcome(outcome.GetError());
    }
}

void CaptchaClient::DescribeIpWhiteListInternationalAsync(const DescribeIpWhiteListInternationalRequest& request, const DescribeIpWhiteListInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIpWhiteListInternationalRequest&;
    using Resp = DescribeIpWhiteListInternationalResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIpWhiteListInternational", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::DescribeIpWhiteListInternationalOutcomeCallable CaptchaClient::DescribeIpWhiteListInternationalCallable(const DescribeIpWhiteListInternationalRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIpWhiteListInternationalOutcome>>();
    DescribeIpWhiteListInternationalAsync(
    request,
    [prom](
        const CaptchaClient*,
        const DescribeIpWhiteListInternationalRequest&,
        DescribeIpWhiteListInternationalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::ModifyCaptchaInfoInternationalOutcome CaptchaClient::ModifyCaptchaInfoInternational(const ModifyCaptchaInfoInternationalRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCaptchaInfoInternational");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCaptchaInfoInternationalResponse rsp = ModifyCaptchaInfoInternationalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCaptchaInfoInternationalOutcome(rsp);
        else
            return ModifyCaptchaInfoInternationalOutcome(o.GetError());
    }
    else
    {
        return ModifyCaptchaInfoInternationalOutcome(outcome.GetError());
    }
}

void CaptchaClient::ModifyCaptchaInfoInternationalAsync(const ModifyCaptchaInfoInternationalRequest& request, const ModifyCaptchaInfoInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCaptchaInfoInternationalRequest&;
    using Resp = ModifyCaptchaInfoInternationalResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCaptchaInfoInternational", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::ModifyCaptchaInfoInternationalOutcomeCallable CaptchaClient::ModifyCaptchaInfoInternationalCallable(const ModifyCaptchaInfoInternationalRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCaptchaInfoInternationalOutcome>>();
    ModifyCaptchaInfoInternationalAsync(
    request,
    [prom](
        const CaptchaClient*,
        const ModifyCaptchaInfoInternationalRequest&,
        ModifyCaptchaInfoInternationalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::ModifyIpWhiteListInternationalOutcome CaptchaClient::ModifyIpWhiteListInternational(const ModifyIpWhiteListInternationalRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIpWhiteListInternational");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIpWhiteListInternationalResponse rsp = ModifyIpWhiteListInternationalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIpWhiteListInternationalOutcome(rsp);
        else
            return ModifyIpWhiteListInternationalOutcome(o.GetError());
    }
    else
    {
        return ModifyIpWhiteListInternationalOutcome(outcome.GetError());
    }
}

void CaptchaClient::ModifyIpWhiteListInternationalAsync(const ModifyIpWhiteListInternationalRequest& request, const ModifyIpWhiteListInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIpWhiteListInternationalRequest&;
    using Resp = ModifyIpWhiteListInternationalResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIpWhiteListInternational", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::ModifyIpWhiteListInternationalOutcomeCallable CaptchaClient::ModifyIpWhiteListInternationalCallable(const ModifyIpWhiteListInternationalRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIpWhiteListInternationalOutcome>>();
    ModifyIpWhiteListInternationalAsync(
    request,
    [prom](
        const CaptchaClient*,
        const ModifyIpWhiteListInternationalRequest&,
        ModifyIpWhiteListInternationalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CaptchaClient::RemoveCaptchaInfoInternationalOutcome CaptchaClient::RemoveCaptchaInfoInternational(const RemoveCaptchaInfoInternationalRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveCaptchaInfoInternational");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveCaptchaInfoInternationalResponse rsp = RemoveCaptchaInfoInternationalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveCaptchaInfoInternationalOutcome(rsp);
        else
            return RemoveCaptchaInfoInternationalOutcome(o.GetError());
    }
    else
    {
        return RemoveCaptchaInfoInternationalOutcome(outcome.GetError());
    }
}

void CaptchaClient::RemoveCaptchaInfoInternationalAsync(const RemoveCaptchaInfoInternationalRequest& request, const RemoveCaptchaInfoInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveCaptchaInfoInternationalRequest&;
    using Resp = RemoveCaptchaInfoInternationalResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveCaptchaInfoInternational", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CaptchaClient::RemoveCaptchaInfoInternationalOutcomeCallable CaptchaClient::RemoveCaptchaInfoInternationalCallable(const RemoveCaptchaInfoInternationalRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveCaptchaInfoInternationalOutcome>>();
    RemoveCaptchaInfoInternationalAsync(
    request,
    [prom](
        const CaptchaClient*,
        const RemoveCaptchaInfoInternationalRequest&,
        RemoveCaptchaInfoInternationalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

