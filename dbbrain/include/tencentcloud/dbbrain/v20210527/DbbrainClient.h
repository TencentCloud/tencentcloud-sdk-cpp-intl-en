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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_DBBRAINCLIENT_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_DBBRAINCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dbbrain/v20210527/model/AddUserContactRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/AddUserContactResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CloseAuditServiceRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CloseAuditServiceResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateDBDiagReportTaskRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateDBDiagReportTaskResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateDBDiagReportUrlRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateDBDiagReportUrlResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateKillTaskRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateKillTaskResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateMailProfileRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateMailProfileResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateProxySessionKillTaskRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateProxySessionKillTaskResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateRedisBigKeyAnalysisTaskRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateRedisBigKeyAnalysisTaskResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateSchedulerMailProfileRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateSchedulerMailProfileResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateSecurityAuditLogExportTaskRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/CreateSecurityAuditLogExportTaskResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DeleteDBDiagReportTasksRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DeleteDBDiagReportTasksResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DeleteSecurityAuditLogExportTasksRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DeleteSecurityAuditLogExportTasksResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeAllUserContactRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeAllUserContactResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeAllUserGroupRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeAllUserGroupResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeAuditInstanceListRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeAuditInstanceListResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBDiagEventRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBDiagEventResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBDiagEventsRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBDiagEventsResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBDiagHistoryRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBDiagHistoryResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBDiagReportTasksRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBDiagReportTasksResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBSpaceStatusRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDBSpaceStatusResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDiagDBInstancesRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeDiagDBInstancesResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeHealthScoreRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeHealthScoreResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeMailProfileRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeMailProfileResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeMySqlProcessListRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeMySqlProcessListResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeProxyProcessStatisticsRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeProxyProcessStatisticsResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeProxySessionKillTasksRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeProxySessionKillTasksResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeRedisTopKeyPrefixListRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeRedisTopKeyPrefixListResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSecurityAuditLogDownloadUrlsRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSecurityAuditLogDownloadUrlsResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSecurityAuditLogExportTasksRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSecurityAuditLogExportTasksResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogTimeSeriesStatsRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogTimeSeriesStatsResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogTopSqlsRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogTopSqlsResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogUserHostStatsRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogUserHostStatsResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogsRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeSlowLogsResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceSchemaTimeSeriesRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceSchemaTimeSeriesResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceSchemasRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceSchemasResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceTableTimeSeriesRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceTableTimeSeriesResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceTablesRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeTopSpaceTablesResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeUserSqlAdviceRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/DescribeUserSqlAdviceResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/KillMySqlThreadsRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/KillMySqlThreadsResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/ModifyAuditServiceRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/ModifyAuditServiceResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/ModifyDiagDBInstanceConfRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/ModifyDiagDBInstanceConfResponse.h>
#include <tencentcloud/dbbrain/v20210527/model/OpenAuditServiceRequest.h>
#include <tencentcloud/dbbrain/v20210527/model/OpenAuditServiceResponse.h>


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

                typedef Outcome<Core::Error, Model::AddUserContactResponse> AddUserContactOutcome;
                typedef std::future<AddUserContactOutcome> AddUserContactOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::AddUserContactRequest&, AddUserContactOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUserContactAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseAuditServiceResponse> CloseAuditServiceOutcome;
                typedef std::future<CloseAuditServiceOutcome> CloseAuditServiceOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CloseAuditServiceRequest&, CloseAuditServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseAuditServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBDiagReportTaskResponse> CreateDBDiagReportTaskOutcome;
                typedef std::future<CreateDBDiagReportTaskOutcome> CreateDBDiagReportTaskOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateDBDiagReportTaskRequest&, CreateDBDiagReportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBDiagReportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBDiagReportUrlResponse> CreateDBDiagReportUrlOutcome;
                typedef std::future<CreateDBDiagReportUrlOutcome> CreateDBDiagReportUrlOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateDBDiagReportUrlRequest&, CreateDBDiagReportUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBDiagReportUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateKillTaskResponse> CreateKillTaskOutcome;
                typedef std::future<CreateKillTaskOutcome> CreateKillTaskOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateKillTaskRequest&, CreateKillTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateKillTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMailProfileResponse> CreateMailProfileOutcome;
                typedef std::future<CreateMailProfileOutcome> CreateMailProfileOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateMailProfileRequest&, CreateMailProfileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMailProfileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProxySessionKillTaskResponse> CreateProxySessionKillTaskOutcome;
                typedef std::future<CreateProxySessionKillTaskOutcome> CreateProxySessionKillTaskOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateProxySessionKillTaskRequest&, CreateProxySessionKillTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProxySessionKillTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRedisBigKeyAnalysisTaskResponse> CreateRedisBigKeyAnalysisTaskOutcome;
                typedef std::future<CreateRedisBigKeyAnalysisTaskOutcome> CreateRedisBigKeyAnalysisTaskOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateRedisBigKeyAnalysisTaskRequest&, CreateRedisBigKeyAnalysisTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRedisBigKeyAnalysisTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSchedulerMailProfileResponse> CreateSchedulerMailProfileOutcome;
                typedef std::future<CreateSchedulerMailProfileOutcome> CreateSchedulerMailProfileOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateSchedulerMailProfileRequest&, CreateSchedulerMailProfileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSchedulerMailProfileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityAuditLogExportTaskResponse> CreateSecurityAuditLogExportTaskOutcome;
                typedef std::future<CreateSecurityAuditLogExportTaskOutcome> CreateSecurityAuditLogExportTaskOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateSecurityAuditLogExportTaskRequest&, CreateSecurityAuditLogExportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityAuditLogExportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDBDiagReportTasksResponse> DeleteDBDiagReportTasksOutcome;
                typedef std::future<DeleteDBDiagReportTasksOutcome> DeleteDBDiagReportTasksOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DeleteDBDiagReportTasksRequest&, DeleteDBDiagReportTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBDiagReportTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityAuditLogExportTasksResponse> DeleteSecurityAuditLogExportTasksOutcome;
                typedef std::future<DeleteSecurityAuditLogExportTasksOutcome> DeleteSecurityAuditLogExportTasksOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DeleteSecurityAuditLogExportTasksRequest&, DeleteSecurityAuditLogExportTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityAuditLogExportTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllUserContactResponse> DescribeAllUserContactOutcome;
                typedef std::future<DescribeAllUserContactOutcome> DescribeAllUserContactOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeAllUserContactRequest&, DescribeAllUserContactOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllUserContactAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllUserGroupResponse> DescribeAllUserGroupOutcome;
                typedef std::future<DescribeAllUserGroupOutcome> DescribeAllUserGroupOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeAllUserGroupRequest&, DescribeAllUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditInstanceListResponse> DescribeAuditInstanceListOutcome;
                typedef std::future<DescribeAuditInstanceListOutcome> DescribeAuditInstanceListOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeAuditInstanceListRequest&, DescribeAuditInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBDiagEventResponse> DescribeDBDiagEventOutcome;
                typedef std::future<DescribeDBDiagEventOutcome> DescribeDBDiagEventOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeDBDiagEventRequest&, DescribeDBDiagEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBDiagEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBDiagEventsResponse> DescribeDBDiagEventsOutcome;
                typedef std::future<DescribeDBDiagEventsOutcome> DescribeDBDiagEventsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeDBDiagEventsRequest&, DescribeDBDiagEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBDiagEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBDiagHistoryResponse> DescribeDBDiagHistoryOutcome;
                typedef std::future<DescribeDBDiagHistoryOutcome> DescribeDBDiagHistoryOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeDBDiagHistoryRequest&, DescribeDBDiagHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBDiagHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBDiagReportTasksResponse> DescribeDBDiagReportTasksOutcome;
                typedef std::future<DescribeDBDiagReportTasksOutcome> DescribeDBDiagReportTasksOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeDBDiagReportTasksRequest&, DescribeDBDiagReportTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBDiagReportTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSpaceStatusResponse> DescribeDBSpaceStatusOutcome;
                typedef std::future<DescribeDBSpaceStatusOutcome> DescribeDBSpaceStatusOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeDBSpaceStatusRequest&, DescribeDBSpaceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSpaceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiagDBInstancesResponse> DescribeDiagDBInstancesOutcome;
                typedef std::future<DescribeDiagDBInstancesOutcome> DescribeDiagDBInstancesOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeDiagDBInstancesRequest&, DescribeDiagDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHealthScoreResponse> DescribeHealthScoreOutcome;
                typedef std::future<DescribeHealthScoreOutcome> DescribeHealthScoreOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeHealthScoreRequest&, DescribeHealthScoreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHealthScoreAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMailProfileResponse> DescribeMailProfileOutcome;
                typedef std::future<DescribeMailProfileOutcome> DescribeMailProfileOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeMailProfileRequest&, DescribeMailProfileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMailProfileAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMySqlProcessListResponse> DescribeMySqlProcessListOutcome;
                typedef std::future<DescribeMySqlProcessListOutcome> DescribeMySqlProcessListOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeMySqlProcessListRequest&, DescribeMySqlProcessListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMySqlProcessListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxyProcessStatisticsResponse> DescribeProxyProcessStatisticsOutcome;
                typedef std::future<DescribeProxyProcessStatisticsOutcome> DescribeProxyProcessStatisticsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeProxyProcessStatisticsRequest&, DescribeProxyProcessStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxyProcessStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxySessionKillTasksResponse> DescribeProxySessionKillTasksOutcome;
                typedef std::future<DescribeProxySessionKillTasksOutcome> DescribeProxySessionKillTasksOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeProxySessionKillTasksRequest&, DescribeProxySessionKillTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxySessionKillTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRedisTopKeyPrefixListResponse> DescribeRedisTopKeyPrefixListOutcome;
                typedef std::future<DescribeRedisTopKeyPrefixListOutcome> DescribeRedisTopKeyPrefixListOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeRedisTopKeyPrefixListRequest&, DescribeRedisTopKeyPrefixListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRedisTopKeyPrefixListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityAuditLogDownloadUrlsResponse> DescribeSecurityAuditLogDownloadUrlsOutcome;
                typedef std::future<DescribeSecurityAuditLogDownloadUrlsOutcome> DescribeSecurityAuditLogDownloadUrlsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSecurityAuditLogDownloadUrlsRequest&, DescribeSecurityAuditLogDownloadUrlsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityAuditLogDownloadUrlsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityAuditLogExportTasksResponse> DescribeSecurityAuditLogExportTasksOutcome;
                typedef std::future<DescribeSecurityAuditLogExportTasksOutcome> DescribeSecurityAuditLogExportTasksOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSecurityAuditLogExportTasksRequest&, DescribeSecurityAuditLogExportTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityAuditLogExportTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogTimeSeriesStatsResponse> DescribeSlowLogTimeSeriesStatsOutcome;
                typedef std::future<DescribeSlowLogTimeSeriesStatsOutcome> DescribeSlowLogTimeSeriesStatsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSlowLogTimeSeriesStatsRequest&, DescribeSlowLogTimeSeriesStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogTimeSeriesStatsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogTopSqlsResponse> DescribeSlowLogTopSqlsOutcome;
                typedef std::future<DescribeSlowLogTopSqlsOutcome> DescribeSlowLogTopSqlsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSlowLogTopSqlsRequest&, DescribeSlowLogTopSqlsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogTopSqlsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogUserHostStatsResponse> DescribeSlowLogUserHostStatsOutcome;
                typedef std::future<DescribeSlowLogUserHostStatsOutcome> DescribeSlowLogUserHostStatsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSlowLogUserHostStatsRequest&, DescribeSlowLogUserHostStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogUserHostStatsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogsResponse> DescribeSlowLogsOutcome;
                typedef std::future<DescribeSlowLogsOutcome> DescribeSlowLogsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSlowLogsRequest&, DescribeSlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopSpaceSchemaTimeSeriesResponse> DescribeTopSpaceSchemaTimeSeriesOutcome;
                typedef std::future<DescribeTopSpaceSchemaTimeSeriesOutcome> DescribeTopSpaceSchemaTimeSeriesOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeTopSpaceSchemaTimeSeriesRequest&, DescribeTopSpaceSchemaTimeSeriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopSpaceSchemaTimeSeriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopSpaceSchemasResponse> DescribeTopSpaceSchemasOutcome;
                typedef std::future<DescribeTopSpaceSchemasOutcome> DescribeTopSpaceSchemasOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeTopSpaceSchemasRequest&, DescribeTopSpaceSchemasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopSpaceSchemasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopSpaceTableTimeSeriesResponse> DescribeTopSpaceTableTimeSeriesOutcome;
                typedef std::future<DescribeTopSpaceTableTimeSeriesOutcome> DescribeTopSpaceTableTimeSeriesOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeTopSpaceTableTimeSeriesRequest&, DescribeTopSpaceTableTimeSeriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopSpaceTableTimeSeriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopSpaceTablesResponse> DescribeTopSpaceTablesOutcome;
                typedef std::future<DescribeTopSpaceTablesOutcome> DescribeTopSpaceTablesOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeTopSpaceTablesRequest&, DescribeTopSpaceTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopSpaceTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserSqlAdviceResponse> DescribeUserSqlAdviceOutcome;
                typedef std::future<DescribeUserSqlAdviceOutcome> DescribeUserSqlAdviceOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeUserSqlAdviceRequest&, DescribeUserSqlAdviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserSqlAdviceAsyncHandler;
                typedef Outcome<Core::Error, Model::KillMySqlThreadsResponse> KillMySqlThreadsOutcome;
                typedef std::future<KillMySqlThreadsOutcome> KillMySqlThreadsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::KillMySqlThreadsRequest&, KillMySqlThreadsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KillMySqlThreadsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAuditServiceResponse> ModifyAuditServiceOutcome;
                typedef std::future<ModifyAuditServiceOutcome> ModifyAuditServiceOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::ModifyAuditServiceRequest&, ModifyAuditServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuditServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDiagDBInstanceConfResponse> ModifyDiagDBInstanceConfOutcome;
                typedef std::future<ModifyDiagDBInstanceConfOutcome> ModifyDiagDBInstanceConfOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::ModifyDiagDBInstanceConfRequest&, ModifyDiagDBInstanceConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDiagDBInstanceConfAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenAuditServiceResponse> OpenAuditServiceOutcome;
                typedef std::future<OpenAuditServiceOutcome> OpenAuditServiceOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::OpenAuditServiceRequest&, OpenAuditServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenAuditServiceAsyncHandler;



                /**
                 *This API is used to add the recipient name and email. The returned value is the ID of the successfully added recipient.
                 * @param req AddUserContactRequest
                 * @return AddUserContactOutcome
                 */
                AddUserContactOutcome AddUserContact(const Model::AddUserContactRequest &request);
                void AddUserContactAsync(const Model::AddUserContactRequest& request, const AddUserContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUserContactOutcomeCallable AddUserContactCallable(const Model::AddUserContactRequest& request);

                /**
                 *This API is used to disable database audit as needed.
                 * @param req CloseAuditServiceRequest
                 * @return CloseAuditServiceOutcome
                 */
                CloseAuditServiceOutcome CloseAuditService(const Model::CloseAuditServiceRequest &request);
                void CloseAuditServiceAsync(const Model::CloseAuditServiceRequest& request, const CloseAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseAuditServiceOutcomeCallable CloseAuditServiceCallable(const Model::CloseAuditServiceRequest& request);

                /**
                 *This API is used to create a health report and send it via email as configured.
                 * @param req CreateDBDiagReportTaskRequest
                 * @return CreateDBDiagReportTaskOutcome
                 */
                CreateDBDiagReportTaskOutcome CreateDBDiagReportTask(const Model::CreateDBDiagReportTaskRequest &request);
                void CreateDBDiagReportTaskAsync(const Model::CreateDBDiagReportTaskRequest& request, const CreateDBDiagReportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBDiagReportTaskOutcomeCallable CreateDBDiagReportTaskCallable(const Model::CreateDBDiagReportTaskRequest& request);

                /**
                 *This API is used to create a URL for a health report.
                 * @param req CreateDBDiagReportUrlRequest
                 * @return CreateDBDiagReportUrlOutcome
                 */
                CreateDBDiagReportUrlOutcome CreateDBDiagReportUrl(const Model::CreateDBDiagReportUrlRequest &request);
                void CreateDBDiagReportUrlAsync(const Model::CreateDBDiagReportUrlRequest& request, const CreateDBDiagReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBDiagReportUrlOutcomeCallable CreateDBDiagReportUrlCallable(const Model::CreateDBDiagReportUrlRequest& request);

                /**
                 *This API is used to create a session killing task.
                 * @param req CreateKillTaskRequest
                 * @return CreateKillTaskOutcome
                 */
                CreateKillTaskOutcome CreateKillTask(const Model::CreateKillTaskRequest &request);
                void CreateKillTaskAsync(const Model::CreateKillTaskRequest& request, const CreateKillTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateKillTaskOutcomeCallable CreateKillTaskCallable(const Model::CreateKillTaskRequest& request);

                /**
                 *This API is used to create the email configuration. The input parameter `ProfileType` represents the type of the email configuration. Valid values: `dbScan_mail_configuration` (email configuration of database inspection report) and `scheduler_mail_configuration` (email sending configuration of scheduled task health report). Always select Guangzhou for `Region`, regardless of the region where the instance resides.
                 * @param req CreateMailProfileRequest
                 * @return CreateMailProfileOutcome
                 */
                CreateMailProfileOutcome CreateMailProfile(const Model::CreateMailProfileRequest &request);
                void CreateMailProfileAsync(const Model::CreateMailProfileRequest& request, const CreateMailProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMailProfileOutcomeCallable CreateMailProfileCallable(const Model::CreateMailProfileRequest& request);

                /**
                 *This API is used to create an async task of killing all proxy node connection sessions and is currently supported only for Redis. The async task ID is the returned value, which can be passed to the API `DescribeProxySessionKillTasks` as a parameter to query the execution status of the session killing task.
                 * @param req CreateProxySessionKillTaskRequest
                 * @return CreateProxySessionKillTaskOutcome
                 */
                CreateProxySessionKillTaskOutcome CreateProxySessionKillTask(const Model::CreateProxySessionKillTaskRequest &request);
                void CreateProxySessionKillTaskAsync(const Model::CreateProxySessionKillTaskRequest& request, const CreateProxySessionKillTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProxySessionKillTaskOutcomeCallable CreateProxySessionKillTaskCallable(const Model::CreateProxySessionKillTaskRequest& request);

                /**
                 *This API is used to create an ad hoc big key analysis task for Redis instances. By default, there can only be up to five running ad hoc analysis tasks.
                 * @param req CreateRedisBigKeyAnalysisTaskRequest
                 * @return CreateRedisBigKeyAnalysisTaskOutcome
                 */
                CreateRedisBigKeyAnalysisTaskOutcome CreateRedisBigKeyAnalysisTask(const Model::CreateRedisBigKeyAnalysisTaskRequest &request);
                void CreateRedisBigKeyAnalysisTaskAsync(const Model::CreateRedisBigKeyAnalysisTaskRequest& request, const CreateRedisBigKeyAnalysisTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRedisBigKeyAnalysisTaskOutcomeCallable CreateRedisBigKeyAnalysisTaskCallable(const Model::CreateRedisBigKeyAnalysisTaskRequest& request);

                /**
                 *This API is used to create the regular generation time of health reports and the regular email sending configuration. Pass in the regular generation time of health reports as a parameter (Monday to Sunday) to set the regular generation time, and save the corresponding regular email sending configuration.
                 * @param req CreateSchedulerMailProfileRequest
                 * @return CreateSchedulerMailProfileOutcome
                 */
                CreateSchedulerMailProfileOutcome CreateSchedulerMailProfile(const Model::CreateSchedulerMailProfileRequest &request);
                void CreateSchedulerMailProfileAsync(const Model::CreateSchedulerMailProfileRequest& request, const CreateSchedulerMailProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSchedulerMailProfileOutcomeCallable CreateSchedulerMailProfileCallable(const Model::CreateSchedulerMailProfileRequest& request);

                /**
                 *This API is used to create a security audit log export task.
                 * @param req CreateSecurityAuditLogExportTaskRequest
                 * @return CreateSecurityAuditLogExportTaskOutcome
                 */
                CreateSecurityAuditLogExportTaskOutcome CreateSecurityAuditLogExportTask(const Model::CreateSecurityAuditLogExportTaskRequest &request);
                void CreateSecurityAuditLogExportTaskAsync(const Model::CreateSecurityAuditLogExportTaskRequest& request, const CreateSecurityAuditLogExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityAuditLogExportTaskOutcomeCallable CreateSecurityAuditLogExportTaskCallable(const Model::CreateSecurityAuditLogExportTaskRequest& request);

                /**
                 *This API is used to delete health report generation tasks by task ID.
                 * @param req DeleteDBDiagReportTasksRequest
                 * @return DeleteDBDiagReportTasksOutcome
                 */
                DeleteDBDiagReportTasksOutcome DeleteDBDiagReportTasks(const Model::DeleteDBDiagReportTasksRequest &request);
                void DeleteDBDiagReportTasksAsync(const Model::DeleteDBDiagReportTasksRequest& request, const DeleteDBDiagReportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDBDiagReportTasksOutcomeCallable DeleteDBDiagReportTasksCallable(const Model::DeleteDBDiagReportTasksRequest& request);

                /**
                 *This API is used to delete a security audit log export task.
                 * @param req DeleteSecurityAuditLogExportTasksRequest
                 * @return DeleteSecurityAuditLogExportTasksOutcome
                 */
                DeleteSecurityAuditLogExportTasksOutcome DeleteSecurityAuditLogExportTasks(const Model::DeleteSecurityAuditLogExportTasksRequest &request);
                void DeleteSecurityAuditLogExportTasksAsync(const Model::DeleteSecurityAuditLogExportTasksRequest& request, const DeleteSecurityAuditLogExportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityAuditLogExportTasksOutcomeCallable DeleteSecurityAuditLogExportTasksCallable(const Model::DeleteSecurityAuditLogExportTasksRequest& request);

                /**
                 *This API is used to get the information of the recipient in the email.
                 * @param req DescribeAllUserContactRequest
                 * @return DescribeAllUserContactOutcome
                 */
                DescribeAllUserContactOutcome DescribeAllUserContact(const Model::DescribeAllUserContactRequest &request);
                void DescribeAllUserContactAsync(const Model::DescribeAllUserContactRequest& request, const DescribeAllUserContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllUserContactOutcomeCallable DescribeAllUserContactCallable(const Model::DescribeAllUserContactRequest& request);

                /**
                 *This API is used to get the information of the recipient group in the email.
                 * @param req DescribeAllUserGroupRequest
                 * @return DescribeAllUserGroupOutcome
                 */
                DescribeAllUserGroupOutcome DescribeAllUserGroup(const Model::DescribeAllUserGroupRequest &request);
                void DescribeAllUserGroupAsync(const Model::DescribeAllUserGroupRequest& request, const DescribeAllUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllUserGroupOutcomeCallable DescribeAllUserGroupCallable(const Model::DescribeAllUserGroupRequest& request);

                /**
                 *This API is used to query the instance list.
                 * @param req DescribeAuditInstanceListRequest
                 * @return DescribeAuditInstanceListOutcome
                 */
                DescribeAuditInstanceListOutcome DescribeAuditInstanceList(const Model::DescribeAuditInstanceListRequest &request);
                void DescribeAuditInstanceListAsync(const Model::DescribeAuditInstanceListRequest& request, const DescribeAuditInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditInstanceListOutcomeCallable DescribeAuditInstanceListCallable(const Model::DescribeAuditInstanceListRequest& request);

                /**
                 *This API is used to get the details of an instance exception diagnosis event.
                 * @param req DescribeDBDiagEventRequest
                 * @return DescribeDBDiagEventOutcome
                 */
                DescribeDBDiagEventOutcome DescribeDBDiagEvent(const Model::DescribeDBDiagEventRequest &request);
                void DescribeDBDiagEventAsync(const Model::DescribeDBDiagEventRequest& request, const DescribeDBDiagEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBDiagEventOutcomeCallable DescribeDBDiagEventCallable(const Model::DescribeDBDiagEventRequest& request);

                /**
                 *This API is used to obtain the diagnosis event list in a specified time period by risk level, instance ID, etc.
                 * @param req DescribeDBDiagEventsRequest
                 * @return DescribeDBDiagEventsOutcome
                 */
                DescribeDBDiagEventsOutcome DescribeDBDiagEvents(const Model::DescribeDBDiagEventsRequest &request);
                void DescribeDBDiagEventsAsync(const Model::DescribeDBDiagEventsRequest& request, const DescribeDBDiagEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBDiagEventsOutcomeCallable DescribeDBDiagEventsCallable(const Model::DescribeDBDiagEventsRequest& request);

                /**
                 *This API is used to get the list of instance diagnosis events.
                 * @param req DescribeDBDiagHistoryRequest
                 * @return DescribeDBDiagHistoryOutcome
                 */
                DescribeDBDiagHistoryOutcome DescribeDBDiagHistory(const Model::DescribeDBDiagHistoryRequest &request);
                void DescribeDBDiagHistoryAsync(const Model::DescribeDBDiagHistoryRequest& request, const DescribeDBDiagHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBDiagHistoryOutcomeCallable DescribeDBDiagHistoryCallable(const Model::DescribeDBDiagHistoryRequest& request);

                /**
                 *This API is used to query the list of health report generation tasks.
                 * @param req DescribeDBDiagReportTasksRequest
                 * @return DescribeDBDiagReportTasksOutcome
                 */
                DescribeDBDiagReportTasksOutcome DescribeDBDiagReportTasks(const Model::DescribeDBDiagReportTasksRequest &request);
                void DescribeDBDiagReportTasksAsync(const Model::DescribeDBDiagReportTasksRequest& request, const DescribeDBDiagReportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBDiagReportTasksOutcomeCallable DescribeDBDiagReportTasksCallable(const Model::DescribeDBDiagReportTasksRequest& request);

                /**
                 *This API is used to query the overview of instance space usage during a specified time period, including disk usage growth (MB), available disk space (MB), total disk space (MB), and estimated number of available days.
                 * @param req DescribeDBSpaceStatusRequest
                 * @return DescribeDBSpaceStatusOutcome
                 */
                DescribeDBSpaceStatusOutcome DescribeDBSpaceStatus(const Model::DescribeDBSpaceStatusRequest &request);
                void DescribeDBSpaceStatusAsync(const Model::DescribeDBSpaceStatusRequest& request, const DescribeDBSpaceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSpaceStatusOutcomeCallable DescribeDBSpaceStatusCallable(const Model::DescribeDBSpaceStatusRequest& request);

                /**
                 *This API is used to get the instance information list. Please always select Guangzhou for `Region`.
                 * @param req DescribeDiagDBInstancesRequest
                 * @return DescribeDiagDBInstancesOutcome
                 */
                DescribeDiagDBInstancesOutcome DescribeDiagDBInstances(const Model::DescribeDiagDBInstancesRequest &request);
                void DescribeDiagDBInstancesAsync(const Model::DescribeDiagDBInstancesRequest& request, const DescribeDiagDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiagDBInstancesOutcomeCallable DescribeDiagDBInstancesCallable(const Model::DescribeDiagDBInstancesRequest& request);

                /**
                 *This API is used to get the health score and deduction for exceptions in the specified time period (30 minutes) based on the instance ID.
                 * @param req DescribeHealthScoreRequest
                 * @return DescribeHealthScoreOutcome
                 */
                DescribeHealthScoreOutcome DescribeHealthScore(const Model::DescribeHealthScoreRequest &request);
                void DescribeHealthScoreAsync(const Model::DescribeHealthScoreRequest& request, const DescribeHealthScoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHealthScoreOutcomeCallable DescribeHealthScoreCallable(const Model::DescribeHealthScoreRequest& request);

                /**
                 *This API is used to get the email sending configuration, including the email configuration for database inspection and the email sending configuration for scheduled task health reports.
                 * @param req DescribeMailProfileRequest
                 * @return DescribeMailProfileOutcome
                 */
                DescribeMailProfileOutcome DescribeMailProfile(const Model::DescribeMailProfileRequest &request);
                void DescribeMailProfileAsync(const Model::DescribeMailProfileRequest& request, const DescribeMailProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMailProfileOutcomeCallable DescribeMailProfileCallable(const Model::DescribeMailProfileRequest& request);

                /**
                 *This API is used to query the real-time thread list of a relational database.
                 * @param req DescribeMySqlProcessListRequest
                 * @return DescribeMySqlProcessListOutcome
                 */
                DescribeMySqlProcessListOutcome DescribeMySqlProcessList(const Model::DescribeMySqlProcessListRequest &request);
                void DescribeMySqlProcessListAsync(const Model::DescribeMySqlProcessListRequest& request, const DescribeMySqlProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMySqlProcessListOutcomeCallable DescribeMySqlProcessListCallable(const Model::DescribeMySqlProcessListRequest& request);

                /**
                 *This API is used to get the session statistics of a single proxy under the current instance, and can only be called in particular environments.
                 * @param req DescribeProxyProcessStatisticsRequest
                 * @return DescribeProxyProcessStatisticsOutcome
                 */
                DescribeProxyProcessStatisticsOutcome DescribeProxyProcessStatistics(const Model::DescribeProxyProcessStatisticsRequest &request);
                void DescribeProxyProcessStatisticsAsync(const Model::DescribeProxyProcessStatisticsRequest& request, const DescribeProxyProcessStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxyProcessStatisticsOutcomeCallable DescribeProxyProcessStatisticsCallable(const Model::DescribeProxyProcessStatisticsRequest& request);

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
                 *This API is used to query the download link of a security audit log export file. Currently, log file download only provides a Tencent Cloud private network address. Download it by using a CVM instance in the Guangzhou region.
                 * @param req DescribeSecurityAuditLogDownloadUrlsRequest
                 * @return DescribeSecurityAuditLogDownloadUrlsOutcome
                 */
                DescribeSecurityAuditLogDownloadUrlsOutcome DescribeSecurityAuditLogDownloadUrls(const Model::DescribeSecurityAuditLogDownloadUrlsRequest &request);
                void DescribeSecurityAuditLogDownloadUrlsAsync(const Model::DescribeSecurityAuditLogDownloadUrlsRequest& request, const DescribeSecurityAuditLogDownloadUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityAuditLogDownloadUrlsOutcomeCallable DescribeSecurityAuditLogDownloadUrlsCallable(const Model::DescribeSecurityAuditLogDownloadUrlsRequest& request);

                /**
                 *This API is used to query the list of security audit log export tasks.
                 * @param req DescribeSecurityAuditLogExportTasksRequest
                 * @return DescribeSecurityAuditLogExportTasksOutcome
                 */
                DescribeSecurityAuditLogExportTasksOutcome DescribeSecurityAuditLogExportTasks(const Model::DescribeSecurityAuditLogExportTasksRequest &request);
                void DescribeSecurityAuditLogExportTasksAsync(const Model::DescribeSecurityAuditLogExportTasksRequest& request, const DescribeSecurityAuditLogExportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityAuditLogExportTasksOutcomeCallable DescribeSecurityAuditLogExportTasksCallable(const Model::DescribeSecurityAuditLogExportTasksRequest& request);

                /**
                 *This API is used to get the slow log statistics histogram.
                 * @param req DescribeSlowLogTimeSeriesStatsRequest
                 * @return DescribeSlowLogTimeSeriesStatsOutcome
                 */
                DescribeSlowLogTimeSeriesStatsOutcome DescribeSlowLogTimeSeriesStats(const Model::DescribeSlowLogTimeSeriesStatsRequest &request);
                void DescribeSlowLogTimeSeriesStatsAsync(const Model::DescribeSlowLogTimeSeriesStatsRequest& request, const DescribeSlowLogTimeSeriesStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogTimeSeriesStatsOutcomeCallable DescribeSlowLogTimeSeriesStatsCallable(const Model::DescribeSlowLogTimeSeriesStatsRequest& request);

                /**
                 *This API is used to get and sort the top slow SQL statements in a specified time period by the aggregation mode of SQL template plus schema.
                 * @param req DescribeSlowLogTopSqlsRequest
                 * @return DescribeSlowLogTopSqlsOutcome
                 */
                DescribeSlowLogTopSqlsOutcome DescribeSlowLogTopSqls(const Model::DescribeSlowLogTopSqlsRequest &request);
                void DescribeSlowLogTopSqlsAsync(const Model::DescribeSlowLogTopSqlsRequest& request, const DescribeSlowLogTopSqlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogTopSqlsOutcomeCallable DescribeSlowLogTopSqlsCallable(const Model::DescribeSlowLogTopSqlsRequest& request);

                /**
                 *This API is used to get the statistical distribution chart of slow log source addresses.
                 * @param req DescribeSlowLogUserHostStatsRequest
                 * @return DescribeSlowLogUserHostStatsOutcome
                 */
                DescribeSlowLogUserHostStatsOutcome DescribeSlowLogUserHostStats(const Model::DescribeSlowLogUserHostStatsRequest &request);
                void DescribeSlowLogUserHostStatsAsync(const Model::DescribeSlowLogUserHostStatsRequest& request, const DescribeSlowLogUserHostStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogUserHostStatsOutcomeCallable DescribeSlowLogUserHostStatsCallable(const Model::DescribeSlowLogUserHostStatsRequest& request);

                /**
                 *This API is used to obtain the slow log details of a SQL template in a specified time period.
                 * @param req DescribeSlowLogsRequest
                 * @return DescribeSlowLogsOutcome
                 */
                DescribeSlowLogsOutcome DescribeSlowLogs(const Model::DescribeSlowLogsRequest &request);
                void DescribeSlowLogsAsync(const Model::DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogsOutcomeCallable DescribeSlowLogsCallable(const Model::DescribeSlowLogsRequest& request);

                /**
                 *This API is used to get the daily space data of top databases consuming the most instance space. The data is daily collected by DBbrain during a specified time period. The returned results are sorted by size by default.
                 * @param req DescribeTopSpaceSchemaTimeSeriesRequest
                 * @return DescribeTopSpaceSchemaTimeSeriesOutcome
                 */
                DescribeTopSpaceSchemaTimeSeriesOutcome DescribeTopSpaceSchemaTimeSeries(const Model::DescribeTopSpaceSchemaTimeSeriesRequest &request);
                void DescribeTopSpaceSchemaTimeSeriesAsync(const Model::DescribeTopSpaceSchemaTimeSeriesRequest& request, const DescribeTopSpaceSchemaTimeSeriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopSpaceSchemaTimeSeriesOutcomeCallable DescribeTopSpaceSchemaTimeSeriesCallable(const Model::DescribeTopSpaceSchemaTimeSeriesRequest& request);

                /**
                 *This API is used to get the real-time space statistics of top databases of an instance. The returned results are sorted by size by default.
                 * @param req DescribeTopSpaceSchemasRequest
                 * @return DescribeTopSpaceSchemasOutcome
                 */
                DescribeTopSpaceSchemasOutcome DescribeTopSpaceSchemas(const Model::DescribeTopSpaceSchemasRequest &request);
                void DescribeTopSpaceSchemasAsync(const Model::DescribeTopSpaceSchemasRequest& request, const DescribeTopSpaceSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopSpaceSchemasOutcomeCallable DescribeTopSpaceSchemasCallable(const Model::DescribeTopSpaceSchemasRequest& request);

                /**
                 *This API is used to get the daily space data of top tables consuming the most instance space. The data is daily collected by DBbrain during a specified time period. The returned results are sorted by size by default.
                 * @param req DescribeTopSpaceTableTimeSeriesRequest
                 * @return DescribeTopSpaceTableTimeSeriesOutcome
                 */
                DescribeTopSpaceTableTimeSeriesOutcome DescribeTopSpaceTableTimeSeries(const Model::DescribeTopSpaceTableTimeSeriesRequest &request);
                void DescribeTopSpaceTableTimeSeriesAsync(const Model::DescribeTopSpaceTableTimeSeriesRequest& request, const DescribeTopSpaceTableTimeSeriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopSpaceTableTimeSeriesOutcomeCallable DescribeTopSpaceTableTimeSeriesCallable(const Model::DescribeTopSpaceTableTimeSeriesRequest& request);

                /**
                 *This API is used to get the real-time space statistics of top tables of an instance. The returned results are sorted by size by default.
                 * @param req DescribeTopSpaceTablesRequest
                 * @return DescribeTopSpaceTablesOutcome
                 */
                DescribeTopSpaceTablesOutcome DescribeTopSpaceTables(const Model::DescribeTopSpaceTablesRequest &request);
                void DescribeTopSpaceTablesAsync(const Model::DescribeTopSpaceTablesRequest& request, const DescribeTopSpaceTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopSpaceTablesOutcomeCallable DescribeTopSpaceTablesCallable(const Model::DescribeTopSpaceTablesRequest& request);

                /**
                 *This API is used to get SQL statement optimization suggestions. It is free of charge for a limited time and will be charged after DBbrain is commercialized.
                 * @param req DescribeUserSqlAdviceRequest
                 * @return DescribeUserSqlAdviceOutcome
                 */
                DescribeUserSqlAdviceOutcome DescribeUserSqlAdvice(const Model::DescribeUserSqlAdviceRequest &request);
                void DescribeUserSqlAdviceAsync(const Model::DescribeUserSqlAdviceRequest& request, const DescribeUserSqlAdviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserSqlAdviceOutcomeCallable DescribeUserSqlAdviceCallable(const Model::DescribeUserSqlAdviceRequest& request);

                /**
                 *This API is used to interrupt the current session by session ID. It needs to be called twice to commit the session interruption task in two stages. In the pre-commit stage, the stage value is `Prepare`, and the returned value is `SqlExecId`. In the commit stage, the stage value is `Commit`, and `SqlExecId` will be passed in as a parameter. Then, the session process will be terminated.
                 * @param req KillMySqlThreadsRequest
                 * @return KillMySqlThreadsOutcome
                 */
                KillMySqlThreadsOutcome KillMySqlThreads(const Model::KillMySqlThreadsRequest &request);
                void KillMySqlThreadsAsync(const Model::KillMySqlThreadsRequest& request, const KillMySqlThreadsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KillMySqlThreadsOutcomeCallable KillMySqlThreadsCallable(const Model::KillMySqlThreadsRequest& request);

                /**
                 *u200cThis API is used to modify audit configurations such as the frequent access storage period.
                 * @param req ModifyAuditServiceRequest
                 * @return ModifyAuditServiceOutcome
                 */
                ModifyAuditServiceOutcome ModifyAuditService(const Model::ModifyAuditServiceRequest &request);
                void ModifyAuditServiceAsync(const Model::ModifyAuditServiceRequest& request, const ModifyAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAuditServiceOutcomeCallable ModifyAuditServiceCallable(const Model::ModifyAuditServiceRequest& request);

                /**
                 *This API is used to enable/disable instance inspection.
                 * @param req ModifyDiagDBInstanceConfRequest
                 * @return ModifyDiagDBInstanceConfOutcome
                 */
                ModifyDiagDBInstanceConfOutcome ModifyDiagDBInstanceConf(const Model::ModifyDiagDBInstanceConfRequest &request);
                void ModifyDiagDBInstanceConfAsync(const Model::ModifyDiagDBInstanceConfRequest& request, const ModifyDiagDBInstanceConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDiagDBInstanceConfOutcomeCallable ModifyDiagDBInstanceConfCallable(const Model::ModifyDiagDBInstanceConfRequest& request);

                /**
                 *This API is used to enable database audit.
                 * @param req OpenAuditServiceRequest
                 * @return OpenAuditServiceOutcome
                 */
                OpenAuditServiceOutcome OpenAuditService(const Model::OpenAuditServiceRequest &request);
                void OpenAuditServiceAsync(const Model::OpenAuditServiceRequest& request, const OpenAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenAuditServiceOutcomeCallable OpenAuditServiceCallable(const Model::OpenAuditServiceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_DBBRAINCLIENT_H_
