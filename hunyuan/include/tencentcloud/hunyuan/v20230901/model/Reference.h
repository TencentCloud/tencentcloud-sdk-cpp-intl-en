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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_REFERENCE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_REFERENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * Translate dialogue reference example.
                */
                class Reference : public AbstractModel
                {
                public:
                    Reference();
                    ~Reference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Translate text type, enumerate "sentence" means sentence, "term" means terminology.
                     * @return Type Translate text type, enumerate "sentence" means sentence, "term" means terminology.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Translate text type, enumerate "sentence" means sentence, "term" means terminology.
                     * @param _type Translate text type, enumerate "sentence" means sentence, "term" means terminology.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Original.
                     * @return Text Original.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Original.
                     * @param _text Original.
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取Translation.
                     * @return Translation Translation.
                     * 
                     */
                    std::string GetTranslation() const;

                    /**
                     * 设置Translation.
                     * @param _translation Translation.
                     * 
                     */
                    void SetTranslation(const std::string& _translation);

                    /**
                     * 判断参数 Translation 是否已赋值
                     * @return Translation 是否已赋值
                     * 
                     */
                    bool TranslationHasBeenSet() const;

                private:

                    /**
                     * Translate text type, enumerate "sentence" means sentence, "term" means terminology.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Original.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Translation.
                     */
                    std::string m_translation;
                    bool m_translationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_REFERENCE_H_
