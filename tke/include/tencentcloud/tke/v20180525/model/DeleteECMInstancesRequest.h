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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETEECMINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETEECMINSTANCESREQUEST_H_

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
                * DeleteECMInstances request structure.
                */
                class DeleteECMInstancesRequest : public AbstractModel
                {
                public:
                    DeleteECMInstancesRequest();
                    ~DeleteECMInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterID Cluster ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterID Cluster ID
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取IDs of ECMs to be deleted
                     * @return EcmIdSet IDs of ECMs to be deleted
                     * 
                     */
                    std::vector<std::string> GetEcmIdSet() const;

                    /**
                     * 设置IDs of ECMs to be deleted
                     * @param _ecmIdSet IDs of ECMs to be deleted
                     * 
                     */
                    void SetEcmIdSet(const std::vector<std::string>& _ecmIdSet);

                    /**
                     * 判断参数 EcmIdSet 是否已赋值
                     * @return EcmIdSet 是否已赋值
                     * 
                     */
                    bool EcmIdSetHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * IDs of ECMs to be deleted
                     */
                    std::vector<std::string> m_ecmIdSet;
                    bool m_ecmIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETEECMINSTANCESREQUEST_H_
