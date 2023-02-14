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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_REGISTERCPTREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_REGISTERCPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * RegisterCpt request structure.
                */
                class RegisterCptRequest : public AbstractModel
                {
                public:
                    RegisterCptRequest();
                    ~RegisterCptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The group ID.
                     * @return GroupId The group ID.
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置The group ID.
                     * @param GroupId The group ID.
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取The network ID.
                     * @return ClusterId The network ID.
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置The network ID.
                     * @param ClusterId The network ID.
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取The JSON data of the credential claim type (CPT).
                     * @return CptJson The JSON data of the credential claim type (CPT).
                     */
                    std::string GetCptJson() const;

                    /**
                     * 设置The JSON data of the credential claim type (CPT).
                     * @param CptJson The JSON data of the credential claim type (CPT).
                     */
                    void SetCptJson(const std::string& _cptJson);

                    /**
                     * 判断参数 CptJson 是否已赋值
                     * @return CptJson 是否已赋值
                     */
                    bool CptJsonHasBeenSet() const;

                    /**
                     * 获取If you do not specify this, the ID will auto increment.
                     * @return CptId If you do not specify this, the ID will auto increment.
                     */
                    uint64_t GetCptId() const;

                    /**
                     * 设置If you do not specify this, the ID will auto increment.
                     * @param CptId If you do not specify this, the ID will auto increment.
                     */
                    void SetCptId(const uint64_t& _cptId);

                    /**
                     * 判断参数 CptId 是否已赋值
                     * @return CptId 是否已赋值
                     */
                    bool CptIdHasBeenSet() const;

                private:

                    /**
                     * The group ID.
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * The network ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The JSON data of the credential claim type (CPT).
                     */
                    std::string m_cptJson;
                    bool m_cptJsonHasBeenSet;

                    /**
                     * If you do not specify this, the ID will auto increment.
                     */
                    uint64_t m_cptId;
                    bool m_cptIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_REGISTERCPTREQUEST_H_
