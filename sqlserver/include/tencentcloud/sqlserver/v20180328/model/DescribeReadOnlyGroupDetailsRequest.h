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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEREADONLYGROUPDETAILSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEREADONLYGROUPDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeReadOnlyGroupDetails request structure.
                */
                class DescribeReadOnlyGroupDetailsRequest : public AbstractModel
                {
                public:
                    DescribeReadOnlyGroupDetailsRequest();
                    ~DescribeReadOnlyGroupDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Primary instance ID, in the format of mssql-3l3fgqn7.
                     * @return InstanceId Primary instance ID, in the format of mssql-3l3fgqn7.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Primary instance ID, in the format of mssql-3l3fgqn7.
                     * @param _instanceId Primary instance ID, in the format of mssql-3l3fgqn7.
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
                     * 获取Read-only group ID, in the format of mssqlrg-3l3fgqn7.
                     * @return ReadOnlyGroupId Read-only group ID, in the format of mssqlrg-3l3fgqn7.
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置Read-only group ID, in the format of mssqlrg-3l3fgqn7.
                     * @param _readOnlyGroupId Read-only group ID, in the format of mssqlrg-3l3fgqn7.
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                private:

                    /**
                     * Primary instance ID, in the format of mssql-3l3fgqn7.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Read-only group ID, in the format of mssqlrg-3l3fgqn7.
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEREADONLYGROUPDETAILSREQUEST_H_
