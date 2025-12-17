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

#ifndef TENCENTCLOUD_AI3D_V20250513_MODEL_FILE3D_H_
#define TENCENTCLOUD_AI3D_V20250513_MODEL_FILE3D_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ai3d
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * 3D file.
                */
                class File3D : public AbstractModel
                {
                public:
                    File3D();
                    ~File3D() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the file format.
                     * @return Type Specifies the file format.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Specifies the file format.
                     * @param _type Specifies the file format.
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
                     * 获取File Url (valid for 24 hours).
                     * @return Url File Url (valid for 24 hours).
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置File Url (valid for 24 hours).
                     * @param _url File Url (valid for 24 hours).
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
                     * 获取Preview image Url.
                     * @return PreviewImageUrl Preview image Url.
                     * 
                     */
                    std::string GetPreviewImageUrl() const;

                    /**
                     * 设置Preview image Url.
                     * @param _previewImageUrl Preview image Url.
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
                     * Specifies the file format.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * File Url (valid for 24 hours).
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Preview image Url.
                     */
                    std::string m_previewImageUrl;
                    bool m_previewImageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AI3D_V20250513_MODEL_FILE3D_H_
