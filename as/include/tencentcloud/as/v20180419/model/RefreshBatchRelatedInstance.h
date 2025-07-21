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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_REFRESHBATCHRELATEDINSTANCE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_REFRESHBATCHRELATEDINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Refresh batch associated instances, including the refresh activity status of individual instances and related scaling activity information.
                */
                class RefreshBatchRelatedInstance : public AbstractModel
                {
                public:
                    RefreshBatchRelatedInstance();
                    ~RefreshBatchRelatedInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Refresh instance status. if the instance is removed or terminated during refresh, the status will be updated to NOT_FOUND. valid values: <li>WAITING: pending refresh;</li> <li>INIT: initializing;</li> <li>RUNNING: refreshing;</li> <li>FAILED: refresh FAILED;</li> <li>CANCELLED: CANCELLED;</li> <li>SUCCESSFUL: refresh SUCCESSFUL;</li> <li>NOT_FOUND: instance does NOT exist.</li>.
                     * @return InstanceStatus Refresh instance status. if the instance is removed or terminated during refresh, the status will be updated to NOT_FOUND. valid values: <li>WAITING: pending refresh;</li> <li>INIT: initializing;</li> <li>RUNNING: refreshing;</li> <li>FAILED: refresh FAILED;</li> <li>CANCELLED: CANCELLED;</li> <li>SUCCESSFUL: refresh SUCCESSFUL;</li> <li>NOT_FOUND: instance does NOT exist.</li>.
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置Refresh instance status. if the instance is removed or terminated during refresh, the status will be updated to NOT_FOUND. valid values: <li>WAITING: pending refresh;</li> <li>INIT: initializing;</li> <li>RUNNING: refreshing;</li> <li>FAILED: refresh FAILED;</li> <li>CANCELLED: CANCELLED;</li> <li>SUCCESSFUL: refresh SUCCESSFUL;</li> <li>NOT_FOUND: instance does NOT exist.</li>.
                     * @param _instanceStatus Refresh instance status. if the instance is removed or terminated during refresh, the status will be updated to NOT_FOUND. valid values: <li>WAITING: pending refresh;</li> <li>INIT: initializing;</li> <li>RUNNING: refreshing;</li> <li>FAILED: refresh FAILED;</li> <li>CANCELLED: CANCELLED;</li> <li>SUCCESSFUL: refresh SUCCESSFUL;</li> <li>NOT_FOUND: instance does NOT exist.</li>.
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取The most recent scaling activity ID during instance refresh can be queried via the DescribeAutoScalingActivities api.
Please note that scaling activities differ from instance refresh activities; a single instance refresh activity may involve multiple scaling activities.
                     * @return LastActivityId The most recent scaling activity ID during instance refresh can be queried via the DescribeAutoScalingActivities api.
Please note that scaling activities differ from instance refresh activities; a single instance refresh activity may involve multiple scaling activities.
                     * 
                     */
                    std::string GetLastActivityId() const;

                    /**
                     * 设置The most recent scaling activity ID during instance refresh can be queried via the DescribeAutoScalingActivities api.
Please note that scaling activities differ from instance refresh activities; a single instance refresh activity may involve multiple scaling activities.
                     * @param _lastActivityId The most recent scaling activity ID during instance refresh can be queried via the DescribeAutoScalingActivities api.
Please note that scaling activities differ from instance refresh activities; a single instance refresh activity may involve multiple scaling activities.
                     * 
                     */
                    void SetLastActivityId(const std::string& _lastActivityId);

                    /**
                     * 判断参数 LastActivityId 是否已赋值
                     * @return LastActivityId 是否已赋值
                     * 
                     */
                    bool LastActivityIdHasBeenSet() const;

                    /**
                     * 获取Describes the instance refresh status.
                     * @return InstanceStatusMessage Describes the instance refresh status.
                     * 
                     */
                    std::string GetInstanceStatusMessage() const;

                    /**
                     * 设置Describes the instance refresh status.
                     * @param _instanceStatusMessage Describes the instance refresh status.
                     * 
                     */
                    void SetInstanceStatusMessage(const std::string& _instanceStatusMessage);

                    /**
                     * 判断参数 InstanceStatusMessage 是否已赋值
                     * @return InstanceStatusMessage 是否已赋值
                     * 
                     */
                    bool InstanceStatusMessageHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Refresh instance status. if the instance is removed or terminated during refresh, the status will be updated to NOT_FOUND. valid values: <li>WAITING: pending refresh;</li> <li>INIT: initializing;</li> <li>RUNNING: refreshing;</li> <li>FAILED: refresh FAILED;</li> <li>CANCELLED: CANCELLED;</li> <li>SUCCESSFUL: refresh SUCCESSFUL;</li> <li>NOT_FOUND: instance does NOT exist.</li>.
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * The most recent scaling activity ID during instance refresh can be queried via the DescribeAutoScalingActivities api.
Please note that scaling activities differ from instance refresh activities; a single instance refresh activity may involve multiple scaling activities.
                     */
                    std::string m_lastActivityId;
                    bool m_lastActivityIdHasBeenSet;

                    /**
                     * Describes the instance refresh status.
                     */
                    std::string m_instanceStatusMessage;
                    bool m_instanceStatusMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_REFRESHBATCHRELATEDINSTANCE_H_
