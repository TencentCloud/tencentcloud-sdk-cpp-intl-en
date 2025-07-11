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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_LOGHISTOGRAM_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_LOGHISTOGRAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Result details of statistics within the histogram period
                */
                class LogHistogram : public AbstractModel
                {
                public:
                    LogHistogram();
                    ~LogHistogram() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of logs within the statistical period
                     * @return Count Number of logs within the statistical period
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of logs within the statistical period
                     * @param _count Number of logs within the statistical period
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Unix timestamp rounded by period, in ms
                     * @return TimeStamp Unix timestamp rounded by period, in ms
                     * 
                     */
                    int64_t GetTimeStamp() const;

                    /**
                     * 设置Unix timestamp rounded by period, in ms
                     * @param _timeStamp Unix timestamp rounded by period, in ms
                     * 
                     */
                    void SetTimeStamp(const int64_t& _timeStamp);

                    /**
                     * 判断参数 TimeStamp 是否已赋值
                     * @return TimeStamp 是否已赋值
                     * 
                     */
                    bool TimeStampHasBeenSet() const;

                private:

                    /**
                     * Number of logs within the statistical period
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Unix timestamp rounded by period, in ms
                     */
                    int64_t m_timeStamp;
                    bool m_timeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_LOGHISTOGRAM_H_
