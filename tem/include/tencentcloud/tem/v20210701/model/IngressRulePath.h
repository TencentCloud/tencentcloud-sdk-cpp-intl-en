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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSRULEPATH_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSRULEPATH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/IngressRuleBackend.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Ingress rule path configuration
                */
                class IngressRulePath : public AbstractModel
                {
                public:
                    IngressRulePath();
                    ~IngressRulePath() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Path information
                     * @return Path Path information
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Path information
                     * @param _path Path information
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Backend configuration
                     * @return Backend Backend configuration
                     * 
                     */
                    IngressRuleBackend GetBackend() const;

                    /**
                     * 设置Backend configuration
                     * @param _backend Backend configuration
                     * 
                     */
                    void SetBackend(const IngressRuleBackend& _backend);

                    /**
                     * 判断参数 Backend 是否已赋值
                     * @return Backend 是否已赋值
                     * 
                     */
                    bool BackendHasBeenSet() const;

                private:

                    /**
                     * Path information
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Backend configuration
                     */
                    IngressRuleBackend m_backend;
                    bool m_backendHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSRULEPATH_H_
