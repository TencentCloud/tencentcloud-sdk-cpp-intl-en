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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQROLEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateRocketMQRole request structure.
                */
                class CreateRocketMQRoleRequest : public AbstractModel
                {
                public:
                    CreateRocketMQRoleRequest();
                    ~CreateRocketMQRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Role name. Does not support Chinese characters and special characters other than hyphens and underscores. Length must be greater than 0 and less than or equal to 32.</p>
                     * @return RoleName <p>Role name. Does not support Chinese characters and special characters other than hyphens and underscores. Length must be greater than 0 and less than or equal to 32.</p>
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置<p>Role name. Does not support Chinese characters and special characters other than hyphens and underscores. Length must be greater than 0 and less than or equal to 32.</p>
                     * @param _roleName <p>Role name. Does not support Chinese characters and special characters other than hyphens and underscores. Length must be greater than 0 and less than or equal to 32.</p>
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取<p>Required field, cluster Id</p>
                     * @return ClusterId <p>Required field, cluster Id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Required field, cluster Id</p>
                     * @param _clusterId <p>Required field, cluster Id</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Remarks. The length must be greater than or equal to 0 and less than or equal to 128.</p>
                     * @return Remark <p>Remarks. The length must be greater than or equal to 0 and less than or equal to 128.</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remarks. The length must be greater than or equal to 0 and less than or equal to 128.</p>
                     * @param _remark <p>Remarks. The length must be greater than or equal to 0 and less than or equal to 128.</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>Role authorization type (Cluster: cluster; TopicAndGroup: topic/consumer group)</p>
                     * @return PermType <p>Role authorization type (Cluster: cluster; TopicAndGroup: topic/consumer group)</p>
                     * 
                     */
                    std::string GetPermType() const;

                    /**
                     * 设置<p>Role authorization type (Cluster: cluster; TopicAndGroup: topic/consumer group)</p>
                     * @param _permType <p>Role authorization type (Cluster: cluster; TopicAndGroup: topic/consumer group)</p>
                     * 
                     */
                    void SetPermType(const std::string& _permType);

                    /**
                     * 判断参数 PermType 是否已赋值
                     * @return PermType 是否已赋值
                     * 
                     */
                    bool PermTypeHasBeenSet() const;

                    /**
                     * 获取<p>AK and SK generation method: AUTO: automatically generated by the backend, MANUAL: manually input by the user</p>
                     * @return RoleGenerateMode <p>AK and SK generation method: AUTO: automatically generated by the backend, MANUAL: manually input by the user</p>
                     * 
                     */
                    std::string GetRoleGenerateMode() const;

                    /**
                     * 设置<p>AK and SK generation method: AUTO: automatically generated by the backend, MANUAL: manually input by the user</p>
                     * @param _roleGenerateMode <p>AK and SK generation method: AUTO: automatically generated by the backend, MANUAL: manually input by the user</p>
                     * 
                     */
                    void SetRoleGenerateMode(const std::string& _roleGenerateMode);

                    /**
                     * 判断参数 RoleGenerateMode 是否已赋值
                     * @return RoleGenerateMode 是否已赋值
                     * 
                     */
                    bool RoleGenerateModeHasBeenSet() const;

                    /**
                     * 获取<p>Select MANUAL in mode and manually input the AK value</p>
                     * @return AccessKey <p>Select MANUAL in mode and manually input the AK value</p>
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置<p>Select MANUAL in mode and manually input the AK value</p>
                     * @param _accessKey <p>Select MANUAL in mode and manually input the AK value</p>
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取<p>In MANUAL mode, you must manually enter the SK value</p>
                     * @return SecretKey <p>In MANUAL mode, you must manually enter the SK value</p>
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置<p>In MANUAL mode, you must manually enter the SK value</p>
                     * @param _secretKey <p>In MANUAL mode, you must manually enter the SK value</p>
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                private:

                    /**
                     * <p>Role name. Does not support Chinese characters and special characters other than hyphens and underscores. Length must be greater than 0 and less than or equal to 32.</p>
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * <p>Required field, cluster Id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Remarks. The length must be greater than or equal to 0 and less than or equal to 128.</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Role authorization type (Cluster: cluster; TopicAndGroup: topic/consumer group)</p>
                     */
                    std::string m_permType;
                    bool m_permTypeHasBeenSet;

                    /**
                     * <p>AK and SK generation method: AUTO: automatically generated by the backend, MANUAL: manually input by the user</p>
                     */
                    std::string m_roleGenerateMode;
                    bool m_roleGenerateModeHasBeenSet;

                    /**
                     * <p>Select MANUAL in mode and manually input the AK value</p>
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * <p>In MANUAL mode, you must manually enter the SK value</p>
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQROLEREQUEST_H_
