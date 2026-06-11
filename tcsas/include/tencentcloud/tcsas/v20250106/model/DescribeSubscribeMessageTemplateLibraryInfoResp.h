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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBESUBSCRIBEMESSAGETEMPLATELIBRARYINFORESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBESUBSCRIBEMESSAGETEMPLATELIBRARYINFORESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/I18nItem.h>
#include <tencentcloud/tcsas/v20250106/model/SubscribeMessageTemplateLibraryKeywordI18nInfoResp.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Response for querying mini program subscription message template library information
                */
                class DescribeSubscribeMessageTemplateLibraryInfoResp : public AbstractModel
                {
                public:
                    DescribeSubscribeMessageTemplateLibraryInfoResp();
                    ~DescribeSubscribeMessageTemplateLibraryInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Subscription message template title.</p>
                     * @return TemplateTitle <p>Subscription message template title.</p>
                     * 
                     */
                    std::string GetTemplateTitle() const;

                    /**
                     * 设置<p>Subscription message template title.</p>
                     * @param _templateTitle <p>Subscription message template title.</p>
                     * 
                     */
                    void SetTemplateTitle(const std::string& _templateTitle);

                    /**
                     * 判断参数 TemplateTitle 是否已赋值
                     * @return TemplateTitle 是否已赋值
                     * 
                     */
                    bool TemplateTitleHasBeenSet() const;

                    /**
                     * 获取<p>Subscription message template title in multiple languages.</p>
                     * @return TemplateTitleI18nList <p>Subscription message template title in multiple languages.</p>
                     * 
                     */
                    std::vector<I18nItem> GetTemplateTitleI18nList() const;

                    /**
                     * 设置<p>Subscription message template title in multiple languages.</p>
                     * @param _templateTitleI18nList <p>Subscription message template title in multiple languages.</p>
                     * 
                     */
                    void SetTemplateTitleI18nList(const std::vector<I18nItem>& _templateTitleI18nList);

                    /**
                     * 判断参数 TemplateTitleI18nList 是否已赋值
                     * @return TemplateTitleI18nList 是否已赋值
                     * 
                     */
                    bool TemplateTitleI18nListHasBeenSet() const;

                    /**
                     * 获取<p>Default language.</p>
                     * @return DefaultLang <p>Default language.</p>
                     * 
                     */
                    std::string GetDefaultLang() const;

                    /**
                     * 设置<p>Default language.</p>
                     * @param _defaultLang <p>Default language.</p>
                     * 
                     */
                    void SetDefaultLang(const std::string& _defaultLang);

                    /**
                     * 判断参数 DefaultLang 是否已赋值
                     * @return DefaultLang 是否已赋值
                     * 
                     */
                    bool DefaultLangHasBeenSet() const;

                    /**
                     * 获取<p>Supported languages.</p>
                     * @return SupportLang <p>Supported languages.</p>
                     * 
                     */
                    std::string GetSupportLang() const;

                    /**
                     * 设置<p>Supported languages.</p>
                     * @param _supportLang <p>Supported languages.</p>
                     * 
                     */
                    void SetSupportLang(const std::string& _supportLang);

                    /**
                     * 判断参数 SupportLang 是否已赋值
                     * @return SupportLang 是否已赋值
                     * 
                     */
                    bool SupportLangHasBeenSet() const;

                    /**
                     * 获取<p>Keywords.</p>
                     * @return Keywords <p>Keywords.</p>
                     * 
                     */
                    std::string GetKeywords() const;

                    /**
                     * 设置<p>Keywords.</p>
                     * @param _keywords <p>Keywords.</p>
                     * 
                     */
                    void SetKeywords(const std::string& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取<p>Subscription message keyword in multiple languages.</p>
                     * @return KeywordI18nList <p>Subscription message keyword in multiple languages.</p>
                     * 
                     */
                    std::vector<SubscribeMessageTemplateLibraryKeywordI18nInfoResp> GetKeywordI18nList() const;

                    /**
                     * 设置<p>Subscription message keyword in multiple languages.</p>
                     * @param _keywordI18nList <p>Subscription message keyword in multiple languages.</p>
                     * 
                     */
                    void SetKeywordI18nList(const std::vector<SubscribeMessageTemplateLibraryKeywordI18nInfoResp>& _keywordI18nList);

                    /**
                     * 判断参数 KeywordI18nList 是否已赋值
                     * @return KeywordI18nList 是否已赋值
                     * 
                     */
                    bool KeywordI18nListHasBeenSet() const;

                    /**
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Subscription message template ID.</p>
                     * @return TemplateLibraryId <p>Subscription message template ID.</p>
                     * 
                     */
                    std::string GetTemplateLibraryId() const;

                    /**
                     * 设置<p>Subscription message template ID.</p>
                     * @param _templateLibraryId <p>Subscription message template ID.</p>
                     * 
                     */
                    void SetTemplateLibraryId(const std::string& _templateLibraryId);

                    /**
                     * 判断参数 TemplateLibraryId 是否已赋值
                     * @return TemplateLibraryId 是否已赋值
                     * 
                     */
                    bool TemplateLibraryIdHasBeenSet() const;

                    /**
                     * 获取<p>Template type. Valid values: 2: One-time message; 3: Long-term subscription message.</p>
                     * @return TemplateType <p>Template type. Valid values: 2: One-time message; 3: Long-term subscription message.</p>
                     * 
                     */
                    int64_t GetTemplateType() const;

                    /**
                     * 设置<p>Template type. Valid values: 2: One-time message; 3: Long-term subscription message.</p>
                     * @param _templateType <p>Template type. Valid values: 2: One-time message; 3: Long-term subscription message.</p>
                     * 
                     */
                    void SetTemplateType(const int64_t& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     * 
                     */
                    bool TemplateTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Subscription message template title.</p>
                     */
                    std::string m_templateTitle;
                    bool m_templateTitleHasBeenSet;

                    /**
                     * <p>Subscription message template title in multiple languages.</p>
                     */
                    std::vector<I18nItem> m_templateTitleI18nList;
                    bool m_templateTitleI18nListHasBeenSet;

                    /**
                     * <p>Default language.</p>
                     */
                    std::string m_defaultLang;
                    bool m_defaultLangHasBeenSet;

                    /**
                     * <p>Supported languages.</p>
                     */
                    std::string m_supportLang;
                    bool m_supportLangHasBeenSet;

                    /**
                     * <p>Keywords.</p>
                     */
                    std::string m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * <p>Subscription message keyword in multiple languages.</p>
                     */
                    std::vector<SubscribeMessageTemplateLibraryKeywordI18nInfoResp> m_keywordI18nList;
                    bool m_keywordI18nListHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Subscription message template ID.</p>
                     */
                    std::string m_templateLibraryId;
                    bool m_templateLibraryIdHasBeenSet;

                    /**
                     * <p>Template type. Valid values: 2: One-time message; 3: Long-term subscription message.</p>
                     */
                    int64_t m_templateType;
                    bool m_templateTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBESUBSCRIBEMESSAGETEMPLATELIBRARYINFORESP_H_
