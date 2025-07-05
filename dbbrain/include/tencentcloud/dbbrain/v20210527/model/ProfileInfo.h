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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_PROFILEINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_PROFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/MailConfiguration.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Information configured by the user.
                */
                class ProfileInfo : public AbstractModel
                {
                public:
                    ProfileInfo();
                    ~ProfileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Email language, such as `en`.
                     * @return Language Email language, such as `en`.
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置Email language, such as `en`.
                     * @param _language Email language, such as `en`.
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取Email template content.
                     * @return MailConfiguration Email template content.
                     * 
                     */
                    MailConfiguration GetMailConfiguration() const;

                    /**
                     * 设置Email template content.
                     * @param _mailConfiguration Email template content.
                     * 
                     */
                    void SetMailConfiguration(const MailConfiguration& _mailConfiguration);

                    /**
                     * 判断参数 MailConfiguration 是否已赋值
                     * @return MailConfiguration 是否已赋值
                     * 
                     */
                    bool MailConfigurationHasBeenSet() const;

                private:

                    /**
                     * Email language, such as `en`.
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * Email template content.
                     */
                    MailConfiguration m_mailConfiguration;
                    bool m_mailConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_PROFILEINFO_H_
