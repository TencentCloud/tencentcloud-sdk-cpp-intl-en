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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEFUNCTIONTYPESRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEFUNCTIONTYPESRESPONSE_H_

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
                * DescribeFunctionTypes response structure.
                */
                class DescribeFunctionTypesResponse : public AbstractModel
                {
                public:
                    DescribeFunctionTypesResponse();
                    ~DescribeFunctionTypesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Types TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<FunctionTypeOrKind> GetTypes() const;

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                    /**
                     * 获取Error messageNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ErrorMessage Error messageNote: This field may return null, indicating that no valid value can be obtained.
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
                     * TypeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<FunctionTypeOrKind> m_types;
                    bool m_typesHasBeenSet;

                    /**
                     * Error messageNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEFUNCTIONTYPESRESPONSE_H_
