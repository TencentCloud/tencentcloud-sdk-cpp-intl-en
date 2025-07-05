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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAICALLREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAICALLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/AITransferItem.h>
#include <tencentcloud/ccc/v20200210/model/Variable.h>
#include <tencentcloud/ccc/v20200210/model/AICallExtractConfigElement.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CreateAICall request structure.
                */
                class CreateAICallRequest : public AbstractModel
                {
                public:
                    CreateAICallRequest();
                    ~CreateAICallRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Called number.
                     * @return Callee Called number.
                     * 
                     */
                    std::string GetCallee() const;

                    /**
                     * 设置Called number.
                     * @param _callee Called number.
                     * 
                     */
                    void SetCallee(const std::string& _callee);

                    /**
                     * 判断参数 Callee 是否已赋值
                     * @return Callee 是否已赋值
                     * 
                     */
                    bool CalleeHasBeenSet() const;

                    /**
                     * 获取Model API protocol type. currently compatible with four protocol types:.

-OpenAI protocol (including GPT, hunyuan, DeepSeek, etc.): "OpenAI".
-Azure protocol: "azure".
-Specifies the "Minimax" protocol.
-Dify protocol: "dify".
                     * @return LLMType Model API protocol type. currently compatible with four protocol types:.

-OpenAI protocol (including GPT, hunyuan, DeepSeek, etc.): "OpenAI".
-Azure protocol: "azure".
-Specifies the "Minimax" protocol.
-Dify protocol: "dify".
                     * 
                     */
                    std::string GetLLMType() const;

                    /**
                     * 设置Model API protocol type. currently compatible with four protocol types:.

-OpenAI protocol (including GPT, hunyuan, DeepSeek, etc.): "OpenAI".
-Azure protocol: "azure".
-Specifies the "Minimax" protocol.
-Dify protocol: "dify".
                     * @param _lLMType Model API protocol type. currently compatible with four protocol types:.

-OpenAI protocol (including GPT, hunyuan, DeepSeek, etc.): "OpenAI".
-Azure protocol: "azure".
-Specifies the "Minimax" protocol.
-Dify protocol: "dify".
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
                     * 获取Model API key, for authentication information, please refer to the respective model's official website

- OpenAI protocol: [GPT](https://help.openai.com/en/articles/4936850-where-do-i-find-my-openai-api-key), [DeepSeek](https://api-docs.deepseek.com/zh-cn/);

- Azure protocol: [Azure GPT](https://learn.microsoft.com/en-us/azure/ai-services/openai/chatgpt-quickstart?tabs=command-line%2Ctypescript%2Cpython-new&pivots=programming-language-studio#key-settings);

- Minimax:[Minimax](https://platform.minimaxi.com/document/Fast%20access?key=66701cf51d57f38758d581b2)
                     * @return APIKey Model API key, for authentication information, please refer to the respective model's official website

- OpenAI protocol: [GPT](https://help.openai.com/en/articles/4936850-where-do-i-find-my-openai-api-key), [DeepSeek](https://api-docs.deepseek.com/zh-cn/);

- Azure protocol: [Azure GPT](https://learn.microsoft.com/en-us/azure/ai-services/openai/chatgpt-quickstart?tabs=command-line%2Ctypescript%2Cpython-new&pivots=programming-language-studio#key-settings);

- Minimax:[Minimax](https://platform.minimaxi.com/document/Fast%20access?key=66701cf51d57f38758d581b2)
                     * 
                     */
                    std::string GetAPIKey() const;

                    /**
                     * 设置Model API key, for authentication information, please refer to the respective model's official website

- OpenAI protocol: [GPT](https://help.openai.com/en/articles/4936850-where-do-i-find-my-openai-api-key), [DeepSeek](https://api-docs.deepseek.com/zh-cn/);

- Azure protocol: [Azure GPT](https://learn.microsoft.com/en-us/azure/ai-services/openai/chatgpt-quickstart?tabs=command-line%2Ctypescript%2Cpython-new&pivots=programming-language-studio#key-settings);

- Minimax:[Minimax](https://platform.minimaxi.com/document/Fast%20access?key=66701cf51d57f38758d581b2)
                     * @param _aPIKey Model API key, for authentication information, please refer to the respective model's official website

- OpenAI protocol: [GPT](https://help.openai.com/en/articles/4936850-where-do-i-find-my-openai-api-key), [DeepSeek](https://api-docs.deepseek.com/zh-cn/);

- Azure protocol: [Azure GPT](https://learn.microsoft.com/en-us/azure/ai-services/openai/chatgpt-quickstart?tabs=command-line%2Ctypescript%2Cpython-new&pivots=programming-language-studio#key-settings);

- Minimax:[Minimax](https://platform.minimaxi.com/document/Fast%20access?key=66701cf51d57f38758d581b2)
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
                     * 获取Model interface address

- OpenAI protocol
GPT:"https://api.openai.com/v1/"
Deepseek:"https://api.deepseek.com/v1"

- Azure protocol
 "https://{your-resource-name}.openai.azure.com?api-version={api-version}"

- Minimax protocol
"https://api.minimax.chat/v1"
                     * @return APIUrl Model interface address

- OpenAI protocol
GPT:"https://api.openai.com/v1/"
Deepseek:"https://api.deepseek.com/v1"

- Azure protocol
 "https://{your-resource-name}.openai.azure.com?api-version={api-version}"

- Minimax protocol
"https://api.minimax.chat/v1"
                     * 
                     */
                    std::string GetAPIUrl() const;

                    /**
                     * 设置Model interface address

- OpenAI protocol
GPT:"https://api.openai.com/v1/"
Deepseek:"https://api.deepseek.com/v1"

- Azure protocol
 "https://{your-resource-name}.openai.azure.com?api-version={api-version}"

- Minimax protocol
"https://api.minimax.chat/v1"
                     * @param _aPIUrl Model interface address

- OpenAI protocol
GPT:"https://api.openai.com/v1/"
Deepseek:"https://api.deepseek.com/v1"

- Azure protocol
 "https://{your-resource-name}.openai.azure.com?api-version={api-version}"

- Minimax protocol
"https://api.minimax.chat/v1"
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
                     * 获取## Identity
You are Kate from the appointment department at Retell Health calling Cindy over the phone to prepare for the annual checkup coming up. You are a pleasant and friendly receptionist caring deeply for the user. You don't provide medical advice but would use the medical knowledge to understand user responses.

## Style Guardrails
Be Concise: Respond succinctly, addressing one topic at most.
Embrace Variety: Use diverse language and rephrasing to enhance clarity without repeating content.
Be Conversational: Use everyday language, making the chat feel like talking to a friend.
Be Proactive: Lead the conversation, often wrapping up with a question or next-step suggestion.
Avoid multiple questions in a single response.
Get clarity: If the user only partially answers a question, or if the answer is unclear, keep asking to get clarity.
Use a colloquial way of referring to the date (like Friday, January 14th, or Tuesday, January 12th, 2024 at 8am).

## Response Guideline
Adapt and Guess: Try to understand transcripts that may contain transcription errors. Avoid mentioning "transcription error" in the response.
Stay in Character: Keep conversations within your role's scope, guiding them back creatively without repeating.
Ensure Fluid Dialogue: Respond in a role-appropriate, direct manner to maintain a smooth conversation flow.

## Task
You will follow the steps below, do not skip steps, and only ask up to one question in response.
If at any time the user showed anger or wanted a human agent, call transfer_call to transfer to a human representative.
1. Begin with a self-introduction and verify if callee is Cindy.
  - if callee is not Cindy, call end_call to hang up, say sorry for the confusion when hanging up.
  - if Cindy is not available, call end_call politely to hang up, say you will call back later when hanging up.
2. Inform Cindy she has an annual body check coming up on April 4th, 2024 at 10am PDT. Check if Cindy is available.
  - If not, tell Cindy to reschedule online and jump to step 5.
3. Ask Cindy if there's anything that the doctor should know before the annual checkup.
  - Ask followup questions as needed to assess the severity of the issue, and understand how it has progressed.
4. Tell Cindy to not eat or drink that day before the checkup. Also tell Cindy to give you a callback if there's any changes in health condition.
5. Ask Cindy if she has any questions, and if so, answer them until there are no questions.
  - If user asks something you do not know, let them know you don't have the answer. Ask them if they have any other questions.
  - If user do not have any questions, call function end_call to hang up.
                     * @return SystemPrompt ## Identity
You are Kate from the appointment department at Retell Health calling Cindy over the phone to prepare for the annual checkup coming up. You are a pleasant and friendly receptionist caring deeply for the user. You don't provide medical advice but would use the medical knowledge to understand user responses.

## Style Guardrails
Be Concise: Respond succinctly, addressing one topic at most.
Embrace Variety: Use diverse language and rephrasing to enhance clarity without repeating content.
Be Conversational: Use everyday language, making the chat feel like talking to a friend.
Be Proactive: Lead the conversation, often wrapping up with a question or next-step suggestion.
Avoid multiple questions in a single response.
Get clarity: If the user only partially answers a question, or if the answer is unclear, keep asking to get clarity.
Use a colloquial way of referring to the date (like Friday, January 14th, or Tuesday, January 12th, 2024 at 8am).

## Response Guideline
Adapt and Guess: Try to understand transcripts that may contain transcription errors. Avoid mentioning "transcription error" in the response.
Stay in Character: Keep conversations within your role's scope, guiding them back creatively without repeating.
Ensure Fluid Dialogue: Respond in a role-appropriate, direct manner to maintain a smooth conversation flow.

## Task
You will follow the steps below, do not skip steps, and only ask up to one question in response.
If at any time the user showed anger or wanted a human agent, call transfer_call to transfer to a human representative.
1. Begin with a self-introduction and verify if callee is Cindy.
  - if callee is not Cindy, call end_call to hang up, say sorry for the confusion when hanging up.
  - if Cindy is not available, call end_call politely to hang up, say you will call back later when hanging up.
2. Inform Cindy she has an annual body check coming up on April 4th, 2024 at 10am PDT. Check if Cindy is available.
  - If not, tell Cindy to reschedule online and jump to step 5.
3. Ask Cindy if there's anything that the doctor should know before the annual checkup.
  - Ask followup questions as needed to assess the severity of the issue, and understand how it has progressed.
4. Tell Cindy to not eat or drink that day before the checkup. Also tell Cindy to give you a callback if there's any changes in health condition.
5. Ask Cindy if she has any questions, and if so, answer them until there are no questions.
  - If user asks something you do not know, let them know you don't have the answer. Ask them if they have any other questions.
  - If user do not have any questions, call function end_call to hang up.
                     * 
                     */
                    std::string GetSystemPrompt() const;

                    /**
                     * 设置## Identity
You are Kate from the appointment department at Retell Health calling Cindy over the phone to prepare for the annual checkup coming up. You are a pleasant and friendly receptionist caring deeply for the user. You don't provide medical advice but would use the medical knowledge to understand user responses.

## Style Guardrails
Be Concise: Respond succinctly, addressing one topic at most.
Embrace Variety: Use diverse language and rephrasing to enhance clarity without repeating content.
Be Conversational: Use everyday language, making the chat feel like talking to a friend.
Be Proactive: Lead the conversation, often wrapping up with a question or next-step suggestion.
Avoid multiple questions in a single response.
Get clarity: If the user only partially answers a question, or if the answer is unclear, keep asking to get clarity.
Use a colloquial way of referring to the date (like Friday, January 14th, or Tuesday, January 12th, 2024 at 8am).

## Response Guideline
Adapt and Guess: Try to understand transcripts that may contain transcription errors. Avoid mentioning "transcription error" in the response.
Stay in Character: Keep conversations within your role's scope, guiding them back creatively without repeating.
Ensure Fluid Dialogue: Respond in a role-appropriate, direct manner to maintain a smooth conversation flow.

## Task
You will follow the steps below, do not skip steps, and only ask up to one question in response.
If at any time the user showed anger or wanted a human agent, call transfer_call to transfer to a human representative.
1. Begin with a self-introduction and verify if callee is Cindy.
  - if callee is not Cindy, call end_call to hang up, say sorry for the confusion when hanging up.
  - if Cindy is not available, call end_call politely to hang up, say you will call back later when hanging up.
2. Inform Cindy she has an annual body check coming up on April 4th, 2024 at 10am PDT. Check if Cindy is available.
  - If not, tell Cindy to reschedule online and jump to step 5.
3. Ask Cindy if there's anything that the doctor should know before the annual checkup.
  - Ask followup questions as needed to assess the severity of the issue, and understand how it has progressed.
4. Tell Cindy to not eat or drink that day before the checkup. Also tell Cindy to give you a callback if there's any changes in health condition.
5. Ask Cindy if she has any questions, and if so, answer them until there are no questions.
  - If user asks something you do not know, let them know you don't have the answer. Ask them if they have any other questions.
  - If user do not have any questions, call function end_call to hang up.
                     * @param _systemPrompt ## Identity
You are Kate from the appointment department at Retell Health calling Cindy over the phone to prepare for the annual checkup coming up. You are a pleasant and friendly receptionist caring deeply for the user. You don't provide medical advice but would use the medical knowledge to understand user responses.

## Style Guardrails
Be Concise: Respond succinctly, addressing one topic at most.
Embrace Variety: Use diverse language and rephrasing to enhance clarity without repeating content.
Be Conversational: Use everyday language, making the chat feel like talking to a friend.
Be Proactive: Lead the conversation, often wrapping up with a question or next-step suggestion.
Avoid multiple questions in a single response.
Get clarity: If the user only partially answers a question, or if the answer is unclear, keep asking to get clarity.
Use a colloquial way of referring to the date (like Friday, January 14th, or Tuesday, January 12th, 2024 at 8am).

## Response Guideline
Adapt and Guess: Try to understand transcripts that may contain transcription errors. Avoid mentioning "transcription error" in the response.
Stay in Character: Keep conversations within your role's scope, guiding them back creatively without repeating.
Ensure Fluid Dialogue: Respond in a role-appropriate, direct manner to maintain a smooth conversation flow.

## Task
You will follow the steps below, do not skip steps, and only ask up to one question in response.
If at any time the user showed anger or wanted a human agent, call transfer_call to transfer to a human representative.
1. Begin with a self-introduction and verify if callee is Cindy.
  - if callee is not Cindy, call end_call to hang up, say sorry for the confusion when hanging up.
  - if Cindy is not available, call end_call politely to hang up, say you will call back later when hanging up.
2. Inform Cindy she has an annual body check coming up on April 4th, 2024 at 10am PDT. Check if Cindy is available.
  - If not, tell Cindy to reschedule online and jump to step 5.
3. Ask Cindy if there's anything that the doctor should know before the annual checkup.
  - Ask followup questions as needed to assess the severity of the issue, and understand how it has progressed.
4. Tell Cindy to not eat or drink that day before the checkup. Also tell Cindy to give you a callback if there's any changes in health condition.
5. Ask Cindy if she has any questions, and if so, answer them until there are no questions.
  - If user asks something you do not know, let them know you don't have the answer. Ask them if they have any other questions.
  - If user do not have any questions, call function end_call to hang up.
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
                     * 获取Model name, such as

- OpenAI protocol
"gpt-4o-mini","gpt-4o","deepseek-chat";

- Azure protocol
"gpt-4o-mini", "gpt-4o";

- Minimax protocol
"deepseek-chat".
                     * @return Model Model name, such as

- OpenAI protocol
"gpt-4o-mini","gpt-4o","deepseek-chat";

- Azure protocol
"gpt-4o-mini", "gpt-4o";

- Minimax protocol
"deepseek-chat".
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置Model name, such as

- OpenAI protocol
"gpt-4o-mini","gpt-4o","deepseek-chat";

- Azure protocol
"gpt-4o-mini", "gpt-4o";

- Minimax protocol
"deepseek-chat".
                     * @param _model Model name, such as

- OpenAI protocol
"gpt-4o-mini","gpt-4o","deepseek-chat";

- Azure protocol
"gpt-4o-mini", "gpt-4o";

- Minimax protocol
"deepseek-chat".
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
                     * 获取The following voice parameter values are available by default. If you wish to customize the voice type, please leave VoiceType blank and configure it in the CustomTTSConfig parameter.

Chinese:
ZhiMei: Zhimei, customer service female voice
ZhiXi: Zhixi, general female voice
ZhiQi: Zhiqi, customer service female voice
ZhiTian: Zhitian, female child voice
AiXiaoJing: Ai Xiaojing, dialogue female voice

English:
WeRose:English Female Voice
Monika:English Female Voice

Japanese:
Nanami

Korean:
SunHi

Indonesian (Indonesia):
Gadis

Malay (Malaysia):
Yasmin

 Tamil (Malaysia):
Kani

Thai (Thailand):
Achara

Vietnamese (Vietnam):
HoaiMy


                     * @return VoiceType The following voice parameter values are available by default. If you wish to customize the voice type, please leave VoiceType blank and configure it in the CustomTTSConfig parameter.

Chinese:
ZhiMei: Zhimei, customer service female voice
ZhiXi: Zhixi, general female voice
ZhiQi: Zhiqi, customer service female voice
ZhiTian: Zhitian, female child voice
AiXiaoJing: Ai Xiaojing, dialogue female voice

English:
WeRose:English Female Voice
Monika:English Female Voice

Japanese:
Nanami

Korean:
SunHi

Indonesian (Indonesia):
Gadis

Malay (Malaysia):
Yasmin

 Tamil (Malaysia):
Kani

Thai (Thailand):
Achara

Vietnamese (Vietnam):
HoaiMy


                     * 
                     */
                    std::string GetVoiceType() const;

                    /**
                     * 设置The following voice parameter values are available by default. If you wish to customize the voice type, please leave VoiceType blank and configure it in the CustomTTSConfig parameter.

Chinese:
ZhiMei: Zhimei, customer service female voice
ZhiXi: Zhixi, general female voice
ZhiQi: Zhiqi, customer service female voice
ZhiTian: Zhitian, female child voice
AiXiaoJing: Ai Xiaojing, dialogue female voice

English:
WeRose:English Female Voice
Monika:English Female Voice

Japanese:
Nanami

Korean:
SunHi

Indonesian (Indonesia):
Gadis

Malay (Malaysia):
Yasmin

 Tamil (Malaysia):
Kani

Thai (Thailand):
Achara

Vietnamese (Vietnam):
HoaiMy


                     * @param _voiceType The following voice parameter values are available by default. If you wish to customize the voice type, please leave VoiceType blank and configure it in the CustomTTSConfig parameter.

Chinese:
ZhiMei: Zhimei, customer service female voice
ZhiXi: Zhixi, general female voice
ZhiQi: Zhiqi, customer service female voice
ZhiTian: Zhitian, female child voice
AiXiaoJing: Ai Xiaojing, dialogue female voice

English:
WeRose:English Female Voice
Monika:English Female Voice

Japanese:
Nanami

Korean:
SunHi

Indonesian (Indonesia):
Gadis

Malay (Malaysia):
Yasmin

 Tamil (Malaysia):
Kani

Thai (Thailand):
Achara

Vietnamese (Vietnam):
HoaiMy


                     * 
                     */
                    void SetVoiceType(const std::string& _voiceType);

                    /**
                     * 判断参数 VoiceType 是否已赋值
                     * @return VoiceType 是否已赋值
                     * 
                     */
                    bool VoiceTypeHasBeenSet() const;

                    /**
                     * 获取Caller number list
                     * @return Callers Caller number list
                     * 
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 设置Caller number list
                     * @param _callers Caller number list
                     * 
                     */
                    void SetCallers(const std::vector<std::string>& _callers);

                    /**
                     * 判断参数 Callers 是否已赋值
                     * @return Callers 是否已赋值
                     * 
                     */
                    bool CallersHasBeenSet() const;

                    /**
                     * 获取Used to set the AI Agent Welcome Message.
                     * @return WelcomeMessage Used to set the AI Agent Welcome Message.
                     * 
                     */
                    std::string GetWelcomeMessage() const;

                    /**
                     * 设置Used to set the AI Agent Welcome Message.
                     * @param _welcomeMessage Used to set the AI Agent Welcome Message.
                     * 
                     */
                    void SetWelcomeMessage(const std::string& _welcomeMessage);

                    /**
                     * 判断参数 WelcomeMessage 是否已赋值
                     * @return WelcomeMessage 是否已赋值
                     * 
                     */
                    bool WelcomeMessageHasBeenSet() const;

                    /**
                     * 获取0: Use welcomeMessage (if empty, the callee speaks first; if not empty, the bot speaks first)
1:   Use AI to automatically generate welcomeMessage and speak first based on the prompt
                     * @return WelcomeType 0: Use welcomeMessage (if empty, the callee speaks first; if not empty, the bot speaks first)
1:   Use AI to automatically generate welcomeMessage and speak first based on the prompt
                     * 
                     */
                    int64_t GetWelcomeType() const;

                    /**
                     * 设置0: Use welcomeMessage (if empty, the callee speaks first; if not empty, the bot speaks first)
1:   Use AI to automatically generate welcomeMessage and speak first based on the prompt
                     * @param _welcomeType 0: Use welcomeMessage (if empty, the callee speaks first; if not empty, the bot speaks first)
1:   Use AI to automatically generate welcomeMessage and speak first based on the prompt
                     * 
                     */
                    void SetWelcomeType(const int64_t& _welcomeType);

                    /**
                     * 判断参数 WelcomeType 是否已赋值
                     * @return WelcomeType 是否已赋值
                     * 
                     */
                    bool WelcomeTypeHasBeenSet() const;

                    /**
                     * 获取0: interruptible by default, 1: high priority and not interruptible.
                     * @return WelcomeMessagePriority 0: interruptible by default, 1: high priority and not interruptible.
                     * 
                     */
                    int64_t GetWelcomeMessagePriority() const;

                    /**
                     * 设置0: interruptible by default, 1: high priority and not interruptible.
                     * @param _welcomeMessagePriority 0: interruptible by default, 1: high priority and not interruptible.
                     * 
                     */
                    void SetWelcomeMessagePriority(const int64_t& _welcomeMessagePriority);

                    /**
                     * 判断参数 WelcomeMessagePriority 是否已赋值
                     * @return WelcomeMessagePriority 是否已赋值
                     * 
                     */
                    bool WelcomeMessagePriorityHasBeenSet() const;

                    /**
                     * 获取Maximum Waiting Duration (milliseconds), default is 60 seconds, if the user does not speak within this time, the call is automatically terminated
                     * @return MaxDuration Maximum Waiting Duration (milliseconds), default is 60 seconds, if the user does not speak within this time, the call is automatically terminated
                     * 
                     */
                    int64_t GetMaxDuration() const;

                    /**
                     * 设置Maximum Waiting Duration (milliseconds), default is 60 seconds, if the user does not speak within this time, the call is automatically terminated
                     * @param _maxDuration Maximum Waiting Duration (milliseconds), default is 60 seconds, if the user does not speak within this time, the call is automatically terminated
                     * 
                     */
                    void SetMaxDuration(const int64_t& _maxDuration);

                    /**
                     * 判断参数 MaxDuration 是否已赋值
                     * @return MaxDuration 是否已赋值
                     * 
                     */
                    bool MaxDurationHasBeenSet() const;

                    /**
                     * 获取ASR Supported Languages, default is "zh" Chinese,
Fill in the array with up to 4 languages, the first is the primary language for recognition, followed by optional languages,
Note: When the primary language is a Chinese dialect, optional languages are invalid
Currently, the supported languages are as follows. The English name of the language is on the left side of the equals sign, and the value to be filled in the Language field is on the right side, following ISO639:
1. Chinese = "zh" # Chinese
2. Chinese_TW = "zh-TW" # Taiwan (China)
3. Chinese_DIALECT = "zh-dialect" # Chinese Dialect
4. English = "en" # English
5. Vietnamese = "vi" # Vietnamese
6. Japanese = "ja" # Japanese
7. Korean = "ko" # Korean
8. Indonesia = "id" # Indonesian
9. Thai = "th" # Thai
10. Portuguese = "pt" # Portuguese
11. Turkish = "tr" # Turkish
12. Arabic = "ar" # Arabic
13. Spanish = "es" # Spanish
14. Hindi = "hi" # Hindi
15. French = "fr" # French
16. Malay = "ms" # Malay
17. Filipino = "fil" # Filipino
18. German = "de" # German
19. Italian = "it" # Italian
20. Russian = "ru" # Russian
                     * @return Languages ASR Supported Languages, default is "zh" Chinese,
Fill in the array with up to 4 languages, the first is the primary language for recognition, followed by optional languages,
Note: When the primary language is a Chinese dialect, optional languages are invalid
Currently, the supported languages are as follows. The English name of the language is on the left side of the equals sign, and the value to be filled in the Language field is on the right side, following ISO639:
1. Chinese = "zh" # Chinese
2. Chinese_TW = "zh-TW" # Taiwan (China)
3. Chinese_DIALECT = "zh-dialect" # Chinese Dialect
4. English = "en" # English
5. Vietnamese = "vi" # Vietnamese
6. Japanese = "ja" # Japanese
7. Korean = "ko" # Korean
8. Indonesia = "id" # Indonesian
9. Thai = "th" # Thai
10. Portuguese = "pt" # Portuguese
11. Turkish = "tr" # Turkish
12. Arabic = "ar" # Arabic
13. Spanish = "es" # Spanish
14. Hindi = "hi" # Hindi
15. French = "fr" # French
16. Malay = "ms" # Malay
17. Filipino = "fil" # Filipino
18. German = "de" # German
19. Italian = "it" # Italian
20. Russian = "ru" # Russian
                     * 
                     */
                    std::vector<std::string> GetLanguages() const;

                    /**
                     * 设置ASR Supported Languages, default is "zh" Chinese,
Fill in the array with up to 4 languages, the first is the primary language for recognition, followed by optional languages,
Note: When the primary language is a Chinese dialect, optional languages are invalid
Currently, the supported languages are as follows. The English name of the language is on the left side of the equals sign, and the value to be filled in the Language field is on the right side, following ISO639:
1. Chinese = "zh" # Chinese
2. Chinese_TW = "zh-TW" # Taiwan (China)
3. Chinese_DIALECT = "zh-dialect" # Chinese Dialect
4. English = "en" # English
5. Vietnamese = "vi" # Vietnamese
6. Japanese = "ja" # Japanese
7. Korean = "ko" # Korean
8. Indonesia = "id" # Indonesian
9. Thai = "th" # Thai
10. Portuguese = "pt" # Portuguese
11. Turkish = "tr" # Turkish
12. Arabic = "ar" # Arabic
13. Spanish = "es" # Spanish
14. Hindi = "hi" # Hindi
15. French = "fr" # French
16. Malay = "ms" # Malay
17. Filipino = "fil" # Filipino
18. German = "de" # German
19. Italian = "it" # Italian
20. Russian = "ru" # Russian
                     * @param _languages ASR Supported Languages, default is "zh" Chinese,
Fill in the array with up to 4 languages, the first is the primary language for recognition, followed by optional languages,
Note: When the primary language is a Chinese dialect, optional languages are invalid
Currently, the supported languages are as follows. The English name of the language is on the left side of the equals sign, and the value to be filled in the Language field is on the right side, following ISO639:
1. Chinese = "zh" # Chinese
2. Chinese_TW = "zh-TW" # Taiwan (China)
3. Chinese_DIALECT = "zh-dialect" # Chinese Dialect
4. English = "en" # English
5. Vietnamese = "vi" # Vietnamese
6. Japanese = "ja" # Japanese
7. Korean = "ko" # Korean
8. Indonesia = "id" # Indonesian
9. Thai = "th" # Thai
10. Portuguese = "pt" # Portuguese
11. Turkish = "tr" # Turkish
12. Arabic = "ar" # Arabic
13. Spanish = "es" # Spanish
14. Hindi = "hi" # Hindi
15. French = "fr" # French
16. Malay = "ms" # Malay
17. Filipino = "fil" # Filipino
18. German = "de" # German
19. Italian = "it" # Italian
20. Russian = "ru" # Russian
                     * 
                     */
                    void SetLanguages(const std::vector<std::string>& _languages);

                    /**
                     * 判断参数 Languages 是否已赋值
                     * @return Languages 是否已赋值
                     * 
                     */
                    bool LanguagesHasBeenSet() const;

                    /**
                     * 获取Interrupt ai speaking mode. default is 0. 0 indicates automatic interruption and 1 indicates no interruption.
                     * @return InterruptMode Interrupt ai speaking mode. default is 0. 0 indicates automatic interruption and 1 indicates no interruption.
                     * 
                     */
                    int64_t GetInterruptMode() const;

                    /**
                     * 设置Interrupt ai speaking mode. default is 0. 0 indicates automatic interruption and 1 indicates no interruption.
                     * @param _interruptMode Interrupt ai speaking mode. default is 0. 0 indicates automatic interruption and 1 indicates no interruption.
                     * 
                     */
                    void SetInterruptMode(const int64_t& _interruptMode);

                    /**
                     * 判断参数 InterruptMode 是否已赋值
                     * @return InterruptMode 是否已赋值
                     * 
                     */
                    bool InterruptModeHasBeenSet() const;

                    /**
                     * 获取Used when InterruptMode is 0, unit in milliseconds, default is 500ms. It means that the server-side detects ongoing vocal input for the InterruptSpeechDuration milliseconds and then interrupts.
                     * @return InterruptSpeechDuration Used when InterruptMode is 0, unit in milliseconds, default is 500ms. It means that the server-side detects ongoing vocal input for the InterruptSpeechDuration milliseconds and then interrupts.
                     * 
                     */
                    int64_t GetInterruptSpeechDuration() const;

                    /**
                     * 设置Used when InterruptMode is 0, unit in milliseconds, default is 500ms. It means that the server-side detects ongoing vocal input for the InterruptSpeechDuration milliseconds and then interrupts.
                     * @param _interruptSpeechDuration Used when InterruptMode is 0, unit in milliseconds, default is 500ms. It means that the server-side detects ongoing vocal input for the InterruptSpeechDuration milliseconds and then interrupts.
                     * 
                     */
                    void SetInterruptSpeechDuration(const int64_t& _interruptSpeechDuration);

                    /**
                     * 判断参数 InterruptSpeechDuration 是否已赋值
                     * @return InterruptSpeechDuration 是否已赋值
                     * 
                     */
                    bool InterruptSpeechDurationHasBeenSet() const;

                    /**
                     * 获取Whether the model supports (or enables) call_end function calling
                     * @return EndFunctionEnable Whether the model supports (or enables) call_end function calling
                     * 
                     */
                    bool GetEndFunctionEnable() const;

                    /**
                     * 设置Whether the model supports (or enables) call_end function calling
                     * @param _endFunctionEnable Whether the model supports (or enables) call_end function calling
                     * 
                     */
                    void SetEndFunctionEnable(const bool& _endFunctionEnable);

                    /**
                     * 判断参数 EndFunctionEnable 是否已赋值
                     * @return EndFunctionEnable 是否已赋值
                     * 
                     */
                    bool EndFunctionEnableHasBeenSet() const;

                    /**
                     * 获取Effective when EndFunctionEnable is true; the description of call_end function calling, default is "End the call when user has to leave (like says bye) or you are instructed to do so."
                     * @return EndFunctionDesc Effective when EndFunctionEnable is true; the description of call_end function calling, default is "End the call when user has to leave (like says bye) or you are instructed to do so."
                     * 
                     */
                    std::string GetEndFunctionDesc() const;

                    /**
                     * 设置Effective when EndFunctionEnable is true; the description of call_end function calling, default is "End the call when user has to leave (like says bye) or you are instructed to do so."
                     * @param _endFunctionDesc Effective when EndFunctionEnable is true; the description of call_end function calling, default is "End the call when user has to leave (like says bye) or you are instructed to do so."
                     * 
                     */
                    void SetEndFunctionDesc(const std::string& _endFunctionDesc);

                    /**
                     * 判断参数 EndFunctionDesc 是否已赋值
                     * @return EndFunctionDesc 是否已赋值
                     * 
                     */
                    bool EndFunctionDescHasBeenSet() const;

                    /**
                     * 获取Whether the model supports (or enables) transfer_to_human function calling.
                     * @return TransferFunctionEnable Whether the model supports (or enables) transfer_to_human function calling.
                     * 
                     */
                    bool GetTransferFunctionEnable() const;

                    /**
                     * 设置Whether the model supports (or enables) transfer_to_human function calling.
                     * @param _transferFunctionEnable Whether the model supports (or enables) transfer_to_human function calling.
                     * 
                     */
                    void SetTransferFunctionEnable(const bool& _transferFunctionEnable);

                    /**
                     * 判断参数 TransferFunctionEnable 是否已赋值
                     * @return TransferFunctionEnable 是否已赋值
                     * 
                     */
                    bool TransferFunctionEnableHasBeenSet() const;

                    /**
                     * 获取Takes effect when transferfunctionenable is true: transfer to human configuration.
                     * @return TransferItems Takes effect when transferfunctionenable is true: transfer to human configuration.
                     * 
                     */
                    std::vector<AITransferItem> GetTransferItems() const;

                    /**
                     * 设置Takes effect when transferfunctionenable is true: transfer to human configuration.
                     * @param _transferItems Takes effect when transferfunctionenable is true: transfer to human configuration.
                     * 
                     */
                    void SetTransferItems(const std::vector<AITransferItem>& _transferItems);

                    /**
                     * 判断参数 TransferItems 是否已赋值
                     * @return TransferItems 是否已赋值
                     * 
                     */
                    bool TransferItemsHasBeenSet() const;

                    /**
                     * 获取The duration after which the user hasn't spoken to trigger a notification, minimum 10 seconds, default 10 seconds
                     * @return NotifyDuration The duration after which the user hasn't spoken to trigger a notification, minimum 10 seconds, default 10 seconds
                     * 
                     */
                    int64_t GetNotifyDuration() const;

                    /**
                     * 设置The duration after which the user hasn't spoken to trigger a notification, minimum 10 seconds, default 10 seconds
                     * @param _notifyDuration The duration after which the user hasn't spoken to trigger a notification, minimum 10 seconds, default 10 seconds
                     * 
                     */
                    void SetNotifyDuration(const int64_t& _notifyDuration);

                    /**
                     * 判断参数 NotifyDuration 是否已赋值
                     * @return NotifyDuration 是否已赋值
                     * 
                     */
                    bool NotifyDurationHasBeenSet() const;

                    /**
                     * 获取The AI prompt when NotifyDuration has passed without the user speaking, default is "Sorry, I didn't hear you clearly. Can you repeat that?"
                     * @return NotifyMessage The AI prompt when NotifyDuration has passed without the user speaking, default is "Sorry, I didn't hear you clearly. Can you repeat that?"
                     * 
                     */
                    std::string GetNotifyMessage() const;

                    /**
                     * 设置The AI prompt when NotifyDuration has passed without the user speaking, default is "Sorry, I didn't hear you clearly. Can you repeat that?"
                     * @param _notifyMessage The AI prompt when NotifyDuration has passed without the user speaking, default is "Sorry, I didn't hear you clearly. Can you repeat that?"
                     * 
                     */
                    void SetNotifyMessage(const std::string& _notifyMessage);

                    /**
                     * 判断参数 NotifyMessage 是否已赋值
                     * @return NotifyMessage 是否已赋值
                     * 
                     */
                    bool NotifyMessageHasBeenSet() const;

                    /**
                     * 获取Maximum number of times to trigger ai prompt sound, unlimited by default.
                     * @return NotifyMaxCount Maximum number of times to trigger ai prompt sound, unlimited by default.
                     * 
                     */
                    uint64_t GetNotifyMaxCount() const;

                    /**
                     * 设置Maximum number of times to trigger ai prompt sound, unlimited by default.
                     * @param _notifyMaxCount Maximum number of times to trigger ai prompt sound, unlimited by default.
                     * 
                     */
                    void SetNotifyMaxCount(const uint64_t& _notifyMaxCount);

                    /**
                     * 判断参数 NotifyMaxCount 是否已赋值
                     * @return NotifyMaxCount 是否已赋值
                     * 
                     */
                    bool NotifyMaxCountHasBeenSet() const;

                    /**
                     * 获取<p>And VoiceType field needs to select one, here is to use your own custom TTS, VoiceType is some built-in sound qualities</p>
<ul>
<li>Tencent TTS<br>
For configuration, please refer to <a href="https://intl.cloud.tencent.com/document/product/1073/92668?from_cn_redirect=1#55924b56-1a73-4663-a7a1-a8dd82d6e823" target="_blank">Tencent Cloud TTS documentation link</a></li>
</ul>
<div><div class="v-md-pre-wrapper copy-code-mode v-md-pre-wrapper- extra-class"><pre class="v-md-prism-"><code>{
    &quot;TTSType&quot;: &quot;tencent&quot;, // String TTS type, currently supports &quot;tencent&quot; and "minixmax", other vendors support in progress
    &quot;AppId&quot;: &quot;Your application ID&quot;, // String required
    &quot;SecretId&quot;: &quot;Your Secret ID&quot;, // String Required
    &quot;SecretKey&quot;:  &quot;Your Secret Key&quot;, // String Required
    &quot;VoiceType&quot;: 101001, // Integer Required, Sound quality ID, includes standard and premium sound quality. Premium sound quality is more realistic and differently priced than standard sound quality. See TTS billing overview for details. For the full list of sound quality IDs, see the TTS sound quality list.
    "Speed": 1.25, // Integer Optional, speech speed, range: [-2,6], corresponding to different speeds: -2: represents 0.6x -1: represents 0.8x 0: represents 1.0x (default) 1: represents 1.2x 2: represents 1.5x 6: represents 2.5x For more precise speed control, you can retain two decimal places, such as 0.5/1.25/2.81, etc. For parameter value to actual speed conversion, refer to Speed Conversion
    &quot;Volume&quot;: 5, // Integer Optional, Volume level, range: [0,10], corresponding to 11 levels of volume, default is 0, which represents normal volume.
    &quot;PrimaryLanguage&quot;: 1, // Integer Optional, Primary language 1- Chinese (default) 2- English 3- Japanese
    &quot;FastVoiceType&quot;: &quot;xxxx&quot;   // Optional parameter, Fast VRS parameter
  }
</code></pre>

  </div></div><ul>

</div></div><ul>
<li>Azure TTS<br>
For configuration, refer to the<a href="https://docs.azure.cn/zh-cn/ai-services/speech-service/speech-synthesis-markup-voice" target="_blank">Azure TTS documentation</a></li>
</ul>
<div><div class="v-md-pre-wrapper copy-code-mode v-md-pre-wrapper- extra-class"><pre class="v-md-prism-"><code>{
    &quot;TTSType&quot;: &quot;azure&quot;, // Required: String TTS type
    &quot;SubscriptionKey&quot;: &quot;xxxxxxxx&quot;, // Required: String subscription key
    &quot;Region&quot;: &quot;chinanorth3&quot;,  // Required: String subscription region
    &quot;VoiceName&quot;: &quot;zh-CN-XiaoxiaoNeural&quot;, // Required: String Timbre Name required
    &quot;Language&quot;: &quot;zh-CN&quot;, // Required: String Language for synthesis
    &quot;Rate&quot;: 1 // Optional: float Playback Speed 0.5-2 default is 1
}
</code></pre>

</div></div><ul>
<li>Custom</li>
</ul>
<p>TTS<br>
Please refer to the specific protocol standards in the <a href="https://doc.weixin.qq.com/doc/w3_ANQAiAbdAFwHILbJBmtSqSbV1WZ3L?scode=AJEAIQdfAAo5a1xajYANQAiAbdAFw" target="_blank">Tencent documentation</a></p>
<div><div class="v-md-pre-wrapper copy-code-mode v-md-pre-wrapper- extra-class"><pre class="v-md-prism-"><code>{
  &quot;TTSType&quot;: &quot;custom&quot;, // Required String
  &quot;APIKey&quot;: &quot;ApiKey&quot;, // Required String for Authentication
  &quot;APIUrl&quot;: &quot;http://0.0.0.0:8080/stream-audio&quot; // Required String, TTS API URL
  &quot;AudioFormat&quot;: &quot;wav&quot;, // String, optional, expected audio format, such as mp3, ogg_opus, pcm, wav, default is wav, currently only pcm and wav are supported,
  &quot;SampleRate&quot;: 16000,  // Integer, optional, audio sample rate, default is 16000 (16k), recommended value is 16000
  &quot;AudioChannel&quot;: 1,    // Integer, optional, number of audio channels, values: 1 or 2, default is 1
}
</code></pre>

</div></div>
                     * @return CustomTTSConfig <p>And VoiceType field needs to select one, here is to use your own custom TTS, VoiceType is some built-in sound qualities</p>
<ul>
<li>Tencent TTS<br>
For configuration, please refer to <a href="https://intl.cloud.tencent.com/document/product/1073/92668?from_cn_redirect=1#55924b56-1a73-4663-a7a1-a8dd82d6e823" target="_blank">Tencent Cloud TTS documentation link</a></li>
</ul>
<div><div class="v-md-pre-wrapper copy-code-mode v-md-pre-wrapper- extra-class"><pre class="v-md-prism-"><code>{
    &quot;TTSType&quot;: &quot;tencent&quot;, // String TTS type, currently supports &quot;tencent&quot; and "minixmax", other vendors support in progress
    &quot;AppId&quot;: &quot;Your application ID&quot;, // String required
    &quot;SecretId&quot;: &quot;Your Secret ID&quot;, // String Required
    &quot;SecretKey&quot;:  &quot;Your Secret Key&quot;, // String Required
    &quot;VoiceType&quot;: 101001, // Integer Required, Sound quality ID, includes standard and premium sound quality. Premium sound quality is more realistic and differently priced than standard sound quality. See TTS billing overview for details. For the full list of sound quality IDs, see the TTS sound quality list.
    "Speed": 1.25, // Integer Optional, speech speed, range: [-2,6], corresponding to different speeds: -2: represents 0.6x -1: represents 0.8x 0: represents 1.0x (default) 1: represents 1.2x 2: represents 1.5x 6: represents 2.5x For more precise speed control, you can retain two decimal places, such as 0.5/1.25/2.81, etc. For parameter value to actual speed conversion, refer to Speed Conversion
    &quot;Volume&quot;: 5, // Integer Optional, Volume level, range: [0,10], corresponding to 11 levels of volume, default is 0, which represents normal volume.
    &quot;PrimaryLanguage&quot;: 1, // Integer Optional, Primary language 1- Chinese (default) 2- English 3- Japanese
    &quot;FastVoiceType&quot;: &quot;xxxx&quot;   // Optional parameter, Fast VRS parameter
  }
</code></pre>

  </div></div><ul>

</div></div><ul>
<li>Azure TTS<br>
For configuration, refer to the<a href="https://docs.azure.cn/zh-cn/ai-services/speech-service/speech-synthesis-markup-voice" target="_blank">Azure TTS documentation</a></li>
</ul>
<div><div class="v-md-pre-wrapper copy-code-mode v-md-pre-wrapper- extra-class"><pre class="v-md-prism-"><code>{
    &quot;TTSType&quot;: &quot;azure&quot;, // Required: String TTS type
    &quot;SubscriptionKey&quot;: &quot;xxxxxxxx&quot;, // Required: String subscription key
    &quot;Region&quot;: &quot;chinanorth3&quot;,  // Required: String subscription region
    &quot;VoiceName&quot;: &quot;zh-CN-XiaoxiaoNeural&quot;, // Required: String Timbre Name required
    &quot;Language&quot;: &quot;zh-CN&quot;, // Required: String Language for synthesis
    &quot;Rate&quot;: 1 // Optional: float Playback Speed 0.5-2 default is 1
}
</code></pre>

</div></div><ul>
<li>Custom</li>
</ul>
<p>TTS<br>
Please refer to the specific protocol standards in the <a href="https://doc.weixin.qq.com/doc/w3_ANQAiAbdAFwHILbJBmtSqSbV1WZ3L?scode=AJEAIQdfAAo5a1xajYANQAiAbdAFw" target="_blank">Tencent documentation</a></p>
<div><div class="v-md-pre-wrapper copy-code-mode v-md-pre-wrapper- extra-class"><pre class="v-md-prism-"><code>{
  &quot;TTSType&quot;: &quot;custom&quot;, // Required String
  &quot;APIKey&quot;: &quot;ApiKey&quot;, // Required String for Authentication
  &quot;APIUrl&quot;: &quot;http://0.0.0.0:8080/stream-audio&quot; // Required String, TTS API URL
  &quot;AudioFormat&quot;: &quot;wav&quot;, // String, optional, expected audio format, such as mp3, ogg_opus, pcm, wav, default is wav, currently only pcm and wav are supported,
  &quot;SampleRate&quot;: 16000,  // Integer, optional, audio sample rate, default is 16000 (16k), recommended value is 16000
  &quot;AudioChannel&quot;: 1,    // Integer, optional, number of audio channels, values: 1 or 2, default is 1
}
</code></pre>

</div></div>
                     * 
                     */
                    std::string GetCustomTTSConfig() const;

                    /**
                     * 设置<p>And VoiceType field needs to select one, here is to use your own custom TTS, VoiceType is some built-in sound qualities</p>
<ul>
<li>Tencent TTS<br>
For configuration, please refer to <a href="https://intl.cloud.tencent.com/document/product/1073/92668?from_cn_redirect=1#55924b56-1a73-4663-a7a1-a8dd82d6e823" target="_blank">Tencent Cloud TTS documentation link</a></li>
</ul>
<div><div class="v-md-pre-wrapper copy-code-mode v-md-pre-wrapper- extra-class"><pre class="v-md-prism-"><code>{
    &quot;TTSType&quot;: &quot;tencent&quot;, // String TTS type, currently supports &quot;tencent&quot; and "minixmax", other vendors support in progress
    &quot;AppId&quot;: &quot;Your application ID&quot;, // String required
    &quot;SecretId&quot;: &quot;Your Secret ID&quot;, // String Required
    &quot;SecretKey&quot;:  &quot;Your Secret Key&quot;, // String Required
    &quot;VoiceType&quot;: 101001, // Integer Required, Sound quality ID, includes standard and premium sound quality. Premium sound quality is more realistic and differently priced than standard sound quality. See TTS billing overview for details. For the full list of sound quality IDs, see the TTS sound quality list.
    "Speed": 1.25, // Integer Optional, speech speed, range: [-2,6], corresponding to different speeds: -2: represents 0.6x -1: represents 0.8x 0: represents 1.0x (default) 1: represents 1.2x 2: represents 1.5x 6: represents 2.5x For more precise speed control, you can retain two decimal places, such as 0.5/1.25/2.81, etc. For parameter value to actual speed conversion, refer to Speed Conversion
    &quot;Volume&quot;: 5, // Integer Optional, Volume level, range: [0,10], corresponding to 11 levels of volume, default is 0, which represents normal volume.
    &quot;PrimaryLanguage&quot;: 1, // Integer Optional, Primary language 1- Chinese (default) 2- English 3- Japanese
    &quot;FastVoiceType&quot;: &quot;xxxx&quot;   // Optional parameter, Fast VRS parameter
  }
</code></pre>

  </div></div><ul>

</div></div><ul>
<li>Azure TTS<br>
For configuration, refer to the<a href="https://docs.azure.cn/zh-cn/ai-services/speech-service/speech-synthesis-markup-voice" target="_blank">Azure TTS documentation</a></li>
</ul>
<div><div class="v-md-pre-wrapper copy-code-mode v-md-pre-wrapper- extra-class"><pre class="v-md-prism-"><code>{
    &quot;TTSType&quot;: &quot;azure&quot;, // Required: String TTS type
    &quot;SubscriptionKey&quot;: &quot;xxxxxxxx&quot;, // Required: String subscription key
    &quot;Region&quot;: &quot;chinanorth3&quot;,  // Required: String subscription region
    &quot;VoiceName&quot;: &quot;zh-CN-XiaoxiaoNeural&quot;, // Required: String Timbre Name required
    &quot;Language&quot;: &quot;zh-CN&quot;, // Required: String Language for synthesis
    &quot;Rate&quot;: 1 // Optional: float Playback Speed 0.5-2 default is 1
}
</code></pre>

</div></div><ul>
<li>Custom</li>
</ul>
<p>TTS<br>
Please refer to the specific protocol standards in the <a href="https://doc.weixin.qq.com/doc/w3_ANQAiAbdAFwHILbJBmtSqSbV1WZ3L?scode=AJEAIQdfAAo5a1xajYANQAiAbdAFw" target="_blank">Tencent documentation</a></p>
<div><div class="v-md-pre-wrapper copy-code-mode v-md-pre-wrapper- extra-class"><pre class="v-md-prism-"><code>{
  &quot;TTSType&quot;: &quot;custom&quot;, // Required String
  &quot;APIKey&quot;: &quot;ApiKey&quot;, // Required String for Authentication
  &quot;APIUrl&quot;: &quot;http://0.0.0.0:8080/stream-audio&quot; // Required String, TTS API URL
  &quot;AudioFormat&quot;: &quot;wav&quot;, // String, optional, expected audio format, such as mp3, ogg_opus, pcm, wav, default is wav, currently only pcm and wav are supported,
  &quot;SampleRate&quot;: 16000,  // Integer, optional, audio sample rate, default is 16000 (16k), recommended value is 16000
  &quot;AudioChannel&quot;: 1,    // Integer, optional, number of audio channels, values: 1 or 2, default is 1
}
</code></pre>

</div></div>
                     * @param _customTTSConfig <p>And VoiceType field needs to select one, here is to use your own custom TTS, VoiceType is some built-in sound qualities</p>
<ul>
<li>Tencent TTS<br>
For configuration, please refer to <a href="https://intl.cloud.tencent.com/document/product/1073/92668?from_cn_redirect=1#55924b56-1a73-4663-a7a1-a8dd82d6e823" target="_blank">Tencent Cloud TTS documentation link</a></li>
</ul>
<div><div class="v-md-pre-wrapper copy-code-mode v-md-pre-wrapper- extra-class"><pre class="v-md-prism-"><code>{
    &quot;TTSType&quot;: &quot;tencent&quot;, // String TTS type, currently supports &quot;tencent&quot; and "minixmax", other vendors support in progress
    &quot;AppId&quot;: &quot;Your application ID&quot;, // String required
    &quot;SecretId&quot;: &quot;Your Secret ID&quot;, // String Required
    &quot;SecretKey&quot;:  &quot;Your Secret Key&quot;, // String Required
    &quot;VoiceType&quot;: 101001, // Integer Required, Sound quality ID, includes standard and premium sound quality. Premium sound quality is more realistic and differently priced than standard sound quality. See TTS billing overview for details. For the full list of sound quality IDs, see the TTS sound quality list.
    "Speed": 1.25, // Integer Optional, speech speed, range: [-2,6], corresponding to different speeds: -2: represents 0.6x -1: represents 0.8x 0: represents 1.0x (default) 1: represents 1.2x 2: represents 1.5x 6: represents 2.5x For more precise speed control, you can retain two decimal places, such as 0.5/1.25/2.81, etc. For parameter value to actual speed conversion, refer to Speed Conversion
    &quot;Volume&quot;: 5, // Integer Optional, Volume level, range: [0,10], corresponding to 11 levels of volume, default is 0, which represents normal volume.
    &quot;PrimaryLanguage&quot;: 1, // Integer Optional, Primary language 1- Chinese (default) 2- English 3- Japanese
    &quot;FastVoiceType&quot;: &quot;xxxx&quot;   // Optional parameter, Fast VRS parameter
  }
</code></pre>

  </div></div><ul>

</div></div><ul>
<li>Azure TTS<br>
For configuration, refer to the<a href="https://docs.azure.cn/zh-cn/ai-services/speech-service/speech-synthesis-markup-voice" target="_blank">Azure TTS documentation</a></li>
</ul>
<div><div class="v-md-pre-wrapper copy-code-mode v-md-pre-wrapper- extra-class"><pre class="v-md-prism-"><code>{
    &quot;TTSType&quot;: &quot;azure&quot;, // Required: String TTS type
    &quot;SubscriptionKey&quot;: &quot;xxxxxxxx&quot;, // Required: String subscription key
    &quot;Region&quot;: &quot;chinanorth3&quot;,  // Required: String subscription region
    &quot;VoiceName&quot;: &quot;zh-CN-XiaoxiaoNeural&quot;, // Required: String Timbre Name required
    &quot;Language&quot;: &quot;zh-CN&quot;, // Required: String Language for synthesis
    &quot;Rate&quot;: 1 // Optional: float Playback Speed 0.5-2 default is 1
}
</code></pre>

</div></div><ul>
<li>Custom</li>
</ul>
<p>TTS<br>
Please refer to the specific protocol standards in the <a href="https://doc.weixin.qq.com/doc/w3_ANQAiAbdAFwHILbJBmtSqSbV1WZ3L?scode=AJEAIQdfAAo5a1xajYANQAiAbdAFw" target="_blank">Tencent documentation</a></p>
<div><div class="v-md-pre-wrapper copy-code-mode v-md-pre-wrapper- extra-class"><pre class="v-md-prism-"><code>{
  &quot;TTSType&quot;: &quot;custom&quot;, // Required String
  &quot;APIKey&quot;: &quot;ApiKey&quot;, // Required String for Authentication
  &quot;APIUrl&quot;: &quot;http://0.0.0.0:8080/stream-audio&quot; // Required String, TTS API URL
  &quot;AudioFormat&quot;: &quot;wav&quot;, // String, optional, expected audio format, such as mp3, ogg_opus, pcm, wav, default is wav, currently only pcm and wav are supported,
  &quot;SampleRate&quot;: 16000,  // Integer, optional, audio sample rate, default is 16000 (16k), recommended value is 16000
  &quot;AudioChannel&quot;: 1,    // Integer, optional, number of audio channels, values: 1 or 2, default is 1
}
</code></pre>

</div></div>
                     * 
                     */
                    void SetCustomTTSConfig(const std::string& _customTTSConfig);

                    /**
                     * 判断参数 CustomTTSConfig 是否已赋值
                     * @return CustomTTSConfig 是否已赋值
                     * 
                     */
                    bool CustomTTSConfigHasBeenSet() const;

                    /**
                     * 获取Prompt word variable.
                     * @return PromptVariables Prompt word variable.
                     * @deprecated
                     */
                    std::vector<Variable> GetPromptVariables() const;

                    /**
                     * 设置Prompt word variable.
                     * @param _promptVariables Prompt word variable.
                     * @deprecated
                     */
                    void SetPromptVariables(const std::vector<Variable>& _promptVariables);

                    /**
                     * 判断参数 PromptVariables 是否已赋值
                     * @return PromptVariables 是否已赋值
                     * @deprecated
                     */
                    bool PromptVariablesHasBeenSet() const;

                    /**
                     * 获取Automatic speech recognition vad time ranges from 240 to 2000, with a default of 1000, measured in milliseconds. smaller values will make automatic speech recognition segment faster.
                     * @return VadSilenceTime Automatic speech recognition vad time ranges from 240 to 2000, with a default of 1000, measured in milliseconds. smaller values will make automatic speech recognition segment faster.
                     * 
                     */
                    int64_t GetVadSilenceTime() const;

                    /**
                     * 设置Automatic speech recognition vad time ranges from 240 to 2000, with a default of 1000, measured in milliseconds. smaller values will make automatic speech recognition segment faster.
                     * @param _vadSilenceTime Automatic speech recognition vad time ranges from 240 to 2000, with a default of 1000, measured in milliseconds. smaller values will make automatic speech recognition segment faster.
                     * 
                     */
                    void SetVadSilenceTime(const int64_t& _vadSilenceTime);

                    /**
                     * 判断参数 VadSilenceTime 是否已赋值
                     * @return VadSilenceTime 是否已赋值
                     * 
                     */
                    bool VadSilenceTimeHasBeenSet() const;

                    /**
                     * 获取Call content extraction configuration.
                     * @return ExtractConfig Call content extraction configuration.
                     * 
                     */
                    std::vector<AICallExtractConfigElement> GetExtractConfig() const;

                    /**
                     * 设置Call content extraction configuration.
                     * @param _extractConfig Call content extraction configuration.
                     * 
                     */
                    void SetExtractConfig(const std::vector<AICallExtractConfigElement>& _extractConfig);

                    /**
                     * 判断参数 ExtractConfig 是否已赋值
                     * @return ExtractConfig 是否已赋值
                     * 
                     */
                    bool ExtractConfigHasBeenSet() const;

                    /**
                     * 获取Model temperature control.
                     * @return Temperature Model temperature control.
                     * 
                     */
                    double GetTemperature() const;

                    /**
                     * 设置Model temperature control.
                     * @param _temperature Model temperature control.
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
                     * 获取Common variable: <p>prompt content variable</p> <p>welcome message variable</p> <p>welcome message delay playback (in seconds): welcome-message-delay</p> <p>dify variable</p>.  

dify-inputs-xxx specifies the inputs variable for dify.
2. the dify-inputs-user specifies the user value for dify.
3. dify-inputs-conversation_id is the conversation_id value of dify.
                     * @return Variables Common variable: <p>prompt content variable</p> <p>welcome message variable</p> <p>welcome message delay playback (in seconds): welcome-message-delay</p> <p>dify variable</p>.  

dify-inputs-xxx specifies the inputs variable for dify.
2. the dify-inputs-user specifies the user value for dify.
3. dify-inputs-conversation_id is the conversation_id value of dify.
                     * 
                     */
                    std::vector<Variable> GetVariables() const;

                    /**
                     * 设置Common variable: <p>prompt content variable</p> <p>welcome message variable</p> <p>welcome message delay playback (in seconds): welcome-message-delay</p> <p>dify variable</p>.  

dify-inputs-xxx specifies the inputs variable for dify.
2. the dify-inputs-user specifies the user value for dify.
3. dify-inputs-conversation_id is the conversation_id value of dify.
                     * @param _variables Common variable: <p>prompt content variable</p> <p>welcome message variable</p> <p>welcome message delay playback (in seconds): welcome-message-delay</p> <p>dify variable</p>.  

dify-inputs-xxx specifies the inputs variable for dify.
2. the dify-inputs-user specifies the user value for dify.
3. dify-inputs-conversation_id is the conversation_id value of dify.
                     * 
                     */
                    void SetVariables(const std::vector<Variable>& _variables);

                    /**
                     * 判断参数 Variables 是否已赋值
                     * @return Variables 是否已赋值
                     * 
                     */
                    bool VariablesHasBeenSet() const;

                private:

                    /**
                     * Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Called number.
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * Model API protocol type. currently compatible with four protocol types:.

-OpenAI protocol (including GPT, hunyuan, DeepSeek, etc.): "OpenAI".
-Azure protocol: "azure".
-Specifies the "Minimax" protocol.
-Dify protocol: "dify".
                     */
                    std::string m_lLMType;
                    bool m_lLMTypeHasBeenSet;

                    /**
                     * Model API key, for authentication information, please refer to the respective model's official website

- OpenAI protocol: [GPT](https://help.openai.com/en/articles/4936850-where-do-i-find-my-openai-api-key), [DeepSeek](https://api-docs.deepseek.com/zh-cn/);

- Azure protocol: [Azure GPT](https://learn.microsoft.com/en-us/azure/ai-services/openai/chatgpt-quickstart?tabs=command-line%2Ctypescript%2Cpython-new&pivots=programming-language-studio#key-settings);

- Minimax:[Minimax](https://platform.minimaxi.com/document/Fast%20access?key=66701cf51d57f38758d581b2)
                     */
                    std::string m_aPIKey;
                    bool m_aPIKeyHasBeenSet;

                    /**
                     * Model interface address

- OpenAI protocol
GPT:"https://api.openai.com/v1/"
Deepseek:"https://api.deepseek.com/v1"

- Azure protocol
 "https://{your-resource-name}.openai.azure.com?api-version={api-version}"

- Minimax protocol
"https://api.minimax.chat/v1"
                     */
                    std::string m_aPIUrl;
                    bool m_aPIUrlHasBeenSet;

                    /**
                     * ## Identity
You are Kate from the appointment department at Retell Health calling Cindy over the phone to prepare for the annual checkup coming up. You are a pleasant and friendly receptionist caring deeply for the user. You don't provide medical advice but would use the medical knowledge to understand user responses.

## Style Guardrails
Be Concise: Respond succinctly, addressing one topic at most.
Embrace Variety: Use diverse language and rephrasing to enhance clarity without repeating content.
Be Conversational: Use everyday language, making the chat feel like talking to a friend.
Be Proactive: Lead the conversation, often wrapping up with a question or next-step suggestion.
Avoid multiple questions in a single response.
Get clarity: If the user only partially answers a question, or if the answer is unclear, keep asking to get clarity.
Use a colloquial way of referring to the date (like Friday, January 14th, or Tuesday, January 12th, 2024 at 8am).

## Response Guideline
Adapt and Guess: Try to understand transcripts that may contain transcription errors. Avoid mentioning "transcription error" in the response.
Stay in Character: Keep conversations within your role's scope, guiding them back creatively without repeating.
Ensure Fluid Dialogue: Respond in a role-appropriate, direct manner to maintain a smooth conversation flow.

## Task
You will follow the steps below, do not skip steps, and only ask up to one question in response.
If at any time the user showed anger or wanted a human agent, call transfer_call to transfer to a human representative.
1. Begin with a self-introduction and verify if callee is Cindy.
  - if callee is not Cindy, call end_call to hang up, say sorry for the confusion when hanging up.
  - if Cindy is not available, call end_call politely to hang up, say you will call back later when hanging up.
2. Inform Cindy she has an annual body check coming up on April 4th, 2024 at 10am PDT. Check if Cindy is available.
  - If not, tell Cindy to reschedule online and jump to step 5.
3. Ask Cindy if there's anything that the doctor should know before the annual checkup.
  - Ask followup questions as needed to assess the severity of the issue, and understand how it has progressed.
4. Tell Cindy to not eat or drink that day before the checkup. Also tell Cindy to give you a callback if there's any changes in health condition.
5. Ask Cindy if she has any questions, and if so, answer them until there are no questions.
  - If user asks something you do not know, let them know you don't have the answer. Ask them if they have any other questions.
  - If user do not have any questions, call function end_call to hang up.
                     */
                    std::string m_systemPrompt;
                    bool m_systemPromptHasBeenSet;

                    /**
                     * Model name, such as

- OpenAI protocol
"gpt-4o-mini","gpt-4o","deepseek-chat";

- Azure protocol
"gpt-4o-mini", "gpt-4o";

- Minimax protocol
"deepseek-chat".
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * The following voice parameter values are available by default. If you wish to customize the voice type, please leave VoiceType blank and configure it in the CustomTTSConfig parameter.

Chinese:
ZhiMei: Zhimei, customer service female voice
ZhiXi: Zhixi, general female voice
ZhiQi: Zhiqi, customer service female voice
ZhiTian: Zhitian, female child voice
AiXiaoJing: Ai Xiaojing, dialogue female voice

English:
WeRose:English Female Voice
Monika:English Female Voice

Japanese:
Nanami

Korean:
SunHi

Indonesian (Indonesia):
Gadis

Malay (Malaysia):
Yasmin

 Tamil (Malaysia):
Kani

Thai (Thailand):
Achara

Vietnamese (Vietnam):
HoaiMy


                     */
                    std::string m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                    /**
                     * Caller number list
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

                    /**
                     * Used to set the AI Agent Welcome Message.
                     */
                    std::string m_welcomeMessage;
                    bool m_welcomeMessageHasBeenSet;

                    /**
                     * 0: Use welcomeMessage (if empty, the callee speaks first; if not empty, the bot speaks first)
1:   Use AI to automatically generate welcomeMessage and speak first based on the prompt
                     */
                    int64_t m_welcomeType;
                    bool m_welcomeTypeHasBeenSet;

                    /**
                     * 0: interruptible by default, 1: high priority and not interruptible.
                     */
                    int64_t m_welcomeMessagePriority;
                    bool m_welcomeMessagePriorityHasBeenSet;

                    /**
                     * Maximum Waiting Duration (milliseconds), default is 60 seconds, if the user does not speak within this time, the call is automatically terminated
                     */
                    int64_t m_maxDuration;
                    bool m_maxDurationHasBeenSet;

                    /**
                     * ASR Supported Languages, default is "zh" Chinese,
Fill in the array with up to 4 languages, the first is the primary language for recognition, followed by optional languages,
Note: When the primary language is a Chinese dialect, optional languages are invalid
Currently, the supported languages are as follows. The English name of the language is on the left side of the equals sign, and the value to be filled in the Language field is on the right side, following ISO639:
1. Chinese = "zh" # Chinese
2. Chinese_TW = "zh-TW" # Taiwan (China)
3. Chinese_DIALECT = "zh-dialect" # Chinese Dialect
4. English = "en" # English
5. Vietnamese = "vi" # Vietnamese
6. Japanese = "ja" # Japanese
7. Korean = "ko" # Korean
8. Indonesia = "id" # Indonesian
9. Thai = "th" # Thai
10. Portuguese = "pt" # Portuguese
11. Turkish = "tr" # Turkish
12. Arabic = "ar" # Arabic
13. Spanish = "es" # Spanish
14. Hindi = "hi" # Hindi
15. French = "fr" # French
16. Malay = "ms" # Malay
17. Filipino = "fil" # Filipino
18. German = "de" # German
19. Italian = "it" # Italian
20. Russian = "ru" # Russian
                     */
                    std::vector<std::string> m_languages;
                    bool m_languagesHasBeenSet;

                    /**
                     * Interrupt ai speaking mode. default is 0. 0 indicates automatic interruption and 1 indicates no interruption.
                     */
                    int64_t m_interruptMode;
                    bool m_interruptModeHasBeenSet;

                    /**
                     * Used when InterruptMode is 0, unit in milliseconds, default is 500ms. It means that the server-side detects ongoing vocal input for the InterruptSpeechDuration milliseconds and then interrupts.
                     */
                    int64_t m_interruptSpeechDuration;
                    bool m_interruptSpeechDurationHasBeenSet;

                    /**
                     * Whether the model supports (or enables) call_end function calling
                     */
                    bool m_endFunctionEnable;
                    bool m_endFunctionEnableHasBeenSet;

                    /**
                     * Effective when EndFunctionEnable is true; the description of call_end function calling, default is "End the call when user has to leave (like says bye) or you are instructed to do so."
                     */
                    std::string m_endFunctionDesc;
                    bool m_endFunctionDescHasBeenSet;

                    /**
                     * Whether the model supports (or enables) transfer_to_human function calling.
                     */
                    bool m_transferFunctionEnable;
                    bool m_transferFunctionEnableHasBeenSet;

                    /**
                     * Takes effect when transferfunctionenable is true: transfer to human configuration.
                     */
                    std::vector<AITransferItem> m_transferItems;
                    bool m_transferItemsHasBeenSet;

                    /**
                     * The duration after which the user hasn't spoken to trigger a notification, minimum 10 seconds, default 10 seconds
                     */
                    int64_t m_notifyDuration;
                    bool m_notifyDurationHasBeenSet;

                    /**
                     * The AI prompt when NotifyDuration has passed without the user speaking, default is "Sorry, I didn't hear you clearly. Can you repeat that?"
                     */
                    std::string m_notifyMessage;
                    bool m_notifyMessageHasBeenSet;

                    /**
                     * Maximum number of times to trigger ai prompt sound, unlimited by default.
                     */
                    uint64_t m_notifyMaxCount;
                    bool m_notifyMaxCountHasBeenSet;

                    /**
                     * <p>And VoiceType field needs to select one, here is to use your own custom TTS, VoiceType is some built-in sound qualities</p>
<ul>
<li>Tencent TTS<br>
For configuration, please refer to <a href="https://intl.cloud.tencent.com/document/product/1073/92668?from_cn_redirect=1#55924b56-1a73-4663-a7a1-a8dd82d6e823" target="_blank">Tencent Cloud TTS documentation link</a></li>
</ul>
<div><div class="v-md-pre-wrapper copy-code-mode v-md-pre-wrapper- extra-class"><pre class="v-md-prism-"><code>{
    &quot;TTSType&quot;: &quot;tencent&quot;, // String TTS type, currently supports &quot;tencent&quot; and "minixmax", other vendors support in progress
    &quot;AppId&quot;: &quot;Your application ID&quot;, // String required
    &quot;SecretId&quot;: &quot;Your Secret ID&quot;, // String Required
    &quot;SecretKey&quot;:  &quot;Your Secret Key&quot;, // String Required
    &quot;VoiceType&quot;: 101001, // Integer Required, Sound quality ID, includes standard and premium sound quality. Premium sound quality is more realistic and differently priced than standard sound quality. See TTS billing overview for details. For the full list of sound quality IDs, see the TTS sound quality list.
    "Speed": 1.25, // Integer Optional, speech speed, range: [-2,6], corresponding to different speeds: -2: represents 0.6x -1: represents 0.8x 0: represents 1.0x (default) 1: represents 1.2x 2: represents 1.5x 6: represents 2.5x For more precise speed control, you can retain two decimal places, such as 0.5/1.25/2.81, etc. For parameter value to actual speed conversion, refer to Speed Conversion
    &quot;Volume&quot;: 5, // Integer Optional, Volume level, range: [0,10], corresponding to 11 levels of volume, default is 0, which represents normal volume.
    &quot;PrimaryLanguage&quot;: 1, // Integer Optional, Primary language 1- Chinese (default) 2- English 3- Japanese
    &quot;FastVoiceType&quot;: &quot;xxxx&quot;   // Optional parameter, Fast VRS parameter
  }
</code></pre>

  </div></div><ul>

</div></div><ul>
<li>Azure TTS<br>
For configuration, refer to the<a href="https://docs.azure.cn/zh-cn/ai-services/speech-service/speech-synthesis-markup-voice" target="_blank">Azure TTS documentation</a></li>
</ul>
<div><div class="v-md-pre-wrapper copy-code-mode v-md-pre-wrapper- extra-class"><pre class="v-md-prism-"><code>{
    &quot;TTSType&quot;: &quot;azure&quot;, // Required: String TTS type
    &quot;SubscriptionKey&quot;: &quot;xxxxxxxx&quot;, // Required: String subscription key
    &quot;Region&quot;: &quot;chinanorth3&quot;,  // Required: String subscription region
    &quot;VoiceName&quot;: &quot;zh-CN-XiaoxiaoNeural&quot;, // Required: String Timbre Name required
    &quot;Language&quot;: &quot;zh-CN&quot;, // Required: String Language for synthesis
    &quot;Rate&quot;: 1 // Optional: float Playback Speed 0.5-2 default is 1
}
</code></pre>

</div></div><ul>
<li>Custom</li>
</ul>
<p>TTS<br>
Please refer to the specific protocol standards in the <a href="https://doc.weixin.qq.com/doc/w3_ANQAiAbdAFwHILbJBmtSqSbV1WZ3L?scode=AJEAIQdfAAo5a1xajYANQAiAbdAFw" target="_blank">Tencent documentation</a></p>
<div><div class="v-md-pre-wrapper copy-code-mode v-md-pre-wrapper- extra-class"><pre class="v-md-prism-"><code>{
  &quot;TTSType&quot;: &quot;custom&quot;, // Required String
  &quot;APIKey&quot;: &quot;ApiKey&quot;, // Required String for Authentication
  &quot;APIUrl&quot;: &quot;http://0.0.0.0:8080/stream-audio&quot; // Required String, TTS API URL
  &quot;AudioFormat&quot;: &quot;wav&quot;, // String, optional, expected audio format, such as mp3, ogg_opus, pcm, wav, default is wav, currently only pcm and wav are supported,
  &quot;SampleRate&quot;: 16000,  // Integer, optional, audio sample rate, default is 16000 (16k), recommended value is 16000
  &quot;AudioChannel&quot;: 1,    // Integer, optional, number of audio channels, values: 1 or 2, default is 1
}
</code></pre>

</div></div>
                     */
                    std::string m_customTTSConfig;
                    bool m_customTTSConfigHasBeenSet;

                    /**
                     * Prompt word variable.
                     */
                    std::vector<Variable> m_promptVariables;
                    bool m_promptVariablesHasBeenSet;

                    /**
                     * Automatic speech recognition vad time ranges from 240 to 2000, with a default of 1000, measured in milliseconds. smaller values will make automatic speech recognition segment faster.
                     */
                    int64_t m_vadSilenceTime;
                    bool m_vadSilenceTimeHasBeenSet;

                    /**
                     * Call content extraction configuration.
                     */
                    std::vector<AICallExtractConfigElement> m_extractConfig;
                    bool m_extractConfigHasBeenSet;

                    /**
                     * Model temperature control.
                     */
                    double m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * Common variable: <p>prompt content variable</p> <p>welcome message variable</p> <p>welcome message delay playback (in seconds): welcome-message-delay</p> <p>dify variable</p>.  

dify-inputs-xxx specifies the inputs variable for dify.
2. the dify-inputs-user specifies the user value for dify.
3. dify-inputs-conversation_id is the conversation_id value of dify.
                     */
                    std::vector<Variable> m_variables;
                    bool m_variablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAICALLREQUEST_H_
