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

