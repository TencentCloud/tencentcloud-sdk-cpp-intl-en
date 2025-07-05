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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGADVICE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGADVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/Advice.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Suggestions for scaling group configurations.
                */
                class AutoScalingAdvice : public AbstractModel
                {
                public:
                    AutoScalingAdvice();
                    ~AutoScalingAdvice() = default;
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
                     * 获取Scaling group warning level. Valid values:
<li>NORMAL: normal.</li>
<li>WARNING: warning.</li>
<li>CRITICAL: critical.</li>
                     * @return Level Scaling group warning level. Valid values:
<li>NORMAL: normal.</li>
<li>WARNING: warning.</li>
<li>CRITICAL: critical.</li>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Scaling group warning level. Valid values:
<li>NORMAL: normal.</li>
<li>WARNING: warning.</li>
<li>CRITICAL: critical.</li>
                     * @param _level Scaling group warning level. Valid values:
<li>NORMAL: normal.</li>
<li>WARNING: warning.</li>
<li>CRITICAL: critical.</li>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取A collection of suggestions for scaling group configurations.
                     * @return Advices A collection of suggestions for scaling group configurations.
                     * 
                     */
                    std::vector<Advice> GetAdvices() const;

                    /**
                     * 设置A collection of suggestions for scaling group configurations.
                     * @param _advices A collection of suggestions for scaling group configurations.
                     * 
                     */
                    void SetAdvices(const std::vector<Advice>& _advices);

                    /**
                     * 判断参数 Advices 是否已赋值
                     * @return Advices 是否已赋值
                     * 
                     */
                    bool AdvicesHasBeenSet() const;

                private:

                    /**
                     * Scaling group ID
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Scaling group warning level. Valid values:
<li>NORMAL: normal.</li>
<li>WARNING: warning.</li>
<li>CRITICAL: critical.</li>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * A collection of suggestions for scaling group configurations.
                     */
                    std::vector<Advice> m_advices;
                    bool m_advicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGADVICE_H_
