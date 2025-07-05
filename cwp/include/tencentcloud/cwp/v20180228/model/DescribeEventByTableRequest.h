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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEVENTBYTABLEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEVENTBYTABLEREQUEST_H_

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
                * DescribeEventByTable request structure.
                */
                class DescribeEventByTableRequest : public AbstractModel
                {
                public:
                    DescribeEventByTableRequest();
                    ~DescribeEventByTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Event table name
                     * @return TableName Event table name
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置Event table name
                     * @param _tableName Event table name
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取Event table ID
                     * @return Ids Event table ID
                     * 
                     */
                    std::vector<int64_t> GetIds() const;

                    /**
                     * 设置Event table ID
                     * @param _ids Event table ID
                     * 
                     */
                    void SetIds(const std::vector<int64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * Event table name
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * Event table ID
                     */
                    std::vector<int64_t> m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEVENTBYTABLEREQUEST_H_
