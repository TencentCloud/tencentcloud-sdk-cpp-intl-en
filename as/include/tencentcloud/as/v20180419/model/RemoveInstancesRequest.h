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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_REMOVEINSTANCESREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_REMOVEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * RemoveInstances request structure.
                */
                class RemoveInstancesRequest : public AbstractModel
                {
                public:
                    RemoveInstancesRequest();
                    ~RemoveInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     * @return AutoScalingGroupId Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     * @param _autoScalingGroupId Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取CVM instance ID list. you can obtain available instance ID in the following ways:.
<li>Query instance ID by logging in to the <a href="https://console.cloud.tencent.com/cvm/index">console</a>.</li>.
<li>Specifies the instance ID by calling the api [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and getting `InstanceId` from the return information.</li>.
                     * @return InstanceIds CVM instance ID list. you can obtain available instance ID in the following ways:.
<li>Query instance ID by logging in to the <a href="https://console.cloud.tencent.com/cvm/index">console</a>.</li>.
<li>Specifies the instance ID by calling the api [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and getting `InstanceId` from the return information.</li>.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置CVM instance ID list. you can obtain available instance ID in the following ways:.
<li>Query instance ID by logging in to the <a href="https://console.cloud.tencent.com/cvm/index">console</a>.</li>.
<li>Specifies the instance ID by calling the api [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and getting `InstanceId` from the return information.</li>.
                     * @param _instanceIds CVM instance ID list. you can obtain available instance ID in the following ways:.
<li>Query instance ID by logging in to the <a href="https://console.cloud.tencent.com/cvm/index">console</a>.</li>.
<li>Specifies the instance ID by calling the api [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and getting `InstanceId` from the return information.</li>.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * CVM instance ID list. you can obtain available instance ID in the following ways:.
<li>Query instance ID by logging in to the <a href="https://console.cloud.tencent.com/cvm/index">console</a>.</li>.
<li>Specifies the instance ID by calling the api [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and getting `InstanceId` from the return information.</li>.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_REMOVEINSTANCESREQUEST_H_
