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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSUBSCRIBEMESSAGETEMPLATEINFORESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSUBSCRIBEMESSAGETEMPLATEINFORESP_H_

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
                * Mini game subscription message template list information
                */
                class DescribeMNGSubscribeMessageTemplateInfoResp : public AbstractModel
                {
                public:
                    DescribeMNGSubscribeMessageTemplateInfoResp();
                    ~DescribeMNGSubscribeMessageTemplateInfoResp() = default;
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
                    std::vector<std::string> GetSupportLang() const;

                    /**
                     * 设置<p>Supported languages.</p>
                     * @param _supportLang <p>Supported languages.</p>
                     * 
                     */
                    void SetSupportLang(const std::vector<std::string>& _supportLang);

                    /**
                     * 判断参数 SupportLang 是否已赋值
                     * @return SupportLang 是否已赋值
                     * 
                     */
                    bool SupportLangHasBeenSet() const;

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
                     * 获取<p>Subscription message template keywords.</p>
                     * @return Keywords <p>Subscription message template keywords.</p>
                     * 
                     */
                    std::string GetKeywords() const;

                    /**
                     * 设置<p>Subscription message template keywords.</p>
                     * @param _keywords <p>Subscription message template keywords.</p>
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
                     * 获取<p>Subscription message template keyword in multiple languages.</p>
                     * @return KeywordI18nList <p>Subscription message template keyword in multiple languages.</p>
                     * 
                     */
                    std::vector<SubscribeMessageTemplateLibraryKeywordI18nInfoResp> GetKeywordI18nList() const;

                    /**
                     * 设置<p>Subscription message template keyword in multiple languages.</p>
                     * @param _keywordI18nList <p>Subscription message template keyword in multiple languages.</p>
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
                     * 获取<p>Subscription message template type. Valid values: 2: One-time message; 3: Long-term subscription message.</p>
                     * @return TemplateType <p>Subscription message template type. Valid values: 2: One-time message; 3: Long-term subscription message.</p>
                     * 
                     */
                    int64_t GetTemplateType() const;

                    /**
                     * 设置<p>Subscription message template type. Valid values: 2: One-time message; 3: Long-term subscription message.</p>
                     * @param _templateType <p>Subscription message template type. Valid values: 2: One-time message; 3: Long-term subscription message.</p>
                     * 
                     */
                    void SetTemplateType(const int64_t& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     * 
                     */
                    bool TemplateTypeHasBeenSet() const;

                    /**
                     * 获取<p>Creator.</p>
                     * @return CreateUser <p>Creator.</p>
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置<p>Creator.</p>
                     * @param _createUser <p>Creator.</p>
                     * 
                     */
                    void SetCreateUser(const std::string& _createUser);

                    /**
                     * 判断参数 CreateUser 是否已赋值
                     * @return CreateUser 是否已赋值
                     * 
                     */
                    bool CreateUserHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Status. Valid values: 1: Active.</p>
                     * @return Status <p>Status. Valid values: 1: Active.</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Status. Valid values: 1: Active.</p>
                     * @param _status <p>Status. Valid values: 1: Active.</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                    std::vector<std::string> m_supportLang;
                    bool m_supportLangHasBeenSet;

                    /**
                     * <p>Subscription message template ID.</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>Subscription message template keywords.</p>
                     */
                    std::string m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * <p>Subscription message template keyword in multiple languages.</p>
                     */
                    std::vector<SubscribeMessageTemplateLibraryKeywordI18nInfoResp> m_keywordI18nList;
                    bool m_keywordI18nListHasBeenSet;

                    /**
                     * <p>Subscription message template type. Valid values: 2: One-time message; 3: Long-term subscription message.</p>
                     */
                    int64_t m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * <p>Creator.</p>
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Status. Valid values: 1: Active.</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSUBSCRIBEMESSAGETEMPLATEINFORESP_H_
