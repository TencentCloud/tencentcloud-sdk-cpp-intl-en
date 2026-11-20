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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONLLMCONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONLLMCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationMcpServer.h>
#include <tencentcloud/trtc/v20190722/model/KeyValueItem.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationHistoryMessage.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * LLM parameter configuration for AI conversation.
                */
                class VoiceConversationLLMConfig : public AbstractModel
                {
                public:
                    VoiceConversationLLMConfig();
                    ~VoiceConversationLLMConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>LLM API type, for example, openai (OpenAI-compatible API).</p>
                     * @return LLMType <p>LLM API type, for example, openai (OpenAI-compatible API).</p>
                     * 
                     */
                    std::string GetLLMType() const;

                    /**
                     * 设置<p>LLM API type, for example, openai (OpenAI-compatible API).</p>
                     * @param _lLMType <p>LLM API type, for example, openai (OpenAI-compatible API).</p>
                     * 
                     */
                    void SetLLMType(const std::string& _lLMType);

                    /**
                     * 判断参数 LLMType 是否已赋值
                     * @return LLMType 是否已赋值
                     * 
                     */
                    bool LLMTypeHasBeenSet() const;

                    /**
                     * 获取<p>Model name, for example, gpt-4o-mini</p>
                     * @return Model <p>Model name, for example, gpt-4o-mini</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>Model name, for example, gpt-4o-mini</p>
                     * @param _model <p>Model name, for example, gpt-4o-mini</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>OpenAI-compatible endpoint.</p>
                     * @return APIUrl <p>OpenAI-compatible endpoint.</p>
                     * 
                     */
                    std::string GetAPIUrl() const;

                    /**
                     * 设置<p>OpenAI-compatible endpoint.</p>
                     * @param _aPIUrl <p>OpenAI-compatible endpoint.</p>
                     * 
                     */
                    void SetAPIUrl(const std::string& _aPIUrl);

                    /**
                     * 判断参数 APIUrl 是否已赋值
                     * @return APIUrl 是否已赋值
                     * 
                     */
                    bool APIUrlHasBeenSet() const;

                    /**
                     * 获取Provider API key.
                     * @return APIKey Provider API key.
                     * 
                     */
                    std::string GetAPIKey() const;

                    /**
                     * 设置Provider API key.
                     * @param _aPIKey Provider API key.
                     * 
                     */
                    void SetAPIKey(const std::string& _aPIKey);

                    /**
                     * 判断参数 APIKey 是否已赋值
                     * @return APIKey 是否已赋值
                     * 
                     */
                    bool APIKeyHasBeenSet() const;

                    /**
                     * 获取<p>System prompt.</p>
                     * @return SystemPrompt <p>System prompt.</p>
                     * 
                     */
                    std::string GetSystemPrompt() const;

                    /**
                     * 设置<p>System prompt.</p>
                     * @param _systemPrompt <p>System prompt.</p>
                     * 
                     */
                    void SetSystemPrompt(const std::string& _systemPrompt);

                    /**
                     * 判断参数 SystemPrompt 是否已赋值
                     * @return SystemPrompt 是否已赋值
                     * 
                     */
                    bool SystemPromptHasBeenSet() const;

                    /**
                     * 获取<p>Text used to generate TTS audio when the LLM call fails.</p>
                     * @return FailureMessage <p>Text used to generate TTS audio when the LLM call fails.</p>
                     * 
                     */
                    std::string GetFailureMessage() const;

                    /**
                     * 设置<p>Text used to generate TTS audio when the LLM call fails.</p>
                     * @param _failureMessage <p>Text used to generate TTS audio when the LLM call fails.</p>
                     * 
                     */
                    void SetFailureMessage(const std::string& _failureMessage);

                    /**
                     * 判断参数 FailureMessage 是否已赋值
                     * @return FailureMessage 是否已赋值
                     * 
                     */
                    bool FailureMessageHasBeenSet() const;

                    /**
                     * 获取<p>Maximum number of tokens in a single response. 0 means no limit. Default: 0. If the model outputs more tokens than MaxTokens, the response is truncated.</p>
                     * @return MaxTokens <p>Maximum number of tokens in a single response. 0 means no limit. Default: 0. If the model outputs more tokens than MaxTokens, the response is truncated.</p>
                     * 
                     */
                    uint64_t GetMaxTokens() const;

                    /**
                     * 设置<p>Maximum number of tokens in a single response. 0 means no limit. Default: 0. If the model outputs more tokens than MaxTokens, the response is truncated.</p>
                     * @param _maxTokens <p>Maximum number of tokens in a single response. 0 means no limit. Default: 0. If the model outputs more tokens than MaxTokens, the response is truncated.</p>
                     * 
                     */
                    void SetMaxTokens(const uint64_t& _maxTokens);

                    /**
                     * 判断参数 MaxTokens 是否已赋值
                     * @return MaxTokens 是否已赋值
                     * 
                     */
                    bool MaxTokensHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable thinking mode. Availability depends on the model provider. Enabling thinking mode consumes output tokens.</p>
                     * @return ThinkingMode <p>Whether to enable thinking mode. Availability depends on the model provider. Enabling thinking mode consumes output tokens.</p>
                     * 
                     */
                    bool GetThinkingMode() const;

                    /**
                     * 设置<p>Whether to enable thinking mode. Availability depends on the model provider. Enabling thinking mode consumes output tokens.</p>
                     * @param _thinkingMode <p>Whether to enable thinking mode. Availability depends on the model provider. Enabling thinking mode consumes output tokens.</p>
                     * 
                     */
                    void SetThinkingMode(const bool& _thinkingMode);

                    /**
                     * 判断参数 ThinkingMode 是否已赋值
                     * @return ThinkingMode 是否已赋值
                     * 
                     */
                    bool ThinkingModeHasBeenSet() const;

                    /**
                     * 获取<p>Number of conversation turns cached for the LLM. Valid range: 0 to 50. Recommended range: 10 to 30. The total number of tokens in this context must not exceed the LLM context limit.</p>
                     * @return MaxHistory <p>Number of conversation turns cached for the LLM. Valid range: 0 to 50. Recommended range: 10 to 30. The total number of tokens in this context must not exceed the LLM context limit.</p>
                     * 
                     */
                    uint64_t GetMaxHistory() const;

                    /**
                     * 设置<p>Number of conversation turns cached for the LLM. Valid range: 0 to 50. Recommended range: 10 to 30. The total number of tokens in this context must not exceed the LLM context limit.</p>
                     * @param _maxHistory <p>Number of conversation turns cached for the LLM. Valid range: 0 to 50. Recommended range: 10 to 30. The total number of tokens in this context must not exceed the LLM context limit.</p>
                     * 
                     */
                    void SetMaxHistory(const uint64_t& _maxHistory);

                    /**
                     * 判断参数 MaxHistory 是否已赋值
                     * @return MaxHistory 是否已赋值
                     * 
                     */
                    bool MaxHistoryHasBeenSet() const;

                    /**
                     * 获取<p>Maximum rounds of MCP tool calls, ranging from 0 to 50. Default: 10.</p>
                     * @return MaxToolRound <p>Maximum rounds of MCP tool calls, ranging from 0 to 50. Default: 10.</p>
                     * 
                     */
                    uint64_t GetMaxToolRound() const;

                    /**
                     * 设置<p>Maximum rounds of MCP tool calls, ranging from 0 to 50. Default: 10.</p>
                     * @param _maxToolRound <p>Maximum rounds of MCP tool calls, ranging from 0 to 50. Default: 10.</p>
                     * 
                     */
                    void SetMaxToolRound(const uint64_t& _maxToolRound);

                    /**
                     * 判断参数 MaxToolRound 是否已赋值
                     * @return MaxToolRound 是否已赋值
                     * 
                     */
                    bool MaxToolRoundHasBeenSet() const;

                    /**
                     * 获取Timeout for a single request, in milliseconds. Valid range: 1000 to 60000. Default: 10000.
                     * @return Timeout Timeout for a single request, in milliseconds. Valid range: 1000 to 60000. Default: 10000.
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置Timeout for a single request, in milliseconds. Valid range: 1000 to 60000. Default: 10000.
                     * @param _timeout Timeout for a single request, in milliseconds. Valid range: 1000 to 60000. Default: 10000.
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Sampling temperature, ranging from 0.0 to 2.0. Default: 1.0.</p>
                     * @return Temperature <p>Sampling temperature, ranging from 0.0 to 2.0. Default: 1.0.</p>
                     * 
                     */
                    double GetTemperature() const;

                    /**
                     * 设置<p>Sampling temperature, ranging from 0.0 to 2.0. Default: 1.0.</p>
                     * @param _temperature <p>Sampling temperature, ranging from 0.0 to 2.0. Default: 1.0.</p>
                     * 
                     */
                    void SetTemperature(const double& _temperature);

                    /**
                     * 判断参数 Temperature 是否已赋值
                     * @return Temperature 是否已赋值
                     * 
                     */
                    bool TemperatureHasBeenSet() const;

                    /**
                     * 获取<p>Top p nucleus sampling. Valid range: 0.0 to 1.0. Default: 1.0.</p>
                     * @return TopP <p>Top p nucleus sampling. Valid range: 0.0 to 1.0. Default: 1.0.</p>
                     * 
                     */
                    double GetTopP() const;

                    /**
                     * 设置<p>Top p nucleus sampling. Valid range: 0.0 to 1.0. Default: 1.0.</p>
                     * @param _topP <p>Top p nucleus sampling. Valid range: 0.0 to 1.0. Default: 1.0.</p>
                     * 
                     */
                    void SetTopP(const double& _topP);

                    /**
                     * 判断参数 TopP 是否已赋值
                     * @return TopP 是否已赋值
                     * 
                     */
                    bool TopPHasBeenSet() const;

                    /**
                     * 获取<p>MCP Server parameters.</p>
                     * @return McpServer <p>MCP Server parameters.</p>
                     * 
                     */
                    VoiceConversationMcpServer GetMcpServer() const;

                    /**
                     * 设置<p>MCP Server parameters.</p>
                     * @param _mcpServer <p>MCP Server parameters.</p>
                     * 
                     */
                    void SetMcpServer(const VoiceConversationMcpServer& _mcpServer);

                    /**
                     * 判断参数 McpServer 是否已赋值
                     * @return McpServer 是否已赋值
                     * 
                     */
                    bool McpServerHasBeenSet() const;

                    /**
                     * 获取<p>Custom HTTP request headers.</p>
                     * @return CustomHeaders <p>Custom HTTP request headers.</p>
                     * 
                     */
                    std::vector<KeyValueItem> GetCustomHeaders() const;

                    /**
                     * 设置<p>Custom HTTP request headers.</p>
                     * @param _customHeaders <p>Custom HTTP request headers.</p>
                     * 
                     */
                    void SetCustomHeaders(const std::vector<KeyValueItem>& _customHeaders);

                    /**
                     * 判断参数 CustomHeaders 是否已赋值
                     * @return CustomHeaders 是否已赋值
                     * 
                     */
                    bool CustomHeadersHasBeenSet() const;

                    /**
                     * 获取Provider-specific parameters, such as DeepSeek's reasoning_effort and Hunyuan's enable_enhancement.
                     * @return CustomFields Provider-specific parameters, such as DeepSeek's reasoning_effort and Hunyuan's enable_enhancement.
                     * 
                     */
                    std::vector<KeyValueItem> GetCustomFields() const;

                    /**
                     * 设置Provider-specific parameters, such as DeepSeek's reasoning_effort and Hunyuan's enable_enhancement.
                     * @param _customFields Provider-specific parameters, such as DeepSeek's reasoning_effort and Hunyuan's enable_enhancement.
                     * 
                     */
                    void SetCustomFields(const std::vector<KeyValueItem>& _customFields);

                    /**
                     * 判断参数 CustomFields 是否已赋值
                     * @return CustomFields 是否已赋值
                     * 
                     */
                    bool CustomFieldsHasBeenSet() const;

                    /**
                     * 获取<p>Initial conversation history. Each item uses this format: `{"Role": "user"/"assistant"/"system", "Content": "xxx"}`.</p>
                     * @return HistoryMessages <p>Initial conversation history. Each item uses this format: `{"Role": "user"/"assistant"/"system", "Content": "xxx"}`.</p>
                     * 
                     */
                    std::vector<VoiceConversationHistoryMessage> GetHistoryMessages() const;

                    /**
                     * 设置<p>Initial conversation history. Each item uses this format: `{"Role": "user"/"assistant"/"system", "Content": "xxx"}`.</p>
                     * @param _historyMessages <p>Initial conversation history. Each item uses this format: `{"Role": "user"/"assistant"/"system", "Content": "xxx"}`.</p>
                     * 
                     */
                    void SetHistoryMessages(const std::vector<VoiceConversationHistoryMessage>& _historyMessages);

                    /**
                     * 判断参数 HistoryMessages 是否已赋值
                     * @return HistoryMessages 是否已赋值
                     * 
                     */
                    bool HistoryMessagesHasBeenSet() const;

                private:

                    /**
                     * <p>LLM API type, for example, openai (OpenAI-compatible API).</p>
                     */
                    std::string m_lLMType;
                    bool m_lLMTypeHasBeenSet;

                    /**
                     * <p>Model name, for example, gpt-4o-mini</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>OpenAI-compatible endpoint.</p>
                     */
                    std::string m_aPIUrl;
                    bool m_aPIUrlHasBeenSet;

                    /**
                     * Provider API key.
                     */
                    std::string m_aPIKey;
                    bool m_aPIKeyHasBeenSet;

                    /**
                     * <p>System prompt.</p>
                     */
                    std::string m_systemPrompt;
                    bool m_systemPromptHasBeenSet;

                    /**
                     * <p>Text used to generate TTS audio when the LLM call fails.</p>
                     */
                    std::string m_failureMessage;
                    bool m_failureMessageHasBeenSet;

                    /**
                     * <p>Maximum number of tokens in a single response. 0 means no limit. Default: 0. If the model outputs more tokens than MaxTokens, the response is truncated.</p>
                     */
                    uint64_t m_maxTokens;
                    bool m_maxTokensHasBeenSet;

                    /**
                     * <p>Whether to enable thinking mode. Availability depends on the model provider. Enabling thinking mode consumes output tokens.</p>
                     */
                    bool m_thinkingMode;
                    bool m_thinkingModeHasBeenSet;

                    /**
                     * <p>Number of conversation turns cached for the LLM. Valid range: 0 to 50. Recommended range: 10 to 30. The total number of tokens in this context must not exceed the LLM context limit.</p>
                     */
                    uint64_t m_maxHistory;
                    bool m_maxHistoryHasBeenSet;

                    /**
                     * <p>Maximum rounds of MCP tool calls, ranging from 0 to 50. Default: 10.</p>
                     */
                    uint64_t m_maxToolRound;
                    bool m_maxToolRoundHasBeenSet;

                    /**
                     * Timeout for a single request, in milliseconds. Valid range: 1000 to 60000. Default: 10000.
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>Sampling temperature, ranging from 0.0 to 2.0. Default: 1.0.</p>
                     */
                    double m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * <p>Top p nucleus sampling. Valid range: 0.0 to 1.0. Default: 1.0.</p>
                     */
                    double m_topP;
                    bool m_topPHasBeenSet;

                    /**
                     * <p>MCP Server parameters.</p>
                     */
                    VoiceConversationMcpServer m_mcpServer;
                    bool m_mcpServerHasBeenSet;

                    /**
                     * <p>Custom HTTP request headers.</p>
                     */
                    std::vector<KeyValueItem> m_customHeaders;
                    bool m_customHeadersHasBeenSet;

                    /**
                     * Provider-specific parameters, such as DeepSeek's reasoning_effort and Hunyuan's enable_enhancement.
                     */
                    std::vector<KeyValueItem> m_customFields;
                    bool m_customFieldsHasBeenSet;

                    /**
                     * <p>Initial conversation history. Each item uses this format: `{"Role": "user"/"assistant"/"system", "Content": "xxx"}`.</p>
                     */
                    std::vector<VoiceConversationHistoryMessage> m_historyMessages;
                    bool m_historyMessagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONLLMCONFIG_H_
