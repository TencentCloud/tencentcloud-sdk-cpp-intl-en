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

#ifndef TENCENTCLOUD_GSE_V20191112_GSECLIENT_H_
#define TENCENTCLOUD_GSE_V20191112_GSECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/gse/v20191112/model/CopyFleetRequest.h>
#include <tencentcloud/gse/v20191112/model/CopyFleetResponse.h>
#include <tencentcloud/gse/v20191112/model/CreateGameServerSessionRequest.h>
#include <tencentcloud/gse/v20191112/model/CreateGameServerSessionResponse.h>
#include <tencentcloud/gse/v20191112/model/DeleteTimerScalingPolicyRequest.h>
#include <tencentcloud/gse/v20191112/model/DeleteTimerScalingPolicyResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionDetailsRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionDetailsResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionPlacementRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionPlacementResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionsRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionsResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeInstanceTypesRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeInstanceTypesResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribePlayerSessionsRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribePlayerSessionsResponse.h>
#include <tencentcloud/gse/v20191112/model/DescribeTimerScalingPoliciesRequest.h>
#include <tencentcloud/gse/v20191112/model/DescribeTimerScalingPoliciesResponse.h>
#include <tencentcloud/gse/v20191112/model/EndGameServerSessionAndProcessRequest.h>
#include <tencentcloud/gse/v20191112/model/EndGameServerSessionAndProcessResponse.h>
#include <tencentcloud/gse/v20191112/model/GetGameServerSessionLogUrlRequest.h>
#include <tencentcloud/gse/v20191112/model/GetGameServerSessionLogUrlResponse.h>
#include <tencentcloud/gse/v20191112/model/GetInstanceAccessRequest.h>
#include <tencentcloud/gse/v20191112/model/GetInstanceAccessResponse.h>
#include <tencentcloud/gse/v20191112/model/JoinGameServerSessionRequest.h>
#include <tencentcloud/gse/v20191112/model/JoinGameServerSessionResponse.h>
#include <tencentcloud/gse/v20191112/model/JoinGameServerSessionBatchRequest.h>
#include <tencentcloud/gse/v20191112/model/JoinGameServerSessionBatchResponse.h>
#include <tencentcloud/gse/v20191112/model/PutTimerScalingPolicyRequest.h>
#include <tencentcloud/gse/v20191112/model/PutTimerScalingPolicyResponse.h>
#include <tencentcloud/gse/v20191112/model/SearchGameServerSessionsRequest.h>
#include <tencentcloud/gse/v20191112/model/SearchGameServerSessionsResponse.h>
#include <tencentcloud/gse/v20191112/model/SetServerReservedRequest.h>
#include <tencentcloud/gse/v20191112/model/SetServerReservedResponse.h>
#include <tencentcloud/gse/v20191112/model/StartGameServerSessionPlacementRequest.h>
#include <tencentcloud/gse/v20191112/model/StartGameServerSessionPlacementResponse.h>
#include <tencentcloud/gse/v20191112/model/StopGameServerSessionPlacementRequest.h>
#include <tencentcloud/gse/v20191112/model/StopGameServerSessionPlacementResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateBucketAccelerateOptRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateBucketAccelerateOptResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateBucketCORSOptRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateBucketCORSOptResponse.h>
#include <tencentcloud/gse/v20191112/model/UpdateGameServerSessionRequest.h>
#include <tencentcloud/gse/v20191112/model/UpdateGameServerSessionResponse.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            class GseClient : public AbstractClient
            {
            public:
                GseClient(const Credential &credential, const std::string &region);
                GseClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CopyFleetResponse> CopyFleetOutcome;
                typedef std::future<CopyFleetOutcome> CopyFleetOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::CopyFleetRequest&, CopyFleetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyFleetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGameServerSessionResponse> CreateGameServerSessionOutcome;
                typedef std::future<CreateGameServerSessionOutcome> CreateGameServerSessionOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::CreateGameServerSessionRequest&, CreateGameServerSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGameServerSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTimerScalingPolicyResponse> DeleteTimerScalingPolicyOutcome;
                typedef std::future<DeleteTimerScalingPolicyOutcome> DeleteTimerScalingPolicyOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DeleteTimerScalingPolicyRequest&, DeleteTimerScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTimerScalingPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGameServerSessionDetailsResponse> DescribeGameServerSessionDetailsOutcome;
                typedef std::future<DescribeGameServerSessionDetailsOutcome> DescribeGameServerSessionDetailsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeGameServerSessionDetailsRequest&, DescribeGameServerSessionDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGameServerSessionDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGameServerSessionPlacementResponse> DescribeGameServerSessionPlacementOutcome;
                typedef std::future<DescribeGameServerSessionPlacementOutcome> DescribeGameServerSessionPlacementOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeGameServerSessionPlacementRequest&, DescribeGameServerSessionPlacementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGameServerSessionPlacementAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGameServerSessionsResponse> DescribeGameServerSessionsOutcome;
                typedef std::future<DescribeGameServerSessionsOutcome> DescribeGameServerSessionsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeGameServerSessionsRequest&, DescribeGameServerSessionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGameServerSessionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceTypesResponse> DescribeInstanceTypesOutcome;
                typedef std::future<DescribeInstanceTypesOutcome> DescribeInstanceTypesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeInstanceTypesRequest&, DescribeInstanceTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePlayerSessionsResponse> DescribePlayerSessionsOutcome;
                typedef std::future<DescribePlayerSessionsOutcome> DescribePlayerSessionsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribePlayerSessionsRequest&, DescribePlayerSessionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePlayerSessionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTimerScalingPoliciesResponse> DescribeTimerScalingPoliciesOutcome;
                typedef std::future<DescribeTimerScalingPoliciesOutcome> DescribeTimerScalingPoliciesOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::DescribeTimerScalingPoliciesRequest&, DescribeTimerScalingPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTimerScalingPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::EndGameServerSessionAndProcessResponse> EndGameServerSessionAndProcessOutcome;
                typedef std::future<EndGameServerSessionAndProcessOutcome> EndGameServerSessionAndProcessOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::EndGameServerSessionAndProcessRequest&, EndGameServerSessionAndProcessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EndGameServerSessionAndProcessAsyncHandler;
                typedef Outcome<Core::Error, Model::GetGameServerSessionLogUrlResponse> GetGameServerSessionLogUrlOutcome;
                typedef std::future<GetGameServerSessionLogUrlOutcome> GetGameServerSessionLogUrlOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::GetGameServerSessionLogUrlRequest&, GetGameServerSessionLogUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetGameServerSessionLogUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::GetInstanceAccessResponse> GetInstanceAccessOutcome;
                typedef std::future<GetInstanceAccessOutcome> GetInstanceAccessOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::GetInstanceAccessRequest&, GetInstanceAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::JoinGameServerSessionResponse> JoinGameServerSessionOutcome;
                typedef std::future<JoinGameServerSessionOutcome> JoinGameServerSessionOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::JoinGameServerSessionRequest&, JoinGameServerSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> JoinGameServerSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::JoinGameServerSessionBatchResponse> JoinGameServerSessionBatchOutcome;
                typedef std::future<JoinGameServerSessionBatchOutcome> JoinGameServerSessionBatchOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::JoinGameServerSessionBatchRequest&, JoinGameServerSessionBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> JoinGameServerSessionBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::PutTimerScalingPolicyResponse> PutTimerScalingPolicyOutcome;
                typedef std::future<PutTimerScalingPolicyOutcome> PutTimerScalingPolicyOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::PutTimerScalingPolicyRequest&, PutTimerScalingPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutTimerScalingPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchGameServerSessionsResponse> SearchGameServerSessionsOutcome;
                typedef std::future<SearchGameServerSessionsOutcome> SearchGameServerSessionsOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::SearchGameServerSessionsRequest&, SearchGameServerSessionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchGameServerSessionsAsyncHandler;
                typedef Outcome<Core::Error, Model::SetServerReservedResponse> SetServerReservedOutcome;
                typedef std::future<SetServerReservedOutcome> SetServerReservedOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::SetServerReservedRequest&, SetServerReservedOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetServerReservedAsyncHandler;
                typedef Outcome<Core::Error, Model::StartGameServerSessionPlacementResponse> StartGameServerSessionPlacementOutcome;
                typedef std::future<StartGameServerSessionPlacementOutcome> StartGameServerSessionPlacementOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::StartGameServerSessionPlacementRequest&, StartGameServerSessionPlacementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartGameServerSessionPlacementAsyncHandler;
                typedef Outcome<Core::Error, Model::StopGameServerSessionPlacementResponse> StopGameServerSessionPlacementOutcome;
                typedef std::future<StopGameServerSessionPlacementOutcome> StopGameServerSessionPlacementOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::StopGameServerSessionPlacementRequest&, StopGameServerSessionPlacementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopGameServerSessionPlacementAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateBucketAccelerateOptResponse> UpdateBucketAccelerateOptOutcome;
                typedef std::future<UpdateBucketAccelerateOptOutcome> UpdateBucketAccelerateOptOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateBucketAccelerateOptRequest&, UpdateBucketAccelerateOptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBucketAccelerateOptAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateBucketCORSOptResponse> UpdateBucketCORSOptOutcome;
                typedef std::future<UpdateBucketCORSOptOutcome> UpdateBucketCORSOptOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateBucketCORSOptRequest&, UpdateBucketCORSOptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBucketCORSOptAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGameServerSessionResponse> UpdateGameServerSessionOutcome;
                typedef std::future<UpdateGameServerSessionOutcome> UpdateGameServerSessionOutcomeCallable;
                typedef std::function<void(const GseClient*, const Model::UpdateGameServerSessionRequest&, UpdateGameServerSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGameServerSessionAsyncHandler;



                /**
                 *This API is used to replicate server fleet.
                 * @param req CopyFleetRequest
                 * @return CopyFleetOutcome
                 */
                CopyFleetOutcome CopyFleet(const Model::CopyFleetRequest &request);
                void CopyFleetAsync(const Model::CopyFleetRequest& request, const CopyFleetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyFleetOutcomeCallable CopyFleetCallable(const Model::CopyFleetRequest& request);

                /**
                 *This API is used to create a game server session.
                 * @param req CreateGameServerSessionRequest
                 * @return CreateGameServerSessionOutcome
                 */
                CreateGameServerSessionOutcome CreateGameServerSession(const Model::CreateGameServerSessionRequest &request);
                void CreateGameServerSessionAsync(const Model::CreateGameServerSessionRequest& request, const CreateGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGameServerSessionOutcomeCallable CreateGameServerSessionCallable(const Model::CreateGameServerSessionRequest& request);

                /**
                 *This API (DeleteTimerScalingPolicy) is used to delete a scheduled scaling policy of a fleet.

                 * @param req DeleteTimerScalingPolicyRequest
                 * @return DeleteTimerScalingPolicyOutcome
                 */
                DeleteTimerScalingPolicyOutcome DeleteTimerScalingPolicy(const Model::DeleteTimerScalingPolicyRequest &request);
                void DeleteTimerScalingPolicyAsync(const Model::DeleteTimerScalingPolicyRequest& request, const DeleteTimerScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTimerScalingPolicyOutcomeCallable DeleteTimerScalingPolicyCallable(const Model::DeleteTimerScalingPolicyRequest& request);

                /**
                 *This API is used to query the list of game server session details.
                 * @param req DescribeGameServerSessionDetailsRequest
                 * @return DescribeGameServerSessionDetailsOutcome
                 */
                DescribeGameServerSessionDetailsOutcome DescribeGameServerSessionDetails(const Model::DescribeGameServerSessionDetailsRequest &request);
                void DescribeGameServerSessionDetailsAsync(const Model::DescribeGameServerSessionDetailsRequest& request, const DescribeGameServerSessionDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGameServerSessionDetailsOutcomeCallable DescribeGameServerSessionDetailsCallable(const Model::DescribeGameServerSessionDetailsRequest& request);

                /**
                 *This API is used to query the placement of a game server session.
                 * @param req DescribeGameServerSessionPlacementRequest
                 * @return DescribeGameServerSessionPlacementOutcome
                 */
                DescribeGameServerSessionPlacementOutcome DescribeGameServerSessionPlacement(const Model::DescribeGameServerSessionPlacementRequest &request);
                void DescribeGameServerSessionPlacementAsync(const Model::DescribeGameServerSessionPlacementRequest& request, const DescribeGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGameServerSessionPlacementOutcomeCallable DescribeGameServerSessionPlacementCallable(const Model::DescribeGameServerSessionPlacementRequest& request);

                /**
                 *This API is used to query the list of game server sessions.
                 * @param req DescribeGameServerSessionsRequest
                 * @return DescribeGameServerSessionsOutcome
                 */
                DescribeGameServerSessionsOutcome DescribeGameServerSessions(const Model::DescribeGameServerSessionsRequest &request);
                void DescribeGameServerSessionsAsync(const Model::DescribeGameServerSessionsRequest& request, const DescribeGameServerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGameServerSessionsOutcomeCallable DescribeGameServerSessionsCallable(const Model::DescribeGameServerSessionsRequest& request);

                /**
                 *This API is used to obtain the list of CVM types in the specified region.
                 * @param req DescribeInstanceTypesRequest
                 * @return DescribeInstanceTypesOutcome
                 */
                DescribeInstanceTypesOutcome DescribeInstanceTypes(const Model::DescribeInstanceTypesRequest &request);
                void DescribeInstanceTypesAsync(const Model::DescribeInstanceTypesRequest& request, const DescribeInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceTypesOutcomeCallable DescribeInstanceTypesCallable(const Model::DescribeInstanceTypesRequest& request);

                /**
                 *This API is used to get the list of player sessions.
                 * @param req DescribePlayerSessionsRequest
                 * @return DescribePlayerSessionsOutcome
                 */
                DescribePlayerSessionsOutcome DescribePlayerSessions(const Model::DescribePlayerSessionsRequest &request);
                void DescribePlayerSessionsAsync(const Model::DescribePlayerSessionsRequest& request, const DescribePlayerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePlayerSessionsOutcomeCallable DescribePlayerSessionsCallable(const Model::DescribePlayerSessionsRequest& request);

                /**
                 *This API (DescribeTimerScalingPolicies) is used to query the scheduled scaling policies of a fleet. You can query the policies by `fleetID` or the fleet name. The returned results are paged. 

                 * @param req DescribeTimerScalingPoliciesRequest
                 * @return DescribeTimerScalingPoliciesOutcome
                 */
                DescribeTimerScalingPoliciesOutcome DescribeTimerScalingPolicies(const Model::DescribeTimerScalingPoliciesRequest &request);
                void DescribeTimerScalingPoliciesAsync(const Model::DescribeTimerScalingPoliciesRequest& request, const DescribeTimerScalingPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimerScalingPoliciesOutcomeCallable DescribeTimerScalingPoliciesCallable(const Model::DescribeTimerScalingPoliciesRequest& request);

                /**
                 *This API is used to terminate the game server session and the corresponding process, which is applicable to time-limited protection and no protection.
                 * @param req EndGameServerSessionAndProcessRequest
                 * @return EndGameServerSessionAndProcessOutcome
                 */
                EndGameServerSessionAndProcessOutcome EndGameServerSessionAndProcess(const Model::EndGameServerSessionAndProcessRequest &request);
                void EndGameServerSessionAndProcessAsync(const Model::EndGameServerSessionAndProcessRequest& request, const EndGameServerSessionAndProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EndGameServerSessionAndProcessOutcomeCallable EndGameServerSessionAndProcessCallable(const Model::EndGameServerSessionAndProcessRequest& request);

                /**
                 *This API is used to get the log URL of a game server session.
                 * @param req GetGameServerSessionLogUrlRequest
                 * @return GetGameServerSessionLogUrlOutcome
                 */
                GetGameServerSessionLogUrlOutcome GetGameServerSessionLogUrl(const Model::GetGameServerSessionLogUrlRequest &request);
                void GetGameServerSessionLogUrlAsync(const Model::GetGameServerSessionLogUrlRequest& request, const GetGameServerSessionLogUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetGameServerSessionLogUrlOutcomeCallable GetGameServerSessionLogUrlCallable(const Model::GetGameServerSessionLogUrlRequest& request);

                /**
                 *This API is used to get the credentials required for instance login.
                 * @param req GetInstanceAccessRequest
                 * @return GetInstanceAccessOutcome
                 */
                GetInstanceAccessOutcome GetInstanceAccess(const Model::GetInstanceAccessRequest &request);
                void GetInstanceAccessAsync(const Model::GetInstanceAccessRequest& request, const GetInstanceAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetInstanceAccessOutcomeCallable GetInstanceAccessCallable(const Model::GetInstanceAccessRequest& request);

                /**
                 *This API is used to join a game server session.
                 * @param req JoinGameServerSessionRequest
                 * @return JoinGameServerSessionOutcome
                 */
                JoinGameServerSessionOutcome JoinGameServerSession(const Model::JoinGameServerSessionRequest &request);
                void JoinGameServerSessionAsync(const Model::JoinGameServerSessionRequest& request, const JoinGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                JoinGameServerSessionOutcomeCallable JoinGameServerSessionCallable(const Model::JoinGameServerSessionRequest& request);

                /**
                 *This API is used to join game server sessions in batch.
                 * @param req JoinGameServerSessionBatchRequest
                 * @return JoinGameServerSessionBatchOutcome
                 */
                JoinGameServerSessionBatchOutcome JoinGameServerSessionBatch(const Model::JoinGameServerSessionBatchRequest &request);
                void JoinGameServerSessionBatchAsync(const Model::JoinGameServerSessionBatchRequest& request, const JoinGameServerSessionBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                JoinGameServerSessionBatchOutcomeCallable JoinGameServerSessionBatchCallable(const Model::JoinGameServerSessionBatchRequest& request);

                /**
                 *This API (PutTimerScalingPolicy) is used to create or update a scheduled scaling policy for a fleet.

If the field `timerID` is filled in, the specified policy will be updated, and if `timerID` is left empty, a new policy will be created.

                 * @param req PutTimerScalingPolicyRequest
                 * @return PutTimerScalingPolicyOutcome
                 */
                PutTimerScalingPolicyOutcome PutTimerScalingPolicy(const Model::PutTimerScalingPolicyRequest &request);
                void PutTimerScalingPolicyAsync(const Model::PutTimerScalingPolicyRequest& request, const PutTimerScalingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutTimerScalingPolicyOutcomeCallable PutTimerScalingPolicyCallable(const Model::PutTimerScalingPolicyRequest& request);

                /**
                 *This API is used to search in the list of game server sessions.
                 * @param req SearchGameServerSessionsRequest
                 * @return SearchGameServerSessionsOutcome
                 */
                SearchGameServerSessionsOutcome SearchGameServerSessions(const Model::SearchGameServerSessionsRequest &request);
                void SearchGameServerSessionsAsync(const Model::SearchGameServerSessionsRequest& request, const SearchGameServerSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchGameServerSessionsOutcomeCallable SearchGameServerSessionsCallable(const Model::SearchGameServerSessionsRequest& request);

                /**
                 *This API (SetServerReserved) is used to mark the exceptional instances as retained for troubleshooting.

`ReserveValue`: specifies whether to retain the instance. Valid values: `0` (do not retain), `1` (retain). Default value: `0`.

                 * @param req SetServerReservedRequest
                 * @return SetServerReservedOutcome
                 */
                SetServerReservedOutcome SetServerReserved(const Model::SetServerReservedRequest &request);
                void SetServerReservedAsync(const Model::SetServerReservedRequest& request, const SetServerReservedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetServerReservedOutcomeCallable SetServerReservedCallable(const Model::SetServerReservedRequest& request);

                /**
                 *This API is used to start placing a game server session.
                 * @param req StartGameServerSessionPlacementRequest
                 * @return StartGameServerSessionPlacementOutcome
                 */
                StartGameServerSessionPlacementOutcome StartGameServerSessionPlacement(const Model::StartGameServerSessionPlacementRequest &request);
                void StartGameServerSessionPlacementAsync(const Model::StartGameServerSessionPlacementRequest& request, const StartGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartGameServerSessionPlacementOutcomeCallable StartGameServerSessionPlacementCallable(const Model::StartGameServerSessionPlacementRequest& request);

                /**
                 *This API is used to stop placing a game server session.
                 * @param req StopGameServerSessionPlacementRequest
                 * @return StopGameServerSessionPlacementOutcome
                 */
                StopGameServerSessionPlacementOutcome StopGameServerSessionPlacement(const Model::StopGameServerSessionPlacementRequest &request);
                void StopGameServerSessionPlacementAsync(const Model::StopGameServerSessionPlacementRequest& request, const StopGameServerSessionPlacementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopGameServerSessionPlacementOutcomeCallable StopGameServerSessionPlacementCallable(const Model::StopGameServerSessionPlacementRequest& request);

                /**
                 *This API (UpdateBucketAccelerateOpt) is used to enable COS global acceleration.
                 * @param req UpdateBucketAccelerateOptRequest
                 * @return UpdateBucketAccelerateOptOutcome
                 */
                UpdateBucketAccelerateOptOutcome UpdateBucketAccelerateOpt(const Model::UpdateBucketAccelerateOptRequest &request);
                void UpdateBucketAccelerateOptAsync(const Model::UpdateBucketAccelerateOptRequest& request, const UpdateBucketAccelerateOptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateBucketAccelerateOptOutcomeCallable UpdateBucketAccelerateOptCallable(const Model::UpdateBucketAccelerateOptRequest& request);

                /**
                 *This API (UpdateBucketCORSOpt) is used to configure CORS for COS.
                 * @param req UpdateBucketCORSOptRequest
                 * @return UpdateBucketCORSOptOutcome
                 */
                UpdateBucketCORSOptOutcome UpdateBucketCORSOpt(const Model::UpdateBucketCORSOptRequest &request);
                void UpdateBucketCORSOptAsync(const Model::UpdateBucketCORSOptRequest& request, const UpdateBucketCORSOptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateBucketCORSOptOutcomeCallable UpdateBucketCORSOptCallable(const Model::UpdateBucketCORSOptRequest& request);

                /**
                 *This API is used to update a game server session.
                 * @param req UpdateGameServerSessionRequest
                 * @return UpdateGameServerSessionOutcome
                 */
                UpdateGameServerSessionOutcome UpdateGameServerSession(const Model::UpdateGameServerSessionRequest &request);
                void UpdateGameServerSessionAsync(const Model::UpdateGameServerSessionRequest& request, const UpdateGameServerSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGameServerSessionOutcomeCallable UpdateGameServerSessionCallable(const Model::UpdateGameServerSessionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_GSECLIENT_H_
