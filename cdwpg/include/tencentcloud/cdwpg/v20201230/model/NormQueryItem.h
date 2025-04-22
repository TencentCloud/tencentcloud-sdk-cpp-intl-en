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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_NORMQUERYITEM_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_NORMQUERYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Slow query item information
                */
                class NormQueryItem : public AbstractModel
                {
                public:
                    NormQueryItem();
                    ~NormQueryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of calls.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CallTimes Number of calls.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCallTimes() const;

                    /**
                     * 设置Number of calls.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _callTimes Number of calls.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCallTimes(const int64_t& _callTimes);

                    /**
                     * 判断参数 CallTimes 是否已赋值
                     * @return CallTimes 是否已赋值
                     * 
                     */
                    bool CallTimesHasBeenSet() const;

                    /**
                     * 获取Number of read-only shared memory blocks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SharedReadBlocks Number of read-only shared memory blocks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSharedReadBlocks() const;

                    /**
                     * 设置Number of read-only shared memory blocks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sharedReadBlocks Number of read-only shared memory blocks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSharedReadBlocks(const int64_t& _sharedReadBlocks);

                    /**
                     * 判断参数 SharedReadBlocks 是否已赋值
                     * @return SharedReadBlocks 是否已赋值
                     * 
                     */
                    bool SharedReadBlocksHasBeenSet() const;

                    /**
                     * 获取Number of write-only shared memory blocks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SharedWriteBlocks Number of write-only shared memory blocks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSharedWriteBlocks() const;

                    /**
                     * 设置Number of write-only shared memory blocks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sharedWriteBlocks Number of write-only shared memory blocks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSharedWriteBlocks(const int64_t& _sharedWriteBlocks);

                    /**
                     * 判断参数 SharedWriteBlocks 是否已赋值
                     * @return SharedWriteBlocks 是否已赋值
                     * 
                     */
                    bool SharedWriteBlocksHasBeenSet() const;

                    /**
                     * 获取Database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatabaseName Database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置Database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _databaseName Database.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Statement after masking.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NormalQuery Statement after masking.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNormalQuery() const;

                    /**
                     * 设置Statement after masking.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _normalQuery Statement after masking.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNormalQuery(const std::string& _normalQuery);

                    /**
                     * 判断参数 NormalQuery 是否已赋值
                     * @return NormalQuery 是否已赋值
                     * 
                     */
                    bool NormalQueryHasBeenSet() const;

                    /**
                     * 获取The statement with the longest execution time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxElapsedQuery The statement with the longest execution time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMaxElapsedQuery() const;

                    /**
                     * 设置The statement with the longest execution time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxElapsedQuery The statement with the longest execution time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxElapsedQuery(const std::string& _maxElapsedQuery);

                    /**
                     * 判断参数 MaxElapsedQuery 是否已赋值
                     * @return MaxElapsedQuery 是否已赋值
                     * 
                     */
                    bool MaxElapsedQueryHasBeenSet() const;

                    /**
                     * 获取Total consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CostTime Total consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetCostTime() const;

                    /**
                     * 设置Total consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _costTime Total consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Client IP address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientIp Client IP address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置Client IP address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clientIp Client IP address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取Username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserName Username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userName Username.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Proportion of total count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCallTimesPercent Proportion of total count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetTotalCallTimesPercent() const;

                    /**
                     * 设置Proportion of total count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalCallTimesPercent Proportion of total count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalCallTimesPercent(const double& _totalCallTimesPercent);

                    /**
                     * 判断参数 TotalCallTimesPercent 是否已赋值
                     * @return TotalCallTimesPercent 是否已赋值
                     * 
                     */
                    bool TotalCallTimesPercentHasBeenSet() const;

                    /**
                     * 获取Proportion of total consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCostTimePercent Proportion of total consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetTotalCostTimePercent() const;

                    /**
                     * 设置Proportion of total consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalCostTimePercent Proportion of total consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalCostTimePercent(const double& _totalCostTimePercent);

                    /**
                     * 判断参数 TotalCostTimePercent 是否已赋值
                     * @return TotalCostTimePercent 是否已赋值
                     * 
                     */
                    bool TotalCostTimePercentHasBeenSet() const;

                    /**
                     * 获取Minimum consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MinCostTime Minimum consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetMinCostTime() const;

                    /**
                     * 设置Minimum consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _minCostTime Minimum consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Maximum consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxCostTime Maximum consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetMaxCostTime() const;

                    /**
                     * 设置Maximum consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxCostTime Maximum consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Time of the earliest item.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FirstTime Time of the earliest item.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置Time of the earliest item.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _firstTime Time of the earliest item.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Time of the latest item.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastTime Time of the latest item.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置Time of the latest item.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastTime Time of the latest item.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Total consumption time of I/O reading.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReadCostTime Total consumption time of I/O reading.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetReadCostTime() const;

                    /**
                     * 设置Total consumption time of I/O reading.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _readCostTime Total consumption time of I/O reading.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReadCostTime(const double& _readCostTime);

                    /**
                     * 判断参数 ReadCostTime 是否已赋值
                     * @return ReadCostTime 是否已赋值
                     * 
                     */
                    bool ReadCostTimeHasBeenSet() const;

                    /**
                     * 获取Total consumption time I/O writing.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WriteCostTime Total consumption time I/O writing.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetWriteCostTime() const;

                    /**
                     * 设置Total consumption time I/O writing.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _writeCostTime Total consumption time I/O writing.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWriteCostTime(const double& _writeCostTime);

                    /**
                     * 判断参数 WriteCostTime 是否已赋值
                     * @return WriteCostTime 是否已赋值
                     * 
                     */
                    bool WriteCostTimeHasBeenSet() const;

                private:

                    /**
                     * Number of calls.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_callTimes;
                    bool m_callTimesHasBeenSet;

                    /**
                     * Number of read-only shared memory blocks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sharedReadBlocks;
                    bool m_sharedReadBlocksHasBeenSet;

                    /**
                     * Number of write-only shared memory blocks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sharedWriteBlocks;
                    bool m_sharedWriteBlocksHasBeenSet;

                    /**
                     * Database.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * Statement after masking.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_normalQuery;
                    bool m_normalQueryHasBeenSet;

                    /**
                     * The statement with the longest execution time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_maxElapsedQuery;
                    bool m_maxElapsedQueryHasBeenSet;

                    /**
                     * Total consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * Client IP address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * Username.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Proportion of total count.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_totalCallTimesPercent;
                    bool m_totalCallTimesPercentHasBeenSet;

                    /**
                     * Proportion of total consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_totalCostTimePercent;
                    bool m_totalCostTimePercentHasBeenSet;

                    /**
                     * Minimum consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_minCostTime;
                    bool m_minCostTimeHasBeenSet;

                    /**
                     * Maximum consumption time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_maxCostTime;
                    bool m_maxCostTimeHasBeenSet;

                    /**
                     * Time of the earliest item.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * Time of the latest item.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * Total consumption time of I/O reading.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_readCostTime;
                    bool m_readCostTimeHasBeenSet;

                    /**
                     * Total consumption time I/O writing.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_writeCostTime;
                    bool m_writeCostTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_NORMQUERYITEM_H_
