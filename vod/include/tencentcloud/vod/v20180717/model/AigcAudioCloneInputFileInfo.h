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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOCLONEINPUTFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOCLONEINPUTFILEINFO_H_

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
                * AIGC voice clone input file information
                */
                class AigcAudioCloneInputFileInfo : public AbstractModel
                {
                public:
                    AigcAudioCloneInputFileInfo();
                    ~AigcAudioCloneInputFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Input video file type. Valid values: <li>File: On-demand media file;</li> <li>Url: Accessible URL;</li></p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type <p>Input video file type. Valid values: <li>File: On-demand media file;</li> <li>Url: Accessible URL;</li></p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Input video file type. Valid values: <li>File: On-demand media file;</li> <li>Url: Accessible URL;</li></p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type <p>Input video file type. Valid values: <li>File: On-demand media file;</li> <li>Url: Accessible URL;</li></p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Media file ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after successful upload. You can get this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when Type value is File. Description: 1. Image less than 10M is recommended. 2. Image format values: jpeg, jpg, png.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileId <p>Media file ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after successful upload. You can get this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when Type value is File. Description: 1. Image less than 10M is recommended. 2. Image format values: jpeg, jpg, png.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>Media file ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after successful upload. You can get this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when Type value is File. Description: 1. Image less than 10M is recommended. 2. Image format values: jpeg, jpg, png.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileId <p>Media file ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after successful upload. You can get this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when Type value is File. Description: 1. Image less than 10M is recommended. 2. Image format values: jpeg, jpg, png.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Accessible file URL. This parameter is valid when Type value is Url. Description: 1. Recommended for use with images less than 10M; 2. Image format value: jpeg, jpg, png.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Url <p>Accessible file URL. This parameter is valid when Type value is Url. Description: 1. Recommended for use with images less than 10M; 2. Image format value: jpeg, jpg, png.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Accessible file URL. This parameter is valid when Type value is Url. Description: 1. Recommended for use with images less than 10M; 2. Image format value: jpeg, jpg, png.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _url <p>Accessible file URL. This parameter is valid when Type value is Url. Description: 1. Recommended for use with images less than 10M; 2. Image format value: jpeg, jpg, png.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * <p>Input video file type. Valid values: <li>File: On-demand media file;</li> <li>Url: Accessible URL;</li></p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Media file ID, the globally unique identifier of the file in VOD, is assigned by the VOD backend after successful upload. You can get this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when Type value is File. Description: 1. Image less than 10M is recommended. 2. Image format values: jpeg, jpg, png.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>Accessible file URL. This parameter is valid when Type value is Url. Description: 1. Recommended for use with images less than 10M; 2. Image format value: jpeg, jpg, png.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOCLONEINPUTFILEINFO_H_
