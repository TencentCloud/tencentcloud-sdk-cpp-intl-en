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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_SEGMENTDELIVERINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_SEGMENTDELIVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/NameServer.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * SourceLocation shim configuration.
                */
                class SegmentDeliverInfo : public AbstractModel
                {
                public:
                    SegmentDeliverInfo();
                    ~SegmentDeliverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Default content source address.
                     * @return DefaultSegmentUrl Default content source address.
                     * 
                     */
                    std::string GetDefaultSegmentUrl() const;

                    /**
                     * 设置Default content source address.
                     * @param _defaultSegmentUrl Default content source address.
                     * 
                     */
                    void SetDefaultSegmentUrl(const std::string& _defaultSegmentUrl);

                    /**
                     * 判断参数 DefaultSegmentUrl 是否已赋值
                     * @return DefaultSegmentUrl 是否已赋值
                     * 
                     */
                    bool DefaultSegmentUrlHasBeenSet() const;

                    /**
                     * 获取Custom server address.
                     * @return NameServers Custom server address.
                     * 
                     */
                    std::vector<NameServer> GetNameServers() const;

                    /**
                     * 设置Custom server address.
                     * @param _nameServers Custom server address.
                     * 
                     */
                    void SetNameServers(const std::vector<NameServer>& _nameServers);

                    /**
                     * 判断参数 NameServers 是否已赋值
                     * @return NameServers 是否已赋值
                     * 
                     */
                    bool NameServersHasBeenSet() const;

                private:

                    /**
                     * Default content source address.
                     */
                    std::string m_defaultSegmentUrl;
                    bool m_defaultSegmentUrlHasBeenSet;

                    /**
                     * Custom server address.
                     */
                    std::vector<NameServer> m_nameServers;
                    bool m_nameServersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_SEGMENTDELIVERINFO_H_
