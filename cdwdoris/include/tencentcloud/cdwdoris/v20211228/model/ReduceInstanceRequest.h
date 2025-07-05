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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_REDUCEINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_REDUCEINSTANCEREQUEST_H_

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
                * ReduceInstance request structure.
                */
                class ReduceInstanceRequest : public AbstractModel
                {
                public:
                    ReduceInstanceRequest();
                    ~ReduceInstanceRequest() = default;
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
                     * 获取Node list
                     * @return DelHosts Node list
                     * 
                     */
                    std::vector<std::string> GetDelHosts() const;

                    /**
                     * 设置Node list
                     * @param _delHosts Node list
                     * 
                     */
                    void SetDelHosts(const std::vector<std::string>& _delHosts);

                    /**
                     * 判断参数 DelHosts 是否已赋值
                     * @return DelHosts 是否已赋值
                     * 
                     */
                    bool DelHostsHasBeenSet() const;

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
                     * 获取High availability cluster type after scale-in. 0: non-high availability; 1: read high availability; 2: read-write high availability
                     * @return HaType High availability cluster type after scale-in. 0: non-high availability; 1: read high availability; 2: read-write high availability
                     * 
                     */
                    int64_t GetHaType() const;

                    /**
                     * 设置High availability cluster type after scale-in. 0: non-high availability; 1: read high availability; 2: read-write high availability
                     * @param _haType High availability cluster type after scale-in. 0: non-high availability; 1: read high availability; 2: read-write high availability
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
                     * Node list
                     */
                    std::vector<std::string> m_delHosts;
                    bool m_delHostsHasBeenSet;

                    /**
                     * Role (MATER/CORE), MASTER corresponds to FE, CORE corresponds to BE.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * High availability cluster type after scale-in. 0: non-high availability; 1: read high availability; 2: read-write high availability
                     */
                    int64_t m_haType;
                    bool m_haTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_REDUCEINSTANCEREQUEST_H_
