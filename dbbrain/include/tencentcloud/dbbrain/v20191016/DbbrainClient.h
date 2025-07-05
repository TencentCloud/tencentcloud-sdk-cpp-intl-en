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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_DBBRAINCLIENT_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_DBBRAINCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dbbrain/v20191016/model/AddUserContactRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/AddUserContactResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/CreateDBDiagReportTaskRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/CreateDBDiagReportTaskResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/CreateDBDiagReportUrlRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/CreateDBDiagReportUrlResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/CreateMailProfileRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/CreateMailProfileResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/CreateSchedulerMailProfileRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/CreateSchedulerMailProfileResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeAllUserContactRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeAllUserContactResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeAllUserGroupRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeAllUserGroupResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBDiagEventRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBDiagEventResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBDiagHistoryRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBDiagHistoryResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBDiagReportTasksRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBDiagReportTasksResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBSpaceStatusRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBSpaceStatusResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDiagDBInstancesRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDiagDBInstancesResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeHealthScoreRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeHealthScoreResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeMailProfileRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeMailProfileResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTimeSeriesStatsRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTimeSeriesStatsResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTopSqlsRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTopSqlsResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSlowLogUserHostStatsRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSlowLogUserHostStatsResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceSchemaTimeSeriesRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceSchemaTimeSeriesResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceSchemasRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceSchemasResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceTableTimeSeriesRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceTableTimeSeriesResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceTablesRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceTablesResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeUserSqlAdviceRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeUserSqlAdviceResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/ModifyDiagDBInstanceConfRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/ModifyDiagDBInstanceConfResponse.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            class DbbrainClient : public AbstractClient
            {
            public:
                DbbrainClient(const Credential &credential, const std::string &region);
                DbbrainClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddUserContactResponse> AddUserContactOutcome;
                typedef std::future<AddUserContactOutcome> AddUserContactOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::AddUserContactRequest&, AddUserContactOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUserContactAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBDiagReportTaskResponse> CreateDBDiagReportTaskOutcome;
                typedef std::future<CreateDBDiagReportTaskOutcome> CreateDBDiagReportTaskOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateDBDiagReportTaskRequest&, CreateDBDiagReportTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBDiagReportTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBDiagReportUrlResponse> CreateDBDiagReportUrlOutcome;
                typedef std::future<CreateDBDiagReportUrlOutcome> CreateDBDiagReportUrlOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateDBDiagReportUrlRequest&, CreateDBDiagReportUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBDiagReportUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMailProfileResponse> CreateMailProfileOutcome;
                typedef std::future<CreateMailProfileOutcome> CreateMailProfileOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateMailProfileRequest&, CreateMailProfileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMailProfileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSchedulerMailProfileResponse> CreateSchedulerMailProfileOutcome;
                typedef std::future<CreateSchedulerMailProfileOutcome> CreateSchedulerMailProfileOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::CreateSchedulerMailProfileRequest&, CreateSchedulerMailProfileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSchedulerMailProfileAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllUserContactResponse> DescribeAllUserContactOutcome;
                typedef std::future<DescribeAllUserContactOutcome> DescribeAllUserContactOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeAllUserContactRequest&, DescribeAllUserContactOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllUserContactAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllUserGroupResponse> DescribeAllUserGroupOutcome;
                typedef std::future<DescribeAllUserGroupOutcome> DescribeAllUserGroupOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeAllUserGroupRequest&, DescribeAllUserGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllUserGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBDiagEventResponse> DescribeDBDiagEventOutcome;
                typedef std::future<DescribeDBDiagEventOutcome> DescribeDBDiagEventOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeDBDiagEventRequest&, DescribeDBDiagEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBDiagEventAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeSlowLogTimeSeriesStatsResponse> DescribeSlowLogTimeSeriesStatsOutcome;
                typedef std::future<DescribeSlowLogTimeSeriesStatsOutcome> DescribeSlowLogTimeSeriesStatsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSlowLogTimeSeriesStatsRequest&, DescribeSlowLogTimeSeriesStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogTimeSeriesStatsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogTopSqlsResponse> DescribeSlowLogTopSqlsOutcome;
                typedef std::future<DescribeSlowLogTopSqlsOutcome> DescribeSlowLogTopSqlsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSlowLogTopSqlsRequest&, DescribeSlowLogTopSqlsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogTopSqlsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogUserHostStatsResponse> DescribeSlowLogUserHostStatsOutcome;
                typedef std::future<DescribeSlowLogUserHostStatsOutcome> DescribeSlowLogUserHostStatsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSlowLogUserHostStatsRequest&, DescribeSlowLogUserHostStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogUserHostStatsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyDiagDBInstanceConfResponse> ModifyDiagDBInstanceConfOutcome;
                typedef std::future<ModifyDiagDBInstanceConfOutcome> ModifyDiagDBInstanceConfOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::ModifyDiagDBInstanceConfRequest&, ModifyDiagDBInstanceConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDiagDBInstanceConfAsyncHandler;



                /**
                 *This API is used to add the contact name and email.. The return value is the successfully added contact ID. Select Guangzhou for Region.
                 * @param req AddUserContactRequest
                 * @return AddUserContactOutcome
                 */
                AddUserContactOutcome AddUserContact(const Model::AddUserContactRequest &request);
                void AddUserContactAsync(const Model::AddUserContactRequest& request, const AddUserContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUserContactOutcomeCallable AddUserContactCallable(const Model::AddUserContactRequest& request);

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
                 *This API is used to create the email configuration. The input parameter `ProfileType` represents the type of the email configuration. Valid values: `dbScan_mail_configuration` (email configuration of database inspection report) and `scheduler_mail_configuration` (email sending configuration of regularly generated health report). Select Guangzhou for Region, regardless of the region where the instance belongs.
                 * @param req CreateMailProfileRequest
                 * @return CreateMailProfileOutcome
                 */
                CreateMailProfileOutcome CreateMailProfile(const Model::CreateMailProfileRequest &request);
                void CreateMailProfileAsync(const Model::CreateMailProfileRequest& request, const CreateMailProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMailProfileOutcomeCallable CreateMailProfileCallable(const Model::CreateMailProfileRequest& request);

                /**
                 *This API is used to create the regular generation time of the health reports and the regular email sending configuration. Pass in the regular generation time of the health reports as a parameter (Monday to Sunday) to set the regular generation time of the health reports, and save the corresponding regular email sending configuration.
                 * @param req CreateSchedulerMailProfileRequest
                 * @return CreateSchedulerMailProfileOutcome
                 */
                CreateSchedulerMailProfileOutcome CreateSchedulerMailProfile(const Model::CreateSchedulerMailProfileRequest &request);
                void CreateSchedulerMailProfileAsync(const Model::CreateSchedulerMailProfileRequest& request, const CreateSchedulerMailProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSchedulerMailProfileOutcomeCallable CreateSchedulerMailProfileCallable(const Model::CreateSchedulerMailProfileRequest& request);

                /**
                 *This API is used to obtain the information of the contact in the email.
                 * @param req DescribeAllUserContactRequest
                 * @return DescribeAllUserContactOutcome
                 */
                DescribeAllUserContactOutcome DescribeAllUserContact(const Model::DescribeAllUserContactRequest &request);
                void DescribeAllUserContactAsync(const Model::DescribeAllUserContactRequest& request, const DescribeAllUserContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllUserContactOutcomeCallable DescribeAllUserContactCallable(const Model::DescribeAllUserContactRequest& request);

                /**
                 *This API is used to obtain the information of the contact group in the email.
                 * @param req DescribeAllUserGroupRequest
                 * @return DescribeAllUserGroupOutcome
                 */
                DescribeAllUserGroupOutcome DescribeAllUserGroup(const Model::DescribeAllUserGroupRequest &request);
                void DescribeAllUserGroupAsync(const Model::DescribeAllUserGroupRequest& request, const DescribeAllUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllUserGroupOutcomeCallable DescribeAllUserGroupCallable(const Model::DescribeAllUserGroupRequest& request);

                /**
                 *This API is used to get the details of an instance exception diagnosis event.
                 * @param req DescribeDBDiagEventRequest
                 * @return DescribeDBDiagEventOutcome
                 */
                DescribeDBDiagEventOutcome DescribeDBDiagEvent(const Model::DescribeDBDiagEventRequest &request);
                void DescribeDBDiagEventAsync(const Model::DescribeDBDiagEventRequest& request, const DescribeDBDiagEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBDiagEventOutcomeCallable DescribeDBDiagEventCallable(const Model::DescribeDBDiagEventRequest& request);

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
                 *This API is used to obtain the instance information list. Select Guangzhou for Region.
                 * @param req DescribeDiagDBInstancesRequest
                 * @return DescribeDiagDBInstancesOutcome
                 */
                DescribeDiagDBInstancesOutcome DescribeDiagDBInstances(const Model::DescribeDiagDBInstancesRequest &request);
                void DescribeDiagDBInstancesAsync(const Model::DescribeDiagDBInstancesRequest& request, const DescribeDiagDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiagDBInstancesOutcomeCallable DescribeDiagDBInstancesCallable(const Model::DescribeDiagDBInstancesRequest& request);

                /**
                 *This API is used to obtain the health score and deduction for exceptions in the specified time period (30 minutes) based on the instance ID.
                 * @param req DescribeHealthScoreRequest
                 * @return DescribeHealthScoreOutcome
                 */
                DescribeHealthScoreOutcome DescribeHealthScore(const Model::DescribeHealthScoreRequest &request);
                void DescribeHealthScoreAsync(const Model::DescribeHealthScoreRequest& request, const DescribeHealthScoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHealthScoreOutcomeCallable DescribeHealthScoreCallable(const Model::DescribeHealthScoreRequest& request);

                /**
                 *This API is used to obtain the email sending configurations, including the email configuration for database inspection and the email sending configuration for regularly generated health reports. Select Guangzhou for Region.
                 * @param req DescribeMailProfileRequest
                 * @return DescribeMailProfileOutcome
                 */
                DescribeMailProfileOutcome DescribeMailProfile(const Model::DescribeMailProfileRequest &request);
                void DescribeMailProfileAsync(const Model::DescribeMailProfileRequest& request, const DescribeMailProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMailProfileOutcomeCallable DescribeMailProfileCallable(const Model::DescribeMailProfileRequest& request);

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
                 *This API is used to obtain the statistical distribution chart of slow log source addresses.
                 * @param req DescribeSlowLogUserHostStatsRequest
                 * @return DescribeSlowLogUserHostStatsOutcome
                 */
                DescribeSlowLogUserHostStatsOutcome DescribeSlowLogUserHostStats(const Model::DescribeSlowLogUserHostStatsRequest &request);
                void DescribeSlowLogUserHostStatsAsync(const Model::DescribeSlowLogUserHostStatsRequest& request, const DescribeSlowLogUserHostStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogUserHostStatsOutcomeCallable DescribeSlowLogUserHostStatsCallable(const Model::DescribeSlowLogUserHostStatsRequest& request);

                /**
                 *This API is used to query the daily space data of top databases consuming the most instance space. The data is daily collected by DBbrain during a specified time period. The return results are sorted by size by default.
                 * @param req DescribeTopSpaceSchemaTimeSeriesRequest
                 * @return DescribeTopSpaceSchemaTimeSeriesOutcome
                 */
                DescribeTopSpaceSchemaTimeSeriesOutcome DescribeTopSpaceSchemaTimeSeries(const Model::DescribeTopSpaceSchemaTimeSeriesRequest &request);
                void DescribeTopSpaceSchemaTimeSeriesAsync(const Model::DescribeTopSpaceSchemaTimeSeriesRequest& request, const DescribeTopSpaceSchemaTimeSeriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopSpaceSchemaTimeSeriesOutcomeCallable DescribeTopSpaceSchemaTimeSeriesCallable(const Model::DescribeTopSpaceSchemaTimeSeriesRequest& request);

                /**
                 *This API is used to query real-time space statistics of top databases. The return results are sorted by size by default.
                 * @param req DescribeTopSpaceSchemasRequest
                 * @return DescribeTopSpaceSchemasOutcome
                 */
                DescribeTopSpaceSchemasOutcome DescribeTopSpaceSchemas(const Model::DescribeTopSpaceSchemasRequest &request);
                void DescribeTopSpaceSchemasAsync(const Model::DescribeTopSpaceSchemasRequest& request, const DescribeTopSpaceSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopSpaceSchemasOutcomeCallable DescribeTopSpaceSchemasCallable(const Model::DescribeTopSpaceSchemasRequest& request);

                /**
                 *This API is used to query the daily space data of top tables consuming the most instance space. The data is daily collected by DBbrain during a specified time period. The return results are sorted by size by default.
                 * @param req DescribeTopSpaceTableTimeSeriesRequest
                 * @return DescribeTopSpaceTableTimeSeriesOutcome
                 */
                DescribeTopSpaceTableTimeSeriesOutcome DescribeTopSpaceTableTimeSeries(const Model::DescribeTopSpaceTableTimeSeriesRequest &request);
                void DescribeTopSpaceTableTimeSeriesAsync(const Model::DescribeTopSpaceTableTimeSeriesRequest& request, const DescribeTopSpaceTableTimeSeriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopSpaceTableTimeSeriesOutcomeCallable DescribeTopSpaceTableTimeSeriesCallable(const Model::DescribeTopSpaceTableTimeSeriesRequest& request);

                /**
                 *This API is used to query real-time space statistics of top tables of an instance. The return results are sorted by size by default.
                 * @param req DescribeTopSpaceTablesRequest
                 * @return DescribeTopSpaceTablesOutcome
                 */
                DescribeTopSpaceTablesOutcome DescribeTopSpaceTables(const Model::DescribeTopSpaceTablesRequest &request);
                void DescribeTopSpaceTablesAsync(const Model::DescribeTopSpaceTablesRequest& request, const DescribeTopSpaceTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopSpaceTablesOutcomeCallable DescribeTopSpaceTablesCallable(const Model::DescribeTopSpaceTablesRequest& request);

                /**
                 *This API is used to obtain SQL statement optimization suggestions.
                 * @param req DescribeUserSqlAdviceRequest
                 * @return DescribeUserSqlAdviceOutcome
                 */
                DescribeUserSqlAdviceOutcome DescribeUserSqlAdvice(const Model::DescribeUserSqlAdviceRequest &request);
                void DescribeUserSqlAdviceAsync(const Model::DescribeUserSqlAdviceRequest& request, const DescribeUserSqlAdviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserSqlAdviceOutcomeCallable DescribeUserSqlAdviceCallable(const Model::DescribeUserSqlAdviceRequest& request);

                /**
                 *This API is used to enable/disable instance inspection.
                 * @param req ModifyDiagDBInstanceConfRequest
                 * @return ModifyDiagDBInstanceConfOutcome
                 */
                ModifyDiagDBInstanceConfOutcome ModifyDiagDBInstanceConf(const Model::ModifyDiagDBInstanceConfRequest &request);
                void ModifyDiagDBInstanceConfAsync(const Model::ModifyDiagDBInstanceConfRequest& request, const ModifyDiagDBInstanceConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDiagDBInstanceConfOutcomeCallable ModifyDiagDBInstanceConfCallable(const Model::ModifyDiagDBInstanceConfRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_DBBRAINCLIENT_H_
