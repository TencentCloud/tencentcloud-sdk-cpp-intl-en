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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEAGENTINSTALLATIONTOKENREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEAGENTINSTALLATIONTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAgentInstallationToken request structure.
                */
                class DescribeAgentInstallationTokenRequest : public AbstractModel
                {
                public:
                    DescribeAgentInstallationTokenRequest();
                    ~DescribeAgentInstallationTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Token expiration time
                     * @return ExpireDate Token expiration time
                     * 
                     */
                    std::string GetExpireDate() const;

                    /**
                     * 设置Token expiration time
                     * @param _expireDate Token expiration time
                     * 
                     */
                    void SetExpireDate(const std::string& _expireDate);

                    /**
                     * 判断参数 ExpireDate 是否已赋值
                     * @return ExpireDate 是否已赋值
                     * 
                     */
                    bool ExpireDateHasBeenSet() const;

                private:

                    /**
                     * Token expiration time
                     */
                    std::string m_expireDate;
                    bool m_expireDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEAGENTINSTALLATIONTOKENREQUEST_H_
