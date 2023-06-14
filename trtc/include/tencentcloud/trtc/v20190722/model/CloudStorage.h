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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CLOUDSTORAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CLOUDSTORAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The cloud storage information.
                */
                class CloudStorage : public AbstractModel
                {
                public:
                    CloudStorage();
                    ~CloudStorage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The cloud storage provider.
`0`: Tencent Cloud COS; `1`: AWS storage. Other vendors are not supported currently.
                     * @return Vendor The cloud storage provider.
`0`: Tencent Cloud COS; `1`: AWS storage. Other vendors are not supported currently.
                     * 
                     */
                    uint64_t GetVendor() const;

                    /**
                     * 设置The cloud storage provider.
`0`: Tencent Cloud COS; `1`: AWS storage. Other vendors are not supported currently.
                     * @param _vendor The cloud storage provider.
`0`: Tencent Cloud COS; `1`: AWS storage. Other vendors are not supported currently.
                     * 
                     */
                    void SetVendor(const uint64_t& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                    /**
                     * 获取The region of cloud storage.
                     * @return Region The region of cloud storage.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置The region of cloud storage.
                     * @param _region The region of cloud storage.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取The storage bucket.
                     * @return Bucket The storage bucket.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置The storage bucket.
                     * @param _bucket The storage bucket.
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
                     * 获取The access_key of the cloud storage account.
                     * @return AccessKey The access_key of the cloud storage account.
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置The access_key of the cloud storage account.
                     * @param _accessKey The access_key of the cloud storage account.
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取The secret_key of the cloud storage account.
                     * @return SecretKey The secret_key of the cloud storage account.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置The secret_key of the cloud storage account.
                     * @param _secretKey The secret_key of the cloud storage account.
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取The bucket to save data, which is an array of strings that can contain letters (a-z and A-Z), numbers (0-9), underscores (_), and hyphens (-). For example, if the value of this parameter is `["prefix1", "prefix2"]`, the recording file `xxx.m3u8` will be saved as `prefix1/prefix2/TaskId/xxx.m3u8`.
                     * @return FileNamePrefix The bucket to save data, which is an array of strings that can contain letters (a-z and A-Z), numbers (0-9), underscores (_), and hyphens (-). For example, if the value of this parameter is `["prefix1", "prefix2"]`, the recording file `xxx.m3u8` will be saved as `prefix1/prefix2/TaskId/xxx.m3u8`.
                     * 
                     */
                    std::vector<std::string> GetFileNamePrefix() const;

                    /**
                     * 设置The bucket to save data, which is an array of strings that can contain letters (a-z and A-Z), numbers (0-9), underscores (_), and hyphens (-). For example, if the value of this parameter is `["prefix1", "prefix2"]`, the recording file `xxx.m3u8` will be saved as `prefix1/prefix2/TaskId/xxx.m3u8`.
                     * @param _fileNamePrefix The bucket to save data, which is an array of strings that can contain letters (a-z and A-Z), numbers (0-9), underscores (_), and hyphens (-). For example, if the value of this parameter is `["prefix1", "prefix2"]`, the recording file `xxx.m3u8` will be saved as `prefix1/prefix2/TaskId/xxx.m3u8`.
                     * 
                     */
                    void SetFileNamePrefix(const std::vector<std::string>& _fileNamePrefix);

                    /**
                     * 判断参数 FileNamePrefix 是否已赋值
                     * @return FileNamePrefix 是否已赋值
                     * 
                     */
                    bool FileNamePrefixHasBeenSet() const;

                private:

                    /**
                     * The cloud storage provider.
`0`: Tencent Cloud COS; `1`: AWS storage. Other vendors are not supported currently.
                     */
                    uint64_t m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * The region of cloud storage.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * The storage bucket.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * The access_key of the cloud storage account.
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * The secret_key of the cloud storage account.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * The bucket to save data, which is an array of strings that can contain letters (a-z and A-Z), numbers (0-9), underscores (_), and hyphens (-). For example, if the value of this parameter is `["prefix1", "prefix2"]`, the recording file `xxx.m3u8` will be saved as `prefix1/prefix2/TaskId/xxx.m3u8`.
                     */
                    std::vector<std::string> m_fileNamePrefix;
                    bool m_fileNamePrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CLOUDSTORAGE_H_
