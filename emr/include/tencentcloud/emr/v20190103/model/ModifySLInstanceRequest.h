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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYSLINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYSLINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifySLInstance request structure.
                */
                class ModifySLInstanceRequest : public AbstractModel
                {
                public:
                    ModifySLInstanceRequest();
                    ~ModifySLInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance unique identifier (string).
                     * @return InstanceId Instance unique identifier (string).
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance unique identifier (string).
                     * @param _instanceId Instance unique identifier (string).
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
                     * 获取Region name to be changed.
                     * @return Zone Region name to be changed.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Region name to be changed.
                     * @param _zone Region name to be changed.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Target node count after configuration change in this region. The total number of nodes across all regions should be greater than or equal to 3 and less than or equal to 50.
                     * @return NodeNum Target node count after configuration change in this region. The total number of nodes across all regions should be greater than or equal to 3 and less than or equal to 50.
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置Target node count after configuration change in this region. The total number of nodes across all regions should be greater than or equal to 3 and less than or equal to 50.
                     * @param _nodeNum Target node count after configuration change in this region. The total number of nodes across all regions should be greater than or equal to 3 and less than or equal to 50.
                     * 
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取The unique random identifier with a time efficiency of 5 minutes, which needs to be specified by the caller to prevent the client from creating resources repeatedly. For example: a9a90aa6-****-****-****-fae360632808.
                     * @return ClientToken The unique random identifier with a time efficiency of 5 minutes, which needs to be specified by the caller to prevent the client from creating resources repeatedly. For example: a9a90aa6-****-****-****-fae360632808.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置The unique random identifier with a time efficiency of 5 minutes, which needs to be specified by the caller to prevent the client from creating resources repeatedly. For example: a9a90aa6-****-****-****-fae360632808.
                     * @param _clientToken The unique random identifier with a time efficiency of 5 minutes, which needs to be specified by the caller to prevent the client from creating resources repeatedly. For example: a9a90aa6-****-****-****-fae360632808.
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * Instance unique identifier (string).
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Region name to be changed.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Target node count after configuration change in this region. The total number of nodes across all regions should be greater than or equal to 3 and less than or equal to 50.
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * The unique random identifier with a time efficiency of 5 minutes, which needs to be specified by the caller to prevent the client from creating resources repeatedly. For example: a9a90aa6-****-****-****-fae360632808.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYSLINSTANCEREQUEST_H_
