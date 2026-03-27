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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IPFILTERPOLICY_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IPFILTERPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * IP access restriction rules, currently supports configuring IP blocklist and allowlist.
                */
                class IPFilterPolicy : public AbstractModel
                {
                public:
                    IPFilterPolicy();
                    ~IPFilterPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP access restriction status. Optional values:
<li>Enabled: enable;</li>
<li>Disabled: disable.</li>
                     * @return Status IP access restriction status. Optional values:
<li>Enabled: enable;</li>
<li>Disabled: disable.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置IP access restriction status. Optional values:
<li>Enabled: enable;</li>
<li>Disabled: disable.</li>
                     * @param _status IP access restriction status. Optional values:
<li>Enabled: enable;</li>
<li>Disabled: disable.</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取IP access restriction type:
<li>Black: blocklist-based verification. Only IP requests from the IPList will be blocked.</li>
<li>White: allowlist-based verification. Only IP requests from the IPList will be allowed.</li>When Status is set to Enabled, FilterType must be assigned.
                     * @return FilterType IP access restriction type:
<li>Black: blocklist-based verification. Only IP requests from the IPList will be blocked.</li>
<li>White: allowlist-based verification. Only IP requests from the IPList will be allowed.</li>When Status is set to Enabled, FilterType must be assigned.
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置IP access restriction type:
<li>Black: blocklist-based verification. Only IP requests from the IPList will be blocked.</li>
<li>White: allowlist-based verification. Only IP requests from the IPList will be allowed.</li>When Status is set to Enabled, FilterType must be assigned.
                     * @param _filterType IP access restriction type:
<li>Black: blocklist-based verification. Only IP requests from the IPList will be blocked.</li>
<li>White: allowlist-based verification. Only IP requests from the IPList will be allowed.</li>When Status is set to Enabled, FilterType must be assigned.
                     * 
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取IP list, supporting IPV4 addresses in X.X.X.X format, IPV6 addresses in X:X:X:X:X:X:X:X format, or CIDR notation /N (IPV4: 1 ≤ N ≤ 32; IPV6: 1 ≤ N ≤ 128). A maximum of 200 IPs or CIDR blocks can be added. When Status is set to Enabled, IPList must be assigned.
                     * @return IPList IP list, supporting IPV4 addresses in X.X.X.X format, IPV6 addresses in X:X:X:X:X:X:X:X format, or CIDR notation /N (IPV4: 1 ≤ N ≤ 32; IPV6: 1 ≤ N ≤ 128). A maximum of 200 IPs or CIDR blocks can be added. When Status is set to Enabled, IPList must be assigned.
                     * 
                     */
                    std::vector<std::string> GetIPList() const;

                    /**
                     * 设置IP list, supporting IPV4 addresses in X.X.X.X format, IPV6 addresses in X:X:X:X:X:X:X:X format, or CIDR notation /N (IPV4: 1 ≤ N ≤ 32; IPV6: 1 ≤ N ≤ 128). A maximum of 200 IPs or CIDR blocks can be added. When Status is set to Enabled, IPList must be assigned.
                     * @param _iPList IP list, supporting IPV4 addresses in X.X.X.X format, IPV6 addresses in X:X:X:X:X:X:X:X format, or CIDR notation /N (IPV4: 1 ≤ N ≤ 32; IPV6: 1 ≤ N ≤ 128). A maximum of 200 IPs or CIDR blocks can be added. When Status is set to Enabled, IPList must be assigned.
                     * 
                     */
                    void SetIPList(const std::vector<std::string>& _iPList);

                    /**
                     * 判断参数 IPList 是否已赋值
                     * @return IPList 是否已赋值
                     * 
                     */
                    bool IPListHasBeenSet() const;

                private:

                    /**
                     * IP access restriction status. Optional values:
<li>Enabled: enable;</li>
<li>Disabled: disable.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * IP access restriction type:
<li>Black: blocklist-based verification. Only IP requests from the IPList will be blocked.</li>
<li>White: allowlist-based verification. Only IP requests from the IPList will be allowed.</li>When Status is set to Enabled, FilterType must be assigned.
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * IP list, supporting IPV4 addresses in X.X.X.X format, IPV6 addresses in X:X:X:X:X:X:X:X format, or CIDR notation /N (IPV4: 1 ≤ N ≤ 32; IPV6: 1 ≤ N ≤ 128). A maximum of 200 IPs or CIDR blocks can be added. When Status is set to Enabled, IPList must be assigned.
                     */
                    std::vector<std::string> m_iPList;
                    bool m_iPListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IPFILTERPOLICY_H_
