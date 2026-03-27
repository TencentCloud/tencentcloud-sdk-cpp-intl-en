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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFINFOLISTREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFINFOLISTREQUEST_H_

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
                * DescribeStaffInfoList request structure.
                */
                class DescribeStaffInfoListRequest : public AbstractModel
                {
                public:
                    DescribeStaffInfoListRequest();
                    ~DescribeStaffInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>App ID (required). can check https://console.cloud.tencent.com/ccc</p>.
                     * @return SdkAppId <p>App ID (required). can check https://console.cloud.tencent.com/ccc</p>.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置<p>App ID (required). can check https://console.cloud.tencent.com/ccc</p>.
                     * @param _sdkAppId <p>App ID (required). can check https://console.cloud.tencent.com/ccc</p>.
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
                     * 获取<P>Pagination size. upper limit: 9999.</p>.
                     * @return PageSize <P>Pagination size. upper limit: 9999.</p>.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<P>Pagination size. upper limit: 9999.</p>.
                     * @param _pageSize <P>Pagination size. upper limit: 9999.</p>.
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
                     * 获取<P>Page number, starting from 0.</p>.
                     * @return PageNumber <P>Page number, starting from 0.</p>.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<P>Page number, starting from 0.</p>.
                     * @param _pageNumber <P>Page number, starting from 0.</p>.
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
                     * 获取<P>Agent account, used when query single agent.</p>.
                     * @return StaffMail <P>Agent account, used when query single agent.</p>.
                     * 
                     */
                    std::string GetStaffMail() const;

                    /**
                     * 设置<P>Agent account, used when query single agent.</p>.
                     * @param _staffMail <P>Agent account, used when query single agent.</p>.
                     * 
                     */
                    void SetStaffMail(const std::string& _staffMail);

                    /**
                     * 判断参数 StaffMail 是否已赋值
                     * @return StaffMail 是否已赋值
                     * 
                     */
                    bool StaffMailHasBeenSet() const;

                    /**
                     * 获取<p>Use when querying for agents with modified time equal to or greater than ModifiedTime</p>.
                     * @return ModifiedTime <p>Use when querying for agents with modified time equal to or greater than ModifiedTime</p>.
                     * 
                     */
                    int64_t GetModifiedTime() const;

                    /**
                     * 设置<p>Use when querying for agents with modified time equal to or greater than ModifiedTime</p>.
                     * @param _modifiedTime <p>Use when querying for agents with modified time equal to or greater than ModifiedTime</p>.
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
                     * 获取<p>Skill group ID</p>.
                     * @return SkillGroupId <p>Skill group ID</p>.
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置<p>Skill group ID</p>.
                     * @param _skillGroupId <p>Skill group ID</p>.
                     * 
                     */
                    void SetSkillGroupId(const int64_t& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                private:

                    /**
                     * <p>App ID (required). can check https://console.cloud.tencent.com/ccc</p>.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <P>Pagination size. upper limit: 9999.</p>.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <P>Page number, starting from 0.</p>.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <P>Agent account, used when query single agent.</p>.
                     */
                    std::string m_staffMail;
                    bool m_staffMailHasBeenSet;

                    /**
                     * <p>Use when querying for agents with modified time equal to or greater than ModifiedTime</p>.
                     */
                    int64_t m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * <p>Skill group ID</p>.
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFINFOLISTREQUEST_H_
