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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEDBSECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEDBSECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeDBSecurityGroups request structure.
                */
                class DescribeDBSecurityGroupsRequest : public AbstractModel
                {
                public:
                    DescribeDBSecurityGroupsRequest();
                    ~DescribeDBSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies that the instance ID must be provided by selecting either InstanceId or InstanceGroupId.
                     * @return InstanceId Specifies that the instance ID must be provided by selecting either InstanceId or InstanceGroupId.
                     * @deprecated
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Specifies that the instance ID must be provided by selecting either InstanceId or InstanceGroupId.
                     * @param _instanceId Specifies that the instance ID must be provided by selecting either InstanceId or InstanceGroupId.
                     * @deprecated
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * @deprecated
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Specifies that the instance group ID must be provided by selecting either InstanceId or InstanceGroupId.
                     * @return InstanceGroupId Specifies that the instance group ID must be provided by selecting either InstanceId or InstanceGroupId.
                     * 
                     */
                    std::string GetInstanceGroupId() const;

                    /**
                     * 设置Specifies that the instance group ID must be provided by selecting either InstanceId or InstanceGroupId.
                     * @param _instanceGroupId Specifies that the instance group ID must be provided by selecting either InstanceId or InstanceGroupId.
                     * 
                     */
                    void SetInstanceGroupId(const std::string& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     * 
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                private:

                    /**
                     * Specifies that the instance ID must be provided by selecting either InstanceId or InstanceGroupId.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies that the instance group ID must be provided by selecting either InstanceId or InstanceGroupId.
                     */
                    std::string m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEDBSECURITYGROUPSREQUEST_H_
