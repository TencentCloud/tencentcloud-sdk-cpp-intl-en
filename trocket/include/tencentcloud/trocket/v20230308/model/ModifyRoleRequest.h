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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYROLEREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/DetailedRolePerm.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * ModifyRole request structure.
                */
                class ModifyRoleRequest : public AbstractModel
                {
                public:
                    ModifyRoleRequest();
                    ~ModifyRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.comom/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * @return InstanceId TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.comom/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.comom/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * @param _instanceId TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.comom/document/api/1493/106745?from_cn_redirect=1) or the console.
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
                     * 获取Role name. It can be obtained from [RoleItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#RoleItem) returned by the API [DescribeRoleList](https://www.tencentcloud.comom/document/api/1493/98862?from_cn_redirect=1) or from the console.
                     * @return Role Role name. It can be obtained from [RoleItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#RoleItem) returned by the API [DescribeRoleList](https://www.tencentcloud.comom/document/api/1493/98862?from_cn_redirect=1) or from the console.
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Role name. It can be obtained from [RoleItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#RoleItem) returned by the API [DescribeRoleList](https://www.tencentcloud.comom/document/api/1493/98862?from_cn_redirect=1) or from the console.
                     * @param _role Role name. It can be obtained from [RoleItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#RoleItem) returned by the API [DescribeRoleList](https://www.tencentcloud.comom/document/api/1493/98862?from_cn_redirect=1) or from the console.
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Whether to enable consumption.
                     * @return PermRead Whether to enable consumption.
                     * 
                     */
                    bool GetPermRead() const;

                    /**
                     * 设置Whether to enable consumption.
                     * @param _permRead Whether to enable consumption.
                     * 
                     */
                    void SetPermRead(const bool& _permRead);

                    /**
                     * 判断参数 PermRead 是否已赋值
                     * @return PermRead 是否已赋值
                     * 
                     */
                    bool PermReadHasBeenSet() const;

                    /**
                     * 获取Whether to enable production
                     * @return PermWrite Whether to enable production
                     * 
                     */
                    bool GetPermWrite() const;

                    /**
                     * 设置Whether to enable production
                     * @param _permWrite Whether to enable production
                     * 
                     */
                    void SetPermWrite(const bool& _permWrite);

                    /**
                     * 判断参数 PermWrite 是否已赋值
                     * @return PermWrite 是否已赋值
                     * 
                     */
                    bool PermWriteHasBeenSet() const;

                    /**
                     * 获取Specifies the types of permissions. the default is to authorize by Cluster (Cluster: at the Cluster level; TopicAndGroup: topic and consumer group dimension).
                     * @return PermType Specifies the types of permissions. the default is to authorize by Cluster (Cluster: at the Cluster level; TopicAndGroup: topic and consumer group dimension).
                     * 
                     */
                    std::string GetPermType() const;

                    /**
                     * 设置Specifies the types of permissions. the default is to authorize by Cluster (Cluster: at the Cluster level; TopicAndGroup: topic and consumer group dimension).
                     * @param _permType Specifies the types of permissions. the default is to authorize by Cluster (Cluster: at the Cluster level; TopicAndGroup: topic and consumer group dimension).
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
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
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
                     * 获取Permission configuration in the topic/group dimension. It is required when the permission type parameter is set to TopicAndGroup.
                     * @return DetailedPerms Permission configuration in the topic/group dimension. It is required when the permission type parameter is set to TopicAndGroup.
                     * 
                     */
                    std::vector<DetailedRolePerm> GetDetailedPerms() const;

                    /**
                     * 设置Permission configuration in the topic/group dimension. It is required when the permission type parameter is set to TopicAndGroup.
                     * @param _detailedPerms Permission configuration in the topic/group dimension. It is required when the permission type parameter is set to TopicAndGroup.
                     * 
                     */
                    void SetDetailedPerms(const std::vector<DetailedRolePerm>& _detailedPerms);

                    /**
                     * 判断参数 DetailedPerms 是否已赋值
                     * @return DetailedPerms 是否已赋值
                     * 
                     */
                    bool DetailedPermsHasBeenSet() const;

                private:

                    /**
                     * TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.comom/document/api/1493/106745?from_cn_redirect=1) or the console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Role name. It can be obtained from [RoleItem](https://www.tencentcloud.comom/document/api/1493/96031?from_cn_redirect=1#RoleItem) returned by the API [DescribeRoleList](https://www.tencentcloud.comom/document/api/1493/98862?from_cn_redirect=1) or from the console.
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Whether to enable consumption.
                     */
                    bool m_permRead;
                    bool m_permReadHasBeenSet;

                    /**
                     * Whether to enable production
                     */
                    bool m_permWrite;
                    bool m_permWriteHasBeenSet;

                    /**
                     * Specifies the types of permissions. the default is to authorize by Cluster (Cluster: at the Cluster level; TopicAndGroup: topic and consumer group dimension).
                     */
                    std::string m_permType;
                    bool m_permTypeHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Permission configuration in the topic/group dimension. It is required when the permission type parameter is set to TopicAndGroup.
                     */
                    std::vector<DetailedRolePerm> m_detailedPerms;
                    bool m_detailedPermsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYROLEREQUEST_H_
