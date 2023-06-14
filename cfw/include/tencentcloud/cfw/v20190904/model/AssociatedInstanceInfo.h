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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ASSOCIATEDINSTANCEINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ASSOCIATEDINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Instance associated with an enterprise security group
                */
                class AssociatedInstanceInfo : public AbstractModel
                {
                public:
                    AssociatedInstanceInfo();
                    ~AssociatedInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @return InstanceId Instance ID
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _instanceId Instance ID
Note: This field may return `null`, indicating that no valid value was found.
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
Note: This field may return `null`, indicating that no valid value was found.
                     * @return InstanceName Instance name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _instanceName Instance name
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取Instance type. 3: CVM instance; 4: CLB instance; 5: ENI instance; 6: Cloud database
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Type Instance type. 3: CVM instance; 4: CLB instance; 5: ENI instance; 6: Cloud database
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Instance type. 3: CVM instance; 4: CLB instance; 5: ENI instance; 6: Cloud database
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _type Instance type. 3: CVM instance; 4: CLB instance; 5: ENI instance; 6: Cloud database
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取VPC ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @return VpcId VPC ID
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _vpcId VPC ID
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC name
Note: This field may return `null`, indicating that no valid value was found.
                     * @return VpcName VPC name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC name
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _vpcName VPC name
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取Public IP
Note: This field may return `null`, indicating that no valid value was found.
                     * @return PublicIp Public IP
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _publicIp Public IP
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取Private IP
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Ip Private IP
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Private IP
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _ip Private IP
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取The number of associated security groups
Note: This field may return `null`, indicating that no valid value was found.
                     * @return SecurityGroupCount The number of associated security groups
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetSecurityGroupCount() const;

                    /**
                     * 设置The number of associated security groups
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _securityGroupCount The number of associated security groups
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetSecurityGroupCount(const uint64_t& _securityGroupCount);

                    /**
                     * 判断参数 SecurityGroupCount 是否已赋值
                     * @return SecurityGroupCount 是否已赋值
                     * 
                     */
                    bool SecurityGroupCountHasBeenSet() const;

                private:

                    /**
                     * Instance ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance type. 3: CVM instance; 4: CLB instance; 5: ENI instance; 6: Cloud database
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * VPC ID
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * Public IP
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Private IP
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * The number of associated security groups
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_securityGroupCount;
                    bool m_securityGroupCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ASSOCIATEDINSTANCEINFO_H_
