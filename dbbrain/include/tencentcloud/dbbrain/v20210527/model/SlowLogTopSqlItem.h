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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SLOWLOGTOPSQLITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SLOWLOGTOPSQLITEM_H_

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
        namespace V20210527
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
                     * 获取Total SQL lock wait time in seconds.
                     * @return LockTime Total SQL lock wait time in seconds.
                     * 
                     */
                    double GetLockTime() const;

                    /**
                     * 设置Total SQL lock wait time in seconds.
                     * @param _lockTime Total SQL lock wait time in seconds.
                     * 
                     */
                    void SetLockTime(const double& _lockTime);

                    /**
                     * 判断参数 LockTime 是否已赋值
                     * @return LockTime 是否已赋值
                     * 
                     */
                    bool LockTimeHasBeenSet() const;

                    /**
                     * 获取Maximum lock wait time in seconds
                     * @return LockTimeMax Maximum lock wait time in seconds
                     * 
                     */
                    double GetLockTimeMax() const;

                    /**
                     * 设置Maximum lock wait time in seconds
                     * @param _lockTimeMax Maximum lock wait time in seconds
                     * 
                     */
                    void SetLockTimeMax(const double& _lockTimeMax);

                    /**
                     * 判断参数 LockTimeMax 是否已赋值
                     * @return LockTimeMax 是否已赋值
                     * 
                     */
                    bool LockTimeMaxHasBeenSet() const;

                    /**
                     * 获取Minimum lock wait time in seconds
                     * @return LockTimeMin Minimum lock wait time in seconds
                     * 
                     */
                    double GetLockTimeMin() const;

                    /**
                     * 设置Minimum lock wait time in seconds
                     * @param _lockTimeMin Minimum lock wait time in seconds
                     * 
                     */
                    void SetLockTimeMin(const double& _lockTimeMin);

                    /**
                     * 判断参数 LockTimeMin 是否已赋值
                     * @return LockTimeMin 是否已赋值
                     * 
                     */
                    bool LockTimeMinHasBeenSet() const;

                    /**
                     * 获取Total number of scanned rows
                     * @return RowsExamined Total number of scanned rows
                     * 
                     */
                    int64_t GetRowsExamined() const;

                    /**
                     * 设置Total number of scanned rows
                     * @param _rowsExamined Total number of scanned rows
                     * 
                     */
                    void SetRowsExamined(const int64_t& _rowsExamined);

                    /**
                     * 判断参数 RowsExamined 是否已赋值
                     * @return RowsExamined 是否已赋值
                     * 
                     */
                    bool RowsExaminedHasBeenSet() const;

                    /**
                     * 获取Maximum number of scanned rows
                     * @return RowsExaminedMax Maximum number of scanned rows
                     * 
                     */
                    int64_t GetRowsExaminedMax() const;

                    /**
                     * 设置Maximum number of scanned rows
                     * @param _rowsExaminedMax Maximum number of scanned rows
                     * 
                     */
                    void SetRowsExaminedMax(const int64_t& _rowsExaminedMax);

                    /**
                     * 判断参数 RowsExaminedMax 是否已赋值
                     * @return RowsExaminedMax 是否已赋值
                     * 
                     */
                    bool RowsExaminedMaxHasBeenSet() const;

                    /**
                     * 获取Minimum number of scanned rows
                     * @return RowsExaminedMin Minimum number of scanned rows
                     * 
                     */
                    int64_t GetRowsExaminedMin() const;

                    /**
                     * 设置Minimum number of scanned rows
                     * @param _rowsExaminedMin Minimum number of scanned rows
                     * 
                     */
                    void SetRowsExaminedMin(const int64_t& _rowsExaminedMin);

                    /**
                     * 判断参数 RowsExaminedMin 是否已赋值
                     * @return RowsExaminedMin 是否已赋值
                     * 
                     */
                    bool RowsExaminedMinHasBeenSet() const;

                    /**
                     * 获取Total duration in seconds
                     * @return QueryTime Total duration in seconds
                     * 
                     */
                    double GetQueryTime() const;

                    /**
                     * 设置Total duration in seconds
                     * @param _queryTime Total duration in seconds
                     * 
                     */
                    void SetQueryTime(const double& _queryTime);

                    /**
                     * 判断参数 QueryTime 是否已赋值
                     * @return QueryTime 是否已赋值
                     * 
                     */
                    bool QueryTimeHasBeenSet() const;

                    /**
                     * 获取Maximum execution time in seconds
                     * @return QueryTimeMax Maximum execution time in seconds
                     * 
                     */
                    double GetQueryTimeMax() const;

                    /**
                     * 设置Maximum execution time in seconds
                     * @param _queryTimeMax Maximum execution time in seconds
                     * 
                     */
                    void SetQueryTimeMax(const double& _queryTimeMax);

                    /**
                     * 判断参数 QueryTimeMax 是否已赋值
                     * @return QueryTimeMax 是否已赋值
                     * 
                     */
                    bool QueryTimeMaxHasBeenSet() const;

                    /**
                     * 获取Minimum execution time in seconds
                     * @return QueryTimeMin Minimum execution time in seconds
                     * 
                     */
                    double GetQueryTimeMin() const;

                    /**
                     * 设置Minimum execution time in seconds
                     * @param _queryTimeMin Minimum execution time in seconds
                     * 
                     */
                    void SetQueryTimeMin(const double& _queryTimeMin);

                    /**
                     * 判断参数 QueryTimeMin 是否已赋值
                     * @return QueryTimeMin 是否已赋值
                     * 
                     */
                    bool QueryTimeMinHasBeenSet() const;

                    /**
                     * 获取Total number of returned rows
                     * @return RowsSent Total number of returned rows
                     * 
                     */
                    int64_t GetRowsSent() const;

                    /**
                     * 设置Total number of returned rows
                     * @param _rowsSent Total number of returned rows
                     * 
                     */
                    void SetRowsSent(const int64_t& _rowsSent);

                    /**
                     * 判断参数 RowsSent 是否已赋值
                     * @return RowsSent 是否已赋值
                     * 
                     */
                    bool RowsSentHasBeenSet() const;

                    /**
                     * 获取Maximum number of returned rows
                     * @return RowsSentMax Maximum number of returned rows
                     * 
                     */
                    int64_t GetRowsSentMax() const;

                    /**
                     * 设置Maximum number of returned rows
                     * @param _rowsSentMax Maximum number of returned rows
                     * 
                     */
                    void SetRowsSentMax(const int64_t& _rowsSentMax);

                    /**
                     * 判断参数 RowsSentMax 是否已赋值
                     * @return RowsSentMax 是否已赋值
                     * 
                     */
                    bool RowsSentMaxHasBeenSet() const;

                    /**
                     * 获取Minimum number of returned rows
                     * @return RowsSentMin Minimum number of returned rows
                     * 
                     */
                    int64_t GetRowsSentMin() const;

                    /**
                     * 设置Minimum number of returned rows
                     * @param _rowsSentMin Minimum number of returned rows
                     * 
                     */
                    void SetRowsSentMin(const int64_t& _rowsSentMin);

                    /**
                     * 判断参数 RowsSentMin 是否已赋值
                     * @return RowsSentMin 是否已赋值
                     * 
                     */
                    bool RowsSentMinHasBeenSet() const;

                    /**
                     * 获取Number of executions
                     * @return ExecTimes Number of executions
                     * 
                     */
                    int64_t GetExecTimes() const;

                    /**
                     * 设置Number of executions
                     * @param _execTimes Number of executions
                     * 
                     */
                    void SetExecTimes(const int64_t& _execTimes);

                    /**
                     * 判断参数 ExecTimes 是否已赋值
                     * @return ExecTimes 是否已赋值
                     * 
                     */
                    bool ExecTimesHasBeenSet() const;

                    /**
                     * 获取SQL template
                     * @return SqlTemplate SQL template
                     * 
                     */
                    std::string GetSqlTemplate() const;

                    /**
                     * 设置SQL template
                     * @param _sqlTemplate SQL template
                     * 
                     */
                    void SetSqlTemplate(const std::string& _sqlTemplate);

                    /**
                     * 判断参数 SqlTemplate 是否已赋值
                     * @return SqlTemplate 是否已赋值
                     * 
                     */
                    bool SqlTemplateHasBeenSet() const;

                    /**
                     * 获取SQL statements with parameter (random)
                     * @return SqlText SQL statements with parameter (random)
                     * 
                     */
                    std::string GetSqlText() const;

                    /**
                     * 设置SQL statements with parameter (random)
                     * @param _sqlText SQL statements with parameter (random)
                     * 
                     */
                    void SetSqlText(const std::string& _sqlText);

                    /**
                     * 判断参数 SqlText 是否已赋值
                     * @return SqlText 是否已赋值
                     * 
                     */
                    bool SqlTextHasBeenSet() const;

                    /**
                     * 获取Database name
                     * @return Schema Database name
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置Database name
                     * @param _schema Database name
                     * 
                     */
                    void SetSchema(const std::string& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取Ratio of the total duration in %
                     * @return QueryTimeRatio Ratio of the total duration in %
                     * 
                     */
                    double GetQueryTimeRatio() const;

                    /**
                     * 设置Ratio of the total duration in %
                     * @param _queryTimeRatio Ratio of the total duration in %
                     * 
                     */
                    void SetQueryTimeRatio(const double& _queryTimeRatio);

                    /**
                     * 判断参数 QueryTimeRatio 是否已赋值
                     * @return QueryTimeRatio 是否已赋值
                     * 
                     */
                    bool QueryTimeRatioHasBeenSet() const;

                    /**
                     * 获取Ratio of the total SQL lock wait time in %
                     * @return LockTimeRatio Ratio of the total SQL lock wait time in %
                     * 
                     */
                    double GetLockTimeRatio() const;

                    /**
                     * 设置Ratio of the total SQL lock wait time in %
                     * @param _lockTimeRatio Ratio of the total SQL lock wait time in %
                     * 
                     */
                    void SetLockTimeRatio(const double& _lockTimeRatio);

                    /**
                     * 判断参数 LockTimeRatio 是否已赋值
                     * @return LockTimeRatio 是否已赋值
                     * 
                     */
                    bool LockTimeRatioHasBeenSet() const;

                    /**
                     * 获取Ratio of total number of scanned rows in %
                     * @return RowsExaminedRatio Ratio of total number of scanned rows in %
                     * 
                     */
                    double GetRowsExaminedRatio() const;

                    /**
                     * 设置Ratio of total number of scanned rows in %
                     * @param _rowsExaminedRatio Ratio of total number of scanned rows in %
                     * 
                     */
                    void SetRowsExaminedRatio(const double& _rowsExaminedRatio);

                    /**
                     * 判断参数 RowsExaminedRatio 是否已赋值
                     * @return RowsExaminedRatio 是否已赋值
                     * 
                     */
                    bool RowsExaminedRatioHasBeenSet() const;

                    /**
                     * 获取Ratio of total number of returned rows in %
                     * @return RowsSentRatio Ratio of total number of returned rows in %
                     * 
                     */
                    double GetRowsSentRatio() const;

                    /**
                     * 设置Ratio of total number of returned rows in %
                     * @param _rowsSentRatio Ratio of total number of returned rows in %
                     * 
                     */
                    void SetRowsSentRatio(const double& _rowsSentRatio);

                    /**
                     * 判断参数 RowsSentRatio 是否已赋值
                     * @return RowsSentRatio 是否已赋值
                     * 
                     */
                    bool RowsSentRatioHasBeenSet() const;

                    /**
                     * 获取Average execution time in seconds
                     * @return QueryTimeAvg Average execution time in seconds
                     * 
                     */
                    double GetQueryTimeAvg() const;

                    /**
                     * 设置Average execution time in seconds
                     * @param _queryTimeAvg Average execution time in seconds
                     * 
                     */
                    void SetQueryTimeAvg(const double& _queryTimeAvg);

                    /**
                     * 判断参数 QueryTimeAvg 是否已赋值
                     * @return QueryTimeAvg 是否已赋值
                     * 
                     */
                    bool QueryTimeAvgHasBeenSet() const;

                    /**
                     * 获取Average number of returned rows
                     * @return RowsSentAvg Average number of returned rows
                     * 
                     */
                    double GetRowsSentAvg() const;

                    /**
                     * 设置Average number of returned rows
                     * @param _rowsSentAvg Average number of returned rows
                     * 
                     */
                    void SetRowsSentAvg(const double& _rowsSentAvg);

                    /**
                     * 判断参数 RowsSentAvg 是否已赋值
                     * @return RowsSentAvg 是否已赋值
                     * 
                     */
                    bool RowsSentAvgHasBeenSet() const;

                    /**
                     * 获取Average lock wait time in seconds
                     * @return LockTimeAvg Average lock wait time in seconds
                     * 
                     */
                    double GetLockTimeAvg() const;

                    /**
                     * 设置Average lock wait time in seconds
                     * @param _lockTimeAvg Average lock wait time in seconds
                     * 
                     */
                    void SetLockTimeAvg(const double& _lockTimeAvg);

                    /**
                     * 判断参数 LockTimeAvg 是否已赋值
                     * @return LockTimeAvg 是否已赋值
                     * 
                     */
                    bool LockTimeAvgHasBeenSet() const;

                    /**
                     * 获取Average number of scanned rows
                     * @return RowsExaminedAvg Average number of scanned rows
                     * 
                     */
                    double GetRowsExaminedAvg() const;

                    /**
                     * 设置Average number of scanned rows
                     * @param _rowsExaminedAvg Average number of scanned rows
                     * 
                     */
                    void SetRowsExaminedAvg(const double& _rowsExaminedAvg);

                    /**
                     * 判断参数 RowsExaminedAvg 是否已赋值
                     * @return RowsExaminedAvg 是否已赋值
                     * 
                     */
                    bool RowsExaminedAvgHasBeenSet() const;

                    /**
                     * 获取MD5 value of the SQL template
                     * @return Md5 MD5 value of the SQL template
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置MD5 value of the SQL template
                     * @param _md5 MD5 value of the SQL template
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                private:

                    /**
                     * Total SQL lock wait time in seconds.
                     */
                    double m_lockTime;
                    bool m_lockTimeHasBeenSet;

                    /**
                     * Maximum lock wait time in seconds
                     */
                    double m_lockTimeMax;
                    bool m_lockTimeMaxHasBeenSet;

                    /**
                     * Minimum lock wait time in seconds
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
                     * Total duration in seconds
                     */
                    double m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * Maximum execution time in seconds
                     */
                    double m_queryTimeMax;
                    bool m_queryTimeMaxHasBeenSet;

                    /**
                     * Minimum execution time in seconds
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
                     * SQL statements with parameter (random)
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * Database name
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * Ratio of the total duration in %
                     */
                    double m_queryTimeRatio;
                    bool m_queryTimeRatioHasBeenSet;

                    /**
                     * Ratio of the total SQL lock wait time in %
                     */
                    double m_lockTimeRatio;
                    bool m_lockTimeRatioHasBeenSet;

                    /**
                     * Ratio of total number of scanned rows in %
                     */
                    double m_rowsExaminedRatio;
                    bool m_rowsExaminedRatioHasBeenSet;

                    /**
                     * Ratio of total number of returned rows in %
                     */
                    double m_rowsSentRatio;
                    bool m_rowsSentRatioHasBeenSet;

                    /**
                     * Average execution time in seconds
                     */
                    double m_queryTimeAvg;
                    bool m_queryTimeAvgHasBeenSet;

                    /**
                     * Average number of returned rows
                     */
                    double m_rowsSentAvg;
                    bool m_rowsSentAvgHasBeenSet;

                    /**
                     * Average lock wait time in seconds
                     */
                    double m_lockTimeAvg;
                    bool m_lockTimeAvgHasBeenSet;

                    /**
                     * Average number of scanned rows
                     */
                    double m_rowsExaminedAvg;
                    bool m_rowsExaminedAvgHasBeenSet;

                    /**
                     * MD5 value of the SQL template
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SLOWLOGTOPSQLITEM_H_
