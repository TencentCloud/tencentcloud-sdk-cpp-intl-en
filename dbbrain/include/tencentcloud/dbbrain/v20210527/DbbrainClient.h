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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_DBBRAINCLIENT_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_DBBRAINCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateProxySessionKillTaskRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateProxySessionKillTaskResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBDiagEventsRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBDiagEventsResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDiagDBInstancesRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDiagDBInstancesResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeMySqlProcessListRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeMySqlProcessListResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeProxySessionKillTasksRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeProxySessionKillTasksResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeRedisTopKeyPrefixListRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeRedisTopKeyPrefixListResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogUserHostStatsRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogUserHostStatsResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceSchemasRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceSchemasResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeUserSqlAdviceRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeUserSqlAdviceResponse.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            class DbbrainClient : public AbstractClient
            {
            public:
                DbbrainClient(const Credential &credential, const std::string &region);
                DbbrainClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateProxySessionKillTaskResponse> CreateProxySessionKillTaskOutcome;
                typedef std::future<CreateProxySessionKillTaskOutcome> CreateProxySessionKillTaskOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateProxySessionKillTaskRequest&, CreateProxySessionKillTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProxySessionKillTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBDiagEventsResponse> DescribeDBDiagEventsOutcome;
                typedef std::future<DescribeDBDiagEventsOutcome> DescribeDBDiagEventsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeDBDiagEventsRequest&, DescribeDBDiagEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBDiagEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiagDBInstancesResponse> DescribeDiagDBInstancesOutcome;
                typedef std::future<DescribeDiagDBInstancesOutcome> DescribeDiagDBInstancesOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeDiagDBInstancesRequest&, DescribeDiagDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMySqlProcessListResponse> DescribeMySqlProcessListOutcome;
                typedef std::future<DescribeMySqlProcessListOutcome> DescribeMySqlProcessListOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeMySqlProcessListRequest&, DescribeMySqlProcessListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMySqlProcessListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxySessionKillTasksResponse> DescribeProxySessionKillTasksOutcome;
                typedef std::future<DescribeProxySessionKillTasksOutcome> DescribeProxySessionKillTasksOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeProxySessionKillTasksRequest&, DescribeProxySessionKillTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxySessionKillTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRedisTopKeyPrefixListResponse> DescribeRedisTopKeyPrefixListOutcome;
                typedef std::future<DescribeRedisTopKeyPrefixListOutcome> DescribeRedisTopKeyPrefixListOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeRedisTopKeyPrefixListRequest&, DescribeRedisTopKeyPrefixListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRedisTopKeyPrefixListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogUserHostStatsResponse> DescribeSlowLogUserHostStatsOutcome;
                typedef std::future<DescribeSlowLogUserHostStatsOutcome> DescribeSlowLogUserHostStatsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSlowLogUserHostStatsRequest&, DescribeSlowLogUserHostStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogUserHostStatsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopSpaceSchemasResponse> DescribeTopSpaceSchemasOutcome;
                typedef std::future<DescribeTopSpaceSchemasOutcome> DescribeTopSpaceSchemasOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeTopSpaceSchemasRequest&, DescribeTopSpaceSchemasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopSpaceSchemasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserSqlAdviceResponse> DescribeUserSqlAdviceOutcome;
                typedef std::future<DescribeUserSqlAdviceOutcome> DescribeUserSqlAdviceOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeUserSqlAdviceRequest&, DescribeUserSqlAdviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserSqlAdviceAsyncHandler;



                /**
                 *This API is used to create an async task of killing all proxy node connection sessions and is currently supported only for Redis. The async task ID is the returned value, which can be passed to the API `DescribeProxySessionKillTasks` as a parameter to query the execution status of the session killing task.
                 * @param req CreateProxySessionKillTaskRequest
                 * @return CreateProxySessionKillTaskOutcome
                 */
                CreateProxySessionKillTaskOutcome CreateProxySessionKillTask(const Model::CreateProxySessionKillTaskRequest &request);
                void CreateProxySessionKillTaskAsync(const Model::CreateProxySessionKillTaskRequest& request, const CreateProxySessionKillTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProxySessionKillTaskOutcomeCallable CreateProxySessionKillTaskCallable(const Model::CreateProxySessionKillTaskRequest& request);

                /**
                 *This API is used to obtain the diagnosis event list in a specified time period by risk level, instance ID, etc.
                 * @param req DescribeDBDiagEventsRequest
                 * @return DescribeDBDiagEventsOutcome
                 */
                DescribeDBDiagEventsOutcome DescribeDBDiagEvents(const Model::DescribeDBDiagEventsRequest &request);
                void DescribeDBDiagEventsAsync(const Model::DescribeDBDiagEventsRequest& request, const DescribeDBDiagEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBDiagEventsOutcomeCallable DescribeDBDiagEventsCallable(const Model::DescribeDBDiagEventsRequest& request);

                /**
                 *This API is used to get the instance information list. Please always select Guangzhou for `Region`.
                 * @param req DescribeDiagDBInstancesRequest
                 * @return DescribeDiagDBInstancesOutcome
                 */
                DescribeDiagDBInstancesOutcome DescribeDiagDBInstances(const Model::DescribeDiagDBInstancesRequest &request);
                void DescribeDiagDBInstancesAsync(const Model::DescribeDiagDBInstancesRequest& request, const DescribeDiagDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiagDBInstancesOutcomeCallable DescribeDiagDBInstancesCallable(const Model::DescribeDiagDBInstancesRequest& request);

                /**
                 *This API is used to query the real-time thread list of a relational database.
                 * @param req DescribeMySqlProcessListRequest
                 * @return DescribeMySqlProcessListOutcome
                 */
                DescribeMySqlProcessListOutcome DescribeMySqlProcessList(const Model::DescribeMySqlProcessListRequest &request);
                void DescribeMySqlProcessListAsync(const Model::DescribeMySqlProcessListRequest& request, const DescribeMySqlProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMySqlProcessListOutcomeCallable DescribeMySqlProcessListCallable(const Model::DescribeMySqlProcessListRequest& request);

                /**
                 *This API is used to query the result of the session killing task executed by the Redis proxy node. The async task ID (an input parameter) is obtained after the API `CreateProxySessionKillTask` is successfully called. Currently, the only valid value of `product` is `redis`.
                 * @param req DescribeProxySessionKillTasksRequest
                 * @return DescribeProxySessionKillTasksOutcome
                 */
                DescribeProxySessionKillTasksOutcome DescribeProxySessionKillTasks(const Model::DescribeProxySessionKillTasksRequest &request);
                void DescribeProxySessionKillTasksAsync(const Model::DescribeProxySessionKillTasksRequest& request, const DescribeProxySessionKillTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxySessionKillTasksOutcomeCallable DescribeProxySessionKillTasksCallable(const Model::DescribeProxySessionKillTasksRequest& request);

                /**
                 *This API is used to query the list of top key prefixes for Redis instances.
                 * @param req DescribeRedisTopKeyPrefixListRequest
                 * @return DescribeRedisTopKeyPrefixListOutcome
                 */
                DescribeRedisTopKeyPrefixListOutcome DescribeRedisTopKeyPrefixList(const Model::DescribeRedisTopKeyPrefixListRequest &request);
                void DescribeRedisTopKeyPrefixListAsync(const Model::DescribeRedisTopKeyPrefixListRequest& request, const DescribeRedisTopKeyPrefixListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRedisTopKeyPrefixListOutcomeCallable DescribeRedisTopKeyPrefixListCallable(const Model::DescribeRedisTopKeyPrefixListRequest& request);

                /**
                 *This API is used to get the statistical distribution chart of slow log source addresses.
                 * @param req DescribeSlowLogUserHostStatsRequest
                 * @return DescribeSlowLogUserHostStatsOutcome
                 */
                DescribeSlowLogUserHostStatsOutcome DescribeSlowLogUserHostStats(const Model::DescribeSlowLogUserHostStatsRequest &request);
                void DescribeSlowLogUserHostStatsAsync(const Model::DescribeSlowLogUserHostStatsRequest& request, const DescribeSlowLogUserHostStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogUserHostStatsOutcomeCallable DescribeSlowLogUserHostStatsCallable(const Model::DescribeSlowLogUserHostStatsRequest& request);

                /**
                 *This API is used to get the real-time space statistics of top databases of an instance. The returned results are sorted by size by default.
                 * @param req DescribeTopSpaceSchemasRequest
                 * @return DescribeTopSpaceSchemasOutcome
                 */
                DescribeTopSpaceSchemasOutcome DescribeTopSpaceSchemas(const Model::DescribeTopSpaceSchemasRequest &request);
                void DescribeTopSpaceSchemasAsync(const Model::DescribeTopSpaceSchemasRequest& request, const DescribeTopSpaceSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopSpaceSchemasOutcomeCallable DescribeTopSpaceSchemasCallable(const Model::DescribeTopSpaceSchemasRequest& request);

                /**
                 *This API is used to get SQL statement optimization suggestions. It is free of charge for a limited time and will be charged after DBbrain is commercialized.
                 * @param req DescribeUserSqlAdviceRequest
                 * @return DescribeUserSqlAdviceOutcome
                 */
                DescribeUserSqlAdviceOutcome DescribeUserSqlAdvice(const Model::DescribeUserSqlAdviceRequest &request);
                void DescribeUserSqlAdviceAsync(const Model::DescribeUserSqlAdviceRequest& request, const DescribeUserSqlAdviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserSqlAdviceOutcomeCallable DescribeUserSqlAdviceCallable(const Model::DescribeUserSqlAdviceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_DBBRAINCLIENT_H_
