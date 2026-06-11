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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYKAFKARECHARGEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYKAFKARECHARGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/KafkaProtocolInfo.h>
#include <tencentcloud/cls/v20201016/model/LogRechargeRuleInfo.h>
#include <tencentcloud/cls/v20201016/model/UserKafkaMeta.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyKafkaRecharge request structure.
                */
                class ModifyKafkaRechargeRequest : public AbstractModel
                {
                public:
                    ModifyKafkaRechargeRequest();
                    ~ModifyKafkaRechargeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Import configuration Id.
-Create a Kafka Data Subscription Task (https://www.tencentcloud.com/document/product/614/94448?from_cn_redirect=1) to obtain the Kafka import configuration Id.
-Get the Kafka import configuration Id by searching the [Kafka Data Subscription Task list](https://www.tencentcloud.com/document/product/614/94446?from_cn_redirect=1).
                     * @return Id Import configuration Id.
-Create a Kafka Data Subscription Task (https://www.tencentcloud.com/document/product/614/94448?from_cn_redirect=1) to obtain the Kafka import configuration Id.
-Get the Kafka import configuration Id by searching the [Kafka Data Subscription Task list](https://www.tencentcloud.com/document/product/614/94446?from_cn_redirect=1).
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Import configuration Id.
-Create a Kafka Data Subscription Task (https://www.tencentcloud.com/document/product/614/94448?from_cn_redirect=1) to obtain the Kafka import configuration Id.
-Get the Kafka import configuration Id by searching the [Kafka Data Subscription Task list](https://www.tencentcloud.com/document/product/614/94446?from_cn_redirect=1).
                     * @param _id Import configuration Id.
-Create a Kafka Data Subscription Task (https://www.tencentcloud.com/document/product/614/94448?from_cn_redirect=1) to obtain the Kafka import configuration Id.
-Get the Kafka import configuration Id by searching the [Kafka Data Subscription Task list](https://www.tencentcloud.com/document/product/614/94446?from_cn_redirect=1).
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Import the target topic ID of CLS.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * @return TopicId Import the target topic ID of CLS.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Import the target topic ID of CLS.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * @param _topicId Import the target topic ID of CLS.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Kafka data import configuration name
                     * @return Name Kafka data import configuration name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Kafka data import configuration name
                     * @param _name Kafka data import configuration name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Import Kafka type. 0: Tencent Cloud CKafka; 1: user-built kafka.
                     * @return KafkaType Import Kafka type. 0: Tencent Cloud CKafka; 1: user-built kafka.
                     * 
                     */
                    uint64_t GetKafkaType() const;

                    /**
                     * 设置Import Kafka type. 0: Tencent Cloud CKafka; 1: user-built kafka.
                     * @param _kafkaType Import Kafka type. 0: Tencent Cloud CKafka; 1: user-built kafka.
                     * 
                     */
                    void SetKafkaType(const uint64_t& _kafkaType);

                    /**
                     * 判断参数 KafkaType 是否已赋值
                     * @return KafkaType 是否已赋值
                     * 
                     */
                    bool KafkaTypeHasBeenSet() const;

                    /**
                     * 获取Tencent Cloud CKafka instance ID. Required when KafkaType is 0.
- Obtain the instance id by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
                     * @return KafkaInstance Tencent Cloud CKafka instance ID. Required when KafkaType is 0.
- Obtain the instance id by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
                     * 
                     */
                    std::string GetKafkaInstance() const;

                    /**
                     * 设置Tencent Cloud CKafka instance ID. Required when KafkaType is 0.
- Obtain the instance id by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
                     * @param _kafkaInstance Tencent Cloud CKafka instance ID. Required when KafkaType is 0.
- Obtain the instance id by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
                     * 
                     */
                    void SetKafkaInstance(const std::string& _kafkaInstance);

                    /**
                     * 判断参数 KafkaInstance 是否已赋值
                     * @return KafkaInstance 是否已赋值
                     * 
                     */
                    bool KafkaInstanceHasBeenSet() const;

                    /**
                     * 获取Service address, which is required when KafkaType is 1.
                     * @return ServerAddr Service address, which is required when KafkaType is 1.
                     * 
                     */
                    std::string GetServerAddr() const;

                    /**
                     * 设置Service address, which is required when KafkaType is 1.
                     * @param _serverAddr Service address, which is required when KafkaType is 1.
                     * 
                     */
                    void SetServerAddr(const std::string& _serverAddr);

                    /**
                     * 判断参数 ServerAddr 是否已赋值
                     * @return ServerAddr 是否已赋值
                     * 
                     */
                    bool ServerAddrHasBeenSet() const;

                    /**
                     * 获取Whether ServerAddr is an encrypted connection. Required when KafkaType is 1.
                     * @return IsEncryptionAddr Whether ServerAddr is an encrypted connection. Required when KafkaType is 1.
                     * 
                     */
                    bool GetIsEncryptionAddr() const;

                    /**
                     * 设置Whether ServerAddr is an encrypted connection. Required when KafkaType is 1.
                     * @param _isEncryptionAddr Whether ServerAddr is an encrypted connection. Required when KafkaType is 1.
                     * 
                     */
                    void SetIsEncryptionAddr(const bool& _isEncryptionAddr);

                    /**
                     * 判断参数 IsEncryptionAddr 是否已赋值
                     * @return IsEncryptionAddr 是否已赋值
                     * 
                     */
                    bool IsEncryptionAddrHasBeenSet() const;

                    /**
                     * 获取Encrypted access protocol. It is required when the parameter KafkaType is 1 and the parameter IsEncryptionAddr is true.
                     * @return Protocol Encrypted access protocol. It is required when the parameter KafkaType is 1 and the parameter IsEncryptionAddr is true.
                     * 
                     */
                    KafkaProtocolInfo GetProtocol() const;

                    /**
                     * 设置Encrypted access protocol. It is required when the parameter KafkaType is 1 and the parameter IsEncryptionAddr is true.
                     * @param _protocol Encrypted access protocol. It is required when the parameter KafkaType is 1 and the parameter IsEncryptionAddr is true.
                     * 
                     */
                    void SetProtocol(const KafkaProtocolInfo& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取List of Kafka-related topics to be imported by the user, separated by commas.

-When Kafka Type is Tencent Cloud CKafka: Get TopicName by searching the topic list (https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1).
                     * @return UserKafkaTopics List of Kafka-related topics to be imported by the user, separated by commas.

-When Kafka Type is Tencent Cloud CKafka: Get TopicName by searching the topic list (https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1).
                     * 
                     */
                    std::string GetUserKafkaTopics() const;

                    /**
                     * 设置List of Kafka-related topics to be imported by the user, separated by commas.

-When Kafka Type is Tencent Cloud CKafka: Get TopicName by searching the topic list (https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1).
                     * @param _userKafkaTopics List of Kafka-related topics to be imported by the user, separated by commas.

-When Kafka Type is Tencent Cloud CKafka: Get TopicName by searching the topic list (https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1).
                     * 
                     */
                    void SetUserKafkaTopics(const std::string& _userKafkaTopics);

                    /**
                     * 判断参数 UserKafkaTopics 是否已赋值
                     * @return UserKafkaTopics 是否已赋值
                     * 
                     */
                    bool UserKafkaTopicsHasBeenSet() const;

                    /**
                     * 获取Kafka consumer group name
                     * @return ConsumerGroupName Kafka consumer group name
                     * 
                     */
                    std::string GetConsumerGroupName() const;

                    /**
                     * 设置Kafka consumer group name
                     * @param _consumerGroupName Kafka consumer group name
                     * 
                     */
                    void SetConsumerGroupName(const std::string& _consumerGroupName);

                    /**
                     * 判断参数 ConsumerGroupName 是否已赋值
                     * @return ConsumerGroupName 是否已赋值
                     * 
                     */
                    bool ConsumerGroupNameHasBeenSet() const;

                    /**
                     * 获取Log import rule
                     * @return LogRechargeRule Log import rule
                     * 
                     */
                    LogRechargeRuleInfo GetLogRechargeRule() const;

                    /**
                     * 设置Log import rule
                     * @param _logRechargeRule Log import rule
                     * 
                     */
                    void SetLogRechargeRule(const LogRechargeRuleInfo& _logRechargeRule);

                    /**
                     * 判断参数 LogRechargeRule 是否已赋值
                     * @return LogRechargeRule 是否已赋值
                     * 
                     */
                    bool LogRechargeRuleHasBeenSet() const;

                    /**
                     * 获取Import control, 1: suspend; 2: start.
                     * @return StatusControl Import control, 1: suspend; 2: start.
                     * 
                     */
                    uint64_t GetStatusControl() const;

                    /**
                     * 设置Import control, 1: suspend; 2: start.
                     * @param _statusControl Import control, 1: suspend; 2: start.
                     * 
                     */
                    void SetStatusControl(const uint64_t& _statusControl);

                    /**
                     * 判断参数 StatusControl 是否已赋值
                     * @return StatusControl 是否已赋值
                     * 
                     */
                    bool StatusControlHasBeenSet() const;

                    /**
                     * 获取User kafka extended information
                     * @return UserKafkaMeta User kafka extended information
                     * 
                     */
                    UserKafkaMeta GetUserKafkaMeta() const;

                    /**
                     * 设置User kafka extended information
                     * @param _userKafkaMeta User kafka extended information
                     * 
                     */
                    void SetUserKafkaMeta(const UserKafkaMeta& _userKafkaMeta);

                    /**
                     * 判断参数 UserKafkaMeta 是否已赋值
                     * @return UserKafkaMeta 是否已赋值
                     * 
                     */
                    bool UserKafkaMetaHasBeenSet() const;

                private:

                    /**
                     * Import configuration Id.
-Create a Kafka Data Subscription Task (https://www.tencentcloud.com/document/product/614/94448?from_cn_redirect=1) to obtain the Kafka import configuration Id.
-Get the Kafka import configuration Id by searching the [Kafka Data Subscription Task list](https://www.tencentcloud.com/document/product/614/94446?from_cn_redirect=1).
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Import the target topic ID of CLS.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Kafka data import configuration name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Import Kafka type. 0: Tencent Cloud CKafka; 1: user-built kafka.
                     */
                    uint64_t m_kafkaType;
                    bool m_kafkaTypeHasBeenSet;

                    /**
                     * Tencent Cloud CKafka instance ID. Required when KafkaType is 0.
- Obtain the instance id by searching the instance list information (https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1).
                     */
                    std::string m_kafkaInstance;
                    bool m_kafkaInstanceHasBeenSet;

                    /**
                     * Service address, which is required when KafkaType is 1.
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                    /**
                     * Whether ServerAddr is an encrypted connection. Required when KafkaType is 1.
                     */
                    bool m_isEncryptionAddr;
                    bool m_isEncryptionAddrHasBeenSet;

                    /**
                     * Encrypted access protocol. It is required when the parameter KafkaType is 1 and the parameter IsEncryptionAddr is true.
                     */
                    KafkaProtocolInfo m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * List of Kafka-related topics to be imported by the user, separated by commas.

-When Kafka Type is Tencent Cloud CKafka: Get TopicName by searching the topic list (https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1).
                     */
                    std::string m_userKafkaTopics;
                    bool m_userKafkaTopicsHasBeenSet;

                    /**
                     * Kafka consumer group name
                     */
                    std::string m_consumerGroupName;
                    bool m_consumerGroupNameHasBeenSet;

                    /**
                     * Log import rule
                     */
                    LogRechargeRuleInfo m_logRechargeRule;
                    bool m_logRechargeRuleHasBeenSet;

                    /**
                     * Import control, 1: suspend; 2: start.
                     */
                    uint64_t m_statusControl;
                    bool m_statusControlHasBeenSet;

                    /**
                     * User kafka extended information
                     */
                    UserKafkaMeta m_userKafkaMeta;
                    bool m_userKafkaMetaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYKAFKARECHARGEREQUEST_H_
