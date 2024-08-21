/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_STATISTICINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_STATISTICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Task statistics information.
                */
                class StatisticInfo : public AbstractModel
                {
                public:
                    StatisticInfo();
                    ~StatisticInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Amount of data scanned
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalProcessedBytes Amount of data scanned
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalProcessedBytes() const;

                    /**
                     * 设置Amount of data scanned
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalProcessedBytes Amount of data scanned
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalProcessedBytes(const int64_t& _totalProcessedBytes);

                    /**
                     * 判断参数 TotalProcessedBytes 是否已赋值
                     * @return TotalProcessedBytes 是否已赋值
                     * 
                     */
                    bool TotalProcessedBytesHasBeenSet() const;

                    /**
                     * 获取Calculation time: ms
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UsedTime Calculation time: ms
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetUsedTime() const;

                    /**
                     * 设置Calculation time: ms
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _usedTime Calculation time: ms
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUsedTime(const int64_t& _usedTime);

                    /**
                     * 判断参数 UsedTime 是否已赋值
                     * @return UsedTime 是否已赋值
                     * 
                     */
                    bool UsedTimeHasBeenSet() const;

                    /**
                     * 获取Creation Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation Time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Task end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Task end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置Task end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime Task end time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Task start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Task start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Task start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Task start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Number of rows affected
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RowsAffect Number of rows affected
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRowsAffect() const;

                    /**
                     * 设置Number of rows affected
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rowsAffect Number of rows affected
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRowsAffect(const int64_t& _rowsAffect);

                    /**
                     * 判断参数 RowsAffect 是否已赋值
                     * @return RowsAffect 是否已赋值
                     * 
                     */
                    bool RowsAffectHasBeenSet() const;

                    /**
                     * 获取Task duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalTime Task duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalTime() const;

                    /**
                     * 设置Task duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalTime Task duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalTime(const int64_t& _totalTime);

                    /**
                     * 判断参数 TotalTime 是否已赋值
                     * @return TotalTime 是否已赋值
                     * 
                     */
                    bool TotalTimeHasBeenSet() const;

                private:

                    /**
                     * Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Amount of data scanned
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalProcessedBytes;
                    bool m_totalProcessedBytesHasBeenSet;

                    /**
                     * Calculation time: ms
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_usedTime;
                    bool m_usedTimeHasBeenSet;

                    /**
                     * Creation Time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task end time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Task start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Number of rows affected
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_rowsAffect;
                    bool m_rowsAffectHasBeenSet;

                    /**
                     * Task duration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalTime;
                    bool m_totalTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_STATISTICINFO_H_
