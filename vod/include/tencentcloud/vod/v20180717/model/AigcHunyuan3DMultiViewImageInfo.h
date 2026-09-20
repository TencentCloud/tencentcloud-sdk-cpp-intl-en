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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DMULTIVIEWIMAGEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DMULTIVIEWIMAGEINFO_H_

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
                * Multi-perspective diagram information of AIGC Hunyuan 3D.
                */
                class AigcHunyuan3DMultiViewImageInfo : public AbstractModel
                {
                public:
                    AigcHunyuan3DMultiViewImageInfo();
                    ~AigcHunyuan3DMultiViewImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Input file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible URL;</li></p>
                     * @return Type <p>Input file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible URL;</li></p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Input file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible URL;</li></p>
                     * @param _type <p>Input file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible URL;</li></p>
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
                     * 获取<p>File ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="/document/product/266/7830">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when Type is File. Description: Supported image formats: jpg, jpeg, png, bmp, webp.</p>
                     * @return FileId <p>File ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="/document/product/266/7830">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when Type is File. Description: Supported image formats: jpg, jpeg, png, bmp, webp.</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>File ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="/document/product/266/7830">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when Type is File. Description: Supported image formats: jpg, jpeg, png, bmp, webp.</p>
                     * @param _fileId <p>File ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="/document/product/266/7830">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when Type is File. Description: Supported image formats: jpg, jpeg, png, bmp, webp.</p>
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
                     * 获取<p>Accessible file URL. This parameter is valid when Type is Url. Description: image format values: support jpg, jpeg, png, bmp, webp.</p>
                     * @return Url <p>Accessible file URL. This parameter is valid when Type is Url. Description: image format values: support jpg, jpeg, png, bmp, webp.</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Accessible file URL. This parameter is valid when Type is Url. Description: image format values: support jpg, jpeg, png, bmp, webp.</p>
                     * @param _url <p>Accessible file URL. This parameter is valid when Type is Url. Description: image format values: support jpg, jpeg, png, bmp, webp.</p>
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
                     * 获取<p>Viewing angle image type.</p><p>Enumeration values:</p><ul><li><p>front: Front view (required)</p></li><li><p>back: Back view</p></li><li><p>left: Left view</p></li><li><p>right: Right view</p></li><li><p>top: Top view</p></li><li><p>bottom: Bottom view</p></li><li><p>left_front: Left front 45°</p></li><li><p>right_front: Right front 45°</p></li><li><p>Must contain the front view;</p></li><li><p>The same ViewType cannot be duplicated.</p></li></ul>
                     * @return ViewType <p>Viewing angle image type.</p><p>Enumeration values:</p><ul><li><p>front: Front view (required)</p></li><li><p>back: Back view</p></li><li><p>left: Left view</p></li><li><p>right: Right view</p></li><li><p>top: Top view</p></li><li><p>bottom: Bottom view</p></li><li><p>left_front: Left front 45°</p></li><li><p>right_front: Right front 45°</p></li><li><p>Must contain the front view;</p></li><li><p>The same ViewType cannot be duplicated.</p></li></ul>
                     * 
                     */
                    std::string GetViewType() const;

                    /**
                     * 设置<p>Viewing angle image type.</p><p>Enumeration values:</p><ul><li><p>front: Front view (required)</p></li><li><p>back: Back view</p></li><li><p>left: Left view</p></li><li><p>right: Right view</p></li><li><p>top: Top view</p></li><li><p>bottom: Bottom view</p></li><li><p>left_front: Left front 45°</p></li><li><p>right_front: Right front 45°</p></li><li><p>Must contain the front view;</p></li><li><p>The same ViewType cannot be duplicated.</p></li></ul>
                     * @param _viewType <p>Viewing angle image type.</p><p>Enumeration values:</p><ul><li><p>front: Front view (required)</p></li><li><p>back: Back view</p></li><li><p>left: Left view</p></li><li><p>right: Right view</p></li><li><p>top: Top view</p></li><li><p>bottom: Bottom view</p></li><li><p>left_front: Left front 45°</p></li><li><p>right_front: Right front 45°</p></li><li><p>Must contain the front view;</p></li><li><p>The same ViewType cannot be duplicated.</p></li></ul>
                     * 
                     */
                    void SetViewType(const std::string& _viewType);

                    /**
                     * 判断参数 ViewType 是否已赋值
                     * @return ViewType 是否已赋值
                     * 
                     */
                    bool ViewTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Input file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible URL;</li></p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>File ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="/document/product/266/7830">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when Type is File. Description: Supported image formats: jpg, jpeg, png, bmp, webp.</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>Accessible file URL. This parameter is valid when Type is Url. Description: image format values: support jpg, jpeg, png, bmp, webp.</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Viewing angle image type.</p><p>Enumeration values:</p><ul><li><p>front: Front view (required)</p></li><li><p>back: Back view</p></li><li><p>left: Left view</p></li><li><p>right: Right view</p></li><li><p>top: Top view</p></li><li><p>bottom: Bottom view</p></li><li><p>left_front: Left front 45°</p></li><li><p>right_front: Right front 45°</p></li><li><p>Must contain the front view;</p></li><li><p>The same ViewType cannot be duplicated.</p></li></ul>
                     */
                    std::string m_viewType;
                    bool m_viewTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DMULTIVIEWIMAGEINFO_H_
