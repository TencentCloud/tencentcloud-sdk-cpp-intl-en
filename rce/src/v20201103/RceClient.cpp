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

#include <tencentcloud/rce/v20201103/RceClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Rce::V20201103;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-11-03";
    const string ENDPOINT = "rce.intl.tencentcloudapi.com";
}

RceClient::RceClient(const Credential &credential, const string &region) :
    RceClient(credential, region, ClientProfile())
{
}

RceClient::RceClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


RceClient::DescribeRiskAssessmentOutcome RceClient::DescribeRiskAssessment(const DescribeRiskAssessmentRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskAssessment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskAssessmentResponse rsp = DescribeRiskAssessmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskAssessmentOutcome(rsp);
        else
            return DescribeRiskAssessmentOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskAssessmentOutcome(outcome.GetError());
    }
}

void RceClient::DescribeRiskAssessmentAsync(const DescribeRiskAssessmentRequest& request, const DescribeRiskAssessmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskAssessmentRequest&;
    using Resp = DescribeRiskAssessmentResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskAssessment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RceClient::DescribeRiskAssessmentOutcomeCallable RceClient::DescribeRiskAssessmentCallable(const DescribeRiskAssessmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskAssessmentOutcome>>();
    DescribeRiskAssessmentAsync(
    request,
    [prom](
        const RceClient*,
        const DescribeRiskAssessmentRequest&,
        DescribeRiskAssessmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

