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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SKILLSHARE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SKILLSHARE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * SkillShare Skill business share information.
                */
                class SkillShare : public AbstractModel
                {
                public:
                    SkillShare();
                    ~SkillShare() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Approval ID</p>
                     * @return ApprovalId <p>Approval ID</p>
                     * 
                     */
                    std::string GetApprovalId() const;

                    /**
                     * 设置<p>Approval ID</p>
                     * @param _approvalId <p>Approval ID</p>
                     * 
                     */
                    void SetApprovalId(const std::string& _approvalId);

                    /**
                     * 判断参数 ApprovalId 是否已赋值
                     * @return ApprovalId 是否已赋值
                     * 
                     */
                    bool ApprovalIdHasBeenSet() const;

                    /**
                     * 获取<p>New skill_id associated after sharing</p>
                     * @return ShareSkillId <p>New skill_id associated after sharing</p>
                     * 
                     */
                    std::string GetShareSkillId() const;

                    /**
                     * 设置<p>New skill_id associated after sharing</p>
                     * @param _shareSkillId <p>New skill_id associated after sharing</p>
                     * 
                     */
                    void SetShareSkillId(const std::string& _shareSkillId);

                    /**
                     * 判断参数 ShareSkillId 是否已赋值
                     * @return ShareSkillId 是否已赋值
                     * 
                     */
                    bool ShareSkillIdHasBeenSet() const;

                    /**
                     * 获取<p>Shared version, for example 1.0.0</p>
                     * @return ShareVersion <p>Shared version, for example 1.0.0</p>
                     * 
                     */
                    std::string GetShareVersion() const;

                    /**
                     * 设置<p>Shared version, for example 1.0.0</p>
                     * @param _shareVersion <p>Shared version, for example 1.0.0</p>
                     * 
                     */
                    void SetShareVersion(const std::string& _shareVersion);

                    /**
                     * 判断参数 ShareVersion 是否已赋值
                     * @return ShareVersion 是否已赋值
                     * 
                     */
                    bool ShareVersionHasBeenSet() const;

                    /**
                     * 获取<p>Shared version ID</p>
                     * @return ShareVersionId <p>Shared version ID</p>
                     * 
                     */
                    std::string GetShareVersionId() const;

                    /**
                     * 设置<p>Shared version ID</p>
                     * @param _shareVersionId <p>Shared version ID</p>
                     * 
                     */
                    void SetShareVersionId(const std::string& _shareVersionId);

                    /**
                     * 判断参数 ShareVersionId 是否已赋值
                     * @return ShareVersionId 是否已赋值
                     * 
                     */
                    bool ShareVersionIdHasBeenSet() const;

                    /**
                     * 获取<p>Original skill_id</p>
                     * @return SkillId <p>Original skill_id</p>
                     * 
                     */
                    std::string GetSkillId() const;

                    /**
                     * 设置<p>Original skill_id</p>
                     * @param _skillId <p>Original skill_id</p>
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
                     * 获取<p>Shared state</p><p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | Not shared |<br>| 1 | Shared |<br>| 2 | Pending Approval |</p>
                     * @return Status <p>Shared state</p><p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | Not shared |<br>| 1 | Shared |<br>| 2 | Pending Approval |</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Shared state</p><p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | Not shared |<br>| 1 | Shared |<br>| 2 | Pending Approval |</p>
                     * @param _status <p>Shared state</p><p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | Not shared |<br>| 1 | Shared |<br>| 2 | Pending Approval |</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Business share scope</p>
                     * @return CorpShareConfig <p>Business share scope</p>
                     * 
                     */
                    SkillCorpShareConfig GetCorpShareConfig() const;

                    /**
                     * 设置<p>Business share scope</p>
                     * @param _corpShareConfig <p>Business share scope</p>
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
                     * <p>Approval ID</p>
                     */
                    std::string m_approvalId;
                    bool m_approvalIdHasBeenSet;

                    /**
                     * <p>New skill_id associated after sharing</p>
                     */
                    std::string m_shareSkillId;
                    bool m_shareSkillIdHasBeenSet;

                    /**
                     * <p>Shared version, for example 1.0.0</p>
                     */
                    std::string m_shareVersion;
                    bool m_shareVersionHasBeenSet;

                    /**
                     * <p>Shared version ID</p>
                     */
                    std::string m_shareVersionId;
                    bool m_shareVersionIdHasBeenSet;

                    /**
                     * <p>Original skill_id</p>
                     */
                    std::string m_skillId;
                    bool m_skillIdHasBeenSet;

                    /**
                     * <p>Shared state</p><p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | Not shared |<br>| 1 | Shared |<br>| 2 | Pending Approval |</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Business share scope</p>
                     */
                    SkillCorpShareConfig m_corpShareConfig;
                    bool m_corpShareConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLSHARE_H_
