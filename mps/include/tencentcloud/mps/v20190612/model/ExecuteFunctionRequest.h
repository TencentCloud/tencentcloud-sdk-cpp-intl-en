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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EXECUTEFUNCTIONREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EXECUTEFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ExecuteFunction request structure.
                */
                class ExecuteFunctionRequest : public AbstractModel
                {
                public:
                    ExecuteFunctionRequest();
                    ~ExecuteFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Backend interface name invoked.
                     * @return FunctionName Backend interface name invoked.
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Backend interface name invoked.
                     * @param _functionName Backend interface name invoked.
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取API parameter, coordinate with the backend for the specific parameter format when calling.
                     * @return FunctionArg API parameter, coordinate with the backend for the specific parameter format when calling.
                     * 
                     */
                    std::string GetFunctionArg() const;

                    /**
                     * 设置API parameter, coordinate with the backend for the specific parameter format when calling.
                     * @param _functionArg API parameter, coordinate with the backend for the specific parameter format when calling.
                     * 
                     */
                    void SetFunctionArg(const std::string& _functionArg);

                    /**
                     * 判断参数 FunctionArg 是否已赋值
                     * @return FunctionArg 是否已赋值
                     * 
                     */
                    bool FunctionArgHasBeenSet() const;

                private:

                    /**
                     * Backend interface name invoked.
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * API parameter, coordinate with the backend for the specific parameter format when calling.
                     */
                    std::string m_functionArg;
                    bool m_functionArgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EXECUTEFUNCTIONREQUEST_H_
