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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DATABACKFILLRANGE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DATABACKFILLRANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Backfill plan date range.
                */
                class DataBackfillRange : public AbstractModel
                {
                public:
                    DataBackfillRange();
                    ~DataBackfillRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start date in yyyy-MM-dd format. indicates the start from 00:00:00 on the specified date.

                     * @return StartDate Start date in yyyy-MM-dd format. indicates the start from 00:00:00 on the specified date.

                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置Start date in yyyy-MM-dd format. indicates the start from 00:00:00 on the specified date.

                     * @param _startDate Start date in yyyy-MM-dd format. indicates the start from 00:00:00 on the specified date.

                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取End date in the format yyyy-MM-dd, indicates ending at 23:59:59 of the specified date.

                     * @return EndDate End date in the format yyyy-MM-dd, indicates ending at 23:59:59 of the specified date.

                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置End date in the format yyyy-MM-dd, indicates ending at 23:59:59 of the specified date.

                     * @param _endDate End date in the format yyyy-MM-dd, indicates ending at 23:59:59 of the specified date.

                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取Start time of each day between [StartDate, EndDate] in HH:mm format. effective for tasks with a period of hours or less.

                     * @return ExecutionStartTime Start time of each day between [StartDate, EndDate] in HH:mm format. effective for tasks with a period of hours or less.

                     * 
                     */
                    std::string GetExecutionStartTime() const;

                    /**
                     * 设置Start time of each day between [StartDate, EndDate] in HH:mm format. effective for tasks with a period of hours or less.

                     * @param _executionStartTime Start time of each day between [StartDate, EndDate] in HH:mm format. effective for tasks with a period of hours or less.

                     * 
                     */
                    void SetExecutionStartTime(const std::string& _executionStartTime);

                    /**
                     * 判断参数 ExecutionStartTime 是否已赋值
                     * @return ExecutionStartTime 是否已赋值
                     * 
                     */
                    bool ExecutionStartTimeHasBeenSet() const;

                    /**
                     * 获取End time point between [StartDate, EndDate] in HH:mm format. effective for tasks with a period of hours or less.

                     * @return ExecutionEndTime End time point between [StartDate, EndDate] in HH:mm format. effective for tasks with a period of hours or less.

                     * 
                     */
                    std::string GetExecutionEndTime() const;

                    /**
                     * 设置End time point between [StartDate, EndDate] in HH:mm format. effective for tasks with a period of hours or less.

                     * @param _executionEndTime End time point between [StartDate, EndDate] in HH:mm format. effective for tasks with a period of hours or less.

                     * 
                     */
                    void SetExecutionEndTime(const std::string& _executionEndTime);

                    /**
                     * 判断参数 ExecutionEndTime 是否已赋值
                     * @return ExecutionEndTime 是否已赋值
                     * 
                     */
                    bool ExecutionEndTimeHasBeenSet() const;

                private:

                    /**
                     * Start date in yyyy-MM-dd format. indicates the start from 00:00:00 on the specified date.

                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * End date in the format yyyy-MM-dd, indicates ending at 23:59:59 of the specified date.

                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * Start time of each day between [StartDate, EndDate] in HH:mm format. effective for tasks with a period of hours or less.

                     */
                    std::string m_executionStartTime;
                    bool m_executionStartTimeHasBeenSet;

                    /**
                     * End time point between [StartDate, EndDate] in HH:mm format. effective for tasks with a period of hours or less.

                     */
                    std::string m_executionEndTime;
                    bool m_executionEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DATABACKFILLRANGE_H_
