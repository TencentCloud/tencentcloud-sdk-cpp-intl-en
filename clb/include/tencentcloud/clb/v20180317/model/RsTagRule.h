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
                     * 获取CLB listener ID.
                     * @return ListenerId CLB listener ID.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置CLB listener ID.
                     * @param _listenerId CLB listener ID.
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
                     * 获取List of real servers with tags to be modified.
                     * @return Targets List of real servers with tags to be modified.
                     * 
                     */
                    std::vector<Target> GetTargets() const;

                    /**
                     * 设置List of real servers with tags to be modified.
                     * @param _targets List of real servers with tags to be modified.
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
                     * 获取Forwarding rule ID, which is required only for Layer-7 rules but not for Layer-4 rules.
                     * @return LocationId Forwarding rule ID, which is required only for Layer-7 rules but not for Layer-4 rules.
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置Forwarding rule ID, which is required only for Layer-7 rules but not for Layer-4 rules.
                     * @param _locationId Forwarding rule ID, which is required only for Layer-7 rules but not for Layer-4 rules.
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
                     * 获取Modified Tag of the backend service. this parameter has a lower priority than the Tag parameter in the aforementioned [Target](https://www.tencentcloud.comom/document/api/214/30694?from_cn_redirect=1#Target). the final Tag value is based on the Tag parameter in the Target. the Tag parameter in RsTagRule will be used only when the Tag parameter in the Target is empty.
                     * @return Tag Modified Tag of the backend service. this parameter has a lower priority than the Tag parameter in the aforementioned [Target](https://www.tencentcloud.comom/document/api/214/30694?from_cn_redirect=1#Target). the final Tag value is based on the Tag parameter in the Target. the Tag parameter in RsTagRule will be used only when the Tag parameter in the Target is empty.
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置Modified Tag of the backend service. this parameter has a lower priority than the Tag parameter in the aforementioned [Target](https://www.tencentcloud.comom/document/api/214/30694?from_cn_redirect=1#Target). the final Tag value is based on the Tag parameter in the Target. the Tag parameter in RsTagRule will be used only when the Tag parameter in the Target is empty.
                     * @param _tag Modified Tag of the backend service. this parameter has a lower priority than the Tag parameter in the aforementioned [Target](https://www.tencentcloud.comom/document/api/214/30694?from_cn_redirect=1#Target). the final Tag value is based on the Tag parameter in the Target. the Tag parameter in RsTagRule will be used only when the Tag parameter in the Target is empty.
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
                     * CLB listener ID.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * List of real servers with tags to be modified.
                     */
                    std::vector<Target> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * Forwarding rule ID, which is required only for Layer-7 rules but not for Layer-4 rules.
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * Modified Tag of the backend service. this parameter has a lower priority than the Tag parameter in the aforementioned [Target](https://www.tencentcloud.comom/document/api/214/30694?from_cn_redirect=1#Target). the final Tag value is based on the Tag parameter in the Target. the Tag parameter in RsTagRule will be used only when the Tag parameter in the Target is empty.
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RSTAGRULE_H_
