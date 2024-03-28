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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_UNBINDSTAFFSKILLGROUPLISTREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_UNBINDSTAFFSKILLGROUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * UnbindStaffSkillGroupList request structure.
                */
                class UnbindStaffSkillGroupListRequest : public AbstractModel
                {
                public:
                    UnbindStaffSkillGroupListRequest();
                    ~UnbindStaffSkillGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
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
                     * 获取Customer service email.
                     * @return StaffEmail Customer service email.
                     * 
                     */
                    std::string GetStaffEmail() const;

                    /**
                     * 设置Customer service email.
                     * @param _staffEmail Customer service email.
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
                     * 获取Unbound skill group list.
                     * @return SkillGroupList Unbound skill group list.
                     * 
                     */
                    std::vector<int64_t> GetSkillGroupList() const;

                    /**
                     * 设置Unbound skill group list.
                     * @param _skillGroupList Unbound skill group list.
                     * 
                     */
                    void SetSkillGroupList(const std::vector<int64_t>& _skillGroupList);

                    /**
                     * 判断参数 SkillGroupList 是否已赋值
                     * @return SkillGroupList 是否已赋值
                     * 
                     */
                    bool SkillGroupListHasBeenSet() const;

                private:

                    /**
                     * Application ID (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Customer service email.
                     */
                    std::string m_staffEmail;
                    bool m_staffEmailHasBeenSet;

                    /**
                     * Unbound skill group list.
                     */
                    std::vector<int64_t> m_skillGroupList;
                    bool m_skillGroupListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_UNBINDSTAFFSKILLGROUPLISTREQUEST_H_
