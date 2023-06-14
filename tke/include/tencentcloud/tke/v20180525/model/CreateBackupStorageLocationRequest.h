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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATEBACKUPSTORAGELOCATIONREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATEBACKUPSTORAGELOCATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateBackupStorageLocation request structure.
                */
                class CreateBackupStorageLocationRequest : public AbstractModel
                {
                public:
                    CreateBackupStorageLocationRequest();
                    ~CreateBackupStorageLocationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Repository region, such as `ap-guangzhou`
                     * @return StorageRegion Repository region, such as `ap-guangzhou`
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置Repository region, such as `ap-guangzhou`
                     * @param _storageRegion Repository region, such as `ap-guangzhou`
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
                     * 获取COS bucket name. For COS storage type, it must start with the prefix `tke-backup`.
                     * @return Bucket COS bucket name. For COS storage type, it must start with the prefix `tke-backup`.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS bucket name. For COS storage type, it must start with the prefix `tke-backup`.
                     * @param _bucket COS bucket name. For COS storage type, it must start with the prefix `tke-backup`.
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取Backup repository name
                     * @return Name Backup repository name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Backup repository name
                     * @param _name Backup repository name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The provider of storage service. It defaults to Tencent Cloud.
                     * @return Provider The provider of storage service. It defaults to Tencent Cloud.
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置The provider of storage service. It defaults to Tencent Cloud.
                     * @param _provider The provider of storage service. It defaults to Tencent Cloud.
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取COS bucket path
                     * @return Path COS bucket path
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置COS bucket path
                     * @param _path COS bucket path
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                private:

                    /**
                     * Repository region, such as `ap-guangzhou`
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * COS bucket name. For COS storage type, it must start with the prefix `tke-backup`.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Backup repository name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The provider of storage service. It defaults to Tencent Cloud.
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * COS bucket path
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATEBACKUPSTORAGELOCATIONREQUEST_H_
