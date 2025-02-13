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
                     * 获取Page size, upper limit 9,999.
                     * @return PageSize Page size, upper limit 9,999.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page size, upper limit 9,999.
                     * @param _pageSize Page size, upper limit 9,999.
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
                     * 获取Page number starting from 0.
                     * @return PageNumber Page number starting from 0.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number starting from 0.
                     * @param _pageNumber Page number starting from 0.
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
                     * 获取Agent account used when querying a single agent.
                     * @return StaffMail Agent account used when querying a single agent.
                     * 
                     */
                    std::string GetStaffMail() const;

                    /**
                     * 设置Agent account used when querying a single agent.
                     * @param _staffMail Agent account used when querying a single agent.
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
                     * 获取Use when querying for agents with a modification time greater or equal to modifiedtime.
                     * @return ModifiedTime Use when querying for agents with a modification time greater or equal to modifiedtime.
                     * 
                     */
                    int64_t GetModifiedTime() const;

                    /**
                     * 设置Use when querying for agents with a modification time greater or equal to modifiedtime.
                     * @param _modifiedTime Use when querying for agents with a modification time greater or equal to modifiedtime.
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
                     * 获取Skill group id.
                     * @return SkillGroupId Skill group id.
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置Skill group id.
                     * @param _skillGroupId Skill group id.
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
                     * Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Page size, upper limit 9,999.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Page number starting from 0.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Agent account used when querying a single agent.
                     */
                    std::string m_staffMail;
                    bool m_staffMailHasBeenSet;

                    /**
                     * Use when querying for agents with a modification time greater or equal to modifiedtime.
                     */
                    int64_t m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * Skill group id.
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFINFOLISTREQUEST_H_
