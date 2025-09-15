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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHBASETABLEOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHBASETABLEOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/OverviewRow.h>
#include <tencentcloud/emr/v20190103/model/TableSchemaItem.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeHBaseTableOverview response structure.
                */
                class DescribeHBaseTableOverviewResponse : public AbstractModel
                {
                public:
                    DescribeHBaseTableOverviewResponse();
                    ~DescribeHBaseTableOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Overview data array
                     * @return TableMonitorList Overview data array
                     * 
                     */
                    std::vector<OverviewRow> GetTableMonitorList() const;

                    /**
                     * 判断参数 TableMonitorList 是否已赋值
                     * @return TableMonitorList 是否已赋值
                     * 
                     */
                    bool TableMonitorListHasBeenSet() const;

                    /**
                     * 获取Overview data array length
                     * @return TotalCount Overview data array length
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Table schema information
                     * @return SchemaList Table schema information
                     * 
                     */
                    std::vector<TableSchemaItem> GetSchemaList() const;

                    /**
                     * 判断参数 SchemaList 是否已赋值
                     * @return SchemaList 是否已赋值
                     * 
                     */
                    bool SchemaListHasBeenSet() const;

                private:

                    /**
                     * Overview data array
                     */
                    std::vector<OverviewRow> m_tableMonitorList;
                    bool m_tableMonitorListHasBeenSet;

                    /**
                     * Overview data array length
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Table schema information
                     */
                    std::vector<TableSchemaItem> m_schemaList;
                    bool m_schemaListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHBASETABLEOVERVIEWRESPONSE_H_
