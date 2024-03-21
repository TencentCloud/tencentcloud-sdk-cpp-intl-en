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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_S3_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_S3_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The configuration information of real-time log delivery to an AWS S3 compatible bucket
                */
                class S3 : public AbstractModel
                {
                public:
                    S3();
                    ~S3() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The URL without bucket name or path, for example: `https://storage.googleapis.com`, `https://s3.ap-northeast-2.amazonaws.com`, and `https://cos.ap-nanjing.myqcloud.com`.
                     * @return Endpoint The URL without bucket name or path, for example: `https://storage.googleapis.com`, `https://s3.ap-northeast-2.amazonaws.com`, and `https://cos.ap-nanjing.myqcloud.com`.
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置The URL without bucket name or path, for example: `https://storage.googleapis.com`, `https://s3.ap-northeast-2.amazonaws.com`, and `https://cos.ap-nanjing.myqcloud.com`.
                     * @param _endpoint The URL without bucket name or path, for example: `https://storage.googleapis.com`, `https://s3.ap-northeast-2.amazonaws.com`, and `https://cos.ap-nanjing.myqcloud.com`.
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取The region where the bucket is located, for example: `ap-northeast-2`.
                     * @return Region The region where the bucket is located, for example: `ap-northeast-2`.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置The region where the bucket is located, for example: `ap-northeast-2`.
                     * @param _region The region where the bucket is located, for example: `ap-northeast-2`.
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
                     * 获取The bucket name and log storage directory, for example: `your_bucket_name/EO-logs/`. If the directory does not exist in the bucket, it will be created automatically.
                     * @return Bucket The bucket name and log storage directory, for example: `your_bucket_name/EO-logs/`. If the directory does not exist in the bucket, it will be created automatically.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置The bucket name and log storage directory, for example: `your_bucket_name/EO-logs/`. If the directory does not exist in the bucket, it will be created automatically.
                     * @param _bucket The bucket name and log storage directory, for example: `your_bucket_name/EO-logs/`. If the directory does not exist in the bucket, it will be created automatically.
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
                     * 获取The Access Key ID used to access the bucket.
                     * @return AccessId The Access Key ID used to access the bucket.
                     * 
                     */
                    std::string GetAccessId() const;

                    /**
                     * 设置The Access Key ID used to access the bucket.
                     * @param _accessId The Access Key ID used to access the bucket.
                     * 
                     */
                    void SetAccessId(const std::string& _accessId);

                    /**
                     * 判断参数 AccessId 是否已赋值
                     * @return AccessId 是否已赋值
                     * 
                     */
                    bool AccessIdHasBeenSet() const;

                    /**
                     * 获取The secret key used to access the bucket.
                     * @return AccessKey The secret key used to access the bucket.
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置The secret key used to access the bucket.
                     * @param _accessKey The secret key used to access the bucket.
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
                     * 获取The data compress type. Valid values:<li>gzip: gzip compression.</li>If this field is not filled in, compression is disabled.
                     * @return CompressType The data compress type. Valid values:<li>gzip: gzip compression.</li>If this field is not filled in, compression is disabled.
                     * 
                     */
                    std::string GetCompressType() const;

                    /**
                     * 设置The data compress type. Valid values:<li>gzip: gzip compression.</li>If this field is not filled in, compression is disabled.
                     * @param _compressType The data compress type. Valid values:<li>gzip: gzip compression.</li>If this field is not filled in, compression is disabled.
                     * 
                     */
                    void SetCompressType(const std::string& _compressType);

                    /**
                     * 判断参数 CompressType 是否已赋值
                     * @return CompressType 是否已赋值
                     * 
                     */
                    bool CompressTypeHasBeenSet() const;

                private:

                    /**
                     * The URL without bucket name or path, for example: `https://storage.googleapis.com`, `https://s3.ap-northeast-2.amazonaws.com`, and `https://cos.ap-nanjing.myqcloud.com`.
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * The region where the bucket is located, for example: `ap-northeast-2`.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * The bucket name and log storage directory, for example: `your_bucket_name/EO-logs/`. If the directory does not exist in the bucket, it will be created automatically.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * The Access Key ID used to access the bucket.
                     */
                    std::string m_accessId;
                    bool m_accessIdHasBeenSet;

                    /**
                     * The secret key used to access the bucket.
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * The data compress type. Valid values:<li>gzip: gzip compression.</li>If this field is not filled in, compression is disabled.
                     */
                    std::string m_compressType;
                    bool m_compressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_S3_H_
