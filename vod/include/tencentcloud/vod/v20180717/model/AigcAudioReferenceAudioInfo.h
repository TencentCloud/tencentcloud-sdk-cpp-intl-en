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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOREFERENCEAUDIOINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOREFERENCEAUDIOINFO_H_

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
                * See audio content.
                */
                class AigcAudioReferenceAudioInfo : public AbstractModel
                {
                public:
                    AigcAudioReferenceAudioInfo();
                    ~AigcAudioReferenceAudioInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Accessible file URL. This parameter is valid when Type value is Url. Description: 1. Recommended image less than 7M; 2. Image format value: jpeg, jpg, png, webp.</p>
                     * @return Type <p>Accessible file URL. This parameter is valid when Type value is Url. Description: 1. Recommended image less than 7M; 2. Image format value: jpeg, jpg, png, webp.</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Accessible file URL. This parameter is valid when Type value is Url. Description: 1. Recommended image less than 7M; 2. Image format value: jpeg, jpg, png, webp.</p>
                     * @param _type <p>Accessible file URL. This parameter is valid when Type value is Url. Description: 1. Recommended image less than 7M; 2. Image format value: jpeg, jpg, png, webp.</p>
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
                     * 获取<p>The media file ID of the audio file, which is the globally unique identifier of this file on VOD, is assigned by the VOD backend after a successful upload. You can retrieve this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File.</p>
                     * @return FileId <p>The media file ID of the audio file, which is the globally unique identifier of this file on VOD, is assigned by the VOD backend after a successful upload. You can retrieve this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File.</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>The media file ID of the audio file, which is the globally unique identifier of this file on VOD, is assigned by the VOD backend after a successful upload. You can retrieve this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File.</p>
                     * @param _fileId <p>The media file ID of the audio file, which is the globally unique identifier of this file on VOD, is assigned by the VOD backend after a successful upload. You can retrieve this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File.</p>
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
                     * 获取<p>Audio file URL, which must be external network accessible. This parameter is valid when the Type value is Url.</p>
                     * @return Url <p>Audio file URL, which must be external network accessible. This parameter is valid when the Type value is Url.</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Audio file URL, which must be external network accessible. This parameter is valid when the Type value is Url.</p>
                     * @param _url <p>Audio file URL, which must be external network accessible. This parameter is valid when the Type value is Url.</p>
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
                     * <p>Accessible file URL. This parameter is valid when Type value is Url. Description: 1. Recommended image less than 7M; 2. Image format value: jpeg, jpg, png, webp.</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>The media file ID of the audio file, which is the globally unique identifier of this file on VOD, is assigned by the VOD backend after a successful upload. You can retrieve this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File.</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>Audio file URL, which must be external network accessible. This parameter is valid when the Type value is Url.</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOREFERENCEAUDIOINFO_H_
