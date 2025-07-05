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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATEIVRSESSIONREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATEIVRSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/Variable.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CreateIVRSession request structure.
                */
                class CreateIVRSessionRequest : public AbstractModel
                {
                public:
                    CreateIVRSessionRequest();
                    ~CreateIVRSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Called.
                     * @return Callee Called.
                     * 
                     */
                    std::string GetCallee() const;

                    /**
                     * 设置Called.
                     * @param _callee Called.
                     * 
                     */
                    void SetCallee(const std::string& _callee);

                    /**
                     * 判断参数 Callee 是否已赋值
                     * @return Callee 是否已赋值
                     * 
                     */
                    bool CalleeHasBeenSet() const;

                    /**
                     * 获取Specified ivr id. currently, it supports inbound and automatic outbound types.
                     * @return IVRId Specified ivr id. currently, it supports inbound and automatic outbound types.
                     * 
                     */
                    int64_t GetIVRId() const;

                    /**
                     * 设置Specified ivr id. currently, it supports inbound and automatic outbound types.
                     * @param _iVRId Specified ivr id. currently, it supports inbound and automatic outbound types.
                     * 
                     */
                    void SetIVRId(const int64_t& _iVRId);

                    /**
                     * 判断参数 IVRId 是否已赋值
                     * @return IVRId 是否已赋值
                     * 
                     */
                    bool IVRIdHasBeenSet() const;

                    /**
                     * 获取List of calling numbers.
                     * @return Callers List of calling numbers.
                     * 
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 设置List of calling numbers.
                     * @param _callers List of calling numbers.
                     * 
                     */
                    void SetCallers(const std::vector<std::string>& _callers);

                    /**
                     * 判断参数 Callers 是否已赋值
                     * @return Callers 是否已赋值
                     * 
                     */
                    bool CallersHasBeenSet() const;

                    /**
                     * 获取Custom variable.
                     * @return Variables Custom variable.
                     * 
                     */
                    std::vector<Variable> GetVariables() const;

                    /**
                     * 设置Custom variable.
                     * @param _variables Custom variable.
                     * 
                     */
                    void SetVariables(const std::vector<Variable>& _variables);

                    /**
                     * 判断参数 Variables 是否已赋值
                     * @return Variables 是否已赋值
                     * 
                     */
                    bool VariablesHasBeenSet() const;

                    /**
                     * 获取User data.
                     * @return UUI User data.
                     * 
                     */
                    std::string GetUUI() const;

                    /**
                     * 设置User data.
                     * @param _uUI User data.
                     * 
                     */
                    void SetUUI(const std::string& _uUI);

                    /**
                     * 判断参数 UUI 是否已赋值
                     * @return UUI 是否已赋值
                     * 
                     */
                    bool UUIHasBeenSet() const;

                private:

                    /**
                     * Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Called.
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * Specified ivr id. currently, it supports inbound and automatic outbound types.
                     */
                    int64_t m_iVRId;
                    bool m_iVRIdHasBeenSet;

                    /**
                     * List of calling numbers.
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

                    /**
                     * Custom variable.
                     */
                    std::vector<Variable> m_variables;
                    bool m_variablesHasBeenSet;

                    /**
                     * User data.
                     */
                    std::string m_uUI;
                    bool m_uUIHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEIVRSESSIONREQUEST_H_
