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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMCONTENTSECCHECKREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMCONTENTSECCHECKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/IntentContent.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeLLMContentSecCheck request structure.
                */
                class DescribeLLMContentSecCheckRequest : public AbstractModel
                {
                public:
                    DescribeLLMContentSecCheckRequest();
                    ~DescribeLLMContentSecCheckRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Service id. Pass the service id corresponding to the protection policy to use. The model will detect all rules under this service id.</p>
                     * @return ServiceId <p>Service id. Pass the service id corresponding to the protection policy to use. The model will detect all rules under this service id.</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>Service id. Pass the service id corresponding to the protection policy to use. The model will detect all rules under this service id.</p>
                     * @param _serviceId <p>Service id. Pass the service id corresponding to the protection policy to use. The model will detect all rules under this service id.</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>Traffic type, indicating inbound or outbound traffic. 1: inbound, 2: outbound. Both inbound and outbound are required.</p>
                     * @return Type <p>Traffic type, indicating inbound or outbound traffic. 1: inbound, 2: outbound. Both inbound and outbound are required.</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>Traffic type, indicating inbound or outbound traffic. 1: inbound, 2: outbound. Both inbound and outbound are required.</p>
                     * @param _type <p>Traffic type, indicating inbound or outbound traffic. 1: inbound, 2: outbound. Both inbound and outbound are required.</p>
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Instance id. Required.</p>
                     * @return InstanceId <p>Instance id. Required.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance id. Required.</p>
                     * @param _instanceId <p>Instance id. Required.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Content to review</p>
                     * @return Content <p>Content to review</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>Content to review</p>
                     * @param _content <p>Content to review</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>id of the question-answer conversation</p>
                     * @return ChatId <p>id of the question-answer conversation</p>
                     * 
                     */
                    std::string GetChatId() const;

                    /**
                     * 设置<p>id of the question-answer conversation</p>
                     * @param _chatId <p>id of the question-answer conversation</p>
                     * 
                     */
                    void SetChatId(const std::string& _chatId);

                    /**
                     * 判断参数 ChatId 是否已赋值
                     * @return ChatId 是否已赋值
                     * 
                     */
                    bool ChatIdHasBeenSet() const;

                    /**
                     * 获取<p>id that identifies the user, used for rate limiting. If not specified, rate limiting will not take effect.</p>
                     * @return UserId <p>id that identifies the user, used for rate limiting. If not specified, rate limiting will not take effect.</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>id that identifies the user, used for rate limiting. If not specified, rate limiting will not take effect.</p>
                     * @param _userId <p>id that identifies the user, used for rate limiting. If not specified, rate limiting will not take effect.</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>token usage. If not specified, the default token calculation method will be used to calculate model consumption, because this value is added in the outbound direction, that is, Type=2.</p>
                     * @return TokenUsage <p>token usage. If not specified, the default token calculation method will be used to calculate model consumption, because this value is added in the outbound direction, that is, Type=2.</p>
                     * 
                     */
                    uint64_t GetTokenUsage() const;

                    /**
                     * 设置<p>token usage. If not specified, the default token calculation method will be used to calculate model consumption, because this value is added in the outbound direction, that is, Type=2.</p>
                     * @param _tokenUsage <p>token usage. If not specified, the default token calculation method will be used to calculate model consumption, because this value is added in the outbound direction, that is, Type=2.</p>
                     * 
                     */
                    void SetTokenUsage(const uint64_t& _tokenUsage);

                    /**
                     * 判断参数 TokenUsage 是否已赋值
                     * @return TokenUsage 是否已赋值
                     * 
                     */
                    bool TokenUsageHasBeenSet() const;

                    /**
                     * 获取<p>Base64-encoded image data. The maximum body size is 10 MB.</p>
                     * @return ImageEncode <p>Base64-encoded image data. The maximum body size is 10 MB.</p>
                     * 
                     */
                    std::string GetImageEncode() const;

                    /**
                     * 设置<p>Base64-encoded image data. The maximum body size is 10 MB.</p>
                     * @param _imageEncode <p>Base64-encoded image data. The maximum body size is 10 MB.</p>
                     * 
                     */
                    void SetImageEncode(const std::string& _imageEncode);

                    /**
                     * 判断参数 ImageEncode 是否已赋值
                     * @return ImageEncode 是否已赋值
                     * 
                     */
                    bool ImageEncodeHasBeenSet() const;

                    /**
                     * 获取<p>Tool name in the tool_call scenario</p>
                     * @return ToolName <p>Tool name in the tool_call scenario</p>
                     * 
                     */
                    std::string GetToolName() const;

                    /**
                     * 设置<p>Tool name in the tool_call scenario</p>
                     * @param _toolName <p>Tool name in the tool_call scenario</p>
                     * 
                     */
                    void SetToolName(const std::string& _toolName);

                    /**
                     * 判断参数 ToolName 是否已赋值
                     * @return ToolName 是否已赋值
                     * 
                     */
                    bool ToolNameHasBeenSet() const;

                    /**
                     * 获取<p>Tool parameters in the tool_call scenario</p>
                     * @return ToolArgs <p>Tool parameters in the tool_call scenario</p>
                     * 
                     */
                    std::string GetToolArgs() const;

                    /**
                     * 设置<p>Tool parameters in the tool_call scenario</p>
                     * @param _toolArgs <p>Tool parameters in the tool_call scenario</p>
                     * 
                     */
                    void SetToolArgs(const std::string& _toolArgs);

                    /**
                     * 判断参数 ToolArgs 是否已赋值
                     * @return ToolArgs 是否已赋值
                     * 
                     */
                    bool ToolArgsHasBeenSet() const;

                    /**
                     * 获取<p>id of the multi-turn conversation</p>
                     * @return SessionId <p>id of the multi-turn conversation</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>id of the multi-turn conversation</p>
                     * @param _sessionId <p>id of the multi-turn conversation</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>Request content for intent detection</p>
                     * @return IntentContent <p>Request content for intent detection</p>
                     * 
                     */
                    IntentContent GetIntentContent() const;

                    /**
                     * 设置<p>Request content for intent detection</p>
                     * @param _intentContent <p>Request content for intent detection</p>
                     * 
                     */
                    void SetIntentContent(const IntentContent& _intentContent);

                    /**
                     * 判断参数 IntentContent 是否已赋值
                     * @return IntentContent 是否已赋值
                     * 
                     */
                    bool IntentContentHasBeenSet() const;

                    /**
                     * 获取<p>Client source IP address, used for allowlist matching and other scenarios. Supports IPv4 and IPv6 formats.</p>
                     * @return ClientIP <p>Client source IP address, used for allowlist matching and other scenarios. Supports IPv4 and IPv6 formats.</p>
                     * 
                     */
                    std::string GetClientIP() const;

                    /**
                     * 设置<p>Client source IP address, used for allowlist matching and other scenarios. Supports IPv4 and IPv6 formats.</p>
                     * @param _clientIP <p>Client source IP address, used for allowlist matching and other scenarios. Supports IPv4 and IPv6 formats.</p>
                     * 
                     */
                    void SetClientIP(const std::string& _clientIP);

                    /**
                     * 判断参数 ClientIP 是否已赋值
                     * @return ClientIP 是否已赋值
                     * 
                     */
                    bool ClientIPHasBeenSet() const;

                    /**
                     * 获取Multi-turn historical user input, arranged from oldest to newest, used only for prompt injection detection
Input parameter limits: Up to 10 entries. If exceeded, only the latest 10 entries are retained. The combined length of History + Content cannot exceed 6K characters. If exceeded, the earliest History entries are discarded first.
                     * @return History Multi-turn historical user input, arranged from oldest to newest, used only for prompt injection detection
Input parameter limits: Up to 10 entries. If exceeded, only the latest 10 entries are retained. The combined length of History + Content cannot exceed 6K characters. If exceeded, the earliest History entries are discarded first.
                     * 
                     */
                    std::vector<std::string> GetHistory() const;

                    /**
                     * 设置Multi-turn historical user input, arranged from oldest to newest, used only for prompt injection detection
Input parameter limits: Up to 10 entries. If exceeded, only the latest 10 entries are retained. The combined length of History + Content cannot exceed 6K characters. If exceeded, the earliest History entries are discarded first.
                     * @param _history Multi-turn historical user input, arranged from oldest to newest, used only for prompt injection detection
Input parameter limits: Up to 10 entries. If exceeded, only the latest 10 entries are retained. The combined length of History + Content cannot exceed 6K characters. If exceeded, the earliest History entries are discarded first.
                     * 
                     */
                    void SetHistory(const std::vector<std::string>& _history);

                    /**
                     * 判断参数 History 是否已赋值
                     * @return History 是否已赋值
                     * 
                     */
                    bool HistoryHasBeenSet() const;

                    /**
                     * 获取List of URLs to be detected, used for malicious URL detection
Input parameter limits: Up to 50 URLs. A single URL cannot exceed 2048 characters. If exceeded, it will be truncated.
                     * @return Urls List of URLs to be detected, used for malicious URL detection
Input parameter limits: Up to 50 URLs. A single URL cannot exceed 2048 characters. If exceeded, it will be truncated.
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置List of URLs to be detected, used for malicious URL detection
Input parameter limits: Up to 50 URLs. A single URL cannot exceed 2048 characters. If exceeded, it will be truncated.
                     * @param _urls List of URLs to be detected, used for malicious URL detection
Input parameter limits: Up to 50 URLs. A single URL cannot exceed 2048 characters. If exceeded, it will be truncated.
                     * 
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                private:

                    /**
                     * <p>Service id. Pass the service id corresponding to the protection policy to use. The model will detect all rules under this service id.</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>Traffic type, indicating inbound or outbound traffic. 1: inbound, 2: outbound. Both inbound and outbound are required.</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Instance id. Required.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Content to review</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>id of the question-answer conversation</p>
                     */
                    std::string m_chatId;
                    bool m_chatIdHasBeenSet;

                    /**
                     * <p>id that identifies the user, used for rate limiting. If not specified, rate limiting will not take effect.</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>token usage. If not specified, the default token calculation method will be used to calculate model consumption, because this value is added in the outbound direction, that is, Type=2.</p>
                     */
                    uint64_t m_tokenUsage;
                    bool m_tokenUsageHasBeenSet;

                    /**
                     * <p>Base64-encoded image data. The maximum body size is 10 MB.</p>
                     */
                    std::string m_imageEncode;
                    bool m_imageEncodeHasBeenSet;

                    /**
                     * <p>Tool name in the tool_call scenario</p>
                     */
                    std::string m_toolName;
                    bool m_toolNameHasBeenSet;

                    /**
                     * <p>Tool parameters in the tool_call scenario</p>
                     */
                    std::string m_toolArgs;
                    bool m_toolArgsHasBeenSet;

                    /**
                     * <p>id of the multi-turn conversation</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Request content for intent detection</p>
                     */
                    IntentContent m_intentContent;
                    bool m_intentContentHasBeenSet;

                    /**
                     * <p>Client source IP address, used for allowlist matching and other scenarios. Supports IPv4 and IPv6 formats.</p>
                     */
                    std::string m_clientIP;
                    bool m_clientIPHasBeenSet;

                    /**
                     * Multi-turn historical user input, arranged from oldest to newest, used only for prompt injection detection
Input parameter limits: Up to 10 entries. If exceeded, only the latest 10 entries are retained. The combined length of History + Content cannot exceed 6K characters. If exceeded, the earliest History entries are discarded first.
                     */
                    std::vector<std::string> m_history;
                    bool m_historyHasBeenSet;

                    /**
                     * List of URLs to be detected, used for malicious URL detection
Input parameter limits: Up to 50 URLs. A single URL cannot exceed 2048 characters. If exceeded, it will be truncated.
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMCONTENTSECCHECKREQUEST_H_
