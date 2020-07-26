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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_INSTANCEGROUP_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_INSTANCEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * InstanceGroup in Alarms returned by the DescribeBasicAlarmList API
                */
                class InstanceGroup : public AbstractModel
                {
                public:
                    InstanceGroup();
                    ~InstanceGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance group ID.
Note: This field may return null, indicating that no valid value was found.
                     * @return InstanceGroupId Instance group ID.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置Instance group ID.
Note: This field may return null, indicating that no valid value was found.
                     * @param InstanceGroupId Instance group ID.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetInstanceGroupId(const int64_t& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取Instance group name.
Note: This field may return null, indicating that no valid value was found.
                     * @return InstanceGroupName Instance group name.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetInstanceGroupName() const;

                    /**
                     * 设置Instance group name.
Note: This field may return null, indicating that no valid value was found.
                     * @param InstanceGroupName Instance group name.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetInstanceGroupName(const std::string& _instanceGroupName);

                    /**
                     * 判断参数 InstanceGroupName 是否已赋值
                     * @return InstanceGroupName 是否已赋值
                     */
                    bool InstanceGroupNameHasBeenSet() const;

                private:

                    /**
                     * Instance group ID.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * Instance group name.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_instanceGroupName;
                    bool m_instanceGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_INSTANCEGROUP_H_
