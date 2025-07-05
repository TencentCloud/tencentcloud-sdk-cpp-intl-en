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

#ifndef TENCENTCLOUD_MDC_V20200828_MDCCLIENT_H_
#define TENCENTCLOUD_MDC_V20200828_MDCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mdc/v20200828/model/CreateStreamLinkFlowRequest.h>
#include <tencentcloud/mdc/v20200828/model/CreateStreamLinkFlowResponse.h>
#include <tencentcloud/mdc/v20200828/model/CreateStreamLinkInputRequest.h>
#include <tencentcloud/mdc/v20200828/model/CreateStreamLinkInputResponse.h>
#include <tencentcloud/mdc/v20200828/model/CreateStreamLinkOutputInfoRequest.h>
#include <tencentcloud/mdc/v20200828/model/CreateStreamLinkOutputInfoResponse.h>
#include <tencentcloud/mdc/v20200828/model/DeleteStreamLinkFlowRequest.h>
#include <tencentcloud/mdc/v20200828/model/DeleteStreamLinkFlowResponse.h>
#include <tencentcloud/mdc/v20200828/model/DeleteStreamLinkOutputRequest.h>
#include <tencentcloud/mdc/v20200828/model/DeleteStreamLinkOutputResponse.h>
#include <tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowRequest.h>
#include <tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowResponse.h>
#include <tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowLogsRequest.h>
#include <tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowLogsResponse.h>
#include <tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowMediaStatisticsRequest.h>
#include <tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowMediaStatisticsResponse.h>
#include <tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowRealtimeStatusRequest.h>
#include <tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowRealtimeStatusResponse.h>
#include <tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowSRTStatisticsRequest.h>
#include <tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowSRTStatisticsResponse.h>
#include <tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowStatisticsRequest.h>
#include <tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowStatisticsResponse.h>
#include <tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowsRequest.h>
#include <tencentcloud/mdc/v20200828/model/DescribeStreamLinkFlowsResponse.h>
#include <tencentcloud/mdc/v20200828/model/DescribeStreamLinkRegionsRequest.h>
#include <tencentcloud/mdc/v20200828/model/DescribeStreamLinkRegionsResponse.h>
#include <tencentcloud/mdc/v20200828/model/ModifyStreamLinkFlowRequest.h>
#include <tencentcloud/mdc/v20200828/model/ModifyStreamLinkFlowResponse.h>
#include <tencentcloud/mdc/v20200828/model/ModifyStreamLinkInputRequest.h>
#include <tencentcloud/mdc/v20200828/model/ModifyStreamLinkInputResponse.h>
#include <tencentcloud/mdc/v20200828/model/ModifyStreamLinkOutputInfoRequest.h>
#include <tencentcloud/mdc/v20200828/model/ModifyStreamLinkOutputInfoResponse.h>
#include <tencentcloud/mdc/v20200828/model/StartStreamLinkFlowRequest.h>
#include <tencentcloud/mdc/v20200828/model/StartStreamLinkFlowResponse.h>
#include <tencentcloud/mdc/v20200828/model/StopStreamLinkFlowRequest.h>
#include <tencentcloud/mdc/v20200828/model/StopStreamLinkFlowResponse.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            class MdcClient : public AbstractClient
            {
            public:
                MdcClient(const Credential &credential, const std::string &region);
                MdcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateStreamLinkFlowResponse> CreateStreamLinkFlowOutcome;
                typedef std::future<CreateStreamLinkFlowOutcome> CreateStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MdcClient*, const Model::CreateStreamLinkFlowRequest&, CreateStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamLinkInputResponse> CreateStreamLinkInputOutcome;
                typedef std::future<CreateStreamLinkInputOutcome> CreateStreamLinkInputOutcomeCallable;
                typedef std::function<void(const MdcClient*, const Model::CreateStreamLinkInputRequest&, CreateStreamLinkInputOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamLinkInputAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStreamLinkOutputInfoResponse> CreateStreamLinkOutputInfoOutcome;
                typedef std::future<CreateStreamLinkOutputInfoOutcome> CreateStreamLinkOutputInfoOutcomeCallable;
                typedef std::function<void(const MdcClient*, const Model::CreateStreamLinkOutputInfoRequest&, CreateStreamLinkOutputInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStreamLinkOutputInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamLinkFlowResponse> DeleteStreamLinkFlowOutcome;
                typedef std::future<DeleteStreamLinkFlowOutcome> DeleteStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MdcClient*, const Model::DeleteStreamLinkFlowRequest&, DeleteStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStreamLinkOutputResponse> DeleteStreamLinkOutputOutcome;
                typedef std::future<DeleteStreamLinkOutputOutcome> DeleteStreamLinkOutputOutcomeCallable;
                typedef std::function<void(const MdcClient*, const Model::DeleteStreamLinkOutputRequest&, DeleteStreamLinkOutputOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStreamLinkOutputAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowResponse> DescribeStreamLinkFlowOutcome;
                typedef std::future<DescribeStreamLinkFlowOutcome> DescribeStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MdcClient*, const Model::DescribeStreamLinkFlowRequest&, DescribeStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowLogsResponse> DescribeStreamLinkFlowLogsOutcome;
                typedef std::future<DescribeStreamLinkFlowLogsOutcome> DescribeStreamLinkFlowLogsOutcomeCallable;
                typedef std::function<void(const MdcClient*, const Model::DescribeStreamLinkFlowLogsRequest&, DescribeStreamLinkFlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowMediaStatisticsResponse> DescribeStreamLinkFlowMediaStatisticsOutcome;
                typedef std::future<DescribeStreamLinkFlowMediaStatisticsOutcome> DescribeStreamLinkFlowMediaStatisticsOutcomeCallable;
                typedef std::function<void(const MdcClient*, const Model::DescribeStreamLinkFlowMediaStatisticsRequest&, DescribeStreamLinkFlowMediaStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowMediaStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowRealtimeStatusResponse> DescribeStreamLinkFlowRealtimeStatusOutcome;
                typedef std::future<DescribeStreamLinkFlowRealtimeStatusOutcome> DescribeStreamLinkFlowRealtimeStatusOutcomeCallable;
                typedef std::function<void(const MdcClient*, const Model::DescribeStreamLinkFlowRealtimeStatusRequest&, DescribeStreamLinkFlowRealtimeStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowRealtimeStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowSRTStatisticsResponse> DescribeStreamLinkFlowSRTStatisticsOutcome;
                typedef std::future<DescribeStreamLinkFlowSRTStatisticsOutcome> DescribeStreamLinkFlowSRTStatisticsOutcomeCallable;
                typedef std::function<void(const MdcClient*, const Model::DescribeStreamLinkFlowSRTStatisticsRequest&, DescribeStreamLinkFlowSRTStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowSRTStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowStatisticsResponse> DescribeStreamLinkFlowStatisticsOutcome;
                typedef std::future<DescribeStreamLinkFlowStatisticsOutcome> DescribeStreamLinkFlowStatisticsOutcomeCallable;
                typedef std::function<void(const MdcClient*, const Model::DescribeStreamLinkFlowStatisticsRequest&, DescribeStreamLinkFlowStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkFlowsResponse> DescribeStreamLinkFlowsOutcome;
                typedef std::future<DescribeStreamLinkFlowsOutcome> DescribeStreamLinkFlowsOutcomeCallable;
                typedef std::function<void(const MdcClient*, const Model::DescribeStreamLinkFlowsRequest&, DescribeStreamLinkFlowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkFlowsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStreamLinkRegionsResponse> DescribeStreamLinkRegionsOutcome;
                typedef std::future<DescribeStreamLinkRegionsOutcome> DescribeStreamLinkRegionsOutcomeCallable;
                typedef std::function<void(const MdcClient*, const Model::DescribeStreamLinkRegionsRequest&, DescribeStreamLinkRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStreamLinkRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamLinkFlowResponse> ModifyStreamLinkFlowOutcome;
                typedef std::future<ModifyStreamLinkFlowOutcome> ModifyStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MdcClient*, const Model::ModifyStreamLinkFlowRequest&, ModifyStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamLinkInputResponse> ModifyStreamLinkInputOutcome;
                typedef std::future<ModifyStreamLinkInputOutcome> ModifyStreamLinkInputOutcomeCallable;
                typedef std::function<void(const MdcClient*, const Model::ModifyStreamLinkInputRequest&, ModifyStreamLinkInputOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamLinkInputAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStreamLinkOutputInfoResponse> ModifyStreamLinkOutputInfoOutcome;
                typedef std::future<ModifyStreamLinkOutputInfoOutcome> ModifyStreamLinkOutputInfoOutcomeCallable;
                typedef std::function<void(const MdcClient*, const Model::ModifyStreamLinkOutputInfoRequest&, ModifyStreamLinkOutputInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStreamLinkOutputInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::StartStreamLinkFlowResponse> StartStreamLinkFlowOutcome;
                typedef std::future<StartStreamLinkFlowOutcome> StartStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MdcClient*, const Model::StartStreamLinkFlowRequest&, StartStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartStreamLinkFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::StopStreamLinkFlowResponse> StopStreamLinkFlowOutcome;
                typedef std::future<StopStreamLinkFlowOutcome> StopStreamLinkFlowOutcomeCallable;
                typedef std::function<void(const MdcClient*, const Model::StopStreamLinkFlowRequest&, StopStreamLinkFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopStreamLinkFlowAsyncHandler;



                /**
                 *This API is used to create a StreamLink flow.
                 * @param req CreateStreamLinkFlowRequest
                 * @return CreateStreamLinkFlowOutcome
                 */
                CreateStreamLinkFlowOutcome CreateStreamLinkFlow(const Model::CreateStreamLinkFlowRequest &request);
                void CreateStreamLinkFlowAsync(const Model::CreateStreamLinkFlowRequest& request, const CreateStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamLinkFlowOutcomeCallable CreateStreamLinkFlowCallable(const Model::CreateStreamLinkFlowRequest& request);

                /**
                 *Create an input configuration for the StreamLink.
                 * @param req CreateStreamLinkInputRequest
                 * @return CreateStreamLinkInputOutcome
                 */
                CreateStreamLinkInputOutcome CreateStreamLinkInput(const Model::CreateStreamLinkInputRequest &request);
                void CreateStreamLinkInputAsync(const Model::CreateStreamLinkInputRequest& request, const CreateStreamLinkInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamLinkInputOutcomeCallable CreateStreamLinkInputCallable(const Model::CreateStreamLinkInputRequest& request);

                /**
                 *This API is used to create a StreamLink output.
                 * @param req CreateStreamLinkOutputInfoRequest
                 * @return CreateStreamLinkOutputInfoOutcome
                 */
                CreateStreamLinkOutputInfoOutcome CreateStreamLinkOutputInfo(const Model::CreateStreamLinkOutputInfoRequest &request);
                void CreateStreamLinkOutputInfoAsync(const Model::CreateStreamLinkOutputInfoRequest& request, const CreateStreamLinkOutputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStreamLinkOutputInfoOutcomeCallable CreateStreamLinkOutputInfoCallable(const Model::CreateStreamLinkOutputInfoRequest& request);

                /**
                 *This API is used to delete a StreamLink flow.
                 * @param req DeleteStreamLinkFlowRequest
                 * @return DeleteStreamLinkFlowOutcome
                 */
                DeleteStreamLinkFlowOutcome DeleteStreamLinkFlow(const Model::DeleteStreamLinkFlowRequest &request);
                void DeleteStreamLinkFlowAsync(const Model::DeleteStreamLinkFlowRequest& request, const DeleteStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamLinkFlowOutcomeCallable DeleteStreamLinkFlowCallable(const Model::DeleteStreamLinkFlowRequest& request);

                /**
                 *This API is used to delete an output of a StreamLink flow.
                 * @param req DeleteStreamLinkOutputRequest
                 * @return DeleteStreamLinkOutputOutcome
                 */
                DeleteStreamLinkOutputOutcome DeleteStreamLinkOutput(const Model::DeleteStreamLinkOutputRequest &request);
                void DeleteStreamLinkOutputAsync(const Model::DeleteStreamLinkOutputRequest& request, const DeleteStreamLinkOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStreamLinkOutputOutcomeCallable DeleteStreamLinkOutputCallable(const Model::DeleteStreamLinkOutputRequest& request);

                /**
                 *This API is used to query the configuration information of a StreamLink flow.
                 * @param req DescribeStreamLinkFlowRequest
                 * @return DescribeStreamLinkFlowOutcome
                 */
                DescribeStreamLinkFlowOutcome DescribeStreamLinkFlow(const Model::DescribeStreamLinkFlowRequest &request);
                void DescribeStreamLinkFlowAsync(const Model::DescribeStreamLinkFlowRequest& request, const DescribeStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowOutcomeCallable DescribeStreamLinkFlowCallable(const Model::DescribeStreamLinkFlowRequest& request);

                /**
                 *This API is used to query the logs of a StreamLink flow.
                 * @param req DescribeStreamLinkFlowLogsRequest
                 * @return DescribeStreamLinkFlowLogsOutcome
                 */
                DescribeStreamLinkFlowLogsOutcome DescribeStreamLinkFlowLogs(const Model::DescribeStreamLinkFlowLogsRequest &request);
                void DescribeStreamLinkFlowLogsAsync(const Model::DescribeStreamLinkFlowLogsRequest& request, const DescribeStreamLinkFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowLogsOutcomeCallable DescribeStreamLinkFlowLogsCallable(const Model::DescribeStreamLinkFlowLogsRequest& request);

                /**
                 *This API is used to query the media quality of a StreamLink flow.

                 * @param req DescribeStreamLinkFlowMediaStatisticsRequest
                 * @return DescribeStreamLinkFlowMediaStatisticsOutcome
                 */
                DescribeStreamLinkFlowMediaStatisticsOutcome DescribeStreamLinkFlowMediaStatistics(const Model::DescribeStreamLinkFlowMediaStatisticsRequest &request);
                void DescribeStreamLinkFlowMediaStatisticsAsync(const Model::DescribeStreamLinkFlowMediaStatisticsRequest& request, const DescribeStreamLinkFlowMediaStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowMediaStatisticsOutcomeCallable DescribeStreamLinkFlowMediaStatisticsCallable(const Model::DescribeStreamLinkFlowMediaStatisticsRequest& request);

                /**
                 *This API is used to query the current status of a flow.
                 * @param req DescribeStreamLinkFlowRealtimeStatusRequest
                 * @return DescribeStreamLinkFlowRealtimeStatusOutcome
                 */
                DescribeStreamLinkFlowRealtimeStatusOutcome DescribeStreamLinkFlowRealtimeStatus(const Model::DescribeStreamLinkFlowRealtimeStatusRequest &request);
                void DescribeStreamLinkFlowRealtimeStatusAsync(const Model::DescribeStreamLinkFlowRealtimeStatusRequest& request, const DescribeStreamLinkFlowRealtimeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowRealtimeStatusOutcomeCallable DescribeStreamLinkFlowRealtimeStatusCallable(const Model::DescribeStreamLinkFlowRealtimeStatusRequest& request);

                /**
                 *This API is used to query the SRT streaming performance of a StreamLink flow.
                 * @param req DescribeStreamLinkFlowSRTStatisticsRequest
                 * @return DescribeStreamLinkFlowSRTStatisticsOutcome
                 */
                DescribeStreamLinkFlowSRTStatisticsOutcome DescribeStreamLinkFlowSRTStatistics(const Model::DescribeStreamLinkFlowSRTStatisticsRequest &request);
                void DescribeStreamLinkFlowSRTStatisticsAsync(const Model::DescribeStreamLinkFlowSRTStatisticsRequest& request, const DescribeStreamLinkFlowSRTStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowSRTStatisticsOutcomeCallable DescribeStreamLinkFlowSRTStatisticsCallable(const Model::DescribeStreamLinkFlowSRTStatisticsRequest& request);

                /**
                 *This API is used to query the media quality of a StreamLink flow.

                 * @param req DescribeStreamLinkFlowStatisticsRequest
                 * @return DescribeStreamLinkFlowStatisticsOutcome
                 */
                DescribeStreamLinkFlowStatisticsOutcome DescribeStreamLinkFlowStatistics(const Model::DescribeStreamLinkFlowStatisticsRequest &request);
                void DescribeStreamLinkFlowStatisticsAsync(const Model::DescribeStreamLinkFlowStatisticsRequest& request, const DescribeStreamLinkFlowStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowStatisticsOutcomeCallable DescribeStreamLinkFlowStatisticsCallable(const Model::DescribeStreamLinkFlowStatisticsRequest& request);

                /**
                 *This API is used to query the configuration information of multiple StreamLink flows in batches.
                 * @param req DescribeStreamLinkFlowsRequest
                 * @return DescribeStreamLinkFlowsOutcome
                 */
                DescribeStreamLinkFlowsOutcome DescribeStreamLinkFlows(const Model::DescribeStreamLinkFlowsRequest &request);
                void DescribeStreamLinkFlowsAsync(const Model::DescribeStreamLinkFlowsRequest& request, const DescribeStreamLinkFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkFlowsOutcomeCallable DescribeStreamLinkFlowsCallable(const Model::DescribeStreamLinkFlowsRequest& request);

                /**
                 *This API is used to query all StreamLink regions.
                 * @param req DescribeStreamLinkRegionsRequest
                 * @return DescribeStreamLinkRegionsOutcome
                 */
                DescribeStreamLinkRegionsOutcome DescribeStreamLinkRegions(const Model::DescribeStreamLinkRegionsRequest &request);
                void DescribeStreamLinkRegionsAsync(const Model::DescribeStreamLinkRegionsRequest& request, const DescribeStreamLinkRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStreamLinkRegionsOutcomeCallable DescribeStreamLinkRegionsCallable(const Model::DescribeStreamLinkRegionsRequest& request);

                /**
                 *This API is used to modify the configuration information of a StreamLink flow.
                 * @param req ModifyStreamLinkFlowRequest
                 * @return ModifyStreamLinkFlowOutcome
                 */
                ModifyStreamLinkFlowOutcome ModifyStreamLinkFlow(const Model::ModifyStreamLinkFlowRequest &request);
                void ModifyStreamLinkFlowAsync(const Model::ModifyStreamLinkFlowRequest& request, const ModifyStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamLinkFlowOutcomeCallable ModifyStreamLinkFlowCallable(const Model::ModifyStreamLinkFlowRequest& request);

                /**
                 *This API is used to modify an input of a StreamLink flow.
                 * @param req ModifyStreamLinkInputRequest
                 * @return ModifyStreamLinkInputOutcome
                 */
                ModifyStreamLinkInputOutcome ModifyStreamLinkInput(const Model::ModifyStreamLinkInputRequest &request);
                void ModifyStreamLinkInputAsync(const Model::ModifyStreamLinkInputRequest& request, const ModifyStreamLinkInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamLinkInputOutcomeCallable ModifyStreamLinkInputCallable(const Model::ModifyStreamLinkInputRequest& request);

                /**
                 *This API is used to modify an output of a StreamLink flow.
                 * @param req ModifyStreamLinkOutputInfoRequest
                 * @return ModifyStreamLinkOutputInfoOutcome
                 */
                ModifyStreamLinkOutputInfoOutcome ModifyStreamLinkOutputInfo(const Model::ModifyStreamLinkOutputInfoRequest &request);
                void ModifyStreamLinkOutputInfoAsync(const Model::ModifyStreamLinkOutputInfoRequest& request, const ModifyStreamLinkOutputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStreamLinkOutputInfoOutcomeCallable ModifyStreamLinkOutputInfoCallable(const Model::ModifyStreamLinkOutputInfoRequest& request);

                /**
                 *This API is used to start a StreamLink flow.
                 * @param req StartStreamLinkFlowRequest
                 * @return StartStreamLinkFlowOutcome
                 */
                StartStreamLinkFlowOutcome StartStreamLinkFlow(const Model::StartStreamLinkFlowRequest &request);
                void StartStreamLinkFlowAsync(const Model::StartStreamLinkFlowRequest& request, const StartStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartStreamLinkFlowOutcomeCallable StartStreamLinkFlowCallable(const Model::StartStreamLinkFlowRequest& request);

                /**
                 *This API is used to stop a StreamLink flow.
                 * @param req StopStreamLinkFlowRequest
                 * @return StopStreamLinkFlowOutcome
                 */
                StopStreamLinkFlowOutcome StopStreamLinkFlow(const Model::StopStreamLinkFlowRequest &request);
                void StopStreamLinkFlowAsync(const Model::StopStreamLinkFlowRequest& request, const StopStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopStreamLinkFlowOutcomeCallable StopStreamLinkFlowCallable(const Model::StopStreamLinkFlowRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MDCCLIENT_H_
