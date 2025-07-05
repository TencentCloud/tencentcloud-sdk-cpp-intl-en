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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_SLOWLOGDATA_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_SLOWLOGDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Information of a slow query that has been logged
                */
                class SlowLogData : public AbstractModel
                {
                public:
                    SlowLogData();
                    ~SlowLogData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Statement checksum for querying details
                     * @return CheckSum Statement checksum for querying details
                     * 
                     */
                    std::string GetCheckSum() const;

                    /**
                     * 设置Statement checksum for querying details
                     * @param _checkSum Statement checksum for querying details
                     * 
                     */
                    void SetCheckSum(const std::string& _checkSum);

                    /**
                     * 判断参数 CheckSum 是否已赋值
                     * @return CheckSum 是否已赋值
                     * 
                     */
                    bool CheckSumHasBeenSet() const;

                    /**
                     * 获取Database name
                     * @return Db Database name
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置Database name
                     * @param _db Database name
                     * 
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取Abstracted SQL statement
                     * @return FingerPrint Abstracted SQL statement
                     * 
                     */
                    std::string GetFingerPrint() const;

                    /**
                     * 设置Abstracted SQL statement
                     * @param _fingerPrint Abstracted SQL statement
                     * 
                     */
                    void SetFingerPrint(const std::string& _fingerPrint);

                    /**
                     * 判断参数 FingerPrint 是否已赋值
                     * @return FingerPrint 是否已赋值
                     * 
                     */
                    bool FingerPrintHasBeenSet() const;

                    /**
                     * 获取Average lock time
                     * @return LockTimeAvg Average lock time
                     * 
                     */
                    std::string GetLockTimeAvg() const;

                    /**
                     * 设置Average lock time
                     * @param _lockTimeAvg Average lock time
                     * 
                     */
                    void SetLockTimeAvg(const std::string& _lockTimeAvg);

                    /**
                     * 判断参数 LockTimeAvg 是否已赋值
                     * @return LockTimeAvg 是否已赋值
                     * 
                     */
                    bool LockTimeAvgHasBeenSet() const;

                    /**
                     * 获取Maximum lock time
                     * @return LockTimeMax Maximum lock time
                     * 
                     */
                    std::string GetLockTimeMax() const;

                    /**
                     * 设置Maximum lock time
                     * @param _lockTimeMax Maximum lock time
                     * 
                     */
                    void SetLockTimeMax(const std::string& _lockTimeMax);

                    /**
                     * 判断参数 LockTimeMax 是否已赋值
                     * @return LockTimeMax 是否已赋值
                     * 
                     */
                    bool LockTimeMaxHasBeenSet() const;

                    /**
                     * 获取Minimum lock time
                     * @return LockTimeMin Minimum lock time
                     * 
                     */
                    std::string GetLockTimeMin() const;

                    /**
                     * 设置Minimum lock time
                     * @param _lockTimeMin Minimum lock time
                     * 
                     */
                    void SetLockTimeMin(const std::string& _lockTimeMin);

                    /**
                     * 判断参数 LockTimeMin 是否已赋值
                     * @return LockTimeMin 是否已赋值
                     * 
                     */
                    bool LockTimeMinHasBeenSet() const;

                    /**
                     * 获取Total lock time
                     * @return LockTimeSum Total lock time
                     * 
                     */
                    std::string GetLockTimeSum() const;

                    /**
                     * 设置Total lock time
                     * @param _lockTimeSum Total lock time
                     * 
                     */
                    void SetLockTimeSum(const std::string& _lockTimeSum);

                    /**
                     * 判断参数 LockTimeSum 是否已赋值
                     * @return LockTimeSum 是否已赋值
                     * 
                     */
                    bool LockTimeSumHasBeenSet() const;

                    /**
                     * 获取Number of queries
                     * @return QueryCount Number of queries
                     * 
                     */
                    std::string GetQueryCount() const;

                    /**
                     * 设置Number of queries
                     * @param _queryCount Number of queries
                     * 
                     */
                    void SetQueryCount(const std::string& _queryCount);

                    /**
                     * 判断参数 QueryCount 是否已赋值
                     * @return QueryCount 是否已赋值
                     * 
                     */
                    bool QueryCountHasBeenSet() const;

                    /**
                     * 获取Average query time
                     * @return QueryTimeAvg Average query time
                     * 
                     */
                    std::string GetQueryTimeAvg() const;

                    /**
                     * 设置Average query time
                     * @param _queryTimeAvg Average query time
                     * 
                     */
                    void SetQueryTimeAvg(const std::string& _queryTimeAvg);

                    /**
                     * 判断参数 QueryTimeAvg 是否已赋值
                     * @return QueryTimeAvg 是否已赋值
                     * 
                     */
                    bool QueryTimeAvgHasBeenSet() const;

                    /**
                     * 获取Maximum query time
                     * @return QueryTimeMax Maximum query time
                     * 
                     */
                    std::string GetQueryTimeMax() const;

                    /**
                     * 设置Maximum query time
                     * @param _queryTimeMax Maximum query time
                     * 
                     */
                    void SetQueryTimeMax(const std::string& _queryTimeMax);

                    /**
                     * 判断参数 QueryTimeMax 是否已赋值
                     * @return QueryTimeMax 是否已赋值
                     * 
                     */
                    bool QueryTimeMaxHasBeenSet() const;

                    /**
                     * 获取Minimum query time
                     * @return QueryTimeMin Minimum query time
                     * 
                     */
                    std::string GetQueryTimeMin() const;

                    /**
                     * 设置Minimum query time
                     * @param _queryTimeMin Minimum query time
                     * 
                     */
                    void SetQueryTimeMin(const std::string& _queryTimeMin);

                    /**
                     * 判断参数 QueryTimeMin 是否已赋值
                     * @return QueryTimeMin 是否已赋值
                     * 
                     */
                    bool QueryTimeMinHasBeenSet() const;

                    /**
                     * 获取Total query time
                     * @return QueryTimeSum Total query time
                     * 
                     */
                    std::string GetQueryTimeSum() const;

                    /**
                     * 设置Total query time
                     * @param _queryTimeSum Total query time
                     * 
                     */
                    void SetQueryTimeSum(const std::string& _queryTimeSum);

                    /**
                     * 判断参数 QueryTimeSum 是否已赋值
                     * @return QueryTimeSum 是否已赋值
                     * 
                     */
                    bool QueryTimeSumHasBeenSet() const;

                    /**
                     * 获取Number of scanned rows
                     * @return RowsExaminedSum Number of scanned rows
                     * 
                     */
                    std::string GetRowsExaminedSum() const;

                    /**
                     * 设置Number of scanned rows
                     * @param _rowsExaminedSum Number of scanned rows
                     * 
                     */
                    void SetRowsExaminedSum(const std::string& _rowsExaminedSum);

                    /**
                     * 判断参数 RowsExaminedSum 是否已赋值
                     * @return RowsExaminedSum 是否已赋值
                     * 
                     */
                    bool RowsExaminedSumHasBeenSet() const;

                    /**
                     * 获取Number of sent rows
                     * @return RowsSentSum Number of sent rows
                     * 
                     */
                    std::string GetRowsSentSum() const;

                    /**
                     * 设置Number of sent rows
                     * @param _rowsSentSum Number of sent rows
                     * 
                     */
                    void SetRowsSentSum(const std::string& _rowsSentSum);

                    /**
                     * 判断参数 RowsSentSum 是否已赋值
                     * @return RowsSentSum 是否已赋值
                     * 
                     */
                    bool RowsSentSumHasBeenSet() const;

                    /**
                     * 获取Last execution time
                     * @return TsMax Last execution time
                     * 
                     */
                    std::string GetTsMax() const;

                    /**
                     * 设置Last execution time
                     * @param _tsMax Last execution time
                     * 
                     */
                    void SetTsMax(const std::string& _tsMax);

                    /**
                     * 判断参数 TsMax 是否已赋值
                     * @return TsMax 是否已赋值
                     * 
                     */
                    bool TsMaxHasBeenSet() const;

                    /**
                     * 获取First execution time
                     * @return TsMin First execution time
                     * 
                     */
                    std::string GetTsMin() const;

                    /**
                     * 设置First execution time
                     * @param _tsMin First execution time
                     * 
                     */
                    void SetTsMin(const std::string& _tsMin);

                    /**
                     * 判断参数 TsMin 是否已赋值
                     * @return TsMin 是否已赋值
                     * 
                     */
                    bool TsMinHasBeenSet() const;

                    /**
                     * 获取Account
                     * @return User Account
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Account
                     * @param _user Account
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Sample SQL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExampleSql Sample SQL
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExampleSql() const;

                    /**
                     * 设置Sample SQL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _exampleSql Sample SQL
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExampleSql(const std::string& _exampleSql);

                    /**
                     * 判断参数 ExampleSql 是否已赋值
                     * @return ExampleSql 是否已赋值
                     * 
                     */
                    bool ExampleSqlHasBeenSet() const;

                    /**
                     * 获取Host address of account
                     * @return Host Host address of account
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Host address of account
                     * @param _host Host address of account
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                private:

                    /**
                     * Statement checksum for querying details
                     */
                    std::string m_checkSum;
                    bool m_checkSumHasBeenSet;

                    /**
                     * Database name
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * Abstracted SQL statement
                     */
                    std::string m_fingerPrint;
                    bool m_fingerPrintHasBeenSet;

                    /**
                     * Average lock time
                     */
                    std::string m_lockTimeAvg;
                    bool m_lockTimeAvgHasBeenSet;

                    /**
                     * Maximum lock time
                     */
                    std::string m_lockTimeMax;
                    bool m_lockTimeMaxHasBeenSet;

                    /**
                     * Minimum lock time
                     */
                    std::string m_lockTimeMin;
                    bool m_lockTimeMinHasBeenSet;

                    /**
                     * Total lock time
                     */
                    std::string m_lockTimeSum;
                    bool m_lockTimeSumHasBeenSet;

                    /**
                     * Number of queries
                     */
                    std::string m_queryCount;
                    bool m_queryCountHasBeenSet;

                    /**
                     * Average query time
                     */
                    std::string m_queryTimeAvg;
                    bool m_queryTimeAvgHasBeenSet;

                    /**
                     * Maximum query time
                     */
                    std::string m_queryTimeMax;
                    bool m_queryTimeMaxHasBeenSet;

                    /**
                     * Minimum query time
                     */
                    std::string m_queryTimeMin;
                    bool m_queryTimeMinHasBeenSet;

                    /**
                     * Total query time
                     */
                    std::string m_queryTimeSum;
                    bool m_queryTimeSumHasBeenSet;

                    /**
                     * Number of scanned rows
                     */
                    std::string m_rowsExaminedSum;
                    bool m_rowsExaminedSumHasBeenSet;

                    /**
                     * Number of sent rows
                     */
                    std::string m_rowsSentSum;
                    bool m_rowsSentSumHasBeenSet;

                    /**
                     * Last execution time
                     */
                    std::string m_tsMax;
                    bool m_tsMaxHasBeenSet;

                    /**
                     * First execution time
                     */
                    std::string m_tsMin;
                    bool m_tsMinHasBeenSet;

                    /**
                     * Account
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Sample SQL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_exampleSql;
                    bool m_exampleSqlHasBeenSet;

                    /**
                     * Host address of account
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_SLOWLOGDATA_H_
