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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_POSTMAXSIZE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_POSTMAXSIZE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Maximum size of the file uploaded for streaming via a POST request
                */
                class PostMaxSize : public AbstractModel
                {
                public:
                    PostMaxSize();
                    ~PostMaxSize() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies whether to enable custom setting of the maximum file size. 
`off`: Disable. In this case, the max size defaults to 32 MB.
`on`: Enable. You can set a custom max size.
                     * @return Switch Specifies whether to enable custom setting of the maximum file size. 
`off`: Disable. In this case, the max size defaults to 32 MB.
`on`: Enable. You can set a custom max size.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Specifies whether to enable custom setting of the maximum file size. 
`off`: Disable. In this case, the max size defaults to 32 MB.
`on`: Enable. You can set a custom max size.
                     * @param _switch Specifies whether to enable custom setting of the maximum file size. 
`off`: Disable. In this case, the max size defaults to 32 MB.
`on`: Enable. You can set a custom max size.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Maximum size. Value range: 1-500 MB.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return MaxSize Maximum size. Value range: 1-500 MB.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置Maximum size. Value range: 1-500 MB.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _maxSize Maximum size. Value range: 1-500 MB.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMaxSize(const int64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                private:

                    /**
                     * Specifies whether to enable custom setting of the maximum file size. 
`off`: Disable. In this case, the max size defaults to 32 MB.
`on`: Enable. You can set a custom max size.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Maximum size. Value range: 1-500 MB.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_POSTMAXSIZE_H_
