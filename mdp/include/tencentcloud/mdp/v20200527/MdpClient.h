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
#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageHarvestJobRequest.h>
#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageHarvestJobResponse.h>
#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageLinearAssemblyChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageLinearAssemblyChannelResponse.h>
#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageLinearAssemblyProgramRequest.h>
#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageLinearAssemblyProgramResponse.h>
#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageSSAIChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageSSAIChannelResponse.h>
#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageSourceRequest.h>
#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageSourceResponse.h>
#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageSourceLocationRequest.h>
#include <tencentcloud/mdp/v20200527/model/CreateStreamPackageSourceLocationResponse.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageChannelEndpointsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageChannelEndpointsResponse.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageChannelsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageChannelsResponse.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageHarvestJobRequest.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageHarvestJobResponse.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageHarvestJobsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageHarvestJobsResponse.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageLinearAssemblyChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageLinearAssemblyChannelResponse.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageLinearAssemblyChannelsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageLinearAssemblyChannelsResponse.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageLinearAssemblyProgramRequest.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageLinearAssemblyProgramResponse.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageLinearAssemblyProgramsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageLinearAssemblyProgramsResponse.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageSSAIChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageSSAIChannelResponse.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageSourceRequest.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageSourceResponse.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageSourceLocationRequest.h>
#include <tencentcloud/mdp/v20200527/model/DeleteStreamPackageSourceLocationResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageChannelResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageChannelsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageChannelsResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageHarvestJobRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageHarvestJobResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageHarvestJobsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageHarvestJobsResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyChannelResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyChannelAlertsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyChannelAlertsResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyChannelsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyChannelsResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyProgramRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyProgramResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyProgramSchedulesRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyProgramSchedulesResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyProgramsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyProgramsResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageSSAIChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageSSAIChannelResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageSSAIChannelsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageSSAIChannelsResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceAlertsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceAlertsResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceLocationRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceLocationResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceLocationAlertsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceLocationAlertsResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceLocationsRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceLocationsResponse.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourcesRequest.h>
#include <tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourcesResponse.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelResponse.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelEndpointRequest.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelEndpointResponse.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelInputAuthInfoRequest.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelInputAuthInfoResponse.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageLinearAssemblyChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageLinearAssemblyChannelResponse.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageLinearAssemblyProgramRequest.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageLinearAssemblyProgramResponse.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageSSAIChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageSSAIChannelResponse.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageSourceRequest.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageSourceResponse.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageSourceLocationRequest.h>
#include <tencentcloud/mdp/v20200527/model/ModifyStreamPackageSourceLocationResponse.h>
#include <tencentcloud/mdp/v20200527/model/StartStreamPackageLinearAssemblyChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/StartStreamPackageLinearAssemblyChannelResponse.h>
#include <tencentcloud/mdp/v20200527/model/StopStreamPackageLinearAssemblyChannelRequest.h>
#include <tencentcloud/mdp/v20200527/model/StopStreamPackageLinearAssemblyChannelResponse.h>
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
                typedef Outcome<Core::Error, Model::CreateStreamPackageHarvestJobResponse> CreateStreamPackageHarvestJobOutcome;
                typedef std::future<CreateStreamPackageHarvestJobOutcome> CreateStreamPackageHarvestJobOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::CreateStreamPackageHarvestJobRequest&, CreateStreamPackageHarvestJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamPackageHarvestJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamPackageLinearAssemblyChannelResponse> CreateStreamPackageLinearAssemblyChannelOutcome;
                typedef std::future<CreateStreamPackageLinearAssemblyChannelOutcome> CreateStreamPackageLinearAssemblyChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::CreateStreamPackageLinearAssemblyChannelRequest&, CreateStreamPackageLinearAssemblyChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamPackageLinearAssemblyChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamPackageLinearAssemblyProgramResponse> CreateStreamPackageLinearAssemblyProgramOutcome;
                typedef std::future<CreateStreamPackageLinearAssemblyProgramOutcome> CreateStreamPackageLinearAssemblyProgramOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::CreateStreamPackageLinearAssemblyProgramRequest&, CreateStreamPackageLinearAssemblyProgramOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamPackageLinearAssemblyProgramAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamPackageSSAIChannelResponse> CreateStreamPackageSSAIChannelOutcome;
                typedef std::future<CreateStreamPackageSSAIChannelOutcome> CreateStreamPackageSSAIChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::CreateStreamPackageSSAIChannelRequest&, CreateStreamPackageSSAIChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamPackageSSAIChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamPackageSourceResponse> CreateStreamPackageSourceOutcome;
                typedef std::future<CreateStreamPackageSourceOutcome> CreateStreamPackageSourceOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::CreateStreamPackageSourceRequest&, CreateStreamPackageSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamPackageSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamPackageSourceLocationResponse> CreateStreamPackageSourceLocationOutcome;
                typedef std::future<CreateStreamPackageSourceLocationOutcome> CreateStreamPackageSourceLocationOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::CreateStreamPackageSourceLocationRequest&, CreateStreamPackageSourceLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamPackageSourceLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageChannelEndpointsResponse> DeleteStreamPackageChannelEndpointsOutcome;
                typedef std::future<DeleteStreamPackageChannelEndpointsOutcome> DeleteStreamPackageChannelEndpointsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DeleteStreamPackageChannelEndpointsRequest&, DeleteStreamPackageChannelEndpointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageChannelEndpointsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageChannelsResponse> DeleteStreamPackageChannelsOutcome;
                typedef std::future<DeleteStreamPackageChannelsOutcome> DeleteStreamPackageChannelsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DeleteStreamPackageChannelsRequest&, DeleteStreamPackageChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageHarvestJobResponse> DeleteStreamPackageHarvestJobOutcome;
                typedef std::future<DeleteStreamPackageHarvestJobOutcome> DeleteStreamPackageHarvestJobOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DeleteStreamPackageHarvestJobRequest&, DeleteStreamPackageHarvestJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageHarvestJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageHarvestJobsResponse> DeleteStreamPackageHarvestJobsOutcome;
                typedef std::future<DeleteStreamPackageHarvestJobsOutcome> DeleteStreamPackageHarvestJobsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DeleteStreamPackageHarvestJobsRequest&, DeleteStreamPackageHarvestJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageHarvestJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageLinearAssemblyChannelResponse> DeleteStreamPackageLinearAssemblyChannelOutcome;
                typedef std::future<DeleteStreamPackageLinearAssemblyChannelOutcome> DeleteStreamPackageLinearAssemblyChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DeleteStreamPackageLinearAssemblyChannelRequest&, DeleteStreamPackageLinearAssemblyChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageLinearAssemblyChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageLinearAssemblyChannelsResponse> DeleteStreamPackageLinearAssemblyChannelsOutcome;
                typedef std::future<DeleteStreamPackageLinearAssemblyChannelsOutcome> DeleteStreamPackageLinearAssemblyChannelsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DeleteStreamPackageLinearAssemblyChannelsRequest&, DeleteStreamPackageLinearAssemblyChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageLinearAssemblyChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageLinearAssemblyProgramResponse> DeleteStreamPackageLinearAssemblyProgramOutcome;
                typedef std::future<DeleteStreamPackageLinearAssemblyProgramOutcome> DeleteStreamPackageLinearAssemblyProgramOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DeleteStreamPackageLinearAssemblyProgramRequest&, DeleteStreamPackageLinearAssemblyProgramOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageLinearAssemblyProgramAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageLinearAssemblyProgramsResponse> DeleteStreamPackageLinearAssemblyProgramsOutcome;
                typedef std::future<DeleteStreamPackageLinearAssemblyProgramsOutcome> DeleteStreamPackageLinearAssemblyProgramsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DeleteStreamPackageLinearAssemblyProgramsRequest&, DeleteStreamPackageLinearAssemblyProgramsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageLinearAssemblyProgramsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageSSAIChannelResponse> DeleteStreamPackageSSAIChannelOutcome;
                typedef std::future<DeleteStreamPackageSSAIChannelOutcome> DeleteStreamPackageSSAIChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DeleteStreamPackageSSAIChannelRequest&, DeleteStreamPackageSSAIChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageSSAIChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageSourceResponse> DeleteStreamPackageSourceOutcome;
                typedef std::future<DeleteStreamPackageSourceOutcome> DeleteStreamPackageSourceOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DeleteStreamPackageSourceRequest&, DeleteStreamPackageSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamPackageSourceLocationResponse> DeleteStreamPackageSourceLocationOutcome;
                typedef std::future<DeleteStreamPackageSourceLocationOutcome> DeleteStreamPackageSourceLocationOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DeleteStreamPackageSourceLocationRequest&, DeleteStreamPackageSourceLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamPackageSourceLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageChannelResponse> DescribeStreamPackageChannelOutcome;
                typedef std::future<DescribeStreamPackageChannelOutcome> DescribeStreamPackageChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageChannelRequest&, DescribeStreamPackageChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageChannelsResponse> DescribeStreamPackageChannelsOutcome;
                typedef std::future<DescribeStreamPackageChannelsOutcome> DescribeStreamPackageChannelsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageChannelsRequest&, DescribeStreamPackageChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageHarvestJobResponse> DescribeStreamPackageHarvestJobOutcome;
                typedef std::future<DescribeStreamPackageHarvestJobOutcome> DescribeStreamPackageHarvestJobOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageHarvestJobRequest&, DescribeStreamPackageHarvestJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageHarvestJobAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageHarvestJobsResponse> DescribeStreamPackageHarvestJobsOutcome;
                typedef std::future<DescribeStreamPackageHarvestJobsOutcome> DescribeStreamPackageHarvestJobsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageHarvestJobsRequest&, DescribeStreamPackageHarvestJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageHarvestJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageLinearAssemblyChannelResponse> DescribeStreamPackageLinearAssemblyChannelOutcome;
                typedef std::future<DescribeStreamPackageLinearAssemblyChannelOutcome> DescribeStreamPackageLinearAssemblyChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageLinearAssemblyChannelRequest&, DescribeStreamPackageLinearAssemblyChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageLinearAssemblyChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageLinearAssemblyChannelAlertsResponse> DescribeStreamPackageLinearAssemblyChannelAlertsOutcome;
                typedef std::future<DescribeStreamPackageLinearAssemblyChannelAlertsOutcome> DescribeStreamPackageLinearAssemblyChannelAlertsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageLinearAssemblyChannelAlertsRequest&, DescribeStreamPackageLinearAssemblyChannelAlertsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageLinearAssemblyChannelAlertsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageLinearAssemblyChannelsResponse> DescribeStreamPackageLinearAssemblyChannelsOutcome;
                typedef std::future<DescribeStreamPackageLinearAssemblyChannelsOutcome> DescribeStreamPackageLinearAssemblyChannelsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageLinearAssemblyChannelsRequest&, DescribeStreamPackageLinearAssemblyChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageLinearAssemblyChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageLinearAssemblyProgramResponse> DescribeStreamPackageLinearAssemblyProgramOutcome;
                typedef std::future<DescribeStreamPackageLinearAssemblyProgramOutcome> DescribeStreamPackageLinearAssemblyProgramOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageLinearAssemblyProgramRequest&, DescribeStreamPackageLinearAssemblyProgramOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageLinearAssemblyProgramAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageLinearAssemblyProgramSchedulesResponse> DescribeStreamPackageLinearAssemblyProgramSchedulesOutcome;
                typedef std::future<DescribeStreamPackageLinearAssemblyProgramSchedulesOutcome> DescribeStreamPackageLinearAssemblyProgramSchedulesOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageLinearAssemblyProgramSchedulesRequest&, DescribeStreamPackageLinearAssemblyProgramSchedulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageLinearAssemblyProgramSchedulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageLinearAssemblyProgramsResponse> DescribeStreamPackageLinearAssemblyProgramsOutcome;
                typedef std::future<DescribeStreamPackageLinearAssemblyProgramsOutcome> DescribeStreamPackageLinearAssemblyProgramsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageLinearAssemblyProgramsRequest&, DescribeStreamPackageLinearAssemblyProgramsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageLinearAssemblyProgramsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageSSAIChannelResponse> DescribeStreamPackageSSAIChannelOutcome;
                typedef std::future<DescribeStreamPackageSSAIChannelOutcome> DescribeStreamPackageSSAIChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageSSAIChannelRequest&, DescribeStreamPackageSSAIChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageSSAIChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageSSAIChannelsResponse> DescribeStreamPackageSSAIChannelsOutcome;
                typedef std::future<DescribeStreamPackageSSAIChannelsOutcome> DescribeStreamPackageSSAIChannelsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageSSAIChannelsRequest&, DescribeStreamPackageSSAIChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageSSAIChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageSourceResponse> DescribeStreamPackageSourceOutcome;
                typedef std::future<DescribeStreamPackageSourceOutcome> DescribeStreamPackageSourceOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageSourceRequest&, DescribeStreamPackageSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageSourceAlertsResponse> DescribeStreamPackageSourceAlertsOutcome;
                typedef std::future<DescribeStreamPackageSourceAlertsOutcome> DescribeStreamPackageSourceAlertsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageSourceAlertsRequest&, DescribeStreamPackageSourceAlertsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageSourceAlertsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageSourceLocationResponse> DescribeStreamPackageSourceLocationOutcome;
                typedef std::future<DescribeStreamPackageSourceLocationOutcome> DescribeStreamPackageSourceLocationOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageSourceLocationRequest&, DescribeStreamPackageSourceLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageSourceLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageSourceLocationAlertsResponse> DescribeStreamPackageSourceLocationAlertsOutcome;
                typedef std::future<DescribeStreamPackageSourceLocationAlertsOutcome> DescribeStreamPackageSourceLocationAlertsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageSourceLocationAlertsRequest&, DescribeStreamPackageSourceLocationAlertsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageSourceLocationAlertsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageSourceLocationsResponse> DescribeStreamPackageSourceLocationsOutcome;
                typedef std::future<DescribeStreamPackageSourceLocationsOutcome> DescribeStreamPackageSourceLocationsOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageSourceLocationsRequest&, DescribeStreamPackageSourceLocationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageSourceLocationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamPackageSourcesResponse> DescribeStreamPackageSourcesOutcome;
                typedef std::future<DescribeStreamPackageSourcesOutcome> DescribeStreamPackageSourcesOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::DescribeStreamPackageSourcesRequest&, DescribeStreamPackageSourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamPackageSourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamPackageChannelResponse> ModifyStreamPackageChannelOutcome;
                typedef std::future<ModifyStreamPackageChannelOutcome> ModifyStreamPackageChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::ModifyStreamPackageChannelRequest&, ModifyStreamPackageChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamPackageChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamPackageChannelEndpointResponse> ModifyStreamPackageChannelEndpointOutcome;
                typedef std::future<ModifyStreamPackageChannelEndpointOutcome> ModifyStreamPackageChannelEndpointOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::ModifyStreamPackageChannelEndpointRequest&, ModifyStreamPackageChannelEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamPackageChannelEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamPackageChannelInputAuthInfoResponse> ModifyStreamPackageChannelInputAuthInfoOutcome;
                typedef std::future<ModifyStreamPackageChannelInputAuthInfoOutcome> ModifyStreamPackageChannelInputAuthInfoOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::ModifyStreamPackageChannelInputAuthInfoRequest&, ModifyStreamPackageChannelInputAuthInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamPackageChannelInputAuthInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamPackageLinearAssemblyChannelResponse> ModifyStreamPackageLinearAssemblyChannelOutcome;
                typedef std::future<ModifyStreamPackageLinearAssemblyChannelOutcome> ModifyStreamPackageLinearAssemblyChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::ModifyStreamPackageLinearAssemblyChannelRequest&, ModifyStreamPackageLinearAssemblyChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamPackageLinearAssemblyChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamPackageLinearAssemblyProgramResponse> ModifyStreamPackageLinearAssemblyProgramOutcome;
                typedef std::future<ModifyStreamPackageLinearAssemblyProgramOutcome> ModifyStreamPackageLinearAssemblyProgramOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::ModifyStreamPackageLinearAssemblyProgramRequest&, ModifyStreamPackageLinearAssemblyProgramOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamPackageLinearAssemblyProgramAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamPackageSSAIChannelResponse> ModifyStreamPackageSSAIChannelOutcome;
                typedef std::future<ModifyStreamPackageSSAIChannelOutcome> ModifyStreamPackageSSAIChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::ModifyStreamPackageSSAIChannelRequest&, ModifyStreamPackageSSAIChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamPackageSSAIChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamPackageSourceResponse> ModifyStreamPackageSourceOutcome;
                typedef std::future<ModifyStreamPackageSourceOutcome> ModifyStreamPackageSourceOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::ModifyStreamPackageSourceRequest&, ModifyStreamPackageSourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamPackageSourceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamPackageSourceLocationResponse> ModifyStreamPackageSourceLocationOutcome;
                typedef std::future<ModifyStreamPackageSourceLocationOutcome> ModifyStreamPackageSourceLocationOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::ModifyStreamPackageSourceLocationRequest&, ModifyStreamPackageSourceLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamPackageSourceLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::StartStreamPackageLinearAssemblyChannelResponse> StartStreamPackageLinearAssemblyChannelOutcome;
                typedef std::future<StartStreamPackageLinearAssemblyChannelOutcome> StartStreamPackageLinearAssemblyChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::StartStreamPackageLinearAssemblyChannelRequest&, StartStreamPackageLinearAssemblyChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartStreamPackageLinearAssemblyChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::StopStreamPackageLinearAssemblyChannelResponse> StopStreamPackageLinearAssemblyChannelOutcome;
                typedef std::future<StopStreamPackageLinearAssemblyChannelOutcome> StopStreamPackageLinearAssemblyChannelOutcomeCallable;
                typedef std::function<void(const MdpClient*, const Model::StopStreamPackageLinearAssemblyChannelRequest&, StopStreamPackageLinearAssemblyChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopStreamPackageLinearAssemblyChannelAsyncHandler;
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
                 *Create HarvestJob.
                 * @param req CreateStreamPackageHarvestJobRequest
                 * @return CreateStreamPackageHarvestJobOutcome
                 */
                CreateStreamPackageHarvestJobOutcome CreateStreamPackageHarvestJob(const Model::CreateStreamPackageHarvestJobRequest &request);
                void CreateStreamPackageHarvestJobAsync(const Model::CreateStreamPackageHarvestJobRequest& request, const CreateStreamPackageHarvestJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamPackageHarvestJobOutcomeCallable CreateStreamPackageHarvestJobCallable(const Model::CreateStreamPackageHarvestJobRequest& request);

                /**
                 *Create a linear assembly channel.
                 * @param req CreateStreamPackageLinearAssemblyChannelRequest
                 * @return CreateStreamPackageLinearAssemblyChannelOutcome
                 */
                CreateStreamPackageLinearAssemblyChannelOutcome CreateStreamPackageLinearAssemblyChannel(const Model::CreateStreamPackageLinearAssemblyChannelRequest &request);
                void CreateStreamPackageLinearAssemblyChannelAsync(const Model::CreateStreamPackageLinearAssemblyChannelRequest& request, const CreateStreamPackageLinearAssemblyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamPackageLinearAssemblyChannelOutcomeCallable CreateStreamPackageLinearAssemblyChannelCallable(const Model::CreateStreamPackageLinearAssemblyChannelRequest& request);

                /**
                 *Create a linear assembly program.
                 * @param req CreateStreamPackageLinearAssemblyProgramRequest
                 * @return CreateStreamPackageLinearAssemblyProgramOutcome
                 */
                CreateStreamPackageLinearAssemblyProgramOutcome CreateStreamPackageLinearAssemblyProgram(const Model::CreateStreamPackageLinearAssemblyProgramRequest &request);
                void CreateStreamPackageLinearAssemblyProgramAsync(const Model::CreateStreamPackageLinearAssemblyProgramRequest& request, const CreateStreamPackageLinearAssemblyProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamPackageLinearAssemblyProgramOutcomeCallable CreateStreamPackageLinearAssemblyProgramCallable(const Model::CreateStreamPackageLinearAssemblyProgramRequest& request);

                /**
                 *CreateStreamPackageSSAIChannel
                 * @param req CreateStreamPackageSSAIChannelRequest
                 * @return CreateStreamPackageSSAIChannelOutcome
                 */
                CreateStreamPackageSSAIChannelOutcome CreateStreamPackageSSAIChannel(const Model::CreateStreamPackageSSAIChannelRequest &request);
                void CreateStreamPackageSSAIChannelAsync(const Model::CreateStreamPackageSSAIChannelRequest& request, const CreateStreamPackageSSAIChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamPackageSSAIChannelOutcomeCallable CreateStreamPackageSSAIChannelCallable(const Model::CreateStreamPackageSSAIChannelRequest& request);

                /**
                 *Create channel linear assembly Source.
                 * @param req CreateStreamPackageSourceRequest
                 * @return CreateStreamPackageSourceOutcome
                 */
                CreateStreamPackageSourceOutcome CreateStreamPackageSource(const Model::CreateStreamPackageSourceRequest &request);
                void CreateStreamPackageSourceAsync(const Model::CreateStreamPackageSourceRequest& request, const CreateStreamPackageSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamPackageSourceOutcomeCallable CreateStreamPackageSourceCallable(const Model::CreateStreamPackageSourceRequest& request);

                /**
                 *Create Linear Assembly SourceLocation.
                 * @param req CreateStreamPackageSourceLocationRequest
                 * @return CreateStreamPackageSourceLocationOutcome
                 */
                CreateStreamPackageSourceLocationOutcome CreateStreamPackageSourceLocation(const Model::CreateStreamPackageSourceLocationRequest &request);
                void CreateStreamPackageSourceLocationAsync(const Model::CreateStreamPackageSourceLocationRequest& request, const CreateStreamPackageSourceLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamPackageSourceLocationOutcomeCallable CreateStreamPackageSourceLocationCallable(const Model::CreateStreamPackageSourceLocationRequest& request);

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
                 *Delete HarvestJob.
                 * @param req DeleteStreamPackageHarvestJobRequest
                 * @return DeleteStreamPackageHarvestJobOutcome
                 */
                DeleteStreamPackageHarvestJobOutcome DeleteStreamPackageHarvestJob(const Model::DeleteStreamPackageHarvestJobRequest &request);
                void DeleteStreamPackageHarvestJobAsync(const Model::DeleteStreamPackageHarvestJobRequest& request, const DeleteStreamPackageHarvestJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamPackageHarvestJobOutcomeCallable DeleteStreamPackageHarvestJobCallable(const Model::DeleteStreamPackageHarvestJobRequest& request);

                /**
                 *Deleting HarvestJobs in Batch.
                 * @param req DeleteStreamPackageHarvestJobsRequest
                 * @return DeleteStreamPackageHarvestJobsOutcome
                 */
                DeleteStreamPackageHarvestJobsOutcome DeleteStreamPackageHarvestJobs(const Model::DeleteStreamPackageHarvestJobsRequest &request);
                void DeleteStreamPackageHarvestJobsAsync(const Model::DeleteStreamPackageHarvestJobsRequest& request, const DeleteStreamPackageHarvestJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamPackageHarvestJobsOutcomeCallable DeleteStreamPackageHarvestJobsCallable(const Model::DeleteStreamPackageHarvestJobsRequest& request);

                /**
                 *Delete channel linear assemblyChannel.
                 * @param req DeleteStreamPackageLinearAssemblyChannelRequest
                 * @return DeleteStreamPackageLinearAssemblyChannelOutcome
                 */
                DeleteStreamPackageLinearAssemblyChannelOutcome DeleteStreamPackageLinearAssemblyChannel(const Model::DeleteStreamPackageLinearAssemblyChannelRequest &request);
                void DeleteStreamPackageLinearAssemblyChannelAsync(const Model::DeleteStreamPackageLinearAssemblyChannelRequest& request, const DeleteStreamPackageLinearAssemblyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamPackageLinearAssemblyChannelOutcomeCallable DeleteStreamPackageLinearAssemblyChannelCallable(const Model::DeleteStreamPackageLinearAssemblyChannelRequest& request);

                /**
                 *Delete channels in batches and linearly assemble channels.
                 * @param req DeleteStreamPackageLinearAssemblyChannelsRequest
                 * @return DeleteStreamPackageLinearAssemblyChannelsOutcome
                 */
                DeleteStreamPackageLinearAssemblyChannelsOutcome DeleteStreamPackageLinearAssemblyChannels(const Model::DeleteStreamPackageLinearAssemblyChannelsRequest &request);
                void DeleteStreamPackageLinearAssemblyChannelsAsync(const Model::DeleteStreamPackageLinearAssemblyChannelsRequest& request, const DeleteStreamPackageLinearAssemblyChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamPackageLinearAssemblyChannelsOutcomeCallable DeleteStreamPackageLinearAssemblyChannelsCallable(const Model::DeleteStreamPackageLinearAssemblyChannelsRequest& request);

                /**
                 *Delete Channel Linear Assembly Program.
                 * @param req DeleteStreamPackageLinearAssemblyProgramRequest
                 * @return DeleteStreamPackageLinearAssemblyProgramOutcome
                 */
                DeleteStreamPackageLinearAssemblyProgramOutcome DeleteStreamPackageLinearAssemblyProgram(const Model::DeleteStreamPackageLinearAssemblyProgramRequest &request);
                void DeleteStreamPackageLinearAssemblyProgramAsync(const Model::DeleteStreamPackageLinearAssemblyProgramRequest& request, const DeleteStreamPackageLinearAssemblyProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamPackageLinearAssemblyProgramOutcomeCallable DeleteStreamPackageLinearAssemblyProgramCallable(const Model::DeleteStreamPackageLinearAssemblyProgramRequest& request);

                /**
                 *Batch deletion of channels linear assembly program.
                 * @param req DeleteStreamPackageLinearAssemblyProgramsRequest
                 * @return DeleteStreamPackageLinearAssemblyProgramsOutcome
                 */
                DeleteStreamPackageLinearAssemblyProgramsOutcome DeleteStreamPackageLinearAssemblyPrograms(const Model::DeleteStreamPackageLinearAssemblyProgramsRequest &request);
                void DeleteStreamPackageLinearAssemblyProgramsAsync(const Model::DeleteStreamPackageLinearAssemblyProgramsRequest& request, const DeleteStreamPackageLinearAssemblyProgramsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamPackageLinearAssemblyProgramsOutcomeCallable DeleteStreamPackageLinearAssemblyProgramsCallable(const Model::DeleteStreamPackageLinearAssemblyProgramsRequest& request);

                /**
                 *DeleteStreamPackageSSAIChannel
                 * @param req DeleteStreamPackageSSAIChannelRequest
                 * @return DeleteStreamPackageSSAIChannelOutcome
                 */
                DeleteStreamPackageSSAIChannelOutcome DeleteStreamPackageSSAIChannel(const Model::DeleteStreamPackageSSAIChannelRequest &request);
                void DeleteStreamPackageSSAIChannelAsync(const Model::DeleteStreamPackageSSAIChannelRequest& request, const DeleteStreamPackageSSAIChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamPackageSSAIChannelOutcomeCallable DeleteStreamPackageSSAIChannelCallable(const Model::DeleteStreamPackageSSAIChannelRequest& request);

                /**
                 *Delete channel linear assembly Source.
                 * @param req DeleteStreamPackageSourceRequest
                 * @return DeleteStreamPackageSourceOutcome
                 */
                DeleteStreamPackageSourceOutcome DeleteStreamPackageSource(const Model::DeleteStreamPackageSourceRequest &request);
                void DeleteStreamPackageSourceAsync(const Model::DeleteStreamPackageSourceRequest& request, const DeleteStreamPackageSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamPackageSourceOutcomeCallable DeleteStreamPackageSourceCallable(const Model::DeleteStreamPackageSourceRequest& request);

                /**
                 *Batch delete media packaging SourceLocation.
                 * @param req DeleteStreamPackageSourceLocationRequest
                 * @return DeleteStreamPackageSourceLocationOutcome
                 */
                DeleteStreamPackageSourceLocationOutcome DeleteStreamPackageSourceLocation(const Model::DeleteStreamPackageSourceLocationRequest &request);
                void DeleteStreamPackageSourceLocationAsync(const Model::DeleteStreamPackageSourceLocationRequest& request, const DeleteStreamPackageSourceLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamPackageSourceLocationOutcomeCallable DeleteStreamPackageSourceLocationCallable(const Model::DeleteStreamPackageSourceLocationRequest& request);

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
                 *Query HarvestJob.
                 * @param req DescribeStreamPackageHarvestJobRequest
                 * @return DescribeStreamPackageHarvestJobOutcome
                 */
                DescribeStreamPackageHarvestJobOutcome DescribeStreamPackageHarvestJob(const Model::DescribeStreamPackageHarvestJobRequest &request);
                void DescribeStreamPackageHarvestJobAsync(const Model::DescribeStreamPackageHarvestJobRequest& request, const DescribeStreamPackageHarvestJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageHarvestJobOutcomeCallable DescribeStreamPackageHarvestJobCallable(const Model::DescribeStreamPackageHarvestJobRequest& request);

                /**
                 *Batch query HarvestJob.
                 * @param req DescribeStreamPackageHarvestJobsRequest
                 * @return DescribeStreamPackageHarvestJobsOutcome
                 */
                DescribeStreamPackageHarvestJobsOutcome DescribeStreamPackageHarvestJobs(const Model::DescribeStreamPackageHarvestJobsRequest &request);
                void DescribeStreamPackageHarvestJobsAsync(const Model::DescribeStreamPackageHarvestJobsRequest& request, const DescribeStreamPackageHarvestJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageHarvestJobsOutcomeCallable DescribeStreamPackageHarvestJobsCallable(const Model::DescribeStreamPackageHarvestJobsRequest& request);

                /**
                 *Query channel linear assembly Channel information.
                 * @param req DescribeStreamPackageLinearAssemblyChannelRequest
                 * @return DescribeStreamPackageLinearAssemblyChannelOutcome
                 */
                DescribeStreamPackageLinearAssemblyChannelOutcome DescribeStreamPackageLinearAssemblyChannel(const Model::DescribeStreamPackageLinearAssemblyChannelRequest &request);
                void DescribeStreamPackageLinearAssemblyChannelAsync(const Model::DescribeStreamPackageLinearAssemblyChannelRequest& request, const DescribeStreamPackageLinearAssemblyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageLinearAssemblyChannelOutcomeCallable DescribeStreamPackageLinearAssemblyChannelCallable(const Model::DescribeStreamPackageLinearAssemblyChannelRequest& request);

                /**
                 *Query linear assembly channel alarm information.
                 * @param req DescribeStreamPackageLinearAssemblyChannelAlertsRequest
                 * @return DescribeStreamPackageLinearAssemblyChannelAlertsOutcome
                 */
                DescribeStreamPackageLinearAssemblyChannelAlertsOutcome DescribeStreamPackageLinearAssemblyChannelAlerts(const Model::DescribeStreamPackageLinearAssemblyChannelAlertsRequest &request);
                void DescribeStreamPackageLinearAssemblyChannelAlertsAsync(const Model::DescribeStreamPackageLinearAssemblyChannelAlertsRequest& request, const DescribeStreamPackageLinearAssemblyChannelAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageLinearAssemblyChannelAlertsOutcomeCallable DescribeStreamPackageLinearAssemblyChannelAlertsCallable(const Model::DescribeStreamPackageLinearAssemblyChannelAlertsRequest& request);

                /**
                 *Query channel linear assembly Channel information list.
                 * @param req DescribeStreamPackageLinearAssemblyChannelsRequest
                 * @return DescribeStreamPackageLinearAssemblyChannelsOutcome
                 */
                DescribeStreamPackageLinearAssemblyChannelsOutcome DescribeStreamPackageLinearAssemblyChannels(const Model::DescribeStreamPackageLinearAssemblyChannelsRequest &request);
                void DescribeStreamPackageLinearAssemblyChannelsAsync(const Model::DescribeStreamPackageLinearAssemblyChannelsRequest& request, const DescribeStreamPackageLinearAssemblyChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageLinearAssemblyChannelsOutcomeCallable DescribeStreamPackageLinearAssemblyChannelsCallable(const Model::DescribeStreamPackageLinearAssemblyChannelsRequest& request);

                /**
                 *Query channel linear assembly program information.
                 * @param req DescribeStreamPackageLinearAssemblyProgramRequest
                 * @return DescribeStreamPackageLinearAssemblyProgramOutcome
                 */
                DescribeStreamPackageLinearAssemblyProgramOutcome DescribeStreamPackageLinearAssemblyProgram(const Model::DescribeStreamPackageLinearAssemblyProgramRequest &request);
                void DescribeStreamPackageLinearAssemblyProgramAsync(const Model::DescribeStreamPackageLinearAssemblyProgramRequest& request, const DescribeStreamPackageLinearAssemblyProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageLinearAssemblyProgramOutcomeCallable DescribeStreamPackageLinearAssemblyProgramCallable(const Model::DescribeStreamPackageLinearAssemblyProgramRequest& request);

                /**
                 *Query channel linear assembly Programl assembly scheduling information list.
                 * @param req DescribeStreamPackageLinearAssemblyProgramSchedulesRequest
                 * @return DescribeStreamPackageLinearAssemblyProgramSchedulesOutcome
                 */
                DescribeStreamPackageLinearAssemblyProgramSchedulesOutcome DescribeStreamPackageLinearAssemblyProgramSchedules(const Model::DescribeStreamPackageLinearAssemblyProgramSchedulesRequest &request);
                void DescribeStreamPackageLinearAssemblyProgramSchedulesAsync(const Model::DescribeStreamPackageLinearAssemblyProgramSchedulesRequest& request, const DescribeStreamPackageLinearAssemblyProgramSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageLinearAssemblyProgramSchedulesOutcomeCallable DescribeStreamPackageLinearAssemblyProgramSchedulesCallable(const Model::DescribeStreamPackageLinearAssemblyProgramSchedulesRequest& request);

                /**
                 *Query channel linear assembly Programl information list.
                 * @param req DescribeStreamPackageLinearAssemblyProgramsRequest
                 * @return DescribeStreamPackageLinearAssemblyProgramsOutcome
                 */
                DescribeStreamPackageLinearAssemblyProgramsOutcome DescribeStreamPackageLinearAssemblyPrograms(const Model::DescribeStreamPackageLinearAssemblyProgramsRequest &request);
                void DescribeStreamPackageLinearAssemblyProgramsAsync(const Model::DescribeStreamPackageLinearAssemblyProgramsRequest& request, const DescribeStreamPackageLinearAssemblyProgramsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageLinearAssemblyProgramsOutcomeCallable DescribeStreamPackageLinearAssemblyProgramsCallable(const Model::DescribeStreamPackageLinearAssemblyProgramsRequest& request);

                /**
                 *DescribeStreamPackageSSAIChannel
                 * @param req DescribeStreamPackageSSAIChannelRequest
                 * @return DescribeStreamPackageSSAIChannelOutcome
                 */
                DescribeStreamPackageSSAIChannelOutcome DescribeStreamPackageSSAIChannel(const Model::DescribeStreamPackageSSAIChannelRequest &request);
                void DescribeStreamPackageSSAIChannelAsync(const Model::DescribeStreamPackageSSAIChannelRequest& request, const DescribeStreamPackageSSAIChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageSSAIChannelOutcomeCallable DescribeStreamPackageSSAIChannelCallable(const Model::DescribeStreamPackageSSAIChannelRequest& request);

                /**
                 *DescribeStreamPackageSSAIChannels
                 * @param req DescribeStreamPackageSSAIChannelsRequest
                 * @return DescribeStreamPackageSSAIChannelsOutcome
                 */
                DescribeStreamPackageSSAIChannelsOutcome DescribeStreamPackageSSAIChannels(const Model::DescribeStreamPackageSSAIChannelsRequest &request);
                void DescribeStreamPackageSSAIChannelsAsync(const Model::DescribeStreamPackageSSAIChannelsRequest& request, const DescribeStreamPackageSSAIChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageSSAIChannelsOutcomeCallable DescribeStreamPackageSSAIChannelsCallable(const Model::DescribeStreamPackageSSAIChannelsRequest& request);

                /**
                 *Query channel linear assembly Source information.
                 * @param req DescribeStreamPackageSourceRequest
                 * @return DescribeStreamPackageSourceOutcome
                 */
                DescribeStreamPackageSourceOutcome DescribeStreamPackageSource(const Model::DescribeStreamPackageSourceRequest &request);
                void DescribeStreamPackageSourceAsync(const Model::DescribeStreamPackageSourceRequest& request, const DescribeStreamPackageSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageSourceOutcomeCallable DescribeStreamPackageSourceCallable(const Model::DescribeStreamPackageSourceRequest& request);

                /**
                 *Query channel linear assembly Source alarm information.
                 * @param req DescribeStreamPackageSourceAlertsRequest
                 * @return DescribeStreamPackageSourceAlertsOutcome
                 */
                DescribeStreamPackageSourceAlertsOutcome DescribeStreamPackageSourceAlerts(const Model::DescribeStreamPackageSourceAlertsRequest &request);
                void DescribeStreamPackageSourceAlertsAsync(const Model::DescribeStreamPackageSourceAlertsRequest& request, const DescribeStreamPackageSourceAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageSourceAlertsOutcomeCallable DescribeStreamPackageSourceAlertsCallable(const Model::DescribeStreamPackageSourceAlertsRequest& request);

                /**
                 *Query channel linear assembly sourceLocation information.
                 * @param req DescribeStreamPackageSourceLocationRequest
                 * @return DescribeStreamPackageSourceLocationOutcome
                 */
                DescribeStreamPackageSourceLocationOutcome DescribeStreamPackageSourceLocation(const Model::DescribeStreamPackageSourceLocationRequest &request);
                void DescribeStreamPackageSourceLocationAsync(const Model::DescribeStreamPackageSourceLocationRequest& request, const DescribeStreamPackageSourceLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageSourceLocationOutcomeCallable DescribeStreamPackageSourceLocationCallable(const Model::DescribeStreamPackageSourceLocationRequest& request);

                /**
                 *Query channel linear assembly Location alarm information.
                 * @param req DescribeStreamPackageSourceLocationAlertsRequest
                 * @return DescribeStreamPackageSourceLocationAlertsOutcome
                 */
                DescribeStreamPackageSourceLocationAlertsOutcome DescribeStreamPackageSourceLocationAlerts(const Model::DescribeStreamPackageSourceLocationAlertsRequest &request);
                void DescribeStreamPackageSourceLocationAlertsAsync(const Model::DescribeStreamPackageSourceLocationAlertsRequest& request, const DescribeStreamPackageSourceLocationAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageSourceLocationAlertsOutcomeCallable DescribeStreamPackageSourceLocationAlertsCallable(const Model::DescribeStreamPackageSourceLocationAlertsRequest& request);

                /**
                 *Query channel linear assembly SourceLocation information list.
                 * @param req DescribeStreamPackageSourceLocationsRequest
                 * @return DescribeStreamPackageSourceLocationsOutcome
                 */
                DescribeStreamPackageSourceLocationsOutcome DescribeStreamPackageSourceLocations(const Model::DescribeStreamPackageSourceLocationsRequest &request);
                void DescribeStreamPackageSourceLocationsAsync(const Model::DescribeStreamPackageSourceLocationsRequest& request, const DescribeStreamPackageSourceLocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageSourceLocationsOutcomeCallable DescribeStreamPackageSourceLocationsCallable(const Model::DescribeStreamPackageSourceLocationsRequest& request);

                /**
                 *Query channel linear assembly Source information list.
                 * @param req DescribeStreamPackageSourcesRequest
                 * @return DescribeStreamPackageSourcesOutcome
                 */
                DescribeStreamPackageSourcesOutcome DescribeStreamPackageSources(const Model::DescribeStreamPackageSourcesRequest &request);
                void DescribeStreamPackageSourcesAsync(const Model::DescribeStreamPackageSourcesRequest& request, const DescribeStreamPackageSourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamPackageSourcesOutcomeCallable DescribeStreamPackageSourcesCallable(const Model::DescribeStreamPackageSourcesRequest& request);

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
                 *Modify channel linear assembly Channel configuration.
                 * @param req ModifyStreamPackageLinearAssemblyChannelRequest
                 * @return ModifyStreamPackageLinearAssemblyChannelOutcome
                 */
                ModifyStreamPackageLinearAssemblyChannelOutcome ModifyStreamPackageLinearAssemblyChannel(const Model::ModifyStreamPackageLinearAssemblyChannelRequest &request);
                void ModifyStreamPackageLinearAssemblyChannelAsync(const Model::ModifyStreamPackageLinearAssemblyChannelRequest& request, const ModifyStreamPackageLinearAssemblyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamPackageLinearAssemblyChannelOutcomeCallable ModifyStreamPackageLinearAssemblyChannelCallable(const Model::ModifyStreamPackageLinearAssemblyChannelRequest& request);

                /**
                 *Modify channel linear assembly Program configuration.
                 * @param req ModifyStreamPackageLinearAssemblyProgramRequest
                 * @return ModifyStreamPackageLinearAssemblyProgramOutcome
                 */
                ModifyStreamPackageLinearAssemblyProgramOutcome ModifyStreamPackageLinearAssemblyProgram(const Model::ModifyStreamPackageLinearAssemblyProgramRequest &request);
                void ModifyStreamPackageLinearAssemblyProgramAsync(const Model::ModifyStreamPackageLinearAssemblyProgramRequest& request, const ModifyStreamPackageLinearAssemblyProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamPackageLinearAssemblyProgramOutcomeCallable ModifyStreamPackageLinearAssemblyProgramCallable(const Model::ModifyStreamPackageLinearAssemblyProgramRequest& request);

                /**
                 *ModifyStreamPackageSSAIChannel
                 * @param req ModifyStreamPackageSSAIChannelRequest
                 * @return ModifyStreamPackageSSAIChannelOutcome
                 */
                ModifyStreamPackageSSAIChannelOutcome ModifyStreamPackageSSAIChannel(const Model::ModifyStreamPackageSSAIChannelRequest &request);
                void ModifyStreamPackageSSAIChannelAsync(const Model::ModifyStreamPackageSSAIChannelRequest& request, const ModifyStreamPackageSSAIChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamPackageSSAIChannelOutcomeCallable ModifyStreamPackageSSAIChannelCallable(const Model::ModifyStreamPackageSSAIChannelRequest& request);

                /**
                 *Modify channel linear assembly Source configuration.
                 * @param req ModifyStreamPackageSourceRequest
                 * @return ModifyStreamPackageSourceOutcome
                 */
                ModifyStreamPackageSourceOutcome ModifyStreamPackageSource(const Model::ModifyStreamPackageSourceRequest &request);
                void ModifyStreamPackageSourceAsync(const Model::ModifyStreamPackageSourceRequest& request, const ModifyStreamPackageSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamPackageSourceOutcomeCallable ModifyStreamPackageSourceCallable(const Model::ModifyStreamPackageSourceRequest& request);

                /**
                 *Modify channel linear assembly SourceLocation configuration
                 * @param req ModifyStreamPackageSourceLocationRequest
                 * @return ModifyStreamPackageSourceLocationOutcome
                 */
                ModifyStreamPackageSourceLocationOutcome ModifyStreamPackageSourceLocation(const Model::ModifyStreamPackageSourceLocationRequest &request);
                void ModifyStreamPackageSourceLocationAsync(const Model::ModifyStreamPackageSourceLocationRequest& request, const ModifyStreamPackageSourceLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamPackageSourceLocationOutcomeCallable ModifyStreamPackageSourceLocationCallable(const Model::ModifyStreamPackageSourceLocationRequest& request);

                /**
                 *Start Linear Assembly Channel.
                 * @param req StartStreamPackageLinearAssemblyChannelRequest
                 * @return StartStreamPackageLinearAssemblyChannelOutcome
                 */
                StartStreamPackageLinearAssemblyChannelOutcome StartStreamPackageLinearAssemblyChannel(const Model::StartStreamPackageLinearAssemblyChannelRequest &request);
                void StartStreamPackageLinearAssemblyChannelAsync(const Model::StartStreamPackageLinearAssemblyChannelRequest& request, const StartStreamPackageLinearAssemblyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartStreamPackageLinearAssemblyChannelOutcomeCallable StartStreamPackageLinearAssemblyChannelCallable(const Model::StartStreamPackageLinearAssemblyChannelRequest& request);

                /**
                 *Stop linear assembly channel.
                 * @param req StopStreamPackageLinearAssemblyChannelRequest
                 * @return StopStreamPackageLinearAssemblyChannelOutcome
                 */
                StopStreamPackageLinearAssemblyChannelOutcome StopStreamPackageLinearAssemblyChannel(const Model::StopStreamPackageLinearAssemblyChannelRequest &request);
                void StopStreamPackageLinearAssemblyChannelAsync(const Model::StopStreamPackageLinearAssemblyChannelRequest& request, const StopStreamPackageLinearAssemblyChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopStreamPackageLinearAssemblyChannelOutcomeCallable StopStreamPackageLinearAssemblyChannelCallable(const Model::StopStreamPackageLinearAssemblyChannelRequest& request);

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
