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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CONVERT3DFORMATREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CONVERT3DFORMATREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * Convert3DFormat request structure.
                */
                class Convert3DFormatRequest : public AbstractModel
                {
                public:
                    Convert3DFormatRequest();
                    ~Convert3DFormatRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取3D file url address. model file size not greater than 60 mb
Supports fbx, obj, and glb format 3d file input
                     * @return File3D 3D file url address. model file size not greater than 60 mb
Supports fbx, obj, and glb format 3d file input
                     * 
                     */
                    std::string GetFile3D() const;

                    /**
                     * 设置3D file url address. model file size not greater than 60 mb
Supports fbx, obj, and glb format 3d file input
                     * @param _file3D 3D file url address. model file size not greater than 60 mb
Supports fbx, obj, and glb format 3d file input
                     * 
                     */
                    void SetFile3D(const std::string& _file3D);

                    /**
                     * 判断参数 File3D 是否已赋值
                     * @return File3D 是否已赋值
                     * 
                     */
                    bool File3DHasBeenSet() const;

                    /**
                     * 获取Returns the 3D file format. valid values: 
STL, USDZ, FBX, MP4, GIF
Recommended input models below 50W, may timeout when selecting USDZ, MP4, or GIF format
Example value: STL.
                     * @return Format Returns the 3D file format. valid values: 
STL, USDZ, FBX, MP4, GIF
Recommended input models below 50W, may timeout when selecting USDZ, MP4, or GIF format
Example value: STL.
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Returns the 3D file format. valid values: 
STL, USDZ, FBX, MP4, GIF
Recommended input models below 50W, may timeout when selecting USDZ, MP4, or GIF format
Example value: STL.
                     * @param _format Returns the 3D file format. valid values: 
STL, USDZ, FBX, MP4, GIF
Recommended input models below 50W, may timeout when selecting USDZ, MP4, or GIF format
Example value: STL.
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                private:

                    /**
                     * 3D file url address. model file size not greater than 60 mb
Supports fbx, obj, and glb format 3d file input
                     */
                    std::string m_file3D;
                    bool m_file3DHasBeenSet;

                    /**
                     * Returns the 3D file format. valid values: 
STL, USDZ, FBX, MP4, GIF
Recommended input models below 50W, may timeout when selecting USDZ, MP4, or GIF format
Example value: STL.
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CONVERT3DFORMATREQUEST_H_
