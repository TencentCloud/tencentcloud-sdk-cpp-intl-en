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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_SCALEININSTANCESREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_SCALEININSTANCESREQUEST_H_

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
                * ScaleInInstances request structure.
                */
                class ScaleInInstancesRequest : public AbstractModel
                {
                public:
                    ScaleInInstancesRequest();
                    ~ScaleInInstancesRequest() = default;
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
                     * 获取Number of resource instances to scale in. this parameter has a static value range of [1,2000] and must not be larger than the difference between the desired number and the minimum value. for example, if the scaling group desired number is 100 and the minimum value is 20, the permissible range is [1,80].
                     * @return ScaleInNumber Number of resource instances to scale in. this parameter has a static value range of [1,2000] and must not be larger than the difference between the desired number and the minimum value. for example, if the scaling group desired number is 100 and the minimum value is 20, the permissible range is [1,80].
                     * 
                     */
                    uint64_t GetScaleInNumber() const;

                    /**
                     * 设置Number of resource instances to scale in. this parameter has a static value range of [1,2000] and must not be larger than the difference between the desired number and the minimum value. for example, if the scaling group desired number is 100 and the minimum value is 20, the permissible range is [1,80].
                     * @param _scaleInNumber Number of resource instances to scale in. this parameter has a static value range of [1,2000] and must not be larger than the difference between the desired number and the minimum value. for example, if the scaling group desired number is 100 and the minimum value is 20, the permissible range is [1,80].
                     * 
                     */
                    void SetScaleInNumber(const uint64_t& _scaleInNumber);

                    /**
                     * 判断参数 ScaleInNumber 是否已赋值
                     * @return ScaleInNumber 是否已赋值
                     * 
                     */
                    bool ScaleInNumberHasBeenSet() const;

                private:

                    /**
                     * Scaling group ID. obtain available scaling group ids in the following ways:.
<li>Query the scaling group ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group).</li>.
<li>Specifies the scaling group ID obtained by calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.</li>.
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Number of resource instances to scale in. this parameter has a static value range of [1,2000] and must not be larger than the difference between the desired number and the minimum value. for example, if the scaling group desired number is 100 and the minimum value is 20, the permissible range is [1,80].
                     */
                    uint64_t m_scaleInNumber;
                    bool m_scaleInNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SCALEININSTANCESREQUEST_H_
