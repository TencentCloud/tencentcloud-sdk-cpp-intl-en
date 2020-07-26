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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_CREATEPAIINSTANCEREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_CREATEPAIINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/InternetAccessible.h>
#include <tencentcloud/as/v20180419/model/LoginSettings.h>
#include <tencentcloud/as/v20180419/model/InstanceChargePrepaid.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * CreatePaiInstance request structure.
                */
                class CreatePaiInstanceRequest : public AbstractModel
                {
                public:
                    CreatePaiInstanceRequest();
                    ~CreatePaiInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取PAI instance domain name.
                     * @return DomainName PAI instance domain name.
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置PAI instance domain name.
                     * @param DomainName PAI instance domain name.
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Information of the public network bandwidth configuration.
                     * @return InternetAccessible Information of the public network bandwidth configuration.
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置Information of the public network bandwidth configuration.
                     * @param InternetAccessible Information of the public network bandwidth configuration.
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取Base64-encoded string of the launch script.
                     * @return InitScript Base64-encoded string of the launch script.
                     */
                    std::string GetInitScript() const;

                    /**
                     * 设置Base64-encoded string of the launch script.
                     * @param InitScript Base64-encoded string of the launch script.
                     */
                    void SetInitScript(const std::string& _initScript);

                    /**
                     * 判断参数 InitScript 是否已赋值
                     * @return InitScript 是否已赋值
                     */
                    bool InitScriptHasBeenSet() const;

                    /**
                     * 获取List of availability zones.
                     * @return Zones List of availability zones.
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置List of availability zones.
                     * @param Zones List of availability zones.
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取VpcId.
                     * @return VpcId VpcId.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VpcId.
                     * @param VpcId VpcId.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取List of subnets.
                     * @return SubnetIds List of subnets.
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置List of subnets.
                     * @param SubnetIds List of subnets.
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取Instance display name.
                     * @return InstanceName Instance display name.
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance display name.
                     * @param InstanceName Instance display name.
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取List of instance models.
                     * @return InstanceTypes List of instance models.
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置List of instance models.
                     * @param InstanceTypes List of instance models.
                     */
                    void SetInstanceTypes(const std::vector<std::string>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取Instance login settings.
                     * @return LoginSettings Instance login settings.
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置Instance login settings.
                     * @param LoginSettings Instance login settings.
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取Instance billing type.
                     * @return InstanceChargeType Instance billing type.
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing type.
                     * @param InstanceChargeType Instance billing type.
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Relevant parameter settings for the prepaid mode (i.e., monthly subscription). This parameter can specify the purchased usage period, whether to set automatic renewal, and other attributes of the instance purchased on a prepaid basis. If the billing method of the specified instance is prepaid, this parameter is required.
                     * @return InstanceChargePrepaid Relevant parameter settings for the prepaid mode (i.e., monthly subscription). This parameter can specify the purchased usage period, whether to set automatic renewal, and other attributes of the instance purchased on a prepaid basis. If the billing method of the specified instance is prepaid, this parameter is required.
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置Relevant parameter settings for the prepaid mode (i.e., monthly subscription). This parameter can specify the purchased usage period, whether to set automatic renewal, and other attributes of the instance purchased on a prepaid basis. If the billing method of the specified instance is prepaid, this parameter is required.
                     * @param InstanceChargePrepaid Relevant parameter settings for the prepaid mode (i.e., monthly subscription). This parameter can specify the purchased usage period, whether to set automatic renewal, and other attributes of the instance purchased on a prepaid basis. If the billing method of the specified instance is prepaid, this parameter is required.
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                private:

                    /**
                     * PAI instance domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Information of the public network bandwidth configuration.
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * Base64-encoded string of the launch script.
                     */
                    std::string m_initScript;
                    bool m_initScriptHasBeenSet;

                    /**
                     * List of availability zones.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * VpcId.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * List of subnets.
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * Instance display name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * List of instance models.
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * Instance login settings.
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * Instance billing type.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Relevant parameter settings for the prepaid mode (i.e., monthly subscription). This parameter can specify the purchased usage period, whether to set automatic renewal, and other attributes of the instance purchased on a prepaid basis. If the billing method of the specified instance is prepaid, this parameter is required.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CREATEPAIINSTANCEREQUEST_H_
