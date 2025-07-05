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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYGROUPDOMAINCONFIGREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYGROUPDOMAINCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/AccessRegionDomainConf.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * ModifyGroupDomainConfig request structure.
                */
                class ModifyGroupDomainConfigRequest : public AbstractModel
                {
                public:
                    ModifyGroupDomainConfigRequest();
                    ~ModifyGroupDomainConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Connection group ID.
                     * @return GroupId Connection group ID.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Connection group ID.
                     * @param _groupId Connection group ID.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Default access IP or domain name of domain name resolution
                     * @return DefaultDnsIp Default access IP or domain name of domain name resolution
                     * 
                     */
                    std::string GetDefaultDnsIp() const;

                    /**
                     * 设置Default access IP or domain name of domain name resolution
                     * @param _defaultDnsIp Default access IP or domain name of domain name resolution
                     * 
                     */
                    void SetDefaultDnsIp(const std::string& _defaultDnsIp);

                    /**
                     * 判断参数 DefaultDnsIp 是否已赋值
                     * @return DefaultDnsIp 是否已赋值
                     * 
                     */
                    bool DefaultDnsIpHasBeenSet() const;

                    /**
                     * 获取Nearest access region configuration.
                     * @return AccessRegionList Nearest access region configuration.
                     * 
                     */
                    std::vector<AccessRegionDomainConf> GetAccessRegionList() const;

                    /**
                     * 设置Nearest access region configuration.
                     * @param _accessRegionList Nearest access region configuration.
                     * 
                     */
                    void SetAccessRegionList(const std::vector<AccessRegionDomainConf>& _accessRegionList);

                    /**
                     * 判断参数 AccessRegionList 是否已赋值
                     * @return AccessRegionList 是否已赋值
                     * 
                     */
                    bool AccessRegionListHasBeenSet() const;

                private:

                    /**
                     * Connection group ID.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Default access IP or domain name of domain name resolution
                     */
                    std::string m_defaultDnsIp;
                    bool m_defaultDnsIpHasBeenSet;

                    /**
                     * Nearest access region configuration.
                     */
                    std::vector<AccessRegionDomainConf> m_accessRegionList;
                    bool m_accessRegionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYGROUPDOMAINCONFIGREQUEST_H_
