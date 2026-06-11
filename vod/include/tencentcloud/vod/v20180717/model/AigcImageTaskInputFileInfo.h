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
                     * 获取<p>Input file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible Url;</li> <li>Base64: Base64 string of image or video conversion;</li></p>
                     * @return Type <p>Input file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible Url;</li> <li>Base64: Base64 string of image or video conversion;</li></p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Input file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible Url;</li> <li>Base64: Base64 string of image or video conversion;</li></p>
                     * @param _type <p>Input file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible Url;</li> <li>Base64: Base64 string of image or video conversion;</li></p>
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
                     * 获取<p>The media file ID of the image file, which is the globally unique identifier of this file in VOD, is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File.<br>Note:</p><ol><li>Images less than 7M are recommended;</li><li>The image format values are: jpeg, jpg, png, webp.</li></ol>
                     * @return FileId <p>The media file ID of the image file, which is the globally unique identifier of this file in VOD, is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File.<br>Note:</p><ol><li>Images less than 7M are recommended;</li><li>The image format values are: jpeg, jpg, png, webp.</li></ol>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>The media file ID of the image file, which is the globally unique identifier of this file in VOD, is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File.<br>Note:</p><ol><li>Images less than 7M are recommended;</li><li>The image format values are: jpeg, jpg, png, webp.</li></ol>
                     * @param _fileId <p>The media file ID of the image file, which is the globally unique identifier of this file in VOD, is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File.<br>Note:</p><ol><li>Images less than 7M are recommended;</li><li>The image format values are: jpeg, jpg, png, webp.</li></ol>
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
                     * 获取<p>Accessible file URL. This parameter is valid when the Type value is URL.</p><ol><li>Images less than 7M are recommended.</li><li>Image format values: jpeg, jpg, png, webp.</li></ol>
                     * @return Url <p>Accessible file URL. This parameter is valid when the Type value is URL.</p><ol><li>Images less than 7M are recommended.</li><li>Image format values: jpeg, jpg, png, webp.</li></ol>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Accessible file URL. This parameter is valid when the Type value is URL.</p><ol><li>Images less than 7M are recommended.</li><li>Image format values: jpeg, jpg, png, webp.</li></ol>
                     * @param _url <p>Accessible file URL. This parameter is valid when the Type value is URL.</p><ol><li>Images less than 7M are recommended.</li><li>Image format values: jpeg, jpg, png, webp.</li></ol>
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
                     * 获取<p>Accessible file Base64. This parameter is valid when Type value is Base64. Description:</p><ol><li>Total size of all files must not exceed 7 MB to avoid exceeding the 10 MB size limit of the cloud API after converting to Base64;</li><li>Format should be jpeg, jpg, png, or webp;</li><li>Do not include prefixes such as data:image/jpeg;base64,.</li></ol>
                     * @return Base64 <p>Accessible file Base64. This parameter is valid when Type value is Base64. Description:</p><ol><li>Total size of all files must not exceed 7 MB to avoid exceeding the 10 MB size limit of the cloud API after converting to Base64;</li><li>Format should be jpeg, jpg, png, or webp;</li><li>Do not include prefixes such as data:image/jpeg;base64,.</li></ol>
                     * 
                     */
                    std::string GetBase64() const;

                    /**
                     * 设置<p>Accessible file Base64. This parameter is valid when Type value is Base64. Description:</p><ol><li>Total size of all files must not exceed 7 MB to avoid exceeding the 10 MB size limit of the cloud API after converting to Base64;</li><li>Format should be jpeg, jpg, png, or webp;</li><li>Do not include prefixes such as data:image/jpeg;base64,.</li></ol>
                     * @param _base64 <p>Accessible file Base64. This parameter is valid when Type value is Base64. Description:</p><ol><li>Total size of all files must not exceed 7 MB to avoid exceeding the 10 MB size limit of the cloud API after converting to Base64;</li><li>Format should be jpeg, jpg, png, or webp;</li><li>Do not include prefixes such as data:image/jpeg;base64,.</li></ol>
                     * 
                     */
                    void SetBase64(const std::string& _base64);

                    /**
                     * 判断参数 Base64 是否已赋值
                     * @return Base64 是否已赋值
                     * 
                     */
                    bool Base64HasBeenSet() const;

                    /**
                     * 获取<p>Description of the input image, used to help the model understand the image. Only valid for GEM 2.5 and GEM 3.0.</p>
                     * @return Text <p>Description of the input image, used to help the model understand the image. Only valid for GEM 2.5 and GEM 3.0.</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>Description of the input image, used to help the model understand the image. Only valid for GEM 2.5 and GEM 3.0.</p>
                     * @param _text <p>Description of the input image, used to help the model understand the image. Only valid for GEM 2.5 and GEM 3.0.</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p><strong>Valid only when ModelName is OG</strong>. Image type.</p><p>Enumeration value:</p><ul><li>mask: Image mask.</li></ul>
                     * @return ReferenceType <p><strong>Valid only when ModelName is OG</strong>. Image type.</p><p>Enumeration value:</p><ul><li>mask: Image mask.</li></ul>
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置<p><strong>Valid only when ModelName is OG</strong>. Image type.</p><p>Enumeration value:</p><ul><li>mask: Image mask.</li></ul>
                     * @param _referenceType <p><strong>Valid only when ModelName is OG</strong>. Image type.</p><p>Enumeration value:</p><ul><li>mask: Image mask.</li></ul>
                     * 
                     */
                    void SetReferenceType(const std::string& _referenceType);

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Input file type. Valid values: <li>File: on-demand media file;</li> <li>Url: accessible Url;</li> <li>Base64: Base64 string of image or video conversion;</li></p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>The media file ID of the image file, which is the globally unique identifier of this file in VOD, is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when the Type value is File.<br>Note:</p><ol><li>Images less than 7M are recommended;</li><li>The image format values are: jpeg, jpg, png, webp.</li></ol>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>Accessible file URL. This parameter is valid when the Type value is URL.</p><ol><li>Images less than 7M are recommended.</li><li>Image format values: jpeg, jpg, png, webp.</li></ol>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Accessible file Base64. This parameter is valid when Type value is Base64. Description:</p><ol><li>Total size of all files must not exceed 7 MB to avoid exceeding the 10 MB size limit of the cloud API after converting to Base64;</li><li>Format should be jpeg, jpg, png, or webp;</li><li>Do not include prefixes such as data:image/jpeg;base64,.</li></ol>
                     */
                    std::string m_base64;
                    bool m_base64HasBeenSet;

                    /**
                     * <p>Description of the input image, used to help the model understand the image. Only valid for GEM 2.5 and GEM 3.0.</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p><strong>Valid only when ModelName is OG</strong>. Image type.</p><p>Enumeration value:</p><ul><li>mask: Image mask.</li></ul>
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGETASKINPUTFILEINFO_H_
