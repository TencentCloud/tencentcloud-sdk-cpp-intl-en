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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESERVERSANDRISKANDFIRSTINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESERVERSANDRISKANDFIRSTINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeServersAndRiskAndFirstInfo response structure.
                */
                class DescribeServersAndRiskAndFirstInfoResponse : public AbstractModel
                {
                public:
                    DescribeServersAndRiskAndFirstInfoResponse();
                    ~DescribeServersAndRiskAndFirstInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of risky files
                     * @return RiskFileCount Number of risky files
                     * 
                     */
                    uint64_t GetRiskFileCount() const;

                    /**
                     * 判断参数 RiskFileCount 是否已赋值
                     * @return RiskFileCount 是否已赋值
                     * 
                     */
                    bool RiskFileCountHasBeenSet() const;

                    /**
                     * 获取New risky files today
                     * @return AddRiskFileCount New risky files today
                     * 
                     */
                    uint64_t GetAddRiskFileCount() const;

                    /**
                     * 判断参数 AddRiskFileCount 是否已赋值
                     * @return AddRiskFileCount 是否已赋值
                     * 
                     */
                    bool AddRiskFileCountHasBeenSet() const;

                    /**
                     * 获取Number of affected servers
                     * @return ServersCount Number of affected servers
                     * 
                     */
                    uint64_t GetServersCount() const;

                    /**
                     * 判断参数 ServersCount 是否已赋值
                     * @return ServersCount 是否已赋值
                     * 
                     */
                    bool ServersCountHasBeenSet() const;

                    /**
                     * 获取Whether it is in trial. true: yes; false: no.
                     * @return IsFirstCheck Whether it is in trial. true: yes; false: no.
                     * 
                     */
                    bool GetIsFirstCheck() const;

                    /**
                     * 判断参数 IsFirstCheck 是否已赋值
                     * @return IsFirstCheck 是否已赋值
                     * 
                     */
                    bool IsFirstCheckHasBeenSet() const;

                    /**
                     * 获取Last Trojan detection time
                     * @return ScanTime Last Trojan detection time
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                private:

                    /**
                     * Number of risky files
                     */
                    uint64_t m_riskFileCount;
                    bool m_riskFileCountHasBeenSet;

                    /**
                     * New risky files today
                     */
                    uint64_t m_addRiskFileCount;
                    bool m_addRiskFileCountHasBeenSet;

                    /**
                     * Number of affected servers
                     */
                    uint64_t m_serversCount;
                    bool m_serversCountHasBeenSet;

                    /**
                     * Whether it is in trial. true: yes; false: no.
                     */
                    bool m_isFirstCheck;
                    bool m_isFirstCheckHasBeenSet;

                    /**
                     * Last Trojan detection time
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESERVERSANDRISKANDFIRSTINFORESPONSE_H_
