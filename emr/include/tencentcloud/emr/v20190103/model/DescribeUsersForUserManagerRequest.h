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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEUSERSFORUSERMANAGERREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEUSERSFORUSERMANAGERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/UserManagerFilter.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeUsersForUserManager request structure.
                */
                class DescribeUsersForUserManagerRequest : public AbstractModel
                {
                public:
                    DescribeUsersForUserManagerRequest();
                    ~DescribeUsersForUserManagerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster instance ID
                     * @return InstanceId Cluster instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster instance ID
                     * @param _instanceId Cluster instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Page number
                     * @return PageNo Page number
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置Page number
                     * @param _pageNo Page number
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取Page size
                     * @return PageSize Page size
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page size
                     * @param _pageSize Page size
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
                     * 获取User list query filter
                     * @return UserManagerFilter User list query filter
                     * 
                     */
                    UserManagerFilter GetUserManagerFilter() const;

                    /**
                     * 设置User list query filter
                     * @param _userManagerFilter User list query filter
                     * 
                     */
                    void SetUserManagerFilter(const UserManagerFilter& _userManagerFilter);

                    /**
                     * 判断参数 UserManagerFilter 是否已赋值
                     * @return UserManagerFilter 是否已赋值
                     * 
                     */
                    bool UserManagerFilterHasBeenSet() const;

                    /**
                     * 获取Whether the Keytab file information is required. This field is only valid for clusters with Kerberos enabled and defaults to `false`.
                     * @return NeedKeytabInfo Whether the Keytab file information is required. This field is only valid for clusters with Kerberos enabled and defaults to `false`.
                     * 
                     */
                    bool GetNeedKeytabInfo() const;

                    /**
                     * 设置Whether the Keytab file information is required. This field is only valid for clusters with Kerberos enabled and defaults to `false`.
                     * @param _needKeytabInfo Whether the Keytab file information is required. This field is only valid for clusters with Kerberos enabled and defaults to `false`.
                     * 
                     */
                    void SetNeedKeytabInfo(const bool& _needKeytabInfo);

                    /**
                     * 判断参数 NeedKeytabInfo 是否已赋值
                     * @return NeedKeytabInfo 是否已赋值
                     * 
                     */
                    bool NeedKeytabInfoHasBeenSet() const;

                private:

                    /**
                     * Cluster instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Page number
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * Page size
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * User list query filter
                     */
                    UserManagerFilter m_userManagerFilter;
                    bool m_userManagerFilterHasBeenSet;

                    /**
                     * Whether the Keytab file information is required. This field is only valid for clusters with Kerberos enabled and defaults to `false`.
                     */
                    bool m_needKeytabInfo;
                    bool m_needKeytabInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEUSERSFORUSERMANAGERREQUEST_H_
