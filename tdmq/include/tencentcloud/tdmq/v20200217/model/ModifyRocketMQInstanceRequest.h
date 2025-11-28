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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQINSTANCEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyRocketMQInstance request structure.
                */
                class ModifyRocketMQInstanceRequest : public AbstractModel
                {
                public:
                    ModifyRocketMQInstanceRequest();
                    ~ModifyRocketMQInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Dedicated Instance ID
                     * @return InstanceId Dedicated Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Dedicated Instance ID
                     * @param _instanceId Dedicated Instance ID
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
                     * 获取Instance name
                     * @return Name Instance name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Instance name
                     * @param _name Instance name
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
                     * 获取Instance Remarks
                     * @return Remark Instance Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Instance Remarks
                     * @param _remark Instance Remarks
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
                     * 获取Instance message retention time, in hours
                     * @return MessageRetention Instance message retention time, in hours
                     * 
                     */
                    int64_t GetMessageRetention() const;

                    /**
                     * 设置Instance message retention time, in hours
                     * @param _messageRetention Instance message retention time, in hours
                     * 
                     */
                    void SetMessageRetention(const int64_t& _messageRetention);

                    /**
                     * 判断参数 MessageRetention 是否已赋值
                     * @return MessageRetention 是否已赋值
                     * 
                     */
                    bool MessageRetentionHasBeenSet() const;

                    /**
                     * 获取Whether to enable deletion protection
                     * @return EnableDeletionProtection Whether to enable deletion protection
                     * 
                     */
                    bool GetEnableDeletionProtection() const;

                    /**
                     * 设置Whether to enable deletion protection
                     * @param _enableDeletionProtection Whether to enable deletion protection
                     * 
                     */
                    void SetEnableDeletionProtection(const bool& _enableDeletionProtection);

                    /**
                     * 判断参数 EnableDeletionProtection 是否已赋值
                     * @return EnableDeletionProtection 是否已赋值
                     * 
                     */
                    bool EnableDeletionProtectionHasBeenSet() const;

                    /**
                     * 获取Controls the TPS ratio for producing and consuming messages. Value range: 0–1. Default value: 0.5.
                     * @return SendReceiveRatio Controls the TPS ratio for producing and consuming messages. Value range: 0–1. Default value: 0.5.
                     * 
                     */
                    double GetSendReceiveRatio() const;

                    /**
                     * 设置Controls the TPS ratio for producing and consuming messages. Value range: 0–1. Default value: 0.5.
                     * @param _sendReceiveRatio Controls the TPS ratio for producing and consuming messages. Value range: 0–1. Default value: 0.5.
                     * 
                     */
                    void SetSendReceiveRatio(const double& _sendReceiveRatio);

                    /**
                     * 判断参数 SendReceiveRatio 是否已赋值
                     * @return SendReceiveRatio 是否已赋值
                     * 
                     */
                    bool SendReceiveRatioHasBeenSet() const;

                private:

                    /**
                     * Dedicated Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Instance Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Instance message retention time, in hours
                     */
                    int64_t m_messageRetention;
                    bool m_messageRetentionHasBeenSet;

                    /**
                     * Whether to enable deletion protection
                     */
                    bool m_enableDeletionProtection;
                    bool m_enableDeletionProtectionHasBeenSet;

                    /**
                     * Controls the TPS ratio for producing and consuming messages. Value range: 0–1. Default value: 0.5.
                     */
                    double m_sendReceiveRatio;
                    bool m_sendReceiveRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQINSTANCEREQUEST_H_
