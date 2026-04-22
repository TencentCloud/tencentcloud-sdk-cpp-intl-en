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
                     * 获取<p>API name</p>
                     * @return APIName <p>API name</p>
                     * 
                     */
                    std::string GetAPIName() const;

                    /**
                     * 设置<p>API name</p>
                     * @param _aPIName <p>API name</p>
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
                     * 获取<p>API description</p>
                     * @return APIDesc <p>API description</p>
                     * 
                     */
                    std::string GetAPIDesc() const;

                    /**
                     * 设置<p>API description</p>
                     * @param _aPIDesc <p>API description</p>
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
                     * 获取<p>API type. Valid values: 1: System; 2: Custom</p>
                     * @return APIType <p>API type. Valid values: 1: System; 2: Custom</p>
                     * 
                     */
                    int64_t GetAPIType() const;

                    /**
                     * 设置<p>API type. Valid values: 1: System; 2: Custom</p>
                     * @param _aPIType <p>API type. Valid values: 1: System; 2: Custom</p>
                     * 
                     */
                    void SetAPIType(const int64_t& _aPIType);

                    /**
                     * 判断参数 APIType 是否已赋值
                     * @return APIType 是否已赋值
                     * 
                     */
                    bool APITypeHasBeenSet() const;

                    /**
                     * 获取<p>Applicable scope: Valid values: 0: Mini program; 1: Mini game; 100: Universal</p>
                     * @return UseScope <p>Applicable scope: Valid values: 0: Mini program; 1: Mini game; 100: Universal</p>
                     * 
                     */
                    uint64_t GetUseScope() const;

                    /**
                     * 设置<p>Applicable scope: Valid values: 0: Mini program; 1: Mini game; 100: Universal</p>
                     * @param _useScope <p>Applicable scope: Valid values: 0: Mini program; 1: Mini game; 100: Universal</p>
                     * 
                     */
                    void SetUseScope(const uint64_t& _useScope);

                    /**
                     * 判断参数 UseScope 是否已赋值
                     * @return UseScope 是否已赋值
                     * 
                     */
                    bool UseScopeHasBeenSet() const;

                private:

                    /**
                     * <p>API name</p>
                     */
                    std::string m_aPIName;
                    bool m_aPINameHasBeenSet;

                    /**
                     * <p>API description</p>
                     */
                    std::string m_aPIDesc;
                    bool m_aPIDescHasBeenSet;

                    /**
                     * <p>API type. Valid values: 1: System; 2: Custom</p>
                     */
                    int64_t m_aPIType;
                    bool m_aPITypeHasBeenSet;

                    /**
                     * <p>Applicable scope: Valid values: 0: Mini program; 1: Mini game; 100: Universal</p>
                     */
                    uint64_t m_useScope;
                    bool m_useScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEAPPLICATIONSENSITIVEAPIREQ_H_
