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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYCURRENTORIGINACL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYCURRENTORIGINACL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Addresses.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Describes the currently effective IP range for origin servers.
                */
                class MultiPathGatewayCurrentOriginACL : public AbstractModel
                {
                public:
                    MultiPathGatewayCurrentOriginACL();
                    ~MultiPathGatewayCurrentOriginACL() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Describes the IP range details for origin servers.
                     * @return EntireAddresses Describes the IP range details for origin servers.
                     * 
                     */
                    Addresses GetEntireAddresses() const;

                    /**
                     * 设置Describes the IP range details for origin servers.
                     * @param _entireAddresses Describes the IP range details for origin servers.
                     * 
                     */
                    void SetEntireAddresses(const Addresses& _entireAddresses);

                    /**
                     * 判断参数 EntireAddresses 是否已赋值
                     * @return EntireAddresses 是否已赋值
                     * 
                     */
                    bool EntireAddressesHasBeenSet() const;

                    /**
                     * 获取Specifies the version number.
                     * @return Version Specifies the version number.
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置Specifies the version number.
                     * @param _version Specifies the version number.
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取This parameter records whether "i have updated to the latest origin IP range" is completed before taking effect. valid values:.
<li>true: confirms the update to the latest origin IP is completed.</li>.
<li>false: indicates the update to the latest origin IP is not completed.</li>.
Note: when false is returned for this parameter, please confirm in time whether your origin server firewall configuration has been updated to the latest IP range to avoid origin-pull failure.
                     * @return IsPlaned This parameter records whether "i have updated to the latest origin IP range" is completed before taking effect. valid values:.
<li>true: confirms the update to the latest origin IP is completed.</li>.
<li>false: indicates the update to the latest origin IP is not completed.</li>.
Note: when false is returned for this parameter, please confirm in time whether your origin server firewall configuration has been updated to the latest IP range to avoid origin-pull failure.
                     * 
                     */
                    std::string GetIsPlaned() const;

                    /**
                     * 设置This parameter records whether "i have updated to the latest origin IP range" is completed before taking effect. valid values:.
<li>true: confirms the update to the latest origin IP is completed.</li>.
<li>false: indicates the update to the latest origin IP is not completed.</li>.
Note: when false is returned for this parameter, please confirm in time whether your origin server firewall configuration has been updated to the latest IP range to avoid origin-pull failure.
                     * @param _isPlaned This parameter records whether "i have updated to the latest origin IP range" is completed before taking effect. valid values:.
<li>true: confirms the update to the latest origin IP is completed.</li>.
<li>false: indicates the update to the latest origin IP is not completed.</li>.
Note: when false is returned for this parameter, please confirm in time whether your origin server firewall configuration has been updated to the latest IP range to avoid origin-pull failure.
                     * 
                     */
                    void SetIsPlaned(const std::string& _isPlaned);

                    /**
                     * 判断参数 IsPlaned 是否已赋值
                     * @return IsPlaned 是否已赋值
                     * 
                     */
                    bool IsPlanedHasBeenSet() const;

                private:

                    /**
                     * Describes the IP range details for origin servers.
                     */
                    Addresses m_entireAddresses;
                    bool m_entireAddressesHasBeenSet;

                    /**
                     * Specifies the version number.
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * This parameter records whether "i have updated to the latest origin IP range" is completed before taking effect. valid values:.
<li>true: confirms the update to the latest origin IP is completed.</li>.
<li>false: indicates the update to the latest origin IP is not completed.</li>.
Note: when false is returned for this parameter, please confirm in time whether your origin server firewall configuration has been updated to the latest IP range to avoid origin-pull failure.
                     */
                    std::string m_isPlaned;
                    bool m_isPlanedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYCURRENTORIGINACL_H_
