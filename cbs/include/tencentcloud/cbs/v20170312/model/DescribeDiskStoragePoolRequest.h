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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKSTORAGEPOOLREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKSTORAGEPOOLREQUEST_H_

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
                * DescribeDiskStoragePool request structure.
                */
                class DescribeDiskStoragePoolRequest : public AbstractModel
                {
                public:
                    DescribeDiskStoragePoolRequest();
                    ~DescribeDiskStoragePoolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of returned results, defaults to 20 with a maximum value of 100. For further introduction about `Limit`, see relevant sections in the API [overview](/document/product/362/15633).
                     * @return Limit Number of returned results, defaults to 20 with a maximum value of 100. For further introduction about `Limit`, see relevant sections in the API [overview](/document/product/362/15633).
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results, defaults to 20 with a maximum value of 100. For further introduction about `Limit`, see relevant sections in the API [overview](/document/product/362/15633).
                     * @param _limit Number of returned results, defaults to 20 with a maximum value of 100. For further introduction about `Limit`, see relevant sections in the API [overview](/document/product/362/15633).
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
                     * 获取Specify the exclusive cluster ID list you want to query. This parameter cannot be used with Filters.

                     * @return CdcIds Specify the exclusive cluster ID list you want to query. This parameter cannot be used with Filters.

                     * 
                     */
                    std::vector<std::string> GetCdcIds() const;

                    /**
                     * 设置Specify the exclusive cluster ID list you want to query. This parameter cannot be used with Filters.

                     * @param _cdcIds Specify the exclusive cluster ID list you want to query. This parameter cannot be used with Filters.

                     * 
                     */
                    void SetCdcIds(const std::vector<std::string>& _cdcIds);

                    /**
                     * 判断参数 CdcIds 是否已赋值
                     * @return CdcIds 是否已赋值
                     * 
                     */
                    bool CdcIdsHasBeenSet() const;

                    /**
                     * 获取Filter conditions. `CdcIds` and `Filters` cannot be specified at the same time. <br><li>cdc-id - Array of String - Optional - Filter by the cluster ID. <br><li>zone - Array of String - Optional - Filter by the [availability zone](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#ZoneInfo) where the cluster resides. <br><li>cage-id - Array of String - Optional - Filter by the ID of the cage where the cluster resides. <br><li>disk-type - Array of string - Optional - Filter by the media type of cloud disks (`CLOUD_BASIC`: HDD cloud disk | `CLOUD_PREMIUM`: Premium cloud disk. | `CLOUD_SSD`: SSD cloud disk.)
                     * @return Filters Filter conditions. `CdcIds` and `Filters` cannot be specified at the same time. <br><li>cdc-id - Array of String - Optional - Filter by the cluster ID. <br><li>zone - Array of String - Optional - Filter by the [availability zone](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#ZoneInfo) where the cluster resides. <br><li>cage-id - Array of String - Optional - Filter by the ID of the cage where the cluster resides. <br><li>disk-type - Array of string - Optional - Filter by the media type of cloud disks (`CLOUD_BASIC`: HDD cloud disk | `CLOUD_PREMIUM`: Premium cloud disk. | `CLOUD_SSD`: SSD cloud disk.)
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter conditions. `CdcIds` and `Filters` cannot be specified at the same time. <br><li>cdc-id - Array of String - Optional - Filter by the cluster ID. <br><li>zone - Array of String - Optional - Filter by the [availability zone](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#ZoneInfo) where the cluster resides. <br><li>cage-id - Array of String - Optional - Filter by the ID of the cage where the cluster resides. <br><li>disk-type - Array of string - Optional - Filter by the media type of cloud disks (`CLOUD_BASIC`: HDD cloud disk | `CLOUD_PREMIUM`: Premium cloud disk. | `CLOUD_SSD`: SSD cloud disk.)
                     * @param _filters Filter conditions. `CdcIds` and `Filters` cannot be specified at the same time. <br><li>cdc-id - Array of String - Optional - Filter by the cluster ID. <br><li>zone - Array of String - Optional - Filter by the [availability zone](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#ZoneInfo) where the cluster resides. <br><li>cage-id - Array of String - Optional - Filter by the ID of the cage where the cluster resides. <br><li>disk-type - Array of string - Optional - Filter by the media type of cloud disks (`CLOUD_BASIC`: HDD cloud disk | `CLOUD_PREMIUM`: Premium cloud disk. | `CLOUD_SSD`: SSD cloud disk.)
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
                     * 获取Offset, defaults to 0. For further introduction about `Offset`, see the relevant sections in the API [overview](/document/product/362/15633).
                     * @return Offset Offset, defaults to 0. For further introduction about `Offset`, see the relevant sections in the API [overview](/document/product/362/15633).
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, defaults to 0. For further introduction about `Offset`, see the relevant sections in the API [overview](/document/product/362/15633).
                     * @param _offset Offset, defaults to 0. For further introduction about `Offset`, see the relevant sections in the API [overview](/document/product/362/15633).
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Number of returned results, defaults to 20 with a maximum value of 100. For further introduction about `Limit`, see relevant sections in the API [overview](/document/product/362/15633).
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Specify the exclusive cluster ID list you want to query. This parameter cannot be used with Filters.

                     */
                    std::vector<std::string> m_cdcIds;
                    bool m_cdcIdsHasBeenSet;

                    /**
                     * Filter conditions. `CdcIds` and `Filters` cannot be specified at the same time. <br><li>cdc-id - Array of String - Optional - Filter by the cluster ID. <br><li>zone - Array of String - Optional - Filter by the [availability zone](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#ZoneInfo) where the cluster resides. <br><li>cage-id - Array of String - Optional - Filter by the ID of the cage where the cluster resides. <br><li>disk-type - Array of string - Optional - Filter by the media type of cloud disks (`CLOUD_BASIC`: HDD cloud disk | `CLOUD_PREMIUM`: Premium cloud disk. | `CLOUD_SSD`: SSD cloud disk.)
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset, defaults to 0. For further introduction about `Offset`, see the relevant sections in the API [overview](/document/product/362/15633).
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKSTORAGEPOOLREQUEST_H_
