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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_PUTEVALUATIONSREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_PUTEVALUATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/Evaluation.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * PutEvaluations request structure.
                */
                class PutEvaluationsRequest : public AbstractModel
                {
                public:
                    PutEvaluationsRequest();
                    ~PutEvaluationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Callback token. Obtained from the ResultToken value in the Context of the selected Serverless Cloud Function (SCF) for the custom rule.
                     * @return ResultToken Callback token. Obtained from the ResultToken value in the Context of the selected Serverless Cloud Function (SCF) for the custom rule.
                     * 
                     */
                    std::string GetResultToken() const;

                    /**
                     * 设置Callback token. Obtained from the ResultToken value in the Context of the selected Serverless Cloud Function (SCF) for the custom rule.
                     * @param _resultToken Callback token. Obtained from the ResultToken value in the Context of the selected Serverless Cloud Function (SCF) for the custom rule.
                     * 
                     */
                    void SetResultToken(const std::string& _resultToken);

                    /**
                     * 判断参数 ResultToken 是否已赋值
                     * @return ResultToken 是否已赋值
                     * 
                     */
                    bool ResultTokenHasBeenSet() const;

                    /**
                     * 获取Custom rule evaluation result information.
                     * @return Evaluations Custom rule evaluation result information.
                     * 
                     */
                    std::vector<Evaluation> GetEvaluations() const;

                    /**
                     * 设置Custom rule evaluation result information.
                     * @param _evaluations Custom rule evaluation result information.
                     * 
                     */
                    void SetEvaluations(const std::vector<Evaluation>& _evaluations);

                    /**
                     * 判断参数 Evaluations 是否已赋值
                     * @return Evaluations 是否已赋值
                     * 
                     */
                    bool EvaluationsHasBeenSet() const;

                private:

                    /**
                     * Callback token. Obtained from the ResultToken value in the Context of the selected Serverless Cloud Function (SCF) for the custom rule.
                     */
                    std::string m_resultToken;
                    bool m_resultTokenHasBeenSet;

                    /**
                     * Custom rule evaluation result information.
                     */
                    std::vector<Evaluation> m_evaluations;
                    bool m_evaluationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_PUTEVALUATIONSREQUEST_H_
