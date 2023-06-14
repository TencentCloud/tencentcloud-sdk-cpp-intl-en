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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETEEDGECVMINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETEEDGECVMINSTANCESREQUEST_H_

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
                * DeleteEdgeCVMInstances request structure.
                */
                class DeleteEdgeCVMInstancesRequest : public AbstractModel
                {
                public:
                    DeleteEdgeCVMInstancesRequest();
                    ~DeleteEdgeCVMInstancesRequest() = default;
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
                     * 获取IDs of CVMs to be deleted
                     * @return CvmIdSet IDs of CVMs to be deleted
                     * 
                     */
                    std::vector<std::string> GetCvmIdSet() const;

                    /**
                     * 设置IDs of CVMs to be deleted
                     * @param _cvmIdSet IDs of CVMs to be deleted
                     * 
                     */
                    void SetCvmIdSet(const std::vector<std::string>& _cvmIdSet);

                    /**
                     * 判断参数 CvmIdSet 是否已赋值
                     * @return CvmIdSet 是否已赋值
                     * 
                     */
                    bool CvmIdSetHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * IDs of CVMs to be deleted
                     */
                    std::vector<std::string> m_cvmIdSet;
                    bool m_cvmIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETEEDGECVMINSTANCESREQUEST_H_
