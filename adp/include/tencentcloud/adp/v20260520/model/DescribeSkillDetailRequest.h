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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESKILLDETAILREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESKILLDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeSkillDetail request structure.
                */
                class DescribeSkillDetailRequest : public AbstractModel
                {
                public:
                    DescribeSkillDetailRequest();
                    ~DescribeSkillDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取skillID
                     * @return SkillId skillID
                     * 
                     */
                    std::string GetSkillId() const;

                    /**
                     * 设置skillID
                     * @param _skillId skillID
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
                     * 获取Space ID.
                     * @return SpaceId Space ID.
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置Space ID.
                     * @param _spaceId Space ID.
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
                     * 获取version Filter criteria (multiple filters are in an AND relationship with each other, AND multiple Values of the same Filter are in an OR relationship): - Perspective: Perspective enumeration, single string value. The length of Values must be 1. Multiple Values are deemed as illegal. It only acts on the trimming of version_list returned in the details AND does not determine the visibility of the api itself. Default if not passed: USER (USER = USER Perspective, version_list returns only launch versions / EDITOR = EDITOR Perspective, version_list returns ALL liveness versions / ALL = full Perspective, same as EDITOR)
                     * @return VersionFilterList version Filter criteria (multiple filters are in an AND relationship with each other, AND multiple Values of the same Filter are in an OR relationship): - Perspective: Perspective enumeration, single string value. The length of Values must be 1. Multiple Values are deemed as illegal. It only acts on the trimming of version_list returned in the details AND does not determine the visibility of the api itself. Default if not passed: USER (USER = USER Perspective, version_list returns only launch versions / EDITOR = EDITOR Perspective, version_list returns ALL liveness versions / ALL = full Perspective, same as EDITOR)
                     * 
                     */
                    std::vector<Filter> GetVersionFilterList() const;

                    /**
                     * 设置version Filter criteria (multiple filters are in an AND relationship with each other, AND multiple Values of the same Filter are in an OR relationship): - Perspective: Perspective enumeration, single string value. The length of Values must be 1. Multiple Values are deemed as illegal. It only acts on the trimming of version_list returned in the details AND does not determine the visibility of the api itself. Default if not passed: USER (USER = USER Perspective, version_list returns only launch versions / EDITOR = EDITOR Perspective, version_list returns ALL liveness versions / ALL = full Perspective, same as EDITOR)
                     * @param _versionFilterList version Filter criteria (multiple filters are in an AND relationship with each other, AND multiple Values of the same Filter are in an OR relationship): - Perspective: Perspective enumeration, single string value. The length of Values must be 1. Multiple Values are deemed as illegal. It only acts on the trimming of version_list returned in the details AND does not determine the visibility of the api itself. Default if not passed: USER (USER = USER Perspective, version_list returns only launch versions / EDITOR = EDITOR Perspective, version_list returns ALL liveness versions / ALL = full Perspective, same as EDITOR)
                     * 
                     */
                    void SetVersionFilterList(const std::vector<Filter>& _versionFilterList);

                    /**
                     * 判断参数 VersionFilterList 是否已赋值
                     * @return VersionFilterList 是否已赋值
                     * 
                     */
                    bool VersionFilterListHasBeenSet() const;

                private:

                    /**
                     * skillID
                     */
                    std::string m_skillId;
                    bool m_skillIdHasBeenSet;

                    /**
                     * Space ID.
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * version Filter criteria (multiple filters are in an AND relationship with each other, AND multiple Values of the same Filter are in an OR relationship): - Perspective: Perspective enumeration, single string value. The length of Values must be 1. Multiple Values are deemed as illegal. It only acts on the trimming of version_list returned in the details AND does not determine the visibility of the api itself. Default if not passed: USER (USER = USER Perspective, version_list returns only launch versions / EDITOR = EDITOR Perspective, version_list returns ALL liveness versions / ALL = full Perspective, same as EDITOR)
                     */
                    std::vector<Filter> m_versionFilterList;
                    bool m_versionFilterListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESKILLDETAILREQUEST_H_
