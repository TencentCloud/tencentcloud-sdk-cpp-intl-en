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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKOUTPUTFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKOUTPUTFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaMetaData.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AIGC video task output file information.
                */
                class AigcVideoTaskOutputFileInfo : public AbstractModel
                {
                public:
                    AigcVideoTaskOutputFileInfo();
                    ~AigcVideoTaskOutputFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Storage mode. valid values: <li>Permanent: Permanent storage. the generated video file will be stored in vod.</li> <li>Temporary: Temporary storage. the generated video file will not be stored in vod.</li>
Default value: Temporary.
                     * @return StorageMode Storage mode. valid values: <li>Permanent: Permanent storage. the generated video file will be stored in vod.</li> <li>Temporary: Temporary storage. the generated video file will not be stored in vod.</li>
Default value: Temporary.
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置Storage mode. valid values: <li>Permanent: Permanent storage. the generated video file will be stored in vod.</li> <li>Temporary: Temporary storage. the generated video file will not be stored in vod.</li>
Default value: Temporary.
                     * @param _storageMode Storage mode. valid values: <li>Permanent: Permanent storage. the generated video file will be stored in vod.</li> <li>Temporary: Temporary storage. the generated video file will not be stored in vod.</li>
Default value: Temporary.
                     * 
                     */
                    void SetStorageMode(const std::string& _storageMode);

                    /**
                     * 判断参数 StorageMode 是否已赋值
                     * @return StorageMode 是否已赋值
                     * 
                     */
                    bool StorageModeHasBeenSet() const;

                    /**
                     * 获取Output media filename, longest 64 characters. default filename is specified by the system.
                     * @return MediaName Output media filename, longest 64 characters. default filename is specified by the system.
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置Output media filename, longest 64 characters. default filename is specified by the system.
                     * @param _mediaName Output media filename, longest 64 characters. default filename is specified by the system.
                     * 
                     */
                    void SetMediaName(const std::string& _mediaName);

                    /**
                     * 判断参数 MediaName 是否已赋值
                     * @return MediaName 是否已赋值
                     * 
                     */
                    bool MediaNameHasBeenSet() const;

                    /**
                     * 获取Category ID, used to categorize and manage media. you can create a category and obtain the category ID via the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) api.
<Li>Default value: 0, indicate other categories.</li>.
                     * @return ClassId Category ID, used to categorize and manage media. you can create a category and obtain the category ID via the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) api.
<Li>Default value: 0, indicate other categories.</li>.
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Category ID, used to categorize and manage media. you can create a category and obtain the category ID via the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) api.
<Li>Default value: 0, indicate other categories.</li>.
                     * @param _classId Category ID, used to categorize and manage media. you can create a category and obtain the category ID via the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) api.
<Li>Default value: 0, indicate other categories.</li>.
                     * 
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取The expiry date of the output file. files will be deleted longer than this time. default is never expire. format according to ISO 8601 standard. see [ISO date format description](https://www.tencentcloud.comom/document/product/266/11732?from_cn_redirect=1#I).
                     * @return ExpireTime The expiry date of the output file. files will be deleted longer than this time. default is never expire. format according to ISO 8601 standard. see [ISO date format description](https://www.tencentcloud.comom/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置The expiry date of the output file. files will be deleted longer than this time. default is never expire. format according to ISO 8601 standard. see [ISO date format description](https://www.tencentcloud.comom/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _expireTime The expiry date of the output file. files will be deleted longer than this time. default is never expire. format according to ISO 8601 standard. see [ISO date format description](https://www.tencentcloud.comom/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取File Type.
                     * @return FileType File Type.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置File Type.
                     * @param _fileType File Type.
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取File Url.
                     * @return FileUrl File Url.
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置File Url.
                     * @param _fileUrl File Url.
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取File ID.
                     * @return FileId File ID.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置File ID.
                     * @param _fileId File ID.
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Meta Data.
                     * @return MetaData Meta Data.
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置Meta Data.
                     * @param _metaData Meta Data.
                     * 
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                private:

                    /**
                     * Storage mode. valid values: <li>Permanent: Permanent storage. the generated video file will be stored in vod.</li> <li>Temporary: Temporary storage. the generated video file will not be stored in vod.</li>
Default value: Temporary.
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * Output media filename, longest 64 characters. default filename is specified by the system.
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * Category ID, used to categorize and manage media. you can create a category and obtain the category ID via the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) api.
<Li>Default value: 0, indicate other categories.</li>.
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * The expiry date of the output file. files will be deleted longer than this time. default is never expire. format according to ISO 8601 standard. see [ISO date format description](https://www.tencentcloud.comom/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * File Type.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * File Url.
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * File ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Meta Data.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKOUTPUTFILEINFO_H_
