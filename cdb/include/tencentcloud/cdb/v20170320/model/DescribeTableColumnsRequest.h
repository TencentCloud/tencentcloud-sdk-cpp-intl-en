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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETABLECOLUMNSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETABLECOLUMNSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeTableColumns request structure.
                */
                class DescribeTableColumnsRequest : public AbstractModel
                {
                public:
                    DescribeTableColumnsRequest();
                    ~DescribeTableColumnsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the [Query Instance List](https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1) API. Its value is the InstanceId field in the output parameter.
                     * @return InstanceId Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the [Query Instance List](https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1) API. Its value is the InstanceId field in the output parameter.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the [Query Instance List](https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1) API. Its value is the InstanceId field in the output parameter.
                     * @param _instanceId Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the [Query Instance List](https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1) API. Its value is the InstanceId field in the output parameter.
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
                     * 获取Database name. Obtain through the [Query Database](https://www.tencentcloud.com/document/api/236/17493?from_cn_redirect=1) API.
                     * @return Database Database name. Obtain through the [Query Database](https://www.tencentcloud.com/document/api/236/17493?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置Database name. Obtain through the [Query Database](https://www.tencentcloud.com/document/api/236/17493?from_cn_redirect=1) API.
                     * @param _database Database name. Obtain through the [Query Database](https://www.tencentcloud.com/document/api/236/17493?from_cn_redirect=1) API.
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取Name of the table in the database.
                     * @return Table Name of the table in the database.
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置Name of the table in the database.
                     * @param _table Name of the table in the database.
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                private:

                    /**
                     * Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the [Query Instance List](https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1) API. Its value is the InstanceId field in the output parameter.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Database name. Obtain through the [Query Database](https://www.tencentcloud.com/document/api/236/17493?from_cn_redirect=1) API.
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Name of the table in the database.
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETABLECOLUMNSREQUEST_H_
