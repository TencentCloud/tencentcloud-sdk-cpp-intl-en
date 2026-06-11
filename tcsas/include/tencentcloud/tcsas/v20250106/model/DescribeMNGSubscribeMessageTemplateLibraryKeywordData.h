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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSUBSCRIBEMESSAGETEMPLATELIBRARYKEYWORDDATA_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSUBSCRIBEMESSAGETEMPLATELIBRARYKEYWORDDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/I18nItem.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Mini game subscription message template keyword information
                */
                class DescribeMNGSubscribeMessageTemplateLibraryKeywordData : public AbstractModel
                {
                public:
                    DescribeMNGSubscribeMessageTemplateLibraryKeywordData();
                    ~DescribeMNGSubscribeMessageTemplateLibraryKeywordData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Subscription message template library keyword ID.</p>
                     * @return KeywordId <p>Subscription message template library keyword ID.</p>
                     * 
                     */
                    std::string GetKeywordId() const;

                    /**
                     * 设置<p>Subscription message template library keyword ID.</p>
                     * @param _keywordId <p>Subscription message template library keyword ID.</p>
                     * 
                     */
                    void SetKeywordId(const std::string& _keywordId);

                    /**
                     * 判断参数 KeywordId 是否已赋值
                     * @return KeywordId 是否已赋值
                     * 
                     */
                    bool KeywordIdHasBeenSet() const;

                    /**
                     * 获取<p>Subscription message template library keyword.</p>
                     * @return Keyword <p>Subscription message template library keyword.</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>Subscription message template library keyword.</p>
                     * @param _keyword <p>Subscription message template library keyword.</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>Subscription message template library keyword type.</p>
                     * @return KeywordType <p>Subscription message template library keyword type.</p>
                     * 
                     */
                    std::string GetKeywordType() const;

                    /**
                     * 设置<p>Subscription message template library keyword type.</p>
                     * @param _keywordType <p>Subscription message template library keyword type.</p>
                     * 
                     */
                    void SetKeywordType(const std::string& _keywordType);

                    /**
                     * 判断参数 KeywordType 是否已赋值
                     * @return KeywordType 是否已赋值
                     * 
                     */
                    bool KeywordTypeHasBeenSet() const;

                    /**
                     * 获取<p>Subscription message template library keyword default value.</p>
                     * @return DefaultValue <p>Subscription message template library keyword default value.</p>
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置<p>Subscription message template library keyword default value.</p>
                     * @param _defaultValue <p>Subscription message template library keyword default value.</p>
                     * 
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     * 
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取<p>Subscription message template library keyword multilingual list.</p>
                     * @return KeywordList <p>Subscription message template library keyword multilingual list.</p>
                     * 
                     */
                    std::vector<I18nItem> GetKeywordList() const;

                    /**
                     * 设置<p>Subscription message template library keyword multilingual list.</p>
                     * @param _keywordList <p>Subscription message template library keyword multilingual list.</p>
                     * 
                     */
                    void SetKeywordList(const std::vector<I18nItem>& _keywordList);

                    /**
                     * 判断参数 KeywordList 是否已赋值
                     * @return KeywordList 是否已赋值
                     * 
                     */
                    bool KeywordListHasBeenSet() const;

                    /**
                     * 获取<p>Subscription message template library keywords in multiple languages.</p>
                     * @return DefaultValueList <p>Subscription message template library keywords in multiple languages.</p>
                     * 
                     */
                    std::vector<I18nItem> GetDefaultValueList() const;

                    /**
                     * 设置<p>Subscription message template library keywords in multiple languages.</p>
                     * @param _defaultValueList <p>Subscription message template library keywords in multiple languages.</p>
                     * 
                     */
                    void SetDefaultValueList(const std::vector<I18nItem>& _defaultValueList);

                    /**
                     * 判断参数 DefaultValueList 是否已赋值
                     * @return DefaultValueList 是否已赋值
                     * 
                     */
                    bool DefaultValueListHasBeenSet() const;

                private:

                    /**
                     * <p>Subscription message template library keyword ID.</p>
                     */
                    std::string m_keywordId;
                    bool m_keywordIdHasBeenSet;

                    /**
                     * <p>Subscription message template library keyword.</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>Subscription message template library keyword type.</p>
                     */
                    std::string m_keywordType;
                    bool m_keywordTypeHasBeenSet;

                    /**
                     * <p>Subscription message template library keyword default value.</p>
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * <p>Subscription message template library keyword multilingual list.</p>
                     */
                    std::vector<I18nItem> m_keywordList;
                    bool m_keywordListHasBeenSet;

                    /**
                     * <p>Subscription message template library keywords in multiple languages.</p>
                     */
                    std::vector<I18nItem> m_defaultValueList;
                    bool m_defaultValueListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSUBSCRIBEMESSAGETEMPLATELIBRARYKEYWORDDATA_H_
