/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AICALLEXTRACTCONFIGELEMENT_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AICALLEXTRACTCONFIGELEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * AI call extraction configuration item.
                */
                class AICallExtractConfigElement : public AbstractModel
                {
                public:
                    AICallExtractConfigElement();
                    ~AICallExtractConfigElement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration item type, including.
Text.
Selector option.
Boolean value.
Number.
                     * @return InfoType Configuration item type, including.
Text.
Selector option.
Boolean value.
Number.
                     * 
                     */
                    std::string GetInfoType() const;

                    /**
                     * 设置Configuration item type, including.
Text.
Selector option.
Boolean value.
Number.
                     * @param _infoType Configuration item type, including.
Text.
Selector option.
Boolean value.
Number.
                     * 
                     */
                    void SetInfoType(const std::string& _infoType);

                    /**
                     * 判断参数 InfoType 是否已赋值
                     * @return InfoType 是否已赋值
                     * 
                     */
                    bool InfoTypeHasBeenSet() const;

                    /**
                     * 获取Configuration item name, duplicat.
                     * @return InfoName Configuration item name, duplicat.
                     * 
                     */
                    std::string GetInfoName() const;

                    /**
                     * 设置Configuration item name, duplicat.
                     * @param _infoName Configuration item name, duplicat.
                     * 
                     */
                    void SetInfoName(const std::string& _infoName);

                    /**
                     * 判断参数 InfoName 是否已赋值
                     * @return InfoName 是否已赋值
                     * 
                     */
                    bool InfoNameHasBeenSet() const;

                    /**
                     * 获取Specific content of the configuration item.
                     * @return InfoContent Specific content of the configuration item.
                     * 
                     */
                    std::string GetInfoContent() const;

                    /**
                     * 设置Specific content of the configuration item.
                     * @param _infoContent Specific content of the configuration item.
                     * 
                     */
                    void SetInfoContent(const std::string& _infoContent);

                    /**
                     * 判断参数 InfoContent 是否已赋值
                     * @return InfoContent 是否已赋值
                     * 
                     */
                    bool InfoContentHasBeenSet() const;

                    /**
                     * 获取Example of extracted content from the configuration item.
                     * @return Examples Example of extracted content from the configuration item.
                     * 
                     */
                    std::vector<std::string> GetExamples() const;

                    /**
                     * 设置Example of extracted content from the configuration item.
                     * @param _examples Example of extracted content from the configuration item.
                     * 
                     */
                    void SetExamples(const std::vector<std::string>& _examples);

                    /**
                     * 判断参数 Examples 是否已赋值
                     * @return Examples 是否已赋值
                     * 
                     */
                    bool ExamplesHasBeenSet() const;

                    /**
                     * 获取When infotype is selector, this field needs to be configured.
                     * @return Choices When infotype is selector, this field needs to be configured.
                     * 
                     */
                    std::vector<std::string> GetChoices() const;

                    /**
                     * 设置When infotype is selector, this field needs to be configured.
                     * @param _choices When infotype is selector, this field needs to be configured.
                     * 
                     */
                    void SetChoices(const std::vector<std::string>& _choices);

                    /**
                     * 判断参数 Choices 是否已赋值
                     * @return Choices 是否已赋值
                     * 
                     */
                    bool ChoicesHasBeenSet() const;

                private:

                    /**
                     * Configuration item type, including.
Text.
Selector option.
Boolean value.
Number.
                     */
                    std::string m_infoType;
                    bool m_infoTypeHasBeenSet;

                    /**
                     * Configuration item name, duplicat.
                     */
                    std::string m_infoName;
                    bool m_infoNameHasBeenSet;

                    /**
                     * Specific content of the configuration item.
                     */
                    std::string m_infoContent;
                    bool m_infoContentHasBeenSet;

                    /**
                     * Example of extracted content from the configuration item.
                     */
                    std::vector<std::string> m_examples;
                    bool m_examplesHasBeenSet;

                    /**
                     * When infotype is selector, this field needs to be configured.
                     */
                    std::vector<std::string> m_choices;
                    bool m_choicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AICALLEXTRACTCONFIGELEMENT_H_
