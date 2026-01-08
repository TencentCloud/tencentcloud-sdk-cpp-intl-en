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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEAPPLICATIONSENSITIVEAPIREQ_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEAPPLICATIONSENSITIVEAPIREQ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * The request to add a sensitive API
                */
                class CreateApplicationSensitiveAPIReq : public AbstractModel
                {
                public:
                    CreateApplicationSensitiveAPIReq();
                    ~CreateApplicationSensitiveAPIReq() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API name
                     * @return APIName API name
                     * 
                     */
                    std::string GetAPIName() const;

                    /**
                     * 设置API name
                     * @param _aPIName API name
                     * 
                     */
                    void SetAPIName(const std::string& _aPIName);

                    /**
                     * 判断参数 APIName 是否已赋值
                     * @return APIName 是否已赋值
                     * 
                     */
                    bool APINameHasBeenSet() const;

                    /**
                     * 获取API description
                     * @return APIDesc API description
                     * 
                     */
                    std::string GetAPIDesc() const;

                    /**
                     * 设置API description
                     * @param _aPIDesc API description
                     * 
                     */
                    void SetAPIDesc(const std::string& _aPIDesc);

                    /**
                     * 判断参数 APIDesc 是否已赋值
                     * @return APIDesc 是否已赋值
                     * 
                     */
                    bool APIDescHasBeenSet() const;

                    /**
                     * 获取API type. 1: system; 2: custom.
                     * @return APIType API type. 1: system; 2: custom.
                     * 
                     */
                    int64_t GetAPIType() const;

                    /**
                     * 设置API type. 1: system; 2: custom.
                     * @param _aPIType API type. 1: system; 2: custom.
                     * 
                     */
                    void SetAPIType(const int64_t& _aPIType);

                    /**
                     * 判断参数 APIType 是否已赋值
                     * @return APIType 是否已赋值
                     * 
                     */
                    bool APITypeHasBeenSet() const;

                private:

                    /**
                     * API name
                     */
                    std::string m_aPIName;
                    bool m_aPINameHasBeenSet;

                    /**
                     * API description
                     */
                    std::string m_aPIDesc;
                    bool m_aPIDescHasBeenSet;

                    /**
                     * API type. 1: system; 2: custom.
                     */
                    int64_t m_aPIType;
                    bool m_aPITypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEAPPLICATIONSENSITIVEAPIREQ_H_
