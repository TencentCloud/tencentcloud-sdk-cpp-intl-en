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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEGROUPLISTREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEGROUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeGroupList request structure.
                */
                class DescribeGroupListRequest : public AbstractModel
                {
                public:
                    DescribeGroupListRequest();
                    ~DescribeGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The SDKAppID assigned by LCIC.
                     * @return SdkAppId The SDKAppID assigned by LCIC.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The SDKAppID assigned by LCIC.
                     * @param _sdkAppId The SDKAppID assigned by LCIC.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The page to return records from. Pagination starts from 1.
                     * @return Page The page to return records from. Pagination starts from 1.
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置The page to return records from. Pagination starts from 1.
                     * @param _page The page to return records from. Pagination starts from 1.
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取The maximum number of records per page. The value of this parameter cannot exceed 1000 and is 20 by default.
                     * @return Limit The maximum number of records per page. The value of this parameter cannot exceed 1000 and is 20 by default.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The maximum number of records per page. The value of this parameter cannot exceed 1000 and is 20 by default.
                     * @param _limit The maximum number of records per page. The value of this parameter cannot exceed 1000 and is 20 by default.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The user ID of the teacher, which is used as the filter. This parameter and MemberId are mutually exclusive. If both are specified, only this parameter will take effect.
                     * @return TeacherId The user ID of the teacher, which is used as the filter. This parameter and MemberId are mutually exclusive. If both are specified, only this parameter will take effect.
                     * 
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置The user ID of the teacher, which is used as the filter. This parameter and MemberId are mutually exclusive. If both are specified, only this parameter will take effect.
                     * @param _teacherId The user ID of the teacher, which is used as the filter. This parameter and MemberId are mutually exclusive. If both are specified, only this parameter will take effect.
                     * 
                     */
                    void SetTeacherId(const std::string& _teacherId);

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     * 
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取The user ID of a member, which is used as the filter. This parameter and TeacherId are mutually exclusive.
                     * @return MemberId The user ID of a member, which is used as the filter. This parameter and TeacherId are mutually exclusive.
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置The user ID of a member, which is used as the filter. This parameter and TeacherId are mutually exclusive.
                     * @param _memberId The user ID of a member, which is used as the filter. This parameter and TeacherId are mutually exclusive.
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * The SDKAppID assigned by LCIC.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The page to return records from. Pagination starts from 1.
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * The maximum number of records per page. The value of this parameter cannot exceed 1000 and is 20 by default.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The user ID of the teacher, which is used as the filter. This parameter and MemberId are mutually exclusive. If both are specified, only this parameter will take effect.
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                    /**
                     * The user ID of a member, which is used as the filter. This parameter and TeacherId are mutually exclusive.
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEGROUPLISTREQUEST_H_
