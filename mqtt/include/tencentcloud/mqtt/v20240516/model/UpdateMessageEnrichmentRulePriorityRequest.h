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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_UPDATEMESSAGEENRICHMENTRULEPRIORITYREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_UPDATEMESSAGEENRICHMENTRULEPRIORITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/MessageEnrichmentRulePriority.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * UpdateMessageEnrichmentRulePriority request structure.
                */
                class UpdateMessageEnrichmentRulePriorityRequest : public AbstractModel
                {
                public:
                    UpdateMessageEnrichmentRulePriorityRequest();
                    ~UpdateMessageEnrichmentRulePriorityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * @return InstanceId tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * @param _instanceId tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
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
                     * 获取Policy ID and priority.
                     * @return Priorities Policy ID and priority.
                     * 
                     */
                    std::vector<MessageEnrichmentRulePriority> GetPriorities() const;

                    /**
                     * 设置Policy ID and priority.
                     * @param _priorities Policy ID and priority.
                     * 
                     */
                    void SetPriorities(const std::vector<MessageEnrichmentRulePriority>& _priorities);

                    /**
                     * 判断参数 Priorities 是否已赋值
                     * @return Priorities 是否已赋值
                     * 
                     */
                    bool PrioritiesHasBeenSet() const;

                private:

                    /**
                     * tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Policy ID and priority.
                     */
                    std::vector<MessageEnrichmentRulePriority> m_priorities;
                    bool m_prioritiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_UPDATEMESSAGEENRICHMENTRULEPRIORITYREQUEST_H_
