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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_STATDATAITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_STATDATAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Statistical data
                */
                class StatDataItem : public AbstractModel
                {
                public:
                    StatDataItem();
                    ~StatDataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start time of the time interval where the data resides, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). For example, when the time granularity is day, 2018-12-01T00:00:00+08:00 means the interval from December 1, 2018 (inclusive) to December 2, 2018 (exclusive).
<li>For hour-level data, 2019-08-22T00:00:00+08:00 refers to the stats from 0:00 to 1:00 on August 22, 2019.</li>
<li>When representing day-level data, 2019-08-22T00:00:00+08:00 refers to the stats for 2019-08-22.</li>
                     * @return Time Start time of the time interval where the data resides, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). For example, when the time granularity is day, 2018-12-01T00:00:00+08:00 means the interval from December 1, 2018 (inclusive) to December 2, 2018 (exclusive).
<li>For hour-level data, 2019-08-22T00:00:00+08:00 refers to the stats from 0:00 to 1:00 on August 22, 2019.</li>
<li>When representing day-level data, 2019-08-22T00:00:00+08:00 refers to the stats for 2019-08-22.</li>
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Start time of the time interval where the data resides, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). For example, when the time granularity is day, 2018-12-01T00:00:00+08:00 means the interval from December 1, 2018 (inclusive) to December 2, 2018 (exclusive).
<li>For hour-level data, 2019-08-22T00:00:00+08:00 refers to the stats from 0:00 to 1:00 on August 22, 2019.</li>
<li>When representing day-level data, 2019-08-22T00:00:00+08:00 refers to the stats for 2019-08-22.</li>
                     * @param _time Start time of the time interval where the data resides, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). For example, when the time granularity is day, 2018-12-01T00:00:00+08:00 means the interval from December 1, 2018 (inclusive) to December 2, 2018 (exclusive).
<li>For hour-level data, 2019-08-22T00:00:00+08:00 refers to the stats from 0:00 to 1:00 on August 22, 2019.</li>
<li>When representing day-level data, 2019-08-22T00:00:00+08:00 refers to the stats for 2019-08-22.</li>
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
                     * 获取Data size.
<li>Data of storage space, in bytes.</li>
<li>Transcoding duration data, in seconds.</li>
<li>Traffic data, in bytes.</li>
<li>Bandwidth statistics in bit/s.</li>
<li>Live stream editing data, in seconds.</li>
<li>Loop banner data, in seconds.</li>
<li>Number of sub-applications data. The unit is count.</li>
<li>Log service usage data, in counts.</li>
                     * @return Value Data size.
<li>Data of storage space, in bytes.</li>
<li>Transcoding duration data, in seconds.</li>
<li>Traffic data, in bytes.</li>
<li>Bandwidth statistics in bit/s.</li>
<li>Live stream editing data, in seconds.</li>
<li>Loop banner data, in seconds.</li>
<li>Number of sub-applications data. The unit is count.</li>
<li>Log service usage data, in counts.</li>
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置Data size.
<li>Data of storage space, in bytes.</li>
<li>Transcoding duration data, in seconds.</li>
<li>Traffic data, in bytes.</li>
<li>Bandwidth statistics in bit/s.</li>
<li>Live stream editing data, in seconds.</li>
<li>Loop banner data, in seconds.</li>
<li>Number of sub-applications data. The unit is count.</li>
<li>Log service usage data, in counts.</li>
                     * @param _value Data size.
<li>Data of storage space, in bytes.</li>
<li>Transcoding duration data, in seconds.</li>
<li>Traffic data, in bytes.</li>
<li>Bandwidth statistics in bit/s.</li>
<li>Live stream editing data, in seconds.</li>
<li>Loop banner data, in seconds.</li>
<li>Number of sub-applications data. The unit is count.</li>
<li>Log service usage data, in counts.</li>
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Start time of the time interval where the data resides, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). For example, when the time granularity is day, 2018-12-01T00:00:00+08:00 means the interval from December 1, 2018 (inclusive) to December 2, 2018 (exclusive).
<li>For hour-level data, 2019-08-22T00:00:00+08:00 refers to the stats from 0:00 to 1:00 on August 22, 2019.</li>
<li>When representing day-level data, 2019-08-22T00:00:00+08:00 refers to the stats for 2019-08-22.</li>
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Data size.
<li>Data of storage space, in bytes.</li>
<li>Transcoding duration data, in seconds.</li>
<li>Traffic data, in bytes.</li>
<li>Bandwidth statistics in bit/s.</li>
<li>Live stream editing data, in seconds.</li>
<li>Loop banner data, in seconds.</li>
<li>Number of sub-applications data. The unit is count.</li>
<li>Log service usage data, in counts.</li>
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_STATDATAITEM_H_
