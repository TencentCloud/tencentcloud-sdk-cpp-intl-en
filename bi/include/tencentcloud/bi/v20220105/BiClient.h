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

#ifndef TENCENTCLOUD_BI_V20220105_BICLIENT_H_
#define TENCENTCLOUD_BI_V20220105_BICLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bi/v20220105/model/ApplyEmbedIntervalRequest.h>
#include <tencentcloud/bi/v20220105/model/ApplyEmbedIntervalResponse.h>
#include <tencentcloud/bi/v20220105/model/CreateDatasourceRequest.h>
#include <tencentcloud/bi/v20220105/model/CreateDatasourceResponse.h>
#include <tencentcloud/bi/v20220105/model/CreateDatasourceCloudRequest.h>
#include <tencentcloud/bi/v20220105/model/CreateDatasourceCloudResponse.h>
#include <tencentcloud/bi/v20220105/model/CreateEmbedTokenRequest.h>
#include <tencentcloud/bi/v20220105/model/CreateEmbedTokenResponse.h>
#include <tencentcloud/bi/v20220105/model/CreateProjectRequest.h>
#include <tencentcloud/bi/v20220105/model/CreateProjectResponse.h>
#include <tencentcloud/bi/v20220105/model/CreateUserRoleRequest.h>
#include <tencentcloud/bi/v20220105/model/CreateUserRoleResponse.h>
#include <tencentcloud/bi/v20220105/model/CreateUserRoleProjectRequest.h>
#include <tencentcloud/bi/v20220105/model/CreateUserRoleProjectResponse.h>
#include <tencentcloud/bi/v20220105/model/DeleteDatasourceRequest.h>
#include <tencentcloud/bi/v20220105/model/DeleteDatasourceResponse.h>
#include <tencentcloud/bi/v20220105/model/DeleteProjectRequest.h>
#include <tencentcloud/bi/v20220105/model/DeleteProjectResponse.h>
#include <tencentcloud/bi/v20220105/model/DeleteUserRoleRequest.h>
#include <tencentcloud/bi/v20220105/model/DeleteUserRoleResponse.h>
#include <tencentcloud/bi/v20220105/model/DeleteUserRoleProjectRequest.h>
#include <tencentcloud/bi/v20220105/model/DeleteUserRoleProjectResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribeDatasourceListRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribeDatasourceListResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribePageWidgetListRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribePageWidgetListResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribeProjectInfoRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribeProjectInfoResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribeProjectListRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribeProjectListResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribeUserProjectListRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribeUserProjectListResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribeUserRoleListRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribeUserRoleListResponse.h>
#include <tencentcloud/bi/v20220105/model/DescribeUserRoleProjectListRequest.h>
#include <tencentcloud/bi/v20220105/model/DescribeUserRoleProjectListResponse.h>
#include <tencentcloud/bi/v20220105/model/ExportScreenPageRequest.h>
#include <tencentcloud/bi/v20220105/model/ExportScreenPageResponse.h>
#include <tencentcloud/bi/v20220105/model/ModifyDatasourceRequest.h>
#include <tencentcloud/bi/v20220105/model/ModifyDatasourceResponse.h>
#include <tencentcloud/bi/v20220105/model/ModifyDatasourceCloudRequest.h>
#include <tencentcloud/bi/v20220105/model/ModifyDatasourceCloudResponse.h>
#include <tencentcloud/bi/v20220105/model/ModifyProjectRequest.h>
#include <tencentcloud/bi/v20220105/model/ModifyProjectResponse.h>
#include <tencentcloud/bi/v20220105/model/ModifyUserRoleRequest.h>
#include <tencentcloud/bi/v20220105/model/ModifyUserRoleResponse.h>
#include <tencentcloud/bi/v20220105/model/ModifyUserRoleProjectRequest.h>
#include <tencentcloud/bi/v20220105/model/ModifyUserRoleProjectResponse.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            class BiClient : public AbstractClient
            {
            public:
                BiClient(const Credential &credential, const std::string &region);
                BiClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyEmbedIntervalResponse> ApplyEmbedIntervalOutcome;
                typedef std::future<ApplyEmbedIntervalOutcome> ApplyEmbedIntervalOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ApplyEmbedIntervalRequest&, ApplyEmbedIntervalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyEmbedIntervalAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDatasourceResponse> CreateDatasourceOutcome;
                typedef std::future<CreateDatasourceOutcome> CreateDatasourceOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::CreateDatasourceRequest&, CreateDatasourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatasourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDatasourceCloudResponse> CreateDatasourceCloudOutcome;
                typedef std::future<CreateDatasourceCloudOutcome> CreateDatasourceCloudOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::CreateDatasourceCloudRequest&, CreateDatasourceCloudOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatasourceCloudAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEmbedTokenResponse> CreateEmbedTokenOutcome;
                typedef std::future<CreateEmbedTokenOutcome> CreateEmbedTokenOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::CreateEmbedTokenRequest&, CreateEmbedTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmbedTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProjectResponse> CreateProjectOutcome;
                typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::CreateProjectRequest&, CreateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserRoleResponse> CreateUserRoleOutcome;
                typedef std::future<CreateUserRoleOutcome> CreateUserRoleOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::CreateUserRoleRequest&, CreateUserRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserRoleProjectResponse> CreateUserRoleProjectOutcome;
                typedef std::future<CreateUserRoleProjectOutcome> CreateUserRoleProjectOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::CreateUserRoleProjectRequest&, CreateUserRoleProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserRoleProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDatasourceResponse> DeleteDatasourceOutcome;
                typedef std::future<DeleteDatasourceOutcome> DeleteDatasourceOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DeleteDatasourceRequest&, DeleteDatasourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatasourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProjectResponse> DeleteProjectOutcome;
                typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DeleteProjectRequest&, DeleteProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserRoleResponse> DeleteUserRoleOutcome;
                typedef std::future<DeleteUserRoleOutcome> DeleteUserRoleOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DeleteUserRoleRequest&, DeleteUserRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserRoleProjectResponse> DeleteUserRoleProjectOutcome;
                typedef std::future<DeleteUserRoleProjectOutcome> DeleteUserRoleProjectOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DeleteUserRoleProjectRequest&, DeleteUserRoleProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserRoleProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatasourceListResponse> DescribeDatasourceListOutcome;
                typedef std::future<DescribeDatasourceListOutcome> DescribeDatasourceListOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribeDatasourceListRequest&, DescribeDatasourceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatasourceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePageWidgetListResponse> DescribePageWidgetListOutcome;
                typedef std::future<DescribePageWidgetListOutcome> DescribePageWidgetListOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribePageWidgetListRequest&, DescribePageWidgetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePageWidgetListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectInfoResponse> DescribeProjectInfoOutcome;
                typedef std::future<DescribeProjectInfoOutcome> DescribeProjectInfoOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribeProjectInfoRequest&, DescribeProjectInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectListResponse> DescribeProjectListOutcome;
                typedef std::future<DescribeProjectListOutcome> DescribeProjectListOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribeProjectListRequest&, DescribeProjectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserProjectListResponse> DescribeUserProjectListOutcome;
                typedef std::future<DescribeUserProjectListOutcome> DescribeUserProjectListOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribeUserProjectListRequest&, DescribeUserProjectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserProjectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserRoleListResponse> DescribeUserRoleListOutcome;
                typedef std::future<DescribeUserRoleListOutcome> DescribeUserRoleListOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribeUserRoleListRequest&, DescribeUserRoleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserRoleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserRoleProjectListResponse> DescribeUserRoleProjectListOutcome;
                typedef std::future<DescribeUserRoleProjectListOutcome> DescribeUserRoleProjectListOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::DescribeUserRoleProjectListRequest&, DescribeUserRoleProjectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserRoleProjectListAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportScreenPageResponse> ExportScreenPageOutcome;
                typedef std::future<ExportScreenPageOutcome> ExportScreenPageOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ExportScreenPageRequest&, ExportScreenPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportScreenPageAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatasourceResponse> ModifyDatasourceOutcome;
                typedef std::future<ModifyDatasourceOutcome> ModifyDatasourceOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ModifyDatasourceRequest&, ModifyDatasourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatasourceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatasourceCloudResponse> ModifyDatasourceCloudOutcome;
                typedef std::future<ModifyDatasourceCloudOutcome> ModifyDatasourceCloudOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ModifyDatasourceCloudRequest&, ModifyDatasourceCloudOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatasourceCloudAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProjectResponse> ModifyProjectOutcome;
                typedef std::future<ModifyProjectOutcome> ModifyProjectOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ModifyProjectRequest&, ModifyProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserRoleResponse> ModifyUserRoleOutcome;
                typedef std::future<ModifyUserRoleOutcome> ModifyUserRoleOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ModifyUserRoleRequest&, ModifyUserRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserRoleProjectResponse> ModifyUserRoleProjectOutcome;
                typedef std::future<ModifyUserRoleProjectOutcome> ModifyUserRoleProjectOutcomeCallable;
                typedef std::function<void(const BiClient*, const Model::ModifyUserRoleProjectRequest&, ModifyUserRoleProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserRoleProjectAsyncHandler;



                /**
                 *This API is used to extend the available time of a token with strong authentication.
                 * @param req ApplyEmbedIntervalRequest
                 * @return ApplyEmbedIntervalOutcome
                 */
                ApplyEmbedIntervalOutcome ApplyEmbedInterval(const Model::ApplyEmbedIntervalRequest &request);
                void ApplyEmbedIntervalAsync(const Model::ApplyEmbedIntervalRequest& request, const ApplyEmbedIntervalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyEmbedIntervalOutcomeCallable ApplyEmbedIntervalCallable(const Model::ApplyEmbedIntervalRequest& request);

                /**
                 *This API is used to create a data source.
                 * @param req CreateDatasourceRequest
                 * @return CreateDatasourceOutcome
                 */
                CreateDatasourceOutcome CreateDatasource(const Model::CreateDatasourceRequest &request);
                void CreateDatasourceAsync(const Model::CreateDatasourceRequest& request, const CreateDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDatasourceOutcomeCallable CreateDatasourceCallable(const Model::CreateDatasourceRequest& request);

                /**
                 *This API is used to create a cloud database.
                 * @param req CreateDatasourceCloudRequest
                 * @return CreateDatasourceCloudOutcome
                 */
                CreateDatasourceCloudOutcome CreateDatasourceCloud(const Model::CreateDatasourceCloudRequest &request);
                void CreateDatasourceCloudAsync(const Model::CreateDatasourceCloudRequest& request, const CreateDatasourceCloudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDatasourceCloudOutcomeCallable CreateDatasourceCloudCallable(const Model::CreateDatasourceCloudRequest& request);

                /**
                 *This API is used to create an embedded report with strong authentication.
                 * @param req CreateEmbedTokenRequest
                 * @return CreateEmbedTokenOutcome
                 */
                CreateEmbedTokenOutcome CreateEmbedToken(const Model::CreateEmbedTokenRequest &request);
                void CreateEmbedTokenAsync(const Model::CreateEmbedTokenRequest& request, const CreateEmbedTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmbedTokenOutcomeCallable CreateEmbedTokenCallable(const Model::CreateEmbedTokenRequest& request);

                /**
                 *This API is used to create a project.
                 * @param req CreateProjectRequest
                 * @return CreateProjectOutcome
                 */
                CreateProjectOutcome CreateProject(const Model::CreateProjectRequest &request);
                void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request);

                /**
                 *This API is used to create a user role.
                 * @param req CreateUserRoleRequest
                 * @return CreateUserRoleOutcome
                 */
                CreateUserRoleOutcome CreateUserRole(const Model::CreateUserRoleRequest &request);
                void CreateUserRoleAsync(const Model::CreateUserRoleRequest& request, const CreateUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserRoleOutcomeCallable CreateUserRoleCallable(const Model::CreateUserRoleRequest& request);

                /**
                 *This API is used to create a user role in the project.
                 * @param req CreateUserRoleProjectRequest
                 * @return CreateUserRoleProjectOutcome
                 */
                CreateUserRoleProjectOutcome CreateUserRoleProject(const Model::CreateUserRoleProjectRequest &request);
                void CreateUserRoleProjectAsync(const Model::CreateUserRoleProjectRequest& request, const CreateUserRoleProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserRoleProjectOutcomeCallable CreateUserRoleProjectCallable(const Model::CreateUserRoleProjectRequest& request);

                /**
                 *This API is used to delete a data source.
                 * @param req DeleteDatasourceRequest
                 * @return DeleteDatasourceOutcome
                 */
                DeleteDatasourceOutcome DeleteDatasource(const Model::DeleteDatasourceRequest &request);
                void DeleteDatasourceAsync(const Model::DeleteDatasourceRequest& request, const DeleteDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDatasourceOutcomeCallable DeleteDatasourceCallable(const Model::DeleteDatasourceRequest& request);

                /**
                 *This API is used to delete a project.
                 * @param req DeleteProjectRequest
                 * @return DeleteProjectOutcome
                 */
                DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest &request);
                void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request);

                /**
                 *This API is used to remove a user role, which will result in user deletion.
                 * @param req DeleteUserRoleRequest
                 * @return DeleteUserRoleOutcome
                 */
                DeleteUserRoleOutcome DeleteUserRole(const Model::DeleteUserRoleRequest &request);
                void DeleteUserRoleAsync(const Model::DeleteUserRoleRequest& request, const DeleteUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserRoleOutcomeCallable DeleteUserRoleCallable(const Model::DeleteUserRoleRequest& request);

                /**
                 *This API is used to delete a user role in the project.
                 * @param req DeleteUserRoleProjectRequest
                 * @return DeleteUserRoleProjectOutcome
                 */
                DeleteUserRoleProjectOutcome DeleteUserRoleProject(const Model::DeleteUserRoleProjectRequest &request);
                void DeleteUserRoleProjectAsync(const Model::DeleteUserRoleProjectRequest& request, const DeleteUserRoleProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserRoleProjectOutcomeCallable DeleteUserRoleProjectCallable(const Model::DeleteUserRoleProjectRequest& request);

                /**
                 *This API is used to query a data source list.
                 * @param req DescribeDatasourceListRequest
                 * @return DescribeDatasourceListOutcome
                 */
                DescribeDatasourceListOutcome DescribeDatasourceList(const Model::DescribeDatasourceListRequest &request);
                void DescribeDatasourceListAsync(const Model::DescribeDatasourceListRequest& request, const DescribeDatasourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatasourceListOutcomeCallable DescribeDatasourceListCallable(const Model::DescribeDatasourceListRequest& request);

                /**
                 *This API is used to query component information on the page.
                 * @param req DescribePageWidgetListRequest
                 * @return DescribePageWidgetListOutcome
                 */
                DescribePageWidgetListOutcome DescribePageWidgetList(const Model::DescribePageWidgetListRequest &request);
                void DescribePageWidgetListAsync(const Model::DescribePageWidgetListRequest& request, const DescribePageWidgetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePageWidgetListOutcomeCallable DescribePageWidgetListCallable(const Model::DescribePageWidgetListRequest& request);

                /**
                 *This API is used to obtain project details.
                 * @param req DescribeProjectInfoRequest
                 * @return DescribeProjectInfoOutcome
                 */
                DescribeProjectInfoOutcome DescribeProjectInfo(const Model::DescribeProjectInfoRequest &request);
                void DescribeProjectInfoAsync(const Model::DescribeProjectInfoRequest& request, const DescribeProjectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectInfoOutcomeCallable DescribeProjectInfoCallable(const Model::DescribeProjectInfoRequest& request);

                /**
                 *This API is used to obtain project information.
                 * @param req DescribeProjectListRequest
                 * @return DescribeProjectListOutcome
                 */
                DescribeProjectListOutcome DescribeProjectList(const Model::DescribeProjectListRequest &request);
                void DescribeProjectListAsync(const Model::DescribeProjectListRequest& request, const DescribeProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectListOutcomeCallable DescribeProjectListCallable(const Model::DescribeProjectListRequest& request);

                /**
                 *This API is used to obtain the user interface in the project.
                 * @param req DescribeUserProjectListRequest
                 * @return DescribeUserProjectListOutcome
                 */
                DescribeUserProjectListOutcome DescribeUserProjectList(const Model::DescribeUserProjectListRequest &request);
                void DescribeUserProjectListAsync(const Model::DescribeUserProjectListRequest& request, const DescribeUserProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserProjectListOutcomeCallable DescribeUserProjectListCallable(const Model::DescribeUserProjectListRequest& request);

                /**
                 *This API is used to obtain the user role list.
                 * @param req DescribeUserRoleListRequest
                 * @return DescribeUserRoleListOutcome
                 */
                DescribeUserRoleListOutcome DescribeUserRoleList(const Model::DescribeUserRoleListRequest &request);
                void DescribeUserRoleListAsync(const Model::DescribeUserRoleListRequest& request, const DescribeUserRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserRoleListOutcomeCallable DescribeUserRoleListCallable(const Model::DescribeUserRoleListRequest& request);

                /**
                 *This API is used to obtain the user role list in the project.
                 * @param req DescribeUserRoleProjectListRequest
                 * @return DescribeUserRoleProjectListOutcome
                 */
                DescribeUserRoleProjectListOutcome DescribeUserRoleProjectList(const Model::DescribeUserRoleProjectListRequest &request);
                void DescribeUserRoleProjectListAsync(const Model::DescribeUserRoleProjectListRequest& request, const DescribeUserRoleProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserRoleProjectListOutcomeCallable DescribeUserRoleProjectListCallable(const Model::DescribeUserRoleProjectListRequest& request);

                /**
                 *This API is used to export a screenshot.
                 * @param req ExportScreenPageRequest
                 * @return ExportScreenPageOutcome
                 */
                ExportScreenPageOutcome ExportScreenPage(const Model::ExportScreenPageRequest &request);
                void ExportScreenPageAsync(const Model::ExportScreenPageRequest& request, const ExportScreenPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportScreenPageOutcomeCallable ExportScreenPageCallable(const Model::ExportScreenPageRequest& request);

                /**
                 *This API is used to update a data source.
                 * @param req ModifyDatasourceRequest
                 * @return ModifyDatasourceOutcome
                 */
                ModifyDatasourceOutcome ModifyDatasource(const Model::ModifyDatasourceRequest &request);
                void ModifyDatasourceAsync(const Model::ModifyDatasourceRequest& request, const ModifyDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatasourceOutcomeCallable ModifyDatasourceCallable(const Model::ModifyDatasourceRequest& request);

                /**
                 *This API is used to update a cloud database.
                 * @param req ModifyDatasourceCloudRequest
                 * @return ModifyDatasourceCloudOutcome
                 */
                ModifyDatasourceCloudOutcome ModifyDatasourceCloud(const Model::ModifyDatasourceCloudRequest &request);
                void ModifyDatasourceCloudAsync(const Model::ModifyDatasourceCloudRequest& request, const ModifyDatasourceCloudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatasourceCloudOutcomeCallable ModifyDatasourceCloudCallable(const Model::ModifyDatasourceCloudRequest& request);

                /**
                 *This API is used to modify project information.
                 * @param req ModifyProjectRequest
                 * @return ModifyProjectOutcome
                 */
                ModifyProjectOutcome ModifyProject(const Model::ModifyProjectRequest &request);
                void ModifyProjectAsync(const Model::ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProjectOutcomeCallable ModifyProjectCallable(const Model::ModifyProjectRequest& request);

                /**
                 *This API is used to modify user role info.
                 * @param req ModifyUserRoleRequest
                 * @return ModifyUserRoleOutcome
                 */
                ModifyUserRoleOutcome ModifyUserRole(const Model::ModifyUserRoleRequest &request);
                void ModifyUserRoleAsync(const Model::ModifyUserRoleRequest& request, const ModifyUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserRoleOutcomeCallable ModifyUserRoleCallable(const Model::ModifyUserRoleRequest& request);

                /**
                 *This API is used to modify the user role info in the project.
                 * @param req ModifyUserRoleProjectRequest
                 * @return ModifyUserRoleProjectOutcome
                 */
                ModifyUserRoleProjectOutcome ModifyUserRoleProject(const Model::ModifyUserRoleProjectRequest &request);
                void ModifyUserRoleProjectAsync(const Model::ModifyUserRoleProjectRequest& request, const ModifyUserRoleProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserRoleProjectOutcomeCallable ModifyUserRoleProjectCallable(const Model::ModifyUserRoleProjectRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_BICLIENT_H_
