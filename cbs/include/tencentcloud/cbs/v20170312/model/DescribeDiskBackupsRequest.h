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
                     * 获取Filter criteria. parameters must not be specified simultaneously for DiskBackupIds and Filters. filter conditions:<br><li>disk-backup-id - Array of String - required: no - (filter condition) Filters by backup point id. backup point id format: dbp-11112222.</li><br><li>disk-id - Array of String - required: no - (filter condition) Filters by cloud disk id where the backup point was created. cloud disk id format: disk-srftydert.</li><br><li>disk-usage - Array of String - required: no - (filter condition) Filters by cloud disk type (SYSTEM_disk: represents SYSTEM disk | DATA_disk: represents DATA disk).</li>.
                     * @return Filters Filter criteria. parameters must not be specified simultaneously for DiskBackupIds and Filters. filter conditions:<br><li>disk-backup-id - Array of String - required: no - (filter condition) Filters by backup point id. backup point id format: dbp-11112222.</li><br><li>disk-id - Array of String - required: no - (filter condition) Filters by cloud disk id where the backup point was created. cloud disk id format: disk-srftydert.</li><br><li>disk-usage - Array of String - required: no - (filter condition) Filters by cloud disk type (SYSTEM_disk: represents SYSTEM disk | DATA_disk: represents DATA disk).</li>.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria. parameters must not be specified simultaneously for DiskBackupIds and Filters. filter conditions:<br><li>disk-backup-id - Array of String - required: no - (filter condition) Filters by backup point id. backup point id format: dbp-11112222.</li><br><li>disk-id - Array of String - required: no - (filter condition) Filters by cloud disk id where the backup point was created. cloud disk id format: disk-srftydert.</li><br><li>disk-usage - Array of String - required: no - (filter condition) Filters by cloud disk type (SYSTEM_disk: represents SYSTEM disk | DATA_disk: represents DATA disk).</li>.
                     * @param _filters Filter criteria. parameters must not be specified simultaneously for DiskBackupIds and Filters. filter conditions:<br><li>disk-backup-id - Array of String - required: no - (filter condition) Filters by backup point id. backup point id format: dbp-11112222.</li><br><li>disk-id - Array of String - required: no - (filter condition) Filters by cloud disk id where the backup point was created. cloud disk id format: disk-srftydert.</li><br><li>disk-usage - Array of String - required: no - (filter condition) Filters by cloud disk type (SYSTEM_disk: represents SYSTEM disk | DATA_disk: represents DATA disk).</li>.
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
                     * 获取Specifies the sorting order of the CBS backup point list. default: ASC. valid values: <br><li>ASC: ascending order</li><br><li>DESC: descending order.</li>.
                     * @return Order Specifies the sorting order of the CBS backup point list. default: ASC. valid values: <br><li>ASC: ascending order</li><br><li>DESC: descending order.</li>.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Specifies the sorting order of the CBS backup point list. default: ASC. valid values: <br><li>ASC: ascending order</li><br><li>DESC: descending order.</li>.
                     * @param _order Specifies the sorting order of the CBS backup point list. default: ASC. valid values: <br><li>ASC: ascending order</li><br><li>DESC: descending order.</li>.
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
                     * 获取Field on which the list of cloud disk backup points is sorted. valid values: <br><li>CREATE_TIME: sort by creation TIME of the cloud disk backup point</li><br>sort by creation TIME by default.
                     * @return OrderField Field on which the list of cloud disk backup points is sorted. valid values: <br><li>CREATE_TIME: sort by creation TIME of the cloud disk backup point</li><br>sort by creation TIME by default.
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置Field on which the list of cloud disk backup points is sorted. valid values: <br><li>CREATE_TIME: sort by creation TIME of the cloud disk backup point</li><br>sort by creation TIME by default.
                     * @param _orderField Field on which the list of cloud disk backup points is sorted. valid values: <br><li>CREATE_TIME: sort by creation TIME of the cloud disk backup point</li><br>sort by creation TIME by default.
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
                     * Filter criteria. parameters must not be specified simultaneously for DiskBackupIds and Filters. filter conditions:<br><li>disk-backup-id - Array of String - required: no - (filter condition) Filters by backup point id. backup point id format: dbp-11112222.</li><br><li>disk-id - Array of String - required: no - (filter condition) Filters by cloud disk id where the backup point was created. cloud disk id format: disk-srftydert.</li><br><li>disk-usage - Array of String - required: no - (filter condition) Filters by cloud disk type (SYSTEM_disk: represents SYSTEM disk | DATA_disk: represents DATA disk).</li>.
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
                     * Specifies the sorting order of the CBS backup point list. default: ASC. valid values: <br><li>ASC: ascending order</li><br><li>DESC: descending order.</li>.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Field on which the list of cloud disk backup points is sorted. valid values: <br><li>CREATE_TIME: sort by creation TIME of the cloud disk backup point</li><br>sort by creation TIME by default.
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKBACKUPSREQUEST_H_
