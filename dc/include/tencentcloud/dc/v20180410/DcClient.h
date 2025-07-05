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

#ifndef TENCENTCLOUD_DC_V20180410_DCCLIENT_H_
#define TENCENTCLOUD_DC_V20180410_DCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dc/v20180410/model/AcceptDirectConnectTunnelRequest.h>
#include <tencentcloud/dc/v20180410/model/AcceptDirectConnectTunnelResponse.h>
#include <tencentcloud/dc/v20180410/model/ApplyInternetAddressRequest.h>
#include <tencentcloud/dc/v20180410/model/ApplyInternetAddressResponse.h>
#include <tencentcloud/dc/v20180410/model/CreateDirectConnectRequest.h>
#include <tencentcloud/dc/v20180410/model/CreateDirectConnectResponse.h>
#include <tencentcloud/dc/v20180410/model/CreateDirectConnectTunnelRequest.h>
#include <tencentcloud/dc/v20180410/model/CreateDirectConnectTunnelResponse.h>
#include <tencentcloud/dc/v20180410/model/DeleteDirectConnectRequest.h>
#include <tencentcloud/dc/v20180410/model/DeleteDirectConnectResponse.h>
#include <tencentcloud/dc/v20180410/model/DeleteDirectConnectTunnelRequest.h>
#include <tencentcloud/dc/v20180410/model/DeleteDirectConnectTunnelResponse.h>
#include <tencentcloud/dc/v20180410/model/DescribeAccessPointsRequest.h>
#include <tencentcloud/dc/v20180410/model/DescribeAccessPointsResponse.h>
#include <tencentcloud/dc/v20180410/model/DescribeDirectConnectTunnelsRequest.h>
#include <tencentcloud/dc/v20180410/model/DescribeDirectConnectTunnelsResponse.h>
#include <tencentcloud/dc/v20180410/model/DescribeDirectConnectsRequest.h>
#include <tencentcloud/dc/v20180410/model/DescribeDirectConnectsResponse.h>
#include <tencentcloud/dc/v20180410/model/DescribeInternetAddressRequest.h>
#include <tencentcloud/dc/v20180410/model/DescribeInternetAddressResponse.h>
#include <tencentcloud/dc/v20180410/model/DescribeInternetAddressQuotaRequest.h>
#include <tencentcloud/dc/v20180410/model/DescribeInternetAddressQuotaResponse.h>
#include <tencentcloud/dc/v20180410/model/DescribeInternetAddressStatisticsRequest.h>
#include <tencentcloud/dc/v20180410/model/DescribeInternetAddressStatisticsResponse.h>
#include <tencentcloud/dc/v20180410/model/DisableInternetAddressRequest.h>
#include <tencentcloud/dc/v20180410/model/DisableInternetAddressResponse.h>
#include <tencentcloud/dc/v20180410/model/EnableInternetAddressRequest.h>
#include <tencentcloud/dc/v20180410/model/EnableInternetAddressResponse.h>
#include <tencentcloud/dc/v20180410/model/ModifyDirectConnectAttributeRequest.h>
#include <tencentcloud/dc/v20180410/model/ModifyDirectConnectAttributeResponse.h>
#include <tencentcloud/dc/v20180410/model/ModifyDirectConnectTunnelAttributeRequest.h>
#include <tencentcloud/dc/v20180410/model/ModifyDirectConnectTunnelAttributeResponse.h>
#include <tencentcloud/dc/v20180410/model/RejectDirectConnectTunnelRequest.h>
#include <tencentcloud/dc/v20180410/model/RejectDirectConnectTunnelResponse.h>
#include <tencentcloud/dc/v20180410/model/ReleaseInternetAddressRequest.h>
#include <tencentcloud/dc/v20180410/model/ReleaseInternetAddressResponse.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            class DcClient : public AbstractClient
            {
            public:
                DcClient(const Credential &credential, const std::string &region);
                DcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AcceptDirectConnectTunnelResponse> AcceptDirectConnectTunnelOutcome;
                typedef std::future<AcceptDirectConnectTunnelOutcome> AcceptDirectConnectTunnelOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::AcceptDirectConnectTunnelRequest&, AcceptDirectConnectTunnelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AcceptDirectConnectTunnelAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplyInternetAddressResponse> ApplyInternetAddressOutcome;
                typedef std::future<ApplyInternetAddressOutcome> ApplyInternetAddressOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::ApplyInternetAddressRequest&, ApplyInternetAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyInternetAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDirectConnectResponse> CreateDirectConnectOutcome;
                typedef std::future<CreateDirectConnectOutcome> CreateDirectConnectOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::CreateDirectConnectRequest&, CreateDirectConnectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDirectConnectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDirectConnectTunnelResponse> CreateDirectConnectTunnelOutcome;
                typedef std::future<CreateDirectConnectTunnelOutcome> CreateDirectConnectTunnelOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::CreateDirectConnectTunnelRequest&, CreateDirectConnectTunnelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDirectConnectTunnelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDirectConnectResponse> DeleteDirectConnectOutcome;
                typedef std::future<DeleteDirectConnectOutcome> DeleteDirectConnectOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DeleteDirectConnectRequest&, DeleteDirectConnectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDirectConnectAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDirectConnectTunnelResponse> DeleteDirectConnectTunnelOutcome;
                typedef std::future<DeleteDirectConnectTunnelOutcome> DeleteDirectConnectTunnelOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DeleteDirectConnectTunnelRequest&, DeleteDirectConnectTunnelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDirectConnectTunnelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessPointsResponse> DescribeAccessPointsOutcome;
                typedef std::future<DescribeAccessPointsOutcome> DescribeAccessPointsOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DescribeAccessPointsRequest&, DescribeAccessPointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessPointsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDirectConnectTunnelsResponse> DescribeDirectConnectTunnelsOutcome;
                typedef std::future<DescribeDirectConnectTunnelsOutcome> DescribeDirectConnectTunnelsOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DescribeDirectConnectTunnelsRequest&, DescribeDirectConnectTunnelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirectConnectTunnelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDirectConnectsResponse> DescribeDirectConnectsOutcome;
                typedef std::future<DescribeDirectConnectsOutcome> DescribeDirectConnectsOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DescribeDirectConnectsRequest&, DescribeDirectConnectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirectConnectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInternetAddressResponse> DescribeInternetAddressOutcome;
                typedef std::future<DescribeInternetAddressOutcome> DescribeInternetAddressOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DescribeInternetAddressRequest&, DescribeInternetAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInternetAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInternetAddressQuotaResponse> DescribeInternetAddressQuotaOutcome;
                typedef std::future<DescribeInternetAddressQuotaOutcome> DescribeInternetAddressQuotaOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DescribeInternetAddressQuotaRequest&, DescribeInternetAddressQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInternetAddressQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInternetAddressStatisticsResponse> DescribeInternetAddressStatisticsOutcome;
                typedef std::future<DescribeInternetAddressStatisticsOutcome> DescribeInternetAddressStatisticsOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DescribeInternetAddressStatisticsRequest&, DescribeInternetAddressStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInternetAddressStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableInternetAddressResponse> DisableInternetAddressOutcome;
                typedef std::future<DisableInternetAddressOutcome> DisableInternetAddressOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::DisableInternetAddressRequest&, DisableInternetAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableInternetAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableInternetAddressResponse> EnableInternetAddressOutcome;
                typedef std::future<EnableInternetAddressOutcome> EnableInternetAddressOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::EnableInternetAddressRequest&, EnableInternetAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableInternetAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDirectConnectAttributeResponse> ModifyDirectConnectAttributeOutcome;
                typedef std::future<ModifyDirectConnectAttributeOutcome> ModifyDirectConnectAttributeOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::ModifyDirectConnectAttributeRequest&, ModifyDirectConnectAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDirectConnectAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDirectConnectTunnelAttributeResponse> ModifyDirectConnectTunnelAttributeOutcome;
                typedef std::future<ModifyDirectConnectTunnelAttributeOutcome> ModifyDirectConnectTunnelAttributeOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::ModifyDirectConnectTunnelAttributeRequest&, ModifyDirectConnectTunnelAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDirectConnectTunnelAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::RejectDirectConnectTunnelResponse> RejectDirectConnectTunnelOutcome;
                typedef std::future<RejectDirectConnectTunnelOutcome> RejectDirectConnectTunnelOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::RejectDirectConnectTunnelRequest&, RejectDirectConnectTunnelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RejectDirectConnectTunnelAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseInternetAddressResponse> ReleaseInternetAddressOutcome;
                typedef std::future<ReleaseInternetAddressOutcome> ReleaseInternetAddressOutcomeCallable;
                typedef std::function<void(const DcClient*, const Model::ReleaseInternetAddressRequest&, ReleaseInternetAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInternetAddressAsyncHandler;



                /**
                 *This API is used to accept an application for a dedicated tunnel.
                 * @param req AcceptDirectConnectTunnelRequest
                 * @return AcceptDirectConnectTunnelOutcome
                 */
                AcceptDirectConnectTunnelOutcome AcceptDirectConnectTunnel(const Model::AcceptDirectConnectTunnelRequest &request);
                void AcceptDirectConnectTunnelAsync(const Model::AcceptDirectConnectTunnelRequest& request, const AcceptDirectConnectTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AcceptDirectConnectTunnelOutcomeCallable AcceptDirectConnectTunnelCallable(const Model::AcceptDirectConnectTunnelRequest& request);

                /**
                 *This API is used to apply for an internet tunnel’s CIDR block.
                 * @param req ApplyInternetAddressRequest
                 * @return ApplyInternetAddressOutcome
                 */
                ApplyInternetAddressOutcome ApplyInternetAddress(const Model::ApplyInternetAddressRequest &request);
                void ApplyInternetAddressAsync(const Model::ApplyInternetAddressRequest& request, const ApplyInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyInternetAddressOutcomeCallable ApplyInternetAddressCallable(const Model::ApplyInternetAddressRequest& request);

                /**
                 *This API is used to apply for a connection.
When calling this API, please note that:
You need to complete identity verification for your account; otherwise, you cannot apply for a connection;
If there is any connection in arrears under your account, you cannot apply for more connections.
                 * @param req CreateDirectConnectRequest
                 * @return CreateDirectConnectOutcome
                 */
                CreateDirectConnectOutcome CreateDirectConnect(const Model::CreateDirectConnectRequest &request);
                void CreateDirectConnectAsync(const Model::CreateDirectConnectRequest& request, const CreateDirectConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDirectConnectOutcomeCallable CreateDirectConnectCallable(const Model::CreateDirectConnectRequest& request);

                /**
                 *This API is used to create a dedicated tunnel.
                 * @param req CreateDirectConnectTunnelRequest
                 * @return CreateDirectConnectTunnelOutcome
                 */
                CreateDirectConnectTunnelOutcome CreateDirectConnectTunnel(const Model::CreateDirectConnectTunnelRequest &request);
                void CreateDirectConnectTunnelAsync(const Model::CreateDirectConnectTunnelRequest& request, const CreateDirectConnectTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDirectConnectTunnelOutcomeCallable CreateDirectConnectTunnelCallable(const Model::CreateDirectConnectTunnelRequest& request);

                /**
                 *This API is used to delete a connection.
Only connected connections can be deleted.
                 * @param req DeleteDirectConnectRequest
                 * @return DeleteDirectConnectOutcome
                 */
                DeleteDirectConnectOutcome DeleteDirectConnect(const Model::DeleteDirectConnectRequest &request);
                void DeleteDirectConnectAsync(const Model::DeleteDirectConnectRequest& request, const DeleteDirectConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDirectConnectOutcomeCallable DeleteDirectConnectCallable(const Model::DeleteDirectConnectRequest& request);

                /**
                 *This API is used to delete a dedicated tunnel.
                 * @param req DeleteDirectConnectTunnelRequest
                 * @return DeleteDirectConnectTunnelOutcome
                 */
                DeleteDirectConnectTunnelOutcome DeleteDirectConnectTunnel(const Model::DeleteDirectConnectTunnelRequest &request);
                void DeleteDirectConnectTunnelAsync(const Model::DeleteDirectConnectTunnelRequest& request, const DeleteDirectConnectTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDirectConnectTunnelOutcomeCallable DeleteDirectConnectTunnelCallable(const Model::DeleteDirectConnectTunnelRequest& request);

                /**
                 *This API is used to query connection access points.

                 * @param req DescribeAccessPointsRequest
                 * @return DescribeAccessPointsOutcome
                 */
                DescribeAccessPointsOutcome DescribeAccessPoints(const Model::DescribeAccessPointsRequest &request);
                void DescribeAccessPointsAsync(const Model::DescribeAccessPointsRequest& request, const DescribeAccessPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessPointsOutcomeCallable DescribeAccessPointsCallable(const Model::DescribeAccessPointsRequest& request);

                /**
                 *This API is used to query the list of dedicated tunnels.
                 * @param req DescribeDirectConnectTunnelsRequest
                 * @return DescribeDirectConnectTunnelsOutcome
                 */
                DescribeDirectConnectTunnelsOutcome DescribeDirectConnectTunnels(const Model::DescribeDirectConnectTunnelsRequest &request);
                void DescribeDirectConnectTunnelsAsync(const Model::DescribeDirectConnectTunnelsRequest& request, const DescribeDirectConnectTunnelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDirectConnectTunnelsOutcomeCallable DescribeDirectConnectTunnelsCallable(const Model::DescribeDirectConnectTunnelsRequest& request);

                /**
                 *This API is used to query the list of connections.
                 * @param req DescribeDirectConnectsRequest
                 * @return DescribeDirectConnectsOutcome
                 */
                DescribeDirectConnectsOutcome DescribeDirectConnects(const Model::DescribeDirectConnectsRequest &request);
                void DescribeDirectConnectsAsync(const Model::DescribeDirectConnectsRequest& request, const DescribeDirectConnectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDirectConnectsOutcomeCallable DescribeDirectConnectsCallable(const Model::DescribeDirectConnectsRequest& request);

                /**
                 *This API is used to obtain the public IP address of an internet tunnel.
                 * @param req DescribeInternetAddressRequest
                 * @return DescribeInternetAddressOutcome
                 */
                DescribeInternetAddressOutcome DescribeInternetAddress(const Model::DescribeInternetAddressRequest &request);
                void DescribeInternetAddressAsync(const Model::DescribeInternetAddressRequest& request, const DescribeInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInternetAddressOutcomeCallable DescribeInternetAddressCallable(const Model::DescribeInternetAddressRequest& request);

                /**
                 *This API is used to obtain the public IP quota of internet tunnels.
                 * @param req DescribeInternetAddressQuotaRequest
                 * @return DescribeInternetAddressQuotaOutcome
                 */
                DescribeInternetAddressQuotaOutcome DescribeInternetAddressQuota(const Model::DescribeInternetAddressQuotaRequest &request);
                void DescribeInternetAddressQuotaAsync(const Model::DescribeInternetAddressQuotaRequest& request, const DescribeInternetAddressQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInternetAddressQuotaOutcomeCallable DescribeInternetAddressQuotaCallable(const Model::DescribeInternetAddressQuotaRequest& request);

                /**
                 *This API is used to obtain the public IP address assignment statistics of internet tunnels.
                 * @param req DescribeInternetAddressStatisticsRequest
                 * @return DescribeInternetAddressStatisticsOutcome
                 */
                DescribeInternetAddressStatisticsOutcome DescribeInternetAddressStatistics(const Model::DescribeInternetAddressStatisticsRequest &request);
                void DescribeInternetAddressStatisticsAsync(const Model::DescribeInternetAddressStatisticsRequest& request, const DescribeInternetAddressStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInternetAddressStatisticsOutcomeCallable DescribeInternetAddressStatisticsCallable(const Model::DescribeInternetAddressStatisticsRequest& request);

                /**
                 *This API is used to disable a public IP address of internet tunnels.
                 * @param req DisableInternetAddressRequest
                 * @return DisableInternetAddressOutcome
                 */
                DisableInternetAddressOutcome DisableInternetAddress(const Model::DisableInternetAddressRequest &request);
                void DisableInternetAddressAsync(const Model::DisableInternetAddressRequest& request, const DisableInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableInternetAddressOutcomeCallable DisableInternetAddressCallable(const Model::DisableInternetAddressRequest& request);

                /**
                 *This API is used to enable a public IP address for internet tunnels.
                 * @param req EnableInternetAddressRequest
                 * @return EnableInternetAddressOutcome
                 */
                EnableInternetAddressOutcome EnableInternetAddress(const Model::EnableInternetAddressRequest &request);
                void EnableInternetAddressAsync(const Model::EnableInternetAddressRequest& request, const EnableInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableInternetAddressOutcomeCallable EnableInternetAddressCallable(const Model::EnableInternetAddressRequest& request);

                /**
                 *This API is used to modify connection attributes.
                 * @param req ModifyDirectConnectAttributeRequest
                 * @return ModifyDirectConnectAttributeOutcome
                 */
                ModifyDirectConnectAttributeOutcome ModifyDirectConnectAttribute(const Model::ModifyDirectConnectAttributeRequest &request);
                void ModifyDirectConnectAttributeAsync(const Model::ModifyDirectConnectAttributeRequest& request, const ModifyDirectConnectAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDirectConnectAttributeOutcomeCallable ModifyDirectConnectAttributeCallable(const Model::ModifyDirectConnectAttributeRequest& request);

                /**
                 *This API is used to modify the dedicated tunnel attributes.
                 * @param req ModifyDirectConnectTunnelAttributeRequest
                 * @return ModifyDirectConnectTunnelAttributeOutcome
                 */
                ModifyDirectConnectTunnelAttributeOutcome ModifyDirectConnectTunnelAttribute(const Model::ModifyDirectConnectTunnelAttributeRequest &request);
                void ModifyDirectConnectTunnelAttributeAsync(const Model::ModifyDirectConnectTunnelAttributeRequest& request, const ModifyDirectConnectTunnelAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDirectConnectTunnelAttributeOutcomeCallable ModifyDirectConnectTunnelAttributeCallable(const Model::ModifyDirectConnectTunnelAttributeRequest& request);

                /**
                 *This API is used to reject an application for a dedicated tunnel.
                 * @param req RejectDirectConnectTunnelRequest
                 * @return RejectDirectConnectTunnelOutcome
                 */
                RejectDirectConnectTunnelOutcome RejectDirectConnectTunnel(const Model::RejectDirectConnectTunnelRequest &request);
                void RejectDirectConnectTunnelAsync(const Model::RejectDirectConnectTunnelRequest& request, const RejectDirectConnectTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RejectDirectConnectTunnelOutcomeCallable RejectDirectConnectTunnelCallable(const Model::RejectDirectConnectTunnelRequest& request);

                /**
                 *This API is used to release an IP address of internet tunnels.
                 * @param req ReleaseInternetAddressRequest
                 * @return ReleaseInternetAddressOutcome
                 */
                ReleaseInternetAddressOutcome ReleaseInternetAddress(const Model::ReleaseInternetAddressRequest &request);
                void ReleaseInternetAddressAsync(const Model::ReleaseInternetAddressRequest& request, const ReleaseInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseInternetAddressOutcomeCallable ReleaseInternetAddressCallable(const Model::ReleaseInternetAddressRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_DCCLIENT_H_
