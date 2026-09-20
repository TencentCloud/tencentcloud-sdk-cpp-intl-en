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
                * IP access restriction rule. It supports configuration of IP blocklists and allowlists.
                */
                class IPFilterPolicy : public AbstractModel
                {
                public:
                    IPFilterPolicy();
                    ~IPFilterPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP access restriction status. Available values:
<li>Enabled: enabled;</li>
<li>Disabled: Disable.</li>
                     * @return Status IP access restriction status. Available values:
<li>Enabled: enabled;</li>
<li>Disabled: Disable.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置IP access restriction status. Available values:
<li>Enabled: enabled;</li>
<li>Disabled: Disable.</li>
                     * @param _status IP access restriction status. Available values:
<li>Enabled: enabled;</li>
<li>Disabled: Disable.</li>
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
                     * 获取IP access restriction type: <li>Black: blocklist verification. Only IP requests from the IPList will be intercepted.</li>
<li>White: whitelist method validation. Only requests from IPs in the IPList are allowed.</li>When Status is Enabled, FilterType must be assigned a value.
                     * @return FilterType IP access restriction type: <li>Black: blocklist verification. Only IP requests from the IPList will be intercepted.</li>
<li>White: whitelist method validation. Only requests from IPs in the IPList are allowed.</li>When Status is Enabled, FilterType must be assigned a value.
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置IP access restriction type: <li>Black: blocklist verification. Only IP requests from the IPList will be intercepted.</li>
<li>White: whitelist method validation. Only requests from IPs in the IPList are allowed.</li>When Status is Enabled, FilterType must be assigned a value.
                     * @param _filterType IP access restriction type: <li>Black: blocklist verification. Only IP requests from the IPList will be intercepted.</li>
<li>White: whitelist method validation. Only requests from IPs in the IPList are allowed.</li>When Status is Enabled, FilterType must be assigned a value.
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
                     * 获取IP list. Supports IPV4 addresses in X.X.X.X format, IPV6 addresses in X:X:X:X:X:X:X:X format, or IP ranges in /N format (IPV4: 1≤N≤32; IPV6: 1≤N≤128). You can fill up to 200 IPs or ranges. When Status is Enabled, IPList must be assigned a value.
                     * @return IPList IP list. Supports IPV4 addresses in X.X.X.X format, IPV6 addresses in X:X:X:X:X:X:X:X format, or IP ranges in /N format (IPV4: 1≤N≤32; IPV6: 1≤N≤128). You can fill up to 200 IPs or ranges. When Status is Enabled, IPList must be assigned a value.
                     * 
                     */
                    std::vector<std::string> GetIPList() const;

                    /**
                     * 设置IP list. Supports IPV4 addresses in X.X.X.X format, IPV6 addresses in X:X:X:X:X:X:X:X format, or IP ranges in /N format (IPV4: 1≤N≤32; IPV6: 1≤N≤128). You can fill up to 200 IPs or ranges. When Status is Enabled, IPList must be assigned a value.
                     * @param _iPList IP list. Supports IPV4 addresses in X.X.X.X format, IPV6 addresses in X:X:X:X:X:X:X:X format, or IP ranges in /N format (IPV4: 1≤N≤32; IPV6: 1≤N≤128). You can fill up to 200 IPs or ranges. When Status is Enabled, IPList must be assigned a value.
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
                     * IP access restriction status. Available values:
<li>Enabled: enabled;</li>
<li>Disabled: Disable.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * IP access restriction type: <li>Black: blocklist verification. Only IP requests from the IPList will be intercepted.</li>
<li>White: whitelist method validation. Only requests from IPs in the IPList are allowed.</li>When Status is Enabled, FilterType must be assigned a value.
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * IP list. Supports IPV4 addresses in X.X.X.X format, IPV6 addresses in X:X:X:X:X:X:X:X format, or IP ranges in /N format (IPV4: 1≤N≤32; IPV6: 1≤N≤128). You can fill up to 200 IPs or ranges. When Status is Enabled, IPList must be assigned a value.
                     */
                    std::vector<std::string> m_iPList;
                    bool m_iPListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IPFILTERPOLICY_H_
