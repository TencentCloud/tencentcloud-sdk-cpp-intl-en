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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_KAFKARECHARGEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_KAFKARECHARGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Kafka data import configuration
                */
                class KafkaRechargeInfo : public AbstractModel
                {
                public:
                    KafkaRechargeInfo();
                    ~KafkaRechargeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of Kafka data subscription configuration.
                     * @return Id ID of Kafka data subscription configuration.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID of Kafka data subscription configuration.
                     * @param _id ID of Kafka data subscription configuration.
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
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param _topicId Log topic ID
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
                     * 获取Name of the Kafka import task
                     * @return Name Name of the Kafka import task
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the Kafka import task
                     * @param _name Name of the Kafka import task
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
                     * 获取Imports Kafka type. 0: Cloud CKafka; 1: user-built Kafka
                     * @return KafkaType Imports Kafka type. 0: Cloud CKafka; 1: user-built Kafka
                     * 
                     */
                    uint64_t GetKafkaType() const;

                    /**
                     * 设置Imports Kafka type. 0: Cloud CKafka; 1: user-built Kafka
                     * @param _kafkaType Imports Kafka type. 0: Cloud CKafka; 1: user-built Kafka
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
                     * 获取CKafka instance ID of cloud platform, required when KafkaType is 0.
                     * @return KafkaInstance CKafka instance ID of cloud platform, required when KafkaType is 0.
                     * 
                     */
                    std::string GetKafkaInstance() const;

                    /**
                     * 设置CKafka instance ID of cloud platform, required when KafkaType is 0.
                     * @param _kafkaInstance CKafka instance ID of cloud platform, required when KafkaType is 0.
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
                     * 获取Service address
                     * @return ServerAddr Service address
                     * 
                     */
                    std::string GetServerAddr() const;

                    /**
                     * 设置Service address
                     * @param _serverAddr Service address
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
                     * 获取Whether ServerAddr is an encrypted connection	
                     * @return IsEncryptionAddr Whether ServerAddr is an encrypted connection	
                     * 
                     */
                    bool GetIsEncryptionAddr() const;

                    /**
                     * 设置Whether ServerAddr is an encrypted connection	
                     * @param _isEncryptionAddr Whether ServerAddr is an encrypted connection	
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
                     * 获取Encryption access protocol, which is required when `IsEncryptionAddr` is set to `true`
                     * @return Protocol Encryption access protocol, which is required when `IsEncryptionAddr` is set to `true`
                     * 
                     */
                    KafkaProtocolInfo GetProtocol() const;

                    /**
                     * 设置Encryption access protocol, which is required when `IsEncryptionAddr` is set to `true`
                     * @param _protocol Encryption access protocol, which is required when `IsEncryptionAddr` is set to `true`
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
                     * 获取The list of Kafka-related topics that the user needs to import. Separate multiple topics by commas.
                     * @return UserKafkaTopics The list of Kafka-related topics that the user needs to import. Separate multiple topics by commas.
                     * 
                     */
                    std::string GetUserKafkaTopics() const;

                    /**
                     * 设置The list of Kafka-related topics that the user needs to import. Separate multiple topics by commas.
                     * @param _userKafkaTopics The list of Kafka-related topics that the user needs to import. Separate multiple topics by commas.
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
                     * 获取Kafka consumer group name of the user	
                     * @return ConsumerGroupName Kafka consumer group name of the user	
                     * 
                     */
                    std::string GetConsumerGroupName() const;

                    /**
                     * 设置Kafka consumer group name of the user	
                     * @param _consumerGroupName Kafka consumer group name of the user	
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
                     * 获取Status. 1: Running; 2: Suspension.
                     * @return Status Status. 1: Running; 2: Suspension.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status. 1: Running; 2: Suspension.
                     * @param _status Status. 1: Running; 2: Suspension.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Data import position. -2: earliest (default); -1: latest
                     * @return Offset Data import position. -2: earliest (default); -1: latest
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Data import position. -2: earliest (default); -1: latest
                     * @param _offset Data import position. -2: earliest (default); -1: latest
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Creation time. Format `YYYY-MM-DD HH:MM:SS`
                     * @return CreateTime Creation time. Format `YYYY-MM-DD HH:MM:SS`
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time. Format `YYYY-MM-DD HH:MM:SS`
                     * @param _createTime Creation time. Format `YYYY-MM-DD HH:MM:SS`
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time. Format: `YYYY-MM-DD HH:MM:SS`
                     * @return UpdateTime Update time. Format: `YYYY-MM-DD HH:MM:SS`
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time. Format: `YYYY-MM-DD HH:MM:SS`
                     * @param _updateTime Update time. Format: `YYYY-MM-DD HH:MM:SS`
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

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
                     * ID of Kafka data subscription configuration.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Name of the Kafka import task
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Imports Kafka type. 0: Cloud CKafka; 1: user-built Kafka
                     */
                    uint64_t m_kafkaType;
                    bool m_kafkaTypeHasBeenSet;

                    /**
                     * CKafka instance ID of cloud platform, required when KafkaType is 0.
                     */
                    std::string m_kafkaInstance;
                    bool m_kafkaInstanceHasBeenSet;

                    /**
                     * Service address
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                    /**
                     * Whether ServerAddr is an encrypted connection	
                     */
                    bool m_isEncryptionAddr;
                    bool m_isEncryptionAddrHasBeenSet;

                    /**
                     * Encryption access protocol, which is required when `IsEncryptionAddr` is set to `true`
                     */
                    KafkaProtocolInfo m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * The list of Kafka-related topics that the user needs to import. Separate multiple topics by commas.
                     */
                    std::string m_userKafkaTopics;
                    bool m_userKafkaTopicsHasBeenSet;

                    /**
                     * Kafka consumer group name of the user	
                     */
                    std::string m_consumerGroupName;
                    bool m_consumerGroupNameHasBeenSet;

                    /**
                     * Status. 1: Running; 2: Suspension.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Data import position. -2: earliest (default); -1: latest
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Creation time. Format `YYYY-MM-DD HH:MM:SS`
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time. Format: `YYYY-MM-DD HH:MM:SS`
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Log import rule
                     */
                    LogRechargeRuleInfo m_logRechargeRule;
                    bool m_logRechargeRuleHasBeenSet;

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

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_KAFKARECHARGEINFO_H_
