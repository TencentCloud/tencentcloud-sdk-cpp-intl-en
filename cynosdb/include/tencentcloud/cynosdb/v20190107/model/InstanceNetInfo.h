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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCENETINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCENETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 
                */
                class InstanceNetInfo : public AbstractModel
                {
                public:
                    InstanceNetInfo();
                    ~InstanceNetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return InstanceGroupType 
                     */
                    std::string GetInstanceGroupType() const;

                    /**
                     * 设置
                     * @param InstanceGroupType 
                     */
                    void SetInstanceGroupType(const std::string& _instanceGroupType);

                    /**
                     * 判断参数 InstanceGroupType 是否已赋值
                     * @return InstanceGroupType 是否已赋值
                     */
                    bool InstanceGroupTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return InstanceGroupId 
                     */
                    std::string GetInstanceGroupId() const;

                    /**
                     * 设置
                     * @param InstanceGroupId 
                     */
                    void SetInstanceGroupId(const std::string& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return VpcId 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置
                     * @param VpcId 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubnetId 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置
                     * @param SubnetId 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return NetType 
                     */
                    int64_t GetNetType() const;

                    /**
                     * 设置
                     * @param NetType 
                     */
                    void SetNetType(const int64_t& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Vip 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置
                     * @param Vip 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取
                     * @return Vport 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置
                     * @param Vport 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取
                     * @return WanDomain 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置
                     * @param WanDomain 
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取
                     * @return WanIP 
                     */
                    std::string GetWanIP() const;

                    /**
                     * 设置
                     * @param WanIP 
                     */
                    void SetWanIP(const std::string& _wanIP);

                    /**
                     * 判断参数 WanIP 是否已赋值
                     * @return WanIP 是否已赋值
                     */
                    bool WanIPHasBeenSet() const;

                    /**
                     * 获取
                     * @return WanPort 
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置
                     * @param WanPort 
                     */
                    void SetWanPort(const int64_t& _wanPort);

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     */
                    bool WanPortHasBeenSet() const;

                    /**
                     * 获取
                     * @return WanStatus 
                     */
                    std::string GetWanStatus() const;

                    /**
                     * 设置
                     * @param WanStatus 
                     */
                    void SetWanStatus(const std::string& _wanStatus);

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     */
                    bool WanStatusHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_instanceGroupType;
                    bool m_instanceGroupTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_wanIP;
                    bool m_wanIPHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCENETINFO_H_
