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

#ifndef TENCENTCLOUD_TKE_V20220501_TKECLIENT_H_
#define TENCENTCLOUD_TKE_V20220501_TKECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tke/v20220501/model/CreateHealthCheckPolicyRequest.h>
#include <tencentcloud/tke/v20220501/model/CreateHealthCheckPolicyResponse.h>
#include <tencentcloud/tke/v20220501/model/CreateNodePoolRequest.h>
#include <tencentcloud/tke/v20220501/model/CreateNodePoolResponse.h>
#include <tencentcloud/tke/v20220501/model/DeleteHealthCheckPolicyRequest.h>
#include <tencentcloud/tke/v20220501/model/DeleteHealthCheckPolicyResponse.h>
#include <tencentcloud/tke/v20220501/model/DeleteNodePoolRequest.h>
#include <tencentcloud/tke/v20220501/model/DeleteNodePoolResponse.h>
#include <tencentcloud/tke/v20220501/model/DescribeClusterInstancesRequest.h>
#include <tencentcloud/tke/v20220501/model/DescribeClusterInstancesResponse.h>
#include <tencentcloud/tke/v20220501/model/DescribeHealthCheckPoliciesRequest.h>
#include <tencentcloud/tke/v20220501/model/DescribeHealthCheckPoliciesResponse.h>
#include <tencentcloud/tke/v20220501/model/DescribeHealthCheckPolicyBindingsRequest.h>
#include <tencentcloud/tke/v20220501/model/DescribeHealthCheckPolicyBindingsResponse.h>
#include <tencentcloud/tke/v20220501/model/DescribeHealthCheckTemplateRequest.h>
#include <tencentcloud/tke/v20220501/model/DescribeHealthCheckTemplateResponse.h>
#include <tencentcloud/tke/v20220501/model/DescribeNodePoolsRequest.h>
#include <tencentcloud/tke/v20220501/model/DescribeNodePoolsResponse.h>
#include <tencentcloud/tke/v20220501/model/ModifyHealthCheckPolicyRequest.h>
#include <tencentcloud/tke/v20220501/model/ModifyHealthCheckPolicyResponse.h>
#include <tencentcloud/tke/v20220501/model/ModifyNodePoolRequest.h>
#include <tencentcloud/tke/v20220501/model/ModifyNodePoolResponse.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            class TkeClient : public AbstractClient
            {
            public:
                TkeClient(const Credential &credential, const std::string &region);
                TkeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateHealthCheckPolicyResponse> CreateHealthCheckPolicyOutcome;
                typedef std::future<CreateHealthCheckPolicyOutcome> CreateHealthCheckPolicyOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateHealthCheckPolicyRequest&, CreateHealthCheckPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHealthCheckPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNodePoolResponse> CreateNodePoolOutcome;
                typedef std::future<CreateNodePoolOutcome> CreateNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateNodePoolRequest&, CreateNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteHealthCheckPolicyResponse> DeleteHealthCheckPolicyOutcome;
                typedef std::future<DeleteHealthCheckPolicyOutcome> DeleteHealthCheckPolicyOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteHealthCheckPolicyRequest&, DeleteHealthCheckPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHealthCheckPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNodePoolResponse> DeleteNodePoolOutcome;
                typedef std::future<DeleteNodePoolOutcome> DeleteNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteNodePoolRequest&, DeleteNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterInstancesResponse> DescribeClusterInstancesOutcome;
                typedef std::future<DescribeClusterInstancesOutcome> DescribeClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterInstancesRequest&, DescribeClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHealthCheckPoliciesResponse> DescribeHealthCheckPoliciesOutcome;
                typedef std::future<DescribeHealthCheckPoliciesOutcome> DescribeHealthCheckPoliciesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeHealthCheckPoliciesRequest&, DescribeHealthCheckPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHealthCheckPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHealthCheckPolicyBindingsResponse> DescribeHealthCheckPolicyBindingsOutcome;
                typedef std::future<DescribeHealthCheckPolicyBindingsOutcome> DescribeHealthCheckPolicyBindingsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeHealthCheckPolicyBindingsRequest&, DescribeHealthCheckPolicyBindingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHealthCheckPolicyBindingsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHealthCheckTemplateResponse> DescribeHealthCheckTemplateOutcome;
                typedef std::future<DescribeHealthCheckTemplateOutcome> DescribeHealthCheckTemplateOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeHealthCheckTemplateRequest&, DescribeHealthCheckTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHealthCheckTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNodePoolsResponse> DescribeNodePoolsOutcome;
                typedef std::future<DescribeNodePoolsOutcome> DescribeNodePoolsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeNodePoolsRequest&, DescribeNodePoolsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodePoolsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHealthCheckPolicyResponse> ModifyHealthCheckPolicyOutcome;
                typedef std::future<ModifyHealthCheckPolicyOutcome> ModifyHealthCheckPolicyOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyHealthCheckPolicyRequest&, ModifyHealthCheckPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHealthCheckPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNodePoolResponse> ModifyNodePoolOutcome;
                typedef std::future<ModifyNodePoolOutcome> ModifyNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyNodePoolRequest&, ModifyNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNodePoolAsyncHandler;



                /**
                 *This API is used to create a health check policy.
                 * @param req CreateHealthCheckPolicyRequest
                 * @return CreateHealthCheckPolicyOutcome
                 */
                CreateHealthCheckPolicyOutcome CreateHealthCheckPolicy(const Model::CreateHealthCheckPolicyRequest &request);
                void CreateHealthCheckPolicyAsync(const Model::CreateHealthCheckPolicyRequest& request, const CreateHealthCheckPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHealthCheckPolicyOutcomeCallable CreateHealthCheckPolicyCallable(const Model::CreateHealthCheckPolicyRequest& request);

                /**
                 *This API is used to create a TKE node pool
                 * @param req CreateNodePoolRequest
                 * @return CreateNodePoolOutcome
                 */
                CreateNodePoolOutcome CreateNodePool(const Model::CreateNodePoolRequest &request);
                void CreateNodePoolAsync(const Model::CreateNodePoolRequest& request, const CreateNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNodePoolOutcomeCallable CreateNodePoolCallable(const Model::CreateNodePoolRequest& request);

                /**
                 *This API is used to delete a health check policy.
                 * @param req DeleteHealthCheckPolicyRequest
                 * @return DeleteHealthCheckPolicyOutcome
                 */
                DeleteHealthCheckPolicyOutcome DeleteHealthCheckPolicy(const Model::DeleteHealthCheckPolicyRequest &request);
                void DeleteHealthCheckPolicyAsync(const Model::DeleteHealthCheckPolicyRequest& request, const DeleteHealthCheckPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHealthCheckPolicyOutcomeCallable DeleteHealthCheckPolicyCallable(const Model::DeleteHealthCheckPolicyRequest& request);

                /**
                 *This API is used to delete a TKE node pool.
                 * @param req DeleteNodePoolRequest
                 * @return DeleteNodePoolOutcome
                 */
                DeleteNodePoolOutcome DeleteNodePool(const Model::DeleteNodePoolRequest &request);
                void DeleteNodePoolAsync(const Model::DeleteNodePoolRequest& request, const DeleteNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNodePoolOutcomeCallable DeleteNodePoolCallable(const Model::DeleteNodePoolRequest& request);

                /**
                 *This API is used to query the information of node instances in a cluster.
                 * @param req DescribeClusterInstancesRequest
                 * @return DescribeClusterInstancesOutcome
                 */
                DescribeClusterInstancesOutcome DescribeClusterInstances(const Model::DescribeClusterInstancesRequest &request);
                void DescribeClusterInstancesAsync(const Model::DescribeClusterInstancesRequest& request, const DescribeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterInstancesOutcomeCallable DescribeClusterInstancesCallable(const Model::DescribeClusterInstancesRequest& request);

                /**
                 *This API is used to query a health check policy.
                 * @param req DescribeHealthCheckPoliciesRequest
                 * @return DescribeHealthCheckPoliciesOutcome
                 */
                DescribeHealthCheckPoliciesOutcome DescribeHealthCheckPolicies(const Model::DescribeHealthCheckPoliciesRequest &request);
                void DescribeHealthCheckPoliciesAsync(const Model::DescribeHealthCheckPoliciesRequest& request, const DescribeHealthCheckPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHealthCheckPoliciesOutcomeCallable DescribeHealthCheckPoliciesCallable(const Model::DescribeHealthCheckPoliciesRequest& request);

                /**
                 *This API is used to query a health check policy binding relationship.
                 * @param req DescribeHealthCheckPolicyBindingsRequest
                 * @return DescribeHealthCheckPolicyBindingsOutcome
                 */
                DescribeHealthCheckPolicyBindingsOutcome DescribeHealthCheckPolicyBindings(const Model::DescribeHealthCheckPolicyBindingsRequest &request);
                void DescribeHealthCheckPolicyBindingsAsync(const Model::DescribeHealthCheckPolicyBindingsRequest& request, const DescribeHealthCheckPolicyBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHealthCheckPolicyBindingsOutcomeCallable DescribeHealthCheckPolicyBindingsCallable(const Model::DescribeHealthCheckPolicyBindingsRequest& request);

                /**
                 *This API is used to query a health check policy template.
                 * @param req DescribeHealthCheckTemplateRequest
                 * @return DescribeHealthCheckTemplateOutcome
                 */
                DescribeHealthCheckTemplateOutcome DescribeHealthCheckTemplate(const Model::DescribeHealthCheckTemplateRequest &request);
                void DescribeHealthCheckTemplateAsync(const Model::DescribeHealthCheckTemplateRequest& request, const DescribeHealthCheckTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHealthCheckTemplateOutcomeCallable DescribeHealthCheckTemplateCallable(const Model::DescribeHealthCheckTemplateRequest& request);

                /**
                 *This API is used to query a TKE node pool list.
                 * @param req DescribeNodePoolsRequest
                 * @return DescribeNodePoolsOutcome
                 */
                DescribeNodePoolsOutcome DescribeNodePools(const Model::DescribeNodePoolsRequest &request);
                void DescribeNodePoolsAsync(const Model::DescribeNodePoolsRequest& request, const DescribeNodePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNodePoolsOutcomeCallable DescribeNodePoolsCallable(const Model::DescribeNodePoolsRequest& request);

                /**
                 *This API is used to modify a health check policy.
                 * @param req ModifyHealthCheckPolicyRequest
                 * @return ModifyHealthCheckPolicyOutcome
                 */
                ModifyHealthCheckPolicyOutcome ModifyHealthCheckPolicy(const Model::ModifyHealthCheckPolicyRequest &request);
                void ModifyHealthCheckPolicyAsync(const Model::ModifyHealthCheckPolicyRequest& request, const ModifyHealthCheckPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHealthCheckPolicyOutcomeCallable ModifyHealthCheckPolicyCallable(const Model::ModifyHealthCheckPolicyRequest& request);

                /**
                 *This API is used to update a TKE node pool.
                 * @param req ModifyNodePoolRequest
                 * @return ModifyNodePoolOutcome
                 */
                ModifyNodePoolOutcome ModifyNodePool(const Model::ModifyNodePoolRequest &request);
                void ModifyNodePoolAsync(const Model::ModifyNodePoolRequest& request, const ModifyNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNodePoolOutcomeCallable ModifyNodePoolCallable(const Model::ModifyNodePoolRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_TKECLIENT_H_
