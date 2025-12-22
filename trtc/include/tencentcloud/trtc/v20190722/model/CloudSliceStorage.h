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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CLOUDSLICESTORAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CLOUDSLICESTORAGE_H_

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
                * Information about Tencent COS and third-party cloud storage accounts.
                */
                class CloudSliceStorage : public AbstractModel
                {
                public:
                    CloudSliceStorage();
                    ~CloudSliceStorage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Information about Tencent COS and third-party cloud storage accounts.
0: Tencent COS.
1: AWS S3.
2: Alibaba Cloud OSS.
Example value: 0.
                     * @return Vendor Information about Tencent COS and third-party cloud storage accounts.
0: Tencent COS.
1: AWS S3.
2: Alibaba Cloud OSS.
Example value: 0.
                     * 
                     */
                    uint64_t GetVendor() const;

                    /**
                     * 设置Information about Tencent COS and third-party cloud storage accounts.
0: Tencent COS.
1: AWS S3.
2: Alibaba Cloud OSS.
Example value: 0.
                     * @param _vendor Information about Tencent COS and third-party cloud storage accounts.
0: Tencent COS.
1: AWS S3.
2: Alibaba Cloud OSS.
Example value: 0.
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
                     * 获取[Region information](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F) of Tencent COS.
Example value: cn-shanghai-1.
[Region information](https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions) of AWS S3.
Example value: ap-southeast-3.	
                     * @return Region [Region information](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F) of Tencent COS.
Example value: cn-shanghai-1.
[Region information](https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions) of AWS S3.
Example value: ap-southeast-3.	
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置[Region information](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F) of Tencent COS.
Example value: cn-shanghai-1.
[Region information](https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions) of AWS S3.
Example value: ap-southeast-3.	
                     * @param _region [Region information](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F) of Tencent COS.
Example value: cn-shanghai-1.
[Region information](https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions) of AWS S3.
Example value: ap-southeast-3.	
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
                     * 获取Cloud bucket name.
                     * @return Bucket Cloud bucket name.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Cloud bucket name.
                     * @param _bucket Cloud bucket name.
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
To store files to Tencent COS, visit https://console.cloud.tencent.com/cam/capi to view or create the SecretId value corresponding to the key fields in the link.
Example value: test-accesskey.
                     * @return AccessKey access_key account information of the cloud storage.
To store files to Tencent COS, visit https://console.cloud.tencent.com/cam/capi to view or create the SecretId value corresponding to the key fields in the link.
Example value: test-accesskey.
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置access_key account information of the cloud storage.
To store files to Tencent COS, visit https://console.cloud.tencent.com/cam/capi to view or create the SecretId value corresponding to the key fields in the link.
Example value: test-accesskey.
                     * @param _accessKey access_key account information of the cloud storage.
To store files to Tencent COS, visit https://console.cloud.tencent.com/cam/capi to view or create the SecretId value corresponding to the key fields in the link.
Example value: test-accesskey.
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
To store files to Tencent COS, visit https://console.cloud.tencent.com/cam/capi to view or create the SecretKey value corresponding to the key fields in the link.
Example value: test-secretkey.
                     * @return SecretKey secret_key account information of the cloud storage.
To store files to Tencent COS, visit https://console.cloud.tencent.com/cam/capi to view or create the SecretKey value corresponding to the key fields in the link.
Example value: test-secretkey.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置secret_key account information of the cloud storage.
To store files to Tencent COS, visit https://console.cloud.tencent.com/cam/capi to view or create the SecretKey value corresponding to the key fields in the link.
Example value: test-secretkey.
                     * @param _secretKey secret_key account information of the cloud storage.
To store files to Tencent COS, visit https://console.cloud.tencent.com/cam/capi to view or create the SecretKey value corresponding to the key fields in the link.
Example value: test-secretkey.
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
                     * 获取Specified location of the cloud bucket, which consists of an array of strings. Value range for the strings is lowercase letters (a-z), uppercase letters (A-Z), digits (0-9), and special characters (_-). For example, under the feature of ["prefix1", "prefix2"], the audio slicing file (xxx.mp3) is stored as prefix1/prefix2/{taskId}/{userId}/audios/{sdkappid}_{roomId}_{userid}_{UTC time}.ogg, while the video frame is stored as prefix1/prefix2/{taskId}/{userId}/images/{sdkappid}_{roomId}_{userid}_{UTC time}.png.
                     * @return FileNamePrefix Specified location of the cloud bucket, which consists of an array of strings. Value range for the strings is lowercase letters (a-z), uppercase letters (A-Z), digits (0-9), and special characters (_-). For example, under the feature of ["prefix1", "prefix2"], the audio slicing file (xxx.mp3) is stored as prefix1/prefix2/{taskId}/{userId}/audios/{sdkappid}_{roomId}_{userid}_{UTC time}.ogg, while the video frame is stored as prefix1/prefix2/{taskId}/{userId}/images/{sdkappid}_{roomId}_{userid}_{UTC time}.png.
                     * 
                     */
                    std::vector<std::string> GetFileNamePrefix() const;

                    /**
                     * 设置Specified location of the cloud bucket, which consists of an array of strings. Value range for the strings is lowercase letters (a-z), uppercase letters (A-Z), digits (0-9), and special characters (_-). For example, under the feature of ["prefix1", "prefix2"], the audio slicing file (xxx.mp3) is stored as prefix1/prefix2/{taskId}/{userId}/audios/{sdkappid}_{roomId}_{userid}_{UTC time}.ogg, while the video frame is stored as prefix1/prefix2/{taskId}/{userId}/images/{sdkappid}_{roomId}_{userid}_{UTC time}.png.
                     * @param _fileNamePrefix Specified location of the cloud bucket, which consists of an array of strings. Value range for the strings is lowercase letters (a-z), uppercase letters (A-Z), digits (0-9), and special characters (_-). For example, under the feature of ["prefix1", "prefix2"], the audio slicing file (xxx.mp3) is stored as prefix1/prefix2/{taskId}/{userId}/audios/{sdkappid}_{roomId}_{userid}_{UTC time}.ogg, while the video frame is stored as prefix1/prefix2/{taskId}/{userId}/images/{sdkappid}_{roomId}_{userid}_{UTC time}.png.
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
                     * Information about Tencent COS and third-party cloud storage accounts.
0: Tencent COS.
1: AWS S3.
2: Alibaba Cloud OSS.
Example value: 0.
                     */
                    uint64_t m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * [Region information](https://www.tencentcloud.com/document/product/436/6224?from_cn_redirect=1#.E5.9C.B0.E5.9F.9F) of Tencent COS.
Example value: cn-shanghai-1.
[Region information](https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions) of AWS S3.
Example value: ap-southeast-3.	
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Cloud bucket name.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * access_key account information of the cloud storage.
To store files to Tencent COS, visit https://console.cloud.tencent.com/cam/capi to view or create the SecretId value corresponding to the key fields in the link.
Example value: test-accesskey.
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * secret_key account information of the cloud storage.
To store files to Tencent COS, visit https://console.cloud.tencent.com/cam/capi to view or create the SecretKey value corresponding to the key fields in the link.
Example value: test-secretkey.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Specified location of the cloud bucket, which consists of an array of strings. Value range for the strings is lowercase letters (a-z), uppercase letters (A-Z), digits (0-9), and special characters (_-). For example, under the feature of ["prefix1", "prefix2"], the audio slicing file (xxx.mp3) is stored as prefix1/prefix2/{taskId}/{userId}/audios/{sdkappid}_{roomId}_{userid}_{UTC time}.ogg, while the video frame is stored as prefix1/prefix2/{taskId}/{userId}/images/{sdkappid}_{roomId}_{userid}_{UTC time}.png.
                     */
                    std::vector<std::string> m_fileNamePrefix;
                    bool m_fileNamePrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CLOUDSLICESTORAGE_H_
