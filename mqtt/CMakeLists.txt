#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(mqtt_public_header
  include/tencentcloud/mqtt/v20240516/MqttClient.h
  )

set(mqtt_public_header_model
  include/tencentcloud/mqtt/v20240516/model/ModifyInstanceResponse.h
  include/tencentcloud/mqtt/v20240516/model/UpdateAuthorizationPolicyPriorityResponse.h
  include/tencentcloud/mqtt/v20240516/model/AddClientSubscriptionRequest.h
  include/tencentcloud/mqtt/v20240516/model/CreateMessageEnrichmentRuleRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeClientListRequest.h
  include/tencentcloud/mqtt/v20240516/model/DeleteAuthorizationPolicyRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeAuthorizationPoliciesRequest.h
  include/tencentcloud/mqtt/v20240516/model/DeleteUserRequest.h
  include/tencentcloud/mqtt/v20240516/model/MQTTUserItem.h
  include/tencentcloud/mqtt/v20240516/model/CreateUserRequest.h
  include/tencentcloud/mqtt/v20240516/model/ModifyInstanceRequest.h
  include/tencentcloud/mqtt/v20240516/model/MessageEnrichmentRulePriority.h
  include/tencentcloud/mqtt/v20240516/model/CreateUserResponse.h
  include/tencentcloud/mqtt/v20240516/model/AddClientSubscriptionResponse.h
  include/tencentcloud/mqtt/v20240516/model/CreateAuthorizationPolicyRequest.h
  include/tencentcloud/mqtt/v20240516/model/CreateInstanceResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeMessageEnrichmentRulesResponse.h
  include/tencentcloud/mqtt/v20240516/model/MessageEnrichmentRuleItem.h
  include/tencentcloud/mqtt/v20240516/model/UserProperty.h
  include/tencentcloud/mqtt/v20240516/model/ModifyMessageEnrichmentRuleRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeMessageByTopicRequest.h
  include/tencentcloud/mqtt/v20240516/model/AuthorizationPolicyItem.h
  include/tencentcloud/mqtt/v20240516/model/DeleteUserResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeAuthorizationPoliciesResponse.h
  include/tencentcloud/mqtt/v20240516/model/AuthorizationPolicyPriority.h
  include/tencentcloud/mqtt/v20240516/model/Tag.h
  include/tencentcloud/mqtt/v20240516/model/CreateInstanceRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeMessageByTopicResponse.h
  include/tencentcloud/mqtt/v20240516/model/CreateMessageEnrichmentRuleResponse.h
  include/tencentcloud/mqtt/v20240516/model/DeleteTopicRequest.h
  include/tencentcloud/mqtt/v20240516/model/ModifyUserResponse.h
  include/tencentcloud/mqtt/v20240516/model/CreateAuthorizationPolicyResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeTopicResponse.h
  include/tencentcloud/mqtt/v20240516/model/UpdateMessageEnrichmentRulePriorityResponse.h
  include/tencentcloud/mqtt/v20240516/model/DeleteMessageEnrichmentRuleRequest.h
  include/tencentcloud/mqtt/v20240516/model/SubscriptionUserProperty.h
  include/tencentcloud/mqtt/v20240516/model/ModifyMessageEnrichmentRuleResponse.h
  include/tencentcloud/mqtt/v20240516/model/MQTTClientInfo.h
  include/tencentcloud/mqtt/v20240516/model/VpcInfo.h
  include/tencentcloud/mqtt/v20240516/model/Filter.h
  include/tencentcloud/mqtt/v20240516/model/DeleteAuthorizationPolicyResponse.h
  include/tencentcloud/mqtt/v20240516/model/KickOutClientResponse.h
  include/tencentcloud/mqtt/v20240516/model/MQTTClientSubscription.h
  include/tencentcloud/mqtt/v20240516/model/DeleteClientSubscriptionRequest.h
  include/tencentcloud/mqtt/v20240516/model/MQTTMessage.h
  include/tencentcloud/mqtt/v20240516/model/DescribeInstanceResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeMessageDetailsResponse.h
  include/tencentcloud/mqtt/v20240516/model/UpdateMessageEnrichmentRulePriorityRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeUserListResponse.h
  include/tencentcloud/mqtt/v20240516/model/DeleteTopicResponse.h
  include/tencentcloud/mqtt/v20240516/model/ModifyAuthorizationPolicyResponse.h
  include/tencentcloud/mqtt/v20240516/model/DeleteInstanceResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeMessageDetailsRequest.h
  include/tencentcloud/mqtt/v20240516/model/DeleteMessageEnrichmentRuleResponse.h
  include/tencentcloud/mqtt/v20240516/model/DeleteInstanceRequest.h
  include/tencentcloud/mqtt/v20240516/model/ModifyAuthorizationPolicyRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeInstanceRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeClientListResponse.h
  include/tencentcloud/mqtt/v20240516/model/DescribeUserListRequest.h
  include/tencentcloud/mqtt/v20240516/model/ModifyUserRequest.h
  include/tencentcloud/mqtt/v20240516/model/KickOutClientRequest.h
  include/tencentcloud/mqtt/v20240516/model/DeleteClientSubscriptionResponse.h
  include/tencentcloud/mqtt/v20240516/model/IpRule.h
  include/tencentcloud/mqtt/v20240516/model/UpdateAuthorizationPolicyPriorityRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeMessageEnrichmentRulesRequest.h
  include/tencentcloud/mqtt/v20240516/model/DescribeTopicRequest.h
  )

