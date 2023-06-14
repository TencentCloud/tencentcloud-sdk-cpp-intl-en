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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_REWRITELOCATIONMAP_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_REWRITELOCATIONMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Redirection relationship between forwarding rules
                */
                class RewriteLocationMap : public AbstractModel
                {
                public:
                    RewriteLocationMap();
                    ~RewriteLocationMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source forwarding rule ID
                     * @return SourceLocationId Source forwarding rule ID
                     * 
                     */
                    std::string GetSourceLocationId() const;

                    /**
                     * 设置Source forwarding rule ID
                     * @param _sourceLocationId Source forwarding rule ID
                     * 
                     */
                    void SetSourceLocationId(const std::string& _sourceLocationId);

                    /**
                     * 判断参数 SourceLocationId 是否已赋值
                     * @return SourceLocationId 是否已赋值
                     * 
                     */
                    bool SourceLocationIdHasBeenSet() const;

                    /**
                     * 获取Forwarding rule ID of a redirect target
                     * @return TargetLocationId Forwarding rule ID of a redirect target
                     * 
                     */
                    std::string GetTargetLocationId() const;

                    /**
                     * 设置Forwarding rule ID of a redirect target
                     * @param _targetLocationId Forwarding rule ID of a redirect target
                     * 
                     */
                    void SetTargetLocationId(const std::string& _targetLocationId);

                    /**
                     * 判断参数 TargetLocationId 是否已赋值
                     * @return TargetLocationId 是否已赋值
                     * 
                     */
                    bool TargetLocationIdHasBeenSet() const;

                    /**
                     * 获取Redirection status code. Valid values: 301, 302, and 307.
                     * @return RewriteCode Redirection status code. Valid values: 301, 302, and 307.
                     * 
                     */
                    int64_t GetRewriteCode() const;

                    /**
                     * 设置Redirection status code. Valid values: 301, 302, and 307.
                     * @param _rewriteCode Redirection status code. Valid values: 301, 302, and 307.
                     * 
                     */
                    void SetRewriteCode(const int64_t& _rewriteCode);

                    /**
                     * 判断参数 RewriteCode 是否已赋值
                     * @return RewriteCode 是否已赋值
                     * 
                     */
                    bool RewriteCodeHasBeenSet() const;

                    /**
                     * 获取Whether the matched URL is carried in redirection. It is required when configuring `RewriteCode`.
                     * @return TakeUrl Whether the matched URL is carried in redirection. It is required when configuring `RewriteCode`.
                     * 
                     */
                    bool GetTakeUrl() const;

                    /**
                     * 设置Whether the matched URL is carried in redirection. It is required when configuring `RewriteCode`.
                     * @param _takeUrl Whether the matched URL is carried in redirection. It is required when configuring `RewriteCode`.
                     * 
                     */
                    void SetTakeUrl(const bool& _takeUrl);

                    /**
                     * 判断参数 TakeUrl 是否已赋值
                     * @return TakeUrl 是否已赋值
                     * 
                     */
                    bool TakeUrlHasBeenSet() const;

                    /**
                     * 获取Original domain name of redirection, which must be the corresponding domain name of `SourceLocationId`. It is required when configuring `RewriteCode`.
                     * @return SourceDomain Original domain name of redirection, which must be the corresponding domain name of `SourceLocationId`. It is required when configuring `RewriteCode`.
                     * 
                     */
                    std::string GetSourceDomain() const;

                    /**
                     * 设置Original domain name of redirection, which must be the corresponding domain name of `SourceLocationId`. It is required when configuring `RewriteCode`.
                     * @param _sourceDomain Original domain name of redirection, which must be the corresponding domain name of `SourceLocationId`. It is required when configuring `RewriteCode`.
                     * 
                     */
                    void SetSourceDomain(const std::string& _sourceDomain);

                    /**
                     * 判断参数 SourceDomain 是否已赋值
                     * @return SourceDomain 是否已赋值
                     * 
                     */
                    bool SourceDomainHasBeenSet() const;

                private:

                    /**
                     * Source forwarding rule ID
                     */
                    std::string m_sourceLocationId;
                    bool m_sourceLocationIdHasBeenSet;

                    /**
                     * Forwarding rule ID of a redirect target
                     */
                    std::string m_targetLocationId;
                    bool m_targetLocationIdHasBeenSet;

                    /**
                     * Redirection status code. Valid values: 301, 302, and 307.
                     */
                    int64_t m_rewriteCode;
                    bool m_rewriteCodeHasBeenSet;

                    /**
                     * Whether the matched URL is carried in redirection. It is required when configuring `RewriteCode`.
                     */
                    bool m_takeUrl;
                    bool m_takeUrlHasBeenSet;

                    /**
                     * Original domain name of redirection, which must be the corresponding domain name of `SourceLocationId`. It is required when configuring `RewriteCode`.
                     */
                    std::string m_sourceDomain;
                    bool m_sourceDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_REWRITELOCATIONMAP_H_
