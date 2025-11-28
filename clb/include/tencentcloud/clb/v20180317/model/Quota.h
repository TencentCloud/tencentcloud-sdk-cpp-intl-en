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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_QUOTA_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_QUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Quota description. All quotas are in the current region.
                */
                class Quota : public AbstractModel
                {
                public:
                    Quota();
                    ~Quota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Quota name. value range:.
<Li>TOTAL_OPEN_CLB_QUOTA: specifies the public network clb quota in the current region for the user.</li>.
<Li>TOTAL_INTERNAL_CLB_QUOTA: specifies the private network clb quota in the current region for the user.</li>.
<li>TOTAL_LISTENER_QUOTA: specifies the LISTENER QUOTA under a CLB.</li>.
<Li>TOTAL_LISTENER_RULE_QUOTA: specifies the forwarding rule quota under a listener.</li>.
<Li>TOTAL_TARGET_BIND_QUOTA: specifies the quota of devices that can be bound to a forwarding rule.</li>.
<li> TOTAL_SNAT_IP_QUOTA: specifies the SNAT IP QUOTA for a cross-regional 2.0 CLB instance. </li>.
<Li>TOTAL_ISP_CLB_QUOTA: specifies the quota of triple-isp (cmcc/cucc/ctcc) clb instances in the current region for the user.</li>.
<li>TOTAL_FULL_PORT_RANGE_LISTENER_QUOTA: specifies the QUOTA of single-protocol FULL PORT RANGE listeners for a CLB instance.</li>.
                     * @return QuotaId Quota name. value range:.
<Li>TOTAL_OPEN_CLB_QUOTA: specifies the public network clb quota in the current region for the user.</li>.
<Li>TOTAL_INTERNAL_CLB_QUOTA: specifies the private network clb quota in the current region for the user.</li>.
<li>TOTAL_LISTENER_QUOTA: specifies the LISTENER QUOTA under a CLB.</li>.
<Li>TOTAL_LISTENER_RULE_QUOTA: specifies the forwarding rule quota under a listener.</li>.
<Li>TOTAL_TARGET_BIND_QUOTA: specifies the quota of devices that can be bound to a forwarding rule.</li>.
<li> TOTAL_SNAT_IP_QUOTA: specifies the SNAT IP QUOTA for a cross-regional 2.0 CLB instance. </li>.
<Li>TOTAL_ISP_CLB_QUOTA: specifies the quota of triple-isp (cmcc/cucc/ctcc) clb instances in the current region for the user.</li>.
<li>TOTAL_FULL_PORT_RANGE_LISTENER_QUOTA: specifies the QUOTA of single-protocol FULL PORT RANGE listeners for a CLB instance.</li>.
                     * 
                     */
                    std::string GetQuotaId() const;

                    /**
                     * 设置Quota name. value range:.
<Li>TOTAL_OPEN_CLB_QUOTA: specifies the public network clb quota in the current region for the user.</li>.
<Li>TOTAL_INTERNAL_CLB_QUOTA: specifies the private network clb quota in the current region for the user.</li>.
<li>TOTAL_LISTENER_QUOTA: specifies the LISTENER QUOTA under a CLB.</li>.
<Li>TOTAL_LISTENER_RULE_QUOTA: specifies the forwarding rule quota under a listener.</li>.
<Li>TOTAL_TARGET_BIND_QUOTA: specifies the quota of devices that can be bound to a forwarding rule.</li>.
<li> TOTAL_SNAT_IP_QUOTA: specifies the SNAT IP QUOTA for a cross-regional 2.0 CLB instance. </li>.
<Li>TOTAL_ISP_CLB_QUOTA: specifies the quota of triple-isp (cmcc/cucc/ctcc) clb instances in the current region for the user.</li>.
<li>TOTAL_FULL_PORT_RANGE_LISTENER_QUOTA: specifies the QUOTA of single-protocol FULL PORT RANGE listeners for a CLB instance.</li>.
                     * @param _quotaId Quota name. value range:.
<Li>TOTAL_OPEN_CLB_QUOTA: specifies the public network clb quota in the current region for the user.</li>.
<Li>TOTAL_INTERNAL_CLB_QUOTA: specifies the private network clb quota in the current region for the user.</li>.
<li>TOTAL_LISTENER_QUOTA: specifies the LISTENER QUOTA under a CLB.</li>.
<Li>TOTAL_LISTENER_RULE_QUOTA: specifies the forwarding rule quota under a listener.</li>.
<Li>TOTAL_TARGET_BIND_QUOTA: specifies the quota of devices that can be bound to a forwarding rule.</li>.
<li> TOTAL_SNAT_IP_QUOTA: specifies the SNAT IP QUOTA for a cross-regional 2.0 CLB instance. </li>.
<Li>TOTAL_ISP_CLB_QUOTA: specifies the quota of triple-isp (cmcc/cucc/ctcc) clb instances in the current region for the user.</li>.
<li>TOTAL_FULL_PORT_RANGE_LISTENER_QUOTA: specifies the QUOTA of single-protocol FULL PORT RANGE listeners for a CLB instance.</li>.
                     * 
                     */
                    void SetQuotaId(const std::string& _quotaId);

                    /**
                     * 判断参数 QuotaId 是否已赋值
                     * @return QuotaId 是否已赋值
                     * 
                     */
                    bool QuotaIdHasBeenSet() const;

                    /**
                     * 获取Currently used quantity. If it is `null`, it is meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return QuotaCurrent Currently used quantity. If it is `null`, it is meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetQuotaCurrent() const;

                    /**
                     * 设置Currently used quantity. If it is `null`, it is meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _quotaCurrent Currently used quantity. If it is `null`, it is meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQuotaCurrent(const int64_t& _quotaCurrent);

                    /**
                     * 判断参数 QuotaCurrent 是否已赋值
                     * @return QuotaCurrent 是否已赋值
                     * 
                     */
                    bool QuotaCurrentHasBeenSet() const;

                    /**
                     * 获取Quota limit.
                     * @return QuotaLimit Quota limit.
                     * 
                     */
                    int64_t GetQuotaLimit() const;

                    /**
                     * 设置Quota limit.
                     * @param _quotaLimit Quota limit.
                     * 
                     */
                    void SetQuotaLimit(const int64_t& _quotaLimit);

                    /**
                     * 判断参数 QuotaLimit 是否已赋值
                     * @return QuotaLimit 是否已赋值
                     * 
                     */
                    bool QuotaLimitHasBeenSet() const;

                private:

                    /**
                     * Quota name. value range:.
<Li>TOTAL_OPEN_CLB_QUOTA: specifies the public network clb quota in the current region for the user.</li>.
<Li>TOTAL_INTERNAL_CLB_QUOTA: specifies the private network clb quota in the current region for the user.</li>.
<li>TOTAL_LISTENER_QUOTA: specifies the LISTENER QUOTA under a CLB.</li>.
<Li>TOTAL_LISTENER_RULE_QUOTA: specifies the forwarding rule quota under a listener.</li>.
<Li>TOTAL_TARGET_BIND_QUOTA: specifies the quota of devices that can be bound to a forwarding rule.</li>.
<li> TOTAL_SNAT_IP_QUOTA: specifies the SNAT IP QUOTA for a cross-regional 2.0 CLB instance. </li>.
<Li>TOTAL_ISP_CLB_QUOTA: specifies the quota of triple-isp (cmcc/cucc/ctcc) clb instances in the current region for the user.</li>.
<li>TOTAL_FULL_PORT_RANGE_LISTENER_QUOTA: specifies the QUOTA of single-protocol FULL PORT RANGE listeners for a CLB instance.</li>.
                     */
                    std::string m_quotaId;
                    bool m_quotaIdHasBeenSet;

                    /**
                     * Currently used quantity. If it is `null`, it is meaningless.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_quotaCurrent;
                    bool m_quotaCurrentHasBeenSet;

                    /**
                     * Quota limit.
                     */
                    int64_t m_quotaLimit;
                    bool m_quotaLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_QUOTA_H_
