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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSALERTGROUPSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSALERTGROUPSREQUEST_H_

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
                * DescribePrometheusAlertGroups request structure.
                */
                class DescribePrometheusAlertGroupsRequest : public AbstractModel
                {
                public:
                    DescribePrometheusAlertGroupsRequest();
                    ~DescribePrometheusAlertGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取prometheus instance ID
                     * @return InstanceId prometheus instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置prometheus instance ID
                     * @param _instanceId prometheus instance ID
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
                     * 获取Number of returned results. defaults to 20. maximum value is 100.
                     * @return Limit Number of returned results. defaults to 20. maximum value is 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. defaults to 20. maximum value is 100.
                     * @param _limit Number of returned results. defaults to 20. maximum value is 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. default value: 0.
                     * @return Offset Offset. default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. default value: 0.
                     * @param _offset Offset. default value: 0.
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
                     * 获取Alert group ID, such as alert-xxxx.
List the alert group with the given ID.
                     * @return GroupId Alert group ID, such as alert-xxxx.
List the alert group with the given ID.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Alert group ID, such as alert-xxxx.
List the alert group with the given ID.
                     * @param _groupId Alert group ID, such as alert-xxxx.
List the alert group with the given ID.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Specifies the alert group name.
List alert groups which name contains the given string.
                     * @return GroupName Specifies the alert group name.
List alert groups which name contains the given string.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Specifies the alert group name.
List alert groups which name contains the given string.
                     * @param _groupName Specifies the alert group name.
List alert groups which name contains the given string.
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                private:

                    /**
                     * prometheus instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Number of returned results. defaults to 20. maximum value is 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Alert group ID, such as alert-xxxx.
List the alert group with the given ID.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Specifies the alert group name.
List alert groups which name contains the given string.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSALERTGROUPSREQUEST_H_
