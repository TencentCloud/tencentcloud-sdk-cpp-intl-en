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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DTASKOUTPUTFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DTASKOUTPUTFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class AigcHunyuan3DTaskOutputFileInfo : public AbstractModel
                {
                public:
                    AigcHunyuan3DTaskOutputFileInfo();
                    ~AigcHunyuan3DTaskOutputFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return StorageMode 
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置
                     * @param _storageMode 
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
                     * 获取
                     * @return ExpireTime 
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置
                     * @param _expireTime 
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
                     * 获取
                     * @return FileType 
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置
                     * @param _fileType 
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
                     * 获取
                     * @return FileUrl 
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置
                     * @param _fileUrl 
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
                     * 获取
                     * @return PreviewFileUrl 
                     * 
                     */
                    std::string GetPreviewFileUrl() const;

                    /**
                     * 设置
                     * @param _previewFileUrl 
                     * 
                     */
                    void SetPreviewFileUrl(const std::string& _previewFileUrl);

                    /**
                     * 判断参数 PreviewFileUrl 是否已赋值
                     * @return PreviewFileUrl 是否已赋值
                     * 
                     */
                    bool PreviewFileUrlHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_previewFileUrl;
                    bool m_previewFileUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DTASKOUTPUTFILEINFO_H_
