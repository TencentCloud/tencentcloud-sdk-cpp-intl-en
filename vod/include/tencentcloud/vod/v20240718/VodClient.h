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

#ifndef TENCENTCLOUD_VOD_V20240718_VODCLIENT_H_
#define TENCENTCLOUD_VOD_V20240718_VODCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/vod/v20240718/model/CreateIncrementalMigrationStrategyRequest.h>
#include <tencentcloud/vod/v20240718/model/CreateIncrementalMigrationStrategyResponse.h>
#include <tencentcloud/vod/v20240718/model/CreateStorageRequest.h>
#include <tencentcloud/vod/v20240718/model/CreateStorageResponse.h>
#include <tencentcloud/vod/v20240718/model/CreateStorageCredentialsRequest.h>
#include <tencentcloud/vod/v20240718/model/CreateStorageCredentialsResponse.h>
#include <tencentcloud/vod/v20240718/model/DeleteIncrementalMigrationStrategyRequest.h>
#include <tencentcloud/vod/v20240718/model/DeleteIncrementalMigrationStrategyResponse.h>
#include <tencentcloud/vod/v20240718/model/DescribeIncrementalMigrationStrategyInfosRequest.h>
#include <tencentcloud/vod/v20240718/model/DescribeIncrementalMigrationStrategyInfosResponse.h>
#include <tencentcloud/vod/v20240718/model/DescribeStorageRequest.h>
#include <tencentcloud/vod/v20240718/model/DescribeStorageResponse.h>
#include <tencentcloud/vod/v20240718/model/ModifyIncrementalMigrationStrategyRequest.h>
#include <tencentcloud/vod/v20240718/model/ModifyIncrementalMigrationStrategyResponse.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            class VodClient : public AbstractClient
            {
            public:
                VodClient(const Credential &credential, const std::string &region);
                VodClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateIncrementalMigrationStrategyResponse> CreateIncrementalMigrationStrategyOutcome;
                typedef std::future<CreateIncrementalMigrationStrategyOutcome> CreateIncrementalMigrationStrategyOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateIncrementalMigrationStrategyRequest&, CreateIncrementalMigrationStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIncrementalMigrationStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStorageResponse> CreateStorageOutcome;
                typedef std::future<CreateStorageOutcome> CreateStorageOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateStorageRequest&, CreateStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStorageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStorageCredentialsResponse> CreateStorageCredentialsOutcome;
                typedef std::future<CreateStorageCredentialsOutcome> CreateStorageCredentialsOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::CreateStorageCredentialsRequest&, CreateStorageCredentialsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStorageCredentialsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIncrementalMigrationStrategyResponse> DeleteIncrementalMigrationStrategyOutcome;
                typedef std::future<DeleteIncrementalMigrationStrategyOutcome> DeleteIncrementalMigrationStrategyOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DeleteIncrementalMigrationStrategyRequest&, DeleteIncrementalMigrationStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIncrementalMigrationStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIncrementalMigrationStrategyInfosResponse> DescribeIncrementalMigrationStrategyInfosOutcome;
                typedef std::future<DescribeIncrementalMigrationStrategyInfosOutcome> DescribeIncrementalMigrationStrategyInfosOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeIncrementalMigrationStrategyInfosRequest&, DescribeIncrementalMigrationStrategyInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIncrementalMigrationStrategyInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStorageResponse> DescribeStorageOutcome;
                typedef std::future<DescribeStorageOutcome> DescribeStorageOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::DescribeStorageRequest&, DescribeStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIncrementalMigrationStrategyResponse> ModifyIncrementalMigrationStrategyOutcome;
                typedef std::future<ModifyIncrementalMigrationStrategyOutcome> ModifyIncrementalMigrationStrategyOutcomeCallable;
                typedef std::function<void(const VodClient*, const Model::ModifyIncrementalMigrationStrategyRequest&, ModifyIncrementalMigrationStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIncrementalMigrationStrategyAsyncHandler;



                /**
                 *Create an incremental migration strategy for the storage of the professional application.
                 * @param req CreateIncrementalMigrationStrategyRequest
                 * @return CreateIncrementalMigrationStrategyOutcome
                 */
                CreateIncrementalMigrationStrategyOutcome CreateIncrementalMigrationStrategy(const Model::CreateIncrementalMigrationStrategyRequest &request);
                void CreateIncrementalMigrationStrategyAsync(const Model::CreateIncrementalMigrationStrategyRequest& request, const CreateIncrementalMigrationStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIncrementalMigrationStrategyOutcomeCallable CreateIncrementalMigrationStrategyCallable(const Model::CreateIncrementalMigrationStrategyRequest& request);

                /**
                 *This API is used to create storage for professional applications.

Note:
- This API is exclusively for professional applications.
- When a customer creates a VOD professional application, the system automatically enables storage in certain regions by default. If the customer needs to enable storage in other regions, they can do so using this API.
- All storage regions and the regions where storage have already been enabled can be queried using the [DescribeStorageRegions](https://cloud.tencent.com/document/product/266/72480) API.
                 * @param req CreateStorageRequest
                 * @return CreateStorageOutcome
                 */
                CreateStorageOutcome CreateStorage(const Model::CreateStorageRequest &request);
                void CreateStorageAsync(const Model::CreateStorageRequest& request, const CreateStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStorageOutcomeCallable CreateStorageCallable(const Model::CreateStorageRequest& request);

                /**
                 *The API is used to generate access credentials for VOD professional applications, such as generating credentials for client uploads.
                 * @param req CreateStorageCredentialsRequest
                 * @return CreateStorageCredentialsOutcome
                 */
                CreateStorageCredentialsOutcome CreateStorageCredentials(const Model::CreateStorageCredentialsRequest &request);
                void CreateStorageCredentialsAsync(const Model::CreateStorageCredentialsRequest& request, const CreateStorageCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStorageCredentialsOutcomeCallable CreateStorageCredentialsCallable(const Model::CreateStorageCredentialsRequest& request);

                /**
                 *Delete the incremental migration strategy.
                 * @param req DeleteIncrementalMigrationStrategyRequest
                 * @return DeleteIncrementalMigrationStrategyOutcome
                 */
                DeleteIncrementalMigrationStrategyOutcome DeleteIncrementalMigrationStrategy(const Model::DeleteIncrementalMigrationStrategyRequest &request);
                void DeleteIncrementalMigrationStrategyAsync(const Model::DeleteIncrementalMigrationStrategyRequest& request, const DeleteIncrementalMigrationStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIncrementalMigrationStrategyOutcomeCallable DeleteIncrementalMigrationStrategyCallable(const Model::DeleteIncrementalMigrationStrategyRequest& request);

                /**
                 *Describe the information of the incremental migration strategy.
                 * @param req DescribeIncrementalMigrationStrategyInfosRequest
                 * @return DescribeIncrementalMigrationStrategyInfosOutcome
                 */
                DescribeIncrementalMigrationStrategyInfosOutcome DescribeIncrementalMigrationStrategyInfos(const Model::DescribeIncrementalMigrationStrategyInfosRequest &request);
                void DescribeIncrementalMigrationStrategyInfosAsync(const Model::DescribeIncrementalMigrationStrategyInfosRequest& request, const DescribeIncrementalMigrationStrategyInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIncrementalMigrationStrategyInfosOutcomeCallable DescribeIncrementalMigrationStrategyInfosCallable(const Model::DescribeIncrementalMigrationStrategyInfosRequest& request);

                /**
                 *This API is used to query bucket information in the professional application, and it also supports paginated queries.
Note:
- This API is exclusively for use in the professional application.
                 * @param req DescribeStorageRequest
                 * @return DescribeStorageOutcome
                 */
                DescribeStorageOutcome DescribeStorage(const Model::DescribeStorageRequest &request);
                void DescribeStorageAsync(const Model::DescribeStorageRequest& request, const DescribeStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStorageOutcomeCallable DescribeStorageCallable(const Model::DescribeStorageRequest& request);

                /**
                 *Modify the information of incremental migration strategy.
                 * @param req ModifyIncrementalMigrationStrategyRequest
                 * @return ModifyIncrementalMigrationStrategyOutcome
                 */
                ModifyIncrementalMigrationStrategyOutcome ModifyIncrementalMigrationStrategy(const Model::ModifyIncrementalMigrationStrategyRequest &request);
                void ModifyIncrementalMigrationStrategyAsync(const Model::ModifyIncrementalMigrationStrategyRequest& request, const ModifyIncrementalMigrationStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIncrementalMigrationStrategyOutcomeCallable ModifyIncrementalMigrationStrategyCallable(const Model::ModifyIncrementalMigrationStrategyRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_VODCLIENT_H_
