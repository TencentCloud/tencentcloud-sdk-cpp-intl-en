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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DOMAININFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/PortInfo.h>
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
                * Domain list
                */
                class DomainInfo : public AbstractModel
                {
                public:
                    DomainInfo();
                    ~DomainInfo() = default;
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
                     * 获取Domain ID
                     * @return DomainId Domain ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置Domain ID
                     * @param _domainId Domain ID
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
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取CNAME Address
                     * @return Cname CNAME Address
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置CNAME Address
                     * @param _cname CNAME Address
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取Instance type of the domain name.
sparta-waf: SaaS WAF instance
clb-waf: CLB WAF instance
cdc-clb-waf: CLB WAF instances in the CDC environment
                     * @return Edition Instance type of the domain name.
sparta-waf: SaaS WAF instance
clb-waf: CLB WAF instance
cdc-clb-waf: CLB WAF instances in the CDC environment
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置Instance type of the domain name.
sparta-waf: SaaS WAF instance
clb-waf: CLB WAF instance
cdc-clb-waf: CLB WAF instances in the CDC environment
                     * @param _edition Instance type of the domain name.
sparta-waf: SaaS WAF instance
clb-waf: CLB WAF instance
cdc-clb-waf: CLB WAF instances in the CDC environment
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
                     * 获取Region
"Toronto": "ca"
"Guangzhou": "gz"
"Chengdu": "cd"
"Fuzhou": "fzec"
"Shenzhen": "szx"
"India": "in"
"Jinan": "jnec"
"Chongqing": "cq"
"Tianjin": "tsn"
"Northeast Europe": "ru"
"Nanjing": "nj"
"Silicon Valley, USA": "usw"
"Thailand": "th"
"Guangzhou Open": "gzopen"
"Shenzhen Finance": "szjr"
"Frankfurt": "de"
"Japan": "jp"
"Virginia": "use"
"Beijing": "bj"
"Hong Kong (China)": "hk"
"Hangzhou": "hzec"
"Beijing Finance": "bjjr"
"Shanghai Finance": "shjr"
"Taipei (China)": "tpe"
"Seoul": "kr"
"Shanghai": "sh"
"Singapore": "sg"
"Qingyuan": "qy"
                     * @return Region Region
"Toronto": "ca"
"Guangzhou": "gz"
"Chengdu": "cd"
"Fuzhou": "fzec"
"Shenzhen": "szx"
"India": "in"
"Jinan": "jnec"
"Chongqing": "cq"
"Tianjin": "tsn"
"Northeast Europe": "ru"
"Nanjing": "nj"
"Silicon Valley, USA": "usw"
"Thailand": "th"
"Guangzhou Open": "gzopen"
"Shenzhen Finance": "szjr"
"Frankfurt": "de"
"Japan": "jp"
"Virginia": "use"
"Beijing": "bj"
"Hong Kong (China)": "hk"
"Hangzhou": "hzec"
"Beijing Finance": "bjjr"
"Shanghai Finance": "shjr"
"Taipei (China)": "tpe"
"Seoul": "kr"
"Shanghai": "sh"
"Singapore": "sg"
"Qingyuan": "qy"
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
"Toronto": "ca"
"Guangzhou": "gz"
"Chengdu": "cd"
"Fuzhou": "fzec"
"Shenzhen": "szx"
"India": "in"
"Jinan": "jnec"
"Chongqing": "cq"
"Tianjin": "tsn"
"Northeast Europe": "ru"
"Nanjing": "nj"
"Silicon Valley, USA": "usw"
"Thailand": "th"
"Guangzhou Open": "gzopen"
"Shenzhen Finance": "szjr"
"Frankfurt": "de"
"Japan": "jp"
"Virginia": "use"
"Beijing": "bj"
"Hong Kong (China)": "hk"
"Hangzhou": "hzec"
"Beijing Finance": "bjjr"
"Shanghai Finance": "shjr"
"Taipei (China)": "tpe"
"Seoul": "kr"
"Shanghai": "sh"
"Singapore": "sg"
"Qingyuan": "qy"
                     * @param _region Region
"Toronto": "ca"
"Guangzhou": "gz"
"Chengdu": "cd"
"Fuzhou": "fzec"
"Shenzhen": "szx"
"India": "in"
"Jinan": "jnec"
"Chongqing": "cq"
"Tianjin": "tsn"
"Northeast Europe": "ru"
"Nanjing": "nj"
"Silicon Valley, USA": "usw"
"Thailand": "th"
"Guangzhou Open": "gzopen"
"Shenzhen Finance": "szjr"
"Frankfurt": "de"
"Japan": "jp"
"Virginia": "use"
"Beijing": "bj"
"Hong Kong (China)": "hk"
"Hangzhou": "hzec"
"Beijing Finance": "bjjr"
"Shanghai Finance": "shjr"
"Taipei (China)": "tpe"
"Seoul": "kr"
"Shanghai": "sh"
"Singapore": "sg"
"Qingyuan": "qy"
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
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
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
                     * 获取Access log switch status
0: disabled
1: enabled
                     * @return ClsStatus Access log switch status
0: disabled
1: enabled
                     * 
                     */
                    uint64_t GetClsStatus() const;

                    /**
                     * 设置Access log switch status
0: disabled
1: enabled
                     * @param _clsStatus Access log switch status
0: disabled
1: enabled
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
                     * 获取CLB WAF usage mode
0: image mode
1: cleaning mode
                     * @return FlowMode CLB WAF usage mode
0: image mode
1: cleaning mode
                     * 
                     */
                    uint64_t GetFlowMode() const;

                    /**
                     * 设置CLB WAF usage mode
0: image mode
1: cleaning mode
                     * @param _flowMode CLB WAF usage mode
0: image mode
1: cleaning mode
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
                     * 获取WAF switch status
0: disabled
1: enabled
                     * @return Status WAF switch status
0: disabled
1: enabled
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置WAF switch status
0: disabled
1: enabled
                     * @param _status WAF switch status
0: disabled
1: enabled
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
                     * 获取Joint status of rule engine and AI engine protection modes.
1: initial status: interception for the rule engine and disabled for the AI engine
10: observation for the rule engine and disabled for the AI engine
11: observation for both the rule engine and AI engine
12: observation for the rule engine and interception for the AI engine
20: interception for the rule engine and disabled for the AI engine
21: interception for the rule engine and observation for the AI engine
22: interception for both the rule engine and AI engine
                     * @return Engine Joint status of rule engine and AI engine protection modes.
1: initial status: interception for the rule engine and disabled for the AI engine
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
                     * 设置Joint status of rule engine and AI engine protection modes.
1: initial status: interception for the rule engine and disabled for the AI engine
10: observation for the rule engine and disabled for the AI engine
11: observation for both the rule engine and AI engine
12: observation for the rule engine and interception for the AI engine
20: interception for the rule engine and disabled for the AI engine
21: interception for the rule engine and observation for the AI engine
22: interception for both the rule engine and AI engine
                     * @param _engine Joint status of rule engine and AI engine protection modes.
1: initial status: interception for the rule engine and disabled for the AI engine
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
                     * 获取Sandbox cluster origin-pull outbound IP list
                     * @return CCList Sandbox cluster origin-pull outbound IP list
                     * 
                     */
                    std::vector<std::string> GetCCList() const;

                    /**
                     * 设置Sandbox cluster origin-pull outbound IP list
                     * @param _cCList Sandbox cluster origin-pull outbound IP list
                     * 
                     */
                    void SetCCList(const std::vector<std::string>& _cCList);

                    /**
                     * 判断参数 CCList 是否已赋值
                     * @return CCList 是否已赋值
                     * 
                     */
                    bool CCListHasBeenSet() const;

                    /**
                     * 获取Production cluster origin-pull outbound IP list
                     * @return RsList Production cluster origin-pull outbound IP list
                     * 
                     */
                    std::vector<std::string> GetRsList() const;

                    /**
                     * 设置Production cluster origin-pull outbound IP list
                     * @param _rsList Production cluster origin-pull outbound IP list
                     * 
                     */
                    void SetRsList(const std::vector<std::string>& _rsList);

                    /**
                     * 判断参数 RsList 是否已赋值
                     * @return RsList 是否已赋值
                     * 
                     */
                    bool RsListHasBeenSet() const;

                    /**
                     * 获取Service port configuration
                     * @return Ports Service port configuration
                     * 
                     */
                    std::vector<PortInfo> GetPorts() const;

                    /**
                     * 设置Service port configuration
                     * @param _ports Service port configuration
                     * 
                     */
                    void SetPorts(const std::vector<PortInfo>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取CLB-related configuration
                     * @return LoadBalancerSet CLB-related configuration
                     * 
                     */
                    std::vector<LoadBalancerPackageNew> GetLoadBalancerSet() const;

                    /**
                     * 设置CLB-related configuration
                     * @param _loadBalancerSet CLB-related configuration
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
                     * 获取User ID
                     * @return AppId User ID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置User ID
                     * @param _appId User ID
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取LB listener status of the domain name protected by CLB WAF0: Operation successful.
4: The LB is being bound.
6: The LB is being unbound.
7: Failed to unbind the LB.
8: Failed to bind the LB.
10: Internal error.
                     * @return State LB listener status of the domain name protected by CLB WAF0: Operation successful.
4: The LB is being bound.
6: The LB is being unbound.
7: Failed to unbind the LB.
8: Failed to bind the LB.
10: Internal error.
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置LB listener status of the domain name protected by CLB WAF0: Operation successful.
4: The LB is being bound.
6: The LB is being unbound.
7: Failed to unbind the LB.
8: Failed to bind the LB.
10: Internal error.
                     * @param _state LB listener status of the domain name protected by CLB WAF0: Operation successful.
4: The LB is being bound.
6: The LB is being unbound.
7: Failed to unbind the LB.
8: Failed to bind the LB.
10: Internal error.
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
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取IPv6 switch status.
0: disabled
1: enabled
                     * @return Ipv6Status IPv6 switch status.
0: disabled
1: enabled
                     * 
                     */
                    int64_t GetIpv6Status() const;

                    /**
                     * 设置IPv6 switch status.
0: disabled
1: enabled
                     * @param _ipv6Status IPv6 switch status.
0: disabled
1: enabled
                     * 
                     */
                    void SetIpv6Status(const int64_t& _ipv6Status);

                    /**
                     * 判断参数 Ipv6Status 是否已赋值
                     * @return Ipv6Status 是否已赋值
                     * 
                     */
                    bool Ipv6StatusHasBeenSet() const;

                    /**
                     * 获取Bot switch status.
0: disabled
1: disabled
2: enabled
3: enabled
                     * @return BotStatus Bot switch status.
0: disabled
1: disabled
2: enabled
3: enabled
                     * 
                     */
                    int64_t GetBotStatus() const;

                    /**
                     * 设置Bot switch status.
0: disabled
1: disabled
2: enabled
3: enabled
                     * @param _botStatus Bot switch status.
0: disabled
1: disabled
2: enabled
3: enabled
                     * 
                     */
                    void SetBotStatus(const int64_t& _botStatus);

                    /**
                     * 判断参数 BotStatus 是否已赋值
                     * @return BotStatus 是否已赋值
                     * 
                     */
                    bool BotStatusHasBeenSet() const;

                    /**
                     * 获取Instance version information.
101: Small and Micro Agile Edition
102: Small and Micro Ultra-light Edition
2: Advanced Edition
3: Enterprise Edition
4: Ultimate Edition
6: Exclusive Edition
                     * @return Level Instance version information.
101: Small and Micro Agile Edition
102: Small and Micro Ultra-light Edition
2: Advanced Edition
3: Enterprise Edition
4: Ultimate Edition
6: Exclusive Edition
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置Instance version information.
101: Small and Micro Agile Edition
102: Small and Micro Ultra-light Edition
2: Advanced Edition
3: Enterprise Edition
4: Ultimate Edition
6: Exclusive Edition
                     * @param _level Instance version information.
101: Small and Micro Agile Edition
102: Small and Micro Ultra-light Edition
2: Advanced Edition
3: Enterprise Edition
4: Ultimate Edition
6: Exclusive Edition
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Shipping status of CLS.
0: disabled
1: enabled
                     * @return PostCLSStatus Shipping status of CLS.
0: disabled
1: enabled
                     * 
                     */
                    int64_t GetPostCLSStatus() const;

                    /**
                     * 设置Shipping status of CLS.
0: disabled
1: enabled
                     * @param _postCLSStatus Shipping status of CLS.
0: disabled
1: enabled
                     * 
                     */
                    void SetPostCLSStatus(const int64_t& _postCLSStatus);

                    /**
                     * 判断参数 PostCLSStatus 是否已赋值
                     * @return PostCLSStatus 是否已赋值
                     * 
                     */
                    bool PostCLSStatusHasBeenSet() const;

                    /**
                     * 获取Shipping status of CKafka.
0: disabled
1: enabled
                     * @return PostCKafkaStatus Shipping status of CKafka.
0: disabled
1: enabled
                     * 
                     */
                    int64_t GetPostCKafkaStatus() const;

                    /**
                     * 设置Shipping status of CKafka.
0: disabled
1: enabled
                     * @param _postCKafkaStatus Shipping status of CKafka.
0: disabled
1: enabled
                     * 
                     */
                    void SetPostCKafkaStatus(const int64_t& _postCKafkaStatus);

                    /**
                     * 判断参数 PostCKafkaStatus 是否已赋值
                     * @return PostCKafkaStatus 是否已赋值
                     * 
                     */
                    bool PostCKafkaStatusHasBeenSet() const;

                    /**
                     * 获取Cluster information accessed by the CDC instance domain name, which can be ignored for non-CDC instances.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CdcClusters Cluster information accessed by the CDC instance domain name, which can be ignored for non-CDC instances.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCdcClusters() const;

                    /**
                     * 设置Cluster information accessed by the CDC instance domain name, which can be ignored for non-CDC instances.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cdcClusters Cluster information accessed by the CDC instance domain name, which can be ignored for non-CDC instances.
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
                     * 获取API security switch status.
0: disabled
1: enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApiStatus API security switch status.
0: disabled
1: enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetApiStatus() const;

                    /**
                     * 设置API security switch status.
0: disabled
1: enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _apiStatus API security switch status.
0: disabled
1: enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiStatus(const int64_t& _apiStatus);

                    /**
                     * 判断参数 ApiStatus 是否已赋值
                     * @return ApiStatus 是否已赋值
                     * 
                     */
                    bool ApiStatusHasBeenSet() const;

                    /**
                     * 获取Application-based CLB type. The default value is clb.
clb: layer-7 CLB
apisix: APISIX gateway
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlbType Application-based CLB type. The default value is clb.
clb: layer-7 CLB
apisix: APISIX gateway
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAlbType() const;

                    /**
                     * 设置Application-based CLB type. The default value is clb.
clb: layer-7 CLB
apisix: APISIX gateway
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _albType Application-based CLB type. The default value is clb.
clb: layer-7 CLB
apisix: APISIX gateway
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
                     * 获取Security group status.
0: not display
1: non-Tencent Cloud origin server
2: Security group binding failed.
3: security groups changed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SgState Security group status.
0: not display
1: non-Tencent Cloud origin server
2: Security group binding failed.
3: security groups changed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSgState() const;

                    /**
                     * 设置Security group status.
0: not display
1: non-Tencent Cloud origin server
2: Security group binding failed.
3: security groups changed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sgState Security group status.
0: not display
1: non-Tencent Cloud origin server
2: Security group binding failed.
3: security groups changed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSgState(const int64_t& _sgState);

                    /**
                     * 判断参数 SgState 是否已赋值
                     * @return SgState 是否已赋值
                     * 
                     */
                    bool SgStateHasBeenSet() const;

                    /**
                     * 获取Detailed Explanation of Security Group Status

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SgDetail Detailed Explanation of Security Group Status

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSgDetail() const;

                    /**
                     * 设置Detailed Explanation of Security Group Status

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sgDetail Detailed Explanation of Security Group Status

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSgDetail(const std::string& _sgDetail);

                    /**
                     * 判断参数 SgDetail 是否已赋值
                     * @return SgDetail 是否已赋值
                     * 
                     */
                    bool SgDetailHasBeenSet() const;

                    /**
                     * 获取Domain name cloud environment. hybrid: hybrid cloud domain name
public: public cloud domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloudType Domain name cloud environment. hybrid: hybrid cloud domain name
public: public cloud domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCloudType() const;

                    /**
                     * 设置Domain name cloud environment. hybrid: hybrid cloud domain name
public: public cloud domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cloudType Domain name cloud environment. hybrid: hybrid cloud domain name
public: public cloud domain name
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
                     * 获取SaaS WAF origin server IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SrcList SaaS WAF origin server IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSrcList() const;

                    /**
                     * 设置SaaS WAF origin server IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _srcList SaaS WAF origin server IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSrcList(const std::vector<std::string>& _srcList);

                    /**
                     * 判断参数 SrcList 是否已赋值
                     * @return SrcList 是否已赋值
                     * 
                     */
                    bool SrcListHasBeenSet() const;

                    /**
                     * 获取SaaS WAF origin server domain name list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpstreamDomainList SaaS WAF origin server domain name list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetUpstreamDomainList() const;

                    /**
                     * 设置SaaS WAF origin server domain name list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _upstreamDomainList SaaS WAF origin server domain name list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpstreamDomainList(const std::vector<std::string>& _upstreamDomainList);

                    /**
                     * 判断参数 UpstreamDomainList 是否已赋值
                     * @return UpstreamDomainList 是否已赋值
                     * 
                     */
                    bool UpstreamDomainListHasBeenSet() const;

                    /**
                     * 获取Security group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SgID Security group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSgID() const;

                    /**
                     * 设置Security group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sgID Security group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSgID(const std::string& _sgID);

                    /**
                     * 判断参数 SgID 是否已赋值
                     * @return SgID 是否已赋值
                     * 
                     */
                    bool SgIDHasBeenSet() const;

                    /**
                     * 获取CLB WAF access status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessStatus CLB WAF access status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAccessStatus() const;

                    /**
                     * 设置CLB WAF access status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessStatus CLB WAF access status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessStatus(const int64_t& _accessStatus);

                    /**
                     * 判断参数 AccessStatus 是否已赋值
                     * @return AccessStatus 是否已赋值
                     * 
                     */
                    bool AccessStatusHasBeenSet() const;

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
                     * Domain ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * CNAME Address
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * Instance type of the domain name.
sparta-waf: SaaS WAF instance
clb-waf: CLB WAF instance
cdc-clb-waf: CLB WAF instances in the CDC environment
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * Region
"Toronto": "ca"
"Guangzhou": "gz"
"Chengdu": "cd"
"Fuzhou": "fzec"
"Shenzhen": "szx"
"India": "in"
"Jinan": "jnec"
"Chongqing": "cq"
"Tianjin": "tsn"
"Northeast Europe": "ru"
"Nanjing": "nj"
"Silicon Valley, USA": "usw"
"Thailand": "th"
"Guangzhou Open": "gzopen"
"Shenzhen Finance": "szjr"
"Frankfurt": "de"
"Japan": "jp"
"Virginia": "use"
"Beijing": "bj"
"Hong Kong (China)": "hk"
"Hangzhou": "hzec"
"Beijing Finance": "bjjr"
"Shanghai Finance": "shjr"
"Taipei (China)": "tpe"
"Seoul": "kr"
"Shanghai": "sh"
"Singapore": "sg"
"Qingyuan": "qy"
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Access log switch status
0: disabled
1: enabled
                     */
                    uint64_t m_clsStatus;
                    bool m_clsStatusHasBeenSet;

                    /**
                     * CLB WAF usage mode
0: image mode
1: cleaning mode
                     */
                    uint64_t m_flowMode;
                    bool m_flowModeHasBeenSet;

                    /**
                     * WAF switch status
0: disabled
1: enabled
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Rule engine protection mode
0: observation mode
1: interception mode
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Joint status of rule engine and AI engine protection modes.
1: initial status: interception for the rule engine and disabled for the AI engine
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
                     * Sandbox cluster origin-pull outbound IP list
                     */
                    std::vector<std::string> m_cCList;
                    bool m_cCListHasBeenSet;

                    /**
                     * Production cluster origin-pull outbound IP list
                     */
                    std::vector<std::string> m_rsList;
                    bool m_rsListHasBeenSet;

                    /**
                     * Service port configuration
                     */
                    std::vector<PortInfo> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * CLB-related configuration
                     */
                    std::vector<LoadBalancerPackageNew> m_loadBalancerSet;
                    bool m_loadBalancerSetHasBeenSet;

                    /**
                     * User ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * LB listener status of the domain name protected by CLB WAF0: Operation successful.
4: The LB is being bound.
6: The LB is being unbound.
7: Failed to unbind the LB.
8: Failed to bind the LB.
10: Internal error.
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * IPv6 switch status.
0: disabled
1: enabled
                     */
                    int64_t m_ipv6Status;
                    bool m_ipv6StatusHasBeenSet;

                    /**
                     * Bot switch status.
0: disabled
1: disabled
2: enabled
3: enabled
                     */
                    int64_t m_botStatus;
                    bool m_botStatusHasBeenSet;

                    /**
                     * Instance version information.
101: Small and Micro Agile Edition
102: Small and Micro Ultra-light Edition
2: Advanced Edition
3: Enterprise Edition
4: Ultimate Edition
6: Exclusive Edition
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Shipping status of CLS.
0: disabled
1: enabled
                     */
                    int64_t m_postCLSStatus;
                    bool m_postCLSStatusHasBeenSet;

                    /**
                     * Shipping status of CKafka.
0: disabled
1: enabled
                     */
                    int64_t m_postCKafkaStatus;
                    bool m_postCKafkaStatusHasBeenSet;

                    /**
                     * Cluster information accessed by the CDC instance domain name, which can be ignored for non-CDC instances.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cdcClusters;
                    bool m_cdcClustersHasBeenSet;

                    /**
                     * API security switch status.
0: disabled
1: enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_apiStatus;
                    bool m_apiStatusHasBeenSet;

                    /**
                     * Application-based CLB type. The default value is clb.
clb: layer-7 CLB
apisix: APISIX gateway
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_albType;
                    bool m_albTypeHasBeenSet;

                    /**
                     * Security group status.
0: not display
1: non-Tencent Cloud origin server
2: Security group binding failed.
3: security groups changed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sgState;
                    bool m_sgStateHasBeenSet;

                    /**
                     * Detailed Explanation of Security Group Status

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sgDetail;
                    bool m_sgDetailHasBeenSet;

                    /**
                     * Domain name cloud environment. hybrid: hybrid cloud domain name
public: public cloud domain name
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
                     * SaaS WAF origin server IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_srcList;
                    bool m_srcListHasBeenSet;

                    /**
                     * SaaS WAF origin server domain name list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_upstreamDomainList;
                    bool m_upstreamDomainListHasBeenSet;

                    /**
                     * Security group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sgID;
                    bool m_sgIDHasBeenSet;

                    /**
                     * CLB WAF access status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_accessStatus;
                    bool m_accessStatusHasBeenSet;

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

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DOMAININFO_H_
