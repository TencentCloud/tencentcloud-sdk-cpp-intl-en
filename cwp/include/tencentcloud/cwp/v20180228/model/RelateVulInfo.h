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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RELATEVULINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RELATEVULINFO_H_

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
                * Vulnerability information associated with Windows patches
                */
                class RelateVulInfo : public AbstractModel
                {
                public:
                    RelateVulInfo();
                    ~RelateVulInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CVEid
                     * @return CveId CVEid
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置CVEid
                     * @param _cveId CVEid
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
                     * @return Label Vulnerability tag
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Vulnerability tag
                     * @param _label Vulnerability tag
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

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
                     * 获取CVSS score
                     * @return CVSS CVSS score
                     * 
                     */
                    double GetCVSS() const;

                    /**
                     * 设置CVSS score
                     * @param _cVSS CVSS score
                     * 
                     */
                    void SetCVSS(const double& _cVSS);

                    /**
                     * 判断参数 CVSS 是否已赋值
                     * @return CVSS 是否已赋值
                     * 
                     */
                    bool CVSSHasBeenSet() const;

                    /**
                     * 获取Vulnerability disclosure time
                     * @return PublishTime Vulnerability disclosure time
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置Vulnerability disclosure time
                     * @param _publishTime Vulnerability disclosure time
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取Vulnerability ID
                     * @return Id Vulnerability ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _id Vulnerability ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * CVEid
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Vulnerability tag
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Vulnerability level
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * CVSS score
                     */
                    double m_cVSS;
                    bool m_cVSSHasBeenSet;

                    /**
                     * Vulnerability disclosure time
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * Vulnerability ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RELATEVULINFO_H_
