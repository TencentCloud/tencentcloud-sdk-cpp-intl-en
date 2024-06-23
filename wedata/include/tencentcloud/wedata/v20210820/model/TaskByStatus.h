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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKBYSTATUS_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKBYSTATUS_H_

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
                * Status Trend Statistics
                */
                class TaskByStatus : public AbstractModel
                {
                public:
                    TaskByStatus();
                    ~TaskByStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Statistical Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CountGroup Statistical Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCountGroup() const;

                    /**
                     * 设置Statistical Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _countGroup Statistical Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCountGroup(const std::string& _countGroup);

                    /**
                     * 判断参数 CountGroup 是否已赋值
                     * @return CountGroup 是否已赋值
                     * 
                     */
                    bool CountGroupHasBeenSet() const;

                    /**
                     * 获取DateNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ShowTimeGroup DateNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetShowTimeGroup() const;

                    /**
                     * 设置DateNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _showTimeGroup DateNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetShowTimeGroup(const std::string& _showTimeGroup);

                    /**
                     * 判断参数 ShowTimeGroup 是否已赋值
                     * @return ShowTimeGroup 是否已赋值
                     * 
                     */
                    bool ShowTimeGroupHasBeenSet() const;

                    /**
                     * 获取StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Status StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _status StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Cycle Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleUnit Cycle Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCycleUnit() const;

                    /**
                     * 设置Cycle Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleUnit Cycle Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCycleUnit(const std::string& _cycleUnit);

                    /**
                     * 判断参数 CycleUnit 是否已赋值
                     * @return CycleUnit 是否已赋值
                     * 
                     */
                    bool CycleUnitHasBeenSet() const;

                    /**
                     * 获取1
                     * @return ReportTime 1
                     * 
                     */
                    std::string GetReportTime() const;

                    /**
                     * 设置1
                     * @param _reportTime 1
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
                     * @return Count 1
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置1
                     * @param _count 1
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * Statistical Value
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_countGroup;
                    bool m_countGroupHasBeenSet;

                    /**
                     * DateNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_showTimeGroup;
                    bool m_showTimeGroupHasBeenSet;

                    /**
                     * StatusNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Cycle Unit
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_cycleUnit;
                    bool m_cycleUnitHasBeenSet;

                    /**
                     * 1
                     */
                    std::string m_reportTime;
                    bool m_reportTimeHasBeenSet;

                    /**
                     * 1
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKBYSTATUS_H_
