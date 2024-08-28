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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULDETAILINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULDETAILINFO_H_

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
                * Vulnerability details
                */
                class VulDetailInfo : public AbstractModel
                {
                public:
                    VulDetailInfo();
                    ~VulDetailInfo() = default;
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
                     * 获取1: web-cms vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities; 0: emergency vulnerabilities
                     * @return VulCategory 1: web-cms vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities; 0: emergency vulnerabilities
                     * 
                     */
                    uint64_t GetVulCategory() const;

                    /**
                     * 设置1: web-cms vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities; 0: emergency vulnerabilities
                     * @param _vulCategory 1: web-cms vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities; 0: emergency vulnerabilities
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
                     * 获取Vulnerability description
                     * @return Descript Vulnerability description
                     * 
                     */
                    std::string GetDescript() const;

                    /**
                     * 设置Vulnerability description
                     * @param _descript Vulnerability description
                     * 
                     */
                    void SetDescript(const std::string& _descript);

                    /**
                     * 判断参数 Descript 是否已赋值
                     * @return Descript 是否已赋值
                     * 
                     */
                    bool DescriptHasBeenSet() const;

                    /**
                     * 获取Fixing suggestion
                     * @return Fix Fixing suggestion
                     * 
                     */
                    std::string GetFix() const;

                    /**
                     * 设置Fixing suggestion
                     * @param _fix Fixing suggestion
                     * 
                     */
                    void SetFix(const std::string& _fix);

                    /**
                     * 判断参数 Fix 是否已赋值
                     * @return Fix 是否已赋值
                     * 
                     */
                    bool FixHasBeenSet() const;

                    /**
                     * 获取Reference link
                     * @return Reference Reference link
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 设置Reference link
                     * @param _reference Reference link
                     * 
                     */
                    void SetReference(const std::string& _reference);

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

                    /**
                     * 获取CVSS score
                     * @return CvssScore CVSS score
                     * 
                     */
                    double GetCvssScore() const;

                    /**
                     * 设置CVSS score
                     * @param _cvssScore CVSS score
                     * 
                     */
                    void SetCvssScore(const double& _cvssScore);

                    /**
                     * 判断参数 CvssScore 是否已赋值
                     * @return CvssScore 是否已赋值
                     * 
                     */
                    bool CvssScoreHasBeenSet() const;

                    /**
                     * 获取CVSS details
                     * @return Cvss CVSS details
                     * 
                     */
                    std::string GetCvss() const;

                    /**
                     * 设置CVSS details
                     * @param _cvss CVSS details
                     * 
                     */
                    void SetCvss(const std::string& _cvss);

                    /**
                     * 判断参数 Cvss 是否已赋值
                     * @return Cvss 是否已赋值
                     * 
                     */
                    bool CvssHasBeenSet() const;

                    /**
                     * 获取Release time
                     * @return PublishTime Release time
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置Release time
                     * @param _publishTime Release time
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

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
                     * 1: web-cms vulnerabilities; 2: application vulnerabilities; 4: Linux software vulnerabilities; 5: Windows system vulnerabilities; 0: emergency vulnerabilities
                     */
                    uint64_t m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * Vulnerability description
                     */
                    std::string m_descript;
                    bool m_descriptHasBeenSet;

                    /**
                     * Fixing suggestion
                     */
                    std::string m_fix;
                    bool m_fixHasBeenSet;

                    /**
                     * Reference link
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * CVSS score
                     */
                    double m_cvssScore;
                    bool m_cvssScoreHasBeenSet;

                    /**
                     * CVSS details
                     */
                    std::string m_cvss;
                    bool m_cvssHasBeenSet;

                    /**
                     * Release time
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULDETAILINFO_H_
