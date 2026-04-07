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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DELETEINSTANCESDISASTERRECOVERGROUPSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DELETEINSTANCESDISASTERRECOVERGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteInstancesDisasterRecoverGroups request structure.
                */
                class DeleteInstancesDisasterRecoverGroupsRequest : public AbstractModel
                {
                public:
                    DeleteInstancesDisasterRecoverGroupsRequest();
                    ~DeleteInstancesDisasterRecoverGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [`DescribeInstances`](https://www.tencentcloud.com/zh/document/api/213/33258). The maximum number of instances per request is 100.
                     * @return InstanceIds One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [`DescribeInstances`](https://www.tencentcloud.com/zh/document/api/213/33258). The maximum number of instances per request is 100.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [`DescribeInstances`](https://www.tencentcloud.com/zh/document/api/213/33258). The maximum number of instances per request is 100.
                     * @param _instanceIds One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [`DescribeInstances`](https://www.tencentcloud.com/zh/document/api/213/33258). The maximum number of instances per request is 100.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取ID list of placement groups, obtainable via the [DescribeDisasterRecoverGroups](https://www.tencentcloud.com/zh/document/api/213/33261) API. 
                     * @return DisasterRecoverGroupIds ID list of placement groups, obtainable via the [DescribeDisasterRecoverGroups](https://www.tencentcloud.com/zh/document/api/213/33261) API. 
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置ID list of placement groups, obtainable via the [DescribeDisasterRecoverGroups](https://www.tencentcloud.com/zh/document/api/213/33261) API. 
                     * @param _disasterRecoverGroupIds ID list of placement groups, obtainable via the [DescribeDisasterRecoverGroups](https://www.tencentcloud.com/zh/document/api/213/33261) API. 
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                private:

                    /**
                     * One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [`DescribeInstances`](https://www.tencentcloud.com/zh/document/api/213/33258). The maximum number of instances per request is 100.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * ID list of placement groups, obtainable via the [DescribeDisasterRecoverGroups](https://www.tencentcloud.com/zh/document/api/213/33261) API. 
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DELETEINSTANCESDISASTERRECOVERGROUPSREQUEST_H_
