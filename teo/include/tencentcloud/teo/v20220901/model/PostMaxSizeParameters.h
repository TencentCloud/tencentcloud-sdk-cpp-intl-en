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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_POSTMAXSIZEPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_POSTMAXSIZEPARAMETERS_H_

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
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Maximum size of the file uploaded for streaming via a POST request.
                */
                class PostMaxSizeParameters : public AbstractModel
                {
                public:
                    PostMaxSizeParameters();
                    ~PostMaxSizeParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable post request file upload limit, in bytes (default limit: 32 * 2<sup>20</sup> bytes). valid values: <li>`on`: enable limit;</li><li>`off`: disable limit.</li>.
                     * @return Switch Whether to enable post request file upload limit, in bytes (default limit: 32 * 2<sup>20</sup> bytes). valid values: <li>`on`: enable limit;</li><li>`off`: disable limit.</li>.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable post request file upload limit, in bytes (default limit: 32 * 2<sup>20</sup> bytes). valid values: <li>`on`: enable limit;</li><li>`off`: disable limit.</li>.
                     * @param _switch Whether to enable post request file upload limit, in bytes (default limit: 32 * 2<sup>20</sup> bytes). valid values: <li>`on`: enable limit;</li><li>`off`: disable limit.</li>.
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
                     * 获取Maximum size of the file uploaded for streaming via a post request. Takes effect only when Switch is on. Range: 1 MB - 800 MB (bytes).
                     * @return MaxSize Maximum size of the file uploaded for streaming via a post request. Takes effect only when Switch is on. Range: 1 MB - 800 MB (bytes).
                     * 
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置Maximum size of the file uploaded for streaming via a post request. Takes effect only when Switch is on. Range: 1 MB - 800 MB (bytes).
                     * @param _maxSize Maximum size of the file uploaded for streaming via a post request. Takes effect only when Switch is on. Range: 1 MB - 800 MB (bytes).
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
                     * Whether to enable post request file upload limit, in bytes (default limit: 32 * 2<sup>20</sup> bytes). valid values: <li>`on`: enable limit;</li><li>`off`: disable limit.</li>.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Maximum size of the file uploaded for streaming via a post request. Takes effect only when Switch is on. Range: 1 MB - 800 MB (bytes).
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_POSTMAXSIZEPARAMETERS_H_
