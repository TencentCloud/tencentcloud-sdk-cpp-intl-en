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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEINFOLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEINFOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Filter.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTableInfoList request structure.
                */
                class DescribeTableInfoListRequest : public AbstractModel
                {
                public:
                    DescribeTableInfoListRequest();
                    ~DescribeTableInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Table name
                     * @return Filters Table name
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Table name
                     * @param _filters Table name
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取If it is hive write rpc, if it is other types do not transmit
                     * @return ConnectionType If it is hive write rpc, if it is other types do not transmit
                     * 
                     */
                    std::string GetConnectionType() const;

                    /**
                     * 设置If it is hive write rpc, if it is other types do not transmit
                     * @param _connectionType If it is hive write rpc, if it is other types do not transmit
                     * 
                     */
                    void SetConnectionType(const std::string& _connectionType);

                    /**
                     * 判断参数 ConnectionType 是否已赋值
                     * @return ConnectionType 是否已赋值
                     * 
                     */
                    bool ConnectionTypeHasBeenSet() const;

                    /**
                     * 获取Database source type
                     * @return Catalog Database source type
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置Database source type
                     * @param _catalog Database source type
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                private:

                    /**
                     * Table name
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * If it is hive write rpc, if it is other types do not transmit
                     */
                    std::string m_connectionType;
                    bool m_connectionTypeHasBeenSet;

                    /**
                     * Database source type
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLEINFOLISTREQUEST_H_
