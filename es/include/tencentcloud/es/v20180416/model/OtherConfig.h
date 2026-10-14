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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_OTHERCONFIG_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_OTHERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Additional EsConfig and JvmHeapConfig used by updateInstance
                */
                class OtherConfig : public AbstractModel
                {
                public:
                    OtherConfig();
                    ~OtherConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Additional yml configuration for es
                     * @return EsConfig Additional yml configuration for es
                     * 
                     */
                    std::string GetEsConfig() const;

                    /**
                     * 设置Additional yml configuration for es
                     * @param _esConfig Additional yml configuration for es
                     * 
                     */
                    void SetEsConfig(const std::string& _esConfig);

                    /**
                     * 判断参数 EsConfig 是否已赋值
                     * @return EsConfig 是否已赋值
                     * 
                     */
                    bool EsConfigHasBeenSet() const;

                    /**
                     * 获取jvm heap configuration of es
                     * @return JvmHeapConfig jvm heap configuration of es
                     * 
                     */
                    std::string GetJvmHeapConfig() const;

                    /**
                     * 设置jvm heap configuration of es
                     * @param _jvmHeapConfig jvm heap configuration of es
                     * 
                     */
                    void SetJvmHeapConfig(const std::string& _jvmHeapConfig);

                    /**
                     * 判断参数 JvmHeapConfig 是否已赋值
                     * @return JvmHeapConfig 是否已赋值
                     * 
                     */
                    bool JvmHeapConfigHasBeenSet() const;

                private:

                    /**
                     * Additional yml configuration for es
                     */
                    std::string m_esConfig;
                    bool m_esConfigHasBeenSet;

                    /**
                     * jvm heap configuration of es
                     */
                    std::string m_jvmHeapConfig;
                    bool m_jvmHeapConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_OTHERCONFIG_H_
