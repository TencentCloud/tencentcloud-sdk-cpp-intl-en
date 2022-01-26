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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_SLOWLOGTOPSQLITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_SLOWLOGTOPSQLITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * Top slow SQL statements
                */
                class SlowLogTopSqlItem : public AbstractModel
                {
                public:
                    SlowLogTopSqlItem();
                    ~SlowLogTopSqlItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total SQL lock wait time
                     * @return LockTime Total SQL lock wait time
                     */
                    double GetLockTime() const;

                    /**
                     * 设置Total SQL lock wait time
                     * @param LockTime Total SQL lock wait time
                     */
                    void SetLockTime(const double& _lockTime);

                    /**
                     * 判断参数 LockTime 是否已赋值
                     * @return LockTime 是否已赋值
                     */
                    bool LockTimeHasBeenSet() const;

                    /**
                     * 获取Maximum lock wait time
                     * @return LockTimeMax Maximum lock wait time
                     */
                    double GetLockTimeMax() const;

                    /**
                     * 设置Maximum lock wait time
                     * @param LockTimeMax Maximum lock wait time
                     */
                    void SetLockTimeMax(const double& _lockTimeMax);

                    /**
                     * 判断参数 LockTimeMax 是否已赋值
                     * @return LockTimeMax 是否已赋值
                     */
                    bool LockTimeMaxHasBeenSet() const;

                    /**
                     * 获取Minimum lock wait time
                     * @return LockTimeMin Minimum lock wait time
                     */
                    double GetLockTimeMin() const;

                    /**
                     * 设置Minimum lock wait time
                     * @param LockTimeMin Minimum lock wait time
                     */
                    void SetLockTimeMin(const double& _lockTimeMin);

                    /**
                     * 判断参数 LockTimeMin 是否已赋值
                     * @return LockTimeMin 是否已赋值
                     */
                    bool LockTimeMinHasBeenSet() const;

                    /**
                     * 获取Total number of scanned rows
                     * @return RowsExamined Total number of scanned rows
                     */
                    int64_t GetRowsExamined() const;

                    /**
                     * 设置Total number of scanned rows
                     * @param RowsExamined Total number of scanned rows
                     */
                    void SetRowsExamined(const int64_t& _rowsExamined);

                    /**
                     * 判断参数 RowsExamined 是否已赋值
                     * @return RowsExamined 是否已赋值
                     */
                    bool RowsExaminedHasBeenSet() const;

                    /**
                     * 获取Maximum number of scanned rows
                     * @return RowsExaminedMax Maximum number of scanned rows
                     */
                    int64_t GetRowsExaminedMax() const;

                    /**
                     * 设置Maximum number of scanned rows
                     * @param RowsExaminedMax Maximum number of scanned rows
                     */
                    void SetRowsExaminedMax(const int64_t& _rowsExaminedMax);

                    /**
                     * 判断参数 RowsExaminedMax 是否已赋值
                     * @return RowsExaminedMax 是否已赋值
                     */
                    bool RowsExaminedMaxHasBeenSet() const;

                    /**
                     * 获取Minimum number of scanned rows
                     * @return RowsExaminedMin Minimum number of scanned rows
                     */
                    int64_t GetRowsExaminedMin() const;

                    /**
                     * 设置Minimum number of scanned rows
                     * @param RowsExaminedMin Minimum number of scanned rows
                     */
                    void SetRowsExaminedMin(const int64_t& _rowsExaminedMin);

                    /**
                     * 判断参数 RowsExaminedMin 是否已赋值
                     * @return RowsExaminedMin 是否已赋值
                     */
                    bool RowsExaminedMinHasBeenSet() const;

                    /**
                     * 获取Total duration
                     * @return QueryTime Total duration
                     */
                    double GetQueryTime() const;

                    /**
                     * 设置Total duration
                     * @param QueryTime Total duration
                     */
                    void SetQueryTime(const double& _queryTime);

                    /**
                     * 判断参数 QueryTime 是否已赋值
                     * @return QueryTime 是否已赋值
                     */
                    bool QueryTimeHasBeenSet() const;

                    /**
                     * 获取Maximum execution time
                     * @return QueryTimeMax Maximum execution time
                     */
                    double GetQueryTimeMax() const;

                    /**
                     * 设置Maximum execution time
                     * @param QueryTimeMax Maximum execution time
                     */
                    void SetQueryTimeMax(const double& _queryTimeMax);

                    /**
                     * 判断参数 QueryTimeMax 是否已赋值
                     * @return QueryTimeMax 是否已赋值
                     */
                    bool QueryTimeMaxHasBeenSet() const;

                    /**
                     * 获取Minimum execution time
                     * @return QueryTimeMin Minimum execution time
                     */
                    double GetQueryTimeMin() const;

                    /**
                     * 设置Minimum execution time
                     * @param QueryTimeMin Minimum execution time
                     */
                    void SetQueryTimeMin(const double& _queryTimeMin);

                    /**
                     * 判断参数 QueryTimeMin 是否已赋值
                     * @return QueryTimeMin 是否已赋值
                     */
                    bool QueryTimeMinHasBeenSet() const;

                    /**
                     * 获取Total number of returned rows
                     * @return RowsSent Total number of returned rows
                     */
                    int64_t GetRowsSent() const;

                    /**
                     * 设置Total number of returned rows
                     * @param RowsSent Total number of returned rows
                     */
                    void SetRowsSent(const int64_t& _rowsSent);

                    /**
                     * 判断参数 RowsSent 是否已赋值
                     * @return RowsSent 是否已赋值
                     */
                    bool RowsSentHasBeenSet() const;

                    /**
                     * 获取Maximum number of returned rows
                     * @return RowsSentMax Maximum number of returned rows
                     */
                    int64_t GetRowsSentMax() const;

                    /**
                     * 设置Maximum number of returned rows
                     * @param RowsSentMax Maximum number of returned rows
                     */
                    void SetRowsSentMax(const int64_t& _rowsSentMax);

                    /**
                     * 判断参数 RowsSentMax 是否已赋值
                     * @return RowsSentMax 是否已赋值
                     */
                    bool RowsSentMaxHasBeenSet() const;

                    /**
                     * 获取Minimum number of returned rows
                     * @return RowsSentMin Minimum number of returned rows
                     */
                    int64_t GetRowsSentMin() const;

                    /**
                     * 设置Minimum number of returned rows
                     * @param RowsSentMin Minimum number of returned rows
                     */
                    void SetRowsSentMin(const int64_t& _rowsSentMin);

                    /**
                     * 判断参数 RowsSentMin 是否已赋值
                     * @return RowsSentMin 是否已赋值
                     */
                    bool RowsSentMinHasBeenSet() const;

                    /**
                     * 获取Number of executions
                     * @return ExecTimes Number of executions
                     */
                    int64_t GetExecTimes() const;

                    /**
                     * 设置Number of executions
                     * @param ExecTimes Number of executions
                     */
                    void SetExecTimes(const int64_t& _execTimes);

                    /**
                     * 判断参数 ExecTimes 是否已赋值
                     * @return ExecTimes 是否已赋值
                     */
                    bool ExecTimesHasBeenSet() const;

                    /**
                     * 获取SQL template
                     * @return SqlTemplate SQL template
                     */
                    std::string GetSqlTemplate() const;

                    /**
                     * 设置SQL template
                     * @param SqlTemplate SQL template
                     */
                    void SetSqlTemplate(const std::string& _sqlTemplate);

                    /**
                     * 判断参数 SqlTemplate 是否已赋值
                     * @return SqlTemplate 是否已赋值
                     */
                    bool SqlTemplateHasBeenSet() const;

                    /**
                     * 获取SQL with parameter (random)
                     * @return SqlText SQL with parameter (random)
                     */
                    std::string GetSqlText() const;

                    /**
                     * 设置SQL with parameter (random)
                     * @param SqlText SQL with parameter (random)
                     */
                    void SetSqlText(const std::string& _sqlText);

                    /**
                     * 判断参数 SqlText 是否已赋值
                     * @return SqlText 是否已赋值
                     */
                    bool SqlTextHasBeenSet() const;

                    /**
                     * 获取Database name
                     * @return Schema Database name
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置Database name
                     * @param Schema Database name
                     */
                    void SetSchema(const std::string& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取Ratio of total duration
                     * @return QueryTimeRatio Ratio of total duration
                     */
                    double GetQueryTimeRatio() const;

                    /**
                     * 设置Ratio of total duration
                     * @param QueryTimeRatio Ratio of total duration
                     */
                    void SetQueryTimeRatio(const double& _queryTimeRatio);

                    /**
                     * 判断参数 QueryTimeRatio 是否已赋值
                     * @return QueryTimeRatio 是否已赋值
                     */
                    bool QueryTimeRatioHasBeenSet() const;

                    /**
                     * 获取Ratio of total SQL lock wait time
                     * @return LockTimeRatio Ratio of total SQL lock wait time
                     */
                    double GetLockTimeRatio() const;

                    /**
                     * 设置Ratio of total SQL lock wait time
                     * @param LockTimeRatio Ratio of total SQL lock wait time
                     */
                    void SetLockTimeRatio(const double& _lockTimeRatio);

                    /**
                     * 判断参数 LockTimeRatio 是否已赋值
                     * @return LockTimeRatio 是否已赋值
                     */
                    bool LockTimeRatioHasBeenSet() const;

                    /**
                     * 获取Ratio of total number of scanned rows
                     * @return RowsExaminedRatio Ratio of total number of scanned rows
                     */
                    double GetRowsExaminedRatio() const;

                    /**
                     * 设置Ratio of total number of scanned rows
                     * @param RowsExaminedRatio Ratio of total number of scanned rows
                     */
                    void SetRowsExaminedRatio(const double& _rowsExaminedRatio);

                    /**
                     * 判断参数 RowsExaminedRatio 是否已赋值
                     * @return RowsExaminedRatio 是否已赋值
                     */
                    bool RowsExaminedRatioHasBeenSet() const;

                    /**
                     * 获取Ratio of total number of returned rows
                     * @return RowsSentRatio Ratio of total number of returned rows
                     */
                    double GetRowsSentRatio() const;

                    /**
                     * 设置Ratio of total number of returned rows
                     * @param RowsSentRatio Ratio of total number of returned rows
                     */
                    void SetRowsSentRatio(const double& _rowsSentRatio);

                    /**
                     * 判断参数 RowsSentRatio 是否已赋值
                     * @return RowsSentRatio 是否已赋值
                     */
                    bool RowsSentRatioHasBeenSet() const;

                    /**
                     * 获取Average execution time
                     * @return QueryTimeAvg Average execution time
                     */
                    double GetQueryTimeAvg() const;

                    /**
                     * 设置Average execution time
                     * @param QueryTimeAvg Average execution time
                     */
                    void SetQueryTimeAvg(const double& _queryTimeAvg);

                    /**
                     * 判断参数 QueryTimeAvg 是否已赋值
                     * @return QueryTimeAvg 是否已赋值
                     */
                    bool QueryTimeAvgHasBeenSet() const;

                    /**
                     * 获取Average number of rows returned
                     * @return RowsSentAvg Average number of rows returned
                     */
                    double GetRowsSentAvg() const;

                    /**
                     * 设置Average number of rows returned
                     * @param RowsSentAvg Average number of rows returned
                     */
                    void SetRowsSentAvg(const double& _rowsSentAvg);

                    /**
                     * 判断参数 RowsSentAvg 是否已赋值
                     * @return RowsSentAvg 是否已赋值
                     */
                    bool RowsSentAvgHasBeenSet() const;

                    /**
                     * 获取Average lock wait time
                     * @return LockTimeAvg Average lock wait time
                     */
                    double GetLockTimeAvg() const;

                    /**
                     * 设置Average lock wait time
                     * @param LockTimeAvg Average lock wait time
                     */
                    void SetLockTimeAvg(const double& _lockTimeAvg);

                    /**
                     * 判断参数 LockTimeAvg 是否已赋值
                     * @return LockTimeAvg 是否已赋值
                     */
                    bool LockTimeAvgHasBeenSet() const;

                    /**
                     * 获取Average number of rows scanned
                     * @return RowsExaminedAvg Average number of rows scanned
                     */
                    double GetRowsExaminedAvg() const;

                    /**
                     * 设置Average number of rows scanned
                     * @param RowsExaminedAvg Average number of rows scanned
                     */
                    void SetRowsExaminedAvg(const double& _rowsExaminedAvg);

                    /**
                     * 判断参数 RowsExaminedAvg 是否已赋值
                     * @return RowsExaminedAvg 是否已赋值
                     */
                    bool RowsExaminedAvgHasBeenSet() const;

                private:

                    /**
                     * Total SQL lock wait time
                     */
                    double m_lockTime;
                    bool m_lockTimeHasBeenSet;

                    /**
                     * Maximum lock wait time
                     */
                    double m_lockTimeMax;
                    bool m_lockTimeMaxHasBeenSet;

                    /**
                     * Minimum lock wait time
                     */
                    double m_lockTimeMin;
                    bool m_lockTimeMinHasBeenSet;

                    /**
                     * Total number of scanned rows
                     */
                    int64_t m_rowsExamined;
                    bool m_rowsExaminedHasBeenSet;

                    /**
                     * Maximum number of scanned rows
                     */
                    int64_t m_rowsExaminedMax;
                    bool m_rowsExaminedMaxHasBeenSet;

                    /**
                     * Minimum number of scanned rows
                     */
                    int64_t m_rowsExaminedMin;
                    bool m_rowsExaminedMinHasBeenSet;

                    /**
                     * Total duration
                     */
                    double m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * Maximum execution time
                     */
                    double m_queryTimeMax;
                    bool m_queryTimeMaxHasBeenSet;

                    /**
                     * Minimum execution time
                     */
                    double m_queryTimeMin;
                    bool m_queryTimeMinHasBeenSet;

                    /**
                     * Total number of returned rows
                     */
                    int64_t m_rowsSent;
                    bool m_rowsSentHasBeenSet;

                    /**
                     * Maximum number of returned rows
                     */
                    int64_t m_rowsSentMax;
                    bool m_rowsSentMaxHasBeenSet;

                    /**
                     * Minimum number of returned rows
                     */
                    int64_t m_rowsSentMin;
                    bool m_rowsSentMinHasBeenSet;

                    /**
                     * Number of executions
                     */
                    int64_t m_execTimes;
                    bool m_execTimesHasBeenSet;

                    /**
                     * SQL template
                     */
                    std::string m_sqlTemplate;
                    bool m_sqlTemplateHasBeenSet;

                    /**
                     * SQL with parameter (random)
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * Database name
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * Ratio of total duration
                     */
                    double m_queryTimeRatio;
                    bool m_queryTimeRatioHasBeenSet;

                    /**
                     * Ratio of total SQL lock wait time
                     */
                    double m_lockTimeRatio;
                    bool m_lockTimeRatioHasBeenSet;

                    /**
                     * Ratio of total number of scanned rows
                     */
                    double m_rowsExaminedRatio;
                    bool m_rowsExaminedRatioHasBeenSet;

                    /**
                     * Ratio of total number of returned rows
                     */
                    double m_rowsSentRatio;
                    bool m_rowsSentRatioHasBeenSet;

                    /**
                     * Average execution time
                     */
                    double m_queryTimeAvg;
                    bool m_queryTimeAvgHasBeenSet;

                    /**
                     * Average number of rows returned
                     */
                    double m_rowsSentAvg;
                    bool m_rowsSentAvgHasBeenSet;

                    /**
                     * Average lock wait time
                     */
                    double m_lockTimeAvg;
                    bool m_lockTimeAvgHasBeenSet;

                    /**
                     * Average number of rows scanned
                     */
                    double m_rowsExaminedAvg;
                    bool m_rowsExaminedAvgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_SLOWLOGTOPSQLITEM_H_
