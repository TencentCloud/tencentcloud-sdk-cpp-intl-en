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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DMESHINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DMESHINFO_H_

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
                * Existing model information used to generate Hunyuan 3D models.
                */
                class AigcHunyuan3DMeshInfo : public AbstractModel
                {
                public:
                    AigcHunyuan3DMeshInfo();
                    ~AigcHunyuan3DMeshInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Input file type. Valid values: <li>File: VOD file;</li> <li>Url: accessible URL;</li></p>
                     * @return Type <p>Input file type. Valid values: <li>File: VOD file;</li> <li>Url: accessible URL;</li></p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Input file type. Valid values: <li>File: VOD file;</li> <li>Url: accessible URL;</li></p>
                     * @param _type <p>Input file type. Valid values: <li>File: VOD file;</li> <li>Url: accessible URL;</li></p>
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
                     * 获取<p>File ID, the globally unique identifier of the file in VOD, assigned by the VOD backend after successful upload. You can obtain this field in the <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when Type is File. Note: Supported image formats: glb and obj.</p>
                     * @return FileId <p>File ID, the globally unique identifier of the file in VOD, assigned by the VOD backend after successful upload. You can obtain this field in the <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when Type is File. Note: Supported image formats: glb and obj.</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>File ID, the globally unique identifier of the file in VOD, assigned by the VOD backend after successful upload. You can obtain this field in the <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when Type is File. Note: Supported image formats: glb and obj.</p>
                     * @param _fileId <p>File ID, the globally unique identifier of the file in VOD, assigned by the VOD backend after successful upload. You can obtain this field in the <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when Type is File. Note: Supported image formats: glb and obj.</p>
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
                     * 获取<p>Accessible file URL. This parameter is valid when Type is Url. Note: Supported file formats: glb and obj.</p>
                     * @return Url <p>Accessible file URL. This parameter is valid when Type is Url. Note: Supported file formats: glb and obj.</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Accessible file URL. This parameter is valid when Type is Url. Note: Supported file formats: glb and obj.</p>
                     * @param _url <p>Accessible file URL. This parameter is valid when Type is Url. Note: Supported file formats: glb and obj.</p>
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
                     * <p>Input file type. Valid values: <li>File: VOD file;</li> <li>Url: accessible URL;</li></p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>File ID, the globally unique identifier of the file in VOD, assigned by the VOD backend after successful upload. You can obtain this field in the <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>. This parameter is valid when Type is File. Note: Supported image formats: glb and obj.</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>Accessible file URL. This parameter is valid when Type is Url. Note: Supported file formats: glb and obj.</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DMESHINFO_H_
