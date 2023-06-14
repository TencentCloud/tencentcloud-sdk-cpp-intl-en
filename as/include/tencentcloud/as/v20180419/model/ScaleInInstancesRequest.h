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
                     * 获取Scaling group ID
                     * @return AutoScalingGroupId Scaling group ID
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Scaling group ID
                     * @param _autoScalingGroupId Scaling group ID
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
                     * 获取Number of instances to be reduced
                     * @return ScaleInNumber Number of instances to be reduced
                     * 
                     */
                    uint64_t GetScaleInNumber() const;

                    /**
                     * 设置Number of instances to be reduced
                     * @param _scaleInNumber Number of instances to be reduced
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
                     * Scaling group ID
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Number of instances to be reduced
                     */
                    uint64_t m_scaleInNumber;
                    bool m_scaleInNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SCALEININSTANCESREQUEST_H_
