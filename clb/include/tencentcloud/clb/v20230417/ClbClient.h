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

#ifndef TENCENTCLOUD_CLB_V20230417_CLBCLIENT_H_
#define TENCENTCLOUD_CLB_V20230417_CLBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/clb/v20230417/model/BatchModifyTargetWeightRequest.h>
#include <tencentcloud/clb/v20230417/model/BatchModifyTargetWeightResponse.h>
#include <tencentcloud/clb/v20230417/model/CloneLoadBalancerRequest.h>
#include <tencentcloud/clb/v20230417/model/CloneLoadBalancerResponse.h>
#include <tencentcloud/clb/v20230417/model/CreateLoadBalancerRequest.h>
#include <tencentcloud/clb/v20230417/model/CreateLoadBalancerResponse.h>
#include <tencentcloud/clb/v20230417/model/DescribeClassicalLBListenersRequest.h>
#include <tencentcloud/clb/v20230417/model/DescribeClassicalLBListenersResponse.h>
#include <tencentcloud/clb/v20230417/model/DescribeCustomizedConfigAssociateListRequest.h>
#include <tencentcloud/clb/v20230417/model/DescribeCustomizedConfigAssociateListResponse.h>
#include <tencentcloud/clb/v20230417/model/DescribeCustomizedConfigListRequest.h>
#include <tencentcloud/clb/v20230417/model/DescribeCustomizedConfigListResponse.h>
#include <tencentcloud/clb/v20230417/model/DescribeLoadBalancerListByCertIdRequest.h>
#include <tencentcloud/clb/v20230417/model/DescribeLoadBalancerListByCertIdResponse.h>
#include <tencentcloud/clb/v20230417/model/DescribeLoadBalancersRequest.h>
#include <tencentcloud/clb/v20230417/model/DescribeLoadBalancersResponse.h>
#include <tencentcloud/clb/v20230417/model/DescribeLoadBalancersDetailRequest.h>
#include <tencentcloud/clb/v20230417/model/DescribeLoadBalancersDetailResponse.h>
#include <tencentcloud/clb/v20230417/model/DescribeTargetHealthRequest.h>
#include <tencentcloud/clb/v20230417/model/DescribeTargetHealthResponse.h>
#include <tencentcloud/clb/v20230417/model/SetCustomizedConfigForLoadBalancerRequest.h>
#include <tencentcloud/clb/v20230417/model/SetCustomizedConfigForLoadBalancerResponse.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20230417
        {
            class ClbClient : public AbstractClient
            {
            public:
                ClbClient(const Credential &credential, const std::string &region);
                ClbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BatchModifyTargetWeightResponse> BatchModifyTargetWeightOutcome;
                typedef std::future<BatchModifyTargetWeightOutcome> BatchModifyTargetWeightOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::BatchModifyTargetWeightRequest&, BatchModifyTargetWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyTargetWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::CloneLoadBalancerResponse> CloneLoadBalancerOutcome;
                typedef std::future<CloneLoadBalancerOutcome> CloneLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CloneLoadBalancerRequest&, CloneLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoadBalancerResponse> CreateLoadBalancerOutcome;
                typedef std::future<CreateLoadBalancerOutcome> CreateLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::CreateLoadBalancerRequest&, CreateLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClassicalLBListenersResponse> DescribeClassicalLBListenersOutcome;
                typedef std::future<DescribeClassicalLBListenersOutcome> DescribeClassicalLBListenersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeClassicalLBListenersRequest&, DescribeClassicalLBListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicalLBListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomizedConfigAssociateListResponse> DescribeCustomizedConfigAssociateListOutcome;
                typedef std::future<DescribeCustomizedConfigAssociateListOutcome> DescribeCustomizedConfigAssociateListOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeCustomizedConfigAssociateListRequest&, DescribeCustomizedConfigAssociateListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizedConfigAssociateListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomizedConfigListResponse> DescribeCustomizedConfigListOutcome;
                typedef std::future<DescribeCustomizedConfigListOutcome> DescribeCustomizedConfigListOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeCustomizedConfigListRequest&, DescribeCustomizedConfigListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomizedConfigListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancerListByCertIdResponse> DescribeLoadBalancerListByCertIdOutcome;
                typedef std::future<DescribeLoadBalancerListByCertIdOutcome> DescribeLoadBalancerListByCertIdOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLoadBalancerListByCertIdRequest&, DescribeLoadBalancerListByCertIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerListByCertIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancersResponse> DescribeLoadBalancersOutcome;
                typedef std::future<DescribeLoadBalancersOutcome> DescribeLoadBalancersOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLoadBalancersRequest&, DescribeLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancersDetailResponse> DescribeLoadBalancersDetailOutcome;
                typedef std::future<DescribeLoadBalancersDetailOutcome> DescribeLoadBalancersDetailOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeLoadBalancersDetailRequest&, DescribeLoadBalancersDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancersDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetHealthResponse> DescribeTargetHealthOutcome;
                typedef std::future<DescribeTargetHealthOutcome> DescribeTargetHealthOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::DescribeTargetHealthRequest&, DescribeTargetHealthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetHealthAsyncHandler;
                typedef Outcome<Core::Error, Model::SetCustomizedConfigForLoadBalancerResponse> SetCustomizedConfigForLoadBalancerOutcome;
                typedef std::future<SetCustomizedConfigForLoadBalancerOutcome> SetCustomizedConfigForLoadBalancerOutcomeCallable;
                typedef std::function<void(const ClbClient*, const Model::SetCustomizedConfigForLoadBalancerRequest&, SetCustomizedConfigForLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetCustomizedConfigForLoadBalancerAsyncHandler;



                /**
                 *The BatchModifyTargetWeight API is used to modify the forwarding weight of backend machines bound to a Cloud Load Balancer listener in batch. The resource limit is 500. This is an async API. After it returns a successful result, call DescribeTaskStatus API with the returned RequestID as input parameter to check whether this task is successful.<br/>This API is supported by layer-4 and layer-7 CLB listeners but not by classic CLB.
                 * @param req BatchModifyTargetWeightRequest
                 * @return BatchModifyTargetWeightOutcome
                 */
                BatchModifyTargetWeightOutcome BatchModifyTargetWeight(const Model::BatchModifyTargetWeightRequest &request);
                void BatchModifyTargetWeightAsync(const Model::BatchModifyTargetWeightRequest& request, const BatchModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyTargetWeightOutcomeCallable BatchModifyTargetWeightCallable(const Model::BatchModifyTargetWeightRequest& request);

                /**
                 *This API is used to clone a Cloud Load Balancer instance. Based on the designated CLB instance, it creates a new instance with identical rules and binding relationships. The cloning operation is asynchronous. The cloned data is based on the call to CloneLoadBalancer. If the cloned CLB changes after calling CloneLoadBalancer, the change rules will not be cloned.

Limitation notes:
Does not support basic networks, classic CLB, IPv6, or NAT64.
Unsupported Monthly Subscription CLB
The listener does not support QUIC or port ranges.
No support for backend types: target group, Serverless Cloud Function (SCF).
Personalized configuration, redirection configuration, and security group default allow switch will not be cloned and must be manually configured.

API calling
BGP bandwidth package must include bandwidth package ID
Exclusive cluster cloning must pass corresponding parameters, otherwise shared instance creation is used.
The feature is in beta test. You can submit a [beta test application](https://www.tencentcloud.com/apply/p/1akuvsmyn0g?from_cn_redirect=1).
                 * @param req CloneLoadBalancerRequest
                 * @return CloneLoadBalancerOutcome
                 */
                CloneLoadBalancerOutcome CloneLoadBalancer(const Model::CloneLoadBalancerRequest &request);
                void CloneLoadBalancerAsync(const Model::CloneLoadBalancerRequest& request, const CloneLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneLoadBalancerOutcomeCallable CloneLoadBalancerCallable(const Model::CloneLoadBalancerRequest& request);

                /**
                 *This API is used to create a Cloud Load Balancer instance (this interface supports only pay-as-you-go CLB instances. For annual/monthly subscription, proceed to purchase through the console). To use the CLB service, you must purchase one or more CLB instances. After successfully calling the API, the unique ID of the CLB instance will be returned. CLB instances are divided into public network and private network types. For details, refer to the product type in the product description.
Note: (1) To apply for Cloud Load Balancer (CLB) in a specified availability zone or cross-zone disaster recovery (only supported in Hong Kong (China)), [submit a request](https://console.cloud.tencent.com/workorder/category) if you need to experience the feature. (2) Currently only Beijing, Shanghai, and Guangzhou support IPv6. (3) The default purchase quota for an account in each region is 100 for public network and 100 for private network.
This is an async API. After the API returns successfully, you can use the DescribeLoadBalancers API to query the status of the Cloud Load Balancer instance (such as creating and normal) to confirm whether the creation is successful.
                 * @param req CreateLoadBalancerRequest
                 * @return CreateLoadBalancerOutcome
                 */
                CreateLoadBalancerOutcome CreateLoadBalancer(const Model::CreateLoadBalancerRequest &request);
                void CreateLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoadBalancerOutcomeCallable CreateLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request);

                /**
                 *This API is used to obtain listener information of classic CLB.
                 * @param req DescribeClassicalLBListenersRequest
                 * @return DescribeClassicalLBListenersOutcome
                 */
                DescribeClassicalLBListenersOutcome DescribeClassicalLBListeners(const Model::DescribeClassicalLBListenersRequest &request);
                void DescribeClassicalLBListenersAsync(const Model::DescribeClassicalLBListenersRequest& request, const DescribeClassicalLBListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicalLBListenersOutcomeCallable DescribeClassicalLBListenersCallable(const Model::DescribeClassicalLBListenersRequest& request);

                /**
                 *This API is used to query the locations, servers, or CLB instances bound to a configuration. If there are domains, the result will be filtered by domain.
                 * @param req DescribeCustomizedConfigAssociateListRequest
                 * @return DescribeCustomizedConfigAssociateListOutcome
                 */
                DescribeCustomizedConfigAssociateListOutcome DescribeCustomizedConfigAssociateList(const Model::DescribeCustomizedConfigAssociateListRequest &request);
                void DescribeCustomizedConfigAssociateListAsync(const Model::DescribeCustomizedConfigAssociateListRequest& request, const DescribeCustomizedConfigAssociateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomizedConfigAssociateListOutcomeCallable DescribeCustomizedConfigAssociateListCallable(const Model::DescribeCustomizedConfigAssociateListRequest& request);

                /**
                 *Pull the list of custom configurations. The configurations of the specified type under the user's AppId will be returned.
                 * @param req DescribeCustomizedConfigListRequest
                 * @return DescribeCustomizedConfigListOutcome
                 */
                DescribeCustomizedConfigListOutcome DescribeCustomizedConfigList(const Model::DescribeCustomizedConfigListRequest &request);
                void DescribeCustomizedConfigListAsync(const Model::DescribeCustomizedConfigListRequest& request, const DescribeCustomizedConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomizedConfigListOutcomeCallable DescribeCustomizedConfigListCallable(const Model::DescribeCustomizedConfigListRequest& request);

                /**
                 *This API is used to query the list of CLB instances associated with a certificate in a region by certificate ID.
                 * @param req DescribeLoadBalancerListByCertIdRequest
                 * @return DescribeLoadBalancerListByCertIdOutcome
                 */
                DescribeLoadBalancerListByCertIdOutcome DescribeLoadBalancerListByCertId(const Model::DescribeLoadBalancerListByCertIdRequest &request);
                void DescribeLoadBalancerListByCertIdAsync(const Model::DescribeLoadBalancerListByCertIdRequest& request, const DescribeLoadBalancerListByCertIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancerListByCertIdOutcomeCallable DescribeLoadBalancerListByCertIdCallable(const Model::DescribeLoadBalancerListByCertIdRequest& request);

                /**
                 *This API is used to query the list of CLB instances in a region.
                 * @param req DescribeLoadBalancersRequest
                 * @return DescribeLoadBalancersOutcome
                 */
                DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest &request);
                void DescribeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request);

                /**
                 *Query the detailed information of Cloud Load Balancer, including listeners, rules, and backend targets.
                 * @param req DescribeLoadBalancersDetailRequest
                 * @return DescribeLoadBalancersDetailOutcome
                 */
                DescribeLoadBalancersDetailOutcome DescribeLoadBalancersDetail(const Model::DescribeLoadBalancersDetailRequest &request);
                void DescribeLoadBalancersDetailAsync(const Model::DescribeLoadBalancersDetailRequest& request, const DescribeLoadBalancersDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancersDetailOutcomeCallable DescribeLoadBalancersDetailCallable(const Model::DescribeLoadBalancersDetailRequest& request);

                /**
                 *This API (DescribeTargetHealth) is used to query the health check result of a real server of a CLB instance. It is not supported by Classic CLB.
                 * @param req DescribeTargetHealthRequest
                 * @return DescribeTargetHealthOutcome
                 */
                DescribeTargetHealthOutcome DescribeTargetHealth(const Model::DescribeTargetHealthRequest &request);
                void DescribeTargetHealthAsync(const Model::DescribeTargetHealthRequest& request, const DescribeTargetHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetHealthOutcomeCallable DescribeTargetHealthCallable(const Model::DescribeTargetHealthRequest& request);

                /**
                 *This API is used to create, delete, modify, bind, and unbind custom CLB configurations.
                 * @param req SetCustomizedConfigForLoadBalancerRequest
                 * @return SetCustomizedConfigForLoadBalancerOutcome
                 */
                SetCustomizedConfigForLoadBalancerOutcome SetCustomizedConfigForLoadBalancer(const Model::SetCustomizedConfigForLoadBalancerRequest &request);
                void SetCustomizedConfigForLoadBalancerAsync(const Model::SetCustomizedConfigForLoadBalancerRequest& request, const SetCustomizedConfigForLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetCustomizedConfigForLoadBalancerOutcomeCallable SetCustomizedConfigForLoadBalancerCallable(const Model::SetCustomizedConfigForLoadBalancerRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20230417_CLBCLIENT_H_
