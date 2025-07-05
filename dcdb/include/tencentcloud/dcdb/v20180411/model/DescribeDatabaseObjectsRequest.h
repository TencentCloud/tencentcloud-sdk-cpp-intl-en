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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDATABASEOBJECTSREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDATABASEOBJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDatabaseObjects request structure.
                */
                class DescribeDatabaseObjectsRequest : public AbstractModel
                {
                public:
                    DescribeDatabaseObjectsRequest();
                    ~DescribeDatabaseObjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of dcdbt-ow7t8lmc.
                     * @return InstanceId Instance ID in the format of dcdbt-ow7t8lmc.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of dcdbt-ow7t8lmc.
                     * @param _instanceId Instance ID in the format of dcdbt-ow7t8lmc.
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
                     * 获取Database name, which can be obtained through the `DescribeDatabases` API.
                     * @return DbName Database name, which can be obtained through the `DescribeDatabases` API.
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database name, which can be obtained through the `DescribeDatabases` API.
                     * @param _dbName Database name, which can be obtained through the `DescribeDatabases` API.
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of dcdbt-ow7t8lmc.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Database name, which can be obtained through the `DescribeDatabases` API.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDATABASEOBJECTSREQUEST_H_
