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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOREDRAWTASKINPUTFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOREDRAWTASKINPUTFILEINFO_H_

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
                * Input file info for AIGC video conversion tasks.
                */
                class AigcVideoRedrawTaskInputFileInfo : public AbstractModel
                {
                public:
                    AigcVideoRedrawTaskInputFileInfo();
                    ~AigcVideoRedrawTaskInputFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Input video file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible Url;</li></p>
                     * @return Type <p>Input video file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible Url;</li></p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Input video file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible Url;</li></p>
                     * @param _type <p>Input video file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible Url;</li></p>
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
                     * 获取<p>Media file ID, the globally unique identifier of this file in VOD, is assigned by the VOD backend after a successful upload. You can obtain this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File. Description: 1. Recommended image size is less than 10M. 2. Image format values: jpeg, jpg, png.</p>
                     * @return FileId <p>Media file ID, the globally unique identifier of this file in VOD, is assigned by the VOD backend after a successful upload. You can obtain this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File. Description: 1. Recommended image size is less than 10M. 2. Image format values: jpeg, jpg, png.</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>Media file ID, the globally unique identifier of this file in VOD, is assigned by the VOD backend after a successful upload. You can obtain this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File. Description: 1. Recommended image size is less than 10M. 2. Image format values: jpeg, jpg, png.</p>
                     * @param _fileId <p>Media file ID, the globally unique identifier of this file in VOD, is assigned by the VOD backend after a successful upload. You can obtain this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File. Description: 1. Recommended image size is less than 10M. 2. Image format values: jpeg, jpg, png.</p>
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
                     * 获取<p>Accessible file URL. This parameter is valid when Type value is Url. Description: 1. Recommended image less than 10M; 2. Image format value is jpeg, jpg, png.</p>
                     * @return Url <p>Accessible file URL. This parameter is valid when Type value is Url. Description: 1. Recommended image less than 10M; 2. Image format value is jpeg, jpg, png.</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Accessible file URL. This parameter is valid when Type value is Url. Description: 1. Recommended image less than 10M; 2. Image format value is jpeg, jpg, png.</p>
                     * @param _url <p>Accessible file URL. This parameter is valid when Type value is Url. Description: 1. Recommended image less than 10M; 2. Image format value is jpeg, jpg, png.</p>
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
                     * <p>Input video file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible Url;</li></p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Media file ID, the globally unique identifier of this file in VOD, is assigned by the VOD backend after a successful upload. You can obtain this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File. Description: 1. Recommended image size is less than 10M. 2. Image format values: jpeg, jpg, png.</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>Accessible file URL. This parameter is valid when Type value is Url. Description: 1. Recommended image less than 10M; 2. Image format value is jpeg, jpg, png.</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOREDRAWTASKINPUTFILEINFO_H_
