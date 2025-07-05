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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERASGROUPATTRIBUTE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERASGROUPATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/AutoScalingGroupRange.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Cluster scaling group attributes
                */
                class ClusterAsGroupAttribute : public AbstractModel
                {
                public:
                    ClusterAsGroupAttribute();
                    ~ClusterAsGroupAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Whether it is enabled
                     * @return AutoScalingGroupEnabled Whether it is enabled
                     * 
                     */
                    bool GetAutoScalingGroupEnabled() const;

                    /**
                     * 设置Whether it is enabled
                     * @param _autoScalingGroupEnabled Whether it is enabled
                     * 
                     */
                    void SetAutoScalingGroupEnabled(const bool& _autoScalingGroupEnabled);

                    /**
                     * 判断参数 AutoScalingGroupEnabled 是否已赋值
                     * @return AutoScalingGroupEnabled 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupEnabledHasBeenSet() const;

                    /**
                     * 获取Maximum and minimum number of pods in a scaling group
                     * @return AutoScalingGroupRange Maximum and minimum number of pods in a scaling group
                     * 
                     */
                    AutoScalingGroupRange GetAutoScalingGroupRange() const;

                    /**
                     * 设置Maximum and minimum number of pods in a scaling group
                     * @param _autoScalingGroupRange Maximum and minimum number of pods in a scaling group
                     * 
                     */
                    void SetAutoScalingGroupRange(const AutoScalingGroupRange& _autoScalingGroupRange);

                    /**
                     * 判断参数 AutoScalingGroupRange 是否已赋值
                     * @return AutoScalingGroupRange 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupRangeHasBeenSet() const;

                private:

                    /**
                     * Scaling group ID
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Whether it is enabled
                     */
                    bool m_autoScalingGroupEnabled;
                    bool m_autoScalingGroupEnabledHasBeenSet;

                    /**
                     * Maximum and minimum number of pods in a scaling group
                     */
                    AutoScalingGroupRange m_autoScalingGroupRange;
                    bool m_autoScalingGroupRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERASGROUPATTRIBUTE_H_
