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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_ROLLBACKTABLESRESPONSE_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_ROLLBACKTABLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/TableRollbackResultNew.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * RollbackTables response structure.
                */
                class RollbackTablesResponse : public AbstractModel
                {
                public:
                    RollbackTablesResponse();
                    ~RollbackTablesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of table rollback task results
                     * @return TotalCount Number of table rollback task results
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
                     * 获取Table rollback task result list
                     * @return TableResults Table rollback task result list
                     * 
                     */
                    std::vector<TableRollbackResultNew> GetTableResults() const;

                    /**
                     * 判断参数 TableResults 是否已赋值
                     * @return TableResults 是否已赋值
                     * 
                     */
                    bool TableResultsHasBeenSet() const;

                private:

                    /**
                     * Number of table rollback task results
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Table rollback task result list
                     */
                    std::vector<TableRollbackResultNew> m_tableResults;
                    bool m_tableResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_ROLLBACKTABLESRESPONSE_H_
