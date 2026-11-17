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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ROTATECLUSTERTOKENREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ROTATECLUSTERTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * RotateClusterToken request structure.
                */
                class RotateClusterTokenRequest : public AbstractModel
                {
                public:
                    RotateClusterTokenRequest();
                    ~RotateClusterTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterId <p>Cluster ID.</p>
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
                     * 获取<p>Cluster type. Valid values: TKEServerless and TKE. Default value: TKE.</p>
                     * @return ClusterType <p>Cluster type. Valid values: TKEServerless and TKE. Default value: TKE.</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>Cluster type. Valid values: TKEServerless and TKE. Default value: TKE.</p>
                     * @param _clusterType <p>Cluster type. Valid values: TKEServerless and TKE. Default value: TKE.</p>
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>Operation to perform. Valid values: CreateNewToken, RevokeOldToken, and RecoverOldToken.<br>CreateNewToken: Creates a new token and makes it take effect. By default, a maximum of two tokens can take effect at the same time. If you want more tokens to take effect, Force must be set to true.<br>RevokeOldToken: Deletes the old token and makes it invalid. In this case, ClusterToken is required.<br>RecoverOldToken: Recovers the old token and makes it take effect. In this case, ClusterToken is required, and this operation can be called only when there is a corresponding RevokeOldToken task that has succeeded.</p>
                     * @return Operation <p>Operation to perform. Valid values: CreateNewToken, RevokeOldToken, and RecoverOldToken.<br>CreateNewToken: Creates a new token and makes it take effect. By default, a maximum of two tokens can take effect at the same time. If you want more tokens to take effect, Force must be set to true.<br>RevokeOldToken: Deletes the old token and makes it invalid. In this case, ClusterToken is required.<br>RecoverOldToken: Recovers the old token and makes it take effect. In this case, ClusterToken is required, and this operation can be called only when there is a corresponding RevokeOldToken task that has succeeded.</p>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置<p>Operation to perform. Valid values: CreateNewToken, RevokeOldToken, and RecoverOldToken.<br>CreateNewToken: Creates a new token and makes it take effect. By default, a maximum of two tokens can take effect at the same time. If you want more tokens to take effect, Force must be set to true.<br>RevokeOldToken: Deletes the old token and makes it invalid. In this case, ClusterToken is required.<br>RecoverOldToken: Recovers the old token and makes it take effect. In this case, ClusterToken is required, and this operation can be called only when there is a corresponding RevokeOldToken task that has succeeded.</p>
                     * @param _operation <p>Operation to perform. Valid values: CreateNewToken, RevokeOldToken, and RecoverOldToken.<br>CreateNewToken: Creates a new token and makes it take effect. By default, a maximum of two tokens can take effect at the same time. If you want more tokens to take effect, Force must be set to true.<br>RevokeOldToken: Deletes the old token and makes it invalid. In this case, ClusterToken is required.<br>RecoverOldToken: Recovers the old token and makes it take effect. In this case, ClusterToken is required, and this operation can be called only when there is a corresponding RevokeOldToken task that has succeeded.</p>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取<p>Cluster token. It is required only when Operation is set to RevokeOldToken or RecoverOldToken.</p>
                     * @return ClusterToken <p>Cluster token. It is required only when Operation is set to RevokeOldToken or RecoverOldToken.</p>
                     * 
                     */
                    std::string GetClusterToken() const;

                    /**
                     * 设置<p>Cluster token. It is required only when Operation is set to RevokeOldToken or RecoverOldToken.</p>
                     * @param _clusterToken <p>Cluster token. It is required only when Operation is set to RevokeOldToken or RecoverOldToken.</p>
                     * 
                     */
                    void SetClusterToken(const std::string& _clusterToken);

                    /**
                     * 判断参数 ClusterToken 是否已赋值
                     * @return ClusterToken 是否已赋值
                     * 
                     */
                    bool ClusterTokenHasBeenSet() const;

                    /**
                     * 获取<p>Default value: false. It is required only when Operation is set to CreateNewToken. Only when it is set to true can more than two tokens take effect.</p>
                     * @return Force <p>Default value: false. It is required only when Operation is set to CreateNewToken. Only when it is set to true can more than two tokens take effect.</p>
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置<p>Default value: false. It is required only when Operation is set to CreateNewToken. Only when it is set to true can more than two tokens take effect.</p>
                     * @param _force <p>Default value: false. It is required only when Operation is set to CreateNewToken. Only when it is set to true can more than two tokens take effect.</p>
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Cluster type. Valid values: TKEServerless and TKE. Default value: TKE.</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>Operation to perform. Valid values: CreateNewToken, RevokeOldToken, and RecoverOldToken.<br>CreateNewToken: Creates a new token and makes it take effect. By default, a maximum of two tokens can take effect at the same time. If you want more tokens to take effect, Force must be set to true.<br>RevokeOldToken: Deletes the old token and makes it invalid. In this case, ClusterToken is required.<br>RecoverOldToken: Recovers the old token and makes it take effect. In this case, ClusterToken is required, and this operation can be called only when there is a corresponding RevokeOldToken task that has succeeded.</p>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * <p>Cluster token. It is required only when Operation is set to RevokeOldToken or RecoverOldToken.</p>
                     */
                    std::string m_clusterToken;
                    bool m_clusterTokenHasBeenSet;

                    /**
                     * <p>Default value: false. It is required only when Operation is set to CreateNewToken. Only when it is set to true can more than two tokens take effect.</p>
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ROTATECLUSTERTOKENREQUEST_H_
