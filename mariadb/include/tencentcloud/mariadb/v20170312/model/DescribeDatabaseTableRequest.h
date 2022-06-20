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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDATABASETABLEREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDATABASETABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDatabaseTable request structure.
                */
                class DescribeDatabaseTableRequest : public AbstractModel
                {
                public:
                    DescribeDatabaseTableRequest();
                    ~DescribeDatabaseTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of `dcdbt-ow7t8lmc`.
                     * @return InstanceId Instance ID in the format of `dcdbt-ow7t8lmc`.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of `dcdbt-ow7t8lmc`.
                     * @param InstanceId Instance ID in the format of `dcdbt-ow7t8lmc`.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Database name, which can be obtained through the `DescribeDatabases` API.
                     * @return DbName Database name, which can be obtained through the `DescribeDatabases` API.
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database name, which can be obtained through the `DescribeDatabases` API.
                     * @param DbName Database name, which can be obtained through the `DescribeDatabases` API.
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Table name, which can be obtained through the `DescribeDatabaseObjects` API.
                     * @return Table Table name, which can be obtained through the `DescribeDatabaseObjects` API.
                     */
                    std::string GetTable() const;

                    /**
                     * 设置Table name, which can be obtained through the `DescribeDatabaseObjects` API.
                     * @param Table Table name, which can be obtained through the `DescribeDatabaseObjects` API.
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     */
                    bool TableHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of `dcdbt-ow7t8lmc`.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Database name, which can be obtained through the `DescribeDatabases` API.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Table name, which can be obtained through the `DescribeDatabaseObjects` API.
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDATABASETABLEREQUEST_H_
