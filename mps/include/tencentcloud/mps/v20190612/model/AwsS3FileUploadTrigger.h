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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AWSS3FILEUPLOADTRIGGER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AWSS3FILEUPLOADTRIGGER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AwsSQS.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * An AWS S3 file upload trigger.
                */
                class AwsS3FileUploadTrigger : public AbstractModel
                {
                public:
                    AwsS3FileUploadTrigger();
                    ~AwsS3FileUploadTrigger() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The AWS S3 bucket bound to the scheme.
                     * @return S3Bucket The AWS S3 bucket bound to the scheme.
                     * 
                     */
                    std::string GetS3Bucket() const;

                    /**
                     * 设置The AWS S3 bucket bound to the scheme.
                     * @param _s3Bucket The AWS S3 bucket bound to the scheme.
                     * 
                     */
                    void SetS3Bucket(const std::string& _s3Bucket);

                    /**
                     * 判断参数 S3Bucket 是否已赋值
                     * @return S3Bucket 是否已赋值
                     * 
                     */
                    bool S3BucketHasBeenSet() const;

                    /**
                     * 获取The region of the AWS S3 bucket.
                     * @return S3Region The region of the AWS S3 bucket.
                     * 
                     */
                    std::string GetS3Region() const;

                    /**
                     * 设置The region of the AWS S3 bucket.
                     * @param _s3Region The region of the AWS S3 bucket.
                     * 
                     */
                    void SetS3Region(const std::string& _s3Region);

                    /**
                     * 判断参数 S3Region 是否已赋值
                     * @return S3Region 是否已赋值
                     * 
                     */
                    bool S3RegionHasBeenSet() const;

                    /**
                     * 获取The bucket directory bound. It must be an absolute path that starts and ends with `/`, such as `/movie/201907/`. If you do not specify this, the root directory will be bound.	
                     * @return Dir The bucket directory bound. It must be an absolute path that starts and ends with `/`, such as `/movie/201907/`. If you do not specify this, the root directory will be bound.	
                     * 
                     */
                    std::string GetDir() const;

                    /**
                     * 设置The bucket directory bound. It must be an absolute path that starts and ends with `/`, such as `/movie/201907/`. If you do not specify this, the root directory will be bound.	
                     * @param _dir The bucket directory bound. It must be an absolute path that starts and ends with `/`, such as `/movie/201907/`. If you do not specify this, the root directory will be bound.	
                     * 
                     */
                    void SetDir(const std::string& _dir);

                    /**
                     * 判断参数 Dir 是否已赋值
                     * @return Dir 是否已赋值
                     * 
                     */
                    bool DirHasBeenSet() const;

                    /**
                     * 获取The file formats that will trigger the scheme, such as ["mp4", "flv", "mov"]. If you do not specify this, the upload of files in any format will trigger the scheme.	
                     * @return Formats The file formats that will trigger the scheme, such as ["mp4", "flv", "mov"]. If you do not specify this, the upload of files in any format will trigger the scheme.	
                     * 
                     */
                    std::vector<std::string> GetFormats() const;

                    /**
                     * 设置The file formats that will trigger the scheme, such as ["mp4", "flv", "mov"]. If you do not specify this, the upload of files in any format will trigger the scheme.	
                     * @param _formats The file formats that will trigger the scheme, such as ["mp4", "flv", "mov"]. If you do not specify this, the upload of files in any format will trigger the scheme.	
                     * 
                     */
                    void SetFormats(const std::vector<std::string>& _formats);

                    /**
                     * 判断参数 Formats 是否已赋值
                     * @return Formats 是否已赋值
                     * 
                     */
                    bool FormatsHasBeenSet() const;

                    /**
                     * 获取The key ID of the AWS S3 bucket.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return S3SecretId The key ID of the AWS S3 bucket.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetS3SecretId() const;

                    /**
                     * 设置The key ID of the AWS S3 bucket.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _s3SecretId The key ID of the AWS S3 bucket.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetS3SecretId(const std::string& _s3SecretId);

                    /**
                     * 判断参数 S3SecretId 是否已赋值
                     * @return S3SecretId 是否已赋值
                     * 
                     */
                    bool S3SecretIdHasBeenSet() const;

                    /**
                     * 获取The key of the AWS S3 bucket.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return S3SecretKey The key of the AWS S3 bucket.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetS3SecretKey() const;

                    /**
                     * 设置The key of the AWS S3 bucket.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _s3SecretKey The key of the AWS S3 bucket.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetS3SecretKey(const std::string& _s3SecretKey);

                    /**
                     * 判断参数 S3SecretKey 是否已赋值
                     * @return S3SecretKey 是否已赋值
                     * 
                     */
                    bool S3SecretKeyHasBeenSet() const;

                    /**
                     * 获取The SQS queue of the AWS S3 bucket.
Note: The queue must be in the same region as the bucket.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AwsSQS The SQS queue of the AWS S3 bucket.
Note: The queue must be in the same region as the bucket.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AwsSQS GetAwsSQS() const;

                    /**
                     * 设置The SQS queue of the AWS S3 bucket.
Note: The queue must be in the same region as the bucket.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _awsSQS The SQS queue of the AWS S3 bucket.
Note: The queue must be in the same region as the bucket.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAwsSQS(const AwsSQS& _awsSQS);

                    /**
                     * 判断参数 AwsSQS 是否已赋值
                     * @return AwsSQS 是否已赋值
                     * 
                     */
                    bool AwsSQSHasBeenSet() const;

                private:

                    /**
                     * The AWS S3 bucket bound to the scheme.
                     */
                    std::string m_s3Bucket;
                    bool m_s3BucketHasBeenSet;

                    /**
                     * The region of the AWS S3 bucket.
                     */
                    std::string m_s3Region;
                    bool m_s3RegionHasBeenSet;

                    /**
                     * The bucket directory bound. It must be an absolute path that starts and ends with `/`, such as `/movie/201907/`. If you do not specify this, the root directory will be bound.	
                     */
                    std::string m_dir;
                    bool m_dirHasBeenSet;

                    /**
                     * The file formats that will trigger the scheme, such as ["mp4", "flv", "mov"]. If you do not specify this, the upload of files in any format will trigger the scheme.	
                     */
                    std::vector<std::string> m_formats;
                    bool m_formatsHasBeenSet;

                    /**
                     * The key ID of the AWS S3 bucket.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_s3SecretId;
                    bool m_s3SecretIdHasBeenSet;

                    /**
                     * The key of the AWS S3 bucket.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_s3SecretKey;
                    bool m_s3SecretKeyHasBeenSet;

                    /**
                     * The SQS queue of the AWS S3 bucket.
Note: The queue must be in the same region as the bucket.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AwsSQS m_awsSQS;
                    bool m_awsSQSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AWSS3FILEUPLOADTRIGGER_H_
