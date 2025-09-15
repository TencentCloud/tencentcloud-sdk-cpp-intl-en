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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_TRIGGERCONDITION_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_TRIGGERCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Rule trigger condition.
                */
                class TriggerCondition : public AbstractModel
                {
                public:
                    TriggerCondition();
                    ~TriggerCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Conditional comparison method. 1: greater than, 2: less than, 3: greater than or equal to, 4: less than or equal to
                     * @return CompareMethod Conditional comparison method. 1: greater than, 2: less than, 3: greater than or equal to, 4: less than or equal to
                     * 
                     */
                    int64_t GetCompareMethod() const;

                    /**
                     * 设置Conditional comparison method. 1: greater than, 2: less than, 3: greater than or equal to, 4: less than or equal to
                     * @param _compareMethod Conditional comparison method. 1: greater than, 2: less than, 3: greater than or equal to, 4: less than or equal to
                     * 
                     */
                    void SetCompareMethod(const int64_t& _compareMethod);

                    /**
                     * 判断参数 CompareMethod 是否已赋值
                     * @return CompareMethod 是否已赋值
                     * 
                     */
                    bool CompareMethodHasBeenSet() const;

                    /**
                     * 获取Conditional threshold.
                     * @return Threshold Conditional threshold.
                     * 
                     */
                    double GetThreshold() const;

                    /**
                     * 设置Conditional threshold.
                     * @param _threshold Conditional threshold.
                     * 
                     */
                    void SetThreshold(const double& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                private:

                    /**
                     * Conditional comparison method. 1: greater than, 2: less than, 3: greater than or equal to, 4: less than or equal to
                     */
                    int64_t m_compareMethod;
                    bool m_compareMethodHasBeenSet;

                    /**
                     * Conditional threshold.
                     */
                    double m_threshold;
                    bool m_thresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TRIGGERCONDITION_H_
