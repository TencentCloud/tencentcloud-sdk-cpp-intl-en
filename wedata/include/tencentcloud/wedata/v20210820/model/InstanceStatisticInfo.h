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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCESTATISTICINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCESTATISTICINFO_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Operation and Maintenance Dashboard Instance Status Statistics and Instance Status Trend
                */
                class InstanceStatisticInfo : public AbstractModel
                {
                public:
                    InstanceStatisticInfo();
                    ~InstanceStatisticInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance Status Trend Statistics
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CountList Instance Status Trend Statistics
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<uint64_t> GetCountList() const;

                    /**
                     * 设置Instance Status Trend Statistics
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _countList Instance Status Trend Statistics
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCountList(const std::vector<uint64_t>& _countList);

                    /**
                     * 判断参数 CountList 是否已赋值
                     * @return CountList 是否已赋值
                     * 
                     */
                    bool CountListHasBeenSet() const;

                    /**
                     * 获取Instance Status Trend Time Segmentation
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TimeList Instance Status Trend Time Segmentation
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTimeList() const;

                    /**
                     * 设置Instance Status Trend Time Segmentation
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _timeList Instance Status Trend Time Segmentation
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTimeList(const std::vector<std::string>& _timeList);

                    /**
                     * 判断参数 TimeList 是否已赋值
                     * @return TimeList 是否已赋值
                     * 
                     */
                    bool TimeListHasBeenSet() const;

                    /**
                     * 获取Instance Status Identification: WAITING_RUNNING, KILLING, FAILED, FAILED_TRYING, SUCCEED, respectively indicate waiting for execution, terminating, failed, trying again, successful, used for Instance Status Distribution and Instance Status Trend
                     * @return InstanceStatus Instance Status Identification: WAITING_RUNNING, KILLING, FAILED, FAILED_TRYING, SUCCEED, respectively indicate waiting for execution, terminating, failed, trying again, successful, used for Instance Status Distribution and Instance Status Trend
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置Instance Status Identification: WAITING_RUNNING, KILLING, FAILED, FAILED_TRYING, SUCCEED, respectively indicate waiting for execution, terminating, failed, trying again, successful, used for Instance Status Distribution and Instance Status Trend
                     * @param _instanceStatus Instance Status Identification: WAITING_RUNNING, KILLING, FAILED, FAILED_TRYING, SUCCEED, respectively indicate waiting for execution, terminating, failed, trying again, successful, used for Instance Status Distribution and Instance Status Trend
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Used for Instance Status Distribution Count
                     * @return InstanceCount Used for Instance Status Distribution Count
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置Used for Instance Status Distribution Count
                     * @param _instanceCount Used for Instance Status Distribution Count
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取Current Display Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ShowTime Current Display Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetShowTime() const;

                    /**
                     * 设置Current Display Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _showTime Current Display Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetShowTime(const std::string& _showTime);

                    /**
                     * 判断参数 ShowTime 是否已赋值
                     * @return ShowTime 是否已赋值
                     * 
                     */
                    bool ShowTimeHasBeenSet() const;

                    /**
                     * 获取1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ReportTime 1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetReportTime() const;

                    /**
                     * 设置1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _reportTime 1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetReportTime(const std::string& _reportTime);

                    /**
                     * 判断参数 ReportTime 是否已赋值
                     * @return ReportTime 是否已赋值
                     * 
                     */
                    bool ReportTimeHasBeenSet() const;

                    /**
                     * 获取1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Count 1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _count 1
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * Instance Status Trend Statistics
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<uint64_t> m_countList;
                    bool m_countListHasBeenSet;

                    /**
                     * Instance Status Trend Time Segmentation
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_timeList;
                    bool m_timeListHasBeenSet;

                    /**
                     * Instance Status Identification: WAITING_RUNNING, KILLING, FAILED, FAILED_TRYING, SUCCEED, respectively indicate waiting for execution, terminating, failed, trying again, successful, used for Instance Status Distribution and Instance Status Trend
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Used for Instance Status Distribution Count
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Current Display Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_showTime;
                    bool m_showTimeHasBeenSet;

                    /**
                     * 1
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_reportTime;
                    bool m_reportTimeHasBeenSet;

                    /**
                     * 1
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCESTATISTICINFO_H_
