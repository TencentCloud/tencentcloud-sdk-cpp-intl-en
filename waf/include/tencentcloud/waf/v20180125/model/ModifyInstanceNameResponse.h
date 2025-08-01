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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYINSTANCENAMERESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYINSTANCENAMERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyInstanceName response structure.
                */
                class ModifyInstanceNameResponse : public AbstractModel
                {
                public:
                    ModifyInstanceNameResponse();
                    ~ModifyInstanceNameResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Modification status: 0 indicates success
                     * @return ModifyCode Modification status: 0 indicates success
                     * 
                     */
                    int64_t GetModifyCode() const;

                    /**
                     * 判断参数 ModifyCode 是否已赋值
                     * @return ModifyCode 是否已赋值
                     * 
                     */
                    bool ModifyCodeHasBeenSet() const;

                private:

                    /**
                     * Modification status: 0 indicates success
                     */
                    int64_t m_modifyCode;
                    bool m_modifyCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYINSTANCENAMERESPONSE_H_
