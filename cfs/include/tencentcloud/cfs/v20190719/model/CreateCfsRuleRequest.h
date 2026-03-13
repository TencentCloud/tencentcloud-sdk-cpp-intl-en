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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSRULEREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateCfsRule request structure.
                */
                class CreateCfsRuleRequest : public AbstractModel
                {
                public:
                    CreateCfsRuleRequest();
                    ~CreateCfsRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Permission group ID, which can be obtained through the api [DescribeCfsPGroups](https://www.tencentcloud.com/document/api/582/38157?from_cn_redirect=1).
                     * @return PGroupId Permission group ID, which can be obtained through the api [DescribeCfsPGroups](https://www.tencentcloud.com/document/api/582/38157?from_cn_redirect=1).
                     * 
                     */
                    std::string GetPGroupId() const;

                    /**
                     * 设置Permission group ID, which can be obtained through the api [DescribeCfsPGroups](https://www.tencentcloud.com/document/api/582/38157?from_cn_redirect=1).
                     * @param _pGroupId Permission group ID, which can be obtained through the api [DescribeCfsPGroups](https://www.tencentcloud.com/document/api/582/38157?from_cn_redirect=1).
                     * 
                     */
                    void SetPGroupId(const std::string& _pGroupId);

                    /**
                     * 判断参数 PGroupId 是否已赋值
                     * @return PGroupId 是否已赋值
                     * 
                     */
                    bool PGroupIdHasBeenSet() const;

                    /**
                     * 获取You can enter a single IP or IP range, such as 10.1.10.11 or 10.10.1.0/24. The default visiting address is `*`, indicating that all IPs are allowed. Please note that you need to enter the CVM instance's private IP here.
                     * @return AuthClientIp You can enter a single IP or IP range, such as 10.1.10.11 or 10.10.1.0/24. The default visiting address is `*`, indicating that all IPs are allowed. Please note that you need to enter the CVM instance's private IP here.
                     * 
                     */
                    std::string GetAuthClientIp() const;

                    /**
                     * 设置You can enter a single IP or IP range, such as 10.1.10.11 or 10.10.1.0/24. The default visiting address is `*`, indicating that all IPs are allowed. Please note that you need to enter the CVM instance's private IP here.
                     * @param _authClientIp You can enter a single IP or IP range, such as 10.1.10.11 or 10.10.1.0/24. The default visiting address is `*`, indicating that all IPs are allowed. Please note that you need to enter the CVM instance's private IP here.
                     * 
                     */
                    void SetAuthClientIp(const std::string& _authClientIp);

                    /**
                     * 判断参数 AuthClientIp 是否已赋值
                     * @return AuthClientIp 是否已赋值
                     * 
                     */
                    bool AuthClientIpHasBeenSet() const;

                    /**
                     * 获取Rule priority. Value range: 1-100. 1 represents the highest priority, while 100 the lowest
                     * @return Priority Rule priority. Value range: 1-100. 1 represents the highest priority, while 100 the lowest
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Rule priority. Value range: 1-100. 1 represents the highest priority, while 100 the lowest
                     * @param _priority Rule priority. Value range: 1-100. 1 represents the highest priority, while 100 the lowest
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Read/write permission. Valid values: RO (read-only), RW (read & write). Default value: RO
                     * @return RWPermission Read/write permission. Valid values: RO (read-only), RW (read & write). Default value: RO
                     * 
                     */
                    std::string GetRWPermission() const;

                    /**
                     * 设置Read/write permission. Valid values: RO (read-only), RW (read & write). Default value: RO
                     * @param _rWPermission Read/write permission. Valid values: RO (read-only), RW (read & write). Default value: RO
                     * 
                     */
                    void SetRWPermission(const std::string& _rWPermission);

                    /**
                     * 判断参数 RWPermission 是否已赋值
                     * @return RWPermission 是否已赋值
                     * 
                     */
                    bool RWPermissionHasBeenSet() const;

                    /**
                     * 获取User permission. valid values: all_squash, no_all_squash, root_squash, no_root_squash. default value: root_squash.
All_squash: all accessing users (including the root user) will be mapped to anonymous users or groups.
no_all_squash: all accessing users (including the root user) retain original UID/GID information.
root_squash: maps visiting root user to anonymous user or user group. non-root user keeps original UID/GID information.
no_root_squash: has the same effect as no_all_squash. all accessing users (including the root user) retain their original UID/GID information.

                     * @return UserPermission User permission. valid values: all_squash, no_all_squash, root_squash, no_root_squash. default value: root_squash.
All_squash: all accessing users (including the root user) will be mapped to anonymous users or groups.
no_all_squash: all accessing users (including the root user) retain original UID/GID information.
root_squash: maps visiting root user to anonymous user or user group. non-root user keeps original UID/GID information.
no_root_squash: has the same effect as no_all_squash. all accessing users (including the root user) retain their original UID/GID information.

                     * 
                     */
                    std::string GetUserPermission() const;

                    /**
                     * 设置User permission. valid values: all_squash, no_all_squash, root_squash, no_root_squash. default value: root_squash.
All_squash: all accessing users (including the root user) will be mapped to anonymous users or groups.
no_all_squash: all accessing users (including the root user) retain original UID/GID information.
root_squash: maps visiting root user to anonymous user or user group. non-root user keeps original UID/GID information.
no_root_squash: has the same effect as no_all_squash. all accessing users (including the root user) retain their original UID/GID information.

                     * @param _userPermission User permission. valid values: all_squash, no_all_squash, root_squash, no_root_squash. default value: root_squash.
All_squash: all accessing users (including the root user) will be mapped to anonymous users or groups.
no_all_squash: all accessing users (including the root user) retain original UID/GID information.
root_squash: maps visiting root user to anonymous user or user group. non-root user keeps original UID/GID information.
no_root_squash: has the same effect as no_all_squash. all accessing users (including the root user) retain their original UID/GID information.

                     * 
                     */
                    void SetUserPermission(const std::string& _userPermission);

                    /**
                     * 判断参数 UserPermission 是否已赋值
                     * @return UserPermission 是否已赋值
                     * 
                     */
                    bool UserPermissionHasBeenSet() const;

                private:

                    /**
                     * Permission group ID, which can be obtained through the api [DescribeCfsPGroups](https://www.tencentcloud.com/document/api/582/38157?from_cn_redirect=1).
                     */
                    std::string m_pGroupId;
                    bool m_pGroupIdHasBeenSet;

                    /**
                     * You can enter a single IP or IP range, such as 10.1.10.11 or 10.10.1.0/24. The default visiting address is `*`, indicating that all IPs are allowed. Please note that you need to enter the CVM instance's private IP here.
                     */
                    std::string m_authClientIp;
                    bool m_authClientIpHasBeenSet;

                    /**
                     * Rule priority. Value range: 1-100. 1 represents the highest priority, while 100 the lowest
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Read/write permission. Valid values: RO (read-only), RW (read & write). Default value: RO
                     */
                    std::string m_rWPermission;
                    bool m_rWPermissionHasBeenSet;

                    /**
                     * User permission. valid values: all_squash, no_all_squash, root_squash, no_root_squash. default value: root_squash.
All_squash: all accessing users (including the root user) will be mapped to anonymous users or groups.
no_all_squash: all accessing users (including the root user) retain original UID/GID information.
root_squash: maps visiting root user to anonymous user or user group. non-root user keeps original UID/GID information.
no_root_squash: has the same effect as no_all_squash. all accessing users (including the root user) retain their original UID/GID information.

                     */
                    std::string m_userPermission;
                    bool m_userPermissionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSRULEREQUEST_H_
