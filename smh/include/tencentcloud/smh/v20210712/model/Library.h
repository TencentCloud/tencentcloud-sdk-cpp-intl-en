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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_LIBRARY_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_LIBRARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * PaaS service media library information.
                */
                class Library : public AbstractModel
                {
                public:
                    Library();
                    ~Library() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Media library ID.
                     * @return LibraryId Media library ID.
                     * 
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 设置Media library ID.
                     * @param _libraryId Media library ID.
                     * 
                     */
                    void SetLibraryId(const std::string& _libraryId);

                    /**
                     * 判断参数 LibraryId 是否已赋值
                     * @return LibraryId 是否已赋值
                     * 
                     */
                    bool LibraryIdHasBeenSet() const;

                    /**
                     * 获取Specifies the friendly name of the media library.
                     * @return Name Specifies the friendly name of the media library.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Specifies the friendly name of the media library.
                     * @param _name Specifies the friendly name of the media library.
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
                     * 获取Remarks.
                     * @return Remark Remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks.
                     * @param _remark Remarks.
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
                     * 获取Specifies the COS storage bucket bound to the media library.
                     * @return BucketName Specifies the COS storage bucket bound to the media library.
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置Specifies the COS storage bucket bound to the media library.
                     * @param _bucketName Specifies the COS storage bucket bound to the media library.
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
                     * 获取Specifies the region where the COS bucket bound to the media library is located.
                     * @return BucketRegion Specifies the region where the COS bucket bound to the media library is located.
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置Specifies the region where the COS bucket bound to the media library is located.
                     * @param _bucketRegion Specifies the region where the COS bucket bound to the media library is located.
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
                     * 获取Specifies the access domain of the business API for the media library.
                     * @return AccessDomain Specifies the access domain of the business API for the media library.
                     * 
                     */
                    std::string GetAccessDomain() const;

                    /**
                     * 设置Specifies the access domain of the business API for the media library.
                     * @param _accessDomain Specifies the access domain of the business API for the media library.
                     * 
                     */
                    void SetAccessDomain(const std::string& _accessDomain);

                    /**
                     * 判断参数 AccessDomain 是否已赋值
                     * @return AccessDomain 是否已赋值
                     * 
                     */
                    bool AccessDomainHasBeenSet() const;

                    /**
                     * 获取Creation time of the media library.
                     * @return CreationTime Creation time of the media library.
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置Creation time of the media library.
                     * @param _creationTime Creation time of the media library.
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取Media library configuration item.
                     * @return LibraryExtension Media library configuration item.
                     * 
                     */
                    LibraryExtension GetLibraryExtension() const;

                    /**
                     * 设置Media library configuration item.
                     * @param _libraryExtension Media library configuration item.
                     * 
                     */
                    void SetLibraryExtension(const LibraryExtension& _libraryExtension);

                    /**
                     * 判断参数 LibraryExtension 是否已赋值
                     * @return LibraryExtension 是否已赋值
                     * 
                     */
                    bool LibraryExtensionHasBeenSet() const;

                    /**
                     * 获取Media library amount in Bytes. since the number type has precision limitations, this field is a String type.
                     * @return Size Media library amount in Bytes. since the number type has precision limitations, this field is a String type.
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置Media library amount in Bytes. since the number type has precision limitations, this field is a String type.
                     * @param _size Media library amount in Bytes. since the number type has precision limitations, this field is a String type.
                     * 
                     */
                    void SetSize(const std::string& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Number of media library directories. since the String type is used due to precision limitations of the number type, this field is of String type.
                     * @return DirNum Number of media library directories. since the String type is used due to precision limitations of the number type, this field is of String type.
                     * 
                     */
                    std::string GetDirNum() const;

                    /**
                     * 设置Number of media library directories. since the String type is used due to precision limitations of the number type, this field is of String type.
                     * @param _dirNum Number of media library directories. since the String type is used due to precision limitations of the number type, this field is of String type.
                     * 
                     */
                    void SetDirNum(const std::string& _dirNum);

                    /**
                     * 判断参数 DirNum 是否已赋值
                     * @return DirNum 是否已赋值
                     * 
                     */
                    bool DirNumHasBeenSet() const;

                    /**
                     * 获取Number of files in the media library. since the String type is used due to precision limitations of the number type, this field is of String type.
                     * @return FileNum Number of files in the media library. since the String type is used due to precision limitations of the number type, this field is of String type.
                     * 
                     */
                    std::string GetFileNum() const;

                    /**
                     * 设置Number of files in the media library. since the String type is used due to precision limitations of the number type, this field is of String type.
                     * @param _fileNum Number of files in the media library. since the String type is used due to precision limitations of the number type, this field is of String type.
                     * 
                     */
                    void SetFileNum(const std::string& _fileNum);

                    /**
                     * 判断参数 FileNum 是否已赋值
                     * @return FileNum 是否已赋值
                     * 
                     */
                    bool FileNumHasBeenSet() const;

                private:

                    /**
                     * Media library ID.
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                    /**
                     * Specifies the friendly name of the media library.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Specifies the COS storage bucket bound to the media library.
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * Specifies the region where the COS bucket bound to the media library is located.
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * Specifies the access domain of the business API for the media library.
                     */
                    std::string m_accessDomain;
                    bool m_accessDomainHasBeenSet;

                    /**
                     * Creation time of the media library.
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * Media library configuration item.
                     */
                    LibraryExtension m_libraryExtension;
                    bool m_libraryExtensionHasBeenSet;

                    /**
                     * Media library amount in Bytes. since the number type has precision limitations, this field is a String type.
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Number of media library directories. since the String type is used due to precision limitations of the number type, this field is of String type.
                     */
                    std::string m_dirNum;
                    bool m_dirNumHasBeenSet;

                    /**
                     * Number of files in the media library. since the String type is used due to precision limitations of the number type, this field is of String type.
                     */
                    std::string m_fileNum;
                    bool m_fileNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_LIBRARY_H_
