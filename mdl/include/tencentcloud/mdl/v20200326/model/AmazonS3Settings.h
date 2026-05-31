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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_AMAZONS3SETTINGS_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_AMAZONS3SETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Amazon S3 address configuration
                */
                class AmazonS3Settings : public AbstractModel
                {
                public:
                    AmazonS3Settings();
                    ~AmazonS3Settings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Access key ID of the S3 sub-user.
                     * @return AccessKeyID Access key ID of the S3 sub-user.
                     * 
                     */
                    std::string GetAccessKeyID() const;

                    /**
                     * 设置Access key ID of the S3 sub-user.
                     * @param _accessKeyID Access key ID of the S3 sub-user.
                     * 
                     */
                    void SetAccessKeyID(const std::string& _accessKeyID);

                    /**
                     * 判断参数 AccessKeyID 是否已赋值
                     * @return AccessKeyID 是否已赋值
                     * 
                     */
                    bool AccessKeyIDHasBeenSet() const;

                    /**
                     * 获取Secret access key of the S3 sub-user.
                     * @return SecretAccessKey Secret access key of the S3 sub-user.
                     * 
                     */
                    std::string GetSecretAccessKey() const;

                    /**
                     * 设置Secret access key of the S3 sub-user.
                     * @param _secretAccessKey Secret access key of the S3 sub-user.
                     * 
                     */
                    void SetSecretAccessKey(const std::string& _secretAccessKey);

                    /**
                     * 判断参数 SecretAccessKey 是否已赋值
                     * @return SecretAccessKey 是否已赋值
                     * 
                     */
                    bool SecretAccessKeyHasBeenSet() const;

                    /**
                     * 获取S3 region.
                     * @return Region S3 region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置S3 region.
                     * @param _region S3 region.
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
                     * 获取Bucket name of S3.
                     * @return Bucket Bucket name of S3.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Bucket name of S3.
                     * @param _bucket Bucket name of S3.
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
                     * 获取File output path, can be empty, starts and ends with / if not empty.
                     * @return FilePath File output path, can be empty, starts and ends with / if not empty.
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置File output path, can be empty, starts and ends with / if not empty.
                     * @param _filePath File output path, can be empty, starts and ends with / if not empty.
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取User-defined name supports 1 to 32 characters consisting of digits, letters, underscores (_), and hyphens (-).
                     * @return FileName User-defined name supports 1 to 32 characters consisting of digits, letters, underscores (_), and hyphens (-).
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置User-defined name supports 1 to 32 characters consisting of digits, letters, underscores (_), and hyphens (-).
                     * @param _fileName User-defined name supports 1 to 32 characters consisting of digits, letters, underscores (_), and hyphens (-).
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取File suffix only supports jpg.
                     * @return FileExt File suffix only supports jpg.
                     * 
                     */
                    std::string GetFileExt() const;

                    /**
                     * 设置File suffix only supports jpg.
                     * @param _fileExt File suffix only supports jpg.
                     * 
                     */
                    void SetFileExt(const std::string& _fileExt);

                    /**
                     * 判断参数 FileExt 是否已赋值
                     * @return FileExt 是否已赋值
                     * 
                     */
                    bool FileExtHasBeenSet() const;

                    /**
                     * 获取Support [unix|utc0]. Default is unix.
                     * @return TimeFormat Support [unix|utc0]. Default is unix.
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置Support [unix|utc0]. Default is unix.
                     * @param _timeFormat Support [unix|utc0]. Default is unix.
                     * 
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     * 
                     */
                    bool TimeFormatHasBeenSet() const;

                private:

                    /**
                     * Access key ID of the S3 sub-user.
                     */
                    std::string m_accessKeyID;
                    bool m_accessKeyIDHasBeenSet;

                    /**
                     * Secret access key of the S3 sub-user.
                     */
                    std::string m_secretAccessKey;
                    bool m_secretAccessKeyHasBeenSet;

                    /**
                     * S3 region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Bucket name of S3.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * File output path, can be empty, starts and ends with / if not empty.
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * User-defined name supports 1 to 32 characters consisting of digits, letters, underscores (_), and hyphens (-).
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File suffix only supports jpg.
                     */
                    std::string m_fileExt;
                    bool m_fileExtHasBeenSet;

                    /**
                     * Support [unix|utc0]. Default is unix.
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_AMAZONS3SETTINGS_H_
