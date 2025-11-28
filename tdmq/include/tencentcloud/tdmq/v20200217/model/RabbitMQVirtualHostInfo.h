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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVIRTUALHOSTINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVIRTUALHOSTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RabbitMQVirtualHostStatistics.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * TDMQ for RabbitMQ vhost details
                */
                class RabbitMQVirtualHostInfo : public AbstractModel
                {
                public:
                    RabbitMQVirtualHostInfo();
                    ~RabbitMQVirtualHostInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster instance ID
                     * @return InstanceId Cluster instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster instance ID
                     * @param _instanceId Cluster instance ID
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
                     * 获取Vhost name
                     * @return VirtualHost Vhost name
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置Vhost name
                     * @param _virtualHost Vhost name
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
                     * 获取Vhost description information.
                     * @return Description Vhost description information.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Vhost description information.
                     * @param _description Vhost description information.
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
                     * 获取Vhost tags.
                     * @return Tags Vhost tags.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Vhost tags.
                     * @param _tags Vhost tags.
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
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取Modification time.
                     * @return ModifyTime Modification time.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time.
                     * @param _modifyTime Modification time.
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
                     * 获取Vhost overview statistics information.
                     * @return VirtualHostStatistics Vhost overview statistics information.
                     * 
                     */
                    RabbitMQVirtualHostStatistics GetVirtualHostStatistics() const;

                    /**
                     * 设置Vhost overview statistics information.
                     * @param _virtualHostStatistics Vhost overview statistics information.
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
                     * 获取Message trace enabling status. true: enabled; false: disabled.
                     * @return TraceFlag Message trace enabling status. true: enabled; false: disabled.
                     * 
                     */
                    bool GetTraceFlag() const;

                    /**
                     * 设置Message trace enabling status. true: enabled; false: disabled.
                     * @param _traceFlag Message trace enabling status. true: enabled; false: disabled.
                     * 
                     */
                    void SetTraceFlag(const bool& _traceFlag);

                    /**
                     * 判断参数 TraceFlag 是否已赋值
                     * @return TraceFlag 是否已赋值
                     * 
                     */
                    bool TraceFlagHasBeenSet() const;

                    /**
                     * 获取Vhost status, which corresponds to status in the native product console. Valid values: running, partial, stopped, and unknown.
                     * @return Status Vhost status, which corresponds to status in the native product console. Valid values: running, partial, stopped, and unknown.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Vhost status, which corresponds to status in the native product console. Valid values: running, partial, stopped, and unknown.
                     * @param _status Vhost status, which corresponds to status in the native product console. Valid values: running, partial, stopped, and unknown.
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
                     * 获取Message backlog count.
                     * @return MessageHeapCount Message backlog count.
                     * 
                     */
                    int64_t GetMessageHeapCount() const;

                    /**
                     * 设置Message backlog count.
                     * @param _messageHeapCount Message backlog count.
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
                     * 获取Message input rate.
                     * @return MessageRateIn Message input rate.
                     * 
                     */
                    double GetMessageRateIn() const;

                    /**
                     * 设置Message input rate.
                     * @param _messageRateIn Message input rate.
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
                     * 获取Message output rate.
                     * @return MessageRateOut Message output rate.
                     * 
                     */
                    double GetMessageRateOut() const;

                    /**
                     * 设置Message output rate.
                     * @param _messageRateOut Message output rate.
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
                     * 获取Whether an image queue policy exists. true: Exists; false: Does not exist.
                     * @return MirrorQueuePolicyFlag Whether an image queue policy exists. true: Exists; false: Does not exist.
                     * 
                     */
                    bool GetMirrorQueuePolicyFlag() const;

                    /**
                     * 设置Whether an image queue policy exists. true: Exists; false: Does not exist.
                     * @param _mirrorQueuePolicyFlag Whether an image queue policy exists. true: Exists; false: Does not exist.
                     * 
                     */
                    void SetMirrorQueuePolicyFlag(const bool& _mirrorQueuePolicyFlag);

                    /**
                     * 判断参数 MirrorQueuePolicyFlag 是否已赋值
                     * @return MirrorQueuePolicyFlag 是否已赋值
                     * 
                     */
                    bool MirrorQueuePolicyFlagHasBeenSet() const;

                    /**
                     * 获取Creation timestamp.
                     * @return CreateTs Creation timestamp.
                     * 
                     */
                    uint64_t GetCreateTs() const;

                    /**
                     * 设置Creation timestamp.
                     * @param _createTs Creation timestamp.
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
                     * 获取Modification timestamp.
                     * @return ModifyTs Modification timestamp.
                     * 
                     */
                    uint64_t GetModifyTs() const;

                    /**
                     * 设置Modification timestamp.
                     * @param _modifyTs Modification timestamp.
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
                     * Cluster instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Vhost name
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Vhost description information.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Vhost tags.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Vhost overview statistics information.
                     */
                    RabbitMQVirtualHostStatistics m_virtualHostStatistics;
                    bool m_virtualHostStatisticsHasBeenSet;

                    /**
                     * Message trace enabling status. true: enabled; false: disabled.
                     */
                    bool m_traceFlag;
                    bool m_traceFlagHasBeenSet;

                    /**
                     * Vhost status, which corresponds to status in the native product console. Valid values: running, partial, stopped, and unknown.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Message backlog count.
                     */
                    int64_t m_messageHeapCount;
                    bool m_messageHeapCountHasBeenSet;

                    /**
                     * Message input rate.
                     */
                    double m_messageRateIn;
                    bool m_messageRateInHasBeenSet;

                    /**
                     * Message output rate.
                     */
                    double m_messageRateOut;
                    bool m_messageRateOutHasBeenSet;

                    /**
                     * Whether an image queue policy exists. true: Exists; false: Does not exist.
                     */
                    bool m_mirrorQueuePolicyFlag;
                    bool m_mirrorQueuePolicyFlagHasBeenSet;

                    /**
                     * Creation timestamp.
                     */
                    uint64_t m_createTs;
                    bool m_createTsHasBeenSet;

                    /**
                     * Modification timestamp.
                     */
                    uint64_t m_modifyTs;
                    bool m_modifyTsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVIRTUALHOSTINFO_H_
