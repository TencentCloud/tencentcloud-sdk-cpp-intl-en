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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEPARAM_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Instance parameter
                */
                class InstanceParam : public AbstractModel
                {
                public:
                    InstanceParam();
                    ~InstanceParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name. For example, timeout. For customizable parameters, see <a href="https://www.tencentcloud.com/document/product/239/49925?from_cn_redirect=1">Parameter Configuration</a>.
                     * @return Key Parameter name. For example, timeout. For customizable parameters, see <a href="https://www.tencentcloud.com/document/product/239/49925?from_cn_redirect=1">Parameter Configuration</a>.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Parameter name. For example, timeout. For customizable parameters, see <a href="https://www.tencentcloud.com/document/product/239/49925?from_cn_redirect=1">Parameter Configuration</a>.
                     * @param _key Parameter name. For example, timeout. For customizable parameters, see <a href="https://www.tencentcloud.com/document/product/239/49925?from_cn_redirect=1">Parameter Configuration</a>.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Set the running value corresponding to the parameter name. For example, the running value corresponding to timeout can be set to 120, in seconds (s). When the client connection idle time reaches 120 s, the connection closed. For more parameter value information, please refer to <a href="https://www.tencentcloud.com/document/product/239/49925?from_cn_redirect=1">parameter configuration</a>.
                     * @return Value Set the running value corresponding to the parameter name. For example, the running value corresponding to timeout can be set to 120, in seconds (s). When the client connection idle time reaches 120 s, the connection closed. For more parameter value information, please refer to <a href="https://www.tencentcloud.com/document/product/239/49925?from_cn_redirect=1">parameter configuration</a>.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Set the running value corresponding to the parameter name. For example, the running value corresponding to timeout can be set to 120, in seconds (s). When the client connection idle time reaches 120 s, the connection closed. For more parameter value information, please refer to <a href="https://www.tencentcloud.com/document/product/239/49925?from_cn_redirect=1">parameter configuration</a>.
                     * @param _value Set the running value corresponding to the parameter name. For example, the running value corresponding to timeout can be set to 120, in seconds (s). When the client connection idle time reaches 120 s, the connection closed. For more parameter value information, please refer to <a href="https://www.tencentcloud.com/document/product/239/49925?from_cn_redirect=1">parameter configuration</a>.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Parameter name. For example, timeout. For customizable parameters, see <a href="https://www.tencentcloud.com/document/product/239/49925?from_cn_redirect=1">Parameter Configuration</a>.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Set the running value corresponding to the parameter name. For example, the running value corresponding to timeout can be set to 120, in seconds (s). When the client connection idle time reaches 120 s, the connection closed. For more parameter value information, please refer to <a href="https://www.tencentcloud.com/document/product/239/49925?from_cn_redirect=1">parameter configuration</a>.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEPARAM_H_
