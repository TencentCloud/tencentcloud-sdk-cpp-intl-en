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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AIANALYSISRESULT_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AIANALYSISRESULT_H_

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
                * AI conversation analytics result.
                */
                class AIAnalysisResult : public AbstractModel
                {
                public:
                    AIAnalysisResult();
                    ~AIAnalysisResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Summary: describes the session summary.
mood: specifies the emotion analysis.
intention extraction.
                     * @return Type Summary: describes the session summary.
mood: specifies the emotion analysis.
intention extraction.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Summary: describes the session summary.
mood: specifies the emotion analysis.
intention extraction.
                     * @param _type Summary: describes the session summary.
mood: specifies the emotion analysis.
intention extraction.
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
                     * 获取AI session analysis result.
                     * @return Result AI session analysis result.
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置AI session analysis result.
                     * @param _result AI session analysis result.
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * Summary: describes the session summary.
mood: specifies the emotion analysis.
intention extraction.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * AI session analysis result.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AIANALYSISRESULT_H_
