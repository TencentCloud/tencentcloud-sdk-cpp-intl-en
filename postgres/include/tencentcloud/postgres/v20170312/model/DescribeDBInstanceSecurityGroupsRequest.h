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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESECURITYGROUPSREQUEST_H_

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
                * DescribeDBInstanceSecurityGroups request structure.
                */
                class DescribeDBInstanceSecurityGroupsRequest : public AbstractModel
                {
                public:
                    DescribeDBInstanceSecurityGroupsRequest();
                    ~DescribeDBInstanceSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. Either this parameter or `ReadOnlyGroupId` must be passed in. If both parameters are passed in, `ReadOnlyGroupId` will be ignored.
                     * @return DBInstanceId Instance ID. Either this parameter or `ReadOnlyGroupId` must be passed in. If both parameters are passed in, `ReadOnlyGroupId` will be ignored.
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID. Either this parameter or `ReadOnlyGroupId` must be passed in. If both parameters are passed in, `ReadOnlyGroupId` will be ignored.
                     * @param DBInstanceId Instance ID. Either this parameter or `ReadOnlyGroupId` must be passed in. If both parameters are passed in, `ReadOnlyGroupId` will be ignored.
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取RO group ID. Either this parameter or `DBInstanceId` must be passed in. To query the security groups associated with the RO groups, only pass in `ReadOnlyGroupId`.
                     * @return ReadOnlyGroupId RO group ID. Either this parameter or `DBInstanceId` must be passed in. To query the security groups associated with the RO groups, only pass in `ReadOnlyGroupId`.
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置RO group ID. Either this parameter or `DBInstanceId` must be passed in. To query the security groups associated with the RO groups, only pass in `ReadOnlyGroupId`.
                     * @param ReadOnlyGroupId RO group ID. Either this parameter or `DBInstanceId` must be passed in. To query the security groups associated with the RO groups, only pass in `ReadOnlyGroupId`.
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID. Either this parameter or `ReadOnlyGroupId` must be passed in. If both parameters are passed in, `ReadOnlyGroupId` will be ignored.
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * RO group ID. Either this parameter or `DBInstanceId` must be passed in. To query the security groups associated with the RO groups, only pass in `ReadOnlyGroupId`.
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESECURITYGROUPSREQUEST_H_
