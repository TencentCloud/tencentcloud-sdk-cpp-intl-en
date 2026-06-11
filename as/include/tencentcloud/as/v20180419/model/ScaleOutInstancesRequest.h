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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_SCALEOUTINSTANCESREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_SCALEOUTINSTANCESREQUEST_H_

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
                * ScaleOutInstances request structure.
                */
                class ScaleOutInstancesRequest : public AbstractModel
                {
                public:
                    ScaleOutInstancesRequest();
                    ~ScaleOutInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Specifies the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Obtain the scaling group ID by calling the api [DescribeAutoScalingGroups](https://www.tencentcloud.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.</li>.
                     * @return AutoScalingGroupId Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Specifies the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Obtain the scaling group ID by calling the api [DescribeAutoScalingGroups](https://www.tencentcloud.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.</li>.
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Specifies the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Obtain the scaling group ID by calling the api [DescribeAutoScalingGroups](https://www.tencentcloud.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.</li>.
                     * @param _autoScalingGroupId Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Specifies the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Obtain the scaling group ID by calling the api [DescribeAutoScalingGroups](https://www.tencentcloud.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.</li>.
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
                     * 获取Number of resource instances to scale out. the static value range of this parameter is [1,2000]. this parameter must not be larger than the difference between the expected number and the maximum value. for example, if the expected number of the scaling group is 20 and the maximum value is 100, the valid values are [1,80].
                     * @return ScaleOutNumber Number of resource instances to scale out. the static value range of this parameter is [1,2000]. this parameter must not be larger than the difference between the expected number and the maximum value. for example, if the expected number of the scaling group is 20 and the maximum value is 100, the valid values are [1,80].
                     * 
                     */
                    uint64_t GetScaleOutNumber() const;

                    /**
                     * 设置Number of resource instances to scale out. the static value range of this parameter is [1,2000]. this parameter must not be larger than the difference between the expected number and the maximum value. for example, if the expected number of the scaling group is 20 and the maximum value is 100, the valid values are [1,80].
                     * @param _scaleOutNumber Number of resource instances to scale out. the static value range of this parameter is [1,2000]. this parameter must not be larger than the difference between the expected number and the maximum value. for example, if the expected number of the scaling group is 20 and the maximum value is 100, the valid values are [1,80].
                     * 
                     */
                    void SetScaleOutNumber(const uint64_t& _scaleOutNumber);

                    /**
                     * 判断参数 ScaleOutNumber 是否已赋值
                     * @return ScaleOutNumber 是否已赋值
                     * 
                     */
                    bool ScaleOutNumberHasBeenSet() const;

                private:

                    /**
                     * Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Specifies the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Obtain the scaling group ID by calling the api [DescribeAutoScalingGroups](https://www.tencentcloud.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.</li>.
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Number of resource instances to scale out. the static value range of this parameter is [1,2000]. this parameter must not be larger than the difference between the expected number and the maximum value. for example, if the expected number of the scaling group is 20 and the maximum value is 100, the valid values are [1,80].
                     */
                    uint64_t m_scaleOutNumber;
                    bool m_scaleOutNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SCALEOUTINSTANCESREQUEST_H_
