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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYAUDITCONFIGREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYAUDITCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyAuditConfig request structure.
                */
                class ModifyAuditConfigRequest : public AbstractModel
                {
                public:
                    ModifyAuditConfigRequest();
                    ~ModifyAuditConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.comom/document/product/236/15872?from_cn_redirect=1) API.
                     * @return InstanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.comom/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.comom/document/product/236/15872?from_cn_redirect=1) API.
                     * @param _instanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.comom/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Audit log retention period. Valid values:7 - One week;30 - One month;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     * @return LogExpireDay Audit log retention period. Valid values:7 - One week;30 - One month;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     * 
                     */
                    int64_t GetLogExpireDay() const;

                    /**
                     * 设置Audit log retention period. Valid values:7 - One week;30 - One month;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     * @param _logExpireDay Audit log retention period. Valid values:7 - One week;30 - One month;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     * 
                     */
                    void SetLogExpireDay(const int64_t& _logExpireDay);

                    /**
                     * 判断参数 LogExpireDay 是否已赋值
                     * @return LogExpireDay 是否已赋值
                     * 
                     */
                    bool LogExpireDayHasBeenSet() const;

                    /**
                     * 获取Whether to disable the audit service. Valid values: true - Disable; false - Do not disable. Default value: false.Notes:1. When the audit service is disabled, your audit logs and files will be deleted, and all audit policies for this instance will be removed.2. At least one of CloseAudit and LogExpireDay must be provided. If both are provided, CloseAudit takes priority.3. You can use this parameter to disable the audit service. Once disabled, the audit service cannot be re-enabled via this API.
                     * @return CloseAudit Whether to disable the audit service. Valid values: true - Disable; false - Do not disable. Default value: false.Notes:1. When the audit service is disabled, your audit logs and files will be deleted, and all audit policies for this instance will be removed.2. At least one of CloseAudit and LogExpireDay must be provided. If both are provided, CloseAudit takes priority.3. You can use this parameter to disable the audit service. Once disabled, the audit service cannot be re-enabled via this API.
                     * 
                     */
                    bool GetCloseAudit() const;

                    /**
                     * 设置Whether to disable the audit service. Valid values: true - Disable; false - Do not disable. Default value: false.Notes:1. When the audit service is disabled, your audit logs and files will be deleted, and all audit policies for this instance will be removed.2. At least one of CloseAudit and LogExpireDay must be provided. If both are provided, CloseAudit takes priority.3. You can use this parameter to disable the audit service. Once disabled, the audit service cannot be re-enabled via this API.
                     * @param _closeAudit Whether to disable the audit service. Valid values: true - Disable; false - Do not disable. Default value: false.Notes:1. When the audit service is disabled, your audit logs and files will be deleted, and all audit policies for this instance will be removed.2. At least one of CloseAudit and LogExpireDay must be provided. If both are provided, CloseAudit takes priority.3. You can use this parameter to disable the audit service. Once disabled, the audit service cannot be re-enabled via this API.
                     * 
                     */
                    void SetCloseAudit(const bool& _closeAudit);

                    /**
                     * 判断参数 CloseAudit 是否已赋值
                     * @return CloseAudit 是否已赋值
                     * 
                     */
                    bool CloseAuditHasBeenSet() const;

                    /**
                     * 获取High-frequency audit log retention period. Valid values:7 - One week;30 - One month;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     * @return HighLogExpireDay High-frequency audit log retention period. Valid values:7 - One week;30 - One month;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     * 
                     */
                    int64_t GetHighLogExpireDay() const;

                    /**
                     * 设置High-frequency audit log retention period. Valid values:7 - One week;30 - One month;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     * @param _highLogExpireDay High-frequency audit log retention period. Valid values:7 - One week;30 - One month;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     * 
                     */
                    void SetHighLogExpireDay(const int64_t& _highLogExpireDay);

                    /**
                     * 判断参数 HighLogExpireDay 是否已赋值
                     * @return HighLogExpireDay 是否已赋值
                     * 
                     */
                    bool HighLogExpireDayHasBeenSet() const;

                private:

                    /**
                     * Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.comom/document/product/236/15872?from_cn_redirect=1) API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Audit log retention period. Valid values:7 - One week;30 - One month;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     */
                    int64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * Whether to disable the audit service. Valid values: true - Disable; false - Do not disable. Default value: false.Notes:1. When the audit service is disabled, your audit logs and files will be deleted, and all audit policies for this instance will be removed.2. At least one of CloseAudit and LogExpireDay must be provided. If both are provided, CloseAudit takes priority.3. You can use this parameter to disable the audit service. Once disabled, the audit service cannot be re-enabled via this API.
                     */
                    bool m_closeAudit;
                    bool m_closeAuditHasBeenSet;

                    /**
                     * High-frequency audit log retention period. Valid values:7 - One week;30 - One month;180 - Six months;365 - One year;1095 - Three years;1825 - Five years.
                     */
                    int64_t m_highLogExpireDay;
                    bool m_highLogExpireDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYAUDITCONFIGREQUEST_H_
