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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_AUDITLOG_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_AUDITLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Audit log
                */
                class AuditLog : public AbstractModel
                {
                public:
                    AuditLog();
                    ~AuditLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of affected rows
                     * @return AffectRows Number of affected rows
                     * 
                     */
                    uint64_t GetAffectRows() const;

                    /**
                     * 设置Number of affected rows
                     * @param _affectRows Number of affected rows
                     * 
                     */
                    void SetAffectRows(const uint64_t& _affectRows);

                    /**
                     * 判断参数 AffectRows 是否已赋值
                     * @return AffectRows 是否已赋值
                     * 
                     */
                    bool AffectRowsHasBeenSet() const;

                    /**
                     * 获取Operation type. For example: grantRolesToRole, dropRole.
                     * @return Atype Operation type. For example: grantRolesToRole, dropRole.
                     * 
                     */
                    std::string GetAtype() const;

                    /**
                     * 设置Operation type. For example: grantRolesToRole, dropRole.
                     * @param _atype Operation type. For example: grantRolesToRole, dropRole.
                     * 
                     */
                    void SetAtype(const std::string& _atype);

                    /**
                     * 判断参数 Atype 是否已赋值
                     * @return Atype 是否已赋值
                     * 
                     */
                    bool AtypeHasBeenSet() const;

                    /**
                     * 获取Execution time. Unit: ms.
                     * @return ExecTime Execution time. Unit: ms.
                     * 
                     */
                    uint64_t GetExecTime() const;

                    /**
                     * 设置Execution time. Unit: ms.
                     * @param _execTime Execution time. Unit: ms.
                     * 
                     */
                    void SetExecTime(const uint64_t& _execTime);

                    /**
                     * 判断参数 ExecTime 是否已赋值
                     * @return ExecTime 是否已赋值
                     * 
                     */
                    bool ExecTimeHasBeenSet() const;

                    /**
                     * 获取Client IP address.
                     * @return Host Client IP address.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Client IP address.
                     * @param _host Client IP address.
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
                     * 获取Operation parameter. Includes operation parameter information.
                     * @return Param Operation parameter. Includes operation parameter information.
                     * 
                     */
                    std::string GetParam() const;

                    /**
                     * 设置Operation parameter. Includes operation parameter information.
                     * @param _param Operation parameter. Includes operation parameter information.
                     * 
                     */
                    void SetParam(const std::string& _param);

                    /**
                     * 判断参数 Param 是否已赋值
                     * @return Param 是否已赋值
                     * 
                     */
                    bool ParamHasBeenSet() const;

                    /**
                     * 获取Execution result. 0 indicates success, non-0 indicates failure.
                     * @return Result Execution result. 0 indicates success, non-0 indicates failure.
                     * 
                     */
                    int64_t GetResult() const;

                    /**
                     * 设置Execution result. 0 indicates success, non-0 indicates failure.
                     * @param _result Execution result. 0 indicates success, non-0 indicates failure.
                     * 
                     */
                    void SetResult(const int64_t& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取User role list. Format: role@db,role@db.
                     * @return Roles User role list. Format: role@db,role@db.
                     * 
                     */
                    std::string GetRoles() const;

                    /**
                     * 设置User role list. Format: role@db,role@db.
                     * @param _roles User role list. Format: role@db,role@db.
                     * 
                     */
                    void SetRoles(const std::string& _roles);

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取Operation timestamp. Format: YYYY-MM-DD HH:mm:ss.
                     * @return Timestamp Operation timestamp. Format: YYYY-MM-DD HH:mm:ss.
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置Operation timestamp. Format: YYYY-MM-DD HH:mm:ss.
                     * @param _timestamp Operation timestamp. Format: YYYY-MM-DD HH:mm:ss.
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
                     * 获取Username. Format: user@db.
                     * @return User Username. Format: user@db.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Username. Format: user@db.
                     * @param _user Username. Format: user@db.
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                private:

                    /**
                     * Number of affected rows
                     */
                    uint64_t m_affectRows;
                    bool m_affectRowsHasBeenSet;

                    /**
                     * Operation type. For example: grantRolesToRole, dropRole.
                     */
                    std::string m_atype;
                    bool m_atypeHasBeenSet;

                    /**
                     * Execution time. Unit: ms.
                     */
                    uint64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * Client IP address.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Operation parameter. Includes operation parameter information.
                     */
                    std::string m_param;
                    bool m_paramHasBeenSet;

                    /**
                     * Execution result. 0 indicates success, non-0 indicates failure.
                     */
                    int64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * User role list. Format: role@db,role@db.
                     */
                    std::string m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * Operation timestamp. Format: YYYY-MM-DD HH:mm:ss.
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Username. Format: user@db.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_AUDITLOG_H_
