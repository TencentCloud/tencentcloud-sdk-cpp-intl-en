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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHBASETABLEOVERVIEWREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHBASETABLEOVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeHBaseTableOverview request structure.
                */
                class DescribeHBaseTableOverviewRequest : public AbstractModel
                {
                public:
                    DescribeHBaseTableOverviewRequest();
                    ~DescribeHBaseTableOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Pagination query number offset, starting from 0.	
                     * @return Offset Pagination query number offset, starting from 0.	
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination query number offset, starting from 0.	
                     * @param _offset Pagination query number offset, starting from 0.	
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Page size for pagination query. The minimum value is 1, and the maximum value is 100.
                     * @return Limit Page size for pagination query. The minimum value is 1, and the maximum value is 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Page size for pagination query. The minimum value is 1, and the maximum value is 100.
                     * @param _limit Page size for pagination query. The minimum value is 1, and the maximum value is 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Table name, supporting fuzzy matching
                     * @return Table Table name, supporting fuzzy matching
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置Table name, supporting fuzzy matching
                     * @param _table Table name, supporting fuzzy matching
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取Field for sorting, with a default value
                     * @return OrderField Field for sorting, with a default value
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置Field for sorting, with a default value
                     * @param _orderField Field for sorting, with a default value
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取asc: Ascending; desc: Descending (default)
                     * @return OrderType asc: Ascending; desc: Descending (default)
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置asc: Ascending; desc: Descending (default)
                     * @param _orderType asc: Ascending; desc: Descending (default)
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Pagination query number offset, starting from 0.	
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Page size for pagination query. The minimum value is 1, and the maximum value is 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Table name, supporting fuzzy matching
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * Field for sorting, with a default value
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * asc: Ascending; desc: Descending (default)
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHBASETABLEOVERVIEWREQUEST_H_
