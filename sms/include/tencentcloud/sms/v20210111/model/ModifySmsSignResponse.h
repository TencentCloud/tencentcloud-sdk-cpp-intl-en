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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_MODIFYSMSSIGNRESPONSE_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_MODIFYSMSSIGNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sms/v20210111/model/ModifySignStatus.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * ModifySmsSign response structure.
                */
                class ModifySmsSignResponse : public AbstractModel
                {
                public:
                    ModifySmsSignResponse();
                    ~ModifySmsSignResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Signature modification response
                     * @return ModifySignStatus Signature modification response
                     * 
                     */
                    ModifySignStatus GetModifySignStatus() const;

                    /**
                     * 判断参数 ModifySignStatus 是否已赋值
                     * @return ModifySignStatus 是否已赋值
                     * 
                     */
                    bool ModifySignStatusHasBeenSet() const;

                private:

                    /**
                     * Signature modification response
                     */
                    ModifySignStatus m_modifySignStatus;
                    bool m_modifySignStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_MODIFYSMSSIGNRESPONSE_H_
