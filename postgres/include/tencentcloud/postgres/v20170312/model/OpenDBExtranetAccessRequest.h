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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_OPENDBEXTRANETACCESSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_OPENDBEXTRANETACCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * OpenDBExtranetAccess request structure.
                */
                class OpenDBExtranetAccessRequest : public AbstractModel
                {
                public:
                    OpenDBExtranetAccessRequest();
                    ~OpenDBExtranetAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of postgres-hez4fh0v
                     * @return DBInstanceId Instance ID in the format of postgres-hez4fh0v
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID in the format of postgres-hez4fh0v
                     * @param _dBInstanceId Instance ID in the format of postgres-hez4fh0v
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable public network access over IPv6 address. Valid values: 1 (yes), 0 (no)
                     * @return IsIpv6 Whether to enable public network access over IPv6 address. Valid values: 1 (yes), 0 (no)
                     * 
                     */
                    int64_t GetIsIpv6() const;

                    /**
                     * 设置Whether to enable public network access over IPv6 address. Valid values: 1 (yes), 0 (no)
                     * @param _isIpv6 Whether to enable public network access over IPv6 address. Valid values: 1 (yes), 0 (no)
                     * 
                     */
                    void SetIsIpv6(const int64_t& _isIpv6);

                    /**
                     * 判断参数 IsIpv6 是否已赋值
                     * @return IsIpv6 是否已赋值
                     * 
                     */
                    bool IsIpv6HasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of postgres-hez4fh0v
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Whether to enable public network access over IPv6 address. Valid values: 1 (yes), 0 (no)
                     */
                    int64_t m_isIpv6;
                    bool m_isIpv6HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_OPENDBEXTRANETACCESSREQUEST_H_
