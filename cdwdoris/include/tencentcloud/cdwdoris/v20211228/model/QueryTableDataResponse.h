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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_QUERYTABLEDATARESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_QUERYTABLEDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/Rows.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * QueryTableData response structure.
                */
                class QueryTableDataResponse : public AbstractModel
                {
                public:
                    QueryTableDataResponse();
                    ~QueryTableDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total records of query results
                     * @return TotalCount Total records of query results
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Field name array of query results
                     * @return Fields Field name array of query results
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                    /**
                     * 获取Field type array of query results
                     * @return FieldTypes Field type array of query results
                     * 
                     */
                    std::vector<std::string> GetFieldTypes() const;

                    /**
                     * 判断参数 FieldTypes 是否已赋值
                     * @return FieldTypes 是否已赋值
                     * 
                     */
                    bool FieldTypesHasBeenSet() const;

                    /**
                     * 获取Returned data record array. Each element is an array, containing the value of the corresponding field.
                     * @return Rows Returned data record array. Each element is an array, containing the value of the corresponding field.
                     * 
                     */
                    std::vector<Rows> GetRows() const;

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取Error message
                     * @return Message Error message
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Total records of query results
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Field name array of query results
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * Field type array of query results
                     */
                    std::vector<std::string> m_fieldTypes;
                    bool m_fieldTypesHasBeenSet;

                    /**
                     * Returned data record array. Each element is an array, containing the value of the corresponding field.
                     */
                    std::vector<Rows> m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * Error message
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_QUERYTABLEDATARESPONSE_H_
