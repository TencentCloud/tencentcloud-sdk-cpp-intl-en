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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INSIGHTRESULT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INSIGHTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Insight result item.
                */
                class InsightResult : public AbstractModel
                {
                public:
                    InsightResult();
                    ~InsightResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取When Type is set to HIVE, the value is the Hive query ID; when Type is set to MAPREDUCE, SPARK or TEZ, the value is YarnAppID.
                     * @return ID When Type is set to HIVE, the value is the Hive query ID; when Type is set to MAPREDUCE, SPARK or TEZ, the value is YarnAppID.
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置When Type is set to HIVE, the value is the Hive query ID; when Type is set to MAPREDUCE, SPARK or TEZ, the value is YarnAppID.
                     * @param _iD When Type is set to HIVE, the value is the Hive query ID; when Type is set to MAPREDUCE, SPARK or TEZ, the value is YarnAppID.
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Insight application type. Valid values: HIVE, SPARK, MAPREDUCE, and TEZ.
                     * @return Type Insight application type. Valid values: HIVE, SPARK, MAPREDUCE, and TEZ.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Insight application type. Valid values: HIVE, SPARK, MAPREDUCE, and TEZ.
                     * @param _type Insight application type. Valid values: HIVE, SPARK, MAPREDUCE, and TEZ.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Insight rule ID.
HIVE-ScanManyMeta: excessively large amount of scanned metadata
HIVE-ScanManyPartition: large table scan
HIVE-SlowCompile: excessively long compilation durationHIVE-UnSuitableConfig: improper parameter
MAPREDUCE-MapperDataSkew: Map data skew
MAPREDUCE-MapperMemWaste: MapMemory resource waste
MAPREDUCE-MapperSlowTask: Map slow task
MAPREDUCE-MapperTaskGC:MapperTaskGC
MAPREDUCE-MemExceeded: peak memory exceeded
MAPREDUCE-ReducerDataSkew: Reduce data skew
MAPREDUCE-ReducerMemWaste: ReduceMemory resource waste
MAPREDUCE-ReducerSlowTask: Reduce slow task
MAPREDUCE-ReducerTaskGC:ReducerTaskGC
MAPREDUCE-SchedulingDelay: scheduling delay
SPARK-CpuWaste: CPU resource waste
SPARK-DataSkew: data skew
SPARK-ExecutorGC:ExecutorGC
SPARK-MemExceeded: peak memory exceeded
SPARK-MemWaste: Memory resource waste
SPARK-ScheduleOverhead:ScheduleOverhead
SPARK-ScheduleSkew: scheduling skew
SPARK-SlowTask: slow task
TEZ-DataSkew: data skew
TEZ-MapperDataSkew: Map data skew
TEZ-ReducerDataSkew: Reduce data skew
TEZ-TezMemWaste: Memory resource waste
TEZ-TezSlowTask: slow task
TEZ-TezTaskGC:TasksGC
                     * @return RuleID Insight rule ID.
HIVE-ScanManyMeta: excessively large amount of scanned metadata
HIVE-ScanManyPartition: large table scan
HIVE-SlowCompile: excessively long compilation durationHIVE-UnSuitableConfig: improper parameter
MAPREDUCE-MapperDataSkew: Map data skew
MAPREDUCE-MapperMemWaste: MapMemory resource waste
MAPREDUCE-MapperSlowTask: Map slow task
MAPREDUCE-MapperTaskGC:MapperTaskGC
MAPREDUCE-MemExceeded: peak memory exceeded
MAPREDUCE-ReducerDataSkew: Reduce data skew
MAPREDUCE-ReducerMemWaste: ReduceMemory resource waste
MAPREDUCE-ReducerSlowTask: Reduce slow task
MAPREDUCE-ReducerTaskGC:ReducerTaskGC
MAPREDUCE-SchedulingDelay: scheduling delay
SPARK-CpuWaste: CPU resource waste
SPARK-DataSkew: data skew
SPARK-ExecutorGC:ExecutorGC
SPARK-MemExceeded: peak memory exceeded
SPARK-MemWaste: Memory resource waste
SPARK-ScheduleOverhead:ScheduleOverhead
SPARK-ScheduleSkew: scheduling skew
SPARK-SlowTask: slow task
TEZ-DataSkew: data skew
TEZ-MapperDataSkew: Map data skew
TEZ-ReducerDataSkew: Reduce data skew
TEZ-TezMemWaste: Memory resource waste
TEZ-TezSlowTask: slow task
TEZ-TezTaskGC:TasksGC
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置Insight rule ID.
HIVE-ScanManyMeta: excessively large amount of scanned metadata
HIVE-ScanManyPartition: large table scan
HIVE-SlowCompile: excessively long compilation durationHIVE-UnSuitableConfig: improper parameter
MAPREDUCE-MapperDataSkew: Map data skew
MAPREDUCE-MapperMemWaste: MapMemory resource waste
MAPREDUCE-MapperSlowTask: Map slow task
MAPREDUCE-MapperTaskGC:MapperTaskGC
MAPREDUCE-MemExceeded: peak memory exceeded
MAPREDUCE-ReducerDataSkew: Reduce data skew
MAPREDUCE-ReducerMemWaste: ReduceMemory resource waste
MAPREDUCE-ReducerSlowTask: Reduce slow task
MAPREDUCE-ReducerTaskGC:ReducerTaskGC
MAPREDUCE-SchedulingDelay: scheduling delay
SPARK-CpuWaste: CPU resource waste
SPARK-DataSkew: data skew
SPARK-ExecutorGC:ExecutorGC
SPARK-MemExceeded: peak memory exceeded
SPARK-MemWaste: Memory resource waste
SPARK-ScheduleOverhead:ScheduleOverhead
SPARK-ScheduleSkew: scheduling skew
SPARK-SlowTask: slow task
TEZ-DataSkew: data skew
TEZ-MapperDataSkew: Map data skew
TEZ-ReducerDataSkew: Reduce data skew
TEZ-TezMemWaste: Memory resource waste
TEZ-TezSlowTask: slow task
TEZ-TezTaskGC:TasksGC
                     * @param _ruleID Insight rule ID.
HIVE-ScanManyMeta: excessively large amount of scanned metadata
HIVE-ScanManyPartition: large table scan
HIVE-SlowCompile: excessively long compilation durationHIVE-UnSuitableConfig: improper parameter
MAPREDUCE-MapperDataSkew: Map data skew
MAPREDUCE-MapperMemWaste: MapMemory resource waste
MAPREDUCE-MapperSlowTask: Map slow task
MAPREDUCE-MapperTaskGC:MapperTaskGC
MAPREDUCE-MemExceeded: peak memory exceeded
MAPREDUCE-ReducerDataSkew: Reduce data skew
MAPREDUCE-ReducerMemWaste: ReduceMemory resource waste
MAPREDUCE-ReducerSlowTask: Reduce slow task
MAPREDUCE-ReducerTaskGC:ReducerTaskGC
MAPREDUCE-SchedulingDelay: scheduling delay
SPARK-CpuWaste: CPU resource waste
SPARK-DataSkew: data skew
SPARK-ExecutorGC:ExecutorGC
SPARK-MemExceeded: peak memory exceeded
SPARK-MemWaste: Memory resource waste
SPARK-ScheduleOverhead:ScheduleOverhead
SPARK-ScheduleSkew: scheduling skew
SPARK-SlowTask: slow task
TEZ-DataSkew: data skew
TEZ-MapperDataSkew: Map data skew
TEZ-ReducerDataSkew: Reduce data skew
TEZ-TezMemWaste: Memory resource waste
TEZ-TezSlowTask: slow task
TEZ-TezTaskGC:TasksGC
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取Insight rule name. Refer to the description of RuleID.
                     * @return RuleName Insight rule name. Refer to the description of RuleID.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Insight rule name. Refer to the description of RuleID.
                     * @param _ruleName Insight rule name. Refer to the description of RuleID.
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Insight rule interpretation.
                     * @return RuleExplain Insight rule interpretation.
                     * 
                     */
                    std::string GetRuleExplain() const;

                    /**
                     * 设置Insight rule interpretation.
                     * @param _ruleExplain Insight rule interpretation.
                     * 
                     */
                    void SetRuleExplain(const std::string& _ruleExplain);

                    /**
                     * 判断参数 RuleExplain 是否已赋值
                     * @return RuleExplain 是否已赋值
                     * 
                     */
                    bool RuleExplainHasBeenSet() const;

                    /**
                     * 获取Details.
                     * @return Detail Details.
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置Details.
                     * @param _detail Details.
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Recommended message.
                     * @return Suggestion Recommended message.
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Recommended message.
                     * @param _suggestion Recommended message.
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取Insight anomaly metric value. For insight items of the same type, a larger value indicates higher severity. Insight items of different types are not comparable.
                     * @return Value Insight anomaly metric value. For insight items of the same type, a larger value indicates higher severity. Insight items of different types are not comparable.
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置Insight anomaly metric value. For insight items of the same type, a larger value indicates higher severity. Insight items of different types are not comparable.
                     * @param _value Insight anomaly metric value. For insight items of the same type, a larger value indicates higher severity. Insight items of different types are not comparable.
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Scheduling task execution ID.
                     * @return ScheduleTaskExecID Scheduling task execution ID.
                     * 
                     */
                    std::string GetScheduleTaskExecID() const;

                    /**
                     * 设置Scheduling task execution ID.
                     * @param _scheduleTaskExecID Scheduling task execution ID.
                     * 
                     */
                    void SetScheduleTaskExecID(const std::string& _scheduleTaskExecID);

                    /**
                     * 判断参数 ScheduleTaskExecID 是否已赋值
                     * @return ScheduleTaskExecID 是否已赋值
                     * 
                     */
                    bool ScheduleTaskExecIDHasBeenSet() const;

                    /**
                     * 获取Scheduling flow (DAG).
                     * @return ScheduleFlowName Scheduling flow (DAG).
                     * 
                     */
                    std::string GetScheduleFlowName() const;

                    /**
                     * 设置Scheduling flow (DAG).
                     * @param _scheduleFlowName Scheduling flow (DAG).
                     * 
                     */
                    void SetScheduleFlowName(const std::string& _scheduleFlowName);

                    /**
                     * 判断参数 ScheduleFlowName 是否已赋值
                     * @return ScheduleFlowName 是否已赋值
                     * 
                     */
                    bool ScheduleFlowNameHasBeenSet() const;

                    /**
                     * 获取Task node in the scheduling flow.
                     * @return ScheduleTaskName Task node in the scheduling flow.
                     * 
                     */
                    std::string GetScheduleTaskName() const;

                    /**
                     * 设置Task node in the scheduling flow.
                     * @param _scheduleTaskName Task node in the scheduling flow.
                     * 
                     */
                    void SetScheduleTaskName(const std::string& _scheduleTaskName);

                    /**
                     * 判断参数 ScheduleTaskName 是否已赋值
                     * @return ScheduleTaskName 是否已赋值
                     * 
                     */
                    bool ScheduleTaskNameHasBeenSet() const;

                    /**
                     * 获取Some core configurations of the YARN task.
                     * @return JobConf Some core configurations of the YARN task.
                     * 
                     */
                    std::string GetJobConf() const;

                    /**
                     * 设置Some core configurations of the YARN task.
                     * @param _jobConf Some core configurations of the YARN task.
                     * 
                     */
                    void SetJobConf(const std::string& _jobConf);

                    /**
                     * 判断参数 JobConf 是否已赋值
                     * @return JobConf 是否已赋值
                     * 
                     */
                    bool JobConfHasBeenSet() const;

                    /**
                     * 获取Insight into structured information.
                     * @return Context Insight into structured information.
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置Insight into structured information.
                     * @param _context Insight into structured information.
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                private:

                    /**
                     * When Type is set to HIVE, the value is the Hive query ID; when Type is set to MAPREDUCE, SPARK or TEZ, the value is YarnAppID.
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Insight application type. Valid values: HIVE, SPARK, MAPREDUCE, and TEZ.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Insight rule ID.
HIVE-ScanManyMeta: excessively large amount of scanned metadata
HIVE-ScanManyPartition: large table scan
HIVE-SlowCompile: excessively long compilation durationHIVE-UnSuitableConfig: improper parameter
MAPREDUCE-MapperDataSkew: Map data skew
MAPREDUCE-MapperMemWaste: MapMemory resource waste
MAPREDUCE-MapperSlowTask: Map slow task
MAPREDUCE-MapperTaskGC:MapperTaskGC
MAPREDUCE-MemExceeded: peak memory exceeded
MAPREDUCE-ReducerDataSkew: Reduce data skew
MAPREDUCE-ReducerMemWaste: ReduceMemory resource waste
MAPREDUCE-ReducerSlowTask: Reduce slow task
MAPREDUCE-ReducerTaskGC:ReducerTaskGC
MAPREDUCE-SchedulingDelay: scheduling delay
SPARK-CpuWaste: CPU resource waste
SPARK-DataSkew: data skew
SPARK-ExecutorGC:ExecutorGC
SPARK-MemExceeded: peak memory exceeded
SPARK-MemWaste: Memory resource waste
SPARK-ScheduleOverhead:ScheduleOverhead
SPARK-ScheduleSkew: scheduling skew
SPARK-SlowTask: slow task
TEZ-DataSkew: data skew
TEZ-MapperDataSkew: Map data skew
TEZ-ReducerDataSkew: Reduce data skew
TEZ-TezMemWaste: Memory resource waste
TEZ-TezSlowTask: slow task
TEZ-TezTaskGC:TasksGC
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Insight rule name. Refer to the description of RuleID.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Insight rule interpretation.
                     */
                    std::string m_ruleExplain;
                    bool m_ruleExplainHasBeenSet;

                    /**
                     * Details.
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Recommended message.
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Insight anomaly metric value. For insight items of the same type, a larger value indicates higher severity. Insight items of different types are not comparable.
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Scheduling task execution ID.
                     */
                    std::string m_scheduleTaskExecID;
                    bool m_scheduleTaskExecIDHasBeenSet;

                    /**
                     * Scheduling flow (DAG).
                     */
                    std::string m_scheduleFlowName;
                    bool m_scheduleFlowNameHasBeenSet;

                    /**
                     * Task node in the scheduling flow.
                     */
                    std::string m_scheduleTaskName;
                    bool m_scheduleTaskNameHasBeenSet;

                    /**
                     * Some core configurations of the YARN task.
                     */
                    std::string m_jobConf;
                    bool m_jobConfHasBeenSet;

                    /**
                     * Insight into structured information.
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INSIGHTRESULT_H_
