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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_S3INPUTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_S3INPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The AWS S3 storage information of a source file.
                */
                class S3InputInfo : public AbstractModel
                {
                public:
                    S3InputInfo();
                    ~S3InputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The AWS S3 bucket.
                     * @return S3Bucket The AWS S3 bucket.
                     * 
                     */
                    std::string GetS3Bucket() const;

                    /**
                     * 设置The AWS S3 bucket.
                     * @param _s3Bucket The AWS S3 bucket.
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
                     * 获取The path of the AWS S3 object.
                     * @return S3Object The path of the AWS S3 object.
                     * 
                     */
                    std::string GetS3Object() const;

                    /**
                     * 设置The path of the AWS S3 object.
                     * @param _s3Object The path of the AWS S3 object.
                     * 
                     */
                    void SetS3Object(const std::string& _s3Object);

                    /**
                     * 判断参数 S3Object 是否已赋值
                     * @return S3Object 是否已赋值
                     * 
                     */
                    bool S3ObjectHasBeenSet() const;

                    /**
                     * 获取The key ID required to access the AWS S3 object.
                     * @return S3SecretId The key ID required to access the AWS S3 object.
                     * 
                     */
                    std::string GetS3SecretId() const;

                    /**
                     * 设置The key ID required to access the AWS S3 object.
                     * @param _s3SecretId The key ID required to access the AWS S3 object.
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
                     * 获取The key required to access the AWS S3 object.
                     * @return S3SecretKey The key required to access the AWS S3 object.
                     * 
                     */
                    std::string GetS3SecretKey() const;

                    /**
                     * 设置The key required to access the AWS S3 object.
                     * @param _s3SecretKey The key required to access the AWS S3 object.
                     * 
                     */
                    void SetS3SecretKey(const std::string& _s3SecretKey);

                    /**
                     * 判断参数 S3SecretKey 是否已赋值
                     * @return S3SecretKey 是否已赋值
                     * 
                     */
                    bool S3SecretKeyHasBeenSet() const;

                private:

                    /**
                     * The AWS S3 bucket.
                     */
                    std::string m_s3Bucket;
                    bool m_s3BucketHasBeenSet;

                    /**
                     * The region of the AWS S3 bucket.
                     */
                    std::string m_s3Region;
                    bool m_s3RegionHasBeenSet;

                    /**
                     * The path of the AWS S3 object.
                     */
                    std::string m_s3Object;
                    bool m_s3ObjectHasBeenSet;

                    /**
                     * The key ID required to access the AWS S3 object.
                     */
                    std::string m_s3SecretId;
                    bool m_s3SecretIdHasBeenSet;

                    /**
                     * The key required to access the AWS S3 object.
                     */
                    std::string m_s3SecretKey;
                    bool m_s3SecretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_S3INPUTINFO_H_
