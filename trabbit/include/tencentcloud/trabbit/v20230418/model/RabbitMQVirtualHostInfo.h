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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQVIRTUALHOSTINFO_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQVIRTUALHOSTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trabbit/v20230418/model/RabbitMQVirtualHostStatistics.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * RabbitMQ vhost detail.
                */
                class RabbitMQVirtualHostInfo : public AbstractModel
                {
                public:
                    RabbitMQVirtualHostInfo();
                    ~RabbitMQVirtualHostInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取instance ID
                     * @return InstanceId instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置instance ID
                     * @param _instanceId instance ID
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
                     * 获取Vhost name.
                     * @return VirtualHost Vhost name.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置Vhost name.
                     * @param _virtualHost Vhost name.
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
                     * 获取Specifies the description information of the vhost.
                     * @return Description Specifies the description information of the vhost.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Specifies the description information of the vhost.
                     * @param _description Specifies the description information of the vhost.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Specifies the Tag of the vhost.
                     * @return Tags Specifies the Tag of the vhost.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Specifies the Tag of the vhost.
                     * @param _tags Specifies the Tag of the vhost.
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Modification time
                     * @return ModifyTime Modification time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time
                     * @param _modifyTime Modification time
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Specifies the overview statistics information of the vhost.
                     * @return VirtualHostStatistics Specifies the overview statistics information of the vhost.
                     * 
                     */
                    RabbitMQVirtualHostStatistics GetVirtualHostStatistics() const;

                    /**
                     * 设置Specifies the overview statistics information of the vhost.
                     * @param _virtualHostStatistics Specifies the overview statistics information of the vhost.
                     * 
                     */
                    void SetVirtualHostStatistics(const RabbitMQVirtualHostStatistics& _virtualHostStatistics);

                    /**
                     * 判断参数 VirtualHostStatistics 是否已赋值
                     * @return VirtualHostStatistics 是否已赋值
                     * 
                     */
                    bool VirtualHostStatisticsHasBeenSet() const;

                    /**
                     * 获取vhost status. specifies the status that corresponds to the native console and can be running, partial, stopped, or unknown.
                     * @return Status vhost status. specifies the status that corresponds to the native console and can be running, partial, stopped, or unknown.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置vhost status. specifies the status that corresponds to the native console and can be running, partial, stopped, or unknown.
                     * @param _status vhost status. specifies the status that corresponds to the native console and can be running, partial, stopped, or unknown.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Specifies the number of message backlogs.
                     * @return MessageHeapCount Specifies the number of message backlogs.
                     * 
                     */
                    int64_t GetMessageHeapCount() const;

                    /**
                     * 设置Specifies the number of message backlogs.
                     * @param _messageHeapCount Specifies the number of message backlogs.
                     * 
                     */
                    void SetMessageHeapCount(const int64_t& _messageHeapCount);

                    /**
                     * 判断参数 MessageHeapCount 是否已赋值
                     * @return MessageHeapCount 是否已赋值
                     * 
                     */
                    bool MessageHeapCountHasBeenSet() const;

                    /**
                     * 获取Input message rate.
                     * @return MessageRateIn Input message rate.
                     * 
                     */
                    double GetMessageRateIn() const;

                    /**
                     * 设置Input message rate.
                     * @param _messageRateIn Input message rate.
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
                     * 获取Output message rate.
                     * @return MessageRateOut Output message rate.
                     * 
                     */
                    double GetMessageRateOut() const;

                    /**
                     * 设置Output message rate.
                     * @param _messageRateOut Output message rate.
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
                     * 获取Specifies whether a mirrored queue policy exists. true indicates existence, and false indicates non-existence.
                     * @return MirrorQueuePolicyFlag Specifies whether a mirrored queue policy exists. true indicates existence, and false indicates non-existence.
                     * 
                     */
                    bool GetMirrorQueuePolicyFlag() const;

                    /**
                     * 设置Specifies whether a mirrored queue policy exists. true indicates existence, and false indicates non-existence.
                     * @param _mirrorQueuePolicyFlag Specifies whether a mirrored queue policy exists. true indicates existence, and false indicates non-existence.
                     * 
                     */
                    void SetMirrorQueuePolicyFlag(const bool& _mirrorQueuePolicyFlag);

                    /**
                     * 判断参数 MirrorQueuePolicyFlag 是否已赋值
                     * @return MirrorQueuePolicyFlag 是否已赋值
                     * 
                     */
                    bool MirrorQueuePolicyFlagHasBeenSet() const;

                private:

                    /**
                     * instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Vhost name.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Specifies the description information of the vhost.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Specifies the Tag of the vhost.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Specifies the overview statistics information of the vhost.
                     */
                    RabbitMQVirtualHostStatistics m_virtualHostStatistics;
                    bool m_virtualHostStatisticsHasBeenSet;

                    /**
                     * vhost status. specifies the status that corresponds to the native console and can be running, partial, stopped, or unknown.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Specifies the number of message backlogs.
                     */
                    int64_t m_messageHeapCount;
                    bool m_messageHeapCountHasBeenSet;

                    /**
                     * Input message rate.
                     */
                    double m_messageRateIn;
                    bool m_messageRateInHasBeenSet;

                    /**
                     * Output message rate.
                     */
                    double m_messageRateOut;
                    bool m_messageRateOutHasBeenSet;

                    /**
                     * Specifies whether a mirrored queue policy exists. true indicates existence, and false indicates non-existence.
                     */
                    bool m_mirrorQueuePolicyFlag;
                    bool m_mirrorQueuePolicyFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQVIRTUALHOSTINFO_H_
