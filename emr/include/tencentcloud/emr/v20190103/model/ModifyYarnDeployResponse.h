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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYYARNDEPLOYRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYYARNDEPLOYRESPONSE_H_

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
                * ModifyYarnDeploy response structure.
                */
                class ModifyYarnDeployResponse : public AbstractModel
                {
                public:
                    ModifyYarnDeployResponse();
                    ~ModifyYarnDeployResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取When the value is "false", both the "Apply" and "Reset" buttons are grayed out.
                     * @return IsDraft When the value is "false", both the "Apply" and "Reset" buttons are grayed out.
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
                     * 获取Error information. This field is reserved.
                     * @return ErrorMsg Error information. This field is reserved.
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * When the value is "false", both the "Apply" and "Reset" buttons are grayed out.
                     */
                    bool m_isDraft;
                    bool m_isDraftHasBeenSet;

                    /**
                     * Error information. This field is reserved.
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYYARNDEPLOYRESPONSE_H_
