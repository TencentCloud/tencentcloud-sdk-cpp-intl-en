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
                * Binding relationship between the layer-7 acceleration domain name/layer-4 proxy instance and the origin IP range, including the origin IP range details and the list of switchable origin IP ranges.
                */
                class OriginACLInfo : public AbstractModel
                {
                public:
                    OriginACLInfo();
                    ~OriginACLInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Origin protection mode for layer-7 acceleration domain names. Valid values: <li>all: automatic protection mode. All layer-7 acceleration domain names in the site are included in the origin protection list, including newly added layer-7 acceleration domain names;</li><li>specific: specified protection mode. Only bound layer-7 acceleration domain names are protected.</li></p>
                     * @return L7EnableMode <p>Origin protection mode for layer-7 acceleration domain names. Valid values: <li>all: automatic protection mode. All layer-7 acceleration domain names in the site are included in the origin protection list, including newly added layer-7 acceleration domain names;</li><li>specific: specified protection mode. Only bound layer-7 acceleration domain names are protected.</li></p>
                     * 
                     */
                    std::string GetL7EnableMode() const;

                    /**
                     * 设置<p>Origin protection mode for layer-7 acceleration domain names. Valid values: <li>all: automatic protection mode. All layer-7 acceleration domain names in the site are included in the origin protection list, including newly added layer-7 acceleration domain names;</li><li>specific: specified protection mode. Only bound layer-7 acceleration domain names are protected.</li></p>
                     * @param _l7EnableMode <p>Origin protection mode for layer-7 acceleration domain names. Valid values: <li>all: automatic protection mode. All layer-7 acceleration domain names in the site are included in the origin protection list, including newly added layer-7 acceleration domain names;</li><li>specific: specified protection mode. Only bound layer-7 acceleration domain names are protected.</li></p>
                     * 
                     */
                    void SetL7EnableMode(const std::string& _l7EnableMode);

                    /**
                     * 判断参数 L7EnableMode 是否已赋值
                     * @return L7EnableMode 是否已赋值
                     * 
                     */
                    bool L7EnableModeHasBeenSet() const;

                    /**
                     * 获取<p>List of layer-7 acceleration domain names that have origin-pull from specific origin IP ranges enabled. Empty when origin protection is not enabled.</p>
                     * @return L7Hosts <p>List of layer-7 acceleration domain names that have origin-pull from specific origin IP ranges enabled. Empty when origin protection is not enabled.</p>
                     * 
                     */
                    std::vector<std::string> GetL7Hosts() const;

                    /**
                     * 设置<p>List of layer-7 acceleration domain names that have origin-pull from specific origin IP ranges enabled. Empty when origin protection is not enabled.</p>
                     * @param _l7Hosts <p>List of layer-7 acceleration domain names that have origin-pull from specific origin IP ranges enabled. Empty when origin protection is not enabled.</p>
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
                     * 获取<p>Origin protection mode for layer-4 proxy instances. Valid values: <li>all: automatic protection mode. All layer-4 proxy instances in the site are included in the origin protection list, including newly added layer-4 proxy instances;</li><li>specific: specified protection mode. Only bound layer-4 proxy instances are protected.</li></p>
                     * @return L4EnableMode <p>Origin protection mode for layer-4 proxy instances. Valid values: <li>all: automatic protection mode. All layer-4 proxy instances in the site are included in the origin protection list, including newly added layer-4 proxy instances;</li><li>specific: specified protection mode. Only bound layer-4 proxy instances are protected.</li></p>
                     * 
                     */
                    std::string GetL4EnableMode() const;

                    /**
                     * 设置<p>Origin protection mode for layer-4 proxy instances. Valid values: <li>all: automatic protection mode. All layer-4 proxy instances in the site are included in the origin protection list, including newly added layer-4 proxy instances;</li><li>specific: specified protection mode. Only bound layer-4 proxy instances are protected.</li></p>
                     * @param _l4EnableMode <p>Origin protection mode for layer-4 proxy instances. Valid values: <li>all: automatic protection mode. All layer-4 proxy instances in the site are included in the origin protection list, including newly added layer-4 proxy instances;</li><li>specific: specified protection mode. Only bound layer-4 proxy instances are protected.</li></p>
                     * 
                     */
                    void SetL4EnableMode(const std::string& _l4EnableMode);

                    /**
                     * 判断参数 L4EnableMode 是否已赋值
                     * @return L4EnableMode 是否已赋值
                     * 
                     */
                    bool L4EnableModeHasBeenSet() const;

                    /**
                     * 获取<p>List of layer-4 proxy instances that have origin-pull from specific origin IP ranges enabled. Empty when origin protection is not enabled.</p>
                     * @return L4ProxyIds <p>List of layer-4 proxy instances that have origin-pull from specific origin IP ranges enabled. Empty when origin protection is not enabled.</p>
                     * 
                     */
                    std::vector<std::string> GetL4ProxyIds() const;

                    /**
                     * 设置<p>List of layer-4 proxy instances that have origin-pull from specific origin IP ranges enabled. Empty when origin protection is not enabled.</p>
                     * @param _l4ProxyIds <p>List of layer-4 proxy instances that have origin-pull from specific origin IP ranges enabled. Empty when origin protection is not enabled.</p>
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
                     * 获取<p>Currently effective origin IP range. Empty when origin protection is not enabled.</p>
                     * @return CurrentOriginACL <p>Currently effective origin IP range. Empty when origin protection is not enabled.</p>
                     * 
                     */
                    CurrentOriginACL GetCurrentOriginACL() const;

                    /**
                     * 设置<p>Currently effective origin IP range. Empty when origin protection is not enabled.</p>
                     * @param _currentOriginACL <p>Currently effective origin IP range. Empty when origin protection is not enabled.</p>
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
                     * 获取<p>When the origin IP range is updated, this field returns the origin IP range that will take effect in the next version, including a comparison with the current origin IP range. Empty when there is no update or origin protection is not enabled.</p>
                     * @return NextOriginACL <p>When the origin IP range is updated, this field returns the origin IP range that will take effect in the next version, including a comparison with the current origin IP range. Empty when there is no update or origin protection is not enabled.</p>
                     * 
                     */
                    NextOriginACL GetNextOriginACL() const;

                    /**
                     * 设置<p>When the origin IP range is updated, this field returns the origin IP range that will take effect in the next version, including a comparison with the current origin IP range. Empty when there is no update or origin protection is not enabled.</p>
                     * @param _nextOriginACL <p>When the origin IP range is updated, this field returns the origin IP range that will take effect in the next version, including a comparison with the current origin IP range. Empty when there is no update or origin protection is not enabled.</p>
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
                     * 获取<p>Origin protection status. Valid values:</p><li>online: Effective;</li><li>offline: Disabled;</li><li>updating: Configuration being deployed.</li>
                     * @return Status <p>Origin protection status. Valid values:</p><li>online: Effective;</li><li>offline: Disabled;</li><li>updating: Configuration being deployed.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Origin protection status. Valid values:</p><li>online: Effective;</li><li>offline: Disabled;</li><li>updating: Configuration being deployed.</li>
                     * @param _status <p>Origin protection status. Valid values:</p><li>online: Effective;</li><li>offline: Disabled;</li><li>updating: Configuration being deployed.</li>
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
                     * 获取<p>Origin protection origin-pull ACL control domain.</p>
                     * @return OriginACLFamily <p>Origin protection origin-pull ACL control domain.</p>
                     * 
                     */
                    std::string GetOriginACLFamily() const;

                    /**
                     * 设置<p>Origin protection origin-pull ACL control domain.</p>
                     * @param _originACLFamily <p>Origin protection origin-pull ACL control domain.</p>
                     * 
                     */
                    void SetOriginACLFamily(const std::string& _originACLFamily);

                    /**
                     * 判断参数 OriginACLFamily 是否已赋值
                     * @return OriginACLFamily 是否已赋值
                     * 
                     */
                    bool OriginACLFamilyHasBeenSet() const;

                private:

                    /**
                     * <p>Origin protection mode for layer-7 acceleration domain names. Valid values: <li>all: automatic protection mode. All layer-7 acceleration domain names in the site are included in the origin protection list, including newly added layer-7 acceleration domain names;</li><li>specific: specified protection mode. Only bound layer-7 acceleration domain names are protected.</li></p>
                     */
                    std::string m_l7EnableMode;
                    bool m_l7EnableModeHasBeenSet;

                    /**
                     * <p>List of layer-7 acceleration domain names that have origin-pull from specific origin IP ranges enabled. Empty when origin protection is not enabled.</p>
                     */
                    std::vector<std::string> m_l7Hosts;
                    bool m_l7HostsHasBeenSet;

                    /**
                     * <p>Origin protection mode for layer-4 proxy instances. Valid values: <li>all: automatic protection mode. All layer-4 proxy instances in the site are included in the origin protection list, including newly added layer-4 proxy instances;</li><li>specific: specified protection mode. Only bound layer-4 proxy instances are protected.</li></p>
                     */
                    std::string m_l4EnableMode;
                    bool m_l4EnableModeHasBeenSet;

                    /**
                     * <p>List of layer-4 proxy instances that have origin-pull from specific origin IP ranges enabled. Empty when origin protection is not enabled.</p>
                     */
                    std::vector<std::string> m_l4ProxyIds;
                    bool m_l4ProxyIdsHasBeenSet;

                    /**
                     * <p>Currently effective origin IP range. Empty when origin protection is not enabled.</p>
                     */
                    CurrentOriginACL m_currentOriginACL;
                    bool m_currentOriginACLHasBeenSet;

                    /**
                     * <p>When the origin IP range is updated, this field returns the origin IP range that will take effect in the next version, including a comparison with the current origin IP range. Empty when there is no update or origin protection is not enabled.</p>
                     */
                    NextOriginACL m_nextOriginACL;
                    bool m_nextOriginACLHasBeenSet;

                    /**
                     * <p>Origin protection status. Valid values:</p><li>online: Effective;</li><li>offline: Disabled;</li><li>updating: Configuration being deployed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Origin protection origin-pull ACL control domain.</p>
                     */
                    std::string m_originACLFamily;
                    bool m_originACLFamilyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLINFO_H_
