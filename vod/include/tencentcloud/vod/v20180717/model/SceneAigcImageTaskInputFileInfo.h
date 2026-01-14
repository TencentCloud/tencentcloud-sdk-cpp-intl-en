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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGETASKINPUTFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGETASKINPUTFILEINFO_H_

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
                * Input file information for the scenario-based AIGC image generation task.
                */
                class SceneAigcImageTaskInputFileInfo : public AbstractModel
                {
                public:
                    SceneAigcImageTaskInputFileInfo();
                    ~SceneAigcImageTaskInputFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input video File type. valid values: <li>File: on-demand media File;</li> <li>Url: accessible Url;</li>
                     * @return Type Input video File type. valid values: <li>File: on-demand media File;</li> <li>Url: accessible Url;</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Input video File type. valid values: <li>File: on-demand media File;</li> <li>Url: accessible Url;</li>
                     * @param _type Input video File type. valid values: <li>File: on-demand media File;</li> <li>Url: accessible Url;</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The media File ID of the image File, which is the globally unique identifier of the File in vod, is assigned by the vod backend after successful upload. you can obtain this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). this parameter is valid when the Type value is File.
Note:
1. recommended for use with images less than 7 mb.
2. image format value is jpeg, jpg, png, webp.
                     * @return FileId The media File ID of the image File, which is the globally unique identifier of the File in vod, is assigned by the vod backend after successful upload. you can obtain this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). this parameter is valid when the Type value is File.
Note:
1. recommended for use with images less than 7 mb.
2. image format value is jpeg, jpg, png, webp.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置The media File ID of the image File, which is the globally unique identifier of the File in vod, is assigned by the vod backend after successful upload. you can obtain this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). this parameter is valid when the Type value is File.
Note:
1. recommended for use with images less than 7 mb.
2. image format value is jpeg, jpg, png, webp.
                     * @param _fileId The media File ID of the image File, which is the globally unique identifier of the File in vod, is assigned by the vod backend after successful upload. you can obtain this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). this parameter is valid when the Type value is File.
Note:
1. recommended for use with images less than 7 mb.
2. image format value is jpeg, jpg, png, webp.
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
                     * 获取Accessible file URL. this parameter is valid when Type value is Url.
Note:
1. recommended for use with images less than 7 MB.
2. image format value is jpeg, jpg, png, webp.
                     * @return Url Accessible file URL. this parameter is valid when Type value is Url.
Note:
1. recommended for use with images less than 7 MB.
2. image format value is jpeg, jpg, png, webp.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Accessible file URL. this parameter is valid when Type value is Url.
Note:
1. recommended for use with images less than 7 MB.
2. image format value is jpeg, jpg, png, webp.
                     * @param _url Accessible file URL. this parameter is valid when Type value is Url.
Note:
1. recommended for use with images less than 7 MB.
2. image format value is jpeg, jpg, png, webp.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * Input video File type. valid values: <li>File: on-demand media File;</li> <li>Url: accessible Url;</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The media File ID of the image File, which is the globally unique identifier of the File in vod, is assigned by the vod backend after successful upload. you can obtain this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). this parameter is valid when the Type value is File.
Note:
1. recommended for use with images less than 7 mb.
2. image format value is jpeg, jpg, png, webp.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Accessible file URL. this parameter is valid when Type value is Url.
Note:
1. recommended for use with images less than 7 MB.
2. image format value is jpeg, jpg, png, webp.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGETASKINPUTFILEINFO_H_
