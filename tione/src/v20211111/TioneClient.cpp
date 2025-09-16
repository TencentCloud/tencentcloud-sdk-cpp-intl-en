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

#include <tencentcloud/tione/v20211111/TioneClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tione::V20211111;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-11-11";
    const string ENDPOINT = "tione.intl.tencentcloudapi.com";
}

TioneClient::TioneClient(const Credential &credential, const string &region) :
    TioneClient(credential, region, ClientProfile())
{
}

TioneClient::TioneClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TioneClient::DescribeModelServiceGroupsOutcome TioneClient::DescribeModelServiceGroups(const DescribeModelServiceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelServiceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelServiceGroupsResponse rsp = DescribeModelServiceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelServiceGroupsOutcome(rsp);
        else
            return DescribeModelServiceGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeModelServiceGroupsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeModelServiceGroupsAsync(const DescribeModelServiceGroupsRequest& request, const DescribeModelServiceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModelServiceGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeModelServiceGroupsOutcomeCallable TioneClient::DescribeModelServiceGroupsCallable(const DescribeModelServiceGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelServiceGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeModelServiceGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