set(mqtt_src
  src/v20240516/MqttClient.cpp
  src/v20240516/model/ModifyInstanceResponse.cpp
  src/v20240516/model/UpdateAuthorizationPolicyPriorityResponse.cpp
  src/v20240516/model/AddClientSubscriptionRequest.cpp
  src/v20240516/model/CreateMessageEnrichmentRuleRequest.cpp
  src/v20240516/model/DescribeClientListRequest.cpp
  src/v20240516/model/DeleteAuthorizationPolicyRequest.cpp
  src/v20240516/model/DescribeAuthorizationPoliciesRequest.cpp
  src/v20240516/model/DeleteUserRequest.cpp
  src/v20240516/model/MQTTUserItem.cpp
  src/v20240516/model/CreateUserRequest.cpp
  src/v20240516/model/ModifyInstanceRequest.cpp
  src/v20240516/model/MessageEnrichmentRulePriority.cpp
  src/v20240516/model/CreateUserResponse.cpp
  src/v20240516/model/AddClientSubscriptionResponse.cpp
  src/v20240516/model/CreateAuthorizationPolicyRequest.cpp
  src/v20240516/model/CreateInstanceResponse.cpp
  src/v20240516/model/DescribeMessageEnrichmentRulesResponse.cpp
  src/v20240516/model/MessageEnrichmentRuleItem.cpp
  src/v20240516/model/UserProperty.cpp
  src/v20240516/model/ModifyMessageEnrichmentRuleRequest.cpp
  src/v20240516/model/DescribeMessageByTopicRequest.cpp
  src/v20240516/model/AuthorizationPolicyItem.cpp
  src/v20240516/model/DeleteUserResponse.cpp
  src/v20240516/model/DescribeAuthorizationPoliciesResponse.cpp
  src/v20240516/model/AuthorizationPolicyPriority.cpp
  src/v20240516/model/Tag.cpp
  src/v20240516/model/CreateInstanceRequest.cpp
  src/v20240516/model/DescribeMessageByTopicResponse.cpp
  src/v20240516/model/CreateMessageEnrichmentRuleResponse.cpp
  src/v20240516/model/DeleteTopicRequest.cpp
  src/v20240516/model/ModifyUserResponse.cpp
  src/v20240516/model/CreateAuthorizationPolicyResponse.cpp
  src/v20240516/model/DescribeTopicResponse.cpp
  src/v20240516/model/UpdateMessageEnrichmentRulePriorityResponse.cpp
  src/v20240516/model/DeleteMessageEnrichmentRuleRequest.cpp
  src/v20240516/model/SubscriptionUserProperty.cpp
  src/v20240516/model/ModifyMessageEnrichmentRuleResponse.cpp
  src/v20240516/model/MQTTClientInfo.cpp
  src/v20240516/model/VpcInfo.cpp
  src/v20240516/model/Filter.cpp
  src/v20240516/model/DeleteAuthorizationPolicyResponse.cpp
  src/v20240516/model/KickOutClientResponse.cpp
  src/v20240516/model/MQTTClientSubscription.cpp
  src/v20240516/model/DeleteClientSubscriptionRequest.cpp
  src/v20240516/model/MQTTMessage.cpp
  src/v20240516/model/DescribeInstanceResponse.cpp
  src/v20240516/model/DescribeMessageDetailsResponse.cpp
  src/v20240516/model/UpdateMessageEnrichmentRulePriorityRequest.cpp
  src/v20240516/model/DescribeUserListResponse.cpp
  src/v20240516/model/DeleteTopicResponse.cpp
  src/v20240516/model/ModifyAuthorizationPolicyResponse.cpp
  src/v20240516/model/DeleteInstanceResponse.cpp
  src/v20240516/model/DescribeMessageDetailsRequest.cpp
  src/v20240516/model/DeleteMessageEnrichmentRuleResponse.cpp
  src/v20240516/model/DeleteInstanceRequest.cpp
  src/v20240516/model/ModifyAuthorizationPolicyRequest.cpp
  src/v20240516/model/DescribeInstanceRequest.cpp
  src/v20240516/model/DescribeClientListResponse.cpp
  src/v20240516/model/DescribeUserListRequest.cpp
  src/v20240516/model/ModifyUserRequest.cpp
  src/v20240516/model/KickOutClientRequest.cpp
  src/v20240516/model/DeleteClientSubscriptionResponse.cpp
  src/v20240516/model/IpRule.cpp
  src/v20240516/model/UpdateAuthorizationPolicyPriorityRequest.cpp
  src/v20240516/model/DescribeMessageEnrichmentRulesRequest.cpp
  src/v20240516/model/DescribeTopicRequest.cpp
  )

set(mqtt_include
    include/tencentcloud/mqtt
  )

add_library(mqtt ${LIB_TYPE}
  ${mqtt_public_header}
  ${mqtt_public_header_model}
  ${mqtt_src})

set_target_properties(mqtt
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mqtt
  )

target_include_directories(mqtt
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(mqtt
  core)

#install(FILES ${mqtt_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mqtt/v20240516)
#install(FILES ${mqtt_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mqtt/v20240516/model)
install(DIRECTORY ${mqtt_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS mqtt
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
