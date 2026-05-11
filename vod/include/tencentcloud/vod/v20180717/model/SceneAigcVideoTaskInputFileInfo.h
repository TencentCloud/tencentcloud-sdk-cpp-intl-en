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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCVIDEOTASKINPUTFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCVIDEOTASKINPUTFILEINFO_H_

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
                * Scenario-based AIGC image generation task input file info
                */
                class SceneAigcVideoTaskInputFileInfo : public AbstractModel
                {
                public:
                    SceneAigcVideoTaskInputFileInfo();
                    ~SceneAigcVideoTaskInputFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input video file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible URL;</li>
                     * @return Type Input video file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible URL;</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Input video file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible URL;</li>
                     * @param _type Input video file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible URL;</li>
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
                     * 获取Media file ID of the image file, which is the globally unique ID of the file in VOD, is assigned by the VOD backend after successful upload. You can get this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [VOD console](https://console.cloud.tencent.com/vod/media). This parameter is valid when the Type value is File.
Description:
1. Use images less than 7M.
Image format. Valid values: jpeg, jpg, png, and webp.
                     * @return FileId Media file ID of the image file, which is the globally unique ID of the file in VOD, is assigned by the VOD backend after successful upload. You can get this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [VOD console](https://console.cloud.tencent.com/vod/media). This parameter is valid when the Type value is File.
Description:
1. Use images less than 7M.
Image format. Valid values: jpeg, jpg, png, and webp.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media file ID of the image file, which is the globally unique ID of the file in VOD, is assigned by the VOD backend after successful upload. You can get this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [VOD console](https://console.cloud.tencent.com/vod/media). This parameter is valid when the Type value is File.
Description:
1. Use images less than 7M.
Image format. Valid values: jpeg, jpg, png, and webp.
                     * @param _fileId Media file ID of the image file, which is the globally unique ID of the file in VOD, is assigned by the VOD backend after successful upload. You can get this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [VOD console](https://console.cloud.tencent.com/vod/media). This parameter is valid when the Type value is File.
Description:
1. Use images less than 7M.
Image format. Valid values: jpeg, jpg, png, and webp.
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
                     * 获取Accessible file URL. This parameter is valid when the Type value is Url.
Description:
1. Use images less than 7M.
Image format. Valid values: jpeg, jpg, png, and webp.
                     * @return Url Accessible file URL. This parameter is valid when the Type value is Url.
Description:
1. Use images less than 7M.
Image format. Valid values: jpeg, jpg, png, and webp.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Accessible file URL. This parameter is valid when the Type value is Url.
Description:
1. Use images less than 7M.
Image format. Valid values: jpeg, jpg, png, and webp.
                     * @param _url Accessible file URL. This parameter is valid when the Type value is Url.
Description:
1. Use images less than 7M.
Image format. Valid values: jpeg, jpg, png, and webp.
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
                     * Input video file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible URL;</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Media file ID of the image file, which is the globally unique ID of the file in VOD, is assigned by the VOD backend after successful upload. You can get this field in the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [VOD console](https://console.cloud.tencent.com/vod/media). This parameter is valid when the Type value is File.
Description:
1. Use images less than 7M.
Image format. Valid values: jpeg, jpg, png, and webp.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Accessible file URL. This parameter is valid when the Type value is Url.
Description:
1. Use images less than 7M.
Image format. Valid values: jpeg, jpg, png, and webp.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCVIDEOTASKINPUTFILEINFO_H_
