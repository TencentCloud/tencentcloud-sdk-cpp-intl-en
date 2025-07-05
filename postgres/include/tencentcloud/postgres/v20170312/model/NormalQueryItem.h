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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_NORMALQUERYITEM_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_NORMALQUERYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Information of one SlowQuery
                */
                class NormalQueryItem : public AbstractModel
                {
                public:
                    NormalQueryItem();
                    ~NormalQueryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Username
                     * @return UserName Username
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username
                     * @param _userName Username
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Number of calls
                     * @return Calls Number of calls
                     * 
                     */
                    int64_t GetCalls() const;

                    /**
                     * 设置Number of calls
                     * @param _calls Number of calls
                     * 
                     */
                    void SetCalls(const int64_t& _calls);

                    /**
                     * 判断参数 Calls 是否已赋值
                     * @return Calls 是否已赋值
                     * 
                     */
                    bool CallsHasBeenSet() const;

                    /**
                     * 获取Granularity
                     * @return CallsGrids Granularity
                     * 
                     */
                    std::vector<int64_t> GetCallsGrids() const;

                    /**
                     * 设置Granularity
                     * @param _callsGrids Granularity
                     * 
                     */
                    void SetCallsGrids(const std::vector<int64_t>& _callsGrids);

                    /**
                     * 判断参数 CallsGrids 是否已赋值
                     * @return CallsGrids 是否已赋值
                     * 
                     */
                    bool CallsGridsHasBeenSet() const;

                    /**
                     * 获取Total time consumed
                     * @return CostTime Total time consumed
                     * 
                     */
                    double GetCostTime() const;

                    /**
                     * 设置Total time consumed
                     * @param _costTime Total time consumed
                     * 
                     */
                    void SetCostTime(const double& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取Number of affected rows
                     * @return Rows Number of affected rows
                     * 
                     */
                    int64_t GetRows() const;

                    /**
                     * 设置Number of affected rows
                     * @param _rows Number of affected rows
                     * 
                     */
                    void SetRows(const int64_t& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取Minimum time consumed
                     * @return MinCostTime Minimum time consumed
                     * 
                     */
                    double GetMinCostTime() const;

                    /**
                     * 设置Minimum time consumed
                     * @param _minCostTime Minimum time consumed
                     * 
                     */
                    void SetMinCostTime(const double& _minCostTime);

                    /**
                     * 判断参数 MinCostTime 是否已赋值
                     * @return MinCostTime 是否已赋值
                     * 
                     */
                    bool MinCostTimeHasBeenSet() const;

                    /**
                     * 获取Maximum time consumed
                     * @return MaxCostTime Maximum time consumed
                     * 
                     */
                    double GetMaxCostTime() const;

                    /**
                     * 设置Maximum time consumed
                     * @param _maxCostTime Maximum time consumed
                     * 
                     */
                    void SetMaxCostTime(const double& _maxCostTime);

                    /**
                     * 判断参数 MaxCostTime 是否已赋值
                     * @return MaxCostTime 是否已赋值
                     * 
                     */
                    bool MaxCostTimeHasBeenSet() const;

                    /**
                     * 获取Time of the earliest slow SQL statement
                     * @return FirstTime Time of the earliest slow SQL statement
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置Time of the earliest slow SQL statement
                     * @param _firstTime Time of the earliest slow SQL statement
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取Time of the latest slow SQL statement
                     * @return LastTime Time of the latest slow SQL statement
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置Time of the latest slow SQL statement
                     * @param _lastTime Time of the latest slow SQL statement
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取Shared memory blocks for reads
                     * @return SharedReadBlks Shared memory blocks for reads
                     * 
                     */
                    int64_t GetSharedReadBlks() const;

                    /**
                     * 设置Shared memory blocks for reads
                     * @param _sharedReadBlks Shared memory blocks for reads
                     * 
                     */
                    void SetSharedReadBlks(const int64_t& _sharedReadBlks);

                    /**
                     * 判断参数 SharedReadBlks 是否已赋值
                     * @return SharedReadBlks 是否已赋值
                     * 
                     */
                    bool SharedReadBlksHasBeenSet() const;

                    /**
                     * 获取Shared memory blocks for writes
                     * @return SharedWriteBlks Shared memory blocks for writes
                     * 
                     */
                    int64_t GetSharedWriteBlks() const;

                    /**
                     * 设置Shared memory blocks for writes
                     * @param _sharedWriteBlks Shared memory blocks for writes
                     * 
                     */
                    void SetSharedWriteBlks(const int64_t& _sharedWriteBlks);

                    /**
                     * 判断参数 SharedWriteBlks 是否已赋值
                     * @return SharedWriteBlks 是否已赋值
                     * 
                     */
                    bool SharedWriteBlksHasBeenSet() const;

                    /**
                     * 获取Total IO read time
                     * @return ReadCostTime Total IO read time
                     * 
                     */
                    int64_t GetReadCostTime() const;

                    /**
                     * 设置Total IO read time
                     * @param _readCostTime Total IO read time
                     * 
                     */
                    void SetReadCostTime(const int64_t& _readCostTime);

                    /**
                     * 判断参数 ReadCostTime 是否已赋值
                     * @return ReadCostTime 是否已赋值
                     * 
                     */
                    bool ReadCostTimeHasBeenSet() const;

                    /**
                     * 获取Total IO write time
                     * @return WriteCostTime Total IO write time
                     * 
                     */
                    int64_t GetWriteCostTime() const;

                    /**
                     * 设置Total IO write time
                     * @param _writeCostTime Total IO write time
                     * 
                     */
                    void SetWriteCostTime(const int64_t& _writeCostTime);

                    /**
                     * 判断参数 WriteCostTime 是否已赋值
                     * @return WriteCostTime 是否已赋值
                     * 
                     */
                    bool WriteCostTimeHasBeenSet() const;

                    /**
                     * 获取Database name
                     * @return DatabaseName Database name
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database name
                     * @param _databaseName Database name
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取Slow SQL statement after desensitization
                     * @return NormalQuery Slow SQL statement after desensitization
                     * 
                     */
                    std::string GetNormalQuery() const;

                    /**
                     * 设置Slow SQL statement after desensitization
                     * @param _normalQuery Slow SQL statement after desensitization
                     * 
                     */
                    void SetNormalQuery(const std::string& _normalQuery);

                    /**
                     * 判断参数 NormalQuery 是否已赋值
                     * @return NormalQuery 是否已赋值
                     * 
                     */
                    bool NormalQueryHasBeenSet() const;

                private:

                    /**
                     * Username
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Number of calls
                     */
                    int64_t m_calls;
                    bool m_callsHasBeenSet;

                    /**
                     * Granularity
                     */
                    std::vector<int64_t> m_callsGrids;
                    bool m_callsGridsHasBeenSet;

                    /**
                     * Total time consumed
                     */
                    double m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * Number of affected rows
                     */
                    int64_t m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * Minimum time consumed
                     */
                    double m_minCostTime;
                    bool m_minCostTimeHasBeenSet;

                    /**
                     * Maximum time consumed
                     */
                    double m_maxCostTime;
                    bool m_maxCostTimeHasBeenSet;

                    /**
                     * Time of the earliest slow SQL statement
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * Time of the latest slow SQL statement
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * Shared memory blocks for reads
                     */
                    int64_t m_sharedReadBlks;
                    bool m_sharedReadBlksHasBeenSet;

                    /**
                     * Shared memory blocks for writes
                     */
                    int64_t m_sharedWriteBlks;
                    bool m_sharedWriteBlksHasBeenSet;

                    /**
                     * Total IO read time
                     */
                    int64_t m_readCostTime;
                    bool m_readCostTimeHasBeenSet;

                    /**
                     * Total IO write time
                     */
                    int64_t m_writeCostTime;
                    bool m_writeCostTimeHasBeenSet;

                    /**
                     * Database name
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Slow SQL statement after desensitization
                     */
                    std::string m_normalQuery;
                    bool m_normalQueryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_NORMALQUERYITEM_H_
