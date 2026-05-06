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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_UPDATEUPSTREAMTARGETSREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_UPDATEUPSTREAMTARGETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KongTarget.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * UpdateUpstreamTargets request structure.
                */
                class UpdateUpstreamTargetsRequest : public AbstractModel
                {
                public:
                    UpdateUpstreamTargetsRequest();
                    ~UpdateUpstreamTargetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Gateway instance ID
                     * @return GatewayId Gateway instance ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway instance ID
                     * @param _gatewayId Gateway instance ID
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取Service name or ID
                     * @return Name Service name or ID
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Service name or ID
                     * @param _name Service name or ID
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Instance list
                     * @return Targets Instance list
                     * 
                     */
                    std::vector<KongTarget> GetTargets() const;

                    /**
                     * 设置Instance list
                     * @param _targets Instance list
                     * 
                     */
                    void SetTargets(const std::vector<KongTarget>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                private:

                    /**
                     * Gateway instance ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Service name or ID
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Instance list
                     */
                    std::vector<KongTarget> m_targets;
                    bool m_targetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_UPDATEUPSTREAMTARGETSREQUEST_H_
