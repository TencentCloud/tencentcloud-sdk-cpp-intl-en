/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSAUTOISOLATESAMPLEDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSAUTOISOLATESAMPLEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVirusAutoIsolateSampleDetail response structure.
                */
                class DescribeVirusAutoIsolateSampleDetailResponse : public AbstractModel
                {
                public:
                    DescribeVirusAutoIsolateSampleDetailResponse();
                    ~DescribeVirusAutoIsolateSampleDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取MD5 checksum of the file
                     * @return MD5 MD5 checksum of the file
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 判断参数 MD5 是否已赋值
                     * @return MD5 是否已赋值
                     * 
                     */
                    bool MD5HasBeenSet() const;

                    /**
                     * 获取File size (B)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Size File size (B)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Virus name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VirusName Virus name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVirusName() const;

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     * 
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取Risk level. Valid values: `RISK_CRITICAL`, `RISK_HIGH`, `RISK_MEDIUM`, `RISK_LOW`, `RISK_NOTICE`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskLevel Risk level. Valid values: `RISK_CRITICAL`, `RISK_HIGH`, `RISK_MEDIUM`, `RISK_LOW`, `RISK_NOTICE`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取Anti-virus engine
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KillEngine Anti-virus engine
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetKillEngine() const;

                    /**
                     * 判断参数 KillEngine 是否已赋值
                     * @return KillEngine 是否已赋值
                     * 
                     */
                    bool KillEngineHasBeenSet() const;

                    /**
                     * 获取Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Event description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HarmDescribe Event description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHarmDescribe() const;

                    /**
                     * 判断参数 HarmDescribe 是否已赋值
                     * @return HarmDescribe 是否已赋值
                     * 
                     */
                    bool HarmDescribeHasBeenSet() const;

                    /**
                     * 获取Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SuggestScheme Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSuggestScheme() const;

                    /**
                     * 判断参数 SuggestScheme 是否已赋值
                     * @return SuggestScheme 是否已赋值
                     * 
                     */
                    bool SuggestSchemeHasBeenSet() const;

                    /**
                     * 获取Reference link
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReferenceLink Reference link
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReferenceLink() const;

                    /**
                     * 判断参数 ReferenceLink 是否已赋值
                     * @return ReferenceLink 是否已赋值
                     * 
                     */
                    bool ReferenceLinkHasBeenSet() const;

                private:

                    /**
                     * MD5 checksum of the file
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                    /**
                     * File size (B)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Virus name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * Risk level. Valid values: `RISK_CRITICAL`, `RISK_HIGH`, `RISK_MEDIUM`, `RISK_LOW`, `RISK_NOTICE`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Anti-virus engine
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_killEngine;
                    bool m_killEngineHasBeenSet;

                    /**
                     * Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Event description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_harmDescribe;
                    bool m_harmDescribeHasBeenSet;

                    /**
                     * Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_suggestScheme;
                    bool m_suggestSchemeHasBeenSet;

                    /**
                     * Reference link
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_referenceLink;
                    bool m_referenceLinkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSAUTOISOLATESAMPLEDETAILRESPONSE_H_
