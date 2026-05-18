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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_AUDITLOGFILTER_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_AUDITLOGFILTER_H_

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
                * Audit log filter criteria
                */
                class AuditLogFilter : public AbstractModel
                {
                public:
                    AuditLogFilter();
                    ~AuditLogFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Client IP address.
                     * @return Host Client IP address.
                     * 
                     */
                    std::vector<std::string> GetHost() const;

                    /**
                     * 设置Client IP address.
                     * @param _host Client IP address.
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
                     * 获取Username.
                     * @return User Username.
                     * 
                     */
                    std::vector<std::string> GetUser() const;

                    /**
                     * 设置Username.
                     * @param _user Username.
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
                     * 获取Execution time. Unit: ms. Filter audit logs with execution time more than this value.
                     * @return ExecTime Execution time. Unit: ms. Filter audit logs with execution time more than this value.
                     * 
                     */
                    uint64_t GetExecTime() const;

                    /**
                     * 设置Execution time. Unit: ms. Filter audit logs with execution time more than this value.
                     * @param _execTime Execution time. Unit: ms. Filter audit logs with execution time more than this value.
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
                     * 获取Number of affected rows. Filter audit logs with affected rows more than this value.
                     * @return AffectRows Number of affected rows. Filter audit logs with affected rows more than this value.
                     * 
                     */
                    uint64_t GetAffectRows() const;

                    /**
                     * 设置Number of affected rows. Filter audit logs with affected rows more than this value.
                     * @param _affectRows Number of affected rows. Filter audit logs with affected rows more than this value.
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
                     * 获取Operation type.
                     * @return Atype Operation type.
                     * 
                     */
                    std::vector<std::string> GetAtype() const;

                    /**
                     * 设置Operation type.
                     * @param _atype Operation type.
                     * 
                     */
                    void SetAtype(const std::vector<std::string>& _atype);

                    /**
                     * 判断参数 Atype 是否已赋值
                     * @return Atype 是否已赋值
                     * 
                     */
                    bool AtypeHasBeenSet() const;

                    /**
                     * 获取Execution result.
                     * @return Result Execution result.
                     * 
                     */
                    std::vector<std::string> GetResult() const;

                    /**
                     * 设置Execution result.
                     * @param _result Execution result.
                     * 
                     */
                    void SetResult(const std::vector<std::string>& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Filter logs using this keyword
                     * @return Param Filter logs using this keyword
                     * 
                     */
                    std::vector<std::string> GetParam() const;

                    /**
                     * 设置Filter logs using this keyword
                     * @param _param Filter logs using this keyword
                     * 
                     */
                    void SetParam(const std::vector<std::string>& _param);

                    /**
                     * 判断参数 Param 是否已赋值
                     * @return Param 是否已赋值
                     * 
                     */
                    bool ParamHasBeenSet() const;

                private:

                    /**
                     * Client IP address.
                     */
                    std::vector<std::string> m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Username.
                     */
                    std::vector<std::string> m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Execution time. Unit: ms. Filter audit logs with execution time more than this value.
                     */
                    uint64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * Number of affected rows. Filter audit logs with affected rows more than this value.
                     */
                    uint64_t m_affectRows;
                    bool m_affectRowsHasBeenSet;

                    /**
                     * Operation type.
                     */
                    std::vector<std::string> m_atype;
                    bool m_atypeHasBeenSet;

                    /**
                     * Execution result.
                     */
                    std::vector<std::string> m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Filter logs using this keyword
                     */
                    std::vector<std::string> m_param;
                    bool m_paramHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_AUDITLOGFILTER_H_
