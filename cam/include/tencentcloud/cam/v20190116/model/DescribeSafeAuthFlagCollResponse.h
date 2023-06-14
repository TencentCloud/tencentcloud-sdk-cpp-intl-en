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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBESAFEAUTHFLAGCOLLRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBESAFEAUTHFLAGCOLLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/LoginActionFlag.h>
#include <tencentcloud/cam/v20190116/model/OffsiteFlag.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * DescribeSafeAuthFlagColl response structure.
                */
                class DescribeSafeAuthFlagCollResponse : public AbstractModel
                {
                public:
                    DescribeSafeAuthFlagCollResponse();
                    ~DescribeSafeAuthFlagCollResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Login protection settings
                     * @return LoginFlag Login protection settings
                     * 
                     */
                    LoginActionFlag GetLoginFlag() const;

                    /**
                     * 判断参数 LoginFlag 是否已赋值
                     * @return LoginFlag 是否已赋值
                     * 
                     */
                    bool LoginFlagHasBeenSet() const;

                    /**
                     * 获取Sensitive operation protection settings
                     * @return ActionFlag Sensitive operation protection settings
                     * 
                     */
                    LoginActionFlag GetActionFlag() const;

                    /**
                     * 判断参数 ActionFlag 是否已赋值
                     * @return ActionFlag 是否已赋值
                     * 
                     */
                    bool ActionFlagHasBeenSet() const;

                    /**
                     * 获取Suspicious login location protection settings
                     * @return OffsiteFlag Suspicious login location protection settings
                     * 
                     */
                    OffsiteFlag GetOffsiteFlag() const;

                    /**
                     * 判断参数 OffsiteFlag 是否已赋值
                     * @return OffsiteFlag 是否已赋值
                     * 
                     */
                    bool OffsiteFlagHasBeenSet() const;

                private:

                    /**
                     * Login protection settings
                     */
                    LoginActionFlag m_loginFlag;
                    bool m_loginFlagHasBeenSet;

                    /**
                     * Sensitive operation protection settings
                     */
                    LoginActionFlag m_actionFlag;
                    bool m_actionFlagHasBeenSet;

                    /**
                     * Suspicious login location protection settings
                     */
                    OffsiteFlag m_offsiteFlag;
                    bool m_offsiteFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBESAFEAUTHFLAGCOLLRESPONSE_H_
