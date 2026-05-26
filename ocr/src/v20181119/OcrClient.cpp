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

