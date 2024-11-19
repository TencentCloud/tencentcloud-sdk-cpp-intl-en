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

#ifndef TENCENTCLOUD_GWLB_V20240906_GWLBCLIENT_H_
#define TENCENTCLOUD_GWLB_V20240906_GWLBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/gwlb/v20240906/model/AssociateTargetGroupsRequest.h>
#include <tencentcloud/gwlb/v20240906/model/AssociateTargetGroupsResponse.h>
#include <tencentcloud/gwlb/v20240906/model/CreateGatewayLoadBalancerRequest.h>
#include <tencentcloud/gwlb/v20240906/model/CreateGatewayLoadBalancerResponse.h>
#include <tencentcloud/gwlb/v20240906/model/CreateTargetGroupRequest.h>
#include <tencentcloud/gwlb/v20240906/model/CreateTargetGroupResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DeleteGatewayLoadBalancerRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DeleteGatewayLoadBalancerResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DeleteTargetGroupsRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DeleteTargetGroupsResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DeregisterTargetGroupInstancesRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DeregisterTargetGroupInstancesResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeGatewayLoadBalancersRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeGatewayLoadBalancersResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTargetGroupInstanceStatusRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTargetGroupInstanceStatusResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTargetGroupInstancesRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTargetGroupInstancesResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTargetGroupListRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTargetGroupListResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTargetGroupsRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTargetGroupsResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTaskStatusRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DescribeTaskStatusResponse.h>
#include <tencentcloud/gwlb/v20240906/model/DisassociateTargetGroupsRequest.h>
#include <tencentcloud/gwlb/v20240906/model/DisassociateTargetGroupsResponse.h>
#include <tencentcloud/gwlb/v20240906/model/InquirePriceCreateGatewayLoadBalancerRequest.h>
#include <tencentcloud/gwlb/v20240906/model/InquirePriceCreateGatewayLoadBalancerResponse.h>
#include <tencentcloud/gwlb/v20240906/model/ModifyGatewayLoadBalancerAttributeRequest.h>
#include <tencentcloud/gwlb/v20240906/model/ModifyGatewayLoadBalancerAttributeResponse.h>
#include <tencentcloud/gwlb/v20240906/model/ModifyTargetGroupAttributeRequest.h>
#include <tencentcloud/gwlb/v20240906/model/ModifyTargetGroupAttributeResponse.h>
#include <tencentcloud/gwlb/v20240906/model/ModifyTargetGroupInstancesWeightRequest.h>
#include <tencentcloud/gwlb/v20240906/model/ModifyTargetGroupInstancesWeightResponse.h>
#include <tencentcloud/gwlb/v20240906/model/RegisterTargetGroupInstancesRequest.h>
#include <tencentcloud/gwlb/v20240906/model/RegisterTargetGroupInstancesResponse.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            class GwlbClient : public AbstractClient
            {
            public:
                GwlbClient(const Credential &credential, const std::string &region);
                GwlbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AssociateTargetGroupsResponse> AssociateTargetGroupsOutcome;
                typedef std::future<AssociateTargetGroupsOutcome> AssociateTargetGroupsOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::AssociateTargetGroupsRequest&, AssociateTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGatewayLoadBalancerResponse> CreateGatewayLoadBalancerOutcome;
                typedef std::future<CreateGatewayLoadBalancerOutcome> CreateGatewayLoadBalancerOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::CreateGatewayLoadBalancerRequest&, CreateGatewayLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGatewayLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTargetGroupResponse> CreateTargetGroupOutcome;
                typedef std::future<CreateTargetGroupOutcome> CreateTargetGroupOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::CreateTargetGroupRequest&, CreateTargetGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTargetGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGatewayLoadBalancerResponse> DeleteGatewayLoadBalancerOutcome;
                typedef std::future<DeleteGatewayLoadBalancerOutcome> DeleteGatewayLoadBalancerOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DeleteGatewayLoadBalancerRequest&, DeleteGatewayLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTargetGroupsResponse> DeleteTargetGroupsOutcome;
                typedef std::future<DeleteTargetGroupsOutcome> DeleteTargetGroupsOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DeleteTargetGroupsRequest&, DeleteTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeregisterTargetGroupInstancesResponse> DeregisterTargetGroupInstancesOutcome;
                typedef std::future<DeregisterTargetGroupInstancesOutcome> DeregisterTargetGroupInstancesOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DeregisterTargetGroupInstancesRequest&, DeregisterTargetGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeregisterTargetGroupInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewayLoadBalancersResponse> DescribeGatewayLoadBalancersOutcome;
                typedef std::future<DescribeGatewayLoadBalancersOutcome> DescribeGatewayLoadBalancersOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DescribeGatewayLoadBalancersRequest&, DescribeGatewayLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupInstanceStatusResponse> DescribeTargetGroupInstanceStatusOutcome;
                typedef std::future<DescribeTargetGroupInstanceStatusOutcome> DescribeTargetGroupInstanceStatusOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DescribeTargetGroupInstanceStatusRequest&, DescribeTargetGroupInstanceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupInstanceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupInstancesResponse> DescribeTargetGroupInstancesOutcome;
                typedef std::future<DescribeTargetGroupInstancesOutcome> DescribeTargetGroupInstancesOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DescribeTargetGroupInstancesRequest&, DescribeTargetGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupListResponse> DescribeTargetGroupListOutcome;
                typedef std::future<DescribeTargetGroupListOutcome> DescribeTargetGroupListOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DescribeTargetGroupListRequest&, DescribeTargetGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupsResponse> DescribeTargetGroupsOutcome;
                typedef std::future<DescribeTargetGroupsOutcome> DescribeTargetGroupsOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DescribeTargetGroupsRequest&, DescribeTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskStatusResponse> DescribeTaskStatusOutcome;
                typedef std::future<DescribeTaskStatusOutcome> DescribeTaskStatusOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DescribeTaskStatusRequest&, DescribeTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateTargetGroupsResponse> DisassociateTargetGroupsOutcome;
                typedef std::future<DisassociateTargetGroupsOutcome> DisassociateTargetGroupsOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::DisassociateTargetGroupsRequest&, DisassociateTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceCreateGatewayLoadBalancerResponse> InquirePriceCreateGatewayLoadBalancerOutcome;
                typedef std::future<InquirePriceCreateGatewayLoadBalancerOutcome> InquirePriceCreateGatewayLoadBalancerOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::InquirePriceCreateGatewayLoadBalancerRequest&, InquirePriceCreateGatewayLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceCreateGatewayLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGatewayLoadBalancerAttributeResponse> ModifyGatewayLoadBalancerAttributeOutcome;
                typedef std::future<ModifyGatewayLoadBalancerAttributeOutcome> ModifyGatewayLoadBalancerAttributeOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::ModifyGatewayLoadBalancerAttributeRequest&, ModifyGatewayLoadBalancerAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGatewayLoadBalancerAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetGroupAttributeResponse> ModifyTargetGroupAttributeOutcome;
                typedef std::future<ModifyTargetGroupAttributeOutcome> ModifyTargetGroupAttributeOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::ModifyTargetGroupAttributeRequest&, ModifyTargetGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetGroupInstancesWeightResponse> ModifyTargetGroupInstancesWeightOutcome;
                typedef std::future<ModifyTargetGroupInstancesWeightOutcome> ModifyTargetGroupInstancesWeightOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::ModifyTargetGroupInstancesWeightRequest&, ModifyTargetGroupInstancesWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetGroupInstancesWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterTargetGroupInstancesResponse> RegisterTargetGroupInstancesOutcome;
                typedef std::future<RegisterTargetGroupInstancesOutcome> RegisterTargetGroupInstancesOutcomeCallable;
                typedef std::function<void(const GwlbClient*, const Model::RegisterTargetGroupInstancesRequest&, RegisterTargetGroupInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterTargetGroupInstancesAsyncHandler;



                /**
                 *This API is used to bind target groups to a CLB.This is an async API. After the API return succeeds, you can call the DescribeTaskStatus API with the returned RequestID as an input parameter to check whether this task is successful.
                 * @param req AssociateTargetGroupsRequest
                 * @return AssociateTargetGroupsOutcome
                 */
                AssociateTargetGroupsOutcome AssociateTargetGroups(const Model::AssociateTargetGroupsRequest &request);
                void AssociateTargetGroupsAsync(const Model::AssociateTargetGroupsRequest& request, const AssociateTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateTargetGroupsOutcomeCallable AssociateTargetGroupsCallable(const Model::AssociateTargetGroupsRequest& request);

                /**
                 *This API is used to create a GWLB instance. To use the GWLB service, you must purchase one or more GWLB instances. After this API is called successfully, a unique ID for the GWLB instance will be returned.Note: The default purchase quota for each account in each region is 10.This is an async API. After the API is called successfully, you can use the DescribeGatewayLoadBalancers API to query the status of the GWLB instance (such as creating and normal) to determine whether the creation is successful.
                 * @param req CreateGatewayLoadBalancerRequest
                 * @return CreateGatewayLoadBalancerOutcome
                 */
                CreateGatewayLoadBalancerOutcome CreateGatewayLoadBalancer(const Model::CreateGatewayLoadBalancerRequest &request);
                void CreateGatewayLoadBalancerAsync(const Model::CreateGatewayLoadBalancerRequest& request, const CreateGatewayLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGatewayLoadBalancerOutcomeCallable CreateGatewayLoadBalancerCallable(const Model::CreateGatewayLoadBalancerRequest& request);

                /**
                 *This API is used to create a target group. This feature is in beta testing. If you need to use it, please [submit a ticket](https://console.cloud.tencent.com/workorder/category?level1_id=6&level2_id=163&source=0&data_title=%E8%B4%9F%E8%BD%BD%E5%9D%87%E8%A1%A1%20LB&step=1).
                 * @param req CreateTargetGroupRequest
                 * @return CreateTargetGroupOutcome
                 */
                CreateTargetGroupOutcome CreateTargetGroup(const Model::CreateTargetGroupRequest &request);
                void CreateTargetGroupAsync(const Model::CreateTargetGroupRequest& request, const CreateTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTargetGroupOutcomeCallable CreateTargetGroupCallable(const Model::CreateTargetGroupRequest& request);

                /**
                 *This API is used to delete one or more specified GWLB instances. After successful deletion, the GWLB instances will be unbound from the backend service.This is an async API. After the API return succeeds, you can call the DescribeTaskStatus API with the returned RequestId as an input parameter to check whether this task is successful.
                 * @param req DeleteGatewayLoadBalancerRequest
                 * @return DeleteGatewayLoadBalancerOutcome
                 */
                DeleteGatewayLoadBalancerOutcome DeleteGatewayLoadBalancer(const Model::DeleteGatewayLoadBalancerRequest &request);
                void DeleteGatewayLoadBalancerAsync(const Model::DeleteGatewayLoadBalancerRequest& request, const DeleteGatewayLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGatewayLoadBalancerOutcomeCallable DeleteGatewayLoadBalancerCallable(const Model::DeleteGatewayLoadBalancerRequest& request);

                /**
                 *This API is used to delete a target group.
                 * @param req DeleteTargetGroupsRequest
                 * @return DeleteTargetGroupsOutcome
                 */
                DeleteTargetGroupsOutcome DeleteTargetGroups(const Model::DeleteTargetGroupsRequest &request);
                void DeleteTargetGroupsAsync(const Model::DeleteTargetGroupsRequest& request, const DeleteTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTargetGroupsOutcomeCallable DeleteTargetGroupsCallable(const Model::DeleteTargetGroupsRequest& request);

                /**
                 *This API is used to unbind a server from a target group.
This is an async API. After the API return succeeds, you can call the DescribeTaskStatus API with the returned RequestID as an input parameter to check whether this task is successful.
                 * @param req DeregisterTargetGroupInstancesRequest
                 * @return DeregisterTargetGroupInstancesOutcome
                 */
                DeregisterTargetGroupInstancesOutcome DeregisterTargetGroupInstances(const Model::DeregisterTargetGroupInstancesRequest &request);
                void DeregisterTargetGroupInstancesAsync(const Model::DeregisterTargetGroupInstancesRequest& request, const DeregisterTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeregisterTargetGroupInstancesOutcomeCallable DeregisterTargetGroupInstancesCallable(const Model::DeregisterTargetGroupInstancesRequest& request);

                /**
                 *This API is used to query the list of GWLB instances in a region.
                 * @param req DescribeGatewayLoadBalancersRequest
                 * @return DescribeGatewayLoadBalancersOutcome
                 */
                DescribeGatewayLoadBalancersOutcome DescribeGatewayLoadBalancers(const Model::DescribeGatewayLoadBalancersRequest &request);
                void DescribeGatewayLoadBalancersAsync(const Model::DescribeGatewayLoadBalancersRequest& request, const DescribeGatewayLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewayLoadBalancersOutcomeCallable DescribeGatewayLoadBalancersCallable(const Model::DescribeGatewayLoadBalancersRequest& request);

                /**
                 *This API is used to query the backend service status of a target group. Currently, only GWLB type target groups support querying backend service status.
                 * @param req DescribeTargetGroupInstanceStatusRequest
                 * @return DescribeTargetGroupInstanceStatusOutcome
                 */
                DescribeTargetGroupInstanceStatusOutcome DescribeTargetGroupInstanceStatus(const Model::DescribeTargetGroupInstanceStatusRequest &request);
                void DescribeTargetGroupInstanceStatusAsync(const Model::DescribeTargetGroupInstanceStatusRequest& request, const DescribeTargetGroupInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupInstanceStatusOutcomeCallable DescribeTargetGroupInstanceStatusCallable(const Model::DescribeTargetGroupInstanceStatusRequest& request);

                /**
                 *This API is used to obtain information on servers bound to a target group.
                 * @param req DescribeTargetGroupInstancesRequest
                 * @return DescribeTargetGroupInstancesOutcome
                 */
                DescribeTargetGroupInstancesOutcome DescribeTargetGroupInstances(const Model::DescribeTargetGroupInstancesRequest &request);
                void DescribeTargetGroupInstancesAsync(const Model::DescribeTargetGroupInstancesRequest& request, const DescribeTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupInstancesOutcomeCallable DescribeTargetGroupInstancesCallable(const Model::DescribeTargetGroupInstancesRequest& request);

                /**
                 *This API is used to obtain a target group list.
                 * @param req DescribeTargetGroupListRequest
                 * @return DescribeTargetGroupListOutcome
                 */
                DescribeTargetGroupListOutcome DescribeTargetGroupList(const Model::DescribeTargetGroupListRequest &request);
                void DescribeTargetGroupListAsync(const Model::DescribeTargetGroupListRequest& request, const DescribeTargetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupListOutcomeCallable DescribeTargetGroupListCallable(const Model::DescribeTargetGroupListRequest& request);

                /**
                 *This API is used to query target group information.
                 * @param req DescribeTargetGroupsRequest
                 * @return DescribeTargetGroupsOutcome
                 */
                DescribeTargetGroupsOutcome DescribeTargetGroups(const Model::DescribeTargetGroupsRequest &request);
                void DescribeTargetGroupsAsync(const Model::DescribeTargetGroupsRequest& request, const DescribeTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupsOutcomeCallable DescribeTargetGroupsCallable(const Model::DescribeTargetGroupsRequest& request);

                /**
                 *This API is used to query the execution status of an async task. After non-query APIs (for example, used to create/delete CLB instances) are called successfully, this API needs to be used to query whether the task is successful.
                 * @param req DescribeTaskStatusRequest
                 * @return DescribeTaskStatusOutcome
                 */
                DescribeTaskStatusOutcome DescribeTaskStatus(const Model::DescribeTaskStatusRequest &request);
                void DescribeTaskStatusAsync(const Model::DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskStatusOutcomeCallable DescribeTaskStatusCallable(const Model::DescribeTaskStatusRequest& request);

                /**
                 *This API is used to disassociate a CLB from a target group.This is an async API. After the API return succeeds, you can call the DescribeTaskStatus API with the returned RequestID as an input parameter to check whether this task is successful.
                 * @param req DisassociateTargetGroupsRequest
                 * @return DisassociateTargetGroupsOutcome
                 */
                DisassociateTargetGroupsOutcome DisassociateTargetGroups(const Model::DisassociateTargetGroupsRequest &request);
                void DisassociateTargetGroupsAsync(const Model::DisassociateTargetGroupsRequest& request, const DisassociateTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateTargetGroupsOutcomeCallable DisassociateTargetGroupsCallable(const Model::DisassociateTargetGroupsRequest& request);

                /**
                 *This API is used to query the price for creating a GWLB.
                 * @param req InquirePriceCreateGatewayLoadBalancerRequest
                 * @return InquirePriceCreateGatewayLoadBalancerOutcome
                 */
                InquirePriceCreateGatewayLoadBalancerOutcome InquirePriceCreateGatewayLoadBalancer(const Model::InquirePriceCreateGatewayLoadBalancerRequest &request);
                void InquirePriceCreateGatewayLoadBalancerAsync(const Model::InquirePriceCreateGatewayLoadBalancerRequest& request, const InquirePriceCreateGatewayLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceCreateGatewayLoadBalancerOutcomeCallable InquirePriceCreateGatewayLoadBalancerCallable(const Model::InquirePriceCreateGatewayLoadBalancerRequest& request);

                /**
                 *This API is used to modify the attributes of a CLB instance. It supports modifying the name and bandwidth cap of the CLB instance.
                 * @param req ModifyGatewayLoadBalancerAttributeRequest
                 * @return ModifyGatewayLoadBalancerAttributeOutcome
                 */
                ModifyGatewayLoadBalancerAttributeOutcome ModifyGatewayLoadBalancerAttribute(const Model::ModifyGatewayLoadBalancerAttributeRequest &request);
                void ModifyGatewayLoadBalancerAttributeAsync(const Model::ModifyGatewayLoadBalancerAttributeRequest& request, const ModifyGatewayLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGatewayLoadBalancerAttributeOutcomeCallable ModifyGatewayLoadBalancerAttributeCallable(const Model::ModifyGatewayLoadBalancerAttributeRequest& request);

                /**
                 *This API is used to modify the name, health check, and other attributes of the target group.
                 * @param req ModifyTargetGroupAttributeRequest
                 * @return ModifyTargetGroupAttributeOutcome
                 */
                ModifyTargetGroupAttributeOutcome ModifyTargetGroupAttribute(const Model::ModifyTargetGroupAttributeRequest &request);
                void ModifyTargetGroupAttributeAsync(const Model::ModifyTargetGroupAttributeRequest& request, const ModifyTargetGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetGroupAttributeOutcomeCallable ModifyTargetGroupAttributeCallable(const Model::ModifyTargetGroupAttributeRequest& request);

                /**
                 *This API is used to modify the server weight of a target group.This is an async API. After the API return succeeds, you can call the DescribeTaskStatus API with the returned RequestID as an input parameter to check whether this task is successful.
                 * @param req ModifyTargetGroupInstancesWeightRequest
                 * @return ModifyTargetGroupInstancesWeightOutcome
                 */
                ModifyTargetGroupInstancesWeightOutcome ModifyTargetGroupInstancesWeight(const Model::ModifyTargetGroupInstancesWeightRequest &request);
                void ModifyTargetGroupInstancesWeightAsync(const Model::ModifyTargetGroupInstancesWeightRequest& request, const ModifyTargetGroupInstancesWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetGroupInstancesWeightOutcomeCallable ModifyTargetGroupInstancesWeightCallable(const Model::ModifyTargetGroupInstancesWeightRequest& request);

                /**
                 *This API is used to register servers to a target group.This is an async API. After the API return succeeds, you can call the DescribeTaskStatus API with the returned RequestID as an input parameter to check whether this task is successful.
                 * @param req RegisterTargetGroupInstancesRequest
                 * @return RegisterTargetGroupInstancesOutcome
                 */
                RegisterTargetGroupInstancesOutcome RegisterTargetGroupInstances(const Model::RegisterTargetGroupInstancesRequest &request);
                void RegisterTargetGroupInstancesAsync(const Model::RegisterTargetGroupInstancesRequest& request, const RegisterTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterTargetGroupInstancesOutcomeCallable RegisterTargetGroupInstancesCallable(const Model::RegisterTargetGroupInstancesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_GWLBCLIENT_H_
