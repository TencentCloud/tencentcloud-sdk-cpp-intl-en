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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_RASPRULEVUL_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_RASPRULEVUL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * List of vulnerabilities in a RASP allowlist.
                */
                class RaspRuleVul : public AbstractModel
                {
                public:
                    RaspRuleVul();
                    ~RaspRuleVul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability ID
                     * @return VulVulsID Vulnerability ID
                     * 
                     */
                    uint64_t GetVulVulsID() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _vulVulsID Vulnerability ID
                     * 
                     */
                    void SetVulVulsID(const uint64_t& _vulVulsID);

                    /**
                     * 判断参数 VulVulsID 是否已赋值
                     * @return VulVulsID 是否已赋值
                     * 
                     */
                    bool VulVulsIDHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
                     * @return VulVulsName Vulnerability name
                     * 
                     */
                    std::string GetVulVulsName() const;

                    /**
                     * 设置Vulnerability name
                     * @param _vulVulsName Vulnerability name
                     * 
                     */
                    void SetVulVulsName(const std::string& _vulVulsName);

                    /**
                     * 判断参数 VulVulsName 是否已赋值
                     * @return VulVulsName 是否已赋值
                     * 
                     */
                    bool VulVulsNameHasBeenSet() const;

                    /**
                     * 获取cve_id
                     * @return CveID cve_id
                     * 
                     */
                    std::string GetCveID() const;

                    /**
                     * 设置cve_id
                     * @param _cveID cve_id
                     * 
                     */
                    void SetCveID(const std::string& _cveID);

                    /**
                     * 判断参数 CveID 是否已赋值
                     * @return CveID 是否已赋值
                     * 
                     */
                    bool CveIDHasBeenSet() const;

                    /**
                     * 获取Vulnerability defense type, which comes from the vulnerability table. 1: component vulnerability defense supported, with component vulnerabilities not allowlisted through a regular expression; 2: regular expression defense supported.
                     * @return SupportDefense Vulnerability defense type, which comes from the vulnerability table. 1: component vulnerability defense supported, with component vulnerabilities not allowlisted through a regular expression; 2: regular expression defense supported.
                     * 
                     */
                    uint64_t GetSupportDefense() const;

                    /**
                     * 设置Vulnerability defense type, which comes from the vulnerability table. 1: component vulnerability defense supported, with component vulnerabilities not allowlisted through a regular expression; 2: regular expression defense supported.
                     * @param _supportDefense Vulnerability defense type, which comes from the vulnerability table. 1: component vulnerability defense supported, with component vulnerabilities not allowlisted through a regular expression; 2: regular expression defense supported.
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
                    uint64_t m_vulVulsID;
                    bool m_vulVulsIDHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_vulVulsName;
                    bool m_vulVulsNameHasBeenSet;

                    /**
                     * cve_id
                     */
                    std::string m_cveID;
                    bool m_cveIDHasBeenSet;

                    /**
                     * Vulnerability defense type, which comes from the vulnerability table. 1: component vulnerability defense supported, with component vulnerabilities not allowlisted through a regular expression; 2: regular expression defense supported.
                     */
                    uint64_t m_supportDefense;
                    bool m_supportDefenseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_RASPRULEVUL_H_
