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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPSUMMARIESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPSUMMARIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeBackupSummaries request structure.
                */
                class DescribeBackupSummariesRequest : public AbstractModel
                {
                public:
                    DescribeBackupSummariesRequest();
                    ~DescribeBackupSummariesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TencentDB product type to be queried. Currently, only `mysql` is supported.
                     * @return Product TencentDB product type to be queried. Currently, only `mysql` is supported.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置TencentDB product type to be queried. Currently, only `mysql` is supported.
                     * @param _product TencentDB product type to be queried. Currently, only `mysql` is supported.
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Paginated query offset. Default value: `0`.
                     * @return Offset Paginated query offset. Default value: `0`.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Paginated query offset. Default value: `0`.
                     * @param _offset Paginated query offset. Default value: `0`.
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
                     * 获取Maximum entries returned per page, which ranges from 1 to 100. Default value: `20`.
                     * @return Limit Maximum entries returned per page, which ranges from 1 to 100. Default value: `20`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum entries returned per page, which ranges from 1 to 100. Default value: `20`.
                     * @param _limit Maximum entries returned per page, which ranges from 1 to 100. Default value: `20`.
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
                     * 获取Sorting criterion. Valid values: `BackupVolume` (backup capacity), `DataBackupVolume` (data backup capacity), `BinlogBackupVolume` (log backup capacity), `AutoBackupVolume` (automatic backup capacity), `ManualBackupVolume` (manual backup capacity). Default value: `BackupVolume`.
                     * @return OrderBy Sorting criterion. Valid values: `BackupVolume` (backup capacity), `DataBackupVolume` (data backup capacity), `BinlogBackupVolume` (log backup capacity), `AutoBackupVolume` (automatic backup capacity), `ManualBackupVolume` (manual backup capacity). Default value: `BackupVolume`.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting criterion. Valid values: `BackupVolume` (backup capacity), `DataBackupVolume` (data backup capacity), `BinlogBackupVolume` (log backup capacity), `AutoBackupVolume` (automatic backup capacity), `ManualBackupVolume` (manual backup capacity). Default value: `BackupVolume`.
                     * @param _orderBy Sorting criterion. Valid values: `BackupVolume` (backup capacity), `DataBackupVolume` (data backup capacity), `BinlogBackupVolume` (log backup capacity), `AutoBackupVolume` (automatic backup capacity), `ManualBackupVolume` (manual backup capacity). Default value: `BackupVolume`.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: `ASC` (ascending), `DESC` (descending). Default value: `ASC`.
                     * @return OrderDirection Sorting order. Valid values: `ASC` (ascending), `DESC` (descending). Default value: `ASC`.
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置Sorting order. Valid values: `ASC` (ascending), `DESC` (descending). Default value: `ASC`.
                     * @param _orderDirection Sorting order. Valid values: `ASC` (ascending), `DESC` (descending). Default value: `ASC`.
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                private:

                    /**
                     * TencentDB product type to be queried. Currently, only `mysql` is supported.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Paginated query offset. Default value: `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum entries returned per page, which ranges from 1 to 100. Default value: `20`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting criterion. Valid values: `BackupVolume` (backup capacity), `DataBackupVolume` (data backup capacity), `BinlogBackupVolume` (log backup capacity), `AutoBackupVolume` (automatic backup capacity), `ManualBackupVolume` (manual backup capacity). Default value: `BackupVolume`.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting order. Valid values: `ASC` (ascending), `DESC` (descending). Default value: `ASC`.
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPSUMMARIESREQUEST_H_
