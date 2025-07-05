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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBESTORAGECREDENTIALRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBESTORAGECREDENTIALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Credentials.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeStorageCredential response structure.
                */
                class DescribeStorageCredentialResponse : public AbstractModel
                {
                public:
                    DescribeStorageCredentialResponse();
                    ~DescribeStorageCredentialResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Key information.
                     * @return Credentials Key information.
                     * 
                     */
                    Credentials GetCredentials() const;

                    /**
                     * 判断参数 Credentials 是否已赋值
                     * @return Credentials 是否已赋值
                     * 
                     */
                    bool CredentialsHasBeenSet() const;

                    /**
                     * 获取Expiration time.
                     * @return ExpiredTime Expiration time.
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取Start time.
                     * @return StartTime Start time.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Cloud object storage bucket.
                     * @return Bucket Cloud object storage bucket.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取COS availability zone.
                     * @return Region COS availability zone.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Cloud file storage directory.
                     * @return FilePath Cloud file storage directory.
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取Storage type.
                     * @return Type Storage type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Primary account.
                     * @return CorpUin Primary account.
                     * 
                     */
                    std::string GetCorpUin() const;

                    /**
                     * 判断参数 CorpUin 是否已赋值
                     * @return CorpUin 是否已赋值
                     * 
                     */
                    bool CorpUinHasBeenSet() const;

                    /**
                     * 获取Image storage directory.
                     * @return ImagePath Image storage directory.
                     * 
                     */
                    std::string GetImagePath() const;

                    /**
                     * 判断参数 ImagePath 是否已赋值
                     * @return ImagePath 是否已赋值
                     * 
                     */
                    bool ImagePathHasBeenSet() const;

                    /**
                     * 获取Upload storage path to a specific file.
                     * @return UploadPath Upload storage path to a specific file.
                     * 
                     */
                    std::string GetUploadPath() const;

                    /**
                     * 判断参数 UploadPath 是否已赋值
                     * @return UploadPath 是否已赋值
                     * 
                     */
                    bool UploadPathHasBeenSet() const;

                private:

                    /**
                     * Key information.
                     */
                    Credentials m_credentials;
                    bool m_credentialsHasBeenSet;

                    /**
                     * Expiration time.
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * Start time.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Cloud object storage bucket.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * COS availability zone.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Cloud file storage directory.
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * Storage type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Primary account.
                     */
                    std::string m_corpUin;
                    bool m_corpUinHasBeenSet;

                    /**
                     * Image storage directory.
                     */
                    std::string m_imagePath;
                    bool m_imagePathHasBeenSet;

                    /**
                     * Upload storage path to a specific file.
                     */
                    std::string m_uploadPath;
                    bool m_uploadPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBESTORAGECREDENTIALRESPONSE_H_
