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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINELOGINTYPE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINELOGINTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CVM login method
                */
                class MachineLoginType : public AbstractModel
                {
                public:
                    MachineLoginType();
                    ~MachineLoginType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Host Quuid</p>
                     * @return Quuid <p>Host Quuid</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>Host Quuid</p>
                     * @param _quuid <p>Host Quuid</p>
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取<p>Login method: 0-original login method, 1-scan code for password-free log-in, 2-enable scan code, 3-disable scan code</p>
                     * @return LoginType <p>Login method: 0-original login method, 1-scan code for password-free log-in, 2-enable scan code, 3-disable scan code</p>
                     * 
                     */
                    uint64_t GetLoginType() const;

                    /**
                     * 设置<p>Login method: 0-original login method, 1-scan code for password-free log-in, 2-enable scan code, 3-disable scan code</p>
                     * @param _loginType <p>Login method: 0-original login method, 1-scan code for password-free log-in, 2-enable scan code, 3-disable scan code</p>
                     * 
                     */
                    void SetLoginType(const uint64_t& _loginType);

                    /**
                     * 判断参数 LoginType 是否已赋值
                     * @return LoginType 是否已赋值
                     * 
                     */
                    bool LoginTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Host Quuid</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>Login method: 0-original login method, 1-scan code for password-free log-in, 2-enable scan code, 3-disable scan code</p>
                     */
                    uint64_t m_loginType;
                    bool m_loginTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINELOGINTYPE_H_
