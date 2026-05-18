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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEAUDITCONFIGRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEAUDITCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAuditConfig response structure.
                */
                class DescribeAuditConfigResponse : public AbstractModel
                {
                public:
                    DescribeAuditConfigResponse();
                    ~DescribeAuditConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName Instance name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取true indicates full audit, false indicates rule audit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuditAll true indicates full audit, false indicates rule audit
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAuditAll() const;

                    /**
                     * 判断参数 AuditAll 是否已赋值
                     * @return AuditAll 是否已赋值
                     * 
                     */
                    bool AuditAllHasBeenSet() const;

                    /**
                     * 获取The time when the instance enables database audit.
                     * @return CreateTime The time when the instance enables database audit.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Audit log retention period.
Unit: day. Currently supports retention duration including 0, 30, 180, 365, 1095, 1825.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogExpireDay Audit log retention period.
Unit: day. Currently supports retention duration including 0, 30, 180, 365, 1095, 1825.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLogExpireDay() const;

                    /**
                     * 判断参数 LogExpireDay 是否已赋值
                     * @return LogExpireDay 是否已赋值
                     * 
                     */
                    bool LogExpireDayHasBeenSet() const;

                    /**
                     * 获取Audit log storage type. Currently only support "storage": Storage type.
                     * @return LogType Audit log storage type. Currently only support "storage": Storage type.
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Whether the auditing feature is being disabled.
<ul><li>true: Yes.</li><li>false: No.</li></ul>
                     * @return IsClosing Whether the auditing feature is being disabled.
<ul><li>true: Yes.</li><li>false: No.</li></ul>
                     * 
                     */
                    std::string GetIsClosing() const;

                    /**
                     * 判断参数 IsClosing 是否已赋值
                     * @return IsClosing 是否已赋值
                     * 
                     */
                    bool IsClosingHasBeenSet() const;

                    /**
                     * 获取Whether the audit feature is being enabled.<ul><li>true: Yes.</li><li>false: No.</li></ul>
                     * @return IsOpening Whether the audit feature is being enabled.<ul><li>true: Yes.</li><li>false: No.</li></ul>
                     * 
                     */
                    std::string GetIsOpening() const;

                    /**
                     * 判断参数 IsOpening 是否已赋值
                     * @return IsOpening 是否已赋值
                     * 
                     */
                    bool IsOpeningHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * true indicates full audit, false indicates rule audit
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_auditAll;
                    bool m_auditAllHasBeenSet;

                    /**
                     * The time when the instance enables database audit.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Audit log retention period.
Unit: day. Currently supports retention duration including 0, 30, 180, 365, 1095, 1825.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * Audit log storage type. Currently only support "storage": Storage type.
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Whether the auditing feature is being disabled.
<ul><li>true: Yes.</li><li>false: No.</li></ul>
                     */
                    std::string m_isClosing;
                    bool m_isClosingHasBeenSet;

                    /**
                     * Whether the audit feature is being enabled.<ul><li>true: Yes.</li><li>false: No.</li></ul>
                     */
                    std::string m_isOpening;
                    bool m_isOpeningHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEAUDITCONFIGRESPONSE_H_
