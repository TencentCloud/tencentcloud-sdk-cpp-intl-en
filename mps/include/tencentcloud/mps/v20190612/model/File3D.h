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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FILE3D_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FILE3D_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Query returns each output file
                */
                class File3D : public AbstractModel
                {
                public:
                    File3D();
                    ~File3D() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>File type: OBJ / GLB / FBX / STL / USDZ</p><p>Enumeration values:</p><ul><li>OBJ: common 3D exchange format</li><li>GLB: glTF 2.0 binary ("the JPEG of the 3D world")</li><li>FBX: Autodesk film/gaming industry standard</li><li>STL: 3D print/CAD triangle mesh</li><li>USDZ: Pixar/Apple packaged scenario description</li></ul>
                     * @return Type <p>File type: OBJ / GLB / FBX / STL / USDZ</p><p>Enumeration values:</p><ul><li>OBJ: common 3D exchange format</li><li>GLB: glTF 2.0 binary ("the JPEG of the 3D world")</li><li>FBX: Autodesk film/gaming industry standard</li><li>STL: 3D print/CAD triangle mesh</li><li>USDZ: Pixar/Apple packaged scenario description</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>File type: OBJ / GLB / FBX / STL / USDZ</p><p>Enumeration values:</p><ul><li>OBJ: common 3D exchange format</li><li>GLB: glTF 2.0 binary ("the JPEG of the 3D world")</li><li>FBX: Autodesk film/gaming industry standard</li><li>STL: 3D print/CAD triangle mesh</li><li>USDZ: Pixar/Apple packaged scenario description</li></ul>
                     * @param _type <p>File type: OBJ / GLB / FBX / STL / USDZ</p><p>Enumeration values:</p><ul><li>OBJ: common 3D exchange format</li><li>GLB: glTF 2.0 binary ("the JPEG of the 3D world")</li><li>FBX: Autodesk film/gaming industry standard</li><li>STL: 3D print/CAD triangle mesh</li><li>USDZ: Pixar/Apple packaged scenario description</li></ul>
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
                     * 获取<p>File download URL (temporary signature, general TTL 24h)</p>
                     * @return Url <p>File download URL (temporary signature, general TTL 24h)</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>File download URL (temporary signature, general TTL 24h)</p>
                     * @param _url <p>File download URL (temporary signature, general TTL 24h)</p>
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
                     * 获取<p>Preview image URL (if it exists)</p>
                     * @return PreviewImageUrl <p>Preview image URL (if it exists)</p>
                     * 
                     */
                    std::string GetPreviewImageUrl() const;

                    /**
                     * 设置<p>Preview image URL (if it exists)</p>
                     * @param _previewImageUrl <p>Preview image URL (if it exists)</p>
                     * 
                     */
                    void SetPreviewImageUrl(const std::string& _previewImageUrl);

                    /**
                     * 判断参数 PreviewImageUrl 是否已赋值
                     * @return PreviewImageUrl 是否已赋值
                     * 
                     */
                    bool PreviewImageUrlHasBeenSet() const;

                private:

                    /**
                     * <p>File type: OBJ / GLB / FBX / STL / USDZ</p><p>Enumeration values:</p><ul><li>OBJ: common 3D exchange format</li><li>GLB: glTF 2.0 binary ("the JPEG of the 3D world")</li><li>FBX: Autodesk film/gaming industry standard</li><li>STL: 3D print/CAD triangle mesh</li><li>USDZ: Pixar/Apple packaged scenario description</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>File download URL (temporary signature, general TTL 24h)</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Preview image URL (if it exists)</p>
                     */
                    std::string m_previewImageUrl;
                    bool m_previewImageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FILE3D_H_
