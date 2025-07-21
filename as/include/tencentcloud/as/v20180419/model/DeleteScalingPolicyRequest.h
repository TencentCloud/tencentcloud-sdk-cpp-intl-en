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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DELETESCALINGPOLICYREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DELETESCALINGPOLICYREQUEST_H_

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
                * DeleteScalingPolicy request structure.
                */
                class DeleteScalingPolicyRequest : public AbstractModel
                {
                public:
                    DeleteScalingPolicyRequest();
                    ~DeleteScalingPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The Alarm policy ID to be deleted. you can obtain the Alarm policy ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeScalingPolicies](https://intl.cloud.tencent.com/document/api/377/33178?from_cn_redirect=1) and retrieving the AutoScalingPolicyId from the returned information.
                     * @return AutoScalingPolicyId The Alarm policy ID to be deleted. you can obtain the Alarm policy ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeScalingPolicies](https://intl.cloud.tencent.com/document/api/377/33178?from_cn_redirect=1) and retrieving the AutoScalingPolicyId from the returned information.
                     * 
                     */
                    std::string GetAutoScalingPolicyId() const;

                    /**
                     * 设置The Alarm policy ID to be deleted. you can obtain the Alarm policy ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeScalingPolicies](https://intl.cloud.tencent.com/document/api/377/33178?from_cn_redirect=1) and retrieving the AutoScalingPolicyId from the returned information.
                     * @param _autoScalingPolicyId The Alarm policy ID to be deleted. you can obtain the Alarm policy ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeScalingPolicies](https://intl.cloud.tencent.com/document/api/377/33178?from_cn_redirect=1) and retrieving the AutoScalingPolicyId from the returned information.
                     * 
                     */
                    void SetAutoScalingPolicyId(const std::string& _autoScalingPolicyId);

                    /**
                     * 判断参数 AutoScalingPolicyId 是否已赋值
                     * @return AutoScalingPolicyId 是否已赋值
                     * 
                     */
                    bool AutoScalingPolicyIdHasBeenSet() const;

                private:

                    /**
                     * The Alarm policy ID to be deleted. you can obtain the Alarm policy ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeScalingPolicies](https://intl.cloud.tencent.com/document/api/377/33178?from_cn_redirect=1) and retrieving the AutoScalingPolicyId from the returned information.
                     */
                    std::string m_autoScalingPolicyId;
                    bool m_autoScalingPolicyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DELETESCALINGPOLICYREQUEST_H_
