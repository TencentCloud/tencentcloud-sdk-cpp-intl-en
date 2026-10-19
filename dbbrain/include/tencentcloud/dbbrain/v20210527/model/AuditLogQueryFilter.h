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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITLOGQUERYFILTER_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITLOGQUERYFILTER_H_

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
                * Collection of query filter criteria for audit logs. All fields are selectable. Note: MultiSql and ExcludeMultiSql carry a two-dimensional array as a JSON string (the cloud API platform does not support two-dimensional arrays). For example, [[a,b]] means (a OR b).
                */
                class AuditLogQueryFilter : public AbstractModel
                {
                public:
                    AuditLogQueryFilter();
                    ~AuditLogQueryFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>SQL type list, with values such as SELECT, INSERT, UPDATE, and DELETE.</p>
                     * @return SqlType <p>SQL type list, with values such as SELECT, INSERT, UPDATE, and DELETE.</p>
                     * 
                     */
                    std::vector<std::string> GetSqlType() const;

                    /**
                     * 设置<p>SQL type list, with values such as SELECT, INSERT, UPDATE, and DELETE.</p>
                     * @param _sqlType <p>SQL type list, with values such as SELECT, INSERT, UPDATE, and DELETE.</p>
                     * 
                     */
                    void SetSqlType(const std::vector<std::string>& _sqlType);

                    /**
                     * 判断参数 SqlType 是否已赋值
                     * @return SqlType 是否已赋值
                     * 
                     */
                    bool SqlTypeHasBeenSet() const;

                    /**
                     * 获取<p>Execution duration range (ms), an array of length 2: [minimum value, maximum value].</p>
                     * @return ExecTime <p>Execution duration range (ms), an array of length 2: [minimum value, maximum value].</p>
                     * 
                     */
                    std::vector<int64_t> GetExecTime() const;

                    /**
                     * 设置<p>Execution duration range (ms), an array of length 2: [minimum value, maximum value].</p>
                     * @param _execTime <p>Execution duration range (ms), an array of length 2: [minimum value, maximum value].</p>
                     * 
                     */
                    void SetExecTime(const std::vector<int64_t>& _execTime);

                    /**
                     * 判断参数 ExecTime 是否已赋值
                     * @return ExecTime 是否已赋值
                     * 
                     */
                    bool ExecTimeHasBeenSet() const;

                    /**
                     * 获取<p>IO waiting duration range (ms), an array with a length of 2.</p>
                     * @return IoWaitTime <p>IO waiting duration range (ms), an array with a length of 2.</p>
                     * 
                     */
                    std::vector<int64_t> GetIoWaitTime() const;

                    /**
                     * 设置<p>IO waiting duration range (ms), an array with a length of 2.</p>
                     * @param _ioWaitTime <p>IO waiting duration range (ms), an array with a length of 2.</p>
                     * 
                     */
                    void SetIoWaitTime(const std::vector<int64_t>& _ioWaitTime);

                    /**
                     * 判断参数 IoWaitTime 是否已赋值
                     * @return IoWaitTime 是否已赋值
                     * 
                     */
                    bool IoWaitTimeHasBeenSet() const;

                    /**
                     * 获取<p>CPU duration range (ms), an array of length 2.</p>
                     * @return CpuTime <p>CPU duration range (ms), an array of length 2.</p>
                     * 
                     */
                    std::vector<int64_t> GetCpuTime() const;

                    /**
                     * 设置<p>CPU duration range (ms), an array of length 2.</p>
                     * @param _cpuTime <p>CPU duration range (ms), an array of length 2.</p>
                     * 
                     */
                    void SetCpuTime(const std::vector<int64_t>& _cpuTime);

                    /**
                     * 判断参数 CpuTime 是否已赋值
                     * @return CpuTime 是否已赋值
                     * 
                     */
                    bool CpuTimeHasBeenSet() const;

                    /**
                     * 获取<p>Lock wait time range (ms), an array with a length of 2.</p>
                     * @return LockWaitTime <p>Lock wait time range (ms), an array with a length of 2.</p>
                     * 
                     */
                    std::vector<int64_t> GetLockWaitTime() const;

                    /**
                     * 设置<p>Lock wait time range (ms), an array with a length of 2.</p>
                     * @param _lockWaitTime <p>Lock wait time range (ms), an array with a length of 2.</p>
                     * 
                     */
                    void SetLockWaitTime(const std::vector<int64_t>& _lockWaitTime);

                    /**
                     * 判断参数 LockWaitTime 是否已赋值
                     * @return LockWaitTime 是否已赋值
                     * 
                     */
                    bool LockWaitTimeHasBeenSet() const;

                    /**
                     * 获取<p>SQL execution error code. For example, 0 indicates success.</p>
                     * @return ErrCode <p>SQL execution error code. For example, 0 indicates success.</p>
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 设置<p>SQL execution error code. For example, 0 indicates success.</p>
                     * @param _errCode <p>SQL execution error code. For example, 0 indicates success.</p>
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
                     * 获取<p>Database name list.</p>
                     * @return DBName <p>Database name list.</p>
                     * 
                     */
                    std::vector<std::string> GetDBName() const;

                    /**
                     * 设置<p>Database name list.</p>
                     * @param _dBName <p>Database name list.</p>
                     * 
                     */
                    void SetDBName(const std::vector<std::string>& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取<p>Username list.</p>
                     * @return User <p>Username list.</p>
                     * 
                     */
                    std::vector<std::string> GetUser() const;

                    /**
                     * 设置<p>Username list.</p>
                     * @param _user <p>Username list.</p>
                     * 
                     */
                    void SetUser(const std::vector<std::string>& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取<p>Source IP list.</p>
                     * @return Host <p>Source IP list.</p>
                     * 
                     */
                    std::vector<std::string> GetHost() const;

                    /**
                     * 设置<p>Source IP list.</p>
                     * @param _host <p>Source IP list.</p>
                     * 
                     */
                    void SetHost(const std::vector<std::string>& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>List of thread IDs.</p>
                     * @return ThreadId <p>List of thread IDs.</p>
                     * 
                     */
                    std::vector<std::string> GetThreadId() const;

                    /**
                     * 设置<p>List of thread IDs.</p>
                     * @param _threadId <p>List of thread IDs.</p>
                     * 
                     */
                    void SetThreadId(const std::vector<std::string>& _threadId);

                    /**
                     * 判断参数 ThreadId 是否已赋值
                     * @return ThreadId 是否已赋值
                     * 
                     */
                    bool ThreadIdHasBeenSet() const;

                    /**
                     * 获取<p>List of proxy node hosts.</p>
                     * @return ProxyHostList <p>List of proxy node hosts.</p>
                     * 
                     */
                    std::vector<std::string> GetProxyHostList() const;

                    /**
                     * 设置<p>List of proxy node hosts.</p>
                     * @param _proxyHostList <p>List of proxy node hosts.</p>
                     * 
                     */
                    void SetProxyHostList(const std::vector<std::string>& _proxyHostList);

                    /**
                     * 判断参数 ProxyHostList 是否已赋值
                     * @return ProxyHostList 是否已赋值
                     * 
                     */
                    bool ProxyHostListHasBeenSet() const;

                    /**
                     * 获取<p>Backend Set Host list.</p>
                     * @return SetHostList <p>Backend Set Host list.</p>
                     * 
                     */
                    std::vector<std::string> GetSetHostList() const;

                    /**
                     * 设置<p>Backend Set Host list.</p>
                     * @param _setHostList <p>Backend Set Host list.</p>
                     * 
                     */
                    void SetSetHostList(const std::vector<std::string>& _setHostList);

                    /**
                     * 判断参数 SetHostList 是否已赋值
                     * @return SetHostList 是否已赋值
                     * 
                     */
                    bool SetHostListHasBeenSet() const;

                    /**
                     * 获取<p>Backend Set ID list.</p>
                     * @return SetIdList <p>Backend Set ID list.</p>
                     * 
                     */
                    std::vector<std::string> GetSetIdList() const;

                    /**
                     * 设置<p>Backend Set ID list.</p>
                     * @param _setIdList <p>Backend Set ID list.</p>
                     * 
                     */
                    void SetSetIdList(const std::vector<std::string>& _setIdList);

                    /**
                     * 判断参数 SetIdList 是否已赋值
                     * @return SetIdList 是否已赋值
                     * 
                     */
                    bool SetIdListHasBeenSet() const;

                    /**
                     * 获取<p>Multiple SQL keyword conditions, JSON string, internally a two-dimensional array: level 1 is AND, the second level is OR. Note that the cloud API platform does not support two-dimensional arrays. Here, a string is used to carry it, and the server automatically parses it.</p>
                     * @return MultiSql <p>Multiple SQL keyword conditions, JSON string, internally a two-dimensional array: level 1 is AND, the second level is OR. Note that the cloud API platform does not support two-dimensional arrays. Here, a string is used to carry it, and the server automatically parses it.</p>
                     * 
                     */
                    std::string GetMultiSql() const;

                    /**
                     * 设置<p>Multiple SQL keyword conditions, JSON string, internally a two-dimensional array: level 1 is AND, the second level is OR. Note that the cloud API platform does not support two-dimensional arrays. Here, a string is used to carry it, and the server automatically parses it.</p>
                     * @param _multiSql <p>Multiple SQL keyword conditions, JSON string, internally a two-dimensional array: level 1 is AND, the second level is OR. Note that the cloud API platform does not support two-dimensional arrays. Here, a string is used to carry it, and the server automatically parses it.</p>
                     * 
                     */
                    void SetMultiSql(const std::string& _multiSql);

                    /**
                     * 判断参数 MultiSql 是否已赋值
                     * @return MultiSql 是否已赋值
                     * 
                     */
                    bool MultiSqlHasBeenSet() const;

                    /**
                     * 获取<p>Excluded multiple SQL keyword conditions, JSON string, with the same structure as MultiSql.</p>
                     * @return ExcludeMultiSql <p>Excluded multiple SQL keyword conditions, JSON string, with the same structure as MultiSql.</p>
                     * 
                     */
                    std::string GetExcludeMultiSql() const;

                    /**
                     * 设置<p>Excluded multiple SQL keyword conditions, JSON string, with the same structure as MultiSql.</p>
                     * @param _excludeMultiSql <p>Excluded multiple SQL keyword conditions, JSON string, with the same structure as MultiSql.</p>
                     * 
                     */
                    void SetExcludeMultiSql(const std::string& _excludeMultiSql);

                    /**
                     * 判断参数 ExcludeMultiSql 是否已赋值
                     * @return ExcludeMultiSql 是否已赋值
                     * 
                     */
                    bool ExcludeMultiSqlHasBeenSet() const;

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
                     * 获取<p>SQL start time, for example: 2026-10-10 11:05:06.002211</p><p>Parameter format: YYYY-MM-DD hh:mm:ss.SSSSSS</p>
                     * @return SqlStartTime <p>SQL start time, for example: 2026-10-10 11:05:06.002211</p><p>Parameter format: YYYY-MM-DD hh:mm:ss.SSSSSS</p>
                     * 
                     */
                    std::string GetSqlStartTime() const;

                    /**
                     * 设置<p>SQL start time, for example: 2026-10-10 11:05:06.002211</p><p>Parameter format: YYYY-MM-DD hh:mm:ss.SSSSSS</p>
                     * @param _sqlStartTime <p>SQL start time, for example: 2026-10-10 11:05:06.002211</p><p>Parameter format: YYYY-MM-DD hh:mm:ss.SSSSSS</p>
                     * 
                     */
                    void SetSqlStartTime(const std::string& _sqlStartTime);

                    /**
                     * 判断参数 SqlStartTime 是否已赋值
                     * @return SqlStartTime 是否已赋值
                     * 
                     */
                    bool SqlStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Query ID, used for join queries (required when LogType=All).</p>
                     * @return QueryId <p>Query ID, used for join queries (required when LogType=All).</p>
                     * 
                     */
                    std::string GetQueryId() const;

                    /**
                     * 设置<p>Query ID, used for join queries (required when LogType=All).</p>
                     * @param _queryId <p>Query ID, used for join queries (required when LogType=All).</p>
                     * 
                     */
                    void SetQueryId(const std::string& _queryId);

                    /**
                     * 判断参数 QueryId 是否已赋值
                     * @return QueryId 是否已赋值
                     * 
                     */
                    bool QueryIdHasBeenSet() const;

                private:

                    /**
                     * <p>SQL type list, with values such as SELECT, INSERT, UPDATE, and DELETE.</p>
                     */
                    std::vector<std::string> m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * <p>Execution duration range (ms), an array of length 2: [minimum value, maximum value].</p>
                     */
                    std::vector<int64_t> m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * <p>IO waiting duration range (ms), an array with a length of 2.</p>
                     */
                    std::vector<int64_t> m_ioWaitTime;
                    bool m_ioWaitTimeHasBeenSet;

                    /**
                     * <p>CPU duration range (ms), an array of length 2.</p>
                     */
                    std::vector<int64_t> m_cpuTime;
                    bool m_cpuTimeHasBeenSet;

                    /**
                     * <p>Lock wait time range (ms), an array with a length of 2.</p>
                     */
                    std::vector<int64_t> m_lockWaitTime;
                    bool m_lockWaitTimeHasBeenSet;

                    /**
                     * <p>SQL execution error code. For example, 0 indicates success.</p>
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>Error message.</p>
                     */
                    std::string m_errInfo;
                    bool m_errInfoHasBeenSet;

                    /**
                     * <p>Database name list.</p>
                     */
                    std::vector<std::string> m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * <p>Username list.</p>
                     */
                    std::vector<std::string> m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>Source IP list.</p>
                     */
                    std::vector<std::string> m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>List of thread IDs.</p>
                     */
                    std::vector<std::string> m_threadId;
                    bool m_threadIdHasBeenSet;

                    /**
                     * <p>List of proxy node hosts.</p>
                     */
                    std::vector<std::string> m_proxyHostList;
                    bool m_proxyHostListHasBeenSet;

                    /**
                     * <p>Backend Set Host list.</p>
                     */
                    std::vector<std::string> m_setHostList;
                    bool m_setHostListHasBeenSet;

                    /**
                     * <p>Backend Set ID list.</p>
                     */
                    std::vector<std::string> m_setIdList;
                    bool m_setIdListHasBeenSet;

                    /**
                     * <p>Multiple SQL keyword conditions, JSON string, internally a two-dimensional array: level 1 is AND, the second level is OR. Note that the cloud API platform does not support two-dimensional arrays. Here, a string is used to carry it, and the server automatically parses it.</p>
                     */
                    std::string m_multiSql;
                    bool m_multiSqlHasBeenSet;

                    /**
                     * <p>Excluded multiple SQL keyword conditions, JSON string, with the same structure as MultiSql.</p>
                     */
                    std::string m_excludeMultiSql;
                    bool m_excludeMultiSqlHasBeenSet;

                    /**
                     * <p>SQL Template ID.</p>
                     */
                    std::string m_sqlTemplateId;
                    bool m_sqlTemplateIdHasBeenSet;

                    /**
                     * <p>SQL start time, for example: 2026-10-10 11:05:06.002211</p><p>Parameter format: YYYY-MM-DD hh:mm:ss.SSSSSS</p>
                     */
                    std::string m_sqlStartTime;
                    bool m_sqlStartTimeHasBeenSet;

                    /**
                     * <p>Query ID, used for join queries (required when LogType=All).</p>
                     */
                    std::string m_queryId;
                    bool m_queryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITLOGQUERYFILTER_H_
