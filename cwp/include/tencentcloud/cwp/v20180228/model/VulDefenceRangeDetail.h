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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCERANGEDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCERANGEDETAIL_H_

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
                * Vulnerability defense scope details
                */
                class VulDefenceRangeDetail : public AbstractModel
                {
                public:
                    VulDefenceRangeDetail();
                    ~VulDefenceRangeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Tag
                     * @return Label Tag
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Tag
                     * @param _label Tag
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
                     * 获取Vulnerability level. 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical.
                     * @return Level Vulnerability level. 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical.
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Vulnerability level. 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical.
                     * @param _level Vulnerability level. 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical.
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
                     * 获取cve id
                     * @return CveId cve id
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置cve id
                     * @param _cveId cve id
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

                    /**
                     * 获取Vulnerability ID
                     * @return VulId Vulnerability ID
                     * 
                     */
                    int64_t GetVulId() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _vulId Vulnerability ID
                     * 
                     */
                    void SetVulId(const int64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                private:

                    /**
                     * Vulnerability name
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * Tag
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Vulnerability level. 1: low-risk; 2: medium-risk; 3: high-risk; 4: critical.
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * CVSS score
                     */
                    double m_cvssScore;
                    bool m_cvssScoreHasBeenSet;

                    /**
                     * cve id
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * Release time
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * Vulnerability ID
                     */
                    int64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCERANGEDETAIL_H_
