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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_REMOVEACCOUNTFROMACCOUNTGROUPREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_REMOVEACCOUNTFROMACCOUNTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * RemoveAccountFromAccountGroup request structure.
                */
                class RemoveAccountFromAccountGroupRequest : public AbstractModel
                {
                public:
                    RemoveAccountFromAccountGroupRequest();
                    ~RemoveAccountFromAccountGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Account group ID
                     * @return AccountGroupId Account group ID
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置Account group ID
                     * @param _accountGroupId Account group ID
                     * 
                     */
                    void SetAccountGroupId(const std::string& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取List of IDs of the accounts to be removed.
                     * @return AccountIds List of IDs of the accounts to be removed.
                     * 
                     */
                    std::vector<std::string> GetAccountIds() const;

                    /**
                     * 设置List of IDs of the accounts to be removed.
                     * @param _accountIds List of IDs of the accounts to be removed.
                     * 
                     */
                    void SetAccountIds(const std::vector<std::string>& _accountIds);

                    /**
                     * 判断参数 AccountIds 是否已赋值
                     * @return AccountIds 是否已赋值
                     * 
                     */
                    bool AccountIdsHasBeenSet() const;

                private:

                    /**
                     * Account group ID
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * List of IDs of the accounts to be removed.
                     */
                    std::vector<std::string> m_accountIds;
                    bool m_accountIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_REMOVEACCOUNTFROMACCOUNTGROUPREQUEST_H_
