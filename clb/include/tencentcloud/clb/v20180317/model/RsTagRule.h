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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_RSTAGRULE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_RSTAGRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Target.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Data type of the modified node tag.
                */
                class RsTagRule : public AbstractModel
                {
                public:
                    RsTagRule();
                    ~RsTagRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>CLB listener ID.</p>
                     * @return ListenerId <p>CLB listener ID.</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>CLB listener ID.</p>
                     * @param _listenerId <p>CLB listener ID.</p>
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取<p>List of real servers with tags to be modified.</p>
                     * @return Targets <p>List of real servers with tags to be modified.</p>
                     * 
                     */
                    std::vector<Target> GetTargets() const;

                    /**
                     * 设置<p>List of real servers with tags to be modified.</p>
                     * @param _targets <p>List of real servers with tags to be modified.</p>
                     * 
                     */
                    void SetTargets(const std::vector<Target>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取<p>Forwarding rule ID, required for layer-7 rules, not required for layer-4 rules.</p>
                     * @return LocationId <p>Forwarding rule ID, required for layer-7 rules, not required for layer-4 rules.</p>
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置<p>Forwarding rule ID, required for layer-7 rules, not required for layer-4 rules.</p>
                     * @param _locationId <p>Forwarding rule ID, required for layer-7 rules, not required for layer-4 rules.</p>
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取<p>Modified tag of the backend service. This parameter has a lower priority than the Tag parameter in the aforementioned <a href="https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#Target">Target</a>. The final tag value is based on the Tag parameter in the Target. The Tag parameter in RsTagRule will be used only when the Tag parameter in the Target is empty.</p>
                     * @return Tag <p>Modified tag of the backend service. This parameter has a lower priority than the Tag parameter in the aforementioned <a href="https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#Target">Target</a>. The final tag value is based on the Tag parameter in the Target. The Tag parameter in RsTagRule will be used only when the Tag parameter in the Target is empty.</p>
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置<p>Modified tag of the backend service. This parameter has a lower priority than the Tag parameter in the aforementioned <a href="https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#Target">Target</a>. The final tag value is based on the Tag parameter in the Target. The Tag parameter in RsTagRule will be used only when the Tag parameter in the Target is empty.</p>
                     * @param _tag <p>Modified tag of the backend service. This parameter has a lower priority than the Tag parameter in the aforementioned <a href="https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#Target">Target</a>. The final tag value is based on the Tag parameter in the Target. The Tag parameter in RsTagRule will be used only when the Tag parameter in the Target is empty.</p>
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * <p>CLB listener ID.</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>List of real servers with tags to be modified.</p>
                     */
                    std::vector<Target> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * <p>Forwarding rule ID, required for layer-7 rules, not required for layer-4 rules.</p>
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * <p>Modified tag of the backend service. This parameter has a lower priority than the Tag parameter in the aforementioned <a href="https://www.tencentcloud.com/document/api/214/30694?from_cn_redirect=1#Target">Target</a>. The final tag value is based on the Tag parameter in the Target. The Tag parameter in RsTagRule will be used only when the Tag parameter in the Target is empty.</p>
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RSTAGRULE_H_
