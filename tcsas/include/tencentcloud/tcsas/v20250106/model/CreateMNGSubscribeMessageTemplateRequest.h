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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNGSUBSCRIBEMESSAGETEMPLATEREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNGSUBSCRIBEMESSAGETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * CreateMNGSubscribeMessageTemplate request structure.
                */
                class CreateMNGSubscribeMessageTemplateRequest : public AbstractModel
                {
                public:
                    CreateMNGSubscribeMessageTemplateRequest();
                    ~CreateMNGSubscribeMessageTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Platform ID.</p>
                     * @return PlatformId <p>Platform ID.</p>
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置<p>Platform ID.</p>
                     * @param _platformId <p>Platform ID.</p>
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取<p>Mini program appid.</p>
                     * @return MNPId <p>Mini program appid.</p>
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置<p>Mini program appid.</p>
                     * @param _mNPId <p>Mini program appid.</p>
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

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
                     * 获取<p>Subscription message template keywords.</p>
                     * @return Keywords <p>Subscription message template keywords.</p>
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置<p>Subscription message template keywords.</p>
                     * @param _keywords <p>Subscription message template keywords.</p>
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取<p>Subscription message template scenario description.</p>
                     * @return ScenarioDescription <p>Subscription message template scenario description.</p>
                     * 
                     */
                    std::string GetScenarioDescription() const;

                    /**
                     * 设置<p>Subscription message template scenario description.</p>
                     * @param _scenarioDescription <p>Subscription message template scenario description.</p>
                     * 
                     */
                    void SetScenarioDescription(const std::string& _scenarioDescription);

                    /**
                     * 判断参数 ScenarioDescription 是否已赋值
                     * @return ScenarioDescription 是否已赋值
                     * 
                     */
                    bool ScenarioDescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>Platform ID.</p>
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * <p>Mini program appid.</p>
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * <p>Subscription message template ID.</p>
                     */
                    std::string m_templateLibraryId;
                    bool m_templateLibraryIdHasBeenSet;

                    /**
                     * <p>Subscription message template keywords.</p>
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * <p>Subscription message template scenario description.</p>
                     */
                    std::string m_scenarioDescription;
                    bool m_scenarioDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEMNGSUBSCRIBEMESSAGETEMPLATEREQUEST_H_
