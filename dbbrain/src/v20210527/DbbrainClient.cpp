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

#include <tencentcloud/dbbrain/v20210527/DbbrainClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dbbrain::V20210527;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-05-27";
    const string ENDPOINT = "dbbrain.tencentcloudapi.com";
}

DbbrainClient::DbbrainClient(const Credential &credential, const string &region) :
    DbbrainClient(credential, region, ClientProfile())
{
}

DbbrainClient::DbbrainClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DbbrainClient::CreateProxySessionKillTaskOutcome DbbrainClient::CreateProxySessionKillTask(const CreateProxySessionKillTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProxySessionKillTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProxySessionKillTaskResponse rsp = CreateProxySessionKillTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProxySessionKillTaskOutcome(rsp);
        else
            return CreateProxySessionKillTaskOutcome(o.GetError());
    }
    else
    {
        return CreateProxySessionKillTaskOutcome(outcome.GetError());
    }
}

void DbbrainClient::CreateProxySessionKillTaskAsync(const CreateProxySessionKillTaskRequest& request, const CreateProxySessionKillTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProxySessionKillTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::CreateProxySessionKillTaskOutcomeCallable DbbrainClient::CreateProxySessionKillTaskCallable(const CreateProxySessionKillTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProxySessionKillTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateProxySessionKillTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDBDiagEventsOutcome DbbrainClient::DescribeDBDiagEvents(const DescribeDBDiagEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBDiagEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBDiagEventsResponse rsp = DescribeDBDiagEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBDiagEventsOutcome(rsp);
        else
            return DescribeDBDiagEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBDiagEventsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDBDiagEventsAsync(const DescribeDBDiagEventsRequest& request, const DescribeDBDiagEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBDiagEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDBDiagEventsOutcomeCallable DbbrainClient::DescribeDBDiagEventsCallable(const DescribeDBDiagEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBDiagEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBDiagEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeDiagDBInstancesOutcome DbbrainClient::DescribeDiagDBInstances(const DescribeDiagDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiagDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiagDBInstancesResponse rsp = DescribeDiagDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiagDBInstancesOutcome(rsp);
        else
            return DescribeDiagDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeDiagDBInstancesOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeDiagDBInstancesAsync(const DescribeDiagDBInstancesRequest& request, const DescribeDiagDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDiagDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeDiagDBInstancesOutcomeCallable DbbrainClient::DescribeDiagDBInstancesCallable(const DescribeDiagDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDiagDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDiagDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeMySqlProcessListOutcome DbbrainClient::DescribeMySqlProcessList(const DescribeMySqlProcessListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMySqlProcessList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMySqlProcessListResponse rsp = DescribeMySqlProcessListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMySqlProcessListOutcome(rsp);
        else
            return DescribeMySqlProcessListOutcome(o.GetError());
    }
    else
    {
        return DescribeMySqlProcessListOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeMySqlProcessListAsync(const DescribeMySqlProcessListRequest& request, const DescribeMySqlProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMySqlProcessList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeMySqlProcessListOutcomeCallable DbbrainClient::DescribeMySqlProcessListCallable(const DescribeMySqlProcessListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMySqlProcessListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMySqlProcessList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeProxySessionKillTasksOutcome DbbrainClient::DescribeProxySessionKillTasks(const DescribeProxySessionKillTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxySessionKillTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxySessionKillTasksResponse rsp = DescribeProxySessionKillTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxySessionKillTasksOutcome(rsp);
        else
            return DescribeProxySessionKillTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeProxySessionKillTasksOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeProxySessionKillTasksAsync(const DescribeProxySessionKillTasksRequest& request, const DescribeProxySessionKillTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProxySessionKillTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeProxySessionKillTasksOutcomeCallable DbbrainClient::DescribeProxySessionKillTasksCallable(const DescribeProxySessionKillTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProxySessionKillTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeProxySessionKillTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeRedisTopKeyPrefixListOutcome DbbrainClient::DescribeRedisTopKeyPrefixList(const DescribeRedisTopKeyPrefixListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRedisTopKeyPrefixList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRedisTopKeyPrefixListResponse rsp = DescribeRedisTopKeyPrefixListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRedisTopKeyPrefixListOutcome(rsp);
        else
            return DescribeRedisTopKeyPrefixListOutcome(o.GetError());
    }
    else
    {
        return DescribeRedisTopKeyPrefixListOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeRedisTopKeyPrefixListAsync(const DescribeRedisTopKeyPrefixListRequest& request, const DescribeRedisTopKeyPrefixListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRedisTopKeyPrefixList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeRedisTopKeyPrefixListOutcomeCallable DbbrainClient::DescribeRedisTopKeyPrefixListCallable(const DescribeRedisTopKeyPrefixListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRedisTopKeyPrefixListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRedisTopKeyPrefixList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeSlowLogUserHostStatsOutcome DbbrainClient::DescribeSlowLogUserHostStats(const DescribeSlowLogUserHostStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogUserHostStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogUserHostStatsResponse rsp = DescribeSlowLogUserHostStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogUserHostStatsOutcome(rsp);
        else
            return DescribeSlowLogUserHostStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogUserHostStatsOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeSlowLogUserHostStatsAsync(const DescribeSlowLogUserHostStatsRequest& request, const DescribeSlowLogUserHostStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowLogUserHostStats(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeSlowLogUserHostStatsOutcomeCallable DbbrainClient::DescribeSlowLogUserHostStatsCallable(const DescribeSlowLogUserHostStatsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowLogUserHostStatsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowLogUserHostStats(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeTopSpaceSchemasOutcome DbbrainClient::DescribeTopSpaceSchemas(const DescribeTopSpaceSchemasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopSpaceSchemas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopSpaceSchemasResponse rsp = DescribeTopSpaceSchemasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopSpaceSchemasOutcome(rsp);
        else
            return DescribeTopSpaceSchemasOutcome(o.GetError());
    }
    else
    {
        return DescribeTopSpaceSchemasOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeTopSpaceSchemasAsync(const DescribeTopSpaceSchemasRequest& request, const DescribeTopSpaceSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopSpaceSchemas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeTopSpaceSchemasOutcomeCallable DbbrainClient::DescribeTopSpaceSchemasCallable(const DescribeTopSpaceSchemasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopSpaceSchemasOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopSpaceSchemas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DbbrainClient::DescribeUserSqlAdviceOutcome DbbrainClient::DescribeUserSqlAdvice(const DescribeUserSqlAdviceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserSqlAdvice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserSqlAdviceResponse rsp = DescribeUserSqlAdviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserSqlAdviceOutcome(rsp);
        else
            return DescribeUserSqlAdviceOutcome(o.GetError());
    }
    else
    {
        return DescribeUserSqlAdviceOutcome(outcome.GetError());
    }
}

void DbbrainClient::DescribeUserSqlAdviceAsync(const DescribeUserSqlAdviceRequest& request, const DescribeUserSqlAdviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserSqlAdvice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DbbrainClient::DescribeUserSqlAdviceOutcomeCallable DbbrainClient::DescribeUserSqlAdviceCallable(const DescribeUserSqlAdviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserSqlAdviceOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserSqlAdvice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

