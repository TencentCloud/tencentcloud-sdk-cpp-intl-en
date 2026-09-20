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
                * Information of the output file of an AIGC Hunyuan 3D task.
                */
                class AigcHunyuan3DTaskOutputFileInfo : public AbstractModel
                {
                public:
                    AigcHunyuan3DTaskOutputFileInfo();
                    ~AigcHunyuan3DTaskOutputFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Storage mode. Valid values: <li>Permanent: retained permanently;</li> <li>Temporary: temporary storage;</li> Default value: Temporary</p>
                     * @return StorageMode <p>Storage mode. Valid values: <li>Permanent: retained permanently;</li> <li>Temporary: temporary storage;</li> Default value: Temporary</p>
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置<p>Storage mode. Valid values: <li>Permanent: retained permanently;</li> <li>Temporary: temporary storage;</li> Default value: Temporary</p>
                     * @param _storageMode <p>Storage mode. Valid values: <li>Permanent: retained permanently;</li> <li>Temporary: temporary storage;</li> Default value: Temporary</p>
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
                     * 获取<p>Expiry date of the output file. The file will be deleted after this time. The default is permanent with no expiration. The format follows the ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     * @return ExpireTime <p>Expiry date of the output file. The file will be deleted after this time. The default is permanent with no expiration. The format follows the ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>Expiry date of the output file. The file will be deleted after this time. The default is permanent with no expiration. The format follows the ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     * @param _expireTime <p>Expiry date of the output file. The file will be deleted after this time. The default is permanent with no expiration. The format follows the ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
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
                     * 获取<p>File type, for example, OBJ, GLB, or FBX.</p>
                     * @return FileType <p>File type, for example, OBJ, GLB, or FBX.</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>File type, for example, OBJ, GLB, or FBX.</p>
                     * @param _fileType <p>File type, for example, OBJ, GLB, or FBX.</p>
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
                     * 获取<p>Output file address.</p>
                     * @return FileUrl <p>Output file address.</p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>Output file address.</p>
                     * @param _fileUrl <p>Output file address.</p>
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
                     * 获取<p>Output file preview address.</p><p>Empty if no file preview address is available.</p>
                     * @return PreviewFileUrl <p>Output file preview address.</p><p>Empty if no file preview address is available.</p>
                     * 
                     */
                    std::string GetPreviewFileUrl() const;

                    /**
                     * 设置<p>Output file preview address.</p><p>Empty if no file preview address is available.</p>
                     * @param _previewFileUrl <p>Output file preview address.</p><p>Empty if no file preview address is available.</p>
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
                     * <p>Storage mode. Valid values: <li>Permanent: retained permanently;</li> <li>Temporary: temporary storage;</li> Default value: Temporary</p>
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * <p>Expiry date of the output file. The file will be deleted after this time. The default is permanent with no expiration. The format follows the ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>File type, for example, OBJ, GLB, or FBX.</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>Output file address.</p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p>Output file preview address.</p><p>Empty if no file preview address is available.</p>
                     */
                    std::string m_previewFileUrl;
                    bool m_previewFileUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DTASKOUTPUTFILEINFO_H_
