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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYUSERPRIVILEGESV3REQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYUSERPRIVILEGESV3REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/UpdateUserPrivileges.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * ModifyUserPrivilegesV3 request structure.
                */
                class ModifyUserPrivilegesV3Request : public AbstractModel
                {
                public:
                    ModifyUserPrivilegesV3Request();
                    ~ModifyUserPrivilegesV3Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return InstanceId Cluster ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID
                     * @param _instanceId Cluster ID
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
                     * 获取Username
                     * @return UserName Username
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username
                     * @param _userName Username
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取User permission
                     * @return UserPrivileges User permission
                     * 
                     */
                    UpdateUserPrivileges GetUserPrivileges() const;

                    /**
                     * 设置User permission
                     * @param _userPrivileges User permission
                     * 
                     */
                    void SetUserPrivileges(const UpdateUserPrivileges& _userPrivileges);

                    /**
                     * 判断参数 UserPrivileges 是否已赋值
                     * @return UserPrivileges 是否已赋值
                     * 
                     */
                    bool UserPrivilegesHasBeenSet() const;

                    /**
                     * 获取The IP address of the user link	
                     * @return WhiteHost The IP address of the user link	
                     * 
                     */
                    std::string GetWhiteHost() const;

                    /**
                     * 设置The IP address of the user link	
                     * @param _whiteHost The IP address of the user link	
                     * 
                     */
                    void SetWhiteHost(const std::string& _whiteHost);

                    /**
                     * 判断参数 WhiteHost 是否已赋值
                     * @return WhiteHost 是否已赋值
                     * 
                     */
                    bool WhiteHostHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Username
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * User permission
                     */
                    UpdateUserPrivileges m_userPrivileges;
                    bool m_userPrivilegesHasBeenSet;

                    /**
                     * The IP address of the user link	
                     */
                    std::string m_whiteHost;
                    bool m_whiteHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYUSERPRIVILEGESV3REQUEST_H_
