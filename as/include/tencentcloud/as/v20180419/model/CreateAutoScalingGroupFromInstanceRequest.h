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
                     * 获取The instance ID.
                     * @return InstanceId The instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The instance ID.
                     * @param _instanceId The instance ID.
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
                     * 获取The minimum number of instances. Value range: 0-2000.
                     * @return MinSize The minimum number of instances. Value range: 0-2000.
                     * 
                     */
                    int64_t GetMinSize() const;

                    /**
                     * 设置The minimum number of instances. Value range: 0-2000.
                     * @param _minSize The minimum number of instances. Value range: 0-2000.
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
                     * 获取The maximum number of instances. Value range: 0-2000.
                     * @return MaxSize The maximum number of instances. Value range: 0-2000.
                     * 
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置The maximum number of instances. Value range: 0-2000.
                     * @param _maxSize The maximum number of instances. Value range: 0-2000.
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
                     * 获取The desired capacity. Its value must be greater than the minimum and smaller than the maximum.
                     * @return DesiredCapacity The desired capacity. Its value must be greater than the minimum and smaller than the maximum.
                     * 
                     */
                    int64_t GetDesiredCapacity() const;

                    /**
                     * 设置The desired capacity. Its value must be greater than the minimum and smaller than the maximum.
                     * @param _desiredCapacity The desired capacity. Its value must be greater than the minimum and smaller than the maximum.
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
                     * The instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The minimum number of instances. Value range: 0-2000.
                     */
                    int64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * The maximum number of instances. Value range: 0-2000.
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * The desired capacity. Its value must be greater than the minimum and smaller than the maximum.
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
