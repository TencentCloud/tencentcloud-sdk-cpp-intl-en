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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GETINTEGRATIONNODECOLUMNSCHEMAREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GETINTEGRATIONNODECOLUMNSCHEMAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * GetIntegrationNodeColumnSchema request structure.
                */
                class GetIntegrationNodeColumnSchemaRequest : public AbstractModel
                {
                public:
                    GetIntegrationNodeColumnSchemaRequest();
                    ~GetIntegrationNodeColumnSchemaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Field Example (JSON Format)
                     * @return ColumnContent Field Example (JSON Format)
                     * 
                     */
                    std::string GetColumnContent() const;

                    /**
                     * 设置Field Example (JSON Format)
                     * @param _columnContent Field Example (JSON Format)
                     * 
                     */
                    void SetColumnContent(const std::string& _columnContent);

                    /**
                     * 判断参数 ColumnContent 是否已赋值
                     * @return ColumnContent 是否已赋值
                     * 
                     */
                    bool ColumnContentHasBeenSet() const;

                    /**
                     * 获取Data Source Type MYSQL|HIVE|KAFKA|ES|MONGODB|REST_API|SYBASE|TIDB|DORIS|DM|
                     * @return DatasourceType Data Source Type MYSQL|HIVE|KAFKA|ES|MONGODB|REST_API|SYBASE|TIDB|DORIS|DM|
                     * 
                     */
                    std::string GetDatasourceType() const;

                    /**
                     * 设置Data Source Type MYSQL|HIVE|KAFKA|ES|MONGODB|REST_API|SYBASE|TIDB|DORIS|DM|
                     * @param _datasourceType Data Source Type MYSQL|HIVE|KAFKA|ES|MONGODB|REST_API|SYBASE|TIDB|DORIS|DM|
                     * 
                     */
                    void SetDatasourceType(const std::string& _datasourceType);

                    /**
                     * 判断参数 DatasourceType 是否已赋值
                     * @return DatasourceType 是否已赋值
                     * 
                     */
                    bool DatasourceTypeHasBeenSet() const;

                private:

                    /**
                     * Field Example (JSON Format)
                     */
                    std::string m_columnContent;
                    bool m_columnContentHasBeenSet;

                    /**
                     * Data Source Type MYSQL|HIVE|KAFKA|ES|MONGODB|REST_API|SYBASE|TIDB|DORIS|DM|
                     */
                    std::string m_datasourceType;
                    bool m_datasourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GETINTEGRATIONNODECOLUMNSCHEMAREQUEST_H_
