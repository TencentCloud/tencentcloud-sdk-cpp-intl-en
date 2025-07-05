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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULSTORELISTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULSTORELISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Information on the vulnerability database list
                */
                class VulStoreListInfo : public AbstractModel
                {
                public:
                    VulStoreListInfo();
                    ~VulStoreListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability ID
                     * @return VulId Vulnerability ID
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _vulId Vulnerability ID
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取Vulnerability level
                     * @return Level Vulnerability level
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Vulnerability level
                     * @param _level Vulnerability level
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
                     * @return Name Vulnerability name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Vulnerability name
                     * @param _name Vulnerability name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取CVE ID
                     * @return CveId CVE ID
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置CVE ID
                     * @param _cveId CVE ID
                     * 
                     */
                    void SetCveId(const std::string& _cveId);

                    /**
                     * 判断参数 CveId 是否已赋值
                     * @return CveId 是否已赋值
                     * 
                     */
                    bool CveIdHasBeenSet() const;

                    /**
                     * 获取1: web-cms vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities; 0: emergency vulnerabilities.
                     * @return VulCategory 1: web-cms vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities; 0: emergency vulnerabilities.
                     * 
                     */
                    uint64_t GetVulCategory() const;

                    /**
                     * 设置1: web-cms vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities; 0: emergency vulnerabilities.
                     * @param _vulCategory 1: web-cms vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities; 0: emergency vulnerabilities.
                     * 
                     */
                    void SetVulCategory(const uint64_t& _vulCategory);

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                    /**
                     * 获取Release time
                     * @return PublishDate Release time
                     * 
                     */
                    std::string GetPublishDate() const;

                    /**
                     * 设置Release time
                     * @param _publishDate Release time
                     * 
                     */
                    void SetPublishDate(const std::string& _publishDate);

                    /**
                     * 判断参数 PublishDate 是否已赋值
                     * @return PublishDate 是否已赋值
                     * 
                     */
                    bool PublishDateHasBeenSet() const;

                    /**
                     * 获取Vulnerability Detection Method: 0 - Version Comparison, 1 - POC Verification
                     * @return Method Vulnerability Detection Method: 0 - Version Comparison, 1 - POC Verification
                     * 
                     */
                    uint64_t GetMethod() const;

                    /**
                     * 设置Vulnerability Detection Method: 0 - Version Comparison, 1 - POC Verification
                     * @param _method Vulnerability Detection Method: 0 - Version Comparison, 1 - POC Verification
                     * 
                     */
                    void SetMethod(const uint64_t& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Vulnerability attack level
                     * @return AttackLevel Vulnerability attack level
                     * 
                     */
                    uint64_t GetAttackLevel() const;

                    /**
                     * 设置Vulnerability attack level
                     * @param _attackLevel Vulnerability attack level
                     * 
                     */
                    void SetAttackLevel(const uint64_t& _attackLevel);

                    /**
                     * 判断参数 AttackLevel 是否已赋值
                     * @return AttackLevel 是否已赋值
                     * 
                     */
                    bool AttackLevelHasBeenSet() const;

                    /**
                     * 获取Whether automatic vulnerability fixing is supported
0: not supported on Windows/Linux; 1: supported on Windows/Linux; 2: supported on Linux only; 3: supported on Windows only.
                     * @return FixSwitch Whether automatic vulnerability fixing is supported
0: not supported on Windows/Linux; 1: supported on Windows/Linux; 2: supported on Linux only; 3: supported on Windows only.
                     * 
                     */
                    uint64_t GetFixSwitch() const;

                    /**
                     * 设置Whether automatic vulnerability fixing is supported
0: not supported on Windows/Linux; 1: supported on Windows/Linux; 2: supported on Linux only; 3: supported on Windows only.
                     * @param _fixSwitch Whether automatic vulnerability fixing is supported
0: not supported on Windows/Linux; 1: supported on Windows/Linux; 2: supported on Linux only; 3: supported on Windows only.
                     * 
                     */
                    void SetFixSwitch(const uint64_t& _fixSwitch);

                    /**
                     * 判断参数 FixSwitch 是否已赋值
                     * @return FixSwitch 是否已赋值
                     * 
                     */
                    bool FixSwitchHasBeenSet() const;

                    /**
                     * 获取Whether defense against vulnerabilities is supported
0: not supported; 1: supported.
                     * @return SupportDefense Whether defense against vulnerabilities is supported
0: not supported; 1: supported.
                     * 
                     */
                    uint64_t GetSupportDefense() const;

                    /**
                     * 设置Whether defense against vulnerabilities is supported
0: not supported; 1: supported.
                     * @param _supportDefense Whether defense against vulnerabilities is supported
0: not supported; 1: supported.
                     * 
                     */
                    void SetSupportDefense(const uint64_t& _supportDefense);

                    /**
                     * 判断参数 SupportDefense 是否已赋值
                     * @return SupportDefense 是否已赋值
                     * 
                     */
                    bool SupportDefenseHasBeenSet() const;

                private:

                    /**
                     * Vulnerability ID
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * Vulnerability level
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * CVE ID
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * 1: web-cms vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities; 0: emergency vulnerabilities.
                     */
                    uint64_t m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * Release time
                     */
                    std::string m_publishDate;
                    bool m_publishDateHasBeenSet;

                    /**
                     * Vulnerability Detection Method: 0 - Version Comparison, 1 - POC Verification
                     */
                    uint64_t m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Vulnerability attack level
                     */
                    uint64_t m_attackLevel;
                    bool m_attackLevelHasBeenSet;

                    /**
                     * Whether automatic vulnerability fixing is supported
0: not supported on Windows/Linux; 1: supported on Windows/Linux; 2: supported on Linux only; 3: supported on Windows only.
                     */
                    uint64_t m_fixSwitch;
                    bool m_fixSwitchHasBeenSet;

                    /**
                     * Whether defense against vulnerabilities is supported
0: not supported; 1: supported.
                     */
                    uint64_t m_supportDefense;
                    bool m_supportDefenseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULSTORELISTINFO_H_
