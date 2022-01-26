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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEGROUPDOMAINCONFIGRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEGROUPDOMAINCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/DomainAccessRegionDict.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeGroupDomainConfig response structure.
                */
                class DescribeGroupDomainConfigResponse : public AbstractModel
                {
                public:
                    DescribeGroupDomainConfigResponse();
                    ~DescribeGroupDomainConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Nearest access configuration list of domain name resolution.
                     * @return AccessRegionList Nearest access configuration list of domain name resolution.
                     */
                    std::vector<DomainAccessRegionDict> GetAccessRegionList() const;

                    /**
                     * 判断参数 AccessRegionList 是否已赋值
                     * @return AccessRegionList 是否已赋值
                     */
                    bool AccessRegionListHasBeenSet() const;

                    /**
                     * 获取Default accesses Ip.
                     * @return DefaultDnsIp Default accesses Ip.
                     */
                    std::string GetDefaultDnsIp() const;

                    /**
                     * 判断参数 DefaultDnsIp 是否已赋值
                     * @return DefaultDnsIp 是否已赋值
                     */
                    bool DefaultDnsIpHasBeenSet() const;

                    /**
                     * 获取Connection group ID.
                     * @return GroupId Connection group ID.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Total number of configuration of access regions.
                     * @return AccessRegionCount Total number of configuration of access regions.
                     */
                    int64_t GetAccessRegionCount() const;

                    /**
                     * 判断参数 AccessRegionCount 是否已赋值
                     * @return AccessRegionCount 是否已赋值
                     */
                    bool AccessRegionCountHasBeenSet() const;

                private:

                    /**
                     * Nearest access configuration list of domain name resolution.
                     */
                    std::vector<DomainAccessRegionDict> m_accessRegionList;
                    bool m_accessRegionListHasBeenSet;

                    /**
                     * Default accesses Ip.
                     */
                    std::string m_defaultDnsIp;
                    bool m_defaultDnsIpHasBeenSet;

                    /**
                     * Connection group ID.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Total number of configuration of access regions.
                     */
                    int64_t m_accessRegionCount;
                    bool m_accessRegionCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEGROUPDOMAINCONFIGRESPONSE_H_
