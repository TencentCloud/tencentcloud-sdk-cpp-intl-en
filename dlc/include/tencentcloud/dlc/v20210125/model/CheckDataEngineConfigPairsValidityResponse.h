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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINECONFIGPAIRSVALIDITYRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINECONFIGPAIRSVALIDITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CheckDataEngineConfigPairsValidity response structure.
                */
                class CheckDataEngineConfigPairsValidityResponse : public AbstractModel
                {
                public:
                    CheckDataEngineConfigPairsValidityResponse();
                    ~CheckDataEngineConfigPairsValidityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Validity of parameters. true: valid; false: There is at least one invalid parameter.
                     * @return IsAvailable Validity of parameters. true: valid; false: There is at least one invalid parameter.
                     * 
                     */
                    bool GetIsAvailable() const;

                    /**
                     * 判断参数 IsAvailable 是否已赋值
                     * @return IsAvailable 是否已赋值
                     * 
                     */
                    bool IsAvailableHasBeenSet() const;

                    /**
                     * 获取Collection of invalid parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnavailableConfig Collection of invalid parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetUnavailableConfig() const;

                    /**
                     * 判断参数 UnavailableConfig 是否已赋值
                     * @return UnavailableConfig 是否已赋值
                     * 
                     */
                    bool UnavailableConfigHasBeenSet() const;

                private:

                    /**
                     * Validity of parameters. true: valid; false: There is at least one invalid parameter.
                     */
                    bool m_isAvailable;
                    bool m_isAvailableHasBeenSet;

                    /**
                     * Collection of invalid parameters
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_unavailableConfig;
                    bool m_unavailableConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINECONFIGPAIRSVALIDITYRESPONSE_H_
