/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MERGETABLESDATAREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MERGETABLESDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/MergeTablesInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * MergeTablesData request structure.
                */
                class MergeTablesDataRequest : public AbstractModel
                {
                public:
                    MergeTablesDataRequest();
                    ~MergeTablesDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tables to be merged
                     * @return SelectedTables Tables to be merged
                     * 
                     */
                    std::vector<MergeTablesInfo> GetSelectedTables() const;

                    /**
                     * 设置Tables to be merged
                     * @param _selectedTables Tables to be merged
                     * 
                     */
                    void SetSelectedTables(const std::vector<MergeTablesInfo>& _selectedTables);

                    /**
                     * 判断参数 SelectedTables 是否已赋值
                     * @return SelectedTables 是否已赋值
                     * 
                     */
                    bool SelectedTablesHasBeenSet() const;

                    /**
                     * 获取Valid values: `true` (only compare), `false` (compare and merge)
                     * @return IsOnlyCompare Valid values: `true` (only compare), `false` (compare and merge)
                     * 
                     */
                    bool GetIsOnlyCompare() const;

                    /**
                     * 设置Valid values: `true` (only compare), `false` (compare and merge)
                     * @param _isOnlyCompare Valid values: `true` (only compare), `false` (compare and merge)
                     * 
                     */
                    void SetIsOnlyCompare(const bool& _isOnlyCompare);

                    /**
                     * 判断参数 IsOnlyCompare 是否已赋值
                     * @return IsOnlyCompare 是否已赋值
                     * 
                     */
                    bool IsOnlyCompareHasBeenSet() const;

                private:

                    /**
                     * Tables to be merged
                     */
                    std::vector<MergeTablesInfo> m_selectedTables;
                    bool m_selectedTablesHasBeenSet;

                    /**
                     * Valid values: `true` (only compare), `false` (compare and merge)
                     */
                    bool m_isOnlyCompare;
                    bool m_isOnlyCompareHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MERGETABLESDATAREQUEST_H_
