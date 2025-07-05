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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETWSTOKENRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETWSTOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeQaSingleWorkflow.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * GetWsToken response structure.
                */
                class GetWsTokenResponse : public AbstractModel
                {
                public:
                    GetWsTokenResponse();
                    ~GetWsTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Token value (valid for 60 seconds, valid only once, multiple validations will report an error).
                     * @return Token Token value (valid for 60 seconds, valid only once, multiple validations will report an error).
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取Balance. The balance is valid if it is greater than 0.
                     * @return Balance Balance. The balance is valid if it is greater than 0.
                     * 
                     */
                    double GetBalance() const;

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     * 
                     */
                    bool BalanceHasBeenSet() const;

                    /**
                     * 获取The character limit for input in the chat window.
                     * @return InputLenLimit The character limit for input in the chat window.
                     * 
                     */
                    int64_t GetInputLenLimit() const;

                    /**
                     * 判断参数 InputLenLimit 是否已赋值
                     * @return InputLenLimit 是否已赋值
                     * 
                     */
                    bool InputLenLimitHasBeenSet() const;

                    /**
                     * 获取Application mode: standard; agent; single_workflow.
                     * @return Pattern Application mode: standard; agent; single_workflow.
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取SingleWorkflow.
                     * @return SingleWorkflow SingleWorkflow.
                     * 
                     */
                    KnowledgeQaSingleWorkflow GetSingleWorkflow() const;

                    /**
                     * 判断参数 SingleWorkflow 是否已赋值
                     * @return SingleWorkflow 是否已赋值
                     * 
                     */
                    bool SingleWorkflowHasBeenSet() const;

                private:

                    /**
                     * Token value (valid for 60 seconds, valid only once, multiple validations will report an error).
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * Balance. The balance is valid if it is greater than 0.
                     */
                    double m_balance;
                    bool m_balanceHasBeenSet;

                    /**
                     * The character limit for input in the chat window.
                     */
                    int64_t m_inputLenLimit;
                    bool m_inputLenLimitHasBeenSet;

                    /**
                     * Application mode: standard; agent; single_workflow.
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * SingleWorkflow.
                     */
                    KnowledgeQaSingleWorkflow m_singleWorkflow;
                    bool m_singleWorkflowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETWSTOKENRESPONSE_H_
