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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SIMPLEAESDRM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SIMPLEAESDRM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 
                */
                class SimpleAesDrm : public AbstractModel
                {
                public:
                    SimpleAesDrm();
                    ~SimpleAesDrm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Uri 
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置
                     * @param _uri 
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

                    /**
                     * 获取
                     * @return Key 
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置
                     * @param _key 
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
                     * 获取
                     * @return Vector 
                     * 
                     */
                    std::string GetVector() const;

                    /**
                     * 设置
                     * @param _vector 
                     * 
                     */
                    void SetVector(const std::string& _vector);

                    /**
                     * 判断参数 Vector 是否已赋值
                     * @return Vector 是否已赋值
                     * 
                     */
                    bool VectorHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_vector;
                    bool m_vectorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SIMPLEAESDRM_H_
