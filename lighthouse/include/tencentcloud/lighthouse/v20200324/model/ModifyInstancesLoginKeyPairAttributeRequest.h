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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYINSTANCESLOGINKEYPAIRATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYINSTANCESLOGINKEYPAIRATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ModifyInstancesLoginKeyPairAttribute request structure.
                */
                class ModifyInstancesLoginKeyPairAttributeRequest : public AbstractModel
                {
                public:
                    ModifyInstancesLoginKeyPairAttributeRequest();
                    ~ModifyInstancesLoginKeyPairAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID list. Each request can contain up to 100 instances at a time.
                     * @return InstanceIds Instance ID list. Each request can contain up to 100 instances at a time.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID list. Each request can contain up to 100 instances at a time.
                     * @param _instanceIds Instance ID list. Each request can contain up to 100 instances at a time.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Whether to allow login with the default key pair. Valid values: YES: yes; NO: no.
                     * @return PermitLogin Whether to allow login with the default key pair. Valid values: YES: yes; NO: no.
                     * 
                     */
                    std::string GetPermitLogin() const;

                    /**
                     * 设置Whether to allow login with the default key pair. Valid values: YES: yes; NO: no.
                     * @param _permitLogin Whether to allow login with the default key pair. Valid values: YES: yes; NO: no.
                     * 
                     */
                    void SetPermitLogin(const std::string& _permitLogin);

                    /**
                     * 判断参数 PermitLogin 是否已赋值
                     * @return PermitLogin 是否已赋值
                     * 
                     */
                    bool PermitLoginHasBeenSet() const;

                private:

                    /**
                     * Instance ID list. Each request can contain up to 100 instances at a time.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Whether to allow login with the default key pair. Valid values: YES: yes; NO: no.
                     */
                    std::string m_permitLogin;
                    bool m_permitLoginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYINSTANCESLOGINKEYPAIRATTRIBUTEREQUEST_H_
