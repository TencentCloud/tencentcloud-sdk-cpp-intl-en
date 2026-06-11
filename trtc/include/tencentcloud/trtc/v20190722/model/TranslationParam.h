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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSLATIONPARAM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSLATIONPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TerminologyItem.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Translation parameters
                */
                class TranslationParam : public AbstractModel
                {
                public:
                    TranslationParam();
                    ~TranslationParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Target language for translation, example value ["en", "ja"]. Target language list [Chinese "zh", English "en", Vietnamese "vi", Japanese "ja", Korean "ko", Indonesian "id", Thai "th", Portuguese "pt", Arabic "ar", Spanish "es", French "fr", Malay "ms", German "de", Italian "it", Russian "ru"].</p>
                     * @return TargetLang <p>Target language for translation, example value ["en", "ja"]. Target language list [Chinese "zh", English "en", Vietnamese "vi", Japanese "ja", Korean "ko", Indonesian "id", Thai "th", Portuguese "pt", Arabic "ar", Spanish "es", French "fr", Malay "ms", German "de", Italian "it", Russian "ru"].</p>
                     * 
                     */
                    std::vector<std::string> GetTargetLang() const;

                    /**
                     * 设置<p>Target language for translation, example value ["en", "ja"]. Target language list [Chinese "zh", English "en", Vietnamese "vi", Japanese "ja", Korean "ko", Indonesian "id", Thai "th", Portuguese "pt", Arabic "ar", Spanish "es", French "fr", Malay "ms", German "de", Italian "it", Russian "ru"].</p>
                     * @param _targetLang <p>Target language for translation, example value ["en", "ja"]. Target language list [Chinese "zh", English "en", Vietnamese "vi", Japanese "ja", Korean "ko", Indonesian "id", Thai "th", Portuguese "pt", Arabic "ar", Spanish "es", French "fr", Malay "ms", German "de", Italian "it", Russian "ru"].</p>
                     * 
                     */
                    void SetTargetLang(const std::vector<std::string>& _targetLang);

                    /**
                     * 判断参数 TargetLang 是否已赋值
                     * @return TargetLang 是否已赋值
                     * 
                     */
                    bool TargetLangHasBeenSet() const;

                    /**
                     * 获取<p>Glossary configuration.</p>
                     * @return Terminologies <p>Glossary configuration.</p>
                     * 
                     */
                    std::vector<TerminologyItem> GetTerminologies() const;

                    /**
                     * 设置<p>Glossary configuration.</p>
                     * @param _terminologies <p>Glossary configuration.</p>
                     * 
                     */
                    void SetTerminologies(const std::vector<TerminologyItem>& _terminologies);

                    /**
                     * 判断参数 Terminologies 是否已赋值
                     * @return Terminologies 是否已赋值
                     * 
                     */
                    bool TerminologiesHasBeenSet() const;

                private:

                    /**
                     * <p>Target language for translation, example value ["en", "ja"]. Target language list [Chinese "zh", English "en", Vietnamese "vi", Japanese "ja", Korean "ko", Indonesian "id", Thai "th", Portuguese "pt", Arabic "ar", Spanish "es", French "fr", Malay "ms", German "de", Italian "it", Russian "ru"].</p>
                     */
                    std::vector<std::string> m_targetLang;
                    bool m_targetLangHasBeenSet;

                    /**
                     * <p>Glossary configuration.</p>
                     */
                    std::vector<TerminologyItem> m_terminologies;
                    bool m_terminologiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSLATIONPARAM_H_
