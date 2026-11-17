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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_EXTRARISKRESULT_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_EXTRARISKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/BlackListItem.h>
#include <tencentcloud/faceid/v20180301/model/RiskDetailItem.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * ExtraRiskResult
                */
                class ExtraRiskResult : public AbstractModel
                {
                public:
                    ExtraRiskResult();
                    ~ExtraRiskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Completion of the additional checks in this request, indicating whether the result can be trusted.</p><p>Valid values:</p><ul><li>Completed: Conclusions (matched or passed) have been given for all checks required by this request.</li><li>Partial: At least one check cannot reach a conclusion due to unavailable dependencies, insufficient data, or incomplete or invalid input parameters. The result is for reference only and does not indicate security.</li></ul>
                     * @return Status <p>Completion of the additional checks in this request, indicating whether the result can be trusted.</p><p>Valid values:</p><ul><li>Completed: Conclusions (matched or passed) have been given for all checks required by this request.</li><li>Partial: At least one check cannot reach a conclusion due to unavailable dependencies, insufficient data, or incomplete or invalid input parameters. The result is for reference only and does not indicate security.</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Completion of the additional checks in this request, indicating whether the result can be trusted.</p><p>Valid values:</p><ul><li>Completed: Conclusions (matched or passed) have been given for all checks required by this request.</li><li>Partial: At least one check cannot reach a conclusion due to unavailable dependencies, insufficient data, or incomplete or invalid input parameters. The result is for reference only and does not indicate security.</li></ul>
                     * @param _status <p>Completion of the additional checks in this request, indicating whether the result can be trusted.</p><p>Valid values:</p><ul><li>Completed: Conclusions (matched or passed) have been given for all checks required by this request.</li><li>Partial: At least one check cannot reach a conclusion due to unavailable dependencies, insufficient data, or incomplete or invalid input parameters. The result is for reference only and does not indicate security.</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Additional risk level, which may be an empty string.</p><p>Valid values:</p><ul><li>High: An effective risk match exists (RiskDetailList is not empty in this case).</li><li>Low: The check is completed and no match is confirmed.</li><li>&quot;&quot; (empty string): Unrecognized. No check in this request can reach a conclusion, or not all checks are completed. It indicates neither risk nor security.</li></ul>
                     * @return RiskLevel <p>Additional risk level, which may be an empty string.</p><p>Valid values:</p><ul><li>High: An effective risk match exists (RiskDetailList is not empty in this case).</li><li>Low: The check is completed and no match is confirmed.</li><li>&quot;&quot; (empty string): Unrecognized. No check in this request can reach a conclusion, or not all checks are completed. It indicates neither risk nor security.</li></ul>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>Additional risk level, which may be an empty string.</p><p>Valid values:</p><ul><li>High: An effective risk match exists (RiskDetailList is not empty in this case).</li><li>Low: The check is completed and no match is confirmed.</li><li>&quot;&quot; (empty string): Unrecognized. No check in this request can reach a conclusion, or not all checks are completed. It indicates neither risk nor security.</li></ul>
                     * @param _riskLevel <p>Additional risk level, which may be an empty string.</p><p>Valid values:</p><ul><li>High: An effective risk match exists (RiskDetailList is not empty in this case).</li><li>Low: The check is completed and no match is confirmed.</li><li>&quot;&quot; (empty string): Unrecognized. No check in this request can reach a conclusion, or not all checks are completed. It indicates neither risk nor security.</li></ul>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>List of matched risk items. An empty array [] is returned if no risk item is matched.</p>
                     * @return BlackListResult <p>List of matched risk items. An empty array [] is returned if no risk item is matched.</p>
                     * 
                     */
                    std::vector<BlackListItem> GetBlackListResult() const;

                    /**
                     * 设置<p>List of matched risk items. An empty array [] is returned if no risk item is matched.</p>
                     * @param _blackListResult <p>List of matched risk items. An empty array [] is returned if no risk item is matched.</p>
                     * 
                     */
                    void SetBlackListResult(const std::vector<BlackListItem>& _blackListResult);

                    /**
                     * 判断参数 BlackListResult 是否已赋值
                     * @return BlackListResult 是否已赋值
                     * 
                     */
                    bool BlackListResultHasBeenSet() const;

                    /**
                     * 获取<p>Face blocklist match details. An empty array [] is returned if no match is found.</p>
                     * @return RiskDetailList <p>Face blocklist match details. An empty array [] is returned if no match is found.</p>
                     * 
                     */
                    std::vector<RiskDetailItem> GetRiskDetailList() const;

                    /**
                     * 设置<p>Face blocklist match details. An empty array [] is returned if no match is found.</p>
                     * @param _riskDetailList <p>Face blocklist match details. An empty array [] is returned if no match is found.</p>
                     * 
                     */
                    void SetRiskDetailList(const std::vector<RiskDetailItem>& _riskDetailList);

                    /**
                     * 判断参数 RiskDetailList 是否已赋值
                     * @return RiskDetailList 是否已赋值
                     * 
                     */
                    bool RiskDetailListHasBeenSet() const;

                private:

                    /**
                     * <p>Completion of the additional checks in this request, indicating whether the result can be trusted.</p><p>Valid values:</p><ul><li>Completed: Conclusions (matched or passed) have been given for all checks required by this request.</li><li>Partial: At least one check cannot reach a conclusion due to unavailable dependencies, insufficient data, or incomplete or invalid input parameters. The result is for reference only and does not indicate security.</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Additional risk level, which may be an empty string.</p><p>Valid values:</p><ul><li>High: An effective risk match exists (RiskDetailList is not empty in this case).</li><li>Low: The check is completed and no match is confirmed.</li><li>&quot;&quot; (empty string): Unrecognized. No check in this request can reach a conclusion, or not all checks are completed. It indicates neither risk nor security.</li></ul>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>List of matched risk items. An empty array [] is returned if no risk item is matched.</p>
                     */
                    std::vector<BlackListItem> m_blackListResult;
                    bool m_blackListResultHasBeenSet;

                    /**
                     * <p>Face blocklist match details. An empty array [] is returned if no match is found.</p>
                     */
                    std::vector<RiskDetailItem> m_riskDetailList;
                    bool m_riskDetailListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_EXTRARISKRESULT_H_
