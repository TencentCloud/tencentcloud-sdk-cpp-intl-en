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
                     * 获取Page number. Valid values: 0 (page 1) and 1 (page 2).
                     * @return Offset Page number. Valid values: 0 (page 1) and 1 (page 2).
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page number. Valid values: 0 (page 1) and 1 (page 2).
                     * @param _offset Page number. Valid values: 0 (page 1) and 1 (page 2).
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
                     * 获取Number of items returned per page. Minimum value: 1. Maximum value: 100.
                     * @return Limit Number of items returned per page. Minimum value: 1. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of items returned per page. Minimum value: 1. Maximum value: 100.
                     * @param _limit Number of items returned per page. Minimum value: 1. Maximum value: 100.
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
                     * 获取Table name, supporting fuzzy matching.
                     * @return Table Table name, supporting fuzzy matching.
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置Table name, supporting fuzzy matching.
                     * @param _table Table name, supporting fuzzy matching.
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
                     * 获取Sorting field. It has a default value.
                     * @return OrderField Sorting field. It has a default value.
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置Sorting field. It has a default value.
                     * @param _orderField Sorting field. It has a default value.
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
                     * 获取asc: ascending; desc: descending (default).
                     * @return OrderType asc: ascending; desc: descending (default).
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置asc: ascending; desc: descending (default).
                     * @param _orderType asc: ascending; desc: descending (default).
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
                     * Page number. Valid values: 0 (page 1) and 1 (page 2).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of items returned per page. Minimum value: 1. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Table name, supporting fuzzy matching.
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * Sorting field. It has a default value.
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * asc: ascending; desc: descending (default).
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHBASETABLEOVERVIEWREQUEST_H_
