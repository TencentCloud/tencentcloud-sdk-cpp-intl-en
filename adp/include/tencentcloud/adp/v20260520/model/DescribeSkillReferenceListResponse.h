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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESKILLREFERENCELISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESKILLREFERENCELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/SkillReferenceGroup.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeSkillReferenceList response structure.
                */
                class DescribeSkillReferenceListResponse : public AbstractModel
                {
                public:
                    DescribeSkillReferenceListResponse();
                    ~DescribeSkillReferenceListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Reference summary grouped by SkillRefType: when total_count of a type is 0, it is not included in a group (no empty placeholder is returned). This period also writes to three paths: OPENCLAW / AGENT / CORP_ASSISTANT</p>
                     * @return ReferenceList <p>Reference summary grouped by SkillRefType: when total_count of a type is 0, it is not included in a group (no empty placeholder is returned). This period also writes to three paths: OPENCLAW / AGENT / CORP_ASSISTANT</p>
                     * 
                     */
                    std::vector<SkillReferenceGroup> GetReferenceList() const;

                    /**
                     * 判断参数 ReferenceList 是否已赋值
                     * @return ReferenceList 是否已赋值
                     * 
                     */
                    bool ReferenceListHasBeenSet() const;

                    /**
                     * 获取<p>Whether the current user is allowed to forcibly delete a referenced Skill</p>
                     * @return AllowForceModify <p>Whether the current user is allowed to forcibly delete a referenced Skill</p>
                     * 
                     */
                    bool GetAllowForceModify() const;

                    /**
                     * 判断参数 AllowForceModify 是否已赋值
                     * @return AllowForceModify 是否已赋值
                     * 
                     */
                    bool AllowForceModifyHasBeenSet() const;

                private:

                    /**
                     * <p>Reference summary grouped by SkillRefType: when total_count of a type is 0, it is not included in a group (no empty placeholder is returned). This period also writes to three paths: OPENCLAW / AGENT / CORP_ASSISTANT</p>
                     */
                    std::vector<SkillReferenceGroup> m_referenceList;
                    bool m_referenceListHasBeenSet;

                    /**
                     * <p>Whether the current user is allowed to forcibly delete a referenced Skill</p>
                     */
                    bool m_allowForceModify;
                    bool m_allowForceModifyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESKILLREFERENCELISTRESPONSE_H_
