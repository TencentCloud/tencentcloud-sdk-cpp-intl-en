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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEAGENTINSTALLCOMMANDREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEAGENTINSTALLCOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAgentInstallCommand request structure.
                */
                class DescribeAgentInstallCommandRequest : public AbstractModel
                {
                public:
                    DescribeAgentInstallCommandRequest();
                    ~DescribeAgentInstallCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether Tencent Cloud
                     * @return IsCloud Whether Tencent Cloud
                     * 
                     */
                    bool GetIsCloud() const;

                    /**
                     * 设置Whether Tencent Cloud
                     * @param _isCloud Whether Tencent Cloud
                     * 
                     */
                    void SetIsCloud(const bool& _isCloud);

                    /**
                     * 判断参数 IsCloud 是否已赋值
                     * @return IsCloud 是否已赋值
                     * 
                     */
                    bool IsCloudHasBeenSet() const;

                    /**
                     * 获取Network type: basic - basic network; private - VPC; public - public network; direct - direct connect
                     * @return NetType Network type: basic - basic network; private - VPC; public - public network; direct - direct connect
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置Network type: basic - basic network; private - VPC; public - public network; direct - direct connect
                     * @param _netType Network type: basic - basic network; private - VPC; public - public network; direct - direct connect
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取Region identifier, required when NetType=direct
                     * @return RegionCode Region identifier, required when NetType=direct
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置Region identifier, required when NetType=direct
                     * @param _regionCode Region identifier, required when NetType=direct
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取VpcId, required when NetType=direct
                     * @return VpcId VpcId, required when NetType=direct
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VpcId, required when NetType=direct
                     * @param _vpcId VpcId, required when NetType=direct
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
                     * 获取Tag ID list, effective only when IsCloud=false
                     * @return TagIds Tag ID list, effective only when IsCloud=false
                     * 
                     */
                    std::vector<uint64_t> GetTagIds() const;

                    /**
                     * 设置Tag ID list, effective only when IsCloud=false
                     * @param _tagIds Tag ID list, effective only when IsCloud=false
                     * 
                     */
                    void SetTagIds(const std::vector<uint64_t>& _tagIds);

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                    /**
                     * 获取Command validity period, required for non-Tencent Cloud instances
                     * @return ExpireDate Command validity period, required for non-Tencent Cloud instances
                     * 
                     */
                    std::string GetExpireDate() const;

                    /**
                     * 设置Command validity period, required for non-Tencent Cloud instances
                     * @param _expireDate Command validity period, required for non-Tencent Cloud instances
                     * 
                     */
                    void SetExpireDate(const std::string& _expireDate);

                    /**
                     * 判断参数 ExpireDate 是否已赋值
                     * @return ExpireDate 是否已赋值
                     * 
                     */
                    bool ExpireDateHasBeenSet() const;

                    /**
                     * 获取VIP Accessed via Proxy Mode
                     * @return Vip VIP Accessed via Proxy Mode
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置VIP Accessed via Proxy Mode
                     * @param _vip VIP Accessed via Proxy Mode
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                private:

                    /**
                     * Whether Tencent Cloud
                     */
                    bool m_isCloud;
                    bool m_isCloudHasBeenSet;

                    /**
                     * Network type: basic - basic network; private - VPC; public - public network; direct - direct connect
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * Region identifier, required when NetType=direct
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * VpcId, required when NetType=direct
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Tag ID list, effective only when IsCloud=false
                     */
                    std::vector<uint64_t> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                    /**
                     * Command validity period, required for non-Tencent Cloud instances
                     */
                    std::string m_expireDate;
                    bool m_expireDateHasBeenSet;

                    /**
                     * VIP Accessed via Proxy Mode
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEAGENTINSTALLCOMMANDREQUEST_H_
