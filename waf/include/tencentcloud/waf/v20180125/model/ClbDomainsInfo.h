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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CLBDOMAINSINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CLBDOMAINSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/LoadBalancerPackageNew.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Details about the domain name protected by CLB WAF
                */
                class ClbDomainsInfo : public AbstractModel
                {
                public:
                    ClbDomainsInfo();
                    ~ClbDomainsInfo() = default;
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
                     * 获取Instance ID of the domain name
                     * @return InstanceId Instance ID of the domain name
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID of the domain name
                     * @param _instanceId Instance ID of the domain name
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Name of the instance of the domain name
                     * @return InstanceName Name of the instance of the domain name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Name of the instance of the domain name
                     * @param _instanceName Name of the instance of the domain name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance type of the domain name
                     * @return Edition Instance type of the domain name
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置Instance type of the domain name
                     * @param _edition Instance type of the domain name
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
                     * 获取Whether a layer-7 proxy service is deployed before the WAF. 0: No proxy service is deployed; 1: The proxy service is deployed. The WAF will use XFF to obtain the client IP address; 2: The proxy service is deployed. The WAF will use remote_addr to obtain the client IP address; 3: The proxy service is deployed. The WAF will use a custom header in ip_headers to obtain the client IP address.
                     * @return IsCdn Whether a layer-7 proxy service is deployed before the WAF. 0: No proxy service is deployed; 1: The proxy service is deployed. The WAF will use XFF to obtain the client IP address; 2: The proxy service is deployed. The WAF will use remote_addr to obtain the client IP address; 3: The proxy service is deployed. The WAF will use a custom header in ip_headers to obtain the client IP address.
                     * 
                     */
                    uint64_t GetIsCdn() const;

                    /**
                     * 设置Whether a layer-7 proxy service is deployed before the WAF. 0: No proxy service is deployed; 1: The proxy service is deployed. The WAF will use XFF to obtain the client IP address; 2: The proxy service is deployed. The WAF will use remote_addr to obtain the client IP address; 3: The proxy service is deployed. The WAF will use a custom header in ip_headers to obtain the client IP address.
                     * @param _isCdn Whether a layer-7 proxy service is deployed before the WAF. 0: No proxy service is deployed; 1: The proxy service is deployed. The WAF will use XFF to obtain the client IP address; 2: The proxy service is deployed. The WAF will use remote_addr to obtain the client IP address; 3: The proxy service is deployed. The WAF will use a custom header in ip_headers to obtain the client IP address.
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
                     * 获取CLB information when the CLB type is clb
                     * @return LoadBalancerSet CLB information when the CLB type is clb
                     * 
                     */
                    std::vector<LoadBalancerPackageNew> GetLoadBalancerSet() const;

                    /**
                     * 设置CLB information when the CLB type is clb
                     * @param _loadBalancerSet CLB information when the CLB type is clb
                     * 
                     */
                    void SetLoadBalancerSet(const std::vector<LoadBalancerPackageNew>& _loadBalancerSet);

                    /**
                     * 判断参数 LoadBalancerSet 是否已赋值
                     * @return LoadBalancerSet 是否已赋值
                     * 
                     */
                    bool LoadBalancerSetHasBeenSet() const;

                    /**
                     * 获取CLB WAF traffic mode. 1: cleaning mode; 0: image mode
                     * @return FlowMode CLB WAF traffic mode. 1: cleaning mode; 0: image mode
                     * 
                     */
                    uint64_t GetFlowMode() const;

                    /**
                     * 设置CLB WAF traffic mode. 1: cleaning mode; 0: image mode
                     * @param _flowMode CLB WAF traffic mode. 1: cleaning mode; 0: image mode
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
                     * 获取Domain name-bound CLB status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return State Domain name-bound CLB status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置Domain name-bound CLB status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _state Domain name-bound CLB status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取CLB Type, either CLB or Apisix

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlbType CLB Type, either CLB or Apisix

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAlbType() const;

                    /**
                     * 设置CLB Type, either CLB or Apisix

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _albType CLB Type, either CLB or Apisix

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
                     * 获取IsCdn=3 indicates custom header

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IpHeaders IsCdn=3 indicates custom header

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetIpHeaders() const;

                    /**
                     * 设置IsCdn=3 indicates custom header

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ipHeaders IsCdn=3 indicates custom header

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
                     * 获取CDC cluster information for the WAF of the cdc-clb-waf type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CdcClusters CDC cluster information for the WAF of the cdc-clb-waf type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCdcClusters() const;

                    /**
                     * 设置CDC cluster information for the WAF of the cdc-clb-waf type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cdcClusters CDC cluster information for the WAF of the cdc-clb-waf type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCdcClusters(const std::string& _cdcClusters);

                    /**
                     * 判断参数 CdcClusters 是否已赋值
                     * @return CdcClusters 是否已赋值
                     * 
                     */
                    bool CdcClustersHasBeenSet() const;

                    /**
                     * 获取Cloud Type: public: Public Cloud; private: Private Cloud; hybrid: Hybrid Cloud

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloudType Cloud Type: public: Public Cloud; private: Private Cloud; hybrid: Hybrid Cloud

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCloudType() const;

                    /**
                     * 设置Cloud Type: public: Public Cloud; private: Private Cloud; hybrid: Hybrid Cloud

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cloudType Cloud Type: public: Public Cloud; private: Private Cloud; hybrid: Hybrid Cloud

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

                    /**
                     * 获取Domain name tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Labels Domain name tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置Domain name tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _labels Domain name tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLabels(const std::vector<std::string>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

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
                     * Instance ID of the domain name
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Name of the instance of the domain name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance type of the domain name
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * Whether a layer-7 proxy service is deployed before the WAF. 0: No proxy service is deployed; 1: The proxy service is deployed. The WAF will use XFF to obtain the client IP address; 2: The proxy service is deployed. The WAF will use remote_addr to obtain the client IP address; 3: The proxy service is deployed. The WAF will use a custom header in ip_headers to obtain the client IP address.
                     */
                    uint64_t m_isCdn;
                    bool m_isCdnHasBeenSet;

                    /**
                     * CLB information when the CLB type is clb
                     */
                    std::vector<LoadBalancerPackageNew> m_loadBalancerSet;
                    bool m_loadBalancerSetHasBeenSet;

                    /**
                     * CLB WAF traffic mode. 1: cleaning mode; 0: image mode
                     */
                    uint64_t m_flowMode;
                    bool m_flowModeHasBeenSet;

                    /**
                     * Domain name-bound CLB status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * CLB Type, either CLB or Apisix

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_albType;
                    bool m_albTypeHasBeenSet;

                    /**
                     * IsCdn=3 indicates custom header

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_ipHeaders;
                    bool m_ipHeadersHasBeenSet;

                    /**
                     * CDC cluster information for the WAF of the cdc-clb-waf type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cdcClusters;
                    bool m_cdcClustersHasBeenSet;

                    /**
                     * Cloud Type: public: Public Cloud; private: Private Cloud; hybrid: Hybrid Cloud

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

                    /**
                     * Domain name tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CLBDOMAINSINFO_H_
