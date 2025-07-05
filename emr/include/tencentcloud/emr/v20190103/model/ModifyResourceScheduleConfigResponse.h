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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESCHEDULECONFIGRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESCHEDULECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyResourceScheduleConfig response structure.
                */
                class ModifyResourceScheduleConfigResponse : public AbstractModel
                {
                public:
                    ModifyResourceScheduleConfigResponse();
                    ~ModifyResourceScheduleConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取`true`: Draft, indicating the resource pool is not refreshed.
                     * @return IsDraft `true`: Draft, indicating the resource pool is not refreshed.
                     * 
                     */
                    bool GetIsDraft() const;

                    /**
                     * 判断参数 IsDraft 是否已赋值
                     * @return IsDraft 是否已赋值
                     * 
                     */
                    bool IsDraftHasBeenSet() const;

                    /**
                     * 获取Verification error information. If it is not null, the verification fails and thus the configuration fails.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ErrorMsg Verification error information. If it is not null, the verification fails and thus the configuration fails.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取The response data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data The response data.
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
                     * `true`: Draft, indicating the resource pool is not refreshed.
                     */
                    bool m_isDraft;
                    bool m_isDraftHasBeenSet;

                    /**
                     * Verification error information. If it is not null, the verification fails and thus the configuration fails.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * The response data.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESCHEDULECONFIGRESPONSE_H_
