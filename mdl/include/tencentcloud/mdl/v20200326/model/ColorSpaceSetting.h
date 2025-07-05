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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_COLORSPACESETTING_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_COLORSPACESETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Color space setting.
                */
                class ColorSpaceSetting : public AbstractModel
                {
                public:
                    ColorSpaceSetting();
                    ~ColorSpaceSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Color space, supports `PASSTHROUGH` (transparent transmission, only supports H265); optional.
                     * @return ColorSpace Color space, supports `PASSTHROUGH` (transparent transmission, only supports H265); optional.
                     * 
                     */
                    std::string GetColorSpace() const;

                    /**
                     * 设置Color space, supports `PASSTHROUGH` (transparent transmission, only supports H265); optional.
                     * @param _colorSpace Color space, supports `PASSTHROUGH` (transparent transmission, only supports H265); optional.
                     * 
                     */
                    void SetColorSpace(const std::string& _colorSpace);

                    /**
                     * 判断参数 ColorSpace 是否已赋值
                     * @return ColorSpace 是否已赋值
                     * 
                     */
                    bool ColorSpaceHasBeenSet() const;

                private:

                    /**
                     * Color space, supports `PASSTHROUGH` (transparent transmission, only supports H265); optional.
                     */
                    std::string m_colorSpace;
                    bool m_colorSpaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_COLORSPACESETTING_H_
