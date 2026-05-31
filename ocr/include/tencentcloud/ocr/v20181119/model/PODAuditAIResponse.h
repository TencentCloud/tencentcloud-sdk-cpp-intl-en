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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_PODAUDITAIRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_PODAUDITAIRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/AnalyzedLog.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * PODAuditAI response structure.
                */
                class PODAuditAIResponse : public AbstractModel
                {
                public:
                    PODAuditAIResponse();
                    ~PODAuditAIResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>0 means non-compliance 1 means compliance</p>
                     * @return AuditorDecision <p>0 means non-compliance 1 means compliance</p>
                     * 
                     */
                    int64_t GetAuditorDecision() const;

                    /**
                     * 判断参数 AuditorDecision 是否已赋值
                     * @return AuditorDecision 是否已赋值
                     * 
                     */
                    bool AuditorDecisionHasBeenSet() const;

                    /**
                     * 获取<p>Reason code for non-compliance. If there are multiple, return a list of multiple codes.</p><p>Enumeration value:</p><ul><li>100: Wrong delivery address</li><li>101: No house number</li><li>104: Single question</li><li>200: No package</li><li>202: Privacy leakage</li></ul>
                     * @return FailCode <p>Reason code for non-compliance. If there are multiple, return a list of multiple codes.</p><p>Enumeration value:</p><ul><li>100: Wrong delivery address</li><li>101: No house number</li><li>104: Single question</li><li>200: No package</li><li>202: Privacy leakage</li></ul>
                     * 
                     */
                    std::vector<std::string> GetFailCode() const;

                    /**
                     * 判断参数 FailCode 是否已赋值
                     * @return FailCode 是否已赋值
                     * 
                     */
                    bool FailCodeHasBeenSet() const;

                    /**
                     * 获取<p>Entire approval result analysis content</p>
                     * @return ResultAnalysis <p>Entire approval result analysis content</p>
                     * 
                     */
                    std::string GetResultAnalysis() const;

                    /**
                     * 判断参数 ResultAnalysis 是否已赋值
                     * @return ResultAnalysis 是否已赋值
                     * 
                     */
                    bool ResultAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>Analysis result logs of each layer, including time taken, judgment reason, and judgment conclusion</p>
                     * @return AnalyzedLogs <p>Analysis result logs of each layer, including time taken, judgment reason, and judgment conclusion</p>
                     * 
                     */
                    std::vector<AnalyzedLog> GetAnalyzedLogs() const;

                    /**
                     * 判断参数 AnalyzedLogs 是否已赋值
                     * @return AnalyzedLogs 是否已赋值
                     * 
                     */
                    bool AnalyzedLogsHasBeenSet() const;

                private:

                    /**
                     * <p>0 means non-compliance 1 means compliance</p>
                     */
                    int64_t m_auditorDecision;
                    bool m_auditorDecisionHasBeenSet;

                    /**
                     * <p>Reason code for non-compliance. If there are multiple, return a list of multiple codes.</p><p>Enumeration value:</p><ul><li>100: Wrong delivery address</li><li>101: No house number</li><li>104: Single question</li><li>200: No package</li><li>202: Privacy leakage</li></ul>
                     */
                    std::vector<std::string> m_failCode;
                    bool m_failCodeHasBeenSet;

                    /**
                     * <p>Entire approval result analysis content</p>
                     */
                    std::string m_resultAnalysis;
                    bool m_resultAnalysisHasBeenSet;

                    /**
                     * <p>Analysis result logs of each layer, including time taken, judgment reason, and judgment conclusion</p>
                     */
                    std::vector<AnalyzedLog> m_analyzedLogs;
                    bool m_analyzedLogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_PODAUDITAIRESPONSE_H_
