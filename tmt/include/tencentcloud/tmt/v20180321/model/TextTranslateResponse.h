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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_TEXTTRANSLATERESPONSE_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_TEXTTRANSLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * TextTranslate response structure.
                */
                class TextTranslateResponse : public AbstractModel
                {
                public:
                    TextTranslateResponse();
                    ~TextTranslateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The translation outcome.
                     * @return TargetText The translation outcome.
                     * 
                     */
                    std::string GetTargetText() const;

                    /**
                     * 判断参数 TargetText 是否已赋值
                     * @return TargetText 是否已赋值
                     * 
                     */
                    bool TargetTextHasBeenSet() const;

                    /**
                     * 获取The source language. See the request parameter `Source` for details.
                     * @return Source The source language. See the request parameter `Source` for details.
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取The target language. See the request parameter `Target` for details.
                     * @return Target The target language. See the request parameter `Target` for details.
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                private:

                    /**
                     * The translation outcome.
                     */
                    std::string m_targetText;
                    bool m_targetTextHasBeenSet;

                    /**
                     * The source language. See the request parameter `Source` for details.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * The target language. See the request parameter `Target` for details.
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_TEXTTRANSLATERESPONSE_H_
