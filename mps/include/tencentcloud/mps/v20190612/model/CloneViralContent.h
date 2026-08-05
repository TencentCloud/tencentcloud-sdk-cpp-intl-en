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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALCONTENT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Content/style parameters of hit product clone
                */
                class CloneViralContent : public AbstractModel
                {
                public:
                    CloneViralContent();
                    ~CloneViralContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Custom prompt describing requirements for video generation</p>
                     * @return UserPrompt <p>Custom prompt describing requirements for video generation</p>
                     * 
                     */
                    std::string GetUserPrompt() const;

                    /**
                     * 设置<p>Custom prompt describing requirements for video generation</p>
                     * @param _userPrompt <p>Custom prompt describing requirements for video generation</p>
                     * 
                     */
                    void SetUserPrompt(const std::string& _userPrompt);

                    /**
                     * 判断参数 UserPrompt 是否已赋值
                     * @return UserPrompt 是否已赋值
                     * 
                     */
                    bool UserPromptHasBeenSet() const;

                    /**
                     * 获取<p>Target language for video generation. Default: not specified. Supported values: zh / en / ja / ko / es / pt / instrumental (pure music without voiceover)</p>
                     * @return Language <p>Target language for video generation. Default: not specified. Supported values: zh / en / ja / ko / es / pt / instrumental (pure music without voiceover)</p>
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置<p>Target language for video generation. Default: not specified. Supported values: zh / en / ja / ko / es / pt / instrumental (pure music without voiceover)</p>
                     * @param _language <p>Target language for video generation. Default: not specified. Supported values: zh / en / ja / ko / es / pt / instrumental (pure music without voiceover)</p>
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
                     * 获取<p>Target market. Default: not specified. Supported values: north_america / europe / china / japan / korea / sea / brazil</p>
                     * @return Market <p>Target market. Default: not specified. Supported values: north_america / europe / china / japan / korea / sea / brazil</p>
                     * 
                     */
                    std::string GetMarket() const;

                    /**
                     * 设置<p>Target market. Default: not specified. Supported values: north_america / europe / china / japan / korea / sea / brazil</p>
                     * @param _market <p>Target market. Default: not specified. Supported values: north_america / europe / china / japan / korea / sea / brazil</p>
                     * 
                     */
                    void SetMarket(const std::string& _market);

                    /**
                     * 判断参数 Market 是否已赋值
                     * @return Market 是否已赋值
                     * 
                     */
                    bool MarketHasBeenSet() const;

                    /**
                     * 获取<p>Fission level. Values: exact/low/medium/high. Default: exact (1:1 clone)</p>
                     * @return FissionLevel <p>Fission level. Values: exact/low/medium/high. Default: exact (1:1 clone)</p>
                     * 
                     */
                    std::string GetFissionLevel() const;

                    /**
                     * 设置<p>Fission level. Values: exact/low/medium/high. Default: exact (1:1 clone)</p>
                     * @param _fissionLevel <p>Fission level. Values: exact/low/medium/high. Default: exact (1:1 clone)</p>
                     * 
                     */
                    void SetFissionLevel(const std::string& _fissionLevel);

                    /**
                     * 判断参数 FissionLevel 是否已赋值
                     * @return FissionLevel 是否已赋值
                     * 
                     */
                    bool FissionLevelHasBeenSet() const;

                private:

                    /**
                     * <p>Custom prompt describing requirements for video generation</p>
                     */
                    std::string m_userPrompt;
                    bool m_userPromptHasBeenSet;

                    /**
                     * <p>Target language for video generation. Default: not specified. Supported values: zh / en / ja / ko / es / pt / instrumental (pure music without voiceover)</p>
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * <p>Target market. Default: not specified. Supported values: north_america / europe / china / japan / korea / sea / brazil</p>
                     */
                    std::string m_market;
                    bool m_marketHasBeenSet;

                    /**
                     * <p>Fission level. Values: exact/low/medium/high. Default: exact (1:1 clone)</p>
                     */
                    std::string m_fissionLevel;
                    bool m_fissionLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALCONTENT_H_
