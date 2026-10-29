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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLFAMILYINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLFAMILYINFO_H_

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
                * Version information of origin-pull IP ranges.
                */
                class OriginACLFamilyInfo : public AbstractModel
                {
                public:
                    OriginACLFamilyInfo();
                    ~OriginACLFamilyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin protection version number.
Format description:
Standard version.
<li>gaz-xxxxx: global;</li>
<li>mlc-xxxxx: China;</li>
<li>emc-xxxxx: overseas (worldwide excluding China);</li>
Simplified edition (platform-level version)
<li>plat-gaz-xxxxxx: Simplified global edition;</li>
<li>plat-mlc-xxxxxx: Simplified China version;</li>
<li>plat-emc-xxxxxx: Simplified overseas (global excluding China) edition;</li>
Abbreviation description:
<li>gaz:Global AZ Availability Zone;</li>
<li>mlc:mainlandChina;</li>
<li>emc:Exclude mainlandChina.</li>
                     * @return Version Origin protection version number.
Format description:
Standard version.
<li>gaz-xxxxx: global;</li>
<li>mlc-xxxxx: China;</li>
<li>emc-xxxxx: overseas (worldwide excluding China);</li>
Simplified edition (platform-level version)
<li>plat-gaz-xxxxxx: Simplified global edition;</li>
<li>plat-mlc-xxxxxx: Simplified China version;</li>
<li>plat-emc-xxxxxx: Simplified overseas (global excluding China) edition;</li>
Abbreviation description:
<li>gaz:Global AZ Availability Zone;</li>
<li>mlc:mainlandChina;</li>
<li>emc:Exclude mainlandChina.</li>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Origin protection version number.
Format description:
Standard version.
<li>gaz-xxxxx: global;</li>
<li>mlc-xxxxx: China;</li>
<li>emc-xxxxx: overseas (worldwide excluding China);</li>
Simplified edition (platform-level version)
<li>plat-gaz-xxxxxx: Simplified global edition;</li>
<li>plat-mlc-xxxxxx: Simplified China version;</li>
<li>plat-emc-xxxxxx: Simplified overseas (global excluding China) edition;</li>
Abbreviation description:
<li>gaz:Global AZ Availability Zone;</li>
<li>mlc:mainlandChina;</li>
<li>emc:Exclude mainlandChina.</li>
                     * @param _version Origin protection version number.
Format description:
Standard version.
<li>gaz-xxxxx: global;</li>
<li>mlc-xxxxx: China;</li>
<li>emc-xxxxx: overseas (worldwide excluding China);</li>
Simplified edition (platform-level version)
<li>plat-gaz-xxxxxx: Simplified global edition;</li>
<li>plat-mlc-xxxxxx: Simplified China version;</li>
<li>plat-emc-xxxxxx: Simplified overseas (global excluding China) edition;</li>
Abbreviation description:
<li>gaz:Global AZ Availability Zone;</li>
<li>mlc:mainlandChina;</li>
<li>emc:Exclude mainlandChina.</li>
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
                     * 获取Version effective time, which adopts Beijing time (UTC+8) and follows the date and time format of the ISO 8601 standard.
                     * @return ActiveTime Version effective time, which adopts Beijing time (UTC+8) and follows the date and time format of the ISO 8601 standard.
                     * 
                     */
                    std::string GetActiveTime() const;

                    /**
                     * 设置Version effective time, which adopts Beijing time (UTC+8) and follows the date and time format of the ISO 8601 standard.
                     * @param _activeTime Version effective time, which adopts Beijing time (UTC+8) and follows the date and time format of the ISO 8601 standard.
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
                     * 获取Origin-pull IP range details.	
                     * @return EntireAddresses Origin-pull IP range details.	
                     * 
                     */
                    Addresses GetEntireAddresses() const;

                    /**
                     * 设置Origin-pull IP range details.	
                     * @param _entireAddresses Origin-pull IP range details.	
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
                     * 获取Origin protection origin-pull ACL control domain. Parameter values are as follows:
<li>gaz: standard global availability zone control domain;</li>
<li>mlc: standard Chinese mainland availability zone control domain;</li>
<li>emc: standard worldwide (excluding Chinese mainland) availability zone control domain;</li>
<li>plat-gaz: simplified global availability zone control domain;</li>
<li>plat-mlc: Simplified Chinese mainland availability zone control domain;</li>
<li>plat-emc: Simplified global (excluding Chinese mainland) availability zone control domain;</li>
                     * @return OriginACLFamily Origin protection origin-pull ACL control domain. Parameter values are as follows:
<li>gaz: standard global availability zone control domain;</li>
<li>mlc: standard Chinese mainland availability zone control domain;</li>
<li>emc: standard worldwide (excluding Chinese mainland) availability zone control domain;</li>
<li>plat-gaz: simplified global availability zone control domain;</li>
<li>plat-mlc: Simplified Chinese mainland availability zone control domain;</li>
<li>plat-emc: Simplified global (excluding Chinese mainland) availability zone control domain;</li>
                     * 
                     */
                    std::string GetOriginACLFamily() const;

                    /**
                     * 设置Origin protection origin-pull ACL control domain. Parameter values are as follows:
<li>gaz: standard global availability zone control domain;</li>
<li>mlc: standard Chinese mainland availability zone control domain;</li>
<li>emc: standard worldwide (excluding Chinese mainland) availability zone control domain;</li>
<li>plat-gaz: simplified global availability zone control domain;</li>
<li>plat-mlc: Simplified Chinese mainland availability zone control domain;</li>
<li>plat-emc: Simplified global (excluding Chinese mainland) availability zone control domain;</li>
                     * @param _originACLFamily Origin protection origin-pull ACL control domain. Parameter values are as follows:
<li>gaz: standard global availability zone control domain;</li>
<li>mlc: standard Chinese mainland availability zone control domain;</li>
<li>emc: standard worldwide (excluding Chinese mainland) availability zone control domain;</li>
<li>plat-gaz: simplified global availability zone control domain;</li>
<li>plat-mlc: Simplified Chinese mainland availability zone control domain;</li>
<li>plat-emc: Simplified global (excluding Chinese mainland) availability zone control domain;</li>
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
                     * Origin protection version number.
Format description:
Standard version.
<li>gaz-xxxxx: global;</li>
<li>mlc-xxxxx: China;</li>
<li>emc-xxxxx: overseas (worldwide excluding China);</li>
Simplified edition (platform-level version)
<li>plat-gaz-xxxxxx: Simplified global edition;</li>
<li>plat-mlc-xxxxxx: Simplified China version;</li>
<li>plat-emc-xxxxxx: Simplified overseas (global excluding China) edition;</li>
Abbreviation description:
<li>gaz:Global AZ Availability Zone;</li>
<li>mlc:mainlandChina;</li>
<li>emc:Exclude mainlandChina.</li>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Version effective time, which adopts Beijing time (UTC+8) and follows the date and time format of the ISO 8601 standard.
                     */
                    std::string m_activeTime;
                    bool m_activeTimeHasBeenSet;

                    /**
                     * Origin-pull IP range details.	
                     */
                    Addresses m_entireAddresses;
                    bool m_entireAddressesHasBeenSet;

                    /**
                     * Origin protection origin-pull ACL control domain. Parameter values are as follows:
<li>gaz: standard global availability zone control domain;</li>
<li>mlc: standard Chinese mainland availability zone control domain;</li>
<li>emc: standard worldwide (excluding Chinese mainland) availability zone control domain;</li>
<li>plat-gaz: simplified global availability zone control domain;</li>
<li>plat-mlc: Simplified Chinese mainland availability zone control domain;</li>
<li>plat-emc: Simplified global (excluding Chinese mainland) availability zone control domain;</li>
                     */
                    std::string m_originACLFamily;
                    bool m_originACLFamilyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLFAMILYINFO_H_
