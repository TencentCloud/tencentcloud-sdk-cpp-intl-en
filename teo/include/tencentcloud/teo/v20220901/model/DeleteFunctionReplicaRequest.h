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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DELETEFUNCTIONREPLICAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DELETEFUNCTIONREPLICAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DeleteFunctionReplica request structure.
                */
                class DeleteFunctionReplicaRequest : public AbstractModel
                {
                public:
                    DeleteFunctionReplicaRequest();
                    ~DeleteFunctionReplicaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Function ID.
                     * @return FunctionId Function ID.
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置Function ID.
                     * @param _functionId Function ID.
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取Copy name of the deleted function. Input in the form of a list is supported.
                     * @return ReplicaNames Copy name of the deleted function. Input in the form of a list is supported.
                     * 
                     */
                    std::vector<std::string> GetReplicaNames() const;

                    /**
                     * 设置Copy name of the deleted function. Input in the form of a list is supported.
                     * @param _replicaNames Copy name of the deleted function. Input in the form of a list is supported.
                     * 
                     */
                    void SetReplicaNames(const std::vector<std::string>& _replicaNames);

                    /**
                     * 判断参数 ReplicaNames 是否已赋值
                     * @return ReplicaNames 是否已赋值
                     * 
                     */
                    bool ReplicaNamesHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Function ID.
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * Copy name of the deleted function. Input in the form of a list is supported.
                     */
                    std::vector<std::string> m_replicaNames;
                    bool m_replicaNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DELETEFUNCTIONREPLICAREQUEST_H_
