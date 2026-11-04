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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SKILLANALYSISINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SKILLANALYSISINFO_H_

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
                * SkillAnalysisInfo: Skill security scan information.
                */
                class SkillAnalysisInfo : public AbstractModel
                {
                public:
                    SkillAnalysisInfo();
                    ~SkillAnalysisInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Safety detection status

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | To be checked |
| 1 | detecting |
| 2 | Available |
| 3 | Unavailable |
| 4 | Detection failed |
                     * @return AnalysisStatus Safety detection status

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | To be checked |
| 1 | detecting |
| 2 | Available |
| 3 | Unavailable |
| 4 | Detection failed |
                     * 
                     */
                    int64_t GetAnalysisStatus() const;

                    /**
                     * 设置Safety detection status

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | To be checked |
| 1 | detecting |
| 2 | Available |
| 3 | Unavailable |
| 4 | Detection failed |
                     * @param _analysisStatus Safety detection status

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | To be checked |
| 1 | detecting |
| 2 | Available |
| 3 | Unavailable |
| 4 | Detection failed |
                     * 
                     */
                    void SetAnalysisStatus(const int64_t& _analysisStatus);

                    /**
                     * 判断参数 AnalysisStatus 是否已赋值
                     * @return AnalysisStatus 是否已赋值
                     * 
                     */
                    bool AnalysisStatusHasBeenSet() const;

                    /**
                     * 获取Risk description
                     * @return RiskDescription Risk description
                     * 
                     */
                    std::string GetRiskDescription() const;

                    /**
                     * 设置Risk description
                     * @param _riskDescription Risk description
                     * 
                     */
                    void SetRiskDescription(const std::string& _riskDescription);

                    /**
                     * 判断参数 RiskDescription 是否已赋值
                     * @return RiskDescription 是否已赋值
                     * 
                     */
                    bool RiskDescriptionHasBeenSet() const;

                    /**
                     * 获取Risk level

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | risk-free |
| 1 | Low risk |
| 2 | Medium-risk |
| 3 | High-risk |
                     * @return RiskLevel Risk level

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | risk-free |
| 1 | Low risk |
| 2 | Medium-risk |
| 3 | High-risk |
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置Risk level

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | risk-free |
| 1 | Low risk |
| 2 | Medium-risk |
| 3 | High-risk |
                     * @param _riskLevel Risk level

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | risk-free |
| 1 | Low risk |
| 2 | Medium-risk |
| 3 | High-risk |
                     * 
                     */
                    void SetRiskLevel(const int64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取Security report redirection url
                     * @return SecurityReportUrl Security report redirection url
                     * 
                     */
                    std::string GetSecurityReportUrl() const;

                    /**
                     * 设置Security report redirection url
                     * @param _securityReportUrl Security report redirection url
                     * 
                     */
                    void SetSecurityReportUrl(const std::string& _securityReportUrl);

                    /**
                     * 判断参数 SecurityReportUrl 是否已赋值
                     * @return SecurityReportUrl 是否已赋值
                     * 
                     */
                    bool SecurityReportUrlHasBeenSet() const;

                private:

                    /**
                     * Safety detection status

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | To be checked |
| 1 | detecting |
| 2 | Available |
| 3 | Unavailable |
| 4 | Detection failed |
                     */
                    int64_t m_analysisStatus;
                    bool m_analysisStatusHasBeenSet;

                    /**
                     * Risk description
                     */
                    std::string m_riskDescription;
                    bool m_riskDescriptionHasBeenSet;

                    /**
                     * Risk level

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | risk-free |
| 1 | Low risk |
| 2 | Medium-risk |
| 3 | High-risk |
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Security report redirection url
                     */
                    std::string m_securityReportUrl;
                    bool m_securityReportUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLANALYSISINFO_H_
