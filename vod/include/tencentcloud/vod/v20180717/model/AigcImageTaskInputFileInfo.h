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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGETASKINPUTFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGETASKINPUTFILEINFO_H_

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
                * AIGC image generation task input file information.
                */
                class AigcImageTaskInputFileInfo : public AbstractModel
                {
                public:
                    AigcImageTaskInputFileInfo();
                    ~AigcImageTaskInputFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input video File type. valid values: <li>File: on-demand media File;</li> <li>Url: accessible Url;</li>.
                     * @return Type Input video File type. valid values: <li>File: on-demand media File;</li> <li>Url: accessible Url;</li>.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Input video File type. valid values: <li>File: on-demand media File;</li> <li>Url: accessible Url;</li>.
                     * @param _type Input video File type. valid values: <li>File: on-demand media File;</li> <li>Url: accessible Url;</li>.
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
                     * 获取The media File ID of the image File, which is the globally unique identifier of the File in vod, is assigned by the vod backend after successful upload. you can get this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). this parameter is valid when the Type value is File.
Description:.
1. recommended for use: image less than 7 mb.
2. Valid values of image format: jpeg, jpg, png, and webp.
                     * @return FileId The media File ID of the image File, which is the globally unique identifier of the File in vod, is assigned by the vod backend after successful upload. you can get this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). this parameter is valid when the Type value is File.
Description:.
1. recommended for use: image less than 7 mb.
2. Valid values of image format: jpeg, jpg, png, and webp.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置The media File ID of the image File, which is the globally unique identifier of the File in vod, is assigned by the vod backend after successful upload. you can get this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). this parameter is valid when the Type value is File.
Description:.
1. recommended for use: image less than 7 mb.
2. Valid values of image format: jpeg, jpg, png, and webp.
                     * @param _fileId The media File ID of the image File, which is the globally unique identifier of the File in vod, is assigned by the vod backend after successful upload. you can get this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). this parameter is valid when the Type value is File.
Description:.
1. recommended for use: image less than 7 mb.
2. Valid values of image format: jpeg, jpg, png, and webp.
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
                     * 获取Accessible file URL. this parameter is valid when the Type value is URL.
Description:.
1. recommended for use: image less than 7 mb.
2. Valid values of image format: jpeg, jpg, png, and webp.
                     * @return Url Accessible file URL. this parameter is valid when the Type value is URL.
Description:.
1. recommended for use: image less than 7 mb.
2. Valid values of image format: jpeg, jpg, png, and webp.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Accessible file URL. this parameter is valid when the Type value is URL.
Description:.
1. recommended for use: image less than 7 mb.
2. Valid values of image format: jpeg, jpg, png, and webp.
                     * @param _url Accessible file URL. this parameter is valid when the Type value is URL.
Description:.
1. recommended for use: image less than 7 mb.
2. Valid values of image format: jpeg, jpg, png, and webp.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Description of the input image, used to help the model understand the image. valid for GEM 2.5 and GEM 3.0 only.
                     * @return Text Description of the input image, used to help the model understand the image. valid for GEM 2.5 and GEM 3.0 only.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Description of the input image, used to help the model understand the image. valid for GEM 2.5 and GEM 3.0 only.
                     * @param _text Description of the input image, used to help the model understand the image. valid for GEM 2.5 and GEM 3.0 only.
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                private:

                    /**
                     * Input video File type. valid values: <li>File: on-demand media File;</li> <li>Url: accessible Url;</li>.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The media File ID of the image File, which is the globally unique identifier of the File in vod, is assigned by the vod backend after successful upload. you can get this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media). this parameter is valid when the Type value is File.
Description:.
1. recommended for use: image less than 7 mb.
2. Valid values of image format: jpeg, jpg, png, and webp.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Accessible file URL. this parameter is valid when the Type value is URL.
Description:.
1. recommended for use: image less than 7 mb.
2. Valid values of image format: jpeg, jpg, png, and webp.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Description of the input image, used to help the model understand the image. valid for GEM 2.5 and GEM 3.0 only.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGETASKINPUTFILEINFO_H_
