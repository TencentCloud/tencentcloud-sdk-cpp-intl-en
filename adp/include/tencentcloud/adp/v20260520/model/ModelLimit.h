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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODELLIMIT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODELLIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * <p>Model restrictive information</p>
                */
                class ModelLimit : public AbstractModel
                {
                public:
                    ModelLimit();
                    ~ModelLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Model context length display copy (for example, 128K, 1000K)</p>
                     * @return ContextLengthDescription <p>Model context length display copy (for example, 128K, 1000K)</p>
                     * 
                     */
                    std::string GetContextLengthDescription() const;

                    /**
                     * 设置<p>Model context length display copy (for example, 128K, 1000K)</p>
                     * @param _contextLengthDescription <p>Model context length display copy (for example, 128K, 1000K)</p>
                     * 
                     */
                    void SetContextLengthDescription(const std::string& _contextLengthDescription);

                    /**
                     * 判断参数 ContextLengthDescription 是否已赋值
                     * @return ContextLengthDescription 是否已赋值
                     * 
                     */
                    bool ContextLengthDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Character limit for model dialog box input length</p>
                     * @return InputLengthLimit <p>Character limit for model dialog box input length</p>
                     * 
                     */
                    int64_t GetInputLengthLimit() const;

                    /**
                     * 设置<p>Character limit for model dialog box input length</p>
                     * @param _inputLengthLimit <p>Character limit for model dialog box input length</p>
                     * 
                     */
                    void SetInputLengthLimit(const int64_t& _inputLengthLimit);

                    /**
                     * 判断参数 InputLengthLimit 是否已赋值
                     * @return InputLengthLimit 是否已赋值
                     * 
                     */
                    bool InputLengthLimitHasBeenSet() const;

                    /**
                     * 获取<p>Maximum input Tokens display copy (for example, 960k, formatted on the server, empty string if not configured)</p>
                     * @return MaxInputTokensDescription <p>Maximum input Tokens display copy (for example, 960k, formatted on the server, empty string if not configured)</p>
                     * 
                     */
                    std::string GetMaxInputTokensDescription() const;

                    /**
                     * 设置<p>Maximum input Tokens display copy (for example, 960k, formatted on the server, empty string if not configured)</p>
                     * @param _maxInputTokensDescription <p>Maximum input Tokens display copy (for example, 960k, formatted on the server, empty string if not configured)</p>
                     * 
                     */
                    void SetMaxInputTokensDescription(const std::string& _maxInputTokensDescription);

                    /**
                     * 判断参数 MaxInputTokensDescription 是否已赋值
                     * @return MaxInputTokensDescription 是否已赋值
                     * 
                     */
                    bool MaxInputTokensDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Display copy for the maximum output Tokens (for example, 64k, formatted on the server, empty string if not configured)</p>
                     * @return MaxOutputTokensDescription <p>Display copy for the maximum output Tokens (for example, 64k, formatted on the server, empty string if not configured)</p>
                     * 
                     */
                    std::string GetMaxOutputTokensDescription() const;

                    /**
                     * 设置<p>Display copy for the maximum output Tokens (for example, 64k, formatted on the server, empty string if not configured)</p>
                     * @param _maxOutputTokensDescription <p>Display copy for the maximum output Tokens (for example, 64k, formatted on the server, empty string if not configured)</p>
                     * 
                     */
                    void SetMaxOutputTokensDescription(const std::string& _maxOutputTokensDescription);

                    /**
                     * 判断参数 MaxOutputTokensDescription 是否已赋值
                     * @return MaxOutputTokensDescription 是否已赋值
                     * 
                     */
                    bool MaxOutputTokensDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Model prompt content length character limit</p>
                     * @return PromptLengthLimit <p>Model prompt content length character limit</p>
                     * 
                     */
                    int64_t GetPromptLengthLimit() const;

                    /**
                     * 设置<p>Model prompt content length character limit</p>
                     * @param _promptLengthLimit <p>Model prompt content length character limit</p>
                     * 
                     */
                    void SetPromptLengthLimit(const int64_t& _promptLengthLimit);

                    /**
                     * 判断参数 PromptLengthLimit 是否已赋值
                     * @return PromptLengthLimit 是否已赋值
                     * 
                     */
                    bool PromptLengthLimitHasBeenSet() const;

                private:

                    /**
                     * <p>Model context length display copy (for example, 128K, 1000K)</p>
                     */
                    std::string m_contextLengthDescription;
                    bool m_contextLengthDescriptionHasBeenSet;

                    /**
                     * <p>Character limit for model dialog box input length</p>
                     */
                    int64_t m_inputLengthLimit;
                    bool m_inputLengthLimitHasBeenSet;

                    /**
                     * <p>Maximum input Tokens display copy (for example, 960k, formatted on the server, empty string if not configured)</p>
                     */
                    std::string m_maxInputTokensDescription;
                    bool m_maxInputTokensDescriptionHasBeenSet;

                    /**
                     * <p>Display copy for the maximum output Tokens (for example, 64k, formatted on the server, empty string if not configured)</p>
                     */
                    std::string m_maxOutputTokensDescription;
                    bool m_maxOutputTokensDescriptionHasBeenSet;

                    /**
                     * <p>Model prompt content length character limit</p>
                     */
                    int64_t m_promptLengthLimit;
                    bool m_promptLengthLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELLIMIT_H_
