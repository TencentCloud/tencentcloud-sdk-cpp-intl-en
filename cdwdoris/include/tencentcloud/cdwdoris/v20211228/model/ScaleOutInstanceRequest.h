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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SCALEOUTINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SCALEOUTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ScaleOutInstance request structure.
                */
                class ScaleOutInstanceRequest : public AbstractModel
                {
                public:
                    ScaleOutInstanceRequest();
                    ~ScaleOutInstanceRequest() = default;
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
                     * 获取Role (MATER/CORE), MASTER corresponds to FE, CORE corresponds to BE.
                     * @return Type Role (MATER/CORE), MASTER corresponds to FE, CORE corresponds to BE.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Role (MATER/CORE), MASTER corresponds to FE, CORE corresponds to BE.
                     * @param _type Role (MATER/CORE), MASTER corresponds to FE, CORE corresponds to BE.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Number of nodes
                     * @return NodeCount Number of nodes
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置Number of nodes
                     * @param _nodeCount Number of nodes
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取Cluster high availability type after scaled out: 0 indicates non-high availability, 1 indicates read high availability, and 2 indicates read-write high availability.
                     * @return HaType Cluster high availability type after scaled out: 0 indicates non-high availability, 1 indicates read high availability, and 2 indicates read-write high availability.
                     * 
                     */
                    int64_t GetHaType() const;

                    /**
                     * 设置Cluster high availability type after scaled out: 0 indicates non-high availability, 1 indicates read high availability, and 2 indicates read-write high availability.
                     * @param _haType Cluster high availability type after scaled out: 0 indicates non-high availability, 1 indicates read high availability, and 2 indicates read-write high availability.
                     * 
                     */
                    void SetHaType(const int64_t& _haType);

                    /**
                     * 判断参数 HaType 是否已赋值
                     * @return HaType 是否已赋值
                     * 
                     */
                    bool HaTypeHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Role (MATER/CORE), MASTER corresponds to FE, CORE corresponds to BE.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Number of nodes
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Cluster high availability type after scaled out: 0 indicates non-high availability, 1 indicates read high availability, and 2 indicates read-write high availability.
                     */
                    int64_t m_haType;
                    bool m_haTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SCALEOUTINSTANCEREQUEST_H_
