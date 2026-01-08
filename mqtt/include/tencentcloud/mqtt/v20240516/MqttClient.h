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

#ifndef TENCENTCLOUD_MQTT_V20240516_MQTTCLIENT_H_
#define TENCENTCLOUD_MQTT_V20240516_MQTTCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mqtt/v20240516/model/AddClientSubscriptionRequest.h>
#include <tencentcloud/mqtt/v20240516/model/AddClientSubscriptionResponse.h>
#include <tencentcloud/mqtt/v20240516/model/CreateAuthorizationPolicyRequest.h>
#include <tencentcloud/mqtt/v20240516/model/CreateAuthorizationPolicyResponse.h>
#include <tencentcloud/mqtt/v20240516/model/CreateInstanceRequest.h>
#include <tencentcloud/mqtt/v20240516/model/CreateInstanceResponse.h>
#include <tencentcloud/mqtt/v20240516/model/CreateMessageEnrichmentRuleRequest.h>
#include <tencentcloud/mqtt/v20240516/model/CreateMessageEnrichmentRuleResponse.h>
#include <tencentcloud/mqtt/v20240516/model/CreateUserRequest.h>
#include <tencentcloud/mqtt/v20240516/model/CreateUserResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteAuthorizationPolicyRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteAuthorizationPolicyResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteClientSubscriptionRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteClientSubscriptionResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteInstanceRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteInstanceResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteMessageEnrichmentRuleRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteMessageEnrichmentRuleResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteTopicRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteTopicResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteUserRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DeleteUserResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeAuthorizationPoliciesRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeAuthorizationPoliciesResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeClientListRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeClientListResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeInstanceRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeInstanceResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeMessageByTopicRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeMessageByTopicResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeMessageDetailsRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeMessageDetailsResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeMessageEnrichmentRulesRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeMessageEnrichmentRulesResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeTopicRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeTopicResponse.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeUserListRequest.h>
#include <tencentcloud/mqtt/v20240516/model/DescribeUserListResponse.h>
#include <tencentcloud/mqtt/v20240516/model/KickOutClientRequest.h>
#include <tencentcloud/mqtt/v20240516/model/KickOutClientResponse.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyAuthorizationPolicyRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyAuthorizationPolicyResponse.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyInstanceRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyInstanceResponse.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyMessageEnrichmentRuleRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyMessageEnrichmentRuleResponse.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyUserRequest.h>
#include <tencentcloud/mqtt/v20240516/model/ModifyUserResponse.h>
#include <tencentcloud/mqtt/v20240516/model/UpdateAuthorizationPolicyPriorityRequest.h>
#include <tencentcloud/mqtt/v20240516/model/UpdateAuthorizationPolicyPriorityResponse.h>
#include <tencentcloud/mqtt/v20240516/model/UpdateMessageEnrichmentRulePriorityRequest.h>
#include <tencentcloud/mqtt/v20240516/model/UpdateMessageEnrichmentRulePriorityResponse.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            class MqttClient : public AbstractClient
            {
            public:
                MqttClient(const Credential &credential, const std::string &region);
                MqttClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddClientSubscriptionResponse> AddClientSubscriptionOutcome;
                typedef std::future<AddClientSubscriptionOutcome> AddClientSubscriptionOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::AddClientSubscriptionRequest&, AddClientSubscriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddClientSubscriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAuthorizationPolicyResponse> CreateAuthorizationPolicyOutcome;
                typedef std::future<CreateAuthorizationPolicyOutcome> CreateAuthorizationPolicyOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::CreateAuthorizationPolicyRequest&, CreateAuthorizationPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuthorizationPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceResponse> CreateInstanceOutcome;
                typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::CreateInstanceRequest&, CreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMessageEnrichmentRuleResponse> CreateMessageEnrichmentRuleOutcome;
                typedef std::future<CreateMessageEnrichmentRuleOutcome> CreateMessageEnrichmentRuleOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::CreateMessageEnrichmentRuleRequest&, CreateMessageEnrichmentRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMessageEnrichmentRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAuthorizationPolicyResponse> DeleteAuthorizationPolicyOutcome;
                typedef std::future<DeleteAuthorizationPolicyOutcome> DeleteAuthorizationPolicyOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DeleteAuthorizationPolicyRequest&, DeleteAuthorizationPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAuthorizationPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClientSubscriptionResponse> DeleteClientSubscriptionOutcome;
                typedef std::future<DeleteClientSubscriptionOutcome> DeleteClientSubscriptionOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DeleteClientSubscriptionRequest&, DeleteClientSubscriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClientSubscriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteInstanceResponse> DeleteInstanceOutcome;
                typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DeleteInstanceRequest&, DeleteInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMessageEnrichmentRuleResponse> DeleteMessageEnrichmentRuleOutcome;
                typedef std::future<DeleteMessageEnrichmentRuleOutcome> DeleteMessageEnrichmentRuleOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DeleteMessageEnrichmentRuleRequest&, DeleteMessageEnrichmentRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMessageEnrichmentRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicResponse> DeleteTopicOutcome;
                typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DeleteTopicRequest&, DeleteTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserResponse> DeleteUserOutcome;
                typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DeleteUserRequest&, DeleteUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuthorizationPoliciesResponse> DescribeAuthorizationPoliciesOutcome;
                typedef std::future<DescribeAuthorizationPoliciesOutcome> DescribeAuthorizationPoliciesOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeAuthorizationPoliciesRequest&, DescribeAuthorizationPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuthorizationPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClientListResponse> DescribeClientListOutcome;
                typedef std::future<DescribeClientListOutcome> DescribeClientListOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeClientListRequest&, DescribeClientListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceResponse> DescribeInstanceOutcome;
                typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeInstanceRequest&, DescribeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMessageByTopicResponse> DescribeMessageByTopicOutcome;
                typedef std::future<DescribeMessageByTopicOutcome> DescribeMessageByTopicOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeMessageByTopicRequest&, DescribeMessageByTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMessageByTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMessageDetailsResponse> DescribeMessageDetailsOutcome;
                typedef std::future<DescribeMessageDetailsOutcome> DescribeMessageDetailsOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeMessageDetailsRequest&, DescribeMessageDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMessageDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMessageEnrichmentRulesResponse> DescribeMessageEnrichmentRulesOutcome;
                typedef std::future<DescribeMessageEnrichmentRulesOutcome> DescribeMessageEnrichmentRulesOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeMessageEnrichmentRulesRequest&, DescribeMessageEnrichmentRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMessageEnrichmentRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicResponse> DescribeTopicOutcome;
                typedef std::future<DescribeTopicOutcome> DescribeTopicOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeTopicRequest&, DescribeTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserListResponse> DescribeUserListOutcome;
                typedef std::future<DescribeUserListOutcome> DescribeUserListOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::DescribeUserListRequest&, DescribeUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::KickOutClientResponse> KickOutClientOutcome;
                typedef std::future<KickOutClientOutcome> KickOutClientOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::KickOutClientRequest&, KickOutClientOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KickOutClientAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAuthorizationPolicyResponse> ModifyAuthorizationPolicyOutcome;
                typedef std::future<ModifyAuthorizationPolicyOutcome> ModifyAuthorizationPolicyOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ModifyAuthorizationPolicyRequest&, ModifyAuthorizationPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuthorizationPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceResponse> ModifyInstanceOutcome;
                typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ModifyInstanceRequest&, ModifyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMessageEnrichmentRuleResponse> ModifyMessageEnrichmentRuleOutcome;
                typedef std::future<ModifyMessageEnrichmentRuleOutcome> ModifyMessageEnrichmentRuleOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ModifyMessageEnrichmentRuleRequest&, ModifyMessageEnrichmentRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMessageEnrichmentRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserResponse> ModifyUserOutcome;
                typedef std::future<ModifyUserOutcome> ModifyUserOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::ModifyUserRequest&, ModifyUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAuthorizationPolicyPriorityResponse> UpdateAuthorizationPolicyPriorityOutcome;
                typedef std::future<UpdateAuthorizationPolicyPriorityOutcome> UpdateAuthorizationPolicyPriorityOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::UpdateAuthorizationPolicyPriorityRequest&, UpdateAuthorizationPolicyPriorityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAuthorizationPolicyPriorityAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateMessageEnrichmentRulePriorityResponse> UpdateMessageEnrichmentRulePriorityOutcome;
                typedef std::future<UpdateMessageEnrichmentRulePriorityOutcome> UpdateMessageEnrichmentRulePriorityOutcomeCallable;
                typedef std::function<void(const MqttClient*, const Model::UpdateMessageEnrichmentRulePriorityRequest&, UpdateMessageEnrichmentRulePriorityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMessageEnrichmentRulePriorityAsyncHandler;



                /**
                 *This API is used to add a subscription for an MQTT client.
                 * @param req AddClientSubscriptionRequest
                 * @return AddClientSubscriptionOutcome
                 */
                AddClientSubscriptionOutcome AddClientSubscription(const Model::AddClientSubscriptionRequest &request);
                void AddClientSubscriptionAsync(const Model::AddClientSubscriptionRequest& request, const AddClientSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddClientSubscriptionOutcomeCallable AddClientSubscriptionCallable(const Model::AddClientSubscriptionRequest& request);

                /**
                 *This API is used to create a performance test task for an MQTT instance.
                 * @param req CreateAuthorizationPolicyRequest
                 * @return CreateAuthorizationPolicyOutcome
                 */
                CreateAuthorizationPolicyOutcome CreateAuthorizationPolicy(const Model::CreateAuthorizationPolicyRequest &request);
                void CreateAuthorizationPolicyAsync(const Model::CreateAuthorizationPolicyRequest& request, const CreateAuthorizationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAuthorizationPolicyOutcomeCallable CreateAuthorizationPolicyCallable(const Model::CreateAuthorizationPolicyRequest& request);

                /**
                 *This API is used to purchase a new MQTT instance.
                 * @param req CreateInstanceRequest
                 * @return CreateInstanceOutcome
                 */
                CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest &request);
                void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request);

                /**
                 *This API is used to create a message enrichment rule.
                 * @param req CreateMessageEnrichmentRuleRequest
                 * @return CreateMessageEnrichmentRuleOutcome
                 */
                CreateMessageEnrichmentRuleOutcome CreateMessageEnrichmentRule(const Model::CreateMessageEnrichmentRuleRequest &request);
                void CreateMessageEnrichmentRuleAsync(const Model::CreateMessageEnrichmentRuleRequest& request, const CreateMessageEnrichmentRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMessageEnrichmentRuleOutcomeCallable CreateMessageEnrichmentRuleCallable(const Model::CreateMessageEnrichmentRuleRequest& request);

                /**
                 *This API is used to add an MQTT role.
                 * @param req CreateUserRequest
                 * @return CreateUserOutcome
                 */
                CreateUserOutcome CreateUser(const Model::CreateUserRequest &request);
                void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request);

                /**
                 *This API is used to delete policy rules.
                 * @param req DeleteAuthorizationPolicyRequest
                 * @return DeleteAuthorizationPolicyOutcome
                 */
                DeleteAuthorizationPolicyOutcome DeleteAuthorizationPolicy(const Model::DeleteAuthorizationPolicyRequest &request);
                void DeleteAuthorizationPolicyAsync(const Model::DeleteAuthorizationPolicyRequest& request, const DeleteAuthorizationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAuthorizationPolicyOutcomeCallable DeleteAuthorizationPolicyCallable(const Model::DeleteAuthorizationPolicyRequest& request);

                /**
                 *This API is used to delete a subscription of an MQTT client.
                 * @param req DeleteClientSubscriptionRequest
                 * @return DeleteClientSubscriptionOutcome
                 */
                DeleteClientSubscriptionOutcome DeleteClientSubscription(const Model::DeleteClientSubscriptionRequest &request);
                void DeleteClientSubscriptionAsync(const Model::DeleteClientSubscriptionRequest& request, const DeleteClientSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClientSubscriptionOutcomeCallable DeleteClientSubscriptionCallable(const Model::DeleteClientSubscriptionRequest& request);

                /**
                 *This API is used to delete an MQTT instance.
                 * @param req DeleteInstanceRequest
                 * @return DeleteInstanceOutcome
                 */
                DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest &request);
                void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request);

                /**
                 *This API is used to delete the message enrichment rule.
                 * @param req DeleteMessageEnrichmentRuleRequest
                 * @return DeleteMessageEnrichmentRuleOutcome
                 */
                DeleteMessageEnrichmentRuleOutcome DeleteMessageEnrichmentRule(const Model::DeleteMessageEnrichmentRuleRequest &request);
                void DeleteMessageEnrichmentRuleAsync(const Model::DeleteMessageEnrichmentRuleRequest& request, const DeleteMessageEnrichmentRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMessageEnrichmentRuleOutcomeCallable DeleteMessageEnrichmentRuleCallable(const Model::DeleteMessageEnrichmentRuleRequest& request);

                /**
                 *This API is used to delete an MQTT topic.
                 * @param req DeleteTopicRequest
                 * @return DeleteTopicOutcome
                 */
                DeleteTopicOutcome DeleteTopic(const Model::DeleteTopicRequest &request);
                void DeleteTopicAsync(const Model::DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicOutcomeCallable DeleteTopicCallable(const Model::DeleteTopicRequest& request);

                /**
                 *This API is used to delete an MQTT user.
                 * @param req DeleteUserRequest
                 * @return DeleteUserOutcome
                 */
                DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest &request);
                void DeleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserOutcomeCallable DeleteUserCallable(const Model::DeleteUserRequest& request);

                /**
                 *This API is used to query authorization rules.
                 * @param req DescribeAuthorizationPoliciesRequest
                 * @return DescribeAuthorizationPoliciesOutcome
                 */
                DescribeAuthorizationPoliciesOutcome DescribeAuthorizationPolicies(const Model::DescribeAuthorizationPoliciesRequest &request);
                void DescribeAuthorizationPoliciesAsync(const Model::DescribeAuthorizationPoliciesRequest& request, const DescribeAuthorizationPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuthorizationPoliciesOutcomeCallable DescribeAuthorizationPoliciesCallable(const Model::DescribeAuthorizationPoliciesRequest& request);

                /**
                 *This API is used to query the MQTT client details.
                 * @param req DescribeClientListRequest
                 * @return DescribeClientListOutcome
                 */
                DescribeClientListOutcome DescribeClientList(const Model::DescribeClientListRequest &request);
                void DescribeClientListAsync(const Model::DescribeClientListRequest& request, const DescribeClientListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClientListOutcomeCallable DescribeClientListCallable(const Model::DescribeClientListRequest& request);

                /**
                 *This API is used to query instance information.
                 * @param req DescribeInstanceRequest
                 * @return DescribeInstanceOutcome
                 */
                DescribeInstanceOutcome DescribeInstance(const Model::DescribeInstanceRequest &request);
                void DescribeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOutcomeCallable DescribeInstanceCallable(const Model::DescribeInstanceRequest& request);

                /**
                 *This API is used to query messages based on subscription.
                 * @param req DescribeMessageByTopicRequest
                 * @return DescribeMessageByTopicOutcome
                 */
                DescribeMessageByTopicOutcome DescribeMessageByTopic(const Model::DescribeMessageByTopicRequest &request);
                void DescribeMessageByTopicAsync(const Model::DescribeMessageByTopicRequest& request, const DescribeMessageByTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMessageByTopicOutcomeCallable DescribeMessageByTopicCallable(const Model::DescribeMessageByTopicRequest& request);

                /**
                 *This API is used to query the MQTT message details.
                 * @param req DescribeMessageDetailsRequest
                 * @return DescribeMessageDetailsOutcome
                 */
                DescribeMessageDetailsOutcome DescribeMessageDetails(const Model::DescribeMessageDetailsRequest &request);
                void DescribeMessageDetailsAsync(const Model::DescribeMessageDetailsRequest& request, const DescribeMessageDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMessageDetailsOutcomeCallable DescribeMessageDetailsCallable(const Model::DescribeMessageDetailsRequest& request);

                /**
                 *This API is used to query message enrichment rules.
                 * @param req DescribeMessageEnrichmentRulesRequest
                 * @return DescribeMessageEnrichmentRulesOutcome
                 */
                DescribeMessageEnrichmentRulesOutcome DescribeMessageEnrichmentRules(const Model::DescribeMessageEnrichmentRulesRequest &request);
                void DescribeMessageEnrichmentRulesAsync(const Model::DescribeMessageEnrichmentRulesRequest& request, const DescribeMessageEnrichmentRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMessageEnrichmentRulesOutcomeCallable DescribeMessageEnrichmentRulesCallable(const Model::DescribeMessageEnrichmentRulesRequest& request);

                /**
                 *This API is used to query the MQTT topic details.
                 * @param req DescribeTopicRequest
                 * @return DescribeTopicOutcome
                 */
                DescribeTopicOutcome DescribeTopic(const Model::DescribeTopicRequest &request);
                void DescribeTopicAsync(const Model::DescribeTopicRequest& request, const DescribeTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicOutcomeCallable DescribeTopicCallable(const Model::DescribeTopicRequest& request);

                /**
                 *This API is used to query the user list. Filter parameter usage instructions are as follows:.

This API is used to perform Username fuzzy search.
                 * @param req DescribeUserListRequest
                 * @return DescribeUserListOutcome
                 */
                DescribeUserListOutcome DescribeUserList(const Model::DescribeUserListRequest &request);
                void DescribeUserListAsync(const Model::DescribeUserListRequest& request, const DescribeUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserListOutcomeCallable DescribeUserListCallable(const Model::DescribeUserListRequest& request);

                /**
                 *This API is used to kick out a client.
                 * @param req KickOutClientRequest
                 * @return KickOutClientOutcome
                 */
                KickOutClientOutcome KickOutClient(const Model::KickOutClientRequest &request);
                void KickOutClientAsync(const Model::KickOutClientRequest& request, const KickOutClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KickOutClientOutcomeCallable KickOutClientCallable(const Model::KickOutClientRequest& request);

                /**
                 *This API is used to modify policy rules. See the data plane authorization policy description (https://www.tencentcloud.comom/document/product/1778/109715?from_cn_redirect=1).
                 * @param req ModifyAuthorizationPolicyRequest
                 * @return ModifyAuthorizationPolicyOutcome
                 */
                ModifyAuthorizationPolicyOutcome ModifyAuthorizationPolicy(const Model::ModifyAuthorizationPolicyRequest &request);
                void ModifyAuthorizationPolicyAsync(const Model::ModifyAuthorizationPolicyRequest& request, const ModifyAuthorizationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAuthorizationPolicyOutcomeCallable ModifyAuthorizationPolicyCallable(const Model::ModifyAuthorizationPolicyRequest& request);

                /**
                 *This API is used to modify instance attributes. Only running clusters can call this API to perform configuration change.
                 * @param req ModifyInstanceRequest
                 * @return ModifyInstanceOutcome
                 */
                ModifyInstanceOutcome ModifyInstance(const Model::ModifyInstanceRequest &request);
                void ModifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceOutcomeCallable ModifyInstanceCallable(const Model::ModifyInstanceRequest& request);

                /**
                 *This API is used to modify message enrichment rules.
Note: All attributes of the current rule must be submitted, even if specific fields are not modified.
                 * @param req ModifyMessageEnrichmentRuleRequest
                 * @return ModifyMessageEnrichmentRuleOutcome
                 */
                ModifyMessageEnrichmentRuleOutcome ModifyMessageEnrichmentRule(const Model::ModifyMessageEnrichmentRuleRequest &request);
                void ModifyMessageEnrichmentRuleAsync(const Model::ModifyMessageEnrichmentRuleRequest& request, const ModifyMessageEnrichmentRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMessageEnrichmentRuleOutcomeCallable ModifyMessageEnrichmentRuleCallable(const Model::ModifyMessageEnrichmentRuleRequest& request);

                /**
                 *This API is used to modify an MQTT role.
                 * @param req ModifyUserRequest
                 * @return ModifyUserOutcome
                 */
                ModifyUserOutcome ModifyUser(const Model::ModifyUserRequest &request);
                void ModifyUserAsync(const Model::ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserOutcomeCallable ModifyUserCallable(const Model::ModifyUserRequest& request);

                /**
                 *This API is used to modify policy rule priority.
                 * @param req UpdateAuthorizationPolicyPriorityRequest
                 * @return UpdateAuthorizationPolicyPriorityOutcome
                 */
                UpdateAuthorizationPolicyPriorityOutcome UpdateAuthorizationPolicyPriority(const Model::UpdateAuthorizationPolicyPriorityRequest &request);
                void UpdateAuthorizationPolicyPriorityAsync(const Model::UpdateAuthorizationPolicyPriorityRequest& request, const UpdateAuthorizationPolicyPriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAuthorizationPolicyPriorityOutcomeCallable UpdateAuthorizationPolicyPriorityCallable(const Model::UpdateAuthorizationPolicyPriorityRequest& request);

                /**
                 *This API is used to modify the priority for message enrichment rule.
                 * @param req UpdateMessageEnrichmentRulePriorityRequest
                 * @return UpdateMessageEnrichmentRulePriorityOutcome
                 */
                UpdateMessageEnrichmentRulePriorityOutcome UpdateMessageEnrichmentRulePriority(const Model::UpdateMessageEnrichmentRulePriorityRequest &request);
                void UpdateMessageEnrichmentRulePriorityAsync(const Model::UpdateMessageEnrichmentRulePriorityRequest& request, const UpdateMessageEnrichmentRulePriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateMessageEnrichmentRulePriorityOutcomeCallable UpdateMessageEnrichmentRulePriorityCallable(const Model::UpdateMessageEnrichmentRulePriorityRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MQTTCLIENT_H_
