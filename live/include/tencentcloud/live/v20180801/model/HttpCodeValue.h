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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_HTTPCODEVALUE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_HTTPCODEVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * HTTP return code data
                */
                class HttpCodeValue : public AbstractModel
                {
                public:
                    HttpCodeValue();
                    ~HttpCodeValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time in the format of `yyyy-mm-dd HH:MM:SS`.
                     * @return Time Time in the format of `yyyy-mm-dd HH:MM:SS`.
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Time in the format of `yyyy-mm-dd HH:MM:SS`.
                     * @param _time Time in the format of `yyyy-mm-dd HH:MM:SS`.
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Occurrences.
                     * @return Numbers Occurrences.
                     * 
                     */
                    uint64_t GetNumbers() const;

                    /**
                     * 设置Occurrences.
                     * @param _numbers Occurrences.
                     * 
                     */
                    void SetNumbers(const uint64_t& _numbers);

                    /**
                     * 判断参数 Numbers 是否已赋值
                     * @return Numbers 是否已赋值
                     * 
                     */
                    bool NumbersHasBeenSet() const;

                    /**
                     * 获取Proportion.
                     * @return Percentage Proportion.
                     * 
                     */
                    double GetPercentage() const;

                    /**
                     * 设置Proportion.
                     * @param _percentage Proportion.
                     * 
                     */
                    void SetPercentage(const double& _percentage);

                    /**
                     * 判断参数 Percentage 是否已赋值
                     * @return Percentage 是否已赋值
                     * 
                     */
                    bool PercentageHasBeenSet() const;

                private:

                    /**
                     * Time in the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Occurrences.
                     */
                    uint64_t m_numbers;
                    bool m_numbersHasBeenSet;

                    /**
                     * Proportion.
                     */
                    double m_percentage;
                    bool m_percentageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_HTTPCODEVALUE_H_
