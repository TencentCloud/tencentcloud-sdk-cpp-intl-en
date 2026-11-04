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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINOPERATION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * PluginOperation
                */
                class PluginOperation : public AbstractModel
                {
                public:
                    PluginOperation();
                    ~PluginOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether external calls are allowed
                     * @return AllowExternalAccess Whether external calls are allowed
                     * 
                     */
                    bool GetAllowExternalAccess() const;

                    /**
                     * 设置Whether external calls are allowed
                     * @param _allowExternalAccess Whether external calls are allowed
                     * 
                     */
                    void SetAllowExternalAccess(const bool& _allowExternalAccess);

                    /**
                     * 判断参数 AllowExternalAccess 是否已赋值
                     * @return AllowExternalAccess 是否已赋值
                     * 
                     */
                    bool AllowExternalAccessHasBeenSet() const;

                    /**
                     * 获取<p>Billing type.</p><p>Valid values:</p><ul><li>0: free</li><li>1: open beta</li><li>2: official fees</li></ul>
                     * @return BillingType <p>Billing type.</p><p>Valid values:</p><ul><li>0: free</li><li>1: open beta</li><li>2: official fees</li></ul>
                     * 
                     */
                    int64_t GetBillingType() const;

                    /**
                     * 设置<p>Billing type.</p><p>Valid values:</p><ul><li>0: free</li><li>1: open beta</li><li>2: official fees</li></ul>
                     * @param _billingType <p>Billing type.</p><p>Valid values:</p><ul><li>0: free</li><li>1: open beta</li><li>2: official fees</li></ul>
                     * 
                     */
                    void SetBillingType(const int64_t& _billingType);

                    /**
                     * 判断参数 BillingType 是否已赋值
                     * @return BillingType 是否已赋值
                     * 
                     */
                    bool BillingTypeHasBeenSet() const;

                    /**
                     * 获取Plug-in category identifier
                     * @return CategoryKey Plug-in category identifier
                     * 
                     */
                    std::string GetCategoryKey() const;

                    /**
                     * 设置Plug-in category identifier
                     * @param _categoryKey Plug-in category identifier
                     * 
                     */
                    void SetCategoryKey(const std::string& _categoryKey);

                    /**
                     * 判断参数 CategoryKey 是否已赋值
                     * @return CategoryKey 是否已赋值
                     * 
                     */
                    bool CategoryKeyHasBeenSet() const;

                    /**
                     * 获取Plug-in overview
                     * @return Introduction Plug-in overview
                     * 
                     */
                    std::string GetIntroduction() const;

                    /**
                     * 设置Plug-in overview
                     * @param _introduction Plug-in overview
                     * 
                     */
                    void SetIntroduction(const std::string& _introduction);

                    /**
                     * 判断参数 Introduction 是否已赋值
                     * @return Introduction 是否已赋值
                     * 
                     */
                    bool IntroductionHasBeenSet() const;

                    /**
                     * 获取Whether it is a selection
                     * @return IsRecommended Whether it is a selection
                     * 
                     */
                    bool GetIsRecommended() const;

                    /**
                     * 设置Whether it is a selection
                     * @param _isRecommended Whether it is a selection
                     * 
                     */
                    void SetIsRecommended(const bool& _isRecommended);

                    /**
                     * 判断参数 IsRecommended 是否已赋值
                     * @return IsRecommended 是否已赋值
                     * 
                     */
                    bool IsRecommendedHasBeenSet() const;

                private:

                    /**
                     * Whether external calls are allowed
                     */
                    bool m_allowExternalAccess;
                    bool m_allowExternalAccessHasBeenSet;

                    /**
                     * <p>Billing type.</p><p>Valid values:</p><ul><li>0: free</li><li>1: open beta</li><li>2: official fees</li></ul>
                     */
                    int64_t m_billingType;
                    bool m_billingTypeHasBeenSet;

                    /**
                     * Plug-in category identifier
                     */
                    std::string m_categoryKey;
                    bool m_categoryKeyHasBeenSet;

                    /**
                     * Plug-in overview
                     */
                    std::string m_introduction;
                    bool m_introductionHasBeenSet;

                    /**
                     * Whether it is a selection
                     */
                    bool m_isRecommended;
                    bool m_isRecommendedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINOPERATION_H_
