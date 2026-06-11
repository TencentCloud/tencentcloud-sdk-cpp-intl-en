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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SKILLINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SKILLINFO_H_

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
                * Skill info
                */
                class SkillInfo : public AbstractModel
                {
                public:
                    SkillInfo();
                    ~SkillInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Skill name
                     * @return SkillName Skill name
                     * 
                     */
                    std::string GetSkillName() const;

                    /**
                     * 设置Skill name
                     * @param _skillName Skill name
                     * 
                     */
                    void SetSkillName(const std::string& _skillName);

                    /**
                     * 判断参数 SkillName 是否已赋值
                     * @return SkillName 是否已赋值
                     * 
                     */
                    bool SkillNameHasBeenSet() const;

                    /**
                     * 获取Skill description
                     * @return SkillDesc Skill description
                     * 
                     */
                    std::string GetSkillDesc() const;

                    /**
                     * 设置Skill description
                     * @param _skillDesc Skill description
                     * 
                     */
                    void SetSkillDesc(const std::string& _skillDesc);

                    /**
                     * 判断参数 SkillDesc 是否已赋值
                     * @return SkillDesc 是否已赋值
                     * 
                     */
                    bool SkillDescHasBeenSet() const;

                    /**
                     * 获取Skill source
                     * @return SkillSource Skill source
                     * 
                     */
                    std::string GetSkillSource() const;

                    /**
                     * 设置Skill source
                     * @param _skillSource Skill source
                     * 
                     */
                    void SetSkillSource(const std::string& _skillSource);

                    /**
                     * 判断参数 SkillSource 是否已赋值
                     * @return SkillSource 是否已赋值
                     * 
                     */
                    bool SkillSourceHasBeenSet() const;

                    /**
                     * 获取Skill risk tag
                     * @return Tags Skill risk tag
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Skill risk tag
                     * @param _tags Skill risk tag
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
                     * 获取skill risk description
                     * @return RiskDesc skill risk description
                     * 
                     */
                    std::string GetRiskDesc() const;

                    /**
                     * 设置skill risk description
                     * @param _riskDesc skill risk description
                     * 
                     */
                    void SetRiskDesc(const std::string& _riskDesc);

                    /**
                     * 判断参数 RiskDesc 是否已赋值
                     * @return RiskDesc 是否已赋值
                     * 
                     */
                    bool RiskDescHasBeenSet() const;

                    /**
                     * 获取evidence chain
                     * @return Evidence evidence chain
                     * 
                     */
                    std::string GetEvidence() const;

                    /**
                     * 设置evidence chain
                     * @param _evidence evidence chain
                     * 
                     */
                    void SetEvidence(const std::string& _evidence);

                    /**
                     * 判断参数 Evidence 是否已赋值
                     * @return Evidence 是否已赋值
                     * 
                     */
                    bool EvidenceHasBeenSet() const;

                    /**
                     * 获取Event ID
                     * @return Id Event ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Event ID
                     * @param _id Event ID
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
                     * Skill name
                     */
                    std::string m_skillName;
                    bool m_skillNameHasBeenSet;

                    /**
                     * Skill description
                     */
                    std::string m_skillDesc;
                    bool m_skillDescHasBeenSet;

                    /**
                     * Skill source
                     */
                    std::string m_skillSource;
                    bool m_skillSourceHasBeenSet;

                    /**
                     * Skill risk tag
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * skill risk description
                     */
                    std::string m_riskDesc;
                    bool m_riskDescHasBeenSet;

                    /**
                     * evidence chain
                     */
                    std::string m_evidence;
                    bool m_evidenceHasBeenSet;

                    /**
                     * Event ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SKILLINFO_H_
