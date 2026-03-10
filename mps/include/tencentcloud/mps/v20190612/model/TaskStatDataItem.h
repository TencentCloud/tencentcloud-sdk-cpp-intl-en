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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TASKSTATDATAITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TASKSTATDATAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Statistical data of the task, including the number of tasks and usage.
                */
                class TaskStatDataItem : public AbstractModel
                {
                public:
                    TaskStatDataItem();
                    ~TaskStatDataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The start time of the time interval where the data resides, using the ISO date format. for example, when the time granularity is day, 2018-12-01T00:00:00+08:00 indicates the interval from december 1, 2018 (inclusive) to december 2, 2018 (exclusive).
                     * @return Time The start time of the time interval where the data resides, using the ISO date format. for example, when the time granularity is day, 2018-12-01T00:00:00+08:00 indicates the interval from december 1, 2018 (inclusive) to december 2, 2018 (exclusive).
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置The start time of the time interval where the data resides, using the ISO date format. for example, when the time granularity is day, 2018-12-01T00:00:00+08:00 indicates the interval from december 1, 2018 (inclusive) to december 2, 2018 (exclusive).
                     * @param _time The start time of the time interval where the data resides, using the ISO date format. for example, when the time granularity is day, 2018-12-01T00:00:00+08:00 indicates the interval from december 1, 2018 (inclusive) to december 2, 2018 (exclusive).
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
                     * 获取Number of tasks.
                     * @return Count Number of tasks.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of tasks.
                     * @param _count Number of tasks.
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
                     * 获取Task usage.
                     * @return Usage Task usage.
                     * 
                     */
                    int64_t GetUsage() const;

                    /**
                     * 设置Task usage.
                     * @param _usage Task usage.
                     * 
                     */
                    void SetUsage(const int64_t& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * The start time of the time interval where the data resides, using the ISO date format. for example, when the time granularity is day, 2018-12-01T00:00:00+08:00 indicates the interval from december 1, 2018 (inclusive) to december 2, 2018 (exclusive).
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Number of tasks.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Task usage.
                     */
                    int64_t m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TASKSTATDATAITEM_H_
