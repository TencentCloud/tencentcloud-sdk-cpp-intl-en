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

#include <tencentcloud/dnspod/v20210323/DnspodClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dnspod::V20210323;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-03-23";
    const string ENDPOINT = "dnspod.intl.tencentcloudapi.com";
}

DnspodClient::DnspodClient(const Credential &credential, const string &region) :
    DnspodClient(credential, region, ClientProfile())
{
}

DnspodClient::DnspodClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DnspodClient::CreateDomainOutcome DnspodClient::CreateDomain(const CreateDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainResponse rsp = CreateDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainOutcome(rsp);
        else
            return CreateDomainOutcome(o.GetError());
    }
    else
    {
        return CreateDomainOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateDomainOutcomeCallable DnspodClient::CreateDomainCallable(const CreateDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateDomainAliasOutcome DnspodClient::CreateDomainAlias(const CreateDomainAliasRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainAliasResponse rsp = CreateDomainAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainAliasOutcome(rsp);
        else
            return CreateDomainAliasOutcome(o.GetError());
    }
    else
    {
        return CreateDomainAliasOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDomainAliasAsync(const CreateDomainAliasRequest& request, const CreateDomainAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomainAlias(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateDomainAliasOutcomeCallable DnspodClient::CreateDomainAliasCallable(const CreateDomainAliasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDomainAliasOutcome()>>(
        [this, request]()
        {
            return this->CreateDomainAlias(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateDomainBatchOutcome DnspodClient::CreateDomainBatch(const CreateDomainBatchRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainBatchResponse rsp = CreateDomainBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainBatchOutcome(rsp);
        else
            return CreateDomainBatchOutcome(o.GetError());
    }
    else
    {
        return CreateDomainBatchOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDomainBatchAsync(const CreateDomainBatchRequest& request, const CreateDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomainBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateDomainBatchOutcomeCallable DnspodClient::CreateDomainBatchCallable(const CreateDomainBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDomainBatchOutcome()>>(
        [this, request]()
        {
            return this->CreateDomainBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateDomainGroupOutcome DnspodClient::CreateDomainGroup(const CreateDomainGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainGroupResponse rsp = CreateDomainGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainGroupOutcome(rsp);
        else
            return CreateDomainGroupOutcome(o.GetError());
    }
    else
    {
        return CreateDomainGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDomainGroupAsync(const CreateDomainGroupRequest& request, const CreateDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomainGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateDomainGroupOutcomeCallable DnspodClient::CreateDomainGroupCallable(const CreateDomainGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDomainGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateDomainGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreatePackageOrderOutcome DnspodClient::CreatePackageOrder(const CreatePackageOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePackageOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePackageOrderResponse rsp = CreatePackageOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePackageOrderOutcome(rsp);
        else
            return CreatePackageOrderOutcome(o.GetError());
    }
    else
    {
        return CreatePackageOrderOutcome(outcome.GetError());
    }
}

void DnspodClient::CreatePackageOrderAsync(const CreatePackageOrderRequest& request, const CreatePackageOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePackageOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreatePackageOrderOutcomeCallable DnspodClient::CreatePackageOrderCallable(const CreatePackageOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePackageOrderOutcome()>>(
        [this, request]()
        {
            return this->CreatePackageOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateRecordOutcome DnspodClient::CreateRecord(const CreateRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecordResponse rsp = CreateRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecordOutcome(rsp);
        else
            return CreateRecordOutcome(o.GetError());
    }
    else
    {
        return CreateRecordOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateRecordAsync(const CreateRecordRequest& request, const CreateRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateRecordOutcomeCallable DnspodClient::CreateRecordCallable(const CreateRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRecordOutcome()>>(
        [this, request]()
        {
            return this->CreateRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateRecordBatchOutcome DnspodClient::CreateRecordBatch(const CreateRecordBatchRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecordBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecordBatchResponse rsp = CreateRecordBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecordBatchOutcome(rsp);
        else
            return CreateRecordBatchOutcome(o.GetError());
    }
    else
    {
        return CreateRecordBatchOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateRecordBatchAsync(const CreateRecordBatchRequest& request, const CreateRecordBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRecordBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateRecordBatchOutcomeCallable DnspodClient::CreateRecordBatchCallable(const CreateRecordBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRecordBatchOutcome()>>(
        [this, request]()
        {
            return this->CreateRecordBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateRecordGroupOutcome DnspodClient::CreateRecordGroup(const CreateRecordGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecordGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecordGroupResponse rsp = CreateRecordGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecordGroupOutcome(rsp);
        else
            return CreateRecordGroupOutcome(o.GetError());
    }
    else
    {
        return CreateRecordGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateRecordGroupAsync(const CreateRecordGroupRequest& request, const CreateRecordGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRecordGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateRecordGroupOutcomeCallable DnspodClient::CreateRecordGroupCallable(const CreateRecordGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRecordGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateRecordGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DeleteDomainOutcome DnspodClient::DeleteDomain(const DeleteDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainResponse rsp = DeleteDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainOutcome(rsp);
        else
            return DeleteDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DeleteDomainOutcomeCallable DnspodClient::DeleteDomainCallable(const DeleteDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDomainOutcome()>>(
        [this, request]()
        {
            return this->DeleteDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DeleteDomainAliasOutcome DnspodClient::DeleteDomainAlias(const DeleteDomainAliasRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomainAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainAliasResponse rsp = DeleteDomainAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainAliasOutcome(rsp);
        else
            return DeleteDomainAliasOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainAliasOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteDomainAliasAsync(const DeleteDomainAliasRequest& request, const DeleteDomainAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDomainAlias(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DeleteDomainAliasOutcomeCallable DnspodClient::DeleteDomainAliasCallable(const DeleteDomainAliasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDomainAliasOutcome()>>(
        [this, request]()
        {
            return this->DeleteDomainAlias(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DeleteDomainBatchOutcome DnspodClient::DeleteDomainBatch(const DeleteDomainBatchRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomainBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainBatchResponse rsp = DeleteDomainBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainBatchOutcome(rsp);
        else
            return DeleteDomainBatchOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainBatchOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteDomainBatchAsync(const DeleteDomainBatchRequest& request, const DeleteDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDomainBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DeleteDomainBatchOutcomeCallable DnspodClient::DeleteDomainBatchCallable(const DeleteDomainBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDomainBatchOutcome()>>(
        [this, request]()
        {
            return this->DeleteDomainBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DeletePackageOrderOutcome DnspodClient::DeletePackageOrder(const DeletePackageOrderRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePackageOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePackageOrderResponse rsp = DeletePackageOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePackageOrderOutcome(rsp);
        else
            return DeletePackageOrderOutcome(o.GetError());
    }
    else
    {
        return DeletePackageOrderOutcome(outcome.GetError());
    }
}

void DnspodClient::DeletePackageOrderAsync(const DeletePackageOrderRequest& request, const DeletePackageOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePackageOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DeletePackageOrderOutcomeCallable DnspodClient::DeletePackageOrderCallable(const DeletePackageOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePackageOrderOutcome()>>(
        [this, request]()
        {
            return this->DeletePackageOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DeleteRecordOutcome DnspodClient::DeleteRecord(const DeleteRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordResponse rsp = DeleteRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordOutcome(rsp);
        else
            return DeleteRecordOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteRecordAsync(const DeleteRecordRequest& request, const DeleteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DeleteRecordOutcomeCallable DnspodClient::DeleteRecordCallable(const DeleteRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRecordOutcome()>>(
        [this, request]()
        {
            return this->DeleteRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DeleteRecordGroupOutcome DnspodClient::DeleteRecordGroup(const DeleteRecordGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecordGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordGroupResponse rsp = DeleteRecordGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordGroupOutcome(rsp);
        else
            return DeleteRecordGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteRecordGroupAsync(const DeleteRecordGroupRequest& request, const DeleteRecordGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRecordGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DeleteRecordGroupOutcomeCallable DnspodClient::DeleteRecordGroupCallable(const DeleteRecordGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRecordGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteRecordGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DeleteShareDomainOutcome DnspodClient::DeleteShareDomain(const DeleteShareDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteShareDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteShareDomainResponse rsp = DeleteShareDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteShareDomainOutcome(rsp);
        else
            return DeleteShareDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteShareDomainOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteShareDomainAsync(const DeleteShareDomainRequest& request, const DeleteShareDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteShareDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DeleteShareDomainOutcomeCallable DnspodClient::DeleteShareDomainCallable(const DeleteShareDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteShareDomainOutcome()>>(
        [this, request]()
        {
            return this->DeleteShareDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainOutcome DnspodClient::DescribeDomain(const DescribeDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainResponse rsp = DescribeDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainOutcome(rsp);
        else
            return DescribeDomainOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainAsync(const DescribeDomainRequest& request, const DescribeDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainOutcomeCallable DnspodClient::DescribeDomainCallable(const DescribeDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainAliasListOutcome DnspodClient::DescribeDomainAliasList(const DescribeDomainAliasListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainAliasList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainAliasListResponse rsp = DescribeDomainAliasListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainAliasListOutcome(rsp);
        else
            return DescribeDomainAliasListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainAliasListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainAliasListAsync(const DescribeDomainAliasListRequest& request, const DescribeDomainAliasListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainAliasList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainAliasListOutcomeCallable DnspodClient::DescribeDomainAliasListCallable(const DescribeDomainAliasListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainAliasListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainAliasList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainGroupListOutcome DnspodClient::DescribeDomainGroupList(const DescribeDomainGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainGroupListResponse rsp = DescribeDomainGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainGroupListOutcome(rsp);
        else
            return DescribeDomainGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainGroupListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainGroupListAsync(const DescribeDomainGroupListRequest& request, const DescribeDomainGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainGroupListOutcomeCallable DnspodClient::DescribeDomainGroupListCallable(const DescribeDomainGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainListOutcome DnspodClient::DescribeDomainList(const DescribeDomainListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainListResponse rsp = DescribeDomainListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainListOutcome(rsp);
        else
            return DescribeDomainListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainListAsync(const DescribeDomainListRequest& request, const DescribeDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainListOutcomeCallable DnspodClient::DescribeDomainListCallable(const DescribeDomainListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainLogListOutcome DnspodClient::DescribeDomainLogList(const DescribeDomainLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainLogListResponse rsp = DescribeDomainLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainLogListOutcome(rsp);
        else
            return DescribeDomainLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainLogListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainLogListAsync(const DescribeDomainLogListRequest& request, const DescribeDomainLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainLogList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainLogListOutcomeCallable DnspodClient::DescribeDomainLogListCallable(const DescribeDomainLogListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainLogListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainLogList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainPurviewOutcome DnspodClient::DescribeDomainPurview(const DescribeDomainPurviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainPurview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainPurviewResponse rsp = DescribeDomainPurviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainPurviewOutcome(rsp);
        else
            return DescribeDomainPurviewOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainPurviewOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainPurviewAsync(const DescribeDomainPurviewRequest& request, const DescribeDomainPurviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainPurview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainPurviewOutcomeCallable DnspodClient::DescribeDomainPurviewCallable(const DescribeDomainPurviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainPurviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainPurview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainShareInfoOutcome DnspodClient::DescribeDomainShareInfo(const DescribeDomainShareInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainShareInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainShareInfoResponse rsp = DescribeDomainShareInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainShareInfoOutcome(rsp);
        else
            return DescribeDomainShareInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainShareInfoOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainShareInfoAsync(const DescribeDomainShareInfoRequest& request, const DescribeDomainShareInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainShareInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainShareInfoOutcomeCallable DnspodClient::DescribeDomainShareInfoCallable(const DescribeDomainShareInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainShareInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainShareInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeRecordOutcome DnspodClient::DescribeRecord(const DescribeRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordResponse rsp = DescribeRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordOutcome(rsp);
        else
            return DescribeRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordAsync(const DescribeRecordRequest& request, const DescribeRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeRecordOutcomeCallable DnspodClient::DescribeRecordCallable(const DescribeRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeRecordGroupListOutcome DnspodClient::DescribeRecordGroupList(const DescribeRecordGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordGroupListResponse rsp = DescribeRecordGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordGroupListOutcome(rsp);
        else
            return DescribeRecordGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordGroupListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordGroupListAsync(const DescribeRecordGroupListRequest& request, const DescribeRecordGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeRecordGroupListOutcomeCallable DnspodClient::DescribeRecordGroupListCallable(const DescribeRecordGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeRecordLineCategoryListOutcome DnspodClient::DescribeRecordLineCategoryList(const DescribeRecordLineCategoryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordLineCategoryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordLineCategoryListResponse rsp = DescribeRecordLineCategoryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordLineCategoryListOutcome(rsp);
        else
            return DescribeRecordLineCategoryListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordLineCategoryListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordLineCategoryListAsync(const DescribeRecordLineCategoryListRequest& request, const DescribeRecordLineCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordLineCategoryList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeRecordLineCategoryListOutcomeCallable DnspodClient::DescribeRecordLineCategoryListCallable(const DescribeRecordLineCategoryListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordLineCategoryListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordLineCategoryList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeRecordLineListOutcome DnspodClient::DescribeRecordLineList(const DescribeRecordLineListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordLineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordLineListResponse rsp = DescribeRecordLineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordLineListOutcome(rsp);
        else
            return DescribeRecordLineListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordLineListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordLineListAsync(const DescribeRecordLineListRequest& request, const DescribeRecordLineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordLineList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeRecordLineListOutcomeCallable DnspodClient::DescribeRecordLineListCallable(const DescribeRecordLineListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordLineListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordLineList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeRecordListOutcome DnspodClient::DescribeRecordList(const DescribeRecordListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordListResponse rsp = DescribeRecordListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordListOutcome(rsp);
        else
            return DescribeRecordListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordListAsync(const DescribeRecordListRequest& request, const DescribeRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeRecordListOutcomeCallable DnspodClient::DescribeRecordListCallable(const DescribeRecordListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeRecordTypeOutcome DnspodClient::DescribeRecordType(const DescribeRecordTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordTypeResponse rsp = DescribeRecordTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordTypeOutcome(rsp);
        else
            return DescribeRecordTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordTypeOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordTypeAsync(const DescribeRecordTypeRequest& request, const DescribeRecordTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeRecordTypeOutcomeCallable DnspodClient::DescribeRecordTypeCallable(const DescribeRecordTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeSubdomainAnalyticsOutcome DnspodClient::DescribeSubdomainAnalytics(const DescribeSubdomainAnalyticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubdomainAnalytics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubdomainAnalyticsResponse rsp = DescribeSubdomainAnalyticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubdomainAnalyticsOutcome(rsp);
        else
            return DescribeSubdomainAnalyticsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubdomainAnalyticsOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeSubdomainAnalyticsAsync(const DescribeSubdomainAnalyticsRequest& request, const DescribeSubdomainAnalyticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubdomainAnalytics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeSubdomainAnalyticsOutcomeCallable DnspodClient::DescribeSubdomainAnalyticsCallable(const DescribeSubdomainAnalyticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubdomainAnalyticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubdomainAnalytics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyDomainLockOutcome DnspodClient::ModifyDomainLock(const ModifyDomainLockRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainLock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainLockResponse rsp = ModifyDomainLockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainLockOutcome(rsp);
        else
            return ModifyDomainLockOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainLockOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainLockAsync(const ModifyDomainLockRequest& request, const ModifyDomainLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainLock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyDomainLockOutcomeCallable DnspodClient::ModifyDomainLockCallable(const ModifyDomainLockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainLockOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainLock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyDomainOwnerOutcome DnspodClient::ModifyDomainOwner(const ModifyDomainOwnerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainOwner");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainOwnerResponse rsp = ModifyDomainOwnerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainOwnerOutcome(rsp);
        else
            return ModifyDomainOwnerOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainOwnerOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainOwnerAsync(const ModifyDomainOwnerRequest& request, const ModifyDomainOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainOwner(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyDomainOwnerOutcomeCallable DnspodClient::ModifyDomainOwnerCallable(const ModifyDomainOwnerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainOwnerOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainOwner(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyDomainRemarkOutcome DnspodClient::ModifyDomainRemark(const ModifyDomainRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainRemarkResponse rsp = ModifyDomainRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainRemarkOutcome(rsp);
        else
            return ModifyDomainRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainRemarkOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainRemarkAsync(const ModifyDomainRemarkRequest& request, const ModifyDomainRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainRemark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyDomainRemarkOutcomeCallable DnspodClient::ModifyDomainRemarkCallable(const ModifyDomainRemarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainRemarkOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainRemark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyDomainStatusOutcome DnspodClient::ModifyDomainStatus(const ModifyDomainStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainStatusResponse rsp = ModifyDomainStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainStatusOutcome(rsp);
        else
            return ModifyDomainStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainStatusOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainStatusAsync(const ModifyDomainStatusRequest& request, const ModifyDomainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyDomainStatusOutcomeCallable DnspodClient::ModifyDomainStatusCallable(const ModifyDomainStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyDomainUnlockOutcome DnspodClient::ModifyDomainUnlock(const ModifyDomainUnlockRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainUnlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainUnlockResponse rsp = ModifyDomainUnlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainUnlockOutcome(rsp);
        else
            return ModifyDomainUnlockOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainUnlockOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainUnlockAsync(const ModifyDomainUnlockRequest& request, const ModifyDomainUnlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainUnlock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyDomainUnlockOutcomeCallable DnspodClient::ModifyDomainUnlockCallable(const ModifyDomainUnlockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainUnlockOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainUnlock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyRecordOutcome DnspodClient::ModifyRecord(const ModifyRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordResponse rsp = ModifyRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordOutcome(rsp);
        else
            return ModifyRecordOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordAsync(const ModifyRecordRequest& request, const ModifyRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyRecordOutcomeCallable DnspodClient::ModifyRecordCallable(const ModifyRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRecordOutcome()>>(
        [this, request]()
        {
            return this->ModifyRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyRecordBatchOutcome DnspodClient::ModifyRecordBatch(const ModifyRecordBatchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordBatchResponse rsp = ModifyRecordBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordBatchOutcome(rsp);
        else
            return ModifyRecordBatchOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordBatchOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordBatchAsync(const ModifyRecordBatchRequest& request, const ModifyRecordBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRecordBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyRecordBatchOutcomeCallable DnspodClient::ModifyRecordBatchCallable(const ModifyRecordBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRecordBatchOutcome()>>(
        [this, request]()
        {
            return this->ModifyRecordBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyRecordGroupOutcome DnspodClient::ModifyRecordGroup(const ModifyRecordGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordGroupResponse rsp = ModifyRecordGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordGroupOutcome(rsp);
        else
            return ModifyRecordGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordGroupAsync(const ModifyRecordGroupRequest& request, const ModifyRecordGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRecordGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyRecordGroupOutcomeCallable DnspodClient::ModifyRecordGroupCallable(const ModifyRecordGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRecordGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyRecordGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyRecordRemarkOutcome DnspodClient::ModifyRecordRemark(const ModifyRecordRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordRemarkResponse rsp = ModifyRecordRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordRemarkOutcome(rsp);
        else
            return ModifyRecordRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordRemarkOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordRemarkAsync(const ModifyRecordRemarkRequest& request, const ModifyRecordRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRecordRemark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyRecordRemarkOutcomeCallable DnspodClient::ModifyRecordRemarkCallable(const ModifyRecordRemarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRecordRemarkOutcome()>>(
        [this, request]()
        {
            return this->ModifyRecordRemark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyRecordStatusOutcome DnspodClient::ModifyRecordStatus(const ModifyRecordStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordStatusResponse rsp = ModifyRecordStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordStatusOutcome(rsp);
        else
            return ModifyRecordStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordStatusOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordStatusAsync(const ModifyRecordStatusRequest& request, const ModifyRecordStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRecordStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyRecordStatusOutcomeCallable DnspodClient::ModifyRecordStatusCallable(const ModifyRecordStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRecordStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyRecordStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyRecordToGroupOutcome DnspodClient::ModifyRecordToGroup(const ModifyRecordToGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordToGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordToGroupResponse rsp = ModifyRecordToGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordToGroupOutcome(rsp);
        else
            return ModifyRecordToGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordToGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordToGroupAsync(const ModifyRecordToGroupRequest& request, const ModifyRecordToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRecordToGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyRecordToGroupOutcomeCallable DnspodClient::ModifyRecordToGroupCallable(const ModifyRecordToGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRecordToGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyRecordToGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

