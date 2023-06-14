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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_OPTIMIZEACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_OPTIMIZEACTION_H_

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
                * The optimization suggestions
                */
                class OptimizeAction : public AbstractModel
                {
                public:
                    OptimizeAction();
                    ~OptimizeAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The optimization metric. Values:
<li>`Http2`</li>
<li>`Http3`</li>
<li>`Brotli`</li>
                     * @return Name The optimization metric. Values:
<li>`Http2`</li>
<li>`Http3`</li>
<li>`Brotli`</li>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The optimization metric. Values:
<li>`Http2`</li>
<li>`Http3`</li>
<li>`Brotli`</li>
                     * @param _name The optimization metric. Values:
<li>`Http2`</li>
<li>`Http3`</li>
<li>`Brotli`</li>
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
                     * 获取The network environment.
                     * @return Connectivity The network environment.
                     * 
                     */
                    std::string GetConnectivity() const;

                    /**
                     * 设置The network environment.
                     * @param _connectivity The network environment.
                     * 
                     */
                    void SetConnectivity(const std::string& _connectivity);

                    /**
                     * 判断参数 Connectivity 是否已赋值
                     * @return Connectivity 是否已赋值
                     * 
                     */
                    bool ConnectivityHasBeenSet() const;

                    /**
                     * 获取The estimated load time, in milliseconds.
                     * @return Value The estimated load time, in milliseconds.
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置The estimated load time, in milliseconds.
                     * @param _value The estimated load time, in milliseconds.
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取The estimated improvement ratio, in %.
                     * @return Ratio The estimated improvement ratio, in %.
                     * 
                     */
                    int64_t GetRatio() const;

                    /**
                     * 设置The estimated improvement ratio, in %.
                     * @param _ratio The estimated improvement ratio, in %.
                     * 
                     */
                    void SetRatio(const int64_t& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                private:

                    /**
                     * The optimization metric. Values:
<li>`Http2`</li>
<li>`Http3`</li>
<li>`Brotli`</li>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The network environment.
                     */
                    std::string m_connectivity;
                    bool m_connectivityHasBeenSet;

                    /**
                     * The estimated load time, in milliseconds.
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * The estimated improvement ratio, in %.
                     */
                    int64_t m_ratio;
                    bool m_ratioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_OPTIMIZEACTION_H_
