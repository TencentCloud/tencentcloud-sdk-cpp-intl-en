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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_STORAGEINFO_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_STORAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Storage information for the professional application.
                */
                class StorageInfo : public AbstractModel
                {
                public:
                    StorageInfo();
                    ~StorageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of bucket.
                     * @return BucketId The ID of bucket.
                     * 
                     */
                    std::string GetBucketId() const;

                    /**
                     * 设置The ID of bucket.
                     * @param _bucketId The ID of bucket.
                     * 
                     */
                    void SetBucketId(const std::string& _bucketId);

                    /**
                     * 判断参数 BucketId 是否已赋值
                     * @return BucketId 是否已赋值
                     * 
                     */
                    bool BucketIdHasBeenSet() const;

                    /**
                     * 获取The name of bucket.
                     * @return StorageName The name of bucket.
                     * 
                     */
                    std::string GetStorageName() const;

                    /**
                     * 设置The name of bucket.
                     * @param _storageName The name of bucket.
                     * 
                     */
                    void SetStorageName(const std::string& _storageName);

                    /**
                     * 判断参数 StorageName 是否已赋值
                     * @return StorageName 是否已赋值
                     * 
                     */
                    bool StorageNameHasBeenSet() const;

                    /**
                     * 获取The region of storage.
                     * @return StorageRegion The region of storage.
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置The region of storage.
                     * @param _storageRegion The region of storage.
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
                     * 获取The status of the internet access domain name is stored. Valid values: <li>ONLINE: Active;</li> <li>DEPLOYING: In deployment.</li>
                     * @return InternetAccessDomainStatus The status of the internet access domain name is stored. Valid values: <li>ONLINE: Active;</li> <li>DEPLOYING: In deployment.</li>
                     * 
                     */
                    std::string GetInternetAccessDomainStatus() const;

                    /**
                     * 设置The status of the internet access domain name is stored. Valid values: <li>ONLINE: Active;</li> <li>DEPLOYING: In deployment.</li>
                     * @param _internetAccessDomainStatus The status of the internet access domain name is stored. Valid values: <li>ONLINE: Active;</li> <li>DEPLOYING: In deployment.</li>
                     * 
                     */
                    void SetInternetAccessDomainStatus(const std::string& _internetAccessDomainStatus);

                    /**
                     * 判断参数 InternetAccessDomainStatus 是否已赋值
                     * @return InternetAccessDomainStatus 是否已赋值
                     * 
                     */
                    bool InternetAccessDomainStatusHasBeenSet() const;

                    /**
                     * 获取The internet access domain name of storage.
                     * @return InternetAccessDomain The internet access domain name of storage.
                     * 
                     */
                    std::string GetInternetAccessDomain() const;

                    /**
                     * 设置The internet access domain name of storage.
                     * @param _internetAccessDomain The internet access domain name of storage.
                     * 
                     */
                    void SetInternetAccessDomain(const std::string& _internetAccessDomain);

                    /**
                     * 判断参数 InternetAccessDomain 是否已赋值
                     * @return InternetAccessDomain 是否已赋值
                     * 
                     */
                    bool InternetAccessDomainHasBeenSet() const;

                    /**
                     * 获取The creation time of the storage.
                     * @return CreateTime The creation time of the storage.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time of the storage.
                     * @param _createTime The creation time of the storage.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * The ID of bucket.
                     */
                    std::string m_bucketId;
                    bool m_bucketIdHasBeenSet;

                    /**
                     * The name of bucket.
                     */
                    std::string m_storageName;
                    bool m_storageNameHasBeenSet;

                    /**
                     * The region of storage.
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * The status of the internet access domain name is stored. Valid values: <li>ONLINE: Active;</li> <li>DEPLOYING: In deployment.</li>
                     */
                    std::string m_internetAccessDomainStatus;
                    bool m_internetAccessDomainStatusHasBeenSet;

                    /**
                     * The internet access domain name of storage.
                     */
                    std::string m_internetAccessDomain;
                    bool m_internetAccessDomainHasBeenSet;

                    /**
                     * The creation time of the storage.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_STORAGEINFO_H_
