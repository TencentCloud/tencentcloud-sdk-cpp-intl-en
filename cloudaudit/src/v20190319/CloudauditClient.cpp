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

#include <tencentcloud/cloudaudit/v20190319/CloudauditClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cloudaudit::V20190319;
using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-03-19";
    const string ENDPOINT = "cloudaudit.tencentcloudapi.com";
}

CloudauditClient::CloudauditClient(const Credential &credential, const string &region) :
    CloudauditClient(credential, region, ClientProfile())
{
}

CloudauditClient::CloudauditClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CloudauditClient::DescribeAuditTracksOutcome CloudauditClient::DescribeAuditTracks(const DescribeAuditTracksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditTracks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditTracksResponse rsp = DescribeAuditTracksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditTracksOutcome(rsp);
        else
            return DescribeAuditTracksOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditTracksOutcome(outcome.GetError());
    }
}

void CloudauditClient::DescribeAuditTracksAsync(const DescribeAuditTracksRequest& request, const DescribeAuditTracksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditTracks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::DescribeAuditTracksOutcomeCallable CloudauditClient::DescribeAuditTracksCallable(const DescribeAuditTracksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuditTracksOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuditTracks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::DescribeEventsOutcome CloudauditClient::DescribeEvents(const DescribeEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventsResponse rsp = DescribeEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventsOutcome(rsp);
        else
            return DescribeEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeEventsOutcome(outcome.GetError());
    }
}

void CloudauditClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::DescribeEventsOutcomeCallable CloudauditClient::DescribeEventsCallable(const DescribeEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

