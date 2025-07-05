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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Filter.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeDisks request structure.
                */
                class DescribeDisksRequest : public AbstractModel
                {
                public:
                    DescribeDisksRequest();
                    ~DescribeDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of cloud disk IDs.
                     * @return DiskIds List of cloud disk IDs.
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置List of cloud disk IDs.
                     * @param _diskIds List of cloud disk IDs.
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取Filter list
disk-id
Filter by **cloud disk ID**.
Type: String
Required: No
instance-id
Filter by **instance ID**.
Type: String
Required: No
disk-name
Filter by **cloud disk name**.
Type: String
Required: No
zone
Filter by **availability zone**.
Type: String
Required: No
disk-usage
Filter by **cloud disk type**.
Type: String
Required: No
Values: `SYSTEM_DISK` and `DATA_DISK`
disk-state
Filter by **cloud disk status**.
Type: String
Required: No
Values: See `DiskState` in [Disk](https://intl.cloud.tencent.com/document/api/1207/47576?from_cn_redirect=1#Disk)
Each request can contain up to 10 `Filters` and 100 `Filter.Values`. `DiskIds` and `Filters` cannot be specified at the same time.
                     * @return Filters Filter list
disk-id
Filter by **cloud disk ID**.
Type: String
Required: No
instance-id
Filter by **instance ID**.
Type: String
Required: No
disk-name
Filter by **cloud disk name**.
Type: String
Required: No
zone
Filter by **availability zone**.
Type: String
Required: No
disk-usage
Filter by **cloud disk type**.
Type: String
Required: No
Values: `SYSTEM_DISK` and `DATA_DISK`
disk-state
Filter by **cloud disk status**.
Type: String
Required: No
Values: See `DiskState` in [Disk](https://intl.cloud.tencent.com/document/api/1207/47576?from_cn_redirect=1#Disk)
Each request can contain up to 10 `Filters` and 100 `Filter.Values`. `DiskIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter list
disk-id
Filter by **cloud disk ID**.
Type: String
Required: No
instance-id
Filter by **instance ID**.
Type: String
Required: No
disk-name
Filter by **cloud disk name**.
Type: String
Required: No
zone
Filter by **availability zone**.
Type: String
Required: No
disk-usage
Filter by **cloud disk type**.
Type: String
Required: No
Values: `SYSTEM_DISK` and `DATA_DISK`
disk-state
Filter by **cloud disk status**.
Type: String
Required: No
Values: See `DiskState` in [Disk](https://intl.cloud.tencent.com/document/api/1207/47576?from_cn_redirect=1#Disk)
Each request can contain up to 10 `Filters` and 100 `Filter.Values`. `DiskIds` and `Filters` cannot be specified at the same time.
                     * @param _filters Filter list
disk-id
Filter by **cloud disk ID**.
Type: String
Required: No
instance-id
Filter by **instance ID**.
Type: String
Required: No
disk-name
Filter by **cloud disk name**.
Type: String
Required: No
zone
Filter by **availability zone**.
Type: String
Required: No
disk-usage
Filter by **cloud disk type**.
Type: String
Required: No
Values: `SYSTEM_DISK` and `DATA_DISK`
disk-state
Filter by **cloud disk status**.
Type: String
Required: No
Values: See `DiskState` in [Disk](https://intl.cloud.tencent.com/document/api/1207/47576?from_cn_redirect=1#Disk)
Each request can contain up to 10 `Filters` and 100 `Filter.Values`. `DiskIds` and `Filters` cannot be specified at the same time.
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
                     * 获取Number of returned results. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100.
                     * @param _limit Number of returned results. Default value: 20. Maximum value: 100.
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
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取The field by which the cloud disks are sorted. Valid values: "CREATED_TIME" (creation time), "EXPIRED_TIME" (expiration time), "DISK_SIZE" (size of cloud disks). Default value: "CREATED_TIME".
                     * @return OrderField The field by which the cloud disks are sorted. Valid values: "CREATED_TIME" (creation time), "EXPIRED_TIME" (expiration time), "DISK_SIZE" (size of cloud disks). Default value: "CREATED_TIME".
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置The field by which the cloud disks are sorted. Valid values: "CREATED_TIME" (creation time), "EXPIRED_TIME" (expiration time), "DISK_SIZE" (size of cloud disks). Default value: "CREATED_TIME".
                     * @param _orderField The field by which the cloud disks are sorted. Valid values: "CREATED_TIME" (creation time), "EXPIRED_TIME" (expiration time), "DISK_SIZE" (size of cloud disks). Default value: "CREATED_TIME".
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
                     * 获取Sorting order of the output cloud disks. Valid values: "ASC" (ascending order), "DESC" (descending order). Default value: "DESC".
                     * @return Order Sorting order of the output cloud disks. Valid values: "ASC" (ascending order), "DESC" (descending order). Default value: "DESC".
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order of the output cloud disks. Valid values: "ASC" (ascending order), "DESC" (descending order). Default value: "DESC".
                     * @param _order Sorting order of the output cloud disks. Valid values: "ASC" (ascending order), "DESC" (descending order). Default value: "DESC".
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * List of cloud disk IDs.
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * Filter list
disk-id
Filter by **cloud disk ID**.
Type: String
Required: No
instance-id
Filter by **instance ID**.
Type: String
Required: No
disk-name
Filter by **cloud disk name**.
Type: String
Required: No
zone
Filter by **availability zone**.
Type: String
Required: No
disk-usage
Filter by **cloud disk type**.
Type: String
Required: No
Values: `SYSTEM_DISK` and `DATA_DISK`
disk-state
Filter by **cloud disk status**.
Type: String
Required: No
Values: See `DiskState` in [Disk](https://intl.cloud.tencent.com/document/api/1207/47576?from_cn_redirect=1#Disk)
Each request can contain up to 10 `Filters` and 100 `Filter.Values`. `DiskIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The field by which the cloud disks are sorted. Valid values: "CREATED_TIME" (creation time), "EXPIRED_TIME" (expiration time), "DISK_SIZE" (size of cloud disks). Default value: "CREATED_TIME".
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * Sorting order of the output cloud disks. Valid values: "ASC" (ascending order), "DESC" (descending order). Default value: "DESC".
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKSREQUEST_H_
