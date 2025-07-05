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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeIntegrationStatistics response structure.
                */
                class DescribeIntegrationStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeIntegrationStatisticsResponse();
                    ~DescribeIntegrationStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total Tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalTask Total Tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotalTask() const;

                    /**
                     * 判断参数 TotalTask 是否已赋值
                     * @return TotalTask 是否已赋值
                     * 
                     */
                    bool TotalTaskHasBeenSet() const;

                    /**
                     * 获取Number of Production Tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProdTask Number of Production Tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetProdTask() const;

                    /**
                     * 判断参数 ProdTask 是否已赋值
                     * @return ProdTask 是否已赋值
                     * 
                     */
                    bool ProdTaskHasBeenSet() const;

                    /**
                     * 获取Number of Development Tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DevTask Number of Development Tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetDevTask() const;

                    /**
                     * 判断参数 DevTask 是否已赋值
                     * @return DevTask 是否已赋值
                     * 
                     */
                    bool DevTaskHasBeenSet() const;

                    /**
                     * 获取Total Number of Reads
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalReadRecords Total Number of Reads
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotalReadRecords() const;

                    /**
                     * 判断参数 TotalReadRecords 是否已赋值
                     * @return TotalReadRecords 是否已赋值
                     * 
                     */
                    bool TotalReadRecordsHasBeenSet() const;

                    /**
                     * 获取Total Number of Writes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalWriteRecords Total Number of Writes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotalWriteRecords() const;

                    /**
                     * 判断参数 TotalWriteRecords 是否已赋值
                     * @return TotalWriteRecords 是否已赋值
                     * 
                     */
                    bool TotalWriteRecordsHasBeenSet() const;

                    /**
                     * 获取Total Number of Dirty Data Entries
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalErrorRecords Total Number of Dirty Data Entries
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotalErrorRecords() const;

                    /**
                     * 判断参数 TotalErrorRecords 是否已赋值
                     * @return TotalErrorRecords 是否已赋值
                     * 
                     */
                    bool TotalErrorRecordsHasBeenSet() const;

                    /**
                     * 获取Total Number of Alarm Events
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalAlarmEvent Total Number of Alarm Events
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotalAlarmEvent() const;

                    /**
                     * 判断参数 TotalAlarmEvent 是否已赋值
                     * @return TotalAlarmEvent 是否已赋值
                     * 
                     */
                    bool TotalAlarmEventHasBeenSet() const;

                    /**
                     * 获取Daily Increase in Reads
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IncreaseReadRecords Daily Increase in Reads
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetIncreaseReadRecords() const;

                    /**
                     * 判断参数 IncreaseReadRecords 是否已赋值
                     * @return IncreaseReadRecords 是否已赋值
                     * 
                     */
                    bool IncreaseReadRecordsHasBeenSet() const;

                    /**
                     * 获取Daily Increase in Writes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IncreaseWriteRecords Daily Increase in Writes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetIncreaseWriteRecords() const;

                    /**
                     * 判断参数 IncreaseWriteRecords 是否已赋值
                     * @return IncreaseWriteRecords 是否已赋值
                     * 
                     */
                    bool IncreaseWriteRecordsHasBeenSet() const;

                    /**
                     * 获取Daily Increase in Dirty Data Entries
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IncreaseErrorRecords Daily Increase in Dirty Data Entries
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetIncreaseErrorRecords() const;

                    /**
                     * 判断参数 IncreaseErrorRecords 是否已赋值
                     * @return IncreaseErrorRecords 是否已赋值
                     * 
                     */
                    bool IncreaseErrorRecordsHasBeenSet() const;

                    /**
                     * 获取Daily Increase in Alarm Events
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IncreaseAlarmEvent Daily Increase in Alarm Events
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetIncreaseAlarmEvent() const;

                    /**
                     * 判断参数 IncreaseAlarmEvent 是否已赋值
                     * @return IncreaseAlarmEvent 是否已赋值
                     * 
                     */
                    bool IncreaseAlarmEventHasBeenSet() const;

                    /**
                     * 获取Alarm Event Statistics
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AlarmEvent Alarm Event Statistics
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAlarmEvent() const;

                    /**
                     * 判断参数 AlarmEvent 是否已赋值
                     * @return AlarmEvent 是否已赋值
                     * 
                     */
                    bool AlarmEventHasBeenSet() const;

                private:

                    /**
                     * Total Tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_totalTask;
                    bool m_totalTaskHasBeenSet;

                    /**
                     * Number of Production Tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_prodTask;
                    bool m_prodTaskHasBeenSet;

                    /**
                     * Number of Development Tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_devTask;
                    bool m_devTaskHasBeenSet;

                    /**
                     * Total Number of Reads
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_totalReadRecords;
                    bool m_totalReadRecordsHasBeenSet;

                    /**
                     * Total Number of Writes
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_totalWriteRecords;
                    bool m_totalWriteRecordsHasBeenSet;

                    /**
                     * Total Number of Dirty Data Entries
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_totalErrorRecords;
                    bool m_totalErrorRecordsHasBeenSet;

                    /**
                     * Total Number of Alarm Events
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_totalAlarmEvent;
                    bool m_totalAlarmEventHasBeenSet;

                    /**
                     * Daily Increase in Reads
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_increaseReadRecords;
                    bool m_increaseReadRecordsHasBeenSet;

                    /**
                     * Daily Increase in Writes
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_increaseWriteRecords;
                    bool m_increaseWriteRecordsHasBeenSet;

                    /**
                     * Daily Increase in Dirty Data Entries
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_increaseErrorRecords;
                    bool m_increaseErrorRecordsHasBeenSet;

                    /**
                     * Daily Increase in Alarm Events
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_increaseAlarmEvent;
                    bool m_increaseAlarmEventHasBeenSet;

                    /**
                     * Alarm Event Statistics
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_alarmEvent;
                    bool m_alarmEventHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONSTATISTICSRESPONSE_H_
