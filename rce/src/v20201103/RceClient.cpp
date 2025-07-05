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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskAssessment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RceClient::DescribeRiskAssessmentOutcomeCallable RceClient::DescribeRiskAssessmentCallable(const DescribeRiskAssessmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskAssessmentOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskAssessment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

