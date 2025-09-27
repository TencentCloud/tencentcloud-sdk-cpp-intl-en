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

#ifndef TENCENTCLOUD_QUOTA_V20241204_MODEL_ALARM_H_
#define TENCENTCLOUD_QUOTA_V20241204_MODEL_ALARM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Alarm Rule Details
                */
                class Alarm : public AbstractModel
                {
                public:
                    Alarm();
                    ~Alarm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm rule ID.
                     * @return Id Alarm rule ID.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Alarm rule ID.
                     * @param _id Alarm rule ID.
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
                     * 获取Product ID
                     * @return ProductId Product ID
                     * 
                     */
                    uint64_t GetProductId() const;

                    /**
                     * 设置Product ID
                     * @param _productId Product ID
                     * 
                     */
                    void SetProductId(const uint64_t& _productId);

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
                    uint64_t GetQuotaId() const;

                    /**
                     * 设置Quota ID.
                     * @param _quotaId Quota ID.
                     * 
                     */
                    void SetQuotaId(const uint64_t& _quotaId);

                    /**
                     * 判断参数 QuotaId 是否已赋值
                     * @return QuotaId 是否已赋值
                     * 
                     */
                    bool QuotaIdHasBeenSet() const;

                    /**
                     * 获取Alarm condition.
                     * @return Metrics Alarm condition.
                     * 
                     */
                    int64_t GetMetrics() const;

                    /**
                     * 设置Alarm condition.
                     * @param _metrics Alarm condition.
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
                     * 获取Creator UIN
                     * @return OwnerUin Creator UIN
                     * 
                     */
                    int64_t GetOwnerUin() const;

                    /**
                     * 设置Creator UIN
                     * @param _ownerUin Creator UIN
                     * 
                     */
                    void SetOwnerUin(const int64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Specifies the uin of the rule owner.
                     * @return MemberUin Specifies the uin of the rule owner.
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置Specifies the uin of the rule owner.
                     * @param _memberUin Specifies the uin of the rule owner.
                     * 
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取Specifies the quota name.
                     * @return QuotaName Specifies the quota name.
                     * 
                     */
                    std::string GetQuotaName() const;

                    /**
                     * 设置Specifies the quota name.
                     * @param _quotaName Specifies the quota name.
                     * 
                     */
                    void SetQuotaName(const std::string& _quotaName);

                    /**
                     * 判断参数 QuotaName 是否已赋值
                     * @return QuotaName 是否已赋值
                     * 
                     */
                    bool QuotaNameHasBeenSet() const;

                    /**
                     * 获取Product name
                     * @return ProductName Product name
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Product name
                     * @param _productName Product name
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Whether to delete. 1: not deleted.
2: delete.
                     * @return Status Whether to delete. 1: not deleted.
2: delete.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Whether to delete. 1: not deleted.
2: delete.
                     * @param _status Whether to delete. 1: not deleted.
2: delete.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Alarm rule ID.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Alarm rule name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Product ID
                     */
                    uint64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Quota ID.
                     */
                    uint64_t m_quotaId;
                    bool m_quotaIdHasBeenSet;

                    /**
                     * Alarm condition.
                     */
                    int64_t m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * Alarm frequency.
                     */
                    int64_t m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * Specifies the Alarm threshold. valid values: 0-100.
                     */
                    int64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * Creator UIN
                     */
                    int64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Specifies the uin of the rule owner.
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * Specifies the quota name.
                     */
                    std::string m_quotaName;
                    bool m_quotaNameHasBeenSet;

                    /**
                     * Product name
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Whether to delete. 1: not deleted.
2: delete.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_QUOTA_V20241204_MODEL_ALARM_H_
