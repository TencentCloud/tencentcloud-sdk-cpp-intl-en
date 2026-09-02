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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmAssetCount.h>
#include <tencentcloud/csip/v20221121/model/DspmIpCount.h>
#include <tencentcloud/csip/v20221121/model/DspmAccountCount.h>
#include <tencentcloud/csip/v20221121/model/DspmRiskCount.h>
#include <tencentcloud/csip/v20221121/model/DspmSecurityAnalyseStatusCount.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmStatistics response structure.
                */
                class DescribeDspmStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeDspmStatisticsResponse();
                    ~DescribeDspmStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Asset statistics information</p>
                     * @return AssetCount <p>Asset statistics information</p>
                     * 
                     */
                    DspmAssetCount GetAssetCount() const;

                    /**
                     * 判断参数 AssetCount 是否已赋值
                     * @return AssetCount 是否已赋值
                     * 
                     */
                    bool AssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Ip access statistical information</p>
                     * @return IpCount <p>Ip access statistical information</p>
                     * 
                     */
                    DspmIpCount GetIpCount() const;

                    /**
                     * 判断参数 IpCount 是否已赋值
                     * @return IpCount 是否已赋值
                     * 
                     */
                    bool IpCountHasBeenSet() const;

                    /**
                     * 获取<p>User account statistical information</p>
                     * @return UserCount <p>User account statistical information</p>
                     * 
                     */
                    DspmAccountCount GetUserCount() const;

                    /**
                     * 判断参数 UserCount 是否已赋值
                     * @return UserCount 是否已赋值
                     * 
                     */
                    bool UserCountHasBeenSet() const;

                    /**
                     * 获取<p>Risk statistics</p>
                     * @return RiskCount <p>Risk statistics</p>
                     * 
                     */
                    DspmRiskCount GetRiskCount() const;

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取<p>Asset security analysis statistics information</p>
                     * @return AnalyseAssetStatusCount <p>Asset security analysis statistics information</p>
                     * 
                     */
                    DspmSecurityAnalyseStatusCount GetAnalyseAssetStatusCount() const;

                    /**
                     * 判断参数 AnalyseAssetStatusCount 是否已赋值
                     * @return AnalyseAssetStatusCount 是否已赋值
                     * 
                     */
                    bool AnalyseAssetStatusCountHasBeenSet() const;

                private:

                    /**
                     * <p>Asset statistics information</p>
                     */
                    DspmAssetCount m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * <p>Ip access statistical information</p>
                     */
                    DspmIpCount m_ipCount;
                    bool m_ipCountHasBeenSet;

                    /**
                     * <p>User account statistical information</p>
                     */
                    DspmAccountCount m_userCount;
                    bool m_userCountHasBeenSet;

                    /**
                     * <p>Risk statistics</p>
                     */
                    DspmRiskCount m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * <p>Asset security analysis statistics information</p>
                     */
                    DspmSecurityAnalyseStatusCount m_analyseAssetStatusCount;
                    bool m_analyseAssetStatusCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMSTATISTICSRESPONSE_H_
