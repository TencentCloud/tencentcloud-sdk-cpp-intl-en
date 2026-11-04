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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DELETESKILLSHAREREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DELETESKILLSHAREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DeleteSkillShare request structure.
                */
                class DeleteSkillShareRequest : public AbstractModel
                {
                public:
                    DeleteSkillShareRequest();
                    ~DeleteSkillShareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Application remarks, required (pop-up "Application Remarks")</p>
                     * @return ApplyRemark <p>Application remarks, required (pop-up "Application Remarks")</p>
                     * 
                     */
                    std::string GetApplyRemark() const;

                    /**
                     * 设置<p>Application remarks, required (pop-up "Application Remarks")</p>
                     * @param _applyRemark <p>Application remarks, required (pop-up "Application Remarks")</p>
                     * 
                     */
                    void SetApplyRemark(const std::string& _applyRemark);

                    /**
                     * 判断参数 ApplyRemark 是否已赋值
                     * @return ApplyRemark 是否已赋值
                     * 
                     */
                    bool ApplyRemarkHasBeenSet() const;

                    /**
                     * 获取<p>Original Skill ID, required (frontend does not need to detect the _shared suffix)</p>
                     * @return SkillId <p>Original Skill ID, required (frontend does not need to detect the _shared suffix)</p>
                     * 
                     */
                    std::string GetSkillId() const;

                    /**
                     * 设置<p>Original Skill ID, required (frontend does not need to detect the _shared suffix)</p>
                     * @param _skillId <p>Original Skill ID, required (frontend does not need to detect the _shared suffix)</p>
                     * 
                     */
                    void SetSkillId(const std::string& _skillId);

                    /**
                     * 判断参数 SkillId 是否已赋值
                     * @return SkillId 是否已赋值
                     * 
                     */
                    bool SkillIdHasBeenSet() const;

                    /**
                     * 获取<p>Space ID, required</p>
                     * @return SpaceId <p>Space ID, required</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>Space ID, required</p>
                     * @param _spaceId <p>Space ID, required</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>Original version ID, required (identical to the version_id passed when publishing via CreateSkillShare)</p>
                     * @return VersionId <p>Original version ID, required (identical to the version_id passed when publishing via CreateSkillShare)</p>
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>Original version ID, required (identical to the version_id passed when publishing via CreateSkillShare)</p>
                     * @param _versionId <p>Original version ID, required (identical to the version_id passed when publishing via CreateSkillShare)</p>
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                private:

                    /**
                     * <p>Application remarks, required (pop-up "Application Remarks")</p>
                     */
                    std::string m_applyRemark;
                    bool m_applyRemarkHasBeenSet;

                    /**
                     * <p>Original Skill ID, required (frontend does not need to detect the _shared suffix)</p>
                     */
                    std::string m_skillId;
                    bool m_skillIdHasBeenSet;

                    /**
                     * <p>Space ID, required</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>Original version ID, required (identical to the version_id passed when publishing via CreateSkillShare)</p>
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DELETESKILLSHAREREQUEST_H_
