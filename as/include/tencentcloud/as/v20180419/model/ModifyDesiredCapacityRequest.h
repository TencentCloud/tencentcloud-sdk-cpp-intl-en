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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_MODIFYDESIREDCAPACITYREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_MODIFYDESIREDCAPACITYREQUEST_H_

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
                * ModifyDesiredCapacity request structure.
                */
                class ModifyDesiredCapacityRequest : public AbstractModel
                {
                public:
                    ModifyDesiredCapacityRequest();
                    ~ModifyDesiredCapacityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Auto scaling group ID
                     * @return AutoScalingGroupId Auto scaling group ID
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Auto scaling group ID
                     * @param AutoScalingGroupId Auto scaling group ID
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取Desired capacity
                     * @return DesiredCapacity Desired capacity
                     */
                    uint64_t GetDesiredCapacity() const;

                    /**
                     * 设置Desired capacity
                     * @param DesiredCapacity Desired capacity
                     */
                    void SetDesiredCapacity(const uint64_t& _desiredCapacity);

                    /**
                     * 判断参数 DesiredCapacity 是否已赋值
                     * @return DesiredCapacity 是否已赋值
                     */
                    bool DesiredCapacityHasBeenSet() const;

                    /**
                     * 获取Minimum number of instances. Value range: 0-2000.
                     * @return MinSize Minimum number of instances. Value range: 0-2000.
                     */
                    uint64_t GetMinSize() const;

                    /**
                     * 设置Minimum number of instances. Value range: 0-2000.
                     * @param MinSize Minimum number of instances. Value range: 0-2000.
                     */
                    void SetMinSize(const uint64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取Maximum number of instances. Value range: 0-2000.
                     * @return MaxSize Maximum number of instances. Value range: 0-2000.
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置Maximum number of instances. Value range: 0-2000.
                     * @param MaxSize Maximum number of instances. Value range: 0-2000.
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     */
                    bool MaxSizeHasBeenSet() const;

                private:

                    /**
                     * Auto scaling group ID
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Desired capacity
                     */
                    uint64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                    /**
                     * Minimum number of instances. Value range: 0-2000.
                     */
                    uint64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * Maximum number of instances. Value range: 0-2000.
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_MODIFYDESIREDCAPACITYREQUEST_H_
