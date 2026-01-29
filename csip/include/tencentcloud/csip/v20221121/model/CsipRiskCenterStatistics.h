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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CSIPRISKCENTERSTATISTICS_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CSIPRISKCENTERSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Risk center risk overview statistics.
                */
                class CsipRiskCenterStatistics : public AbstractModel
                {
                public:
                    CsipRiskCenterStatistics();
                    ~CsipRiskCenterStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total Number of Port Risks
                     * @return PortTotal Total Number of Port Risks
                     * 
                     */
                    uint64_t GetPortTotal() const;

                    /**
                     * 设置Total Number of Port Risks
                     * @param _portTotal Total Number of Port Risks
                     * 
                     */
                    void SetPortTotal(const uint64_t& _portTotal);

                    /**
                     * 判断参数 PortTotal 是否已赋值
                     * @return PortTotal 是否已赋值
                     * 
                     */
                    bool PortTotalHasBeenSet() const;

                    /**
                     * 获取High Port Risk Count
                     * @return PortHighLevel High Port Risk Count
                     * 
                     */
                    uint64_t GetPortHighLevel() const;

                    /**
                     * 设置High Port Risk Count
                     * @param _portHighLevel High Port Risk Count
                     * 
                     */
                    void SetPortHighLevel(const uint64_t& _portHighLevel);

                    /**
                     * 判断参数 PortHighLevel 是否已赋值
                     * @return PortHighLevel 是否已赋值
                     * 
                     */
                    bool PortHighLevelHasBeenSet() const;

                    /**
                     * 获取	Total number of weak password risks.
                     * @return WeakPasswordTotal 	Total number of weak password risks.
                     * 
                     */
                    uint64_t GetWeakPasswordTotal() const;

                    /**
                     * 设置	Total number of weak password risks.
                     * @param _weakPasswordTotal 	Total number of weak password risks.
                     * 
                     */
                    void SetWeakPasswordTotal(const uint64_t& _weakPasswordTotal);

                    /**
                     * 判断参数 WeakPasswordTotal 是否已赋值
                     * @return WeakPasswordTotal 是否已赋值
                     * 
                     */
                    bool WeakPasswordTotalHasBeenSet() const;

                    /**
                     * 获取High Weak Password Risk Count
                     * @return WeakPasswordHighLevel High Weak Password Risk Count
                     * 
                     */
                    uint64_t GetWeakPasswordHighLevel() const;

                    /**
                     * 设置High Weak Password Risk Count
                     * @param _weakPasswordHighLevel High Weak Password Risk Count
                     * 
                     */
                    void SetWeakPasswordHighLevel(const uint64_t& _weakPasswordHighLevel);

                    /**
                     * 判断参数 WeakPasswordHighLevel 是否已赋值
                     * @return WeakPasswordHighLevel 是否已赋值
                     * 
                     */
                    bool WeakPasswordHighLevelHasBeenSet() const;

                    /**
                     * 获取Website Risk Count
                     * @return WebsiteTotal Website Risk Count
                     * 
                     */
                    uint64_t GetWebsiteTotal() const;

                    /**
                     * 设置Website Risk Count
                     * @param _websiteTotal Website Risk Count
                     * 
                     */
                    void SetWebsiteTotal(const uint64_t& _websiteTotal);

                    /**
                     * 判断参数 WebsiteTotal 是否已赋值
                     * @return WebsiteTotal 是否已赋值
                     * 
                     */
                    bool WebsiteTotalHasBeenSet() const;

                    /**
                     * 获取Number of High Risks on Websites
                     * @return WebsiteHighLevel Number of High Risks on Websites
                     * 
                     */
                    uint64_t GetWebsiteHighLevel() const;

                    /**
                     * 设置Number of High Risks on Websites
                     * @param _websiteHighLevel Number of High Risks on Websites
                     * 
                     */
                    void SetWebsiteHighLevel(const uint64_t& _websiteHighLevel);

                    /**
                     * 判断参数 WebsiteHighLevel 是否已赋值
                     * @return WebsiteHighLevel 是否已赋值
                     * 
                     */
                    bool WebsiteHighLevelHasBeenSet() const;

                    /**
                     * 获取Time of the Latest Scan
                     * @return LastScanTime Time of the Latest Scan
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置Time of the Latest Scan
                     * @param _lastScanTime Time of the Latest Scan
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取Number of vulnerability risks.
                     * @return VULTotal Number of vulnerability risks.
                     * 
                     */
                    int64_t GetVULTotal() const;

                    /**
                     * 设置Number of vulnerability risks.
                     * @param _vULTotal Number of vulnerability risks.
                     * 
                     */
                    void SetVULTotal(const int64_t& _vULTotal);

                    /**
                     * 判断参数 VULTotal 是否已赋值
                     * @return VULTotal 是否已赋值
                     * 
                     */
                    bool VULTotalHasBeenSet() const;

                    /**
                     * 获取Number of High-Risk Vulnerability Risks
                     * @return VULHighLevel Number of High-Risk Vulnerability Risks
                     * 
                     */
                    int64_t GetVULHighLevel() const;

                    /**
                     * 设置Number of High-Risk Vulnerability Risks
                     * @param _vULHighLevel Number of High-Risk Vulnerability Risks
                     * 
                     */
                    void SetVULHighLevel(const int64_t& _vULHighLevel);

                    /**
                     * 判断参数 VULHighLevel 是否已赋值
                     * @return VULHighLevel 是否已赋值
                     * 
                     */
                    bool VULHighLevelHasBeenSet() const;

                    /**
                     * 获取Number of Configuration Item Risks
                     * @return CFGTotal Number of Configuration Item Risks
                     * 
                     */
                    int64_t GetCFGTotal() const;

                    /**
                     * 设置Number of Configuration Item Risks
                     * @param _cFGTotal Number of Configuration Item Risks
                     * 
                     */
                    void SetCFGTotal(const int64_t& _cFGTotal);

                    /**
                     * 判断参数 CFGTotal 是否已赋值
                     * @return CFGTotal 是否已赋值
                     * 
                     */
                    bool CFGTotalHasBeenSet() const;

                    /**
                     * 获取Number of High-Risk Configuration Item Risks
                     * @return CFGHighLevel Number of High-Risk Configuration Item Risks
                     * 
                     */
                    int64_t GetCFGHighLevel() const;

                    /**
                     * 设置Number of High-Risk Configuration Item Risks
                     * @param _cFGHighLevel Number of High-Risk Configuration Item Risks
                     * 
                     */
                    void SetCFGHighLevel(const int64_t& _cFGHighLevel);

                    /**
                     * 判断参数 CFGHighLevel 是否已赋值
                     * @return CFGHighLevel 是否已赋值
                     * 
                     */
                    bool CFGHighLevelHasBeenSet() const;

                    /**
                     * 获取Mapping Service Risk Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServerTotal Mapping Service Risk Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetServerTotal() const;

                    /**
                     * 设置Mapping Service Risk Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serverTotal Mapping Service Risk Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServerTotal(const int64_t& _serverTotal);

                    /**
                     * 判断参数 ServerTotal 是否已赋值
                     * @return ServerTotal 是否已赋值
                     * 
                     */
                    bool ServerTotalHasBeenSet() const;

                    /**
                     * 获取High Mapping Service Risk Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServerHighLevel High Mapping Service Risk Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetServerHighLevel() const;

                    /**
                     * 设置High Mapping Service Risk Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serverHighLevel High Mapping Service Risk Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServerHighLevel(const int64_t& _serverHighLevel);

                    /**
                     * 判断参数 ServerHighLevel 是否已赋值
                     * @return ServerHighLevel 是否已赋值
                     * 
                     */
                    bool ServerHighLevelHasBeenSet() const;

                    /**
                     * 获取Number of host baseline risks.
                     * @return HostBaseLineRiskTotal Number of host baseline risks.
                     * 
                     */
                    int64_t GetHostBaseLineRiskTotal() const;

                    /**
                     * 设置Number of host baseline risks.
                     * @param _hostBaseLineRiskTotal Number of host baseline risks.
                     * 
                     */
                    void SetHostBaseLineRiskTotal(const int64_t& _hostBaseLineRiskTotal);

                    /**
                     * 判断参数 HostBaseLineRiskTotal 是否已赋值
                     * @return HostBaseLineRiskTotal 是否已赋值
                     * 
                     */
                    bool HostBaseLineRiskTotalHasBeenSet() const;

                    /**
                     * 获取Number of high-risk risks.
                     * @return HostBaseLineRiskHighLevel Number of high-risk risks.
                     * 
                     */
                    int64_t GetHostBaseLineRiskHighLevel() const;

                    /**
                     * 设置Number of high-risk risks.
                     * @param _hostBaseLineRiskHighLevel Number of high-risk risks.
                     * 
                     */
                    void SetHostBaseLineRiskHighLevel(const int64_t& _hostBaseLineRiskHighLevel);

                    /**
                     * 判断参数 HostBaseLineRiskHighLevel 是否已赋值
                     * @return HostBaseLineRiskHighLevel 是否已赋值
                     * 
                     */
                    bool HostBaseLineRiskHighLevelHasBeenSet() const;

                    /**
                     * 获取Baseline risk count of the container.
                     * @return PodBaseLineRiskTotal Baseline risk count of the container.
                     * 
                     */
                    int64_t GetPodBaseLineRiskTotal() const;

                    /**
                     * 设置Baseline risk count of the container.
                     * @param _podBaseLineRiskTotal Baseline risk count of the container.
                     * 
                     */
                    void SetPodBaseLineRiskTotal(const int64_t& _podBaseLineRiskTotal);

                    /**
                     * 判断参数 PodBaseLineRiskTotal 是否已赋值
                     * @return PodBaseLineRiskTotal 是否已赋值
                     * 
                     */
                    bool PodBaseLineRiskTotalHasBeenSet() const;

                    /**
                     * 获取Number of high-risk baseline risks in the container.
                     * @return PodBaseLineRiskHighLevel Number of high-risk baseline risks in the container.
                     * 
                     */
                    int64_t GetPodBaseLineRiskHighLevel() const;

                    /**
                     * 设置Number of high-risk baseline risks in the container.
                     * @param _podBaseLineRiskHighLevel Number of high-risk baseline risks in the container.
                     * 
                     */
                    void SetPodBaseLineRiskHighLevel(const int64_t& _podBaseLineRiskHighLevel);

                    /**
                     * 判断参数 PodBaseLineRiskHighLevel 是否已赋值
                     * @return PodBaseLineRiskHighLevel 是否已赋值
                     * 
                     */
                    bool PodBaseLineRiskHighLevelHasBeenSet() const;

                private:

                    /**
                     * Total Number of Port Risks
                     */
                    uint64_t m_portTotal;
                    bool m_portTotalHasBeenSet;

                    /**
                     * High Port Risk Count
                     */
                    uint64_t m_portHighLevel;
                    bool m_portHighLevelHasBeenSet;

                    /**
                     * 	Total number of weak password risks.
                     */
                    uint64_t m_weakPasswordTotal;
                    bool m_weakPasswordTotalHasBeenSet;

                    /**
                     * High Weak Password Risk Count
                     */
                    uint64_t m_weakPasswordHighLevel;
                    bool m_weakPasswordHighLevelHasBeenSet;

                    /**
                     * Website Risk Count
                     */
                    uint64_t m_websiteTotal;
                    bool m_websiteTotalHasBeenSet;

                    /**
                     * Number of High Risks on Websites
                     */
                    uint64_t m_websiteHighLevel;
                    bool m_websiteHighLevelHasBeenSet;

                    /**
                     * Time of the Latest Scan
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * Number of vulnerability risks.
                     */
                    int64_t m_vULTotal;
                    bool m_vULTotalHasBeenSet;

                    /**
                     * Number of High-Risk Vulnerability Risks
                     */
                    int64_t m_vULHighLevel;
                    bool m_vULHighLevelHasBeenSet;

                    /**
                     * Number of Configuration Item Risks
                     */
                    int64_t m_cFGTotal;
                    bool m_cFGTotalHasBeenSet;

                    /**
                     * Number of High-Risk Configuration Item Risks
                     */
                    int64_t m_cFGHighLevel;
                    bool m_cFGHighLevelHasBeenSet;

                    /**
                     * Mapping Service Risk Count
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_serverTotal;
                    bool m_serverTotalHasBeenSet;

                    /**
                     * High Mapping Service Risk Count
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_serverHighLevel;
                    bool m_serverHighLevelHasBeenSet;

                    /**
                     * Number of host baseline risks.
                     */
                    int64_t m_hostBaseLineRiskTotal;
                    bool m_hostBaseLineRiskTotalHasBeenSet;

                    /**
                     * Number of high-risk risks.
                     */
                    int64_t m_hostBaseLineRiskHighLevel;
                    bool m_hostBaseLineRiskHighLevelHasBeenSet;

                    /**
                     * Baseline risk count of the container.
                     */
                    int64_t m_podBaseLineRiskTotal;
                    bool m_podBaseLineRiskTotalHasBeenSet;

                    /**
                     * Number of high-risk baseline risks in the container.
                     */
                    int64_t m_podBaseLineRiskHighLevel;
                    bool m_podBaseLineRiskHighLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CSIPRISKCENTERSTATISTICS_H_
