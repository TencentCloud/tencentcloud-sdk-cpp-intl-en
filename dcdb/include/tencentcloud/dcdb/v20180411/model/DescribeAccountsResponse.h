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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEACCOUNTSRESPONSE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEACCOUNTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/DBAccount.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeAccounts response structure.
                */
                class DescribeAccountsResponse : public AbstractModel
                {
                public:
                    DescribeAccountsResponse();
                    ~DescribeAccountsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, which is passed through from the input parameters.
                     * @return InstanceId Instance ID, which is passed through from the input parameters.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance user list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Users Instance user list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DBAccount> GetUsers() const;

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                private:

                    /**
                     * Instance ID, which is passed through from the input parameters.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance user list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DBAccount> m_users;
                    bool m_usersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEACCOUNTSRESPONSE_H_
