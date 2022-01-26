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
#include <tencentcloud/mdp/v20200527/model/BindNewLVBDomainWithChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/BindNewLVBDomainWithChannelResponse.h>
#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageChannelResponse.h>
#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageChannelEndpointRequest.h>
#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageChannelEndpointResponse.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageChannelEndpointsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageChannelEndpointsResponse.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageChannelsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageChannelsResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageChannelResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageChannelsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageChannelsResponse.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelResponse.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelEndpointRequest.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelEndpointResponse.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelInputAuthInfoRequest.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelInputAuthInfoResponse.h>
#include <tencentcloud/mdp/v20200527/model/UnbindCdnDomainWithChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/UnbindCdnDomainWithChannelResponse.h>


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

                typedef Outcome<Core::Error, Model::BindNewLVBDomainWithChannelResponse> BindNewLVBDomainWithChannelOutcome;
                typedef std::future<BindNewLVBDomainWithChannelOutcome> BindNewLVBDomainWithChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::BindNewLVBDomainWithChannelRequest&, BindNewLVBDomainWithChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindNewLVBDomainWithChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamPackageChannelResponse> CreateStreamPackageChannelOutcome;
                typedef std::future<CreateStreamPackageChannelOutcome> CreateStreamPackageChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::CreateStreamPackageChannelRequest&, CreateStreamPackageChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamPackageChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamPackageChannelEndpointResponse> CreateStreamPackageChannelEndpointOutcome;
                typedef std::future<CreateStreamPackageChannelEndpointOutcome> CreateStreamPackageChannelEndpointOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::CreateStreamPackageChannelEndpointRequest&, CreateStreamPackageChannelEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamPackageChannelEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageChannelEndpointsResponse> DeleteStreamPackageChannelEndpointsOutcome;
                typedef std::future<DeleteStreamPackageChannelEndpointsOutcome> DeleteStreamPackageChannelEndpointsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DeleteStreamPackageChannelEndpointsRequest&, DeleteStreamPackageChannelEndpointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageChannelEndpointsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageChannelsResponse> DeleteStreamPackageChannelsOutcome;
                typedef std::future<DeleteStreamPackageChannelsOutcome> DeleteStreamPackageChannelsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DeleteStreamPackageChannelsRequest&, DeleteStreamPackageChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageChannelResponse> DescribeStreamPackageChannelOutcome;
                typedef std::future<DescribeStreamPackageChannelOutcome> DescribeStreamPackageChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageChannelRequest&, DescribeStreamPackageChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageChannelsResponse> DescribeStreamPackageChannelsOutcome;
                typedef std::future<DescribeStreamPackageChannelsOutcome> DescribeStreamPackageChannelsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageChannelsRequest&, DescribeStreamPackageChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamPackageChannelResponse> ModifyStreamPackageChannelOutcome;
                typedef std::future<ModifyStreamPackageChannelOutcome> ModifyStreamPackageChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::ModifyStreamPackageChannelRequest&, ModifyStreamPackageChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamPackageChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamPackageChannelEndpointResponse> ModifyStreamPackageChannelEndpointOutcome;
                typedef std::future<ModifyStreamPackageChannelEndpointOutcome> ModifyStreamPackageChannelEndpointOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::ModifyStreamPackageChannelEndpointRequest&, ModifyStreamPackageChannelEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamPackageChannelEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamPackageChannelInputAuthInfoResponse> ModifyStreamPackageChannelInputAuthInfoOutcome;
                typedef std::future<ModifyStreamPackageChannelInputAuthInfoOutcome> ModifyStreamPackageChannelInputAuthInfoOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::ModifyStreamPackageChannelInputAuthInfoRequest&, ModifyStreamPackageChannelInputAuthInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamPackageChannelInputAuthInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindCdnDomainWithChannelResponse> UnbindCdnDomainWithChannelOutcome;
                typedef std::future<UnbindCdnDomainWithChannelOutcome> UnbindCdnDomainWithChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::UnbindCdnDomainWithChannelRequest&, UnbindCdnDomainWithChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindCdnDomainWithChannelAsyncHandler;



                /**
                 *This API is used to bind an LVB domain name to a channel.
                 * @param req BindNewLVBDomainWithChannelRequest
                 * @return BindNewLVBDomainWithChannelOutcome
                 */
                BindNewLVBDomainWithChannelOutcome BindNewLVBDomainWithChannel(const Model::BindNewLVBDomainWithChannelRequest &request);
                void BindNewLVBDomainWithChannelAsync(const Model::BindNewLVBDomainWithChannelRequest& request, const BindNewLVBDomainWithChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindNewLVBDomainWithChannelOutcomeCallable BindNewLVBDomainWithChannelCallable(const Model::BindNewLVBDomainWithChannelRequest& request);

                /**
                 *This API is used to create a StreamPackage channel.
                 * @param req CreateStreamPackageChannelRequest
                 * @return CreateStreamPackageChannelOutcome
                 */
                CreateStreamPackageChannelOutcome CreateStreamPackageChannel(const Model::CreateStreamPackageChannelRequest &request);
                void CreateStreamPackageChannelAsync(const Model::CreateStreamPackageChannelRequest& request, const CreateStreamPackageChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamPackageChannelOutcomeCallable CreateStreamPackageChannelCallable(const Model::CreateStreamPackageChannelRequest& request);

                /**
                 *This API is used to create an endpoint on a StreamPackage channel.
                 * @param req CreateStreamPackageChannelEndpointRequest
                 * @return CreateStreamPackageChannelEndpointOutcome
                 */
                CreateStreamPackageChannelEndpointOutcome CreateStreamPackageChannelEndpoint(const Model::CreateStreamPackageChannelEndpointRequest &request);
                void CreateStreamPackageChannelEndpointAsync(const Model::CreateStreamPackageChannelEndpointRequest& request, const CreateStreamPackageChannelEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamPackageChannelEndpointOutcomeCallable CreateStreamPackageChannelEndpointCallable(const Model::CreateStreamPackageChannelEndpointRequest& request);

                /**
                 *This API is used to delete endpoints from a StreamPackage channel in batches.
                 * @param req DeleteStreamPackageChannelEndpointsRequest
                 * @return DeleteStreamPackageChannelEndpointsOutcome
                 */
                DeleteStreamPackageChannelEndpointsOutcome DeleteStreamPackageChannelEndpoints(const Model::DeleteStreamPackageChannelEndpointsRequest &request);
                void DeleteStreamPackageChannelEndpointsAsync(const Model::DeleteStreamPackageChannelEndpointsRequest& request, const DeleteStreamPackageChannelEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamPackageChannelEndpointsOutcomeCallable DeleteStreamPackageChannelEndpointsCallable(const Model::DeleteStreamPackageChannelEndpointsRequest& request);

                /**
                 *This API is used to delete StreamPackage channels in batches.
                 * @param req DeleteStreamPackageChannelsRequest
                 * @return DeleteStreamPackageChannelsOutcome
                 */
                DeleteStreamPackageChannelsOutcome DeleteStreamPackageChannels(const Model::DeleteStreamPackageChannelsRequest &request);
                void DeleteStreamPackageChannelsAsync(const Model::DeleteStreamPackageChannelsRequest& request, const DeleteStreamPackageChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamPackageChannelsOutcomeCallable DeleteStreamPackageChannelsCallable(const Model::DeleteStreamPackageChannelsRequest& request);

                /**
                 *This API is used to query the information of a StreamPackage channel.
                 * @param req DescribeStreamPackageChannelRequest
                 * @return DescribeStreamPackageChannelOutcome
                 */
                DescribeStreamPackageChannelOutcome DescribeStreamPackageChannel(const Model::DescribeStreamPackageChannelRequest &request);
                void DescribeStreamPackageChannelAsync(const Model::DescribeStreamPackageChannelRequest& request, const DescribeStreamPackageChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageChannelOutcomeCallable DescribeStreamPackageChannelCallable(const Model::DescribeStreamPackageChannelRequest& request);

                /**
                 *This API is used to query the information of multiple StreamPackage channels.
                 * @param req DescribeStreamPackageChannelsRequest
                 * @return DescribeStreamPackageChannelsOutcome
                 */
                DescribeStreamPackageChannelsOutcome DescribeStreamPackageChannels(const Model::DescribeStreamPackageChannelsRequest &request);
                void DescribeStreamPackageChannelsAsync(const Model::DescribeStreamPackageChannelsRequest& request, const DescribeStreamPackageChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageChannelsOutcomeCallable DescribeStreamPackageChannelsCallable(const Model::DescribeStreamPackageChannelsRequest& request);

                /**
                 *This API is used to modify a StreamPackage channel.
                 * @param req ModifyStreamPackageChannelRequest
                 * @return ModifyStreamPackageChannelOutcome
                 */
                ModifyStreamPackageChannelOutcome ModifyStreamPackageChannel(const Model::ModifyStreamPackageChannelRequest &request);
                void ModifyStreamPackageChannelAsync(const Model::ModifyStreamPackageChannelRequest& request, const ModifyStreamPackageChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamPackageChannelOutcomeCallable ModifyStreamPackageChannelCallable(const Model::ModifyStreamPackageChannelRequest& request);

                /**
                 *This API is used to modify an endpoint of a StreamPackage channel.
                 * @param req ModifyStreamPackageChannelEndpointRequest
                 * @return ModifyStreamPackageChannelEndpointOutcome
                 */
                ModifyStreamPackageChannelEndpointOutcome ModifyStreamPackageChannelEndpoint(const Model::ModifyStreamPackageChannelEndpointRequest &request);
                void ModifyStreamPackageChannelEndpointAsync(const Model::ModifyStreamPackageChannelEndpointRequest& request, const ModifyStreamPackageChannelEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamPackageChannelEndpointOutcomeCallable ModifyStreamPackageChannelEndpointCallable(const Model::ModifyStreamPackageChannelEndpointRequest& request);

                /**
                 *This API is used to modify the input authentication information of a StreamPackage channel.
                 * @param req ModifyStreamPackageChannelInputAuthInfoRequest
                 * @return ModifyStreamPackageChannelInputAuthInfoOutcome
                 */
                ModifyStreamPackageChannelInputAuthInfoOutcome ModifyStreamPackageChannelInputAuthInfo(const Model::ModifyStreamPackageChannelInputAuthInfoRequest &request);
                void ModifyStreamPackageChannelInputAuthInfoAsync(const Model::ModifyStreamPackageChannelInputAuthInfoRequest& request, const ModifyStreamPackageChannelInputAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamPackageChannelInputAuthInfoOutcomeCallable ModifyStreamPackageChannelInputAuthInfoCallable(const Model::ModifyStreamPackageChannelInputAuthInfoRequest& request);

                /**
                 *This API is used to unbind a CDN playback domain name from a channel.
                 * @param req UnbindCdnDomainWithChannelRequest
                 * @return UnbindCdnDomainWithChannelOutcome
                 */
                UnbindCdnDomainWithChannelOutcome UnbindCdnDomainWithChannel(const Model::UnbindCdnDomainWithChannelRequest &request);
                void UnbindCdnDomainWithChannelAsync(const Model::UnbindCdnDomainWithChannelRequest& request, const UnbindCdnDomainWithChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindCdnDomainWithChannelOutcomeCallable UnbindCdnDomainWithChannelCallable(const Model::UnbindCdnDomainWithChannelRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MDPCLIENT_H_
