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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_MNPSUBSCRIBEMESSAGETEMPLATEDETAILRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_MNPSUBSCRIBEMESSAGETEMPLATEDETAILRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/I18nItem.h>
#include <tencentcloud/tcsas/v20250106/model/DescribeSubscribeMessageTemplateLibraryKeywordData.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Mini program subscription template detail information
                */
                class MNPSubscribeMessageTemplateDetailResp : public AbstractModel
                {
                public:
                    MNPSubscribeMessageTemplateDetailResp();
                    ~MNPSubscribeMessageTemplateDetailResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Subscription message template ID.</p>
                     * @return TemplateId <p>Subscription message template ID.</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>Subscription message template ID.</p>
                     * @param _templateId <p>Subscription message template ID.</p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

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
                     * @return TitleList <p>Subscription message template title in multiple languages.</p>
                     * 
                     */
                    std::vector<I18nItem> GetTitleList() const;

                    /**
                     * 设置<p>Subscription message template title in multiple languages.</p>
                     * @param _titleList <p>Subscription message template title in multiple languages.</p>
                     * 
                     */
                    void SetTitleList(const std::vector<I18nItem>& _titleList);

                    /**
                     * 判断参数 TitleList 是否已赋值
                     * @return TitleList 是否已赋值
                     * 
                     */
                    bool TitleListHasBeenSet() const;

                    /**
                     * 获取<p>Subscription message template default language.</p>
                     * @return DefaultLang <p>Subscription message template default language.</p>
                     * 
                     */
                    std::string GetDefaultLang() const;

                    /**
                     * 设置<p>Subscription message template default language.</p>
                     * @param _defaultLang <p>Subscription message template default language.</p>
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
                     * 获取<p>Subscription message template supported languages.</p>
                     * @return Languages <p>Subscription message template supported languages.</p>
                     * 
                     */
                    std::vector<std::string> GetLanguages() const;

                    /**
                     * 设置<p>Subscription message template supported languages.</p>
                     * @param _languages <p>Subscription message template supported languages.</p>
                     * 
                     */
                    void SetLanguages(const std::vector<std::string>& _languages);

                    /**
                     * 判断参数 Languages 是否已赋值
                     * @return Languages 是否已赋值
                     * 
                     */
                    bool LanguagesHasBeenSet() const;

                    /**
                     * 获取<p>Subscription message template keywords.</p>
                     * @return KeywordList <p>Subscription message template keywords.</p>
                     * 
                     */
                    std::vector<DescribeSubscribeMessageTemplateLibraryKeywordData> GetKeywordList() const;

                    /**
                     * 设置<p>Subscription message template keywords.</p>
                     * @param _keywordList <p>Subscription message template keywords.</p>
                     * 
                     */
                    void SetKeywordList(const std::vector<DescribeSubscribeMessageTemplateLibraryKeywordData>& _keywordList);

                    /**
                     * 判断参数 KeywordList 是否已赋值
                     * @return KeywordList 是否已赋值
                     * 
                     */
                    bool KeywordListHasBeenSet() const;

                    /**
                     * 获取<p>Mini program name.</p>
                     * @return MNPName <p>Mini program name.</p>
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置<p>Mini program name.</p>
                     * @param _mNPName <p>Mini program name.</p>
                     * 
                     */
                    void SetMNPName(const std::string& _mNPName);

                    /**
                     * 判断参数 MNPName 是否已赋值
                     * @return MNPName 是否已赋值
                     * 
                     */
                    bool MNPNameHasBeenSet() const;

                    /**
                     * 获取<p>Mini program icon.</p>
                     * @return MNPIcon <p>Mini program icon.</p>
                     * 
                     */
                    std::string GetMNPIcon() const;

                    /**
                     * 设置<p>Mini program icon.</p>
                     * @param _mNPIcon <p>Mini program icon.</p>
                     * 
                     */
                    void SetMNPIcon(const std::string& _mNPIcon);

                    /**
                     * 判断参数 MNPIcon 是否已赋值
                     * @return MNPIcon 是否已赋值
                     * 
                     */
                    bool MNPIconHasBeenSet() const;

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
                     * <p>Subscription message template ID.</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>Subscription message template title.</p>
                     */
                    std::string m_templateTitle;
                    bool m_templateTitleHasBeenSet;

                    /**
                     * <p>Subscription message template title in multiple languages.</p>
                     */
                    std::vector<I18nItem> m_titleList;
                    bool m_titleListHasBeenSet;

                    /**
                     * <p>Subscription message template default language.</p>
                     */
                    std::string m_defaultLang;
                    bool m_defaultLangHasBeenSet;

                    /**
                     * <p>Subscription message template supported languages.</p>
                     */
                    std::vector<std::string> m_languages;
                    bool m_languagesHasBeenSet;

                    /**
                     * <p>Subscription message template keywords.</p>
                     */
                    std::vector<DescribeSubscribeMessageTemplateLibraryKeywordData> m_keywordList;
                    bool m_keywordListHasBeenSet;

                    /**
                     * <p>Mini program name.</p>
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * <p>Mini program icon.</p>
                     */
                    std::string m_mNPIcon;
                    bool m_mNPIconHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_MNPSUBSCRIBEMESSAGETEMPLATEDETAILRESP_H_
