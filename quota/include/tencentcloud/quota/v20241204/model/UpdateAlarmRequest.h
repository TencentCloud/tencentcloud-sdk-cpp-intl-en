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

#ifndef TENCENTCLOUD_QUOTA_V20241204_MODEL_UPDATEALARMREQUEST_H_
#define TENCENTCLOUD_QUOTA_V20241204_MODEL_UPDATEALARMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Quota
    {
        namespace V20241204
        {
            namespace Model
            {
                /**
                * UpdateAlarm request structure.
                */
                class UpdateAlarmRequest : public AbstractModel
                {
                public:
                    UpdateAlarmRequest();
                    ~UpdateAlarmRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID
                     * @return Id ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置ID
                     * @param _id ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Alarm rule name.
                     * @return Name Alarm rule name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Alarm rule name.
                     * @param _name Alarm rule name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Product ID.
                     * @return ProductId Product ID.
                     * 
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置Product ID.
                     * @param _productId Product ID.
                     * 
                     */
                    void SetProductId(const int64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Quota ID.
                     * @return QuotaId Quota ID.
                     * 
                     */
                    int64_t GetQuotaId() const;

                    /**
                     * 设置Quota ID.
                     * @param _quotaId Quota ID.
                     * 
                     */
                    void SetQuotaId(const int64_t& _quotaId);

                    /**
                     * 判断参数 QuotaId 是否已赋值
                     * @return QuotaId 是否已赋值
                     * 
                     */
                    bool QuotaIdHasBeenSet() const;

                    /**
                     * 获取1: quota usage 2: quota usage rate 3: remaining quota 4: remaining quota rate.
                     * @return Metrics 1: quota usage 2: quota usage rate 3: remaining quota 4: remaining quota rate.
                     * 
                     */
                    int64_t GetMetrics() const;

                    /**
                     * 设置1: quota usage 2: quota usage rate 3: remaining quota 4: remaining quota rate.
                     * @param _metrics 1: quota usage 2: quota usage rate 3: remaining quota 4: remaining quota rate.
                     * 
                     */
                    void SetMetrics(const int64_t& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取Specifies the Alarm threshold. valid values: 0-100.
                     * @return Threshold Specifies the Alarm threshold. valid values: 0-100.
                     * 
                     */
                    int64_t GetThreshold() const;

                    /**
                     * 设置Specifies the Alarm threshold. valid values: 0-100.
                     * @param _threshold Specifies the Alarm threshold. valid values: 0-100.
                     * 
                     */
                    void SetThreshold(const int64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取Alarm frequency.
                     * @return Frequency Alarm frequency.
                     * 
                     */
                    int64_t GetFrequency() const;

                    /**
                     * 设置Alarm frequency.
                     * @param _frequency Alarm frequency.
                     * 
                     */
                    void SetFrequency(const int64_t& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取Specifies the uin of the rule owner.
Operates non-group account rules. this parameter can be omitted.
Operates the organization account rule. specifies the uin of all users under the current rule.
                     * @return MemberUin Specifies the uin of the rule owner.
Operates non-group account rules. this parameter can be omitted.
Operates the organization account rule. specifies the uin of all users under the current rule.
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置Specifies the uin of the rule owner.
Operates non-group account rules. this parameter can be omitted.
Operates the organization account rule. specifies the uin of all users under the current rule.
                     * @param _memberUin Specifies the uin of the rule owner.
Operates non-group account rules. this parameter can be omitted.
Operates the organization account rule. specifies the uin of all users under the current rule.
                     * 
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                private:

                    /**
                     * ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Alarm rule name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Product ID.
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Quota ID.
                     */
                    int64_t m_quotaId;
                    bool m_quotaIdHasBeenSet;

                    /**
                     * 1: quota usage 2: quota usage rate 3: remaining quota 4: remaining quota rate.
                     */
                    int64_t m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * Specifies the Alarm threshold. valid values: 0-100.
                     */
                    int64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * Alarm frequency.
                     */
                    int64_t m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * Specifies the uin of the rule owner.
Operates non-group account rules. this parameter can be omitted.
Operates the organization account rule. specifies the uin of all users under the current rule.
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_QUOTA_V20241204_MODEL_UPDATEALARMREQUEST_H_
