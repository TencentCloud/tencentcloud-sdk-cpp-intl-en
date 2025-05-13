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

#include <tencentcloud/tbaas/v20180416/TbaasClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tbaas::V20180416;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-16";
    const string ENDPOINT = "tbaas.intl.tencentcloudapi.com";
}

TbaasClient::TbaasClient(const Credential &credential, const string &region) :
    TbaasClient(credential, region, ClientProfile())
{
}

TbaasClient::TbaasClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TbaasClient::DescribeFabricBlockOutcome TbaasClient::DescribeFabricBlock(const DescribeFabricBlockRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFabricBlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFabricBlockResponse rsp = DescribeFabricBlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFabricBlockOutcome(rsp);
        else
            return DescribeFabricBlockOutcome(o.GetError());
    }
    else
    {
        return DescribeFabricBlockOutcome(outcome.GetError());
    }
}

void TbaasClient::DescribeFabricBlockAsync(const DescribeFabricBlockRequest& request, const DescribeFabricBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFabricBlock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::DescribeFabricBlockOutcomeCallable TbaasClient::DescribeFabricBlockCallable(const DescribeFabricBlockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFabricBlockOutcome()>>(
        [this, request]()
        {
            return this->DescribeFabricBlock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::DescribeFabricTransactionOutcome TbaasClient::DescribeFabricTransaction(const DescribeFabricTransactionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFabricTransaction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFabricTransactionResponse rsp = DescribeFabricTransactionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFabricTransactionOutcome(rsp);
        else
            return DescribeFabricTransactionOutcome(o.GetError());
    }
    else
    {
        return DescribeFabricTransactionOutcome(outcome.GetError());
    }
}

void TbaasClient::DescribeFabricTransactionAsync(const DescribeFabricTransactionRequest& request, const DescribeFabricTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFabricTransaction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::DescribeFabricTransactionOutcomeCallable TbaasClient::DescribeFabricTransactionCallable(const DescribeFabricTransactionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFabricTransactionOutcome()>>(
        [this, request]()
        {
            return this->DescribeFabricTransaction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::InvokeFabricChaincodeOutcome TbaasClient::InvokeFabricChaincode(const InvokeFabricChaincodeRequest &request)
{
    auto outcome = MakeRequest(request, "InvokeFabricChaincode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeFabricChaincodeResponse rsp = InvokeFabricChaincodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeFabricChaincodeOutcome(rsp);
        else
            return InvokeFabricChaincodeOutcome(o.GetError());
    }
    else
    {
        return InvokeFabricChaincodeOutcome(outcome.GetError());
    }
}

void TbaasClient::InvokeFabricChaincodeAsync(const InvokeFabricChaincodeRequest& request, const InvokeFabricChaincodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InvokeFabricChaincode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::InvokeFabricChaincodeOutcomeCallable TbaasClient::InvokeFabricChaincodeCallable(const InvokeFabricChaincodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InvokeFabricChaincodeOutcome()>>(
        [this, request]()
        {
            return this->InvokeFabricChaincode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbaasClient::QueryFabricChaincodeOutcome TbaasClient::QueryFabricChaincode(const QueryFabricChaincodeRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFabricChaincode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFabricChaincodeResponse rsp = QueryFabricChaincodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFabricChaincodeOutcome(rsp);
        else
            return QueryFabricChaincodeOutcome(o.GetError());
    }
    else
    {
        return QueryFabricChaincodeOutcome(outcome.GetError());
    }
}

void TbaasClient::QueryFabricChaincodeAsync(const QueryFabricChaincodeRequest& request, const QueryFabricChaincodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryFabricChaincode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbaasClient::QueryFabricChaincodeOutcomeCallable TbaasClient::QueryFabricChaincodeCallable(const QueryFabricChaincodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryFabricChaincodeOutcome()>>(
        [this, request]()
        {
            return this->QueryFabricChaincode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

