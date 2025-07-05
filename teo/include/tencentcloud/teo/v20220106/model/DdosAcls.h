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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSACLS_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSACLS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/DDoSAcl.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DDoS port filtering
                */
                class DdosAcls : public AbstractModel
                {
                public:
                    DdosAcls();
                    ~DdosAcls() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to remove all settings when empty strings are passed in. Default value: `off` (remove)
                     * @return Switch Whether to remove all settings when empty strings are passed in. Default value: `off` (remove)
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to remove all settings when empty strings are passed in. Default value: `off` (remove)
                     * @param _switch Whether to remove all settings when empty strings are passed in. Default value: `off` (remove)
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取DDoS port filtering parameters
                     * @return Acl DDoS port filtering parameters
                     * 
                     */
                    std::vector<DDoSAcl> GetAcl() const;

                    /**
                     * 设置DDoS port filtering parameters
                     * @param _acl DDoS port filtering parameters
                     * 
                     */
                    void SetAcl(const std::vector<DDoSAcl>& _acl);

                    /**
                     * 判断参数 Acl 是否已赋值
                     * @return Acl 是否已赋值
                     * 
                     */
                    bool AclHasBeenSet() const;

                private:

                    /**
                     * Whether to remove all settings when empty strings are passed in. Default value: `off` (remove)
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * DDoS port filtering parameters
                     */
                    std::vector<DDoSAcl> m_acl;
                    bool m_aclHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSACLS_H_
