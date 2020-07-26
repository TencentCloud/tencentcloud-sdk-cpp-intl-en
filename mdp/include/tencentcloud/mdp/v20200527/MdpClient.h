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

#ifndef TENCENTCLOUD_MDP_V20200527_MDPCLIENT_H_
#define TENCENTCLOUD_MDP_V20200527_MDPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mdp/v20200527/model/CreateMediaPackageChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/CreateMediaPackageChannelResponse.h>
#include <tencentcloud/mdp/v20200527/model/CreateMediaPackageChannelEndpointRequest.h>
#include <tencentcloud/mdp/v20200527/model/CreateMediaPackageChannelEndpointResponse.h>
#include <tencentcloud/mdp/v20200527/model/DeleteMediaPackageChannelEndpointsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DeleteMediaPackageChannelEndpointsResponse.h>
#include <tencentcloud/mdp/v20200527/model/DeleteMediaPackageChannelsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DeleteMediaPackageChannelsResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeMediaPackageChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeMediaPackageChannelResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeMediaPackageChannelsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeMediaPackageChannelsResponse.h>
#include <tencentcloud/mdp/v20200527/model/ModifyMediaPackageChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/ModifyMediaPackageChannelResponse.h>
#include <tencentcloud/mdp/v20200527/model/ModifyMediaPackageChannelEndpointRequest.h>
#include <tencentcloud/mdp/v20200527/model/ModifyMediaPackageChannelEndpointResponse.h>
#include <tencentcloud/mdp/v20200527/model/ModifyMediaPackageChannelInputAuthInfoRequest.h>
#include <tencentcloud/mdp/v20200527/model/ModifyMediaPackageChannelInputAuthInfoResponse.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            class MdpClient : public AbstractClient
            {
            public:
                MdpClient(const Credential &credential, const std::string &region);
                MdpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateMediaPackageChannelResponse> CreateMediaPackageChannelOutcome;
                typedef std::future<CreateMediaPackageChannelOutcome> CreateMediaPackageChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::CreateMediaPackageChannelRequest&, CreateMediaPackageChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMediaPackageChannelAsyncHandler;
                typedef Outcome<Error, Model::CreateMediaPackageChannelEndpointResponse> CreateMediaPackageChannelEndpointOutcome;
                typedef std::future<CreateMediaPackageChannelEndpointOutcome> CreateMediaPackageChannelEndpointOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::CreateMediaPackageChannelEndpointRequest&, CreateMediaPackageChannelEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMediaPackageChannelEndpointAsyncHandler;
                typedef Outcome<Error, Model::DeleteMediaPackageChannelEndpointsResponse> DeleteMediaPackageChannelEndpointsOutcome;
                typedef std::future<DeleteMediaPackageChannelEndpointsOutcome> DeleteMediaPackageChannelEndpointsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DeleteMediaPackageChannelEndpointsRequest&, DeleteMediaPackageChannelEndpointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMediaPackageChannelEndpointsAsyncHandler;
                typedef Outcome<Error, Model::DeleteMediaPackageChannelsResponse> DeleteMediaPackageChannelsOutcome;
                typedef std::future<DeleteMediaPackageChannelsOutcome> DeleteMediaPackageChannelsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DeleteMediaPackageChannelsRequest&, DeleteMediaPackageChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMediaPackageChannelsAsyncHandler;
                typedef Outcome<Error, Model::DescribeMediaPackageChannelResponse> DescribeMediaPackageChannelOutcome;
                typedef std::future<DescribeMediaPackageChannelOutcome> DescribeMediaPackageChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeMediaPackageChannelRequest&, DescribeMediaPackageChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaPackageChannelAsyncHandler;
                typedef Outcome<Error, Model::DescribeMediaPackageChannelsResponse> DescribeMediaPackageChannelsOutcome;
                typedef std::future<DescribeMediaPackageChannelsOutcome> DescribeMediaPackageChannelsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeMediaPackageChannelsRequest&, DescribeMediaPackageChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMediaPackageChannelsAsyncHandler;
                typedef Outcome<Error, Model::ModifyMediaPackageChannelResponse> ModifyMediaPackageChannelOutcome;
                typedef std::future<ModifyMediaPackageChannelOutcome> ModifyMediaPackageChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::ModifyMediaPackageChannelRequest&, ModifyMediaPackageChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMediaPackageChannelAsyncHandler;
                typedef Outcome<Error, Model::ModifyMediaPackageChannelEndpointResponse> ModifyMediaPackageChannelEndpointOutcome;
                typedef std::future<ModifyMediaPackageChannelEndpointOutcome> ModifyMediaPackageChannelEndpointOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::ModifyMediaPackageChannelEndpointRequest&, ModifyMediaPackageChannelEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMediaPackageChannelEndpointAsyncHandler;
                typedef Outcome<Error, Model::ModifyMediaPackageChannelInputAuthInfoResponse> ModifyMediaPackageChannelInputAuthInfoOutcome;
                typedef std::future<ModifyMediaPackageChannelInputAuthInfoOutcome> ModifyMediaPackageChannelInputAuthInfoOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::ModifyMediaPackageChannelInputAuthInfoRequest&, ModifyMediaPackageChannelInputAuthInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMediaPackageChannelInputAuthInfoAsyncHandler;



                /**
                 *This API is used to create a media package channel.
                 * @param req CreateMediaPackageChannelRequest
                 * @return CreateMediaPackageChannelOutcome
                 */
                CreateMediaPackageChannelOutcome CreateMediaPackageChannel(const Model::CreateMediaPackageChannelRequest &request);
                void CreateMediaPackageChannelAsync(const Model::CreateMediaPackageChannelRequest& request, const CreateMediaPackageChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMediaPackageChannelOutcomeCallable CreateMediaPackageChannelCallable(const Model::CreateMediaPackageChannelRequest& request);

                /**
                 *This API is used to create an endpoint of a media package channel.
                 * @param req CreateMediaPackageChannelEndpointRequest
                 * @return CreateMediaPackageChannelEndpointOutcome
                 */
                CreateMediaPackageChannelEndpointOutcome CreateMediaPackageChannelEndpoint(const Model::CreateMediaPackageChannelEndpointRequest &request);
                void CreateMediaPackageChannelEndpointAsync(const Model::CreateMediaPackageChannelEndpointRequest& request, const CreateMediaPackageChannelEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMediaPackageChannelEndpointOutcomeCallable CreateMediaPackageChannelEndpointCallable(const Model::CreateMediaPackageChannelEndpointRequest& request);

                /**
                 *This API is used to delete endpoints from a media package channel in batches.
                 * @param req DeleteMediaPackageChannelEndpointsRequest
                 * @return DeleteMediaPackageChannelEndpointsOutcome
                 */
                DeleteMediaPackageChannelEndpointsOutcome DeleteMediaPackageChannelEndpoints(const Model::DeleteMediaPackageChannelEndpointsRequest &request);
                void DeleteMediaPackageChannelEndpointsAsync(const Model::DeleteMediaPackageChannelEndpointsRequest& request, const DeleteMediaPackageChannelEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMediaPackageChannelEndpointsOutcomeCallable DeleteMediaPackageChannelEndpointsCallable(const Model::DeleteMediaPackageChannelEndpointsRequest& request);

                /**
                 *This API is used to delete media package channels in batches.
                 * @param req DeleteMediaPackageChannelsRequest
                 * @return DeleteMediaPackageChannelsOutcome
                 */
                DeleteMediaPackageChannelsOutcome DeleteMediaPackageChannels(const Model::DeleteMediaPackageChannelsRequest &request);
                void DeleteMediaPackageChannelsAsync(const Model::DeleteMediaPackageChannelsRequest& request, const DeleteMediaPackageChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMediaPackageChannelsOutcomeCallable DeleteMediaPackageChannelsCallable(const Model::DeleteMediaPackageChannelsRequest& request);

                /**
                 *This API is used to query the information of a media package channel.
                 * @param req DescribeMediaPackageChannelRequest
                 * @return DescribeMediaPackageChannelOutcome
                 */
                DescribeMediaPackageChannelOutcome DescribeMediaPackageChannel(const Model::DescribeMediaPackageChannelRequest &request);
                void DescribeMediaPackageChannelAsync(const Model::DescribeMediaPackageChannelRequest& request, const DescribeMediaPackageChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaPackageChannelOutcomeCallable DescribeMediaPackageChannelCallable(const Model::DescribeMediaPackageChannelRequest& request);

                /**
                 *This API is used to query the information list of media package channels.
                 * @param req DescribeMediaPackageChannelsRequest
                 * @return DescribeMediaPackageChannelsOutcome
                 */
                DescribeMediaPackageChannelsOutcome DescribeMediaPackageChannels(const Model::DescribeMediaPackageChannelsRequest &request);
                void DescribeMediaPackageChannelsAsync(const Model::DescribeMediaPackageChannelsRequest& request, const DescribeMediaPackageChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMediaPackageChannelsOutcomeCallable DescribeMediaPackageChannelsCallable(const Model::DescribeMediaPackageChannelsRequest& request);

                /**
                 *This API is used to modify the information of a media package channel.
                 * @param req ModifyMediaPackageChannelRequest
                 * @return ModifyMediaPackageChannelOutcome
                 */
                ModifyMediaPackageChannelOutcome ModifyMediaPackageChannel(const Model::ModifyMediaPackageChannelRequest &request);
                void ModifyMediaPackageChannelAsync(const Model::ModifyMediaPackageChannelRequest& request, const ModifyMediaPackageChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMediaPackageChannelOutcomeCallable ModifyMediaPackageChannelCallable(const Model::ModifyMediaPackageChannelRequest& request);

                /**
                 *This API is used to modify an endpoint of a media package channel.
                 * @param req ModifyMediaPackageChannelEndpointRequest
                 * @return ModifyMediaPackageChannelEndpointOutcome
                 */
                ModifyMediaPackageChannelEndpointOutcome ModifyMediaPackageChannelEndpoint(const Model::ModifyMediaPackageChannelEndpointRequest &request);
                void ModifyMediaPackageChannelEndpointAsync(const Model::ModifyMediaPackageChannelEndpointRequest& request, const ModifyMediaPackageChannelEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMediaPackageChannelEndpointOutcomeCallable ModifyMediaPackageChannelEndpointCallable(const Model::ModifyMediaPackageChannelEndpointRequest& request);

                /**
                 *This API is used to modify the input authentication information of a media package channel.
                 * @param req ModifyMediaPackageChannelInputAuthInfoRequest
                 * @return ModifyMediaPackageChannelInputAuthInfoOutcome
                 */
                ModifyMediaPackageChannelInputAuthInfoOutcome ModifyMediaPackageChannelInputAuthInfo(const Model::ModifyMediaPackageChannelInputAuthInfoRequest &request);
                void ModifyMediaPackageChannelInputAuthInfoAsync(const Model::ModifyMediaPackageChannelInputAuthInfoRequest& request, const ModifyMediaPackageChannelInputAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMediaPackageChannelInputAuthInfoOutcomeCallable ModifyMediaPackageChannelInputAuthInfoCallable(const Model::ModifyMediaPackageChannelInputAuthInfoRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MDPCLIENT_H_
