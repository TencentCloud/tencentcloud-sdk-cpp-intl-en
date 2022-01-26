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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBESECURITYTRENDSRESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBESECURITYTRENDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunjing/v20180228/model/SecurityTrend.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeSecurityTrends response structure.
                */
                class DescribeSecurityTrendsResponse : public AbstractModel
                {
                public:
                    DescribeSecurityTrendsResponse();
                    ~DescribeSecurityTrendsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Trojan event statistics array.
                     * @return Malwares Trojan event statistics array.
                     */
                    std::vector<SecurityTrend> GetMalwares() const;

                    /**
                     * 判断参数 Malwares 是否已赋值
                     * @return Malwares 是否已赋值
                     */
                    bool MalwaresHasBeenSet() const;

                    /**
                     * 获取Unusual login location event statistics array.
                     * @return NonLocalLoginPlaces Unusual login location event statistics array.
                     */
                    std::vector<SecurityTrend> GetNonLocalLoginPlaces() const;

                    /**
                     * 判断参数 NonLocalLoginPlaces 是否已赋值
                     * @return NonLocalLoginPlaces 是否已赋值
                     */
                    bool NonLocalLoginPlacesHasBeenSet() const;

                    /**
                     * 获取Brute force attack event statistics array.
                     * @return BruteAttacks Brute force attack event statistics array.
                     */
                    std::vector<SecurityTrend> GetBruteAttacks() const;

                    /**
                     * 判断参数 BruteAttacks 是否已赋值
                     * @return BruteAttacks 是否已赋值
                     */
                    bool BruteAttacksHasBeenSet() const;

                    /**
                     * 获取Vulnerability statistics array.
                     * @return Vuls Vulnerability statistics array.
                     */
                    std::vector<SecurityTrend> GetVuls() const;

                    /**
                     * 判断参数 Vuls 是否已赋值
                     * @return Vuls 是否已赋值
                     */
                    bool VulsHasBeenSet() const;

                    /**
                     * 获取Baseline statistics array.
                     * @return BaseLines Baseline statistics array.
                     */
                    std::vector<SecurityTrend> GetBaseLines() const;

                    /**
                     * 判断参数 BaseLines 是否已赋值
                     * @return BaseLines 是否已赋值
                     */
                    bool BaseLinesHasBeenSet() const;

                    /**
                     * 获取Statistics array of malicious requests.
                     * @return MaliciousRequests Statistics array of malicious requests.
                     */
                    std::vector<SecurityTrend> GetMaliciousRequests() const;

                    /**
                     * 判断参数 MaliciousRequests 是否已赋值
                     * @return MaliciousRequests 是否已赋值
                     */
                    bool MaliciousRequestsHasBeenSet() const;

                    /**
                     * 获取Statistics array of high-risk commands.
                     * @return HighRiskBashs Statistics array of high-risk commands.
                     */
                    std::vector<SecurityTrend> GetHighRiskBashs() const;

                    /**
                     * 判断参数 HighRiskBashs 是否已赋值
                     * @return HighRiskBashs 是否已赋值
                     */
                    bool HighRiskBashsHasBeenSet() const;

                    /**
                     * 获取Statistics array of reverse shells.
                     * @return ReverseShells Statistics array of reverse shells.
                     */
                    std::vector<SecurityTrend> GetReverseShells() const;

                    /**
                     * 判断参数 ReverseShells 是否已赋值
                     * @return ReverseShells 是否已赋值
                     */
                    bool ReverseShellsHasBeenSet() const;

                    /**
                     * 获取Statistics array of local privilege escalations.
                     * @return PrivilegeEscalations Statistics array of local privilege escalations.
                     */
                    std::vector<SecurityTrend> GetPrivilegeEscalations() const;

                    /**
                     * 判断参数 PrivilegeEscalations 是否已赋值
                     * @return PrivilegeEscalations 是否已赋值
                     */
                    bool PrivilegeEscalationsHasBeenSet() const;

                    /**
                     * 获取Statistics array of network attacks.
                     * @return CyberAttacks Statistics array of network attacks.
                     */
                    std::vector<SecurityTrend> GetCyberAttacks() const;

                    /**
                     * 判断参数 CyberAttacks 是否已赋值
                     * @return CyberAttacks 是否已赋值
                     */
                    bool CyberAttacksHasBeenSet() const;

                private:

                    /**
                     * Trojan event statistics array.
                     */
                    std::vector<SecurityTrend> m_malwares;
                    bool m_malwaresHasBeenSet;

                    /**
                     * Unusual login location event statistics array.
                     */
                    std::vector<SecurityTrend> m_nonLocalLoginPlaces;
                    bool m_nonLocalLoginPlacesHasBeenSet;

                    /**
                     * Brute force attack event statistics array.
                     */
                    std::vector<SecurityTrend> m_bruteAttacks;
                    bool m_bruteAttacksHasBeenSet;

                    /**
                     * Vulnerability statistics array.
                     */
                    std::vector<SecurityTrend> m_vuls;
                    bool m_vulsHasBeenSet;

                    /**
                     * Baseline statistics array.
                     */
                    std::vector<SecurityTrend> m_baseLines;
                    bool m_baseLinesHasBeenSet;

                    /**
                     * Statistics array of malicious requests.
                     */
                    std::vector<SecurityTrend> m_maliciousRequests;
                    bool m_maliciousRequestsHasBeenSet;

                    /**
                     * Statistics array of high-risk commands.
                     */
                    std::vector<SecurityTrend> m_highRiskBashs;
                    bool m_highRiskBashsHasBeenSet;

                    /**
                     * Statistics array of reverse shells.
                     */
                    std::vector<SecurityTrend> m_reverseShells;
                    bool m_reverseShellsHasBeenSet;

                    /**
                     * Statistics array of local privilege escalations.
                     */
                    std::vector<SecurityTrend> m_privilegeEscalations;
                    bool m_privilegeEscalationsHasBeenSet;

                    /**
                     * Statistics array of network attacks.
                     */
                    std::vector<SecurityTrend> m_cyberAttacks;
                    bool m_cyberAttacksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBESECURITYTRENDSRESPONSE_H_
