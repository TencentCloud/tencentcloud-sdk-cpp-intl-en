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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LLMHOURBILLDETAILITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LLMHOURBILLDETAILITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Hourly bill detail line of LLM security
                */
                class LLMHourBillDetailItem : public AbstractModel
                {
                public:
                    LLMHourBillDetailItem();
                    ~LLMHourBillDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Hour range, for example, 00:00-01:00.
                     * @return TimeRange Hour range, for example, 00:00-01:00.
                     * 
                     */
                    std::string GetTimeRange() const;

                    /**
                     * 设置Hour range, for example, 00:00-01:00.
                     * @param _timeRange Hour range, for example, 00:00-01:00.
                     * 
                     */
                    void SetTimeRange(const std::string& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     * 
                     */
                    bool TimeRangeHasBeenSet() const;

                    /**
                     * 获取Prompt attack protection metering value (in tokens)
                     * @return PromptAttackUsage Prompt attack protection metering value (in tokens)
                     * 
                     */
                    int64_t GetPromptAttackUsage() const;

                    /**
                     * 设置Prompt attack protection metering value (in tokens)
                     * @param _promptAttackUsage Prompt attack protection metering value (in tokens)
                     * 
                     */
                    void SetPromptAttackUsage(const int64_t& _promptAttackUsage);

                    /**
                     * 判断参数 PromptAttackUsage 是否已赋值
                     * @return PromptAttackUsage 是否已赋值
                     * 
                     */
                    bool PromptAttackUsageHasBeenSet() const;

                    /**
                     * 获取Content compliance detection (text) metering value (in tokens)
                     * @return ContentTextUsage Content compliance detection (text) metering value (in tokens)
                     * 
                     */
                    int64_t GetContentTextUsage() const;

                    /**
                     * 设置Content compliance detection (text) metering value (in tokens)
                     * @param _contentTextUsage Content compliance detection (text) metering value (in tokens)
                     * 
                     */
                    void SetContentTextUsage(const int64_t& _contentTextUsage);

                    /**
                     * 判断参数 ContentTextUsage 是否已赋值
                     * @return ContentTextUsage 是否已赋值
                     * 
                     */
                    bool ContentTextUsageHasBeenSet() const;

                    /**
                     * 获取Content compliance detection (image) metering value (in images)
                     * @return ContentImageUsage Content compliance detection (image) metering value (in images)
                     * 
                     */
                    int64_t GetContentImageUsage() const;

                    /**
                     * 设置Content compliance detection (image) metering value (in images)
                     * @param _contentImageUsage Content compliance detection (image) metering value (in images)
                     * 
                     */
                    void SetContentImageUsage(const int64_t& _contentImageUsage);

                    /**
                     * 判断参数 ContentImageUsage 是否已赋值
                     * @return ContentImageUsage 是否已赋值
                     * 
                     */
                    bool ContentImageUsageHasBeenSet() const;

                    /**
                     * 获取Sensitive data detection metering value (in tokens)
                     * @return SensitiveDataUsage Sensitive data detection metering value (in tokens)
                     * 
                     */
                    int64_t GetSensitiveDataUsage() const;

                    /**
                     * 设置Sensitive data detection metering value (in tokens)
                     * @param _sensitiveDataUsage Sensitive data detection metering value (in tokens)
                     * 
                     */
                    void SetSensitiveDataUsage(const int64_t& _sensitiveDataUsage);

                    /**
                     * 判断参数 SensitiveDataUsage 是否已赋值
                     * @return SensitiveDataUsage 是否已赋值
                     * 
                     */
                    bool SensitiveDataUsageHasBeenSet() const;

                    /**
                     * 获取Prompt attack protection cost for the hour (in CNY)
                     * @return PromptAttackFee Prompt attack protection cost for the hour (in CNY)
                     * 
                     */
                    std::string GetPromptAttackFee() const;

                    /**
                     * 设置Prompt attack protection cost for the hour (in CNY)
                     * @param _promptAttackFee Prompt attack protection cost for the hour (in CNY)
                     * 
                     */
                    void SetPromptAttackFee(const std::string& _promptAttackFee);

                    /**
                     * 判断参数 PromptAttackFee 是否已赋值
                     * @return PromptAttackFee 是否已赋值
                     * 
                     */
                    bool PromptAttackFeeHasBeenSet() const;

                    /**
                     * 获取Content compliance detection (text) cost for the hour (in CNY)
                     * @return ContentTextFee Content compliance detection (text) cost for the hour (in CNY)
                     * 
                     */
                    std::string GetContentTextFee() const;

                    /**
                     * 设置Content compliance detection (text) cost for the hour (in CNY)
                     * @param _contentTextFee Content compliance detection (text) cost for the hour (in CNY)
                     * 
                     */
                    void SetContentTextFee(const std::string& _contentTextFee);

                    /**
                     * 判断参数 ContentTextFee 是否已赋值
                     * @return ContentTextFee 是否已赋值
                     * 
                     */
                    bool ContentTextFeeHasBeenSet() const;

                    /**
                     * 获取Content compliance detection (image) cost for the hour (in CNY)
                     * @return ContentImageFee Content compliance detection (image) cost for the hour (in CNY)
                     * 
                     */
                    std::string GetContentImageFee() const;

                    /**
                     * 设置Content compliance detection (image) cost for the hour (in CNY)
                     * @param _contentImageFee Content compliance detection (image) cost for the hour (in CNY)
                     * 
                     */
                    void SetContentImageFee(const std::string& _contentImageFee);

                    /**
                     * 判断参数 ContentImageFee 是否已赋值
                     * @return ContentImageFee 是否已赋值
                     * 
                     */
                    bool ContentImageFeeHasBeenSet() const;

                    /**
                     * 获取Sensitive data detection cost for the hour (in CNY)
                     * @return SensitiveDataFee Sensitive data detection cost for the hour (in CNY)
                     * 
                     */
                    std::string GetSensitiveDataFee() const;

                    /**
                     * 设置Sensitive data detection cost for the hour (in CNY)
                     * @param _sensitiveDataFee Sensitive data detection cost for the hour (in CNY)
                     * 
                     */
                    void SetSensitiveDataFee(const std::string& _sensitiveDataFee);

                    /**
                     * 判断参数 SensitiveDataFee 是否已赋值
                     * @return SensitiveDataFee 是否已赋值
                     * 
                     */
                    bool SensitiveDataFeeHasBeenSet() const;

                    /**
                     * 获取Total bill amount for the hour (in CNY, net cost)
                     * @return TotalFee Total bill amount for the hour (in CNY, net cost)
                     * 
                     */
                    std::string GetTotalFee() const;

                    /**
                     * 设置Total bill amount for the hour (in CNY, net cost)
                     * @param _totalFee Total bill amount for the hour (in CNY, net cost)
                     * 
                     */
                    void SetTotalFee(const std::string& _totalFee);

                    /**
                     * 判断参数 TotalFee 是否已赋值
                     * @return TotalFee 是否已赋值
                     * 
                     */
                    bool TotalFeeHasBeenSet() const;

                private:

                    /**
                     * Hour range, for example, 00:00-01:00.
                     */
                    std::string m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * Prompt attack protection metering value (in tokens)
                     */
                    int64_t m_promptAttackUsage;
                    bool m_promptAttackUsageHasBeenSet;

                    /**
                     * Content compliance detection (text) metering value (in tokens)
                     */
                    int64_t m_contentTextUsage;
                    bool m_contentTextUsageHasBeenSet;

                    /**
                     * Content compliance detection (image) metering value (in images)
                     */
                    int64_t m_contentImageUsage;
                    bool m_contentImageUsageHasBeenSet;

                    /**
                     * Sensitive data detection metering value (in tokens)
                     */
                    int64_t m_sensitiveDataUsage;
                    bool m_sensitiveDataUsageHasBeenSet;

                    /**
                     * Prompt attack protection cost for the hour (in CNY)
                     */
                    std::string m_promptAttackFee;
                    bool m_promptAttackFeeHasBeenSet;

                    /**
                     * Content compliance detection (text) cost for the hour (in CNY)
                     */
                    std::string m_contentTextFee;
                    bool m_contentTextFeeHasBeenSet;

                    /**
                     * Content compliance detection (image) cost for the hour (in CNY)
                     */
                    std::string m_contentImageFee;
                    bool m_contentImageFeeHasBeenSet;

                    /**
                     * Sensitive data detection cost for the hour (in CNY)
                     */
                    std::string m_sensitiveDataFee;
                    bool m_sensitiveDataFeeHasBeenSet;

                    /**
                     * Total bill amount for the hour (in CNY, net cost)
                     */
                    std::string m_totalFee;
                    bool m_totalFeeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMHOURBILLDETAILITEM_H_
