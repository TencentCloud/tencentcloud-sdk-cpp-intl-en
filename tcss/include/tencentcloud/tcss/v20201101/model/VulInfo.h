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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULINFO_H_

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
                * List of vulnerabilities
                */
                class VulInfo : public AbstractModel
                {
                public:
                    VulInfo();
                    ~VulInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取vulnerability tag
                     * @return Tags vulnerability tag
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置vulnerability tag
                     * @param _tags vulnerability tag
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取CVSS V3 score
                     * @return CVSSV3Score CVSS V3 score
                     * 
                     */
                    double GetCVSSV3Score() const;

                    /**
                     * 设置CVSS V3 score
                     * @param _cVSSV3Score CVSS V3 score
                     * 
                     */
                    void SetCVSSV3Score(const double& _cVSSV3Score);

                    /**
                     * 判断参数 CVSSV3Score 是否已赋值
                     * @return CVSSV3Score 是否已赋值
                     * 
                     */
                    bool CVSSV3ScoreHasBeenSet() const;

                    /**
                     * 获取Risk level
                     * @return Level Risk level
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Risk level
                     * @param _level Risk level
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
                     * 获取CVE No.
                     * @return CVEID CVE No.
                     * 
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置CVE No.
                     * @param _cVEID CVE No.
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
                     * 获取Vulnerability Subtype
                     * @return Category Vulnerability Subtype
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Vulnerability Subtype
                     * @param _category Vulnerability Subtype
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取First detection time
                     * @return FoundTime First detection time
                     * 
                     */
                    std::string GetFoundTime() const;

                    /**
                     * 设置First detection time
                     * @param _foundTime First detection time
                     * 
                     */
                    void SetFoundTime(const std::string& _foundTime);

                    /**
                     * 判断参数 FoundTime 是否已赋值
                     * @return FoundTime 是否已赋值
                     * 
                     */
                    bool FoundTimeHasBeenSet() const;

                    /**
                     * 获取Last discovery time
                     * @return LatestFoundTime Last discovery time
                     * 
                     */
                    std::string GetLatestFoundTime() const;

                    /**
                     * 设置Last discovery time
                     * @param _latestFoundTime Last discovery time
                     * 
                     */
                    void SetLatestFoundTime(const std::string& _latestFoundTime);

                    /**
                     * 判断参数 LatestFoundTime 是否已赋值
                     * @return LatestFoundTime 是否已赋值
                     * 
                     */
                    bool LatestFoundTimeHasBeenSet() const;

                    /**
                     * 获取Vulnerability ID
                     * @return ID Vulnerability ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _iD Vulnerability ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Number of affected local images
                     * @return LocalImageCount Number of affected local images
                     * 
                     */
                    int64_t GetLocalImageCount() const;

                    /**
                     * 设置Number of affected local images
                     * @param _localImageCount Number of affected local images
                     * 
                     */
                    void SetLocalImageCount(const int64_t& _localImageCount);

                    /**
                     * 判断参数 LocalImageCount 是否已赋值
                     * @return LocalImageCount 是否已赋值
                     * 
                     */
                    bool LocalImageCountHasBeenSet() const;

                    /**
                     * 获取Affected Container Count
                     * @return ContainerCount Affected Container Count
                     * 
                     */
                    int64_t GetContainerCount() const;

                    /**
                     * 设置Affected Container Count
                     * @param _containerCount Affected Container Count
                     * 
                     */
                    void SetContainerCount(const int64_t& _containerCount);

                    /**
                     * 判断参数 ContainerCount 是否已赋值
                     * @return ContainerCount 是否已赋值
                     * 
                     */
                    bool ContainerCountHasBeenSet() const;

                    /**
                     * 获取Affected Repository Image Count
                     * @return RegistryImageCount Affected Repository Image Count
                     * 
                     */
                    int64_t GetRegistryImageCount() const;

                    /**
                     * 设置Affected Repository Image Count
                     * @param _registryImageCount Affected Repository Image Count
                     * 
                     */
                    void SetRegistryImageCount(const int64_t& _registryImageCount);

                    /**
                     * 判断参数 RegistryImageCount 是否已赋值
                     * @return RegistryImageCount 是否已赋值
                     * 
                     */
                    bool RegistryImageCountHasBeenSet() const;

                    /**
                     * 获取Vulnerability Poc ID
                     * @return PocID Vulnerability Poc ID
                     * 
                     */
                    std::string GetPocID() const;

                    /**
                     * 设置Vulnerability Poc ID
                     * @param _pocID Vulnerability Poc ID
                     * 
                     */
                    void SetPocID(const std::string& _pocID);

                    /**
                     * 判断参数 PocID 是否已赋值
                     * @return PocID 是否已赋值
                     * 
                     */
                    bool PocIDHasBeenSet() const;

                    /**
                     * 获取Defense Status. NO_DEFENDED: Not Defended; DEFENDED: Defended
                     * @return DefenceStatus Defense Status. NO_DEFENDED: Not Defended; DEFENDED: Defended
                     * 
                     */
                    std::string GetDefenceStatus() const;

                    /**
                     * 设置Defense Status. NO_DEFENDED: Not Defended; DEFENDED: Defended
                     * @param _defenceStatus Defense Status. NO_DEFENDED: Not Defended; DEFENDED: Defended
                     * 
                     */
                    void SetDefenceStatus(const std::string& _defenceStatus);

                    /**
                     * 判断参数 DefenceStatus 是否已赋值
                     * @return DefenceStatus 是否已赋值
                     * 
                     */
                    bool DefenceStatusHasBeenSet() const;

                    /**
                     * 获取Vulnerability Defense Host Range. MANUAL: Selected Host Nodes; ALL: All
                     * @return DefenceScope Vulnerability Defense Host Range. MANUAL: Selected Host Nodes; ALL: All
                     * 
                     */
                    std::string GetDefenceScope() const;

                    /**
                     * 设置Vulnerability Defense Host Range. MANUAL: Selected Host Nodes; ALL: All
                     * @param _defenceScope Vulnerability Defense Host Range. MANUAL: Selected Host Nodes; ALL: All
                     * 
                     */
                    void SetDefenceScope(const std::string& _defenceScope);

                    /**
                     * 判断参数 DefenceScope 是否已赋值
                     * @return DefenceScope 是否已赋值
                     * 
                     */
                    bool DefenceScopeHasBeenSet() const;

                    /**
                     * 获取Number of Hosts Defended Against Vulnerabilities
                     * @return DefenceHostCount Number of Hosts Defended Against Vulnerabilities
                     * 
                     */
                    int64_t GetDefenceHostCount() const;

                    /**
                     * 设置Number of Hosts Defended Against Vulnerabilities
                     * @param _defenceHostCount Number of Hosts Defended Against Vulnerabilities
                     * 
                     */
                    void SetDefenceHostCount(const int64_t& _defenceHostCount);

                    /**
                     * 判断参数 DefenceHostCount 是否已赋值
                     * @return DefenceHostCount 是否已赋值
                     * 
                     */
                    bool DefenceHostCountHasBeenSet() const;

                    /**
                     * 获取Number of Attacks Defended
                     * @return DefendedCount Number of Attacks Defended
                     * 
                     */
                    int64_t GetDefendedCount() const;

                    /**
                     * 设置Number of Attacks Defended
                     * @param _defendedCount Number of Attacks Defended
                     * 
                     */
                    void SetDefendedCount(const int64_t& _defendedCount);

                    /**
                     * 判断参数 DefendedCount 是否已赋值
                     * @return DefendedCount 是否已赋值
                     * 
                     */
                    bool DefendedCountHasBeenSet() const;

                    /**
                     * 获取Number of hosts with application protection enabled for the vulnerability.
                     * @return RaspOpenNodeCount Number of hosts with application protection enabled for the vulnerability.
                     * 
                     */
                    int64_t GetRaspOpenNodeCount() const;

                    /**
                     * 设置Number of hosts with application protection enabled for the vulnerability.
                     * @param _raspOpenNodeCount Number of hosts with application protection enabled for the vulnerability.
                     * 
                     */
                    void SetRaspOpenNodeCount(const int64_t& _raspOpenNodeCount);

                    /**
                     * 判断参数 RaspOpenNodeCount 是否已赋值
                     * @return RaspOpenNodeCount 是否已赋值
                     * 
                     */
                    bool RaspOpenNodeCountHasBeenSet() const;

                    /**
                     * 获取Number of hosts with application protection disabled for the vulnerability.
                     * @return RaspClosedNodeCount Number of hosts with application protection disabled for the vulnerability.
                     * 
                     */
                    int64_t GetRaspClosedNodeCount() const;

                    /**
                     * 设置Number of hosts with application protection disabled for the vulnerability.
                     * @param _raspClosedNodeCount Number of hosts with application protection disabled for the vulnerability.
                     * 
                     */
                    void SetRaspClosedNodeCount(const int64_t& _raspClosedNodeCount);

                    /**
                     * 判断参数 RaspClosedNodeCount 是否已赋值
                     * @return RaspClosedNodeCount 是否已赋值
                     * 
                     */
                    bool RaspClosedNodeCountHasBeenSet() const;

                private:

                    /**
                     * Vulnerability name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * vulnerability tag
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * CVSS V3 score
                     */
                    double m_cVSSV3Score;
                    bool m_cVSSV3ScoreHasBeenSet;

                    /**
                     * Risk level
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * CVE No.
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * Vulnerability Subtype
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * First detection time
                     */
                    std::string m_foundTime;
                    bool m_foundTimeHasBeenSet;

                    /**
                     * Last discovery time
                     */
                    std::string m_latestFoundTime;
                    bool m_latestFoundTimeHasBeenSet;

                    /**
                     * Vulnerability ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Number of affected local images
                     */
                    int64_t m_localImageCount;
                    bool m_localImageCountHasBeenSet;

                    /**
                     * Affected Container Count
                     */
                    int64_t m_containerCount;
                    bool m_containerCountHasBeenSet;

                    /**
                     * Affected Repository Image Count
                     */
                    int64_t m_registryImageCount;
                    bool m_registryImageCountHasBeenSet;

                    /**
                     * Vulnerability Poc ID
                     */
                    std::string m_pocID;
                    bool m_pocIDHasBeenSet;

                    /**
                     * Defense Status. NO_DEFENDED: Not Defended; DEFENDED: Defended
                     */
                    std::string m_defenceStatus;
                    bool m_defenceStatusHasBeenSet;

                    /**
                     * Vulnerability Defense Host Range. MANUAL: Selected Host Nodes; ALL: All
                     */
                    std::string m_defenceScope;
                    bool m_defenceScopeHasBeenSet;

                    /**
                     * Number of Hosts Defended Against Vulnerabilities
                     */
                    int64_t m_defenceHostCount;
                    bool m_defenceHostCountHasBeenSet;

                    /**
                     * Number of Attacks Defended
                     */
                    int64_t m_defendedCount;
                    bool m_defendedCountHasBeenSet;

                    /**
                     * Number of hosts with application protection enabled for the vulnerability.
                     */
                    int64_t m_raspOpenNodeCount;
                    bool m_raspOpenNodeCountHasBeenSet;

                    /**
                     * Number of hosts with application protection disabled for the vulnerability.
                     */
                    int64_t m_raspClosedNodeCount;
                    bool m_raspClosedNodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULINFO_H_
