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

#include <tencentcloud/emr/v20190103/EmrClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Emr::V20190103;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-01-03";
    const string ENDPOINT = "emr.intl.tencentcloudapi.com";
}

EmrClient::EmrClient(const Credential &credential, const string &region) :
    EmrClient(credential, region, ClientProfile())
{
}

EmrClient::EmrClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EmrClient::AddUsersForUserManagerOutcome EmrClient::AddUsersForUserManager(const AddUsersForUserManagerRequest &request)
{
    auto outcome = MakeRequest(request, "AddUsersForUserManager");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddUsersForUserManagerResponse rsp = AddUsersForUserManagerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddUsersForUserManagerOutcome(rsp);
        else
            return AddUsersForUserManagerOutcome(o.GetError());
    }
    else
    {
        return AddUsersForUserManagerOutcome(outcome.GetError());
    }
}

void EmrClient::AddUsersForUserManagerAsync(const AddUsersForUserManagerRequest& request, const AddUsersForUserManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddUsersForUserManager(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::AddUsersForUserManagerOutcomeCallable EmrClient::AddUsersForUserManagerCallable(const AddUsersForUserManagerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddUsersForUserManagerOutcome()>>(
        [this, request]()
        {
            return this->AddUsersForUserManager(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::CreateClusterOutcome EmrClient::CreateCluster(const CreateClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterResponse rsp = CreateClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterOutcome(rsp);
        else
            return CreateClusterOutcome(o.GetError());
    }
    else
    {
        return CreateClusterOutcome(outcome.GetError());
    }
}

void EmrClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::CreateClusterOutcomeCallable EmrClient::CreateClusterCallable(const CreateClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
        [this, request]()
        {
            return this->CreateCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::CreateInstanceOutcome EmrClient::CreateInstance(const CreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceResponse rsp = CreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceOutcome(rsp);
        else
            return CreateInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::CreateInstanceOutcomeCallable EmrClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::CreateSLInstanceOutcome EmrClient::CreateSLInstance(const CreateSLInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSLInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSLInstanceResponse rsp = CreateSLInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSLInstanceOutcome(rsp);
        else
            return CreateSLInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateSLInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::CreateSLInstanceAsync(const CreateSLInstanceRequest& request, const CreateSLInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSLInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::CreateSLInstanceOutcomeCallable EmrClient::CreateSLInstanceCallable(const CreateSLInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSLInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateSLInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeAutoScaleRecordsOutcome EmrClient::DescribeAutoScaleRecords(const DescribeAutoScaleRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoScaleRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoScaleRecordsResponse rsp = DescribeAutoScaleRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoScaleRecordsOutcome(rsp);
        else
            return DescribeAutoScaleRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoScaleRecordsOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeAutoScaleRecordsAsync(const DescribeAutoScaleRecordsRequest& request, const DescribeAutoScaleRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoScaleRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeAutoScaleRecordsOutcomeCallable EmrClient::DescribeAutoScaleRecordsCallable(const DescribeAutoScaleRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoScaleRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoScaleRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeClusterNodesOutcome EmrClient::DescribeClusterNodes(const DescribeClusterNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterNodesResponse rsp = DescribeClusterNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterNodesOutcome(rsp);
        else
            return DescribeClusterNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterNodesOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeClusterNodesAsync(const DescribeClusterNodesRequest& request, const DescribeClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeClusterNodesOutcomeCallable EmrClient::DescribeClusterNodesCallable(const DescribeClusterNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeEmrApplicationStaticsOutcome EmrClient::DescribeEmrApplicationStatics(const DescribeEmrApplicationStaticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEmrApplicationStatics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEmrApplicationStaticsResponse rsp = DescribeEmrApplicationStaticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEmrApplicationStaticsOutcome(rsp);
        else
            return DescribeEmrApplicationStaticsOutcome(o.GetError());
    }
    else
    {
        return DescribeEmrApplicationStaticsOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeEmrApplicationStaticsAsync(const DescribeEmrApplicationStaticsRequest& request, const DescribeEmrApplicationStaticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEmrApplicationStatics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeEmrApplicationStaticsOutcomeCallable EmrClient::DescribeEmrApplicationStaticsCallable(const DescribeEmrApplicationStaticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEmrApplicationStaticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEmrApplicationStatics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeHiveQueriesOutcome EmrClient::DescribeHiveQueries(const DescribeHiveQueriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHiveQueries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHiveQueriesResponse rsp = DescribeHiveQueriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHiveQueriesOutcome(rsp);
        else
            return DescribeHiveQueriesOutcome(o.GetError());
    }
    else
    {
        return DescribeHiveQueriesOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeHiveQueriesAsync(const DescribeHiveQueriesRequest& request, const DescribeHiveQueriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHiveQueries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeHiveQueriesOutcomeCallable EmrClient::DescribeHiveQueriesCallable(const DescribeHiveQueriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHiveQueriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeHiveQueries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeInstancesOutcome EmrClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeInstancesOutcomeCallable EmrClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeInstancesListOutcome EmrClient::DescribeInstancesList(const DescribeInstancesListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesListResponse rsp = DescribeInstancesListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesListOutcome(rsp);
        else
            return DescribeInstancesListOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesListOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeInstancesListAsync(const DescribeInstancesListRequest& request, const DescribeInstancesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeInstancesListOutcomeCallable EmrClient::DescribeInstancesListCallable(const DescribeInstancesListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesListOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeResourceScheduleOutcome EmrClient::DescribeResourceSchedule(const DescribeResourceScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceScheduleResponse rsp = DescribeResourceScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceScheduleOutcome(rsp);
        else
            return DescribeResourceScheduleOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceScheduleOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeResourceScheduleAsync(const DescribeResourceScheduleRequest& request, const DescribeResourceScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeResourceScheduleOutcomeCallable EmrClient::DescribeResourceScheduleCallable(const DescribeResourceScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceScheduleOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeSLInstanceOutcome EmrClient::DescribeSLInstance(const DescribeSLInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSLInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSLInstanceResponse rsp = DescribeSLInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSLInstanceOutcome(rsp);
        else
            return DescribeSLInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeSLInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeSLInstanceAsync(const DescribeSLInstanceRequest& request, const DescribeSLInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSLInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeSLInstanceOutcomeCallable EmrClient::DescribeSLInstanceCallable(const DescribeSLInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSLInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeSLInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeSLInstanceListOutcome EmrClient::DescribeSLInstanceList(const DescribeSLInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSLInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSLInstanceListResponse rsp = DescribeSLInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSLInstanceListOutcome(rsp);
        else
            return DescribeSLInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeSLInstanceListOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeSLInstanceListAsync(const DescribeSLInstanceListRequest& request, const DescribeSLInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSLInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeSLInstanceListOutcomeCallable EmrClient::DescribeSLInstanceListCallable(const DescribeSLInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSLInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSLInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeUsersForUserManagerOutcome EmrClient::DescribeUsersForUserManager(const DescribeUsersForUserManagerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsersForUserManager");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsersForUserManagerResponse rsp = DescribeUsersForUserManagerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsersForUserManagerOutcome(rsp);
        else
            return DescribeUsersForUserManagerOutcome(o.GetError());
    }
    else
    {
        return DescribeUsersForUserManagerOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeUsersForUserManagerAsync(const DescribeUsersForUserManagerRequest& request, const DescribeUsersForUserManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsersForUserManager(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeUsersForUserManagerOutcomeCallable EmrClient::DescribeUsersForUserManagerCallable(const DescribeUsersForUserManagerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUsersForUserManagerOutcome()>>(
        [this, request]()
        {
            return this->DescribeUsersForUserManager(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::InquiryPriceCreateInstanceOutcome EmrClient::InquiryPriceCreateInstance(const InquiryPriceCreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceCreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceCreateInstanceResponse rsp = InquiryPriceCreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceCreateInstanceOutcome(rsp);
        else
            return InquiryPriceCreateInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceCreateInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::InquiryPriceCreateInstanceAsync(const InquiryPriceCreateInstanceRequest& request, const InquiryPriceCreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceCreateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::InquiryPriceCreateInstanceOutcomeCallable EmrClient::InquiryPriceCreateInstanceCallable(const InquiryPriceCreateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceCreateInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceCreateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::InquiryPriceRenewInstanceOutcome EmrClient::InquiryPriceRenewInstance(const InquiryPriceRenewInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRenewInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRenewInstanceResponse rsp = InquiryPriceRenewInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRenewInstanceOutcome(rsp);
        else
            return InquiryPriceRenewInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRenewInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::InquiryPriceRenewInstanceAsync(const InquiryPriceRenewInstanceRequest& request, const InquiryPriceRenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceRenewInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::InquiryPriceRenewInstanceOutcomeCallable EmrClient::InquiryPriceRenewInstanceCallable(const InquiryPriceRenewInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceRenewInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceRenewInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::InquiryPriceScaleOutInstanceOutcome EmrClient::InquiryPriceScaleOutInstance(const InquiryPriceScaleOutInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceScaleOutInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceScaleOutInstanceResponse rsp = InquiryPriceScaleOutInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceScaleOutInstanceOutcome(rsp);
        else
            return InquiryPriceScaleOutInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceScaleOutInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::InquiryPriceScaleOutInstanceAsync(const InquiryPriceScaleOutInstanceRequest& request, const InquiryPriceScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceScaleOutInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::InquiryPriceScaleOutInstanceOutcomeCallable EmrClient::InquiryPriceScaleOutInstanceCallable(const InquiryPriceScaleOutInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceScaleOutInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceScaleOutInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::InquiryPriceUpdateInstanceOutcome EmrClient::InquiryPriceUpdateInstance(const InquiryPriceUpdateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceUpdateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceUpdateInstanceResponse rsp = InquiryPriceUpdateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceUpdateInstanceOutcome(rsp);
        else
            return InquiryPriceUpdateInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceUpdateInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::InquiryPriceUpdateInstanceAsync(const InquiryPriceUpdateInstanceRequest& request, const InquiryPriceUpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceUpdateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::InquiryPriceUpdateInstanceOutcomeCallable EmrClient::InquiryPriceUpdateInstanceCallable(const InquiryPriceUpdateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceUpdateInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceUpdateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyResourceScheduleConfigOutcome EmrClient::ModifyResourceScheduleConfig(const ModifyResourceScheduleConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourceScheduleConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourceScheduleConfigResponse rsp = ModifyResourceScheduleConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourceScheduleConfigOutcome(rsp);
        else
            return ModifyResourceScheduleConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyResourceScheduleConfigOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyResourceScheduleConfigAsync(const ModifyResourceScheduleConfigRequest& request, const ModifyResourceScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourceScheduleConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyResourceScheduleConfigOutcomeCallable EmrClient::ModifyResourceScheduleConfigCallable(const ModifyResourceScheduleConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourceScheduleConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourceScheduleConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyResourceSchedulerOutcome EmrClient::ModifyResourceScheduler(const ModifyResourceSchedulerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourceScheduler");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourceSchedulerResponse rsp = ModifyResourceSchedulerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourceSchedulerOutcome(rsp);
        else
            return ModifyResourceSchedulerOutcome(o.GetError());
    }
    else
    {
        return ModifyResourceSchedulerOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyResourceSchedulerAsync(const ModifyResourceSchedulerRequest& request, const ModifyResourceSchedulerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourceScheduler(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyResourceSchedulerOutcomeCallable EmrClient::ModifyResourceSchedulerCallable(const ModifyResourceSchedulerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourceSchedulerOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourceScheduler(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyResourcesTagsOutcome EmrClient::ModifyResourcesTags(const ModifyResourcesTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourcesTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourcesTagsResponse rsp = ModifyResourcesTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourcesTagsOutcome(rsp);
        else
            return ModifyResourcesTagsOutcome(o.GetError());
    }
    else
    {
        return ModifyResourcesTagsOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyResourcesTagsAsync(const ModifyResourcesTagsRequest& request, const ModifyResourcesTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourcesTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyResourcesTagsOutcomeCallable EmrClient::ModifyResourcesTagsCallable(const ModifyResourcesTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourcesTagsOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourcesTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifySLInstanceOutcome EmrClient::ModifySLInstance(const ModifySLInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySLInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySLInstanceResponse rsp = ModifySLInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySLInstanceOutcome(rsp);
        else
            return ModifySLInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifySLInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::ModifySLInstanceAsync(const ModifySLInstanceRequest& request, const ModifySLInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySLInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifySLInstanceOutcomeCallable EmrClient::ModifySLInstanceCallable(const ModifySLInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySLInstanceOutcome()>>(
        [this, request]()
        {
            return this->ModifySLInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifySLInstanceBasicOutcome EmrClient::ModifySLInstanceBasic(const ModifySLInstanceBasicRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySLInstanceBasic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySLInstanceBasicResponse rsp = ModifySLInstanceBasicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySLInstanceBasicOutcome(rsp);
        else
            return ModifySLInstanceBasicOutcome(o.GetError());
    }
    else
    {
        return ModifySLInstanceBasicOutcome(outcome.GetError());
    }
}

void EmrClient::ModifySLInstanceBasicAsync(const ModifySLInstanceBasicRequest& request, const ModifySLInstanceBasicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySLInstanceBasic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifySLInstanceBasicOutcomeCallable EmrClient::ModifySLInstanceBasicCallable(const ModifySLInstanceBasicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySLInstanceBasicOutcome()>>(
        [this, request]()
        {
            return this->ModifySLInstanceBasic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyUserManagerPwdOutcome EmrClient::ModifyUserManagerPwd(const ModifyUserManagerPwdRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserManagerPwd");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserManagerPwdResponse rsp = ModifyUserManagerPwdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserManagerPwdOutcome(rsp);
        else
            return ModifyUserManagerPwdOutcome(o.GetError());
    }
    else
    {
        return ModifyUserManagerPwdOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyUserManagerPwdAsync(const ModifyUserManagerPwdRequest& request, const ModifyUserManagerPwdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserManagerPwd(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyUserManagerPwdOutcomeCallable EmrClient::ModifyUserManagerPwdCallable(const ModifyUserManagerPwdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserManagerPwdOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserManagerPwd(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ScaleOutClusterOutcome EmrClient::ScaleOutCluster(const ScaleOutClusterRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleOutCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleOutClusterResponse rsp = ScaleOutClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleOutClusterOutcome(rsp);
        else
            return ScaleOutClusterOutcome(o.GetError());
    }
    else
    {
        return ScaleOutClusterOutcome(outcome.GetError());
    }
}

void EmrClient::ScaleOutClusterAsync(const ScaleOutClusterRequest& request, const ScaleOutClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScaleOutCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ScaleOutClusterOutcomeCallable EmrClient::ScaleOutClusterCallable(const ScaleOutClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScaleOutClusterOutcome()>>(
        [this, request]()
        {
            return this->ScaleOutCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ScaleOutInstanceOutcome EmrClient::ScaleOutInstance(const ScaleOutInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleOutInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleOutInstanceResponse rsp = ScaleOutInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleOutInstanceOutcome(rsp);
        else
            return ScaleOutInstanceOutcome(o.GetError());
    }
    else
    {
        return ScaleOutInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::ScaleOutInstanceAsync(const ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScaleOutInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ScaleOutInstanceOutcomeCallable EmrClient::ScaleOutInstanceCallable(const ScaleOutInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScaleOutInstanceOutcome()>>(
        [this, request]()
        {
            return this->ScaleOutInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::StartStopServiceOrMonitorOutcome EmrClient::StartStopServiceOrMonitor(const StartStopServiceOrMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "StartStopServiceOrMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartStopServiceOrMonitorResponse rsp = StartStopServiceOrMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartStopServiceOrMonitorOutcome(rsp);
        else
            return StartStopServiceOrMonitorOutcome(o.GetError());
    }
    else
    {
        return StartStopServiceOrMonitorOutcome(outcome.GetError());
    }
}

void EmrClient::StartStopServiceOrMonitorAsync(const StartStopServiceOrMonitorRequest& request, const StartStopServiceOrMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartStopServiceOrMonitor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::StartStopServiceOrMonitorOutcomeCallable EmrClient::StartStopServiceOrMonitorCallable(const StartStopServiceOrMonitorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartStopServiceOrMonitorOutcome()>>(
        [this, request]()
        {
            return this->StartStopServiceOrMonitor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::TerminateClusterNodesOutcome EmrClient::TerminateClusterNodes(const TerminateClusterNodesRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateClusterNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateClusterNodesResponse rsp = TerminateClusterNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateClusterNodesOutcome(rsp);
        else
            return TerminateClusterNodesOutcome(o.GetError());
    }
    else
    {
        return TerminateClusterNodesOutcome(outcome.GetError());
    }
}

void EmrClient::TerminateClusterNodesAsync(const TerminateClusterNodesRequest& request, const TerminateClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateClusterNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::TerminateClusterNodesOutcomeCallable EmrClient::TerminateClusterNodesCallable(const TerminateClusterNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateClusterNodesOutcome()>>(
        [this, request]()
        {
            return this->TerminateClusterNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::TerminateInstanceOutcome EmrClient::TerminateInstance(const TerminateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateInstanceResponse rsp = TerminateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateInstanceOutcome(rsp);
        else
            return TerminateInstanceOutcome(o.GetError());
    }
    else
    {
        return TerminateInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::TerminateInstanceAsync(const TerminateInstanceRequest& request, const TerminateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::TerminateInstanceOutcomeCallable EmrClient::TerminateInstanceCallable(const TerminateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateInstanceOutcome()>>(
        [this, request]()
        {
            return this->TerminateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::TerminateSLInstanceOutcome EmrClient::TerminateSLInstance(const TerminateSLInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateSLInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateSLInstanceResponse rsp = TerminateSLInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateSLInstanceOutcome(rsp);
        else
            return TerminateSLInstanceOutcome(o.GetError());
    }
    else
    {
        return TerminateSLInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::TerminateSLInstanceAsync(const TerminateSLInstanceRequest& request, const TerminateSLInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateSLInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::TerminateSLInstanceOutcomeCallable EmrClient::TerminateSLInstanceCallable(const TerminateSLInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateSLInstanceOutcome()>>(
        [this, request]()
        {
            return this->TerminateSLInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::TerminateTasksOutcome EmrClient::TerminateTasks(const TerminateTasksRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateTasksResponse rsp = TerminateTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateTasksOutcome(rsp);
        else
            return TerminateTasksOutcome(o.GetError());
    }
    else
    {
        return TerminateTasksOutcome(outcome.GetError());
    }
}

void EmrClient::TerminateTasksAsync(const TerminateTasksRequest& request, const TerminateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::TerminateTasksOutcomeCallable EmrClient::TerminateTasksCallable(const TerminateTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateTasksOutcome()>>(
        [this, request]()
        {
            return this->TerminateTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

