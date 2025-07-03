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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_CREATESTORAGEREQUEST_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_CREATESTORAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * CreateStorage request structure.
                */
                class CreateStorageRequest : public AbstractModel
                {
                public:
                    CreateStorageRequest();
                    ~CreateStorageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     * @return SubAppId <b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     * @param _subAppId <b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Storage region, which must be a region supported by the system. All storage regions and the regions where storage buckets have already been enabled can be queried using the [DescribeStorageRegions](https://www.tencentcloud.com/document/product/266/46542) API.
                     * @return StorageRegion Storage region, which must be a region supported by the system. All storage regions and the regions where storage buckets have already been enabled can be queried using the [DescribeStorageRegions](https://www.tencentcloud.com/document/product/266/46542) API.
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置Storage region, which must be a region supported by the system. All storage regions and the regions where storage buckets have already been enabled can be queried using the [DescribeStorageRegions](https://www.tencentcloud.com/document/product/266/46542) API.
                     * @param _storageRegion Storage region, which must be a region supported by the system. All storage regions and the regions where storage buckets have already been enabled can be queried using the [DescribeStorageRegions](https://www.tencentcloud.com/document/product/266/46542) API.
                     * 
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取The name of the storage.
<li>Only lowercase English letters, numbers, hyphens "-", and their combinations are supported.</li>
<li>The storage name cannot start or end with a "-".</li>
<li>The maximum length of the storage name is 64 characters.</li>
                     * @return StorageName The name of the storage.
<li>Only lowercase English letters, numbers, hyphens "-", and their combinations are supported.</li>
<li>The storage name cannot start or end with a "-".</li>
<li>The maximum length of the storage name is 64 characters.</li>
                     * 
                     */
                    std::string GetStorageName() const;

                    /**
                     * 设置The name of the storage.
<li>Only lowercase English letters, numbers, hyphens "-", and their combinations are supported.</li>
<li>The storage name cannot start or end with a "-".</li>
<li>The maximum length of the storage name is 64 characters.</li>
                     * @param _storageName The name of the storage.
<li>Only lowercase English letters, numbers, hyphens "-", and their combinations are supported.</li>
<li>The storage name cannot start or end with a "-".</li>
<li>The maximum length of the storage name is 64 characters.</li>
                     * 
                     */
                    void SetStorageName(const std::string& _storageName);

                    /**
                     * 判断参数 StorageName 是否已赋值
                     * @return StorageName 是否已赋值
                     * 
                     */
                    bool StorageNameHasBeenSet() const;

                private:

                    /**
                     * <b>The ID of [VOD Professional Application](http://tencentcloud.com/document/product/266/67977).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Storage region, which must be a region supported by the system. All storage regions and the regions where storage buckets have already been enabled can be queried using the [DescribeStorageRegions](https://www.tencentcloud.com/document/product/266/46542) API.
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * The name of the storage.
<li>Only lowercase English letters, numbers, hyphens "-", and their combinations are supported.</li>
<li>The storage name cannot start or end with a "-".</li>
<li>The maximum length of the storage name is 64 characters.</li>
                     */
                    std::string m_storageName;
                    bool m_storageNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_CREATESTORAGEREQUEST_H_
