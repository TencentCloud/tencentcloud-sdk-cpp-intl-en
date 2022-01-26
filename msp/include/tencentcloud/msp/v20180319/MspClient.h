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

#ifndef TENCENTCLOUD_MSP_V20180319_MSPCLIENT_H_
#define TENCENTCLOUD_MSP_V20180319_MSPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/msp/v20180319/model/DeregisterMigrationTaskRequest.h>
#include <tencentcloud/msp/v20180319/model/DeregisterMigrationTaskResponse.h>
#include <tencentcloud/msp/v20180319/model/DescribeMigrationTaskRequest.h>
#include <tencentcloud/msp/v20180319/model/DescribeMigrationTaskResponse.h>
#include <tencentcloud/msp/v20180319/model/ListMigrationProjectRequest.h>
#include <tencentcloud/msp/v20180319/model/ListMigrationProjectResponse.h>
#include <tencentcloud/msp/v20180319/model/ListMigrationTaskRequest.h>
#include <tencentcloud/msp/v20180319/model/ListMigrationTaskResponse.h>
#include <tencentcloud/msp/v20180319/model/ModifyMigrationTaskBelongToProjectRequest.h>
#include <tencentcloud/msp/v20180319/model/ModifyMigrationTaskBelongToProjectResponse.h>
#include <tencentcloud/msp/v20180319/model/ModifyMigrationTaskStatusRequest.h>
#include <tencentcloud/msp/v20180319/model/ModifyMigrationTaskStatusResponse.h>
#include <tencentcloud/msp/v20180319/model/RegisterMigrationTaskRequest.h>
#include <tencentcloud/msp/v20180319/model/RegisterMigrationTaskResponse.h>


namespace TencentCloud
{
    namespace Msp
    {
        namespace V20180319
        {
            class MspClient : public AbstractClient
            {
            public:
                MspClient(const Credential &credential, const std::string &region);
                MspClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DeregisterMigrationTaskResponse> DeregisterMigrationTaskOutcome;
                typedef std::future<DeregisterMigrationTaskOutcome> DeregisterMigrationTaskOutcomeCallable;
                typedef std::function<void(const MspClient*, const Model::DeregisterMigrationTaskRequest&, DeregisterMigrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterMigrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMigrationTaskResponse> DescribeMigrationTaskOutcome;
                typedef std::future<DescribeMigrationTaskOutcome> DescribeMigrationTaskOutcomeCallable;
                typedef std::function<void(const MspClient*, const Model::DescribeMigrationTaskRequest&, DescribeMigrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ListMigrationProjectResponse> ListMigrationProjectOutcome;
                typedef std::future<ListMigrationProjectOutcome> ListMigrationProjectOutcomeCallable;
                typedef std::function<void(const MspClient*, const Model::ListMigrationProjectRequest&, ListMigrationProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListMigrationProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ListMigrationTaskResponse> ListMigrationTaskOutcome;
                typedef std::future<ListMigrationTaskOutcome> ListMigrationTaskOutcomeCallable;
                typedef std::function<void(const MspClient*, const Model::ListMigrationTaskRequest&, ListMigrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListMigrationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMigrationTaskBelongToProjectResponse> ModifyMigrationTaskBelongToProjectOutcome;
                typedef std::future<ModifyMigrationTaskBelongToProjectOutcome> ModifyMigrationTaskBelongToProjectOutcomeCallable;
                typedef std::function<void(const MspClient*, const Model::ModifyMigrationTaskBelongToProjectRequest&, ModifyMigrationTaskBelongToProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrationTaskBelongToProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMigrationTaskStatusResponse> ModifyMigrationTaskStatusOutcome;
                typedef std::future<ModifyMigrationTaskStatusOutcome> ModifyMigrationTaskStatusOutcomeCallable;
                typedef std::function<void(const MspClient*, const Model::ModifyMigrationTaskStatusRequest&, ModifyMigrationTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMigrationTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterMigrationTaskResponse> RegisterMigrationTaskOutcome;
                typedef std::future<RegisterMigrationTaskOutcome> RegisterMigrationTaskOutcomeCallable;
                typedef std::function<void(const MspClient*, const Model::RegisterMigrationTaskRequest&, RegisterMigrationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterMigrationTaskAsyncHandler;



                /**
                 *This API is used to cancel the registered migration tasks.
                 * @param req DeregisterMigrationTaskRequest
                 * @return DeregisterMigrationTaskOutcome
                 */
                DeregisterMigrationTaskOutcome DeregisterMigrationTask(const Model::DeregisterMigrationTaskRequest &request);
                void DeregisterMigrationTaskAsync(const Model::DeregisterMigrationTaskRequest& request, const DeregisterMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeregisterMigrationTaskOutcomeCallable DeregisterMigrationTaskCallable(const Model::DeregisterMigrationTaskRequest& request);

                /**
                 *This API is used to obtain the specified migration task details.
                 * @param req DescribeMigrationTaskRequest
                 * @return DescribeMigrationTaskOutcome
                 */
                DescribeMigrationTaskOutcome DescribeMigrationTask(const Model::DescribeMigrationTaskRequest &request);
                void DescribeMigrationTaskAsync(const Model::DescribeMigrationTaskRequest& request, const DescribeMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMigrationTaskOutcomeCallable DescribeMigrationTaskCallable(const Model::DescribeMigrationTaskRequest& request);

                /**
                 *This API is used to obtain the list of migration project names.
                 * @param req ListMigrationProjectRequest
                 * @return ListMigrationProjectOutcome
                 */
                ListMigrationProjectOutcome ListMigrationProject(const Model::ListMigrationProjectRequest &request);
                void ListMigrationProjectAsync(const Model::ListMigrationProjectRequest& request, const ListMigrationProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListMigrationProjectOutcomeCallable ListMigrationProjectCallable(const Model::ListMigrationProjectRequest& request);

                /**
                 *This API is used to obtain migration task list.
                 * @param req ListMigrationTaskRequest
                 * @return ListMigrationTaskOutcome
                 */
                ListMigrationTaskOutcome ListMigrationTask(const Model::ListMigrationTaskRequest &request);
                void ListMigrationTaskAsync(const Model::ListMigrationTaskRequest& request, const ListMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListMigrationTaskOutcomeCallable ListMigrationTaskCallable(const Model::ListMigrationTaskRequest& request);

                /**
                 *This API is used to modify the project of a migration task.
                 * @param req ModifyMigrationTaskBelongToProjectRequest
                 * @return ModifyMigrationTaskBelongToProjectOutcome
                 */
                ModifyMigrationTaskBelongToProjectOutcome ModifyMigrationTaskBelongToProject(const Model::ModifyMigrationTaskBelongToProjectRequest &request);
                void ModifyMigrationTaskBelongToProjectAsync(const Model::ModifyMigrationTaskBelongToProjectRequest& request, const ModifyMigrationTaskBelongToProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMigrationTaskBelongToProjectOutcomeCallable ModifyMigrationTaskBelongToProjectCallable(const Model::ModifyMigrationTaskBelongToProjectRequest& request);

                /**
                 *This API is used to update the migration task status.
                 * @param req ModifyMigrationTaskStatusRequest
                 * @return ModifyMigrationTaskStatusOutcome
                 */
                ModifyMigrationTaskStatusOutcome ModifyMigrationTaskStatus(const Model::ModifyMigrationTaskStatusRequest &request);
                void ModifyMigrationTaskStatusAsync(const Model::ModifyMigrationTaskStatusRequest& request, const ModifyMigrationTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMigrationTaskStatusOutcomeCallable ModifyMigrationTaskStatusCallable(const Model::ModifyMigrationTaskStatusRequest& request);

                /**
                 *This API is used to register a migration task.
                 * @param req RegisterMigrationTaskRequest
                 * @return RegisterMigrationTaskOutcome
                 */
                RegisterMigrationTaskOutcome RegisterMigrationTask(const Model::RegisterMigrationTaskRequest &request);
                void RegisterMigrationTaskAsync(const Model::RegisterMigrationTaskRequest& request, const RegisterMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterMigrationTaskOutcomeCallable RegisterMigrationTaskCallable(const Model::RegisterMigrationTaskRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MSP_V20180319_MSPCLIENT_H_
