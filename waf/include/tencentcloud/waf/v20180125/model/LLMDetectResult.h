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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LLMDETECTRESULT_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LLMDETECTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/LLMSensitiveValueLevel.h>
#include <tencentcloud/waf/v20180125/model/KeyWordInfo.h>
#include <tencentcloud/waf/v20180125/model/PromptDetectResult.h>
#include <tencentcloud/waf/v20180125/model/ImageResult.h>
#include <tencentcloud/waf/v20180125/model/ToolCallResult.h>
#include <tencentcloud/waf/v20180125/model/IntentDetectResult.h>
#include <tencentcloud/waf/v20180125/model/UrlDetectResult.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Comprehensive result of large model security detection
                */
                class LLMDetectResult : public AbstractModel
                {
                public:
                    LLMDetectResult();
                    ~LLMDetectResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Output only: Sensitive information</p>
                     * @return SensitiveResult <p>Output only: Sensitive information</p>
                     * 
                     */
                    std::vector<LLMSensitiveValueLevel> GetSensitiveResult() const;

                    /**
                     * 设置<p>Output only: Sensitive information</p>
                     * @param _sensitiveResult <p>Output only: Sensitive information</p>
                     * 
                     */
                    void SetSensitiveResult(const std::vector<LLMSensitiveValueLevel>& _sensitiveResult);

                    /**
                     * 判断参数 SensitiveResult 是否已赋值
                     * @return SensitiveResult 是否已赋值
                     * 
                     */
                    bool SensitiveResultHasBeenSet() const;

                    /**
                     * 获取<p>Both input and output: Keyword library hit information</p>
                     * @return KeyWordsResult <p>Both input and output: Keyword library hit information</p>
                     * 
                     */
                    std::vector<KeyWordInfo> GetKeyWordsResult() const;

                    /**
                     * 设置<p>Both input and output: Keyword library hit information</p>
                     * @param _keyWordsResult <p>Both input and output: Keyword library hit information</p>
                     * 
                     */
                    void SetKeyWordsResult(const std::vector<KeyWordInfo>& _keyWordsResult);

                    /**
                     * 判断参数 KeyWordsResult 是否已赋值
                     * @return KeyWordsResult 是否已赋值
                     * 
                     */
                    bool KeyWordsResultHasBeenSet() const;

                    /**
                     * 获取<p>Both input and output: Data classification and grading result</p>
                     * @return DataCategoryResult <p>Both input and output: Data classification and grading result</p>
                     * 
                     */
                    std::vector<std::string> GetDataCategoryResult() const;

                    /**
                     * 设置<p>Both input and output: Data classification and grading result</p>
                     * @param _dataCategoryResult <p>Both input and output: Data classification and grading result</p>
                     * 
                     */
                    void SetDataCategoryResult(const std::vector<std::string>& _dataCategoryResult);

                    /**
                     * 判断参数 DataCategoryResult 是否已赋值
                     * @return DataCategoryResult 是否已赋值
                     * 
                     */
                    bool DataCategoryResultHasBeenSet() const;

                    /**
                     * 获取<p>Input only: prompt injection detection result</p>
                     * @return PromptInjectionResult <p>Input only: prompt injection detection result</p>
                     * 
                     */
                    PromptDetectResult GetPromptInjectionResult() const;

                    /**
                     * 设置<p>Input only: prompt injection detection result</p>
                     * @param _promptInjectionResult <p>Input only: prompt injection detection result</p>
                     * 
                     */
                    void SetPromptInjectionResult(const PromptDetectResult& _promptInjectionResult);

                    /**
                     * 判断参数 PromptInjectionResult 是否已赋值
                     * @return PromptInjectionResult 是否已赋值
                     * 
                     */
                    bool PromptInjectionResultHasBeenSet() const;

                    /**
                     * 获取<p>ID of the hit rule</p>
                     * @return RuleId <p>ID of the hit rule</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>ID of the hit rule</p>
                     * @param _ruleId <p>ID of the hit rule</p>
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>Name of the hit rule</p>
                     * @return RuleName <p>Name of the hit rule</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>Name of the hit rule</p>
                     * @param _ruleName <p>Name of the hit rule</p>
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取<p>Rule action</p>
                     * @return Action <p>Rule action</p>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>Rule action</p>
                     * @param _action <p>Rule action</p>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>Attack payload</p>
                     * @return Payload <p>Attack payload</p>
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置<p>Attack payload</p>
                     * @param _payload <p>Attack payload</p>
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取<p>Masked content. Returned when Action is mask. If no masked evidence is generated, the original text is returned.</p>
                     * @return Desensitization <p>Masked content. Returned when Action is mask. If no masked evidence is generated, the original text is returned.</p>
                     * 
                     */
                    std::string GetDesensitization() const;

                    /**
                     * 设置<p>Masked content. Returned when Action is mask. If no masked evidence is generated, the original text is returned.</p>
                     * @param _desensitization <p>Masked content. Returned when Action is mask. If no masked evidence is generated, the original text is returned.</p>
                     * 
                     */
                    void SetDesensitization(const std::string& _desensitization);

                    /**
                     * 判断参数 Desensitization 是否已赋值
                     * @return Desensitization 是否已赋值
                     * 
                     */
                    bool DesensitizationHasBeenSet() const;

                    /**
                     * 获取<p>Image detection result</p>
                     * @return ImageResult <p>Image detection result</p>
                     * 
                     */
                    std::vector<ImageResult> GetImageResult() const;

                    /**
                     * 设置<p>Image detection result</p>
                     * @param _imageResult <p>Image detection result</p>
                     * 
                     */
                    void SetImageResult(const std::vector<ImageResult>& _imageResult);

                    /**
                     * 判断参数 ImageResult 是否已赋值
                     * @return ImageResult 是否已赋值
                     * 
                     */
                    bool ImageResultHasBeenSet() const;

                    /**
                     * 获取<p>id of the message to be answered on behalf. This message id is used as an input parameter of the GenerateLLMSecAnswer API.</p>
                     * @return MsgID <p>id of the message to be answered on behalf. This message id is used as an input parameter of the GenerateLLMSecAnswer API.</p>
                     * 
                     */
                    std::string GetMsgID() const;

                    /**
                     * 设置<p>id of the message to be answered on behalf. This message id is used as an input parameter of the GenerateLLMSecAnswer API.</p>
                     * @param _msgID <p>id of the message to be answered on behalf. This message id is used as an input parameter of the GenerateLLMSecAnswer API.</p>
                     * 
                     */
                    void SetMsgID(const std::string& _msgID);

                    /**
                     * 判断参数 MsgID 是否已赋值
                     * @return MsgID 是否已赋值
                     * 
                     */
                    bool MsgIDHasBeenSet() const;

                    /**
                     * 获取<p>Tool call detection result</p>
                     * @return ToolCallResult <p>Tool call detection result</p>
                     * 
                     */
                    ToolCallResult GetToolCallResult() const;

                    /**
                     * 设置<p>Tool call detection result</p>
                     * @param _toolCallResult <p>Tool call detection result</p>
                     * 
                     */
                    void SetToolCallResult(const ToolCallResult& _toolCallResult);

                    /**
                     * 判断参数 ToolCallResult 是否已赋值
                     * @return ToolCallResult 是否已赋值
                     * 
                     */
                    bool ToolCallResultHasBeenSet() const;

                    /**
                     * 获取<p>Intent detection result</p>
                     * @return IntentDetectResult <p>Intent detection result</p>
                     * 
                     */
                    IntentDetectResult GetIntentDetectResult() const;

                    /**
                     * 设置<p>Intent detection result</p>
                     * @param _intentDetectResult <p>Intent detection result</p>
                     * 
                     */
                    void SetIntentDetectResult(const IntentDetectResult& _intentDetectResult);

                    /**
                     * 判断参数 IntentDetectResult 是否已赋值
                     * @return IntentDetectResult 是否已赋值
                     * 
                     */
                    bool IntentDetectResultHasBeenSet() const;

                    /**
                     * 获取<p>Malicious URL detection result</p>
                     * @return UrlDetectResult <p>Malicious URL detection result</p>
                     * 
                     */
                    UrlDetectResult GetUrlDetectResult() const;

                    /**
                     * 设置<p>Malicious URL detection result</p>
                     * @param _urlDetectResult <p>Malicious URL detection result</p>
                     * 
                     */
                    void SetUrlDetectResult(const UrlDetectResult& _urlDetectResult);

                    /**
                     * 判断参数 UrlDetectResult 是否已赋值
                     * @return UrlDetectResult 是否已赋值
                     * 
                     */
                    bool UrlDetectResultHasBeenSet() const;

                private:

                    /**
                     * <p>Output only: Sensitive information</p>
                     */
                    std::vector<LLMSensitiveValueLevel> m_sensitiveResult;
                    bool m_sensitiveResultHasBeenSet;

                    /**
                     * <p>Both input and output: Keyword library hit information</p>
                     */
                    std::vector<KeyWordInfo> m_keyWordsResult;
                    bool m_keyWordsResultHasBeenSet;

                    /**
                     * <p>Both input and output: Data classification and grading result</p>
                     */
                    std::vector<std::string> m_dataCategoryResult;
                    bool m_dataCategoryResultHasBeenSet;

                    /**
                     * <p>Input only: prompt injection detection result</p>
                     */
                    PromptDetectResult m_promptInjectionResult;
                    bool m_promptInjectionResultHasBeenSet;

                    /**
                     * <p>ID of the hit rule</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>Name of the hit rule</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>Rule action</p>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>Attack payload</p>
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * <p>Masked content. Returned when Action is mask. If no masked evidence is generated, the original text is returned.</p>
                     */
                    std::string m_desensitization;
                    bool m_desensitizationHasBeenSet;

                    /**
                     * <p>Image detection result</p>
                     */
                    std::vector<ImageResult> m_imageResult;
                    bool m_imageResultHasBeenSet;

                    /**
                     * <p>id of the message to be answered on behalf. This message id is used as an input parameter of the GenerateLLMSecAnswer API.</p>
                     */
                    std::string m_msgID;
                    bool m_msgIDHasBeenSet;

                    /**
                     * <p>Tool call detection result</p>
                     */
                    ToolCallResult m_toolCallResult;
                    bool m_toolCallResultHasBeenSet;

                    /**
                     * <p>Intent detection result</p>
                     */
                    IntentDetectResult m_intentDetectResult;
                    bool m_intentDetectResultHasBeenSet;

                    /**
                     * <p>Malicious URL detection result</p>
                     */
                    UrlDetectResult m_urlDetectResult;
                    bool m_urlDetectResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMDETECTRESULT_H_
