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

#ifndef TENCENTCLOUD_ES_V20180416_ESCLIENT_H_
#define TENCENTCLOUD_ES_V20180416_ESCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/es/v20180416/model/CreateIndexRequest.h>
#include <tencentcloud/es/v20180416/model/CreateIndexResponse.h>
#include <tencentcloud/es/v20180416/model/CreateInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/CreateInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/DeleteIndexRequest.h>
#include <tencentcloud/es/v20180416/model/DeleteIndexResponse.h>
#include <tencentcloud/es/v20180416/model/DeleteInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/DeleteInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeIndexListRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeIndexListResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeIndexMetaRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeIndexMetaResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeInstanceLogsRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeInstanceLogsResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeInstanceOperationsRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeInstanceOperationsResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeInstancesRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeInstancesResponse.h>
#include <tencentcloud/es/v20180416/model/DescribeViewsRequest.h>
#include <tencentcloud/es/v20180416/model/DescribeViewsResponse.h>
#include <tencentcloud/es/v20180416/model/GetRequestTargetNodeTypesRequest.h>
#include <tencentcloud/es/v20180416/model/GetRequestTargetNodeTypesResponse.h>
#include <tencentcloud/es/v20180416/model/RestartInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/RestartInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/RestartKibanaRequest.h>
#include <tencentcloud/es/v20180416/model/RestartKibanaResponse.h>
#include <tencentcloud/es/v20180416/model/RestartNodesRequest.h>
#include <tencentcloud/es/v20180416/model/RestartNodesResponse.h>
#include <tencentcloud/es/v20180416/model/UpdateDictionariesRequest.h>
#include <tencentcloud/es/v20180416/model/UpdateDictionariesResponse.h>
#include <tencentcloud/es/v20180416/model/UpdateIndexRequest.h>
#include <tencentcloud/es/v20180416/model/UpdateIndexResponse.h>
#include <tencentcloud/es/v20180416/model/UpdateInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/UpdateInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/UpdatePluginsRequest.h>
#include <tencentcloud/es/v20180416/model/UpdatePluginsResponse.h>
#include <tencentcloud/es/v20180416/model/UpdateRequestTargetNodeTypesRequest.h>
#include <tencentcloud/es/v20180416/model/UpdateRequestTargetNodeTypesResponse.h>
#include <tencentcloud/es/v20180416/model/UpgradeInstanceRequest.h>
#include <tencentcloud/es/v20180416/model/UpgradeInstanceResponse.h>
#include <tencentcloud/es/v20180416/model/UpgradeLicenseRequest.h>
#include <tencentcloud/es/v20180416/model/UpgradeLicenseResponse.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            class EsClient : public AbstractClient
            {
            public:
                EsClient(const Credential &credential, const std::string &region);
                EsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateIndexResponse> CreateIndexOutcome;
                typedef std::future<CreateIndexOutcome> CreateIndexOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::CreateIndexRequest&, CreateIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceResponse> CreateInstanceOutcome;
                typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::CreateInstanceRequest&, CreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIndexResponse> DeleteIndexOutcome;
                typedef std::future<DeleteIndexOutcome> DeleteIndexOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DeleteIndexRequest&, DeleteIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstanceResponse> DeleteInstanceOutcome;
                typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DeleteInstanceRequest&, DeleteInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIndexListResponse> DescribeIndexListOutcome;
                typedef std::future<DescribeIndexListOutcome> DescribeIndexListOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeIndexListRequest&, DescribeIndexListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIndexListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIndexMetaResponse> DescribeIndexMetaOutcome;
                typedef std::future<DescribeIndexMetaOutcome> DescribeIndexMetaOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeIndexMetaRequest&, DescribeIndexMetaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIndexMetaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceLogsResponse> DescribeInstanceLogsOutcome;
                typedef std::future<DescribeInstanceLogsOutcome> DescribeInstanceLogsOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeInstanceLogsRequest&, DescribeInstanceLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceOperationsResponse> DescribeInstanceOperationsOutcome;
                typedef std::future<DescribeInstanceOperationsOutcome> DescribeInstanceOperationsOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeInstanceOperationsRequest&, DescribeInstanceOperationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceOperationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeViewsResponse> DescribeViewsOutcome;
                typedef std::future<DescribeViewsOutcome> DescribeViewsOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::DescribeViewsRequest&, DescribeViewsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeViewsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRequestTargetNodeTypesResponse> GetRequestTargetNodeTypesOutcome;
                typedef std::future<GetRequestTargetNodeTypesOutcome> GetRequestTargetNodeTypesOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::GetRequestTargetNodeTypesRequest&, GetRequestTargetNodeTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRequestTargetNodeTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartInstanceResponse> RestartInstanceOutcome;
                typedef std::future<RestartInstanceOutcome> RestartInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::RestartInstanceRequest&, RestartInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartKibanaResponse> RestartKibanaOutcome;
                typedef std::future<RestartKibanaOutcome> RestartKibanaOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::RestartKibanaRequest&, RestartKibanaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartKibanaAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartNodesResponse> RestartNodesOutcome;
                typedef std::future<RestartNodesOutcome> RestartNodesOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::RestartNodesRequest&, RestartNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDictionariesResponse> UpdateDictionariesOutcome;
                typedef std::future<UpdateDictionariesOutcome> UpdateDictionariesOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpdateDictionariesRequest&, UpdateDictionariesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDictionariesAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateIndexResponse> UpdateIndexOutcome;
                typedef std::future<UpdateIndexOutcome> UpdateIndexOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpdateIndexRequest&, UpdateIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateInstanceResponse> UpdateInstanceOutcome;
                typedef std::future<UpdateInstanceOutcome> UpdateInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpdateInstanceRequest&, UpdateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePluginsResponse> UpdatePluginsOutcome;
                typedef std::future<UpdatePluginsOutcome> UpdatePluginsOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpdatePluginsRequest&, UpdatePluginsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePluginsAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRequestTargetNodeTypesResponse> UpdateRequestTargetNodeTypesOutcome;
                typedef std::future<UpdateRequestTargetNodeTypesOutcome> UpdateRequestTargetNodeTypesOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpdateRequestTargetNodeTypesRequest&, UpdateRequestTargetNodeTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRequestTargetNodeTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeInstanceResponse> UpgradeInstanceOutcome;
                typedef std::future<UpgradeInstanceOutcome> UpgradeInstanceOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpgradeInstanceRequest&, UpgradeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeLicenseResponse> UpgradeLicenseOutcome;
                typedef std::future<UpgradeLicenseOutcome> UpgradeLicenseOutcomeCallable;
                typedef std::function<void(const EsClient*, const Model::UpgradeLicenseRequest&, UpgradeLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeLicenseAsyncHandler;



                /**
                 *This API is used to create indices.
                 * @param req CreateIndexRequest
                 * @return CreateIndexOutcome
                 */
                CreateIndexOutcome CreateIndex(const Model::CreateIndexRequest &request);
                void CreateIndexAsync(const Model::CreateIndexRequest& request, const CreateIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIndexOutcomeCallable CreateIndexCallable(const Model::CreateIndexRequest& request);

                /**
                 *This API is used to create an ES cluster instance with the specified specification.
                 * @param req CreateInstanceRequest
                 * @return CreateInstanceOutcome
                 */
                CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest &request);
                void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request);

                /**
                 *This API is used to delete indices.
                 * @param req DeleteIndexRequest
                 * @return DeleteIndexOutcome
                 */
                DeleteIndexOutcome DeleteIndex(const Model::DeleteIndexRequest &request);
                void DeleteIndexAsync(const Model::DeleteIndexRequest& request, const DeleteIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIndexOutcomeCallable DeleteIndexCallable(const Model::DeleteIndexRequest& request);

                /**
                 *This API is used to terminate a cluster instance. 
                 * @param req DeleteInstanceRequest
                 * @return DeleteInstanceOutcome
                 */
                DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest &request);
                void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request);

                /**
                 *This API is used to obtain the index list.
                 * @param req DescribeIndexListRequest
                 * @return DescribeIndexListOutcome
                 */
                DescribeIndexListOutcome DescribeIndexList(const Model::DescribeIndexListRequest &request);
                void DescribeIndexListAsync(const Model::DescribeIndexListRequest& request, const DescribeIndexListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIndexListOutcomeCallable DescribeIndexListCallable(const Model::DescribeIndexListRequest& request);

                /**
                 *This API is used to obtain index metadata.
                 * @param req DescribeIndexMetaRequest
                 * @return DescribeIndexMetaOutcome
                 */
                DescribeIndexMetaOutcome DescribeIndexMeta(const Model::DescribeIndexMetaRequest &request);
                void DescribeIndexMetaAsync(const Model::DescribeIndexMetaRequest& request, const DescribeIndexMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIndexMetaOutcomeCallable DescribeIndexMetaCallable(const Model::DescribeIndexMetaRequest& request);

                /**
                 *This API is used to query the eligible ES cluster logs in the current region.
                 * @param req DescribeInstanceLogsRequest
                 * @return DescribeInstanceLogsOutcome
                 */
                DescribeInstanceLogsOutcome DescribeInstanceLogs(const Model::DescribeInstanceLogsRequest &request);
                void DescribeInstanceLogsAsync(const Model::DescribeInstanceLogsRequest& request, const DescribeInstanceLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceLogsOutcomeCallable DescribeInstanceLogsCallable(const Model::DescribeInstanceLogsRequest& request);

                /**
                 *This API is used to query the operation history of an instance by specified criteria.
                 * @param req DescribeInstanceOperationsRequest
                 * @return DescribeInstanceOperationsOutcome
                 */
                DescribeInstanceOperationsOutcome DescribeInstanceOperations(const Model::DescribeInstanceOperationsRequest &request);
                void DescribeInstanceOperationsAsync(const Model::DescribeInstanceOperationsRequest& request, const DescribeInstanceOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOperationsOutcomeCallable DescribeInstanceOperationsCallable(const Model::DescribeInstanceOperationsRequest& request);

                /**
                 *This API is used to query all eligible instances in the current region under the current account.
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *This API is used to query view data from three dimensions: cluster, node, and Kibana.
                 * @param req DescribeViewsRequest
                 * @return DescribeViewsOutcome
                 */
                DescribeViewsOutcome DescribeViews(const Model::DescribeViewsRequest &request);
                void DescribeViewsAsync(const Model::DescribeViewsRequest& request, const DescribeViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeViewsOutcomeCallable DescribeViewsCallable(const Model::DescribeViewsRequest& request);

                /**
                 *This API is used to get the node types used to receive client requests.
                 * @param req GetRequestTargetNodeTypesRequest
                 * @return GetRequestTargetNodeTypesOutcome
                 */
                GetRequestTargetNodeTypesOutcome GetRequestTargetNodeTypes(const Model::GetRequestTargetNodeTypesRequest &request);
                void GetRequestTargetNodeTypesAsync(const Model::GetRequestTargetNodeTypesRequest& request, const GetRequestTargetNodeTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRequestTargetNodeTypesOutcomeCallable GetRequestTargetNodeTypesCallable(const Model::GetRequestTargetNodeTypesRequest& request);

                /**
                 *This API is used to restart an ES cluster instance (for operations such as system update). 
                 * @param req RestartInstanceRequest
                 * @return RestartInstanceOutcome
                 */
                RestartInstanceOutcome RestartInstance(const Model::RestartInstanceRequest &request);
                void RestartInstanceAsync(const Model::RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartInstanceOutcomeCallable RestartInstanceCallable(const Model::RestartInstanceRequest& request);

                /**
                 *This API is used to restart Kibana. 
                 * @param req RestartKibanaRequest
                 * @return RestartKibanaOutcome
                 */
                RestartKibanaOutcome RestartKibana(const Model::RestartKibanaRequest &request);
                void RestartKibanaAsync(const Model::RestartKibanaRequest& request, const RestartKibanaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartKibanaOutcomeCallable RestartKibanaCallable(const Model::RestartKibanaRequest& request);

                /**
                 *This API is used to restart cluster nodes.
                 * @param req RestartNodesRequest
                 * @return RestartNodesOutcome
                 */
                RestartNodesOutcome RestartNodes(const Model::RestartNodesRequest &request);
                void RestartNodesAsync(const Model::RestartNodesRequest& request, const RestartNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartNodesOutcomeCallable RestartNodesCallable(const Model::RestartNodesRequest& request);

                /**
                 *This API is used to update ES cluster dictionaries.
                 * @param req UpdateDictionariesRequest
                 * @return UpdateDictionariesOutcome
                 */
                UpdateDictionariesOutcome UpdateDictionaries(const Model::UpdateDictionariesRequest &request);
                void UpdateDictionariesAsync(const Model::UpdateDictionariesRequest& request, const UpdateDictionariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDictionariesOutcomeCallable UpdateDictionariesCallable(const Model::UpdateDictionariesRequest& request);

                /**
                 *This API is used to update indices.
                 * @param req UpdateIndexRequest
                 * @return UpdateIndexOutcome
                 */
                UpdateIndexOutcome UpdateIndex(const Model::UpdateIndexRequest &request);
                void UpdateIndexAsync(const Model::UpdateIndexRequest& request, const UpdateIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateIndexOutcomeCallable UpdateIndexCallable(const Model::UpdateIndexRequest& request);

                /**
                 *This API is used for operations such as modifying node specification, renaming an instance, modifying configuration, resetting password, and setting Kibana blocklist/allowlist. `InstanceId` is required, while `ForceRestart` is optional. Other parameters or parameter combinations and their meanings are as follows:
- InstanceName: renames an instance (only for instance identification)
- NodeInfoList: modifies node configuration (horizontally scaling nodes, vertically scaling nodes, adding primary nodes, adding cold nodes, etc.)
- EsConfig: modifies cluster configuration
- Password: changes the password of the default user "elastic"
- EsAcl: modifies the ACL
- CosBackUp: sets auto-backup to COS for a cluster
Only one of the parameters or parameter combinations above can be passed in at a time, while passing fewer or more ones will cause the request to fail.
                 * @param req UpdateInstanceRequest
                 * @return UpdateInstanceOutcome
                 */
                UpdateInstanceOutcome UpdateInstance(const Model::UpdateInstanceRequest &request);
                void UpdateInstanceAsync(const Model::UpdateInstanceRequest& request, const UpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateInstanceOutcomeCallable UpdateInstanceCallable(const Model::UpdateInstanceRequest& request);

                /**
                 *This API is used to change the list of plugins.
                 * @param req UpdatePluginsRequest
                 * @return UpdatePluginsOutcome
                 */
                UpdatePluginsOutcome UpdatePlugins(const Model::UpdatePluginsRequest &request);
                void UpdatePluginsAsync(const Model::UpdatePluginsRequest& request, const UpdatePluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePluginsOutcomeCallable UpdatePluginsCallable(const Model::UpdatePluginsRequest& request);

                /**
                 *This API is used to update the node types used to receive client requests.
                 * @param req UpdateRequestTargetNodeTypesRequest
                 * @return UpdateRequestTargetNodeTypesOutcome
                 */
                UpdateRequestTargetNodeTypesOutcome UpdateRequestTargetNodeTypes(const Model::UpdateRequestTargetNodeTypesRequest &request);
                void UpdateRequestTargetNodeTypesAsync(const Model::UpdateRequestTargetNodeTypesRequest& request, const UpdateRequestTargetNodeTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRequestTargetNodeTypesOutcomeCallable UpdateRequestTargetNodeTypesCallable(const Model::UpdateRequestTargetNodeTypesRequest& request);

                /**
                 *This API is used to upgrade ES cluster version
                 * @param req UpgradeInstanceRequest
                 * @return UpgradeInstanceOutcome
                 */
                UpgradeInstanceOutcome UpgradeInstance(const Model::UpgradeInstanceRequest &request);
                void UpgradeInstanceAsync(const Model::UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeInstanceOutcomeCallable UpgradeInstanceCallable(const Model::UpgradeInstanceRequest& request);

                /**
                 *This API is used to upgrade ES X-Pack.
                 * @param req UpgradeLicenseRequest
                 * @return UpgradeLicenseOutcome
                 */
                UpgradeLicenseOutcome UpgradeLicense(const Model::UpgradeLicenseRequest &request);
                void UpgradeLicenseAsync(const Model::UpgradeLicenseRequest& request, const UpgradeLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeLicenseOutcomeCallable UpgradeLicenseCallable(const Model::UpgradeLicenseRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_ESCLIENT_H_
