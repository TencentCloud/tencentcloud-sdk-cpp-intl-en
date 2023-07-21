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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_PREVIEWKAFKARECHARGEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_PREVIEWKAFKARECHARGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * PreviewKafkaRecharge request structure.
                */
                class PreviewKafkaRechargeRequest : public AbstractModel
                {
                public:
                    PreviewKafkaRechargeRequest();
                    ~PreviewKafkaRechargeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Preview type. Valid values: 1 (source data preview) and 2 (result preview).
                     * @return PreviewType Preview type. Valid values: 1 (source data preview) and 2 (result preview).
                     * 
                     */
                    uint64_t GetPreviewType() const;

                    /**
                     * 设置Preview type. Valid values: 1 (source data preview) and 2 (result preview).
                     * @param _previewType Preview type. Valid values: 1 (source data preview) and 2 (result preview).
                     * 
                     */
                    void SetPreviewType(const uint64_t& _previewType);

                    /**
                     * 判断参数 PreviewType 是否已赋值
                     * @return PreviewType 是否已赋值
                     * 
                     */
                    bool PreviewTypeHasBeenSet() const;

                    /**
                     * 获取Kafka type. Valid values: 0 (Tencent Cloud CKafka) and 1 (customer's Kafka)
                     * @return KafkaType Kafka type. Valid values: 0 (Tencent Cloud CKafka) and 1 (customer's Kafka)
                     * 
                     */
                    uint64_t GetKafkaType() const;

                    /**
                     * 设置Kafka type. Valid values: 0 (Tencent Cloud CKafka) and 1 (customer's Kafka)
                     * @param _kafkaType Kafka type. Valid values: 0 (Tencent Cloud CKafka) and 1 (customer's Kafka)
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
                     * 获取List of Kafka topics to import data from. Separate multiple topics with commas (,).
                     * @return UserKafkaTopics List of Kafka topics to import data from. Separate multiple topics with commas (,).
                     * 
                     */
                    std::string GetUserKafkaTopics() const;

                    /**
                     * 设置List of Kafka topics to import data from. Separate multiple topics with commas (,).
                     * @param _userKafkaTopics List of Kafka topics to import data from. Separate multiple topics with commas (,).
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
                     * 获取Position for data import. Valid values: -2 (earliest, default) and -1 (latest).
                     * @return Offset Position for data import. Valid values: -2 (earliest, default) and -1 (latest).
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Position for data import. Valid values: -2 (earliest, default) and -1 (latest).
                     * @param _offset Position for data import. Valid values: -2 (earliest, default) and -1 (latest).
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
                     * 获取CKafka instance ID, which is required when `KafkaType` is set to `0`
                     * @return KafkaInstance CKafka instance ID, which is required when `KafkaType` is set to `0`
                     * 
                     */
                    std::string GetKafkaInstance() const;

                    /**
                     * 设置CKafka instance ID, which is required when `KafkaType` is set to `0`
                     * @param _kafkaInstance CKafka instance ID, which is required when `KafkaType` is set to `0`
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
                     * 获取Whether the service address uses an encrypted connection
                     * @return IsEncryptionAddr Whether the service address uses an encrypted connection
                     * 
                     */
                    bool GetIsEncryptionAddr() const;

                    /**
                     * 设置Whether the service address uses an encrypted connection
                     * @param _isEncryptionAddr Whether the service address uses an encrypted connection
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

                private:

                    /**
                     * Preview type. Valid values: 1 (source data preview) and 2 (result preview).
                     */
                    uint64_t m_previewType;
                    bool m_previewTypeHasBeenSet;

                    /**
                     * Kafka type. Valid values: 0 (Tencent Cloud CKafka) and 1 (customer's Kafka)
                     */
                    uint64_t m_kafkaType;
                    bool m_kafkaTypeHasBeenSet;

                    /**
                     * List of Kafka topics to import data from. Separate multiple topics with commas (,).
                     */
                    std::string m_userKafkaTopics;
                    bool m_userKafkaTopicsHasBeenSet;

                    /**
                     * Position for data import. Valid values: -2 (earliest, default) and -1 (latest).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * CKafka instance ID, which is required when `KafkaType` is set to `0`
                     */
                    std::string m_kafkaInstance;
                    bool m_kafkaInstanceHasBeenSet;

                    /**
                     * Service address
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                    /**
                     * Whether the service address uses an encrypted connection
                     */
                    bool m_isEncryptionAddr;
                    bool m_isEncryptionAddrHasBeenSet;

                    /**
                     * Encryption access protocol, which is required when `IsEncryptionAddr` is set to `true`
                     */
                    KafkaProtocolInfo m_protocol;
                    bool m_protocolHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_PREVIEWKAFKARECHARGEREQUEST_H_
