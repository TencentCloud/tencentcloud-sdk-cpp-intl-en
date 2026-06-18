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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_SLOWLOGDATA_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_SLOWLOGDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/Explain.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * slow log information
                */
                class SlowLogData : public AbstractModel
                {
                public:
                    SlowLogData();
                    ~SlowLogData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Sql execution time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Timestamp <p>Sql execution time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置<p>Sql execution time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timestamp <p>Sql execution time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取<p>Sql execution duration (seconds)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QueryTime <p>Sql execution duration (seconds)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetQueryTime() const;

                    /**
                     * 设置<p>Sql execution duration (seconds)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _queryTime <p>Sql execution duration (seconds)</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Sql statement</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SqlText <p>Sql statement</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSqlText() const;

                    /**
                     * 设置<p>Sql statement</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sqlText <p>Sql statement</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Client IP address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserHost <p>Client IP address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserHost() const;

                    /**
                     * 设置<p>Client IP address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userHost <p>Client IP address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserHost(const std::string& _userHost);

                    /**
                     * 判断参数 UserHost 是否已赋值
                     * @return UserHost 是否已赋值
                     * 
                     */
                    bool UserHostHasBeenSet() const;

                    /**
                     * 获取<p>Username.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserName <p>Username.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>Username.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userName <p>Username.</p>
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
                     * 获取<p>Database name.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Database <p>Database name.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置<p>Database name.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _database <p>Database name.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取<p>Lock duration (seconds)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LockTime <p>Lock duration (seconds)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetLockTime() const;

                    /**
                     * 设置<p>Lock duration (seconds)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lockTime <p>Lock duration (seconds)</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Number of scanned rows</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RowsExamined <p>Number of scanned rows</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRowsExamined() const;

                    /**
                     * 设置<p>Number of scanned rows</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rowsExamined <p>Number of scanned rows</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRowsExamined(const uint64_t& _rowsExamined);

                    /**
                     * 判断参数 RowsExamined 是否已赋值
                     * @return RowsExamined 是否已赋值
                     * 
                     */
                    bool RowsExaminedHasBeenSet() const;

                    /**
                     * 获取<p>Result set row count</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RowsSent <p>Result set row count</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRowsSent() const;

                    /**
                     * 设置<p>Result set row count</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rowsSent <p>Result set row count</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRowsSent(const uint64_t& _rowsSent);

                    /**
                     * 判断参数 RowsSent 是否已赋值
                     * @return RowsSent 是否已赋值
                     * 
                     */
                    bool RowsSentHasBeenSet() const;

                    /**
                     * 获取<p>Transaction ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TransactionId <p>Transaction ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置<p>Transaction ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transactionId <p>Transaction ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTransactionId(const std::string& _transactionId);

                    /**
                     * 判断参数 TransactionId 是否已赋值
                     * @return TransactionId 是否已赋值
                     * 
                     */
                    bool TransactionIdHasBeenSet() const;

                    /**
                     * 获取<p>rpc duration</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RpcTime <p>rpc duration</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetRpcTime() const;

                    /**
                     * 设置<p>rpc duration</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rpcTime <p>rpc duration</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRpcTime(const double& _rpcTime);

                    /**
                     * 判断参数 RpcTime 是否已赋值
                     * @return RpcTime 是否已赋值
                     * 
                     */
                    bool RpcTimeHasBeenSet() const;

                    /**
                     * 获取<p>rpc duration for node interaction with storage</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageRpcTime <p>rpc duration for node interaction with storage</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetStorageRpcTime() const;

                    /**
                     * 设置<p>rpc duration for node interaction with storage</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storageRpcTime <p>rpc duration for node interaction with storage</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStorageRpcTime(const double& _storageRpcTime);

                    /**
                     * 判断参数 StorageRpcTime 是否已赋值
                     * @return StorageRpcTime 是否已赋值
                     * 
                     */
                    bool StorageRpcTimeHasBeenSet() const;

                    /**
                     * 获取<p>rpc retry latency</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RpcRetryDelayTime <p>rpc retry latency</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetRpcRetryDelayTime() const;

                    /**
                     * 设置<p>rpc retry latency</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rpcRetryDelayTime <p>rpc retry latency</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRpcRetryDelayTime(const double& _rpcRetryDelayTime);

                    /**
                     * 判断参数 RpcRetryDelayTime 是否已赋值
                     * @return RpcRetryDelayTime 是否已赋值
                     * 
                     */
                    bool RpcRetryDelayTimeHasBeenSet() const;

                    /**
                     * 获取<p>node Name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeId <p>node Name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>node Name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeId <p>node Name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>rpc link tracing</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RpcTrace <p>rpc link tracing</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRpcTrace() const;

                    /**
                     * 设置<p>rpc link tracing</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rpcTrace <p>rpc link tracing</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRpcTrace(const std::string& _rpcTrace);

                    /**
                     * 判断参数 RpcTrace 是否已赋值
                     * @return RpcTrace 是否已赋值
                     * 
                     */
                    bool RpcTraceHasBeenSet() const;

                    /**
                     * 获取<p>TDStore lock duration</p><p>Unit: seconds</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TDStoreLockTime <p>TDStore lock duration</p><p>Unit: seconds</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetTDStoreLockTime() const;

                    /**
                     * 设置<p>TDStore lock duration</p><p>Unit: seconds</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tDStoreLockTime <p>TDStore lock duration</p><p>Unit: seconds</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTDStoreLockTime(const double& _tDStoreLockTime);

                    /**
                     * 判断参数 TDStoreLockTime 是否已赋值
                     * @return TDStoreLockTime 是否已赋值
                     * 
                     */
                    bool TDStoreLockTimeHasBeenSet() const;

                    /**
                     * 获取<p>Global ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TraceId <p>Global ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置<p>Global ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _traceId <p>Global ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTraceId(const std::string& _traceId);

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     * 
                     */
                    bool TraceIdHasBeenSet() const;

                    /**
                     * 获取<p>Execution plan</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Explain <p>Execution plan</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Explain> GetExplain() const;

                    /**
                     * 设置<p>Execution plan</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _explain <p>Execution plan</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExplain(const std::vector<Explain>& _explain);

                    /**
                     * 判断参数 Explain 是否已赋值
                     * @return Explain 是否已赋值
                     * 
                     */
                    bool ExplainHasBeenSet() const;

                private:

                    /**
                     * <p>Sql execution time</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>Sql execution duration (seconds)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * <p>Sql statement</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * <p>Client IP address</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userHost;
                    bool m_userHostHasBeenSet;

                    /**
                     * <p>Username.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>Database name.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * <p>Lock duration (seconds)</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_lockTime;
                    bool m_lockTimeHasBeenSet;

                    /**
                     * <p>Number of scanned rows</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_rowsExamined;
                    bool m_rowsExaminedHasBeenSet;

                    /**
                     * <p>Result set row count</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_rowsSent;
                    bool m_rowsSentHasBeenSet;

                    /**
                     * <p>Transaction ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * <p>rpc duration</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_rpcTime;
                    bool m_rpcTimeHasBeenSet;

                    /**
                     * <p>rpc duration for node interaction with storage</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_storageRpcTime;
                    bool m_storageRpcTimeHasBeenSet;

                    /**
                     * <p>rpc retry latency</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_rpcRetryDelayTime;
                    bool m_rpcRetryDelayTimeHasBeenSet;

                    /**
                     * <p>node Name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>rpc link tracing</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_rpcTrace;
                    bool m_rpcTraceHasBeenSet;

                    /**
                     * <p>TDStore lock duration</p><p>Unit: seconds</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_tDStoreLockTime;
                    bool m_tDStoreLockTimeHasBeenSet;

                    /**
                     * <p>Global ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                    /**
                     * <p>Execution plan</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Explain> m_explain;
                    bool m_explainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_SLOWLOGDATA_H_
