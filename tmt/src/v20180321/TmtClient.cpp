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

#include <tencentcloud/tmt/v20180321/TmtClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tmt::V20180321;
using namespace TencentCloud::Tmt::V20180321::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-03-21";
    const string ENDPOINT = "tmt.intl.tencentcloudapi.com";
}

TmtClient::TmtClient(const Credential &credential, const string &region) :
    TmtClient(credential, region, ClientProfile())
{
}

TmtClient::TmtClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TmtClient::TextTranslateOutcome TmtClient::TextTranslate(const TextTranslateRequest &request)
{
    auto outcome = MakeRequest(request, "TextTranslate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextTranslateResponse rsp = TextTranslateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextTranslateOutcome(rsp);
        else
            return TextTranslateOutcome(o.GetError());
    }
    else
    {
        return TextTranslateOutcome(outcome.GetError());
    }
}

void TmtClient::TextTranslateAsync(const TextTranslateRequest& request, const TextTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextTranslate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TmtClient::TextTranslateOutcomeCallable TmtClient::TextTranslateCallable(const TextTranslateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextTranslateOutcome()>>(
        [this, request]()
        {
            return this->TextTranslate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

