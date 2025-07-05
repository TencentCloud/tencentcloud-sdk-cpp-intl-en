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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_EIPQUOTA_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_EIPQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * EIP quota information
                */
                class EipQuota : public AbstractModel
                {
                public:
                    EipQuota();
                    ~EipQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Quota name. Valid values:
TOTAL_EIP_QUOTA: quota of EIPs in the current region;
DAILY_EIP_APPLY: today's number of applications in the current region;
DAILY_PUBLIC_IP_ASSIGN: number of public IP reassignments in the current region.
                     * @return QuotaId Quota name. Valid values:
TOTAL_EIP_QUOTA: quota of EIPs in the current region;
DAILY_EIP_APPLY: today's number of applications in the current region;
DAILY_PUBLIC_IP_ASSIGN: number of public IP reassignments in the current region.
                     * 
                     */
                    std::string GetQuotaId() const;

                    /**
                     * 设置Quota name. Valid values:
TOTAL_EIP_QUOTA: quota of EIPs in the current region;
DAILY_EIP_APPLY: today's number of applications in the current region;
DAILY_PUBLIC_IP_ASSIGN: number of public IP reassignments in the current region.
                     * @param _quotaId Quota name. Valid values:
TOTAL_EIP_QUOTA: quota of EIPs in the current region;
DAILY_EIP_APPLY: today's number of applications in the current region;
DAILY_PUBLIC_IP_ASSIGN: number of public IP reassignments in the current region.
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
                     * 获取Current quantity
                     * @return QuotaCurrent Current quantity
                     * 
                     */
                    uint64_t GetQuotaCurrent() const;

                    /**
                     * 设置Current quantity
                     * @param _quotaCurrent Current quantity
                     * 
                     */
                    void SetQuotaCurrent(const uint64_t& _quotaCurrent);

                    /**
                     * 判断参数 QuotaCurrent 是否已赋值
                     * @return QuotaCurrent 是否已赋值
                     * 
                     */
                    bool QuotaCurrentHasBeenSet() const;

                    /**
                     * 获取Quota
                     * @return QuotaLimit Quota
                     * 
                     */
                    uint64_t GetQuotaLimit() const;

                    /**
                     * 设置Quota
                     * @param _quotaLimit Quota
                     * 
                     */
                    void SetQuotaLimit(const uint64_t& _quotaLimit);

                    /**
                     * 判断参数 QuotaLimit 是否已赋值
                     * @return QuotaLimit 是否已赋值
                     * 
                     */
                    bool QuotaLimitHasBeenSet() const;

                private:

                    /**
                     * Quota name. Valid values:
TOTAL_EIP_QUOTA: quota of EIPs in the current region;
DAILY_EIP_APPLY: today's number of applications in the current region;
DAILY_PUBLIC_IP_ASSIGN: number of public IP reassignments in the current region.
                     */
                    std::string m_quotaId;
                    bool m_quotaIdHasBeenSet;

                    /**
                     * Current quantity
                     */
                    uint64_t m_quotaCurrent;
                    bool m_quotaCurrentHasBeenSet;

                    /**
                     * Quota
                     */
                    uint64_t m_quotaLimit;
                    bool m_quotaLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_EIPQUOTA_H_
