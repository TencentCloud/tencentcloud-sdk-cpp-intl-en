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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULBRIEFINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULBRIEFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VPRLabel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Vulnerability brief information
                */
                class VulBriefInfo : public AbstractModel
                {
                public:
                    VulBriefInfo();
                    ~VulBriefInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability ID (vul_vuls.id)
                     * @return VulID Vulnerability ID (vul_vuls.id)
                     * 
                     */
                    uint64_t GetVulID() const;

                    /**
                     * 设置Vulnerability ID (vul_vuls.id)
                     * @param _vulID Vulnerability ID (vul_vuls.id)
                     * 
                     */
                    void SetVulID(const uint64_t& _vulID);

                    /**
                     * 判断参数 VulID 是否已赋值
                     * @return VulID 是否已赋值
                     * 
                     */
                    bool VulIDHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
                     * @return VulName Vulnerability name
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置Vulnerability name
                     * @param _vulName Vulnerability name
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取CVE No.
Parameter format: e.g. CVE-2018-5377
                     * @return CVEID CVE No.
Parameter format: e.g. CVE-2018-5377
                     * 
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置CVE No.
Parameter format: e.g. CVE-2018-5377
                     * @param _cVEID CVE No.
Parameter format: e.g. CVE-2018-5377
                     * 
                     */
                    void SetCVEID(const std::string& _cVEID);

                    /**
                     * 判断参数 CVEID 是否已赋值
                     * @return CVEID 是否已赋值
                     * 
                     */
                    bool CVEIDHasBeenSet() const;

                    /**
                     * 获取List of VPR risk tags
                     * @return Label List of VPR risk tags
                     * 
                     */
                    std::vector<VPRLabel> GetLabel() const;

                    /**
                     * 设置List of VPR risk tags
                     * @param _label List of VPR risk tags
                     * 
                     */
                    void SetLabel(const std::vector<VPRLabel>& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取CVSS score
Valid values: [0.0, 10.0]
                     * @return CvssScore CVSS score
Valid values: [0.0, 10.0]
                     * 
                     */
                    double GetCvssScore() const;

                    /**
                     * 设置CVSS score
Valid values: [0.0, 10.0]
                     * @param _cvssScore CVSS score
Valid values: [0.0, 10.0]
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
                     * 获取Threat level
Enumeration value:
INVALID: invalid
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL: Critical
                     * @return Level Threat level
Enumeration value:
INVALID: invalid
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL: Critical
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Threat level
Enumeration value:
INVALID: invalid
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL: Critical
                     * @param _level Threat level
Enumeration value:
INVALID: invalid
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL: Critical
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Vulnerability disclosure time
Parameter format: YYYY-MM-DD HH:mm:ss
                     * @return PublishTime Vulnerability disclosure time
Parameter format: YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置Vulnerability disclosure time
Parameter format: YYYY-MM-DD HH:mm:ss
                     * @param _publishTime Vulnerability disclosure time
Parameter format: YYYY-MM-DD HH:mm:ss
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
                     * Vulnerability ID (vul_vuls.id)
                     */
                    uint64_t m_vulID;
                    bool m_vulIDHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * CVE No.
Parameter format: e.g. CVE-2018-5377
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * List of VPR risk tags
                     */
                    std::vector<VPRLabel> m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * CVSS score
Valid values: [0.0, 10.0]
                     */
                    double m_cvssScore;
                    bool m_cvssScoreHasBeenSet;

                    /**
                     * Threat level
Enumeration value:
INVALID: invalid
INFO: Notification
LOW: low-risk
MEDIUM: Medium risk
HIGH: High risk
CRITICAL: Critical
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Vulnerability disclosure time
Parameter format: YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULBRIEFINFO_H_
