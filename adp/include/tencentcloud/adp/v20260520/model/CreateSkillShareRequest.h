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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATESKILLSHAREREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATESKILLSHAREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/SkillCorpShareConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreateSkillShare request structure.
                */
                class CreateSkillShareRequest : public AbstractModel
                {
                public:
                    CreateSkillShareRequest();
                    ~CreateSkillShareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Required. Application remarks (pop-up "Application Remarks")</p>
                     * @return ApplyRemark <p>Required. Application remarks (pop-up "Application Remarks")</p>
                     * 
                     */
                    std::string GetApplyRemark() const;

                    /**
                     * 设置<p>Required. Application remarks (pop-up "Application Remarks")</p>
                     * @param _applyRemark <p>Required. Application remarks (pop-up "Application Remarks")</p>
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
                     * 获取<p>Required. Original skill_id</p>
                     * @return SkillId <p>Required. Original skill_id</p>
                     * 
                     */
                    std::string GetSkillId() const;

                    /**
                     * 设置<p>Required. Original skill_id</p>
                     * @param _skillId <p>Required. Original skill_id</p>
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
                     * 获取<p>Required. id of the shared version (must exceed the shared version)</p>
                     * @return VersionId <p>Required. id of the shared version (must exceed the shared version)</p>
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>Required. id of the shared version (must exceed the shared version)</p>
                     * @param _versionId <p>Required. id of the shared version (must exceed the shared version)</p>
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取<p>Shared configuration</p>
                     * @return CorpShareConfig <p>Shared configuration</p>
                     * 
                     */
                    SkillCorpShareConfig GetCorpShareConfig() const;

                    /**
                     * 设置<p>Shared configuration</p>
                     * @param _corpShareConfig <p>Shared configuration</p>
                     * 
                     */
                    void SetCorpShareConfig(const SkillCorpShareConfig& _corpShareConfig);

                    /**
                     * 判断参数 CorpShareConfig 是否已赋值
                     * @return CorpShareConfig 是否已赋值
                     * 
                     */
                    bool CorpShareConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Required. Application remarks (pop-up "Application Remarks")</p>
                     */
                    std::string m_applyRemark;
                    bool m_applyRemarkHasBeenSet;

                    /**
                     * <p>Required. Original skill_id</p>
                     */
                    std::string m_skillId;
                    bool m_skillIdHasBeenSet;

                    /**
                     * <p>Space ID, required</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>Required. id of the shared version (must exceed the shared version)</p>
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * <p>Shared configuration</p>
                     */
                    SkillCorpShareConfig m_corpShareConfig;
                    bool m_corpShareConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATESKILLSHAREREQUEST_H_
