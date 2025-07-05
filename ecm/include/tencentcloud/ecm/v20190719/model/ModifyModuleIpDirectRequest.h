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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULEIPDIRECTREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULEIPDIRECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifyModuleIpDirect request structure.
                */
                class ModifyModuleIpDirectRequest : public AbstractModel
                {
                public:
                    ModifyModuleIpDirectRequest();
                    ~ModifyModuleIpDirectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Module ID.
                     * @return ModuleId Module ID.
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置Module ID.
                     * @param _moduleId Module ID.
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取Whether to disable IP direct access. Valid values:
true: yes
false: no
                     * @return CloseIpDirect Whether to disable IP direct access. Valid values:
true: yes
false: no
                     * 
                     */
                    bool GetCloseIpDirect() const;

                    /**
                     * 设置Whether to disable IP direct access. Valid values:
true: yes
false: no
                     * @param _closeIpDirect Whether to disable IP direct access. Valid values:
true: yes
false: no
                     * 
                     */
                    void SetCloseIpDirect(const bool& _closeIpDirect);

                    /**
                     * 判断参数 CloseIpDirect 是否已赋值
                     * @return CloseIpDirect 是否已赋值
                     * 
                     */
                    bool CloseIpDirectHasBeenSet() const;

                private:

                    /**
                     * Module ID.
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * Whether to disable IP direct access. Valid values:
true: yes
false: no
                     */
                    bool m_closeIpDirect;
                    bool m_closeIpDirectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULEIPDIRECTREQUEST_H_
