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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AICALLEXTRACTRESULTELEMENT_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AICALLEXTRACTRESULTELEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/AICallExtractResultInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * AI call extraction result.
                */
                class AICallExtractResultElement : public AbstractModel
                {
                public:
                    AICallExtractResultElement();
                    ~AICallExtractResultElement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type of extracted information.
Text.
Selector options.
Boolean value.
Number.
                     * @return InfoType Type of extracted information.
Text.
Selector options.
Boolean value.
Number.
                     * 
                     */
                    std::string GetInfoType() const;

                    /**
                     * 设置Type of extracted information.
Text.
Selector options.
Boolean value.
Number.
                     * @param _infoType Type of extracted information.
Text.
Selector options.
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
                     * 获取Name of the extracted information.
                     * @return InfoName Name of the extracted information.
                     * 
                     */
                    std::string GetInfoName() const;

                    /**
                     * 设置Name of the extracted information.
                     * @param _infoName Name of the extracted information.
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
                     * 获取Specific description of the extracted information.
                     * @return InfoContent Specific description of the extracted information.
                     * 
                     */
                    std::string GetInfoContent() const;

                    /**
                     * 设置Specific description of the extracted information.
                     * @param _infoContent Specific description of the extracted information.
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
                     * 获取Specific result of the extracted information.
                     * @return Result Specific result of the extracted information.
                     * 
                     */
                    AICallExtractResultInfo GetResult() const;

                    /**
                     * 设置Specific result of the extracted information.
                     * @param _result Specific result of the extracted information.
                     * 
                     */
                    void SetResult(const AICallExtractResultInfo& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * Type of extracted information.
Text.
Selector options.
Boolean value.
Number.
                     */
                    std::string m_infoType;
                    bool m_infoTypeHasBeenSet;

                    /**
                     * Name of the extracted information.
                     */
                    std::string m_infoName;
                    bool m_infoNameHasBeenSet;

                    /**
                     * Specific description of the extracted information.
                     */
                    std::string m_infoContent;
                    bool m_infoContentHasBeenSet;

                    /**
                     * Specific result of the extracted information.
                     */
                    AICallExtractResultInfo m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AICALLEXTRACTRESULTELEMENT_H_
