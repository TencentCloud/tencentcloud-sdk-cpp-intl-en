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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CLBOBJECT_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CLBOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * CLB type protection object
                */
                class ClbObject : public AbstractModel
                {
                public:
                    ClbObject();
                    ~ClbObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Object ID
                     * @return ObjectId Object ID
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置Object ID
                     * @param _objectId Object ID
                     * 
                     */
                    void SetObjectId(const std::string& _objectId);

                    /**
                     * 判断参数 ObjectId 是否已赋值
                     * @return ObjectId 是否已赋值
                     * 
                     */
                    bool ObjectIdHasBeenSet() const;

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
                     * 获取Precise Domain List
                     * @return PreciseDomains Precise Domain List
                     * 
                     */
                    std::vector<std::string> GetPreciseDomains() const;

                    /**
                     * 设置Precise Domain List
                     * @param _preciseDomains Precise Domain List
                     * 
                     */
                    void SetPreciseDomains(const std::vector<std::string>& _preciseDomains);

                    /**
                     * 判断参数 PreciseDomains 是否已赋值
                     * @return PreciseDomains 是否已赋值
                     * 
                     */
                    bool PreciseDomainsHasBeenSet() const;

                    /**
                     * 获取WAF Feature Switch Status, 0 Off 1 On
                     * @return Status WAF Feature Switch Status, 0 Off 1 On
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置WAF Feature Switch Status, 0 Off 1 On
                     * @param _status WAF Feature Switch Status, 0 Off 1 On
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取WAF Log Switch Status, 0 Off 1 On
                     * @return ClsStatus WAF Log Switch Status, 0 Off 1 On
                     * 
                     */
                    int64_t GetClsStatus() const;

                    /**
                     * 设置WAF Log Switch Status, 0 Off 1 On
                     * @param _clsStatus WAF Log Switch Status, 0 Off 1 On
                     * 
                     */
                    void SetClsStatus(const int64_t& _clsStatus);

                    /**
                     * 判断参数 ClsStatus 是否已赋值
                     * @return ClsStatus 是否已赋值
                     * 
                     */
                    bool ClsStatusHasBeenSet() const;

                    /**
                     * 获取Virtual Domain Name Corresponding to CLB Object
                     * @return VirtualDomain Virtual Domain Name Corresponding to CLB Object
                     * 
                     */
                    std::string GetVirtualDomain() const;

                    /**
                     * 设置Virtual Domain Name Corresponding to CLB Object
                     * @param _virtualDomain Virtual Domain Name Corresponding to CLB Object
                     * 
                     */
                    void SetVirtualDomain(const std::string& _virtualDomain);

                    /**
                     * 判断参数 VirtualDomain 是否已赋值
                     * @return VirtualDomain 是否已赋值
                     * 
                     */
                    bool VirtualDomainHasBeenSet() const;

                    /**
                     * 获取Object name
                     * @return ObjectName Object name
                     * 
                     */
                    std::string GetObjectName() const;

                    /**
                     * 设置Object name
                     * @param _objectName Object name
                     * 
                     */
                    void SetObjectName(const std::string& _objectName);

                    /**
                     * 判断参数 ObjectName 是否已赋值
                     * @return ObjectName 是否已赋值
                     * 
                     */
                    bool ObjectNameHasBeenSet() const;

                    /**
                     * 获取Public network address
                     * @return PublicIp Public network address
                     * 
                     */
                    std::vector<std::string> GetPublicIp() const;

                    /**
                     * 设置Public network address
                     * @param _publicIp Public network address
                     * 
                     */
                    void SetPublicIp(const std::vector<std::string>& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取Private network address
                     * @return PrivateIp Private network address
                     * 
                     */
                    std::vector<std::string> GetPrivateIp() const;

                    /**
                     * 设置Private network address
                     * @param _privateIp Private network address
                     * 
                     */
                    void SetPrivateIp(const std::vector<std::string>& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取VPC name
                     * @return VpcName VPC name
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC name
                     * @param _vpcName VPC name
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return Vpc VPC ID
                     * 
                     */
                    std::string GetVpc() const;

                    /**
                     * 设置VPC ID
                     * @param _vpc VPC ID
                     * 
                     */
                    void SetVpc(const std::string& _vpc);

                    /**
                     * 判断参数 Vpc 是否已赋值
                     * @return Vpc 是否已赋值
                     * 
                     */
                    bool VpcHasBeenSet() const;

                    /**
                     * 获取WAF instance level, if no instance is bound, it is 0
                     * @return InstanceLevel WAF instance level, if no instance is bound, it is 0
                     * 
                     */
                    int64_t GetInstanceLevel() const;

                    /**
                     * 设置WAF instance level, if no instance is bound, it is 0
                     * @param _instanceLevel WAF instance level, if no instance is bound, it is 0
                     * 
                     */
                    void SetInstanceLevel(const int64_t& _instanceLevel);

                    /**
                     * 判断参数 InstanceLevel 是否已赋值
                     * @return InstanceLevel 是否已赋值
                     * 
                     */
                    bool InstanceLevelHasBeenSet() const;

                    /**
                     * 获取CLB Shipping Switch
                     * @return PostCLSStatus CLB Shipping Switch
                     * 
                     */
                    int64_t GetPostCLSStatus() const;

                    /**
                     * 设置CLB Shipping Switch
                     * @param _postCLSStatus CLB Shipping Switch
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
                     * 获取Kafka Shipping Switch
                     * @return PostCKafkaStatus Kafka Shipping Switch
                     * 
                     */
                    int64_t GetPostCKafkaStatus() const;

                    /**
                     * 设置Kafka Shipping Switch
                     * @param _postCKafkaStatus Kafka Shipping Switch
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
                     * 获取Object type: CLB: Load Balancer, TSE: Cloud-native Gateway

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Object type: CLB: Load Balancer, TSE: Cloud-native Gateway

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Object type: CLB: Load Balancer, TSE: Cloud-native Gateway

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Object type: CLB: Load Balancer, TSE: Cloud-native Gateway

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Object Region

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Object Region

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Object Region

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Object Region

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Proxy status. 0: disabled; 1: Use the first IP address in XFF as the client IP address; 2: Use remote_addr as the client IP address; 3: Obtain the client IP address from the specified header field. The field is given by the IpHeaders field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Proxy Proxy status. 0: disabled; 1: Use the first IP address in XFF as the client IP address; 2: Use remote_addr as the client IP address; 3: Obtain the client IP address from the specified header field. The field is given by the IpHeaders field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetProxy() const;

                    /**
                     * 设置Proxy status. 0: disabled; 1: Use the first IP address in XFF as the client IP address; 2: Use remote_addr as the client IP address; 3: Obtain the client IP address from the specified header field. The field is given by the IpHeaders field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _proxy Proxy status. 0: disabled; 1: Use the first IP address in XFF as the client IP address; 2: Use remote_addr as the client IP address; 3: Obtain the client IP address from the specified header field. The field is given by the IpHeaders field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProxy(const uint64_t& _proxy);

                    /**
                     * 判断参数 Proxy 是否已赋值
                     * @return Proxy 是否已赋值
                     * 
                     */
                    bool ProxyHasBeenSet() const;

                    /**
                     * 获取List of header fields for obtaining the client IP. This parameter is effective when IsCdn is 3.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IpHeaders List of header fields for obtaining the client IP. This parameter is effective when IsCdn is 3.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetIpHeaders() const;

                    /**
                     * 设置List of header fields for obtaining the client IP. This parameter is effective when IsCdn is 3.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ipHeaders List of header fields for obtaining the client IP. This parameter is effective when IsCdn is 3.
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
                     * 获取Bot protection switch
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BotStatus Bot protection switch
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBotStatus() const;

                    /**
                     * 设置Bot protection switch
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _botStatus Bot protection switch
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取API protection switch
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApiStatus API protection switch
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetApiStatus() const;

                    /**
                     * 设置API protection switch
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _apiStatus API protection switch
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
                     * 获取Object access mode. 0: image mode; 1: cleaning mode; 2: examination mode. By default, the cleaning mode is used.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ObjectFlowMode Object access mode. 0: image mode; 1: cleaning mode; 2: examination mode. By default, the cleaning mode is used.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetObjectFlowMode() const;

                    /**
                     * 设置Object access mode. 0: image mode; 1: cleaning mode; 2: examination mode. By default, the cleaning mode is used.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _objectFlowMode Object access mode. 0: image mode; 1: cleaning mode; 2: examination mode. By default, the cleaning mode is used.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetObjectFlowMode(const int64_t& _objectFlowMode);

                    /**
                     * 判断参数 ObjectFlowMode 是否已赋值
                     * @return ObjectFlowMode 是否已赋值
                     * 
                     */
                    bool ObjectFlowModeHasBeenSet() const;

                    /**
                     * 获取VPC ID in numerical format

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NumericalVpcId VPC ID in numerical format

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNumericalVpcId() const;

                    /**
                     * 设置VPC ID in numerical format

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _numericalVpcId VPC ID in numerical format

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNumericalVpcId(const int64_t& _numericalVpcId);

                    /**
                     * 判断参数 NumericalVpcId 是否已赋值
                     * @return NumericalVpcId 是否已赋值
                     * 
                     */
                    bool NumericalVpcIdHasBeenSet() const;

                private:

                    /**
                     * Object ID
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Precise Domain List
                     */
                    std::vector<std::string> m_preciseDomains;
                    bool m_preciseDomainsHasBeenSet;

                    /**
                     * WAF Feature Switch Status, 0 Off 1 On
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * WAF Log Switch Status, 0 Off 1 On
                     */
                    int64_t m_clsStatus;
                    bool m_clsStatusHasBeenSet;

                    /**
                     * Virtual Domain Name Corresponding to CLB Object
                     */
                    std::string m_virtualDomain;
                    bool m_virtualDomainHasBeenSet;

                    /**
                     * Object name
                     */
                    std::string m_objectName;
                    bool m_objectNameHasBeenSet;

                    /**
                     * Public network address
                     */
                    std::vector<std::string> m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Private network address
                     */
                    std::vector<std::string> m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * VPC name
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * WAF instance level, if no instance is bound, it is 0
                     */
                    int64_t m_instanceLevel;
                    bool m_instanceLevelHasBeenSet;

                    /**
                     * CLB Shipping Switch
                     */
                    int64_t m_postCLSStatus;
                    bool m_postCLSStatusHasBeenSet;

                    /**
                     * Kafka Shipping Switch
                     */
                    int64_t m_postCKafkaStatus;
                    bool m_postCKafkaStatusHasBeenSet;

                    /**
                     * Object type: CLB: Load Balancer, TSE: Cloud-native Gateway

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Object Region

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Proxy status. 0: disabled; 1: Use the first IP address in XFF as the client IP address; 2: Use remote_addr as the client IP address; 3: Obtain the client IP address from the specified header field. The field is given by the IpHeaders field.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_proxy;
                    bool m_proxyHasBeenSet;

                    /**
                     * List of header fields for obtaining the client IP. This parameter is effective when IsCdn is 3.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_ipHeaders;
                    bool m_ipHeadersHasBeenSet;

                    /**
                     * Bot protection switch
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_botStatus;
                    bool m_botStatusHasBeenSet;

                    /**
                     * API protection switch
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_apiStatus;
                    bool m_apiStatusHasBeenSet;

                    /**
                     * Object access mode. 0: image mode; 1: cleaning mode; 2: examination mode. By default, the cleaning mode is used.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_objectFlowMode;
                    bool m_objectFlowModeHasBeenSet;

                    /**
                     * VPC ID in numerical format

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_numericalVpcId;
                    bool m_numericalVpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CLBOBJECT_H_
