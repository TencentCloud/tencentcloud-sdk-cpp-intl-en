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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSEPATHREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSEPATHREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeExposePath request structure.
                */
                class DescribeExposePathRequest : public AbstractModel
                {
                public:
                    DescribeExposePathRequest();
                    ~DescribeExposePathRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Asset ID.
                     * @return AssetId Asset ID.
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Asset ID.
                     * @param _assetId Asset ID.
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取Asset IP.
                     * @return Ip Asset IP.
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Asset IP.
                     * @param _ip Asset IP.
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
                     * 获取Asset domain name.
                     * @return Domain Asset domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Asset domain name.
                     * @param _domain Asset domain name.
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
                     * 获取Port or port range.
                     * @return Port Port or port range.
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Port or port range.
                     * @param _port Port or port range.
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Asset ID.
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Asset IP.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Asset domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Port or port range.
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSEPATHREQUEST_H_
