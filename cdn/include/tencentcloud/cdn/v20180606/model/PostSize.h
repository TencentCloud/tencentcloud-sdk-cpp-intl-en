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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_POSTSIZE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_POSTSIZE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Maximum size of the file uploaded for streaming via a POST request
                */
                class PostSize : public AbstractModel
                {
                public:
                    PostSize();
                    ~PostSize() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Maximum size of the file uploaded for streaming via a POST request. Values:
`on`: Enable. When enabled, it is set to 32 MB by default.
`off`: Disable

                     * @return Switch Maximum size of the file uploaded for streaming via a POST request. Values:
`on`: Enable. When enabled, it is set to 32 MB by default.
`off`: Disable

                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Maximum size of the file uploaded for streaming via a POST request. Values:
`on`: Enable. When enabled, it is set to 32 MB by default.
`off`: Disable

                     * @param _switch Maximum size of the file uploaded for streaming via a POST request. Values:
`on`: Enable. When enabled, it is set to 32 MB by default.
`off`: Disable

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
                     * 获取Maximum size. Value range: 1 MB to 200 MB.
                     * @return MaxSize Maximum size. Value range: 1 MB to 200 MB.
                     * 
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置Maximum size. Value range: 1 MB to 200 MB.
                     * @param _maxSize Maximum size. Value range: 1 MB to 200 MB.
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
                     * Maximum size of the file uploaded for streaming via a POST request. Values:
`on`: Enable. When enabled, it is set to 32 MB by default.
`off`: Disable

                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Maximum size. Value range: 1 MB to 200 MB.
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_POSTSIZE_H_
