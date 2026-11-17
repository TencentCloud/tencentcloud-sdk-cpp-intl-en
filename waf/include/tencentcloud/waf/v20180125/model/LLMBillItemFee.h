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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LLMBILLITEMFEE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LLMBILLITEMFEE_H_

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
                * Itemized cost of hourly LLM security bill
                */
                class LLMBillItemFee : public AbstractModel
                {
                public:
                    LLMBillItemFee();
                    ~LLMBillItemFee() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Prompt attack protection cost (in CNY)
                     * @return PromptAttackFee Prompt attack protection cost (in CNY)
                     * 
                     */
                    std::string GetPromptAttackFee() const;

                    /**
                     * 设置Prompt attack protection cost (in CNY)
                     * @param _promptAttackFee Prompt attack protection cost (in CNY)
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
                     * 获取Content compliance detection (text) cost (in CNY)
                     * @return ContentTextFee Content compliance detection (text) cost (in CNY)
                     * 
                     */
                    std::string GetContentTextFee() const;

                    /**
                     * 设置Content compliance detection (text) cost (in CNY)
                     * @param _contentTextFee Content compliance detection (text) cost (in CNY)
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
                     * 获取Content compliance detection (image) cost (in CNY)
                     * @return ContentImageFee Content compliance detection (image) cost (in CNY)
                     * 
                     */
                    std::string GetContentImageFee() const;

                    /**
                     * 设置Content compliance detection (image) cost (in CNY)
                     * @param _contentImageFee Content compliance detection (image) cost (in CNY)
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
                     * 获取Sensitive data detection cost (in CNY)
                     * @return SensitiveDataFee Sensitive data detection cost (in CNY)
                     * 
                     */
                    std::string GetSensitiveDataFee() const;

                    /**
                     * 设置Sensitive data detection cost (in CNY)
                     * @param _sensitiveDataFee Sensitive data detection cost (in CNY)
                     * 
                     */
                    void SetSensitiveDataFee(const std::string& _sensitiveDataFee);

                    /**
                     * 判断参数 SensitiveDataFee 是否已赋值
                     * @return SensitiveDataFee 是否已赋值
                     * 
                     */
                    bool SensitiveDataFeeHasBeenSet() const;

                private:

                    /**
                     * Prompt attack protection cost (in CNY)
                     */
                    std::string m_promptAttackFee;
                    bool m_promptAttackFeeHasBeenSet;

                    /**
                     * Content compliance detection (text) cost (in CNY)
                     */
                    std::string m_contentTextFee;
                    bool m_contentTextFeeHasBeenSet;

                    /**
                     * Content compliance detection (image) cost (in CNY)
                     */
                    std::string m_contentImageFee;
                    bool m_contentImageFeeHasBeenSet;

                    /**
                     * Sensitive data detection cost (in CNY)
                     */
                    std::string m_sensitiveDataFee;
                    bool m_sensitiveDataFeeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMBILLITEMFEE_H_
