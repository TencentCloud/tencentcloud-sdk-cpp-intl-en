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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESKILLGROUPINFOLISTREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESKILLGROUPINFOLISTREQUEST_H_

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
                * DescribeSkillGroupInfoList request structure.
                */
                class DescribeSkillGroupInfoListRequest : public AbstractModel
                {
                public:
                    DescribeSkillGroupInfoListRequest();
                    ~DescribeSkillGroupInfoListRequest() = default;
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
                     * 获取Page size, upper limit 100.
                     * @return PageSize Page size, upper limit 100.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page size, upper limit 100.
                     * @param _pageSize Page size, upper limit 100.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<Page number starting from 0.>.
                     * @return PageNumber <Page number starting from 0.>.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<Page number starting from 0.>.
                     * @param _pageNumber <Page number starting from 0.>.
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Using skill group id when querying a single skill group.
                     * @return SkillGroupId Using skill group id when querying a single skill group.
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置Using skill group id when querying a single skill group.
                     * @param _skillGroupId Using skill group id when querying a single skill group.
                     * 
                     */
                    void SetSkillGroupId(const int64_t& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                    /**
                     * 获取Used when querying skill groups with a modified time greater or equal to modifiedtime.
                     * @return ModifiedTime Used when querying skill groups with a modified time greater or equal to modifiedtime.
                     * 
                     */
                    int64_t GetModifiedTime() const;

                    /**
                     * 设置Used when querying skill groups with a modified time greater or equal to modifiedtime.
                     * @param _modifiedTime Used when querying skill groups with a modified time greater or equal to modifiedtime.
                     * 
                     */
                    void SetModifiedTime(const int64_t& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取Skill group name.
                     * @return SkillGroupName Skill group name.
                     * 
                     */
                    std::string GetSkillGroupName() const;

                    /**
                     * 设置Skill group name.
                     * @param _skillGroupName Skill group name.
                     * 
                     */
                    void SetSkillGroupName(const std::string& _skillGroupName);

                    /**
                     * 判断参数 SkillGroupName 是否已赋值
                     * @return SkillGroupName 是否已赋值
                     * 
                     */
                    bool SkillGroupNameHasBeenSet() const;

                private:

                    /**
                     * Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Page size, upper limit 100.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <Page number starting from 0.>.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Using skill group id when querying a single skill group.
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * Used when querying skill groups with a modified time greater or equal to modifiedtime.
                     */
                    int64_t m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * Skill group name.
                     */
                    std::string m_skillGroupName;
                    bool m_skillGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESKILLGROUPINFOLISTREQUEST_H_
