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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SUPPORTDEFENCEVUL_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SUPPORTDEFENCEVUL_H_

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
                * Vulnerability that can be prevented
                */
                class SupportDefenceVul : public AbstractModel
                {
                public:
                    SupportDefenceVul();
                    ~SupportDefenceVul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * @return Tags Vulnerability tag
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Vulnerability tag
                     * @param _tags Vulnerability tag
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
                     * 获取Vulnerability CVSS
                     * @return CVSSV3Score Vulnerability CVSS
                     * 
                     */
                    double GetCVSSV3Score() const;

                    /**
                     * 设置Vulnerability CVSS
                     * @param _cVSSV3Score Vulnerability CVSS
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
                     * 获取Vulnerability severity
                     * @return Level Vulnerability severity
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Vulnerability severity
                     * @param _level Vulnerability severity
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
                     * 获取Vulnerability CVE ID
                     * @return CVEID Vulnerability CVE ID
                     * 
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置Vulnerability CVE ID
                     * @param _cVEID Vulnerability CVE ID
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
                     * 获取Vulnerability disclosure time
                     * @return SubmitTime Vulnerability disclosure time
                     * 
                     */
                    std::string GetSubmitTime() const;

                    /**
                     * 设置Vulnerability disclosure time
                     * @param _submitTime Vulnerability disclosure time
                     * 
                     */
                    void SetSubmitTime(const std::string& _submitTime);

                    /**
                     * 判断参数 SubmitTime 是否已赋值
                     * @return SubmitTime 是否已赋值
                     * 
                     */
                    bool SubmitTimeHasBeenSet() const;

                private:

                    /**
                     * POC ID
                     */
                    std::string m_pocID;
                    bool m_pocIDHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Vulnerability tag
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Vulnerability CVSS
                     */
                    double m_cVSSV3Score;
                    bool m_cVSSV3ScoreHasBeenSet;

                    /**
                     * Vulnerability severity
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Vulnerability CVE ID
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * Vulnerability disclosure time
                     */
                    std::string m_submitTime;
                    bool m_submitTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SUPPORTDEFENCEVUL_H_
