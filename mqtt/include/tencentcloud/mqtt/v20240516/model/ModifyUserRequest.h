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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYUSERREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * ModifyUser request structure.
                */
                class ModifyUserRequest : public AbstractModel
                {
                public:
                    ModifyUserRequest();
                    ~ModifyUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * @return InstanceId Instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * @param _instanceId Instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
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
                     * 获取Username.
                     * @return Username Username.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Username.
                     * @param _username Username.
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取Specifies the remark with length not exceeding 128 characters.
                     * @return Remark Specifies the remark with length not exceeding 128 characters.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Specifies the remark with length not exceeding 128 characters.
                     * @param _remark Specifies the remark with length not exceeding 128 characters.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Username.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Specifies the remark with length not exceeding 128 characters.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYUSERREQUEST_H_
