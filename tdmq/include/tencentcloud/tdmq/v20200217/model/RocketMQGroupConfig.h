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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQGROUPCONFIG_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQGROUPCONFIG_H_

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
                * RocketMQ Consumer Group Configuration Information
                */
                class RocketMQGroupConfig : public AbstractModel
                {
                public:
                    RocketMQGroupConfig();
                    ~RocketMQGroupConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Namespace
                     * @return Namespace Namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace
                     * @param _namespace Namespace
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取consumer group name
                     * @return GroupName consumer group name
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置consumer group name
                     * @param _groupName consumer group name
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Broadcast enabled
                     * @return ConsumeBroadcastEnable Broadcast enabled
                     * 
                     */
                    bool GetConsumeBroadcastEnable() const;

                    /**
                     * 设置Broadcast enabled
                     * @param _consumeBroadcastEnable Broadcast enabled
                     * 
                     */
                    void SetConsumeBroadcastEnable(const bool& _consumeBroadcastEnable);

                    /**
                     * 判断参数 ConsumeBroadcastEnable 是否已赋值
                     * @return ConsumeBroadcastEnable 是否已赋值
                     * 
                     */
                    bool ConsumeBroadcastEnableHasBeenSet() const;

                    /**
                     * 获取Whether to enable consumption
                     * @return ConsumeEnable Whether to enable consumption
                     * 
                     */
                    bool GetConsumeEnable() const;

                    /**
                     * 设置Whether to enable consumption
                     * @param _consumeEnable Whether to enable consumption
                     * 
                     */
                    void SetConsumeEnable(const bool& _consumeEnable);

                    /**
                     * 判断参数 ConsumeEnable 是否已赋值
                     * @return ConsumeEnable 是否已赋值
                     * 
                     */
                    bool ConsumeEnableHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
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
                     * 获取Protocol type, support the following enumeration value
TCP;
HTTP;
                     * @return ConsumerGroupType Protocol type, support the following enumeration value
TCP;
HTTP;
                     * 
                     */
                    std::string GetConsumerGroupType() const;

                    /**
                     * 设置Protocol type, support the following enumeration value
TCP;
HTTP;
                     * @param _consumerGroupType Protocol type, support the following enumeration value
TCP;
HTTP;
                     * 
                     */
                    void SetConsumerGroupType(const std::string& _consumerGroupType);

                    /**
                     * 判断参数 ConsumerGroupType 是否已赋值
                     * @return ConsumerGroupType 是否已赋值
                     * 
                     */
                    bool ConsumerGroupTypeHasBeenSet() const;

                private:

                    /**
                     * Namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * consumer group name
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Broadcast enabled
                     */
                    bool m_consumeBroadcastEnable;
                    bool m_consumeBroadcastEnableHasBeenSet;

                    /**
                     * Whether to enable consumption
                     */
                    bool m_consumeEnable;
                    bool m_consumeEnableHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Protocol type, support the following enumeration value
TCP;
HTTP;
                     */
                    std::string m_consumerGroupType;
                    bool m_consumerGroupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQGROUPCONFIG_H_
