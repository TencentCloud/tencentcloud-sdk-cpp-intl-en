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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_USERINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_USERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Add or modify the user
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster instance ID.
                     * @return InstanceId Cluster instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster instance ID.
                     * @param _instanceId Cluster instance ID.
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
                     * 获取Password
                     * @return PassWord Password
                     * 
                     */
                    std::string GetPassWord() const;

                    /**
                     * 设置Password
                     * @param _passWord Password
                     * 
                     */
                    void SetPassWord(const std::string& _passWord);

                    /**
                     * 判断参数 PassWord 是否已赋值
                     * @return PassWord 是否已赋值
                     * 
                     */
                    bool PassWordHasBeenSet() const;

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

                    /**
                     * 获取IP address of the user link before modification
                     * @return OldWhiteHost IP address of the user link before modification
                     * 
                     */
                    std::string GetOldWhiteHost() const;

                    /**
                     * 设置IP address of the user link before modification
                     * @param _oldWhiteHost IP address of the user link before modification
                     * 
                     */
                    void SetOldWhiteHost(const std::string& _oldWhiteHost);

                    /**
                     * 判断参数 OldWhiteHost 是否已赋值
                     * @return OldWhiteHost 是否已赋值
                     * 
                     */
                    bool OldWhiteHostHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Describe Description
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置Description
                     * @param _describe Description
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取Original password
                     * @return OldPwd Original password
                     * 
                     */
                    std::string GetOldPwd() const;

                    /**
                     * 设置Original password
                     * @param _oldPwd Original password
                     * 
                     */
                    void SetOldPwd(const std::string& _oldPwd);

                    /**
                     * 判断参数 OldPwd 是否已赋值
                     * @return OldPwd 是否已赋值
                     * 
                     */
                    bool OldPwdHasBeenSet() const;

                    /**
                     * 获取UIN of the bound sub-user
                     * @return CamUin UIN of the bound sub-user
                     * 
                     */
                    std::string GetCamUin() const;

                    /**
                     * 设置UIN of the bound sub-user
                     * @param _camUin UIN of the bound sub-user
                     * 
                     */
                    void SetCamUin(const std::string& _camUin);

                    /**
                     * 判断参数 CamUin 是否已赋值
                     * @return CamUin 是否已赋值
                     * 
                     */
                    bool CamUinHasBeenSet() const;

                    /**
                     * 获取Ranger group id list
                     * @return CamRangerGroupIds Ranger group id list
                     * 
                     */
                    std::vector<int64_t> GetCamRangerGroupIds() const;

                    /**
                     * 设置Ranger group id list
                     * @param _camRangerGroupIds Ranger group id list
                     * 
                     */
                    void SetCamRangerGroupIds(const std::vector<int64_t>& _camRangerGroupIds);

                    /**
                     * 判断参数 CamRangerGroupIds 是否已赋值
                     * @return CamRangerGroupIds 是否已赋值
                     * 
                     */
                    bool CamRangerGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Cluster instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Username
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Password
                     */
                    std::string m_passWord;
                    bool m_passWordHasBeenSet;

                    /**
                     * The IP address of the user link
                     */
                    std::string m_whiteHost;
                    bool m_whiteHostHasBeenSet;

                    /**
                     * IP address of the user link before modification
                     */
                    std::string m_oldWhiteHost;
                    bool m_oldWhiteHostHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * Original password
                     */
                    std::string m_oldPwd;
                    bool m_oldPwdHasBeenSet;

                    /**
                     * UIN of the bound sub-user
                     */
                    std::string m_camUin;
                    bool m_camUinHasBeenSet;

                    /**
                     * Ranger group id list
                     */
                    std::vector<int64_t> m_camRangerGroupIds;
                    bool m_camRangerGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_USERINFO_H_
