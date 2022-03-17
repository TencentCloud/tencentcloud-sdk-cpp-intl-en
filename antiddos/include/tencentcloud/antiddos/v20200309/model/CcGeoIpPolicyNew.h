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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCGEOIPPOLICYNEW_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCGEOIPPOLICYNEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Information of the policy list
                */
                class CcGeoIpPolicyNew : public AbstractModel
                {
                public:
                    CcGeoIpPolicyNew();
                    ~CcGeoIpPolicyNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy ID
                     * @return PolicyId Policy ID
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Policy ID
                     * @param PolicyId Policy ID
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取IP address
                     * @return Ip IP address
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP address
                     * @param Ip IP address
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取
                     * @return Domain 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置
                     * @param Domain 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Protocol. Valid values: `HTTP` and `HTTPS`.
                     * @return Protocol Protocol. Valid values: `HTTP` and `HTTPS`.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol. Valid values: `HTTP` and `HTTPS`.
                     * @param Protocol Protocol. Valid values: `HTTP` and `HTTPS`.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Action. Valid values: `drop` and `alg`.
                     * @return Action Action. Valid values: `drop` and `alg`.
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action. Valid values: `drop` and `alg`.
                     * @param Action Action. Valid values: `drop` and `alg`.
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Region type. Valid values: `china`, `oversea` and `customized`.
                     * @return RegionType Region type. Valid values: `china`, `oversea` and `customized`.
                     */
                    std::string GetRegionType() const;

                    /**
                     * 设置Region type. Valid values: `china`, `oversea` and `customized`.
                     * @param RegionType Region type. Valid values: `china`, `oversea` and `customized`.
                     */
                    void SetRegionType(const std::string& _regionType);

                    /**
                     * 判断参数 RegionType 是否已赋值
                     * @return RegionType 是否已赋值
                     */
                    bool RegionTypeHasBeenSet() const;

                    /**
                     * 获取ID list of regions to be blocked
                     * @return AreaList ID list of regions to be blocked
                     */
                    std::vector<uint64_t> GetAreaList() const;

                    /**
                     * 设置ID list of regions to be blocked
                     * @param AreaList ID list of regions to be blocked
                     */
                    void SetAreaList(const std::vector<uint64_t>& _areaList);

                    /**
                     * 判断参数 AreaList 是否已赋值
                     * @return AreaList 是否已赋值
                     */
                    bool AreaListHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Modification time
                     * @return ModifyTime Modification time
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time
                     * @param ModifyTime Modification time
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Policy ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * IP address
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Protocol. Valid values: `HTTP` and `HTTPS`.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Action. Valid values: `drop` and `alg`.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Region type. Valid values: `china`, `oversea` and `customized`.
                     */
                    std::string m_regionType;
                    bool m_regionTypeHasBeenSet;

                    /**
                     * ID list of regions to be blocked
                     */
                    std::vector<uint64_t> m_areaList;
                    bool m_areaListHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCGEOIPPOLICYNEW_H_
