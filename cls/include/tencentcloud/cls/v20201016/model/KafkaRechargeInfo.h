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
                     * 获取ID of the Kafka data subscription configuration.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id ID of the Kafka data subscription configuration.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID of the Kafka data subscription configuration.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id ID of the Kafka data subscription configuration.Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicId Log topic ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topicId Log topic ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Kafka data import task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Kafka data import task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Kafka data import task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Kafka data import task name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Kafka type. Valid values: 0 (Tencent Cloud CKafka) and 1 (customer's Kafka).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KafkaType Kafka type. Valid values: 0 (Tencent Cloud CKafka) and 1 (customer's Kafka).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetKafkaType() const;

                    /**
                     * 设置Kafka type. Valid values: 0 (Tencent Cloud CKafka) and 1 (customer's Kafka).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _kafkaType Kafka type. Valid values: 0 (Tencent Cloud CKafka) and 1 (customer's Kafka).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取CKafka instance ID, which is required when `KafkaType` is set to `0`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KafkaInstance CKafka instance ID, which is required when `KafkaType` is set to `0`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKafkaInstance() const;

                    /**
                     * 设置CKafka instance ID, which is required when `KafkaType` is set to `0`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _kafkaInstance CKafka instance ID, which is required when `KafkaType` is set to `0`
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServerAddr Service address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServerAddr() const;

                    /**
                     * 设置Service address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serverAddr Service address
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether the service address uses an encrypted connection	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsEncryptionAddr Whether the service address uses an encrypted connection	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsEncryptionAddr() const;

                    /**
                     * 设置Whether the service address uses an encrypted connection	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isEncryptionAddr Whether the service address uses an encrypted connection	
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of Kafka topics to import data from. Separate multiple topics with commas (,).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserKafkaTopics List of Kafka topics to import data from. Separate multiple topics with commas (,).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserKafkaTopics() const;

                    /**
                     * 设置List of Kafka topics to import data from. Separate multiple topics with commas (,).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userKafkaTopics List of Kafka topics to import data from. Separate multiple topics with commas (,).
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumerGroupName Kafka consumer group name	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConsumerGroupName() const;

                    /**
                     * 设置Kafka consumer group name	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _consumerGroupName Kafka consumer group name	
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Status, 1: running; 2: paused.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Status, 1: running; 2: paused.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status, 1: running; 2: paused.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Status, 1: running; 2: paused.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Import data position, -2: earliest (default), -1: latestNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Offset Import data position, -2: earliest (default), -1: latestNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Import data position, -2: earliest (default), -1: latestNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _offset Import data position, -2: earliest (default), -1: latestNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogRechargeRule Log import rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    LogRechargeRuleInfo GetLogRechargeRule() const;

                    /**
                     * 设置Log import rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logRechargeRule Log import rule
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogRechargeRule(const LogRechargeRuleInfo& _logRechargeRule);

                    /**
                     * 判断参数 LogRechargeRule 是否已赋值
                     * @return LogRechargeRule 是否已赋值
                     * 
                     */
                    bool LogRechargeRuleHasBeenSet() const;

                private:

                    /**
                     * ID of the Kafka data subscription configuration.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Log topic ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Kafka data import task name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Kafka type. Valid values: 0 (Tencent Cloud CKafka) and 1 (customer's Kafka).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_kafkaType;
                    bool m_kafkaTypeHasBeenSet;

                    /**
                     * CKafka instance ID, which is required when `KafkaType` is set to `0`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_kafkaInstance;
                    bool m_kafkaInstanceHasBeenSet;

                    /**
                     * Service address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                    /**
                     * Whether the service address uses an encrypted connection	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isEncryptionAddr;
                    bool m_isEncryptionAddrHasBeenSet;

                    /**
                     * Encryption access protocol, which is required when `IsEncryptionAddr` is set to `true`
                     */
                    KafkaProtocolInfo m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * List of Kafka topics to import data from. Separate multiple topics with commas (,).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userKafkaTopics;
                    bool m_userKafkaTopicsHasBeenSet;

                    /**
                     * Kafka consumer group name	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_consumerGroupName;
                    bool m_consumerGroupNameHasBeenSet;

                    /**
                     * Status, 1: running; 2: paused.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Import data position, -2: earliest (default), -1: latestNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Log import rule
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    LogRechargeRuleInfo m_logRechargeRule;
                    bool m_logRechargeRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_KAFKARECHARGEINFO_H_
