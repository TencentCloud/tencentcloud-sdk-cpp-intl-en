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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYWEBSHELLSTATUSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYWEBSHELLSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/WebshellStatus.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyWebshellStatus request structure.
                */
                class ModifyWebshellStatusRequest : public AbstractModel
                {
                public:
                    ModifyWebshellStatusRequest();
                    ~ModifyWebshellStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain Webshell Status
                     * @return Webshell Domain Webshell Status
                     * 
                     */
                    WebshellStatus GetWebshell() const;

                    /**
                     * 设置Domain Webshell Status
                     * @param _webshell Domain Webshell Status
                     * 
                     */
                    void SetWebshell(const WebshellStatus& _webshell);

                    /**
                     * 判断参数 Webshell 是否已赋值
                     * @return Webshell 是否已赋值
                     * 
                     */
                    bool WebshellHasBeenSet() const;

                private:

                    /**
                     * Domain Webshell Status
                     */
                    WebshellStatus m_webshell;
                    bool m_webshellHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYWEBSHELLSTATUSREQUEST_H_
