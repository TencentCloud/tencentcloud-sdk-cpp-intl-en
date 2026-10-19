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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITPROXYLOGITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITPROXYLOGITEM_H_

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
                * A single audit log detail at the proxy layer. The fields are output by DruidCommonUtil#changeLogsTdsqlProxy and BusinessCodeUtils.
                */
                class AuditProxyLogItem : public AbstractModel
                {
                public:
                    AuditProxyLogItem();
                    ~AuditProxyLogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Time point of SQL execution (format string, yyyy-MM-dd HH:mm:ss).</p>
                     * @return Timestamp <p>Time point of SQL execution (format string, yyyy-MM-dd HH:mm:ss).</p>
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置<p>Time point of SQL execution (format string, yyyy-MM-dd HH:mm:ss).</p>
                     * @param _timestamp <p>Time point of SQL execution (format string, yyyy-MM-dd HH:mm:ss).</p>
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
                     * 获取<p>Cluster ID (dcdb/mariadb cluster identifier, same as InstanceId).</p>
                     * @return ClusterId <p>Cluster ID (dcdb/mariadb cluster identifier, same as InstanceId).</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID (dcdb/mariadb cluster identifier, same as InstanceId).</p>
                     * @param _clusterId <p>Cluster ID (dcdb/mariadb cluster identifier, same as InstanceId).</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Number of affected rows.</p>
                     * @return AffectRows <p>Number of affected rows.</p>
                     * 
                     */
                    int64_t GetAffectRows() const;

                    /**
                     * 设置<p>Number of affected rows.</p>
                     * @param _affectRows <p>Number of affected rows.</p>
                     * 
                     */
                    void SetAffectRows(const int64_t& _affectRows);

                    /**
                     * 判断参数 AffectRows 是否已赋值
                     * @return AffectRows 是否已赋值
                     * 
                     */
                    bool AffectRowsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to autocommit. 1 means enabling, and 0 means disabling.</p>
                     * @return Autocommit <p>Whether to autocommit. 1 means enabling, and 0 means disabling.</p>
                     * 
                     */
                    std::string GetAutocommit() const;

                    /**
                     * 设置<p>Whether to autocommit. 1 means enabling, and 0 means disabling.</p>
                     * @param _autocommit <p>Whether to autocommit. 1 means enabling, and 0 means disabling.</p>
                     * 
                     */
                    void SetAutocommit(const std::string& _autocommit);

                    /**
                     * 判断参数 Autocommit 是否已赋值
                     * @return Autocommit 是否已赋值
                     * 
                     */
                    bool AutocommitHasBeenSet() const;

                    /**
                     * 获取<p>MySQL network protocol command types (such as COM_QUERY and COM_CONNECT).</p>
                     * @return ComType <p>MySQL network protocol command types (such as COM_QUERY and COM_CONNECT).</p>
                     * 
                     */
                    std::string GetComType() const;

                    /**
                     * 设置<p>MySQL network protocol command types (such as COM_QUERY and COM_CONNECT).</p>
                     * @param _comType <p>MySQL network protocol command types (such as COM_QUERY and COM_CONNECT).</p>
                     * 
                     */
                    void SetComType(const std::string& _comType);

                    /**
                     * 判断参数 ComType 是否已赋值
                     * @return ComType 是否已赋值
                     * 
                     */
                    bool ComTypeHasBeenSet() const;

                    /**
                     * 获取<p>Duration of creating a connection.</p>
                     * @return ConnTc <p>Duration of creating a connection.</p>
                     * 
                     */
                    int64_t GetConnTc() const;

                    /**
                     * 设置<p>Duration of creating a connection.</p>
                     * @param _connTc <p>Duration of creating a connection.</p>
                     * 
                     */
                    void SetConnTc(const int64_t& _connTc);

                    /**
                     * 判断参数 ConnTc 是否已赋值
                     * @return ConnTc 是否已赋值
                     * 
                     */
                    bool ConnTcHasBeenSet() const;

                    /**
                     * 获取<p>Backend DB instance address (multiple entries are separated by commas).</p>
                     * @return DBHost <p>Backend DB instance address (multiple entries are separated by commas).</p>
                     * 
                     */
                    std::string GetDBHost() const;

                    /**
                     * 设置<p>Backend DB instance address (multiple entries are separated by commas).</p>
                     * @param _dBHost <p>Backend DB instance address (multiple entries are separated by commas).</p>
                     * 
                     */
                    void SetDBHost(const std::string& _dBHost);

                    /**
                     * 判断参数 DBHost 是否已赋值
                     * @return DBHost 是否已赋值
                     * 
                     */
                    bool DBHostHasBeenSet() const;

                    /**
                     * 获取<p>Database name where the SQL is executed.</p>
                     * @return DBName <p>Database name where the SQL is executed.</p>
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置<p>Database name where the SQL is executed.</p>
                     * @param _dBName <p>Database name where the SQL is executed.</p>
                     * 
                     */
                    void SetDBName(const std::string& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取<p>Error code returned by SQL execution. 0 indicates success.</p>
                     * @return ErrCode <p>Error code returned by SQL execution. 0 indicates success.</p>
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 设置<p>Error code returned by SQL execution. 0 indicates success.</p>
                     * @param _errCode <p>Error code returned by SQL execution. 0 indicates success.</p>
                     * 
                     */
                    void SetErrCode(const std::string& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取<p>Error message.</p>
                     * @return ErrInfo <p>Error message.</p>
                     * 
                     */
                    std::string GetErrInfo() const;

                    /**
                     * 设置<p>Error message.</p>
                     * @param _errInfo <p>Error message.</p>
                     * 
                     */
                    void SetErrInfo(const std::string& _errInfo);

                    /**
                     * 判断参数 ErrInfo 是否已赋值
                     * @return ErrInfo 是否已赋值
                     * 
                     */
                    bool ErrInfoHasBeenSet() const;

                    /**
                     * 获取<p>SQL execution time (µs).</p>
                     * @return ExecTime <p>SQL execution time (µs).</p>
                     * 
                     */
                    int64_t GetExecTime() const;

                    /**
                     * 设置<p>SQL execution time (µs).</p>
                     * @param _execTime <p>SQL execution time (µs).</p>
                     * 
                     */
                    void SetExecTime(const int64_t& _execTime);

                    /**
                     * 判断参数 ExecTime 是否已赋值
                     * @return ExecTime 是否已赋值
                     * 
                     */
                    bool ExecTimeHasBeenSet() const;

                    /**
                     * 获取<p>Number of connections still occupied after request ends (typically 0 for non-transaction requests).</p>
                     * @return HoldConns <p>Number of connections still occupied after request ends (typically 0 for non-transaction requests).</p>
                     * 
                     */
                    std::string GetHoldConns() const;

                    /**
                     * 设置<p>Number of connections still occupied after request ends (typically 0 for non-transaction requests).</p>
                     * @param _holdConns <p>Number of connections still occupied after request ends (typically 0 for non-transaction requests).</p>
                     * 
                     */
                    void SetHoldConns(const std::string& _holdConns);

                    /**
                     * 判断参数 HoldConns 是否已赋值
                     * @return HoldConns 是否已赋值
                     * 
                     */
                    bool HoldConnsHasBeenSet() const;

                    /**
                     * 获取<p>Client source IP.</p>
                     * @return Host <p>Client source IP.</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>Client source IP.</p>
                     * @param _host <p>Client source IP.</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable global consistency read (0: no, 1: yes).</p>
                     * @return Mc <p>Whether to enable global consistency read (0: no, 1: yes).</p>
                     * 
                     */
                    std::string GetMc() const;

                    /**
                     * 设置<p>Whether to enable global consistency read (0: no, 1: yes).</p>
                     * @param _mc <p>Whether to enable global consistency read (0: no, 1: yes).</p>
                     * 
                     */
                    void SetMc(const std::string& _mc);

                    /**
                     * 判断参数 Mc 是否已赋值
                     * @return Mc 是否已赋值
                     * 
                     */
                    bool McHasBeenSet() const;

                    /**
                     * 获取<p>SQL start time (microsecond portion in microsecond precision).</p>
                     * @return SqlStartTimeUs <p>SQL start time (microsecond portion in microsecond precision).</p>
                     * 
                     */
                    int64_t GetSqlStartTimeUs() const;

                    /**
                     * 设置<p>SQL start time (microsecond portion in microsecond precision).</p>
                     * @param _sqlStartTimeUs <p>SQL start time (microsecond portion in microsecond precision).</p>
                     * 
                     */
                    void SetSqlStartTimeUs(const int64_t& _sqlStartTimeUs);

                    /**
                     * 判断参数 SqlStartTimeUs 是否已赋值
                     * @return SqlStartTimeUs 是否已赋值
                     * 
                     */
                    bool SqlStartTimeUsHasBeenSet() const;

                    /**
                     * 获取<p>Number of connections created in the current request.</p>
                     * @return NewConnNum <p>Number of connections created in the current request.</p>
                     * 
                     */
                    int64_t GetNewConnNum() const;

                    /**
                     * 设置<p>Number of connections created in the current request.</p>
                     * @param _newConnNum <p>Number of connections created in the current request.</p>
                     * 
                     */
                    void SetNewConnNum(const int64_t& _newConnNum);

                    /**
                     * 判断参数 NewConnNum 是否已赋值
                     * @return NewConnNum 是否已赋值
                     * 
                     */
                    bool NewConnNumHasBeenSet() const;

                    /**
                     * 获取<p>Proxy node address.</p>
                     * @return ProxyHost <p>Proxy node address.</p>
                     * 
                     */
                    std::string GetProxyHost() const;

                    /**
                     * 设置<p>Proxy node address.</p>
                     * @param _proxyHost <p>Proxy node address.</p>
                     * 
                     */
                    void SetProxyHost(const std::string& _proxyHost);

                    /**
                     * 判断参数 ProxyHost 是否已赋值
                     * @return ProxyHost 是否已赋值
                     * 
                     */
                    bool ProxyHostHasBeenSet() const;

                    /**
                     * 获取<p>Proxy ID.</p>
                     * @return ProxyId <p>Proxy ID.</p>
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置<p>Proxy ID.</p>
                     * @param _proxyId <p>Proxy ID.</p>
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取<p>Query ID (used for join queries).</p>
                     * @return QueryId <p>Query ID (used for join queries).</p>
                     * 
                     */
                    std::string GetQueryId() const;

                    /**
                     * 设置<p>Query ID (used for join queries).</p>
                     * @param _queryId <p>Query ID (used for join queries).</p>
                     * 
                     */
                    void SetQueryId(const std::string& _queryId);

                    /**
                     * 判断参数 QueryId 是否已赋值
                     * @return QueryId 是否已赋值
                     * 
                     */
                    bool QueryIdHasBeenSet() const;

                    /**
                     * 获取<p>Number of rows returned (rows in the scanning result set).</p>
                     * @return SentRows <p>Number of rows returned (rows in the scanning result set).</p>
                     * 
                     */
                    int64_t GetSentRows() const;

                    /**
                     * 设置<p>Number of rows returned (rows in the scanning result set).</p>
                     * @param _sentRows <p>Number of rows returned (rows in the scanning result set).</p>
                     * 
                     */
                    void SetSentRows(const int64_t& _sentRows);

                    /**
                     * 判断参数 SentRows 是否已赋值
                     * @return SentRows 是否已赋值
                     * 
                     */
                    bool SentRowsHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a query rewritten by Proxy: 0 original query, 1 rewritten query.</p>
                     * @return Splited <p>Whether it is a query rewritten by Proxy: 0 original query, 1 rewritten query.</p>
                     * 
                     */
                    int64_t GetSplited() const;

                    /**
                     * 设置<p>Whether it is a query rewritten by Proxy: 0 original query, 1 rewritten query.</p>
                     * @param _splited <p>Whether it is a query rewritten by Proxy: 0 original query, 1 rewritten query.</p>
                     * 
                     */
                    void SetSplited(const int64_t& _splited);

                    /**
                     * 判断参数 Splited 是否已赋值
                     * @return Splited 是否已赋值
                     * 
                     */
                    bool SplitedHasBeenSet() const;

                    /**
                     * 获取<p>Original executed SQL statement.</p>
                     * @return Sql <p>Original executed SQL statement.</p>
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置<p>Original executed SQL statement.</p>
                     * @param _sql <p>Original executed SQL statement.</p>
                     * 
                     */
                    void SetSql(const std::string& _sql);

                    /**
                     * 判断参数 Sql 是否已赋值
                     * @return Sql 是否已赋值
                     * 
                     */
                    bool SqlHasBeenSet() const;

                    /**
                     * 获取<p>SQL template.</p>
                     * @return SqlTemplate <p>SQL template.</p>
                     * 
                     */
                    std::string GetSqlTemplate() const;

                    /**
                     * 设置<p>SQL template.</p>
                     * @param _sqlTemplate <p>SQL template.</p>
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
                     * 获取<p>SQL Template ID.</p>
                     * @return SqlTemplateId <p>SQL Template ID.</p>
                     * 
                     */
                    std::string GetSqlTemplateId() const;

                    /**
                     * 设置<p>SQL Template ID.</p>
                     * @param _sqlTemplateId <p>SQL Template ID.</p>
                     * 
                     */
                    void SetSqlTemplateId(const std::string& _sqlTemplateId);

                    /**
                     * 判断参数 SqlTemplateId 是否已赋值
                     * @return SqlTemplateId 是否已赋值
                     * 
                     */
                    bool SqlTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>SQL type (for example, Select, Insert, Create, Login, Set).</p>
                     * @return SqlType <p>SQL type (for example, Select, Insert, Create, Login, Set).</p>
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置<p>SQL type (for example, Select, Insert, Create, Login, Set).</p>
                     * @param _sqlType <p>SQL type (for example, Select, Insert, Create, Login, Set).</p>
                     * 
                     */
                    void SetSqlType(const std::string& _sqlType);

                    /**
                     * 判断参数 SqlType 是否已赋值
                     * @return SqlType 是否已赋值
                     * 
                     */
                    bool SqlTypeHasBeenSet() const;

                    /**
                     * 获取<p>Tables involved (separated by commas for multiple tables).</p>
                     * @return Tables <p>Tables involved (separated by commas for multiple tables).</p>
                     * 
                     */
                    std::string GetTables() const;

                    /**
                     * 设置<p>Tables involved (separated by commas for multiple tables).</p>
                     * @param _tables <p>Tables involved (separated by commas for multiple tables).</p>
                     * 
                     */
                    void SetTables(const std::string& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取<p>Thread ID.</p>
                     * @return ThreadId <p>Thread ID.</p>
                     * 
                     */
                    std::string GetThreadId() const;

                    /**
                     * 设置<p>Thread ID.</p>
                     * @param _threadId <p>Thread ID.</p>
                     * 
                     */
                    void SetThreadId(const std::string& _threadId);

                    /**
                     * 判断参数 ThreadId 是否已赋值
                     * @return ThreadId 是否已赋值
                     * 
                     */
                    bool ThreadIdHasBeenSet() const;

                    /**
                     * 获取<p>SQL start time (millisecond-level timestamp).</p>
                     * @return SqlStartTime <p>SQL start time (millisecond-level timestamp).</p>
                     * 
                     */
                    int64_t GetSqlStartTime() const;

                    /**
                     * 设置<p>SQL start time (millisecond-level timestamp).</p>
                     * @param _sqlStartTime <p>SQL start time (millisecond-level timestamp).</p>
                     * 
                     */
                    void SetSqlStartTime(const int64_t& _sqlStartTime);

                    /**
                     * 判断参数 SqlStartTime 是否已赋值
                     * @return SqlStartTime 是否已赋值
                     * 
                     */
                    bool SqlStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Database username that executes the SQL.</p>
                     * @return User <p>Database username that executes the SQL.</p>
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置<p>Database username that executes the SQL.</p>
                     * @param _user <p>Database username that executes the SQL.</p>
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
                     * 获取<p>HostPort of the client connection.</p>
                     * @return HostPort <p>HostPort of the client connection.</p>
                     * 
                     */
                    std::string GetHostPort() const;

                    /**
                     * 设置<p>HostPort of the client connection.</p>
                     * @param _hostPort <p>HostPort of the client connection.</p>
                     * 
                     */
                    void SetHostPort(const std::string& _hostPort);

                    /**
                     * 判断参数 HostPort 是否已赋值
                     * @return HostPort 是否已赋值
                     * 
                     */
                    bool HostPortHasBeenSet() const;

                    /**
                     * 获取<p>Proxy Node processing thread ID.</p>
                     * @return ProxyThread <p>Proxy Node processing thread ID.</p>
                     * 
                     */
                    std::string GetProxyThread() const;

                    /**
                     * 设置<p>Proxy Node processing thread ID.</p>
                     * @param _proxyThread <p>Proxy Node processing thread ID.</p>
                     * 
                     */
                    void SetProxyThread(const std::string& _proxyThread);

                    /**
                     * 判断参数 ProxyThread 是否已赋值
                     * @return ProxyThread 是否已赋值
                     * 
                     */
                    bool ProxyThreadHasBeenSet() const;

                    /**
                     * 获取<p>Number of backend DB hosts.</p>
                     * @return DbHostNum <p>Number of backend DB hosts.</p>
                     * 
                     */
                    std::string GetDbHostNum() const;

                    /**
                     * 设置<p>Number of backend DB hosts.</p>
                     * @param _dbHostNum <p>Number of backend DB hosts.</p>
                     * 
                     */
                    void SetDbHostNum(const std::string& _dbHostNum);

                    /**
                     * 判断参数 DbHostNum 是否已赋值
                     * @return DbHostNum 是否已赋值
                     * 
                     */
                    bool DbHostNumHasBeenSet() const;

                    /**
                     * 获取<p>Business code (extracted from i/o/p and other KV in business-side SQL annotations).</p>
                     * @return BusinessCode <p>Business code (extracted from i/o/p and other KV in business-side SQL annotations).</p>
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置<p>Business code (extracted from i/o/p and other KV in business-side SQL annotations).</p>
                     * @param _businessCode <p>Business code (extracted from i/o/p and other KV in business-side SQL annotations).</p>
                     * 
                     */
                    void SetBusinessCode(const std::string& _businessCode);

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     * 
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取<p>Business tag (completed post based on the business code).</p>
                     * @return BusinessTag <p>Business tag (completed post based on the business code).</p>
                     * 
                     */
                    std::string GetBusinessTag() const;

                    /**
                     * 设置<p>Business tag (completed post based on the business code).</p>
                     * @param _businessTag <p>Business tag (completed post based on the business code).</p>
                     * 
                     */
                    void SetBusinessTag(const std::string& _businessTag);

                    /**
                     * 判断参数 BusinessTag 是否已赋值
                     * @return BusinessTag 是否已赋值
                     * 
                     */
                    bool BusinessTagHasBeenSet() const;

                private:

                    /**
                     * <p>Time point of SQL execution (format string, yyyy-MM-dd HH:mm:ss).</p>
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>Cluster ID (dcdb/mariadb cluster identifier, same as InstanceId).</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Number of affected rows.</p>
                     */
                    int64_t m_affectRows;
                    bool m_affectRowsHasBeenSet;

                    /**
                     * <p>Whether to autocommit. 1 means enabling, and 0 means disabling.</p>
                     */
                    std::string m_autocommit;
                    bool m_autocommitHasBeenSet;

                    /**
                     * <p>MySQL network protocol command types (such as COM_QUERY and COM_CONNECT).</p>
                     */
                    std::string m_comType;
                    bool m_comTypeHasBeenSet;

                    /**
                     * <p>Duration of creating a connection.</p>
                     */
                    int64_t m_connTc;
                    bool m_connTcHasBeenSet;

                    /**
                     * <p>Backend DB instance address (multiple entries are separated by commas).</p>
                     */
                    std::string m_dBHost;
                    bool m_dBHostHasBeenSet;

                    /**
                     * <p>Database name where the SQL is executed.</p>
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * <p>Error code returned by SQL execution. 0 indicates success.</p>
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>Error message.</p>
                     */
                    std::string m_errInfo;
                    bool m_errInfoHasBeenSet;

                    /**
                     * <p>SQL execution time (µs).</p>
                     */
                    int64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * <p>Number of connections still occupied after request ends (typically 0 for non-transaction requests).</p>
                     */
                    std::string m_holdConns;
                    bool m_holdConnsHasBeenSet;

                    /**
                     * <p>Client source IP.</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>Whether to enable global consistency read (0: no, 1: yes).</p>
                     */
                    std::string m_mc;
                    bool m_mcHasBeenSet;

                    /**
                     * <p>SQL start time (microsecond portion in microsecond precision).</p>
                     */
                    int64_t m_sqlStartTimeUs;
                    bool m_sqlStartTimeUsHasBeenSet;

                    /**
                     * <p>Number of connections created in the current request.</p>
                     */
                    int64_t m_newConnNum;
                    bool m_newConnNumHasBeenSet;

                    /**
                     * <p>Proxy node address.</p>
                     */
                    std::string m_proxyHost;
                    bool m_proxyHostHasBeenSet;

                    /**
                     * <p>Proxy ID.</p>
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * <p>Query ID (used for join queries).</p>
                     */
                    std::string m_queryId;
                    bool m_queryIdHasBeenSet;

                    /**
                     * <p>Number of rows returned (rows in the scanning result set).</p>
                     */
                    int64_t m_sentRows;
                    bool m_sentRowsHasBeenSet;

                    /**
                     * <p>Whether it is a query rewritten by Proxy: 0 original query, 1 rewritten query.</p>
                     */
                    int64_t m_splited;
                    bool m_splitedHasBeenSet;

                    /**
                     * <p>Original executed SQL statement.</p>
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * <p>SQL template.</p>
                     */
                    std::string m_sqlTemplate;
                    bool m_sqlTemplateHasBeenSet;

                    /**
                     * <p>SQL Template ID.</p>
                     */
                    std::string m_sqlTemplateId;
                    bool m_sqlTemplateIdHasBeenSet;

                    /**
                     * <p>SQL type (for example, Select, Insert, Create, Login, Set).</p>
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * <p>Tables involved (separated by commas for multiple tables).</p>
                     */
                    std::string m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * <p>Thread ID.</p>
                     */
                    std::string m_threadId;
                    bool m_threadIdHasBeenSet;

                    /**
                     * <p>SQL start time (millisecond-level timestamp).</p>
                     */
                    int64_t m_sqlStartTime;
                    bool m_sqlStartTimeHasBeenSet;

                    /**
                     * <p>Database username that executes the SQL.</p>
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>HostPort of the client connection.</p>
                     */
                    std::string m_hostPort;
                    bool m_hostPortHasBeenSet;

                    /**
                     * <p>Proxy Node processing thread ID.</p>
                     */
                    std::string m_proxyThread;
                    bool m_proxyThreadHasBeenSet;

                    /**
                     * <p>Number of backend DB hosts.</p>
                     */
                    std::string m_dbHostNum;
                    bool m_dbHostNumHasBeenSet;

                    /**
                     * <p>Business code (extracted from i/o/p and other KV in business-side SQL annotations).</p>
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * <p>Business tag (completed post based on the business code).</p>
                     */
                    std::string m_businessTag;
                    bool m_businessTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITPROXYLOGITEM_H_
