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
                     * 获取Target language for translation. Example: `["en", "ja"]`.

Supported target languages:

- `"zh"`: Chinese
- `"en"`: English
- `"vi"`: Vietnamese
- `"ja"`: Japanese
- `"ko"`: Korean
- `"id"`: Indonesian
- `"th"`: Thai
- `"pt"`: Portuguese
- `"ar"`: Arabic
- `"es"`: Spanish
- `"fr"`: French
- `"ms"`: Malay
- `"de"`: German
- `"it"`: Italian
- `"ru"`: Russian
                     * @return TargetLang Target language for translation. Example: `["en", "ja"]`.

Supported target languages:

- `"zh"`: Chinese
- `"en"`: English
- `"vi"`: Vietnamese
- `"ja"`: Japanese
- `"ko"`: Korean
- `"id"`: Indonesian
- `"th"`: Thai
- `"pt"`: Portuguese
- `"ar"`: Arabic
- `"es"`: Spanish
- `"fr"`: French
- `"ms"`: Malay
- `"de"`: German
- `"it"`: Italian
- `"ru"`: Russian
                     * 
                     */
                    std::vector<std::string> GetTargetLang() const;

                    /**
                     * 设置Target language for translation. Example: `["en", "ja"]`.

Supported target languages:

- `"zh"`: Chinese
- `"en"`: English
- `"vi"`: Vietnamese
- `"ja"`: Japanese
- `"ko"`: Korean
- `"id"`: Indonesian
- `"th"`: Thai
- `"pt"`: Portuguese
- `"ar"`: Arabic
- `"es"`: Spanish
- `"fr"`: French
- `"ms"`: Malay
- `"de"`: German
- `"it"`: Italian
- `"ru"`: Russian
                     * @param _targetLang Target language for translation. Example: `["en", "ja"]`.

Supported target languages:

- `"zh"`: Chinese
- `"en"`: English
- `"vi"`: Vietnamese
- `"ja"`: Japanese
- `"ko"`: Korean
- `"id"`: Indonesian
- `"th"`: Thai
- `"pt"`: Portuguese
- `"ar"`: Arabic
- `"es"`: Spanish
- `"fr"`: French
- `"ms"`: Malay
- `"de"`: German
- `"it"`: Italian
- `"ru"`: Russian
                     * 
                     */
                    void SetTargetLang(const std::vector<std::string>& _targetLang);

                    /**
                     * 判断参数 TargetLang 是否已赋值
                     * @return TargetLang 是否已赋值
                     * 
                     */
                    bool TargetLangHasBeenSet() const;

                private:

                    /**
                     * Target language for translation. Example: `["en", "ja"]`.

Supported target languages:

- `"zh"`: Chinese
- `"en"`: English
- `"vi"`: Vietnamese
- `"ja"`: Japanese
- `"ko"`: Korean
- `"id"`: Indonesian
- `"th"`: Thai
- `"pt"`: Portuguese
- `"ar"`: Arabic
- `"es"`: Spanish
- `"fr"`: French
- `"ms"`: Malay
- `"de"`: German
- `"it"`: Italian
- `"ru"`: Russian
                     */
                    std::vector<std::string> m_targetLang;
                    bool m_targetLangHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSLATIONPARAM_H_
