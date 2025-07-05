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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEUSERPOLICYRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEUSERPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/AccountDetailInfo.h>
#include <tencentcloud/cdwdoris/v20211228/model/PermissionHostInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeUserPolicy response structure.
                */
                class DescribeUserPolicyResponse : public AbstractModel
                {
                public:
                    DescribeUserPolicyResponse();
                    ~DescribeUserPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Account details
                     * @return AccountInfo Account details
                     * 
                     */
                    AccountDetailInfo GetAccountInfo() const;

                    /**
                     * 判断参数 AccountInfo 是否已赋值
                     * @return AccountInfo 是否已赋值
                     * 
                     */
                    bool AccountInfoHasBeenSet() const;

                    /**
                     * 获取Permission configuration information associated with different hosts
                     * @return Permissions Permission configuration information associated with different hosts
                     * 
                     */
                    PermissionHostInfo GetPermissions() const;

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                private:

                    /**
                     * Account details
                     */
                    AccountDetailInfo m_accountInfo;
                    bool m_accountInfoHasBeenSet;

                    /**
                     * Permission configuration information associated with different hosts
                     */
                    PermissionHostInfo m_permissions;
                    bool m_permissionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEUSERPOLICYRESPONSE_H_
