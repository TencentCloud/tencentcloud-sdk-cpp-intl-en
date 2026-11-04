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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONEXPERIENCE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONEXPERIENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AICallConfig.h>
#include <tencentcloud/adp/v20260520/model/BackgroundImage.h>
#include <tencentcloud/adp/v20260520/model/InputBoxConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Dialogue experience configuration
                */
                class ConversationExperience : public AbstractModel
                {
                public:
                    ConversationExperience();
                    ~ConversationExperience() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>AI Call Configuration</p>
                     * @return AiCall <p>AI Call Configuration</p>
                     * 
                     */
                    AICallConfig GetAiCall() const;

                    /**
                     * 设置<p>AI Call Configuration</p>
                     * @param _aiCall <p>AI Call Configuration</p>
                     * 
                     */
                    void SetAiCall(const AICallConfig& _aiCall);

                    /**
                     * 判断参数 AiCall 是否已赋值
                     * @return AiCall 是否已赋值
                     * 
                     */
                    bool AiCallHasBeenSet() const;

                    /**
                     * 获取<p>Background image configuration</p>
                     * @return BackgroundImage <p>Background image configuration</p>
                     * 
                     */
                    BackgroundImage GetBackgroundImage() const;

                    /**
                     * 设置<p>Background image configuration</p>
                     * @param _backgroundImage <p>Background image configuration</p>
                     * 
                     */
                    void SetBackgroundImage(const BackgroundImage& _backgroundImage);

                    /**
                     * 判断参数 BackgroundImage 是否已赋值
                     * @return BackgroundImage 是否已赋值
                     * 
                     */
                    bool BackgroundImageHasBeenSet() const;

                    /**
                     * 获取<p>Fallback response switch</p>
                     * @return EnableFallbackReply <p>Fallback response switch</p>
                     * 
                     */
                    bool GetEnableFallbackReply() const;

                    /**
                     * 设置<p>Fallback response switch</p>
                     * @param _enableFallbackReply <p>Fallback response switch</p>
                     * 
                     */
                    void SetEnableFallbackReply(const bool& _enableFallbackReply);

                    /**
                     * 判断参数 EnableFallbackReply 是否已赋值
                     * @return EnableFallbackReply 是否已赋值
                     * 
                     */
                    bool EnableFallbackReplyHasBeenSet() const;

                    /**
                     * 获取<p>Whether to use recommended questions.</p>
                     * @return EnableRecommended <p>Whether to use recommended questions.</p>
                     * 
                     */
                    bool GetEnableRecommended() const;

                    /**
                     * 设置<p>Whether to use recommended questions.</p>
                     * @param _enableRecommended <p>Whether to use recommended questions.</p>
                     * 
                     */
                    void SetEnableRecommended(const bool& _enableRecommended);

                    /**
                     * 判断参数 EnableRecommended 是否已赋值
                     * @return EnableRecommended 是否已赋值
                     * 
                     */
                    bool EnableRecommendedHasBeenSet() const;

                    /**
                     * 获取<p>Whether to use online search.</p>
                     * @return EnableWebSearch <p>Whether to use online search.</p>
                     * 
                     */
                    bool GetEnableWebSearch() const;

                    /**
                     * 设置<p>Whether to use online search.</p>
                     * @param _enableWebSearch <p>Whether to use online search.</p>
                     * 
                     */
                    void SetEnableWebSearch(const bool& _enableWebSearch);

                    /**
                     * 判断参数 EnableWebSearch 是否已赋值
                     * @return EnableWebSearch 是否已赋值
                     * 
                     */
                    bool EnableWebSearchHasBeenSet() const;

                    /**
                     * 获取<p>Fallback response</p>
                     * @return FallbackReply <p>Fallback response</p>
                     * 
                     */
                    std::string GetFallbackReply() const;

                    /**
                     * 设置<p>Fallback response</p>
                     * @param _fallbackReply <p>Fallback response</p>
                     * 
                     */
                    void SetFallbackReply(const std::string& _fallbackReply);

                    /**
                     * 判断参数 FallbackReply 是否已赋值
                     * @return FallbackReply 是否已赋值
                     * 
                     */
                    bool FallbackReplyHasBeenSet() const;

                    /**
                     * 获取<p>Input box configuration</p>
                     * @return InputBoxConfig <p>Input box configuration</p>
                     * 
                     */
                    InputBoxConfig GetInputBoxConfig() const;

                    /**
                     * 设置<p>Input box configuration</p>
                     * @param _inputBoxConfig <p>Input box configuration</p>
                     * 
                     */
                    void SetInputBoxConfig(const InputBoxConfig& _inputBoxConfig);

                    /**
                     * 判断参数 InputBoxConfig 是否已赋值
                     * @return InputBoxConfig 是否已赋值
                     * 
                     */
                    bool InputBoxConfigHasBeenSet() const;

                    /**
                     * 获取<p>Output method. Enumeration values: 1: streaming, 2: non-streaming</p>
                     * @return Method <p>Output method. Enumeration values: 1: streaming, 2: non-streaming</p>
                     * 
                     */
                    int64_t GetMethod() const;

                    /**
                     * 设置<p>Output method. Enumeration values: 1: streaming, 2: non-streaming</p>
                     * @param _method <p>Output method. Enumeration values: 1: streaming, 2: non-streaming</p>
                     * 
                     */
                    void SetMethod(const int64_t& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取<p>Recommended question generation prompt mode. Enumeration value: 1: Prompt that outputs recommended questions combined with the knowledge base only</p>
                     * @return RecommendPromptMode <p>Recommended question generation prompt mode. Enumeration value: 1: Prompt that outputs recommended questions combined with the knowledge base only</p>
                     * 
                     */
                    int64_t GetRecommendPromptMode() const;

                    /**
                     * 设置<p>Recommended question generation prompt mode. Enumeration value: 1: Prompt that outputs recommended questions combined with the knowledge base only</p>
                     * @param _recommendPromptMode <p>Recommended question generation prompt mode. Enumeration value: 1: Prompt that outputs recommended questions combined with the knowledge base only</p>
                     * 
                     */
                    void SetRecommendPromptMode(const int64_t& _recommendPromptMode);

                    /**
                     * 判断参数 RecommendPromptMode 是否已赋值
                     * @return RecommendPromptMode 是否已赋值
                     * 
                     */
                    bool RecommendPromptModeHasBeenSet() const;

                    /**
                     * 获取<p>A new message interrupts the ongoing message</p>
                     * @return EnableNewMessageInterrupt <p>A new message interrupts the ongoing message</p>
                     * 
                     */
                    bool GetEnableNewMessageInterrupt() const;

                    /**
                     * 设置<p>A new message interrupts the ongoing message</p>
                     * @param _enableNewMessageInterrupt <p>A new message interrupts the ongoing message</p>
                     * 
                     */
                    void SetEnableNewMessageInterrupt(const bool& _enableNewMessageInterrupt);

                    /**
                     * 判断参数 EnableNewMessageInterrupt 是否已赋值
                     * @return EnableNewMessageInterrupt 是否已赋值
                     * 
                     */
                    bool EnableNewMessageInterruptHasBeenSet() const;

                private:

                    /**
                     * <p>AI Call Configuration</p>
                     */
                    AICallConfig m_aiCall;
                    bool m_aiCallHasBeenSet;

                    /**
                     * <p>Background image configuration</p>
                     */
                    BackgroundImage m_backgroundImage;
                    bool m_backgroundImageHasBeenSet;

                    /**
                     * <p>Fallback response switch</p>
                     */
                    bool m_enableFallbackReply;
                    bool m_enableFallbackReplyHasBeenSet;

                    /**
                     * <p>Whether to use recommended questions.</p>
                     */
                    bool m_enableRecommended;
                    bool m_enableRecommendedHasBeenSet;

                    /**
                     * <p>Whether to use online search.</p>
                     */
                    bool m_enableWebSearch;
                    bool m_enableWebSearchHasBeenSet;

                    /**
                     * <p>Fallback response</p>
                     */
                    std::string m_fallbackReply;
                    bool m_fallbackReplyHasBeenSet;

                    /**
                     * <p>Input box configuration</p>
                     */
                    InputBoxConfig m_inputBoxConfig;
                    bool m_inputBoxConfigHasBeenSet;

                    /**
                     * <p>Output method. Enumeration values: 1: streaming, 2: non-streaming</p>
                     */
                    int64_t m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>Recommended question generation prompt mode. Enumeration value: 1: Prompt that outputs recommended questions combined with the knowledge base only</p>
                     */
                    int64_t m_recommendPromptMode;
                    bool m_recommendPromptModeHasBeenSet;

                    /**
                     * <p>A new message interrupts the ongoing message</p>
                     */
                    bool m_enableNewMessageInterrupt;
                    bool m_enableNewMessageInterruptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONEXPERIENCE_H_
