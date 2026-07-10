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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DDOSUNBLOCKQUOTA_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DDOSUNBLOCKQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * Unconsumed unblocking quota info of the current account. Users who purchase Anti-DDoS products have a default unblocking quota of 3 resources. The system will reset the unblocking quota count at zero point (UTC+8) time zone each day. Unused unblocking quota on the day will not accumulate to the next day. The unblocking quota for Anti-DDoS Package (Lite) is 3 resources per month and resets monthly.
                */
                class DDoSUnblockQuota : public AbstractModel
                {
                public:
                    DDoSUnblockQuota();
                    ~DDoSUnblockQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Total quota of the number of unblocking times.</p>
                     * @return TotalQuota <p>Total quota of the number of unblocking times.</p>
                     * 
                     */
                    uint64_t GetTotalQuota() const;

                    /**
                     * 设置<p>Total quota of the number of unblocking times.</p>
                     * @param _totalQuota <p>Total quota of the number of unblocking times.</p>
                     * 
                     */
                    void SetTotalQuota(const uint64_t& _totalQuota);

                    /**
                     * 判断参数 TotalQuota 是否已赋值
                     * @return TotalQuota 是否已赋值
                     * 
                     */
                    bool TotalQuotaHasBeenSet() const;

                    /**
                     * 获取<p>Total quota used.</p>
                     * @return UsedQuota <p>Total quota used.</p>
                     * 
                     */
                    uint64_t GetUsedQuota() const;

                    /**
                     * 设置<p>Total quota used.</p>
                     * @param _usedQuota <p>Total quota used.</p>
                     * 
                     */
                    void SetUsedQuota(const uint64_t& _usedQuota);

                    /**
                     * 判断参数 UsedQuota 是否已赋值
                     * @return UsedQuota 是否已赋值
                     * 
                     */
                    bool UsedQuotaHasBeenSet() const;

                    /**
                     * 获取<p>Start time when the quota takes effect.</p>
                     * @return QuotaStartTime <p>Start time when the quota takes effect.</p>
                     * 
                     */
                    std::string GetQuotaStartTime() const;

                    /**
                     * 设置<p>Start time when the quota takes effect.</p>
                     * @param _quotaStartTime <p>Start time when the quota takes effect.</p>
                     * 
                     */
                    void SetQuotaStartTime(const std::string& _quotaStartTime);

                    /**
                     * 判断参数 QuotaStartTime 是否已赋值
                     * @return QuotaStartTime 是否已赋值
                     * 
                     */
                    bool QuotaStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>End time when the quota takes effect.</p>
                     * @return QuotaEndTime <p>End time when the quota takes effect.</p>
                     * 
                     */
                    std::string GetQuotaEndTime() const;

                    /**
                     * 设置<p>End time when the quota takes effect.</p>
                     * @param _quotaEndTime <p>End time when the quota takes effect.</p>
                     * 
                     */
                    void SetQuotaEndTime(const std::string& _quotaEndTime);

                    /**
                     * 判断参数 QuotaEndTime 是否已赋值
                     * @return QuotaEndTime 是否已赋值
                     * 
                     */
                    bool QuotaEndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Total quota of the number of unblocking times.</p>
                     */
                    uint64_t m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                    /**
                     * <p>Total quota used.</p>
                     */
                    uint64_t m_usedQuota;
                    bool m_usedQuotaHasBeenSet;

                    /**
                     * <p>Start time when the quota takes effect.</p>
                     */
                    std::string m_quotaStartTime;
                    bool m_quotaStartTimeHasBeenSet;

                    /**
                     * <p>End time when the quota takes effect.</p>
                     */
                    std::string m_quotaEndTime;
                    bool m_quotaEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DDOSUNBLOCKQUOTA_H_
