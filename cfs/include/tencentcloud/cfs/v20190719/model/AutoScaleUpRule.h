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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_AUTOSCALEUPRULE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_AUTOSCALEUPRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Auto scale-out rule.
                */
                class AutoScaleUpRule : public AbstractModel
                {
                public:
                    AutoScaleUpRule();
                    ~AutoScaleUpRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enable auto scale-out policy, disable.
                     * @return Status Enable auto scale-out policy, disable.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Enable auto scale-out policy, disable.
                     * @param _status Enable auto scale-out policy, disable.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Cluster usage percentage. start expansion when reaching this value. value range: [10-90].
                     * @return ScaleThreshold Cluster usage percentage. start expansion when reaching this value. value range: [10-90].
                     * 
                     */
                    uint64_t GetScaleThreshold() const;

                    /**
                     * 设置Cluster usage percentage. start expansion when reaching this value. value range: [10-90].
                     * @param _scaleThreshold Cluster usage percentage. start expansion when reaching this value. value range: [10-90].
                     * 
                     */
                    void SetScaleThreshold(const uint64_t& _scaleThreshold);

                    /**
                     * 判断参数 ScaleThreshold 是否已赋值
                     * @return ScaleThreshold 是否已赋值
                     * 
                     */
                    bool ScaleThresholdHasBeenSet() const;

                    /**
                     * 获取Used capacity to total clusters ratio after expansion. value range: [10-90].
                     * @return TargetThreshold Used capacity to total clusters ratio after expansion. value range: [10-90].
                     * 
                     */
                    uint64_t GetTargetThreshold() const;

                    /**
                     * 设置Used capacity to total clusters ratio after expansion. value range: [10-90].
                     * @param _targetThreshold Used capacity to total clusters ratio after expansion. value range: [10-90].
                     * 
                     */
                    void SetTargetThreshold(const uint64_t& _targetThreshold);

                    /**
                     * 判断参数 TargetThreshold 是否已赋值
                     * @return TargetThreshold 是否已赋值
                     * 
                     */
                    bool TargetThresholdHasBeenSet() const;

                private:

                    /**
                     * Enable auto scale-out policy, disable.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Cluster usage percentage. start expansion when reaching this value. value range: [10-90].
                     */
                    uint64_t m_scaleThreshold;
                    bool m_scaleThresholdHasBeenSet;

                    /**
                     * Used capacity to total clusters ratio after expansion. value range: [10-90].
                     */
                    uint64_t m_targetThreshold;
                    bool m_targetThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_AUTOSCALEUPRULE_H_
