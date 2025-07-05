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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CurrentOriginACL.h>
#include <tencentcloud/teo/v20220901/model/NextOriginACL.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The binding relationship between L7 acceleration domains/L4 proxy instances and origin IP ranges, as well as origin IP range details.
                */
                class OriginACLInfo : public AbstractModel
                {
                public:
                    OriginACLInfo();
                    ~OriginACLInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The list of L7 accelerated domains that enable the origin ACLs. This field is empty when origin protection is not enabled.
                     * @return L7Hosts The list of L7 accelerated domains that enable the origin ACLs. This field is empty when origin protection is not enabled.
                     * 
                     */
                    std::vector<std::string> GetL7Hosts() const;

                    /**
                     * 设置The list of L7 accelerated domains that enable the origin ACLs. This field is empty when origin protection is not enabled.
                     * @param _l7Hosts The list of L7 accelerated domains that enable the origin ACLs. This field is empty when origin protection is not enabled.
                     * 
                     */
                    void SetL7Hosts(const std::vector<std::string>& _l7Hosts);

                    /**
                     * 判断参数 L7Hosts 是否已赋值
                     * @return L7Hosts 是否已赋值
                     * 
                     */
                    bool L7HostsHasBeenSet() const;

                    /**
                     * 获取The list of L4 proxy instances that enable the origin ACLs. This field is empty when origin protection is not enabled.
                     * @return L4ProxyIds The list of L4 proxy instances that enable the origin ACLs. This field is empty when origin protection is not enabled.
                     * 
                     */
                    std::vector<std::string> GetL4ProxyIds() const;

                    /**
                     * 设置The list of L4 proxy instances that enable the origin ACLs. This field is empty when origin protection is not enabled.
                     * @param _l4ProxyIds The list of L4 proxy instances that enable the origin ACLs. This field is empty when origin protection is not enabled.
                     * 
                     */
                    void SetL4ProxyIds(const std::vector<std::string>& _l4ProxyIds);

                    /**
                     * 判断参数 L4ProxyIds 是否已赋值
                     * @return L4ProxyIds 是否已赋值
                     * 
                     */
                    bool L4ProxyIdsHasBeenSet() const;

                    /**
                     * 获取Currently effective origin ACLs. This field is empty when origin protection is not enabled.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return CurrentOriginACL Currently effective origin ACLs. This field is empty when origin protection is not enabled.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    CurrentOriginACL GetCurrentOriginACL() const;

                    /**
                     * 设置Currently effective origin ACLs. This field is empty when origin protection is not enabled.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _currentOriginACL Currently effective origin ACLs. This field is empty when origin protection is not enabled.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetCurrentOriginACL(const CurrentOriginACL& _currentOriginACL);

                    /**
                     * 判断参数 CurrentOriginACL 是否已赋值
                     * @return CurrentOriginACL 是否已赋值
                     * 
                     */
                    bool CurrentOriginACLHasBeenSet() const;

                    /**
                     * 获取When the origin ACLs are updated, this field will be returned with the next version's origin IP range to take effect, including a comparison with the current origin IP range. This field is empty if not updated or origin protection is not enabled.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return NextOriginACL When the origin ACLs are updated, this field will be returned with the next version's origin IP range to take effect, including a comparison with the current origin IP range. This field is empty if not updated or origin protection is not enabled.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    NextOriginACL GetNextOriginACL() const;

                    /**
                     * 设置When the origin ACLs are updated, this field will be returned with the next version's origin IP range to take effect, including a comparison with the current origin IP range. This field is empty if not updated or origin protection is not enabled.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _nextOriginACL When the origin ACLs are updated, this field will be returned with the next version's origin IP range to take effect, including a comparison with the current origin IP range. This field is empty if not updated or origin protection is not enabled.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetNextOriginACL(const NextOriginACL& _nextOriginACL);

                    /**
                     * 判断参数 NextOriginACL 是否已赋值
                     * @return NextOriginACL 是否已赋值
                     * 
                     */
                    bool NextOriginACLHasBeenSet() const;

                    /**
                     * 获取Origin protection status. Vaild values:
- online: in effect;
- offline: disabled;
- updating: configuration deployment in progress.
                     * @return Status Origin protection status. Vaild values:
- online: in effect;
- offline: disabled;
- updating: configuration deployment in progress.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Origin protection status. Vaild values:
- online: in effect;
- offline: disabled;
- updating: configuration deployment in progress.
                     * @param _status Origin protection status. Vaild values:
- online: in effect;
- offline: disabled;
- updating: configuration deployment in progress.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * The list of L7 accelerated domains that enable the origin ACLs. This field is empty when origin protection is not enabled.
                     */
                    std::vector<std::string> m_l7Hosts;
                    bool m_l7HostsHasBeenSet;

                    /**
                     * The list of L4 proxy instances that enable the origin ACLs. This field is empty when origin protection is not enabled.
                     */
                    std::vector<std::string> m_l4ProxyIds;
                    bool m_l4ProxyIdsHasBeenSet;

                    /**
                     * Currently effective origin ACLs. This field is empty when origin protection is not enabled.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    CurrentOriginACL m_currentOriginACL;
                    bool m_currentOriginACLHasBeenSet;

                    /**
                     * When the origin ACLs are updated, this field will be returned with the next version's origin IP range to take effect, including a comparison with the current origin IP range. This field is empty if not updated or origin protection is not enabled.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    NextOriginACL m_nextOriginACL;
                    bool m_nextOriginACLHasBeenSet;

                    /**
                     * Origin protection status. Vaild values:
- online: in effect;
- offline: disabled;
- updating: configuration deployment in progress.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLINFO_H_
