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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEFUNCTIONKINDSRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEFUNCTIONKINDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/FunctionTypeOrKind.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeFunctionKinds response structure.
                */
                class DescribeFunctionKindsResponse : public AbstractModel
                {
                public:
                    DescribeFunctionKindsResponse();
                    ~DescribeFunctionKindsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取NoNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Kinds NoNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<FunctionTypeOrKind> GetKinds() const;

                    /**
                     * 判断参数 Kinds 是否已赋值
                     * @return Kinds 是否已赋值
                     * 
                     */
                    bool KindsHasBeenSet() const;

                    /**
                     * 获取NoNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ErrorMessage NoNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * NoNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<FunctionTypeOrKind> m_kinds;
                    bool m_kindsHasBeenSet;

                    /**
                     * NoNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEFUNCTIONKINDSRESPONSE_H_
