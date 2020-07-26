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

#ifndef TENCENTCLOUD_SCF_V20180416_SCFCLIENT_H_
#define TENCENTCLOUD_SCF_V20180416_SCFCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/scf/v20180416/model/CopyFunctionRequest.h>
#include <tencentcloud/scf/v20180416/model/CopyFunctionResponse.h>
#include <tencentcloud/scf/v20180416/model/CreateAliasRequest.h>
#include <tencentcloud/scf/v20180416/model/CreateAliasResponse.h>
#include <tencentcloud/scf/v20180416/model/CreateFunctionRequest.h>
#include <tencentcloud/scf/v20180416/model/CreateFunctionResponse.h>
#include <tencentcloud/scf/v20180416/model/CreateNamespaceRequest.h>
#include <tencentcloud/scf/v20180416/model/CreateNamespaceResponse.h>
#include <tencentcloud/scf/v20180416/model/CreateTriggerRequest.h>
#include <tencentcloud/scf/v20180416/model/CreateTriggerResponse.h>
#include <tencentcloud/scf/v20180416/model/DeleteAliasRequest.h>
#include <tencentcloud/scf/v20180416/model/DeleteAliasResponse.h>
#include <tencentcloud/scf/v20180416/model/DeleteFunctionRequest.h>
#include <tencentcloud/scf/v20180416/model/DeleteFunctionResponse.h>
#include <tencentcloud/scf/v20180416/model/DeleteLayerVersionRequest.h>
#include <tencentcloud/scf/v20180416/model/DeleteLayerVersionResponse.h>
#include <tencentcloud/scf/v20180416/model/DeleteNamespaceRequest.h>
#include <tencentcloud/scf/v20180416/model/DeleteNamespaceResponse.h>
#include <tencentcloud/scf/v20180416/model/DeleteTriggerRequest.h>
#include <tencentcloud/scf/v20180416/model/DeleteTriggerResponse.h>
#include <tencentcloud/scf/v20180416/model/GetAliasRequest.h>
#include <tencentcloud/scf/v20180416/model/GetAliasResponse.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionRequest.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionResponse.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionAddressRequest.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionAddressResponse.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionLogsRequest.h>
#include <tencentcloud/scf/v20180416/model/GetFunctionLogsResponse.h>
#include <tencentcloud/scf/v20180416/model/GetLayerVersionRequest.h>
#include <tencentcloud/scf/v20180416/model/GetLayerVersionResponse.h>
#include <tencentcloud/scf/v20180416/model/InvokeRequest.h>
#include <tencentcloud/scf/v20180416/model/InvokeResponse.h>
#include <tencentcloud/scf/v20180416/model/ListAliasesRequest.h>
#include <tencentcloud/scf/v20180416/model/ListAliasesResponse.h>
#include <tencentcloud/scf/v20180416/model/ListFunctionsRequest.h>
#include <tencentcloud/scf/v20180416/model/ListFunctionsResponse.h>
#include <tencentcloud/scf/v20180416/model/ListLayerVersionsRequest.h>
#include <tencentcloud/scf/v20180416/model/ListLayerVersionsResponse.h>
#include <tencentcloud/scf/v20180416/model/ListLayersRequest.h>
#include <tencentcloud/scf/v20180416/model/ListLayersResponse.h>
#include <tencentcloud/scf/v20180416/model/ListNamespacesRequest.h>
#include <tencentcloud/scf/v20180416/model/ListNamespacesResponse.h>
#include <tencentcloud/scf/v20180416/model/ListTriggersRequest.h>
#include <tencentcloud/scf/v20180416/model/ListTriggersResponse.h>
#include <tencentcloud/scf/v20180416/model/ListVersionByFunctionRequest.h>
#include <tencentcloud/scf/v20180416/model/ListVersionByFunctionResponse.h>
#include <tencentcloud/scf/v20180416/model/PublishLayerVersionRequest.h>
#include <tencentcloud/scf/v20180416/model/PublishLayerVersionResponse.h>
#include <tencentcloud/scf/v20180416/model/PublishVersionRequest.h>
#include <tencentcloud/scf/v20180416/model/PublishVersionResponse.h>
#include <tencentcloud/scf/v20180416/model/UpdateAliasRequest.h>
#include <tencentcloud/scf/v20180416/model/UpdateAliasResponse.h>
#include <tencentcloud/scf/v20180416/model/UpdateFunctionCodeRequest.h>
#include <tencentcloud/scf/v20180416/model/UpdateFunctionCodeResponse.h>
#include <tencentcloud/scf/v20180416/model/UpdateFunctionConfigurationRequest.h>
#include <tencentcloud/scf/v20180416/model/UpdateFunctionConfigurationResponse.h>
#include <tencentcloud/scf/v20180416/model/UpdateNamespaceRequest.h>
#include <tencentcloud/scf/v20180416/model/UpdateNamespaceResponse.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            class ScfClient : public AbstractClient
            {
            public:
                ScfClient(const Credential &credential, const std::string &region);
                ScfClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CopyFunctionResponse> CopyFunctionOutcome;
                typedef std::future<CopyFunctionOutcome> CopyFunctionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::CopyFunctionRequest&, CopyFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyFunctionAsyncHandler;
                typedef Outcome<Error, Model::CreateAliasResponse> CreateAliasOutcome;
                typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::CreateAliasRequest&, CreateAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAliasAsyncHandler;
                typedef Outcome<Error, Model::CreateFunctionResponse> CreateFunctionOutcome;
                typedef std::future<CreateFunctionOutcome> CreateFunctionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::CreateFunctionRequest&, CreateFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFunctionAsyncHandler;
                typedef Outcome<Error, Model::CreateNamespaceResponse> CreateNamespaceOutcome;
                typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::CreateNamespaceRequest&, CreateNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespaceAsyncHandler;
                typedef Outcome<Error, Model::CreateTriggerResponse> CreateTriggerOutcome;
                typedef std::future<CreateTriggerOutcome> CreateTriggerOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::CreateTriggerRequest&, CreateTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTriggerAsyncHandler;
                typedef Outcome<Error, Model::DeleteAliasResponse> DeleteAliasOutcome;
                typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::DeleteAliasRequest&, DeleteAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAliasAsyncHandler;
                typedef Outcome<Error, Model::DeleteFunctionResponse> DeleteFunctionOutcome;
                typedef std::future<DeleteFunctionOutcome> DeleteFunctionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::DeleteFunctionRequest&, DeleteFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFunctionAsyncHandler;
                typedef Outcome<Error, Model::DeleteLayerVersionResponse> DeleteLayerVersionOutcome;
                typedef std::future<DeleteLayerVersionOutcome> DeleteLayerVersionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::DeleteLayerVersionRequest&, DeleteLayerVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLayerVersionAsyncHandler;
                typedef Outcome<Error, Model::DeleteNamespaceResponse> DeleteNamespaceOutcome;
                typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::DeleteNamespaceRequest&, DeleteNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNamespaceAsyncHandler;
                typedef Outcome<Error, Model::DeleteTriggerResponse> DeleteTriggerOutcome;
                typedef std::future<DeleteTriggerOutcome> DeleteTriggerOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::DeleteTriggerRequest&, DeleteTriggerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTriggerAsyncHandler;
                typedef Outcome<Error, Model::GetAliasResponse> GetAliasOutcome;
                typedef std::future<GetAliasOutcome> GetAliasOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetAliasRequest&, GetAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAliasAsyncHandler;
                typedef Outcome<Error, Model::GetFunctionResponse> GetFunctionOutcome;
                typedef std::future<GetFunctionOutcome> GetFunctionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetFunctionRequest&, GetFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFunctionAsyncHandler;
                typedef Outcome<Error, Model::GetFunctionAddressResponse> GetFunctionAddressOutcome;
                typedef std::future<GetFunctionAddressOutcome> GetFunctionAddressOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetFunctionAddressRequest&, GetFunctionAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFunctionAddressAsyncHandler;
                typedef Outcome<Error, Model::GetFunctionLogsResponse> GetFunctionLogsOutcome;
                typedef std::future<GetFunctionLogsOutcome> GetFunctionLogsOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetFunctionLogsRequest&, GetFunctionLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFunctionLogsAsyncHandler;
                typedef Outcome<Error, Model::GetLayerVersionResponse> GetLayerVersionOutcome;
                typedef std::future<GetLayerVersionOutcome> GetLayerVersionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::GetLayerVersionRequest&, GetLayerVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLayerVersionAsyncHandler;
                typedef Outcome<Error, Model::InvokeResponse> InvokeOutcome;
                typedef std::future<InvokeOutcome> InvokeOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::InvokeRequest&, InvokeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeAsyncHandler;
                typedef Outcome<Error, Model::ListAliasesResponse> ListAliasesOutcome;
                typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListAliasesRequest&, ListAliasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAliasesAsyncHandler;
                typedef Outcome<Error, Model::ListFunctionsResponse> ListFunctionsOutcome;
                typedef std::future<ListFunctionsOutcome> ListFunctionsOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListFunctionsRequest&, ListFunctionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListFunctionsAsyncHandler;
                typedef Outcome<Error, Model::ListLayerVersionsResponse> ListLayerVersionsOutcome;
                typedef std::future<ListLayerVersionsOutcome> ListLayerVersionsOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListLayerVersionsRequest&, ListLayerVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListLayerVersionsAsyncHandler;
                typedef Outcome<Error, Model::ListLayersResponse> ListLayersOutcome;
                typedef std::future<ListLayersOutcome> ListLayersOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListLayersRequest&, ListLayersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListLayersAsyncHandler;
                typedef Outcome<Error, Model::ListNamespacesResponse> ListNamespacesOutcome;
                typedef std::future<ListNamespacesOutcome> ListNamespacesOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListNamespacesRequest&, ListNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListNamespacesAsyncHandler;
                typedef Outcome<Error, Model::ListTriggersResponse> ListTriggersOutcome;
                typedef std::future<ListTriggersOutcome> ListTriggersOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListTriggersRequest&, ListTriggersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTriggersAsyncHandler;
                typedef Outcome<Error, Model::ListVersionByFunctionResponse> ListVersionByFunctionOutcome;
                typedef std::future<ListVersionByFunctionOutcome> ListVersionByFunctionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::ListVersionByFunctionRequest&, ListVersionByFunctionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListVersionByFunctionAsyncHandler;
                typedef Outcome<Error, Model::PublishLayerVersionResponse> PublishLayerVersionOutcome;
                typedef std::future<PublishLayerVersionOutcome> PublishLayerVersionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::PublishLayerVersionRequest&, PublishLayerVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishLayerVersionAsyncHandler;
                typedef Outcome<Error, Model::PublishVersionResponse> PublishVersionOutcome;
                typedef std::future<PublishVersionOutcome> PublishVersionOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::PublishVersionRequest&, PublishVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishVersionAsyncHandler;
                typedef Outcome<Error, Model::UpdateAliasResponse> UpdateAliasOutcome;
                typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::UpdateAliasRequest&, UpdateAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAliasAsyncHandler;
                typedef Outcome<Error, Model::UpdateFunctionCodeResponse> UpdateFunctionCodeOutcome;
                typedef std::future<UpdateFunctionCodeOutcome> UpdateFunctionCodeOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::UpdateFunctionCodeRequest&, UpdateFunctionCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFunctionCodeAsyncHandler;
                typedef Outcome<Error, Model::UpdateFunctionConfigurationResponse> UpdateFunctionConfigurationOutcome;
                typedef std::future<UpdateFunctionConfigurationOutcome> UpdateFunctionConfigurationOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::UpdateFunctionConfigurationRequest&, UpdateFunctionConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFunctionConfigurationAsyncHandler;
                typedef Outcome<Error, Model::UpdateNamespaceResponse> UpdateNamespaceOutcome;
                typedef std::future<UpdateNamespaceOutcome> UpdateNamespaceOutcomeCallable;
                typedef std::function<void(const ScfClient*, const Model::UpdateNamespaceRequest&, UpdateNamespaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNamespaceAsyncHandler;



                /**
                 *This API is used to replicate a function. You can store the replicated function in a specified Region and Namespace.
Note: This API **does not** replicate the following objects or attributes of the function:
1. Function trigger
2. Versions other than $LATEST
3. CLS target of the logs configured in the function

You can manually configure the function after replication as required.
                 * @param req CopyFunctionRequest
                 * @return CopyFunctionOutcome
                 */
                CopyFunctionOutcome CopyFunction(const Model::CopyFunctionRequest &request);
                void CopyFunctionAsync(const Model::CopyFunctionRequest& request, const CopyFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyFunctionOutcomeCallable CopyFunctionCallable(const Model::CopyFunctionRequest& request);

                /**
                 *This API is used to create an alias for a function version. You can use the alias to mark a specific function version such as DEV/RELEASE. You can also modify the version pointed to by the alias at any time.
An alias must point to a master version and can point to an additional version at the same time. If you specify an alias when invoking a function, the request will be sent to the versions pointed to by the alias. You can configure the ratio between the master version and additional version during request sending.
                 * @param req CreateAliasRequest
                 * @return CreateAliasOutcome
                 */
                CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest &request);
                void CreateAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request);

                /**
                 *This API is used to create a function based on the input parameters.
                 * @param req CreateFunctionRequest
                 * @return CreateFunctionOutcome
                 */
                CreateFunctionOutcome CreateFunction(const Model::CreateFunctionRequest &request);
                void CreateFunctionAsync(const Model::CreateFunctionRequest& request, const CreateFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFunctionOutcomeCallable CreateFunctionCallable(const Model::CreateFunctionRequest& request);

                /**
                 *This API is used to create a namespace based on the input parameters.
                 * @param req CreateNamespaceRequest
                 * @return CreateNamespaceOutcome
                 */
                CreateNamespaceOutcome CreateNamespace(const Model::CreateNamespaceRequest &request);
                void CreateNamespaceAsync(const Model::CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNamespaceOutcomeCallable CreateNamespaceCallable(const Model::CreateNamespaceRequest& request);

                /**
                 *This API is used to create a trigger based on the input parameters.
                 * @param req CreateTriggerRequest
                 * @return CreateTriggerOutcome
                 */
                CreateTriggerOutcome CreateTrigger(const Model::CreateTriggerRequest &request);
                void CreateTriggerAsync(const Model::CreateTriggerRequest& request, const CreateTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTriggerOutcomeCallable CreateTriggerCallable(const Model::CreateTriggerRequest& request);

                /**
                 *This API is used to delete an alias of a function version.
                 * @param req DeleteAliasRequest
                 * @return DeleteAliasOutcome
                 */
                DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest &request);
                void DeleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAliasOutcomeCallable DeleteAliasCallable(const Model::DeleteAliasRequest& request);

                /**
                 *This API is used to delete a function based on the input parameters.
                 * @param req DeleteFunctionRequest
                 * @return DeleteFunctionOutcome
                 */
                DeleteFunctionOutcome DeleteFunction(const Model::DeleteFunctionRequest &request);
                void DeleteFunctionAsync(const Model::DeleteFunctionRequest& request, const DeleteFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFunctionOutcomeCallable DeleteFunctionCallable(const Model::DeleteFunctionRequest& request);

                /**
                 *This API is used to delete a specified version of a specified layer. The deleted version cannot be associated with a function, but the deletion does not affect functions that are referencing this layer.
                 * @param req DeleteLayerVersionRequest
                 * @return DeleteLayerVersionOutcome
                 */
                DeleteLayerVersionOutcome DeleteLayerVersion(const Model::DeleteLayerVersionRequest &request);
                void DeleteLayerVersionAsync(const Model::DeleteLayerVersionRequest& request, const DeleteLayerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLayerVersionOutcomeCallable DeleteLayerVersionCallable(const Model::DeleteLayerVersionRequest& request);

                /**
                 *This API is used to create a namespace based on the input parameters.
                 * @param req DeleteNamespaceRequest
                 * @return DeleteNamespaceOutcome
                 */
                DeleteNamespaceOutcome DeleteNamespace(const Model::DeleteNamespaceRequest &request);
                void DeleteNamespaceAsync(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNamespaceOutcomeCallable DeleteNamespaceCallable(const Model::DeleteNamespaceRequest& request);

                /**
                 *This API is used to delete an existing trigger based on the input parameters.
                 * @param req DeleteTriggerRequest
                 * @return DeleteTriggerOutcome
                 */
                DeleteTriggerOutcome DeleteTrigger(const Model::DeleteTriggerRequest &request);
                void DeleteTriggerAsync(const Model::DeleteTriggerRequest& request, const DeleteTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTriggerOutcomeCallable DeleteTriggerCallable(const Model::DeleteTriggerRequest& request);

                /**
                 *This API is used to get the alias details such as the name, description, version, and routing information.
                 * @param req GetAliasRequest
                 * @return GetAliasOutcome
                 */
                GetAliasOutcome GetAlias(const Model::GetAliasRequest &request);
                void GetAliasAsync(const Model::GetAliasRequest& request, const GetAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAliasOutcomeCallable GetAliasCallable(const Model::GetAliasRequest& request);

                /**
                 *This API is used to obtain function details, such as name, code, handler, associated trigger, and timeout.
                 * @param req GetFunctionRequest
                 * @return GetFunctionOutcome
                 */
                GetFunctionOutcome GetFunction(const Model::GetFunctionRequest &request);
                void GetFunctionAsync(const Model::GetFunctionRequest& request, const GetFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFunctionOutcomeCallable GetFunctionCallable(const Model::GetFunctionRequest& request);

                /**
                 *This API is used to obtain the download address of the function code package.
                 * @param req GetFunctionAddressRequest
                 * @return GetFunctionAddressOutcome
                 */
                GetFunctionAddressOutcome GetFunctionAddress(const Model::GetFunctionAddressRequest &request);
                void GetFunctionAddressAsync(const Model::GetFunctionAddressRequest& request, const GetFunctionAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFunctionAddressOutcomeCallable GetFunctionAddressCallable(const Model::GetFunctionAddressRequest& request);

                /**
                 *This API is used to return function running logs according to the specified log query criteria.
                 * @param req GetFunctionLogsRequest
                 * @return GetFunctionLogsOutcome
                 */
                GetFunctionLogsOutcome GetFunctionLogs(const Model::GetFunctionLogsRequest &request);
                void GetFunctionLogsAsync(const Model::GetFunctionLogsRequest& request, const GetFunctionLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFunctionLogsOutcomeCallable GetFunctionLogsCallable(const Model::GetFunctionLogsRequest& request);

                /**
                 *This API is used to get the layer version details, including links used to download files in the layer.
                 * @param req GetLayerVersionRequest
                 * @return GetLayerVersionOutcome
                 */
                GetLayerVersionOutcome GetLayerVersion(const Model::GetLayerVersionRequest &request);
                void GetLayerVersionAsync(const Model::GetLayerVersionRequest& request, const GetLayerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLayerVersionOutcomeCallable GetLayerVersionCallable(const Model::GetLayerVersionRequest& request);

                /**
                 *This API is used to run a function.
                 * @param req InvokeRequest
                 * @return InvokeOutcome
                 */
                InvokeOutcome Invoke(const Model::InvokeRequest &request);
                void InvokeAsync(const Model::InvokeRequest& request, const InvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvokeOutcomeCallable InvokeCallable(const Model::InvokeRequest& request);

                /**
                 *This API is used to return the list of all aliases under a function. You can filter them by the specific function version.
                 * @param req ListAliasesRequest
                 * @return ListAliasesOutcome
                 */
                ListAliasesOutcome ListAliases(const Model::ListAliasesRequest &request);
                void ListAliasesAsync(const Model::ListAliasesRequest& request, const ListAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAliasesOutcomeCallable ListAliasesCallable(const Model::ListAliasesRequest& request);

                /**
                 *This API is used to return relevant function information based on the input query parameters.
                 * @param req ListFunctionsRequest
                 * @return ListFunctionsOutcome
                 */
                ListFunctionsOutcome ListFunctions(const Model::ListFunctionsRequest &request);
                void ListFunctionsAsync(const Model::ListFunctionsRequest& request, const ListFunctionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListFunctionsOutcomeCallable ListFunctionsCallable(const Model::ListFunctionsRequest& request);

                /**
                 *This API is used to get the information of all versions of a specified layer.
                 * @param req ListLayerVersionsRequest
                 * @return ListLayerVersionsOutcome
                 */
                ListLayerVersionsOutcome ListLayerVersions(const Model::ListLayerVersionsRequest &request);
                void ListLayerVersionsAsync(const Model::ListLayerVersionsRequest& request, const ListLayerVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListLayerVersionsOutcomeCallable ListLayerVersionsCallable(const Model::ListLayerVersionsRequest& request);

                /**
                 *This API is used to return the list of all layers, including the information of the latest version of each layer. You can filter them by the compatible runtime.
                 * @param req ListLayersRequest
                 * @return ListLayersOutcome
                 */
                ListLayersOutcome ListLayers(const Model::ListLayersRequest &request);
                void ListLayersAsync(const Model::ListLayersRequest& request, const ListLayersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListLayersOutcomeCallable ListLayersCallable(const Model::ListLayersRequest& request);

                /**
                 *This API is used to display a namespace list.
                 * @param req ListNamespacesRequest
                 * @return ListNamespacesOutcome
                 */
                ListNamespacesOutcome ListNamespaces(const Model::ListNamespacesRequest &request);
                void ListNamespacesAsync(const Model::ListNamespacesRequest& request, const ListNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListNamespacesOutcomeCallable ListNamespacesCallable(const Model::ListNamespacesRequest& request);

                /**
                 *This API is used to get the function trigger list.
                 * @param req ListTriggersRequest
                 * @return ListTriggersOutcome
                 */
                ListTriggersOutcome ListTriggers(const Model::ListTriggersRequest &request);
                void ListTriggersAsync(const Model::ListTriggersRequest& request, const ListTriggersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTriggersOutcomeCallable ListTriggersCallable(const Model::ListTriggersRequest& request);

                /**
                 *This API is used to query the function version based on the input parameters.
                 * @param req ListVersionByFunctionRequest
                 * @return ListVersionByFunctionOutcome
                 */
                ListVersionByFunctionOutcome ListVersionByFunction(const Model::ListVersionByFunctionRequest &request);
                void ListVersionByFunctionAsync(const Model::ListVersionByFunctionRequest& request, const ListVersionByFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListVersionByFunctionOutcomeCallable ListVersionByFunctionCallable(const Model::ListVersionByFunctionRequest& request);

                /**
                 *This API is used to create a version for a layer by using the given .zip file or COS object. Each time this API is called with the same layer name, a new version will be generated.
                 * @param req PublishLayerVersionRequest
                 * @return PublishLayerVersionOutcome
                 */
                PublishLayerVersionOutcome PublishLayerVersion(const Model::PublishLayerVersionRequest &request);
                void PublishLayerVersionAsync(const Model::PublishLayerVersionRequest& request, const PublishLayerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishLayerVersionOutcomeCallable PublishLayerVersionCallable(const Model::PublishLayerVersionRequest& request);

                /**
                 *This API is used for users to release a new version of the function.
                 * @param req PublishVersionRequest
                 * @return PublishVersionOutcome
                 */
                PublishVersionOutcome PublishVersion(const Model::PublishVersionRequest &request);
                void PublishVersionAsync(const Model::PublishVersionRequest& request, const PublishVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishVersionOutcomeCallable PublishVersionCallable(const Model::PublishVersionRequest& request);

                /**
                 *This API is used to update the configuration of an alias.
                 * @param req UpdateAliasRequest
                 * @return UpdateAliasOutcome
                 */
                UpdateAliasOutcome UpdateAlias(const Model::UpdateAliasRequest &request);
                void UpdateAliasAsync(const Model::UpdateAliasRequest& request, const UpdateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAliasOutcomeCallable UpdateAliasCallable(const Model::UpdateAliasRequest& request);

                /**
                 *This API is used to update the function code based on the input parameters.
                 * @param req UpdateFunctionCodeRequest
                 * @return UpdateFunctionCodeOutcome
                 */
                UpdateFunctionCodeOutcome UpdateFunctionCode(const Model::UpdateFunctionCodeRequest &request);
                void UpdateFunctionCodeAsync(const Model::UpdateFunctionCodeRequest& request, const UpdateFunctionCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFunctionCodeOutcomeCallable UpdateFunctionCodeCallable(const Model::UpdateFunctionCodeRequest& request);

                /**
                 *This API is used to update the function configuration based on the input parameters.
                 * @param req UpdateFunctionConfigurationRequest
                 * @return UpdateFunctionConfigurationOutcome
                 */
                UpdateFunctionConfigurationOutcome UpdateFunctionConfiguration(const Model::UpdateFunctionConfigurationRequest &request);
                void UpdateFunctionConfigurationAsync(const Model::UpdateFunctionConfigurationRequest& request, const UpdateFunctionConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFunctionConfigurationOutcomeCallable UpdateFunctionConfigurationCallable(const Model::UpdateFunctionConfigurationRequest& request);

                /**
                 *This API is used to update a namespace.
                 * @param req UpdateNamespaceRequest
                 * @return UpdateNamespaceOutcome
                 */
                UpdateNamespaceOutcome UpdateNamespace(const Model::UpdateNamespaceRequest &request);
                void UpdateNamespaceAsync(const Model::UpdateNamespaceRequest& request, const UpdateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateNamespaceOutcomeCallable UpdateNamespaceCallable(const Model::UpdateNamespaceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_SCFCLIENT_H_
