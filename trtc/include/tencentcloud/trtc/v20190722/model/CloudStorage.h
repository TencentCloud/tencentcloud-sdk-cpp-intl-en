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
                     * 获取<p>Information about Tencent Cloud object storage COS and third-party cloud storage accounts<br>0: Tencent Cloud object storage COS<br>1: AWS<br>[Note] Currently, only AWS is supported for third-party cloud storage. More third-party cloud storage options are being added.</p>
                     * @return Vendor <p>Information about Tencent Cloud object storage COS and third-party cloud storage accounts<br>0: Tencent Cloud object storage COS<br>1: AWS<br>[Note] Currently, only AWS is supported for third-party cloud storage. More third-party cloud storage options are being added.</p>
                     * 
                     */
                    uint64_t GetVendor() const;

                    /**
                     * 设置<p>Information about Tencent Cloud object storage COS and third-party cloud storage accounts<br>0: Tencent Cloud object storage COS<br>1: AWS<br>[Note] Currently, only AWS is supported for third-party cloud storage. More third-party cloud storage options are being added.</p>
                     * @param _vendor <p>Information about Tencent Cloud object storage COS and third-party cloud storage accounts<br>0: Tencent Cloud object storage COS<br>1: AWS<br>[Note] Currently, only AWS is supported for third-party cloud storage. More third-party cloud storage options are being added.</p>
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
                     * 获取<p>[Region information](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F) of Tencent Cloud object storage.<br>Example value: cn-shanghai-1</p><p>[Region information](https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions) of AWS S3</p>
                     * @return Region <p>[Region information](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F) of Tencent Cloud object storage.<br>Example value: cn-shanghai-1</p><p>[Region information](https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions) of AWS S3</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>[Region information](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F) of Tencent Cloud object storage.<br>Example value: cn-shanghai-1</p><p>[Region information](https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions) of AWS S3</p>
                     * @param _region <p>[Region information](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F) of Tencent Cloud object storage.<br>Example value: cn-shanghai-1</p><p>[Region information](https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions) of AWS S3</p>
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
                     * 获取<p>Cloud bucket name.</p>
                     * @return Bucket <p>Cloud bucket name.</p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p>Cloud bucket name.</p>
                     * @param _bucket <p>Cloud bucket name.</p>
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
                     * 获取<p>access key account information for cloud storage.<br>To store files to tencent cloud Object Storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretId value corresponding to the key field in the link.</p>
                     * @return AccessKey <p>access key account information for cloud storage.<br>To store files to tencent cloud Object Storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretId value corresponding to the key field in the link.</p>
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置<p>access key account information for cloud storage.<br>To store files to tencent cloud Object Storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretId value corresponding to the key field in the link.</p>
                     * @param _accessKey <p>access key account information for cloud storage.<br>To store files to tencent cloud Object Storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretId value corresponding to the key field in the link.</p>
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
                     * 获取<p>The secret_key account information for cloud storage.<br>To store files to Tencent Cloud Object Storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretKey value corresponding to the key fields in the link.</p>
                     * @return SecretKey <p>The secret_key account information for cloud storage.<br>To store files to Tencent Cloud Object Storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretKey value corresponding to the key fields in the link.</p>
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置<p>The secret_key account information for cloud storage.<br>To store files to Tencent Cloud Object Storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretKey value corresponding to the key fields in the link.</p>
                     * @param _secretKey <p>The secret_key account information for cloud storage.<br>To store files to Tencent Cloud Object Storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretKey value corresponding to the key fields in the link.</p>
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
                     * 获取<p>The user-specified location in the cloud storage bucket consists of an array of strings. Valid string range: az, az, 0-9, '_' and '-'. For example, with ["prefix1", "prefix2"], the recording file xxx.m3u8 becomes prefix1/prefix2/TaskId/xxx.m3u8.</p>
                     * @return FileNamePrefix <p>The user-specified location in the cloud storage bucket consists of an array of strings. Valid string range: az, az, 0-9, '_' and '-'. For example, with ["prefix1", "prefix2"], the recording file xxx.m3u8 becomes prefix1/prefix2/TaskId/xxx.m3u8.</p>
                     * 
                     */
                    std::vector<std::string> GetFileNamePrefix() const;

                    /**
                     * 设置<p>The user-specified location in the cloud storage bucket consists of an array of strings. Valid string range: az, az, 0-9, '_' and '-'. For example, with ["prefix1", "prefix2"], the recording file xxx.m3u8 becomes prefix1/prefix2/TaskId/xxx.m3u8.</p>
                     * @param _fileNamePrefix <p>The user-specified location in the cloud storage bucket consists of an array of strings. Valid string range: az, az, 0-9, '_' and '-'. For example, with ["prefix1", "prefix2"], the recording file xxx.m3u8 becomes prefix1/prefix2/TaskId/xxx.m3u8.</p>
                     * 
                     */
                    void SetFileNamePrefix(const std::vector<std::string>& _fileNamePrefix);

                    /**
                     * 判断参数 FileNamePrefix 是否已赋值
                     * @return FileNamePrefix 是否已赋值
                     * 
                     */
                    bool FileNamePrefixHasBeenSet() const;

                    /**
                     * 获取<p>When this parameter is set up for an S3-compatible endpoint override (for example, Cloudflare R2), the client will use this endpoint rather than the default AWS S3 endpoint. Example: "account_id.R2.cloudflarestorage.com"</p>
                     * @return EndpointUrl <p>When this parameter is set up for an S3-compatible endpoint override (for example, Cloudflare R2), the client will use this endpoint rather than the default AWS S3 endpoint. Example: "account_id.R2.cloudflarestorage.com"</p>
                     * 
                     */
                    std::string GetEndpointUrl() const;

                    /**
                     * 设置<p>When this parameter is set up for an S3-compatible endpoint override (for example, Cloudflare R2), the client will use this endpoint rather than the default AWS S3 endpoint. Example: "account_id.R2.cloudflarestorage.com"</p>
                     * @param _endpointUrl <p>When this parameter is set up for an S3-compatible endpoint override (for example, Cloudflare R2), the client will use this endpoint rather than the default AWS S3 endpoint. Example: "account_id.R2.cloudflarestorage.com"</p>
                     * 
                     */
                    void SetEndpointUrl(const std::string& _endpointUrl);

                    /**
                     * 判断参数 EndpointUrl 是否已赋值
                     * @return EndpointUrl 是否已赋值
                     * 
                     */
                    bool EndpointUrlHasBeenSet() const;

                private:

                    /**
                     * <p>Information about Tencent Cloud object storage COS and third-party cloud storage accounts<br>0: Tencent Cloud object storage COS<br>1: AWS<br>[Note] Currently, only AWS is supported for third-party cloud storage. More third-party cloud storage options are being added.</p>
                     */
                    uint64_t m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * <p>[Region information](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F) of Tencent Cloud object storage.<br>Example value: cn-shanghai-1</p><p>[Region information](https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions) of AWS S3</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Cloud bucket name.</p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>access key account information for cloud storage.<br>To store files to tencent cloud Object Storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretId value corresponding to the key field in the link.</p>
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * <p>The secret_key account information for cloud storage.<br>To store files to Tencent Cloud Object Storage (COS), visit https://console.cloud.tencent.com/cam/capi to view or create the SecretKey value corresponding to the key fields in the link.</p>
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * <p>The user-specified location in the cloud storage bucket consists of an array of strings. Valid string range: az, az, 0-9, '_' and '-'. For example, with ["prefix1", "prefix2"], the recording file xxx.m3u8 becomes prefix1/prefix2/TaskId/xxx.m3u8.</p>
                     */
                    std::vector<std::string> m_fileNamePrefix;
                    bool m_fileNamePrefixHasBeenSet;

                    /**
                     * <p>When this parameter is set up for an S3-compatible endpoint override (for example, Cloudflare R2), the client will use this endpoint rather than the default AWS S3 endpoint. Example: "account_id.R2.cloudflarestorage.com"</p>
                     */
                    std::string m_endpointUrl;
                    bool m_endpointUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CLOUDSTORAGE_H_
