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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_RCBASR_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_RCBASR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * Audit ASR text information of the segment
                */
                class RcbAsr : public AbstractModel
                {
                public:
                    RcbAsr();
                    ~RcbAsr() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field is used to return the recognized text content of an audio file. **Up to the first 1,000 characters** can be recognized.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Text This field is used to return the recognized text content of an audio file. **Up to the first 1,000 characters** can be recognized.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置This field is used to return the recognized text content of an audio file. **Up to the first 1,000 characters** can be recognized.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _text This field is used to return the recognized text content of an audio file. **Up to the first 1,000 characters** can be recognized.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取This field is used to return the creation time of the queried task in ISO 8601 format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatedAt This field is used to return the creation time of the queried task in ISO 8601 format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置This field is used to return the creation time of the queried task in ISO 8601 format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createdAt This field is used to return the creation time of the queried task in ISO 8601 format.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                private:

                    /**
                     * This field is used to return the recognized text content of an audio file. **Up to the first 1,000 characters** can be recognized.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * This field is used to return the creation time of the queried task in ISO 8601 format.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_RCBASR_H_
