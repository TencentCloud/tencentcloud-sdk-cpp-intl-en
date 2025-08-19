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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_MODIFYUSERROLERESPONSE_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_MODIFYUSERROLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/ErrorInfo.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * ModifyUserRole response structure.
                */
                class ModifyUserRoleResponse : public AbstractModel
                {
                public:
                    ModifyUserRoleResponse();
                    ~ModifyUserRoleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Custom error information object.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorInfo Custom error information object.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ErrorInfo GetErrorInfo() const;

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                    /**
                     * 获取Expansion.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Extra Expansion.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取Message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Msg Message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取Data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data Data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Custom error information object.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ErrorInfo m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * Expansion.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * Message.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * Data.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_MODIFYUSERROLERESPONSE_H_
