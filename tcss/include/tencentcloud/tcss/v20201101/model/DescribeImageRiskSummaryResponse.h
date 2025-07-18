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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGERISKSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGERISKSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeRiskInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeImageRiskSummary response structure.
                */
                class DescribeImageRiskSummaryResponse : public AbstractModel
                {
                public:
                    DescribeImageRiskSummaryResponse();
                    ~DescribeImageRiskSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Vulnerability
                     * @return VulnerabilityCnt Vulnerability
                     * 
                     */
                    std::vector<RunTimeRiskInfo> GetVulnerabilityCnt() const;

                    /**
                     * 判断参数 VulnerabilityCnt 是否已赋值
                     * @return VulnerabilityCnt 是否已赋值
                     * 
                     */
                    bool VulnerabilityCntHasBeenSet() const;

                    /**
                     * 获取Virus and trojan
                     * @return MalwareVirusCnt Virus and trojan
                     * 
                     */
                    std::vector<RunTimeRiskInfo> GetMalwareVirusCnt() const;

                    /**
                     * 判断参数 MalwareVirusCnt 是否已赋值
                     * @return MalwareVirusCnt 是否已赋值
                     * 
                     */
                    bool MalwareVirusCntHasBeenSet() const;

                    /**
                     * 获取Sensitive data
                     * @return RiskCnt Sensitive data
                     * 
                     */
                    std::vector<RunTimeRiskInfo> GetRiskCnt() const;

                    /**
                     * 判断参数 RiskCnt 是否已赋值
                     * @return RiskCnt 是否已赋值
                     * 
                     */
                    bool RiskCntHasBeenSet() const;

                private:

                    /**
                     * Vulnerability
                     */
                    std::vector<RunTimeRiskInfo> m_vulnerabilityCnt;
                    bool m_vulnerabilityCntHasBeenSet;

                    /**
                     * Virus and trojan
                     */
                    std::vector<RunTimeRiskInfo> m_malwareVirusCnt;
                    bool m_malwareVirusCntHasBeenSet;

                    /**
                     * Sensitive data
                     */
                    std::vector<RunTimeRiskInfo> m_riskCnt;
                    bool m_riskCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGERISKSUMMARYRESPONSE_H_
