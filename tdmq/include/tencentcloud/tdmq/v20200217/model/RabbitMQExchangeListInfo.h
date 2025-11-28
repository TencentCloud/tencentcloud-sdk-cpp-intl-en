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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQEXCHANGELISTINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQEXCHANGELISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RabbitMQ exchange list member information
                */
                class RabbitMQExchangeListInfo : public AbstractModel
                {
                public:
                    RabbitMQExchangeListInfo();
                    ~RabbitMQExchangeListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Exchange name.
                     * @return ExchangeName Exchange name.
                     * 
                     */
                    std::string GetExchangeName() const;

                    /**
                     * 设置Exchange name.
                     * @param _exchangeName Exchange name.
                     * 
                     */
                    void SetExchangeName(const std::string& _exchangeName);

                    /**
                     * 判断参数 ExchangeName 是否已赋值
                     * @return ExchangeName 是否已赋值
                     * 
                     */
                    bool ExchangeNameHasBeenSet() const;

                    /**
                     * 获取Remarks

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Remark Remarks

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _remark Remarks

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Exchange type. Valid values: "fanout", "direct", "topic", "headers".
                     * @return ExchangeType Exchange type. Valid values: "fanout", "direct", "topic", "headers".
                     * 
                     */
                    std::string GetExchangeType() const;

                    /**
                     * 设置Exchange type. Valid values: "fanout", "direct", "topic", "headers".
                     * @param _exchangeType Exchange type. Valid values: "fanout", "direct", "topic", "headers".
                     * 
                     */
                    void SetExchangeType(const std::string& _exchangeType);

                    /**
                     * 判断参数 ExchangeType 是否已赋值
                     * @return ExchangeType 是否已赋值
                     * 
                     */
                    bool ExchangeTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the Host name of the Virtual switch.
                     * @return VirtualHost Specifies the Host name of the Virtual switch.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置Specifies the Host name of the Virtual switch.
                     * @param _virtualHost Specifies the Host name of the Virtual switch.
                     * 
                     */
                    void SetVirtualHost(const std::string& _virtualHost);

                    /**
                     * 判断参数 VirtualHost 是否已赋值
                     * @return VirtualHost 是否已赋值
                     * 
                     */
                    bool VirtualHostHasBeenSet() const;

                    /**
                     * 获取Exchange creator. "system": "created by the system"; "user": "created by a user".
                     * @return ExchangeCreator Exchange creator. "system": "created by the system"; "user": "created by a user".
                     * 
                     */
                    std::string GetExchangeCreator() const;

                    /**
                     * 设置Exchange creator. "system": "created by the system"; "user": "created by a user".
                     * @param _exchangeCreator Exchange creator. "system": "created by the system"; "user": "created by a user".
                     * 
                     */
                    void SetExchangeCreator(const std::string& _exchangeCreator);

                    /**
                     * 判断参数 ExchangeCreator 是否已赋值
                     * @return ExchangeCreator 是否已赋值
                     * 
                     */
                    bool ExchangeCreatorHasBeenSet() const;

                    /**
                     * 获取Exchange creation time.
                     * @return CreateTimeStamp Exchange creation time.
                     * 
                     */
                    std::string GetCreateTimeStamp() const;

                    /**
                     * 设置Exchange creation time.
                     * @param _createTimeStamp Exchange creation time.
                     * 
                     */
                    void SetCreateTimeStamp(const std::string& _createTimeStamp);

                    /**
                     * 判断参数 CreateTimeStamp 是否已赋值
                     * @return CreateTimeStamp 是否已赋值
                     * 
                     */
                    bool CreateTimeStampHasBeenSet() const;

                    /**
                     * 获取Exchange modification time.
                     * @return ModTimeStamp Exchange modification time.
                     * 
                     */
                    std::string GetModTimeStamp() const;

                    /**
                     * 设置Exchange modification time.
                     * @param _modTimeStamp Exchange modification time.
                     * 
                     */
                    void SetModTimeStamp(const std::string& _modTimeStamp);

                    /**
                     * 判断参数 ModTimeStamp 是否已赋值
                     * @return ModTimeStamp 是否已赋值
                     * 
                     */
                    bool ModTimeStampHasBeenSet() const;

                    /**
                     * 获取Input message rate.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MessageRateIn Input message rate.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetMessageRateIn() const;

                    /**
                     * 设置Input message rate.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _messageRateIn Input message rate.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessageRateIn(const double& _messageRateIn);

                    /**
                     * 判断参数 MessageRateIn 是否已赋值
                     * @return MessageRateIn 是否已赋值
                     * 
                     */
                    bool MessageRateInHasBeenSet() const;

                    /**
                     * 获取Indicates the output message rate.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MessageRateOut Indicates the output message rate.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetMessageRateOut() const;

                    /**
                     * 设置Indicates the output message rate.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _messageRateOut Indicates the output message rate.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessageRateOut(const double& _messageRateOut);

                    /**
                     * 判断参数 MessageRateOut 是否已赋值
                     * @return MessageRateOut 是否已赋值
                     * 
                     */
                    bool MessageRateOutHasBeenSet() const;

                    /**
                     * 获取Whether the exchange is a durable one. true: durable; false: non-durable.
                     * @return Durable Whether the exchange is a durable one. true: durable; false: non-durable.
                     * 
                     */
                    bool GetDurable() const;

                    /**
                     * 设置Whether the exchange is a durable one. true: durable; false: non-durable.
                     * @param _durable Whether the exchange is a durable one. true: durable; false: non-durable.
                     * 
                     */
                    void SetDurable(const bool& _durable);

                    /**
                     * 判断参数 Durable 是否已赋值
                     * @return Durable 是否已赋值
                     * 
                     */
                    bool DurableHasBeenSet() const;

                    /**
                     * 获取Whether automatic deletion is set for the exchange. true: automatic deletion set; false: automatic deletion not set.
                     * @return AutoDelete Whether automatic deletion is set for the exchange. true: automatic deletion set; false: automatic deletion not set.
                     * 
                     */
                    bool GetAutoDelete() const;

                    /**
                     * 设置Whether automatic deletion is set for the exchange. true: automatic deletion set; false: automatic deletion not set.
                     * @param _autoDelete Whether automatic deletion is set for the exchange. true: automatic deletion set; false: automatic deletion not set.
                     * 
                     */
                    void SetAutoDelete(const bool& _autoDelete);

                    /**
                     * 判断参数 AutoDelete 是否已赋值
                     * @return AutoDelete 是否已赋值
                     * 
                     */
                    bool AutoDeleteHasBeenSet() const;

                    /**
                     * 获取Whether the exchange is an internal one. true: internal exchange.
                     * @return Internal Whether the exchange is an internal one. true: internal exchange.
                     * 
                     */
                    bool GetInternal() const;

                    /**
                     * 设置Whether the exchange is an internal one. true: internal exchange.
                     * @param _internal Whether the exchange is an internal one. true: internal exchange.
                     * 
                     */
                    void SetInternal(const bool& _internal);

                    /**
                     * 判断参数 Internal 是否已赋值
                     * @return Internal 是否已赋值
                     * 
                     */
                    bool InternalHasBeenSet() const;

                    /**
                     * 获取Instance ID of the exchange.
                     * @return InstanceId Instance ID of the exchange.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID of the exchange.
                     * @param _instanceId Instance ID of the exchange.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Effective policy name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Policy Effective policy name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置Effective policy name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _policy Effective policy name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolicy(const std::string& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取Extended parameters of the key-value object type.
                     * @return Arguments Extended parameters of the key-value object type.
                     * 
                     */
                    std::string GetArguments() const;

                    /**
                     * 设置Extended parameters of the key-value object type.
                     * @param _arguments Extended parameters of the key-value object type.
                     * 
                     */
                    void SetArguments(const std::string& _arguments);

                    /**
                     * 判断参数 Arguments 是否已赋值
                     * @return Arguments 是否已赋值
                     * 
                     */
                    bool ArgumentsHasBeenSet() const;

                    /**
                     * 获取Number of unscheduled delayed messages.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MessagesDelayed Number of unscheduled delayed messages.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMessagesDelayed() const;

                    /**
                     * 设置Number of unscheduled delayed messages.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _messagesDelayed Number of unscheduled delayed messages.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessagesDelayed(const uint64_t& _messagesDelayed);

                    /**
                     * 判断参数 MessagesDelayed 是否已赋值
                     * @return MessagesDelayed 是否已赋值
                     * 
                     */
                    bool MessagesDelayedHasBeenSet() const;

                    /**
                     * 获取Creation time timestamp.
                     * @return CreateTs Creation time timestamp.
                     * 
                     */
                    uint64_t GetCreateTs() const;

                    /**
                     * 设置Creation time timestamp.
                     * @param _createTs Creation time timestamp.
                     * 
                     */
                    void SetCreateTs(const uint64_t& _createTs);

                    /**
                     * 判断参数 CreateTs 是否已赋值
                     * @return CreateTs 是否已赋值
                     * 
                     */
                    bool CreateTsHasBeenSet() const;

                    /**
                     * 获取Modification time timestamp.
                     * @return ModifyTs Modification time timestamp.
                     * 
                     */
                    uint64_t GetModifyTs() const;

                    /**
                     * 设置Modification time timestamp.
                     * @param _modifyTs Modification time timestamp.
                     * 
                     */
                    void SetModifyTs(const uint64_t& _modifyTs);

                    /**
                     * 判断参数 ModifyTs 是否已赋值
                     * @return ModifyTs 是否已赋值
                     * 
                     */
                    bool ModifyTsHasBeenSet() const;

                private:

                    /**
                     * Exchange name.
                     */
                    std::string m_exchangeName;
                    bool m_exchangeNameHasBeenSet;

                    /**
                     * Remarks

Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Exchange type. Valid values: "fanout", "direct", "topic", "headers".
                     */
                    std::string m_exchangeType;
                    bool m_exchangeTypeHasBeenSet;

                    /**
                     * Specifies the Host name of the Virtual switch.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Exchange creator. "system": "created by the system"; "user": "created by a user".
                     */
                    std::string m_exchangeCreator;
                    bool m_exchangeCreatorHasBeenSet;

                    /**
                     * Exchange creation time.
                     */
                    std::string m_createTimeStamp;
                    bool m_createTimeStampHasBeenSet;

                    /**
                     * Exchange modification time.
                     */
                    std::string m_modTimeStamp;
                    bool m_modTimeStampHasBeenSet;

                    /**
                     * Input message rate.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_messageRateIn;
                    bool m_messageRateInHasBeenSet;

                    /**
                     * Indicates the output message rate.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_messageRateOut;
                    bool m_messageRateOutHasBeenSet;

                    /**
                     * Whether the exchange is a durable one. true: durable; false: non-durable.
                     */
                    bool m_durable;
                    bool m_durableHasBeenSet;

                    /**
                     * Whether automatic deletion is set for the exchange. true: automatic deletion set; false: automatic deletion not set.
                     */
                    bool m_autoDelete;
                    bool m_autoDeleteHasBeenSet;

                    /**
                     * Whether the exchange is an internal one. true: internal exchange.
                     */
                    bool m_internal;
                    bool m_internalHasBeenSet;

                    /**
                     * Instance ID of the exchange.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Effective policy name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * Extended parameters of the key-value object type.
                     */
                    std::string m_arguments;
                    bool m_argumentsHasBeenSet;

                    /**
                     * Number of unscheduled delayed messages.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_messagesDelayed;
                    bool m_messagesDelayedHasBeenSet;

                    /**
                     * Creation time timestamp.
                     */
                    uint64_t m_createTs;
                    bool m_createTsHasBeenSet;

                    /**
                     * Modification time timestamp.
                     */
                    uint64_t m_modifyTs;
                    bool m_modifyTsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQEXCHANGELISTINFO_H_
