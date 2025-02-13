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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_BINDSTAFFSKILLGROUPLISTREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_BINDSTAFFSKILLGROUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/StaffSkillGroupList.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * BindStaffSkillGroupList request structure.
                */
                class BindStaffSkillGroupListRequest : public AbstractModel
                {
                public:
                    BindStaffSkillGroupListRequest();
                    ~BindStaffSkillGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Agent email.
                     * @return StaffEmail Agent email.
                     * 
                     */
                    std::string GetStaffEmail() const;

                    /**
                     * 设置Agent email.
                     * @param _staffEmail Agent email.
                     * 
                     */
                    void SetStaffEmail(const std::string& _staffEmail);

                    /**
                     * 判断参数 StaffEmail 是否已赋值
                     * @return StaffEmail 是否已赋值
                     * 
                     */
                    bool StaffEmailHasBeenSet() const;

                    /**
                     * 获取Bound skill group list.
                     * @return SkillGroupList Bound skill group list.
                     * @deprecated
                     */
                    std::vector<int64_t> GetSkillGroupList() const;

                    /**
                     * 设置Bound skill group list.
                     * @param _skillGroupList Bound skill group list.
                     * @deprecated
                     */
                    void SetSkillGroupList(const std::vector<int64_t>& _skillGroupList);

                    /**
                     * 判断参数 SkillGroupList 是否已赋值
                     * @return SkillGroupList 是否已赋值
                     * @deprecated
                     */
                    bool SkillGroupListHasBeenSet() const;

                    /**
                     * 获取Bound skill group list (required).
                     * @return StaffSkillGroupList Bound skill group list (required).
                     * 
                     */
                    std::vector<StaffSkillGroupList> GetStaffSkillGroupList() const;

                    /**
                     * 设置Bound skill group list (required).
                     * @param _staffSkillGroupList Bound skill group list (required).
                     * 
                     */
                    void SetStaffSkillGroupList(const std::vector<StaffSkillGroupList>& _staffSkillGroupList);

                    /**
                     * 判断参数 StaffSkillGroupList 是否已赋值
                     * @return StaffSkillGroupList 是否已赋值
                     * 
                     */
                    bool StaffSkillGroupListHasBeenSet() const;

                private:

                    /**
                     * Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Agent email.
                     */
                    std::string m_staffEmail;
                    bool m_staffEmailHasBeenSet;

                    /**
                     * Bound skill group list.
                     */
                    std::vector<int64_t> m_skillGroupList;
                    bool m_skillGroupListHasBeenSet;

                    /**
                     * Bound skill group list (required).
                     */
                    std::vector<StaffSkillGroupList> m_staffSkillGroupList;
                    bool m_staffSkillGroupListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_BINDSTAFFSKILLGROUPLISTREQUEST_H_
