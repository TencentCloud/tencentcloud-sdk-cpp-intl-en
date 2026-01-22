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
                     * 获取[Region information](https://www.tencentcloud.comom/document/product/436/6224?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F) of tencent cloud object storage.
Example value: cn-shanghai-1.

[Region information](https://docs.AWS.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions) of AWS S3.
                     * @return Region [Region information](https://www.tencentcloud.comom/document/product/436/6224?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F) of tencent cloud object storage.
Example value: cn-shanghai-1.

[Region information](https://docs.AWS.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions) of AWS S3.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置[Region information](https://www.tencentcloud.comom/document/product/436/6224?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F) of tencent cloud object storage.
Example value: cn-shanghai-1.

[Region information](https://docs.AWS.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions) of AWS S3.
                     * @param _region [Region information](https://www.tencentcloud.comom/document/product/436/6224?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F) of tencent cloud object storage.
Example value: cn-shanghai-1.

[Region information](https://docs.AWS.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions) of AWS S3.
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
                     * 获取access_key account information of the cloud storage.
To store files to tencent cloud object storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretId value corresponding to the key fields in the link.
                     * @return AccessKey access_key account information of the cloud storage.
To store files to tencent cloud object storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretId value corresponding to the key fields in the link.
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置access_key account information of the cloud storage.
To store files to tencent cloud object storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretId value corresponding to the key fields in the link.
                     * @param _accessKey access_key account information of the cloud storage.
To store files to tencent cloud object storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretId value corresponding to the key fields in the link.
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
                     * 获取secret_key account information of the cloud storage.
To store files to tencent cloud object storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretKey value corresponding to the key fields in the link.
                     * @return SecretKey secret_key account information of the cloud storage.
To store files to tencent cloud object storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretKey value corresponding to the key fields in the link.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置secret_key account information of the cloud storage.
To store files to tencent cloud object storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretKey value corresponding to the key fields in the link.
                     * @param _secretKey secret_key account information of the cloud storage.
To store files to tencent cloud object storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretKey value corresponding to the key fields in the link.
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
                     * 获取The specified position of the cloud storage bucket consists of an array of strings. valid values: az, az, 0-9, '_', and '-'. for example, the recording file xxx.m3u8 becomes prefix1/prefix2/TaskId/xxx.m3u8 under the function of ["prefix1", "prefix2"].
                     * @return FileNamePrefix The specified position of the cloud storage bucket consists of an array of strings. valid values: az, az, 0-9, '_', and '-'. for example, the recording file xxx.m3u8 becomes prefix1/prefix2/TaskId/xxx.m3u8 under the function of ["prefix1", "prefix2"].
                     * 
                     */
                    std::vector<std::string> GetFileNamePrefix() const;

                    /**
                     * 设置The specified position of the cloud storage bucket consists of an array of strings. valid values: az, az, 0-9, '_', and '-'. for example, the recording file xxx.m3u8 becomes prefix1/prefix2/TaskId/xxx.m3u8 under the function of ["prefix1", "prefix2"].
                     * @param _fileNamePrefix The specified position of the cloud storage bucket consists of an array of strings. valid values: az, az, 0-9, '_', and '-'. for example, the recording file xxx.m3u8 becomes prefix1/prefix2/TaskId/xxx.m3u8 under the function of ["prefix1", "prefix2"].
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
                     * [Region information](https://www.tencentcloud.comom/document/product/436/6224?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F) of tencent cloud object storage.
Example value: cn-shanghai-1.

[Region information](https://docs.AWS.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions) of AWS S3.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * The storage bucket.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * access_key account information of the cloud storage.
To store files to tencent cloud object storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretId value corresponding to the key fields in the link.
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * secret_key account information of the cloud storage.
To store files to tencent cloud object storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretKey value corresponding to the key fields in the link.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * The specified position of the cloud storage bucket consists of an array of strings. valid values: az, az, 0-9, '_', and '-'. for example, the recording file xxx.m3u8 becomes prefix1/prefix2/TaskId/xxx.m3u8 under the function of ["prefix1", "prefix2"].
                     */
                    std::vector<std::string> m_fileNamePrefix;
                    bool m_fileNamePrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CLOUDSTORAGE_H_
