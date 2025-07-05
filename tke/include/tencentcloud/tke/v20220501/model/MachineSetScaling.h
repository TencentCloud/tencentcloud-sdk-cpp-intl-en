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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_MACHINESETSCALING_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_MACHINESETSCALING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * Node pool AS configuration
                */
                class MachineSetScaling : public AbstractModel
                {
                public:
                    MachineSetScaling();
                    ~MachineSetScaling() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node pool minimum replica count
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return MinReplicas Node pool minimum replica count
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetMinReplicas() const;

                    /**
                     * 设置Node pool minimum replica count
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _minReplicas Node pool minimum replica count
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMinReplicas(const int64_t& _minReplicas);

                    /**
                     * 判断参数 MinReplicas 是否已赋值
                     * @return MinReplicas 是否已赋值
                     * 
                     */
                    bool MinReplicasHasBeenSet() const;

                    /**
                     * 获取Node pool maximum replica count
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return MaxReplicas Node pool maximum replica count
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置Node pool maximum replica count
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _maxReplicas Node pool maximum replica count
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMaxReplicas(const int64_t& _maxReplicas);

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     * 
                     */
                    bool MaxReplicasHasBeenSet() const;

                    /**
                     * 获取Node pool scaling policy. ZoneEquality: Scatter across multiple availability zones; ZonePriority: Prioritize preferred availability zones;
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return CreatePolicy Node pool scaling policy. ZoneEquality: Scatter across multiple availability zones; ZonePriority: Prioritize preferred availability zones;
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreatePolicy() const;

                    /**
                     * 设置Node pool scaling policy. ZoneEquality: Scatter across multiple availability zones; ZonePriority: Prioritize preferred availability zones;
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _createPolicy Node pool scaling policy. ZoneEquality: Scatter across multiple availability zones; ZonePriority: Prioritize preferred availability zones;
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreatePolicy(const std::string& _createPolicy);

                    /**
                     * 判断参数 CreatePolicy 是否已赋值
                     * @return CreatePolicy 是否已赋值
                     * 
                     */
                    bool CreatePolicyHasBeenSet() const;

                private:

                    /**
                     * Node pool minimum replica count
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    int64_t m_minReplicas;
                    bool m_minReplicasHasBeenSet;

                    /**
                     * Node pool maximum replica count
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * Node pool scaling policy. ZoneEquality: Scatter across multiple availability zones; ZonePriority: Prioritize preferred availability zones;
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_createPolicy;
                    bool m_createPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_MACHINESETSCALING_H_
