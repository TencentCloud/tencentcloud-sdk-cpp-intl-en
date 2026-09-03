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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MONITORCLIENT_H_
#define TENCENTCLOUD_MONITOR_V20230616_MONITORCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/monitor/v20230616/model/CancelAIWorkbenchChatRequest.h>
#include <tencentcloud/monitor/v20230616/model/CancelAIWorkbenchChatResponse.h>
#include <tencentcloud/monitor/v20230616/model/CreateAIWorkbenchAgentRequest.h>
#include <tencentcloud/monitor/v20230616/model/CreateAIWorkbenchAgentResponse.h>
#include <tencentcloud/monitor/v20230616/model/CreateAIWorkbenchTaskRequest.h>
#include <tencentcloud/monitor/v20230616/model/CreateAIWorkbenchTaskResponse.h>
#include <tencentcloud/monitor/v20230616/model/DeleteAIWorkbenchAgentRequest.h>
#include <tencentcloud/monitor/v20230616/model/DeleteAIWorkbenchAgentResponse.h>
#include <tencentcloud/monitor/v20230616/model/DeleteAIWorkbenchTaskRequest.h>
#include <tencentcloud/monitor/v20230616/model/DeleteAIWorkbenchTaskResponse.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchAgentRequest.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchAgentResponse.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchArtifactRequest.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchArtifactResponse.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchExecutionRequest.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchExecutionResponse.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchSessionRequest.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchSessionResponse.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchSkillRequest.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAIWorkbenchSkillResponse.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAlarmNotifyHistoriesRequest.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAlarmNotifyHistoriesResponse.h>
#include <tencentcloud/monitor/v20230616/model/GetAIWorkbenchArtifactDownloadURLRequest.h>
#include <tencentcloud/monitor/v20230616/model/GetAIWorkbenchArtifactDownloadURLResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchAgentsRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchAgentsResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchArtifactsRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchArtifactsResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchExecutionsRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchExecutionsResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchMCPsRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchMCPsResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchMessagesRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchMessagesResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchResourceInstancesRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchResourceInstancesResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchResourceMapsRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchResourceMapsResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchSessionsRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchSessionsResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchSkillsRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchSkillsResponse.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchTasksRequest.h>
#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchTasksResponse.h>
#include <tencentcloud/monitor/v20230616/model/TriggerAIWorkbenchTaskRequest.h>
#include <tencentcloud/monitor/v20230616/model/TriggerAIWorkbenchTaskResponse.h>
#include <tencentcloud/monitor/v20230616/model/UpdateAIWorkbenchAgentRequest.h>
#include <tencentcloud/monitor/v20230616/model/UpdateAIWorkbenchAgentResponse.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            class MonitorClient : public AbstractClient
            {
            public:
                MonitorClient(const Credential &credential, const std::string &region);
                MonitorClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CancelAIWorkbenchChatResponse> CancelAIWorkbenchChatOutcome;
                typedef std::future<CancelAIWorkbenchChatOutcome> CancelAIWorkbenchChatOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CancelAIWorkbenchChatRequest&, CancelAIWorkbenchChatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelAIWorkbenchChatAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAIWorkbenchAgentResponse> CreateAIWorkbenchAgentOutcome;
                typedef std::future<CreateAIWorkbenchAgentOutcome> CreateAIWorkbenchAgentOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateAIWorkbenchAgentRequest&, CreateAIWorkbenchAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIWorkbenchAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAIWorkbenchTaskResponse> CreateAIWorkbenchTaskOutcome;
                typedef std::future<CreateAIWorkbenchTaskOutcome> CreateAIWorkbenchTaskOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateAIWorkbenchTaskRequest&, CreateAIWorkbenchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIWorkbenchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAIWorkbenchAgentResponse> DeleteAIWorkbenchAgentOutcome;
                typedef std::future<DeleteAIWorkbenchAgentOutcome> DeleteAIWorkbenchAgentOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteAIWorkbenchAgentRequest&, DeleteAIWorkbenchAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIWorkbenchAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAIWorkbenchTaskResponse> DeleteAIWorkbenchTaskOutcome;
                typedef std::future<DeleteAIWorkbenchTaskOutcome> DeleteAIWorkbenchTaskOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteAIWorkbenchTaskRequest&, DeleteAIWorkbenchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAIWorkbenchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIWorkbenchAgentResponse> DescribeAIWorkbenchAgentOutcome;
                typedef std::future<DescribeAIWorkbenchAgentOutcome> DescribeAIWorkbenchAgentOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAIWorkbenchAgentRequest&, DescribeAIWorkbenchAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIWorkbenchAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIWorkbenchArtifactResponse> DescribeAIWorkbenchArtifactOutcome;
                typedef std::future<DescribeAIWorkbenchArtifactOutcome> DescribeAIWorkbenchArtifactOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAIWorkbenchArtifactRequest&, DescribeAIWorkbenchArtifactOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIWorkbenchArtifactAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIWorkbenchExecutionResponse> DescribeAIWorkbenchExecutionOutcome;
                typedef std::future<DescribeAIWorkbenchExecutionOutcome> DescribeAIWorkbenchExecutionOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAIWorkbenchExecutionRequest&, DescribeAIWorkbenchExecutionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIWorkbenchExecutionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIWorkbenchSessionResponse> DescribeAIWorkbenchSessionOutcome;
                typedef std::future<DescribeAIWorkbenchSessionOutcome> DescribeAIWorkbenchSessionOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAIWorkbenchSessionRequest&, DescribeAIWorkbenchSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIWorkbenchSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAIWorkbenchSkillResponse> DescribeAIWorkbenchSkillOutcome;
                typedef std::future<DescribeAIWorkbenchSkillOutcome> DescribeAIWorkbenchSkillOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAIWorkbenchSkillRequest&, DescribeAIWorkbenchSkillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAIWorkbenchSkillAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmNotifyHistoriesResponse> DescribeAlarmNotifyHistoriesOutcome;
                typedef std::future<DescribeAlarmNotifyHistoriesOutcome> DescribeAlarmNotifyHistoriesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmNotifyHistoriesRequest&, DescribeAlarmNotifyHistoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmNotifyHistoriesAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAIWorkbenchArtifactDownloadURLResponse> GetAIWorkbenchArtifactDownloadURLOutcome;
                typedef std::future<GetAIWorkbenchArtifactDownloadURLOutcome> GetAIWorkbenchArtifactDownloadURLOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::GetAIWorkbenchArtifactDownloadURLRequest&, GetAIWorkbenchArtifactDownloadURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAIWorkbenchArtifactDownloadURLAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchAgentsResponse> ListAIWorkbenchAgentsOutcome;
                typedef std::future<ListAIWorkbenchAgentsOutcome> ListAIWorkbenchAgentsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchAgentsRequest&, ListAIWorkbenchAgentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchAgentsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchArtifactsResponse> ListAIWorkbenchArtifactsOutcome;
                typedef std::future<ListAIWorkbenchArtifactsOutcome> ListAIWorkbenchArtifactsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchArtifactsRequest&, ListAIWorkbenchArtifactsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchArtifactsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchExecutionsResponse> ListAIWorkbenchExecutionsOutcome;
                typedef std::future<ListAIWorkbenchExecutionsOutcome> ListAIWorkbenchExecutionsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchExecutionsRequest&, ListAIWorkbenchExecutionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchExecutionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchMCPsResponse> ListAIWorkbenchMCPsOutcome;
                typedef std::future<ListAIWorkbenchMCPsOutcome> ListAIWorkbenchMCPsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchMCPsRequest&, ListAIWorkbenchMCPsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchMCPsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchMessagesResponse> ListAIWorkbenchMessagesOutcome;
                typedef std::future<ListAIWorkbenchMessagesOutcome> ListAIWorkbenchMessagesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchMessagesRequest&, ListAIWorkbenchMessagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchMessagesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchResourceInstancesResponse> ListAIWorkbenchResourceInstancesOutcome;
                typedef std::future<ListAIWorkbenchResourceInstancesOutcome> ListAIWorkbenchResourceInstancesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchResourceInstancesRequest&, ListAIWorkbenchResourceInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchResourceInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchResourceMapsResponse> ListAIWorkbenchResourceMapsOutcome;
                typedef std::future<ListAIWorkbenchResourceMapsOutcome> ListAIWorkbenchResourceMapsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchResourceMapsRequest&, ListAIWorkbenchResourceMapsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchResourceMapsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchSessionsResponse> ListAIWorkbenchSessionsOutcome;
                typedef std::future<ListAIWorkbenchSessionsOutcome> ListAIWorkbenchSessionsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchSessionsRequest&, ListAIWorkbenchSessionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchSessionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchSkillsResponse> ListAIWorkbenchSkillsOutcome;
                typedef std::future<ListAIWorkbenchSkillsOutcome> ListAIWorkbenchSkillsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchSkillsRequest&, ListAIWorkbenchSkillsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchSkillsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAIWorkbenchTasksResponse> ListAIWorkbenchTasksOutcome;
                typedef std::future<ListAIWorkbenchTasksOutcome> ListAIWorkbenchTasksOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ListAIWorkbenchTasksRequest&, ListAIWorkbenchTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAIWorkbenchTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::TriggerAIWorkbenchTaskResponse> TriggerAIWorkbenchTaskOutcome;
                typedef std::future<TriggerAIWorkbenchTaskOutcome> TriggerAIWorkbenchTaskOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::TriggerAIWorkbenchTaskRequest&, TriggerAIWorkbenchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TriggerAIWorkbenchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAIWorkbenchAgentResponse> UpdateAIWorkbenchAgentOutcome;
                typedef std::future<UpdateAIWorkbenchAgentOutcome> UpdateAIWorkbenchAgentOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateAIWorkbenchAgentRequest&, UpdateAIWorkbenchAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAIWorkbenchAgentAsyncHandler;



                /**
                 *Cancel dialogue execution
                 * @param req CancelAIWorkbenchChatRequest
                 * @return CancelAIWorkbenchChatOutcome
                 */
                CancelAIWorkbenchChatOutcome CancelAIWorkbenchChat(const Model::CancelAIWorkbenchChatRequest &request);
                void CancelAIWorkbenchChatAsync(const Model::CancelAIWorkbenchChatRequest& request, const CancelAIWorkbenchChatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelAIWorkbenchChatOutcomeCallable CancelAIWorkbenchChatCallable(const Model::CancelAIWorkbenchChatRequest& request);

                /**
                 *This API is used to create an Agent.
                 * @param req CreateAIWorkbenchAgentRequest
                 * @return CreateAIWorkbenchAgentOutcome
                 */
                CreateAIWorkbenchAgentOutcome CreateAIWorkbenchAgent(const Model::CreateAIWorkbenchAgentRequest &request);
                void CreateAIWorkbenchAgentAsync(const Model::CreateAIWorkbenchAgentRequest& request, const CreateAIWorkbenchAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIWorkbenchAgentOutcomeCallable CreateAIWorkbenchAgentCallable(const Model::CreateAIWorkbenchAgentRequest& request);

                /**
                 *Create a task
                 * @param req CreateAIWorkbenchTaskRequest
                 * @return CreateAIWorkbenchTaskOutcome
                 */
                CreateAIWorkbenchTaskOutcome CreateAIWorkbenchTask(const Model::CreateAIWorkbenchTaskRequest &request);
                void CreateAIWorkbenchTaskAsync(const Model::CreateAIWorkbenchTaskRequest& request, const CreateAIWorkbenchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIWorkbenchTaskOutcomeCallable CreateAIWorkbenchTaskCallable(const Model::CreateAIWorkbenchTaskRequest& request);

                /**
                 *Delete Agent
                 * @param req DeleteAIWorkbenchAgentRequest
                 * @return DeleteAIWorkbenchAgentOutcome
                 */
                DeleteAIWorkbenchAgentOutcome DeleteAIWorkbenchAgent(const Model::DeleteAIWorkbenchAgentRequest &request);
                void DeleteAIWorkbenchAgentAsync(const Model::DeleteAIWorkbenchAgentRequest& request, const DeleteAIWorkbenchAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAIWorkbenchAgentOutcomeCallable DeleteAIWorkbenchAgentCallable(const Model::DeleteAIWorkbenchAgentRequest& request);

                /**
                 *This API is used to delete a task.
                 * @param req DeleteAIWorkbenchTaskRequest
                 * @return DeleteAIWorkbenchTaskOutcome
                 */
                DeleteAIWorkbenchTaskOutcome DeleteAIWorkbenchTask(const Model::DeleteAIWorkbenchTaskRequest &request);
                void DeleteAIWorkbenchTaskAsync(const Model::DeleteAIWorkbenchTaskRequest& request, const DeleteAIWorkbenchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAIWorkbenchTaskOutcomeCallable DeleteAIWorkbenchTaskCallable(const Model::DeleteAIWorkbenchTaskRequest& request);

                /**
                 *Query Agent details.
                 * @param req DescribeAIWorkbenchAgentRequest
                 * @return DescribeAIWorkbenchAgentOutcome
                 */
                DescribeAIWorkbenchAgentOutcome DescribeAIWorkbenchAgent(const Model::DescribeAIWorkbenchAgentRequest &request);
                void DescribeAIWorkbenchAgentAsync(const Model::DescribeAIWorkbenchAgentRequest& request, const DescribeAIWorkbenchAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIWorkbenchAgentOutcomeCallable DescribeAIWorkbenchAgentCallable(const Model::DescribeAIWorkbenchAgentRequest& request);

                /**
                 *Query artifact details.
                 * @param req DescribeAIWorkbenchArtifactRequest
                 * @return DescribeAIWorkbenchArtifactOutcome
                 */
                DescribeAIWorkbenchArtifactOutcome DescribeAIWorkbenchArtifact(const Model::DescribeAIWorkbenchArtifactRequest &request);
                void DescribeAIWorkbenchArtifactAsync(const Model::DescribeAIWorkbenchArtifactRequest& request, const DescribeAIWorkbenchArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIWorkbenchArtifactOutcomeCallable DescribeAIWorkbenchArtifactCallable(const Model::DescribeAIWorkbenchArtifactRequest& request);

                /**
                 *Query execution details.
                 * @param req DescribeAIWorkbenchExecutionRequest
                 * @return DescribeAIWorkbenchExecutionOutcome
                 */
                DescribeAIWorkbenchExecutionOutcome DescribeAIWorkbenchExecution(const Model::DescribeAIWorkbenchExecutionRequest &request);
                void DescribeAIWorkbenchExecutionAsync(const Model::DescribeAIWorkbenchExecutionRequest& request, const DescribeAIWorkbenchExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIWorkbenchExecutionOutcomeCallable DescribeAIWorkbenchExecutionCallable(const Model::DescribeAIWorkbenchExecutionRequest& request);

                /**
                 *Query session details
                 * @param req DescribeAIWorkbenchSessionRequest
                 * @return DescribeAIWorkbenchSessionOutcome
                 */
                DescribeAIWorkbenchSessionOutcome DescribeAIWorkbenchSession(const Model::DescribeAIWorkbenchSessionRequest &request);
                void DescribeAIWorkbenchSessionAsync(const Model::DescribeAIWorkbenchSessionRequest& request, const DescribeAIWorkbenchSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIWorkbenchSessionOutcomeCallable DescribeAIWorkbenchSessionCallable(const Model::DescribeAIWorkbenchSessionRequest& request);

                /**
                 *Query skill details
                 * @param req DescribeAIWorkbenchSkillRequest
                 * @return DescribeAIWorkbenchSkillOutcome
                 */
                DescribeAIWorkbenchSkillOutcome DescribeAIWorkbenchSkill(const Model::DescribeAIWorkbenchSkillRequest &request);
                void DescribeAIWorkbenchSkillAsync(const Model::DescribeAIWorkbenchSkillRequest& request, const DescribeAIWorkbenchSkillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAIWorkbenchSkillOutcomeCallable DescribeAIWorkbenchSkillCallable(const Model::DescribeAIWorkbenchSkillRequest& request);

                /**
                 *Query alarm notification history as needed
                 * @param req DescribeAlarmNotifyHistoriesRequest
                 * @return DescribeAlarmNotifyHistoriesOutcome
                 */
                DescribeAlarmNotifyHistoriesOutcome DescribeAlarmNotifyHistories(const Model::DescribeAlarmNotifyHistoriesRequest &request);
                void DescribeAlarmNotifyHistoriesAsync(const Model::DescribeAlarmNotifyHistoriesRequest& request, const DescribeAlarmNotifyHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmNotifyHistoriesOutcomeCallable DescribeAlarmNotifyHistoriesCallable(const Model::DescribeAlarmNotifyHistoriesRequest& request);

                /**
                 *Get the download URL of AI Workbench artifacts.
                 * @param req GetAIWorkbenchArtifactDownloadURLRequest
                 * @return GetAIWorkbenchArtifactDownloadURLOutcome
                 */
                GetAIWorkbenchArtifactDownloadURLOutcome GetAIWorkbenchArtifactDownloadURL(const Model::GetAIWorkbenchArtifactDownloadURLRequest &request);
                void GetAIWorkbenchArtifactDownloadURLAsync(const Model::GetAIWorkbenchArtifactDownloadURLRequest& request, const GetAIWorkbenchArtifactDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAIWorkbenchArtifactDownloadURLOutcomeCallable GetAIWorkbenchArtifactDownloadURLCallable(const Model::GetAIWorkbenchArtifactDownloadURLRequest& request);

                /**
                 *Query the Agent list.
                 * @param req ListAIWorkbenchAgentsRequest
                 * @return ListAIWorkbenchAgentsOutcome
                 */
                ListAIWorkbenchAgentsOutcome ListAIWorkbenchAgents(const Model::ListAIWorkbenchAgentsRequest &request);
                void ListAIWorkbenchAgentsAsync(const Model::ListAIWorkbenchAgentsRequest& request, const ListAIWorkbenchAgentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchAgentsOutcomeCallable ListAIWorkbenchAgentsCallable(const Model::ListAIWorkbenchAgentsRequest& request);

                /**
                 *Query the product list
                 * @param req ListAIWorkbenchArtifactsRequest
                 * @return ListAIWorkbenchArtifactsOutcome
                 */
                ListAIWorkbenchArtifactsOutcome ListAIWorkbenchArtifacts(const Model::ListAIWorkbenchArtifactsRequest &request);
                void ListAIWorkbenchArtifactsAsync(const Model::ListAIWorkbenchArtifactsRequest& request, const ListAIWorkbenchArtifactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchArtifactsOutcomeCallable ListAIWorkbenchArtifactsCallable(const Model::ListAIWorkbenchArtifactsRequest& request);

                /**
                 *Query the execution list
                 * @param req ListAIWorkbenchExecutionsRequest
                 * @return ListAIWorkbenchExecutionsOutcome
                 */
                ListAIWorkbenchExecutionsOutcome ListAIWorkbenchExecutions(const Model::ListAIWorkbenchExecutionsRequest &request);
                void ListAIWorkbenchExecutionsAsync(const Model::ListAIWorkbenchExecutionsRequest& request, const ListAIWorkbenchExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchExecutionsOutcomeCallable ListAIWorkbenchExecutionsCallable(const Model::ListAIWorkbenchExecutionsRequest& request);

                /**
                 *Query the MCP list.
                 * @param req ListAIWorkbenchMCPsRequest
                 * @return ListAIWorkbenchMCPsOutcome
                 */
                ListAIWorkbenchMCPsOutcome ListAIWorkbenchMCPs(const Model::ListAIWorkbenchMCPsRequest &request);
                void ListAIWorkbenchMCPsAsync(const Model::ListAIWorkbenchMCPsRequest& request, const ListAIWorkbenchMCPsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchMCPsOutcomeCallable ListAIWorkbenchMCPsCallable(const Model::ListAIWorkbenchMCPsRequest& request);

                /**
                 *This API is used to query message list.
                 * @param req ListAIWorkbenchMessagesRequest
                 * @return ListAIWorkbenchMessagesOutcome
                 */
                ListAIWorkbenchMessagesOutcome ListAIWorkbenchMessages(const Model::ListAIWorkbenchMessagesRequest &request);
                void ListAIWorkbenchMessagesAsync(const Model::ListAIWorkbenchMessagesRequest& request, const ListAIWorkbenchMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchMessagesOutcomeCallable ListAIWorkbenchMessagesCallable(const Model::ListAIWorkbenchMessagesRequest& request);

                /**
                 *List resource instances.
                 * @param req ListAIWorkbenchResourceInstancesRequest
                 * @return ListAIWorkbenchResourceInstancesOutcome
                 */
                ListAIWorkbenchResourceInstancesOutcome ListAIWorkbenchResourceInstances(const Model::ListAIWorkbenchResourceInstancesRequest &request);
                void ListAIWorkbenchResourceInstancesAsync(const Model::ListAIWorkbenchResourceInstancesRequest& request, const ListAIWorkbenchResourceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchResourceInstancesOutcomeCallable ListAIWorkbenchResourceInstancesCallable(const Model::ListAIWorkbenchResourceInstancesRequest& request);

                /**
                 *Query the list of resource maps
                 * @param req ListAIWorkbenchResourceMapsRequest
                 * @return ListAIWorkbenchResourceMapsOutcome
                 */
                ListAIWorkbenchResourceMapsOutcome ListAIWorkbenchResourceMaps(const Model::ListAIWorkbenchResourceMapsRequest &request);
                void ListAIWorkbenchResourceMapsAsync(const Model::ListAIWorkbenchResourceMapsRequest& request, const ListAIWorkbenchResourceMapsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchResourceMapsOutcomeCallable ListAIWorkbenchResourceMapsCallable(const Model::ListAIWorkbenchResourceMapsRequest& request);

                /**
                 *Query session list
                 * @param req ListAIWorkbenchSessionsRequest
                 * @return ListAIWorkbenchSessionsOutcome
                 */
                ListAIWorkbenchSessionsOutcome ListAIWorkbenchSessions(const Model::ListAIWorkbenchSessionsRequest &request);
                void ListAIWorkbenchSessionsAsync(const Model::ListAIWorkbenchSessionsRequest& request, const ListAIWorkbenchSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchSessionsOutcomeCallable ListAIWorkbenchSessionsCallable(const Model::ListAIWorkbenchSessionsRequest& request);

                /**
                 *Query the skill list
                 * @param req ListAIWorkbenchSkillsRequest
                 * @return ListAIWorkbenchSkillsOutcome
                 */
                ListAIWorkbenchSkillsOutcome ListAIWorkbenchSkills(const Model::ListAIWorkbenchSkillsRequest &request);
                void ListAIWorkbenchSkillsAsync(const Model::ListAIWorkbenchSkillsRequest& request, const ListAIWorkbenchSkillsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchSkillsOutcomeCallable ListAIWorkbenchSkillsCallable(const Model::ListAIWorkbenchSkillsRequest& request);

                /**
                 *This API is used to query the task list.
                 * @param req ListAIWorkbenchTasksRequest
                 * @return ListAIWorkbenchTasksOutcome
                 */
                ListAIWorkbenchTasksOutcome ListAIWorkbenchTasks(const Model::ListAIWorkbenchTasksRequest &request);
                void ListAIWorkbenchTasksAsync(const Model::ListAIWorkbenchTasksRequest& request, const ListAIWorkbenchTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAIWorkbenchTasksOutcomeCallable ListAIWorkbenchTasksCallable(const Model::ListAIWorkbenchTasksRequest& request);

                /**
                 *Manually trigger a task.
                 * @param req TriggerAIWorkbenchTaskRequest
                 * @return TriggerAIWorkbenchTaskOutcome
                 */
                TriggerAIWorkbenchTaskOutcome TriggerAIWorkbenchTask(const Model::TriggerAIWorkbenchTaskRequest &request);
                void TriggerAIWorkbenchTaskAsync(const Model::TriggerAIWorkbenchTaskRequest& request, const TriggerAIWorkbenchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TriggerAIWorkbenchTaskOutcomeCallable TriggerAIWorkbenchTaskCallable(const Model::TriggerAIWorkbenchTaskRequest& request);

                /**
                 *Update an Agent
                 * @param req UpdateAIWorkbenchAgentRequest
                 * @return UpdateAIWorkbenchAgentOutcome
                 */
                UpdateAIWorkbenchAgentOutcome UpdateAIWorkbenchAgent(const Model::UpdateAIWorkbenchAgentRequest &request);
                void UpdateAIWorkbenchAgentAsync(const Model::UpdateAIWorkbenchAgentRequest& request, const UpdateAIWorkbenchAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAIWorkbenchAgentOutcomeCallable UpdateAIWorkbenchAgentCallable(const Model::UpdateAIWorkbenchAgentRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MONITORCLIENT_H_
