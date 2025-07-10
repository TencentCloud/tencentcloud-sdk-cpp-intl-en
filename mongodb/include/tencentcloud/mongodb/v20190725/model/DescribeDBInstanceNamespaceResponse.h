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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCENAMESPACERESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCENAMESPACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceNamespace response structure.
                */
                class DescribeDBInstanceNamespaceResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceNamespaceResponse();
                    ~DescribeDBInstanceNamespaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of databases of the queried instance. If no database is specified for querying with DbName, a list of databases of only the queried instance is returned instead of the information indicated by Collections.
                     * @return Databases List of databases of the queried instance. If no database is specified for querying with DbName, a list of databases of only the queried instance is returned instead of the information indicated by Collections.
                     * 
                     */
                    std::vector<std::string> GetDatabases() const;

                    /**
                     * 判断参数 Databases 是否已赋值
                     * @return Databases 是否已赋值
                     * 
                     */
                    bool DatabasesHasBeenSet() const;

                    /**
                     * 获取Queried collection information. If DbName is specified, a list of collections of only this database is returned.
                     * @return Collections Queried collection information. If DbName is specified, a list of collections of only this database is returned.
                     * 
                     */
                    std::vector<std::string> GetCollections() const;

                    /**
                     * 判断参数 Collections 是否已赋值
                     * @return Collections 是否已赋值
                     * 
                     */
                    bool CollectionsHasBeenSet() const;

                private:

                    /**
                     * List of databases of the queried instance. If no database is specified for querying with DbName, a list of databases of only the queried instance is returned instead of the information indicated by Collections.
                     */
                    std::vector<std::string> m_databases;
                    bool m_databasesHasBeenSet;

                    /**
                     * Queried collection information. If DbName is specified, a list of collections of only this database is returned.
                     */
                    std::vector<std::string> m_collections;
                    bool m_collectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCENAMESPACERESPONSE_H_
