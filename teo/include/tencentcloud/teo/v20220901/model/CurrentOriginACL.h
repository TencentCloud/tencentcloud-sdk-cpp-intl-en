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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CURRENTORIGINACL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CURRENTORIGINACL_H_

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
                * Currently effective origin ACLs.
                */
                class CurrentOriginACL : public AbstractModel
                {
                public:
                    CurrentOriginACL();
                    ~CurrentOriginACL() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP range details.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return EntireAddresses IP range details.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    Addresses GetEntireAddresses() const;

                    /**
                     * 设置IP range details.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _entireAddresses IP range details.
Note: This field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取Version number.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return Version Version number.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Version number.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _version Version number.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Version effective time in UTC+8, following the date and time format of the ISO 8601 standard.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return ActiveTime Version effective time in UTC+8, following the date and time format of the ISO 8601 standard.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::string GetActiveTime() const;

                    /**
                     * 设置Version effective time in UTC+8, following the date and time format of the ISO 8601 standard.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _activeTime Version effective time in UTC+8, following the date and time format of the ISO 8601 standard.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetActiveTime(const std::string& _activeTime);

                    /**
                     * 判断参数 ActiveTime 是否已赋值
                     * @return ActiveTime 是否已赋值
                     * 
                     */
                    bool ActiveTimeHasBeenSet() const;

                    /**
                     * 获取This parameter is used to record whether "I've upgraded to the lastest verison" is completed before the origin ACLs version is effective. valid values:.
- true: specifies that the version is effective and the update to the latest version is confirmed.
- false: when the version takes effect, the confirmation of updating to the latest origin ACLs are not completed. The IP range is forcibly updated to the latest version in the backend. When this parameter returns false, please confirm in time whether your origin server firewall configuration has been updated to the latest version to avoid origin-pull failure.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return IsPlaned This parameter is used to record whether "I've upgraded to the lastest verison" is completed before the origin ACLs version is effective. valid values:.
- true: specifies that the version is effective and the update to the latest version is confirmed.
- false: when the version takes effect, the confirmation of updating to the latest origin ACLs are not completed. The IP range is forcibly updated to the latest version in the backend. When this parameter returns false, please confirm in time whether your origin server firewall configuration has been updated to the latest version to avoid origin-pull failure.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::string GetIsPlaned() const;

                    /**
                     * 设置This parameter is used to record whether "I've upgraded to the lastest verison" is completed before the origin ACLs version is effective. valid values:.
- true: specifies that the version is effective and the update to the latest version is confirmed.
- false: when the version takes effect, the confirmation of updating to the latest origin ACLs are not completed. The IP range is forcibly updated to the latest version in the backend. When this parameter returns false, please confirm in time whether your origin server firewall configuration has been updated to the latest version to avoid origin-pull failure.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _isPlaned This parameter is used to record whether "I've upgraded to the lastest verison" is completed before the origin ACLs version is effective. valid values:.
- true: specifies that the version is effective and the update to the latest version is confirmed.
- false: when the version takes effect, the confirmation of updating to the latest origin ACLs are not completed. The IP range is forcibly updated to the latest version in the backend. When this parameter returns false, please confirm in time whether your origin server firewall configuration has been updated to the latest version to avoid origin-pull failure.
Note: This field may return null, which indicates a failure to obtain a valid value.
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
                     * IP range details.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    Addresses m_entireAddresses;
                    bool m_entireAddressesHasBeenSet;

                    /**
                     * Version number.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Version effective time in UTC+8, following the date and time format of the ISO 8601 standard.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::string m_activeTime;
                    bool m_activeTimeHasBeenSet;

                    /**
                     * This parameter is used to record whether "I've upgraded to the lastest verison" is completed before the origin ACLs version is effective. valid values:.
- true: specifies that the version is effective and the update to the latest version is confirmed.
- false: when the version takes effect, the confirmation of updating to the latest origin ACLs are not completed. The IP range is forcibly updated to the latest version in the backend. When this parameter returns false, please confirm in time whether your origin server firewall configuration has been updated to the latest version to avoid origin-pull failure.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::string m_isPlaned;
                    bool m_isPlanedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CURRENTORIGINACL_H_
