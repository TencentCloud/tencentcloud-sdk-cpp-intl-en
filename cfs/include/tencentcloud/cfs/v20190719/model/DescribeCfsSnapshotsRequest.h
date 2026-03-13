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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSSNAPSHOTSREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSSNAPSHOTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/Filter.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeCfsSnapshots request structure.
                */
                class DescribeCfsSnapshotsRequest : public AbstractModel
                {
                public:
                    DescribeCfsSnapshotsRequest();
                    ~DescribeCfsSnapshotsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File system ID, which can be obtained by querying the file system through the [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1) api.
                     * @return FileSystemId File system ID, which can be obtained by querying the file system through the [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system ID, which can be obtained by querying the file system through the [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1) api.
                     * @param _fileSystemId File system ID, which can be obtained by querying the file system through the [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1) api.
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取Snapshot ID.
                     * @return SnapshotId Snapshot ID.
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置Snapshot ID.
                     * @param _snapshotId Snapshot ID.
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取Paging start position, defaults to 0.
                     * @return Offset Paging start position, defaults to 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Paging start position, defaults to 0.
                     * @param _offset Paging start position, defaults to 0.
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
                     * 获取Page length. default value 20.
                     * @return Limit Page length. default value 20.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Page length. default value 20.
                     * @param _limit Page length. default value 20.
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
                     * 获取Filter criteria
SnapshotId - Array of String - required: no - (filter condition) filter by snapshot ID.
<br>SnapshotName - Array of String - required: no - (filter condition) filter by snapshot name.
<br>FileSystemId - Array of String - required: no - (filter condition) filter by file system ID.
<br>FsName - Array of String - required: no - (filtering conditions) filters file system names.
<br>Status - Array of String - required: no - (filter criteria) filter by snapshot Status. Status classification: creating: under creation | available: running | deleting: deleting | rollbacking_new: being created for new file system | create-failed: creation failed.
<br>tag-key - Array of String - required: no - (filter condition) filter by tag key.
<br>tag:tag-key - Array of String - required: no - (filter condition) filter by tag key-value pair. replace tag-key with a specific tag key.
                     * @return Filters Filter criteria
SnapshotId - Array of String - required: no - (filter condition) filter by snapshot ID.
<br>SnapshotName - Array of String - required: no - (filter condition) filter by snapshot name.
<br>FileSystemId - Array of String - required: no - (filter condition) filter by file system ID.
<br>FsName - Array of String - required: no - (filtering conditions) filters file system names.
<br>Status - Array of String - required: no - (filter criteria) filter by snapshot Status. Status classification: creating: under creation | available: running | deleting: deleting | rollbacking_new: being created for new file system | create-failed: creation failed.
<br>tag-key - Array of String - required: no - (filter condition) filter by tag key.
<br>tag:tag-key - Array of String - required: no - (filter condition) filter by tag key-value pair. replace tag-key with a specific tag key.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria
SnapshotId - Array of String - required: no - (filter condition) filter by snapshot ID.
<br>SnapshotName - Array of String - required: no - (filter condition) filter by snapshot name.
<br>FileSystemId - Array of String - required: no - (filter condition) filter by file system ID.
<br>FsName - Array of String - required: no - (filtering conditions) filters file system names.
<br>Status - Array of String - required: no - (filter criteria) filter by snapshot Status. Status classification: creating: under creation | available: running | deleting: deleting | rollbacking_new: being created for new file system | create-failed: creation failed.
<br>tag-key - Array of String - required: no - (filter condition) filter by tag key.
<br>tag:tag-key - Array of String - required: no - (filter condition) filter by tag key-value pair. replace tag-key with a specific tag key.
                     * @param _filters Filter criteria
SnapshotId - Array of String - required: no - (filter condition) filter by snapshot ID.
<br>SnapshotName - Array of String - required: no - (filter condition) filter by snapshot name.
<br>FileSystemId - Array of String - required: no - (filter condition) filter by file system ID.
<br>FsName - Array of String - required: no - (filtering conditions) filters file system names.
<br>Status - Array of String - required: no - (filter criteria) filter by snapshot Status. Status classification: creating: under creation | available: running | deleting: deleting | rollbacking_new: being created for new file system | create-failed: creation failed.
<br>tag-key - Array of String - required: no - (filter condition) filter by tag key.
<br>tag:tag-key - Array of String - required: no - (filter condition) filter by tag key-value pair. replace tag-key with a specific tag key.
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
                     * 获取Sort by creation time to obtain value.
                     * @return OrderField Sort by creation time to obtain value.
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置Sort by creation time to obtain value.
                     * @param _orderField Sort by creation time to obtain value.
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
                     * 获取Sorting order; ascending or descending order.
                     * @return Order Sorting order; ascending or descending order.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order; ascending or descending order.
                     * @param _order Sorting order; ascending or descending order.
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
                     * File system ID, which can be obtained by querying the file system through the [DescribeCfsFileSystems](https://www.tencentcloud.com/document/product/582/38170?from_cn_redirect=1) api.
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * Snapshot ID.
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * Paging start position, defaults to 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Page length. default value 20.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria
SnapshotId - Array of String - required: no - (filter condition) filter by snapshot ID.
<br>SnapshotName - Array of String - required: no - (filter condition) filter by snapshot name.
<br>FileSystemId - Array of String - required: no - (filter condition) filter by file system ID.
<br>FsName - Array of String - required: no - (filtering conditions) filters file system names.
<br>Status - Array of String - required: no - (filter criteria) filter by snapshot Status. Status classification: creating: under creation | available: running | deleting: deleting | rollbacking_new: being created for new file system | create-failed: creation failed.
<br>tag-key - Array of String - required: no - (filter condition) filter by tag key.
<br>tag:tag-key - Array of String - required: no - (filter condition) filter by tag key-value pair. replace tag-key with a specific tag key.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sort by creation time to obtain value.
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * Sorting order; ascending or descending order.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSSNAPSHOTSREQUEST_H_
