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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSALERTGROUPSTATEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSALERTGROUPSTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * UpdatePrometheusAlertGroupState request structure.
                */
                class UpdatePrometheusAlertGroupStateRequest : public AbstractModel
                {
                public:
                    UpdatePrometheusAlertGroupStateRequest();
                    ~UpdatePrometheusAlertGroupStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TMP instance ID
                     * @return InstanceId TMP instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TMP instance ID
                     * @param _instanceId TMP instance ID
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
                     * 获取Alarm group ID list, such as alert-xxxx.
                     * @return GroupIds Alarm group ID list, such as alert-xxxx.
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置Alarm group ID list, such as alert-xxxx.
                     * @param _groupIds Alarm group ID list, such as alert-xxxx.
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取Describes the group status of the alarm.
2 - enable.
3 - disabled.
                     * @return GroupState Describes the group status of the alarm.
2 - enable.
3 - disabled.
                     * 
                     */
                    int64_t GetGroupState() const;

                    /**
                     * 设置Describes the group status of the alarm.
2 - enable.
3 - disabled.
                     * @param _groupState Describes the group status of the alarm.
2 - enable.
3 - disabled.
                     * 
                     */
                    void SetGroupState(const int64_t& _groupState);

                    /**
                     * 判断参数 GroupState 是否已赋值
                     * @return GroupState 是否已赋值
                     * 
                     */
                    bool GroupStateHasBeenSet() const;

                private:

                    /**
                     * TMP instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Alarm group ID list, such as alert-xxxx.
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * Describes the group status of the alarm.
2 - enable.
3 - disabled.
                     */
                    int64_t m_groupState;
                    bool m_groupStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSALERTGROUPSTATEREQUEST_H_
