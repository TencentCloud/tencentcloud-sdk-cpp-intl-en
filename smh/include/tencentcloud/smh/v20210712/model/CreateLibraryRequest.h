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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_CREATELIBRARYREQUEST_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_CREATELIBRARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/smh/v20210712/model/LibraryExtension.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * CreateLibrary request structure.
                */
                class CreateLibraryRequest : public AbstractModel
                {
                public:
                    CreateLibraryRequest();
                    ~CreateLibraryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Media library name. up to 50 characters.
                     * @return Name Media library name. up to 50 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Media library name. up to 50 characters.
                     * @param _name Media library name. up to 50 characters.
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
                     * 获取Specifies the remark, up to 250 characters.
                     * @return Remark Specifies the remark, up to 250 characters.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Specifies the remark, up to 250 characters.
                     * @param _remark Specifies the remark, up to 250 characters.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Specifies the full name of the bucket, which cannot be changed after creation. the current version no longer supports specified buckets.
                     * @return BucketName Specifies the full name of the bucket, which cannot be changed after creation. the current version no longer supports specified buckets.
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置Specifies the full name of the bucket, which cannot be changed after creation. the current version no longer supports specified buckets.
                     * @param _bucketName Specifies the full name of the bucket, which cannot be changed after creation. the current version no longer supports specified buckets.
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取Bucket location cannot be changed after creation. the current version no longer supports specifying bucket location.
                     * @return BucketRegion Bucket location cannot be changed after creation. the current version no longer supports specifying bucket location.
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置Bucket location cannot be changed after creation. the current version no longer supports specifying bucket location.
                     * @param _bucketRegion Bucket location cannot be changed after creation. the current version no longer supports specifying bucket location.
                     * 
                     */
                    void SetBucketRegion(const std::string& _bucketRegion);

                    /**
                     * 判断参数 BucketRegion 是否已赋值
                     * @return BucketRegion 是否已赋值
                     * 
                     */
                    bool BucketRegionHasBeenSet() const;

                    /**
                     * 获取Media library configuration item. some parameters cannot be changed after creation.
                     * @return LibraryExtension Media library configuration item. some parameters cannot be changed after creation.
                     * 
                     */
                    LibraryExtension GetLibraryExtension() const;

                    /**
                     * 设置Media library configuration item. some parameters cannot be changed after creation.
                     * @param _libraryExtension Media library configuration item. some parameters cannot be changed after creation.
                     * 
                     */
                    void SetLibraryExtension(const LibraryExtension& _libraryExtension);

                    /**
                     * 判断参数 LibraryExtension 是否已赋值
                     * @return LibraryExtension 是否已赋值
                     * 
                     */
                    bool LibraryExtensionHasBeenSet() const;

                private:

                    /**
                     * Media library name. up to 50 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Specifies the remark, up to 250 characters.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Specifies the full name of the bucket, which cannot be changed after creation. the current version no longer supports specified buckets.
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * Bucket location cannot be changed after creation. the current version no longer supports specifying bucket location.
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * Media library configuration item. some parameters cannot be changed after creation.
                     */
                    LibraryExtension m_libraryExtension;
                    bool m_libraryExtensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_CREATELIBRARYREQUEST_H_
