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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETUSERLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETUSERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportAssetUserList request structure.
                */
                class ExportAssetUserListRequest : public AbstractModel
                {
                public:
                    ExportAssetUserListRequest();
                    ~ExportAssetUserListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query information of a specified QUUID host
                     * @return Quuid Query information of a specified QUUID host
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Query information of a specified QUUID host
                     * @param _quuid Query information of a specified QUUID host
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Filter criteria
<li>Name - String - whether required: no - account name</li>
<li>Uid - uint64 - whether required: no - Uid</li>
<li>Guid - uint64 - whether required: no - Guid</li>
<li>LoginTimeStart - String - whether required: no - start time, such as 2021-01-11</li>
<li>LoginTimeEnd - String - whether required: no - end time, such as 2021-01-11</li>
<li>LoginType - uint64 - whether required: no - 0 - not allowed to log in; 1 - only key-based log-in allowed; 2 - only password-based log-in allowed; 3 - both key-based and password-based log-in allowed (Linux only)</li>
<li>OsType - String - whether required: no - Windows or Linux</li>
<li>Status - uint64 - whether required: no - account status: 0 - disabled; 1 - enabled</li>
<li>Type - uint64 - whether required: no - account type: 0 - guest user; 1 - standard user; 2 - administrator user (Windows Only)</li>
<li>IsDomain - uint64 - whether required: no - whether a domain account: 0 - no; 1 - yes (Windows only)</li>
<li>IsRoot - uint64 - whether required: no - whether there is root permission: 0 - no; 1 - yes (Linux only)</li>
<li>IsSudo - uint64 - whether required: no - whether there is sudo permission: 0 - no; 1 - yes (Linux only)</li>
<li>IsSshLogin - uint64 - whether required: no - whether to use ssh log-in: 0 - no; 1 - yes (Linux only)</li>
<li>ShellLoginStatus - uint64 - whether required: no - whether to use shell log-in: 0 - no; 1 - yes (Linux only)</li>
<li>PasswordStatus - uint64 - whether required: no - password status: 1 - normal; 2 - expiring soon; 3 - expired; 4 - locked (Linux only)</li>
                     * @return Filters Filter criteria
<li>Name - String - whether required: no - account name</li>
<li>Uid - uint64 - whether required: no - Uid</li>
<li>Guid - uint64 - whether required: no - Guid</li>
<li>LoginTimeStart - String - whether required: no - start time, such as 2021-01-11</li>
<li>LoginTimeEnd - String - whether required: no - end time, such as 2021-01-11</li>
<li>LoginType - uint64 - whether required: no - 0 - not allowed to log in; 1 - only key-based log-in allowed; 2 - only password-based log-in allowed; 3 - both key-based and password-based log-in allowed (Linux only)</li>
<li>OsType - String - whether required: no - Windows or Linux</li>
<li>Status - uint64 - whether required: no - account status: 0 - disabled; 1 - enabled</li>
<li>Type - uint64 - whether required: no - account type: 0 - guest user; 1 - standard user; 2 - administrator user (Windows Only)</li>
<li>IsDomain - uint64 - whether required: no - whether a domain account: 0 - no; 1 - yes (Windows only)</li>
<li>IsRoot - uint64 - whether required: no - whether there is root permission: 0 - no; 1 - yes (Linux only)</li>
<li>IsSudo - uint64 - whether required: no - whether there is sudo permission: 0 - no; 1 - yes (Linux only)</li>
<li>IsSshLogin - uint64 - whether required: no - whether to use ssh log-in: 0 - no; 1 - yes (Linux only)</li>
<li>ShellLoginStatus - uint64 - whether required: no - whether to use shell log-in: 0 - no; 1 - yes (Linux only)</li>
<li>PasswordStatus - uint64 - whether required: no - password status: 1 - normal; 2 - expiring soon; 3 - expired; 4 - locked (Linux only)</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>Name - String - whether required: no - account name</li>
<li>Uid - uint64 - whether required: no - Uid</li>
<li>Guid - uint64 - whether required: no - Guid</li>
<li>LoginTimeStart - String - whether required: no - start time, such as 2021-01-11</li>
<li>LoginTimeEnd - String - whether required: no - end time, such as 2021-01-11</li>
<li>LoginType - uint64 - whether required: no - 0 - not allowed to log in; 1 - only key-based log-in allowed; 2 - only password-based log-in allowed; 3 - both key-based and password-based log-in allowed (Linux only)</li>
<li>OsType - String - whether required: no - Windows or Linux</li>
<li>Status - uint64 - whether required: no - account status: 0 - disabled; 1 - enabled</li>
<li>Type - uint64 - whether required: no - account type: 0 - guest user; 1 - standard user; 2 - administrator user (Windows Only)</li>
<li>IsDomain - uint64 - whether required: no - whether a domain account: 0 - no; 1 - yes (Windows only)</li>
<li>IsRoot - uint64 - whether required: no - whether there is root permission: 0 - no; 1 - yes (Linux only)</li>
<li>IsSudo - uint64 - whether required: no - whether there is sudo permission: 0 - no; 1 - yes (Linux only)</li>
<li>IsSshLogin - uint64 - whether required: no - whether to use ssh log-in: 0 - no; 1 - yes (Linux only)</li>
<li>ShellLoginStatus - uint64 - whether required: no - whether to use shell log-in: 0 - no; 1 - yes (Linux only)</li>
<li>PasswordStatus - uint64 - whether required: no - password status: 1 - normal; 2 - expiring soon; 3 - expired; 4 - locked (Linux only)</li>
                     * @param _filters Filter criteria
<li>Name - String - whether required: no - account name</li>
<li>Uid - uint64 - whether required: no - Uid</li>
<li>Guid - uint64 - whether required: no - Guid</li>
<li>LoginTimeStart - String - whether required: no - start time, such as 2021-01-11</li>
<li>LoginTimeEnd - String - whether required: no - end time, such as 2021-01-11</li>
<li>LoginType - uint64 - whether required: no - 0 - not allowed to log in; 1 - only key-based log-in allowed; 2 - only password-based log-in allowed; 3 - both key-based and password-based log-in allowed (Linux only)</li>
<li>OsType - String - whether required: no - Windows or Linux</li>
<li>Status - uint64 - whether required: no - account status: 0 - disabled; 1 - enabled</li>
<li>Type - uint64 - whether required: no - account type: 0 - guest user; 1 - standard user; 2 - administrator user (Windows Only)</li>
<li>IsDomain - uint64 - whether required: no - whether a domain account: 0 - no; 1 - yes (Windows only)</li>
<li>IsRoot - uint64 - whether required: no - whether there is root permission: 0 - no; 1 - yes (Linux only)</li>
<li>IsSudo - uint64 - whether required: no - whether there is sudo permission: 0 - no; 1 - yes (Linux only)</li>
<li>IsSshLogin - uint64 - whether required: no - whether to use ssh log-in: 0 - no; 1 - yes (Linux only)</li>
<li>ShellLoginStatus - uint64 - whether required: no - whether to use shell log-in: 0 - no; 1 - yes (Linux only)</li>
<li>PasswordStatus - uint64 - whether required: no - password status: 1 - normal; 2 - expiring soon; 3 - expired; 4 - locked (Linux only)</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting method: asc for ascending order or desc for descending order
                     * @return Order Sorting method: asc for ascending order or desc for descending order
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method: asc for ascending order or desc for descending order
                     * @param _order Sorting method: asc for ascending order or desc for descending order
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Optional sorting method: [FirstTime|LoginTime|ChangePasswordTime|PasswordDuaTime]
PasswordLockDays
                     * @return By Optional sorting method: [FirstTime|LoginTime|ChangePasswordTime|PasswordDuaTime]
PasswordLockDays
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Optional sorting method: [FirstTime|LoginTime|ChangePasswordTime|PasswordDuaTime]
PasswordLockDays
                     * @param _by Optional sorting method: [FirstTime|LoginTime|ChangePasswordTime|PasswordDuaTime]
PasswordLockDays
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * Query information of a specified QUUID host
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Filter criteria
<li>Name - String - whether required: no - account name</li>
<li>Uid - uint64 - whether required: no - Uid</li>
<li>Guid - uint64 - whether required: no - Guid</li>
<li>LoginTimeStart - String - whether required: no - start time, such as 2021-01-11</li>
<li>LoginTimeEnd - String - whether required: no - end time, such as 2021-01-11</li>
<li>LoginType - uint64 - whether required: no - 0 - not allowed to log in; 1 - only key-based log-in allowed; 2 - only password-based log-in allowed; 3 - both key-based and password-based log-in allowed (Linux only)</li>
<li>OsType - String - whether required: no - Windows or Linux</li>
<li>Status - uint64 - whether required: no - account status: 0 - disabled; 1 - enabled</li>
<li>Type - uint64 - whether required: no - account type: 0 - guest user; 1 - standard user; 2 - administrator user (Windows Only)</li>
<li>IsDomain - uint64 - whether required: no - whether a domain account: 0 - no; 1 - yes (Windows only)</li>
<li>IsRoot - uint64 - whether required: no - whether there is root permission: 0 - no; 1 - yes (Linux only)</li>
<li>IsSudo - uint64 - whether required: no - whether there is sudo permission: 0 - no; 1 - yes (Linux only)</li>
<li>IsSshLogin - uint64 - whether required: no - whether to use ssh log-in: 0 - no; 1 - yes (Linux only)</li>
<li>ShellLoginStatus - uint64 - whether required: no - whether to use shell log-in: 0 - no; 1 - yes (Linux only)</li>
<li>PasswordStatus - uint64 - whether required: no - password status: 1 - normal; 2 - expiring soon; 3 - expired; 4 - locked (Linux only)</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting method: asc for ascending order or desc for descending order
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Optional sorting method: [FirstTime|LoginTime|ChangePasswordTime|PasswordDuaTime]
PasswordLockDays
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETUSERLISTREQUEST_H_
