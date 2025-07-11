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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DURATIONANALYSIS_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DURATIONANALYSIS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Analyze the execution time of slow query statements by classifying them to different time ranges
                */
                class DurationAnalysis : public AbstractModel
                {
                public:
                    DurationAnalysis();
                    ~DurationAnalysis() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time range
                     * @return TimeSegment Time range
                     * 
                     */
                    std::string GetTimeSegment() const;

                    /**
                     * 设置Time range
                     * @param _timeSegment Time range
                     * 
                     */
                    void SetTimeSegment(const std::string& _timeSegment);

                    /**
                     * 判断参数 TimeSegment 是否已赋值
                     * @return TimeSegment 是否已赋值
                     * 
                     */
                    bool TimeSegmentHasBeenSet() const;

                    /**
                     * 获取The number of slow query statements whose execution time falls within the time range
                     * @return Count The number of slow query statements whose execution time falls within the time range
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置The number of slow query statements whose execution time falls within the time range
                     * @param _count The number of slow query statements whose execution time falls within the time range
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * Time range
                     */
                    std::string m_timeSegment;
                    bool m_timeSegmentHasBeenSet;

                    /**
                     * The number of slow query statements whose execution time falls within the time range
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DURATIONANALYSIS_H_
