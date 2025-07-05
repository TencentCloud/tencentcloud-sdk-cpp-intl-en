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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_CAPTIONSELECTOR_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_CAPTIONSELECTOR_H_

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
                * Caption selector.
                */
                class CaptionSelector : public AbstractModel
                {
                public:
                    CaptionSelector();
                    ~CaptionSelector() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Caption selector name, which can contain 1-32 letters, digits, and underscores.
                     * @return Name Caption selector name, which can contain 1-32 letters, digits, and underscores.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Caption selector name, which can contain 1-32 letters, digits, and underscores.
                     * @param _name Caption selector name, which can contain 1-32 letters, digits, and underscores.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Caption source type, only support `SCTE-128`.
                     * @return CaptionSourceType Caption source type, only support `SCTE-128`.
                     * 
                     */
                    std::string GetCaptionSourceType() const;

                    /**
                     * 设置Caption source type, only support `SCTE-128`.
                     * @param _captionSourceType Caption source type, only support `SCTE-128`.
                     * 
                     */
                    void SetCaptionSourceType(const std::string& _captionSourceType);

                    /**
                     * 判断参数 CaptionSourceType 是否已赋值
                     * @return CaptionSourceType 是否已赋值
                     * 
                     */
                    bool CaptionSourceTypeHasBeenSet() const;

                private:

                    /**
                     * Caption selector name, which can contain 1-32 letters, digits, and underscores.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Caption source type, only support `SCTE-128`.
                     */
                    std::string m_captionSourceType;
                    bool m_captionSourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_CAPTIONSELECTOR_H_
