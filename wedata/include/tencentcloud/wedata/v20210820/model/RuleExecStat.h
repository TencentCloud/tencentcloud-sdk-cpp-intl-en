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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECSTAT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECSTAT_H_

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
                * Rule Execution Result
                */
                class RuleExecStat : public AbstractModel
                {
                public:
                    RuleExecStat();
                    ~RuleExecStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total Rule Executions
                     * @return TotalCnt Total Rule Executions
                     * 
                     */
                    uint64_t GetTotalCnt() const;

                    /**
                     * 设置Total Rule Executions
                     * @param _totalCnt Total Rule Executions
                     * 
                     */
                    void SetTotalCnt(const uint64_t& _totalCnt);

                    /**
                     * 判断参数 TotalCnt 是否已赋值
                     * @return TotalCnt 是否已赋值
                     * 
                     */
                    bool TotalCntHasBeenSet() const;

                    /**
                     * 获取Quarter-over-quarter total rule executions
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LastTotalCnt Quarter-over-quarter total rule executions
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetLastTotalCnt() const;

                    /**
                     * 设置Quarter-over-quarter total rule executions
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastTotalCnt Quarter-over-quarter total rule executions
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLastTotalCnt(const uint64_t& _lastTotalCnt);

                    /**
                     * 判断参数 LastTotalCnt 是否已赋值
                     * @return LastTotalCnt 是否已赋值
                     * 
                     */
                    bool LastTotalCntHasBeenSet() const;

                    /**
                     * 获取Percentage of total rule executions
                     * @return TotalCntRatio Percentage of total rule executions
                     * 
                     */
                    double GetTotalCntRatio() const;

                    /**
                     * 设置Percentage of total rule executions
                     * @param _totalCntRatio Percentage of total rule executions
                     * 
                     */
                    void SetTotalCntRatio(const double& _totalCntRatio);

                    /**
                     * 判断参数 TotalCntRatio 是否已赋值
                     * @return TotalCntRatio 是否已赋值
                     * 
                     */
                    bool TotalCntRatioHasBeenSet() const;

                    /**
                     * 获取Quarter-over-quarter change in total rule executions
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LastTotalCntRatio Quarter-over-quarter change in total rule executions
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetLastTotalCntRatio() const;

                    /**
                     * 设置Quarter-over-quarter change in total rule executions
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastTotalCntRatio Quarter-over-quarter change in total rule executions
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLastTotalCntRatio(const double& _lastTotalCntRatio);

                    /**
                     * 判断参数 LastTotalCntRatio 是否已赋值
                     * @return LastTotalCntRatio 是否已赋值
                     * 
                     */
                    bool LastTotalCntRatioHasBeenSet() const;

                    /**
                     * 获取Number of rule triggers
                     * @return TriggerCnt Number of rule triggers
                     * 
                     */
                    uint64_t GetTriggerCnt() const;

                    /**
                     * 设置Number of rule triggers
                     * @param _triggerCnt Number of rule triggers
                     * 
                     */
                    void SetTriggerCnt(const uint64_t& _triggerCnt);

                    /**
                     * 判断参数 TriggerCnt 是否已赋值
                     * @return TriggerCnt 是否已赋值
                     * 
                     */
                    bool TriggerCntHasBeenSet() const;

                    /**
                     * 获取Quarter-over-quarter number of rule triggers
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LastTriggerCnt Quarter-over-quarter number of rule triggers
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetLastTriggerCnt() const;

                    /**
                     * 设置Quarter-over-quarter number of rule triggers
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastTriggerCnt Quarter-over-quarter number of rule triggers
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLastTriggerCnt(const uint64_t& _lastTriggerCnt);

                    /**
                     * 判断参数 LastTriggerCnt 是否已赋值
                     * @return LastTriggerCnt 是否已赋值
                     * 
                     */
                    bool LastTriggerCntHasBeenSet() const;

                    /**
                     * 获取Percentage of triggers in total
                     * @return TriggerCntRatio Percentage of triggers in total
                     * 
                     */
                    double GetTriggerCntRatio() const;

                    /**
                     * 设置Percentage of triggers in total
                     * @param _triggerCntRatio Percentage of triggers in total
                     * 
                     */
                    void SetTriggerCntRatio(const double& _triggerCntRatio);

                    /**
                     * 判断参数 TriggerCntRatio 是否已赋值
                     * @return TriggerCntRatio 是否已赋值
                     * 
                     */
                    bool TriggerCntRatioHasBeenSet() const;

                    /**
                     * 获取Quarter-over-quarter change in rule triggers
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LastTriggerCntRatio Quarter-over-quarter change in rule triggers
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetLastTriggerCntRatio() const;

                    /**
                     * 设置Quarter-over-quarter change in rule triggers
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastTriggerCntRatio Quarter-over-quarter change in rule triggers
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLastTriggerCntRatio(const double& _lastTriggerCntRatio);

                    /**
                     * 判断参数 LastTriggerCntRatio 是否已赋值
                     * @return LastTriggerCntRatio 是否已赋值
                     * 
                     */
                    bool LastTriggerCntRatioHasBeenSet() const;

                    /**
                     * 获取Number of rule alerts
                     * @return AlarmCnt Number of rule alerts
                     * 
                     */
                    uint64_t GetAlarmCnt() const;

                    /**
                     * 设置Number of rule alerts
                     * @param _alarmCnt Number of rule alerts
                     * 
                     */
                    void SetAlarmCnt(const uint64_t& _alarmCnt);

                    /**
                     * 判断参数 AlarmCnt 是否已赋值
                     * @return AlarmCnt 是否已赋值
                     * 
                     */
                    bool AlarmCntHasBeenSet() const;

                    /**
                     * 获取Quarter-over-quarter number of rule alerts
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LastAlarmCnt Quarter-over-quarter number of rule alerts
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetLastAlarmCnt() const;

                    /**
                     * 设置Quarter-over-quarter number of rule alerts
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastAlarmCnt Quarter-over-quarter number of rule alerts
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLastAlarmCnt(const uint64_t& _lastAlarmCnt);

                    /**
                     * 判断参数 LastAlarmCnt 是否已赋值
                     * @return LastAlarmCnt 是否已赋值
                     * 
                     */
                    bool LastAlarmCntHasBeenSet() const;

                    /**
                     * 获取Percentage of alerts in total
                     * @return AlarmCntRatio Percentage of alerts in total
                     * 
                     */
                    double GetAlarmCntRatio() const;

                    /**
                     * 设置Percentage of alerts in total
                     * @param _alarmCntRatio Percentage of alerts in total
                     * 
                     */
                    void SetAlarmCntRatio(const double& _alarmCntRatio);

                    /**
                     * 判断参数 AlarmCntRatio 是否已赋值
                     * @return AlarmCntRatio 是否已赋值
                     * 
                     */
                    bool AlarmCntRatioHasBeenSet() const;

                    /**
                     * 获取Quarter-over-quarter change in alert numbers
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LastAlarmCntRatio Quarter-over-quarter change in alert numbers
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetLastAlarmCntRatio() const;

                    /**
                     * 设置Quarter-over-quarter change in alert numbers
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastAlarmCntRatio Quarter-over-quarter change in alert numbers
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLastAlarmCntRatio(const double& _lastAlarmCntRatio);

                    /**
                     * 判断参数 LastAlarmCntRatio 是否已赋值
                     * @return LastAlarmCntRatio 是否已赋值
                     * 
                     */
                    bool LastAlarmCntRatioHasBeenSet() const;

                    /**
                     * 获取Number of block occurrences
                     * @return PipelineCnt Number of block occurrences
                     * 
                     */
                    uint64_t GetPipelineCnt() const;

                    /**
                     * 设置Number of block occurrences
                     * @param _pipelineCnt Number of block occurrences
                     * 
                     */
                    void SetPipelineCnt(const uint64_t& _pipelineCnt);

                    /**
                     * 判断参数 PipelineCnt 是否已赋值
                     * @return PipelineCnt 是否已赋值
                     * 
                     */
                    bool PipelineCntHasBeenSet() const;

                    /**
                     * 获取Quarter-over-quarter number of block occurrences
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LastPipelineCnt Quarter-over-quarter number of block occurrences
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetLastPipelineCnt() const;

                    /**
                     * 设置Quarter-over-quarter number of block occurrences
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastPipelineCnt Quarter-over-quarter number of block occurrences
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLastPipelineCnt(const uint64_t& _lastPipelineCnt);

                    /**
                     * 判断参数 LastPipelineCnt 是否已赋值
                     * @return LastPipelineCnt 是否已赋值
                     * 
                     */
                    bool LastPipelineCntHasBeenSet() const;

                    /**
                     * 获取Percentage of blocks in total
                     * @return PipelineCntRatio Percentage of blocks in total
                     * 
                     */
                    double GetPipelineCntRatio() const;

                    /**
                     * 设置Percentage of blocks in total
                     * @param _pipelineCntRatio Percentage of blocks in total
                     * 
                     */
                    void SetPipelineCntRatio(const double& _pipelineCntRatio);

                    /**
                     * 判断参数 PipelineCntRatio 是否已赋值
                     * @return PipelineCntRatio 是否已赋值
                     * 
                     */
                    bool PipelineCntRatioHasBeenSet() const;

                    /**
                     * 获取Quarter-over-quarter change in block occurrences
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LastPipelineCntRatio Quarter-over-quarter change in block occurrences
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetLastPipelineCntRatio() const;

                    /**
                     * 设置Quarter-over-quarter change in block occurrences
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastPipelineCntRatio Quarter-over-quarter change in block occurrences
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLastPipelineCntRatio(const double& _lastPipelineCntRatio);

                    /**
                     * 判断参数 LastPipelineCntRatio 是否已赋值
                     * @return LastPipelineCntRatio 是否已赋值
                     * 
                     */
                    bool LastPipelineCntRatioHasBeenSet() const;

                private:

                    /**
                     * Total Rule Executions
                     */
                    uint64_t m_totalCnt;
                    bool m_totalCntHasBeenSet;

                    /**
                     * Quarter-over-quarter total rule executions
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_lastTotalCnt;
                    bool m_lastTotalCntHasBeenSet;

                    /**
                     * Percentage of total rule executions
                     */
                    double m_totalCntRatio;
                    bool m_totalCntRatioHasBeenSet;

                    /**
                     * Quarter-over-quarter change in total rule executions
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_lastTotalCntRatio;
                    bool m_lastTotalCntRatioHasBeenSet;

                    /**
                     * Number of rule triggers
                     */
                    uint64_t m_triggerCnt;
                    bool m_triggerCntHasBeenSet;

                    /**
                     * Quarter-over-quarter number of rule triggers
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_lastTriggerCnt;
                    bool m_lastTriggerCntHasBeenSet;

                    /**
                     * Percentage of triggers in total
                     */
                    double m_triggerCntRatio;
                    bool m_triggerCntRatioHasBeenSet;

                    /**
                     * Quarter-over-quarter change in rule triggers
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_lastTriggerCntRatio;
                    bool m_lastTriggerCntRatioHasBeenSet;

                    /**
                     * Number of rule alerts
                     */
                    uint64_t m_alarmCnt;
                    bool m_alarmCntHasBeenSet;

                    /**
                     * Quarter-over-quarter number of rule alerts
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_lastAlarmCnt;
                    bool m_lastAlarmCntHasBeenSet;

                    /**
                     * Percentage of alerts in total
                     */
                    double m_alarmCntRatio;
                    bool m_alarmCntRatioHasBeenSet;

                    /**
                     * Quarter-over-quarter change in alert numbers
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_lastAlarmCntRatio;
                    bool m_lastAlarmCntRatioHasBeenSet;

                    /**
                     * Number of block occurrences
                     */
                    uint64_t m_pipelineCnt;
                    bool m_pipelineCntHasBeenSet;

                    /**
                     * Quarter-over-quarter number of block occurrences
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_lastPipelineCnt;
                    bool m_lastPipelineCntHasBeenSet;

                    /**
                     * Percentage of blocks in total
                     */
                    double m_pipelineCntRatio;
                    bool m_pipelineCntRatioHasBeenSet;

                    /**
                     * Quarter-over-quarter change in block occurrences
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_lastPipelineCntRatio;
                    bool m_lastPipelineCntRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECSTAT_H_
