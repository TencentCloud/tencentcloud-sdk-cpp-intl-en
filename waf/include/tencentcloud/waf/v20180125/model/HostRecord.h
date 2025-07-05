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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_HOSTRECORD_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_HOSTRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/LoadBalancer.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Information on domain names protected by CLB WAF
                */
                class HostRecord : public AbstractModel
                {
                public:
                    HostRecord();
                    ~HostRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Unique domain name ID
                     * @return DomainId Unique domain name ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置Unique domain name ID
                     * @param _domainId Unique domain name ID
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取Primary Domain, empty upon input
                     * @return MainDomain Primary Domain, empty upon input
                     * 
                     */
                    std::string GetMainDomain() const;

                    /**
                     * 设置Primary Domain, empty upon input
                     * @param _mainDomain Primary Domain, empty upon input
                     * 
                     */
                    void SetMainDomain(const std::string& _mainDomain);

                    /**
                     * 判断参数 MainDomain 是否已赋值
                     * @return MainDomain 是否已赋值
                     * 
                     */
                    bool MainDomainHasBeenSet() const;

                    /**
                     * 获取Rule engine protection mode
0: observation mode
1: interception mode
                     * @return Mode Rule engine protection mode
0: observation mode
1: interception mode
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置Rule engine protection mode
0: observation mode
1: interception mode
                     * @param _mode Rule engine protection mode
0: observation mode
1: interception mode
                     * 
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Binding relationship between WAF and CLB
0: unbound
1: bound
                     * @return Status Binding relationship between WAF and CLB
0: unbound
1: bound
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Binding relationship between WAF and CLB
0: unbound
1: bound
                     * @param _status Binding relationship between WAF and CLB
0: unbound
1: bound
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Domain name listener status of CLB WAF
0: operation successful
4: CLB instance binding in progress
6: CLB instance unbinding in progress
7: CLB instance unbinding failed
8: CLB instance binding failed
10: internal error
                     * @return State Domain name listener status of CLB WAF
0: operation successful
4: CLB instance binding in progress
6: CLB instance unbinding in progress
7: CLB instance unbinding failed
8: CLB instance binding failed
10: internal error
                     * 
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置Domain name listener status of CLB WAF
0: operation successful
4: CLB instance binding in progress
6: CLB instance unbinding in progress
7: CLB instance unbinding failed
8: CLB instance binding failed
10: internal error
                     * @param _state Domain name listener status of CLB WAF
0: operation successful
4: CLB instance binding in progress
6: CLB instance unbinding in progress
7: CLB instance unbinding failed
8: CLB instance binding failed
10: internal error
                     * 
                     */
                    void SetState(const uint64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Status of the rule engine and AI engine
1: initial status. Interception for the rule engine and disabled for the AI engine.
10: observation for the rule engine and disabled for the AI engine
11: observation for both the rule engine and AI engine
12: observation for the rule engine and interception for the AI engine
20: interception for the rule engine and disabled for the AI engine
21: interception for the rule engine and observation for the AI engine
22: interception for both the rule engine and AI engine
                     * @return Engine Status of the rule engine and AI engine
1: initial status. Interception for the rule engine and disabled for the AI engine.
10: observation for the rule engine and disabled for the AI engine
11: observation for both the rule engine and AI engine
12: observation for the rule engine and interception for the AI engine
20: interception for the rule engine and disabled for the AI engine
21: interception for the rule engine and observation for the AI engine
22: interception for both the rule engine and AI engine
                     * 
                     */
                    uint64_t GetEngine() const;

                    /**
                     * 设置Status of the rule engine and AI engine
1: initial status. Interception for the rule engine and disabled for the AI engine.
10: observation for the rule engine and disabled for the AI engine
11: observation for both the rule engine and AI engine
12: observation for the rule engine and interception for the AI engine
20: interception for the rule engine and disabled for the AI engine
21: interception for the rule engine and observation for the AI engine
22: interception for both the rule engine and AI engine
                     * @param _engine Status of the rule engine and AI engine
1: initial status. Interception for the rule engine and disabled for the AI engine.
10: observation for the rule engine and disabled for the AI engine
11: observation for both the rule engine and AI engine
12: observation for the rule engine and interception for the AI engine
20: interception for the rule engine and disabled for the AI engine
21: interception for the rule engine and observation for the AI engine
22: interception for both the rule engine and AI engine
                     * 
                     */
                    void SetEngine(const uint64_t& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取Whether a layer-7 proxy service is deployed before WAF. 0: No proxy service deployed; 1: Proxy service deployed, and WAF will use XFF to obtain the client IP address; 2: Proxy service deployed, and WAF will use remote_addr to obtain the client IP address; 3: Proxy service deployed, and WAF will use the custom header in ip_headers to obtain the client IP address.
                     * @return IsCdn Whether a layer-7 proxy service is deployed before WAF. 0: No proxy service deployed; 1: Proxy service deployed, and WAF will use XFF to obtain the client IP address; 2: Proxy service deployed, and WAF will use remote_addr to obtain the client IP address; 3: Proxy service deployed, and WAF will use the custom header in ip_headers to obtain the client IP address.
                     * 
                     */
                    uint64_t GetIsCdn() const;

                    /**
                     * 设置Whether a layer-7 proxy service is deployed before WAF. 0: No proxy service deployed; 1: Proxy service deployed, and WAF will use XFF to obtain the client IP address; 2: Proxy service deployed, and WAF will use remote_addr to obtain the client IP address; 3: Proxy service deployed, and WAF will use the custom header in ip_headers to obtain the client IP address.
                     * @param _isCdn Whether a layer-7 proxy service is deployed before WAF. 0: No proxy service deployed; 1: Proxy service deployed, and WAF will use XFF to obtain the client IP address; 2: Proxy service deployed, and WAF will use remote_addr to obtain the client IP address; 3: Proxy service deployed, and WAF will use the custom header in ip_headers to obtain the client IP address.
                     * 
                     */
                    void SetIsCdn(const uint64_t& _isCdn);

                    /**
                     * 判断参数 IsCdn 是否已赋值
                     * @return IsCdn 是否已赋值
                     * 
                     */
                    bool IsCdnHasBeenSet() const;

                    /**
                     * 获取List of the information on the bound CLB instance
                     * @return LoadBalancerSet List of the information on the bound CLB instance
                     * 
                     */
                    std::vector<LoadBalancer> GetLoadBalancerSet() const;

                    /**
                     * 设置List of the information on the bound CLB instance
                     * @param _loadBalancerSet List of the information on the bound CLB instance
                     * 
                     */
                    void SetLoadBalancerSet(const std::vector<LoadBalancer>& _loadBalancerSet);

                    /**
                     * 判断参数 LoadBalancerSet 是否已赋值
                     * @return LoadBalancerSet 是否已赋值
                     * 
                     */
                    bool LoadBalancerSetHasBeenSet() const;

                    /**
                     * 获取Region of the CLB instance bound to the domain name. Separate multiple regions by commas.
                     * @return Region Region of the CLB instance bound to the domain name. Separate multiple regions by commas.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region of the CLB instance bound to the domain name. Separate multiple regions by commas.
                     * @param _region Region of the CLB instance bound to the domain name. Separate multiple regions by commas.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Instance type of the domain name. For CLB WAF, the value is "clb-waf".
                     * @return Edition Instance type of the domain name. For CLB WAF, the value is "clb-waf".
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置Instance type of the domain name. For CLB WAF, the value is "clb-waf".
                     * @param _edition Instance type of the domain name. For CLB WAF, the value is "clb-waf".
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取Traffic mode of domain names protected by CLB WAF
1: cleaning mode
0: mirror mode
                     * @return FlowMode Traffic mode of domain names protected by CLB WAF
1: cleaning mode
0: mirror mode
                     * 
                     */
                    uint64_t GetFlowMode() const;

                    /**
                     * 设置Traffic mode of domain names protected by CLB WAF
1: cleaning mode
0: mirror mode
                     * @param _flowMode Traffic mode of domain names protected by CLB WAF
1: cleaning mode
0: mirror mode
                     * 
                     */
                    void SetFlowMode(const uint64_t& _flowMode);

                    /**
                     * 判断参数 FlowMode 是否已赋值
                     * @return FlowMode 是否已赋值
                     * 
                     */
                    bool FlowModeHasBeenSet() const;

                    /**
                     * 获取Whether to enable access logging
1: enable
0: disable
                     * @return ClsStatus Whether to enable access logging
1: enable
0: disable
                     * 
                     */
                    uint64_t GetClsStatus() const;

                    /**
                     * 设置Whether to enable access logging
1: enable
0: disable
                     * @param _clsStatus Whether to enable access logging
1: enable
0: disable
                     * 
                     */
                    void SetClsStatus(const uint64_t& _clsStatus);

                    /**
                     * 判断参数 ClsStatus 是否已赋值
                     * @return ClsStatus 是否已赋值
                     * 
                     */
                    bool ClsStatusHasBeenSet() const;

                    /**
                     * 获取Protection Level, Optional Values: 100, 200, 300

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Level Protection Level, Optional Values: 100, 200, 300

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Protection Level, Optional Values: 100, 200, 300

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _level Protection Level, Optional Values: 100, 200, 300

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取List of CDC clusters to which the domain name needs to be delivered. Specify this parameter for CDC scenes only.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CdcClusters List of CDC clusters to which the domain name needs to be delivered. Specify this parameter for CDC scenes only.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetCdcClusters() const;

                    /**
                     * 设置List of CDC clusters to which the domain name needs to be delivered. Specify this parameter for CDC scenes only.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cdcClusters List of CDC clusters to which the domain name needs to be delivered. Specify this parameter for CDC scenes only.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCdcClusters(const std::vector<std::string>& _cdcClusters);

                    /**
                     * 判断参数 CdcClusters 是否已赋值
                     * @return CdcClusters 是否已赋值
                     * 
                     */
                    bool CdcClustersHasBeenSet() const;

                    /**
                     * 获取Application CLB type. Default value: clb. 
clb: layer-7 CLB
tsegw: Tencent Cloud API Gateway
scf: Tencent Cloud Serverless
apisix: Other Tencent Cloud Gateway. eg: APISIX gateway
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlbType Application CLB type. Default value: clb. 
clb: layer-7 CLB
tsegw: Tencent Cloud API Gateway
scf: Tencent Cloud Serverless
apisix: Other Tencent Cloud Gateway. eg: APISIX gateway
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAlbType() const;

                    /**
                     * 设置Application CLB type. Default value: clb. 
clb: layer-7 CLB
tsegw: Tencent Cloud API Gateway
scf: Tencent Cloud Serverless
apisix: Other Tencent Cloud Gateway. eg: APISIX gateway
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _albType Application CLB type. Default value: clb. 
clb: layer-7 CLB
tsegw: Tencent Cloud API Gateway
scf: Tencent Cloud Serverless
apisix: Other Tencent Cloud Gateway. eg: APISIX gateway
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAlbType(const std::string& _albType);

                    /**
                     * 判断参数 AlbType 是否已赋值
                     * @return AlbType 是否已赋值
                     * 
                     */
                    bool AlbTypeHasBeenSet() const;

                    /**
                     * 获取IsCdn=3 required for this parameter, indicates custom header

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IpHeaders IsCdn=3 required for this parameter, indicates custom header

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetIpHeaders() const;

                    /**
                     * 设置IsCdn=3 required for this parameter, indicates custom header

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ipHeaders IsCdn=3 required for this parameter, indicates custom header

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIpHeaders(const std::vector<std::string>& _ipHeaders);

                    /**
                     * 判断参数 IpHeaders 是否已赋值
                     * @return IpHeaders 是否已赋值
                     * 
                     */
                    bool IpHeadersHasBeenSet() const;

                    /**
                     * 获取Rule engine type
1: menshen
2: tiga
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineType Rule engine type
1: menshen
2: tiga
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEngineType() const;

                    /**
                     * 设置Rule engine type
1: menshen
2: tiga
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineType Rule engine type
1: menshen
2: tiga
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineType(const int64_t& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取Cloud type
public: public cloud
private: private cloud
hybrid: hybrid cloud
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloudType Cloud type
public: public cloud
private: private cloud
hybrid: hybrid cloud
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCloudType() const;

                    /**
                     * 设置Cloud type
public: public cloud
private: private cloud
hybrid: hybrid cloud
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cloudType Cloud type
public: public cloud
private: private cloud
hybrid: hybrid cloud
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCloudType(const std::string& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取Domain name remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Note Domain name remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置Domain name remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _note Domain name remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Unique domain name ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * Primary Domain, empty upon input
                     */
                    std::string m_mainDomain;
                    bool m_mainDomainHasBeenSet;

                    /**
                     * Rule engine protection mode
0: observation mode
1: interception mode
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Binding relationship between WAF and CLB
0: unbound
1: bound
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Domain name listener status of CLB WAF
0: operation successful
4: CLB instance binding in progress
6: CLB instance unbinding in progress
7: CLB instance unbinding failed
8: CLB instance binding failed
10: internal error
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Status of the rule engine and AI engine
1: initial status. Interception for the rule engine and disabled for the AI engine.
10: observation for the rule engine and disabled for the AI engine
11: observation for both the rule engine and AI engine
12: observation for the rule engine and interception for the AI engine
20: interception for the rule engine and disabled for the AI engine
21: interception for the rule engine and observation for the AI engine
22: interception for both the rule engine and AI engine
                     */
                    uint64_t m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * Whether a layer-7 proxy service is deployed before WAF. 0: No proxy service deployed; 1: Proxy service deployed, and WAF will use XFF to obtain the client IP address; 2: Proxy service deployed, and WAF will use remote_addr to obtain the client IP address; 3: Proxy service deployed, and WAF will use the custom header in ip_headers to obtain the client IP address.
                     */
                    uint64_t m_isCdn;
                    bool m_isCdnHasBeenSet;

                    /**
                     * List of the information on the bound CLB instance
                     */
                    std::vector<LoadBalancer> m_loadBalancerSet;
                    bool m_loadBalancerSetHasBeenSet;

                    /**
                     * Region of the CLB instance bound to the domain name. Separate multiple regions by commas.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Instance type of the domain name. For CLB WAF, the value is "clb-waf".
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * Traffic mode of domain names protected by CLB WAF
1: cleaning mode
0: mirror mode
                     */
                    uint64_t m_flowMode;
                    bool m_flowModeHasBeenSet;

                    /**
                     * Whether to enable access logging
1: enable
0: disable
                     */
                    uint64_t m_clsStatus;
                    bool m_clsStatusHasBeenSet;

                    /**
                     * Protection Level, Optional Values: 100, 200, 300

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * List of CDC clusters to which the domain name needs to be delivered. Specify this parameter for CDC scenes only.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_cdcClusters;
                    bool m_cdcClustersHasBeenSet;

                    /**
                     * Application CLB type. Default value: clb. 
clb: layer-7 CLB
tsegw: Tencent Cloud API Gateway
scf: Tencent Cloud Serverless
apisix: Other Tencent Cloud Gateway. eg: APISIX gateway
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_albType;
                    bool m_albTypeHasBeenSet;

                    /**
                     * IsCdn=3 required for this parameter, indicates custom header

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_ipHeaders;
                    bool m_ipHeadersHasBeenSet;

                    /**
                     * Rule engine type
1: menshen
2: tiga
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * Cloud type
public: public cloud
private: private cloud
hybrid: hybrid cloud
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * Domain name remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_HOSTRECORD_H_
