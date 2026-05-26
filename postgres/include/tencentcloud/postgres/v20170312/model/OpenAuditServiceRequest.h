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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_OPENAUDITSERVICEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_OPENAUDITSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * OpenAuditService request structure.
                */
                class OpenAuditServiceRequest : public AbstractModel
                {
                public:
                    OpenAuditServiceRequest();
                    ~OpenAuditServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID</p>
                     * @return InstanceId <p>Instance ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID</p>
                     * @param _instanceId <p>Instance ID</p>
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
                     * 获取<p>Log retention duration</p><p>Enumeration value:</p><ul><li>7: 7 days</li><li>30: 30 days</li><li>90: 90 days</li><li>180: 180 days</li><li>365: 365 days</li><li>1095: 1095 days</li><li>1825: 1825 days</li></ul>
                     * @return LogExpireDay <p>Log retention duration</p><p>Enumeration value:</p><ul><li>7: 7 days</li><li>30: 30 days</li><li>90: 90 days</li><li>180: 180 days</li><li>365: 365 days</li><li>1095: 1095 days</li><li>1825: 1825 days</li></ul>
                     * 
                     */
                    uint64_t GetLogExpireDay() const;

                    /**
                     * 设置<p>Log retention duration</p><p>Enumeration value:</p><ul><li>7: 7 days</li><li>30: 30 days</li><li>90: 90 days</li><li>180: 180 days</li><li>365: 365 days</li><li>1095: 1095 days</li><li>1825: 1825 days</li></ul>
                     * @param _logExpireDay <p>Log retention duration</p><p>Enumeration value:</p><ul><li>7: 7 days</li><li>30: 30 days</li><li>90: 90 days</li><li>180: 180 days</li><li>365: 365 days</li><li>1095: 1095 days</li><li>1825: 1825 days</li></ul>
                     * 
                     */
                    void SetLogExpireDay(const uint64_t& _logExpireDay);

                    /**
                     * 判断参数 LogExpireDay 是否已赋值
                     * @return LogExpireDay 是否已赋值
                     * 
                     */
                    bool LogExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>High-frequency storage duration</p><p>Enumeration value:</p><ul><li>7: 7 days</li><li>30: 30 days</li><li>90: 90 days</li><li>180: 180 days</li><li>365: 365 days</li><li>1095: 1095 days</li><li>1825: 1825 days</li></ul>
                     * @return HotLogExpireDay <p>High-frequency storage duration</p><p>Enumeration value:</p><ul><li>7: 7 days</li><li>30: 30 days</li><li>90: 90 days</li><li>180: 180 days</li><li>365: 365 days</li><li>1095: 1095 days</li><li>1825: 1825 days</li></ul>
                     * 
                     */
                    uint64_t GetHotLogExpireDay() const;

                    /**
                     * 设置<p>High-frequency storage duration</p><p>Enumeration value:</p><ul><li>7: 7 days</li><li>30: 30 days</li><li>90: 90 days</li><li>180: 180 days</li><li>365: 365 days</li><li>1095: 1095 days</li><li>1825: 1825 days</li></ul>
                     * @param _hotLogExpireDay <p>High-frequency storage duration</p><p>Enumeration value:</p><ul><li>7: 7 days</li><li>30: 30 days</li><li>90: 90 days</li><li>180: 180 days</li><li>365: 365 days</li><li>1095: 1095 days</li><li>1825: 1825 days</li></ul>
                     * 
                     */
                    void SetHotLogExpireDay(const uint64_t& _hotLogExpireDay);

                    /**
                     * 判断参数 HotLogExpireDay 是否已赋值
                     * @return HotLogExpireDay 是否已赋值
                     * 
                     */
                    bool HotLogExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>Audit type</p><p>Enumeration value:</p><ul><li>complex: Granular audit. The audit log is more comprehensive, including object types and objects. Once enabled, it has a certain impact on performance.</li><li>simple: Fast Audit. The audit log covers most fields. When enabled, it has a smaller impact on performance.</li></ul>
                     * @return AuditType <p>Audit type</p><p>Enumeration value:</p><ul><li>complex: Granular audit. The audit log is more comprehensive, including object types and objects. Once enabled, it has a certain impact on performance.</li><li>simple: Fast Audit. The audit log covers most fields. When enabled, it has a smaller impact on performance.</li></ul>
                     * 
                     */
                    std::string GetAuditType() const;

                    /**
                     * 设置<p>Audit type</p><p>Enumeration value:</p><ul><li>complex: Granular audit. The audit log is more comprehensive, including object types and objects. Once enabled, it has a certain impact on performance.</li><li>simple: Fast Audit. The audit log covers most fields. When enabled, it has a smaller impact on performance.</li></ul>
                     * @param _auditType <p>Audit type</p><p>Enumeration value:</p><ul><li>complex: Granular audit. The audit log is more comprehensive, including object types and objects. Once enabled, it has a certain impact on performance.</li><li>simple: Fast Audit. The audit log covers most fields. When enabled, it has a smaller impact on performance.</li></ul>
                     * 
                     */
                    void SetAuditType(const std::string& _auditType);

                    /**
                     * 判断参数 AuditType 是否已赋值
                     * @return AuditType 是否已赋值
                     * 
                     */
                    bool AuditTypeHasBeenSet() const;

                    /**
                     * 获取<p>Product name</p><p>Input parameter limit: postgres</p>
                     * @return Product <p>Product name</p><p>Input parameter limit: postgres</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>Product name</p><p>Input parameter limit: postgres</p>
                     * @param _product <p>Product name</p><p>Input parameter limit: postgres</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Log retention duration</p><p>Enumeration value:</p><ul><li>7: 7 days</li><li>30: 30 days</li><li>90: 90 days</li><li>180: 180 days</li><li>365: 365 days</li><li>1095: 1095 days</li><li>1825: 1825 days</li></ul>
                     */
                    uint64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * <p>High-frequency storage duration</p><p>Enumeration value:</p><ul><li>7: 7 days</li><li>30: 30 days</li><li>90: 90 days</li><li>180: 180 days</li><li>365: 365 days</li><li>1095: 1095 days</li><li>1825: 1825 days</li></ul>
                     */
                    uint64_t m_hotLogExpireDay;
                    bool m_hotLogExpireDayHasBeenSet;

                    /**
                     * <p>Audit type</p><p>Enumeration value:</p><ul><li>complex: Granular audit. The audit log is more comprehensive, including object types and objects. Once enabled, it has a certain impact on performance.</li><li>simple: Fast Audit. The audit log covers most fields. When enabled, it has a smaller impact on performance.</li></ul>
                     */
                    std::string m_auditType;
                    bool m_auditTypeHasBeenSet;

                    /**
                     * <p>Product name</p><p>Input parameter limit: postgres</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_OPENAUDITSERVICEREQUEST_H_
