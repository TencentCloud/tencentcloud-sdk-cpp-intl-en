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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_EMERGENCYVULINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_EMERGENCYVULINFO_H_

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
                * List of emergency vulnerabilities
                */
                class EmergencyVulInfo : public AbstractModel
                {
                public:
                    EmergencyVulInfo();
                    ~EmergencyVulInfo() = default;
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
                     * 获取Vulnerability tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Vulnerability tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Vulnerability tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Vulnerability tag
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CVSSV3Score CVSS V3 score
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetCVSSV3Score() const;

                    /**
                     * 设置CVSS V3 score
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cVSSV3Score CVSS V3 score
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Level Risk level
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Risk level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _level Risk level
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Vulnerability type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Category Vulnerability type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Vulnerability type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _category Vulnerability type
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Vulnerability disclosure time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubmitTime Vulnerability disclosure time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubmitTime() const;

                    /**
                     * 设置Vulnerability disclosure time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _submitTime Vulnerability disclosure time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubmitTime(const std::string& _submitTime);

                    /**
                     * 判断参数 SubmitTime 是否已赋值
                     * @return SubmitTime 是否已赋值
                     * 
                     */
                    bool SubmitTimeHasBeenSet() const;

                    /**
                     * 获取Last discovery time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LatestFoundTime Last discovery time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLatestFoundTime() const;

                    /**
                     * 设置Last discovery time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _latestFoundTime Last discovery time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Emergency vulnerability risk information. Valid values: `NOT_SCAN` (not scanned); `SCANNING` (scanning); `SCANNED_NOT_RISK` (scanned and at no risk); `SCANNED_RISK` (scanned and at risk).
                     * @return Status Emergency vulnerability risk information. Valid values: `NOT_SCAN` (not scanned); `SCANNING` (scanning); `SCANNED_NOT_RISK` (scanned and at no risk); `SCANNED_RISK` (scanned and at risk).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Emergency vulnerability risk information. Valid values: `NOT_SCAN` (not scanned); `SCANNING` (scanning); `SCANNED_NOT_RISK` (scanned and at no risk); `SCANNED_RISK` (scanned and at risk).
                     * @param _status Emergency vulnerability risk information. Valid values: `NOT_SCAN` (not scanned); `SCANNING` (scanning); `SCANNED_NOT_RISK` (scanned and at no risk); `SCANNED_RISK` (scanned and at risk).
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
                     * 获取POC ID
                     * @return PocID POC ID
                     * 
                     */
                    std::string GetPocID() const;

                    /**
                     * 设置POC ID
                     * @param _pocID POC ID
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
                     * 获取Defense status. Valid values: `NO_DEFENDED`, `DEFENDED`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefenceStatus Defense status. Valid values: `NO_DEFENDED`, `DEFENDED`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDefenceStatus() const;

                    /**
                     * 设置Defense status. Valid values: `NO_DEFENDED`, `DEFENDED`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defenceStatus Defense status. Valid values: `NO_DEFENDED`, `DEFENDED`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Scope of servers with exploit prevention enabled. Valid values: `MANUAL` (specified servers); `ALL` (all servers).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefenceScope Scope of servers with exploit prevention enabled. Valid values: `MANUAL` (specified servers); `ALL` (all servers).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDefenceScope() const;

                    /**
                     * 设置Scope of servers with exploit prevention enabled. Valid values: `MANUAL` (specified servers); `ALL` (all servers).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defenceScope Scope of servers with exploit prevention enabled. Valid values: `MANUAL` (specified servers); `ALL` (all servers).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of servers with exploit prevention enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefenceHostCount Number of servers with exploit prevention enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDefenceHostCount() const;

                    /**
                     * 设置Number of servers with exploit prevention enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defenceHostCount Number of servers with exploit prevention enabled
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of attacks defended against
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefendedCount Number of attacks defended against
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDefendedCount() const;

                    /**
                     * 设置Number of attacks defended against
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defendedCount Number of attacks defended against
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDefendedCount(const int64_t& _defendedCount);

                    /**
                     * 判断参数 DefendedCount 是否已赋值
                     * @return DefendedCount 是否已赋值
                     * 
                     */
                    bool DefendedCountHasBeenSet() const;

                private:

                    /**
                     * Vulnerability name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Vulnerability tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * CVSS V3 score
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_cVSSV3Score;
                    bool m_cVSSV3ScoreHasBeenSet;

                    /**
                     * Risk level
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * CVE No.
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * Vulnerability type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Vulnerability disclosure time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_submitTime;
                    bool m_submitTimeHasBeenSet;

                    /**
                     * Last discovery time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_latestFoundTime;
                    bool m_latestFoundTimeHasBeenSet;

                    /**
                     * Emergency vulnerability risk information. Valid values: `NOT_SCAN` (not scanned); `SCANNING` (scanning); `SCANNED_NOT_RISK` (scanned and at no risk); `SCANNED_RISK` (scanned and at risk).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Vulnerability ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * POC ID
                     */
                    std::string m_pocID;
                    bool m_pocIDHasBeenSet;

                    /**
                     * Defense status. Valid values: `NO_DEFENDED`, `DEFENDED`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_defenceStatus;
                    bool m_defenceStatusHasBeenSet;

                    /**
                     * Scope of servers with exploit prevention enabled. Valid values: `MANUAL` (specified servers); `ALL` (all servers).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_defenceScope;
                    bool m_defenceScopeHasBeenSet;

                    /**
                     * Number of servers with exploit prevention enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_defenceHostCount;
                    bool m_defenceHostCountHasBeenSet;

                    /**
                     * Number of attacks defended against
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_defendedCount;
                    bool m_defendedCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_EMERGENCYVULINFO_H_
