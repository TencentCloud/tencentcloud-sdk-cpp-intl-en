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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_CREATEAUTOSCALINGGROUPFROMINSTANCEREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_CREATEAUTOSCALINGGROUPFROMINSTANCEREQUEST_H_

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
                * CreateAutoScalingGroupFromInstance request structure.
                */
                class CreateAutoScalingGroupFromInstanceRequest : public AbstractModel
                {
                public:
                    CreateAutoScalingGroupFromInstanceRequest();
                    ~CreateAutoScalingGroupFromInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The scaling group name. It must be unique under your account. The name can only contain letters, numbers, underscore, hyphen “-” and periods. It cannot exceed 55 bytes.
                     * @return AutoScalingGroupName The scaling group name. It must be unique under your account. The name can only contain letters, numbers, underscore, hyphen “-” and periods. It cannot exceed 55 bytes.
                     * 
                     */
                    std::string GetAutoScalingGroupName() const;

                    /**
                     * 设置The scaling group name. It must be unique under your account. The name can only contain letters, numbers, underscore, hyphen “-” and periods. It cannot exceed 55 bytes.
                     * @param _autoScalingGroupName The scaling group name. It must be unique under your account. The name can only contain letters, numbers, underscore, hyphen “-” and periods. It cannot exceed 55 bytes.
                     * 
                     */
                    void SetAutoScalingGroupName(const std::string& _autoScalingGroupName);

                    /**
                     * 判断参数 AutoScalingGroupName 是否已赋值
                     * @return AutoScalingGroupName 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupNameHasBeenSet() const;

                    /**
                     * 获取Instance ID. you can get the instance ID by logging in to the [console](https://console.cloud.tencent.com/cvm/index) or making an api call to [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and retrieving the `InstanceId` from the returned information.
                     * @return InstanceId Instance ID. you can get the instance ID by logging in to the [console](https://console.cloud.tencent.com/cvm/index) or making an api call to [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and retrieving the `InstanceId` from the returned information.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. you can get the instance ID by logging in to the [console](https://console.cloud.tencent.com/cvm/index) or making an api call to [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and retrieving the `InstanceId` from the returned information.
                     * @param _instanceId Instance ID. you can get the instance ID by logging in to the [console](https://console.cloud.tencent.com/cvm/index) or making an api call to [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and retrieving the `InstanceId` from the returned information.
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
                     * 获取Minimum number of instances. value range: [0,2000]. to meet MaxSize >= DesiredCapacity >= MinSize at the same time.
                     * @return MinSize Minimum number of instances. value range: [0,2000]. to meet MaxSize >= DesiredCapacity >= MinSize at the same time.
                     * 
                     */
                    int64_t GetMinSize() const;

                    /**
                     * 设置Minimum number of instances. value range: [0,2000]. to meet MaxSize >= DesiredCapacity >= MinSize at the same time.
                     * @param _minSize Minimum number of instances. value range: [0,2000]. to meet MaxSize >= DesiredCapacity >= MinSize at the same time.
                     * 
                     */
                    void SetMinSize(const int64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     * 
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取Maximum instance count. value range [0,2000]. to meet MaxSize >= DesiredCapacity >= MinSize.
                     * @return MaxSize Maximum instance count. value range [0,2000]. to meet MaxSize >= DesiredCapacity >= MinSize.
                     * 
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置Maximum instance count. value range [0,2000]. to meet MaxSize >= DesiredCapacity >= MinSize.
                     * @param _maxSize Maximum instance count. value range [0,2000]. to meet MaxSize >= DesiredCapacity >= MinSize.
                     * 
                     */
                    void SetMaxSize(const int64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取Expected number of instances, value ranges from 0 to 2000, default value equals current MinSize, to meet MaxSize >= DesiredCapacity >= MinSize.
                     * @return DesiredCapacity Expected number of instances, value ranges from 0 to 2000, default value equals current MinSize, to meet MaxSize >= DesiredCapacity >= MinSize.
                     * 
                     */
                    int64_t GetDesiredCapacity() const;

                    /**
                     * 设置Expected number of instances, value ranges from 0 to 2000, default value equals current MinSize, to meet MaxSize >= DesiredCapacity >= MinSize.
                     * @param _desiredCapacity Expected number of instances, value ranges from 0 to 2000, default value equals current MinSize, to meet MaxSize >= DesiredCapacity >= MinSize.
                     * 
                     */
                    void SetDesiredCapacity(const int64_t& _desiredCapacity);

                    /**
                     * 判断参数 DesiredCapacity 是否已赋值
                     * @return DesiredCapacity 是否已赋值
                     * 
                     */
                    bool DesiredCapacityHasBeenSet() const;

                    /**
                     * 获取Whether to inherit the instance tag. Default value: False
                     * @return InheritInstanceTag Whether to inherit the instance tag. Default value: False
                     * 
                     */
                    bool GetInheritInstanceTag() const;

                    /**
                     * 设置Whether to inherit the instance tag. Default value: False
                     * @param _inheritInstanceTag Whether to inherit the instance tag. Default value: False
                     * 
                     */
                    void SetInheritInstanceTag(const bool& _inheritInstanceTag);

                    /**
                     * 判断参数 InheritInstanceTag 是否已赋值
                     * @return InheritInstanceTag 是否已赋值
                     * 
                     */
                    bool InheritInstanceTagHasBeenSet() const;

                private:

                    /**
                     * The scaling group name. It must be unique under your account. The name can only contain letters, numbers, underscore, hyphen “-” and periods. It cannot exceed 55 bytes.
                     */
                    std::string m_autoScalingGroupName;
                    bool m_autoScalingGroupNameHasBeenSet;

                    /**
                     * Instance ID. you can get the instance ID by logging in to the [console](https://console.cloud.tencent.com/cvm/index) or making an api call to [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and retrieving the `InstanceId` from the returned information.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Minimum number of instances. value range: [0,2000]. to meet MaxSize >= DesiredCapacity >= MinSize at the same time.
                     */
                    int64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * Maximum instance count. value range [0,2000]. to meet MaxSize >= DesiredCapacity >= MinSize.
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * Expected number of instances, value ranges from 0 to 2000, default value equals current MinSize, to meet MaxSize >= DesiredCapacity >= MinSize.
                     */
                    int64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                    /**
                     * Whether to inherit the instance tag. Default value: False
                     */
                    bool m_inheritInstanceTag;
                    bool m_inheritInstanceTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CREATEAUTOSCALINGGROUPFROMINSTANCEREQUEST_H_
