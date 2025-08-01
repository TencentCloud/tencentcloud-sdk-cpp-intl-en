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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_REACTIONTIMERANGE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_REACTIONTIMERANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Log response time RT range.
                */
                class ReactionTimeRange : public AbstractModel
                {
                public:
                    ReactionTimeRange();
                    ~ReactionTimeRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Minimum response time (ms).
                     * @return Min Minimum response time (ms).
                     * 
                     */
                    std::string GetMin() const;

                    /**
                     * 设置Minimum response time (ms).
                     * @param _min Minimum response time (ms).
                     * 
                     */
                    void SetMin(const std::string& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取Maximum response time (ms).
                     * @return Max Maximum response time (ms).
                     * 
                     */
                    std::string GetMax() const;

                    /**
                     * 设置Maximum response time (ms).
                     * @param _max Maximum response time (ms).
                     * 
                     */
                    void SetMax(const std::string& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                private:

                    /**
                     * Minimum response time (ms).
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Maximum response time (ms).
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_REACTIONTIMERANGE_H_
