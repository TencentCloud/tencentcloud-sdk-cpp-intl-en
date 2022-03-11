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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULENETWORKREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULENETWORKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifyModuleNetwork request structure.
                */
                class ModifyModuleNetworkRequest : public AbstractModel
                {
                public:
                    ModifyModuleNetworkRequest();
                    ~ModifyModuleNetworkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Module ID
                     * @return ModuleId Module ID
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置Module ID
                     * @param ModuleId Module ID
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取Default outbound bandwidth cap
                     * @return DefaultBandwidth Default outbound bandwidth cap
                     */
                    int64_t GetDefaultBandwidth() const;

                    /**
                     * 设置Default outbound bandwidth cap
                     * @param DefaultBandwidth Default outbound bandwidth cap
                     */
                    void SetDefaultBandwidth(const int64_t& _defaultBandwidth);

                    /**
                     * 判断参数 DefaultBandwidth 是否已赋值
                     * @return DefaultBandwidth 是否已赋值
                     */
                    bool DefaultBandwidthHasBeenSet() const;

                    /**
                     * 获取Default inbound bandwidth cap
                     * @return DefaultBandwidthIn Default inbound bandwidth cap
                     */
                    int64_t GetDefaultBandwidthIn() const;

                    /**
                     * 设置Default inbound bandwidth cap
                     * @param DefaultBandwidthIn Default inbound bandwidth cap
                     */
                    void SetDefaultBandwidthIn(const int64_t& _defaultBandwidthIn);

                    /**
                     * 判断参数 DefaultBandwidthIn 是否已赋值
                     * @return DefaultBandwidthIn 是否已赋值
                     */
                    bool DefaultBandwidthInHasBeenSet() const;

                private:

                    /**
                     * Module ID
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * Default outbound bandwidth cap
                     */
                    int64_t m_defaultBandwidth;
                    bool m_defaultBandwidthHasBeenSet;

                    /**
                     * Default inbound bandwidth cap
                     */
                    int64_t m_defaultBandwidthIn;
                    bool m_defaultBandwidthInHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULENETWORKREQUEST_H_
