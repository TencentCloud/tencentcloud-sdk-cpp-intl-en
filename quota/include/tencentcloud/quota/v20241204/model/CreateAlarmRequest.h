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

#ifndef TENCENTCLOUD_QUOTA_V20241204_MODEL_CREATEALARMREQUEST_H_
#define TENCENTCLOUD_QUOTA_V20241204_MODEL_CREATEALARMREQUEST_H_

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
                * CreateAlarm request structure.
                */
                class CreateAlarmRequest : public AbstractModel
                {
                public:
                    CreateAlarmRequest();
                    ~CreateAlarmRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Alarm rule name. specifies the name of the Alarm rule.
                     * @return Name Alarm rule name. specifies the name of the Alarm rule.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Alarm rule name. specifies the name of the Alarm rule.
                     * @param _name Alarm rule name. specifies the name of the Alarm rule.
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
                     * 获取Alert metrics 1: quota usage 2: quota usage rate 3: remaining quota 4: remaining quota rate.
                     * @return Metrics Alert metrics 1: quota usage 2: quota usage rate 3: remaining quota 4: remaining quota rate.
                     * 
                     */
                    int64_t GetMetrics() const;

                    /**
                     * 设置Alert metrics 1: quota usage 2: quota usage rate 3: remaining quota 4: remaining quota rate.
                     * @param _metrics Alert metrics 1: quota usage 2: quota usage rate 3: remaining quota 4: remaining quota rate.
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
                     * 获取Specifies the Alarm threshold. value range: 0-100.
                     * @return Threshold Specifies the Alarm threshold. value range: 0-100.
                     * 
                     */
                    int64_t GetThreshold() const;

                    /**
                     * 设置Specifies the Alarm threshold. value range: 0-100.
                     * @param _threshold Specifies the Alarm threshold. value range: 0-100.
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
                     * 获取  Member UIN
                     * @return MemberUin   Member UIN
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置  Member UIN
                     * @param _memberUin   Member UIN
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
                     * Alarm rule name. specifies the name of the Alarm rule.
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
                     * Alert metrics 1: quota usage 2: quota usage rate 3: remaining quota 4: remaining quota rate.
                     */
                    int64_t m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * Specifies the Alarm threshold. value range: 0-100.
                     */
                    int64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * Alarm frequency.
                     */
                    int64_t m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     *   Member UIN
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_QUOTA_V20241204_MODEL_CREATEALARMREQUEST_H_
