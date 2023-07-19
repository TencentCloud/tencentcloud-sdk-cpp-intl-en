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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_PUBLISHVERSIONRESPONSE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_PUBLISHVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * PublishVersion response structure.
                */
                class PublishVersionResponse : public AbstractModel
                {
                public:
                    PublishVersionResponse();
                    ~PublishVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Function version
                     * @return FunctionVersion Function version
                     * 
                     */
                    std::string GetFunctionVersion() const;

                    /**
                     * 判断参数 FunctionVersion 是否已赋值
                     * @return FunctionVersion 是否已赋值
                     * 
                     */
                    bool FunctionVersionHasBeenSet() const;

                    /**
                     * 获取Code size
                     * @return CodeSize Code size
                     * 
                     */
                    int64_t GetCodeSize() const;

                    /**
                     * 判断参数 CodeSize 是否已赋值
                     * @return CodeSize 是否已赋值
                     * 
                     */
                    bool CodeSizeHasBeenSet() const;

                    /**
                     * 获取Maximum available memory
                     * @return MemorySize Maximum available memory
                     * 
                     */
                    int64_t GetMemorySize() const;

                    /**
                     * 判断参数 MemorySize 是否已赋值
                     * @return MemorySize 是否已赋值
                     * 
                     */
                    bool MemorySizeHasBeenSet() const;

                    /**
                     * 获取Function description
                     * @return Description Function description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Function entry
                     * @return Handler Function entry
                     * 
                     */
                    std::string GetHandler() const;

                    /**
                     * 判断参数 Handler 是否已赋值
                     * @return Handler 是否已赋值
                     * 
                     */
                    bool HandlerHasBeenSet() const;

                    /**
                     * 获取Function timeout
                     * @return Timeout Function timeout
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Function running environment 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return Runtime Function running environment 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRuntime() const;

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     * 
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取Function namespace
                     * @return Namespace Function namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                private:

                    /**
                     * Function version
                     */
                    std::string m_functionVersion;
                    bool m_functionVersionHasBeenSet;

                    /**
                     * Code size
                     */
                    int64_t m_codeSize;
                    bool m_codeSizeHasBeenSet;

                    /**
                     * Maximum available memory
                     */
                    int64_t m_memorySize;
                    bool m_memorySizeHasBeenSet;

                    /**
                     * Function description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Function entry
                     */
                    std::string m_handler;
                    bool m_handlerHasBeenSet;

                    /**
                     * Function timeout
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Function running environment 
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * Function namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_PUBLISHVERSIONRESPONSE_H_
