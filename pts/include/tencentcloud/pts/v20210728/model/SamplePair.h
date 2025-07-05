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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_SAMPLEPAIR_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_SAMPLEPAIR_H_

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
                * Metric sample value with timestamp.
                */
                class SamplePair : public AbstractModel
                {
                public:
                    SamplePair();
                    ~SamplePair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Timestamp. It is the number of milliseconds since the epoch (1970-01-01 00:00 UTC) excluding leap seconds.
                     * @return Timestamp Timestamp. It is the number of milliseconds since the epoch (1970-01-01 00:00 UTC) excluding leap seconds.
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置Timestamp. It is the number of milliseconds since the epoch (1970-01-01 00:00 UTC) excluding leap seconds.
                     * @param _timestamp Timestamp. It is the number of milliseconds since the epoch (1970-01-01 00:00 UTC) excluding leap seconds.
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Value of a given sample at a given time.
                     * @return Value Value of a given sample at a given time.
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置Value of a given sample at a given time.
                     * @param _value Value of a given sample at a given time.
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Timestamp. It is the number of milliseconds since the epoch (1970-01-01 00:00 UTC) excluding leap seconds.
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Value of a given sample at a given time.
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_SAMPLEPAIR_H_
