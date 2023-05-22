/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_KEY_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_KEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Key information
                */
                class Key : public AbstractModel
                {
                public:
                    Key();
                    ~Key() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The name of the recognized field.
                     * @return AutoName The name of the recognized field.
                     */
                    std::string GetAutoName() const;

                    /**
                     * 设置The name of the recognized field.
                     * @param AutoName The name of the recognized field.
                     */
                    void SetAutoName(const std::string& _autoName);

                    /**
                     * 判断参数 AutoName 是否已赋值
                     * @return AutoName 是否已赋值
                     */
                    bool AutoNameHasBeenSet() const;

                private:

                    /**
                     * The name of the recognized field.
                     */
                    std::string m_autoName;
                    bool m_autoNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_KEY_H_
