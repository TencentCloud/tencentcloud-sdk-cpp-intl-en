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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_SLOWLOGPATTERN_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_SLOWLOGPATTERN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Slow log statistics of MongoDB database
                */
                class SlowLogPattern : public AbstractModel
                {
                public:
                    SlowLogPattern();
                    ~SlowLogPattern() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Slow log pattern
                     * @return Pattern Slow log pattern
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置Slow log pattern
                     * @param _pattern Slow log pattern
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取Maximum execution time
                     * @return MaxTime Maximum execution time
                     * 
                     */
                    uint64_t GetMaxTime() const;

                    /**
                     * 设置Maximum execution time
                     * @param _maxTime Maximum execution time
                     * 
                     */
                    void SetMaxTime(const uint64_t& _maxTime);

                    /**
                     * 判断参数 MaxTime 是否已赋值
                     * @return MaxTime 是否已赋值
                     * 
                     */
                    bool MaxTimeHasBeenSet() const;

                    /**
                     * 获取Average execution time
                     * @return AverageTime Average execution time
                     * 
                     */
                    uint64_t GetAverageTime() const;

                    /**
                     * 设置Average execution time
                     * @param _averageTime Average execution time
                     * 
                     */
                    void SetAverageTime(const uint64_t& _averageTime);

                    /**
                     * 判断参数 AverageTime 是否已赋值
                     * @return AverageTime 是否已赋值
                     * 
                     */
                    bool AverageTimeHasBeenSet() const;

                    /**
                     * 获取Number of slow logs in this pattern
                     * @return Total Number of slow logs in this pattern
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置Number of slow logs in this pattern
                     * @param _total Number of slow logs in this pattern
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Slow log pattern
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * Maximum execution time
                     */
                    uint64_t m_maxTime;
                    bool m_maxTimeHasBeenSet;

                    /**
                     * Average execution time
                     */
                    uint64_t m_averageTime;
                    bool m_averageTimeHasBeenSet;

                    /**
                     * Number of slow logs in this pattern
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SLOWLOGPATTERN_H_
