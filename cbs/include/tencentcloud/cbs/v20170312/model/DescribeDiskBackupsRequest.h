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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKBACKUPSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKBACKUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDiskBackups request structure.
                */
                class DescribeDiskBackupsRequest : public AbstractModel
                {
                public:
                    DescribeDiskBackupsRequest();
                    ~DescribeDiskBackupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IDs of the backup points to be queried. `DiskBackupIds` and `Filters` cannot be specified at the same time.
                     * @return DiskBackupIds List of IDs of the backup points to be queried. `DiskBackupIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    std::vector<std::string> GetDiskBackupIds() const;

                    /**
                     * 设置List of IDs of the backup points to be queried. `DiskBackupIds` and `Filters` cannot be specified at the same time.
                     * @param _diskBackupIds List of IDs of the backup points to be queried. `DiskBackupIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    void SetDiskBackupIds(const std::vector<std::string>& _diskBackupIds);

                    /**
                     * 判断参数 DiskBackupIds 是否已赋值
                     * @return DiskBackupIds 是否已赋值
                     * 
                     */
                    bool DiskBackupIdsHasBeenSet() const;

                    /**
                     * 获取Filter. `DiskBackupIds` and `Filters` cannot be specified at the same time. Valid values: <br><li>disk-backup-id - Array of String - Required: No - (Filter) Filter by backup point ID in the format of `dbp-11112222`.
<br><li>disk-id - Array of String - Required: No - (Filter) Filter by ID of the cloud disk for which backup points are created.
<br><li>disk-usage - Array of String - Required: No - (Filter) Filter by type of the cloud disk for which backup points are created. (SYSTEM_DISK: System disk | DATA_DISK: Data disk)
                     * @return Filters Filter. `DiskBackupIds` and `Filters` cannot be specified at the same time. Valid values: <br><li>disk-backup-id - Array of String - Required: No - (Filter) Filter by backup point ID in the format of `dbp-11112222`.
<br><li>disk-id - Array of String - Required: No - (Filter) Filter by ID of the cloud disk for which backup points are created.
<br><li>disk-usage - Array of String - Required: No - (Filter) Filter by type of the cloud disk for which backup points are created. (SYSTEM_DISK: System disk | DATA_DISK: Data disk)
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter. `DiskBackupIds` and `Filters` cannot be specified at the same time. Valid values: <br><li>disk-backup-id - Array of String - Required: No - (Filter) Filter by backup point ID in the format of `dbp-11112222`.
<br><li>disk-id - Array of String - Required: No - (Filter) Filter by ID of the cloud disk for which backup points are created.
<br><li>disk-usage - Array of String - Required: No - (Filter) Filter by type of the cloud disk for which backup points are created. (SYSTEM_DISK: System disk | DATA_DISK: Data disk)
                     * @param _filters Filter. `DiskBackupIds` and `Filters` cannot be specified at the same time. Valid values: <br><li>disk-backup-id - Array of String - Required: No - (Filter) Filter by backup point ID in the format of `dbp-11112222`.
<br><li>disk-id - Array of String - Required: No - (Filter) Filter by ID of the cloud disk for which backup points are created.
<br><li>disk-usage - Array of String - Required: No - (Filter) Filter by type of the cloud disk for which backup points are created. (SYSTEM_DISK: System disk | DATA_DISK: Data disk)
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
                     * 获取Offset. Default value: 0. For more information on `Offset`, see the relevant section of the API [Overview](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     * @return Offset Offset. Default value: 0. For more information on `Offset`, see the relevant section of the API [Overview](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0. For more information on `Offset`, see the relevant section of the API [Overview](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     * @param _offset Offset. Default value: 0. For more information on `Offset`, see the relevant section of the API [Overview](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section of the API [Overview](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section of the API [Overview](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section of the API [Overview](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     * @param _limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section of the API [Overview](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Sorting order of cloud disk backup points. Valid values:<br><li>ASC: Ascending<br><li>DESC: Descending
                     * @return Order Sorting order of cloud disk backup points. Valid values:<br><li>ASC: Ascending<br><li>DESC: Descending
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order of cloud disk backup points. Valid values:<br><li>ASC: Ascending<br><li>DESC: Descending
                     * @param _order Sorting order of cloud disk backup points. Valid values:<br><li>ASC: Ascending<br><li>DESC: Descending
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取The field by which cloud disk backup points are sorted. Valid values:<br><li>CREATE_TIME: Sort by creation time<br>Backup points are sorted by creation time by default.
                     * @return OrderField The field by which cloud disk backup points are sorted. Valid values:<br><li>CREATE_TIME: Sort by creation time<br>Backup points are sorted by creation time by default.
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置The field by which cloud disk backup points are sorted. Valid values:<br><li>CREATE_TIME: Sort by creation time<br>Backup points are sorted by creation time by default.
                     * @param _orderField The field by which cloud disk backup points are sorted. Valid values:<br><li>CREATE_TIME: Sort by creation time<br>Backup points are sorted by creation time by default.
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                private:

                    /**
                     * List of IDs of the backup points to be queried. `DiskBackupIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> m_diskBackupIds;
                    bool m_diskBackupIdsHasBeenSet;

                    /**
                     * Filter. `DiskBackupIds` and `Filters` cannot be specified at the same time. Valid values: <br><li>disk-backup-id - Array of String - Required: No - (Filter) Filter by backup point ID in the format of `dbp-11112222`.
<br><li>disk-id - Array of String - Required: No - (Filter) Filter by ID of the cloud disk for which backup points are created.
<br><li>disk-usage - Array of String - Required: No - (Filter) Filter by type of the cloud disk for which backup points are created. (SYSTEM_DISK: System disk | DATA_DISK: Data disk)
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0. For more information on `Offset`, see the relevant section of the API [Overview](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section of the API [Overview](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting order of cloud disk backup points. Valid values:<br><li>ASC: Ascending<br><li>DESC: Descending
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * The field by which cloud disk backup points are sorted. Valid values:<br><li>CREATE_TIME: Sort by creation time<br>Backup points are sorted by creation time by default.
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKBACKUPSREQUEST_H_
